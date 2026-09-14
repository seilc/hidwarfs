/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\driver\gcn\dltexdic.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80460258 -> 0x804609D4
*/
static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EF050
// Range: 0x80460258 -> 0x8046030C
int _rwDlNativeTextureGetSize(void * sizeIn /* r29 */, void * textureIn /* r1+0x8 */) {
    // Local variables
    unsigned int size; // r31
    struct RwRaster * raster; // r30

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EF06A
// total size: 0x58
struct _rwDlNativeTexture {
    // Members
    int id; // offset 0x0, size 0x4
    int filterAndAddress; // offset 0x4, size 0x4
    unsigned int maxAniso; // offset 0x8, size 0x4
    int biasClamp; // offset 0xC, size 0x4
    int edgeLod; // offset 0x10, size 0x4
    float lodBias; // offset 0x14, size 0x4
    char name[32]; // offset 0x18, size 0x20
    char mask[32]; // offset 0x38, size 0x20
};
// total size: 0x10
struct _rwDlNativeRaster {
    // Members
    int formatType; // offset 0x0, size 0x4
    unsigned short width; // offset 0x4, size 0x2
    unsigned short height; // offset 0x6, size 0x2
    unsigned char depth; // offset 0x8, size 0x1
    unsigned char numMipLevels; // offset 0x9, size 0x1
    unsigned char format; // offset 0xA, size 0x1
    unsigned char tlutFormat; // offset 0xB, size 0x1
    int alpha; // offset 0xC, size 0x4
};
// Range: 0x8046030C -> 0x80460650
int _rwDlNativeTextureWrite(void * streamIn /* r27 */, void * textureIn /* r29 */) {
    // Local variables
    struct _rwDlNativeTexture nativeTexture; // r1+0x20
    struct _rwDlNativeRaster nativeRaster; // r1+0x10
    unsigned int size; // r1+0xC
    int bytesLeftToWrite; // r1+0x8
    struct RwRaster * raster; // r31
    struct RwGameCubeRasterExtension * rasExt; // r30
    struct _rwDlTextureExt * texExt; // r28
    unsigned int paletteSize; // r26

    // References
    // -> static char __dbFunctionName[24];
    // -> int _RwGameCubeTextureExtOffset;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EF082
// Range: 0x80460650 -> 0x804609D4
int _rwDlNativeTextureRead(void * streamIn /* r28 */, void * textureIn /* r1+0x8 */) {
    // Local variables
    struct _rwDlNativeTexture nativeTexture; // r1+0x28
    struct _rwDlNativeRaster nativeRaster; // r1+0x18
    unsigned int length; // r1+0x14
    unsigned int version; // r1+0x10
    unsigned int autoMipmap; // r26
    unsigned int size; // r1+0xC
    struct RwTexture * texture; // r29
    struct RwRaster * raster; // r31
    struct RwGameCubeRasterExtension * rasExt; // r30
    unsigned int size; // r25

    // References
    // -> static char __dbFunctionName[23];
}


