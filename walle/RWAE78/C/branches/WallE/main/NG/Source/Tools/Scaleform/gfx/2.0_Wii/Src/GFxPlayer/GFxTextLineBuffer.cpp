/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxTextLineBuffer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8059DE50 -> 0x805A2924
*/
enum LineType {
    Line8 = 0,
    Line32 = 1,
};
// total size: 0x10
class ConstIterator {
    // Members
    class GFxTextLineBuffer * pLineBuffer; // offset 0x0, size 0x4
    unsigned int CurrentPos; // offset 0x4, size 0x4
    float YOffset; // offset 0x8, size 0x4
    bool StaticText; // offset 0xC, size 0x1
};
// total size: 0x1
class LineIndexComparator {};
// total size: 0x1
class LineYOffsetComparator {};
static unsigned short indices[6]; // size: 0xC, address: 0x806E8FD8
static short EmptyCharBox[10]; // size: 0x14, address: 0x806E8FE4
static class LineIndexComparator cmp; // size: 0x1, address: 0x808DEC60
// Range: 0x8059DE50 -> 0x8059DF14
class Line * GFxTextLineBuffer::TextLineAllocator::AllocLine(unsigned int size /* r30 */, enum LineType lineType /* r31 */) {
    // Local variables
    class Line * pline; // r3
}
// Range: 0x8059DF20 -> 0x8059DF60
void GFxTextLineBuffer::TextLineAllocator::FreeLine(class Line * ptr /* r31 */) {
}
// Range: 0x8059DF60 -> 0x8059E098
void GFxTextLineBuffer::ReleasePartOfLine(class GlyphEntry * pglyphs /* r28 */, unsigned int n /* r29 */, class GFxFormatDataEntry * pnextFormatData /* r30 */) {
    {
        // Range: 0x8059DF80 -> 0x8059E070
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x8059DF80 -> 0x8059E070
            // Local variables
            class GlyphEntry * pglyph; // r0

            {
                // Range: 0x8059DF94 -> 0x8059E038
                // Local variables
                class GFxFontHandle * pfont; // r27
            }
            {
                // Range: 0x8059E048 -> 0x8059E070
                // Local variables
                class GFxTextImageDesc * pimage; // r3
            }
        }
    }
}
// Range: 0x8059E0A0 -> 0x8059E13C
void GFxTextLineBuffer::GlyphInserter::ResetTo(class GlyphInserter * this /* r30 */, class GlyphInserter & savedPos /* r31 */) {
}
// Range: 0x8059E140 -> 0x8059E338
void GFxTextLineBuffer::GlyphIterator::UpdateDesc(class GlyphIterator * this /* r31 */) {
}
// Range: 0x8059E340 -> 0x8059E388
class GFxFormatDataEntry * GFxTextLineBuffer::Line::GetFormatData() const {
    // Local variables
    unsigned char * p; // r3
    unsigned long pi; // r0
}
// Range: 0x8059E390 -> 0x8059E454
void GFxTextLineBuffer::Line::Release(class Line * this /* r31 */) {
}
// Range: 0x8059E460 -> 0x8059E6DC
void * GFxTextLineBuffer::GFxTextLineBuffer(class GFxTextLineBuffer * this /* r31 */) {
}
// Range: 0x8059E6E0 -> 0x8059E92C
void * GFxTextLineBuffer::~GFxTextLineBuffer(class GFxTextLineBuffer * this /* r30 */) {
}
// signature: GFxTextLineBuffer::GetLine(unsigned int)
// Range: 0x8059E930 -> 0x8059E964
class Line * GFxTextLineBuffer::GetLine(class GFxTextLineBuffer * this /* r6 */) {
    // Local variables
    class Line * pline; // r0
}
// signature: GFxTextLineBuffer::DrawMask(GFxDisplayContext &, const GMatrix2D &, const GRect<float> &, GRenderer::SubmitMaskMode)
// Range: 0x8059E970 -> 0x8059EBE4
bool GFxTextLineBuffer::DrawMask(class GMatrix2D & mat /* r29 */, class GRect & rect /* r30 */) {
    // Local variables
    class GPoint coords[4]; // r1+0x68
    class GMatrix2D m; // r1+0x50
    class GRect newRect; // r1+0x40
    class VertexXY16i icoords[4]; // r1+0x30

    // References
    // -> static unsigned short indices[6];
}
// signature: GFxTextLineBuffer::CalcLineSize(unsigned int, unsigned int, GFxTextLineBuffer::LineType)
// Range: 0x8059EBF0 -> 0x8059EC20
unsigned int GFxTextLineBuffer::CalcLineSize() {
    // Local variables
    unsigned int sz; // r3
}
// signature: GFxTextLineBuffer::InsertNewLine(unsigned int, unsigned int, unsigned int, GFxTextLineBuffer::LineType)
// Range: 0x8059EC20 -> 0x8059EE94
class Line * GFxTextLineBuffer::InsertNewLine(class GFxTextLineBuffer * this /* r28 */, unsigned int lineIdx /* r29 */, unsigned int glyphCount /* r30 */, enum LineType lineType /* r27 */) {
}
// Range: 0x8059EEA0 -> 0x8059F0AC
void GFxTextLineBuffer::RemoveLines(class GFxTextLineBuffer * this /* r27 */, unsigned int lineIdx /* r28 */, unsigned int num /* r29 */) {
    // Local variables
    class Iterator it; // r1+0x18

    {
        // Range: 0x8059EED8 -> 0x8059EFAC
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x8059F0B0 -> 0x8059F230
unsigned int GFxTextLineBuffer::GetVScrollOffsetInTwips() const {
    // Local variables
    float yOffset; // f1

    {
        // Range: 0x8059F0CC -> 0x8059F21C
        // Local variables
        class ConstIterator linesIt; // r1+0x8
        class ConstIterator visIt; // r1+0x18
    }
}
// signature: GFx_CalcHeightRatio<GMatrix2D>(const GMatrix2D &)
// Range: 0x805A1520 -> 0x805A1668
static float GFx_CalcHeightRatio<GMatrix2D>() {
    // Local variables
    class GMatrix2D mat2; // r1+0x28
    class GPoint p01; // r1+0x20
    class GPoint p10; // r1+0x18
}
// signature: GFxTextLineBuffer::Display(GFxDisplayContext &, const GMatrix2D &, const GRenderer::Cxform &, bool, const GFxTextFieldParam &)
// Range: 0x8059F230 -> 0x805A151C
void GFxTextLineBuffer::Display(class GFxTextLineBuffer * this /* r26 */, class GFxDisplayContext & context /* r27 */, class GMatrix2D & matrix /* r28 */, class Cxform & cxform /* r29 */, bool nextFrame /* r16 */) {
    // Local variables
    class GFxTextFieldParam param; // r1+0x298
    class GRenderer * prenderer; // r31
    bool dynamicCacheEnabled; // r22
    bool hasUnderline; // r30
    float maxRasterScale; // f28
    unsigned int steadyCount; // r23
    class GFxFontCacheManager * fm; // r0
    class GMatrix2D mat; // r1+0x280
    float yOffset; // f27
    float heightRatio; // f29
    class GMatrix2D displayMatrix; // r1+0x268
    bool matrixChanged; // r23
    unsigned int numGlyphsInBatch; // r23
    bool maskApplied; // r21

    {
        // Range: 0x8059F544 -> 0x8059F690
        // Local variables
        bool animation; // r0
    }
    {
        // Range: 0x8059F7EC -> 0x8059F868
        // Local variables
        float ky; // f24
        float kx; // f23
        class GPoint transl; // r1+0xB8
    }
    {
        // Range: 0x8059FCF4 -> 0x805A0198
        // Local variables
        class GPoint offset; // r1+0xB0
        class Iterator linesIt; // r1+0x140

        {
            // Range: 0x8059FD1C -> 0x8059FD1C
            // Local variables
            class GlyphIterator glyphIt; // r1+0x248
            class Line & line; // r0

            {
                // Range: 0x8059FD1C -> 0x8059FD1C
                // Local variables
                bool useGlyphTextures; // r4
                class GFxTextureGlyphData * tgd; // r0
                unsigned int fontSize; // r17
                class GFxFontResource * presolvedFont; // r16
                class GlyphEntry & glyph; // r0

                {
                    // Range: 0x8059FD1C -> 0x8059FD1C
                    // Local variables
                    float maxGlyphHeight; // f0
                    float textScreenHeight; // f25
                }
                {
                    // Range: 0x8059FD1C -> 0x8059FD1C
                    // Local variables
                    class GRect b; // r1+0x130
                }
            }
        }
    }
    {
        // Range: 0x805A01BC -> 0x805A0AEC
        // Local variables
        class GRect glyphBounds; // r1+0x110
        class Iterator linesIt; // r1+0x120
        class Cxform finalCxform; // r1+0x228

        {
            // Range: 0x805A0250 -> 0x805A0250
            // Local variables
            class GlyphIterator glyphIt; // r1+0x208
            int advance; // r0
            class GPoint offset; // r1+0xA8
            class Line & line; // r4

            {
                // Range: 0x805A0250 -> 0x805A0250
                // Local variables
                class GColor color; // r1+0x14
                class GMatrix2D m; // r1+0x1F0
                float adjox; // f2
                class GFxShapeCharacterDef * pglyphShape; // r17
                class GFxFontResource * presolvedFont; // r18
                class GFxTextImageDesc * pimage; // r19
                unsigned int index; // r20
                float approxSymW; // f25
                float scale; // f26
                class GlyphEntry & glyph; // r0

                {
                    // Range: 0x805A0250 -> 0x805A0250
                    // Local variables
                    float fontSize; // f0
                }
                {
                    // Range: 0x805A0250 -> 0x805A0250
                    // Local variables
                    class Cxform colorCxform; // r1+0x1D0
                }
                {
                    // Range: 0x805A0250 -> 0x805A0250
                    // Local variables
                    class GColor transformedColor; // r1+0x10
                }
            }
        }
    }
    {
        // Range: 0x805A0AEC -> 0x805A1454
        // Local variables
        class GRect hscrolledViewRect; // r1+0xF0
        class Iterator linesIt; // r1+0x100

        {
            // Range: 0x805A0B10 -> 0x805A0B10
            // Local variables
            class GlyphIterator glyphIt; // r1+0x1B0
            int advance; // r0
            unsigned int lastIndex; // r23
            int lineLength; // r20
            unsigned long lastColor; // r19
            float singleUnderlineHeight; // f26
            float offx; // f25
            bool newLine; // r18
            class GPoint offset; // r1+0xA0
            class Line & line; // r17

            {
                // Range: 0x805A0B10 -> 0x805A0B10
                // Local variables
                unsigned int i; // r25

                {
                    // Range: 0x805A0B10 -> 0x805A0B10
                    // Local variables
                    class GlyphEntry & glyph; // r0

                    {
                        // Range: 0x805A0B10 -> 0x805A0B10
                        // Local variables
                        unsigned long curColor; // r16
                        float adjox; // f2

                        {
                            // Range: 0x805A0B10 -> 0x805A0B10
                            // Local variables
                            class GPoint p1; // r1+0x98
                            class GMatrix2D invmm; // r1+0x180
                            class GMatrix2D mm; // r1+0x198
                            float descent; // f1
                        }
                        {
                            // Range: 0x805A0B10 -> 0x805A0B10
                            // Local variables
                            class GPoint bottomRight; // r1+0x88
                            class GPoint topLeft; // r1+0x90
                        }
                    }
                }
            }
            {
                // Range: 0x805A0B10 -> 0x805A0B10
                // Local variables
                class GPoint bottomRight; // r1+0x78
                class GPoint topLeft; // r1+0x80
            }
        }
    }

    // References
    // -> static short EmptyCharBox[10];
}
// signature: GFxTextLineBuffer::SetFirstVisibleLine(unsigned int)
// Range: 0x805A16A0 -> 0x805A16B4
void GFxTextLineBuffer::SetFirstVisibleLine() {
}
// signature: GFxTextLineBuffer::SetHScrollOffset(unsigned int)
// Range: 0x805A16C0 -> 0x805A16C8
void GFxTextLineBuffer::SetHScrollOffset() {
}
// signature: GFxTextLineBuffer::FindLineByTextPos(unsigned long)
// Range: 0x805A16D0 -> 0x805A17B8
class Iterator GFxTextLineBuffer::FindLineByTextPos(class GFxTextLineBuffer * this /* r31 */) {
    // Local variables
    long i; // r0

    {
        // Range: 0x805A1700 -> 0x805A1788
        // Local variables
        class Line * pline; // r8
    }

    // References
    // -> static class LineIndexComparator cmp;
}
// Range: 0x805A19F0 -> 0x805A1B78
class Iterator GFxTextLineBuffer::FindLineAtYOffset(class GFxTextLineBuffer * this /* r30 */, float yoff /* r1+0x8 */) {
    // Local variables
    class LineYOffsetComparator cmp; // r1+0xC
    long i; // r0

    {
        // Range: 0x805A1A2C -> 0x805A1B48
        // Local variables
        class Line * pline; // r6
    }
}
// signature: GFxTextLineBuffer::IsLineVisible(unsigned int, float) const
// Range: 0x805A1EB0 -> 0x805A1FE0
bool GFxTextLineBuffer::IsLineVisible() const {
    // Local variables
    class Line & line; // r5
}
// signature: GFxTextLineBuffer::IsPartiallyVisible(float) const
// Range: 0x805A1FE0 -> 0x805A2108
bool GFxTextLineBuffer::IsPartiallyVisible() const {
    {
        // Range: 0x805A1FE4 -> 0x805A20FC
        // Local variables
        class Line & line; // r6

        {
            // Range: 0x805A2008 -> 0x805A20FC
            // Local variables
            float ly; // f0
        }
    }
}
// Range: 0x805A2110 -> 0x805A2728
void GFxTextLineBuffer::Scale(class GFxTextLineBuffer * this /* r29 */, float scaleFactor /* f31 */) {
    // Local variables
    class Iterator it; // r1+0x8

    {
        // Range: 0x805A2138 -> 0x805A2178
        // Local variables
        class GlyphIterator git; // r1+0x18
        float newH; // f3
        float newW; // f2
        float newLeading; // f1
        class Line & line; // r4

        {
            // Range: 0x805A2138 -> 0x805A2178
            // Local variables
            float newAdv; // f0
            class GlyphEntry & ge; // r0
        }
    }
}
// Range: 0x805A2730 -> 0x805A2808
int GFxTextLineBuffer::GetMinLineHeight() const {
    // Local variables
    class ConstIterator it; // r1+0x8
    int minH; // r3
}
// signature: GFx_RecalculateRectToFit16Bit(GMatrix2D &, const GRect<float> &, GRect<float> *)
// Range: 0x805A2810 -> 0x805A2924
void GFx_RecalculateRectToFit16Bit(class GRect * pdestRect /* r31 */) {
    // Local variables
    float xscale; // f6
    float width; // f31
    float yscale; // f1
    float height; // f30
}
