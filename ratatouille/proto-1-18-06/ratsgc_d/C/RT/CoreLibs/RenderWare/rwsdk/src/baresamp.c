/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\baresamp.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8044A830 -> 0x8044B154
*/
static char __dbFunctionName[21]; // size: 0x15, address: 0x804EDE48
// Range: 0x8044A830 -> 0x8044AA94
static void ImageResampleGetSpan(const struct RwImage * _image /* r26 */, long _nStartX /* r28 */, long _nEndX /* r27 */, long _nY /* r1+0x8 */, struct RwRGBAReal * _rrpCol /* r31 */) {
    // Local variables
    float nArea; // f30
    float nScale; // f31
    struct RwRGBA * rpSpan; // r30
    struct RwRGBAReal rrAdd; // r1+0xC
    long nPos; // r29

    // References
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EDE5D
// Range: 0x8044AA94 -> 0x8044AD00
static void ImageResampleGetAvgPixel(const struct RwImage * _image /* r27 */, long _nXStart /* r25 */, long _nXEnd /* r26 */, long _nYStart /* r29 */, long __nYEnd /* r28 */, struct RwRGBAReal * _rrpCol /* r31 */) {
    // Local variables
    float nArea; // f30
    float nScale; // f31
    struct RwRGBAReal rrAdd; // r1+0x8
    long nPos; // r30

    // References
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EDE76
// Range: 0x8044AD00 -> 0x8044AF3C
struct RwImage * RwImageResample(struct RwImage * dstImage /* r31 */, const struct RwImage * srcImage /* r30 */) {
    // Local variables
    int nX; // r28
    int nY; // r27
    long nXPos; // r26
    long nXDelta; // r24
    long nYPos; // r25
    long nYDelta; // r23
    int dstWidth; // r22
    int dstHeight; // r21
    int srcWidth; // r20
    int srcHeight; // r19
    struct RwRGBA * const rpDstSpan; // r18
    struct RwRGBAReal rrCol; // r1+0x8

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EDE86
// Range: 0x8044AF3C -> 0x8044B154
struct RwImage * RwImageCreateResample(const struct RwImage * srcImage /* r29 */, int width /* r26 */, int height /* r27 */) {
    // Local variables
    struct RwImage * dstImage; // r31
    struct RwImage * ipUse; // r30

    // References
    // -> static char __dbFunctionName[22];
}


