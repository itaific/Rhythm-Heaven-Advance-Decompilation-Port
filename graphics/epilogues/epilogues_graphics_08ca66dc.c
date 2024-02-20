#include "global.h"
#include "graphics.h"

// // //  D_08CA66DC  // // //

// [D_08CA59E0] D_08CA66DC Huffman Data
u16 D_08ca66dc_huffmandata[] = {
	0xf760, 0x0001, 0x5e55, 0x5e55, 0x00f6, 0x1010, 0xf7f6, 0x0003, 0xaa55, 0xa900, 0xa400, 0x9000, 0x03f6, 0x8080, 0x8080, 0x2020, 0x2020, 0x2356, 0x0000, 0x0040, 0x1236, 0x9001, 0xe4ff, 0x78aa, 0x1265, 0x5400, 0x5539, 0x4124, 0x4156, 0x0000, 0x0f29, 0x6216, 0xf456, 0x2400, 0xaa00, 0x4444, 0x0065, 0xf7fe, 0x4456, 0x0046, 0x0020, 0x4261, 0x5000, 0x5e55, 0xf7f6, 0x0002, 0x0001, 0x0006, 0x015a, 0x6f77, 0x00f6, 0x0400, 0x57f6, 0x1009, 0x6400, 0x6400, 0xa900, 0xa900, 0xaa40, 0xaa90, 0x401d, 0x401d, 0x505d, 0x555d, 0x235f, 0x1000, 0x1080, 0x652f, 0x4000, 0x43e0, 0x365f, 0x9004, 0xaaca, 0xaa3a, 0xaa3a, 0xaa3a, 0xa03a, 0xf456, 0x9001, 0x9003, 0x8000, 0x6666, 0x3666, 0x00f6, 0x4040, 0xf7f6, 0x0004, 0x0064, 0x0064, 0x40a9, 0x00a9, 0x0064, 0xf7f6, 0x00f6, 0x8080, 0x47f6, 0x0010, 0x0040, 0x0019, 0x0019, 0x006a, 0x006a, 0x01aa, 0x06aa, 0x55aa, 0x006a, 0x0040, 0x4090, 0x00a5, 0x00a4, 0x0090, 0x0090, 0x0040, 0x0330, 0x6c64, 0x464c, 0x6f43, 0xa400, 0xa4f6, 0x664f, 0xff42, 0x263f, 0xa400, 0xa403, 0x36f4, 0x5402, 0x58a8, 0x68a8, 0x68a8, 0x6663, 0x0046, 0xa060, 0xf546, 0x0003, 0x0084, 0x00a4, 0x00f4, 0x00f4, 0x1f36, 0x9001, 0x9000, 0x2000, 0x6216, 0x6446, 0x4215, 0x5364, 0x4400, 0x47e8, 0x5325, 0x6455, 0xf324, 0x364f, 0x9003, 0x9001, 0xa407, 0xa407, 0xaaaa, 0x0054, 0x07f8, 0x01f5, 0x0100, 0xfdfd, 0xff5f, 0x00f6, 0x040c, 0x6f66, 0x0016, 0x0300, 0x1122, 0x1111, 0x0032, 0xf030, 0x2613, 0x0002, 0xa955, 0x57ff, 0x00ff, 0x2223, 0x0036, 0x80fe, 0x2222, 0x1222, 0x0032, 0xf070, 0x1623, 0x4002, 0x0002, 0xfaaa, 0x5fff, 0x0032, 0xffc0, 0x3216, 0x0001, 0x5555, 0xacaa, 0x2222, 0x2246, 0x0032, 0xf070, 0x0063, 0xf010, 0x3642, 0x9003, 0x90aa, 0x90aa, 0x90aa, 0x93ea, 0x3126, 0x0004, 0x0039, 0x003a, 0x000e, 0xd400, 0x5400, 0x3246, 0x0002, 0x00a9, 0x00e9, 0x0039, 0x6213, 0x2402, 0x54ff, 0x53ff, 0xfff2, 0x3642, 0xa406, 0xa8aa, 0xa4aa, 0xacaa, 0x90aa, 0x90aa, 0x93aa, 0xaaaa, 0x5246, 0xe402, 0xe000, 0x6c00, 0xa400, 0xf236, 0x0002, 0x00a4, 0x00a8, 0x0068, 0x6326, 0x00e6, 0xf8f0, 0x1e36, 0x9003, 0xd06a, 0x401a, 0x00af, 0x00f4, 0x3666, 0x0026, 0x1010, 0xf216, 0x0003, 0x0009, 0x0025, 0x0095, 0x156a, 0x0021, 0x1080, 0x5231, 0x0001, 0x0009, 0xaaa7, 0x4625, 0x9004, 0x90aa, 0x90aa, 0xacaa, 0xa4aa, 0xb5aa, 0x5326, 0x0004, 0x0025, 0x0015, 0x1c03, 0x1c03, 0x1c03, 0x2465, 0x5402, 0x5485, 0x54c5, 0x55e5, 0xf236, 0x9000, 0xa000, 0x0012, 0xf7fe, 0x5321, 0x9000, 0xe555, 0x00de, 0x1010, 0x00e1, 0x7f00, 0x631e, 0x0000, 0x5595, 0x6663, 0x001e, 0x0ff0, 0xf43e, 0x0000, 0x0001, 0xe334, 0x011e, 0xf000, 0x806f, 0x53e1, 0x5001, 0x0556, 0x556b, 0x4552, 0x62e3, 0x0000, 0xff95, 0x36e1, 0x4000, 0x3a55, 0x1111, 0x0026, 0x8080, 0x4126, 0x0003, 0x0090, 0x00a4, 0xa8a9, 0x0e56, 0x41e6, 0x0003, 0x9555, 0xea55, 0x0faa, 0x00e5, 0x631e, 0xe400, 0xf9ff, 0x0036, 0xf070, 0xf163, 0x0001, 0xa155, 0x8555, 0x0036, 0x1080, 0x2136, 0x0004, 0x0054, 0x006a, 0x001a, 0x0005, 0x1fff, 0x2222, 0x6422, 0x0032, 0xffe0, 0x2163, 0x0000, 0x5540, 0x2221, 0x0032, 0xfee0, 0x2163, 0x0001, 0x5540, 0xaa95, 0x2111, 0x0032, 0xff80, 0xf263, 0x4002, 0x5554, 0x5568, 0x5561, 0x6223, 0x0026, 0x7070, 0x4236, 0x0001, 0x00e9, 0x00e4, 0x6123, 0x2400, 0xffff, 0x3246, 0xa405, 0xe400, 0xa400, 0xa403, 0xa400, 0xa400, 0xe400, 0x2136, 0x0001, 0x00e4, 0x0050, 0xf73c, 0x9001, 0xa46a, 0xa9aa, 0x00d7, 0xfef0, 0xdddd, 0xdddd, 0x003c, 0x0310, 0x431c, 0x0000, 0x0500, 0x543c, 0x4000, 0x403e, 0xcc66, 0x73c4, 0x5c46, 0x73c5, 0x4356, 0x6402, 0x00aa, 0x00d0, 0x0080, 0xc456, 0x4556, 0x5413, 0x5400, 0x5552, 0x1111, 0x6541, 0x6531, 0x4000, 0xd0fe, 0x6666, 0x00da, 0xf010, 0x37ad, 0x4000, 0x7a00, 0x347a, 0x0002, 0x0039, 0x000d, 0x000d, 0x00ed, 0xf0f0, 0xddee, 0x0173, 0xfdfe, 0xfbfb, 0x00d7, 0xfffc, 0x00ed, 0xfff8, 0x45f6, 0x4001, 0x8000, 0xf8ea, 0x1113, 0x1245, 0xe400, 0xf9ff, 0x5361, 0x0005, 0x6e55, 0xbb55, 0x9955, 0xee55, 0xbb95, 0x9995, 0xf6f7, 0x9000, 0xa4aa, 0x02f6, 0x1010, 0x1010, 0x8010, 0x5cf6, 0x0001, 0x0040, 0x00e0, 0x364c, 0x4400, 0x306a, 0xcc56, 0x46c3, 0x1400, 0x517a, 0x43c5, 0x6400, 0x9755, 0xcccc, 0x0056, 0x0080, 0xf7f6, 0x9004, 0x9001, 0xa401, 0xa516, 0x9006, 0x9001, 0x006f, 0x7f7e, 0x53f6, 0x0004, 0x0250, 0x0255, 0x0095, 0x0095, 0x009d, 0x1ff5, 0x31f6, 0x0001, 0x03e5, 0x00fa, 0x465f, 0x9000, 0x90ca, 0x4ff6, 0x15f3, 0x6404, 0x6455, 0x6455, 0x6755, 0x5c55, 0xf069, 0x006f, 0xfef0, 0x4365, 0x5400, 0x1201, 0x3334, 0x4537, 0xaaa3, 0x3457, 0xaaaa, 0x0064, 0xfefe, 0x7653, 0x0000, 0xffa4, 0x5437, 0xe400, 0x4000, 0x46c7, 0x0000, 0x6dd9, 0x543c, 0x1002, 0x1109, 0x100d, 0x0450, 0xf73c, 0xa402, 0xa900, 0xaa40, 0x9540, 0x0136, 0x8080, 0x0080, 0x01f6, 0x4040, 0x0040, 0x4365, 0x5000, 0x3a55, 0x43a6, 0x0001, 0x00e5, 0x0395, 0x2356, 0x0001, 0x5555, 0xaafe, 0x002a, 0x8070, 0x006d, 0xf8f8, 0x46ed, 0x4002, 0x50aa, 0x55aa, 0x55ab, 0x1e64, 0x5001, 0x50ea, 0x553e, 0x00ed, 0xfce0, 0x63de, 0x4001, 0x4000, 0x5002, 0xde46, 0xa401, 0xa9fe, 0xaaff, 0xeeed, 0x3465, 0x5406, 0x5461, 0x5461, 0x5461, 0x5461, 0x5461, 0x5471, 0x5471, 0x6356, 0x1111, 0x4111, 0x0121, 0x1010, 0x1010, 0x5621, 0x0002, 0x0001, 0x1aaa, 0x7aaa, 0x1436, 0x0001, 0x0040, 0x0080, 0x5621, 0xa400, 0xadaa, 0x1436, 0x0001, 0x0001, 0x0002, 0x1114, 0x0121, 0x8080, 0x8080, 0x3621, 0x0000, 0xee40, 0x0026, 0xa0a0, 0x5216, 0x0001, 0x0084, 0x00b0, 0x5246, 0x9000, 0x6c00, 0x3256, 0x0000, 0x0039, 0x523e, 0x0001, 0x0029, 0x5557, 0xf436, 0x0000, 0xa900, 0x4444, 0x01de, 0x3f00, 0x010f, 0x43ee, 0x642e, 0x4002, 0x92e0, 0xe040, 0x4000, 0xeee1, 0xeeee, 0x00d6, 0x8080, 0x3ed6, 0x0003, 0x0050, 0x0060, 0x006c, 0xc06f, 0xd133, 0x6666, 0x1ee3, 0x3645, 0x9007, 0x90aa, 0x90aa, 0x90aa, 0x90aa, 0xb0aa, 0xb0aa, 0xb0aa, 0xfeaa, 0x4361, 0x0000, 0xaaa5, 0x1546, 0x0000, 0x02a9, 0x3111, 0x6544, 0x5421, 0x0000, 0x00e4, 0x4211, 0x5426, 0x0000, 0x0039, 0x2211, 0x1643, 0xa401, 0x7fff, 0xfff2, 0x1356, 0x4000, 0x00fe, 0x1136, 0x63a2, 0x5400, 0x51fe, 0x5643, 0x132a, 0x0402, 0x1058, 0x10fc, 0x10e4, 0x6642, 0x22ad, 0xfd64, 0x5401, 0x550a, 0x5557, 0xf6f7, 0xa405, 0xa4aa, 0x50aa, 0x90aa, 0xa4aa, 0xa4aa, 0xa9aa, 0x0046, 0x5020, 0x45f6, 0x4000, 0x4038, 0x6456, 0x7f66, 0x6455, 0x7ff6, 0xf645, 0x9001, 0x90ea, 0x90ea, 0x0036, 0x3070, 0x0146, 0x0800, 0x0408, 0x3456, 0x2402, 0x2400, 0x2401, 0xccc0, 0x0026, 0xa8a8, 0x5126, 0x4001, 0x4088, 0x400c, 0x1236, 0x0004, 0x0240, 0x0900, 0xc000, 0xf400, 0x0bd0, 0x2136, 0x1624, 0xa400, 0x535e, 0x2183, 0x5401, 0xea55, 0xbe54, 0x4621, 0x4001, 0x13a9, 0x2aaa, 0x0045, 0xfc00, 0x6784, 0x0001, 0x5400, 0xa969, 0x2367, 0x9000, 0xec00, 0x6217, 0x0000, 0x7095, 0x6421, 0x9000, 0xfe40, 0x4521, 0x9000, 0xe9aa, 0x4444, 0x3566, 0x4211, 0x1216, 0x8842, 0x7421, 0x9002, 0xe8f2, 0xf2f3, 0xc8cf, 0x5277, 0x4172, 0xe400, 0x26a1, 0x5621, 0x4000, 0x5eaa, 0x3521, 0x9000, 0x0503, 0x8421, 0x9400, 0xa9aa, 0x4268, 0x0000, 0x9555, 0x1246, 0x0000, 0x00f9, 0x6532, 0xe400, 0xfeff, 0x2316, 0x0001, 0x0025, 0x355f, 0x5128, 0x0000, 0xff90, 0xf465, 0x5400, 0xaa55, 0x0065, 0xfe00, 0x0054, 0xf800, 0x5555, 0x6666, 0x4121, 0x0054, 0xf000, 0x4165, 0x0000, 0xa555, 0x5124, 0xa401, 0x6a0f, 0x00ff, 0x2156, 0x4000, 0x0055, 0x6321, 0x4401, 0x19d2, 0xd4fd, 0x6666, 0x5413, 0x5555, 0x4221, 0x6544, 0x4124, 0x6554, 0x3144, 0x1265, 0x5000, 0x5400, 0x4212, 0x1286, 0x0000, 0xee95, 0x1133, 0x0021, 0x140a, 0xb435, 0x4001, 0xaaa0, 0xff00, 0xbb12, 0xbbbb, 0x1253, 0xbbbb, 0x3642, 0xbbb1, 0x6524, 0xbb12, 0x6426, 0x4413, 0xb356, 0x9000, 0x40ff, 0xb434, 0x2136, 0x0000, 0x00e4, 0x6135, 0x9000, 0x7fff, 0x0056, 0x1080, 0x5436, 0x0000, 0x6a95, 0x1356, 0x0001, 0x00e4, 0x00f8, 0x1114, 0x6665, 0x3112, 0x4666, 0xa311, 0x2666, 0xaa21, 0x1566, 0xaaa2, 0x3124, 0x6400, 0xdad5, 0x6154, 0x5000, 0xfff6, 0x3463, 0x4444, 0x2365, 0x4322, 0x3256, 0x6554, 0x6456, 0x00b6, 0xf000, 0x2b54, 0x5401, 0x54aa, 0xd52a, 0x154b, 0x4000, 0x90da, 0x2255, 0x154b, 0xa400, 0xa976, 0x6235, 0x5533, 0x6425, 0xe403, 0xe000, 0xf800, 0xfe00, 0xf068, 0x6523, 0x9001, 0xcafe, 0xe2ff, 0x5436, 0x0001, 0x0009, 0xbfff, 0x3245, 0x0000, 0x00e4, 0x2635, 0x9401, 0xad00, 0x8c00, 0x4566, 0x5315, 0x1214, 0x3215, 0x4411, 0x2325, 0x1322, 0xb425, 0x34bb, 0x4b25, 0x9000, 0x93aa, 0x435b, 0x0001, 0x0025, 0x5f55, 0x1645, 0x9001, 0xa9aa, 0x00aa, 0x5421, 0xe400, 0x00ff, 0x5553, 0x6664, 0x5525, 0x4541, 0x5523, 0x2321, 0xb354, 0x5004, 0x53f2, 0x53ff, 0x53ff, 0x53ff, 0x53ff, 0x4213, 0x5400, 0x5556, 0x1354, 0x0021, 0x0080, 0x45b3, 0x0001, 0x5500, 0xafaa, 0x5555, 0x2111, 0x5432, 0x2351, 0x0001, 0x9555, 0x35af, 0x0041, 0x0010, 0x1222, 0x003a, 0x8000, 0x123a, 0x0000, 0x5524, 0x4213, 0x9400, 0xafc0, 0x0056, 0x0080, 0xa264, 0x0000, 0x8500, 0x256a, 0x0000, 0x00e5, 0x4666, 0xaa21, 0x2346, 0x0000, 0x00f9, 0x4566, 0x0046, 0x0ff0, 0x5554, 0x4326, 0x0000, 0xff95, 0x514a, 0x0000, 0x00e4, 0x523a, 0x2453, 0x9400, 0xc27c, 0x6532, 0xf234, 0x5000, 0x0001, 0x2224, 0x0065, 0x7f0c, 0x42a3, 0x5001, 0x2a55, 0xff50, 0x5634, 0x5002, 0xfeea, 0x003f, 0x03ea, 0x2a36, 0x0001, 0x6aa9, 0xf6aa, 0x423a, 0x4000, 0xd5d6, 0x6655, 0x5543, 0x0056, 0x081c, 0x3246, 0x0001, 0x0015, 0xabd6, 0x3574, 0x5402, 0x5b5a, 0x5b5a, 0x535a, 0x6375, 0x5001, 0xfff2, 0xffc0, 0x2211, 0x6555, 0x2137, 0x3724, 0x4000, 0xead2, 0x3257, 0xa400, 0xb041, 0x2475, 0x1400, 0x56e6, 0x6145, 0x4001, 0x40fa, 0x00aa, 0x2212, 0x7135, 0x0000, 0x00d9, 0x5215, 0x4135, 0x0000, 0x00e4, 0x1325, 0x5000, 0xe000, 0x5333, 0x6624, 0x5553, 0x6632, 0x4555, 0x6641, 0x6235, 0x4000, 0x80fe, 0x6664, 0x2455, 0x6663, 0x2555, 0x3421, 0x3555, 0x1111, 0x4236, 0x5312, 0xa401, 0xa953, 0xf900, 0x4774, 0x5541, 0x4275, 0x9400, 0xb402, 0x5554, 0x2375, 0xe400, 0xb000, 0x0065, 0xfff0, 0x1256, 0x4000, 0xb940, 0x2232, 0x7543, 0x6404, 0xbc6f, 0x7c6f, 0x7e1f, 0x6e1f, 0xaaa8, 0x4352, 0x5401, 0x5255, 0x7155, 0x2365, 0x0001, 0x0029, 0x0031, 0x5234, 0x6315, 0x0002, 0x0025, 0xb3ff, 0x33ff, 0x3546, 0x0001, 0x0025, 0xff1f, 0x5543, 0x3232, 0x3654, 0xa400, 0x169a, 0x1234, 0x5400, 0xf9e9, 0x5521, 0x33aa, 0x4112, 0x213a, 0x0003, 0x00a4, 0x0090, 0x0040, 0x57ff, 0x323a, 0x02a3, 0xbf3e, 0xdfbf, 0xefdf, 0x321a, 0x0002, 0xc0a5, 0x000d, 0x0003, 0x4135, 0x0001, 0x9500, 0xf003, 0x6542, 0xa400, 0xa1ff, 0x4536, 0x0000, 0x0094, 0x5246, 0x4326, 0x0000, 0x0090, 0x5246, 0x9000, 0xffff, 0x5634, 0x0000, 0xa854, 0x3156, 0x4001, 0x000e, 0x007a, 0x1113, 0x6664, 0x12aa, 0x6521, 0xaaaa, 0x6212, 0x3245, 0x0002, 0x0005, 0x017a, 0x0795, 0x3256, 0x4001, 0x555e, 0xaaaa, 0x6543, 0x5402, 0xaa05, 0xfbaa, 0xaa91, 0x3245, 0x9401, 0xeb50, 0x15b4, 0x5235, 0x6666, 0x3757, 0x4211, 0x4447, 0x5413, 0x7744, 0x5317, 0x3124, 0x5001, 0x95fa, 0xa9fe, 0x7153, 0x4002, 0x540a, 0x5555, 0xdf3c, 0x4774, 0x7577, 0x7342, 0x6400, 0x5055, 0x7777, 0x5421, 0x5400, 0x41be, 0x5132, 0x0002, 0xaa85, 0xf5ff, 0xc0ff, 0x2345, 0x0001, 0xa950, 0xffe4, 0x4725, 0x0002, 0x00a5, 0x00d4, 0x0070, 0xf135, 0x9400, 0x9400, 0x0035, 0x80e0, 0x0015, 0x8000, 0x4735, 0x0005, 0x0040, 0xfa7a, 0xba7a, 0xba5a, 0xbada, 0x8ad2, 0x4257, 0x1477, 0x4357, 0x1177, 0x5777, 0x2124, 0x5743, 0xa406, 0xb7ae, 0xb6ae, 0x9ebe, 0x9ebe, 0xdebe, 0x4abe, 0x39ba, 0x3257, 0x1000, 0x03c2, 0x4741, 0x3752, 0xa401, 0xac6c, 0x93a3, 0x7425, 0x7425, 0x7235, 0x5347, 0x2255, 0x4377, 0x2555, 0x2137, 0x4000, 0xaaaa, 0x4912, 0x4401, 0x2258, 0x4ad6, 0x3331, 0x0032, 0xfffc, 0x1925, 0x0001, 0x5555, 0xdaaa, 0x0029, 0x0080, 0x0032, 0xff00, 0x0053, 0xff80, 0x0092, 0x0f00, 0x1532, 0x0001, 0xaa55, 0xa3aa, 0x5555, 0x5542, 0x0135, 0x3000, 0x1070, 0x1295, 0x0001, 0xba95, 0x5556, 0x9214, 0xf239, 0x0000, 0x0295, 0x0023, 0x00e0, 0x0035, 0x0080, 0x5555, 0x9214, 0x5555, 0x1355, 0x0135, 0xc000, 0x80e0, 0x2375, 0x0001, 0x0039, 0x002d, 0x1524, 0x8402, 0xa5aa, 0xa3aa, 0xa9aa, 0x0045, 0x0010, 0x2315, 0x0004, 0x5555, 0xfeaa, 0xab55, 0x5555, 0x5700, 0x0054, 0x8000, 0x0015, 0xff00, 0x3344, 0x3333, 0x0021, 0x0100, 0x0045, 0x0f00, 0x4215, 0x0002, 0x5555, 0xffea, 0x5555, 0x5321, 0xa400, 0xfd56, 0x0045, 0x00f0, 0x0051, 0xc0c0, 0x1542, 0x0003, 0xff90, 0xff95, 0x05a9, 0xaaa9, 0x0021, 0x7f00, 0x1243, 0x5001, 0xff81, 0x5555, 0x5555, 0x1114, 0x0021, 0x0ff0, 0x1111, 0x5543, 0x1225, 0x6433, 0x1266, 0x1243, 0x5000, 0xfeb9, 0x4311, 0x0035, 0x003e, 0x3145, 0x0001, 0x0040, 0x00a0, 0xf235, 0x9001, 0x9000, 0x9000, 0x0035, 0x0080, 0x0000, 0x0000
};

