#include "global.h"
#include "graphics.h"

// [D_08902ec0] OBJ Palette
Palette game_select_obj_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x404850),
        /* 01 */ TO_RGB555(0xF8D098),
        /* 02 */ TO_RGB555(0xB07838),
        /* 03 */ TO_RGB555(0x504848),
        /* 04 */ TO_RGB555(0xD8D0D0),
        /* 05 */ TO_RGB555(0xF83028),
        /* 06 */ TO_RGB555(0x2030A8),
        /* 07 */ TO_RGB555(0xF888D0),
        /* 08 */ TO_RGB555(0x6890F8),
        /* 09 */ TO_RGB555(0xF8F810),
        /* 10 */ TO_RGB555(0x00A808),
        /* 11 */ TO_RGB555(0x00F818),
        /* 12 */ TO_RGB555(0x00E8F8),
        /* 13 */ TO_RGB555(0xF80000),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0x000030)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x6890F8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x989090),
        /* 03 */ TO_RGB555(0x686060),
        /* 04 */ TO_RGB555(0xC800A8),
        /* 05 */ TO_RGB555(0xF810D8),
        /* 06 */ TO_RGB555(0x00B8C0),
        /* 07 */ TO_RGB555(0x20F0F8),
        /* 08 */ TO_RGB555(0x808800),
        /* 09 */ TO_RGB555(0xF8F810),
        /* 10 */ TO_RGB555(0x00D010),
        /* 11 */ TO_RGB555(0x00F818),
        /* 12 */ TO_RGB555(0xD80000),
        /* 13 */ TO_RGB555(0xF80000),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x00B8F8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x981818),
        /* 07 */ TO_RGB555(0xF888D0),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0xF8F810),
        /* 10 */ TO_RGB555(0x00A808),
        /* 11 */ TO_RGB555(0x00F818),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x000878),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x504848),
        /* 04 */ TO_RGB555(0x20F0F8),
        /* 05 */ TO_RGB555(0x009800),
        /* 06 */ TO_RGB555(0x686060),
        /* 07 */ TO_RGB555(0x989090),
        /* 08 */ TO_RGB555(0xD8D0D0),
        /* 09 */ TO_RGB555(0x2030A8),
        /* 10 */ TO_RGB555(0xF8F810),
        /* 11 */ TO_RGB555(0xF89830),
        /* 12 */ TO_RGB555(0x00F818),
        /* 13 */ TO_RGB555(0xF80000),
        /* 14 */ TO_RGB555(0xF8F8F8),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x303030),
        /* 03 */ TO_RGB555(0x484848),
        /* 04 */ TO_RGB555(0x606060),
        /* 05 */ TO_RGB555(0x787878),
        /* 06 */ TO_RGB555(0x909090),
        /* 07 */ TO_RGB555(0xA8A8A8),
        /* 08 */ TO_RGB555(0xC0C0C0),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0xF8F8F8),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0xF8F8F8),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0xF8F8F8),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x504848),
        /* 04 */ TO_RGB555(0xD8D0D0),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0xF810D8),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 07 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0xF8F8F8),
        /* 02 */ TO_RGB555(0x081048),
        /* 03 */ TO_RGB555(0xF8F8F8),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 08 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x2030A8),
        /* 02 */ TO_RGB555(0xD8D8D8),
        /* 03 */ TO_RGB555(0x2030A8),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x000000),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 09 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x90A8F8),
        /* 02 */ TO_RGB555(0xD8E0F8),
        /* 03 */ TO_RGB555(0x90A8F8),
        /* 04 */ TO_RGB555(0x787878),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0xF8F8C8),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x787878),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 10 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x90A8F8),
        /* 02 */ TO_RGB555(0xD8E0F8),
        /* 03 */ TO_RGB555(0x90A8F8),
        /* 04 */ TO_RGB555(0xC800A8),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0xD8E0F8),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0xC800A8),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    }
};

