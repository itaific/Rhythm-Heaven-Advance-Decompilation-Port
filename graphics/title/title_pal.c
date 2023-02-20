#include "global.h"
#include "graphics.h"

// [D_0890d5a8] <description>
Palette title_pal[] = {
    /* PALETTE 00 */ {
        /* 00 */ TO_RGB555(0xC8C880),
        /* 01 */ TO_RGB555(0x080808),
        /* 02 */ TO_RGB555(0xF86818),
        /* 03 */ TO_RGB555(0xD86020),
        /* 04 */ TO_RGB555(0x906040),
        /* 05 */ TO_RGB555(0x483830),
        /* 06 */ TO_RGB555(0xD89028),
        /* 07 */ TO_RGB555(0xF8C010),
        /* 08 */ TO_RGB555(0x4830F8),
        /* 09 */ TO_RGB555(0x808080),
        /* 10 */ TO_RGB555(0x4830F8),
        /* 11 */ TO_RGB555(0x7058F8),
        /* 12 */ TO_RGB555(0x9080F8),
        /* 13 */ TO_RGB555(0xB8A8F8),
        /* 14 */ TO_RGB555(0xD8D0F8),
        /* 15 */ TO_RGB555(0xF8F8F8)
    },
    /* PALETTE 01 */ {
        /* 00 */ TO_RGB555(0x08C830),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x7058F8),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x4830F8),
        /* 11 */ TO_RGB555(0x6848D0),
        /* 12 */ TO_RGB555(0x9068A0),
        /* 13 */ TO_RGB555(0xB08870),
        /* 14 */ TO_RGB555(0xD8A840),
        /* 15 */ TO_RGB555(0xF8C010)
    },
    /* PALETTE 02 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0x9080F8),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x4830F8),
        /* 11 */ TO_RGB555(0x6838D0),
        /* 12 */ TO_RGB555(0x9048A0),
        /* 13 */ TO_RGB555(0xB05070),
        /* 14 */ TO_RGB555(0xD85840),
        /* 15 */ TO_RGB555(0xF86818)
    },
    /* PALETTE 03 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0x000000),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0xB8A8F8),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x000000)
    },
    /* PALETTE 04 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
        /* 03 */ TO_RGB555(0xE0E0E0),
        /* 04 */ TO_RGB555(0x000000),
        /* 05 */ TO_RGB555(0x000000),
        /* 06 */ TO_RGB555(0x000000),
        /* 07 */ TO_RGB555(0x000000),
        /* 08 */ TO_RGB555(0xD8D0F8),
        /* 09 */ TO_RGB555(0x000000),
        /* 10 */ TO_RGB555(0x000000),
        /* 11 */ TO_RGB555(0x000000),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0x000000),
        /* 15 */ TO_RGB555(0x585058)
    },
    /* PALETTE 05 */ {
        /* 00 */ TO_RGB555(0x385078),
        /* 01 */ TO_RGB555(0x000000),
        /* 02 */ TO_RGB555(0x000000),
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
    /* PALETTE 06 */ {
        /* 00 */ TO_RGB555(0x000000),
        /* 01 */ TO_RGB555(0xF080B8),
        /* 02 */ TO_RGB555(0xF890C0),
        /* 03 */ TO_RGB555(0xF8A0D0),
        /* 04 */ TO_RGB555(0xF8B8D8),
        /* 05 */ TO_RGB555(0xF8C8E0),
        /* 06 */ TO_RGB555(0xF8D8E8),
        /* 07 */ TO_RGB555(0xF8E8F0),
        /* 08 */ TO_RGB555(0xF8F8F8),
        /* 09 */ TO_RGB555(0xF8F0F0),
        /* 10 */ TO_RGB555(0xF8F8F8),
        /* 11 */ TO_RGB555(0xF080B8),
        /* 12 */ TO_RGB555(0x000000),
        /* 13 */ TO_RGB555(0x000000),
        /* 14 */ TO_RGB555(0xF080B8),
        /* 15 */ TO_RGB555(0x000000)
    }
};
