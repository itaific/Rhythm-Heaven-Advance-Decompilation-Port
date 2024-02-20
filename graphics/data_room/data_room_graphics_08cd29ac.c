#include "global.h"
#include "graphics.h"

// // //  D_08CD29AC  // // //

// [D_08CD21DC] D_08CD29AC Huffman Data
u16 D_08cd29ac_huffmandata[] = {
	0x08e0, 0xc080, 0x03e1, 0x5533, 0x5133, 0xe051, 0x81c3, 0xbe90, 0x9ed2, 0x0e92, 0xfd01, 0x0000, 0xaa55, 0x04e0, 0x4aea, 0x4a44, 0x704a, 0x7515, 0x7215, 0xffe0, 0x0400, 0x0000, 0x0978, 0x6010, 0x0180, 0x6016, 0x0180, 0x0806, 0x0608, 0x20c1, 0x0010, 0x380c, 0x0106, 0x0098, 0x033c, 0xf798, 0x540b, 0x0150, 0x000a, 0xaaa5, 0x0055, 0x2aaa, 0x9505, 0x6a54, 0x55aa, 0xaa00, 0x55aa, 0x0015, 0xaa80, 0x9777, 0x0289, 0x77f0, 0x0f88, 0xfef1, 0xf789, 0x5407, 0xaa55, 0x14a5, 0x400a, 0x0152, 0xa802, 0x02a6, 0x0155, 0x6405, 0x8899, 0x0078, 0x0808, 0x0198, 0x0800, 0xf800, 0xf879, 0x4000, 0x9400, 0x7799, 0x0087, 0xffce, 0x5798, 0x000a, 0x9555, 0x2955, 0x000a, 0x9555, 0x2955, 0x02a5, 0x000a, 0x8055, 0x6a56, 0x0055, 0x0080, 0xf865, 0x5402, 0x55aa, 0x85aa, 0x01a2, 0x0085, 0x0e0c, 0x0378, 0x4080, 0x1020, 0x0408, 0x0102, 0xf658, 0x1001, 0x5090, 0x40aa, 0x6666, 0x0058, 0xc0f0, 0x0198, 0xc000, 0x0738, 0xf987, 0x5401, 0x4255, 0x2a55, 0x7777, 0x0198, 0x3cc0, 0x0803, 0xf789, 0x4000, 0x5501, 0x9977, 0x0089, 0xf3f0, 0xf789, 0x9000, 0x9501, 0x8889, 0x0078, 0x0808, 0xf978, 0x4002, 0x9000, 0x9000, 0x015a, 0x8877, 0x0098, 0xfff0, 0xf879, 0x4007, 0x9400, 0xa950, 0xaaa5, 0x4000, 0x9400, 0xa950, 0xaaa5, 0x4000, 0x0068, 0x1010, 0x8888, 0x8556, 0x0058, 0x1030, 0x0068, 0xe080, 0xf568, 0x0000, 0x5055, 0x5666, 0x0085, 0x0700, 0x0198, 0x38c0, 0x0807, 0x8999, 0x0378, 0x4040, 0x8080, 0x1080, 0x2010, 0x8888, 0x0079, 0x0738, 0xf978, 0x0001, 0x5054, 0xa5a9, 0x0189, 0x18c6, 0x8c63, 0xf798, 0x5400, 0xa955, 0x0078, 0x2010, 0xf978, 0x0001, 0xa844, 0x0292, 0x0078, 0x0804, 0xff78, 0x4000, 0x4000, 0x0098, 0x739c, 0x9998, 0x0097, 0xef10, 0x0189, 0x3180, 0x18c6, 0x9988, 0x9889, 0x0079, 0x738c, 0xf879, 0x0004, 0x5094, 0xa5a9, 0x00aa, 0x0040, 0x5094, 0x0187, 0x0fce, 0xf3fc, 0x0698, 0x000c, 0x31ce, 0x38c0, 0xce07, 0x0031, 0x80f0, 0xf078, 0x9998, 0x0378, 0x4020, 0x8040, 0x0080, 0x0101, 0xf978, 0x0402, 0x6aaa, 0x16aa, 0x015a, 0x0197, 0xfce2, 0xfefe, 0x9997, 0x0189, 0xfff0, 0x8c73, 0xf978, 0x0003, 0x0040, 0x0090, 0xa4a4, 0xa49a, 0x0279, 0x9112, 0x4448, 0xa122, 0x9999, 0x0078, 0x8080, 0xf789, 0x5400, 0x4095, 0x7888, 0x0179, 0xc000, 0x0c30, 0xf897, 0x5002, 0x5505, 0x05a0, 0xa0aa, 0x8888, 0x0179, 0x0c30, 0x0c03, 0xf897, 0x5002, 0x5505, 0x50aa, 0x0aaa, 0x0098, 0xf030, 0xf978, 0x0002, 0x2aa9, 0xaa94, 0xa540, 0x0089, 0xc0f8, 0xf897, 0x4005, 0x2a55, 0xaa54, 0xaa42, 0xaa2a, 0x0550, 0xa055, 0x7799, 0x0078, 0x3030, 0x8888, 0x7799, 0x0087, 0xcfee, 0xf798, 0x0003, 0x00a5, 0x2a55, 0x9554, 0x5540, 0x0178, 0x4080, 0x0080, 0xf978, 0x0000, 0x0040, 0x9788, 0x0078, 0x1020, 0x0197, 0x3af6, 0xfefd, 0xf879, 0x0004, 0x0055, 0x50a9, 0xa5aa, 0x00aa, 0x05a8, 0x8999, 0x0297, 0xcff0, 0xb81f, 0xfce7, 0xf978, 0x0001, 0x0040, 0x5095, 0x9999, 0x0178, 0x0010, 0x800c, 0x0197, 0x7f80, 0x7887, 0xff78, 0x0000, 0x4040, 0x0197, 0x7f88, 0xff1f, 0x0098, 0xf0fe, 0xf798, 0x0009, 0x0a50, 0xa500, 0x5500, 0x002a, 0x0254, 0x2940, 0x9500, 0x560a, 0x68a5, 0x8055, 0x9977, 0x0078, 0x10c0, 0xf798, 0x0003, 0x0029, 0x0295, 0x2955, 0x9555, 0x0078, 0x0700, 0xf879, 0x4000, 0x00a5, 0x7799, 0x0089, 0xf030, 0xf789, 0x0003, 0x6955, 0x8a55, 0x0295, 0x2965, 0x0378, 0x0284, 0x0601, 0x0080, 0x7880, 0x8777, 0x7888, 0x0089, 0xf0fe, 0xf789, 0x0003, 0x5540, 0x5595, 0x9529, 0x2902, 0x9999, 0x0387, 0xf9fe, 0xfff0, 0xf9fe, 0x9fe7, 0xff78, 0x0000, 0x5454, 0x0097, 0xffee, 0xf789, 0x0005, 0x5554, 0xaaa9, 0x5502, 0x5509, 0xa502, 0x0a00, 0x9999, 0x0278, 0x8080, 0x4040, 0x2040, 0xf978, 0x0008, 0x0004, 0x00a4, 0x0040, 0x0090, 0x00a4, 0x40a9, 0x40aa, 0x90aa, 0x90aa, 0x0679, 0x0808, 0x10e7, 0xc708, 0x0030, 0xc010, 0x0c30, 0xc003, 0x0098, 0xf070, 0xf789, 0x5400, 0x400a, 0x7788, 0x0089, 0x0fc0, 0xf978, 0x0003, 0x0aa9, 0xaa94, 0xa940, 0x9400, 0x0078, 0x1080, 0xf798, 0x0002, 0x0009, 0x00aa, 0x0a55, 0x7799, 0x0078, 0xf030, 0x8887, 0x0179, 0x1ce0, 0x0c03, 0x9977, 0x7799, 0x0089, 0xfff0, 0x0278, 0x618e, 0x8010, 0x1060, 0xf978, 0x5401, 0x5500, 0x00a4, 0x9777, 0x0178, 0xe080, 0x801f, 0xf897, 0x5407, 0x52aa, 0x4aaa, 0x2aaa, 0x55aa, 0x5550, 0x554a, 0x542a, 0x42aa, 0x0378, 0x2010, 0x0020, 0x0201, 0x0402, 0x7888, 0x0398, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0x0079, 0x1030, 0xf789, 0x0002, 0x0009, 0x00a5, 0x0a55, 0x0078, 0x00c0, 0xf978, 0x0000, 0x5554, 0x9997, 0x0578, 0xf080, 0x804f, 0x0100, 0x0402, 0x0804, 0x0804, 0xf978, 0x0002, 0xaa01, 0xaaa5, 0xaa50, 0x8888, 0x0097, 0xcffc, 0xf789, 0x0005, 0x02a5, 0x2955, 0x9555, 0x0055, 0x0002, 0x0009, 0x9788, 0x0079, 0x3000, 0xf789, 0x0002, 0x00a5, 0x0255, 0x2955, 0x0478, 0x1080, 0x4020, 0x0080, 0x0402, 0x0808, 0x6665, 0x0096, 0x0e0c, 0x9556, 0x0095, 0xe0c0, 0xf659, 0x0001, 0x0040, 0x5095, 0x6666, 0x0059, 0xc0f0, 0x9999, 0x0378, 0x8080, 0x1010, 0x2020, 0x4020, 0x0098, 0xfff0, 0x0179, 0xef08, 0x0818, 0x6579, 0x4001, 0x4000, 0x43fa, 0x0198, 0xc0c0, 0xc0c0, 0xf978, 0x0004, 0x4050, 0x1595, 0x0090, 0x9490, 0xa9aa, 0x9999, 0x0378, 0x0100, 0x0402, 0x0808, 0x2010, 0x8888, 0x7778, 0x0058, 0xf0c0, 0x8888, 0x6688, 0x0058, 0xf7f0, 0xf865, 0x0001, 0xaa55, 0xa855, 0x0378, 0x0804, 0x1008, 0x2010, 0x4020, 0x5559, 0x6665, 0x0059, 0xf0fc, 0x0079, 0x8380, 0xf879, 0x5007, 0x0240, 0x2845, 0xaa50, 0xaa1a, 0xaa1a, 0xaa1a, 0x5655, 0x0100, 0x0098, 0x7798, 0x9998, 0x0096, 0xfcfe, 0x9655, 0x9999, 0x0478, 0x2010, 0x4820, 0x0284, 0x0401, 0x1f08, 0xf978, 0x0001, 0x4050, 0x95a5, 0x0089, 0xfffc, 0x0087, 0xcf30, 0xf978, 0x0000, 0xa550, 0x9977, 0x0089, 0xfff0, 0xf978, 0x4000, 0x9500, 0x7788, 0x0079, 0xc030, 0x0778, 0x0402, 0x1008, 0x2010, 0x8040, 0x0201, 0x0202, 0x0404, 0x0804, 0xf978, 0x4001, 0x9000, 0xa400, 0x7799, 0x0887, 0xefcc, 0xbfdf, 0xff7f, 0xfdfe, 0x7bfd, 0xfeff, 0xfefe, 0xfdfd, 0xfbfb, 0xf978, 0xa408, 0xa900, 0xa900, 0xaa40, 0xaa90, 0xaaa5, 0x5400, 0xa940, 0x16a9, 0x016a, 0x8779, 0x0078, 0x1010, 0xf978, 0x5002, 0x9014, 0x9140, 0x5400, 0x8888, 0x0779, 0x8e70, 0x0e71, 0xc001, 0x8c30, 0x8c03, 0x1c63, 0x30c3, 0x8f00, 0xf987, 0x5401, 0x5542, 0x5554, 0x0079, 0x0778, 0xf879, 0x4001, 0x9405, 0xa940, 0x8779, 0x0078, 0x0010, 0xf568, 0x0000, 0x0029, 0x5666, 0x0085, 0xef8e, 0xf568, 0x0002, 0x9554, 0x5550, 0x56aa, 0x0058, 0xfcfe, 0xf978, 0x000a, 0xa001, 0x0016, 0x016a, 0x16a9, 0x6a94, 0xa940, 0x9400, 0x4000, 0x6aa5, 0xaa50, 0x9500, 0x0078, 0x7080, 0xf978, 0x0006, 0x0140, 0x0016, 0x506a, 0xa5aa, 0xa8aa, 0x806a, 0x4096, 0x9997, 0x0189, 0x0100, 0x1f07, 0xf987, 0x5002, 0x0a95, 0xaa55, 0xa050, 0x7799, 0x0678, 0xc030, 0xc030, 0x1300, 0x806c, 0x0181, 0xc836, 0x0300, 0xf978, 0x5003, 0xa500, 0x6a16, 0x1601, 0x0100, 0x0098, 0xfff0, 0x0079, 0x638c, 0xf879, 0x4001, 0x9401, 0xa940, 0x8779, 0x0678, 0x0010, 0x6010, 0x0380, 0xc03c, 0x0601, 0xc836, 0x0300, 0x7788, 0x8888, 0x0397, 0xcf38, 0xfcf3, 0x9e7e, 0x79e7, 0xf978, 0x5000, 0x00aa, 0x9977, 0x0278, 0x30c0, 0x08c0, 0x060b, 0xf078, 0x4000, 0xaa00, 0x0000
};