// [D_08903020] BG Palette
Palette game_select_bg_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x384050),
        /* 02 */ TO_RGB555(0x384050),
        /* 03 */ TO_RGB555(0x384050),
        /* 04 */ TO_RGB555(0x384050),
        /* 05 */ TO_RGB555(0x384050),
        /* 06 */ TO_RGB555(0x384050),
        /* 07 */ TO_RGB555(0x384050),
        /* 08 */ TO_RGB555(0x384050),
        /* 09 */ TO_RGB555(0x384050),
        /* 10 */ TO_RGB555(0x384050),
        /* 11 */ TO_RGB555(0x384050),
        /* 12 */ TO_RGB555(0x384050),
        /* 13 */ TO_RGB555(0x384050),
        /* 14 */ TO_RGB555(0x384050),
        /* 15 */ TO_RGB555(0x384050)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x384050),
        /* 02 */ TO_RGB555(0x384050),
        /* 03 */ TO_RGB555(0x384050),
        /* 04 */ TO_RGB555(0x384050),
        /* 05 */ TO_RGB555(0x384050),
        /* 06 */ TO_RGB555(0x384050),
        /* 07 */ TO_RGB555(0x384050),
        /* 08 */ TO_RGB555(0x384050),
        /* 09 */ TO_RGB555(0x384050),
        /* 10 */ TO_RGB555(0x384050),
        /* 11 */ TO_RGB555(0x384050),
        /* 12 */ TO_RGB555(0x384050),
        /* 13 */ TO_RGB555(0x384050),
        /* 14 */ TO_RGB555(0x384050),
        /* 15 */ TO_RGB555(0x384050)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x384050),
        /* 02 */ TO_RGB555(0x384050),
        /* 03 */ TO_RGB555(0x384050),
        /* 04 */ TO_RGB555(0x384050),
        /* 05 */ TO_RGB555(0x384050),
        /* 06 */ TO_RGB555(0x384050),
        /* 07 */ TO_RGB555(0x384050),
        /* 08 */ TO_RGB555(0x384050),
        /* 09 */ TO_RGB555(0x384050),
        /* 10 */ TO_RGB555(0x384050),
        /* 11 */ TO_RGB555(0x384050),
        /* 12 */ TO_RGB555(0x384050),
        /* 13 */ TO_RGB555(0x384050),
        /* 14 */ TO_RGB555(0x384050),
        /* 15 */ TO_RGB555(0x384050)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x384050),
        /* 02 */ TO_RGB555(0x384050),
        /* 03 */ TO_RGB555(0x384050),
        /* 04 */ TO_RGB555(0x384050),
        /* 05 */ TO_RGB555(0x384050),
        /* 06 */ TO_RGB555(0x384050),
        /* 07 */ TO_RGB555(0x384050),
        /* 08 */ TO_RGB555(0x384050),
        /* 09 */ TO_RGB555(0x384050),
        /* 10 */ TO_RGB555(0x384050),
        /* 11 */ TO_RGB555(0x384050),
        /* 12 */ TO_RGB555(0x384050),
        /* 13 */ TO_RGB555(0x384050),
        /* 14 */ TO_RGB555(0x384050),
        /* 15 */ TO_RGB555(0x384050)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x384050),
        /* 02 */ TO_RGB555(0x384050),
        /* 03 */ TO_RGB555(0x384050),
        /* 04 */ TO_RGB555(0x384050),
        /* 05 */ TO_RGB555(0x384050),
        /* 06 */ TO_RGB555(0x384050),
        /* 07 */ TO_RGB555(0x384050),
        /* 08 */ TO_RGB555(0x384050),
        /* 09 */ TO_RGB555(0x384050),
        /* 10 */ TO_RGB555(0x384050),
        /* 11 */ TO_RGB555(0x384050),
        /* 12 */ TO_RGB555(0x384050),
        /* 13 */ TO_RGB555(0x384050),
        /* 14 */ TO_RGB555(0x384050),
        /* 15 */ TO_RGB555(0x384050)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x384050),
        /* 02 */ TO_RGB555(0x384050),
        /* 03 */ TO_RGB555(0x384050),
        /* 04 */ TO_RGB555(0x384050),
        /* 05 */ TO_RGB555(0x384050),
        /* 06 */ TO_RGB555(0x384050),
        /* 07 */ TO_RGB555(0x384050),
        /* 08 */ TO_RGB555(0x384050),
        /* 09 */ TO_RGB555(0x384050),
        /* 10 */ TO_RGB555(0x384050),
        /* 11 */ TO_RGB555(0x384050),
        /* 12 */ TO_RGB555(0x384050),
        /* 13 */ TO_RGB555(0x384050),
        /* 14 */ TO_RGB555(0x384050),
        /* 15 */ TO_RGB555(0x384050)
    },
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x384050),
        /* 02 */ TO_RGB555(0x384050),
        /* 03 */ TO_RGB555(0x384050),
        /* 04 */ TO_RGB555(0x384050),
        /* 05 */ TO_RGB555(0x384050),
        /* 06 */ TO_RGB555(0x384050),
        /* 07 */ TO_RGB555(0x384050),
        /* 08 */ TO_RGB555(0x384050),
        /* 09 */ TO_RGB555(0x384050),
        /* 10 */ TO_RGB555(0x384050),
        /* 11 */ TO_RGB555(0x384050),
        /* 12 */ TO_RGB555(0x384050),
        /* 13 */ TO_RGB555(0x384050),
        /* 14 */ TO_RGB555(0x384050),
        /* 15 */ TO_RGB555(0x384050)
    },
    /* PALETTE 07 */ {
        /* 00 */ TO_RGB555(0x384050),
        /* 01 */ TO_RGB555(0x384050),
        /* 02 */ TO_RGB555(0x384050),
        /* 03 */ TO_RGB555(0x384050),
        /* 04 */ TO_RGB555(0x384050),
        /* 05 */ TO_RGB555(0x384050),
        /* 06 */ TO_RGB555(0x384050),
        /* 07 */ TO_RGB555(0x384050),
        /* 08 */ TO_RGB555(0x384050),
        /* 09 */ TO_RGB555(0x384050),
        /* 10 */ TO_RGB555(0x384050),
        /* 11 */ TO_RGB555(0x384050),
        /* 12 */ TO_RGB555(0x384050),
        /* 13 */ TO_RGB555(0x384050),
        /* 14 */ TO_RGB555(0x384050),
        /* 15 */ TO_RGB555(0x384050)
    }
};
