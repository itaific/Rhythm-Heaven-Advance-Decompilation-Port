#include "global.h"
#include "graphics.h"

// // //  D_08D062C0  // // //

// [D_08D05E88] D_08D062C0 Data
u16 D_08d062c0_data[] = {
	0x1000, 0x1004, 0x1003, 0x1002, 0x100b, 0x100a, 0x1009, 0x100e, 0x100d, 0x100c, 0x1007, 0x1006, 0x1005, 0x0008, 0x0008, 0x0008, 0x0408, 0x1405, 0x1406, 0x1407, 0x140c, 0x140d, 0x140e, 0x1409, 0x140a, 0x140b, 0x1402, 0x1403, 0x1404, 0x1400, 0x0001, 0x0001, 0x1017, 0x1014, 0x1015, 0x1016, 0x1018, 0x1019, 0x101a, 0x100d, 0x1013, 0x1012, 0x100f, 0x1010, 0x1011, 0x0008, 0x0008, 0x0008, 0x0408, 0x1411, 0x1410, 0x140f, 0x1412, 0x1413, 0x140d, 0x141a, 0x1419, 0x1418, 0x1416, 0x1415, 0x1414, 0x1417, 0x0001, 0x0001, 0x1036, 0x1037, 0x1038, 0x1033, 0x1034, 0x1035, 0x100d, 0x103f, 0x103e, 0x1042, 0x1041, 0x1040, 0x1008, 0x0008, 0x0008, 0x0008, 0x0408, 0x1408, 0x1440, 0x1441, 0x1442, 0x143e, 0x143f, 0x140d, 0x1435, 0x1434, 0x1433, 0x1438, 0x1437, 0x1436, 0x0001, 0x0001, 0x102f, 0x1032, 0x1031, 0x1030, 0x100d, 0x103a, 0x1039, 0x103d, 0x103c, 0x103b, 0x1011, 0x1008, 0x1008, 0x0008, 0x0008, 0x0008, 0x0408, 0x1408, 0x1408, 0x1411, 0x143b, 0x143c, 0x143d, 0x1439, 0x143a, 0x140d, 0x1430, 0x1431, 0x1432, 0x142f, 0x0001, 0x0001, 0x100d, 0x100d, 0x100d, 0x1044, 0x1046, 0x1047, 0x1048, 0x1045, 0x1043, 0x1008, 0x0008, 0x0008, 0x0008, 0x0408, 0x1408, 0x1443, 0x1445, 0x1448, 0x1447, 0x1446, 0x1444, 0x140d, 0x140d, 0x140d, 0x0001, 0x0001, 0x1021, 0x1022, 0x1023, 0x101e, 0x101f, 0x1020, 0x1028, 0x1027, 0x1008, 0x0008, 0x0008, 0x0008, 0x0408, 0x1408, 0x1427, 0x1428, 0x1420, 0x141f, 0x141e, 0x1423, 0x1422, 0x1421, 0x0001, 0x0001, 0x101b, 0x101d, 0x101d, 0x101c, 0x1026, 0x1025, 0x1024, 0x1008, 0x0008, 0x0008, 0x0008, 0x0408, 0x1408, 0x1424, 0x1425, 0x1426, 0x141c, 0x141d, 0x141d, 0x141b, 0x0001, 0x0001, 0x102c, 0x1029, 0x102a, 0x102b, 0x102d, 0x102e, 0x1008, 0x0008, 0x0008, 0x0008, 0x0408, 0x1408, 0x142e, 0x142d, 0x142b, 0x142a, 0x1429, 0x142c, 0x0001, 0x0001, 0x1049, 0x1050, 0x1008, 0x0008, 0x0008, 0x0008, 0x0408, 0x1408, 0x1450, 0x1449, 0x0001, 0x0001, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x0001, 0x0001, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x0001, 0x0001, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x0001, 0x0001, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x0001, 0x0001, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x0001, 0x0001, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x0001, 0x0001, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x004a, 0x004b, 0x0001, 0x0001, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x004e, 0x004f, 0x0001, 0x0001, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x004d, 0x004c, 0x0001, 0x0001, 0x0008, 0x0001, 0x0001, 0x0008, 0x0001
};

// [D_08D062A2] D_08D062C0 RLE Data
u8 D_08d062c0_rledata[] = {
	0x8a, 0x3, 0x5, 0x3, 0x14, 0x4, 0x5, 0x4, 0x12, 0x5, 0x5, 0x5, 0x10, 0x6, 0x5, 0x6, 0xb, 0xa, 0x5, 0xa, 0x0, 0x26, 0x1d, 0x3, 0x1d, 0x1, 0x0, 0x82, 0x0, 0x0
};

// [D_08D062C0] D_08D062C0 Graphics
struct CompressedGraphics D_08d062c0 = {
	/* Data */				{.raw = D_08d062c0_data},
	/* RLE Data */			D_08d062c0_rledata,
	/* RLE Size */			0x1a,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

