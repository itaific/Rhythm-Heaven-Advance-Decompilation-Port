#include "global.h"
#include "graphics.h"

// // //  D_08BD5878  // // //

// [D_08BD558C] D_08BD5878 Data
u16 D_08bd5878_data[] = {
	0x3207, 0x3131, 0x0733, 0x0607, 0x1b2f, 0x1b1b, 0x301b, 0x0708, 0x0607, 0x3938, 0x1b1b, 0x3b3a, 0x0708, 0x0607, 0x3405, 0x1b35, 0x1b1b, 0x361b, 0x0537, 0x0708, 0x0607, 0x0505, 0x2c2b, 0x1b1b, 0x2e2d, 0x0505, 0x0708, 0x0607, 0x0505, 0x2905, 0x1b1b, 0x052a, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x3e00, 0x1b1b, 0x1b1b, 0x003f, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x4241, 0x4443, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x4004, 0x0902, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x0104, 0x093c, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x0104, 0x0902, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x3d04, 0x0902, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x0104, 0x0902, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x1517, 0x1816, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x1113, 0x1412, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x0119, 0x1a02, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x0104, 0x0902, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x0b04, 0x0902, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x0104, 0x0902, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x0104, 0x0910, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x0300, 0x0c0e, 0x0f0d, 0x000a, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0000, 0x0000, 0x2600, 0x2427, 0x2725, 0x0028, 0x0000, 0x0000, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x0505, 0x0000, 0x0505, 0x0505, 0x0708, 0x0607, 0x0505, 0x1c05, 0x1b1b, 0x051d, 0x0505, 0x0708, 0x0607, 0x0505, 0x1b1c, 0x1b1b, 0x1d1b, 0x0505, 0x0708, 0x0607, 0x1c05, 0x1b1b, 0x1f1b, 0x1e20, 0x1b1b, 0x051d, 0x0708, 0x0607, 0x1b1c, 0x1b1b, 0x1d1b, 0x0708, 0x2207, 0x2121, 0x0723
};

// [D_08BD5852] D_08BD5878 RLE Data
u8 D_08bd5878_rledata[] = {
	0x2, 0xd, 0x4, 0xb, 0x5, 0xb, 0x6, 0x9, 0x7, 0x9, 0x7, 0x9, 0x7, 0x9, 0x7, 0x9, 0x7, 0x9, 0x0, 0x8, 0x9, 0x7, 0x9, 0x7, 0x9, 0x7, 0x9, 0x6, 0x5, 0x3, 0x3, 0x5, 0xb, 0x4, 0xd, 0x1, 0x0, 0x0
};

// [D_08BD5878] D_08BD5878 Graphics
struct CompressedGraphics D_08bd5878 = {
	/* Data */				{.raw = D_08bd5878_data},
	/* RLE Data */			D_08bd5878_rledata,
	/* RLE Size */			0x23,
	/* RLE Offset */		0x200,
	/* Double Compressed */	FALSE,
};

