#include "engines/machines.h"


  /* RHYTHM TOY - GAME ENGINE DATA */


extern const struct Animation anim_cat_machine_button_a[];
extern const struct Animation anim_love_machine_button_a[];
extern const struct Animation anim_rap_machine_button_a[];
extern const struct Animation anim_cat_machine_button_b[];
extern const struct Animation anim_love_machine_button_b[];
extern const struct Animation anim_rap_machine_button_b[];
extern const struct Animation anim_cat_machine_button_up[];
extern const struct Animation anim_love_machine_button_up[];
extern const struct Animation anim_rap_machine_button_up[];
extern const struct Animation anim_cat_machine_button_down[];
extern const struct Animation anim_love_machine_button_down[];
extern const struct Animation anim_rap_machine_button_down[];
extern const struct Animation anim_cat_machine_button_left[];
extern const struct Animation anim_love_machine_button_left[];
extern const struct Animation anim_rap_machine_button_left[];
extern const struct Animation anim_cat_machine_button_right[];
extern const struct Animation anim_love_machine_button_right[];
extern const struct Animation anim_rap_machine_button_right[];
extern const struct Animation anim_cat_machine_demo_icon[];
extern const struct Animation anim_love_machine_demo_icon[];
extern const struct Animation anim_rap_machine_demo_icon[];
extern const struct Animation anim_cat_machine_listen[];
extern const struct Animation anim_love_san_speak_short[];
extern const struct Animation anim_rap_machine_rapper_yellow[];
extern const struct Animation anim_cat_machine_meow[];
extern const struct Animation anim_love_san_speak_long[];
extern const struct Animation anim_rap_machine_rapper_red[];

extern const struct Vector2 D_08cda128;
extern const struct Vector2 D_08cda12c;
extern const struct Vector2 D_08cda130;
extern const struct Vector2 D_08cda134;
extern const struct Vector2 D_08cda138;
extern const struct Vector2 D_08cda13c;
extern const struct Vector2 D_08cda140;
extern const struct Vector2 D_08cda144;
extern const struct Vector2 D_08cda148;
extern const struct Vector2 D_08cdbadc;
extern const struct Vector2 D_08cdbae0;
extern const struct Vector2 D_08cdbae4;
extern const struct Vector2 D_08cdbae8;
extern const struct Vector2 D_08cdbaec;
extern const struct Vector2 D_08cdbaf0;
extern const struct Vector2 D_08cdbaf4;
extern const struct Vector2 D_08cdbaf8;
extern const struct Vector2 D_08cdbafc;
extern const struct Vector2 D_08cdd0e4;
extern const struct Vector2 D_08cdd0e8;
extern const struct Vector2 D_08cdd0ec;
extern const struct Vector2 D_08cdd0f0;
extern const struct Vector2 D_08cdd0f4;
extern const struct Vector2 D_08cdd0f8;
extern const struct Vector2 D_08cdd0fc;
extern const struct Vector2 D_08cdd100;
extern const struct Vector2 D_08cdd104;

extern const struct CompressedGraphics D_08cda118;
extern const struct CompressedGraphics D_08cda400;
extern const struct CompressedGraphics D_08cd9a44;
extern const struct CompressedGraphics D_08cdd0d4;
extern const struct CompressedGraphics D_08cdd5b8;
extern const struct CompressedGraphics D_08cdc884;
extern const struct CompressedGraphics D_08cdbacc;
extern const struct CompressedGraphics D_08cdbe6c;
extern const struct CompressedGraphics D_08cdae78;

extern const Palette cat_machine_pal[];
extern const Palette confession_machine_pal[];
extern const Palette rap_machine_pal[];


  //  //  //  CAT MACHINE DATA  //  //  //


#include "cat_machine.inc.c"


  //  //  //  RAP MACHINE DATA  //  //  //


#include "rap_machine.inc.c"


  //  //  //  CONFESSION MACHINE DATA  //  //  //


#include "confession_machine.inc.c"


  //  //  //  GRAPHICS DATA  //  //  //


// [D_089e9bf8] A Button GFX
const struct RhythmToySpriteData rhythm_toy_sprite_button_a[] = {
    /* CAT_MACHINE_1 */ {
        /* Anim */ anim_cat_machine_button_a,
        /* Vec2 */ &D_08cda134
    },
    /* CAT_MACHINE_2 */ {
        /* Anim */ anim_cat_machine_button_a,
        /* Vec2 */ &D_08cda134
    },
    /* CONFESSION_MACHINE */ {
        /* Anim */ anim_love_machine_button_a,
        /* Vec2 */ &D_08cdd0f0
    },
    /* RAP_MACHINE */ {
        /* Anim */ anim_rap_machine_button_a,
        /* Vec2 */ &D_08cdbae0
    }
};

