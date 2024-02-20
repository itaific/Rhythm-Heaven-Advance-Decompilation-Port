#include "global.h"
#include "graphics.h"

// // //  D_08C23A3C  // // //

// [D_08C22EF4] D_08C23A3C Huffman Data
u16 D_08c23a3c_huffmandata[] = {
	0x01f0, 0x01f0, 0x80fc, 0x2bf0, 0x0004, 0x0055, 0x00a4, 0x00a4, 0x0054, 0x00fd, 0x012f, 0xa405, 0xa403, 0xa400, 0x00c0, 0xf045, 0xf255, 0xf000, 0xf0fb, 0x0003, 0x00a4, 0x00a4, 0x00a4, 0x55a9, 0x0000, 0x01fb, 0x4020, 0x0d01, 0xfbf1, 0xa400, 0xa4aa, 0x04fb, 0x0010, 0x4860, 0xa848, 0x90a0, 0xd150, 0x2bf0, 0x5406, 0x5000, 0x06aa, 0x06aa, 0x06aa, 0x06aa, 0x06aa, 0x0555, 0x01f2, 0x5000, 0x00f6, 0x010f, 0xfffc, 0xc7f7, 0xf000, 0x01fb, 0x887c, 0x0031, 0xf0fb, 0x0001, 0x0001, 0x0006, 0xbbf0, 0x00fb, 0x0810, 0xfffb, 0x4000, 0x4001, 0x00fe, 0x3040, 0xeeee, 0xeefc, 0x00fe, 0x0010, 0xfcfe, 0x4000, 0x9000, 0x03fe, 0x0818, 0x060c, 0x0303, 0x0101, 0xfef0, 0x0000, 0x00a4, 0xe0ff, 0x02f0, 0x0810, 0x040c, 0x0306, 0x000e, 0x3010, 0xc0fe, 0x4002, 0xd0aa, 0x76aa, 0x7daa, 0x06ef, 0xfefc, 0xf7fb, 0xf9f3, 0x7cfd, 0xfbfe, 0xfe7d, 0xf7ff, 0x0cfe, 0x5405, 0x1900, 0x0640, 0x0190, 0x0064, 0x0019, 0x7fff, 0xfdf0, 0x0007, 0x0090, 0x40a4, 0x9069, 0xa51a, 0xaa1a, 0xaa06, 0x1901, 0x0600, 0x01f0, 0x8010, 0x60c0, 0x0000, 0x0fdf, 0x00f0, 0x0c08, 0xfdf0, 0x1400, 0x1900, 0x00f0, 0x1030, 0xfdf0, 0x4009, 0x9401, 0xa900, 0x1500, 0x0640, 0x0190, 0x01a4, 0x0069, 0x001a, 0x4006, 0x9006, 0x01f0, 0x0810, 0x0304, 0x00fd, 0x03f0, 0x0810, 0xc081, 0x60c0, 0x3060, 0x0000, 0x00fd, 0x03f0, 0x8010, 0x1080, 0x0818, 0x060c, 0xc0df, 0x8409, 0xa1aa, 0xa12a, 0x2a4a, 0x2aa3, 0xcaa8, 0x32a8, 0x32aa, 0x8caa, 0x87aa, 0xa3aa, 0x04f0, 0x0800, 0x040c, 0x0302, 0xc081, 0x8300, 0xfc0f, 0x5400, 0x5505, 0xfcf0, 0x04f0, 0x3060, 0x1010, 0x6040, 0x1020, 0x8c08, 0xfdf0, 0x1405, 0x0040, 0x0069, 0x4019, 0x901a, 0xa406, 0xa441, 0x00df, 0x7e68, 0xdddd, 0x01f0, 0x2040, 0x3020, 0xfdf0, 0x0000, 0x4005, 0x00fd, 0x04f0, 0x1818, 0x4040, 0x6040, 0x2020, 0x1810, 0x00fe, 0xd8a0, 0xc0fe, 0x5004, 0x1414, 0x0594, 0x41a5, 0x01a7, 0x01a0, 0x00e0, 0x3070, 0xcef0, 0x4000, 0xd002, 0xdcf0, 0x0001, 0x00e4, 0x40f9, 0xfddc, 0x04fe, 0x0100, 0x0c08, 0x8386, 0x60c1, 0x1030, 0x0cfe, 0x0002, 0x0040, 0x7f90, 0x9ffd, 0x000f, 0x9f3e, 0xfcf0, 0x0000, 0x0019, 0x00fc, 0x00f0, 0x1810, 0xcf00, 0x01f0, 0x2000, 0x0810, 0xfcf0, 0x5402, 0x1900, 0x0600, 0x0140, 0xcf00, 0x00f0, 0x060c, 0xd0cf, 0x8401, 0xa1aa, 0xa3aa, 0x04f0, 0x1810, 0x070c, 0x4081, 0x3040, 0x0810, 0xdcf0, 0x9000, 0xe400, 0x00fe, 0x1020, 0x000e, 0x7030, 0xeeee, 0x0000, 0x03fe, 0x4080, 0x1830, 0x060c, 0x0100, 0x04f0, 0x2010, 0x0c18, 0x0206, 0x0181, 0x0c08, 0x01e0, 0x0e0e, 0x080c, 0x080f, 0xfdfe, 0xf7f7, 0xf9f3, 0xdcf9, 0xefef, 0x3f7f, 0xdfbf, 0xefdf, 0x7fef, 0xfdf0, 0x0000, 0x0090, 0xfdf0, 0x01f0, 0x4040, 0x8080, 0xf0fe, 0x0001, 0x8004, 0x0100, 0x01f0, 0x4080, 0x3060, 0x000e, 0xc0c0, 0xcf0e, 0x0004, 0x0054, 0x4065, 0x5459, 0x955a, 0xe556, 0xfd0f, 0x540b, 0x054a, 0xa14a, 0xa852, 0x2a04, 0x4aa0, 0x12aa, 0x84aa, 0xa12a, 0xa14a, 0xa852, 0xaa14, 0x2a85, 0xddf0, 0x00fd, 0x021c, 0xf0df, 0x5413, 0x5555, 0x54aa, 0x552a, 0x152a, 0x154a, 0x8552, 0xa154, 0xa155, 0xa855, 0x2aa1, 0x4aa8, 0x4aaa, 0x52aa, 0x54aa, 0x152a, 0x152a, 0x454a, 0x852a, 0x214a, 0x4852, 0x01df, 0xe6ce, 0xfbfb, 0xf0fd, 0x1004, 0x0600, 0x0190, 0x00a4, 0x4069, 0x901a, 0x00df, 0xdf3c, 0xf0fd, 0x0002, 0x4004, 0x1a90, 0x05a4, 0xff0f, 0x00fd, 0x8030, 0xf0fd, 0x0004, 0x0090, 0x0090, 0x40a9, 0x90aa, 0xa4aa, 0x00f0, 0x0010, 0xfdf0, 0x4008, 0x9000, 0x9000, 0xa900, 0xaa40, 0x6a40, 0x1a90, 0x1aa4, 0x06a9, 0x06aa, 0xdddd, 0x000f, 0xefee, 0xfdf0, 0x4004, 0x9000, 0xa400, 0xa900, 0xa900, 0xaa40, 0xdf00, 0x01fd, 0x2040, 0x1020, 0xf0fd, 0x0005, 0x0040, 0x00a4, 0x40a9, 0x90aa, 0xa4aa, 0xa4aa, 0x00f0, 0x0810, 0xfdf0, 0x9002, 0x1a90, 0x1a90, 0x46a4, 0x01df, 0xce9e, 0xefef, 0xf0fd, 0x4007, 0x0100, 0x01a4, 0x00a9, 0x40a9, 0x40aa, 0x90aa, 0x90aa, 0xa46a, 0xdf00, 0x01df, 0xefee, 0x77f7, 0xf0fd, 0x1003, 0x1090, 0x04a4, 0x04a4, 0xa4a9, 0x01f0, 0x1010, 0x8080, 0xfdf0, 0x0021, 0x9090, 0xa406, 0xa906, 0x6a01, 0x6a00, 0x1a40, 0x1a90, 0x06a4, 0x90a9, 0xa446, 0xa991, 0x6991, 0x6a90, 0x1aa4, 0x16a4, 0x01a9, 0xa4a9, 0x6901, 0x1a00, 0x1a40, 0x0640, 0x0190, 0x01a4, 0x00a4, 0xa4a9, 0xa906, 0xaa01, 0x6a01, 0x6a40, 0x1a40, 0x1a90, 0x06a4, 0x1aa9, 0x1aa9, 0x02df, 0xbf3e, 0xdfbf, 0xd7df, 0xf0fd, 0x000a, 0x5aa4, 0x46a4, 0x91a4, 0x91a9, 0xa469, 0xa419, 0xa906, 0xa901, 0x0069, 0x001a, 0x0006, 0xddf0, 0x02fd, 0x0810, 0x0408, 0x2844, 0xc0fd, 0x4013, 0x9004, 0xa401, 0xa900, 0xaa40, 0xaa40, 0xaa90, 0x901a, 0xa405, 0xa900, 0xaa40, 0xaa90, 0x6aa4, 0x1aa9, 0x06aa, 0x036a, 0x401a, 0x4006, 0x9001, 0x9001, 0x6400, 0x00fd, 0x2060, 0xf0fd, 0xa408, 0xa46a, 0xa91a, 0xaa06, 0xaa41, 0x6a91, 0x1a90, 0x06a4, 0xa4a4, 0xa4aa, 0x00f0, 0x0810, 0xfdf0, 0x900b, 0xa400, 0xa900, 0xaa40, 0x6a90, 0x9000, 0xa400, 0xa900, 0x6a40, 0x6a40, 0x9a90, 0xa6a4, 0xa6a9, 0x00fd, 0x01df, 0xcf1e, 0xf7ef, 0xe0fd, 0x9002, 0x9000, 0xa400, 0xa900, 0xcfe0, 0x5002, 0x00b9, 0x0069, 0x806e, 0xd0fc, 0xa403, 0xa4da, 0xa9f6, 0xaa76, 0xaa7d, 0x0cfe, 0x0002, 0x0040, 0x3f90, 0x7f65, 0x0efd, 0x9001, 0xf517, 0x5f41, 0x00fc, 0x00f0, 0x1010, 0xcdf0, 0x0009, 0x0040, 0x0090, 0x00a4, 0x401d, 0xd007, 0xa406, 0x6901, 0x6a00, 0x1a00, 0x0600, 0x0000, 0x00fe, 0x1c30, 0xdecf, 0x1014, 0x85aa, 0xa12a, 0xa82a, 0xaa4a, 0xaa12, 0x0a84, 0x12aa, 0x84aa, 0xa1aa, 0xa82a, 0xa842, 0x2a54, 0xca15, 0x0a3f, 0x802a, 0xa142, 0x2854, 0x4a15, 0x5285, 0x7ca1, 0x3fa8, 0xecf0, 0x4000, 0xfff6, 0xeefc, 0x00fe, 0x0010, 0xdcfe, 0x4003, 0x9400, 0xa940, 0x6a94, 0x16a9, 0xf0fd, 0x4002, 0x90aa, 0x90aa, 0xa4aa, 0x00f0, 0x0010, 0xfdf0, 0x4001, 0x9000, 0xa400, 0x00f0, 0x1830, 0xfdf0, 0x900a, 0x6401, 0x6900, 0x1a00, 0x0600, 0x0600, 0x4000, 0x90aa, 0xa46a, 0xa96a, 0xaa1a, 0xaa46, 0xdf0f, 0x00fd, 0x0830, 0xfd0f, 0x5401, 0x15a0, 0x85aa, 0x00fd, 0x8030, 0xc0fd, 0x0021, 0x0090, 0xaaa4, 0xaa6a, 0xaa1a, 0xaa1a, 0xaa06, 0xaa46, 0x6a41, 0x6a40, 0xa490, 0xa96a, 0xa9da, 0xa906, 0xaa46, 0x6a41, 0x1a90, 0x0690, 0xaaa4, 0xaa1a, 0xaa06, 0xaa41, 0x6a41, 0x1a90, 0x0650, 0x0114, 0xa904, 0xa946, 0x6a91, 0x1690, 0x01a4, 0x40a9, 0x40aa, 0x90aa, 0xa4aa, 0x00f0, 0x1010, 0xfdf0, 0x4006, 0x9000, 0x9000, 0x6400, 0x1900, 0x1a40, 0x0014, 0x0019, 0x00fd, 0x00f0, 0x1c18, 0xfdf0, 0x6402, 0x1400, 0x1900, 0x4640, 0x00f0, 0x8000, 0xdcf0, 0x000c, 0x0090, 0x0064, 0x0019, 0x4019, 0x9006, 0x0501, 0x0690, 0x01f4, 0x00f4, 0x407d, 0x407f, 0xd01f, 0xf41f, 0x00fd, 0x03fd, 0x0204, 0x0102, 0x4081, 0x2040, 0xedf0, 0x900e, 0x9001, 0xa401, 0x6401, 0x6400, 0x6940, 0x6940, 0x6a90, 0x90a4, 0x5001, 0x6400, 0x6900, 0x6a00, 0x1a00, 0x1a00, 0x1a00, 0xcef0, 0x4000, 0x01d2, 0xdcf0, 0xe40a, 0x7901, 0x1e00, 0x1e00, 0x0740, 0x0790, 0x01f4, 0x90fd, 0x901f, 0xe41f, 0xf907, 0xfe57, 0x00df, 0x3e7c, 0xcefd, 0x0005, 0x0014, 0xa9da, 0xa9f6, 0xaa7d, 0xaa9f, 0x6aa7, 0xd0ef, 0x5402, 0xaac9, 0x2af0, 0x553f, 0x0cfe, 0x6402, 0xd940, 0xf690, 0x7da5, 0xc0fd, 0x4019, 0x946a, 0xa9da, 0xaa36, 0xaa0d, 0xaa36, 0x5a4d, 0xf693, 0x0da4, 0x03a9, 0x40a9, 0x90aa, 0xa9aa, 0xaa76, 0xaa96, 0x6a9d, 0xdaa7, 0x76a9, 0x76aa, 0x91aa, 0x6aaa, 0xd69f, 0x3da4, 0x43a9, 0x90aa, 0x90aa, 0xa4aa, 0x00f0, 0x0810, 0xcdf0, 0x6407, 0x1900, 0x0640, 0x0690, 0x01a4, 0x4069, 0xd069, 0xb41a, 0x4540, 0xfbf0, 0x9000, 0xa49a, 0x01fb, 0x2030, 0x7020, 0xbbbb, 0xf000, 0x00bf, 0xf7f0, 0xf0fb, 0x9401, 0xa900, 0xaa40, 0x0ffb, 0x00f0, 0xc010, 0xfbf0, 0x400c, 0x40a5, 0x406a, 0x561a, 0x01aa, 0x40a9, 0x40aa, 0x906a, 0x9019, 0x9056, 0x40aa, 0xaa55, 0x6a01, 0x1a00, 0x02f0, 0x1030, 0xe010, 0x31ff, 0xfbf0, 0x0003, 0xaa40, 0xaa40, 0xaa90, 0xaaa4, 0xbbf0, 0x00fb, 0x1010, 0xbbbb, 0xbbbf, 0x000b, 0xfff0, 0x00f0, 0x0f0c, 0x0fff, 0x0000, 0x00bf, 0xf9fe, 0xf0fb, 0x4008, 0x0055, 0xaaa4, 0xaa55, 0xa900, 0xa400, 0xa400, 0xa400, 0xa400, 0xa900, 0x03e0, 0xe0c0, 0xf0e0, 0xf8f0, 0xfcf8, 0x00f0, 0x0f80, 0xffff, 0x00ff, 0x0a0e, 0xc0e0, 0x80c0, 0xf080, 0x1ffe, 0x070f, 0x0103, 0x7f01, 0xcfef, 0x8fcf, 0x0f0f, 0x080c, 0x03ef, 0xc3f0, 0x1f07, 0x0fef, 0x0fcf, 0x001f, 0x0808, 0x00ef, 0xf8f8, 0x12ef, 0x4004, 0x2a55, 0x2f55, 0x2f55, 0x2f40, 0x0000, 0x20fe, 0x5400, 0xd55a, 0x1f00, 0x2111, 0x02f0, 0xfcfc, 0xfcfc, 0xe0f8, 0x2f0f, 0x0000, 0x0040, 0x030e, 0xe0e0, 0xc0c0, 0x80c0, 0x8080, 0x00fe, 0x7030, 0x2ffe, 0x0000, 0x0055, 0x00f0, 0x0100, 0xfef0, 0x4001, 0x5554, 0x5581, 0xffff, 0x00e0, 0xfefc, 0xffe0, 0x01ef, 0x080e, 0x7c0f, 0x02f0, 0xfcfc, 0xfcfc, 0xfcfc, 0x21f0, 0x9000, 0x90d6, 0x211f, 0x000f, 0x8080, 0xffff, 0x1c0e, 0xfcfe, 0xf8fc, 0xf0f8, 0xe0f0, 0x0f3f, 0x01ff, 0xf0ff, 0xf073, 0x8f07, 0x0e0f, 0xcff8, 0x0f0f, 0x7f0e, 0x1f3f, 0x0f1f, 0x0307, 0x8fef, 0x0f0f, 0xfc0e, 0x30f3, 0x3010, 0x8fe0, 0x0e0f, 0xef08, 0x8fcf, 0xff0f, 0xf3f3, 0xf7f7, 0x1010, 0x0fae, 0x0001, 0xfe55, 0xff95, 0x0faa, 0x00f0, 0x1030, 0xabf0, 0x000e, 0x0001, 0xfffe, 0xff7f, 0xff17, 0x7f01, 0x1700, 0x0100, 0x5700, 0x01ff, 0x40fd, 0x40ff, 0xd07f, 0xd01d, 0xd057, 0x40ff, 0x00ef, 0x73f0, 0xaebf, 0x5001, 0x352a, 0x8f2a, 0xb0fe, 0x4000, 0xd065, 0xaefb, 0x1001, 0xffc6, 0xfff5, 0xaafb, 0x00fa, 0x7020, 0xf0ea, 0x0000, 0xffe5, 0x03e0, 0xf0f0, 0xf0f0, 0xe0e0, 0xc0e0, 0xb0fa, 0xa40e, 0x55aa, 0x00aa, 0x00a9, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x6aa9, 0x6a03, 0xda03, 0x3600, 0x3600, 0x0d00, 0x0d00, 0x0d00, 0x01fa, 0x6010, 0x0f80, 0x02fe, 0xc000, 0x70f0, 0xffe0, 0x0eef, 0xeeff, 0x050e, 0x0808, 0x0c0c, 0x0e0c, 0x0101, 0x0703, 0x3f0f, 0x0000, 0xe000, 0x00f0, 0x4040, 0x0000, 0x00f0, 0x06e0, 0xf1f0, 0x3070, 0x1030, 0xc7f0, 0x8fcf, 0x0f8f, 0x0f0f, 0xafe0, 0x5402, 0x5400, 0x5b95, 0x5b95, 0x00fe, 0x0018, 0x020e, 0x8080, 0xc0c0, 0xfefe, 0x06ef, 0xf0fc, 0x80c0, 0xf060, 0xf0fc, 0xe1f0, 0x7000, 0xe0f0, 0xfef0, 0x5401, 0x50a5, 0x54a5, 0x02ef, 0x0e0c, 0x0701, 0x1f0f, 0xeeee, 0xfeee, 0x01f0, 0xf0f8, 0xc0e0, 0x0000, 0xf000, 0x030e, 0xfefe, 0xfefe, 0xfefe, 0xfefe, 0x05ef, 0x0780, 0xcf3f, 0x1f0f, 0x0e0f, 0x0c0e, 0x0808, 0x03f0, 0xf0c0, 0xfcf8, 0xfcfc, 0xf8fc, 0x000e, 0x8080, 0x01fe, 0x8010, 0x8020, 0x030e, 0x7030, 0x7070, 0x7070, 0xf070, 0xeeee, 0x02fa, 0x8486, 0x0a84, 0x090a, 0x20af, 0x4402, 0x0454, 0xcf02, 0xffa0, 0xa0f1, 0xa405, 0xa555, 0xa7ff, 0xa7ff, 0xa7ff, 0xa9ff, 0xaa55, 0xbf0e, 0x5400, 0x55f9, 0xabf0, 0xe400, 0x5400, 0x12f0, 0x0003, 0x00a9, 0x54f9, 0x55f9, 0x15f9, 0x01af, 0xfdf0, 0x2feb, 0xff1a, 0x0000, 0x0009, 0xaaf1, 0x00fa, 0x0010, 0xaaaa, 0x02fe, 0xf080, 0xc010, 0x8181, 0xffef, 0x5400, 0x1555, 0x03e0, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0x0baf, 0x5005, 0x5655, 0x5855, 0x6355, 0x6355, 0x5855, 0x5615, 0x00fa, 0x0818, 0x20fa, 0xa404, 0xa400, 0xa400, 0xa400, 0xa400, 0xa555, 0x01f2, 0x5000, 0x00f6, 0x00ff, 0x020e, 0xfefe, 0xfefe, 0xfefe, 0x0f0e, 0x5400, 0x5455, 0x01f0, 0x000c, 0x3808, 0xabf0, 0x4002, 0x955a, 0x6a7f, 0x00fd, 0x0000
};

