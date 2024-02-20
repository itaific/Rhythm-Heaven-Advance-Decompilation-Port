#include "global.h"
#include "graphics.h"

// // //  D_08CD7948  // // //

// [D_08CD664C] D_08CD7948 Huffman Data
u16 D_08cd7948_huffmandata[] = {
	0xb190, 0x0003, 0x00a9, 0x1aa4, 0xaaaa, 0x6a00, 0x0000, 0xfdb0, 0xc000, 0xb0fe, 0x5400, 0x554e, 0x0000, 0xcbb0, 0xedcb, 0xbc0f, 0x0001, 0x7e55, 0x0055, 0xbcde, 0x5e0f, 0x0004, 0x5855, 0x8055, 0x0055, 0x5558, 0x55d5, 0x3540, 0x4000, 0xa800, 0x0235, 0x0007, 0xaaa9, 0xffca, 0x0000, 0xffaa, 0x0000, 0xffaa, 0xffa3, 0xff3f, 0x4750, 0x9000, 0xb400, 0x7650, 0x0000, 0x00e4, 0x7750, 0x0050, 0xf0e0, 0x0075, 0x00f0, 0x6750, 0x0005, 0x5555, 0xadaa, 0x00aa, 0x5555, 0x5eaa, 0x0055, 0xfec0, 0x4003, 0x9000, 0xd000, 0xf400, 0xf800, 0xefb0, 0x0001, 0x00a9, 0x40ab, 0xffff, 0x00c0, 0x0100, 0xef0c, 0x5401, 0x5255, 0x5e55, 0xebf0, 0x0002, 0x0025, 0x0035, 0x0095, 0x4305, 0x0000, 0xaa15, 0x3240, 0x4000, 0xc0aa, 0xf502, 0x0002, 0x0a95, 0x0955, 0x0955, 0x0050, 0x7f00, 0x2043, 0x0002, 0xff90, 0xff9f, 0xff9f, 0x3205, 0x5000, 0x55ea, 0x5042, 0x4000, 0xffaa, 0x4350, 0x4000, 0xc0aa, 0x5302, 0x0003, 0x0095, 0x0fd5, 0x0d55, 0x0d55, 0x0050, 0xff00, 0x3333, 0x4333, 0x0042, 0x8080, 0x2222, 0x0532, 0x0002, 0xe0e0, 0xf190, 0x0003, 0x0040, 0x0090, 0x40a9, 0x90aa, 0x0001, 0x0010, 0xf901, 0x0001, 0x0009, 0x0060, 0x0090, 0x0100, 0x0091, 0x0210, 0xf0f0, 0xf3f1, 0x0ff7, 0xeb00, 0xbfc0, 0x0003, 0x00a4, 0x40a9, 0x90aa, 0xacaa, 0xde0f, 0x0002, 0x0009, 0x0003, 0x0080, 0x00e0, 0x0100, 0x010f, 0xf8fc, 0xe0f0, 0x3e0f, 0x0002, 0x0050, 0x5560, 0x55d5, 0x4250, 0x9000, 0xb000, 0x5230, 0x0002, 0x0090, 0x00a0, 0x00ac, 0x3240, 0xa401, 0xac00, 0x0eaa, 0x4052, 0x0000, 0x00e4, 0x4302, 0x9401, 0x5600, 0x5700, 0x3052, 0x0000, 0xc0a9, 0x3420, 0x0001, 0x7895, 0x0000, 0x0023, 0xfffe, 0x2400, 0x3052, 0x4000, 0xb03a, 0x4250, 0xa402, 0xac3a, 0xaa1a, 0x00aa, 0x3250, 0xa400, 0xacea, 0x0432, 0x9000, 0xff03, 0x4025, 0x5400, 0x57aa, 0x4230, 0x0002, 0x00a9, 0xc6aa, 0x00aa, 0x4750, 0x5401, 0xa900, 0xab40, 0x7650, 0x4000, 0x40fe, 0x7777, 0x0050, 0xf0f8, 0x0075, 0x80f0, 0x5760, 0xa404, 0xabaa, 0xa9aa, 0xeaaa, 0x000e, 0x0001, 0x5556, 0x0075, 0x00f0, 0x0000, 0xccb0, 0xfeed, 0xefb0, 0xa403, 0x90aa, 0x40aa, 0x00aa, 0xc0ad, 0xcb0f, 0x0001, 0x0039, 0x003a, 0xc0ef, 0x4000, 0x00aa, 0xf0bc, 0xa401, 0x94ff, 0xaaff, 0xcdee, 0xf0bc, 0xa402, 0xa7ff, 0xa9ff, 0xaa7f, 0x0bef, 0xe400, 0xffff, 0x3240, 0xa400, 0xac00, 0x4250, 0x0002, 0x00a9, 0x00a9, 0x00ab, 0x5023, 0x5404, 0x54ea, 0x550e, 0xaad5, 0xaad5, 0xaa85, 0x5042, 0x9000, 0xb0aa, 0x5320, 0x0000, 0x0039, 0x0432, 0xa400, 0x00ff, 0x2405, 0x5400, 0xf955, 0x5230, 0x0003, 0x00a4, 0x00ab, 0x00ab, 0x00ab, 0x3024, 0x5404, 0x57aa, 0x55aa, 0xab55, 0xa855, 0xa855, 0x2222, 0x0005, 0x0002, 0xf0f0, 0x4032, 0x4000, 0xc0aa, 0x0110, 0x0800, 0x0c08, 0xf190, 0xa401, 0xa800, 0xa900, 0x0410, 0xf0f0, 0x0101, 0x0703, 0x0f07, 0x0f0f, 0xceb0, 0x4000, 0x8000, 0xefc0, 0x0002, 0x0090, 0x00b0, 0x00a4, 0xefd0, 0xa407, 0xa800, 0xaaa9, 0xaaea, 0x0300, 0x0200, 0x0e00, 0x0a00, 0x3a00, 0x00f0, 0x0070, 0x4025, 0x5400, 0x57aa, 0x5230, 0x0000, 0xc0a9, 0x3402, 0x0002, 0x0095, 0x00d5, 0x0015, 0x3250, 0x9001, 0x6aaa, 0x2aac, 0x4250, 0x5402, 0x003a, 0x001a, 0x400a, 0x0032, 0x3000, 0x4052, 0x2223, 0x3002, 0x0042, 0x1000, 0x5542, 0x4023, 0x5405, 0x5579, 0x5559, 0x5548, 0x55ab, 0x5585, 0x2cb1, 0x3052, 0x0001, 0x0029, 0x001b, 0x5402, 0x2402, 0x0600, 0x0d00, 0x0900, 0x5302, 0x0001, 0x0009, 0xf555, 0x4705, 0x0002, 0xaaa1, 0x8555, 0xb555, 0x7650, 0x0000, 0x00e4, 0x0745, 0xa400, 0xa93f, 0x4765, 0x4000, 0x9faa, 0x4067, 0x0003, 0x0090, 0x0090, 0x00c0, 0x4005, 0x7650, 0xe401, 0x802f, 0x0600, 0x6470, 0x0000, 0x0025, 0x0567, 0x4001, 0x00fe, 0x00f9, 0x0477, 0xfeb0, 0x0001, 0x00e4, 0x0090, 0xeb00, 0x00e0, 0x8080, 0xcbf0, 0x0001, 0x0040, 0x0060, 0xfc00, 0x02ef, 0x0080, 0x8080, 0x8080, 0xffff, 0x00be, 0x00b0, 0x1010, 0x5cb0, 0x0001, 0x0001, 0x0002, 0x3245, 0xa400, 0xacaa, 0x2222, 0x0050, 0x80fe, 0x4205, 0x0002, 0xaa85, 0xaab1, 0x54aa, 0x2222, 0x0005, 0x0f0e, 0x4025, 0x0001, 0x2a55, 0xea55, 0x5302, 0x0003, 0x0095, 0x0035, 0x000d, 0x0002, 0x5042, 0x4001, 0xc0aa, 0x80aa, 0x4320, 0x0001, 0x0025, 0x0035, 0x4052, 0x9001, 0xacaa, 0xabaa, 0x0000, 0x9000, 0x0001, 0x7070, 0xf901, 0x0000, 0x0015, 0x1900, 0x0401, 0x3030, 0xe030, 0xe0e0, 0xc0e0, 0xc0c0, 0xfc01, 0x0001, 0x5550, 0x55fe, 0xe0fd, 0x5401, 0x57aa, 0x55aa, 0xcfb0, 0x4000, 0xc0aa, 0xed0f, 0x0003, 0x0095, 0x0095, 0x5540, 0x55c0, 0xefff, 0x00f0, 0xf0f0, 0x4f0d, 0x5402, 0x54aa, 0x54aa, 0x54aa, 0x3240, 0x9000, 0xb0aa, 0x4502, 0x0001, 0x0009, 0x000d, 0xf235, 0xa400, 0x00aa, 0x5555, 0x0030, 0x1010, 0x3520, 0x0004, 0xaa55, 0x00aa, 0xaa55, 0x00aa, 0xd554, 0x5423, 0x5401, 0x5595, 0x55d5, 0x4032, 0x9000, 0xb000, 0x7405, 0x0001, 0x5550, 0xfff8, 0x7765, 0x0057, 0xf010, 0x5555, 0x0070, 0xfff0, 0x4777, 0x7777, 0x0546, 0xe400, 0xffaa, 0x5047, 0xa400, 0xabaa, 0x4760, 0x0000, 0xeaa9, 0x4075, 0x5402, 0x5e55, 0x0a55, 0xaa00, 0xdfc0, 0x9000, 0xb000, 0xdfe0, 0x0001, 0x0090, 0x00d0, 0x0cef, 0x0000, 0x40e4, 0xce0b, 0x5400, 0x554a, 0xffec, 0xeb0f, 0x0001, 0x00e5, 0x3e55, 0xfcd0, 0x0001, 0x0040, 0x0002, 0x000d, 0x00e0, 0x1010, 0x2350, 0x0006, 0xffe4, 0xfff4, 0x5554, 0xff00, 0x5555, 0xff00, 0xbf7f, 0x0054, 0x0055, 0x0010, 0xcfc0, 0xf901, 0x0000, 0x0005, 0x1900, 0x0001, 0x7070, 0xf901, 0x0000, 0x0015, 0x9000, 0x0301, 0xc0c0, 0xc0c0, 0xe0e0, 0xe0e0, 0xcfd0, 0x0002, 0xaa40, 0xaa40, 0xaac0, 0xb000, 0x000f, 0xf0f0, 0xd0fe, 0x5400, 0x57aa, 0xdfc0, 0x0004, 0xaaa9, 0xaa03, 0xaa03, 0xaa03, 0xaa03, 0x5ef0, 0x0003, 0x0095, 0x0095, 0x0015, 0x00c0, 0x5740, 0x9003, 0xac00, 0xac00, 0x0300, 0x460f, 0x0477, 0x0057, 0x8484, 0x3250, 0x0001, 0x1555, 0x1eaa, 0x5042, 0x0001, 0x00a4, 0x00ac, 0xfd03, 0x5402, 0x9555, 0xe555, 0x7955, 0xdbf0, 0x0002, 0x0084, 0x0067, 0x7000, 0xd0cf, 0x0001, 0x6a41, 0xaaac, 0xdf0b, 0x5401, 0x1214, 0xaa55, 0x000d, 0xcfe0, 0x9000, 0x883a, 0xbdf0, 0x9002, 0x4041, 0x0002, 0x3f09, 0x00f0, 0xefff, 0x0dfb, 0xe408, 0xcfff, 0x13ff, 0x3fff, 0x4fff, 0xfcff, 0x313c, 0xfcff, 0xf10f, 0xff53, 0xd000, 0xf0eb, 0x8401, 0xa0c0, 0x8fff, 0x0480, 0xc040, 0xc1c0, 0xe7c3, 0x0fef, 0x07fe, 0x0001, 0xf0f0, 0xf019, 0x5401, 0x56aa, 0x52aa, 0x0410, 0x80c0, 0x0f80, 0x0f0f, 0x0707, 0x0103, 0xdf01, 0x5401, 0xa955, 0xad55, 0xefc0, 0x0002, 0x00a4, 0x00b0, 0x0090, 0xe000, 0x00b0, 0x0080, 0x0edf, 0x0006, 0x0001, 0xc080, 0xe0ff, 0xf0ff, 0xf8ff, 0xfcff, 0xfeff, 0x4750, 0x0002, 0x5540, 0xaa90, 0xaab4, 0x7650, 0xe400, 0xf4ff, 0x7777, 0x0050, 0xf0fe, 0x0075, 0x00f0, 0xf740, 0x0000, 0x0000, 0x7400, 0x0075, 0xef00, 0x1507, 0x0000, 0x0001, 0x5157, 0x5047, 0x9006, 0xabff, 0xac00, 0xac00, 0xac00, 0xac00, 0xabd0, 0xaaa4, 0x5042, 0x0001, 0x00a9, 0x00ab, 0x4320, 0x0001, 0x0095, 0x00d5, 0x3052, 0x4000, 0xb0aa, 0xf420, 0x0000, 0x0025, 0xdbf0, 0x0009, 0x0061, 0x0061, 0x0061, 0x0061, 0x0061, 0x00c7, 0x0084, 0x821c, 0x8289, 0x8289, 0xc0bf, 0x6401, 0x64eb, 0x64eb, 0xfccf, 0xb00d, 0x0bfe, 0x1400, 0xebbe, 0xdcf0, 0x0003, 0x1361, 0x1181, 0x1181, 0x1361, 0x0bef, 0x4000, 0xe8ce, 0xbdf0, 0x2406, 0x040d, 0x0903, 0xdc00, 0xdc00, 0xdc00, 0xdc00, 0x9c00, 0xbec0, 0x0000, 0x0090, 0xefb0, 0x9004, 0x9000, 0x9000, 0x9000, 0xe400, 0x7940, 0xec00, 0x0bef, 0xe406, 0xfebf, 0xb8be, 0xb8be, 0xb8be, 0xb8be, 0xbeff, 0x2bff, 0xefd0, 0x0000, 0x00e9, 0xcfb0, 0x5402, 0x6406, 0x6c06, 0x3806, 0xe0bf, 0xa402, 0xa49d, 0xab6a, 0xa986, 0xecf0, 0x2400, 0x0000, 0xfece, 0x0b0c, 0xc0ef, 0x8402, 0x9d98, 0x84a2, 0x2a9a, 0x00f0, 0xd00f, 0xfeb0, 0x2400, 0x0bfc, 0x0680, 0xfcc0, 0xc0f0, 0xefe0, 0xf3ff, 0xf1f1, 0xf0f1, 0xf1f0, 0x0008, 0x0010, 0xeff0, 0xf901, 0x0003, 0x0025, 0x0095, 0x0255, 0x2555, 0x0090, 0x0080, 0xf901, 0x0000, 0x0009, 0x0911, 0x0201, 0x8000, 0xe0c0, 0xfcf0, 0xfe01, 0x5400, 0xf955, 0xcb0f, 0x0004, 0x0009, 0x0035, 0x00d5, 0x0355, 0x0d55, 0xfeb0, 0x0001, 0x0090, 0xff00, 0xe0fd, 0x5401, 0x9555, 0xb555, 0x010f, 0xe0c0, 0xf8f0, 0x650f, 0x5001, 0x9555, 0xd555, 0x6750, 0x0001, 0x0090, 0x00b4, 0x0745, 0xa400, 0xa93f, 0x7774, 0x0067, 0x8010, 0x0647, 0x0001, 0x0040, 0x00e0, 0x6057, 0x9003, 0x9000, 0xaaa4, 0xaaab, 0xaaa9, 0x3052, 0x9000, 0xacaa, 0x5420, 0x0001, 0x0009, 0x000d, 0x5403, 0x5401, 0x5655, 0x5755, 0xf3f0, 0x0005, 0x5554, 0x5aa4, 0x6aa4, 0x69a4, 0x69a4, 0x5aa4, 0x0000, 0x013f, 0xdb00, 0x1bdb, 0xf0f3, 0x1001, 0x1064, 0xaa64, 0x003f, 0x3f00, 0xf03f, 0x1401, 0x1485, 0x1485, 0x0000, 0x013f, 0x3900, 0x6c7d, 0xe3f0, 0xa401, 0xa469, 0x0069, 0xffe0, 0x0bff, 0x00e0, 0x1010, 0xefc0, 0x4000, 0xc006, 0xb0ef, 0xa401, 0xb47a, 0xd01e, 0xfed0, 0xe400, 0x006f, 0xcc00, 0x0bcc, 0x0bfe, 0x4001, 0x55e5, 0xffe1, 0xb019, 0x5403, 0x55aa, 0x5255, 0xaa85, 0xaa15, 0xfeb0, 0xec0f, 0x0000, 0x0395, 0xfdb0, 0x0000, 0x00e4, 0xffff, 0xedcb, 0xcb0f, 0x0001, 0xe955, 0x0055, 0x00ee, 0x0bbc, 0x00f0, 0x71f0, 0x45f0, 0x0001, 0x0001, 0xeaaa, 0x4057, 0x0001, 0x5555, 0x00da, 0x7645, 0xe401, 0xfeff, 0x7fff, 0x7777, 0x0567, 0x4677, 0x5f05, 0x5400, 0x5550, 0x0057, 0x0080, 0x6477, 0x6057, 0x0000, 0x0364, 0x7405, 0x5401, 0x55f8, 0x55e1, 0x6500, 0x0050, 0x0080, 0x4705, 0x5402, 0x5e55, 0x4a55, 0x2a55, 0x4670, 0x0001, 0x0095, 0x0355, 0x3f05, 0x000b, 0x5554, 0xbff9, 0xbef9, 0xbef9, 0xbff9, 0xaff9, 0x6aa9, 0xef55, 0xef9b, 0xef9b, 0xff9b, 0xfe9b, 0x000f, 0xf604, 0xc0f3, 0x900b, 0x9041, 0x9041, 0x9041, 0x9041, 0x9541, 0xaa55, 0x4106, 0x4106, 0x4106, 0x4006, 0x5016, 0x555a, 0xebc0, 0x0002, 0x0aa1, 0x0400, 0x0c00, 0xbfc0, 0x0000, 0xfaa4, 0xbed0, 0x0000, 0x0039, 0x0cfe, 0xbed0, 0x0000, 0x0390, 0xcfe0, 0x9000, 0x0003, 0x0bed, 0xcfe0, 0x0000, 0x0039, 0xffeb, 0xfed0, 0x0003, 0x00e4, 0x00d0, 0x0090, 0x0040, 0xbdc0, 0x4000, 0x8000, 0xffdb, 0x00df, 0x0108, 0xf0be, 0xa404, 0xa93f, 0xa93f, 0xaa7f, 0xaa8f, 0xaa8f, 0xcfff, 0x000b, 0x0cef, 0x4000, 0xfffe, 0x3340, 0x3250, 0x0006, 0x00a9, 0xc0ab, 0x90aa, 0xa0aa, 0xacaa, 0xa9aa, 0xffaa, 0x5243, 0x4000, 0xeaaa, 0x4052, 0x0001, 0x0090, 0xc0a5, 0x5320, 0x0001, 0x0025, 0x0035, 0x0042, 0x0000, 0x023f, 0x9e00, 0xb6be, 0xbeb6, 0x0000, 0x023f, 0xe700, 0x6def, 0xe76d, 0x0000, 0x023f, 0x7300, 0xd8fb, 0x7b18, 0xb3f0, 0x0006, 0x0554, 0x16a5, 0x1aa9, 0x1a69, 0x1569, 0x16a9, 0xf000, 0xdb00, 0xffb0, 0xfdee, 0xdfb0, 0x9000, 0xc0aa, 0xffff, 0x00c0, 0x0400, 0xfec0, 0x2400, 0x3900, 0xebf0, 0x0003, 0x0095, 0x0095, 0x0ad5, 0x2f55, 0x0380, 0x8080, 0xc1c0, 0xe3e1, 0x07f3, 0xfcb0, 0x9001, 0x0080, 0x02e0, 0xbfe0, 0x9004, 0xac01, 0xa40e, 0xab06, 0xa93a, 0xaa1a, 0xcfff, 0x00c0, 0x8000, 0x0000, 0xc000, 0x00e0, 0x8080, 0x0000, 0xe000, 0x00f0, 0x8080, 0x00bc, 0xbef0, 0x0004, 0x0039, 0x00e5, 0x0395, 0x0e55, 0x0955, 0x00ef, 0x00c0, 0xfeb0, 0x0004, 0x0009, 0x00bd, 0x00fc, 0x00f8, 0x00f8, 0xcb00, 0xf0ce, 0xa401, 0xabc5, 0xa8f0, 0xc0df, 0x0002, 0x00a9, 0xaaa8, 0xabea, 0xefb0, 0x9003, 0xc00e, 0xc0aa, 0x40aa, 0x40ab, 0xfffe, 0x00b0, 0x8000, 0xfeb0, 0x0001, 0x00e4, 0x96f9, 0x000f, 0xfff0, 0x0408, 0xf0fc, 0xf1f1, 0xf3f1, 0xfef3, 0xf078, 0x00c0, 0x0400, 0xfce0, 0x9000, 0x7000, 0xefb0, 0x0003, 0x00a4, 0x40a4, 0xd0ad, 0x00ab, 0x000c, 0xbdf0, 0x0000, 0x3c39, 0xbedf, 0x9000, 0x00c2, 0xd0bf, 0x9000, 0xac00, 0x00b0, 0x8080, 0xdeb0, 0x0000, 0x0090, 0xfd00, 0xfeb0, 0x4000, 0x00fe, 0xfffc, 0x00b0, 0x1010, 0xfbe0, 0x0000, 0x0009, 0xe0df, 0xa400, 0xc0aa, 0x000b, 0xcfff, 0x00e0, 0x0800, 0xefc0, 0x9000, 0xb000, 0xdfb0, 0x0001, 0x00a4, 0x00ac, 0x0efb, 0x5400, 0x5558, 0xfed0, 0xffff, 0x00c0, 0x0100, 0xbf0e, 0x5400, 0x5e55, 0xbdf0, 0x0001, 0x0009, 0x0035, 0x0bef, 0x0000, 0x00e4, 0xb0de, 0xa400, 0xacaa, 0xbef0, 0x0002, 0x00e5, 0x0055, 0x0056, 0xe0fc, 0x5402, 0x56aa, 0x52aa, 0x52aa, 0xfbe0, 0x0003, 0x0009, 0x0027, 0xda7f, 0x00ff, 0xbec0, 0x4000, 0x0036, 0x0cef, 0x9000, 0x41ff, 0xefd0, 0x0001, 0x00a9, 0x00aa, 0xe000, 0x000b, 0xffec, 0xfe0b, 0x5402, 0x55fe, 0x55bf, 0x55bf, 0x2530, 0x4002, 0xe000, 0xf800, 0xf400, 0x5240, 0x0000, 0xc0a9, 0x5302, 0x0001, 0x0095, 0x00c0, 0x3042, 0x9000, 0xac00, 0x4052, 0x0000, 0x00a4, 0x3204, 0x5402, 0x55ea, 0x5557, 0xaaa1, 0x4250, 0xa401, 0xb0aa, 0x00aa, 0x2053, 0xa401, 0xa3aa, 0x9faa, 0x0000, 0x003f, 0x869e, 0xf03f, 0x1403, 0x144a, 0x144a, 0x004a, 0xaa0a, 0x02f3, 0x9210, 0x1292, 0xff12, 0x0000, 0x02f3, 0x3f0c, 0x0427, 0xff8c, 0xd3f0, 0x0006, 0x1aa5, 0x1a55, 0x1a69, 0x1aa9, 0x16a5, 0x0554, 0x5700, 0xdfe0, 0x0001, 0xc0a9, 0x40aa, 0xefff, 0xfc00, 0xb0df, 0xfcb0, 0x9000, 0xff00, 0xbeff, 0xb0df, 0x0000, 0x00a4, 0xcf0b, 0x5400, 0x55ea, 0x0bfe, 0x9400, 0xd6ff, 0x0000, 0x0fd0, 0x00b0, 0x0040, 0x0380, 0xeffe, 0x0fcf, 0x0e0f, 0xfc0c, 0xedcc, 0xfffe, 0x00bf, 0x0100, 0xefb0, 0xa405, 0xd0aa, 0x40aa, 0x00ab, 0x00ad, 0xaaac, 0x9000, 0x0000, 0xefdc, 0xa401, 0xaad0, 0xaaaa, 0x0feb, 0xa403, 0x4faa, 0xffaa, 0xffa4, 0xaa93, 0xefd0, 0x0002, 0x40a9, 0xd0aa, 0x00aa, 0x0fdb, 0x9404, 0x7fff, 0x3fff, 0xaaff, 0xaaf6, 0xaada, 0xbdee, 0xc0df, 0x4002, 0xc0aa, 0x90aa, 0x91aa, 0x00b0, 0x0020, 0xc0fb, 0x5403, 0x54aa, 0x57aa, 0x55ea, 0x557a, 0xfec0, 0xffff, 0xffd0, 0x00ef, 0x0c10, 0x0380, 0xc0c0, 0xf0e0, 0xfcf8, 0x80e0, 0x8888, 0x0888, 0xfeb0, 0xbd0f, 0x0001, 0x0095, 0x0355, 0xbfc0, 0x0002, 0x00a4, 0x00ac, 0x00a0, 0xbdf0, 0x9001, 0x3000, 0x0255, 0xd0ef, 0x0001, 0x00a9, 0x04ac, 0x00ef, 0xd0be, 0xb0cf, 0x9000, 0xb6ab, 0xefd0, 0x0002, 0x00a4, 0x00a4, 0x00ec, 0xfcd0, 0x2401, 0x1f00, 0x1f00, 0xcfe0, 0x0000, 0x0019, 0xfdc0, 0x2403, 0xe000, 0x80ff, 0x40ff, 0x80ff, 0xe0df, 0x4001, 0x90ea, 0xa9ea, 0x00b0, 0x0008, 0xc0df, 0x0002, 0x40a9, 0xc0aa, 0x40aa, 0xefd0, 0x0001, 0x00e9, 0x00d0, 0xfcb0, 0x4001, 0xf800, 0xfa00, 0xfec0, 0x4002, 0x90fe, 0xe4ff, 0xf9ff, 0xeb0f, 0x0000, 0x03f9, 0xb000, 0x0fed, 0x9002, 0x6aaa, 0xaa3f, 0xaa8f, 0xedb0, 0xd0fe, 0x5400, 0x5eaa, 0xdfc0, 0x0002, 0x00a4, 0x00b0, 0x00b0, 0xdfb0, 0x4001, 0x03aa, 0x0eaa, 0x0def, 0x0000, 0xa0e4, 0xdf0b, 0x5402, 0x555e, 0x5552, 0x5557, 0xf0cb, 0x5400, 0xfca9, 0x0fbe, 0x0000, 0xaaa1, 0xecb0, 0x0000, 0x0024, 0xcfeb, 0xb000, 0xcffe, 0xfeb0, 0x9001, 0xe4bf, 0xf8bf, 0x00ef, 0x0018, 0xeb0f, 0x0004, 0x5655, 0x7955, 0x4355, 0x4055, 0x7055, 0xecf0, 0x0004, 0x0025, 0x0005, 0x0009, 0x0009, 0x00a0, 0xbfe0, 0xa403, 0x6a03, 0x6a00, 0xda00, 0xda00, 0x0180, 0x70c0, 0x3070, 0x7580, 0x0002, 0x0005, 0x2aaa, 0x2fff, 0x0567, 0x0000, 0x00e4, 0x0547, 0xe401, 0xf800, 0xfeaa, 0x43f0, 0x000c, 0x0555, 0x0696, 0x0696, 0x069a, 0x069a, 0x06aa, 0x5400, 0xa405, 0xa506, 0x6916, 0x691a, 0x691a, 0x001a, 0x5240, 0x9000, 0xacaa, 0x4302, 0x0002, 0x0009, 0x0003, 0xaaaa, 0x4052, 0x4002, 0xb0aa, 0x50aa, 0x0055, 0x2503, 0x0000, 0xe500, 0x5402, 0x0001, 0x0095, 0x00ff, 0x5023, 0x0001, 0x8500, 0xd5aa, 0x5420, 0x0002, 0x0095, 0x0e55, 0x2555, 0x0052, 0x8080, 0x3333, 0x5333, 0x0780, 0xe0e0, 0xe0e0, 0x20e0, 0xe3f0, 0xc080, 0xcfcf, 0xc3c7, 0x4041, 0x0320, 0x45f0, 0x404c, 0x5060, 0x4040, 0x0280, 0xf7f0, 0xe1e3, 0x40c1, 0xed80, 0x0002, 0x0010, 0x00e0, 0x0080, 0xcedf, 0x0001, 0x0040, 0x02e0, 0x0def, 0xe400, 0xf402, 0xffeb, 0x000d, 0xefd0, 0x000b, 0xefb0, 0x00e0, 0x0040, 0xcbf0, 0x5402, 0x5600, 0x5700, 0x5700, 0xefd0, 0x0000, 0x00a9, 0xbefe, 0xfce0, 0x0002, 0x0009, 0xff00, 0xfd9f, 0xf0be, 0xa401, 0xaac6, 0xaa6a, 0xec00, 0x00e0, 0x8080, 0x01c0, 0x8080, 0x8080, 0xedf0, 0x0001, 0x5500, 0x55e9, 0xf0ce, 0xa403, 0xa93f, 0xaa93, 0xaaa7, 0xaaa9, 0xcfd0, 0x2406, 0x9000, 0xc000, 0x003a, 0x00a4, 0x0060, 0xb018, 0x6a0e, 0xfeb0, 0x0005, 0xffe4, 0xff90, 0xff90, 0xff40, 0xfe00, 0xfe00, 0xcb00, 0xec0f, 0x0000, 0x00e5, 0xeeff, 0xfbcd, 0x9400, 0xbfff, 0xe0bf, 0x0004, 0x0090, 0xc0a4, 0x70a9, 0x9caa, 0xacaa, 0xecf0, 0x0005, 0x0009, 0x0029, 0x00b5, 0x02d5, 0x0b55, 0x2d55, 0xeeff, 0xd0be, 0xa400, 0xaa7c, 0xc0bf, 0x9004, 0x90aa, 0xb0aa, 0xc0aa, 0x00aa, 0x00ab, 0x00ce, 0xe0df, 0x0000, 0x03a4, 0x0eff, 0x0308, 0xfcfc, 0xf8fc, 0xf0f0, 0xc1e0, 0x6750, 0x0005, 0x0155, 0x01aa, 0x01aa, 0x01ea, 0x006a, 0x0015, 0xef0b, 0x5400, 0xea55, 0x000b, 0x0def, 0x9002, 0xe0ff, 0xe4ff, 0xf8ff, 0xdcf0, 0x0001, 0x0009, 0x000d, 0xf0f3, 0x000b, 0x10a4, 0x10a4, 0x50a4, 0x50a4, 0x55a4, 0xaaa5, 0x9041, 0x9001, 0x9001, 0x9041, 0x9041, 0x9555, 0x0380, 0xf030, 0xf3f7, 0x3071, 0x1010, 0xdfb0, 0x0000, 0x0001, 0x0cdf, 0x0000, 0xefff, 0xf0cd, 0x9400, 0xbfff, 0x0bef, 0x0003, 0x40e4, 0xe4fe, 0xf9ff, 0x55ff, 0xc0de, 0x5000, 0xeaaa, 0xdef0, 0x0003, 0x9555, 0xd556, 0x255b, 0x3558, 0xfd00, 0x0bef, 0xeb00, 0x00df, 0xe000, 0x00bf, 0x01e0, 0x8010, 0x8080, 0xefb0, 0x0000, 0x0040, 0x0def, 0x9001, 0xe41b, 0xfe6f, 0xfeb0, 0x0002, 0xffe4, 0xfff4, 0xaff8, 0xfed0, 0x6400, 0x0005, 0x00ef, 0x8080, 0xffdd, 0xc0ef, 0x4004, 0xc01e, 0xc07a, 0xc7aa, 0xceaa, 0xbaaa, 0xfed0, 0x0001, 0x2aa9, 0xff00, 0xf0be, 0xa401, 0xa7ff, 0xa3fc, 0xfed0, 0x5401, 0x0006, 0x000f, 0xc0bf, 0x9001, 0xb0aa, 0xb0aa, 0xedf0, 0x0001, 0x0025, 0x0037, 0x0ec0, 0x0480, 0xf000, 0x87f3, 0x0307, 0x0303, 0x0303, 0xbf80, 0x0400, 0x8000, 0xfe0b, 0x2400, 0x7f95, 0xecf0, 0x0002, 0x70a5, 0x00d5, 0x000d, 0x00bc, 0x00c0, 0x0100, 0xfe0b, 0x5402, 0x5255, 0x3f15, 0x4fe5, 0xcef0, 0x0000, 0xc0e5, 0xb0bf, 0x00b0, 0x0208, 0xf0eb, 0xa401, 0x8fca, 0x7f2a, 0xec00, 0xcb0f, 0x5001, 0x7265, 0x6555, 0xfeb0, 0x0001, 0x3490, 0x2fc0, 0xefc0, 0x5002, 0xb00a, 0x00ea, 0x000b, 0x00cb, 0x00d0, 0x0100, 0xfe0b, 0x5403, 0x5655, 0x5315, 0x2fe1, 0x5b95, 0xec00, 0x0ceb, 0x00b0, 0x0044, 0xd0ef, 0xa401, 0xa4aa, 0xa7aa, 0x45b0, 0x0002, 0x0004, 0x0080, 0x00e0, 0x7650, 0x9000, 0xd000, 0x0050, 0x00c0, 0xfed0, 0x4004, 0x9000, 0xe401, 0xf906, 0xe41b, 0x9006, 0x000d, 0xff7e, 0xfed0, 0x0005, 0x0190, 0x06e4, 0x1bf9, 0x2ffe, 0x1bf9, 0x06e4, 0xed00, 0x000d, 0x7efe, 0xf0de, 0xa402, 0x931a, 0xa46a, 0xa9aa, 0x4230, 0x0001, 0x0090, 0x00ac, 0x2230, 0x0030, 0x00e0, 0x5704, 0x5401, 0x5255, 0x7f55, 0x0000, 0x0000
};

