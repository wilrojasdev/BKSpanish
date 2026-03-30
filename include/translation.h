#ifndef TRANSLATION_H
#define TRANSLATION_H

#include <ultra64.h>

// A single line of dialog: portrait + text
typedef struct {
    u8 portrait;       // portrait byte or control command
    const char *text;  // text string (can be "" for control commands)
} DialogLine;

// A complete dialog definition
typedef struct {
    s32 asset_id;
    DialogLine *bottom;
    s32 bottom_count;
    DialogLine *top;
    s32 top_count;
    u8 *built_data;     // full asset binary (header + dialog data), filled at init
    s32 built_size;     // size of built_data in bytes
} DialogDef;

// Table of dialog definitions for a world
typedef struct {
    DialogDef *defs;
    s32 count;
} DialogDefTable;

// Build all dialog binaries for a table (call at init)
void translation_build_table(DialogDefTable *table);

// Portrait constants
#define BOTTLES      0x83  // ZOOMBOX_SPRITE_F
#define BANJO        0x80  // ZOOMBOX_SPRITE_C
#define KAZOOIE      0x81  // ZOOMBOX_SPRITE_D
#define TOOTY       0x82  // ZOOMBOX_SPRITE_E
#define MUMBO        0x84  // ZOOMBOX_SPRITE_10
#define JIGGY_PORT   0xA3  // Jiggy celebration sprite

// Control command constants (bytes 0x01-0x1F become negative cmd values)
#define DIALOG_CLOSE_MIN     0x02  // cmd -2: close and minimize
#define DIALOG_CLOSE         0x03  // cmd -3: close dialog, wait for A/B
#define DIALOG_CLOSE_ALT     0x04  // cmd -4: minimize and close
#define DIALOG_MINIMIZE      0x05  // cmd -5: minimize
#define DIALOG_COND_MINIMIZE 0x06  // cmd -6: conditional minimize
#define DIALOG_TRIGGER       0x07  // cmd -7: trigger callback

// World tables
extern DialogDefTable sm_table;
extern DialogDefTable core_table;
extern DialogDefTable mumbo_table;
extern DialogDefTable mm_table;
extern DialogDefTable ttc_table;
extern DialogDefTable cc_table;
extern DialogDefTable bgs_table;
extern DialogDefTable gv_table;
extern DialogDefTable mmm_table;
extern DialogDefTable rbb_table;
extern DialogDefTable ccw_table;
extern DialogDefTable lair_table;
extern DialogDefTable fp_table;
extern DialogDefTable misc_table;
extern DialogDefTable taunts_table;
extern DialogDefTable brentilda_table;
extern DialogDefTable parade_table;
extern DialogDefTable puzzleboard_table;
extern DialogDefTable quiz1_table;
extern DialogDefTable quiz2_table;
extern DialogDefTable quiz3_table;

#endif