// [D_08CA6578] D_08CA66DC Huffman Window 1
u32 D_08ca66dc_window1[] = {
	0x6cfdd57f, 0x2cae23b2, 0xfffb7fcf, 0xedb3fdb6, 0xbde921cf, 0xfe0ededf, 0xbfdf17ff, 0x3cad4e32, 0xfd07fdfc, 0x0d403e3f, 0x80c01f40, 0xc0f007cb, 0xf56a7ec6, 0x0206bc79, 0x7d19bba4, 0xf4c03c0f, 0x7f602c0f, 0x9ff3f876, 0x000007a0
};

// [D_08CA65C4] D_08CA66DC Huffman Window 2
u32 D_08ca66dc_window2[] = {
	0x7bd7d9f5, 0x5f57f290, 0xcfaaaeea, 0xebd7bc37, 0xafaf7673, 0xff7d37ff, 0xf7bdf8ff, 0x7bdd9bff, 0xfeffbfff, 0x685f9fff, 0x00354c2c
};

// [D_08CA65F0] D_08CA66DC Huffman
struct Huffman D_08ca66dc_huffman[] = {
	/* Data */			D_08ca66dc_huffmandata,
	/* Size */			0x7e3,
	/* Count */			0x24c,
	/* Window 1 */		D_08ca66dc_window1,
	/* Window 2 */		D_08ca66dc_window2,
};

