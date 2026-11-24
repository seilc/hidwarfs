/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GRenderer\GRenderer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805B0EC0 -> 0x805B1A04
*/
enum ResizeImageType {
    ResizeRgbToRgb = 0,
    ResizeRgbaToRgba = 1,
    ResizeRgbToRgba = 2,
    ResizeGray = 3,
};
class Cxform Identity; // size: 0x20, address: 0x80871D90
// Range: 0x805B19D0 -> 0x805B1A04
static void __sinit_\GRenderer_cpp() {
    // References
    // -> class Cxform Identity;
}
// Range: 0x805B0EC0 -> 0x805B0EF0
void * GRenderer::Cxform::Cxform(class Cxform * this /* r31 */) {
}
// signature: GRenderer::Cxform::Concatenate(const GRenderer::Cxform &)
// Range: 0x805B0EF0 -> 0x805B0F84
void GRenderer::Cxform::Concatenate() {
}
// signature: GRenderer::Cxform::Transform(const GColor) const
// Range: 0x805B0F90 -> 0x805B1118
class GColor GRenderer::Cxform::Transform() const {
}
// signature: GRenderer::Cxform::Format(char *) const
// Range: 0x805B1120 -> 0x805B115C
void GRenderer::Cxform::Format(class Cxform * this /* r6 */) const {
}
// Range: 0x805B1160 -> 0x805B118C
void GRenderer::Cxform::SetIdentity() {
}
// Range: 0x805B1190 -> 0x805B1208
bool GRenderer::Cxform::IsIdentity() const {
}
// signature: GPixelFilterBilinearRGBA32(unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, int, int)
// Range: 0x805B1790 -> 0x805B18C8
static void GPixelFilterBilinearRGBA32() {
    // Local variables
    int weight; // r11
}
// signature: GPixelFilterBilinearRGB24(unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, int, int)
// Range: 0x805B18D0 -> 0x805B19CC
static void GPixelFilterBilinearRGB24() {
    // Local variables
    int weight; // r11
}
// signature: GPixelFilterBilinearRGBtoRGBA32(unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, int, int)
// Range: 0x805B1680 -> 0x805B1784
static void GPixelFilterBilinearRGBtoRGBA32() {
}
// signature: GPixelFilterBilinearGray8(unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, int, int)
// Range: 0x805B1630 -> 0x805B1680
static void GPixelFilterBilinearGray8() {
}
// Range: 0x805B1320 -> 0x805B1628
static void GImageResizeFilter2x2<void (*)(unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, const unsigned char *, int, int)>(unsigned char * pDst /* r16 */, int dstWidth /* r17 */, int dstHeight /* r18 */, int dstPitch /* r1+0x8 */, int dstBpp /* r19 */, unsigned char * pSrc /* r20 */, int srcWidth /* r15 */, int srcHeight /* r1+0xC */, int srcPitch /* r1+0x78 */, int srcBpp /* r21 */, void (* filter)(unsigned char * pDst, unsigned char * pSrc1, unsigned char * pSrc2, unsigned char * pSrc3, unsigned char * pSrc4, int xFract, int yFract) /* r22 */) {
    // Local variables
    class GPodVector srcCoordX; // r1+0x10
    int x; // r0
    int y; // r14
    unsigned char * pDst2; // r0

    {
        // Range: 0x805B1458 -> 0x805B1458
        // Local variables
        int srcWidth1; // r23
        int x2; // r0
        int x1; // r5
        int xFract; // r8
        int xInt; // r3
        unsigned char * pDst3; // r24
        unsigned char * pSrcRow2; // r25
        unsigned char * pSrcRow1; // r15
        int yInt; // r3
        int yFract; // r26
    }
}
// signature: GRenderer::ResizeImage(unsigned char *, int, int, int, const unsigned char *, int, int, int, GRenderer::ResizeImageType)
// Range: 0x805B1210 -> 0x805B1320
void GRenderer::ResizeImage(int srcWidth /* r31 */, int srcHeight /* r12 */, enum ResizeImageType type /* r0 */) {
}
