#include "global.h"
#include "graphics.h"

// // //  D_08C61E18  // // //

// [D_08C61664] D_08C61E18 Huffman Data
u16 D_08c61e18_huffmandata[] = {
	0x0000, 0x06b7, 0x71f0, 0xf010, 0xf030, 0xe1f7, 0x0f8f, 0xcf0e, 0x0f0f, 0xbb77, 0x0067, 0xff00, 0xf6b7, 0x0001, 0x0555, 0xaa95, 0x02b7, 0xf7f0, 0xf071, 0x107f, 0xfeb7, 0x0000, 0x9555, 0x027b, 0xf030, 0xf3f0, 0xf030, 0xf6b7, 0x5403, 0x4000, 0x555a, 0xaa00, 0x0555, 0x016b, 0xe0e0, 0xe0e0, 0xf76b, 0x0001, 0xa054, 0x55aa, 0x00b7, 0xe0f8, 0xf6b7, 0x0000, 0xaa40, 0x009e, 0x8080, 0xfc9e, 0x0000, 0xaa40, 0xeeee, 0x00b9, 0xfefe, 0xfcb9, 0x5400, 0xaa55, 0x005e, 0x3060, 0xeeee, 0xee55, 0x00ce, 0xf0f0, 0x00be, 0xfff0, 0x00cb, 0xf808, 0xeeee, 0x00bc, 0xfcfe, 0xfecb, 0x0401, 0x5500, 0x00aa, 0xcccc, 0x019e, 0xe080, 0xfce0, 0x035e, 0x7efe, 0x7c7e, 0x3c3c, 0x181c, 0x01ce, 0x0100, 0x0f01, 0x005e, 0x0602, 0x55ee, 0x04ec, 0x01f0, 0xf800, 0xfcfc, 0x3f7f, 0xf0bf, 0x00e9, 0xc0f8, 0x9999, 0x005e, 0x8080, 0x009e, 0x7010, 0x03ce, 0x3010, 0xf020, 0xf7f0, 0x0e0f, 0xffce, 0x5000, 0x5000, 0x02e5, 0x7c30, 0xcf7f, 0xcfcf, 0x9b5e, 0x0003, 0x0005, 0x3eaa, 0x3eaa, 0x3eaa, 0x00ec, 0xf7f0, 0xceee, 0xcccc, 0x005e, 0xefe0, 0x00c5, 0xf000, 0x005e, 0xf7f0, 0x9ce5, 0x4002, 0x5000, 0x55aa, 0xf5d5, 0xfeb9, 0x5000, 0x5402, 0x999e, 0x019b, 0x7070, 0x3030, 0x5e9b, 0x0001, 0x0005, 0xbaaa, 0xeeee, 0x03bc, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0x025e, 0x1010, 0xf0f0, 0x73f3, 0xeeee, 0xee55, 0x03ce, 0x8080, 0x8080, 0x8080, 0x8080, 0x045e, 0x3c6c, 0x7f3e, 0x18fc, 0x0808, 0x80c0, 0x03ce, 0x1010, 0x1010, 0x1010, 0x1010, 0x055e, 0xf080, 0xfefe, 0x01fe, 0x3f07, 0x1f3f, 0x0307, 0xb9e5, 0x5007, 0xaa55, 0xab55, 0xaf56, 0xbf56, 0xbf5a, 0xff5a, 0xff5a, 0xff5a, 0xe999, 0x075e, 0x3030, 0x1010, 0x6000, 0xe060, 0xe1e0, 0xe3e1, 0x0fe7, 0xcf0c, 0x0095, 0xf000, 0x019b, 0x3070, 0x1010, 0xbbbb, 0x029e, 0xf0e0, 0xf0f0, 0xf8f8, 0xfb9e, 0x4000, 0x5055, 0xb999, 0x03ec, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0x019b, 0xe0f0, 0x80c0, 0xff9b, 0x0000, 0x0040, 0x03ce, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0x02e9, 0xf0f8, 0xf0f0, 0xe0e0, 0xfbe9, 0x0000, 0x0254, 0x01e9, 0x70fc, 0x1030, 0x01b9, 0xc080, 0xe0e0, 0x5eb9, 0x5000, 0xea55, 0xeee5, 0x009e, 0xc080, 0xeeee, 0x999e, 0x00b9, 0xf070, 0x99bb, 0xbbbb, 0x01e9, 0xe0f0, 0x80c0, 0x01b9, 0x0100, 0x0703, 0x019e, 0x3010, 0x0070, 0x05e5, 0xf0f0, 0x7070, 0x3830, 0x0ffe, 0x0e0c, 0x3e1e, 0xfce5, 0x5401, 0x5405, 0x0156, 0x02ec, 0xfefe, 0xfefe, 0xfefe, 0xeeec, 0x225e, 0x8010, 0x0e0f, 0x0c0c, 0x0c0c, 0xfc0c, 0xf7f7, 0xc1f3, 0x0101, 0x1f01, 0x0f3f, 0x0307, 0x0303, 0xe003, 0xc0e0, 0xf0e0, 0xf8f0, 0xc0fc, 0x80c0, 0x8080, 0xf080, 0xf0f0, 0x7070, 0x3030, 0x7030, 0x3070, 0x1030, 0x0080, 0x0703, 0xcf07, 0xe80f, 0xcfe9, 0x3f8f, 0x7030, 0xf070, 0xf0f0, 0xffe5, 0x5000, 0x0000, 0x01ec, 0xfefe, 0xfefe, 0xf5ec, 0x5402, 0x5495, 0x5495, 0x54a5, 0x145e, 0x010e, 0x0808, 0xcfce, 0x706f, 0xf0f0, 0x07fc, 0x0303, 0x7e01, 0xfe7e, 0xf070, 0x00f3, 0x3f07, 0xfcfe, 0xf8fc, 0x10f0, 0x7010, 0xf1f0, 0x73f3, 0xcfc0, 0x7fef, 0xf1fc, 0xeee5, 0x019e, 0xc080, 0xf0e0, 0xfb9e, 0x4001, 0x5055, 0x5595, 0xbbbb, 0x009c, 0xfefe, 0x02bc, 0xfefe, 0xfefe, 0xfefe, 0x99ee, 0x01b9, 0xf8c0, 0x80fe, 0xbbbb, 0x0a5e, 0xc0c0, 0xf1e0, 0x0303, 0x0303, 0x0303, 0x0703, 0xcfcf, 0x8787, 0x3303, 0xf070, 0xe1f0, 0xfce5, 0x5401, 0x8155, 0x8155, 0x02ce, 0x8080, 0x8080, 0x8080, 0x035e, 0x6020, 0x0c04, 0x0606, 0x3f0e, 0x5555, 0x019e, 0x3010, 0xf070, 0xeeee, 0x00b9, 0xf070, 0x01e9, 0xc0f0, 0x0080, 0x019b, 0xe0f8, 0x80c0, 0x005e, 0x1818, 0xeeee, 0x9999, 0x01ec, 0xfefe, 0xfefe, 0x019c, 0xfefe, 0xfefe, 0x019e, 0xe0c0, 0xfee0, 0x075e, 0x3030, 0x6030, 0xe0e0, 0xe9e0, 0x0fef, 0x0f0e, 0x0707, 0x0303, 0x02ce, 0x8080, 0x8080, 0x8080, 0xf5ce, 0x0000, 0x0040, 0xc5ee, 0x055e, 0xc0e0, 0x80c0, 0x3030, 0x3030, 0x3030, 0xe7c0, 0xeee5, 0xe55e, 0x019e, 0xf010, 0x30f1, 0x065e, 0x1010, 0x7030, 0xf0f0, 0xf0e0, 0x80f0, 0xfef0, 0x3c3e, 0x55ee, 0xeee5, 0x037e, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0x03e5, 0xe0f0, 0xf9c0, 0xfdfd, 0xf1f7, 0x03e7, 0xf8f8, 0xf8f8, 0xf8f8, 0xf8f8, 0x8888, 0x015e, 0xb110, 0x80f1, 0xeeee, 0x5eee, 0x038e, 0xf1f0, 0xf1f1, 0xf1f1, 0xf1f1, 0xeee8, 0x6666, 0x02be, 0xf0f0, 0x0fe0, 0xf00f, 0x6eee, 0x02b6, 0x7070, 0x7070, 0x7070, 0xffb6, 0x0000, 0x0015, 0x05be, 0xf800, 0xf010, 0x0300, 0x0f0f, 0xf03f, 0xf0f1, 0xf6be, 0x0000, 0x0a55, 0xeeee, 0x02b6, 0xfcfc, 0xfcfc, 0xfcfc, 0xf7b6, 0x5000, 0xaa55, 0x6666, 0x017e, 0xfcfc, 0xfcfc, 0x03e6, 0x07f0, 0x0707, 0xcf07, 0xcfcf, 0xeeee, 0xee66, 0x017e, 0x7070, 0x7070, 0xeeee, 0x6666, 0x039e, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0x005e, 0x1010, 0xb95e, 0x0007, 0xa005, 0xa0fa, 0x80fa, 0x80fa, 0x80fa, 0x00fa, 0x00ea, 0x00ea, 0xb999, 0x03eb, 0xf8f8, 0xfcfc, 0xfefc, 0xfefe, 0xfe9b, 0x5006, 0x50a5, 0x50a5, 0x50a9, 0x50a9, 0x54a9, 0x54aa, 0x54aa, 0x005e, 0x8080, 0xff5e, 0x0000, 0x0140, 0x039b, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0x03be, 0xe0e0, 0xc0c0, 0x80c0, 0x8080, 0x055e, 0xe0f0, 0xc0c0, 0x2060, 0xf030, 0x3071, 0x6030, 0xfc5e, 0x0000, 0x0010, 0xcccc, 0x009e, 0xc0c0, 0xbc9e, 0x000a, 0x0050, 0xffaa, 0xd550, 0xd550, 0xf550, 0xf550, 0xf550, 0xf550, 0xf550, 0xf550, 0xaa00, 0x00eb, 0xf8f8, 0xebbb, 0x01ce, 0x3030, 0xf070, 0x00bc, 0xf010, 0x01ce, 0xc0c0, 0xffe0, 0xe9bc, 0x0009, 0x5540, 0xfaa9, 0xfaa9, 0xfaa5, 0xfaa5, 0xfaa5, 0xfaa5, 0xfaa5, 0xfaa5, 0x00ff, 0x009b, 0xc0c0, 0xce9b, 0x0000, 0xaa50, 0xcccc, 0x00be, 0xe0e0, 0x5cbe, 0x0002, 0x0054, 0x00aa, 0x00c0, 0xcccc, 0x00e5, 0xfefe, 0xf9e5, 0x5400, 0xaa55, 0x025e, 0x7f3e, 0x18fc, 0x0808, 0x039e, 0x0808, 0x0808, 0x0808, 0x0808, 0x02eb, 0xf3f0, 0x30f7, 0xf1f0, 0xf5eb, 0x5400, 0x9555, 0x06be, 0xf0f0, 0xf7ff, 0xf073, 0xf073, 0x1030, 0xeff0, 0x0fcf, 0xbbbe, 0x039e, 0xf7f0, 0xf7f7, 0xf7f7, 0xf7f7, 0xfbe9, 0x4000, 0x9555, 0x03ae, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0x015e, 0x6020, 0xc6c4, 0xee55, 0x009b, 0x1010, 0xfe9b, 0x0003, 0x0005, 0x0006, 0x001a, 0x002a, 0x035e, 0xfff8, 0x787c, 0x8cd8, 0x0004, 0xeee5, 0x019e, 0x0c0e, 0x080c, 0x03eb, 0x8000, 0xc080, 0xf0e0, 0xfcf8, 0x009b, 0x8080, 0x5e9b, 0x0004, 0x0050, 0x0090, 0x00a4, 0x95a8, 0xa5aa, 0x5eee, 0x00e9, 0xfefc, 0x035e, 0x7ffc, 0x3c3e, 0x466c, 0x0002, 0x03ea, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0x03eb, 0x0100, 0x0301, 0x0f07, 0x3f1f, 0x0000
};

