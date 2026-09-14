/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\baimage.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80445A20 -> 0x804486C0
*/
static struct RwPluginRegistry imageTKList; // size: 0x18, address: 0x80557198
static int _rwImageFreeListBlockSize; // size: 0x4, address: 0x80D68940
static int _rwImageFreeListPreallocBlocks; // size: 0x4, address: 0x80D68944
static int _rwImageFormatFreeListPreallocBlocks; // size: 0x4, address: 0x80D68948
static char __dbFunctionName[13]; // size: 0xD, address: 0x804EDA58
static struct RwModuleInfo imageModule; // size: 0x8, address: 0x80D6C380
static struct RwFreeList _rwImageFreeList; // size: 0x30, address: 0x80D5D840
static struct RwFreeList _rwImageFormatFreeList; // size: 0x30, address: 0x80D5D870
// Range: 0x80445A20 -> 0x80445D64
void * _rwImageOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static struct RwModuleInfo imageModule;
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static struct RwFreeList _rwImageFormatFreeList;
    // -> static int _rwImageFormatFreeListPreallocBlocks;
    // -> static int _rwImageFreeListBlockSize;
    // -> static struct RwFreeList _rwImageFreeList;
    // -> static int _rwImageFreeListPreallocBlocks;
    // -> static struct RwPluginRegistry imageTKList;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EDA65
