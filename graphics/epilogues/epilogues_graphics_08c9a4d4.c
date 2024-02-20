#include "global.h"
#include "graphics.h"

// // //  D_08C9A4D4  // // //

// [D_08C99704] D_08C9A4D4 Huffman Data
u16 D_08c9a4d4_huffmandata[] = {
	0x0061, 0x00f0, 0x0035, 0xff00, 0x51f6, 0x0002, 0x0001, 0xaa80, 0xffea, 0x3333, 0x3333, 0x00f6, 0xf0e0, 0x316f, 0x0002, 0x5501, 0xaa84, 0xffc5, 0x01f6, 0x0404, 0x0004, 0xd162, 0x5001, 0xa555, 0xd756, 0x661d, 0x0126, 0x20e0, 0x2738, 0x0016, 0x3030, 0xd351, 0x0001, 0x5500, 0xaaf2, 0x6d13, 0xe400, 0xf5ff, 0x6666, 0x6211, 0x0026, 0x0080, 0x03f6, 0x80f0, 0x4040, 0x4440, 0x0150, 0xf666, 0x0316, 0x0f00, 0x0f0f, 0x0f0f, 0x0707, 0x7216, 0x2407, 0x0800, 0x0255, 0xc255, 0x7e55, 0x1404, 0x0604, 0x0204, 0x0244, 0xfed6, 0x0004, 0x0040, 0x0060, 0x0058, 0x0010, 0x01a0, 0xd666, 0x0326, 0x1010, 0x0020, 0x0402, 0x0804, 0x2666, 0x0156, 0x8f80, 0xcf8f, 0xf615, 0x0403, 0x0408, 0x0408, 0x0408, 0x0100, 0x0156, 0x4040, 0xf0e0, 0xff56, 0x4000, 0x5055, 0x0025, 0x0404, 0x5525, 0x0056, 0x00c0, 0xdef6, 0x1005, 0x2000, 0x3a00, 0x0e00, 0x0300, 0xa000, 0xc000, 0x0046, 0x07f0, 0x2546, 0x4007, 0x003a, 0x00ea, 0x03aa, 0x03aa, 0x0eaa, 0x3aaa, 0x3aba, 0xeaba, 0x0062, 0x9b7c, 0xf326, 0x1000, 0x5481, 0x6333, 0x0062, 0x00fe, 0xf526, 0x0000, 0x0001, 0x6625, 0x0026, 0x8070, 0x5236, 0x0003, 0x0215, 0x0a40, 0x2f00, 0xbfc0, 0x0056, 0xf8f8, 0xfde6, 0x0000, 0x0940, 0x0116, 0x3010, 0xf070, 0xf261, 0x4001, 0x0000, 0x0a94, 0x6266, 0x0016, 0x0808, 0xff16, 0x4000, 0x0000, 0x0034, 0xfefc, 0x3332, 0x0043, 0x8fc0, 0xf234, 0x0001, 0x4015, 0x546a, 0x0132, 0xc1e0, 0x0381, 0xf253, 0x4001, 0x8015, 0x0055, 0x5222, 0x0232, 0xf874, 0xf0f8, 0x7fe0, 0x1823, 0x0005, 0x1590, 0x55a4, 0xd5a9, 0x05ff, 0x0df0, 0x0ff0, 0x2341, 0x0002, 0x9555, 0xfd55, 0xfffe, 0x1222, 0x0043, 0x80f8, 0x0323, 0xe0c0, 0xfcf0, 0x3f1f, 0x0f0f, 0xf632, 0x0001, 0x0015, 0x0016, 0x2366, 0x0062, 0xf0f0, 0x22b6, 0x2234, 0xbbbb, 0x0036, 0x8080, 0x6666, 0x0243, 0xf8f0, 0xf8fc, 0xe0f0, 0x0023, 0xf0f0, 0x0336, 0xe0c0, 0xe0e0, 0xe0e0, 0xc0e0, 0x0034, 0x1010, 0xf534, 0x0003, 0x0005, 0x1aaa, 0x1aaa, 0x1aaa, 0x0135, 0xc0c0, 0x8080, 0x5533, 0x3555, 0x0054, 0xf0f8, 0xf534, 0x4002, 0x40aa, 0x50a9, 0x54a5, 0x5333, 0x0032, 0xf8fc, 0xf862, 0x5403, 0x5255, 0x5255, 0x5255, 0x5255, 0x0026, 0x1010, 0xff16, 0x0000, 0x0001, 0x0187, 0x8020, 0xc0c0, 0xf187, 0x0000, 0x2854, 0x0018, 0x6140, 0x8881, 0x0087, 0x0404, 0xf178, 0x6400, 0x8055, 0x7888, 0x0018, 0x1808, 0x4444, 0x4443, 0x0154, 0x0f80, 0x0707, 0x4454, 0x0034, 0xf870, 0x0118, 0x3870, 0x3838, 0x3618, 0x5402, 0x5406, 0x5506, 0x951a, 0x8166, 0xf823, 0xa402, 0xa4aa, 0xa4aa, 0xa4aa, 0x0128, 0x1010, 0x0010, 0x1888, 0x0234, 0xe0f8, 0xf0e0, 0xfcf8, 0xf234, 0x5400, 0x5555, 0x2333, 0x002b, 0x00f0, 0x632b, 0x5400, 0xffaa, 0x1113, 0x001b, 0x0030, 0xbbbb, 0x32bb, 0x2364, 0x5400, 0x5552, 0xf612, 0x0000, 0x0050, 0x1166, 0x00b2, 0x17f8, 0x6433, 0x6666, 0x001b, 0x00fc, 0x463b, 0x0000, 0xaa40, 0xb234, 0x5001, 0xfff9, 0x50ff, 0x36b2, 0x4000, 0xffaa, 0x63b4, 0x0001, 0x5555, 0x000a, 0x6666, 0x0012, 0x0700, 0x231b, 0x4000, 0xfe55, 0xb642, 0x0001, 0x5555, 0xffaa, 0x2222, 0x001b, 0x00e0, 0x2634, 0x4001, 0x0a55, 0xaa00, 0x4b23, 0xa401, 0xa9aa, 0x93aa, 0x346b, 0x0000, 0xaaa9, 0x1236, 0x0000, 0xaaa9, 0x2221, 0xb222, 0x001b, 0x007e, 0x6666, 0x0032, 0xf8fc, 0x6b21, 0x0002, 0xaa40, 0x952a, 0xffaa, 0x0023, 0xfff8, 0x3b21, 0x0001, 0xa900, 0xffaa, 0x4623, 0x4000, 0xbcaa, 0x43b6, 0x0001, 0x0f95, 0x0003, 0x0018, 0x3f10, 0x1116, 0x1811, 0x0216, 0xe0f8, 0x7080, 0x3038, 0xff16, 0x0000, 0x0001, 0x0118, 0xc0c0, 0xe0e0, 0x0061, 0x8000, 0xf316, 0x5000, 0x0205, 0x6666, 0x0018, 0x838e, 0xf681, 0x5401, 0x0585, 0x01a1, 0x0061, 0x1e0e, 0x4651, 0x9001, 0xf002, 0xeaaa, 0x6666, 0x3344, 0x0046, 0xf080, 0x0254, 0x79f0, 0xff9e, 0x903f, 0xf435, 0x0000, 0x0089, 0x5543, 0x0054, 0xedee, 0xf645, 0x0402, 0x1001, 0x0060, 0x0018, 0x5546, 0x0045, 0x4090, 0xf345, 0x0002, 0x8004, 0x8001, 0x8000, 0x0026, 0x0080, 0x0263, 0xf8fe, 0xc0f0, 0x8080, 0x5555, 0x6445, 0x0035, 0x8080, 0xf435, 0x0003, 0x0250, 0xa850, 0x005a, 0xa85a, 0x3444, 0x0254, 0xbf40, 0xe3df, 0xef1f, 0xf465, 0x9406, 0x2502, 0x0940, 0x4250, 0x9094, 0x2425, 0x0909, 0x8242, 0x0146, 0xf8f0, 0xfcfc, 0xf346, 0x5400, 0x5655, 0x0164, 0xf7f0, 0xf3f7, 0x4446, 0x0054, 0xfb80, 0xf546, 0xa408, 0xa9aa, 0x54aa, 0xa955, 0x2a90, 0x0aa4, 0x4229, 0x904a, 0xa492, 0x29a4, 0x5554, 0x0046, 0xf800, 0x5446, 0x0145, 0xb132, 0x1070, 0xf465, 0x4000, 0x5002, 0x0026, 0x0100, 0xf562, 0x5402, 0x5255, 0x5255, 0x5455, 0x6666, 0x0025, 0x0484, 0xf215, 0x0400, 0x0900, 0x0125, 0x00c0, 0x0803, 0x6255, 0x0115, 0x1810, 0x3f1e, 0x0021, 0x8000, 0x0051, 0xc080, 0x0046, 0x01f0, 0xf546, 0x0005, 0x0001, 0x0006, 0x005a, 0x01aa, 0x06aa, 0x1aaa, 0x0045, 0x80c0, 0x0025, 0x1020, 0x5555, 0x5552, 0x0015, 0xf030, 0x2615, 0x000a, 0x8055, 0x5055, 0x0a57, 0xae00, 0x3aaa, 0x3a00, 0xea00, 0xea00, 0xaa00, 0xaa03, 0xaa0e, 0x5266, 0x0072, 0xfefe, 0x3872, 0x5004, 0x5395, 0x53a5, 0x53a9, 0x93aa, 0x93aa, 0x8888, 0x0243, 0x1010, 0x3030, 0xf070, 0x3444, 0x4444, 0x7811, 0x2517, 0x6718, 0x0402, 0x14da, 0x5a58, 0x6a68, 0xf278, 0x9002, 0x9055, 0x9055, 0x5155, 0x0181, 0xf0c0, 0xf8f8, 0xf718, 0x1001, 0x1080, 0x18a8, 0x0087, 0xe0d0, 0x0218, 0x0f0e, 0x0f0f, 0x070f, 0x3581, 0x4001, 0x4055, 0xeaaa, 0x6435, 0x0008, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0x0090, 0xb090, 0x2c20, 0x0b08, 0x0154, 0xaf6e, 0xcfcf, 0x6f45, 0x0000, 0x0015, 0x0343, 0xf8fe, 0xe0f8, 0xc0e0, 0xf0e0, 0x0745, 0xe080, 0xfcf8, 0xfefe, 0x0101, 0x1807, 0x8120, 0x0703, 0xc081, 0x4555, 0x4444, 0x0026, 0x0100, 0x5126, 0x0405, 0x1200, 0x4a00, 0x6800, 0xa000, 0x0100, 0xaa00, 0x6851, 0x5001, 0x42aa, 0x02aa, 0x7261, 0x0000, 0x0290, 0x1872, 0x4001, 0x61a9, 0x55a9, 0x1877, 0x0018, 0xf0fc, 0x5178, 0x1001, 0x05a8, 0xffa8, 0x6125, 0x0000, 0xa001, 0x7526, 0xa402, 0x50f6, 0x00f5, 0x40fd, 0x2687, 0x4001, 0x403a, 0x500e, 0x1625, 0x0002, 0x40a4, 0x94a9, 0x9baa, 0x2176, 0x0000, 0x00c9, 0x6178, 0x6662, 0x1778, 0x6626, 0x7781, 0x6261, 0x0436, 0x8080, 0x8080, 0xc080, 0xc0c0, 0x0f00, 0x6616, 0x6666, 0x0031, 0xfefc, 0x0063, 0x0f00, 0xf316, 0x0003, 0x2aa9, 0x4500, 0x1655, 0x5a44, 0x1111, 0x0036, 0x03f0, 0x0062, 0x7efe, 0x8126, 0x8409, 0xa110, 0x2aa0, 0xaf00, 0xaf0a, 0xaf0a, 0xab0a, 0xab02, 0x2b00, 0x0900, 0x0800, 0x8726, 0x0007, 0xfea4, 0xfea4, 0xfa90, 0xfa90, 0xfa90, 0xfa40, 0xfa40, 0x5500, 0x01c6, 0xe180, 0x3070, 0xcdf6, 0x0003, 0x0000, 0x00a5, 0x00a9, 0x00ea, 0x6c6d, 0x01c6, 0x4040, 0x9880, 0xcc66, 0x00d6, 0x8080, 0xfcd6, 0x0000, 0x0050, 0xcccc, 0x0181, 0xf87e, 0x70f8, 0x3816, 0x9402, 0x551a, 0xf105, 0xc001, 0x0161, 0xf0fe, 0xf3f0, 0x2816, 0x4000, 0x4000, 0x6628, 0x0026, 0x1010, 0x00c6, 0x8730, 0x6ccc, 0x0216, 0x8030, 0xc080, 0xf3ed, 0xf261, 0x0400, 0x5540, 0x2661, 0x0016, 0xf080, 0xf216, 0x5004, 0x0155, 0x0502, 0x1502, 0x1508, 0x1508, 0x0026, 0x0202, 0xff62, 0x5400, 0x5455, 0x0216, 0xfefc, 0xc7ee, 0x30e6, 0x0036, 0x0400, 0xf326, 0x5003, 0x0540, 0x0094, 0x0241, 0x4000, 0x0381, 0xc000, 0x0080, 0x0701, 0x0707, 0x1155, 0x0081, 0xe3c0, 0x1888, 0x0178, 0x0300, 0x0707, 0x8887, 0x5628, 0x0000, 0xffe5, 0x8152, 0x5402, 0x54a5, 0xa0aa, 0xaffa, 0x6781, 0x5401, 0x955a, 0xffaa, 0xf762, 0x5406, 0x5255, 0x4a55, 0x2a55, 0x2a55, 0x0a55, 0xaa55, 0xaa50, 0x2277, 0x0087, 0x3010, 0xff17, 0x0000, 0x0555, 0x0078, 0xf8fc, 0xf781, 0x5400, 0x50aa, 0x7888, 0x0081, 0xc0f0, 0x8811, 0x8888, 0x0026, 0xe080, 0x8726, 0x4002, 0x9069, 0xa4ea, 0xa4aa, 0x0027, 0x1010, 0x1567, 0x0001, 0xafa9, 0xafe5, 0x0016, 0xfcfc, 0xf516, 0x0002, 0xa055, 0xa855, 0xaa56, 0x1111, 0x0262, 0xfcfe, 0xe0f8, 0xe0c0, 0xf562, 0x0000, 0x4055, 0x5666, 0x0326, 0xc0c0, 0xc0c0, 0xc0c0, 0x8080, 0x3416, 0x000a, 0x0001, 0x0006, 0x0015, 0x056a, 0x5abf, 0xafc0, 0xc000, 0x6a00, 0xbf15, 0xc06a, 0x00bf, 0x3666, 0x0116, 0x1010, 0x1010, 0x6666, 0x6622, 0x0016, 0x7fe0, 0x5261, 0x0001, 0x0040, 0xff80, 0x6115, 0x0115, 0xc1c0, 0xe1c1, 0x4651, 0x5001, 0x0001, 0xeaaa, 0x2876, 0x0007, 0x03a5, 0x03a9, 0x03aa, 0x00ea, 0x00ea, 0x003a, 0x003a, 0x000e, 0x0078, 0xc0f0, 0x0281, 0xf9fc, 0xe7f3, 0x9fcf, 0x00d6, 0x3830, 0xdff6, 0x666d, 0x0078, 0x001e, 0x1187, 0x0118, 0x0180, 0xff17, 0x2681, 0x0000, 0xa005, 0x6872, 0x5404, 0x5495, 0x5455, 0x5456, 0x54a9, 0x53a5, 0x1887, 0x8726, 0xa400, 0xa4fe, 0x8887, 0x0281, 0x00f0, 0xf070, 0xe0e0, 0xf816, 0x5400, 0x00a5, 0x0081, 0x1070, 0x1111, 0x6666, 0x0118, 0xe080, 0xfff8, 0x1256, 0x0005, 0x5595, 0x5756, 0x7f56, 0xff59, 0xff59, 0xff63, 0x5261, 0x0056, 0xe0c0, 0xf156, 0x0004, 0x0054, 0x0095, 0x40a5, 0x40a5, 0x5095, 0x5555, 0x0226, 0x0808, 0x0404, 0x0102, 0x3416, 0x5402, 0xa955, 0xfeaa, 0x03ff, 0x0016, 0xc0c0, 0x3d16, 0x0000, 0x5555, 0x431d, 0x9000, 0x91ff, 0x5613, 0x0000, 0xaa59, 0x6251, 0x5006, 0x90fa, 0x92e6, 0x9395, 0x9ba9, 0xab16, 0x5a15, 0x5605, 0x1155, 0x0226, 0x8080, 0x0c70, 0x0102, 0x5666, 0x0126, 0x4080, 0x1020, 0xf263, 0x9400, 0x6455, 0x0026, 0x2020, 0x6666, 0x6662, 0x0036, 0x3820, 0x2136, 0x4003, 0x0009, 0x0009, 0x302a, 0xccea, 0x6251, 0x4001, 0x40fe, 0xbffa, 0x5263, 0x5402, 0x5296, 0x0296, 0x0ad6, 0x5626, 0x1322, 0x5625, 0x1325, 0xe401, 0xd010, 0xd010, 0x1162, 0x0226, 0x1010, 0x1010, 0x1010, 0x0116, 0x7010, 0x0080, 0x0426, 0x8080, 0x4040, 0x4040, 0x4040, 0x4040, 0x6251, 0x5405, 0x5005, 0x0081, 0x0060, 0x0058, 0x0c54, 0x0054, 0x5511, 0x0061, 0x4006, 0x2561, 0x0007, 0xaaa5, 0xaaa7, 0x2aaf, 0x00fd, 0x03aa, 0x0eaa, 0x3aaa, 0x3aaa, 0x0036, 0x1000, 0x6666, 0x6663, 0x0016, 0x4080, 0x3416, 0x0001, 0x0001, 0x0002, 0x6633, 0x0226, 0x4020, 0x0080, 0x0201, 0x1526, 0x5000, 0x6a00, 0x1555, 0x0225, 0x0808, 0x9010, 0x1090, 0x6125, 0x000f, 0xaa04, 0x2a24, 0x2a24, 0x7a09, 0x5a09, 0x5602, 0xa602, 0xa905, 0xff15, 0x7faa, 0x7fa9, 0x1fa5, 0x17a5, 0x1d95, 0x1f94, 0x1fa4, 0x1125, 0x0026, 0x8040, 0x4326, 0x0002, 0x0040, 0x0002, 0x003c, 0x1465, 0x9400, 0xfd55, 0x5261, 0x9006, 0xaa80, 0x55a0, 0xaa00, 0x8001, 0x3a95, 0xfec0, 0xbf00, 0x0026, 0x0404, 0xf126, 0x5004, 0x5001, 0x5008, 0x5008, 0x1028, 0x10a8, 0x1111, 0x0326, 0x0300, 0x0100, 0x0101, 0x0202, 0x5361, 0x5401, 0xaa55, 0x7f55, 0x5632, 0x5401, 0xbffe, 0xfea8, 0x261f, 0x0002, 0x0050, 0x0080, 0xff90, 0x6133, 0xf256, 0x5400, 0x02a5, 0x5556, 0x0062, 0x00e0, 0x5525, 0xf111, 0x6322, 0xff55, 0x5326, 0x4001, 0x01a5, 0x55fc, 0x5162, 0x5409, 0x000a, 0x02ac, 0xab3f, 0x3aaf, 0x3ebf, 0x4ebf, 0x4fff, 0x4fff, 0x4fff, 0x4ff0, 0x2277, 0x6255, 0x0125, 0x2120, 0x7f47, 0xf521, 0x5400, 0x5095, 0x2111, 0x0071, 0xfff0, 0x0221, 0xc8e8, 0x0484, 0x0202, 0x6712, 0x5400, 0xa555, 0x7777, 0x1526, 0x9004, 0x90f5, 0x90f5, 0x40fd, 0x40ff, 0x0fff, 0x8271, 0x0001, 0xa805, 0x03f5, 0x8f16, 0x0000, 0x1555, 0x0017, 0x0c80, 0x8617, 0x0003, 0xaa05, 0x6a5a, 0xda35, 0xc603, 0x3657, 0x0001, 0xaba5, 0xae9a, 0x1362, 0x5004, 0x4059, 0x0065, 0x0f65, 0xf594, 0x5593, 0x3116, 0x0062, 0x00e0, 0x5621, 0x540a, 0x0255, 0xaa55, 0xaa40, 0xaa2a, 0x5540, 0x5023, 0x0a99, 0x6a99, 0x6a94, 0x6a90, 0x6a93, 0x2155, 0x0162, 0xf7f0, 0xf7f7, 0x2666, 0x0036, 0x2010, 0x0116, 0xf070, 0xe1e0, 0x2361, 0x5403, 0x5801, 0xac40, 0x5d40, 0x7d05, 0x0316, 0x0686, 0x0f07, 0x1c0e, 0x189c, 0xf216, 0x0007, 0x0001, 0x5a80, 0x1000, 0x1c00, 0xdd04, 0xfd01, 0xff4d, 0xff1f, 0x236f, 0x4001, 0x55a5, 0x5f77, 0x1652, 0x8402, 0x448a, 0x44ea, 0x44a9, 0xf615, 0xf152, 0x4400, 0x45e5, 0xff55, 0x2516, 0x6403, 0x25c1, 0x2501, 0x0a0c, 0x080c, 0x0126, 0x7122, 0x1881, 0x1526, 0x0003, 0x0001, 0xc006, 0x0c1a, 0x1f69, 0x0126, 0xd0ee, 0x0068, 0xf526, 0x4001, 0x9555, 0x40aa, 0x5522, 0x0226, 0xc0c0, 0x1020, 0x2010, 0xf364, 0x5400, 0x4255, 0x0046, 0x01c0, 0xf346, 0x5400, 0x6800, 0x0046, 0x01e0, 0x0081, 0xe03c, 0x4861, 0x0005, 0x00a1, 0x02a1, 0x0285, 0x0a15, 0x0855, 0x0155, 0x6666, 0x1134, 0x7111, 0x0087, 0xf070, 0x7778, 0x0318, 0xe010, 0xf001, 0xf1ff, 0xf1f0, 0x5681, 0x4001, 0x1402, 0x500a, 0x1155, 0x0181, 0xe1f8, 0x0703, 0x0061, 0x0c08, 0x8761, 0x5404, 0xaae1, 0xaaec, 0xab2c, 0xac3c, 0xbcfc, 0x0081, 0x8ece, 0x8881, 0x0071, 0x0780, 0x0081, 0x8e08, 0xf718, 0x0001, 0xaa15, 0xa005, 0x0481, 0xc4cc, 0x787f, 0x4361, 0x0006, 0x0f07, 0x7777, 0x1177, 0x0087, 0xf0fc, 0xf817, 0x0001, 0x00a5, 0xa254, 0x8888, 0x0016, 0x1010, 0xf176, 0x0003, 0x0a55, 0x02aa, 0x0a55, 0x2595, 0x0117, 0x8680, 0x0001, 0x1111, 0x1111, 0x0178, 0xfefc, 0x0c3c, 0x2178, 0x5401, 0x6a80, 0xeaa8, 0x00b1, 0xe0c0, 0x32b1, 0x0001, 0x5495, 0x95d5, 0xbb22, 0x6432, 0x9400, 0xfe3e, 0x6666, 0x0018, 0x0300, 0x00b1, 0xfc10, 0x432b, 0x4000, 0xe956, 0x2b15, 0x5004, 0xa455, 0xa455, 0xa455, 0xa956, 0xfa6a, 0x342b, 0x0000, 0x17e5, 0x2643, 0xa401, 0xa85a, 0x93aa, 0x6666, 0x432b, 0x4326, 0x0001, 0x0039, 0x0003, 0x326b, 0x4001, 0x0a55, 0xe556, 0x6223, 0x0046, 0x8000, 0x3246, 0x0001, 0x0090, 0x00c0, 0xb561, 0x0003, 0x0095, 0x30a5, 0x3fa5, 0xffa5, 0x5561, 0xb222, 0x111b, 0xb243, 0x9000, 0x15fe, 0x3223, 0x01b1, 0x0300, 0x8f07, 0x342b, 0x0001, 0x5555, 0xbffe, 0x2346, 0x423b, 0x0003, 0x0029, 0x0002, 0x0009, 0x02a7, 0x4666, 0xb223, 0x2346, 0x0000, 0x00e4, 0x4466, 0x0161, 0xfefe, 0xfefe, 0x6661, 0x0076, 0xfff0, 0x0087, 0xfe08, 0x0118, 0x0808, 0x8e0c, 0x6111, 0x0000
};

