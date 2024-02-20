#include "global.h"
#include "graphics.h"

// // //  D_08C92FC0  // // //

// [D_08C92094] D_08C92FC0 Huffman Data
u16 D_08c92fc0_huffmandata[] = {
	0x0000, 0x034d, 0x7010, 0xf0f0, 0xf073, 0xf3f0, 0x03d9, 0x0100, 0x0703, 0x1f0f, 0x7f3f, 0x4efa, 0x0003, 0x4059, 0x5056, 0xa5d6, 0x5af5, 0x004f, 0xcf0e, 0x00e4, 0xf000, 0xfaef, 0x1000, 0x8500, 0xeeee, 0x00af, 0x070c, 0xc4ef, 0x4004, 0x0c2a, 0x0c2a, 0x0c2a, 0x402a, 0x10aa, 0x00f4, 0xc0e0, 0x4444, 0x03fe, 0x8040, 0x8080, 0x8080, 0x4080, 0xdef4, 0x400b, 0x50a9, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x50aa, 0x40aa, 0xffa9, 0xfffc, 0xfff5, 0xffd6, 0xfd56, 0xdafe, 0x6403, 0x64f5, 0xa4d4, 0xa451, 0xa951, 0xffef, 0x00f7, 0x1030, 0x7777, 0x00fd, 0xc300, 0x007f, 0xc300, 0x0197, 0x0100, 0x0301, 0x03d7, 0xf8f8, 0xf8f8, 0xf8f8, 0xf0f0, 0xf7f9, 0x0000, 0x0050, 0xf799, 0x0379, 0x8080, 0xfef0, 0xfcfe, 0xf8fc, 0xff79, 0x0000, 0x0040, 0x00f4, 0xc080, 0x4444, 0x7ff4, 0x00f4, 0x0300, 0xce4f, 0x4009, 0x0255, 0x2a55, 0xaa54, 0xa250, 0x8a50, 0x1550, 0x150c, 0x150c, 0x0500, 0x81aa, 0xffde, 0x0002, 0x0029, 0x0029, 0x0029, 0x044d, 0x3010, 0x1000, 0xf030, 0xf3f0, 0xf7f7, 0x004f, 0xfcfe, 0x4ff7, 0x4444, 0x03d7, 0xc0c0, 0xc0c0, 0x80c0, 0x8080, 0xfff7, 0x0000, 0x0555, 0x0379, 0xf8fc, 0xf0f8, 0xe0e0, 0xc0c0, 0x03d7, 0xf0f0, 0xe0f0, 0xe0e0, 0xe0e0, 0x01d4, 0x0300, 0x3f0f, 0x97fd, 0x000f, 0xaa94, 0xaa94, 0xaa50, 0xaa50, 0xaa50, 0xaa50, 0xaa94, 0xaa94, 0x16ab, 0x16af, 0x05af, 0x05bf, 0x05bf, 0x05ff, 0x16ff, 0x17ff, 0x04fd, 0x0606, 0x0c0c, 0x0c0c, 0x0706, 0x7f1f, 0x00fe, 0xc0f0, 0x03d7, 0xfefe, 0xfcfe, 0xfcfc, 0xfcfc, 0xedf4, 0x0006, 0x0094, 0x0094, 0x00a5, 0x00a5, 0x0065, 0x0055, 0x40d5, 0xeeef, 0x00af, 0x8700, 0xaaaa, 0x007f, 0x001e, 0xf7fa, 0x5402, 0x0005, 0x6a95, 0x6a94, 0x77fa, 0x00f7, 0x3c3c, 0xfaf7, 0x9400, 0x9415, 0x00af, 0xc0c0, 0x00fd, 0x387c, 0x00da, 0x80f8, 0xfdfa, 0x0001, 0xaa95, 0x8005, 0x01fa, 0xc0e0, 0xf3c0, 0x00df, 0xf3c0, 0xdddd, 0x03fa, 0x8080, 0x7f80, 0x103c, 0x0030, 0x77ff, 0xfaff, 0x027f, 0x0f0e, 0x070f, 0x0206, 0x03af, 0xfff8, 0xf1f3, 0xf0f0, 0xf1f0, 0xffaa, 0xaaaa, 0x00df, 0xf1e0, 0xffda, 0x5001, 0x0095, 0x0090, 0xfffa, 0x007f, 0xe080, 0xadf7, 0x0002, 0x0000, 0x00a5, 0x0095, 0xaff7, 0x04f7, 0xc0c0, 0x8480, 0x0e8f, 0x1008, 0x0301, 0xffff, 0x777f, 0x00fa, 0xe0fc, 0x96f7, 0xa407, 0xa905, 0xa905, 0x6a05, 0x5a01, 0xd603, 0x5a03, 0x5a03, 0x000f, 0xff77, 0x016f, 0xffc0, 0xe0f1, 0x476f, 0x1406, 0x54aa, 0x54a8, 0x50a8, 0x4081, 0x0315, 0x4355, 0x4355, 0x6666, 0x03d7, 0xf0f0, 0xf0f0, 0xe0f0, 0xe0e0, 0x4dfb, 0x5001, 0x94ea, 0x94aa, 0x00fd, 0x1030, 0xfbfd, 0x0002, 0x0005, 0x0016, 0x0016, 0x01fb, 0x2080, 0x3f1f, 0xeb7f, 0x5006, 0x50a0, 0x50a0, 0x54a0, 0x55a0, 0x15a0, 0x0528, 0x00a8, 0xdefb, 0x4000, 0x5fd6, 0xfd4f, 0x5001, 0x502a, 0x5425, 0xd444, 0x01f4, 0x0100, 0x0303, 0x02fe, 0xc080, 0x0f90, 0x031f, 0xfefd, 0x9405, 0x94aa, 0x50aa, 0x40aa, 0x50a9, 0x949a, 0x946a, 0xffee, 0x019a, 0x10f0, 0xf0f0, 0x004d, 0xc0f8, 0x00da, 0x80f8, 0xaaaa, 0x9999, 0x00da, 0x80f8, 0x009a, 0xf0f0, 0xaa99, 0x9999, 0x00af, 0xc0e0, 0xffff, 0xaaff, 0x00f9, 0x1c3e, 0x9999, 0x00fa, 0x0080, 0x01a9, 0xf0c0, 0xf8f0, 0xfda9, 0x0001, 0x0055, 0xeaaa, 0xaf4d, 0x0005, 0x2855, 0x0a55, 0x0a55, 0x0290, 0x02bf, 0x02bf, 0x4df9, 0x4000, 0x00a9, 0x64df, 0x5000, 0x0fc2, 0x00f4, 0x78fc, 0x01d4, 0x0300, 0x7f1f, 0xf4fd, 0x0000, 0xa500, 0x00d4, 0xf0f0, 0x44dd, 0x00ad, 0xf070, 0xdaaa, 0x00fd, 0xe0f0, 0x00ad, 0xf070, 0xdaaa, 0xaaaa, 0x01d7, 0xe0e0, 0xc0c0, 0x7779, 0xdd77, 0x00df, 0x80c0, 0x96df, 0x5400, 0x0a01, 0xff79, 0x5001, 0x402a, 0x400a, 0x009d, 0xf0f8, 0xf49d, 0x0002, 0x0254, 0x2ad0, 0x03fc, 0xd46f, 0x4001, 0x03fe, 0x0fea, 0x01d4, 0xc0f0, 0x0080, 0xaf4d, 0x5402, 0xe855, 0xa8ff, 0xa0ff, 0x4fd9, 0x0004, 0x00a5, 0x00a5, 0x00a5, 0x0029, 0x0029, 0xabf4, 0x5002, 0x50aa, 0x507e, 0x547e, 0x01bf, 0x680e, 0xc9e0, 0x4efb, 0x0004, 0xd6a9, 0xd6a9, 0xf5a9, 0xfd59, 0x5555, 0x7dfe, 0x0005, 0x0065, 0x0054, 0x0094, 0x40f0, 0x40c1, 0x00c1, 0xf7ea, 0x9003, 0xb015, 0xc035, 0x707f, 0x7f5f, 0xaefd, 0x9400, 0x946a, 0x7faa, 0xeffd, 0xffaa, 0x01ef, 0xc070, 0xcf83, 0xdbef, 0x5402, 0xc255, 0xc2ff, 0x02ff, 0x00fd, 0xf3f0, 0x00bf, 0xf0c0, 0x74bf, 0x0001, 0x2815, 0x54fc, 0xfaf7, 0x0000, 0x01a4, 0xaaff, 0x01bf, 0x31e0, 0x3f11, 0xfe7b, 0x0002, 0xa500, 0xe9aa, 0xe9ab, 0x7aef, 0x5405, 0x55a4, 0x56a3, 0x528f, 0x013f, 0x04fc, 0x13f0, 0xf7fd, 0x9403, 0x5056, 0x406a, 0x00a9, 0x00a5, 0x7ffd, 0x00fd, 0x80c0, 0xfcfd, 0x4000, 0x4059, 0xffcf, 0x00fd, 0xf8f8, 0x4fed, 0x0002, 0xfea5, 0xfaa5, 0xaaa9, 0xed7f, 0x1408, 0x1580, 0x150f, 0x553f, 0x54fc, 0xc23c, 0xc2ff, 0x0aff, 0x2aff, 0x2a00, 0xd7cf, 0x8402, 0x843f, 0x043f, 0x043f, 0x00f4, 0xe1c0, 0xfe4f, 0x5000, 0x42a0, 0x00ef, 0x3f3e, 0x47ef, 0x5402, 0x0a05, 0x2afc, 0xaaf0, 0x4ff7, 0x00f7, 0x80c0, 0x4ef7, 0x0003, 0x8040, 0xaa4a, 0x7f0a, 0x5f05, 0x017f, 0xcf8e, 0xefef, 0x7777, 0xee7f, 0x007e, 0xf03e, 0xefd7, 0x4005, 0x4002, 0x400a, 0x002a, 0x002b, 0x00ab, 0x00ab, 0xff6f, 0x7777, 0x016f, 0x1f00, 0x3f7f, 0x7ef6, 0x0002, 0x54a4, 0xfd64, 0xffa5, 0x69f7, 0x5403, 0x50aa, 0x55aa, 0xf56a, 0xd55a, 0x6ef9, 0x5002, 0x546a, 0x5466, 0xd46a, 0x01df, 0xfef0, 0xfcfc, 0xfdfb, 0x9400, 0x94aa, 0x00fd, 0xf1f0, 0xdfff, 0x01fb, 0x80e0, 0x6e60, 0x4444, 0xdddd, 0x00f4, 0xe0e0, 0xfbf4, 0x0003, 0x40a5, 0x40a9, 0x50a9, 0x505a, 0xffbb, 0x02f9, 0x1010, 0x3030, 0xf0f0, 0xfe9f, 0x5000, 0x40aa, 0x01fe, 0x80c0, 0x3080, 0xefff, 0xeeff, 0x00fd, 0xe080, 0xfefd, 0x0004, 0x4095, 0x50a9, 0x50aa, 0x94aa, 0x9496, 0x00fe, 0x0806, 0xf4ef, 0x4003, 0x4255, 0x0a55, 0x4255, 0x4255, 0x00fe, 0x3030, 0x4bfe, 0x0007, 0x0005, 0xff56, 0xffd6, 0xfff5, 0xffd6, 0xffd6, 0xff5a, 0xff5a, 0xffbb, 0x444d, 0x7777, 0x6f77, 0x00f7, 0x8080, 0xf6f7, 0x0007, 0x1aa5, 0x06a9, 0x06a9, 0x01a9, 0x01aa, 0x006a, 0x006a, 0x006a, 0x01df, 0x7c78, 0x3c7e, 0x7edf, 0x5005, 0x4205, 0x4205, 0x4205, 0x2005, 0x208f, 0xca8f, 0x01f7, 0x0238, 0x0702, 0xed7f, 0x0005, 0x2055, 0x0c50, 0x0c50, 0xf142, 0x0542, 0x550a, 0xffdd, 0x00f7, 0xd0f0, 0x7777, 0x00ad, 0xf030, 0xddaa, 0x00fa, 0xe080, 0x7fdb, 0x0007, 0x00a9, 0x00a9, 0x02aa, 0x0abe, 0x0afe, 0x0afe, 0x0afa, 0x0afa, 0xfdfe, 0x0001, 0x0094, 0x0094, 0xddff, 0x007f, 0x1e00, 0xfdf7, 0x0401, 0x0054, 0x0194, 0xddff, 0x03d7, 0xfcfc, 0xf8fc, 0xf8f8, 0xf8f8, 0xf7f6, 0x4006, 0x00a9, 0x00a5, 0x01a5, 0x01a5, 0x0694, 0x0694, 0x0694, 0x7ff6, 0x036f, 0x7078, 0xc3f1, 0xce87, 0x7cfe, 0x009f, 0x3c7c, 0xe69f, 0x5004, 0x0081, 0x0081, 0x3c00, 0x3f04, 0x0f10, 0xe7fd, 0x5000, 0xff6a, 0xeaf7, 0x0000, 0x40e9, 0xeaaf, 0x01ef, 0x1870, 0x9f08, 0xeeee, 0xeeee, 0x03d7, 0xfefe, 0xfefe, 0xfcfe, 0xfcfc, 0xf7f6, 0x5000, 0x54a5, 0x7fff, 0x00f6, 0xc7ce, 0xf76f, 0x5003, 0x5481, 0x5580, 0x15a0, 0xa8a8, 0x006f, 0x0c0c, 0xf76f, 0x5400, 0x1400, 0x777f, 0x006f, 0x0712, 0xf76f, 0x5400, 0x52aa, 0x01ad, 0xf030, 0x03f3, 0xfeda, 0x0001, 0x0050, 0xeaaa, 0xcbfe, 0x0005, 0x0190, 0x56a5, 0xabaa, 0x6fff, 0x6fff, 0xbfff, 0x7fbc, 0x0007, 0x9bf9, 0x56f9, 0x56fe, 0x15bf, 0x15bf, 0x056f, 0x015a, 0x0015, 0x00ef, 0x7e7e, 0xeefb, 0xbfee, 0x007f, 0x7f00, 0x00bf, 0x3f80, 0x7cfb, 0x0008, 0xaa40, 0xaada, 0xaada, 0xaada, 0xaa6a, 0xaafd, 0xaafd, 0xaaf6, 0xaada, 0xfbcc, 0x00bc, 0xe0c0, 0x7fbc, 0x0001, 0xab94, 0x56fe, 0x77fb, 0x00bf, 0xfe3e, 0xe7bf, 0x0000, 0xf254, 0xbfee, 0x00ef, 0x7e7e, 0x7fea, 0x6404, 0x5895, 0x5855, 0x5855, 0x5a55, 0x6e55, 0x7bfe, 0x4001, 0xd565, 0xdaaa, 0xeee7, 0xaef4, 0xafe7, 0x5401, 0x54f9, 0x00fa, 0xae4e, 0x77ff, 0xf774, 0xfefb, 0x00ef, 0xffe0, 0xfeee, 0xf777, 0x02cf, 0x0808, 0x0808, 0x0808, 0xfcbf, 0x9000, 0x9500, 0x01f7, 0x8070, 0x8780, 0xc7fb, 0x6405, 0x9055, 0x9046, 0x9046, 0x5546, 0x15f0, 0x00fc, 0xffec, 0x0002, 0x0955, 0x2555, 0x2555, 0x00fe, 0xfd80, 0xae7f, 0x5001, 0x5515, 0xa9ea, 0xcfae, 0x5002, 0x2ffe, 0x2ffe, 0x2ffe, 0xbcf6, 0xa402, 0x906a, 0x40aa, 0xd56f, 0x7fcb, 0xe400, 0xf940, 0xf6f7, 0x0000, 0x54a9, 0x00f6, 0x6010, 0xfbf6, 0x0000, 0x5569, 0xbbbb, 0x00fc, 0x07f0, 0x7acf, 0x5402, 0x1240, 0xca3f, 0xfcff, 0xff67, 0x0001, 0x8009, 0x80a5, 0x00f6, 0x2170, 0x6cfb, 0x5400, 0x6a51, 0xc7f6, 0x9005, 0x41ff, 0x01ff, 0x07ff, 0x1fff, 0x1fff, 0x7fff, 0x6fbc, 0x0005, 0x9540, 0x55ff, 0x55fe, 0x55f9, 0x55be, 0x95be, 0xb7f6, 0x9001, 0x907f, 0x907f, 0x004b, 0x8000, 0x01fb, 0x1010, 0x1010, 0xfbbb, 0x66f7, 0x01f6, 0x0a18, 0x0a0a, 0xf76f, 0x5402, 0x5400, 0x54aa, 0x54aa, 0x77f6, 0x00f7, 0x1c10, 0xe6f7, 0xa401, 0xa400, 0x5000, 0x7777, 0x6fbe, 0xe407, 0xe46f, 0xe46f, 0xe46f, 0xe46f, 0xf96f, 0xf96f, 0xfe6f, 0x005b, 0xbeee, 0x03b6, 0xfcfc, 0xfcfc, 0xfcfc, 0xfcfc, 0xef6b, 0x0011, 0x0059, 0x0059, 0x0059, 0x0059, 0x4059, 0x4056, 0x9056, 0x0055, 0x002a, 0x02bf, 0xff80, 0xff80, 0xff80, 0xff80, 0xff80, 0xff80, 0xff80, 0xffe0, 0xf7fc, 0x0007, 0x0055, 0x055a, 0x056a, 0x156a, 0x0005, 0x001a, 0x006a, 0x01aa, 0x05f7, 0x00e0, 0x0e01, 0x0281, 0x0402, 0x8484, 0x0202, 0x00cb, 0xf000, 0xfabc, 0x5400, 0x0055, 0xe7fa, 0x900a, 0x7caa, 0x77aa, 0xf7aa, 0xf7a9, 0xf7a9, 0xf7a9, 0x77a9, 0xfe95, 0xfe07, 0xfa37, 0xfaf5, 0xf74e, 0x0403, 0x040a, 0x050a, 0x010a, 0x013a, 0xb7fc, 0x0007, 0x00a9, 0x40a9, 0x90aa, 0xa4aa, 0xa4aa, 0x90aa, 0x40aa, 0x0faa, 0xfbec, 0x0002, 0xe555, 0x9d55, 0x57ff, 0x00fb, 0x00e0, 0xbefc, 0x0004, 0xaa90, 0x6a90, 0x96a4, 0x5550, 0xffc0, 0xf6bc, 0x0002, 0x5579, 0x15e7, 0x0395, 0xffff, 0x00bc, 0xf0f0, 0x01fb, 0xb040, 0x007f, 0xbbbb, 0xcccc, 0x00fb, 0x2120, 0x6cfb, 0x8405, 0xa101, 0xa856, 0xaa0a, 0x0001, 0x0017, 0x017d, 0xb6fe, 0xa401, 0xa4f6, 0xa4f6, 0x4bf6, 0x9002, 0x9003, 0x9003, 0x55aa, 0xffbb, 0x00f6, 0x7d30, 0x67ef, 0x5003, 0x032a, 0x5328, 0x0fc2, 0xffca, 0x47fb, 0x0003, 0x0050, 0x00a4, 0x0c55, 0x00a9, 0x77fb, 0x01fb, 0x6f80, 0xf010, 0xfebf, 0x5401, 0x42aa, 0x2aaa, 0x00fb, 0x4030, 0x7efb, 0x0001, 0x0050, 0x5da4, 0xeb6f, 0xa406, 0x92c0, 0xd2fc, 0xb2bf, 0x1c28, 0x1d42, 0x1d4b, 0x854b, 0x6fae, 0x0002, 0x0050, 0x00a0, 0x00c0, 0x6efb, 0x0008, 0x0090, 0x8090, 0x2090, 0x20a4, 0x20a9, 0x08a9, 0x48a9, 0xffaa, 0xff1f, 0x4bf6, 0xa404, 0xa403, 0xa943, 0xaa90, 0xa940, 0xa401, 0xb6f7, 0xa400, 0xa5da, 0x0046, 0x0808, 0x4bf6, 0x0003, 0x0005, 0xc01a, 0xc005, 0x5540, 0x7f66, 0x7777, 0x00fb, 0x80c0, 0x46fb, 0x5009, 0xa441, 0xa401, 0xa406, 0x901a, 0x906a, 0x00aa, 0x0030, 0x0002, 0x0009, 0x0009, 0xbb6f, 0x016b, 0x3030, 0x3030, 0x7fab, 0x0000, 0xab94, 0xf6fb, 0x5405, 0x4085, 0x0080, 0x60a0, 0x805a, 0x00a5, 0x00a6, 0x66f6, 0x01fb, 0x0202, 0x0102, 0x01b6, 0xfefe, 0xfefe, 0xfabe, 0x0008, 0x0040, 0x55a0, 0x5503, 0xd503, 0xd100, 0xd100, 0x5100, 0x4503, 0x4503, 0x6efb, 0xa406, 0x0070, 0x01c0, 0x3dc0, 0xfd00, 0xf700, 0xf700, 0xfdc0, 0x4aab, 0x66ff, 0x00fb, 0x1010, 0xe6fb, 0x4005, 0x4004, 0x10a4, 0x12a4, 0x1a93, 0x4a93, 0x4aa4, 0x6ff4, 0xfcb6, 0x5000, 0xabaa, 0x5f7c, 0x000b, 0x0009, 0x0025, 0x0295, 0x0955, 0x2555, 0x8000, 0xe000, 0x7800, 0x7e80, 0x5fe0, 0x57f8, 0x8000, 0xebfc, 0x0002, 0x0094, 0x00e9, 0x0155, 0xcfb6, 0x5401, 0x55e9, 0xff95, 0x63fc, 0x9003, 0xa500, 0xea40, 0x9590, 0x5500, 0xffec, 0x0001, 0x0a55, 0x2555, 0x00f7, 0x8080, 0xe777, 0xf7ee, 0x017e, 0xc0c0, 0x8080, 0x5f7e, 0x0001, 0xfe40, 0xfe57, 0x7777, 0xcc5f, 0xc57e, 0x5404, 0x00fa, 0x00fa, 0x00fe, 0x00fe, 0x00fe, 0xfefc, 0x0004, 0x4015, 0x906a, 0x90aa, 0x106a, 0x106a, 0xfeec, 0x00fc, 0xb088, 0xe6fc, 0x0006, 0x0050, 0x54a4, 0xfd00, 0xff01, 0xfd07, 0xfd07, 0xf107, 0xccfe, 0x00cf, 0xf2ee, 0x36cf, 0x5403, 0x5255, 0x4855, 0x0055, 0xaf54, 0xcff6, 0x00f6, 0x0080, 0x6666, 0xff66, 0x08cb, 0x1f00, 0xe80f, 0x0f0f, 0xf070, 0xfefc, 0xfcf0, 0x0701, 0x300f, 0x38f0, 0x7fcb, 0x5005, 0x5655, 0x5b55, 0x5b55, 0x5b55, 0x5b55, 0x6a55, 0x7fec, 0x0002, 0x0095, 0x2a55, 0xbe55, 0xfccc, 0x01f7, 0x0300, 0x0203, 0xc5f7, 0x0400, 0x5405, 0x7f55, 0xecf7, 0xc7f5, 0x4001, 0x45f6, 0xfd5a, 0x6fbc, 0x0011, 0x0009, 0x0025, 0x0025, 0x0096, 0x0096, 0x0096, 0x0029, 0xa6aa, 0x5557, 0x55a9, 0xea00, 0xff80, 0xffe0, 0x7fe0, 0x7ef8, 0x7ef8, 0x7ef8, 0xffb8, 0xc7f5, 0x500b, 0x50a0, 0x10a0, 0x10a0, 0x15a0, 0x1f50, 0x1f74, 0x057d, 0xfffd, 0xff1f, 0xff1f, 0xff1f, 0xff17, 0xcbef, 0x5402, 0x54ea, 0xd4aa, 0xfcaa, 0x00bc, 0xf070, 0xcbbb, 0xbbbb, 0x00fc, 0x80c0, 0xf5fc, 0x0002, 0x0040, 0x0090, 0x0090, 0x5fcc, 0x01cf, 0xfffc, 0xfefe, 0xf7cf, 0x5402, 0x5255, 0x5255, 0x5255, 0xcccc, 0x00fe, 0x9880, 0x7fae, 0x0001, 0x00e5, 0xa0fa, 0x00f7, 0x0030, 0xec7f, 0x5002, 0x5055, 0xfea8, 0xfc28, 0xaaff, 0xf5ec, 0x5002, 0x00fa, 0x0faa, 0xfaaa, 0x67f5, 0x5001, 0x5080, 0xff80, 0x3ef6, 0xa400, 0x5457, 0xe75f, 0xa401, 0xa5f0, 0xa902, 0x56f7, 0xa402, 0xa555, 0x690d, 0x9a56, 0x3efc, 0x5004, 0x506a, 0x5055, 0xd06a, 0xc055, 0x407f, 0xfc63, 0x4001, 0x4fea, 0x303a, 0x02fc, 0x1010, 0x1010, 0x0010, 0x6fec, 0x0007, 0x0029, 0x002a, 0x0029, 0x002e, 0x000b, 0x000b, 0x000a, 0x002f, 0x75fb, 0x0001, 0x1454, 0x01e9, 0xaf75, 0x5000, 0x50f9, 0xaaf7, 0xb6fc, 0x0005, 0x00a9, 0x40e9, 0x40ea, 0x40ea, 0x405a, 0x40aa, 0xcfa6, 0x9400, 0x96ff, 0x00fe, 0x8080, 0x75fe, 0x0001, 0x0515, 0x007a, 0x7775, 0xeaaf, 0x7775, 0xfaaf, 0xebfc, 0x4005, 0x40ea, 0x90fa, 0x90fa, 0x90fa, 0x90d6, 0x906a, 0xc5fa, 0x9000, 0x907f, 0x00cf, 0xfefe, 0xecfb, 0xa408, 0xa4aa, 0xa4aa, 0xa4aa, 0xa4aa, 0xa9aa, 0x06aa, 0x1af0, 0x1af0, 0x40c0, 0xebbb, 0x01fb, 0x4810, 0x7884, 0xfcfb, 0x9001, 0x04aa, 0x04a8, 0xcbbb, 0x01bf, 0xfffe, 0xfdfe, 0xbbbf, 0x006b, 0x1010, 0xff6b, 0x0001, 0x8005, 0x0955, 0x00bf, 0x1fe0, 0xb5f3, 0x4006, 0x01aa, 0x01a9, 0x07a9, 0x5fa4, 0x1f50, 0x0700, 0x5f00, 0xbcef, 0x000a, 0x2aa1, 0xaaa8, 0xaafc, 0xfcff, 0xbfff, 0x55ff, 0x5515, 0xffc5, 0x0014, 0xff55, 0x0a00, 0xffb7, 0x0002, 0x0095, 0x0095, 0x0295, 0x01fb, 0xf0f8, 0xc0f0, 0xfbf5, 0x0002, 0x00a9, 0x00a9, 0x40a9, 0x05bf, 0x0e0e, 0xcf0f, 0xf1ff, 0x77f7, 0x3030, 0x7030, 0xb6cf, 0x0007, 0xaa85, 0xaa15, 0xaa1f, 0xa8ff, 0xa3ff, 0x28ff, 0xaa3f, 0x00ff, 0xbcf7, 0x9000, 0xd0aa, 0xccbb, 0xbf75, 0x9402, 0x90ff, 0x52ff, 0x42fe, 0x00bf, 0xff1e, 0xbccc, 0xf75f, 0x4000, 0x0095, 0x5fff, 0x02bf, 0x607e, 0xc0c0, 0xe0c0, 0xc6f7, 0xa403, 0xa9f6, 0xa9fd, 0x6afd, 0xd6ff, 0xbf6c, 0x0002, 0x03e5, 0x0395, 0x03ea, 0x0057, 0x1010, 0x65f7, 0x4001, 0xd42a, 0xfd55, 0xf6bf, 0x5400, 0x55a8, 0xfffb, 0x00fc, 0x0100, 0xfcfe, 0xa403, 0xa4aa, 0x906a, 0x906a, 0x906a, 0x00fc, 0xf838, 0x02fe, 0x700e, 0x8080, 0x0080, 0xebfc, 0x4006, 0x9065, 0xa4aa, 0xa4ea, 0x69fa, 0x69fe, 0x69fe, 0x99fe, 0xeebb, 0x7cf6, 0x4006, 0x04aa, 0x10a9, 0x11a9, 0x11a4, 0x47a4, 0x07a4, 0x07a5, 0xccf6, 0x675f, 0xa402, 0xa9c0, 0xa92a, 0xaa2a, 0x53fc, 0xa406, 0x699a, 0x99fa, 0x9af6, 0x9afe, 0x5afd, 0x66ff, 0x69ff, 0x0cb5, 0x0001, 0x5655, 0xff55
};

