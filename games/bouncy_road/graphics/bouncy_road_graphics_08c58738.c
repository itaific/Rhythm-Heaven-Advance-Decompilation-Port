#include "global.h"
#include "graphics.h"

// // //  D_08C58738  // // //

// [D_08C585B4] D_08C58738 Data
u16 D_08c58738_data[] = {
	0x0000, 0x0127, 0x0126, 0x0125, 0x0128, 0x0000, 0x0120, 0x0014, 0x0014, 0x0014, 0x011e, 0x011f, 0x0000, 0x0123, 0x0014, 0x0124, 0x0000, 0x0122, 0x0121, 0x0014, 0x0000, 0x00ea, 0x0014, 0x00e9, 0x0000, 0x00ef, 0x0014, 0x00ee, 0x0000, 0x00ec, 0x00eb, 0x0014, 0x00ed, 0x0000, 0x00dc, 0x00db, 0x00da, 0x00d8, 0x0014, 0x0014, 0x0014, 0x00d9, 0x0000, 0x00d7, 0x00d6, 0x00e7, 0x002e, 0x00e6, 0x0014, 0x0014, 0x00e8, 0x00e5, 0x00e4, 0x0000, 0x00de, 0x00dd, 0x002e, 0x002e, 0x00e0, 0x00df, 0x00e2, 0x00e1, 0x002e, 0x00e3, 0x0000, 0x0107, 0x0106, 0x0105, 0x0108, 0x0000, 0x010e, 0x002e, 0x002e, 0x010b, 0x010a, 0x0109, 0x010d, 0x010c, 0x002e, 0x00ff, 0x0000, 0x0103, 0x0104, 0x0062, 0x0062, 0x0100, 0x0000, 0x0000, 0x0000, 0x0102, 0x0101, 0x011d, 0x002e, 0x011c, 0x011b, 0x011a, 0x0000, 0x0114, 0x0113, 0x0112, 0x0117, 0x0116, 0x0115, 0x0110, 0x002e, 0x010f, 0x0111, 0x002e, 0x0118, 0x002e, 0x0119, 0x0000, 0x00f4, 0x00f3, 0x00f8, 0x00f7, 0x002e, 0x00fa, 0x0000, 0x00f9, 0x002e, 0x00f6, 0x00f5, 0x0000, 0x00f2, 0x00f1, 0x00f0, 0x0000, 0x0000, 0x00fe, 0x002e, 0x00fd, 0x005a, 0x0000, 0x00fb, 0x002e, 0x00fc, 0x0000, 0x0032, 0x002e, 0x0031, 0x0030, 0x0000, 0x0032, 0x002e, 0x002d, 0x0000, 0x0033, 0x002e, 0x0031, 0x0030, 0x0000, 0x002f, 0x002e, 0x002d, 0x0000
};

// [D_08C586EC] D_08C58738 RLE Data
u8 D_08c58738_rledata[] = {
	0x1, 0x10, 0x5, 0x1a, 0x7, 0x19, 0x2, 0x3, 0x2, 0x18, 0x3, 0x4, 0x1, 0x19, 0x2, 0x4, 0x2, 0x18, 0x2, 0x4, 0x2, 0x17, 0x3, 0x4, 0x2, 0x17, 0x9, 0x16, 0xb, 0x15, 0xb, 0xd, 0x5, 0x4, 0xb, 0xc, 0xc, 0x4, 0x4, 0xe, 0xb, 0x3, 0x4, 0x10, 0x9, 0x3, 0x3, 0x14, 0x7, 0x3, 0x3, 0x18, 0x2, 0x4, 0x2, 0x18, 0x2, 0x4, 0x3, 0x17, 0x2, 0x5, 0x2, 0x17, 0x2, 0x5, 0x3, 0x16, 0x2, 0x6, 0x2, 0x0, 0x85, 0x0, 0x0, 0x0
};

// [D_08C58738] D_08C58738 Graphics
struct CompressedGraphics D_08c58738 = {
	/* Data */				{.raw = D_08c58738_data},
	/* RLE Data */			D_08c58738_rledata,
	/* RLE Size */			0x48,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

