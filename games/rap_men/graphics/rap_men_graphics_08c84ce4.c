#include "global.h"
#include "graphics.h"

// // //  D_08C84CE4  // // //

// [D_08C82D04] D_08C84CE4 Huffman Data
u16 D_08c84ce4_huffmandata[] = {
	0x02f0, 0xe080, 0xfef8, 0xff00, 0x027f, 0x3c3c, 0x3c3c, 0x3c3c, 0x03f0, 0xf070, 0xf7f1, 0xe3c0, 0xf7f7, 0xf9f0, 0x0007, 0x0040, 0x4094, 0x90a9, 0x00aa, 0x0005, 0x015a, 0x16aa, 0x6aaa, 0x00f0, 0x8010, 0xfef0, 0x0004, 0x0090, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0xef00, 0x00f0, 0x3700, 0xf7fe, 0x4004, 0x905a, 0x64a9, 0x5999, 0x649a, 0x54a6, 0x000f, 0xfef0, 0xe0f7, 0xa40a, 0x94aa, 0x90aa, 0x41aa, 0x41aa, 0x6aaa, 0xda55, 0xf617, 0xaa41, 0xaa55, 0xa500, 0x9404, 0x01f0, 0xe0c0, 0xf8f0, 0x0000, 0xfff0, 0x017f, 0xe3e0, 0xf0f1, 0x050f, 0xfcf0, 0xe0f0, 0x7fc0, 0x3f3f, 0x1f3f, 0x1f1f, 0x0000, 0xfff0, 0x007f, 0xe7e0, 0xfbf7, 0x4001, 0x4001, 0x6009, 0x01bf, 0x7e7e, 0x7e7e, 0x050f, 0xf3f0, 0x1071, 0x1010, 0x0010, 0x0808, 0xfc08, 0x9af0, 0x5004, 0x6400, 0x9900, 0x9900, 0xa400, 0xa400, 0x99f0, 0x00f9, 0x0010, 0x00a9, 0xf010, 0x999a, 0x00fa, 0x1824, 0xafaa, 0x009a, 0x9ef0, 0x0f9a, 0x0009, 0x2040, 0xf940, 0xf9ff, 0xe5ff, 0xe5ff, 0x95ff, 0x95ff, 0x95ff, 0x95ff, 0xbfff, 0xfdf0, 0x0003, 0x0090, 0x00a4, 0x00a9, 0x40a9, 0xdddd, 0x00f0, 0x7e00, 0x00df, 0xff7e, 0x017d, 0x4040, 0xf0e0, 0xfdf0, 0x0004, 0x0001, 0x0006, 0x001a, 0x006a, 0x006a, 0xdddd, 0x000f, 0xf7fe, 0xf07f, 0x4000, 0x2a41, 0x77ff, 0x02f0, 0xc0e0, 0xc0c0, 0xe0c0, 0xf0f7, 0x4000, 0x50aa, 0x020f, 0x0e0e, 0x0e0e, 0x0f0e, 0x7ef0, 0x0003, 0x5da4, 0x5da4, 0x7da4, 0xd690, 0x00f0, 0x80f8, 0x0000, 0x02f7, 0x929a, 0x87fe, 0xf9e1, 0x08f0, 0xfffe, 0x0100, 0x0703, 0x1f0f, 0x3f1f, 0xcf80, 0xcfcf, 0x0e0f, 0x0c0e, 0xff00, 0x00f7, 0xf0f0, 0x01fd, 0xf0f0, 0xe1e0, 0xf7df, 0x5400, 0xa801, 0xff77, 0x060f, 0xc0c0, 0xf8c0, 0xf8f8, 0xf8f8, 0x0707, 0x0707, 0x0707, 0xf7f0, 0x4000, 0x0055, 0x777f, 0x00bf, 0x7e7e, 0x027f, 0x7e7e, 0x7e7e, 0xff7e, 0x020f, 0xe0e0, 0xe0e0, 0xe0e0, 0xf70f, 0x0000, 0x2a54, 0x0bf0, 0xf0c0, 0xfefc, 0xfefe, 0xf3fe, 0xf3f1, 0x30f1, 0x8010, 0xc0c0, 0xe0e0, 0xf8f0, 0x3f00, 0x7f7f, 0xfa0f, 0x0007, 0x5554, 0x55a1, 0x55a8, 0x55a8, 0x55a8, 0x55a8, 0x55a1, 0x55a1, 0xaaf0, 0x00fa, 0x040e, 0xf9fa, 0x5401, 0x1000, 0x4080, 0x9aaa, 0x02fa, 0x0010, 0x0e04, 0x0004, 0xa0f9, 0x4007, 0x40aa, 0x90aa, 0x90aa, 0x90aa, 0x77aa, 0x77aa, 0x9daa, 0x6aaa, 0x7f0d, 0x0004, 0xc095, 0xff95, 0xff95, 0xff95, 0xff95, 0xd5f0, 0x0000, 0x00a9, 0x7d5f, 0x5400, 0xfffa, 0x0fd7, 0x5404, 0x40fe, 0x00fe, 0x00fe, 0x00fe, 0x00fe, 0xf50f, 0x5400, 0x552a, 0xf555, 0x0bf0, 0xe080, 0xf0f0, 0xfcf8, 0xf7fe, 0x7070, 0x3030, 0xf010, 0x0fef, 0x080f, 0x3f3f, 0x0f1f, 0x0c0c, 0xff00, 0x0000, 0x037f, 0x3c3c, 0xfe3c, 0xfefe, 0xfefe, 0x000f, 0xf8f8, 0x370f, 0x400b, 0x5255, 0x5255, 0x5255, 0x5255, 0x5255, 0xa855, 0xa855, 0xa855, 0xff15, 0xc315, 0xc3c5, 0xc3c5, 0x3f00, 0x0073, 0x00f0, 0x00ef, 0x2418, 0x73ef, 0x1001, 0x6a04, 0x3fa9, 0x3f70, 0x0006, 0x0095, 0x0095, 0x02ff, 0x02eb, 0x0beb, 0x0beb, 0x0bff, 0x07f0, 0xfcfe, 0x70f8, 0x30f0, 0xc010, 0xefef, 0xc7ef, 0x0f01, 0x0103, 0xfaf0, 0x9001, 0x9000, 0x4000, 0x0000, 0x01fa, 0x0c0e, 0x0100, 0xfaf0, 0x9405, 0x40aa, 0x0055, 0x6aaa, 0x1aaa, 0x06aa, 0x016a, 0x0ffa, 0x00f0, 0x3010, 0x75f0, 0x0006, 0x00a9, 0x00f4, 0x0050, 0xf5ff, 0x505f, 0x0005, 0x006a, 0x0f77, 0x02f0, 0x8030, 0xf080, 0x30f3, 0xf3f0, 0x0013, 0xaa90, 0xaa90, 0xaa90, 0xaa40, 0xaa40, 0xaa40, 0xaa40, 0xaa40, 0xa55a, 0x9006, 0x9006, 0x9006, 0x9006, 0x06aa, 0x06aa, 0x06aa, 0x01aa, 0x01aa, 0x01aa, 0x01aa, 0x3333, 0x0a0f, 0xf1fe, 0x7070, 0x7070, 0xf070, 0xefe0, 0xcfcf, 0x8f8f, 0x0f0f, 0x1c3f, 0x0808, 0x7f7f, 0xe3f0, 0x000a, 0x0090, 0x0090, 0x0090, 0x00a4, 0x00a4, 0xf5a4, 0x5d65, 0x5e67, 0xfaab, 0x5aaa, 0x06aa, 0x333f, 0x000f, 0xfefe, 0xf0f3, 0xa401, 0xa4aa, 0xa4aa, 0x02f0, 0x1010, 0x8010, 0x8080, 0x7ef0, 0x0005, 0x0154, 0x06a9, 0x1aaa, 0x15aa, 0x7f5a, 0xd775, 0x00f0, 0x8010, 0xe7f0, 0x0006, 0x4094, 0xd069, 0xf459, 0x0059, 0x0055, 0x05aa, 0x16a6, 0x00f7, 0x929a, 0x04f0, 0x1010, 0xc080, 0x00e0, 0xf8e0, 0x00fe, 0xefef, 0x0000, 0x5500, 0x01f0, 0x0700, 0x7f1f, 0xf30f, 0x0008, 0x1555, 0x15aa, 0x15aa, 0x15aa, 0x85aa, 0x85aa, 0x85aa, 0x85aa, 0x52aa, 0x3f00, 0x020f, 0x7e7e, 0x7e7e, 0x7e7e, 0x830f, 0x540d, 0xaa15, 0xaa54, 0xaa54, 0xaa54, 0xaa54, 0xaa52, 0xaa52, 0xaa52, 0x5552, 0x5501, 0x15fc, 0x15ff, 0x15ff, 0x55ff, 0x888f, 0x00f0, 0x1010, 0xff80, 0x0001, 0x0009, 0x0025, 0xf888, 0x000f, 0xf7f8, 0xf8f0, 0x9005, 0xa500, 0x5000, 0xa501, 0xaa06, 0xaa1a, 0xaa1a, 0x0f88, 0x0ff0, 0xe0f0, 0xc0e0, 0x8080, 0xf1f0, 0xf3f1, 0xf7f3, 0xfefe, 0xfefe, 0x7efe, 0x7f7f, 0x803f, 0xe0c0, 0xf870, 0xfefc, 0x1010, 0x1010, 0xf3f0, 0x000e, 0x00a9, 0x00a9, 0x40a9, 0x40aa, 0x40aa, 0x906a, 0x906a, 0x066a, 0x06a9, 0x01a9, 0x01a9, 0x01a9, 0x00a9, 0x00a4, 0x00a4, 0x33f0, 0x000f, 0xfefe, 0x70f3, 0xa40c, 0xa4aa, 0xa4aa, 0xa4aa, 0x90aa, 0x90aa, 0x76aa, 0x76fd, 0x5ad7, 0xdafd, 0xdafd, 0x6ad5, 0xaaff, 0x6a7d, 0x77ff, 0x000f, 0xfefe, 0xf0f7, 0xa402, 0xa4aa, 0xa4aa, 0xa4aa, 0x00f0, 0x7070, 0x7ef0, 0x0004, 0x7da4, 0xd6a4, 0x6aa4, 0x6a90, 0x1540, 0x0000, 0x01f7, 0x87fe, 0xf9e1, 0x08f0, 0xeef6, 0x303f, 0xf070, 0xf0f0, 0xf1f1, 0x0e03, 0x8f0f, 0xcf8f, 0xcfcf, 0x01ef, 0x8080, 0xc080, 0xffff, 0xeeff, 0x00bf, 0xc0c0, 0xeeee, 0xbbbb, 0x02ef, 0x0100, 0x0101, 0x0303, 0x00fb, 0xfcfc, 0xf3f0, 0x0002, 0x6aa4, 0x6aa4, 0x6aa4, 0x33f0, 0x00f3, 0x1818, 0xf0f3, 0x4005, 0x9001, 0x9001, 0x01aa, 0x0190, 0x0190, 0x0190, 0x0f33, 0x003f, 0x7e7e, 0x83f0, 0xa405, 0xa46a, 0x006a, 0x00fd, 0x00f4, 0x00d0, 0x0040, 0x00f8, 0x1080, 0xff08, 0x0001, 0x0029, 0x0a95, 0x00f0, 0x00c0, 0x008f, 0xf3f0, 0x000f, 0xff0c, 0xff80, 0x0001, 0x0955, 0x0255, 0xff88, 0x0bf0, 0x1030, 0x8fc0, 0x0f0f, 0x3f0c, 0x0f1f, 0x8f01, 0xcfcf, 0xefef, 0x7f7f, 0x0f1f, 0x0307, 0x0001, 0xf3f0, 0x500d, 0x0005, 0x1a90, 0x1a90, 0x1aa4, 0x1aa4, 0x1aa4, 0x1aa4, 0x1aa4, 0x6aa9, 0xa400, 0xa400, 0x9000, 0x9000, 0x9000, 0x00f0, 0x8080, 0xf3f0, 0x0007, 0x1a40, 0x6a00, 0x6a00, 0xaa00, 0xaa01, 0xaa01, 0xaa06, 0xaa1a, 0xf333, 0x0ef0, 0xfcc0, 0xfefe, 0xfcfe, 0xf7fc, 0x0071, 0x3030, 0xf010, 0x8fef, 0x0c0f, 0x3f3f, 0x3f3f, 0x801e, 0xc080, 0xe0c0, 0xe0e0, 0x01bf, 0xe0e0, 0xe0e0, 0x01ef, 0xf0e0, 0xf0f0, 0xbbbb, 0xeeee, 0x01fb, 0xf8f8, 0xf8f8, 0x01fe, 0xf0f8, 0xf0f0, 0x00f0, 0x8080, 0xf3f0, 0x0013, 0x0090, 0x00a4, 0x00a9, 0x00a9, 0x00a4, 0xaa50, 0xaa1a, 0xaa1a, 0xaa1a, 0xaa1a, 0xaa1a, 0xaa1a, 0x5505, 0xa400, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0x50aa, 0x3333, 0x07f0, 0xf0f0, 0xefef, 0x8fcf, 0x0f0f, 0xe00c, 0xf7f7, 0xf7f7, 0x71f3, 0x0000, 0x013f, 0x7e7e, 0xfefe, 0xf03f, 0x5400, 0x5215, 0x0ff3, 0x00f0, 0x101c, 0xf3f0, 0x0002, 0x0001, 0x6aa9, 0x1aa9, 0x33f0, 0x020f, 0x1f3c, 0x7f1f, 0x3f7f, 0xfef0, 0x0001, 0x0090, 0x0090, 0xef00, 0x01ef, 0xf0f0, 0xf0f0, 0x02f0, 0xc080, 0x00c0, 0xf8c0, 0xfff0, 0x00ef, 0x8080, 0xffff, 0xefff, 0x00f0, 0xff00, 0xeeee, 0x01f0, 0x0300, 0x7f1f, 0x01ef, 0x0100, 0x0101, 0x05f0, 0xc060, 0xf0e0, 0x3010, 0xe1c0, 0x0c03, 0x0f8f, 0xf3f0, 0xa406, 0xa400, 0xa400, 0xa400, 0xa400, 0xa400, 0xa900, 0xa900, 0x05f0, 0xc080, 0xc0c0, 0xc0c0, 0xf070, 0xf0f0, 0xf0f0, 0xfcf0, 0x0007, 0x0054, 0x00a4, 0x00a4, 0x0050, 0x00a4, 0x4159, 0x4106, 0x9106, 0x000f, 0xf3fe, 0xfbf0, 0xa402, 0xa900, 0x5500, 0xaa55, 0x01f0, 0xc380, 0xefe7, 0xb30f, 0x0014, 0xa155, 0xa1aa, 0xa1aa, 0xa1aa, 0xa1aa, 0x85aa, 0x85aa, 0x85aa, 0x55aa, 0x5505, 0xaaa1, 0xaaa1, 0xaaa1, 0xaa85, 0xaa85, 0xaa15, 0xa855, 0xa155, 0x0555, 0xf055, 0xff15, 0x01e0, 0xf080, 0xf0fc, 0x0000, 0x000e, 0x03f0, 0xe0e0, 0xf0f0, 0xf0f0, 0xc0e0, 0xffff, 0xeeff, 0x02bf, 0xc0c0, 0xe0e0, 0xe0e0, 0xffff, 0x00eb, 0x0ff0, 0xffee, 0x02bf, 0x3030, 0x7070, 0x7070, 0xffff, 0xbbbb, 0x130f, 0xf7f0, 0xf7f7, 0x03f3, 0x0e0f, 0x0c0c, 0x0e0c, 0xf306, 0x3070, 0x1830, 0x0c0c, 0xcf0e, 0x0fef, 0x0c0c, 0x0e0e, 0x0e0e, 0xf80e, 0x0307, 0x0703, 0x0f0f, 0x0f0f, 0xf3f0, 0x0006, 0x00a9, 0x00a9, 0x00a9, 0x40a9, 0x40aa, 0x40aa, 0x906a, 0xf333, 0x07f0, 0xc0c0, 0xc0c0, 0x80c0, 0x8080, 0x0f0f, 0x1f1f, 0x1f1f, 0x1f1f, 0xecf0, 0x000f, 0x00a4, 0x00a4, 0x4054, 0xd0a5, 0xf4a7, 0xf4a7, 0xfda7, 0x91a7, 0x9101, 0x9101, 0x5601, 0x5600, 0x5600, 0x5600, 0x5600, 0x4000, 0x7f0b, 0x0005, 0x0095, 0x0025, 0x0025, 0x0025, 0x0009, 0xfc09, 0x7ff0, 0x01b7, 0xf7f0, 0x10f1, 0x7777, 0x04f0, 0x8080, 0xc0c0, 0xf0e0, 0xf7f7, 0xf1f3, 0xf3f0, 0x0005, 0x0040, 0x9090, 0x90aa, 0x906a, 0xa46a, 0xa46a, 0x00f3, 0x0818, 0xb0f3, 0x400e, 0x9000, 0xf6aa, 0xfdaa, 0xff6a, 0xff6a, 0xffda, 0xffda, 0xffda, 0xfff6, 0x5aaa, 0x05aa, 0x06aa, 0x01aa, 0x01aa, 0x006a, 0x3f00, 0x00f3, 0x8030, 0x00f0, 0x8080, 0x7bf0, 0x0005, 0x0090, 0x9090, 0xa4aa, 0xa4aa, 0xa9aa, 0xeaaa, 0x07e0, 0xc0e0, 0xc0c0, 0x8080, 0x8080, 0x070f, 0x0303, 0x0701, 0x0f07, 0x02f0, 0x0c08, 0x0f0e, 0x8f8f, 0xfebf, 0x0000, 0xa500, 0x02ef, 0xf0f0, 0xf0f0, 0xf0f0, 0xfbef, 0x0000, 0xa555, 0x02ef, 0xf0f0, 0xf0f0, 0xf0f0, 0xffff, 0xeeee, 0x070f, 0xf3f0, 0xf1f1, 0xf1f1, 0xf3f1, 0x0807, 0x8f0c, 0xcf8f, 0x0fef, 0xf70f, 0x000b, 0x8001, 0xa801, 0xa801, 0xa805, 0xa005, 0xa015, 0x8055, 0x5540, 0x552a, 0x502a, 0x4a0a, 0x4280, 0x00f7, 0x8098, 0x7777, 0x0ff7, 0x01f0, 0xf0f0, 0xf0f0, 0xf7f0, 0x0002, 0x0054, 0x0090, 0x0090, 0x7f00, 0x00f0, 0x8080, 0xf3f0, 0x0002, 0x9000, 0xa46a, 0xa46a, 0x01f3, 0x1818, 0x0808, 0x0f33, 0x060f, 0x7fc0, 0x7f7f, 0x7f7f, 0x0e0f, 0x0e0e, 0x0c0c, 0x0c0c, 0xce0f, 0x500b, 0xf2a8, 0xf2a1, 0xf2a1, 0xf285, 0xf015, 0x0155, 0x0355, 0x0355, 0x0355, 0x0355, 0x4355, 0x5455, 0x0000, 0x017f, 0xfafa, 0xfafa, 0xf7f0, 0x9402, 0x90aa, 0x90aa, 0x40aa, 0x7777, 0x06f0, 0xf8f0, 0xfcf8, 0xfefc, 0xfefe, 0x070f, 0x0307, 0x0103, 0xb30f, 0x540c, 0xa155, 0xa855, 0xaa15, 0xaa15, 0xa855, 0x0155, 0xaa55, 0xaa4a, 0xaa52, 0x2a54, 0x4255, 0x5455, 0xf055, 0x777b, 0x017f, 0xfafa, 0xfafa, 0x37f0, 0xa40c, 0xa4aa, 0xa4aa, 0x40aa, 0xd0ff, 0xd0ff, 0x40ff, 0x00ff, 0x0055, 0x17ff, 0x01ff, 0x01ff, 0x007f, 0x0015, 0x7bf0, 0x9006, 0x9000, 0xf500, 0xf740, 0xf740, 0xf740, 0xf740, 0xd500, 0x007b, 0xfce0, 0x07e0, 0x8080, 0x8080, 0x8080, 0xc0c0, 0x7f1f, 0x0303, 0x0707, 0x7f1f, 0xfef0, 0x4006, 0x00a9, 0x00a9, 0x40a9, 0x40aa, 0x40aa, 0x40aa, 0x40aa, 0xeeee, 0x00f0, 0xf080, 0xf30f, 0x5007, 0x8155, 0x8155, 0xa155, 0xa855, 0xa855, 0xa855, 0xa155, 0xa155, 0x03f0, 0xf3f0, 0xf3f3, 0xe3f3, 0x01c3, 0xf7f0, 0x4004, 0x00aa, 0x00a9, 0x00a4, 0x0050, 0xa5aa, 0xff77, 0x01f0, 0xc03c, 0x0387, 0xf7f0, 0xa408, 0x90aa, 0x90aa, 0x90aa, 0x40aa, 0x00aa, 0x00a9, 0x0094, 0x0040, 0x0090, 0x7f00, 0x00f0, 0x8080, 0xff70, 0x0003, 0x5655, 0x6855, 0x8055, 0x0056, 0xfff0, 0x09e0, 0xe0e0, 0x38f0, 0x3010, 0xe070, 0xf080, 0x7cff, 0xf0f8, 0xe0e0, 0x1801, 0x0f0f, 0x0eee, 0x13f0, 0x0800, 0x0e0c, 0x0e0e, 0x0f0f, 0x303f, 0x7070, 0x7070, 0x7070, 0x0800, 0x0e0c, 0x0e0e, 0x0e0e, 0x301e, 0x7070, 0x7070, 0x7070, 0xe7e0, 0xe7e7, 0xe7e7, 0xf3e3, 0xf30f, 0x5017, 0x54aa, 0x54aa, 0x54aa, 0x54aa, 0x54aa, 0x54aa, 0x54aa, 0x54aa, 0x1555, 0x15aa, 0x15aa, 0x15aa, 0x85aa, 0x85aa, 0x85aa, 0x85aa, 0xaaaa, 0xaa52, 0xaa52, 0xaa52, 0xaa52, 0xaa4a, 0xaa4a, 0xaa4a, 0xf333, 0x03f0, 0xc380, 0xc7c7, 0x8f8f, 0x080f, 0x3ef0, 0x9008, 0x9000, 0xf400, 0xf400, 0xfd00, 0xfd00, 0xff40, 0xd75a, 0xd765, 0xfd65, 0x3fee, 0x01f3, 0x2820, 0x7828, 0xef03, 0x0008, 0x9555, 0x2555, 0x0955, 0x0255, 0x0095, 0x0095, 0x8afa, 0x8bae, 0x03ac, 0xee33, 0x01f3, 0x4380, 0x2420, 0xb0f3, 0x5007, 0x5aaa, 0xf6aa, 0xfdaa, 0x55aa, 0xff55, 0xa5aa, 0x9faa, 0x7faa, 0x0000, 0x017f, 0x3c00, 0x3c3c, 0xfbf0, 0x0001, 0x1554, 0x6aa9, 0xbbbb, 0x00f0, 0x1010, 0xf3f0, 0x0004, 0x0005, 0x001a, 0x001a, 0x001a, 0x001a, 0x00f3, 0x00f0, 0x3010, 0xf3f0, 0x0004, 0x0001, 0x0006, 0x001a, 0x001a, 0x001a, 0x00f3, 0x02f0, 0x1010, 0x3010, 0x3030, 0xffb0, 0x0000, 0x0025, 0xfbbb, 0x07e0, 0x0c00, 0x080c, 0x0808, 0x0808, 0x3038, 0x3010, 0x7070, 0xf0f0, 0x16f0, 0x0f00, 0x8f0f, 0x8f8f, 0x8f8f, 0x307f, 0x3030, 0x3030, 0x3030, 0x0e00, 0x0f0e, 0x0f0f, 0x0f0f, 0x707f, 0x7070, 0x3070, 0x3030, 0x8080, 0x8080, 0x8080, 0x3f3f, 0x1f1f, 0x1f1f, 0x0f0f, 0xf0f3, 0x000a, 0x00a9, 0x00a9, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0xaaa4, 0x4006, 0x4006, 0x4006, 0x33f0, 0x00f3, 0x1818, 0xf0f3, 0x4001, 0x9001, 0x9001, 0x003f, 0x7e7e, 0xf3f0, 0xa404, 0xa46a, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0x3333, 0x01f0, 0x1010, 0x1010, 0x0000, 0x00f3, 0x07f0, 0x0f00, 0x0f0f, 0x0e0f, 0x0e0e, 0x101e, 0x3010, 0x3030, 0x7030, 0xb3f0, 0x0026, 0xaa40, 0xaa40, 0x6a90, 0x6a90, 0x6a90, 0x6a90, 0x6a90, 0xaa90, 0xaa91, 0xaa91, 0xaa40, 0xaa40, 0xa900, 0xa900, 0xa400, 0xa401, 0xaa90, 0x6a90, 0x6a90, 0x6aa4, 0x1aa4, 0x1aa4, 0x1aa4, 0x1a90, 0x6aa5, 0xaa90, 0xaa40, 0xa900, 0xa900, 0xa400, 0xa400, 0xa400, 0xff40, 0xff40, 0xffd0, 0xffd0, 0xffd0, 0xfff4, 0xfff4, 0xbbf0, 0x007b, 0xc080, 0x0f7b, 0x0007, 0x0054, 0x00fe, 0x00fe, 0x00f8, 0x01f8, 0x01f8, 0x05e0, 0x55e0, 0x0fbb, 0x017f, 0x7e3c, 0x7e7e, 0x7ddf, 0xfdd7, 0x00df, 0x7e7e, 0xdddf, 0xfddd, 0x027b, 0xc080, 0xf8e0, 0xfffe, 0x040f, 0xfcfe, 0xfcfc, 0xf8f8, 0xf8f8, 0xfeff, 0xb30f, 0x540b, 0x5255, 0x4a55, 0x2a55, 0xaa55, 0xaa54, 0x5554, 0x554f, 0x553f, 0x54ff, 0x54ff, 0x53ff, 0x53ff, 0x0fb7, 0x5401, 0x54f9, 0xfee5, 0xff30, 0x0005, 0x0009, 0x0025, 0x0095, 0x0095, 0x0255, 0x0255, 0x3333, 0x030f, 0x8f8e, 0x0f0f, 0x0f0f, 0xcf8f, 0x7fb0, 0x0007, 0x0255, 0x0255, 0x0955, 0x0955, 0x0955, 0x2555, 0x2555, 0x2557, 0x07e0, 0x8080, 0x8080, 0x8080, 0xc0c0, 0xff1f, 0x0103, 0x0703, 0x0f07, 0x12f0, 0xf8f8, 0xf0f0, 0xf0f0, 0xe0f0, 0x0303, 0x0303, 0x0703, 0x0707, 0xf0f0, 0xf0f0, 0xf0f0, 0xf0f0, 0x0303, 0x0303, 0x0303, 0x0303, 0xc0c0, 0xc0c0, 0xe0c0, 0xf7f0, 0x0000, 0x0054, 0x77f0, 0x020f, 0xf0f0, 0xf8f8, 0xfcf8, 0x370f, 0x5002, 0x5255, 0xff55, 0xfc4f, 0x0f33, 0x003f, 0xfe7e, 0xf3f0, 0xa401, 0x90aa, 0x40aa, 0x3333, 0x00f0, 0x10f0, 0xff30, 0x0001, 0x0009, 0x0025, 0x0f33, 0x01f0, 0x0030, 0x0808, 0xf3f0, 0x901a, 0xa400, 0xa900, 0xa900, 0xa400, 0x5000, 0x1aaa, 0x1aaa, 0x1aaa, 0x1aaa, 0x1aaa, 0x1aaa, 0x05aa, 0x0055, 0xaaa4, 0xaa90, 0xaa90, 0xaa90, 0xaa40, 0xaa40, 0xaa40, 0x5500, 0x0006, 0x0006, 0x001a, 0x001a, 0x006a, 0x006a, 0x0f33, 0x08f0, 0x0030, 0x0c0c, 0x0c0c, 0x0808, 0x7008, 0x7070, 0xf0f0, 0xf0f0, 0x8070, 0xff03, 0x0019, 0x0095, 0x0095, 0x0095, 0x0095, 0x0255, 0x0255, 0x0255, 0x0956, 0xa556, 0x5558, 0x5558, 0x5558, 0x5560, 0x5560, 0x5580, 0x6025, 0x8025, 0x8025, 0x8095, 0x0095, 0x0095, 0x0095, 0x0095, 0x2555, 0x2555, 0x2555, 0x00f0, 0x0180, 0xb30f, 0x5404, 0x5255, 0x5255, 0xf155, 0xf1ff, 0xf1ff, 0x777b, 0x007f, 0xfafa, 0xf07f, 0x4401, 0x4255, 0x2a55, 0x00b7, 0x10f0, 0x01f7, 0xa0a0, 0xa0a0, 0xd0f7, 0x0003, 0x0094, 0x00a4, 0x00a4, 0xfda9, 0xfddd, 0x017f, 0x7e7e, 0x7e7e, 0xf307, 0x0004, 0xaa55, 0xaa5e, 0xaa5e, 0xea5e, 0x7f57, 0xfb70, 0x0000, 0x3aa5, 0x01f7, 0xa0a0, 0xa0a0, 0x30f7, 0x0002, 0x0090, 0x0090, 0x5f90, 0x03f0, 0x1030, 0x7030, 0xf0f0, 0xf1f0, 0xb70f, 0x5401, 0x4ffa, 0x4faa, 0x00f7, 0xa0a0, 0xf0f7, 0x0002, 0x0044, 0x0094, 0x00a4, 0x000f, 0x07e0, 0xe0c0, 0xf0e0, 0xf8f0, 0x003e, 0xff1f, 0x0103, 0x0703, 0x180f, 0x0df0, 0xe0e0, 0xc0c0, 0x80c0, 0xf070, 0xf0f0, 0x70f0, 0xf030, 0xf0f0, 0xf0f0, 0xf0f0, 0x03e0, 0x0303, 0x0303, 0x0707, 0x370f, 0x401d, 0x5555, 0x55a8, 0x55a8, 0x55a8, 0x55a8, 0x55a8, 0x55a8, 0x55a1, 0x4a05, 0x4a55, 0x4a55, 0x4855, 0x4855, 0x4855, 0x5255, 0x5455, 0xf155, 0xf155, 0xf155, 0xf155, 0xf155, 0xf155, 0xc555, 0x1555, 0x553f, 0x54ff, 0x53ff, 0x53ff, 0x53ff, 0x54ff, 0xff33, 0x00f0, 0x8030, 0xff03, 0x000c, 0x0095, 0x0095, 0x0095, 0x0095, 0x0095, 0x0255, 0xa955, 0x5560, 0x5560, 0x5580, 0x5580, 0x5600, 0x5600, 0xff33, 0x00f0, 0x8030, 0xff07, 0x0009, 0x0255, 0x0955, 0xa555, 0x0055, 0xa00a, 0x5aa5, 0x0055, 0x8056, 0x6055, 0x5a55, 0x0000, 0x00ef, 0x2418, 0x0fe3, 0x9003, 0x4006, 0x0001, 0x0280, 0x0be0, 0x7777, 0x000f, 0xef00, 0x73f0, 0x000e, 0x0001, 0x0006, 0x001a, 0x006a, 0x006a, 0x001a, 0x0005, 0x1fff, 0x07ff, 0x07ff, 0x07ff, 0x01ff, 0x007f, 0x0017, 0x0001, 0x70fe, 0x4009, 0x40a9, 0x40aa, 0x00aa, 0x00a9, 0x00a9, 0x00a9, 0x00a9, 0xffa9, 0x7fa9, 0x9faa, 0x01f0, 0x1030, 0x7030, 0x0000, 0x00bf, 0xff00, 0xfdf0, 0x0004, 0x0040, 0x0090, 0x0090, 0x00a4, 0x00a4, 0xddf0, 0x00f0, 0x3e00, 0xf0df, 0x5406, 0x5505, 0xa8aa, 0xa12a, 0x854a, 0x150a, 0x15aa, 0x55aa, 0x000f, 0x8ffe, 0xafd0, 0x000c, 0x0095, 0x025a, 0x0960, 0x0960, 0x2560, 0x2560, 0x8000, 0xe000, 0xf800, 0xfe00, 0xfe00, 0xa800, 0xfe80, 0xaff0, 0x00fa, 0x501e, 0x90fa, 0x0003, 0xa904, 0x94aa, 0x7daa, 0xfca5, 0xff99, 0x009a, 0xfcfe, 0x0f9a, 0x5004, 0x5255, 0xff55, 0xfffe, 0xfff9, 0xffe5, 0x0f99, 0x0cf0, 0xc080, 0xc0f8, 0xf3f1, 0xf7f7, 0x0c07, 0x0f0e, 0x0f0f, 0x0f0f, 0xf07f, 0xf1f0, 0xf1f1, 0xf1f1, 0x0c01, 0xf8f0, 0xa402, 0xa900, 0x9900, 0x5a40, 0x08f0, 0x1010, 0x3010, 0xc080, 0xe0c0, 0xf8f0, 0x0700, 0x0f0f, 0x0f0f, 0x0707, 0xf7f0, 0x4405, 0x9900, 0x6900, 0x6640, 0xa640, 0x9900, 0x6900, 0x00f0, 0x0100, 0xf0f7, 0xa404, 0xa4aa, 0xa4aa, 0x54aa, 0x04aa, 0x04a9, 0x020f, 0xf7fe, 0xf071, 0xe0f0, 0xec0f, 0x0004, 0x5550, 0x956a, 0xe5bf, 0xf9ff, 0xf9ff, 0x00ce, 0x1010, 0xefce, 0x0000, 0x0001, 0x00c0, 0x1d00, 0xf0ce, 0x0401, 0x00a4, 0x0090, 0x0cee, 0x00ce, 0x8080, 0xeeee, 0xceee, 0x03f0, 0xe080, 0xf8f0, 0xf0f0, 0xf1f1, 0xec0f, 0x5407, 0x5500, 0x55a9, 0x95fe, 0xa5ff, 0xf9ff, 0x55ff, 0x5a95, 0x6fe6, 0x00ce, 0x8082, 0xeeee, 0x0cee, 0x030f, 0xf0f8, 0xe0f0, 0xc0e0, 0xc0c0, 0x017b, 0xe080, 0xfef0, 0xfdf0, 0x0007, 0x00a4, 0x00a4, 0x0090, 0x0040, 0x95aa, 0x40aa, 0x0055, 0x06aa, 0x00fd, 0x30c0, 0xff0d, 0x0007, 0x0aa5, 0xa555, 0x6009, 0x6002, 0x6000, 0x5800, 0x5800, 0x5600, 0xffdd, 0x00f0, 0x8030, 0xff0a, 0x0005, 0x0095, 0x0025, 0xa025, 0xa025, 0xa025, 0x0095, 0xf000, 0x01fa, 0x0500, 0x0101, 0xf9af, 0x5401, 0xa455, 0x91aa, 0x00a9, 0x7070, 0x0fa9, 0x000a, 0x0055, 0x0159, 0x0156, 0x0556, 0xff80, 0xff80, 0xff80, 0xff80, 0xff80, 0xff80, 0xff80, 0xf999, 0x0ff0, 0xe0c0, 0xf0f0, 0xc0e0, 0xf800, 0x73f7, 0xf000, 0xf1f3, 0xe030, 0xe0e0, 0xc0c0, 0x80c0, 0x1f80, 0x3f1f, 0x3f3f, 0x7f7f, 0xc0ff, 0xf80f, 0x500c, 0x1555, 0x85aa, 0x858a, 0x8588, 0x8508, 0x8580, 0x152a, 0x552a, 0x4840, 0x4855, 0x5055, 0x5255, 0x5255, 0x02f0, 0x8010, 0x0f8f, 0x030f, 0xf70f, 0x5408, 0x2855, 0xa155, 0xa155, 0x8555, 0x1555, 0x8a55, 0xaa54, 0x2a54, 0x2a55, 0x04f0, 0x8070, 0x8f8f, 0x0f0f, 0x1f3f, 0x030f, 0x00ec, 0xfefe, 0xfec0, 0xa400, 0xa4aa, 0x00ce, 0x1010, 0xf0ce, 0x5001, 0xa405, 0xa95a, 0x01ce, 0x8080, 0x8080, 0xf0ce, 0x0002, 0x0190, 0x1690, 0x6aa4, 0x000c, 0x02f0, 0xf8f8, 0xf0f0, 0x3070, 0xfec0, 0x0008, 0xaaa4, 0xaaa4, 0xaa90, 0xaa40, 0xaa40, 0xa900, 0xa400, 0x5000, 0x1aaa, 0x01ce, 0x8080, 0x8080, 0xf0ce, 0x1000, 0x6490, 0x000c, 0xffec, 0x02f0, 0x1010, 0x3030, 0x7030, 0xc7f0, 0x0002, 0x0015, 0x00aa, 0xc0cf, 0x60ce, 0x1010, 0x001a, 0x001a, 0x56aa, 0x01aa, 0x00a9, 0x00a5, 0x00a4, 0xaaa4, 0xaa6a, 0xaa16, 0x6a01, 0xaa00, 0xaaa5, 0xaa50, 0xa900, 0xa400, 0xbeaa, 0xd560, 0x0006, 0x4069, 0x40be, 0x00fe, 0x0140, 0x0690, 0x1be5, 0x1bfa, 0x00f0, 0xe7e0, 0xfe0f, 0x4000, 0x4281, 0x00ef, 0x3e18, 0xeeef, 0xffee, 0x00f0, 0xf3f0, 0xfe0f, 0x5000, 0x50a0, 0x00ef, 0x0c0c, 0xeeff, 0xffee, 0x06f0, 0xc080, 0xe0c0, 0xf8f0, 0x0700, 0x0f0f, 0x0f0f, 0x0707, 0x5670, 0x5402, 0xa900, 0xfa40, 0xfe90, 0x6700, 0xdd56, 0x5670, 0x0004, 0x0001, 0x0006, 0x401a, 0x906b, 0x906b, 0xfec0, 0x0010, 0x4015, 0x906a, 0x90aa, 0xa4aa, 0xa4aa, 0x00a6, 0x0005, 0x001a, 0x005a, 0x459a, 0x9aa6, 0x1500, 0x6a40, 0xaa90, 0xaa90, 0x4000, 0x9405, 0x0cee, 0x01ec, 0x7f7e, 0x7f7f, 0x00c0, 0x8000, 0xfec0, 0x0004, 0x4094, 0x90a9, 0xa4aa, 0xa4aa, 0xa9aa, 0xeeee, 0x00c0, 0x0300, 0xf0ce, 0x5006, 0x00aa, 0x00a9, 0x00a4, 0x0090, 0x0090, 0xaa40, 0xaafa, 0xf07f, 0x5008, 0x552a, 0x452a, 0x444a, 0x014a, 0xa0aa, 0x05aa, 0x55aa, 0x44a8, 0x44a8, 0x000f, 0x3f0e, 0xf9f0, 0x0006, 0x00a4, 0x50a4, 0xa495, 0x005a, 0x0001, 0x0016, 0x006a, 0xf999, 0x000f, 0xf7fe, 0xfaf0, 0x9000, 0xa400, 0x0000, 0x00af, 0xe700, 0xf0fa, 0x4000, 0x9400, 0xaaaa, 0x010f, 0x31fe, 0x30f0, 0x00f7, 0x9232, 0xa07f, 0x0412, 0x2aaa, 0xc2aa, 0xfc2a, 0x00aa, 0xffaa, 0xffa8, 0xaaa3, 0xaa2a, 0xaaca, 0xaaca, 0x2af0, 0x0aff, 0xf2a8, 0xf2a8, 0xfca8, 0x33a8, 0x33aa, 0x33aa, 0x0caa, 0x01f0, 0x7070, 0x1010, 0x7fe0, 0x0004, 0x0009, 0x0009, 0x0009, 0x0009, 0xaaff, 0xec0f, 0x0005, 0xffe5, 0xffe5, 0xff95, 0xfa55, 0xe555, 0xe555, 0x00c0, 0x0080, 0xf0ce, 0x0003, 0x00a9, 0x00a9, 0x40a9, 0x94aa, 0x00c0, 0x8010, 0x6c0e, 0x000b, 0x0095, 0x0095, 0x0255, 0x2955, 0x9555, 0x0055, 0x0058, 0x0058, 0x0058, 0xa056, 0x5a55, 0xd555, 0x60d5, 0x540a, 0x54ea, 0x53aa, 0x4eaa, 0x3aaa, 0xeaaa, 0x55aa, 0x55b1, 0x55b1, 0x15ac, 0xc5ab, 0xb0aa, 0x0060, 0x0030, 0xfef0, 0x0000, 0x5955, 0xfff0, 0x01ef, 0xc202, 0x03c3, 0x000f, 0xfc18, 0x0000, 0x02ef, 0x3c3c, 0x6c2c, 0x006c, 0x020f, 0xff10, 0x0707, 0xcf0f, 0x67f0, 0x0000, 0x0001, 0x6700, 0xddd5, 0x6700, 0xddd5, 0x6700, 0xddd5, 0x6700, 0xddd5, 0x6700, 0xdd56, 0x6700, 0xdd56, 0x7000, 0xd566, 0x7000, 0xd566, 0x765d, 0x6700, 0x755d, 0x5700, 0x765d, 0x9402, 0x406f, 0x001a, 0x0005, 0xfec0, 0xa404, 0xa45a, 0x90aa, 0x40aa, 0x00aa, 0x0055, 0x00ec, 0x3ffe, 0xf0ce, 0x4008, 0x95a5, 0x1aaa, 0x0600, 0x0600, 0x0600, 0x0600, 0x0600, 0x5a00, 0x1a00, 0x01ce, 0x0400, 0x0104, 0xf0ec, 0x5403, 0x5255, 0x5255, 0x4a55, 0x2a55, 0xeecc, 0x00c0, 0x00c0, 0x00ce, 0x8080, 0xf0ce, 0x0002, 0x0090, 0x0090, 0x40a4, 0x000c, 0xff8e, 0xf7f0, 0x0002, 0xa690, 0x9a40, 0xa900, 0x00f0, 0xf0f0, 0xf7f0, 0x0002, 0x0054, 0x0069, 0x0066, 0x0f7f, 0x00f0, 0x3030, 0xa9f0, 0x0016, 0x0001, 0x65a4, 0x9a90, 0xaa90, 0x6a40, 0xa500, 0x5000, 0xa900, 0x9506, 0xa906, 0xaa06, 0x5601, 0x0100, 0xf400, 0xfd00, 0xfd00, 0xfd00, 0xfd00, 0x5400, 0x7f00, 0xdf01, 0xf701, 0x5701, 0x02f0, 0xe010, 0xcfef, 0x0f0f, 0x017f, 0xbe9e, 0x38fe, 0x000f, 0x7fc6, 0xff0a, 0x000c, 0x0095, 0x0095, 0xaa55, 0x0055, 0x0058, 0xa056, 0x5a55, 0x2555, 0x2500, 0x2500, 0x9580, 0x556a, 0x5560, 0x0ffa, 0x03f0, 0x8010, 0xf8e0, 0xf0f0, 0x03f1, 0xf7f0, 0x4007, 0x9000, 0x5400, 0xa900, 0xa900, 0x5a40, 0x0500, 0x1a00, 0x1900, 0x01f0, 0x1030, 0x0030, 0xf7f0, 0x5006, 0xa400, 0xa400, 0x9400, 0x6900, 0x6500, 0x5a40, 0x9a40, 0x02f0, 0x0100, 0x0101, 0x0001, 0xf70f, 0x5000, 0x4a55, 0x02f0, 0xef80, 0x0fff, 0x7838, 0xf7f0, 0x9400, 0xa955, 0x02f0, 0xef80, 0x0fff, 0x7808, 0x7ff0, 0x007f, 0xf0e0, 0x00c0, 0x8000, 0xfec0, 0x0004, 0x0090, 0x00a4, 0x00a9, 0x00a9, 0x00a9, 0xeeec, 0x00c0, 0x0300, 0xf0ce, 0x9004, 0x40aa, 0x00aa, 0x00a9, 0x00a9, 0x40a9, 0x02f0, 0x8080, 0x8080, 0x8080, 0xf7f0, 0x5406, 0xa900, 0xaa01, 0xaa06, 0xaa06, 0x6a06, 0x6a06, 0x6a06, 0x000f, 0x78fe, 0xe0f7, 0x4005, 0x406a, 0x001a, 0x001a, 0x055a, 0x1ff6, 0x7ffd, 0x00f0, 0x1010, 0xff70, 0x0008, 0x0009, 0x0009, 0x0009, 0x0080, 0x0060, 0x80a8, 0x006a, 0x0aaa, 0x2555, 0x00f7, 0xa492, 0xf07f, 0x0004, 0xaa04, 0xaa0a, 0xaa52, 0xaa54, 0x2a44, 0xff77, 0x05f0, 0x1010, 0x3010, 0xe0c0, 0xf8f0, 0xfefc, 0xc07f, 0xf7f0, 0x0005, 0x00a4, 0x00a4, 0x0099, 0x0059, 0x0001, 0x0006, 0x00f7, 0x04f0, 0x3010, 0xf0e0, 0xf8f8, 0x8000, 0x03f0, 0x03e0, 0xfc0c, 0x0303, 0x0303, 0x0303, 0xeeee, 0x03f0, 0xc780, 0xcfcf, 0x8f8f, 0x0c0f, 0xfaf0, 0xa403, 0xa900, 0x1500, 0x6a00, 0xaa00, 0x030f, 0x707e, 0xf070, 0xc0f0, 0xf0e0, 0xf70f, 0x501a, 0x1555, 0x8502, 0x852a, 0x8528, 0x8582, 0x85aa, 0x152a, 0x552a, 0x4a40, 0x4a55, 0x5055, 0x5255, 0x5255, 0x5455, 0x8555, 0x8522, 0x8582, 0x8588, 0x85aa, 0x15aa, 0x15aa, 0x552a, 0x4a40, 0x4a55, 0x5255, 0x5255, 0x5255, 0x01f0, 0xf010, 0xf0fe, 0x0000, 0x017f, 0xf8f0, 0xf8f8, 0xf07f, 0x0000, 0xaa55, 0x77ff, 0x02f0, 0x00c0, 0xfeff, 0xe0fc, 0x0000, 0x017f, 0xf8f8, 0xf0f0, 0xc7f0, 0x0001, 0x00a5, 0x0050, 0xfec0, 0xa409, 0xa400, 0xa400, 0xa400, 0x9000, 0x9000, 0x9000, 0x4000, 0x006a, 0x001a, 0x0006, 0x00ce, 0x00c0, 0x1010, 0x7fc0, 0x0002, 0x0001, 0x02fa, 0x00a8, 0x00ef, 0x7e7e, 0x70ef, 0x5402, 0x5215, 0x0a85, 0xaaa0, 0x00f7, 0x00f0, 0xc010, 0xf07f, 0x4000, 0x400a, 0x01f0, 0xfcfc, 0xe0f8, 0xff70, 0x0001, 0x2565, 0x2595, 0x7777, 0x010f, 0xcf0c, 0x7fef, 0xff07, 0x000a, 0x2025, 0x2225, 0xa225, 0x2a25, 0x8025, 0x8095, 0x6a55, 0x5562, 0x5562, 0x555a, 0x5558, 0x00f7, 0x05f0, 0x8010, 0xc080, 0xc0c0, 0x80c0, 0xbf00, 0x0e7f, 0xf7f0, 0x400b, 0x40aa, 0x909a, 0x9069, 0x9066, 0x9096, 0x406a, 0x006a, 0x1615, 0x1600, 0x0500, 0x0600, 0x0600, 0x03f0, 0x8010, 0x0f0f, 0x3f0c, 0x1f3f, 0x07e0, 0xf0f0, 0xc0c0, 0xf0f0, 0x3c3c, 0x0f0f, 0x0303, 0x0f0f, 0x3c3c, 0xf7f0, 0x0001, 0x0050, 0x40a4, 0x777f, 0x01f0, 0xf8f8, 0xfcfc, 0xa70f, 0x4007, 0x400a, 0xfc55, 0xfc55, 0xf155, 0x0555, 0xff55, 0xff54, 0x3f54, 0x00f0, 0x3070, 0xf7f0, 0x4004, 0x001a, 0x0019, 0x0064, 0x0064, 0x0054, 0x777f, 0x00f0, 0x7010, 0x0000, 0x0f7f, 0x00f0, 0xfce0, 0xfff0, 0x0000, 0x0050, 0x007f, 0x0f0c, 0xa0f7, 0x4005, 0x6aaa, 0xdaaa, 0xf6aa, 0xf6aa, 0xf6aa, 0x7daa, 0x00f0, 0x0300, 0x70fa, 0x9006, 0x90aa, 0x45aa, 0x44aa, 0x44aa, 0x15a9, 0xaaa4, 0xafea, 0x5670, 0x9001, 0xe41a, 0xe46f, 0x76dd, 0x5670, 0x65dd, 0x5670, 0x705d, 0x4000, 0xeaaa, 0x5607, 0x5001, 0x4a85, 0x2fe1, 0xd670, 0x765d, 0xe401, 0xe41b, 0xe406, 0x02f0, 0xef80, 0x0fff, 0xff87, 0x00c0, 0xc000, 0xfec0, 0x0004, 0x00a4, 0x40a9, 0x40aa, 0x40aa, 0x406a, 0xceee, 0x00c0, 0x0300, 0xf0ce, 0x5004, 0x00aa, 0x00a9, 0x01a4, 0x00a4, 0x00a4, 0x000c, 0xf8fe, 0xf0ce, 0x4000, 0x00aa, 0x000c, 0xc3fe, 0x30ec, 0x5000, 0x05a8, 0xff30, 0x000c, 0x5825, 0x5825, 0x6009, 0x6009, 0x6009, 0x6009, 0x6009, 0x6009, 0x6000, 0x6000, 0x6000, 0x6000, 0x6000, 0x01f0, 0x8080, 0xf080, 0x3f70, 0x000f, 0x0a55, 0x25a9, 0x2556, 0x2a00, 0x9600, 0x9600, 0x2a00, 0xff00, 0x0a00, 0x2500, 0x2500, 0x2500, 0x0900, 0x0a00, 0x2500, 0x2500, 0x04f0, 0xf070, 0xf0f0, 0x3070, 0xc000, 0x0301, 0x60f7, 0x9006, 0x90aa, 0x90aa, 0x54aa, 0x0095, 0xaa40, 0xa802, 0xa3fc, 0x0756, 0x5000, 0x54e0, 0xd765, 0x9400, 0x94f0, 0x02f0, 0x7f7e, 0x3f7f, 0x071f, 0xfe0f, 0x5402, 0x8555, 0x8555, 0x8555, 0x00f0, 0x8080, 0xffe0, 0x0002, 0x5655, 0x6855, 0x8055, 0x00ef, 0x00f0, 0xf0fe, 0x0000, 0x0040, 0x0ffe, 0x060f, 0xdfe0, 0x3f1f, 0x3f3f, 0x8fbf, 0xcfcf, 0xbfcf, 0x7e7d, 0xf70f, 0x540e, 0x1555, 0x150a, 0x5502, 0x5528, 0x5508, 0x55a1, 0x55a1, 0x5585, 0x2a15, 0x2255, 0x2255, 0x2055, 0x2855, 0x2a55, 0x4a55, 0x01f0, 0xe030, 0x8fef, 0xffff, 0x0000, 0x017f, 0x78f8, 0xe0b0, 0x7a0f, 0x400b, 0x5501, 0x55a8, 0x5528, 0x55a8, 0x55a8, 0x55a8, 0x5501, 0x528a, 0x5488, 0x5502, 0x5552, 0x5554, 0x5670, 0xdddd, 0x6700, 0xddd5, 0x6700, 0xddd5, 0x7000, 0xdd56, 0x0000, 0xd567, 0x5670, 0x0001, 0x00e4, 0x0090, 0x7000, 0x76d5, 0x5400, 0x55e1, 0x0765, 0xdddd, 0x0765, 0x5ddd, 0x0076, 0x65dd, 0x6507, 0x5401, 0x553a, 0x554f, 0x0077, 0x01f0, 0xfef0, 0xc0f8, 0x0000, 0x027f, 0xf0e0, 0xf8f8, 0xf0f8, 0xc7f0, 0x0001, 0x00a5, 0x0050, 0x30ec, 0x1418, 0x54aa, 0x54aa, 0x52aa, 0x52aa, 0x52aa, 0x4aaa, 0x4aaa, 0xa855, 0xa854, 0xaa01, 0xaa85, 0xaaa1, 0xaaa1, 0xaaa8, 0xaaa1, 0xa855, 0xa855, 0xa855, 0xa855, 0xa855, 0xa155, 0xa155, 0xa155, 0xaaa1, 0xaaa8, 0x00f3, 0x3f00, 0x020f, 0x7e7e, 0x7e7e, 0x7f7e, 0xff70, 0x0002, 0x0aa5, 0x0956, 0x02a9, 0x00f7, 0x00f0, 0x7010, 0x0000, 0x00f7, 0x00f0, 0xf010, 0xf70f, 0x0005, 0x0a55, 0xaa55, 0xaa50, 0xa04a, 0x0a4a, 0xaa40, 0x00f7, 0x000f, 0xffe0, 0xf0f7, 0x9005, 0x54aa, 0x50a9, 0x00a4, 0x0095, 0x0590, 0x5490, 0x020f, 0x0e0c, 0x080c, 0x0c08, 0x570f, 0x5406, 0x5550, 0x2a82, 0x402a, 0x4aaa, 0x4a82, 0x500a, 0x5500, 0x76d5, 0x5405, 0x54e1, 0x54e1, 0x55e1, 0x55e1, 0x55e8, 0x15e8, 0x0766, 0x5ddd, 0x0766, 0xfaf0, 0x0004, 0x00a9, 0x00a9, 0x00a4, 0x0090, 0x0040, 0x01fa, 0x2050, 0x0050, 0xf0af, 0x5402, 0x4255, 0x2a01, 0xaa54, 0xfff0, 0x019a, 0xfcf0, 0xfefe, 0xfff9, 0x0000, 0x4050, 0x000f, 0xff8c, 0xff90, 0x0001, 0x0025, 0x0025, 0x00f9, 0x02f0, 0x8010, 0x0181, 0x1818, 0xf6f0, 0x0003, 0x0550, 0x1aa4, 0x1964, 0x1aa4, 0x00f0, 0x803c, 0xff0e, 0x0004, 0x0095, 0x0255, 0x0255, 0x0255, 0x0955, 0x00f0, 0x00c0, 0x01fe, 0x0ff0, 0xf0ff, 0x070f, 0x00f0, 0x0101, 0x0703, 0x3f0f, 0x81ff, 0x8080, 0xc080, 0xf8e0, 0xfec0, 0x4004, 0x9015, 0xa46a, 0xa4aa, 0xa4aa, 0x90aa, 0xeeee, 0x00c0, 0xd0f8, 0xfce0, 0x0003, 0x0259, 0x0255, 0x00a5, 0x000a, 0x7ff0, 0x00f7, 0x9214, 0x607f, 0x540b, 0x1482, 0x412a, 0x114a, 0x044a, 0xa02a, 0xa015, 0xa815, 0xaa04, 0xaa85, 0xaaa1, 0xaaa1, 0xaaa8, 0x0567, 0x9402, 0x53ff, 0x4fff, 0x3fff, 0x0000, 0x005d, 0x0100, 0x7d56, 0xa401, 0xa4aa, 0x93aa, 0x5ddd, 0x5670, 0xe401, 0x90bf, 0x406a, 0x0777, 0x08f0, 0xc040, 0x3020, 0xe0e0, 0xe0e0, 0xc0e0, 0x0080, 0x0707, 0x0707, 0x0307, 0xec0f, 0x5405, 0xe555, 0x9555, 0x5b55, 0x5b55, 0x6e55, 0x6e55, 0x00c0, 0x4060, 0xfec0, 0x0008, 0xaaa4, 0xaaa4, 0xaaa4, 0xaaa4, 0xaa90, 0x5540, 0xaa00, 0xaaa9, 0x6a94, 0x00c0, 0x0078, 0x02f0, 0x8080, 0x1080, 0x1010, 0xfec0, 0x0000, 0x0550, 0xeec0, 0x01ce, 0x141c, 0x1013, 0xfc0e, 0x0000, 0xa809, 0x00c0, 0x001c, 0xfe0c, 0x5404, 0x0255, 0xaa55, 0xaa54, 0x0254, 0x5455, 0x02f0, 0xe020, 0x40c0, 0x3070, 0xfce0, 0x0002, 0x0955, 0x0955, 0x0955, 0xeeec, 0x000c, 0xef0e, 0x02e0, 0x3c10, 0x1818, 0x0024, 0xefc0, 0x4005, 0x9005, 0xe61a, 0xe66f, 0xe66f, 0x906f, 0x401a, 0x00cc, 0x00f0, 0x3c38, 0x00cf, 0xc33c, 0xfe0f, 0x5005, 0x5505, 0x54aa, 0x54aa, 0x552a, 0x552a, 0x552a, 0x0fee, 0x00f0, 0x0030, 0xffe0, 0x0001, 0x0009, 0x0009, 0x00fe, 0x00f0, 0x1010, 0xfec0, 0x0001, 0x0550, 0x1aa4, 0xeec0, 0x00ce, 0x1818, 0xf0ce, 0x900b, 0x9006, 0xa55a, 0xeaaa, 0x3aab, 0x3aac, 0xeaac, 0xaaab, 0xa56a, 0x901a, 0x9006, 0x9006, 0xa406, 0x00c0, 0x001c, 0x03e0, 0x1010, 0xff18, 0x183c, 0x663c, 0x65dd, 0x0076, 0x665d, 0x6507, 0x5403, 0x553e, 0x554e, 0x5553, 0x5554, 0x0000
};

