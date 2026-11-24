/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GRenderer\GCompoundShape.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805A95C0 -> 0x805AA25C
*/
// Range: 0x805A95C0 -> 0x805A9600
void GCompoundShape::RemoveAll() {
}
// Range: 0x805A9600 -> 0x805A9618
void GCompoundShape::SetCurveTolerance(float t /* f0 */) {
}
// Range: 0x805A9620 -> 0x805A97A0
void GCompoundShape::BeginPath(class GCompoundShape * this /* r26 */, int lStyle /* r27 */, int rStyle /* r28 */, int lineStyle /* r29 */) {
}
// Range: 0x805A97A0 -> 0x805A9A20
void GCompoundShape::BeginPath(class GCompoundShape * this /* r26 */, int lStyle /* r27 */, int rStyle /* r28 */, int lineStyle /* r29 */, float x /* f30 */, float y /* f31 */) {
}
// Range: 0x805A9A20 -> 0x805A9B6C
void GCompoundShape::ClosePath(class GCompoundShape * this /* r31 */) {
}
// signature: GCompoundShape::AddCurve(float, float, float, float)
// Range: 0x805A9B70 -> 0x805A9D1C
void GCompoundShape::AddCurve(class GCompoundShape * this /* r31 */) {
}
// signature: GCompoundShape::flattenQuadraticCurve(float, float, float, float, float, float)
// Range: 0x805A9D20 -> 0x805AA02C
void GCompoundShape::flattenQuadraticCurve(class GCompoundShape * this /* r31 */, float x3 /* f30 */, float y3 /* f31 */) {
    // Local variables
    float x12; // f3
    float y12; // f4
    float x23; // f29
    float y23; // f28
    float dx; // f13
    float dy; // f27
    float d; // f0
    float x123; // f27
    float y123; // f26
}
// signature: GCompoundShape::PointInShape(float, float, bool) const
// Range: 0x805AA030 -> 0x805AA204
bool GCompoundShape::PointInShape() const {
    // Local variables
    int styleCount; // r5
    unsigned int i; // r6
    unsigned int j; // r7

    {
        // Range: 0x805AA03C -> 0x805AA1D4
        {
            // Range: 0x805AA044 -> 0x805AA1CC
            // Local variables
            class GPointType p2; // r1+0x18
            class GPointType p1; // r1+0x20

            {
                // Range: 0x805AA044 -> 0x805AA1CC
                // Local variables
                int dir; // r9
            }
        }
    }
}
// signature: GCompoundShape::ScaleAndTranslate(float, float, float, float)
// Range: 0x805AA210 -> 0x805AA25C
void GCompoundShape::ScaleAndTranslate() {
    {
        // Range: 0x805AA210 -> 0x805AA224
        // Local variables
        unsigned int i; // r6
    }
}
