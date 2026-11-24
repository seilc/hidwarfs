/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxGlyphCache.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804D3C10 -> 0x804DD24C
*/
// total size: 0x11E0
class BlockType {
    // Members
    class GFxGlyphNode Data[127]; // offset 0x0, size 0x11DC
    class BlockType * pNext; // offset 0x11DC, size 0x4
};
// total size: 0x13DC
class BlockType {
    // Members
    class GFxGlyphDynaSlot Data[127]; // offset 0x0, size 0x13D8
    class BlockType * pNext; // offset 0x13D8, size 0x4
};
// total size: 0x14
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class ghash_node value; // offset 0x4, size 0x10
};
// total size: 0x10
class ghash_node {
    // Members
    class GFxGlyphParam first; // offset 0x0, size 0xC
    class GFxGlyphNode * second; // offset 0xC, size 0x4
};
// total size: 0x8
class node_ref {
    // Members
    class GFxGlyphParam * pfirst; // offset 0x0, size 0x4
    class GFxGlyphNode * * psecond; // offset 0x4, size 0x4
};
// total size: 0x14
class GFxImgBlurWrapperX {
    // Members
    class GImage & Img; // offset 0x0, size 0x4
    unsigned int Sx; // offset 0x4, size 0x4
    unsigned int Sy; // offset 0x8, size 0x4
    unsigned int W; // offset 0xC, size 0x4
    unsigned int H; // offset 0x10, size 0x4
};
// total size: 0x14
class GFxImgBlurWrapperY {
    // Members
    class GImage & Img; // offset 0x0, size 0x4
    unsigned int Sx; // offset 0x4, size 0x4
    unsigned int Sy; // offset 0x8, size 0x4
    unsigned int W; // offset 0xC, size 0x4
    unsigned int H; // offset 0x10, size 0x4
};
static unsigned short GFx_StackBlurMul[255]; // size: 0x1FE, address: 0x806E7E78
static unsigned char GFx_StackBlurShr[255]; // size: 0xFF, address: 0x806E8078
struct {} __vt__Q219GFxGlyphRasterCache19TextureEventHandler; // size: 0x14, address: 0x80737E40
// Range: 0x804D3C10 -> 0x804D3C8C
void * GFxGlyphSlotQueue::GFxGlyphSlotQueue() {
}
// Range: 0x804D3D40 -> 0x804D4214
class GFxGlyphNode * GFxGlyphSlotQueue::packGlyph(class GFxGlyphSlotQueue * this /* r26 */, unsigned int w /* r27 */, unsigned int h /* r28 */, class GFxGlyphNode * glyph /* r29 */) {
    {
        // Range: 0x804D3D54 -> 0x804D3DC4
        // Local variables
        class GFxGlyphNode * newGlyph; // r0
    }
    {
        // Range: 0x804D3DC4 -> 0x804D41F8
        // Local variables
        unsigned int dh; // r30
        unsigned int dw; // r31
    }
}
// signature: GFxGlyphSlotQueue::splitGlyph(GFxGlyphDynaSlot *, bool, unsigned int)
// Range: 0x804D4220 -> 0x804D4320
void GFxGlyphSlotQueue::splitGlyph(class GFxGlyphSlotQueue * this /* r31 */, class GFxGlyphDynaSlot * slot /* r27 */, unsigned int w /* r28 */) {
    // Local variables
    class GFxGlyphNode * root; // r30
    class GFxGlyphDynaSlot * newSlot; // r3
    unsigned int newW; // r29
}
// Range: 0x804D4320 -> 0x804D44BC
class GFxGlyphDynaSlot * GFxGlyphSlotQueue::initNewSlot(class GFxGlyphSlotQueue * this /* r27 */, class GFxGlyphBand * band /* r28 */, unsigned int x /* r29 */, unsigned int w /* r30 */) {
}
// Range: 0x804D44C0 -> 0x804D4804
class GFxGlyphNode * GFxGlyphSlotQueue::allocateNewSlot(class GFxGlyphSlotQueue * this /* r27 */, unsigned int w /* r28 */, unsigned int h /* r29 */) {
    {
        // Range: 0x804D4508 -> 0x804D4590
        // Local variables
        unsigned int bandInTexture; // r5
    }
    {
        // Range: 0x804D45A8 -> 0x804D47E8
        // Local variables
        class GFxGlyphDynaSlot * slot; // r30
    }
}
// Range: 0x804D4810 -> 0x804D5110
void GFxGlyphSlotQueue::releaseGlyphTree(class GFxGlyphSlotQueue * this /* r30 */, class GFxGlyphNode * glyph /* r31 */) {
}
// Range: 0x804D58B0 -> 0x804D5C3C
void GFxGlyphSlotQueue::releaseSlot(class GFxGlyphSlotQueue * this /* r27 */, class GFxGlyphDynaSlot * slot /* r28 */) {
    // Local variables
    class GFxGlyphBand * band; // r5
}
// Range: 0x804D5C40 -> 0x804D5D64
void GFxGlyphSlotQueue::mergeSlots(class GFxGlyphSlotQueue * this /* r26 */, class GFxGlyphDynaSlot * from /* r27 */, class GFxGlyphDynaSlot * to /* r28 */, unsigned int w /* r29 */) {
    // Local variables
    class GFxGlyphDynaSlot * slot; // r30
}
// Range: 0x804D5D70 -> 0x804D5F78
class GFxGlyphDynaSlot * GFxGlyphSlotQueue::mergeSlotWithNeighbor(class GFxGlyphSlotQueue * this /* r25 */, class GFxGlyphDynaSlot * slot /* r26 */) {
    // Local variables
    class GFxGlyphBand * band; // r31
    class GFxGlyphDynaSlot * target; // r30
    bool toRight; // r29