// [D_08C848B4] D_08C84CE4 Huffman Window 1
u32 D_08c84ce4_window1[] = {
	0xeb7ccfbf, 0x7eddbede, 0xb6fdcbfb, 0x6db6ffed, 0xeff6e4ef, 0xa5b6d79d, 0xaeca93ff, 0xdbb39ff7, 0xdb5b7bf6, 0xb2f76db6, 0x6db7df25, 0xb6effbef, 0xffedbdbd, 0xff7b7ce5, 0xd99cfff7, 0xb7ffdb7d, 0xefc00003, 0xfddff7ef, 0xbdd6fb6f, 0x0fe5efb7, 0x77ffff7b, 0x9d40a006, 0xfef71f65, 0xefdfd6ed, 0x00047b6e
};

// [D_08C84918] D_08C84CE4 Huffman Window 2
u32 D_08c84ce4_window2[] = {
	0xa8c242a8, 0x91faa282, 0xaaa95555, 0x8151540a, 0x68154054, 0x354a4a4a, 0x52aaa955, 0xaaaa5c29, 0x54d54ab4, 0xaaa25555, 0x4e4b9552, 0xae16b4ab, 0x55155154, 0x2aab2515, 0xeb54fa95, 0x5d4b3caa, 0xaa56d455, 0x00004aa4
};

