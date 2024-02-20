#include "global.h"
#include "graphics.h"

// // //  D_08CF067C  // // //

// [D_08CF0278] D_08CF067C Data
u16 D_08cf067c_data[] = {
	0x3057, 0x3071, 0x3090, 0x308f, 0x308d, 0x3085, 0x308e, 0x3057, 0x001a, 0x2092, 0x001a, 0x001a, 0x2091, 0x001a, 0x3057, 0x0080, 0x3071, 0x3070, 0x3065, 0x3086, 0x3085, 0x3057, 0x601a, 0x601a, 0x601a, 0x308a, 0x308c, 0x308b, 0x5488, 0x5487, 0x5489, 0x601a, 0x3057, 0x306b, 0x305a, 0x3059, 0x305c, 0x305b, 0x3058, 0x3057, 0x001a, 0x209a, 0x001a, 0x001a, 0x2099, 0x001a, 0x3057, 0x3071, 0x3090, 0x308f, 0x308d, 0x3085, 0x308e, 0x3057, 0x601a, 0x601a, 0x601a, 0x3096, 0x3098, 0x3097, 0x5494, 0x5493, 0x5495, 0x601a, 0x3057, 0x3067, 0x3069, 0x3068, 0x3065, 0x3064, 0x3066, 0x3057, 0x206d, 0x206c, 0x206f, 0x206e, 0x206a, 0x201a, 0x3057, 0x306b, 0x305a, 0x3059, 0x305c, 0x305b, 0x3058, 0x3057, 0x601a, 0x601a, 0x3061, 0x3060, 0x3063, 0x3062, 0x545e, 0x545d, 0x545f, 0x601a, 0x3057, 0x307b, 0x307d, 0x307c, 0x3079, 0x3066, 0x307a, 0x3057, 0x2082, 0x2081, 0x2084, 0x2083, 0x207f, 0x207e, 0x3057, 0x0080, 0x3071, 0x3070, 0x3065, 0x3064, 0x3066, 0x3057, 0x601a, 0x601a, 0x3076, 0x3075, 0x3078, 0x3077, 0x5473, 0x5472, 0x5474, 0x601a, 0x30c0, 0x30c2, 0x30c4, 0x30c3, 0x30bf, 0x30be, 0x30c1, 0x30c0, 0x00c8, 0x20c7, 0x20ca, 0x20c9, 0x20c6, 0x20c5, 0x3057, 0x3071, 0x3090, 0x308f, 0x30b6, 0x3066, 0x307a, 0x3057, 0x601a, 0x601a, 0x30bb, 0x30ba, 0x30bd, 0x30bc, 0x54b8, 0x54b7, 0x54b9, 0x601a, 0x001a, 0x30d6, 0x30d2, 0x30d7, 0x30d3, 0x30d2, 0x30d5, 0x30d4, 0x30da, 0x30d9, 0x30d8, 0x30cd, 0x30ce, 0x30be, 0x30c1, 0x30cb, 0x601a, 0x30cc, 0x30d0, 0x30cf, 0x30d1, 0x30cc, 0x30d0, 0x30cf, 0x30d1, 0x601a, 0x601a, 0x30a1, 0x309f, 0x30a3, 0x30a0, 0x309f, 0x30a2, 0x30a1, 0x309f, 0x30a5, 0x30a6, 0x309f, 0x30a4, 0x3028, 0x301c, 0x301d, 0x601a, 0x309b, 0x309d, 0x309c, 0x309e, 0x309b, 0x309d, 0x309c, 0x309e, 0x601a, 0x601a, 0x30af, 0x30b1, 0x30b0, 0x30ac, 0x30ab, 0x30ae, 0x30ad, 0x30b4, 0x30b3, 0x30b5, 0x30b4, 0x30b2, 0x3028, 0x301c, 0x301d, 0x601a, 0x30a7, 0x30a9, 0x30a8, 0x30aa, 0x30a7, 0x30a9, 0x30a8, 0x30aa, 0x601a, 0x601a, 0x3025, 0x3027, 0x3026, 0x3022, 0x3021, 0x3024, 0x3023, 0x302b, 0x302a, 0x302c, 0x302b, 0x3029, 0x3028, 0x301c, 0x301d, 0x601a, 0x301b, 0x301f, 0x301e, 0x3020, 0x301b, 0x301f, 0x301e, 0x3020, 0x601a, 0x302d, 0x3038, 0x303a, 0x3039, 0x3035, 0x3034, 0x3037, 0x3036, 0x303f, 0x303e, 0x3041, 0x3040, 0x303c, 0x303b, 0x302f, 0x303d, 0x3030, 0x302f, 0x3031, 0x302d, 0x302e, 0x3032, 0x3032, 0x3033, 0x302e, 0x3032, 0x3032, 0x3033, 0x302d, 0x300b, 0x3012, 0x3014, 0x300b, 0x300b, 0x3011, 0x3013, 0x3012, 0x3014, 0x3017, 0x3018, 0x300b, 0x300e, 0x3015, 0x300b, 0x3016, 0x300d, 0x300b, 0x300e, 0x300b, 0x300c, 0x300f, 0x300f, 0x3010, 0x300c, 0x300f, 0x300f, 0x3010, 0x300b, 0x3019, 0x3051, 0x3053, 0x3052, 0x3056, 0x3052, 0x3053, 0x3052, 0x3055, 0x3054, 0x3053, 0x3052, 0x3056, 0x3052, 0x3053, 0x3052, 0x3055, 0x3054, 0x3053, 0x3052, 0x3056, 0x3052, 0x3053, 0x3052, 0x3055, 0x3054, 0x3053, 0x3052, 0x3056, 0x3052, 0x3053, 0x3052, 0x3055, 0x3054, 0x3046, 0x3046, 0x3048, 0x3047, 0x3043, 0x3042, 0x3045, 0x3044, 0x3046, 0x3046, 0x3048, 0x3047, 0x3043, 0x3042, 0x3045, 0x3044, 0x3046, 0x3046, 0x3048, 0x3047, 0x3043, 0x3042, 0x3045, 0x3044, 0x3046, 0x3046, 0x3048, 0x3047, 0x3043, 0x3042, 0x3045, 0x3044, 0x304e, 0x304d, 0x3050, 0x304f, 0x304a, 0x3049, 0x304c, 0x304b, 0x304e, 0x304d, 0x3050, 0x304f, 0x304a, 0x3049, 0x304c, 0x304b, 0x304e, 0x304d, 0x3050, 0x304f, 0x304a, 0x3049, 0x304c, 0x304b, 0x304e, 0x304d, 0x3050, 0x304f, 0x304a, 0x3049, 0x304c, 0x304b, 0x30db, 0x30e4, 0x30db, 0x30e4, 0x30db, 0x30e4, 0x30db, 0x30e4, 0x301c, 0x30de, 0x30dd, 0x30e0, 0x30df, 0x30e2, 0x30e1, 0x30dc, 0x301c, 0x30de, 0x30dd, 0x30e0, 0x30df, 0x30e2, 0x30e1, 0x30dc, 0x301c, 0x30de, 0x30dd, 0x30e0, 0x30df, 0x30e2, 0x30e1, 0x30dc, 0x301c, 0x30de, 0x30dd, 0x30e0, 0x30df, 0x30e2, 0x30e1, 0x30dc, 0x30dd, 0x30e0, 0x30df, 0x30e2, 0x30e1, 0x30dc, 0x301c, 0x30de, 0x30dd, 0x30e0, 0x30df, 0x30e2, 0x30e1, 0x30dc, 0x301c, 0x30de, 0x30dd, 0x30e0, 0x30df, 0x30e2, 0x30e1, 0x30dc, 0x301c, 0x30de, 0x30dd, 0x30e0, 0x30df, 0x30e2, 0x30e1, 0x30dc, 0x30dd, 0x30e0, 0x30e3, 0x601a
};

// [D_08CF0654] D_08CF067C RLE Data
u8 D_08cf067c_rledata[] = {
	0xa9, 0x3, 0x3, 0x3, 0x1d, 0x3, 0x2, 0x3, 0x18, 0x3, 0x2, 0x3, 0x18, 0x3, 0x2, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0xa, 0x1f, 0x1, 0x1f, 0x62, 0x6, 0x2, 0x6, 0x2, 0x6, 0x2, 0x6, 0x41, 0x1f, 0x1, 0x0, 0x80, 0x0, 0x0, 0x0
};

// [D_08CF067C] D_08CF067C Graphics
struct CompressedGraphics D_08cf067c = {
	/* Data */				{.raw = D_08cf067c_data},
	/* RLE Data */			D_08cf067c_rledata,
	/* RLE Size */			0x24,
	/* RLE Offset */		0x400,
	/* Double Compressed */	FALSE,
};

