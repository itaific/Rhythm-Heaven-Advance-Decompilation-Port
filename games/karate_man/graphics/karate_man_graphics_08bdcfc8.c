#include "global.h"
#include "graphics.h"

// // //  D_08BDCFC8  // // //

// [D_08BDCC74] D_08BDCFC8 Huffman Data
u16 D_08bdcfc8_huffmandata[] = {
	0x02cf, 0x80f0, 0xfce0, 0xfce0, 0x00ce, 0x8380, 0x01fc, 0xf7f0, 0xf031, 0x1bfe, 0xffc0, 0x10f0, 0x0070, 0x0c0c, 0xf808, 0xe0f8, 0x8fcf, 0x0f0f, 0x0f0f, 0x0f0f, 0x0f0f, 0xcf0f, 0x0f8f, 0xce0e, 0xcfcf, 0xefef, 0xefef, 0xf0ef, 0x70f1, 0xf000, 0x7070, 0x3070, 0x1810, 0xce0c, 0xe0e0, 0xf0f0, 0xf0f0, 0xf0f0, 0x02cf, 0x8c00, 0x0e0f, 0x0f8c, 0x14fe, 0xfefe, 0xf0f8, 0x3e1e, 0xfe7e, 0xfefe, 0xfefe, 0xc0e0, 0x1080, 0x7030, 0xfef0, 0xfcfc, 0xf0f8, 0x0707, 0x0707, 0x0f0f, 0x7fff, 0x3f7f, 0x1f3f, 0x0f1f, 0x0808, 0x1f0c, 0x03cf, 0xf8c0, 0xf8c0, 0xc0fe, 0xfef8, 0x09fe, 0xe0f0, 0x80c0, 0xe020, 0xfcf0, 0xf0f8, 0x7078, 0x7070, 0xf0f0, 0xfefe, 0xfcfc, 0xccff, 0xcfff, 0x0fec, 0x8080, 0x4000, 0xc0c0, 0x3ec0, 0x3e3e, 0x3e3e, 0x7e7e, 0xf07c, 0xf9f0, 0x0707, 0x0307, 0x0103, 0x1f08, 0xfcfe, 0xe0f8, 0x80c0, 0xcccc, 0xeccc, 0x03cf, 0xf8c0, 0xc0fe, 0xfef0, 0xfef0, 0x09ec, 0x7e7e, 0x3e3e, 0x3e3e, 0x3e3e, 0xe0e0, 0xe0e0, 0x10e0, 0x3030, 0x3030, 0x30c0, 0x02fc, 0x31f0, 0xf000, 0x7031, 0x0bec, 0xd7c0, 0xc07f, 0xf080, 0xf8fc, 0xc0e0, 0x7f7f, 0x7c7e, 0x8038, 0xf0c0, 0xe07c, 0xf3f7, 0x1071, 0x00fc, 0x71f0, 0x14ec, 0xe0e0, 0xf0e0, 0x70f0, 0x7878, 0xfcfc, 0xf8f8, 0xf0f0, 0xe0e0, 0x1010, 0x7030, 0xf0f0, 0x7ef1, 0x0c1e, 0x1018, 0xf070, 0xf3f0, 0xf7f3, 0x0007, 0x0808, 0x0e0c, 0xcf8f, 0x07fe, 0xf0f0, 0x0f00, 0x0f0f, 0x0f0f, 0x0f0f, 0x7fff, 0x0f7f, 0xef8f, 0xffff, 0x00ce, 0xfef0, 0xccce, 0xcccc, 0x00ef, 0xf0f8, 0xffff, 0xeeee, 0x00cf, 0xe080, 0xccff, 0xcccc, 0x03fe, 0xfe18, 0xfefe, 0xfefe, 0xfefe, 0xfffe, 0xffff, 0x00ce, 0xe01c, 0xcccc, 0x00fe, 0xe0fc, 0xeeee, 0xfeff, 0x00cf, 0xfce0, 0xfecf, 0x0000, 0x50a9, 0x02ec, 0x0f0e, 0x8f8f, 0xefcf, 0x09fe, 0x8f00, 0xcfcf, 0xffef, 0x7073, 0xf0f0, 0xf0f0, 0xf070, 0xf7f7, 0xf1f3, 0x3070, 0xfcfe, 0x4000, 0x5001, 0xcfff, 0x00ec, 0xf3c0, 0xceee, 0x0dfe, 0x10e0, 0x3010, 0xfef0, 0xf0fc, 0xc0e0, 0xfe80, 0xfefe, 0x703e, 0xf0f0, 0x83e3, 0x0f87, 0x0f0f, 0x0f0f, 0x8f0f, 0xfcef, 0x0000, 0xa815, 0x00ce, 0xfcf8, 0x00cf, 0xf8e0, 0x03fe, 0xf0f0, 0xf1f1, 0xf1f1, 0xf1f1, 0xeeef, 0x03cf, 0xf080, 0xfffe, 0x8000, 0xfef0, 0xffff, 0xccff, 0x02ce, 0x3030, 0xcfe8, 0xefcf, 0xffec, 0x0000, 0x0001, 0xccff, 0x03ec, 0xe0f0, 0x0c0f, 0x0c0c, 0xf808, 0xeeec, 0xcccc, 0x03ef, 0xf0f0, 0xf0f0, 0xe0f0, 0xe0e0, 0x02ce, 0xf8fc, 0xf0f0, 0x03f8, 0x00cf, 0xe080, 0xccff, 0xcccc, 0x00fe, 0xfefe, 0x01cf, 0x0f08, 0xcf08, 0x04ec, 0x1cf0, 0x0fe0, 0x0c08, 0x3f0f, 0xc71f, 0xf0ce, 0x5000, 0x5515, 0x0000, 0x0000
};

