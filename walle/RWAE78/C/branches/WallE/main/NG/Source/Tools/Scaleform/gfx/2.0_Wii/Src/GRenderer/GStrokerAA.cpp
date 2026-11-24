/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GRenderer\GStrokerAA.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805B43C0 -> 0x805BDBB8
*/
// total size: 0x3C
class WidthsType {
    // Members
    float solidWidthL; // offset 0x0, size 0x4
    float solidWidthR; // offset 0x4, size 0x4
    float solidWidth; // offset 0x8, size 0x4
    float totalWidthL; // offset 0xC, size 0x4
    float totalWidthR; // offset 0x10, size 0x4
    float totalWidth; // offset 0x14, size 0x4
    float widthCoeff; // offset 0x18, size 0x4
    float solidCoeffL; // offset 0x1C, size 0x4
    float solidCoeffR; // offset 0x20, size 0x4
    float solidLimitL; // offset 0x24, size 0x4
    float solidLimitR; // offset 0x28, size 0x4
    float totalLimitL; // offset 0x2C, size 0x4
    float totalLimitR; // offset 0x30, size 0x4
    bool solidFlagL; // offset 0x34, size 0x1
    bool solidFlagR; // offset 0x35, size 0x1
    bool aaFlagL; // offset 0x36, size 0x1
    bool aaFlagR; // offset 0x37, size 0x1
    bool solidFlag; // offset 0x38, size 0x1
    bool rightSideCalc; // offset 0x39, size 0x1
};
// total size: 0xDC
class JoinParamType {
    // Members
    float dx1SolidL; // offset 0x0, size 0x4
    float dy1SolidL; // offset 0x4, size 0x4
    float dx1TotalL; // offset 0x8, size 0x4
    float dy1TotalL; // offset 0xC, size 0x4
    float dx2SolidL; // offset 0x10, size 0x4
    float dy2SolidL; // offset 0x14, size 0x4
    float dx2TotalL; // offset 0x18, size 0x4
    float dy2TotalL; // offset 0x1C, size 0x4
    float dx3SolidL; // offset 0x20, size 0x4
    float dy3SolidL; // offset 0x24, size 0x4
    float dx3TotalL; // offset 0x28, size 0x4
    float dy3TotalL; // offset 0x2C, size 0x4
    float dx1SolidR; // offset 0x30, size 0x4
    float dy1SolidR; // offset 0x34, size 0x4
    float dx1TotalR; // offset 0x38, size 0x4
    float dy1TotalR; // offset 0x3C, size 0x4
    float dx2SolidR; // offset 0x40, size 0x4
    float dy2SolidR; // offset 0x44, size 0x4
    float dx2TotalR; // offset 0x48, size 0x4
    float dy2TotalR; // offset 0x4C, size 0x4
    float dx3SolidR; // offset 0x50, size 0x4
    float dy3SolidR; // offset 0x54, size 0x4
    float dx3TotalR; // offset 0x58, size 0x4
    float dy3TotalR; // offset 0x5C, size 0x4
    float dbSolidL; // offset 0x60, size 0x4
    float dbTotalL; // offset 0x64, size 0x4
    float dbSolidR; // offset 0x68, size 0x4
    float dbTotalR; // offset 0x6C, size 0x4
    float xMiterPrevL; // offset 0x70, size 0x4
    float yMiterPrevL; // offset 0x74, size 0x4
    float xMiterPrevR; // offset 0x78, size 0x4
    float yMiterPrevR; // offset 0x7C, size 0x4
    float dMiterPrevL; // offset 0x80, size 0x4
    float dMiterPrevR; // offset 0x84, size 0x4
    float xMiterThisL; // offset 0x88, size 0x4
    float yMiterThisL; // offset 0x8C, size 0x4
    float xMiterThisR; // offset 0x90, size 0x4
    float yMiterThisR; // offset 0x94, size 0x4
    float dMiterThisL; // offset 0x98, size 0x4
    float dMiterThisR; // offset 0x9C, size 0x4
    float xMiterNextL; // offset 0xA0, size 0x4
    float yMiterNextL; // offset 0xA4, size 0x4
    float xMiterNextR; // offset 0xA8, size 0x4
    float yMiterNextR; // offset 0xAC, size 0x4
    float dMiterNextL; // offset 0xB0, size 0x4
    float dMiterNextR; // offset 0xB4, size 0x4
    float xSolidMiterL; // offset 0xB8, size 0x4
    float ySolidMiterL; // offset 0xBC, size 0x4
    float xSolidMiterR; // offset 0xC0, size 0x4
    float ySolidMiterR; // offset 0xC4, size 0x4
    float dSolidMiterL; // offset 0xC8, size 0x4
    float dSolidMiterR; // offset 0xCC, size 0x4
    bool badMiterPrevL; // offset 0xD0, size 0x1
    bool badMiterPrevR; // offset 0xD1, size 0x1
    bool badMiterThisL; // offset 0xD2, size 0x1
    bool badMiterThisR; // offset 0xD3, size 0x1
    bool badMiterNextL; // offset 0xD4, size 0x1
    bool badMiterNextR; // offset 0xD5, size 0x1
    bool rightTurnPrev; // offset 0xD6, size 0x1
    bool rightTurnThis; // offset 0xD7, size 0x1
    bool rightTurnNext; // offset 0xD8, size 0x1
    bool overlapPrev; // offset 0xD9, size 0x1
    bool overlapThis; // offset 0xDA, size 0x1
};
// signature: GStrokerAA::calcButtCap(const GStrokeVertexType &, const GStrokeVertexType &, float, const GStrokerAA::WidthsType &, bool)
// Range: 0x805B43C0 -> 0x805B52AC
void GStrokerAA::calcButtCap(class GStrokerAA * this /* r25 */, class GStrokeVertexType & v0 /* r21 */, class WidthsType & w /* r24 */, bool endFlag /* r22 */) {
    // Local variables
    float solidWidthL; // f0
    float solidWidthR; // f0
    float totalWidthL; // f0
    float totalWidthR; // f0
    float dx; // f3
    float dy; // f0
    float dxSolidL; // f29
    float dySolidL; // f28
    float dxSolidR; // f27
    float dySolidR; // f26
    float dxTotalL; // f25
    float dyTotalL; // f24
    float dxTotalR; // f23
    float dyTotalR; // f22
    unsigned int buttSolidL; // r29
    unsigned int buttSolidR; // r28
    unsigned int buttTotalL; // r27
    unsigned int buttTotalR; // r26
}
// signature: GStrokerAA::calcRoundCap(const GStrokeVertexType &, const GStrokeVertexType &, float, const GStrokerAA::WidthsType &, bool)
// Range: 0x805B52B0 -> 0x805B5E78
void GStrokerAA::calcRoundCap(class GStrokerAA * this /* r25 */, class GStrokeVertexType & v0 /* r21 */, class WidthsType & w /* r26 */, bool endFlag /* r27 */) {
    // Local variables
    float solidWidthL; // f0
    float solidWidthR; // f0
    float totalWidthL; // f0
    float totalWidthR; // f0
    float dx; // f2
    float dy; // f0
    float dxSolidL; // f29
    float dySolidL; // f28
    float dxSolidR; // f27
    float dySolidR; // f26
    float dxTotalL; // f25
    float dyTotalL; // f24
    float dxTotalR; // f23
    float dyTotalR; // f22
    float a1; // f31
    float a2; // f30
    float da; // f0
    int i; // r29
    int n; // r28
    float cxTotal; // f22
    float cyTotal; // f23
    float cxSolid; // f24
    float cySolid; // f26

    {
        // Range: 0x805B5678 -> 0x805B5E04
        // Local variables
        float ySolid; // f0
        float xSolid; // f1
        float yTotal; // f27
        float xTotal; // f25
    }
}
// Range: 0x805B5E80 -> 0x805B804C
void GStrokerAA::calcRoundJoin(class GStrokerAA * this /* r24 */, class GStrokeVertexType & v1 /* r25 */, class WidthsType & w /* r26 */, class JoinParamType & p /* r27 */) {
    // Local variables
    float xSolid; // f28
    float ySolid; // f29
    float xTotal; // f0
    float yTotal; // f0
    float dx; // f0
    float dy; // f0
    float a1; // f31
    float a2; // f28
    float da; // f0
    unsigned int newSolidL; // r28
    unsigned int newSolidR; // r28
    int i; // r29
    int n; // r30
    bool overlap; // r0
}
// Range: 0x805B8050 -> 0x805BA78C
void GStrokerAA::calcBevelJoin(class GStrokerAA * this /* r23 */, class GStrokeVertexType & v1 /* r24 */, class WidthsType & w /* r25 */, class JoinParamType & p /* r26 */, enum LineJoinType lineJoin /* r27 */) {
    // Local variables
    float xSolid; // f27
    float ySolid; // f28
    float kSolid; // f4
    float xTotal; // f0
    float yTotal; // f0
    float kTotal; // f3
    float d2; // f3
    float k2; // f5
    float x1; // f6
    float y1; // f2
    unsigned int newSolidL; // r29
    unsigned int newTotalL; // r28
    unsigned int newSolidR; // r28
    unsigned int newTotalR; // r29
    bool overlap; // r0
}
// signature: GStrokerAA::calcButtJoin(const GStrokeVertexType &, const GStrokeVertexType &, float, const GStrokerAA::WidthsType &)
// Range: 0x805BA790 -> 0x805BB1FC
void GStrokerAA::calcButtJoin(class GStrokerAA * this /* r30 */, class GStrokeVertexType & v1 /* r23 */, class WidthsType & w /* r31 */) {
    // Local variables
    float dx; // f11
    float dy; // f12
    class JoinParamType p; // r1+0x38
}
// signature: GStrokerAA::calcMiterJoin(const GStrokeVertexType &, const GStrokerAA::WidthsType &, GStrokerAA::JoinParamType &, GStrokerTypes::LineJoinType)
// Range: 0x805BB200 -> 0x805BC0E4
void GStrokerAA::calcMiterJoin(class GStrokerAA * this /* r24 */, class GStrokeVertexType & v1 /* r25 */, class WidthsType & w /* r26 */, class JoinParamType & p /* r27 */) {
    // Local variables
    float xSolidL; // f5
    float ySolidL; // f6
    float xSolidR; // f31
    float ySolidR; // f30
    float xTotalL; // f29
    float yTotalL; // f28
    float xTotalR; // f27
    float yTotalR; // f26
    bool overlap; // r0
}
// Range: 0x805BC0F0 -> 0x805BCB78
void GStrokerAA::calcJoinParam(class GStrokeVertexType & v1 /* r27 */, class GStrokeVertexType & v2 /* r28 */, class GStrokeVertexType & v3 /* r29 */, class WidthsType & w /* r30 */, class JoinParamType & p /* r31 */) {
    // Local variables
    float dx; // f5
    float dy; // f4
    float epsilon; // f31
    bool intersectionFailed; // r26
}
// signature: GStrokerAA::calcInitialJoinParam(const GStrokeVertexType &, const GStrokeVertexType &, const GStrokerAA::WidthsType &, GStrokerAA::JoinParamType &)
// Range: 0x805BCB80 -> 0x805BCC34
void GStrokerAA::calcInitialJoinParam() {
    // Local variables
    float dx; // f10
    float dy; // f11
}
// signature: GStrokerAA::calcWidths(GStrokerAA::WidthsType &) const
// Range: 0x805BCC40 -> 0x805BCDD0
void GStrokerAA::calcWidths() const {
}
// Range: 0x805BCDD0 -> 0x805BD6D0
void GStrokerAA::tessellate(class GStrokerAA * this /* r29 */) {
    // Local variables
    class WidthsType widths; // r1+0x14
    class JoinParamType joinParam; // r1+0x50
    unsigned int i; // r31

    {
        // Range: 0x805BCF6C -> 0x805BD254
        // Local variables
        unsigned int startTri; // r30
    }
    {
        // Range: 0x805BD254 -> 0x805BD6B0
        // Local variables
        float avrInc; // f3

        {
            // Range: 0x805BD3B4 -> 0x805BD5EC
            // Local variables
            class GStrokeVertexType vLast; // r1+0x8
            unsigned int end; // r30
        }
    }
}
// Range: 0x805BD6D0 -> 0x805BDBB8
void GStrokerAA::Tessellate(class GStrokerAA * this /* r24 */, class GCompoundShape & srcShape /* r25 */, int srcStyle /* r26 */) {
    // Local variables
    unsigned int i; // r27
    unsigned int j; // r28

    {
        // Range: 0x805BD6FC -> 0x805BDB60
        // Local variables
        class SPath & srcPath; // r0

        {
            // Range: 0x805BD6FC -> 0x805BDB60
            // Local variables
            bool merge; // r28

            {
                // Range: 0x805BD6FC -> 0x805BD6FC
                // Local variables
                class GPointType v1; // r1+0x8
            }
        }
    }
}
