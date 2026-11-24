/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GRenderer\GRasterizer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805AE7D0 -> 0x805B01A0
*/
// total size: 0x8
class GArrayAdaptor {
    // Members
    class Cell * * Array; // offset 0x0, size 0x4
    unsigned int Size; // offset 0x4, size 0x4
};
// Range: 0x805AE7D0 -> 0x805AE854
void * GRasterizer::GRasterizer() {
}
// Range: 0x805AE860 -> 0x805AE8B0
void GRasterizer::Reset() {
}
// signature: GRasterizer::MoveTo(float, float)
// Range: 0x805AE8B0 -> 0x805AE8F0
void GRasterizer::MoveTo() {
}
// signature: GRasterizer::LineTo(float, float)
// Range: 0x805AE8F0 -> 0x805AE968
void GRasterizer::LineTo(class GRasterizer * this /* r29 */) {
    // Local variables
    int xi; // r31
    int yi; // r30
}
// Range: 0x805AE970 -> 0x805AE9BC
void GRasterizer::ClosePolygon(class GRasterizer * this /* r31 */) {
}
// Range: 0x805AE9C0 -> 0x805AECD8
void GRasterizer::AddShapeScaled(class GRasterizer * this /* r26 */, class GCompoundShape & shape /* r27 */, float scaleX /* f28 */, float scaleY /* f29 */, float transX /* f30 */, float transY /* f31 */, int activeStyle /* r28 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int j; // r29

    {
        // Range: 0x805AEA00 -> 0x805AEC88
        // Local variables
        class SPath & path; // r0
    }
}
// signature: GRasterizer::AddShape(const GCompoundShape &, float, int)
// Range: 0x805AECE0 -> 0x805AECF0
void GRasterizer::AddShape() {
}
// signature: GRasterizer::horLine(int, int, int, int, int)
// Range: 0x805AECF0 -> 0x805AF194
void GRasterizer::horLine(class GRasterizer * this /* r17 */, int ey /* r18 */, int y1 /* r19 */, int y2 /* r20 */) {
    // Local variables
    int ex1; // r29
    int ex2; // r28
    int fx1; // r9
    int fx2; // r27
    int delta; // r6
    int p; // r8
    int first; // r26
    int dx; // r25
    int incr; // r24
    int lift; // r23
    int mod; // r22
    int rem; // r21
}
// signature: GRasterizer::line(int, int, int, int)
// Range: 0x805AF1A0 -> 0x805AF960
void GRasterizer::line(class GRasterizer * this /* r20 */, int x1 /* r18 */, int x2 /* r21 */) {
    // Local variables
    int dx; // r15
    int dy; // r30
    int ey1; // r29
    int ex2; // r8
    int ey2; // r28
    int fy1; // r17
    int fy2; // r27
    int xFrom; // r26
    int xTo; // r17
    int p; // r4
    int rem; // r25
    int mod; // r24
    int lift; // r23
    int delta; // r7
    int first; // r18
    int incr; // r22

    {
        // Range: 0x805AF394 -> 0x805AF638
        // Local variables
        int area; // r17
        int twoFx; // r21
        int ex; // r0
    }
}
// Range: 0x805AF960 -> 0x805AFCBC
bool GRasterizer::SortCells(class GRasterizer * this /* r31 */) {
    // Local variables
    unsigned int i; // r7
    unsigned int start; // r6

    {
        // Range: 0x805AFBA0 -> 0x805AFBB4
        // Local variables
        unsigned int v; // r0
    }
    {
        // Range: 0x805AFC38 -> 0x805AFC88
        {
            // Range: 0x805AFC40 -> 0x805AFC88
            // Local variables
            class GArrayAdaptor sortedCells; // r1+0x8
        }
    }
}
// signature: GRasterizer::SweepScanline(unsigned int, unsigned char *, unsigned int) const
// Range: 0x805AFF70 -> 0x805B01A0
void GRasterizer::SweepScanline(class GRasterizer * this /* r26 */, unsigned char * pRaster /* r27 */, unsigned int numChannels /* r28 */) const {
    // Local variables
    unsigned int numCells; // r31
    class Cell * * cells; // r30
    int cover; // r29

    {
        // Range: 0x805AFFC4 -> 0x805B0180
        // Local variables
        int area; // r5
        int x; // r3
        class Cell * currCell; // r6

        {
            // Range: 0x805B0008 -> 0x805B00F4
            // Local variables
            unsigned char * p; // r7

            {
                // Range: 0x805B006C -> 0x805B006C
                // Local variables
                unsigned int j; // r8
            }
        }
    }
}