// [D_08CD76D4] D_08CD7948 Huffman Window 1
u32 D_08cd7948_window1[] = {
	0xffdf7d11, 0xdfff5f27, 0x7ff78bbf, 0xffd07ffe, 0xecfdb96b, 0x6ff2befb, 0x9bfbedb3, 0xcfeddefe, 0xffbd93ef, 0x9b3cdefe, 0xd6ffb63c, 0xbf46a7a6, 0xafbfbba4, 0xff1ffcf3, 0xbd99d1dd, 0xafff3c63, 0xcffffc7f, 0x6ebf6e0f, 0xbf03c7dd, 0xfcddbbdf, 0xfffffdbb
};

// [D_08CD7728] D_08CD7948 Huffman Window 2
u32 D_08cd7948_window2[] = {
	0x51f7dcff, 0xfd3fdfe6, 0xff7dd5ff, 0x7bd7d65f, 0xdeaaffcf, 0xffd3b4ff, 0xfddea7ff, 0xf76f7faa, 0xf46d8fdf, 0xffeedbe2, 0x97e3f2ff, 0xddfffdff, 0xff9ee1ff, 0xbbf7befb, 0xfff6aebd
};

// [D_08CD7764] D_08CD7948 Huffman
struct Huffman D_08cd7948_huffman[] = {
	/* Data */			D_08cd7948_huffmandata,
	/* Size */			0xc41,
	/* Count */			0x28a,
	/* Window 1 */		D_08cd7948_window1,
	/* Window 2 */		D_08cd7948_window2,
};