// [D_08C9A33C] D_08C9A4D4 Huffman Window 1
u32 D_08c9a4d4_window1[] = {
	0xbebb3de7, 0xeef77edf, 0x2dfd9fa2, 0xdf2cb6dd, 0x3df3fa7d, 0x7adf67b7, 0xff0b67f7, 0x7207f7cf, 0x7fb6f6bf, 0x5b7e5ef5, 0xb675d3f6, 0x77a3cebf, 0x615efdb6, 0xafeb7f76, 0x9ef68fef, 0x8ecfd79d, 0x00003a96
};

// [D_08C9A380] D_08C9A4D4 Huffman Window 2
u32 D_08c9a4d4_window2[] = {
	0xaa94c654, 0x5481352a, 0xf6f35309, 0xa8a95274, 0x65a882a4, 0xa9647ef1, 0x552bc4a8, 0x9ea97069, 0xbd754a3c, 0x55f45de5, 0xf9a52249, 0x000001dd
};

// [D_08C9A3B0] D_08C9A4D4 Huffman
struct Huffman D_08c9a4d4_huffman[] = {
	/* Data */			D_08c9a4d4_huffmandata,
	/* Size */			0xa90,
	/* Count */			0x210,
	/* Window 1 */		D_08c9a4d4_window1,
	/* Window 2 */		D_08c9a4d4_window2,
};