    {
        // Range: 0x804D5DAC -> 0x804D5F5C
        // Local variables
        bool mergeRect; // r6
        unsigned int w; // r3
        unsigned int x; // r0
        class GFxGlyphNode * targetGlyph; // r27
        class GFxGlyphNode * slotGlyph; // r28
    }
}
// Range: 0x804D5F80 -> 0x804D67A0
class GFxGlyphNode * GFxGlyphSlotQueue::extrudeOldSlot(class GFxGlyphSlotQueue * this /* r27 */, unsigned int w /* r28 */, unsigned int h /* r29 */) {
    // Local variables
    class GFxGlyphDynaSlot * slot; // r31
    unsigned int i; // r25
    unsigned int queueLimit; // r24

    {
        // Range: 0x804D5FAC -> 0x804D5FAC
        // Local variables
        class GFxGlyphDynaSlot * mergedWith; // r30
    }
    {
        // Range: 0x804D6350 -> 0x804D6350
        // Local variables
        class GFxGlyphBand * band; // r9
        class GFxGlyphDynaSlot * to; // r30
        unsigned int w2; // r6
    }
}
// signature: GFxGlyphSlotQueue::FindGlyph(const GFxGlyphParam &)
// Range: 0x804D67A0 -> 0x804D6A14
class GFxGlyphNode * GFxGlyphSlotQueue::FindGlyph() {
}
// Range: 0x804D6A20 -> 0x804D6F74
class GFxGlyphNode * GFxGlyphSlotQueue::AllocateGlyph(class GFxGlyphSlotQueue * this /* r30 */, class GFxGlyphParam & gp /* r31 */, unsigned int w /* r25 */, unsigned int h /* r26 */) {
    // Local variables
    class GFxGlyphNode * glyph; // r1+0x8
}
// Range: 0x804D8760 -> 0x804D878C
void GFxGlyphSlotQueue::UnlockAllGlyphs() {
    // Local variables
    class GFxGlyphDynaSlot * slot; // r4
}
// Range: 0x804D8790 -> 0x804D8FCC
class GFxGlyphNode * GFxGlyphSlotQueue::findFontInSlot(class GFxGlyphNode * glyph /* r29 */, class GFxFontResource * font /* r30 */) {
}
// Range: 0x804D8FD0 -> 0x804D9070
void GFxGlyphSlotQueue::CleanUpFont(class GFxGlyphSlotQueue * this /* r27 */, class GFxFontResource * font /* r28 */) {
    // Local variables
    class GFxGlyphDynaSlot * slot; // r29
}
// Range: 0x804D9070 -> 0x804D93E4
void * GFxGlyphRasterCache::GFxGlyphRasterCache(class GFxGlyphRasterCache * this /* r31 */) {
    {
        // Range: 0x804D9318 -> 0x804D93A0
        // Local variables
        unsigned int i; // r0
    }
}
// Range: 0x804D9490 -> 0x804D99FC
void * GFxGlyphRasterCache::~GFxGlyphRasterCache(class GFxGlyphRasterCache * this /* r29 */) {
}
// Range: 0x804D9A00 -> 0x804D9B78
void GFxGlyphRasterCache::RemoveAll(class GFxGlyphRasterCache * this /* r31 */) {
}
// Range: 0x804D9B80 -> 0x804D9FE4
void GFxGlyphRasterCache::Init(class GFxGlyphRasterCache * this /* r24 */, unsigned int texWidth /* r25 */, unsigned int texHeight /* r26 */, unsigned int maxNumTextures /* r27 */, unsigned int maxSlotHeight /* r28 */, unsigned int slotPadding /* r29 */, unsigned int texUpdWidth /* r30 */, unsigned int texUpdHeight /* r31 */) {
    // Local variables
    unsigned int w; // r4
    unsigned int h; // r0
    unsigned int sw; // r5
    unsigned int sh; // r6
}
// Range: 0x804D9FF0 -> 0x804DA08C
void GFxGlyphRasterCache::releaseAllTextures(class GFxGlyphRasterCache * this /* r27 */) {
    {
        // Range: 0x804DA010 -> 0x804DA064
        // Local variables
        unsigned int i; // r28
    }
}
// signature: GFxGlyphRasterCache::CleanUpFont(const GFxFontResource *)
// Range: 0x804DA090 -> 0x804DA098
void GFxGlyphRasterCache::CleanUpFont() {
}
// Range: 0x804DA0A0 -> 0x804DA78C
void GFxGlyphRasterCache::stackBlur(class GFxGlyphRasterCache * this /* r22 */, class GImage & img /* r23 */, unsigned int sx /* r24 */, unsigned int sy /* r14 */, unsigned int w /* r1+0x8 */, unsigned int h /* r1+0xC */, unsigned int rx /* r25 */, unsigned int ry /* r26 */) {
    // Local variables
    unsigned int x; // r0
    unsigned int y; // r10
    unsigned int xp; // r4
    unsigned int yp; // r7
    unsigned int i; // r11
    unsigned int stackPtr; // r5
    unsigned int stackStart; // r8
    unsigned char * srcPixPtr; // r12
    unsigned char * dstPixPtr; // r6
    unsigned int pix; // r21
    unsigned int stackPix; // r0
    unsigned int sum; // r20
    unsigned int sumIn; // r19
    unsigned int sumOut; // r18
    unsigned int wm; // r31
    unsigned int hm; // r30
    unsigned int div; // r29
    unsigned int mulSum; // r28
    unsigned int shrSum; // r27

    {
        // Range: 0x804DA424 -> 0x804DA774
        // Local variables
        int stride; // r27
    }

    // References
    // -> static unsigned char GFx_StackBlurShr[255];
    // -> static unsigned short GFx_StackBlurMul[255];
}
// Range: 0x804DA790 -> 0x804DB038
void GFx_RecursiveBlur<GFxImgBlurWrapperX, GPodVector<float>, GPodVector<unsigned char>>(class GFxImgBlurWrapperX & img /* r25 */, float radius /* f26 */, class GPodVector & sum /* r19 */, class GPodVector & buf /* r26 */) {
    // Local variables
    int w; // r31
    int h; // r30
    int wb; // r29
    int x; // r4
    int y; // r28
    float s; // f2
    float q; // f0
    float q2; // f8
    float q3; // f9
    float b0; // f5
    float b2; // f30
    float b3; // f29
    float b4; // f28
    float b1; // f27
    float * sum2; // r27
}
// Range: 0x804DB040 -> 0x804DB8E4
void GFx_RecursiveBlur<GFxImgBlurWrapperY, GPodVector<float>, GPodVector<unsigned char>>(class GFxImgBlurWrapperY & img /* r30 */, float radius /* f28 */, class GPodVector & sum /* r24 */, class GPodVector & buf /* r31 */) {
    // Local variables
    int w; // r29
    int h; // r28
    int wb; // r27
    int x; // r9
    int y; // r12
    float s; // f2
    float q; // f0
    float q2; // f8
    float q3; // f9
    float b0; // f5
    float b2; // f31
    float b3; // f30
    float b4; // f29
    float b1; // f28
    float * sum2; // r26
}
// signature: GFxGlyphRasterCache::strengthenImage(GImage &, unsigned int, unsigned int, unsigned int, unsigned int, float, int)
// Range: 0x804DB8F0 -> 0x804DB9A0
void GFxGlyphRasterCache::strengthenImage() {
    {
        // Range: 0x804DB8F0 -> 0x804DB998
        // Local variables
        unsigned int y; // r12
        unsigned int x; // r0

        {
            // Range: 0x804DB900 -> 0x804DB98C
            // Local variables
            unsigned char * p; // r10

            {
                // Range: 0x804DB900 -> 0x804DB98C
                // Local variables
                int v; // r0
            }
        }
    }
}
// signature: GFxGlyphRasterCache::CalcGlyphParam(float, unsigned int, float, float, const GFxGlyphParam &, GFxGlyphParam *, unsigned short *, unsigned short *) const
// Range: 0x804DB9A0 -> 0x804DBCF8
void GFxGlyphRasterCache::CalcGlyphParam(class GFxGlyphParam & textParam /* r28 */, class GFxGlyphParam * glyphParam /* r29 */, unsigned short * subpixelSize /* r30 */, unsigned short * glyphScale /* r31 */) const {
    // Local variables
    float k; // f1
    float blurX; // f6
    float blurY; // f31
    float outline; // f4
    float d; // f8
    float height; // f1
    float maxHeight; // f7

    {
        // Range: 0x804DBC08 -> 0x804DBCD0
        // Local variables
        unsigned int intBlurY; // r3
    }
}
// signature: GFxGlyphRasterCache::rasterizeAndPack(GRenderer *, const GFxGlyphParam &, const GFxShapeCharacterDef *, unsigned int, GFxLog *)
// Range: 0x804DBD00 -> 0x804DCC84
class GFxGlyphNode * GFxGlyphRasterCache::rasterizeAndPack(class GFxGlyphRasterCache * this /* r15 */, class GRenderer * ren /* r16 */, class GFxGlyphParam & gp /* r17 */, unsigned int subpixelSize /* r19 */, class GFxLog * log /* r18 */) {
    // Local variables
    unsigned int i; // r20
    unsigned int j; // r21
    unsigned int intBlurX; // r28
    unsigned int intBlurY; // r27
    float dx; // r31
    float dy; // f30
    int lowerCaseTop; // r22
    int upperCaseTop; // r23
    bool autoFit; // r20
    class GFxGlyphNode * glyph; // r26
    int padX; // r25
    int padY; // r24
    int imgX1; // r23
    int imgX2; // r14
    int imgY1; // r22
    int imgY2; // r20
    bool cellsToSweep; // r1+0x58
    unsigned int imgW; // r21
    unsigned int imgH; // r20
    unsigned int imgX; // r19
    unsigned int imgY; // r18