// [D_08CD285C] D_08CD29AC Huffman Window 1
u32 D_08cd29ac_window1[] = {
	0x6ddfbb7f, 0x9bfeb73b, 0xf2fdb777, 0xf677bf6e, 0xbeee57be, 0xe4bf5aed, 0xedbb7cbc, 0x1b2fb7ed
};

// [D_08CD287C] D_08CD29AC Huffman Window 2
u32 D_08cd29ac_window2[] = {
	0x1552694a, 0x54910aa1, 0xa95494a5, 0x8aa8a152, 0x54a44450, 0x00525555
};

// [D_08CD2894] D_08CD29AC Huffman
struct Huffman D_08cd29ac_huffman[] = {
	/* Data */			D_08cd29ac_huffmandata,
	/* Size */			0x687,
	/* Count */			0xfd,
	/* Window 1 */		D_08cd29ac_window1,
	/* Window 2 */		D_08cd29ac_window2,
};

// [D_08CD28A4] D_08CD29AC RLE Data
u8 D_08cd29ac_rledata[] = {
	0x1, 0x5, 0x7, 0x7, 0xb, 0x3, 0x6, 0x8, 0xb, 0x15, 0x1, 0x19, 0x1, 0x5, 0x1, 0xf, 0xb, 0x9, 0xd, 0x7, 0x13, 0x1a, 0xe, 0xd, 0x6, 0xa, 0x4, 0xf, 0x8, 0x5, 0x1, 0x3, 0x8, 0x4, 0x1, 0x4, 0x3, 0x8, 0x2, 0x5, 0x4, 0x5, 0x1, 0x4, 0x5, 0x11, 0x7, 0x3, 0x1c, 0x6, 0xa, 0xc, 0x5, 0xe, 0x8, 0x8, 0x1, 0xf, 0x4, 0xc, 0x3, 0xf, 0xc, 0x3, 0xf, 0x4, 0x12, 0x4, 0x7, 0x6, 0x5, 0xf, 0x7, 0xe, 0x14, 0xc, 0xa, 0x6, 0x1, 0x8, 0x8, 0xe, 0x2, 0x3, 0xa, 0x7, 0xc, 0x8, 0x5, 0xf, 0xe, 0xf, 0xa, 0xc, 0x2a, 0x6, 0xe, 0x3, 0x5, 0xa, 0x1, 0x4, 0x7, 0x12, 0x3, 0xe, 0x2, 0xe, 0x9, 0xf, 0x5, 0xd, 0x9, 0xb, 0x4, 0xc, 0x14, 0xa, 0xf, 0x6, 0x8, 0x3, 0x16, 0x8, 0x1d, 0x5, 0xa, 0x11, 0x17, 0x3, 0x8, 0x14, 0x6, 0x4, 0x3b, 0xa, 0x6, 0xd, 0xa, 0x3, 0x6, 0x6, 0x5, 0x3, 0x22, 0x5, 0x13, 0x3, 0x25, 0x8, 0x18, 0x8, 0x9, 0xb, 0xb, 0x8, 0x32, 0x5, 0xa, 0x7, 0x17, 0x5, 0x14, 0x3, 0xf, 0xf, 0xe, 0x9, 0x4, 0xc, 0x9, 0x7, 0x1, 0x7, 0x9, 0x9, 0x11, 0x6, 0x10, 0x9, 0x2, 0x4, 0x13, 0xb, 0x11, 0xb, 0x7, 0x9, 0x11, 0x5, 0x1, 0x9, 0x13, 0xb, 0x11, 0x7, 0xb, 0x6, 0xa, 0x5, 0x5, 0xf, 0x30, 0xc, 0x11, 0xe, 0x2, 0x8, 0x6, 0x9, 0x3e, 0xa, 0x1, 0x3, 0x11, 0xb, 0x3, 0x8, 0xd, 0x8, 0x4, 0xc, 0xa, 0x15, 0x21, 0xb, 0x9, 0xc, 0x2c, 0x4, 0x1, 0xc, 0xb, 0x8, 0x9, 0x7, 0x12, 0x3, 0x13, 0x8, 0x4, 0x3, 0x13, 0x6, 0xb, 0x5, 0x19, 0x3, 0xb, 0x3, 0x1b, 0xf, 0x19, 0x3, 0x8, 0x8, 0x2b, 0x5, 0x17, 0x3, 0xb, 0xb, 0x1, 0xef
};

// [D_08CD29AC] D_08CD29AC Graphics
struct CompressedGraphics D_08cd29ac = {
	/* Huffman Data */		D_08cd29ac_huffman,
	/* RLE Data */			D_08cd29ac_rledata,
	/* RLE Size */			0x108,
	/* RLE Offset */		0xc00,
	/* Double Compressed */	TRUE,
};

u8 D_08cd29bc[8] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

