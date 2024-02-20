#include "global.h"
#include "graphics.h"

// // //  D_08C439D0  // // //

// [D_08C4362C] D_08C439D0 Data
u16 D_08c439d0_data[] = {
	0x206d, 0x206b, 0x206c, 0x2000, 0x2000, 0x206e, 0x206f, 0x2000, 0x2000, 0x206d, 0x206b, 0x206c, 0x2000, 0x2000, 0x206e, 0x206f, 0x2000, 0x2000, 0x206d, 0x206b, 0x206c, 0x2000, 0x2000, 0x206e, 0x206f, 0x2000, 0x2000, 0x206d, 0x206b, 0x206c, 0x0000, 0x0000, 0x2060, 0x205d, 0x205e, 0x2062, 0x2066, 0x2064, 0x2064, 0x2065, 0x205f, 0x2060, 0x205d, 0x205e, 0x2062, 0x2063, 0x2061, 0x2061, 0x2069, 0x205f, 0x2060, 0x205d, 0x205e, 0x2062, 0x206a, 0x2067, 0x2067, 0x2068, 0x205f, 0x2060, 0x205d, 0x205e, 0x0000, 0x0000, 0x2080, 0x207d, 0x207e, 0x2081, 0x2084, 0x2011, 0x2011, 0x2083, 0x207f, 0x2080, 0x207d, 0x207e, 0x2081, 0x2082, 0x2074, 0x2074, 0x2086, 0x207f, 0x2080, 0x207d, 0x207e, 0x2081, 0x2087, 0x2079, 0x2079, 0x2085, 0x207f, 0x2080, 0x207d, 0x207e, 0x0000, 0x0000, 0x2073, 0x2070, 0x2071, 0x2075, 0x2078, 0x2011, 0x2011, 0x2077, 0x2072, 0x2073, 0x2070, 0x2071, 0x2075, 0x2076, 0x2074, 0x2074, 0x207b, 0x2072, 0x2073, 0x2070, 0x2071, 0x2075, 0x207c, 0x2079, 0x2079, 0x207a, 0x2072, 0x2073, 0x2070, 0x2071, 0x0000, 0x0000, 0x2046, 0x2043, 0x2044, 0x2048, 0x204c, 0x204a, 0x204a, 0x204b, 0x2045, 0x2046, 0x2043, 0x2044, 0x2048, 0x2049, 0x2047, 0x2047, 0x204f, 0x2045, 0x2046, 0x2043, 0x2044, 0x2048, 0x2050, 0x204d, 0x204d, 0x204e, 0x2045, 0x2046, 0x2043, 0x2044, 0x0000, 0x0000, 0x0000, 0x043f, 0x043d, 0x043e, 0x0441, 0x0442, 0x0440, 0x0000, 0x0040, 0x0042, 0x0041, 0x003e, 0x003d, 0x003f, 0x0000, 0x0459, 0x0457, 0x0458, 0x045b, 0x045c, 0x045a, 0x0000, 0x005a, 0x005c, 0x005b, 0x0058, 0x0057, 0x0059, 0x0000, 0x0453, 0x0451, 0x0452, 0x0455, 0x0456, 0x0454, 0x0000, 0x0054, 0x0056, 0x0055, 0x0052, 0x0051, 0x0053, 0x0000, 0x0453, 0x04dc, 0x04dd, 0x04df, 0x04e0, 0x04de, 0x0000, 0x00de, 0x00e0, 0x00df, 0x00dd, 0x00dc, 0x0053, 0x0000, 0x0453, 0x04d7, 0x04d8, 0x04da, 0x04db, 0x04d9, 0x0000, 0x00d9, 0x00db, 0x00da, 0x00d8, 0x00d7, 0x0053, 0x0000, 0x0453, 0x04e7, 0x04e8, 0x04ea, 0x04eb, 0x04e9, 0x0000, 0x00e9, 0x00eb, 0x00ea, 0x00e8, 0x00e7, 0x0053, 0x0000, 0x04e3, 0x04e1, 0x04e2, 0x04e5, 0x04e6, 0x04e4, 0x0000, 0x00e4, 0x00e6, 0x00e5, 0x00e2, 0x00e1, 0x00e3, 0x0000, 0x04a1, 0x049f, 0x04a0, 0x04a3, 0x04a4, 0x04a2, 0x0000, 0x00a2, 0x00a4, 0x00a3, 0x00a0, 0x009f, 0x00a1, 0x0000, 0x1011, 0x108f, 0x1092, 0x1093, 0x1090, 0x1091, 0x108a, 0x108b, 0x1088, 0x1089, 0x108d, 0x108e, 0x108c, 0x1011, 0x1099, 0x109a, 0x1097, 0x1098, 0x109d, 0x109e, 0x109b, 0x109c, 0x1095, 0x1096, 0x1094, 0x1011, 0x0000, 0x10c5, 0x10c6, 0x10c9, 0x10ca, 0x10c7, 0x10c8, 0x10c0, 0x10c1, 0x10be, 0x10bf, 0x10c3, 0x10c4, 0x10c2, 0x1011, 0x10d1, 0x10d2, 0x10cf, 0x10d0, 0x10d5, 0x10d6, 0x10d3, 0x10d4, 0x10cd, 0x10ce, 0x10cb, 0x10cc, 0x0000, 0x10ac, 0x10ad, 0x10b0, 0x10b1, 0x10ae, 0x10af, 0x10a7, 0x10a8, 0x10a5, 0x10a6, 0x10aa, 0x10ab, 0x10a9, 0x1011, 0x10b8, 0x10b9, 0x10b6, 0x10b7, 0x10bc, 0x10bd, 0x10ba, 0x10bb, 0x10b4, 0x10b5, 0x10b2, 0x10b3, 0x0000, 0x0026, 0x001f, 0x0020, 0x101e, 0x1011, 0x1023, 0x1011, 0x1021, 0x1022, 0x1019, 0x1011, 0x1017, 0x1018, 0x101c, 0x101d, 0x101a, 0x101b, 0x1029, 0x102a, 0x1027, 0x1028, 0x102d, 0x102e, 0x102b, 0x102c, 0x1024, 0x1025, 0x0420, 0x041f, 0x0426, 0x0000, 0x0000, 0x000b, 0x000b, 0x000c, 0x1009, 0x100a, 0x100f, 0x1010, 0x100d, 0x100e, 0x1003, 0x1004, 0x1001, 0x1002, 0x1007, 0x1008, 0x1005, 0x1006, 0x1014, 0x1015, 0x1012, 0x1013, 0x1016, 0x1011, 0x040c, 0x040b, 0x040b, 0x0000, 0x0000, 0x000b, 0x000b, 0x0037, 0x1011, 0x1036, 0x103a, 0x103b, 0x1038, 0x1039, 0x1034, 0x1035, 0x1032, 0x1033, 0x1011, 0x0437, 0x040b, 0x040b, 0x0000, 0x0000, 0x0031, 0x002f, 0x0030, 0x0000, 0x0430, 0x042f, 0x0431, 0x0000
};

// [D_08C4399E] D_08C439D0 RLE Data
u8 D_08c439d0_rledata[] = {
	0xa8, 0xf, 0x7, 0x3, 0x7, 0xf, 0x7, 0x3, 0x7, 0xf, 0x7, 0x3, 0x7, 0xf, 0x7, 0x3, 0x7, 0xf, 0x7, 0x3, 0x7, 0xf, 0x7, 0x3, 0x7, 0xf, 0x7, 0x3, 0x7, 0xf, 0x7, 0x4, 0x1b, 0x5, 0x1b, 0x5, 0x1b, 0x3, 0x37, 0x4, 0x13, 0xd, 0x9, 0x17, 0x4, 0x0, 0x82, 0x0, 0x0, 0x0
};

// [D_08C439D0] D_08C439D0 Graphics
struct CompressedGraphics D_08c439d0 = {
	/* Data */				{.raw = D_08c439d0_data},
	/* RLE Data */			D_08c439d0_rledata,
	/* RLE Size */			0x2e,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

