/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xColor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002B2AC -> 0x8002B2AC
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
struct xColor_tag g_RED; // size: 0x4, address: 0x80D6C680
struct xColor_tag g_LIGHT_RED; // size: 0x4, address: 0x80D6C684
struct xColor_tag g_GREEN; // size: 0x4, address: 0x80D6C688
struct xColor_tag g_BLUE; // size: 0x4, address: 0x80D6C68C
struct xColor_tag g_DIRTY_BLUE; // size: 0x4, address: 0x80D6C690
struct xColor_tag g_CYAN; // size: 0x4, address: 0x80D6C694
struct xColor_tag g_MAGENTA; // size: 0x4, address: 0x80D6C698
struct xColor_tag g_YELLOW; // size: 0x4, address: 0x80D6C69C
struct xColor_tag g_BLACK; // size: 0x4, address: 0x80D6C6A0
struct xColor_tag g_WHITE; // size: 0x4, address: 0x80D6C6A4
struct xColor_tag g_GRAY40; // size: 0x4, address: 0x80D6C6A8
struct xColor_tag g_GRAY50; // size: 0x4, address: 0x80D6C6AC
struct xColor_tag g_GRAY80; // size: 0x4, address: 0x80D6C6B0
struct xColor_tag g_CLEAR; // size: 0x4, address: 0x80D6C6B4
struct xColor_tag g_NEON_RED; // size: 0x4, address: 0x80D6C6B8
struct xColor_tag g_NEON_GREEN; // size: 0x4, address: 0x80D6C6BC
struct xColor_tag g_NEON_BLUE; // size: 0x4, address: 0x80D6C6C0
struct xColor_tag g_PEACH; // size: 0x4, address: 0x80D6C6C4
struct xColor_tag g_FUSCHIA; // size: 0x4, address: 0x80D6C6C8
struct xColor_tag g_MAROON; // size: 0x4, address: 0x80D6C6CC
struct xColor_tag g_MIDNIGHTBLUE; // size: 0x4, address: 0x80D6C6D0
struct xColor_tag g_SEAGREEN; // size: 0x4, address: 0x80D6C6D4
struct xColor_tag g_FORESTGREEN; // size: 0x4, address: 0x80D6C6D8
struct xColor_tag g_PIMP_GOLD; // size: 0x4, address: 0x80D6C6DC
struct xColor_tag g_LIGHT_PIMP_GOLD; // size: 0x4, address: 0x80D6C6E0
struct xColor_tag g_ORANGE; // size: 0x4, address: 0x80D6C6E4
struct xColor_tag g_KHAKI; // size: 0x4, address: 0x80D6C6E8
struct xColor_tag g_LAVENDER; // size: 0x4, address: 0x80D6C6EC
struct xColor_tag g_PINK; // size: 0x4, address: 0x80D6C6F0
struct xColor_tag g_CHARTREUSE; // size: 0x4, address: 0x80D6C6F4
struct xColor_tag g_COLOR_TRYME; // size: 0x4, address: 0x80D5EA30
struct xColor_tag g_COLOR_TRYME2; // size: 0x4, address: 0x80D5EA34
struct xColor_tag g_COLOR_TRYME3; // size: 0x4, address: 0x80D5EA38
// total size: 0x10
struct _xFColor {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};