// [D_08C92E30] D_08C92FC0 Huffman Window 1
u32 D_08c92fc0_window1[] = {
	0xe77d777e, 0x2ff6bff3, 0x77fb65b3, 0x9affd267, 0x7bf1fffc, 0x2fe677fb, 0xeafc3f3b, 0x7f7b2fb6, 0xff213b6e, 0xfd6cffdf, 0xffeef37f, 0x99fd9eec, 0x6cf9b96d, 0xde1effef, 0xfbf5bffa, 0x0000003a
};

// [D_08C92E70] D_08C92FC0 Huffman Window 2
u32 D_08c92fc0_window2[] = {
	0x88ca0ca4, 0x55281148, 0xb0278027, 0xabaecbdd, 0x8aaa5174, 0x54755395, 0xd1ed7da7, 0x7eb71be6, 0x6573fb35, 0x77dfea9f, 0xf2daeba5, 0x00000001
};

// [D_08C92EA0] D_08C92FC0 Huffman
struct Huffman D_08c92fc0_huffman[] = {
	/* Data */			D_08c92fc0_huffmandata,
	/* Size */			0xbdc,
	/* Count */			0x1e6,
	/* Window 1 */		D_08c92fc0_window1,
	/* Window 2 */		D_08c92fc0_window2,
};

