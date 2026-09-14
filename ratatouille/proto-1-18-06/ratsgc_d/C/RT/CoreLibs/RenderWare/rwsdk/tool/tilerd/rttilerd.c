/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\tool\tilerd\rttilerd.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8047197C -> 0x80472854
*/
static char __dbFunctionName[25]; // size: 0x19, address: 0x804EFCF8
// Range: 0x8047197C -> 0x80471B48
static struct RtTileGlobalVars * _tkImageTileSetUpGlobals(struct RtTileGlobalVars * tkGlobals /* r31 */, int iWidth /* r23 */, int iHeight /* r26 */, int tWidth /* r24 */, int tHeight /* r25 */, void * pData /* r1+0x8 */) {
    // Local variables
    struct RtTileGlobalVars * results; // r22
    struct RwSunRasterHeader srHeader; // r1+0x10
    int i; // r29
    int stride; // r28
    int * npData; // r30
    unsigned char caTmp[4]; // r1+0xC
    unsigned char cTmp; // r27

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EFD11
// total size: 0x34
struct RtTileGlobalVars {
    // Members
    int tileRenderType; // offset 0x0, size 0x4
    char * imageFilename; // offset 0x4, size 0x4
    struct RwStream * imageStream; // offset 0x8, size 0x4
    int imageWidth; // offset 0xC, size 0x4
    int imageHeight; // offset 0x10, size 0x4
    int tileWidth; // offset 0x14, size 0x4
    int tileHeight; // offset 0x18, size 0x4
    int imageTileX; // offset 0x1C, size 0x4
    int imageTileY; // offset 0x20, size 0x4
    int imageBufferSize; // offset 0x24, size 0x4
    int scaleOldWidth; // offset 0x28, size 0x4
    int scaleOldHeight; // offset 0x2C, size 0x4
    int * imageBuffer; // offset 0x30, size 0x4
};
// Range: 0x80471B48 -> 0x804725CC
static struct RwCamera * _tkTileRender(struct RwCamera * camera /* r27 */, int iWidth /* r28 */, int iHeight /* r29 */, int tWidth /* r24 */, int tHeight /* r25 */, struct RwCamera * (* renderCallBack)(struct RwCamera *, int, int, void *) /* r1+0x8 */, struct RwImage * (* archiveCallBack)(struct RwImage *, int, int, void *) /* r1+0xC */, void * pData /* r1+0x10 */, int tileRenderType /* r1+0x1B8 */) {
    // Local variables
    struct RwCamera * result; // r31
    struct RwCamera * tileCamera; // r30
    struct RwImage * imageTile; // r21
    struct RwRaster * camRaster; // r1+0x40
    struct RwRaster * camZRaster; // r1+0x3C
    struct RwRaster * subRaster; // r23
    struct RwRaster * subZRaster; // r19
    enum RwCameraProjection rwProjection; // r1+0x38
    struct RwFrame * newFrame; // r22
    struct RwFrame * oldFrame; // r1+0x34
    struct RwMatrixTag * oldLTM; // r1+0x30
    struct RwMatrixTag * newMatrix; // r18
    struct RwV2d newOffset; // r1+0x6C
    struct RwV2d oldOffset; // r1+0x64
    struct RwV2d oldWindow; // r1+0x5C
    struct RwV2d newWindow; // r1+0x54
    struct RwV2d tmpWindow; // r1+0x4C
    struct RwRect tileRect; // r1+0x80
    int nX; // r20
    int nY; // r17
    int tileScaleX; // r1+0x2C
    int tileScaleY; // r1+0x28
    float imageScaleX; // r1+0x24
    float imageScaleY; // r1+0x20
    float invTileScaleX; // f25
    float invTileScaleY; // f24
    float imageXProgress; // f31
    float imageYProgress; // f30
    float oldRatio; // f29
    float newRatio; // f28
    const struct RwV2d * oldView; // r26
    int rasWidth; // r1+0x1C
    int rasHeight; // r1+0x18
    struct RtTileGlobalVars tkGlobals; // r1+0x90
    void * usePData; // r1+0x14
    struct RwV2d tmpV2d; // r1+0x44
    struct RwV3d tmpV3d; // r1+0x74

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EFD1F
// Range: 0x804725CC -> 0x804726B4
struct RwCamera * RtTileRender(struct RwCamera * camera /* r1+0x10 */, int iWidth /* r1+0x14 */, int iHeight /* r1+0x18 */, int tWidth /* r1+0x1C */, int tHeight /* r1+0x20 */, struct RwCamera * (* renderCallBack)(struct RwCamera *, int, int, void *) /* r28 */, struct RwImage * (* archiveCallBack)(struct RwImage *, int, int, void *) /* r29 */, void * pData /* r1+0x24 */) {
    // Local variables
    struct RwCamera * result; // r30

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EFD2C
// Range: 0x804726B4 -> 0x80472854
struct RwImage * RtTileDefaultArchive(struct RwImage * image /* r21 */, int x /* r22 */, int y /* r1+0x8 */, void * pData /* r1+0xC */) {
    // Local variables
    int i; // r27
    int j; // r26
    int iX; // r25
    int iY; // r24
    int inStride; // r20
    int outStride; // r19
    char * in; // r23
    char * out; // r28
    char * outPix; // r29
    struct RwRGBA * inPix; // r30
    struct RtTileGlobalVars * tkGlobals; // r31

    // References
    // -> static char __dbFunctionName[21];
}