// [D_08CD7774] D_08CD7948 RLE Data
u8 D_08cd7948_rledata[] = {
	0x1, 0x2e, 0x2, 0xb, 0x5, 0xd, 0x2, 0x5b, 0x6, 0x6, 0x3, 0x6, 0x1, 0x5, 0x5, 0x5, 0x1, 0x9, 0x7, 0x2c, 0x4, 0x5, 0x4, 0x5, 0x2, 0x5, 0x3, 0x5, 0x1, 0x7, 0x3, 0x5, 0x3, 0x4, 0xc, 0x3, 0x3, 0x7, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3, 0x3, 0x7, 0x3, 0x10, 0x1f, 0x13, 0x1d, 0x3, 0x1e, 0x12, 0xf, 0x1f, 0x2, 0xd, 0x11, 0x32, 0xf, 0x2f, 0x2, 0xd, 0x11, 0x10, 0x40, 0x4, 0xc, 0x3, 0x3, 0x7, 0x8, 0x9, 0x8, 0x7, 0x3, 0x5, 0x10, 0xa, 0x7, 0x9, 0x1, 0x5, 0x5a, 0x50, 0x10, 0x13, 0xf, 0x4f, 0x2, 0xd, 0x1, 0x3, 0x4d, 0xb, 0x12, 0x3, 0x6, 0x4, 0x6, 0x5, 0x1b, 0xe, 0xc, 0x5, 0x6, 0x6, 0xb, 0x3, 0xc, 0x4, 0x3, 0x3, 0xc, 0x4, 0x20, 0x51, 0x10, 0x10, 0xf, 0x60, 0x1d, 0x3, 0x5, 0x5, 0x3, 0x7, 0x1, 0x5, 0x3, 0x3, 0xd, 0x3, 0x9, 0x7, 0x8, 0x8, 0x4, 0xc, 0x9, 0x8, 0x8, 0x7, 0x6, 0xa, 0x9, 0x7, 0x8, 0x8, 0x7, 0x9, 0x1, 0x3, 0x3, 0x9, 0x6, 0x1a, 0x10, 0x51, 0x10, 0xf, 0x11, 0x60, 0xf, 0x29, 0x8, 0x7, 0x9, 0x5, 0xb, 0x6, 0x11, 0x5, 0x14, 0xc, 0x4, 0xc, 0x4, 0xc, 0x4, 0xb, 0x5, 0x9, 0x7, 0x11, 0xf, 0xc, 0x14, 0x50, 0xf, 0x11, 0x10, 0xd, 0x2, 0x4f, 0xd, 0x6, 0xd, 0x3, 0x3, 0x7, 0x9, 0x7, 0x61, 0x4, 0x3e, 0x6, 0x8, 0x3, 0x2, 0xc, 0x13, 0xf, 0x11, 0xd, 0x2, 0x1f, 0xf, 0x32, 0x11, 0xd, 0x2, 0x2f, 0xd, 0x29, 0xf, 0x3, 0xf, 0xa, 0xe, 0x6, 0xd, 0x3, 0xd, 0x3, 0x3, 0x3, 0x7, 0x3, 0xd, 0xd, 0x3, 0x42, 0xe, 0x9, 0x7, 0x20, 0x2, 0xd, 0x5, 0xb, 0x2, 0x5e, 0x7, 0x9, 0x1, 0x5, 0x5, 0x5, 0x1, 0x6, 0x3, 0x6, 0x6, 0x2e, 0x3, 0x7, 0x8, 0x3, 0x28, 0xf, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0x3, 0x3, 0x7, 0x6, 0x4, 0xb, 0x5, 0xb, 0x4, 0xd, 0x10, 0xc, 0x12, 0x10, 0x1f, 0x14, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0x19, 0x11, 0xf, 0xe, 0x32, 0x6, 0xa, 0x5, 0xb, 0x3, 0x16, 0x6, 0x11, 0x5, 0x5, 0x5, 0x11, 0x5, 0xb, 0x4, 0xc, 0x3, 0x3d, 0x3, 0x7, 0x5, 0x1, 0x5, 0xb, 0x5, 0xa, 0x3, 0xd, 0x5, 0xd, 0x8, 0x7, 0x9, 0x13, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x4, 0xb, 0x4, 0x21, 0xf, 0x11, 0xf, 0x11, 0xf, 0xd, 0x3, 0x21, 0xf, 0x11, 0xe, 0x1e, 0x4, 0x8, 0x7, 0x8, 0x8, 0x1e, 0x3, 0x10, 0xe, 0x1f, 0xc, 0x17, 0xd, 0x12, 0x4, 0xc, 0x6, 0xa, 0x4, 0xd, 0x13, 0xd, 0x3, 0xd, 0x1f, 0x8, 0x6, 0x9, 0x7, 0x8, 0x8, 0x1f, 0x3, 0x1, 0x5, 0x5, 0x15, 0xe, 0x8, 0x5, 0x5, 0x1, 0x5, 0xa, 0x10, 0xe, 0x3, 0x4, 0xb, 0x21, 0x5, 0x7, 0x4, 0x10, 0x4, 0x14, 0x8, 0x7, 0x8, 0x10, 0x10, 0x41, 0x3, 0x29, 0x3, 0xd, 0x3, 0x25, 0xb, 0x19, 0x7, 0x6, 0xa, 0x9, 0x7, 0x11, 0xf, 0x3, 0xd, 0x9, 0x7, 0x17, 0x9, 0xc, 0x6, 0x10, 0xf, 0xd, 0x3, 0xe, 0x3, 0x10, 0xf, 0x17, 0xd, 0x2a, 0x4, 0xa, 0xc, 0xf, 0x0, 0xa9, 0x0
};

// [D_08CD7948] D_08CD7948 Graphics
struct CompressedGraphics D_08cd7948 = {
	/* Huffman Data */		D_08cd7948_huffman,
	/* RLE Data */			D_08cd7948_rledata,
	/* RLE Size */			0x1d2,
	/* RLE Offset */		0x1a00,
	/* Double Compressed */	TRUE,
};

u8 D_08cd7958[76] = {
	0x84, 0x00, 0x70, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00,
	0x84, 0x00, 0x84, 0x00, 0x2E, 0x00, 0x70, 0x00, 0xC8, 0x00, 0x40, 0x00,
	0x78, 0x00, 0x84, 0x00, 0x40, 0x00, 0x40, 0x00, 0x78, 0x00, 0x40, 0x00,
	0x78, 0x00, 0x40, 0x00, 0x2C, 0x00, 0x4E, 0x00, 0x4D, 0x00, 0x58, 0x00,
	0x75, 0x00, 0x4D, 0x00, 0x9E, 0x00, 0x57, 0x00, 0xC6, 0x00, 0x4E, 0x00,
	0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x40, 0x00, 0x72, 0x00, 0x5A, 0x00,
	0x40, 0x00, 0x40, 0x00
};


