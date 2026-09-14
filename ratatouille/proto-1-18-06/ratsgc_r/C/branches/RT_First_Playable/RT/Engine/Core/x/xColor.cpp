/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xColor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800248CC -> 0x800248CC
*/
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x4
struct xColor_tag {
    // Members
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        struct RwRGBA rgba; // offset 0x0, size 0x4
    };
};
struct xColor_tag g_RED; // size: 0x4, address: 0x80C0A258
struct xColor_tag g_LIGHT_RED; // size: 0x4, address: 0x80C0A25C
struct xColor_tag g_GREEN; // size: 0x4, address: 0x80C0A260
struct xColor_tag g_BLUE; // size: 0x4, address: 0x80C0A264
struct xColor_tag g_DIRTY_BLUE; // size: 0x4, address: 0x80C0A268
struct xColor_tag g_CYAN; // size: 0x4, address: 0x80C0A26C
struct xColor_tag g_MAGENTA; // size: 0x4, address: 0x80C0A270
struct xColor_tag g_YELLOW; // size: 0x4, address: 0x80C0A274
struct xColor_tag g_BLACK; // size: 0x4, address: 0x80C0A278
struct xColor_tag g_WHITE; // size: 0x4, address: 0x80C0A27C
struct xColor_tag g_GRAY40; // size: 0x4, address: 0x80C0A280
struct xColor_tag g_GRAY50; // size: 0x4, address: 0x80C0A284
struct xColor_tag g_GRAY80; // size: 0x4, address: 0x80C0A288
struct xColor_tag g_CLEAR; // size: 0x4, address: 0x80C0A28C
struct xColor_tag g_NEON_RED; // size: 0x4, address: 0x80C0A290
struct xColor_tag g_NEON_GREEN; // size: 0x4, address: 0x80C0A294
struct xColor_tag g_NEON_BLUE; // size: 0x4, address: 0x80C0A298
struct xColor_tag g_PEACH; // size: 0x4, address: 0x80C0A29C
struct xColor_tag g_FUSCHIA; // size: 0x4, address: 0x80C0A2A0
struct xColor_tag g_MAROON; // size: 0x4, address: 0x80C0A2A4
struct xColor_tag g_MIDNIGHTBLUE; // size: 0x4, address: 0x80C0A2A8
struct xColor_tag g_SEAGREEN; // size: 0x4, address: 0x80C0A2AC
struct xColor_tag g_FORESTGREEN; // size: 0x4, address: 0x80C0A2B0
struct xColor_tag g_PIMP_GOLD; // size: 0x4, address: 0x80C0A2B4
struct xColor_tag g_LIGHT_PIMP_GOLD; // size: 0x4, address: 0x80C0A2B8
struct xColor_tag g_ORANGE; // size: 0x4, address: 0x80C0A2BC
struct xColor_tag g_KHAKI; // size: 0x4, address: 0x80C0A2C0
struct xColor_tag g_LAVENDER; // size: 0x4, address: 0x80C0A2C4
struct xColor_tag g_PINK; // size: 0x4, address: 0x80C0A2C8
struct xColor_tag g_CHARTREUSE; // size: 0x4, address: 0x80C0A2CC
// total size: 0x10
struct _xFColor {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};

