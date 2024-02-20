#include "global.h"
#include "graphics.h"

// // //  D_08CA27D0  // // //

// [D_08CA25C4] D_08CA27D0 Data
u16 D_08ca27d0_data[] = {
	0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0002, 0x00ef, 0x0002, 0x00f0, 0x0002, 0x0002, 0x0002, 0x00f1, 0x0002, 0x0000, 0x0001, 0x0001, 0x0000, 0x0002, 0x0002, 0x00ee, 0x0002, 0x00ec, 0x00eb, 0x0002, 0x0002, 0x00ed, 0x00fc, 0x00fb, 0x00fa, 0x0002, 0x0002, 0x0002, 0x00ea, 0x0000, 0x0001, 0x0001, 0x0000, 0x0002, 0x0002, 0x00f6, 0x00f5, 0x00f9, 0x00f8, 0x00f7, 0x0002, 0x00f3, 0x00f2, 0x0002, 0x0002, 0x00f4, 0x0002, 0x0002, 0x0002, 0x0000, 0x0001, 0x0001, 0x0000, 0x0002, 0x00cd, 0x00d0, 0x00cf, 0x00ce, 0x00d3, 0x00d2, 0x00d1, 0x00d5, 0x00d4, 0x0002, 0x0000, 0x0001, 0x0001, 0x0000, 0x00cc, 0x00cb, 0x00ca, 0x00c6, 0x00c5, 0x00c4, 0x00c9, 0x00c8, 0x00c7, 0x00e6, 0x00e5, 0x00e4, 0x00e9, 0x00e8, 0x00e7, 0x00e3, 0x0000, 0x0001, 0x0001, 0x0000, 0x00ea, 0x00dd, 0x00dc, 0x00db, 0x00e0, 0x00df, 0x00de, 0x00d8, 0x00d7, 0x00d6, 0x004f, 0x00da, 0x00d9, 0x00e2, 0x00e1, 0x0002, 0x0000, 0x0001, 0x0001, 0x0000, 0x0002, 0x010d, 0x0110, 0x010f, 0x010e, 0x0117, 0x0116, 0x0115, 0x011a, 0x0119, 0x0118, 0x0113, 0x0112, 0x0111, 0x0114, 0x006c, 0x0000, 0x0001, 0x0001, 0x0000, 0x00e3, 0x010c, 0x010b, 0x0107, 0x0106, 0x0105, 0x010a, 0x0109, 0x0108, 0x0126, 0x0125, 0x0124, 0x0127, 0x0035, 0x0034, 0x0033, 0x0000, 0x0001, 0x0001, 0x0000, 0x0128, 0x002b, 0x0121, 0x0027, 0x0027, 0x0123, 0x0122, 0x011d, 0x011c, 0x011b, 0x0120, 0x011f, 0x011e, 0x0027, 0x0048, 0x0047, 0x0000, 0x0001, 0x0001, 0x0000, 0x00fe, 0x004a, 0x0049, 0x0027, 0x0027, 0x0027, 0x0101, 0x0100, 0x0027, 0x0027, 0x0102, 0x00ff, 0x0027, 0x0027, 0x0027, 0x0043, 0x0000, 0x0001, 0x0001, 0x0000, 0x00fd, 0x0076, 0x0027, 0x0103, 0x0104, 0x0027, 0x0027, 0x0078, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001, 0x0001, 0x0000, 0x0001
};

// [D_08CA2788] D_08CA27D0 RLE Data
u8 D_08ca27d0_rledata[] = {
	0x1, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x6, 0x9, 0x7, 0x1, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0xb, 0x5, 0x1, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x11, 0x6, 0x3, 0x6, 0x3, 0x8, 0x6, 0x6, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x1, 0x0, 0x82, 0x0
};

// [D_08CA27D0] D_08CA27D0 Graphics
struct CompressedGraphics D_08ca27d0 = {
	/* Data */				{.raw = D_08ca27d0_data},
	/* RLE Data */			D_08ca27d0_rledata,
	/* RLE Size */			0x46,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