// [D_089e9c18] B Button GFX
const struct RhythmToySpriteData rhythm_toy_sprite_button_b[] = {
    /* CAT_MACHINE_1 */ {
        /* Anim */ anim_cat_machine_button_b,
        /* Vec2 */ &D_08cda138
    },
    /* CAT_MACHINE_2 */ {
        /* Anim */ anim_cat_machine_button_b,
        /* Vec2 */ &D_08cda138
    },
    /* CONFESSION_MACHINE */ {
        /* Anim */ anim_love_machine_button_b,
        /* Vec2 */ &D_08cdd0f4
    },
    /* RAP_MACHINE */ {
        /* Anim */ anim_rap_machine_button_b,
        /* Vec2 */ &D_08cdbae4
    }
};

// [D_089e9c38] D-Pad Up GFX
const struct RhythmToySpriteData rhythm_toy_sprite_button_u[] = {
    /* CAT_MACHINE_1 */ {
        /* Anim */ anim_cat_machine_button_up,
        /* Vec2 */ &D_08cda13c
    },
    /* CAT_MACHINE_2 */ {
        /* Anim */ anim_cat_machine_button_up,
        /* Vec2 */ &D_08cda13c
    },
    /* CONFESSION_MACHINE */ {
        /* Anim */ anim_love_machine_button_up,
        /* Vec2 */ &D_08cdd0f8
    },
    /* RAP_MACHINE */ {
        /* Anim */ anim_rap_machine_button_up,
        /* Vec2 */ &D_08cdbae8
    }
};

// [D_089e9c58] D-Pad Down GFX
const struct RhythmToySpriteData rhythm_toy_sprite_button_d[] = {
    /* CAT_MACHINE_1 */ {
        /* Anim */ anim_cat_machine_button_down,
        /* Vec2 */ &D_08cda140
    },
    /* CAT_MACHINE_2 */ {
        /* Anim */ anim_cat_machine_button_down,
        /* Vec2 */ &D_08cda140
    },
    /* CONFESSION_MACHINE */ {
        /* Anim */ anim_love_machine_button_down,
        /* Vec2 */ &D_08cdd0fc
    },
    /* RAP_MACHINE */ {
        /* Anim */ anim_rap_machine_button_down,
        /* Vec2 */ &D_08cdbaec
    }
};

// [D_089e9c78] D-Pad Left GFX
const struct RhythmToySpriteData rhythm_toy_sprite_button_l[] = {
    /* CAT_MACHINE_1 */ {
        /* Anim */ anim_cat_machine_button_left,
        /* Vec2 */ &D_08cda144
    },
    /* CAT_MACHINE_2 */ {
        /* Anim */ anim_cat_machine_button_left,
        /* Vec2 */ &D_08cda144
    },
    /* CONFESSION_MACHINE */ {
        /* Anim */ anim_love_machine_button_left,
        /* Vec2 */ &D_08cdd100
    },
    /* RAP_MACHINE */ {
        /* Anim */ anim_rap_machine_button_left,
        /* Vec2 */ &D_08cdbaf0
    }
};

// [D_089e9c98] D-Pad Right GFX
const struct RhythmToySpriteData rhythm_toy_sprite_button_r[] = {
    /* CAT_MACHINE_1 */ {
        /* Anim */ anim_cat_machine_button_right,
        /* Vec2 */ &D_08cda148
    },
    /* CAT_MACHINE_2 */ {
        /* Anim */ anim_cat_machine_button_right,
        /* Vec2 */ &D_08cda148
    },
    /* CONFESSION_MACHINE */ {
        /* Anim */ anim_love_machine_button_right,
        /* Vec2 */ &D_08cdd104
    },
    /* RAP_MACHINE */ {
        /* Anim */ anim_rap_machine_button_right,
        /* Vec2 */ &D_08cdbaf4
    }
};

// [D_089e9cb8] Demo Icon GFX
const struct RhythmToySpriteData rhythm_toy_sprite_demo_icon[] = {
    /* CAT_MACHINE_1 */ {
        /* Anim */ anim_cat_machine_demo_icon,
        /* Vec2 */ &D_08cda128
    },
    /* CAT_MACHINE_2 */ {
        /* Anim */ anim_cat_machine_demo_icon,
        /* Vec2 */ &D_08cda128
    },
    /* CONFESSION_MACHINE */ {
        /* Anim */ anim_love_machine_demo_icon,
        /* Vec2 */ &D_08cdd0e4
    },
    /* RAP_MACHINE */ {
        /* Anim */ anim_rap_machine_demo_icon,
        /* Vec2 */ &D_08cdbadc
    }
};

