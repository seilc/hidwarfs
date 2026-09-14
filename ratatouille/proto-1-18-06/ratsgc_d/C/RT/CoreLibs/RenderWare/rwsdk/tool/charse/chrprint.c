/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\tool\charse\chrprint.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x00000000 -> 0x00000000
*/
// total size: 0x14
struct _RtCharsetBuffer {
    // Members
    int initialised; // offset 0x0, size 0x4
    struct RwRaster * charSet; // offset 0x4, size 0x4
    unsigned int numChars; // offset 0x8, size 0x4
    // total size: 0x18
    struct {
        // Members
        float x; // offset 0x0, size 0x4
        float y; // offset 0x4, size 0x4
        float z; // offset 0x8, size 0x4
        unsigned char r; // offset 0xC, size 0x1
        unsigned char g; // offset 0xD, size 0x1
        unsigned char b; // offset 0xE, size 0x1
        unsigned char a; // offset 0xF, size 0x1
        float u; // offset 0x10, size 0x4
        float v; // offset 0x14, size 0x4
    } * vertices; // offset 0xC, size 0x4
    unsigned short * indices; // offset 0x10, size 0x4
};
struct _RtCharsetBuffer _rtgBuffer; // size: 0x14, address: 0x80553770
// total size: 0x10
struct RwRect {
    // Members
    int x; // offset 0x0, size 0x4
    int y; // offset 0x4, size 0x4
    int w; // offset 0x8, size 0x4
    int h; // offset 0xC, size 0x4
};
// total size: 0x1C
struct RtCharsetDesc {
    // Members
    int width; // offset 0x0, size 0x4
    int height; // offset 0x4, size 0x4
    int width_internal; // offset 0x8, size 0x4
    int height_internal; // offset 0xC, size 0x4
    int count; // offset 0x10, size 0x4
    int tilewidth; // offset 0x14, size 0x4
    int tileheight; // offset 0x18, size 0x4
};
enum RwCullMode {
    rwCULLMODENACULLMODE = 0,
    rwCULLMODECULLNONE = 1,
    rwCULLMODECULLBACK = 2,
    rwCULLMODECULLFRONT = 3,
    rwCULLMODEFORCEENUMSIZEINT = 2147483647,
};