// [D_08BDCECC] D_08BDCFC8 Huffman Window 1
u32 D_08bdcfc8_window1[] = {
	0x492fe4ff, 0xe597d7ca, 0x0000003c
};

// [D_08BDCED8] D_08BDCFC8 Huffman Window 2
u32 D_08bdcfc8_window2[] = {
	0x24800000, 0x00475808
};

// [D_08BDCEE0] D_08BDCFC8 Huffman
struct Huffman D_08bdcfc8_huffman[] = {
	/* Data */			D_08bdcfc8_huffmandata,
	/* Size */			0x392,
	/* Count */			0x47,
	/* Window 1 */		D_08bdcfc8_window1,
	/* Window 2 */		D_08bdcfc8_window2,
};

// [D_08BDCEF0] D_08BDCFC8 RLE Data
u8 D_08bdcfc8_rledata[] = {
	0x1, 0xf, 0x1, 0xf, 0x1, 0x4, 0x5, 0x6, 0x4, 0xc, 0x5, 0xb, 0x1, 0xa, 0x6, 0x3, 0x1, 0x9, 0x4, 0xe, 0x1, 0x3, 0x1, 0x7, 0xf, 0x5, 0x1, 0x9, 0x7, 0x8, 0x1, 0x7, 0x10, 0x7, 0x19, 0x8, 0x2d, 0xa, 0x1, 0xe, 0x2, 0x8, 0x3, 0x4, 0x1, 0x7, 0x1f, 0x3, 0x7, 0x5, 0xa, 0x4, 0x1c, 0xa, 0x9, 0x1a, 0x4, 0x6, 0x5, 0x4, 0x6, 0xa, 0x9, 0x3, 0x5, 0x9, 0x6, 0x5, 0xc, 0x7, 0x8, 0x7, 0x3, 0x9, 0x23, 0xa, 0xc, 0x5, 0x2, 0xd, 0x11, 0xa, 0x6, 0x4, 0x5, 0x6, 0x4, 0xc, 0x11, 0x6, 0xa, 0x5, 0xa, 0xf, 0x2, 0xd, 0x3, 0xa, 0x6, 0x4, 0x3, 0x8, 0x2, 0xe, 0x4, 0xb, 0x6, 0xb, 0x1, 0x7, 0x13, 0xa, 0x8, 0x3, 0xa, 0x6, 0x1, 0x8, 0x3, 0x5, 0x20, 0x3, 0xd, 0x8, 0x2a, 0xd, 0x17, 0x9, 0x6, 0xa, 0x1, 0x9, 0x1, 0x9, 0x4, 0x8, 0x5, 0xb, 0x1, 0x5, 0x1, 0x4, 0x17, 0xe, 0x3, 0x7, 0x2, 0x4, 0xa, 0x6, 0x2a, 0x6, 0x12, 0xa, 0x7, 0x7, 0x7, 0x3, 0x15, 0x7, 0x21, 0x4, 0x3, 0x7, 0x12, 0x8, 0xf, 0x8, 0x1, 0xe, 0x2, 0xb, 0xe, 0x6, 0x2, 0x12, 0x1, 0x8, 0x1, 0x4, 0x2, 0x8, 0x1, 0xa, 0x8, 0x5, 0x2, 0x8, 0x1c, 0x4, 0x8, 0xa, 0x4, 0x9, 0x4, 0x6, 0x5, 0x7, 0x1, 0x6, 0x3, 0x3, 0x2, 0x8, 0x1, 0xa, 0x6, 0x5, 0x9, 0x7, 0x1, 0x0, 0x20, 0x0, 0x0, 0x0
};

// [D_08BDCFC8] D_08BDCFC8 Graphics
struct CompressedGraphics D_08bdcfc8 = {
	/* Huffman Data */		D_08bdcfc8_huffman,
	/* RLE Data */			D_08bdcfc8_rledata,
	/* RLE Size */			0xd4,
	/* RLE Offset */		0x800,
	/* Double Compressed */	TRUE,
};