// total size: 0x34
struct rwImageFormat {
    // Members
    char lcExtension[20]; // offset 0x0, size 0x14
    char ucExtension[20]; // offset 0x14, size 0x14
    struct RwImage * (* readImage)(char *); // offset 0x28, size 0x4
    struct RwImage * (* writeImage)(struct RwImage *, char *); // offset 0x2C, size 0x4
    struct rwImageFormat * nextFormat; // offset 0x30, size 0x4
};
// Range: 0x80445D64 -> 0x80445F50
void * _rwImageClose(void * instance /* r1+0x8 */) {
    // Local variables
    struct rwImageFormat * formatToDestroy; // r31

    // References
    // -> static struct RwModuleInfo imageModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EDA73
// Range: 0x80445F50 -> 0x8044615C
static unsigned char * ImageGetScratchMem(int size /* r31 */) {
    // Local variables
    unsigned char * newBuf; // r30
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static struct RwModuleInfo imageModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804EDA86
// Range: 0x8044615C -> 0x80446250
void _rwImageGammaCorrectArrayOfRGBA(struct RwRGBA * rgbaOut /* r30 */, struct RwRGBA * rgbaIn /* r31 */, int numEls /* r28 */) {
    // Local variables
    unsigned char * gammaTab; // r29

    // References
    // -> static char __dbFunctionName[32];
    // -> static struct RwModuleInfo imageModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EDAA6
// Range: 0x80446250 -> 0x804463AC
struct RwImage * RwImageCreate(int width /* r1+0x8 */, int height /* r1+0xC */, int depth /* r29 */) {
    // Local variables
    struct RwImage * image; // r31

    // References
    // -> static struct RwPluginRegistry imageTKList;
    // -> static struct RwModuleInfo imageModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EDAB4
// Range: 0x804463AC -> 0x804464C4
int RwImageDestroy(struct RwImage * image /* r31 */) {
    // References
    // -> static struct RwModuleInfo imageModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[15];
    // -> static struct RwPluginRegistry imageTKList;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EDAC3
// Range: 0x804464C4 -> 0x8044657C
struct RwImage * RwImageSetPalette(struct RwImage * image /* r1+0x8 */, struct RwRGBA * palette /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EDAD5
// Range: 0x8044657C -> 0x8044661C
int RwImageGetWidth(const struct RwImage * image /* r31 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EDAE5
// Range: 0x8044661C -> 0x804466BC
int RwImageGetHeight(const struct RwImage * image /* r31 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EDAF6
// Range: 0x804466BC -> 0x8044675C
int RwImageGetDepth(const struct RwImage * image /* r31 */) {
    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EDB06
// Range: 0x8044675C -> 0x804467FC
int RwImageGetStride(const struct RwImage * image /* r31 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EDB17
// Range: 0x804467FC -> 0x8044689C
unsigned char * RwImageGetPixels(const struct RwImage * image /* r31 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EDB28
// Range: 0x8044689C -> 0x8044693C
struct RwRGBA * RwImageGetPalette(const struct RwImage * image /* r31 */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EDB3A
// Range: 0x8044693C -> 0x80446BA4
struct RwImage * RwImageAllocatePixels(struct RwImage * image /* r31 */) {
    // Local variables
    unsigned int imageDepth; // r28
    int imagePalette; // r27
    unsigned int paletteSize; // r22
    unsigned int pixelsSize; // r26
    unsigned int totalSize; // r29
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[22];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EDB50
// Range: 0x80446BA4 -> 0x80446CB0
struct RwImage * RwImageFreePixels(struct RwImage * image /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EDB62
// Range: 0x80446CB0 -> 0x80446E98
struct RwImage * RwImageMakeMask(struct RwImage * image /* r31 */) {
    // Local variables
    int i; // r30
    int palSize; // r23
    struct RwRGBA * rpPal; // r29
    int nOpacity; // r26
    unsigned char * cpSpan; // r24
    int j; // r27
    struct RwRGBA * rpCur; // r28
    int nOpacity; // r25

    // References
    // -> static char __dbFunctionName[16];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EDB72
// Range: 0x80446E98 -> 0x8044729C
struct RwImage * RwImageApplyMask(struct RwImage * image /* r31 */, const struct RwImage * mask /* r30 */) {
    // Local variables
    struct RwError _rwErrorCode; // r1+0x10
    struct RwImage * tempImage; // r27
    int i; // r22
    int j; // r26
    const unsigned char * cpSrc; // r25
    const struct RwRGBA * rpPal; // r20
    unsigned char * cpDst; // r21
    struct RwRGBA * dstRGB; // r28
    const unsigned char * srcInd; // r24
    const struct RwRGBA * srcRGB; // r23
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EDB83
// Range: 0x8044729C -> 0x804474C0
static char * ImagePathForAllFullNames(const char * filename /* r29 */, int extraBytes /* r23 */, char * (* callBack)(char *, void *) /* r24 */, void * data /* r25 */) {
    // Local variables
    int pathsize; // r26
    char * fullname; // r30
    char * pathElement; // r31
    char * nextPathElement; // r28
    int pathElementLength; // r27

    // References
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo imageModule;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EDB9C
// Range: 0x804474C0 -> 0x8044759C
static char * ImageAttempRead(char * pathname /* r30 */, void * data /* r1+0x8 */) {
    // Local variables
    struct _imageReadData * imageData; // r31

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EDBAC
// total size: 0x8
struct _imageReadData {
    // Members
    struct RwImage * (* readImage)(char *); // offset 0x0, size 0x4
    struct RwImage * image; // offset 0x4, size 0x4
};
// Range: 0x8044759C -> 0x804477B0
struct RwImage * RwImageRead(const char * imageName /* r23 */) {
    // Local variables
    const char * lastSeparator; // r31
    const char * testSeparator; // r29
    const char * extender; // r28
    struct rwImageFormat * imageFormat; // r30
    struct _imageReadData imageData; // r1+0x8

    // References
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo imageModule;
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EDBB8
// Range: 0x804477B0 -> 0x804478F8
static char * ImageDetermineExtender(char * pathname /* r29 */, void * data /* r1+0x8 */) {
    // Local variables
    char * * extender; // r30
    struct rwImageFormat * imageFormat; // r31
    char * extPos; // r27

    // References
    // -> void * RwEngineInstance;
    // -> static struct RwModuleInfo imageModule;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EDBCF
// Range: 0x804478F8 -> 0x804479BC
char * RwImageFindFileType(const char * imageName /* r30 */) {
    // Local variables
    char * extender; // r1+0x8

    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EDBE3
// Range: 0x804479BC -> 0x80447B18
struct RwImage * RwImageReadMaskedImage(const char * imageName /* r27 */, const char * maskName /* r29 */) {
    // Local variables
    struct RwImage * image; // r31
    struct RwImage * mask; // r30

    // References
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EDBFA
// Range: 0x80447B18 -> 0x80447BE4
struct RwRGBA * RwRGBASetFromPixel(struct RwRGBA * rgbOut /* r31 */, unsigned int pixelValue /* r1+0x8 */, int rasterFormat /* r1+0xC */) {
    // Local variables
    unsigned int nInPixel; // r1+0x10

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EDC0D
// Range: 0x80447BE4 -> 0x80447D70
static int ImageStraightCopy(struct RwImage * ipDestin /* r31 */, const struct RwImage * ipSource /* r30 */) {
    // Local variables
    int i; // r28
    int nSpanLength; // r25
    const unsigned char * cpSrc; // r27
    unsigned char * cpDst; // r26

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EDC1F
// Range: 0x80447D70 -> 0x80448040
static int ImageConvertDepth(struct RwImage * ipDestin /* r30 */, const struct RwImage * ipSource /* r31 */) {
    // Local variables
    int result; // r24
    int i; // r28
    int j; // r26
    int width; // r23
    int height; // r22
    unsigned int switchKey; // r19
    unsigned char * cpDst; // r25
    const struct RwRGBA * rpSrcPalette; // r21
    const unsigned char * cpSrc; // r27
    struct RwRGBA * rpDst; // r20
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EDC31
// Range: 0x80448040 -> 0x804481C8
struct RwImage * RwImageCopy(struct RwImage * destImage /* r31 */, const struct RwImage * sourceImage /* r30 */) {
    // References
    // -> static char __dbFunctionName[12];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EDC3D
// Range: 0x804481C8 -> 0x804484F4
struct RwImage * RwImageGammaCorrect(struct RwImage * image /* r31 */) {
    // Local variables
    struct RwRGBA * pal; // r29
    unsigned int palSize; // r27
    struct RwError _rwErrorCode; // r1+0x18
    unsigned char * curLine; // r30
    int width; // r26
    int height; // r25
    int y; // r28
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo imageModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EDC51
// Range: 0x804484F4 -> 0x804486C0
int RwImageSetGamma(float gammaValue /* f27 */) {
    // Local variables
    float nGammaExp; // f30
    float nGammaInv; // f28
    int i; // r31
    float nT; // f29
    float scaled; // f31
    int quantize; // r30

    // References
    // -> static struct RwModuleInfo imageModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
}


