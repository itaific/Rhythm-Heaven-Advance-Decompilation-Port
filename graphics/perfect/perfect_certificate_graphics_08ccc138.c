#include "global.h"
#include "graphics.h"

// // //  D_08CCC138  // // //

// [D_08CCB850] D_08CCC138 Huffman Data
u16 D_08ccc138_huffmandata[] = {
	0x0000, 0x00ba, 0x80f0, 0x08cb, 0x7e7e, 0x7e7e, 0x7e7e, 0x7e7e, 0x0f00, 0xf7f0, 0xf7f7, 0xf3f3, 0xc071, 0xcccc, 0xffcb, 0x011f, 0xef80, 0x6def, 0xaf21, 0x0400, 0x0442, 0xf1ba, 0x0002, 0x0001, 0xa8aa, 0xfeff, 0x1f45, 0x5402, 0xa152, 0xaa95, 0xaaa8, 0x4fa1, 0x0000, 0xaa55, 0xa111, 0x1f54, 0x4002, 0x1aea, 0xaa90, 0xaa06, 0x5fff, 0x00af, 0xfff0, 0xfcba, 0x5403, 0x6940, 0x1a90, 0x6a90, 0x5aa4, 0xccba, 0x01ab, 0xff3c, 0xffef, 0xbf1a, 0x4000, 0x9000, 0xaaab, 0x5f1a, 0xabbb, 0x45f1, 0x1aaa, 0x545f, 0xf1aa, 0xf545, 0xfaf1, 0x9004, 0x9441, 0x9441, 0x9041, 0x9001, 0x9405, 0x00fa, 0x103e, 0x71fa, 0x0001, 0xbfe5, 0xaff9, 0x771f, 0x00f1, 0x0c08, 0x00af, 0xfe08, 0xcccb, 0x711f, 0xcccb, 0x711f, 0x1fcb, 0x5405, 0x54fe, 0x54fa, 0x54e9, 0x54a5, 0x5495, 0xbf15, 0xf71f, 0x4002, 0x4056, 0x416a, 0x01aa, 0x7711, 0x00f1, 0x300c, 0xafb1, 0x0000, 0xaaa9, 0xaaf1, 0x00fa, 0x1030, 0xf1ba, 0x0001, 0x0240, 0x0b00, 0xaaaa, 0xa1f5, 0xbaaa, 0x1f54, 0xbbba, 0xf545, 0xaaa1, 0x545f, 0xaa1f, 0x00ba, 0x0700, 0xdacb, 0x1404, 0x52a8, 0x54a1, 0x50a1, 0x0a85, 0xaa85, 0xaabb, 0xaf7d, 0xe40a, 0xe9bf, 0xf9bf, 0xf9af, 0xfa6f, 0xfe6f, 0xfe6f, 0xfe6f, 0x15af, 0x1a54, 0x1aa4, 0x15a4, 0x777d, 0x6666, 0x00f7, 0xff00, 0xaf76, 0x0002, 0x55e4, 0xaae5, 0xffea, 0xad7f, 0xa403, 0xa43f, 0xa93f, 0xa90f, 0x6a43, 0x67fa, 0xe402, 0xa4bf, 0x54aa, 0x4055, 0xfad7, 0x1403, 0x14ea, 0x14ea, 0x14ea, 0x14ea, 0x67fa, 0x4001, 0x40be, 0x40aa, 0x6d7f, 0x0002, 0x06a9, 0x07d4, 0x0540, 0x01af, 0x7e02, 0xfe7e, 0xd7af, 0x5403, 0x1255, 0x10be, 0x00aa, 0x4a00, 0x76fa, 0x4003, 0x501e, 0xd01e, 0xd01f, 0x5015, 0xad7f, 0x9003, 0xa41a, 0xa406, 0xa9c6, 0xa9c6, 0x6af7, 0x9402, 0xa4ff, 0xa400, 0xa555, 0x0071, 0xff7e, 0x6f17, 0x0000, 0x5555, 0x00f5, 0x77fe, 0x0015, 0xffc8, 0xfdf1, 0x0000, 0x2a85, 0x00f1, 0x8700, 0xf51f, 0x4000, 0x8000, 0x00f1, 0xf0f2, 0xff71, 0x5000, 0x552a, 0x01cb, 0x7e7e, 0x7e7e, 0x1fcb, 0x5407, 0x5415, 0x54a9, 0x54fa, 0x00fe, 0x00be, 0x00fa, 0x80fa, 0xa0fe, 0x00f1, 0x2e78, 0x751f, 0x0000, 0x8055, 0xad7f, 0x9004, 0x9306, 0x931a, 0x931a, 0x436a, 0x4f6a, 0xfa76, 0x4002, 0x557a, 0xfffa, 0x0007, 0x007f, 0x00fe, 0x01af, 0xfefe, 0xfffe, 0xf1af, 0x5400, 0x4255, 0x00fa, 0x1030, 0x71fa, 0x0004, 0x0005, 0x0016, 0x001a, 0x001a, 0x001a, 0xd7fa, 0xe402, 0xe56f, 0xf96f, 0xf95b, 0xaf7d, 0xa67f, 0xa400, 0x54c6, 0xaf77, 0x00af, 0xff80, 0xaf7d, 0x0004, 0x00f9, 0x40f9, 0x40ba, 0x90be, 0xa5be, 0x00fa, 0x1878, 0x67fa, 0x4003, 0x06f9, 0x06a9, 0x0555, 0x01aa, 0x7dd7, 0x67af, 0x5400, 0x54be, 0x7777, 0x00af, 0x1e0e, 0xd7af, 0x0403, 0x10a0, 0x42fa, 0x4bff, 0x42ff, 0xaf76, 0x5001, 0xa5fa, 0xeafe, 0xfd7a, 0x0004, 0x7f69, 0x73d7, 0x7cff, 0x9f00, 0xa7c0, 0x67fa, 0x4001, 0x40fe, 0x40aa, 0xad7f, 0x0003, 0x9690, 0x4690, 0x9690, 0xaa90, 0x67fa, 0x9400, 0x50ff, 0x7777, 0x00fa, 0x00f8, 0x6fd7, 0x1405, 0x8552, 0x8552, 0xa152, 0x2854, 0xca55, 0x2a3f, 0xdaf7, 0x4003, 0x555a, 0xf0fc, 0xf13c, 0xf13c, 0x00d7, 0x7e66, 0xa67f, 0xa402, 0x501a, 0x0f05, 0x41f0, 0x6f7d, 0x4004, 0x4069, 0x4069, 0x901a, 0x9006, 0xa7fd, 0xda7f, 0x5403, 0x0081, 0x87a0, 0x872a, 0x812a, 0x00fa, 0x1838, 0xd7fa, 0x4005, 0xfe00, 0xfe5b, 0xfe46, 0xfe56, 0xf9ab, 0xa5ff, 0x7fa6, 0x0001, 0xffa9, 0xaa95, 0xaf7d, 0xe403, 0xe46f, 0xe46f, 0xe96f, 0xf96f, 0x00fa, 0x183c, 0xf7da, 0x0001, 0x0000, 0xafe5, 0x007d, 0x0038, 0xf67d, 0x0002, 0xa940, 0x57d6, 0xfffd, 0xaaff, 0x00ba, 0x8080, 0xfcab, 0x1404, 0x8615, 0xa215, 0xaa15, 0x2855, 0x2855, 0x00ba, 0x0100, 0xfcab, 0x5401, 0x5255, 0x5255, 0x00ba, 0x0010, 0x1fba, 0x1000, 0x1410, 0xe1ff, 0x118a, 0x1fff, 0x81ae, 0x4e1f, 0x0000, 0xd499, 0x8e1f, 0x18f1, 0xe1f4, 0x1e81, 0xe1f4, 0x9401, 0x5529, 0x5541, 0x8e44, 0xf41e, 0xe8e8, 0xf441, 0x1e8e, 0xff44, 0x41e8, 0x411f, 0x441e, 0x18f1, 0xf441, 0x1e81, 0xa1f4, 0x5000, 0x5528, 0xf44f, 0xccba, 0x00ab, 0x7f3e, 0x1cba, 0x1004, 0x5410, 0x1464, 0x19a4, 0x1aa4, 0x0690, 0x54f1, 0x6402, 0x6455, 0xe455, 0xb455, 0x41af, 0x0000, 0x00c9, 0x4f1a, 0xfff5, 0x5f1a, 0x1f54, 0xa404, 0xffff, 0xe2aa, 0xe2aa, 0xe1aa, 0xe7aa, 0xfff4, 0xa1f1, 0x5ff4, 0x5af1, 0x8401, 0x8735, 0x0000, 0xbaaa, 0xabcc, 0x00ba, 0x1230, 0xfcab, 0x4003, 0x4151, 0x2148, 0xa14a, 0x854a, 0xaabc, 0x01ba, 0x8080, 0x8080, 0xfcba, 0x0004, 0x0141, 0x0692, 0x06a6, 0x01aa, 0x0069, 0xbccb, 0x00ba, 0x4060, 0x41fa, 0x0000, 0x55e9, 0x18f1, 0xfff4, 0x1e81, 0xe1f4, 0x5401, 0x2a29, 0xbf85, 0x8e1f, 0x9000, 0x9083, 0x14af, 0xe1ff, 0x84af, 0x841f, 0x0001, 0x0094, 0x0071, 0x1e81, 0xe41f, 0x5400, 0xfd96, 0xf441, 0xeafe, 0xf41e, 0x8e11, 0xf41e, 0x8e48, 0xf41e, 0x01ba, 0x0404, 0x3321, 0x1acb, 0x2402, 0x4485, 0x5485, 0x52a1, 0xaaab, 0xf1aa, 0xff54, 0x5f1a, 0xfff4, 0x4f1a, 0xfff5, 0x4f1a, 0x451f, 0x0003, 0x00e1, 0x00b1, 0x0031, 0x0031, 0x45ff, 0xaa1f, 0x4ff4, 0xa1f5, 0x5ff4, 0xa1f4, 0xe400, 0xe455, 0x154f, 0x0002, 0x00c9, 0x00c6, 0x00c4, 0x1f4f, 0x01ba, 0x2020, 0xcc84, 0xfcba, 0xa402, 0xa451, 0x9066, 0x406a, 0xabcc, 0x00f1, 0x993c, 0xfd51, 0x4000, 0xa001, 0x11dd, 0x00fd, 0x7c30, 0xfffd, 0x00bf, 0xfefc, 0x00f1, 0x0cfe, 0xf5d1, 0x0002, 0x0500, 0x1fa0, 0x3fa0, 0x2f51, 0x5007, 0x0cc2, 0x0cc2, 0x0cc2, 0x0cc2, 0x0cc2, 0x0cc2, 0x0cc2, 0x0cc2, 0x00bf, 0x7e3e, 0xbbbf, 0xfffb, 0x001f, 0xe7c0, 0xf5d1, 0x0001, 0x0a50, 0x0af4, 0xfbf1, 0x5405, 0x95aa, 0x90aa, 0x90aa, 0x90aa, 0x90aa, 0x90aa, 0xbbbb, 0x001f, 0x7e00, 0x00d1, 0x7e00, 0xfb1d, 0x0001, 0x4001, 0xaaaa, 0x00cf, 0xfcfe, 0xbcf1, 0x9403, 0x90aa, 0x90aa, 0x90aa, 0xd4aa, 0x00cb, 0xf000, 0x00fc, 0x1c18, 0xb1fc, 0x9403, 0xa401, 0xa401, 0xa401, 0x97fd, 0x03cb, 0x3f00, 0x7f7f, 0x7f7f, 0x7f7f, 0xd7af, 0x0006, 0xaa50, 0xff52, 0xbf52, 0xbf50, 0x2f14, 0x2f14, 0x0b15, 0x00fa, 0xff08, 0x00d7, 0xfe00, 0xfad7, 0x5407, 0xaa55, 0xaafa, 0xaa3a, 0xaa3a, 0xaa3a, 0xff3a, 0x00ff, 0x55a0, 0xaa7d, 0x007f, 0xff00, 0xdddd, 0x00f7, 0x7f00, 0xd7fa, 0x0008, 0x00e5, 0x45e5, 0x4655, 0x46aa, 0x46be, 0x45be, 0x41be, 0x41fe, 0x41fe, 0xddd7, 0x01af, 0xfefe, 0xfefe, 0xd7af, 0x400a, 0x0a55, 0xaf54, 0xff40, 0x550a, 0x5505, 0x5585, 0x5581, 0x50e1, 0x52e0, 0x12f8, 0x12f8, 0x7dd7, 0x007f, 0xff00, 0x1f7d, 0x0003, 0x4054, 0x4069, 0x4069, 0x901a, 0xf4f1, 0x5400, 0x9525, 0x001f, 0xc420, 0xe4f1, 0x5000, 0x1be4, 0x00f1, 0x813c, 0x5f71, 0x5400, 0xa815, 0x1551, 0x001f, 0xf8f8, 0xbd1f, 0x9005, 0xa56a, 0xa4aa, 0xa5aa, 0xa4aa, 0x50aa, 0x4355, 0xcbf1, 0x4003, 0x055e, 0x17fe, 0x5ffe, 0x7ffe, 0x00cb, 0x7e7e, 0x001f, 0x1088, 0xffff, 0xff51, 0x01f1, 0x7c9e, 0xe3f1, 0x71fb, 0x5400, 0xf55a, 0x6df7, 0x4004, 0x4a84, 0x4884, 0x4fc0, 0x4000, 0x54a1, 0xad7f, 0xa401, 0xa4c1, 0xffc6, 0x007f, 0xfe00, 0x1d7f, 0xa400, 0x0faa, 0xff1a, 0x0005, 0x0029, 0x000a, 0x0029, 0x0025, 0x0025, 0x0025, 0xaf11, 0x00fa, 0x0e00, 0xda7f, 0x5008, 0xf4aa, 0xf42a, 0xfd2a, 0x7d0a, 0x7f4a, 0x1f42, 0xaa00, 0xaa15, 0xaa1f, 0xaf76, 0x9000, 0x95ff, 0x7daf, 0x5414, 0x50ea, 0x53aa, 0x53aa, 0x4ff1, 0x4eb1, 0x4eb1, 0x4eb1, 0x4eb0, 0x43ac, 0x53ac, 0x53ac, 0x5400, 0x54fc, 0x54eb, 0x54ea, 0x14ea, 0x04fe, 0xc403, 0xc550, 0x0ffc, 0xfaac, 0xd67f, 0xa401, 0x50fa, 0xd4a5, 0x007d, 0x701c, 0xd7af, 0x540a, 0x1400, 0x14a8, 0x10be, 0x12fe, 0x02f8, 0x82fe, 0xe2ff, 0xa0bf, 0xe04a, 0xe04b, 0xfa0b, 0xf77d, 0x007d, 0x0080, 0xafd7, 0x140a, 0x1254, 0xff52, 0xaa02, 0x0252, 0x5250, 0x5255, 0x0255, 0x4a54, 0x5255, 0xa055, 0x01aa, 0x777f, 0x007d, 0x9090, 0x367d, 0x5403, 0x4001, 0x00a5, 0x15f4, 0xa554, 0xdaf7, 0xa400, 0xa403, 0xff77, 0x01af, 0xef8c, 0x8fff, 0xdf7a, 0x0010, 0x8025, 0x9558, 0x9fd8, 0x9fd8, 0x7f68, 0xff60, 0xffda, 0x7ff6, 0x9ff6, 0x5600, 0xf600, 0xf600, 0xf602, 0x560a, 0xaa09, 0xa029, 0x6027, 0x00d7, 0x3f00, 0xafd7, 0x5402, 0x14a0, 0x84ea, 0x85be, 0x004f, 0x0810, 0x45f1, 0x5407, 0x5515, 0x55a0, 0x5538, 0x5aa8, 0x55a8, 0x95a8, 0xd4a8, 0x55a8, 0x2f51, 0x5401, 0x0cc2, 0x0002, 0x5d1f, 0x540b, 0x94aa, 0x94aa, 0x94aa, 0x94aa, 0x54aa, 0x5faa, 0x7f00, 0x7d00, 0x7600, 0x76c0, 0x7600, 0x5603, 0xa1f4, 0x5403, 0x95a6, 0x57ff, 0x5a55, 0x6aff, 0xf15a, 0x0004, 0x00e9, 0x00e9, 0x00e9, 0x00e9, 0x00e9, 0xf115, 0x02fa, 0x07e0, 0xf07f, 0x3070, 0xdf7a, 0x0003, 0x02a9, 0x0255, 0x0275, 0x0a77, 0xdd76, 0xdaf7, 0xa404, 0x55aa, 0x01aa, 0xf1aa, 0xf1aa, 0xc5aa, 0xffff, 0x67ff, 0x0081, 0x00fe, 0xf18a, 0x0004, 0x9555, 0x2aaa, 0x5600, 0xa855, 0x00aa, 0x0018, 0xff80, 0x00ba, 0x4060, 0xfbca, 0x0005, 0x2890, 0x2658, 0x2558, 0x0960, 0x0960, 0x0980, 0x00ba, 0x0030, 0x0681, 0xfe00, 0x5647, 0x5667, 0xf057, 0x7447, 0x7447, 0x0c77, 0xcba1, 0x0001, 0x5be5, 0x5a95, 0x0081, 0xfe00, 0xf81a, 0xa402, 0x90aa, 0x90aa, 0xa4aa, 0x0218, 0xd010, 0xd55d, 0x545d, 0xf718, 0x5001, 0x1555, 0x6aaa, 0x0218, 0xbb80, 0x9090, 0x9390, 0x0071, 0xfe00, 0x1cba, 0x9001, 0x5006, 0xff01, 0xa871, 0x0004, 0x2aa9, 0xcaa9, 0xf2a9, 0xf2a9, 0xcaa9, 0x0000
};

