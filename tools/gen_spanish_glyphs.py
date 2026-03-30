#!/usr/bin/env python3
"""
Generate Spanish glyph data from font_atlas.png for BK Spanish mod.
Extracts 8 glyphs (Á,É,Í,Ó,Ú,Ñ,¿,¡) and converts to CI8 format.
Output: C header with glyph texture blocks.
"""
from PIL import Image
import sys, os

# Font atlas layout: 800x800, ~16 chars per row, ~50px per cell
# Row 1: !"#$%&'()*+,-./01234  (0x21-0x34)
# Row 2: 56789:;<=>?@ABCDEF    (0x35-0x46)
# Row 3: GHIJKLMNOPQRSTUV      (0x47-0x56)
# Row 4: WXYZ[\]^_`abcdefghijk (0x57-0x6B)
# Row 5: lmnopqrstuvwxyz{|}~   (0x6C-0x7E) + extended
# ...continuing Latin-1 supplement from ~0xA0

ATLAS_PATH = os.path.join(os.path.dirname(__file__), '..', 'font_atlas.png')
OUTPUT_PATH = os.path.join(os.path.dirname(__file__), '..', 'include', 'spanish_glyphs.h')

# Characters we need and their Latin-1 byte values
SPANISH_CHARS = [
    (0xA1, '¡'),
    (0xBF, '¿'),
    (0xC1, 'Á'),
    (0xC9, 'É'),
    (0xCD, 'Í'),
    (0xD1, 'Ñ'),
    (0xD3, 'Ó'),
    (0xDA, 'Ú'),
]

def find_glyph_positions(img):
    """Find glyph positions by scanning for non-black pixels in each row."""
    w, h = img.size
    pixels = img.load()

    # The atlas has characters arranged in rows
    # Each character starts at 0x21 and goes sequentially
    # We need to find the position of each character by its byte value

    # Scan rows to find character boundaries
    rows = []
    in_row = False
    row_start = 0

    for y in range(h):
        has_content = False
        for x in range(w):
            r, g, b, a = pixels[x, y]
            if a > 50 and (r > 50 or g > 50 or b > 50):
                has_content = True
                break
        if has_content and not in_row:
            row_start = y
            in_row = True
        elif not has_content and in_row:
            rows.append((row_start, y))
            in_row = False
    if in_row:
        rows.append((row_start, h))

    print(f"Found {len(rows)} glyph rows")
    for i, (ys, ye) in enumerate(rows):
        print(f"  Row {i}: y={ys}-{ye} (h={ye-ys})")

    # For each row, find column boundaries
    all_glyphs = []
    for row_idx, (row_y_start, row_y_end) in enumerate(rows):
        cols = []
        in_col = False
        col_start = 0

        for x in range(w):
            has_content = False
            for y in range(row_y_start, row_y_end):
                r, g, b, a = pixels[x, y]
                if a > 50 and (r > 50 or g > 50 or b > 50):
                    has_content = True
                    break
            if has_content and not in_col:
                col_start = x
                in_col = True
            elif not has_content and in_col:
                cols.append((col_start, x))
                in_col = False
        if in_col:
            cols.append((col_start, w))

        for cx, (col_start, col_end) in enumerate(cols):
            char_idx = len(all_glyphs)
            byte_val = 0x21 + char_idx  # Characters start at 0x21
            all_glyphs.append({
                'byte': byte_val,
                'x': col_start, 'y': row_y_start,
                'w': col_end - col_start, 'h': row_y_end - row_y_start,
                'row': row_idx, 'col': cx
            })

    print(f"\nTotal glyphs found: {len(all_glyphs)}")

    # Show some reference glyphs
    for g in all_glyphs[:5]:
        print(f"  0x{g['byte']:02X} '{chr(g['byte']) if g['byte'] < 128 else '?'}': ({g['x']},{g['y']}) {g['w']}x{g['h']}")

    return all_glyphs