    {
        // Range: 0x804DBED0 -> 0x804DC2AC
        // Local variables
        float k; // f31
        int nominalSize; // r3

        {
            // Range: 0x804DC094 -> 0x804DC29C
            {
                // Range: 0x804DC094 -> 0x804DC29C
                // Local variables
                class VertexType v; // r1+0x8
            }
        }
    }
    {
        // Range: 0x804DC778 -> 0x804DCB48
        // Local variables
        int bias; // r0
    }

    // References
    // -> float GlyphBoundBox;
}
// Range: 0x804DCC90 -> 0x804DCEB8
void GFxGlyphRasterCache::UpdateTextures(class GFxGlyphRasterCache * this /* r26 */, class GRenderer * ren /* r27 */) {
    // Local variables
    unsigned int i; // r28
    unsigned int j; // r10

    {
        // Range: 0x804DCCB4 -> 0x804DCE7C
        {
            // Range: 0x804DCCB8 -> 0x804DCE70
            // Local variables
            unsigned int numRects; // r5
        }
    }
}
// Range: 0x804DCEC0 -> 0x804DCF70
class GFxGlyphNode * GFxGlyphRasterCache::GetGlyph(class GFxGlyphRasterCache * this /* r26 */, class GRenderer * ren /* r27 */, class GFxGlyphParam & gp /* r28 */, class GFxShapeCharacterDef * shape /* r29 */, unsigned int subpixelSize /* r30 */, class GFxLog * log /* r31 */) {
    // Local variables
    class GFxGlyphNode * glyph; // r0
}
