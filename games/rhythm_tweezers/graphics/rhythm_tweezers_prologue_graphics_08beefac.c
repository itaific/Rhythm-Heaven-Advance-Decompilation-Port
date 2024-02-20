#include "global.h"
#include "graphics.h"

// // //  D_08BEEFAC  // // //

// [D_08BEE63C] D_08BEEFAC Huffman Data
u16 D_08beefac_huffmandata[] = {
	0x7777, 0x0023, 0xff00, 0xf123, 0x0003, 0x0154, 0x06a9, 0x06a9, 0x06a9, 0x0023, 0x3f20, 0xff23, 0x4000, 0x4054, 0x0027, 0xc0c0, 0xff57, 0x0000, 0x0054, 0x0323, 0xff00, 0x0303, 0x0303, 0x0303, 0x0157, 0xf030, 0xf1f0, 0x7555, 0x0723, 0x0ff0, 0x8088, 0x8080, 0x8080, 0x20f0, 0x2020, 0x2020, 0xe020, 0xf532, 0x0000, 0x5155, 0x5555, 0x0a23, 0x8080, 0x8080, 0x8080, 0x8480, 0x8080, 0x2ff0, 0x2020, 0x2020, 0xf020, 0x040f, 0xc404, 0x3233, 0x1123, 0x0332, 0xefea, 0x0fef, 0xfbf8, 0x3bfb, 0x3233, 0x1123, 0x0432, 0x0dfa, 0x1f7c, 0x1f1f, 0x1f1f, 0xdfdf, 0x3333, 0x3323, 0x0327, 0xc0c0, 0xc0c0, 0xc0c0, 0xc0c0, 0xf312, 0x5402, 0x5428, 0x5428, 0x5428, 0x0032, 0xf006, 0xf312, 0x5400, 0x54aa, 0x0223, 0x00f0, 0x080f, 0xf808, 0xf321, 0x4000, 0x40aa, 0x0423, 0xf0f0, 0x020f, 0x0202, 0x2fe2, 0x3020, 0x3333, 0x0057, 0xf8e0, 0x2157, 0x5400, 0xea55, 0x2333, 0x2111, 0x0223, 0x08f8, 0x0808, 0xf808, 0x2222, 0x2123, 0x0123, 0x02e2, 0xf202, 0xf132, 0x0001, 0xa855, 0xa855, 0x0223, 0x00f0, 0x0101, 0xff01, 0xf123, 0x0000, 0x00a9, 0x1112, 0x0023, 0xf0f0, 0xf132, 0x0001, 0xa155, 0xa155, 0x0223, 0x20e0, 0x2020, 0xe020, 0x0465, 0xfe30, 0xfef0, 0x0300, 0x0f3f, 0x3f03, 0x5236, 0x0001, 0xaa95, 0xff95, 0x6666, 0x0332, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0x0765, 0x3010, 0xf9f0, 0xf880, 0x0f80, 0xfc00, 0xf800, 0x0700, 0x3f0f, 0x3126, 0x0001, 0x7da9, 0x7da9, 0x1112, 0x0e32, 0xf606, 0x07f7, 0xfff0, 0xf7f7, 0xf7f7, 0x07f7, 0xf5f4, 0x01fe, 0xdfff, 0xdfdf, 0xdfdf, 0x00df, 0x40ff, 0x5f5f, 0x5b5f, 0xf123, 0x6401, 0x6444, 0x6444, 0x0f23, 0xff0a, 0x2020, 0x2020, 0x3020, 0x2020, 0x0400, 0x0404, 0x0c04, 0x0404, 0x0304, 0x40fc, 0x4040, 0x4040, 0x40c0, 0x9840, 0x80e8, 0x0557, 0x0fc0, 0x0c00, 0x0fcf, 0x3f0f, 0x0f7f, 0xfe38, 0x3125, 0x0005, 0xf6a9, 0xf6a9, 0xf6a9, 0xf6a9, 0xf6a9, 0xf6a9, 0x0032, 0xffc0, 0x2333, 0x0975, 0x80c0, 0x07f0, 0x017f, 0xf8fe, 0xc0f0, 0xf3f0, 0xc030, 0xff0f, 0xf01f, 0x0fcf, 0x7555, 0x5555, 0x0223, 0x8080, 0x8080, 0x8e80, 0xf312, 0x5400, 0x5428, 0x0732, 0xfff6, 0xfbf7, 0xfdfd, 0xfdfd, 0xfdfb, 0xfdfd, 0xfdfd, 0xfdfd, 0x3323, 0x0065, 0xfcf0, 0x0723, 0xb18a, 0x80c0, 0x8080, 0xc080, 0x0202, 0x0202, 0x0202, 0x0202, 0xf123, 0xa403, 0xa411, 0xa411, 0xa411, 0xa411, 0x0032, 0xfa1a, 0xff23, 0x1000, 0x1000, 0x0057, 0x80e0, 0xf457, 0x0001, 0x5a55, 0xa855, 0x5554, 0x0047, 0xe0f8, 0x7777, 0x4777, 0x0027, 0xe040, 0xf327, 0x0001, 0x0165, 0x15a9, 0x0023, 0x80e0, 0x3333, 0x3333, 0x0027, 0x3010, 0x7777, 0x7223, 0x0027, 0xf0c0, 0xf327, 0x4000, 0x50a5, 0x3333, 0x0145, 0xc080, 0xffe3, 0xf547, 0x5402, 0x6a55, 0x5a05, 0x5605, 0x0174, 0x8f0e, 0xefcf, 0x0057, 0xf000, 0x0054, 0x000c, 0x4447, 0x0054, 0xc3f0, 0x0174, 0x3000, 0xff7c, 0x0357, 0xf8f0, 0xf8f8, 0xf8f8, 0xe0f0, 0xf745, 0x5006, 0x50a9, 0x50a9, 0x50a9, 0x40a9, 0x40a9, 0x40a5, 0x40a5, 0x7744, 0x0172, 0xfefe, 0xe0fe, 0xf372, 0x0005, 0x2a54, 0x2a54, 0x2a54, 0x5554, 0x55a0, 0x55a0, 0x0132, 0x0c0c, 0xcfc0, 0xff23, 0x0000, 0x0005, 0x0027, 0xe040, 0x7777, 0x0123, 0x0ff0, 0xc8e8, 0xf237, 0x0002, 0x00a5, 0x00a5, 0x00a5, 0x7223, 0x0027, 0x1030, 0xf327, 0x0008, 0x0001, 0xaa94, 0xaa94, 0xaa94, 0xaa94, 0xaa50, 0x5540, 0xa500, 0xa500, 0x0047, 0x807c, 0x7744, 0x0157, 0xf1f0, 0xf0fc, 0xf574, 0x5403, 0x52aa, 0x52aa, 0x42aa, 0x4aaa, 0x0045, 0xc0c0, 0x0c57, 0xc080, 0xe0e0, 0xf8e0, 0xe0fc, 0x0f0f, 0x0e08, 0x0f8f, 0x0f03, 0x0f3f, 0x0703, 0x0808, 0x0e0c, 0x7f3e, 0xff45, 0x0000, 0x0155, 0x0047, 0xf8fe, 0xff47, 0x0000, 0x0050, 0x0045, 0xf070, 0x5554, 0x0147, 0xf8fe, 0x00c0, 0x0045, 0xc700, 0x0274, 0x0100, 0x0f8f, 0x8800, 0xff47, 0x0000, 0x0001, 0x0045, 0xc0c0, 0xf745, 0x0001, 0x0054, 0x4095, 0x0174, 0x0e0c, 0xcf9f, 0xf547, 0x0003, 0x0001, 0x006a, 0x05aa, 0x52aa, 0x0045, 0x80c0, 0x5555, 0x0047, 0x7030, 0xf547, 0x0002, 0x0015, 0x0056, 0x015a, 0x0157, 0xc080, 0xf8e0, 0x4447, 0x5444, 0x0047, 0xc0f0, 0x7777, 0x0245, 0x7030, 0x80fc, 0xf0e0, 0xf745, 0x4002, 0x4055, 0x5095, 0x54a5, 0x0074, 0x8f0e, 0x0357, 0xffc0, 0x0e0f, 0x0c0c, 0x0c0c, 0x5577, 0x0047, 0x0080, 0xff45, 0x0000, 0x0055, 0x0332, 0xfcfc, 0xfcfc, 0xfcfc, 0xc000, 0xf723, 0x4006, 0x4059, 0x4059, 0x4059, 0x4059, 0x4059, 0x4059, 0x4059, 0x2272, 0x0123, 0x8000, 0xe0c0, 0xf723, 0x4000, 0x5495, 0x0072, 0xcf0e, 0x1237, 0x0003, 0xa6f9, 0xa6f9, 0xa6f9, 0xa6f9, 0x1123, 0x0432, 0xf212, 0xb3f3, 0xff7f, 0xfef0, 0xfefe, 0xf132, 0x1400, 0x8455, 0x0223, 0x3060, 0x183f, 0x7818, 0x7132, 0x1406, 0x1200, 0x150c, 0x15fc, 0x15fc, 0x15fc, 0x15fc, 0x15fc, 0x0472, 0x0e0e, 0xf3fe, 0xf3f3, 0xf3f3, 0x13b3, 0x2277, 0x0223, 0x0ff0, 0x0ffc, 0xff03, 0x0057, 0xf8fc, 0xf547, 0x0001, 0x00a4, 0x0050, 0x0045, 0xfce0, 0x0074, 0x0f8e, 0xff47, 0x0000, 0x0005, 0x0123, 0x3f20, 0xf8f8, 0xf723, 0x4002, 0x4059, 0x4059, 0x4059, 0x2272, 0x0323, 0x8080, 0xf080, 0x0c0f, 0xcc0c, 0xf123, 0x5000, 0x51a4, 0x0172, 0xfcfc, 0xfcfc, 0x0723, 0x3060, 0x0408, 0x0202, 0x0202, 0x1c0e, 0x6030, 0xc0c0, 0xc0c0, 0xf327, 0x0003, 0x00a5, 0x00a5, 0x00a5, 0x00a5, 0x0032, 0x0c0c, 0xff32, 0x0000, 0x5555, 0x0027, 0xc0c0, 0x7777, 0x2277, 0x0432, 0xfbf8, 0xfbfb, 0x0ff7, 0xdfdf, 0x1f00, 0xf123, 0x0001, 0x00a9, 0x00a9, 0x1112, 0x0032, 0x8f00, 0xf213, 0x0001, 0x0095, 0x0095, 0x2111, 0x0223, 0x4fc0, 0x4040, 0x1e20, 0xf312, 0x5401, 0x54aa, 0x54aa, 0x0032, 0x8f00, 0xf213, 0x0002, 0x0095, 0x8095, 0x8095, 0x0172, 0x3e3e, 0x3e3e, 0x7772, 0x2277, 0x0232, 0x01f0, 0xfdf0, 0xbdfd, 0xf123, 0x0401, 0x0464, 0x0464, 0x2123, 0x0023, 0x0ff2, 0xf123, 0x5402, 0xa900, 0xa555, 0xa400, 0x0032, 0x0f00, 0xf732, 0x0007, 0x5555, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x7777, 0x0132, 0xf3fc, 0x7f7c, 0xf372, 0x0402, 0x042a, 0x040a, 0x0422, 0x0132, 0x1f0e, 0xff7f, 0x7777, 0x0332, 0x3f00, 0x3f3f, 0x3f3f, 0x3e3f, 0xf123, 0x0402, 0x0050, 0x0091, 0x0091, 0x1232, 0x0123, 0x10d0, 0x1010, 0x7123, 0x0007, 0x4601, 0x46fd, 0x46fd, 0x45fd, 0x40fd, 0x40fd, 0x40fd, 0x40fd, 0x0072, 0xefe0, 0xf327, 0x5006, 0x9401, 0xa501, 0xa501, 0xa501, 0xa501, 0x9401, 0x5165, 0x0432, 0x3f0e, 0x7f7f, 0x7f7f, 0x003f, 0xe1ff, 0xf123, 0xa400, 0xa401, 0x0132, 0xfe1e, 0x000f, 0x1372, 0x4005, 0x42aa, 0x4200, 0x423c, 0x423c, 0x4200, 0x42aa, 0x0072, 0x0100, 0x1327, 0x9404, 0x94aa, 0x9455, 0x947d, 0x947d, 0x9455, 0x0023, 0x00f0, 0xf123, 0x4001, 0x4015, 0x401a, 0x3211, 0x0023, 0x0078, 0x2222, 0x2222, 0x0657, 0xf0e0, 0x30fc, 0x01f0, 0x0f0f, 0x0f0f, 0x0e0e, 0xfc0e, 0x0145, 0x0808, 0x0c0c, 0x4445, 0x5555, 0x0374, 0x8f80, 0x0f0f, 0x8f0f, 0xcf8f, 0x0027, 0x1810, 0xf327, 0x5007, 0x9401, 0xa501, 0xa501, 0xa501, 0xa501, 0x9401, 0x0565, 0x15a9, 0x0223, 0x80c0, 0x8080, 0xc080, 0x0227, 0x1010, 0x1010, 0xf000, 0x1372, 0x4008, 0x42aa, 0x42aa, 0x42aa, 0x428a, 0x4232, 0x4232, 0x4232, 0x500a, 0x40aa, 0x0023, 0x80c0, 0x1f23, 0x0000, 0x0040, 0x0427, 0x1010, 0x3030, 0x8030, 0xc080, 0xc0c0, 0xf327, 0x5000, 0x54a5, 0x0023, 0x1030, 0x3333, 0x3332, 0x0073, 0xfff0, 0x0657, 0x0f8c, 0x0800, 0x0e0e, 0x0f0f, 0xef0f, 0xf3f0, 0x00f7, 0xf745, 0x5000, 0x00aa, 0x7444, 0x0145, 0xe0f0, 0xc0c0, 0x5555, 0x4555, 0x0147, 0x1010, 0x3030, 0x0027, 0x0800, 0xf327, 0x5005, 0x9400, 0xa500, 0xa500, 0xa500, 0xa500, 0x9400, 0x0027, 0x3010, 0x7777, 0x2223, 0x0027, 0xc080, 0x7777, 0x3222, 0x0475, 0x7010, 0x7070, 0xf0f0, 0xf3f1, 0x0ff7, 0x0245, 0x080c, 0x0808, 0xce0c, 0x0374, 0xe800, 0xcfcf, 0x8f8f, 0xef8f, 0xfff7, 0x0000, 0x0000, 0x0323, 0xf0f8, 0xc0e0, 0x8080, 0x8080, 0x7123, 0x6401, 0x54d4, 0x00d4, 0x7223, 0x0023, 0xffe0, 0x3333, 0x0127, 0x3030, 0x3030, 0xff27, 0x0000, 0x0005, 0x0023, 0xff80, 0xf723, 0x0000, 0x0054, 0x7223, 0x0123, 0xe0e0, 0xe0e0, 0x2272, 0x0232, 0x8f0e, 0xefcf, 0xefef, 0xf723, 0x0001, 0x0005, 0x05aa, 0x0227, 0xf0f0, 0xc0c0, 0xc0c0, 0x7777, 0x2277, 0x0357, 0xc0fe, 0xf0f0, 0xf0f0, 0x00f8, 0xf475, 0x5404, 0xa855, 0xa055, 0x8056, 0x005a, 0x005a, 0x7444, 0x0145, 0x00e0, 0xf8e0, 0x0147, 0xf8fc, 0xf030, 0x7744, 0x0157, 0xcff0, 0x0f0f, 0x5577, 0x0147, 0x7ef0, 0x1010, 0x0027, 0xfc30, 0x1327, 0x5003, 0x5156, 0x1676, 0x1656, 0x16aa, 0x0123, 0xffe0, 0x8080, 0x3333, 0x2333, 0x0127, 0x1010, 0x1c10, 0xf372, 0x0000, 0x8014, 0x0127, 0xc0c0, 0xf0c0, 0xf327, 0x0002, 0x0055, 0x00a5, 0x00a5, 0x0132, 0xf7fc, 0xf001, 0x2223, 0x3333, 0x0172, 0xfffe, 0xe0fc, 0x2233, 0x7222, 0x0023, 0x80e0, 0x3333, 0x3333, 0x0127, 0x0080, 0xf8c0, 0x2227, 0x0232, 0xef8c, 0xefff, 0x0f8f, 0xf032, 0x0000, 0x5540, 0x0000, 0x0000
};

