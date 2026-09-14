/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\batextur.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8044B768 -> 0x804504A4
*/
static struct RwTexDictionary * dummyTexDict; // size: 0x4, address: 0x80D6C390
static char character[17]; // size: 0x11, address: 0x804EDF38
static char __dbFunctionName[24]; // size: 0x18, address: 0x804EDF49
// Range: 0x8044B768 -> 0x8044B800
static char CalculateIndexCharacter(unsigned char mipLevel /* r3 */) {
    // Local variables
    char result; // r31

    // References
    // -> static char character[17];
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EDF61
// Range: 0x8044B800 -> 0x8044B8F0
static int TextureDefaultMipmapName(char * name /* r30 */, char * maskName /* r31 */, unsigned char mipLevel /* r1+0x8 */) {
    // Local variables
    char mipCharacterString[3]; // r1+0x9

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EDF7A
// total size: 0x20
struct _rwPalQuantRGBABox {
    // Members
    int col0[4]; // offset 0x0, size 0x10
    int col1[4]; // offset 0x10, size 0x10
};
// total size: 0x1C
struct _rwPalQuantLeafNode {
    // Members
    float weight; // offset 0x0, size 0x4
    struct RwRGBAReal ac; // offset 0x4, size 0x10
    float var; // offset 0x14, size 0x4
    unsigned char palIndex; // offset 0x18, size 0x1
};
// total size: 0x40
struct _rwPalQuantBranchNode {
    // Members
    struct _rwPalQuantOctNode * dir[16]; // offset 0x0, size 0x40
};
// total size: 0x5C
struct _rwPalQuantOctNode {
    // Members
    struct _rwPalQuantLeafNode Leaf; // offset 0x0, size 0x1C
    struct _rwPalQuantBranchNode Branch; // offset 0x1C, size 0x40
};
// total size: 0x4008
struct RwPalQuant {
    // Members
    struct _rwPalQuantRGBABox Mcube[256]; // offset 0x0, size 0x2000
    float Mvv[256]; // offset 0x2000, size 0x400
    struct _rwPalQuantLeafNode Mvol[256]; // offset 0x2400, size 0x1C00
    struct _rwPalQuantOctNode * root; // offset 0x4000, size 0x4
    struct RwFreeList * cubefreelist; // offset 0x4004, size 0x4
};
// Range: 0x8044B8F0 -> 0x8044BA9C
static int PalettizeImage(struct RwImage * * image /* r31 */, int depth /* r29 */) {
    // Local variables
    struct RwRGBA palette[256]; // r1+0x4010
    struct RwImage * palImage; // r30
    struct RwPalQuant palQuant; // r1+0x8

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EDF89
// Range: 0x8044BA9C -> 0x8044BD78
static int PalettizeMipmaps(struct RwRGBA * MipPalette /* r21 */, struct RwImage * sourceImage /* r1+0x8 */, struct RwImage * * mipArray /* r30 */, int totalMipLevels /* r24 */, int logpalsize /* r25 */) {
    // Local variables
    int mipLevel; // r31
    int i; // r28
    struct RwPalQuant palQuant; // r1+0xC
    unsigned int * pal1; // r23
    unsigned int * pal2; // r22
    struct RwImage * dcimg; // r27
    struct RwImage * palImage; // r29

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EDF9A
// Range: 0x8044BD78 -> 0x8044C300
static struct RwImage * TextureImageReadAndSize(const char * name /* r30 */, const char * maskName /* r31 */, int format /* r1+0x8 */, int * rasterWidth /* r27 */, int * rasterHeight /* r28 */, int * rasterDepth /* r1+0xC */, int * rasterFlags /* r1+0x10 */) {
    // Local variables
    char mipName[256]; // r1+0x130
    char mipmaskName[256]; // r1+0x30
    const char * filenameExt; // r24
    const char * masknameExt; // r23
    struct RwImage * image; // r1+0x14
    struct RwError _rwErrorCode; // r1+0x28
    struct RwError _rwErrorCode; // r1+0x20
    struct RwError _rwErrorCode; // r1+0x18
    struct RwImage * resampledImage; // r26
    struct RwImage * origImage; // r29
    int originalDepth; // r25

    // References
    // -> static char __dbFunctionName[24];
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EDFB2
// Range: 0x8044C300 -> 0x8044C79C
static struct RwTexture * TextureDefaultNormalRead(const char * name /* r30 */, const char * maskName /* r31 */) {
    // Local variables
    struct RwTexture * texture; // r29
    struct RwImage * image; // r1+0x18
    struct RwRaster * raster; // r28
    struct RwRGBA MipPalette[256]; // r1+0x22C
    char mipName[256]; // r1+0x12C
    char mipmaskName[256]; // r1+0x2C
    int rasterWidth; // r1+0x14
    int rasterHeight; // r1+0x10
    int rasterDepth; // r1+0xC
    int rasterFlags; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x24
    struct RwError _rwErrorCode; // r1+0x1C

    // References
    // -> static char __dbFunctionName[25];
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EDFCB
static struct RwModuleInfo textureModule; // size: 0x8, address: 0x80D6C394
// Range: 0x8044C79C -> 0x8044D0C0
static struct RwTexture * TextureDefaultMipmapRead(const char * name /* r28 */, const char * maskName /* r31 */) {
    // Local variables
    struct RwTexture * texture; // r27
    struct RwImage * mipArray[16]; // r1+0x38
    struct RwRaster * raster; // r29
    struct RwRGBA MipPalette[256]; // r1+0x278
    int format; // r26
    char mipName[256]; // r1+0x178
    char mipmaskName[256]; // r1+0x78
    int rasterWidth; // r1+0x14
    int rasterHeight; // r1+0x10
    int rasterDepth; // r1+0xC
    int rasterFlags; // r1+0x8
    struct RwError _rwErrorCode; // r1+0x30
    struct RwError _rwErrorCode; // r1+0x28
    int mipLevel; // r30
    int totalMipLevels; // r25
    struct RwError _rwErrorCode; // r1+0x20
    struct RwError _rwErrorCode; // r1+0x18

    // References
    // -> static char __dbFunctionName[25];
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EDFE4
// Range: 0x8044D0C0 -> 0x8044D150
static struct RwTexture * TextureDefaultRead(const char * name /* r29 */, const char * maskName /* r30 */) {
    // Local variables
    struct RwTexture * texture; // r31

    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[33]; // size: 0x21, address: 0x804EDFF7
// Range: 0x8044D150 -> 0x8044D594
static struct RwRaster * TextureRasterDefaultBuildMipmaps(struct RwRaster * raster /* r30 */, struct RwImage * sourceImage /* r29 */) {
    // Local variables
    int mipLevel; // r31
    int totalMipLevels; // r28
    struct RwImage * mipArray[16]; // r1+0xC
    int rasterWidth; // r26
    int rasterHeight; // r25
    int rasterDepth; // r1+0x8
    unsigned int autoMipmap; // r27
    struct RwRGBA MipPalette[256]; // r1+0x4C

    // References
    // -> static char __dbFunctionName[33];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EE018
// Range: 0x8044D594 -> 0x8044D738
static int TextureAnnihilate(struct RwTexture * texture /* r31 */) {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[18];
    // -> struct RwPluginRegistry textureTKList;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EE02A
// Range: 0x8044D738 -> 0x8044D884
static int StringCompare(const char * cpA /* r30 */, const char * cpB /* r31 */) {
    // Local variables
    char cA; // r29
    char cB; // r28

    // References
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EE038
// Range: 0x8044D884 -> 0x8044D9A4
static struct RwTexture * TextureDefaultFind(const char * name /* r28 */) {
    // Local variables
    struct RwTexDictionary * dict; // r29
    struct RwTexture * result; // r31
    struct RwLLLink * cur; // r30
    struct RwLLLink * end; // r27

    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EE04B
// Range: 0x8044D9A4 -> 0x8044DA58
int RwTextureSetFindCallBack(struct RwTexture * (* callBack)(char *) /* r30 */) {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EE064
// Range: 0x8044DA58 -> 0x8044DB0C
int RwTextureSetReadCallBack(struct RwTexture * (* callBack)(char *, char *) /* r30 */) {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EE07D
// Range: 0x8044DB0C -> 0x8044DB90
int RwTextureSetMipmapping(int enable /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EE094
// Range: 0x8044DB90 -> 0x8044DC08
int RwTextureGetMipmapping() {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EE0AB
// Range: 0x8044DC08 -> 0x8044DC8C
int RwTextureSetAutoMipmapping(int enable /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804EE0C6
// Range: 0x8044DC8C -> 0x8044DD04
int RwTextureGetAutoMipmapping() {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EE0E1
// Range: 0x8044DD04 -> 0x8044DE64
struct RwTexture * RwTextureSetRaster(struct RwTexture * texture /* r30 */, struct RwRaster * raster /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EE0F4
// Range: 0x8044DE64 -> 0x8044DF30
struct RwRaster * RwTextureGetRaster(const struct RwTexture * texture /* r31 */) {
    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EE107
// Range: 0x8044DF30 -> 0x8044E0A4
struct RwTexDictionary * RwTexDictionaryCreate() {
    // Local variables
    struct RwTexDictionary * dict; // r31

    // References
    // -> struct RwPluginRegistry texDictTKList;
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EE11D
// Range: 0x8044E0A4 -> 0x8044E1F8
int RwTexDictionaryDestroy(struct RwTexDictionary * dict /* r31 */) {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> struct RwPluginRegistry texDictTKList;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804EE134
// Range: 0x8044E1F8 -> 0x8044E378
struct RwTexDictionary * RwTexDictionaryForAllTextures(const struct RwTexDictionary * dict /* r29 */, struct RwTexture * (* fpCallBack)(struct RwTexture *, void *) /* r25 */, void * pData /* r1+0x8 */) {
    // Local variables
    struct RwLLLink * cur; // r30
    struct RwLLLink * next; // r27
    const struct RwLLLink * end; // r26
    struct RwTexture * texture; // r28

    // References
    // -> static char __dbFunctionName[30];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EE152
// Range: 0x8044E378 -> 0x8044E4F8
struct RwTexture * RwTextureCreate(struct RwRaster * raster /* r30 */) {
    // Local variables
    struct RwTexture * texture; // r31

    // References
    // -> struct RwPluginRegistry textureTKList;
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EE162
// Range: 0x8044E4F8 -> 0x8044E5E0
struct RwTexture * RwTextureAddRef(struct RwTexture * texture /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EE172
// Range: 0x8044E5E0 -> 0x8044E6D4
int RwTextureDestroy(struct RwTexture * texture /* r31 */) {
    // Local variables
    int result; // r29

    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EE183
// Range: 0x8044E6D4 -> 0x8044E7A0
char * RwTextureGetName(struct RwTexture * texture /* r31 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EE194
// Range: 0x8044E7A0 -> 0x8044E86C
char * RwTextureGetMaskName(struct RwTexture * texture /* r31 */) {
    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EE1A9
// Range: 0x8044E86C -> 0x8044EA6C
struct RwTexture * RwTextureSetName(struct RwTexture * texture /* r30 */, const char * name /* r31 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[17];
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EE1BA
// Range: 0x8044EA6C -> 0x8044EC6C
struct RwTexture * RwTextureSetMaskName(struct RwTexture * texture /* r29 */, const char * maskName /* r31 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[21];
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EE1CF
// Range: 0x8044EC6C -> 0x8044EE30
struct RwTexture * RwTexDictionaryAddTexture(struct RwTexDictionary * dict /* r30 */, struct RwTexture * texture /* r31 */) {
    // Local variables
    char msg[80]; // r1+0x8

    // References
    // -> static char __dbFunctionName[26];
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EE1E9
// Range: 0x8044EE30 -> 0x8044EF28
struct RwTexture * RwTexDictionaryRemoveTexture(struct RwTexture * texture /* r31 */) {
    // References
    // -> static char __dbFunctionName[29];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804EE206
// Range: 0x8044EF28 -> 0x8044F0AC
struct RwTexture * RwTexDictionaryFindNamedTexture(struct RwTexDictionary * dict /* r28 */, const char * name /* r26 */) {
    // Local variables
    struct RwTexture * result; // r30
    struct RwLLLink * cur; // r29
    struct RwLLLink * end; // r27

    // References
    // -> static char __dbFunctionName[32];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EE226
// Range: 0x8044F0AC -> 0x8044F124
struct RwTexDictionary * RwTexDictionaryGetCurrent() {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EE240
// Range: 0x8044F124 -> 0x8044F214
int RwTextureGenerateMipmapName(char * name /* r31 */, char * maskName /* r1+0x8 */, unsigned char mipLevel /* r1+0xC */, int format /* r1+0x10 */) {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EE25C
// Range: 0x8044F214 -> 0x8044F568
struct RwTexture * RwTextureRead(const char * name /* r29 */, const char * maskName /* r28 */) {
    // Local variables
    struct RwTexture * result; // r31
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[14];
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EE26A
// Range: 0x8044F568 -> 0x8044F664
struct RwTexture * RwTextureSetFilterMode(struct RwTexture * texture /* r1+0x8 */, enum RwTextureFilterMode filtering /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EE281
// Range: 0x8044F664 -> 0x8044F734
enum RwTextureFilterMode RwTextureGetFilterMode(const struct RwTexture * texture /* r31 */) {
    // References
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EE298
// Range: 0x8044F734 -> 0x8044F834
struct RwTexture * RwTextureSetAddressing(struct RwTexture * texture /* r1+0x8 */, enum RwTextureAddressMode addressing /* r29 */) {
    // References
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EE2AF
// Range: 0x8044F834 -> 0x8044F930
struct RwTexture * RwTextureSetAddressingU(struct RwTexture * texture /* r1+0x8 */, enum RwTextureAddressMode addressing /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EE2C7
// Range: 0x8044F930 -> 0x8044FA2C
struct RwTexture * RwTextureSetAddressingV(struct RwTexture * texture /* r1+0x8 */, enum RwTextureAddressMode addressing /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EE2DF
// Range: 0x8044FA2C -> 0x8044FB2C
enum RwTextureAddressMode RwTextureGetAddressing(const struct RwTexture * texture /* r31 */) {
    // References
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EE2F6
// Range: 0x8044FB2C -> 0x8044FC00
enum RwTextureAddressMode RwTextureGetAddressingU(const struct RwTexture * texture /* r31 */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EE30E
// Range: 0x8044FC00 -> 0x8044FCD4
enum RwTextureAddressMode RwTextureGetAddressingV(const struct RwTexture * texture /* r31 */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EE326
// Range: 0x8044FCD4 -> 0x8044FDA8
int RwTextureRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* constructCB)(void *, int, int) /* r1+0xC */, void * (* destructCB)(void *, int, int) /* r1+0x10 */, void * (* copyCB)(void *, void *, int, int) /* r1+0x14 */) {
    // Local variables
    int plug; // r30

    // References
    // -> struct RwPluginRegistry textureTKList;
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo textureModule;
}

static char __dbFunctionName[37]; // size: 0x25, address: 0x804EE33E
// Range: 0x8044FDA8 -> 0x8044FE5C
int RwTextureSetMipmapGenerationCallBack(struct RwRaster * (* callback)(struct RwRaster *, struct RwImage *) /* r30 */) {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[37];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EE363
// Range: 0x8044FE5C -> 0x8044FF10
int RwTextureSetMipmapNameCallBack(int (* callback)(char *, char *, unsigned char, int) /* r30 */) {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EE382
// Range: 0x8044FF10 -> 0x8044FFE4
int RwTextureRasterGenerateMipmaps(struct RwRaster * raster /* r31 */, struct RwImage * image /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EE3A1
// Range: 0x8044FFE4 -> 0x80450224
void * _rwTextureClose(void * instance /* r1+0x8 */) {
    // Local variables
    struct RwLLLink * cur; // r31
    struct RwLLLink * end; // r30
    int texDictsExistOnShutdown; // r28
    struct RwTexDictionary * dict; // r27
    struct RwLLLink * next; // r26

    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
    // -> static struct RwTexDictionary * dummyTexDict;
}

static int _rwTextureFreeListBlockSize; // size: 0x4, address: 0x80D689F8
static int _rwTextureFreeListPreallocBlocks; // size: 0x4, address: 0x80D689FC
static int _rwTexDictionaryFreeListBlockSize; // size: 0x4, address: 0x80D68A00
static int _rwTexDictionaryFreeListPreallocBlocks; // size: 0x4, address: 0x80D68A04
static char __dbFunctionName[15]; // size: 0xF, address: 0x804EE3B1
static struct RwFreeList _rwTextureFreeList; // size: 0x30, address: 0x80D5D8D0
static struct RwFreeList _rwTexDictionaryFreeList; // size: 0x30, address: 0x80D5D900
// Range: 0x80450224 -> 0x804504A4
void * _rwTextureOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static struct RwModuleInfo textureModule;
    // -> void * RwEngineInstance;
    // -> static struct RwTexDictionary * dummyTexDict;
    // -> static struct RwFreeList _rwTexDictionaryFreeList;
    // -> static int _rwTexDictionaryFreeListPreallocBlocks;
    // -> static int _rwTexDictionaryFreeListBlockSize;
    // -> struct RwPluginRegistry texDictTKList;
    // -> static struct RwFreeList _rwTextureFreeList;
    // -> static int _rwTextureFreeListPreallocBlocks;
    // -> static int _rwTextureFreeListBlockSize;
    // -> struct RwPluginRegistry textureTKList;
    // -> static char __dbFunctionName[15];
}


