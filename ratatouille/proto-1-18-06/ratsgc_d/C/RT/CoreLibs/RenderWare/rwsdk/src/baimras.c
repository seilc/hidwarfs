/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\baimras.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804486C0 -> 0x80448DAC
*/
static char __dbFunctionName[21]; // size: 0x15, address: 0x804EDC68
// Range: 0x804486C0 -> 0x80448858
struct RwImage * RwImageSetFromRaster(struct RwImage * image /* r31 */, struct RwRaster * raster /* r30 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EDC7D
// Range: 0x80448858 -> 0x804489F4
struct RwRaster * RwRasterSetFromImage(struct RwRaster * raster /* r30 */, struct RwImage * image /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EDC92
enum RwRasterFormat {
    rwRASTERFORMATDEFAULT = 0,
    rwRASTERFORMAT1555 = 256,
    rwRASTERFORMAT565 = 512,
    rwRASTERFORMAT4444 = 768,
    rwRASTERFORMATLUM8 = 1024,
    rwRASTERFORMAT8888 = 1280,
    rwRASTERFORMAT888 = 1536,
    rwRASTERFORMAT16 = 1792,
    rwRASTERFORMAT24 = 2048,
    rwRASTERFORMAT32 = 2304,
    rwRASTERFORMAT555 = 2560,
    rwRASTERFORMATAUTOMIPMAP = 4096,
    rwRASTERFORMATPAL8 = 8192,
    rwRASTERFORMATPAL4 = 16384,
    rwRASTERFORMATMIPMAP = 32768,
    rwRASTERFORMATPIXELFORMATMASK = 3840,
    rwRASTERFORMATMASK = 65280,
    rwRASTERFORMATFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x804489F4 -> 0x80448DAC
struct RwImage * RwImageFindRasterFormat(struct RwImage * ipImage /* r31 */, int nRasterType /* r1+0x20 */, int * npWidth /* r17 */, int * npHeight /* r18 */, int * npDepth /* r19 */, int * npFormat /* r20 */) {
    // Local variables
    struct RwRaster rRaster; // r1+0x24
    int rasterPalettised; // r25
    enum RwRasterFormat rasterFormat; // r28
    int rasterDepth; // r29
    int rasterPalDepth; // r27
    int imagePalettised; // r24
    int imageDepth; // r23
    int imagePalDepth; // r26
    char message[512]; // r1+0x58

    // References
    // -> static char __dbFunctionName[24];
    // -> void * RwEngineInstance;
}