// [D_08BEEE24] D_08BEEFAC Huffman Window 1
u32 D_08beefac_window1[] = {
	0xdfc92dfe, 0xcbf77de4, 0xdf64e5fd, 0xfeff76fb, 0xbef7bd3b, 0x9f6cff7f, 0xcbffdbbd, 0x93cb9ffc, 0xf5b3af5f, 0x0006927c
};

// [D_08BEEE4C] D_08BEEFAC Huffman Window 2
u32 D_08beefac_window2[] = {
	0x9525422a, 0x144a8894, 0x2a1494a8, 0x2a455511, 0xaa954aa5, 0x4111520a, 0x10520929
};

// [D_08BEEE68] D_08BEEFAC Huffman
struct Huffman D_08beefac_huffman[] = {
	/* Data */			D_08beefac_huffmandata,
	/* Size */			0x8a5,
	/* Count */			0x134,
	/* Window 1 */		D_08beefac_window1,
	/* Window 2 */		D_08beefac_window2,
};

// [D_08BEEE78] D_08BEEFAC RLE Data
u8 D_08beefac_rledata[] = {
	0x1, 0xf, 0x5, 0x3, 0xf, 0x9, 0x5, 0x9, 0x13, 0x7, 0x9, 0xb, 0x12, 0x12, 0x11, 0xf, 0x15, 0xd, 0xe, 0x4, 0x12, 0xe, 0x11, 0xb, 0x2b, 0x6, 0x15, 0x8, 0x13, 0x6, 0x5, 0x4, 0x1b, 0x6, 0x16, 0x7, 0x13, 0x9, 0x3, 0x3, 0x1, 0x6, 0x3, 0x6, 0x7, 0x9, 0x1, 0x5, 0x5, 0x5, 0x1, 0x8, 0x2, 0x5, 0x1, 0x3, 0x1, 0xb, 0x11, 0x3, 0x7, 0x5, 0x1, 0x4, 0x3, 0x8, 0x1, 0x5, 0x2, 0x8, 0x5, 0xb, 0x4, 0xc, 0x9, 0x7, 0x21, 0x9, 0x27, 0x9, 0x3, 0x3, 0x21, 0x7, 0x5, 0x4, 0x10, 0xa, 0x6, 0x7, 0x2, 0x6, 0x8, 0x8, 0x1, 0x3, 0x7, 0x5, 0x1, 0xa, 0x16, 0xf, 0x5, 0xb, 0x1, 0x7, 0x2, 0x6, 0x1, 0x4, 0x3, 0x8, 0x9, 0x7, 0x6, 0xa, 0x3, 0xd, 0x5, 0xb, 0x7, 0x9, 0x31, 0x4, 0x3, 0x8, 0x35, 0xb, 0x1, 0x3, 0xb, 0x3, 0xf, 0x9, 0x6, 0x9, 0x8, 0x6, 0x1a, 0x9, 0x7, 0x5, 0x4b, 0xb, 0x5, 0x9, 0x29, 0xd, 0x3, 0xd, 0x3, 0xd, 0x2, 0xf, 0x10, 0x6, 0xd, 0xc, 0x1, 0x3, 0x2, 0xa, 0x1, 0x3, 0x1, 0xb, 0x1, 0x8, 0x8, 0x5, 0x7, 0x3, 0x1, 0xd, 0x2, 0xf, 0x2, 0x8, 0x8, 0x3, 0x5, 0x7, 0x9, 0x7, 0x1, 0x3, 0x17, 0x5, 0x8, 0x8, 0x14, 0xc, 0xb, 0x5, 0x1, 0x5, 0x12, 0x8, 0x7, 0x9, 0x1, 0xd, 0x2, 0xd, 0x4, 0xe, 0x11, 0xc, 0x15, 0xd, 0x83, 0xd, 0x3, 0xc, 0x4, 0xb, 0xd, 0x7, 0x4, 0x3, 0x3, 0x6, 0x4, 0xc, 0x17, 0xd, 0x14, 0x8, 0x31, 0xa, 0x18, 0x6, 0xa, 0x5, 0x1b, 0x5, 0x13, 0x3, 0x15, 0x6, 0xa, 0x9, 0x15, 0xa, 0x16, 0xd, 0x81, 0x3, 0xf, 0xa, 0x6, 0xb, 0x15, 0x4, 0x3c, 0x5, 0x25, 0x5, 0x1, 0x5, 0xa, 0x7, 0x13, 0x6, 0x6, 0xa, 0x17, 0x9, 0x11, 0x7, 0x19, 0x9, 0x6, 0xb, 0x6, 0xd, 0x4d, 0x5, 0x1, 0x5, 0x3c, 0xe, 0x1, 0x4, 0x28, 0x3, 0x1, 0x5, 0x2, 0x8, 0x9, 0x7, 0x1, 0x5, 0x3, 0x7, 0x4, 0x16, 0x17, 0x5, 0x23, 0x7, 0x28, 0x8, 0x1, 0x8f, 0x0, 0x0
};

// [D_08BEEFAC] D_08BEEFAC Graphics
struct CompressedGraphics D_08beefac = {
	/* Huffman Data */		D_08beefac_huffman,
	/* RLE Data */			D_08beefac_rledata,
	/* RLE Size */			0x132,
	/* RLE Offset */		0xe00,
	/* Double Compressed */	TRUE,
};

u8 D_08beefbc[4] = {
	0x3C, 0x00, 0x40, 0x00
};