// [D_089e9cd8] "Machine Respond to A/B Button" GFX
const struct RhythmToySpriteData rhythm_toy_sprite_machine_r[] = {
    /* CAT_MACHINE_1 */ {
        /* Anim */ anim_cat_machine_listen,
        /* Vec2 */ &D_08cda12c
    },
    /* CAT_MACHINE_2 */ {
        /* Anim */ anim_cat_machine_listen,
        /* Vec2 */ &D_08cda12c
    },
    /* CONFESSION_MACHINE */ {
        /* Anim */ anim_love_san_speak_short,
        /* Vec2 */ &D_08cdd0ec
    },
    /* RAP_MACHINE */ {
        /* Anim */ anim_rap_machine_rapper_yellow,
        /* Vec2 */ &D_08cdbafc
    },
};

// [D_089e9cf8] "Machine Respond to D-Pad" GFX
const struct RhythmToySpriteData rhythm_toy_sprite_machine_l[] = {
    /* CAT_MACHINE_1 */ {
        /* Anim */ anim_cat_machine_meow,
        /* Vec2 */ &D_08cda130
    },
    /* CAT_MACHINE_2 */ {
        /* Anim */ anim_cat_machine_meow,
        /* Vec2 */ &D_08cda130
    },
    /* CONFESSION_MACHINE */ {
        /* Anim */ anim_love_san_speak_long,
        /* Vec2 */ &D_08cdd0e8
    },
    /* RAP_MACHINE */ {
        /* Anim */ anim_rap_machine_rapper_red,
        /* Vec2 */ &D_08cdbaf8
    }
};

// [D_089e9d18] Rhythm Toy Sprite Data Table
const struct RhythmToySpriteData *const rhythm_toy_sprite_table[] = {
    /* A_BUTTON   */ rhythm_toy_sprite_button_a,
    /* B_BUTTON   */ rhythm_toy_sprite_button_b,
    /* DPAD_UP    */ rhythm_toy_sprite_button_u,
    /* DPAD_DOWN  */ rhythm_toy_sprite_button_d,
    /* DPAD_LEFT  */ rhythm_toy_sprite_button_l,
    /* DPAD_RIGHT */ rhythm_toy_sprite_button_r,
    /* DEMO_ICON  */ rhythm_toy_sprite_demo_icon,
    /* MACHINE_R  */ rhythm_toy_sprite_machine_r,
    /* MACHINE_L  */ rhythm_toy_sprite_machine_l
};

// [D_089e9d3c] Rhythm Toy Demo Scripts
const struct RhythmToyDemo *const rhythm_toy_demo_table[] = {
    /* CAT1 */ cat_machine_demo_seq,
    /* CAT2 */ cat_machine_demo_seq,
    /* LOVE */ NULL,
    /* RAP  */ rap_machine_demo_seq
};

// [D_089e9d4c] Buffered Textures List
const struct CompressedGraphics *const rhythm_toy_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};