// [D_08C92EB0] D_08C92FC0 RLE Data
u8 D_08c92fc0_rledata[] = {
	0x1, 0xf, 0x1, 0x17, 0xf, 0x9, 0x39, 0x7, 0x21, 0xd, 0x13, 0xf, 0x4, 0xc, 0x29, 0x17, 0x1, 0x5, 0xd, 0xd, 0x1, 0xa, 0x26, 0xb, 0x11, 0x4, 0x2, 0x7, 0x17, 0xd, 0x2b, 0x7, 0x30, 0x8, 0x2d, 0xb, 0x7, 0x9, 0x19, 0x7, 0x5, 0xc, 0x4, 0x13, 0x9, 0xa, 0xa, 0x17, 0x25, 0xf, 0x41, 0x6, 0x3a, 0x8, 0x28, 0x6, 0x1a, 0x9, 0x1, 0x5, 0x1, 0x7, 0x3, 0x5, 0x1, 0x7, 0x1, 0x7, 0x9, 0x3, 0x1, 0x3, 0x5, 0x7, 0x1, 0x3, 0x1, 0x9, 0x3, 0x3, 0xb, 0x5, 0x7, 0x9, 0x1, 0x3, 0x1, 0xb, 0x1, 0x5, 0x3, 0x7, 0x1, 0x5, 0x1, 0x9, 0x3, 0xd, 0x27, 0x5, 0x9, 0x3, 0x5, 0x3, 0xc9, 0x7, 0x21, 0x3, 0x5d, 0x5, 0x13, 0x4, 0x14, 0x7, 0x29, 0x4, 0x2, 0x9, 0x27, 0x9, 0x41, 0x7, 0x9, 0xf, 0xa1, 0x3, 0x5, 0x7, 0x5, 0xb, 0xa, 0x7, 0x6, 0x19, 0x19, 0x4, 0x6, 0x4, 0x6f, 0xa, 0x26, 0x5, 0x6, 0xd, 0x3, 0x9, 0x6, 0x4, 0x31, 0x13, 0x23, 0x5, 0x11, 0xe, 0x22, 0xb, 0x15, 0x7, 0x2c, 0xc, 0x3, 0xd, 0x32, 0xe, 0xb, 0x5, 0xb, 0x5, 0xa, 0x6, 0xb, 0x5, 0xb, 0x5, 0x21, 0x6, 0xa, 0x9, 0x6, 0xa, 0x7, 0xb, 0x4, 0xd, 0x18, 0x4, 0x2, 0x5, 0x41, 0x7, 0x2, 0x6, 0x28, 0x10, 0xb, 0xc, 0x22, 0xd, 0x13, 0x3, 0xd, 0x4, 0xc, 0xa, 0x6, 0x9, 0x7, 0x8, 0x8, 0x9, 0x37, 0xc, 0x13, 0xa, 0x6, 0x6, 0xd, 0xe, 0x2, 0xd, 0x4, 0xc, 0x1, 0x3, 0x1, 0xb, 0x5, 0xb, 0x4, 0xc, 0x4, 0xc, 0x5, 0xb, 0x5, 0xb, 0x4, 0x18, 0x3a, 0xa, 0x31, 0x5, 0x5, 0x5, 0x3, 0x4, 0x5a, 0x3, 0x1d, 0x7, 0x1d, 0x3, 0x48, 0x4, 0x23, 0x5, 0x5, 0x6, 0x7a, 0x3, 0x22, 0x3, 0x2e, 0x9, 0x11, 0xd, 0x3, 0x0, 0xa0, 0x0, 0x0, 0x0
};

// [D_08C92FC0] D_08C92FC0 Graphics
struct CompressedGraphics D_08c92fc0 = {
	/* Huffman Data */		D_08c92fc0_huffman,
	/* RLE Data */			D_08c92fc0_rledata,
	/* RLE Size */			0x10c,
	/* RLE Offset */		0x1200,
	/* Double Compressed */	TRUE,
};

