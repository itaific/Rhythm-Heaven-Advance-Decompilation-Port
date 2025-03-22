#include "global.h"
#include "graphics.h"

// // //  D_08C6CDE0  // // //

// [D_08C6CD88] D_08C6CDE0 Data
u16 D_08c6cde0_data[] = {
	0x0039, 0x003a, 0x0030, 0x0031, 0x0430, 0x043a, 0x0039, 0x0037, 0x0038, 0x0438, 0x0437, 0x0039, 0x0837, 0x0838, 0x0c38, 0x0c37, 0x0039, 0x083a, 0x0830, 0x0035, 0x0034, 0x0831, 0x0c30, 0x0c3a, 0x0039, 0x0033, 0x0032, 0x0039, 0x0036, 0x0039
};

// [D_08C6CDC4] D_08C6CDE0 RLE Data
u8 D_08c6cde0_rledata[] = {
	0x1, 0x22, 0x3, 0x13, 0x3, 0x7, 0x2, 0x14, 0x3, 0x7, 0x2, 0x14, 0x3, 0x7, 0x5, 0x11, 0x3, 0x9, 0x3, 0x1d, 0x2, 0x0, 0x0, 0x0, 0x3c, 0x0, 0x0, 0x0
};

// [D_08C6CDE0] D_08C6CDE0 Graphics
struct CompressedGraphics D_08c6cde0 = {
	/* Data */				{.raw = D_08c6cde0_data},
	/* RLE Data */			D_08c6cde0_rledata,
	/* RLE Size */			0x16,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

