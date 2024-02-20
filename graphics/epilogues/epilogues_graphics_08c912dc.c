#include "global.h"
#include "graphics.h"

// // //  D_08C912DC  // // //

// [D_08C91218] D_08C912DC Data
u16 D_08c912dc_data[] = {
	0x0000, 0x005b, 0x0069, 0x0068, 0x005b, 0x005b, 0x0000, 0x005b, 0x0070, 0x006f, 0x006e, 0x005b, 0x0000, 0x005b, 0x006b, 0x006a, 0x006d, 0x006c, 0x005b, 0x0000, 0x005b, 0x005e, 0x005d, 0x005c, 0x005f, 0x005b, 0x0000, 0x005b, 0x0064, 0x0067, 0x0066, 0x0065, 0x005b, 0x0000, 0x005b, 0x0061, 0x0060, 0x0063, 0x0062, 0x005b, 0x0000, 0x005b, 0x0079, 0x0078, 0x0077, 0x007a, 0x005b, 0x0000, 0x005b, 0x0082, 0x0081, 0x0080, 0x0083, 0x0083, 0x005b, 0x005b, 0x0000, 0x005b, 0x007b, 0x007e, 0x007d, 0x007c, 0x007f, 0x006e, 0x005b, 0x0000, 0x005b, 0x0076, 0x0075, 0x0073, 0x0072, 0x0071, 0x0074, 0x005b, 0x0000
};

// [D_08C912AE] D_08C912DC RLE Data
u8 D_08c912dc_rledata[] = {
	0x1, 0x86, 0x1, 0xb, 0x5, 0xf, 0x1, 0xb, 0x5, 0xf, 0x1, 0xa, 0x6, 0xf, 0x1, 0xa, 0x6, 0xf, 0x1, 0xa, 0x6, 0xf, 0x1, 0xa, 0x6, 0xf, 0x1, 0xa, 0x6, 0xf, 0x1, 0x8, 0x8, 0xf, 0x1, 0x8, 0x8, 0xf, 0x1, 0x8, 0x8, 0x0, 0x0, 0x4a, 0x0, 0x0
};

// [D_08C912DC] D_08C912DC Graphics
struct CompressedGraphics D_08c912dc = {
	/* Data */				{.raw = D_08c912dc_data},
	/* RLE Data */			D_08c912dc_rledata,
	/* RLE Size */			0x2a,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