// [D_08CA6600] D_08CA66DC RLE Data
u8 D_08ca66dc_rledata[] = {
	0x1, 0xf, 0x1, 0xf, 0x8, 0x8, 0x11, 0x7, 0x19, 0x9, 0x4, 0xd, 0xb, 0x12, 0x49, 0x9, 0x16, 0x5, 0xe, 0x9, 0x25, 0xe, 0x22, 0xc, 0xa, 0x5, 0x9, 0x5, 0x9, 0x3, 0x7, 0x6, 0x4, 0x6, 0x4, 0x5, 0x3, 0x7, 0xb, 0x5, 0x4f, 0x5, 0xf, 0x7, 0x28, 0x9, 0xc, 0x4, 0x6, 0x3, 0x1d, 0x4, 0xd, 0xe, 0xc, 0x4, 0x2, 0xe, 0x3, 0xe, 0x6, 0x9, 0x2, 0xf, 0x2, 0xd, 0x6, 0xa, 0xb, 0x5, 0x2, 0x5, 0x6, 0x3, 0x4, 0x6, 0x29, 0xd, 0x6, 0x5, 0x26, 0x7, 0x5, 0x3, 0x9, 0x3, 0x16, 0x6, 0x9, 0x9, 0x6, 0xb, 0x13, 0x3, 0x4, 0xe, 0xe, 0xc, 0x34, 0xd, 0x2, 0x8, 0x13, 0x5, 0x15, 0x8, 0x14, 0x7, 0x19, 0xa, 0x3, 0x3, 0x2, 0x4, 0x1c, 0x3, 0x13, 0x7, 0x8, 0x8, 0x2, 0x5, 0x1a, 0x5, 0x3f, 0x3, 0x9, 0x3, 0x5d, 0x6, 0x3a, 0x7, 0x9, 0xc, 0x4, 0xd, 0x2, 0x8, 0xb, 0xd, 0x5, 0xb, 0x6, 0xa, 0x7, 0x9, 0x9, 0x7, 0x1c, 0x3, 0x2, 0x5, 0x17, 0x7, 0x2, 0xa, 0x41, 0x8, 0x8, 0xf, 0x11, 0xa, 0x6, 0xb, 0x1f, 0x5, 0x1, 0x7, 0x5, 0x3, 0x1, 0x7, 0x23, 0x3, 0x3, 0xb, 0x21, 0x3, 0x10, 0x6, 0x85, 0x5, 0x16, 0xa, 0x21, 0x7, 0x9, 0x7, 0x9, 0x8, 0x26, 0xd, 0x4, 0xc, 0x19, 0xb, 0x3d, 0x3, 0x13, 0x5, 0x3, 0x3, 0xe, 0x4, 0x1d, 0x3, 0x2b, 0x3, 0xd, 0x3, 0xf, 0x3, 0x7, 0x3, 0x3, 0x3, 0x21, 0xef, 0x0, 0x0
};

// [D_08CA66DC] D_08CA66DC Graphics
struct CompressedGraphics D_08ca66dc = {
	/* Huffman Data */		D_08ca66dc_huffman,
	/* RLE Data */			D_08ca66dc_rledata,
	/* RLE Size */			0xda,
	/* RLE Offset */		0xc00,
	/* Double Compressed */	TRUE,
};