// [D_089e9d50] Graphics Table (Cat Machine)
const struct GraphicsTable gfx_table_cat_machine[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08cda118,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08cda400,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08cd9a44,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ cat_machine_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ cat_machine_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089e9d98] Graphics Table (Confession Machine)
const struct GraphicsTable gfx_table_confession_machine[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08cdd0d4,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08cdd5b8,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08cdc884,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ confession_machine_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ confession_machine_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089e9de0] Graphics Table (Rap Machine)
const struct GraphicsTable gfx_table_rap_machine[] = {
    /* BG Tileset */ {
        /* Src.  */ &D_08cdbacc,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &D_08cdbe6c,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &D_08cdae78,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ rap_machine_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    /* OBJ Palette */ {
        /* Src.  */ rap_machine_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x140
    },
    END_OF_GRAPHICS_TABLE
};

// [D_089e9e28] Graphics Table Index
const struct GraphicsTable *const rhythm_toy_gfx_tables[] = {
    /* CAT1 */ gfx_table_cat_machine,
    /* CAT2 */ gfx_table_cat_machine,
    /* LOVE */ gfx_table_confession_machine,
    /* RAP  */ gfx_table_rap_machine
};


  //  //  //  MACHINE DATA  //  //  //


// [D_089e9e38] Button Sprite Data IDs per Button Press
const u8 rhythm_toy_button_anim_ids[] = {
    /* A */ RHYTHM_TOY_SPRITE_A_BUTTON,
    /* B */ RHYTHM_TOY_SPRITE_B_BUTTON,
    /* U */ RHYTHM_TOY_SPRITE_DPAD_UP,
    /* D */ RHYTHM_TOY_SPRITE_DPAD_DOWN,
    /* L */ RHYTHM_TOY_SPRITE_DPAD_LEFT,
    /* R */ RHYTHM_TOY_SPRITE_DPAD_RIGHT
};

// [D_089e9e40] Demo BPM Table
const u16 *const rhythm_toy_demo_bpm_table[] = {
    /* CAT1 */ &cat_machine_demo_bpm,
    /* CAT2 */ &cat_machine_demo_bpm,
    /* LOVE */ &confession_machine_demo_bpm,
    /* RAP  */ &rap_machine_demo_bpm
};

// [D_089e9e50] Machine Sprite Data IDs per Button Press
const u8 rhythm_toy_machine_anim_ids[] = {
    /* A */ RHYTHM_TOY_SPRITE_MACHINE_R,
    /* B */ RHYTHM_TOY_SPRITE_MACHINE_R,
    /* U */ RHYTHM_TOY_SPRITE_MACHINE_L,
    /* D */ RHYTHM_TOY_SPRITE_MACHINE_L,
    /* L */ RHYTHM_TOY_SPRITE_MACHINE_L,
    /* R */ RHYTHM_TOY_SPRITE_MACHINE_L
};

// [D_089e9e58] Rhythm Toy Play Functions
const RhythmToyPlayFunc rhythm_toy_play_func_table[] = {
    /* CAT1 */ func_08044014,
    /* CAT2 */ func_08044014,
    /* LOVE */ func_080441cc,
    /* RAP  */ func_08044074
};


  //  //  //  CUE DATA  //  //  //


// [D_089e9e68] Cue 00 (Default)
const struct CueDefinition rhythm_toy_cue_default = {
    /* Unknown Param.  */ 0,
    /* Input Buttons   */ PRESS_BUTTON(A_BUTTON),
    /* Total Duration  */ 0x18,
    /* Hit Window      */ -0x02, 0x02,
    /* Barely Window   */ -0x05, 0x05,
    /* Tempo-Dependent */ FALSE,
    /* Force-Delete    */ FALSE,
    /* Size in Memory  */ 0x4,
    /* Func. Spawn     */ rhythm_toy_cue_spawn,
    /* Spawn Parameter */ 0,
    /* Func. Update    */ rhythm_toy_cue_update,
    /* Func. Despawn   */ rhythm_toy_cue_despawn,
    /* Func. Hit       */ rhythm_toy_cue_hit,
    /* Func. Barely    */ rhythm_toy_cue_barely,
    /* Func. Miss      */ rhythm_toy_cue_miss,
    /* SFX Spawn       */ NULL,
    /* SFX Hit         */ NULL,
    /* SFX Barely      */ NULL,
    /* SFX Miss        */ NULL,
    /* Miss Condition  */ NULL
};

// [D_089e9ea8] Cue Definition Index
const struct CueDefinition *const rhythm_toy_cue_index[] = {
    /* 0x00 */ &rhythm_toy_cue_default,
    /* 0x01 */ NULL,
    /* 0x02 */ NULL,
    /* 0x03 */ NULL,
    /* 0x04 */ NULL,
    /* 0x05 */ NULL,
    /* 0x06 */ NULL,
    /* 0x07 */ NULL,
    /* 0x08 */ NULL,
    /* 0x09 */ NULL,
    /* 0x0A */ NULL,
    /* 0x0B */ NULL,
    END_OF_CUE_INDEX
};


  //  //  //  GAME ENGINE DATA  //  //  //


// [D_089e9edc] Common Events
const EngineEvent rhythm_toy_common_events[] = {
    /* BEAT_ANIMATION */ (EngineEvent) rhythm_toy_common_beat_animation,
    /* DISPLAY_TEXT   */ (EngineEvent) rhythm_toy_common_display_text,
    /* INIT_TUTORIAL  */ (EngineEvent) rhythm_toy_common_init_tutorial,
    END_OF_COMMON_EVENT_LIST
};

// [D_089e9eec] Engine Events
const EngineEvent rhythm_toy_engine_events[] = {
    /* 0x00 */ (EngineEvent) rhythm_toy_engine_event_stub
};

// [D_089e9ef0] Rhythm Toy Game Engine
const struct GameEngine D_089e9ef0 = {
    /* Size in Memory */ 0x384,
    /* Start Engine   */ rhythm_toy_engine_start,
    /* Update Engine  */ rhythm_toy_engine_update,
    /* Stop Engine    */ rhythm_toy_engine_stop,
    /* Cue Index      */ rhythm_toy_cue_index,
    /* Common Events  */ rhythm_toy_common_events,
    /* Engine Events  */ rhythm_toy_engine_events,
    /* Input Event    */ rhythm_toy_input_event
};