// [D_08C238FC] D_08C23A3C Huffman Window 1
u32 D_08c23a3c_window1[] = {
	0xfef3b7ef, 0xdfb7797c, 0xefdf3f6b, 0xfdfbf6f7, 0xdfbfbb7e, 0x65ecfffb, 0xaebf9f9e, 0x3f927efd, 0xefebfdf9, 0x00000001
};

// [D_08C23924] D_08C23A3C Huffman Window 2
u32 D_08c23a3c_window2[] = {
	0x29a529ae, 0x02a5692a, 0x55555565, 0x5556d7d5, 0x810a9bdd, 0x415d48a5, 0x56a5f004
};

// [D_08C23940] D_08C23A3C Huffman
struct Huffman D_08c23a3c_huffman[] = {
	/* Data */			D_08c23a3c_huffmandata,
	/* Size */			0xa09,
	/* Count */			0x121,
	/* Window 1 */		D_08c23a3c_window1,
	/* Window 2 */		D_08c23a3c_window2,
};

// [D_08C23950] D_08C23A3C RLE Data
u8 D_08c23a3c_rledata[] = {
	0x1, 0x1d, 0x3, 0xd, 0x3, 0xc, 0x44, 0xe, 0x16, 0x3, 0x19, 0x3, 0x2d, 0x5, 0xe, 0xb, 0x2, 0x4, 0xc, 0xa, 0x2b, 0x3, 0x28, 0x4, 0x1b, 0x6, 0x2, 0x5, 0x43, 0x3, 0x3e, 0x4, 0x1f, 0x5, 0x11, 0x3, 0x44, 0x1c, 0x4, 0x9, 0x6, 0x5, 0xf, 0xc, 0x1, 0x9, 0x2, 0xd, 0x7, 0xb, 0x6, 0xc, 0xc, 0x6, 0x2, 0xe, 0x2, 0x4, 0x11, 0x13, 0x8, 0x3, 0x6, 0x11, 0x6, 0xc, 0x4, 0xc, 0x4, 0xd, 0x3, 0xe, 0x2, 0x8, 0x7f, 0x3, 0x3d, 0x7, 0x47, 0x5, 0xf6, 0x4, 0x11, 0x5, 0x8d, 0x3, 0x0, 0x47, 0x4, 0xb, 0x9, 0x1f, 0x4, 0xa, 0xa, 0x19, 0x7, 0x7, 0x9, 0x21, 0xd, 0x3, 0xd, 0xd, 0x5, 0x1, 0xd, 0xe, 0x4, 0x1, 0xe, 0x2, 0x5, 0xf, 0xb, 0x9, 0x3, 0x4, 0x6, 0x2, 0x8, 0x1, 0x8, 0x4, 0x3, 0x21, 0xd, 0x13, 0x9, 0xa, 0x3, 0x3, 0x3, 0xc, 0x3, 0x15, 0x6, 0x4, 0x5, 0x11, 0xc, 0x7, 0xc, 0x3, 0xd, 0x1, 0x6, 0x3, 0x6, 0x1, 0x3, 0x2, 0xa, 0x1, 0x9, 0xb, 0xb, 0x1, 0x5, 0x3, 0x7, 0x1, 0xa, 0xd, 0x8, 0x1, 0x5, 0xb, 0x4, 0x7, 0x4, 0x2, 0xe, 0x9, 0x7, 0x1, 0x7, 0x11, 0x7, 0x1, 0xb, 0xc, 0x4, 0x6, 0x3, 0x1c, 0x8, 0x4e, 0x9, 0x9, 0x7, 0x11, 0x5, 0xf, 0x15, 0x12, 0x4, 0x1, 0xe, 0x25, 0xc, 0x9, 0x4, 0x3, 0x8, 0x19, 0x5, 0x13, 0x6, 0x18, 0xb, 0x6, 0x8, 0x1, 0x10, 0xa, 0x5, 0x15, 0xb, 0x2, 0x7, 0x2, 0x14, 0x4, 0xd, 0x51, 0xc, 0x4, 0xd, 0x9, 0x8, 0x46, 0x3, 0x9, 0x1f, 0x0
};

// [D_08C23A3C] D_08C23A3C Graphics
struct CompressedGraphics D_08c23a3c = {
	/* Huffman Data */		D_08c23a3c_huffman,
	/* RLE Data */			D_08c23a3c_rledata,
	/* RLE Size */			0xea,
	/* RLE Offset */		0xe00,
	/* Double Compressed */	TRUE,
};

u8 D_08c23a4c[4] = {
	0x78, 0x00, 0x82, 0x00
};