// [D_08C61C2C] D_08C61E18 Huffman Window 1
u32 D_08c61e18_window1[] = {
	0xf6e77ffa, 0x7cdbe7f6, 0xdf92ffb7, 0x7e7af5b7, 0x9b7a4b99, 0xedfbbfdc, 0x007bddef
};

// [D_08C61C48] D_08C61E18 Huffman Window 2
u32 D_08c61e18_window2[] = {
	0x40105554, 0x24908161, 0x40021290, 0x28a82a00, 0x01089154
};

// [D_08C61C5C] D_08C61E18 Huffman
struct Huffman D_08c61e18_huffman[] = {
	/* Data */			D_08c61e18_huffmandata,
	/* Size */			0x721,
	/* Count */			0xd8,
	/* Window 1 */		D_08c61e18_window1,
	/* Window 2 */		D_08c61e18_window2,
};

// [D_08C61C6C] D_08C61E18 RLE Data
u8 D_08c61e18_rledata[] = {
	0x1, 0xf, 0x1, 0xf, 0x1, 0x6, 0x5, 0x4, 0x4, 0xc, 0x1, 0x1c, 0xa, 0x9, 0x1, 0x7, 0xb, 0xd, 0x1, 0xe, 0x4, 0xd, 0x1, 0x6, 0x5, 0x4, 0x6, 0xa, 0x3, 0xf, 0x7, 0x7, 0x1, 0x9, 0x9, 0x13, 0x1, 0x9, 0x1, 0x4, 0xd, 0x4, 0x1, 0x9, 0x7, 0x9, 0x1, 0x10, 0x6, 0x3, 0x1, 0x5, 0x7, 0x3, 0x1, 0x5, 0x7, 0x3, 0x1, 0xb, 0x1, 0x3, 0x1, 0x5, 0x7, 0x3, 0x1, 0x5, 0x7, 0x3, 0x1, 0x5, 0x1, 0x5, 0x1, 0x3, 0x1, 0x12, 0x4, 0x8, 0x3, 0x4, 0x17, 0x3, 0x1, 0x6, 0x6, 0x3, 0x1, 0xb, 0x11, 0x3, 0x1, 0xd, 0x5, 0x3, 0x5, 0x7, 0xb, 0x3, 0x1, 0xb, 0x11, 0x9, 0x8, 0x8, 0x7, 0x3, 0x1, 0x8, 0x4, 0x3, 0x1, 0x5, 0x7, 0x3, 0x1, 0x5, 0x7, 0x3, 0x1, 0x14, 0x12, 0xd, 0x13, 0x5, 0x4, 0x6, 0x1, 0x10, 0x4, 0x6, 0x3, 0x3, 0x2, 0xe, 0x24, 0xb, 0x10, 0x7, 0x2, 0x7, 0x1, 0x5, 0x6, 0x4, 0x21, 0x5, 0x1b, 0x8, 0x11, 0x6, 0x2b, 0x5, 0x28, 0x3, 0x6, 0x4, 0x3, 0x8, 0x3, 0x18, 0x6, 0x3, 0x5, 0x7, 0x11, 0x9, 0x17, 0x4, 0x1d, 0xe, 0x15, 0x3, 0x6, 0xa, 0x4, 0x4, 0x1, 0xd, 0x2, 0x3, 0x2a, 0x3, 0x10, 0x6, 0xa, 0xf, 0xc, 0x5, 0x1, 0x6, 0x2a, 0xd, 0x2, 0x7, 0x12, 0x6, 0x2, 0x5, 0x6, 0x4, 0x6, 0xa, 0x1, 0x7, 0x5, 0x3, 0x11, 0xb, 0xe, 0x6, 0x6, 0x8, 0x3, 0xc, 0x4, 0x4, 0xc, 0x3, 0x1, 0xb, 0x12, 0x5, 0x5, 0x4, 0x1, 0x3, 0x2, 0xa, 0x8, 0x8, 0x11, 0x5, 0x15, 0x6, 0x10, 0xb, 0x5, 0xe, 0x2, 0x6, 0xa, 0x7, 0x9, 0x3, 0x3, 0x9, 0x15, 0x13, 0x1, 0x7, 0x11, 0xc, 0x4, 0x8, 0x3, 0x4, 0x1, 0x9, 0x12, 0x4, 0x1, 0x3, 0x25, 0x7, 0xc, 0x4, 0x6, 0x12, 0x5, 0x3, 0x1, 0xd, 0xe, 0x5, 0x8, 0x7, 0x1, 0x7, 0x24, 0x5, 0x4, 0xb, 0x11, 0xf, 0x1, 0x9, 0x6, 0x9, 0x4, 0x3, 0x11, 0xf, 0x1, 0x4, 0x1, 0xa, 0x1, 0x3, 0x1, 0xb, 0x1, 0x7, 0x2, 0x6, 0x1, 0x5, 0x1, 0x9, 0x3, 0xd, 0x14, 0xc, 0x1, 0x3, 0x3, 0x9, 0x5, 0xb, 0x1, 0xb, 0x5, 0x5, 0x3, 0x7, 0x1, 0x7, 0x3, 0x5, 0x11, 0x7, 0x1, 0x7, 0x9, 0x7, 0x1, 0x7, 0x9, 0x7, 0x11, 0x7, 0x11, 0xa, 0x35, 0xa, 0x33, 0x3, 0xe, 0x8, 0x1, 0x3, 0x7, 0x5, 0x1, 0x3, 0x1, 0x5, 0x11, 0x5, 0x1, 0x3, 0x11, 0x5, 0xb, 0x5, 0x11, 0x5, 0x1, 0x3, 0x7, 0x5, 0x1, 0x3, 0x7, 0x5, 0x1, 0x3, 0x1, 0x4, 0x2, 0x5, 0x1, 0x3, 0x7, 0xf, 0xc, 0x5, 0x16, 0x9, 0x1, 0x5, 0x5, 0x5, 0x2, 0x11, 0x2, 0xb, 0x1, 0x9, 0x1, 0x5, 0x8, 0x8, 0x1, 0x6, 0x3, 0x6, 0x6, 0xa, 0x9, 0x7, 0x13, 0xe, 0xf, 0x10, 0x1, 0x7, 0x9, 0x3, 0x25, 0x7, 0x11, 0x4, 0x13, 0x8, 0x31, 0x9f
};

// [D_08C61E18] D_08C61E18 Graphics
struct CompressedGraphics D_08c61e18 = {
	/* Huffman Data */		D_08c61e18_huffman,
	/* RLE Data */			D_08c61e18_rledata,
	/* RLE Size */			0x1ac,
	/* RLE Offset */		0xe00,
	/* Double Compressed */	TRUE,
};

u8 D_08c61e28[44] = {
	0xA8, 0x00, 0x88, 0x00, 0x48, 0x00, 0x88, 0x00, 0x78, 0x00, 0x88, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0xA8, 0x00, 0x98, 0x00,
	0x78, 0x00, 0x38, 0x00, 0x78, 0x00, 0x36, 0x00
};