// [D_08CCC08C] D_08CCC138 Huffman Window 1
u32 D_08ccc138_window1[] = {
	0xdc036be6, 0xf9600db0, 0xafffffff, 0xdfffdfd7, 0xe400210f, 0x28c6d911, 0x5b608060, 0xdafffb9f, 0x7f7f3efe, 0xff2dffbb, 0x000000ff
};

// [D_08CCC0B8] D_08CCC138 Huffman Window 2
u32 D_08ccc138_window2[] = {
	0xfb565af8, 0xae9d54bd, 0xf55776fd, 0x315efabe, 0x356a4a53, 0xdf56af6e, 0x0000ca92
};

// [D_08CCC0D4] D_08CCC138 Huffman
struct Huffman D_08ccc138_huffman[] = {
	/* Data */			D_08ccc138_huffmandata,
	/* Size */			0x68d,
	/* Count */			0x149,
	/* Window 1 */		D_08ccc138_window1,
	/* Window 2 */		D_08ccc138_window2,
};

// [D_08CCC0E4] D_08CCC138 RLE Data
u8 D_08ccc138_rledata[] = {
	0x1, 0xf, 0x1, 0xf, 0x1, 0xf, 0x1, 0xe, 0x14, 0xb, 0x10, 0x4, 0xf, 0xe, 0xd, 0x4, 0xd, 0x3, 0x3d, 0x3, 0x26, 0xd, 0x36, 0x3, 0xb, 0xa, 0x0, 0x5b, 0x5, 0x2f, 0x3, 0x87, 0x7, 0x79, 0x3, 0x35, 0x3, 0x15, 0x5, 0x43, 0x7, 0x1d, 0x3, 0x3d, 0x3, 0x59, 0x9, 0x62, 0x3, 0x74, 0x4, 0x9, 0x8, 0x3, 0x3, 0x33, 0xd, 0x12, 0xe, 0x3, 0xd, 0x3, 0xe, 0x2, 0xd, 0x2, 0x4, 0xd, 0x4, 0x10, 0xb, 0x5, 0xb, 0x5, 0xb, 0x5, 0xc, 0x4, 0xb, 0x1f, 0x3, 0x4f, 0x2f, 0x0
};

// [D_08CCC138] D_08CCC138 Graphics
struct CompressedGraphics D_08ccc138 = {
	/* Huffman Data */		D_08ccc138_huffman,
	/* RLE Data */			D_08ccc138_rledata,
	/* RLE Size */			0x52,
	/* RLE Offset */		0x800,
	/* Double Compressed */	TRUE,
};