def extract_glyph_i4(img, glyph_info):
    """Extract a glyph as I4 (4-bit intensity) data."""
    pixels = img.load()
    x0, y0 = glyph_info['x'], glyph_info['y']
    w, h = glyph_info['w'], glyph_info['h']

    # Convert to 4-bit intensity
    i4_data = []
    for y in range(y0, y0 + h):
        for x in range(x0, x0 + w):
            r, g, b, a = pixels[x, y]
            # Intensity = average of RGB, scaled by alpha
            intensity = int(((r + g + b) / 3) * (a / 255))
            i4 = intensity >> 4  # 8-bit to 4-bit
            i4_data.append(i4)

    # Pack pairs of 4-bit values into bytes
    packed = []
    for i in range(0, len(i4_data), 2):
        hi = i4_data[i] if i < len(i4_data) else 0
        lo = i4_data[i+1] if i+1 < len(i4_data) else 0
        packed.append((hi << 4) | lo)

    return bytes(packed), w, h

def main():
    img = Image.open(ATLAS_PATH).convert('RGBA')
    print(f"Atlas size: {img.size}")

    all_glyphs = find_glyph_positions(img)

    # Find our Spanish characters
    spanish_glyphs = []
    for byte_val, char_name in SPANISH_CHARS:
        idx = byte_val - 0x21
        if idx < len(all_glyphs):
            g = all_glyphs[idx]
            print(f"\n{char_name} (0x{byte_val:02X}): glyph #{idx}, pos=({g['x']},{g['y']}), size={g['w']}x{g['h']}")
            pixel_data, w, h = extract_glyph_i4(img, g)
            spanish_glyphs.append({
                'byte': byte_val,
                'char': char_name,
                'w': w, 'h': h,
                'data': pixel_data
            })
        else:
            print(f"\n{char_name} (0x{byte_val:02X}): NOT FOUND (index {idx} > {len(all_glyphs)})")

    # Generate C header
    with open(OUTPUT_PATH, 'w') as f:
        f.write("/* Auto-generated Spanish glyph data - DO NOT EDIT */\n")
        f.write("#ifndef SPANISH_GLYPHS_H\n#define SPANISH_GLYPHS_H\n\n")
        f.write("#include <ultra64.h>\n\n")
        f.write(f"#define SPANISH_GLYPH_COUNT {len(spanish_glyphs)}\n\n")

        # Glyph mapping table
        f.write("/* Map Latin-1 byte to spanish glyph index (0-7), -1 if not mapped */\n")
        f.write("static s8 spanish_glyph_map[256];\n\n")

        # Texture blocks + pixel data for each glyph
        for i, g in enumerate(spanish_glyphs):
            name = f"sg_{g['byte']:02x}"
            f.write(f"/* {g['char']} (0x{g['byte']:02X}) - {g['w']}x{g['h']} I4 */\n")

            # BKSpriteTextureBlock header (x, y, w, h) = 8 bytes
            # followed by pixel data (aligned to 8 bytes)
            total_size = 8 + len(g['data'])
            # Pad to 8-byte alignment
            pad = (8 - (total_size % 8)) % 8

            f.write(f"static u8 {name}_block[] __attribute__((aligned(8))) = {{\n")
            # Header: x=0, y=0, w, h (big-endian s16)
            f.write(f"    0x00, 0x00, 0x00, 0x00, ")  # x=0, y=0
            f.write(f"0x{(g['w'] >> 8) & 0xFF:02X}, 0x{g['w'] & 0xFF:02X}, ")  # w
            f.write(f"0x{(g['h'] >> 8) & 0xFF:02X}, 0x{g['h'] & 0xFF:02X},\n")  # h

            # Pixel data
            for j in range(0, len(g['data']), 16):
                chunk = g['data'][j:j+16]
                hex_str = ', '.join(f'0x{b:02X}' for b in chunk)
                f.write(f"    {hex_str},\n")

            # Padding
            if pad > 0:
                f.write(f"    /* pad */ {', '.join(['0x00'] * pad)}\n")

            f.write(f"}};\n\n")

        # Summary table
        f.write("typedef struct { u8 byte_val; u8 *block; s16 w; } SpanishGlyph;\n\n")
        f.write("static SpanishGlyph spanish_glyphs[] = {\n")
        for g in spanish_glyphs:
            name = f"sg_{g['byte']:02x}"
            f.write(f"    {{ 0x{g['byte']:02X}, {name}_block, {g['w']} }},\n")
        f.write("};\n\n")

        f.write("#endif\n")

    print(f"\nGenerated: {OUTPUT_PATH}")
    print(f"Glyphs: {len(spanish_glyphs)}")

if __name__ == '__main__':
    main()
