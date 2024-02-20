#include "global.h"
#include "graphics.h"

// // //  D_08BDC3AC  // // //

// [D_08BDC1B8] D_08BDC3AC Data
u16 D_08bdc3ac_data[] = {
	0x0000, 0x0036, 0x0034, 0x0035, 0x0039, 0x0037, 0x0038, 0x0037, 0x0437, 0x0438, 0x0437, 0x0439, 0x0000, 0x0435, 0x0434, 0x0436, 0x0400, 0x0000, 0x0040, 0x0043, 0x0041, 0x0042, 0x003b, 0x003c, 0x0000, 0x003a, 0x003f, 0x003d, 0x003e, 0x0044, 0x0444, 0x043e, 0x043d, 0x043f, 0x0000, 0x043a, 0x0400, 0x043c, 0x043b, 0x0442, 0x0441, 0x0443, 0x0440, 0x0000, 0x002a, 0x0029, 0x0000, 0x002d, 0x002b, 0x002c, 0x002e, 0x042e, 0x042c, 0x042b, 0x042d, 0x0000, 0x0400, 0x0429, 0x042a, 0x0400, 0x0000, 0x0033, 0x0030, 0x0031, 0x002f, 0x0000, 0x0032, 0x0000, 0x0032, 0x0400, 0x042f, 0x0400, 0x0431, 0x0430, 0x0433, 0x0400, 0x0000, 0x0000, 0x0000, 0x0049, 0x004c, 0x004d, 0x004a, 0x004b, 0x0000, 0x0000, 0x0046, 0x0047, 0x0048, 0x0000, 0x0048, 0x0447, 0x0446, 0x0400, 0x0400, 0x0400, 0x044b, 0x044a, 0x044d, 0x044c, 0x0449, 0x0400, 0x0400, 0x0000, 0x0051, 0x004f, 0x0050, 0x0000, 0x004e, 0x0045, 0x0000, 0x0045, 0x044e, 0x0400, 0x0450, 0x044f, 0x0451, 0x0000, 0x0045, 0x0000, 0x0045, 0x0000, 0x0021, 0x001f, 0x0020, 0x001d, 0x001c, 0x0020, 0x001d, 0x001c, 0x001f, 0x001e, 0x0000, 0x0021, 0x001f, 0x0020, 0x001d, 0x001c, 0x0020, 0x001d, 0x001c, 0x001f, 0x001e, 0x0000, 0x0023, 0x0022, 0x0024, 0x0022, 0x0024, 0x0022, 0x0422, 0x0423, 0x0000, 0x0018, 0x0019, 0x0018, 0x0019, 0x0018, 0x0019, 0x0018, 0x0019, 0x0000, 0x001a, 0x001b, 0x001a, 0x001b, 0x001a, 0x001b, 0x001a, 0x001b, 0x0000, 0x0027, 0x0028, 0x0027, 0x0028, 0x0027, 0x0028, 0x0027, 0x0028, 0x0000, 0x0018, 0x0019, 0x0018, 0x0019, 0x0018, 0x0019, 0x0018, 0x0019, 0x0000, 0x001a, 0x001b, 0x001a, 0x001b, 0x001a, 0x001b, 0x001a, 0x001b, 0x0000, 0x0025, 0x0026, 0x0025, 0x0026, 0x0025, 0x0026, 0x0025, 0x0026, 0x0000, 0x0052, 0x0000, 0x0000, 0x0052, 0x0000, 0x0000, 0x0052, 0x0000, 0x0000, 0x0052, 0x0000
};

// [D_08BDC36C] D_08BDC3AC RLE Data
u8 D_08bdc3ac_rledata[] = {
	0x1, 0x7, 0x10, 0x7, 0x2, 0x3, 0x18, 0x3, 0x1, 0x8, 0x10, 0x7, 0x1, 0x6, 0x7, 0x5, 0x8, 0x5, 0xe, 0x5, 0x12, 0x6, 0x3, 0x5, 0x3, 0x7, 0x4, 0xb, 0x2, 0x5, 0x2, 0x16, 0xb, 0x15, 0xb, 0x16, 0x9, 0x17, 0x9, 0x17, 0x9, 0x17, 0x9, 0x17, 0x9, 0x17, 0x9, 0x17, 0x9, 0xc, 0x1, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x1, 0x0, 0x82, 0x0, 0x0, 0x0
};

// [D_08BDC3AC] D_08BDC3AC Graphics
struct CompressedGraphics D_08bdc3ac = {
	/* Data */				{.raw = D_08bdc3ac_data},
	/* RLE Data */			D_08bdc3ac_rledata,
	/* RLE Size */			0x3c,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