// [D_08C9A3C0] D_08C9A4D4 RLE Data
u8 D_08c9a4d4_rledata[] = {
	0x1, 0xf, 0x1, 0x3, 0x7, 0x7, 0x9, 0x5, 0x35, 0x4, 0x2, 0x1b, 0xb, 0xc, 0x2b, 0x8, 0x4, 0x16, 0x11, 0x5, 0x21, 0xe, 0x5, 0x14, 0x8, 0xd, 0x4, 0xd, 0x3, 0xe, 0x1b, 0xe, 0x3, 0x11, 0x15, 0xd, 0x3, 0x9, 0x6, 0x8, 0x9, 0xa, 0x9, 0xa, 0x38, 0x9, 0x6, 0x4, 0xc, 0xb, 0x15, 0xb, 0x21, 0x9, 0x4a, 0x4, 0x9, 0x1d, 0xb, 0x4, 0x3a, 0x9, 0xa, 0x6, 0x6, 0x3, 0x4, 0x3, 0x7, 0x9, 0x7, 0x9, 0x7, 0x9, 0xb, 0x5, 0xb, 0x5, 0x9, 0x7, 0x2, 0x4, 0x7, 0x3, 0xb, 0x5, 0xb, 0x5, 0x6, 0xa, 0xd, 0x3, 0x8, 0x8, 0x27, 0x9, 0x3, 0x8, 0x50, 0x5, 0x1a, 0x4, 0x3, 0x8, 0xf, 0x8, 0x2c, 0x4, 0x21, 0xd, 0x15, 0xe, 0x11, 0xe, 0x21, 0x5, 0xd, 0xd, 0x6c, 0x4, 0x13, 0x4, 0x3, 0x6, 0x17, 0x9, 0x43, 0x5, 0x1, 0x7, 0x9, 0x9, 0x5, 0x9, 0x7, 0xb, 0x1, 0x4, 0x2, 0x8, 0xa, 0x5, 0x21, 0x5, 0x1b, 0x4, 0x6, 0x4, 0x18, 0x6, 0x9, 0xa, 0x5, 0x15, 0x2, 0x6, 0xe, 0xb, 0x25, 0x9, 0x8, 0xe, 0x2e, 0x3, 0x1, 0x5, 0x11, 0x5, 0x55, 0x7, 0x4, 0x6, 0xb, 0x3, 0x9, 0x7, 0x8, 0x6, 0x4, 0x9, 0x12, 0x3, 0x3, 0xd, 0x21, 0xa, 0x39, 0x8, 0x1, 0x3, 0x1, 0x4, 0x8, 0x3, 0x1, 0x3, 0x28, 0x9, 0x8, 0x7, 0x1d, 0xc, 0xb, 0x7, 0x2, 0x8, 0x11, 0x6, 0x30, 0xe, 0x2, 0xf, 0x8, 0xa, 0x22, 0xd, 0x1b, 0x9, 0x6, 0x6, 0xd, 0x3, 0x37, 0x13, 0x38, 0x6, 0x69, 0x7, 0x9, 0x8, 0x24, 0x3, 0x11, 0x8, 0x8, 0xb, 0x25, 0xd, 0x2, 0xe, 0x3, 0x3, 0x47, 0xc, 0x10, 0xa, 0x2, 0xe, 0x2, 0xd, 0x3, 0xd, 0x3, 0xd, 0x17, 0x3, 0x1d, 0x4, 0x41, 0x4, 0x1, 0xb, 0x1a, 0x3, 0x1c, 0x5, 0x2f, 0x7, 0x19, 0x3, 0x1e, 0x6, 0x11, 0xef, 0x0, 0x0
};

// [D_08C9A4D4] D_08C9A4D4 Graphics
struct CompressedGraphics D_08c9a4d4 = {
	/* Huffman Data */		D_08c9a4d4_huffman,
	/* RLE Data */			D_08c9a4d4_rledata,
	/* RLE Size */			0x112,
	/* RLE Offset */		0x1000,
	/* Double Compressed */	TRUE,
};

