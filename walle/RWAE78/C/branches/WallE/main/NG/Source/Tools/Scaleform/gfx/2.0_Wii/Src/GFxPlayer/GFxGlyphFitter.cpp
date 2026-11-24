/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxGlyphFitter.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804DD250 -> 0x804DE480
*/
enum FitDir {
    FitX = 1,
    FitY = 2,
};
// Range: 0x804DD250 -> 0x804DD268
void GFxGlyphFitter::Reset() {
}
// signature: GFxGlyphFitter::MoveTo(int, int)
// Range: 0x804DD270 -> 0x804DD420
void GFxGlyphFitter::MoveTo(class GFxGlyphFitter * this /* r28 */) {
}
// signature: GFxGlyphFitter::LineTo(int, int)
// Range: 0x804DD420 -> 0x804DD564
void GFxGlyphFitter::LineTo(class GFxGlyphFitter * this /* r29 */) {
}
// Range: 0x804DD570 -> 0x804DD728
void GFxGlyphFitter::computeBounds() {
    // Local variables
    unsigned int i; // r6
    unsigned int j; // r7
    short minX; // r0
    short minY; // r8
    short maxX; // r9
    short maxY; // r10

    {
        // Range: 0x804DD598 -> 0x804DD700
        // Local variables
        class ContourType & c; // r0

        {
            // Range: 0x804DD5C4 -> 0x804DD700
            // Local variables
            int sum; // r11
            class VertexType v1; // r1+0x8
        }
    }
}
// Range: 0x804DD730 -> 0x804DDA3C
void GFxGlyphFitter::detectEvents(class GFxGlyphFitter * this /* r29 */, enum FitDir dir /* r30 */) {
    // Local variables
    unsigned int i; // r6
    unsigned int j; // r7
    int idx; // r11
    int minCoord; // r0

    {
        // Range: 0x804DD7E4 -> 0x804DDA14
        {
            // Range: 0x804DD814 -> 0x804DDA04
            // Local variables
            bool done; // r12
            class VertexType v3; // r1+0x8
            class VertexType v2; // r1+0xC
            class VertexType v1; // r1+0x10

            {
                // Range: 0x804DD834 -> 0x804DD8CC
                // Local variables
                short t; // r0
            }
        }
    }
}
// Range: 0x804DDA40 -> 0x804DE284
void GFxGlyphFitter::computeLerpRamp(class GFxGlyphFitter * this /* r20 */, enum FitDir dir /* r21 */, int unitsPerPixel /* r22 */, int middle /* r23 */, int lowerCaseTop /* r24 */, int upperCaseTop /* r25 */) {
    // Local variables
    int prev; // r0
    int top1; // r0
    int top2; // r0
    int top1s; // r30
    int top2s; // r29
    int y; // r28
    int minCoord; // r0
    int minDist; // r27
    unsigned char event; // r3
    unsigned int i; // r26
    class GPodVector & ramp; // r0
    class VertexType v1; // r1+0xC
    class VertexType v2; // r1+0x8
    unsigned int topIdx; // r5

    {
        // Range: 0x804DDCD4 -> 0x804DE064
        // Local variables
        bool done; // r3
    }
}
// Range: 0x804DE290 -> 0x804DE480
void GFxGlyphFitter::FitGlyph(class GFxGlyphFitter * this /* r27 */, int heightInPixels /* r28 */, int widthInPixels /* r29 */, int lowerCaseTop /* r30 */, int upperCaseTop /* r31 */) {
}