// [D_08C84960] D_08C84CE4 Huffman
struct Huffman D_08c84ce4_huffman[] = {
	/* Data */			D_08c84ce4_huffmandata,
	/* Size */			0x1c85,
	/* Count */			0x313,
	/* Window 1 */		D_08c84ce4_window1,
	/* Window 2 */		D_08c84ce4_window2,
};

// [D_08C84970] D_08C84CE4 RLE Data
u8 D_08c84ce4_rledata[] = {
	0x1, 0xe, 0x2, 0x6, 0x5, 0x4, 0x11, 0x5, 0x7, 0x3, 0x1, 0x25, 0x7, 0x3, 0x1, 0x68, 0x8, 0x7, 0x9, 0xd, 0x2, 0x53, 0x1e, 0x3, 0xc, 0xa, 0x7, 0x9, 0x7, 0x28, 0x8, 0x5, 0xb, 0x7, 0x9, 0x10, 0x10, 0xf, 0x11, 0xf, 0x1, 0x1a, 0x16, 0x54, 0x1c, 0x9, 0x16, 0x15, 0x1c, 0x3, 0xd, 0x10, 0x2, 0xd, 0x2d, 0x3, 0x21, 0xf, 0x30, 0x20, 0x30, 0x5, 0xd, 0xb, 0xd, 0x29, 0x14, 0x6, 0x4, 0x10, 0x13, 0xa, 0x22, 0x10, 0x12, 0xe, 0x10, 0x1f, 0xd, 0x3, 0xd, 0x14, 0x9, 0x7, 0x8, 0x19, 0x6, 0x9, 0x20, 0x21, 0x10, 0x5, 0x23, 0x7, 0x6, 0x3a, 0xb, 0x5, 0x6, 0x1b, 0x6, 0x9, 0xd, 0x3, 0xc, 0x4, 0x2, 0x1f, 0x6, 0x9, 0x1, 0x5, 0x5, 0x5, 0x6, 0x1b, 0x4, 0xb, 0x6, 0xaa, 0x10, 0x6, 0x1b, 0x40, 0x1f, 0x6, 0x7, 0x3, 0x1, 0x60, 0x17, 0x4, 0x14, 0x19, 0x6, 0x5, 0xd, 0xd, 0x2, 0x7, 0xa, 0x5, 0xb, 0xb, 0x4, 0x1b, 0xd, 0x8, 0x5, 0xb, 0x9, 0x7, 0x1, 0xf, 0x31, 0x4, 0xc, 0x5, 0xb, 0xa, 0x6, 0x5, 0x17, 0x3, 0xb, 0x3, 0x13, 0x2a, 0xd, 0x8, 0x1, 0x3, 0x8, 0x15, 0x2f, 0x20, 0x2b, 0x5, 0xd, 0x3, 0x11, 0x10, 0xf, 0x3, 0xe, 0xb, 0x1, 0x3, 0x11, 0xf, 0x11, 0xf, 0x19, 0x7, 0x3, 0x3, 0xc, 0x7, 0x11, 0x16, 0x9, 0x7, 0x8, 0x29, 0xb, 0x3, 0x12, 0x1f, 0x31, 0x14, 0xd, 0x7, 0xd, 0x1a, 0x9, 0x7, 0xb, 0x18, 0x1e, 0x7, 0x1, 0x7, 0x30, 0x10, 0x11, 0x8f, 0x1e, 0x22, 0xf, 0x5, 0x4, 0x8, 0x8, 0x89, 0x13, 0x1d, 0x4, 0xb, 0x1, 0xa, 0xd, 0x3, 0xa, 0xb, 0x11, 0x1d, 0x2, 0xb, 0x6, 0xb, 0x4, 0xc, 0x5, 0x2a, 0x6, 0x10, 0x10, 0x4, 0xc, 0x3, 0xc, 0xb, 0x6, 0x4, 0xc, 0xa, 0x6, 0x7, 0x3, 0x5, 0x1, 0x17, 0x9, 0xf, 0x11, 0x1e, 0x2, 0xf, 0x11, 0x1a, 0x6, 0x8, 0x8, 0x7, 0x2, 0x7, 0x22, 0xd, 0x11, 0x6, 0x2d, 0xc, 0x11, 0x1f, 0x11, 0x10, 0x60, 0x4, 0x7, 0x4, 0x1, 0x4, 0xb, 0x7, 0x9, 0xd, 0x14, 0x10, 0x10, 0xc, 0xf, 0x3, 0x2, 0x8, 0xf, 0x7, 0x21, 0x3, 0x1d, 0x10, 0x21, 0x8, 0xd, 0x1a, 0x21, 0x10, 0x10, 0xa, 0x20, 0x5, 0x1d, 0x3, 0xc, 0x4, 0x10, 0x10, 0x1e, 0x3, 0xc, 0x3, 0xc, 0x14, 0x1b, 0x5, 0xa, 0x7, 0x13, 0xc, 0x30, 0x30, 0x1, 0x40, 0x2, 0xd, 0x3, 0x1e, 0x10, 0x2f, 0xf, 0x21, 0x9, 0x7, 0x1, 0x7, 0x5, 0x3, 0x5, 0x4b, 0x11, 0x20, 0x8, 0x7, 0x1, 0x7, 0x11, 0x7, 0x8, 0x9, 0x11, 0x6, 0x48, 0x10, 0x21, 0x1f, 0x21, 0x13, 0xd, 0x10, 0x20, 0x4, 0x1c, 0xa, 0x6, 0x7, 0x3, 0x5, 0x1, 0x9, 0x6, 0x8, 0x9, 0x7, 0x5, 0x3, 0x1, 0xd, 0x12, 0x1e, 0x12, 0xa, 0x6, 0xa, 0x66, 0x5, 0x2c, 0x1f, 0x21, 0x5, 0x7a, 0xb, 0x26, 0x4, 0x2c, 0xf, 0xd1, 0x5, 0xbe, 0xd, 0x1a, 0x15, 0x1, 0xf, 0xa, 0x16, 0x14, 0xe, 0x4b, 0x3, 0xe, 0x3, 0x3f, 0x81, 0x48, 0x7, 0x1, 0x7, 0x5, 0x3, 0x8, 0x8, 0x9, 0x3, 0x5, 0xd, 0x3, 0x1f, 0x20, 0x10, 0x18, 0x12, 0x6, 0xc, 0x5, 0x4, 0x12, 0x9, 0x1, 0x3, 0x1d, 0x6, 0x11, 0x5, 0x14, 0x7, 0x8, 0x2b, 0x6, 0x5, 0x2b, 0x26, 0xa, 0x7, 0x8, 0x5, 0x1b, 0x3, 0x1e, 0xa, 0x6, 0x9, 0x27, 0x8, 0x8, 0x5, 0xa, 0x7, 0xa, 0x5, 0x1b, 0x8, 0x10, 0x7, 0x1, 0x7, 0x5, 0x3, 0x5, 0x5, 0x29, 0x3, 0x6, 0x4, 0x20, 0x5, 0xf, 0xb, 0x2, 0xa, 0xd, 0x9, 0x20, 0xd, 0x3, 0xf, 0x1c, 0x4, 0x7, 0x9, 0x4, 0xd, 0xa, 0x5, 0xa, 0x6, 0x9, 0x7, 0x8, 0x8, 0x27, 0x9, 0x6, 0xa, 0x31, 0xf, 0x1, 0x8, 0x8, 0x5, 0xb, 0x8, 0x8, 0x7, 0x9, 0x8, 0x8, 0x7, 0x9, 0x3, 0xd, 0x3, 0xd, 0x4, 0x1b, 0x7, 0xa, 0x5, 0xb, 0x4, 0xc, 0x5, 0xb, 0x8, 0x8, 0x3, 0x2d, 0x4, 0xc, 0x3, 0xc, 0x7, 0xa, 0x7, 0x9, 0xa, 0x6, 0x6, 0xa, 0xc, 0x4, 0x8, 0x8, 0xa, 0x6, 0x9, 0x7, 0x6, 0x2a, 0xd, 0x1e, 0x4, 0xd, 0x3, 0xc, 0x4, 0xd, 0x3, 0x37, 0x9, 0x4, 0xc, 0x1b, 0x5, 0xb, 0x5, 0x8, 0x8, 0x15, 0xb, 0x2d, 0x3, 0xc, 0x4, 0xd, 0x3, 0xc, 0x5, 0xc, 0x3, 0xa, 0x6, 0x2, 0x4, 0x7, 0x3, 0xb, 0x5, 0x9, 0x7, 0x8, 0x8, 0x9, 0x7, 0x6, 0x15, 0x6, 0x9, 0x7, 0x4, 0xc, 0x3, 0x2c, 0xa, 0x7, 0x8, 0x8, 0x9, 0x7, 0x6, 0x29, 0x5, 0x2c, 0x5, 0xa, 0x9, 0x8, 0x5, 0xb, 0x6, 0xa, 0x7, 0x8, 0x13, 0xe, 0x6, 0xa, 0x5, 0xa, 0x9, 0xd, 0x9, 0x2, 0x8, 0x4, 0x3, 0xd, 0x3, 0x1, 0x13, 0xd, 0xa, 0x6, 0x9, 0xf, 0x7, 0x8, 0x8, 0x1c, 0x4, 0x1c, 0x4, 0x1, 0x3, 0x5, 0x7, 0x19, 0x7, 0xd, 0x4, 0x1d, 0x12, 0x4, 0xc, 0xb, 0x5, 0x4, 0xc, 0xd, 0x3, 0xc, 0x4, 0x1c, 0x5, 0x12, 0xa, 0x1f, 0x4, 0x7, 0x9, 0x7, 0xa, 0x20, 0xa, 0xd, 0x5, 0xc, 0x7, 0x8, 0xb, 0xe, 0x9, 0x6, 0xd, 0x4, 0x8, 0x8, 0x4, 0x1c, 0x3, 0xd, 0x3, 0xd, 0x9, 0x7, 0xb, 0x25, 0x9, 0x7, 0x9, 0x27, 0x7, 0x9, 0x7, 0x9, 0xf, 0x1, 0x5, 0xa, 0xa, 0x17, 0x3, 0xd, 0x5, 0x18, 0x3, 0xa, 0x5, 0x1, 0x9, 0x7, 0xd, 0x3, 0xa, 0x10, 0x5, 0xa, 0xa, 0x7, 0x5, 0x22, 0x4, 0x5, 0x5, 0xb, 0x6, 0xc, 0x3, 0xa, 0x6, 0x21, 0x3, 0x7, 0x5, 0x44, 0xc, 0xd, 0x4, 0x2, 0xd, 0xa, 0x6, 0x6, 0xa, 0x3, 0xd, 0x2c, 0x4, 0xc, 0x4, 0x11, 0x10, 0xa, 0x5, 0x28, 0x12, 0x5, 0xb, 0x5, 0x3, 0xb, 0x3, 0x11, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xf, 0x1e, 0x14, 0xf, 0x5, 0x28, 0x3, 0x8, 0x7, 0x15, 0xb, 0x4, 0xd, 0x1d, 0x3, 0x4, 0xb, 0xc, 0x4, 0xd, 0x3, 0x1, 0x7, 0xf, 0x9, 0x6, 0xa, 0x1e, 0x3, 0x6, 0x9, 0x6, 0xa, 0xc, 0x9, 0x24, 0x7, 0x1a, 0x8, 0xf, 0x3, 0x9, 0x5, 0x2a, 0x0, 0x95, 0x0
};

// [D_08C84CE4] D_08C84CE4 Graphics
struct CompressedGraphics D_08c84ce4 = {
	/* Huffman Data */		D_08c84ce4_huffman,
	/* RLE Data */			D_08c84ce4_rledata,
	/* RLE Size */			0x372,
	/* RLE Offset */		0x3400,
	/* Double Compressed */	TRUE,
};

