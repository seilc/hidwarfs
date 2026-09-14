/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xColor.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001B79C -> 0x8001B79C
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
struct xColor_tag g_RED; // size: 0x4, address: 0x803C4830
struct xColor_tag g_GREEN; // size: 0x4, address: 0x803C4834
struct xColor_tag g_BLUE; // size: 0x4, address: 0x803C4838
struct xColor_tag g_YELLOW; // size: 0x4, address: 0x803C483C
struct xColor_tag g_BLACK; // size: 0x4, address: 0x803C4840
struct xColor_tag g_WHITE; // size: 0x4, address: 0x803C4844
struct xColor_tag g_CLEAR; // size: 0x4, address: 0x803C4848
struct xColor_tag g_FORESTGREEN; // size: 0x4, address: 0x803C484C
struct xColor_tag g_PIMP_GOLD; // size: 0x4, address: 0x803C4850
struct xColor_tag g_PINK; // size: 0x4, address: 0x803C4854
// total size: 0x10
struct _xFColor {
    // Members
    float r; // offset 0x0, size 0x4
    float g; // offset 0x4, size 0x4
    float b; // offset 0x8, size 0x4
    float a; // offset 0xC, size 0x4
};

