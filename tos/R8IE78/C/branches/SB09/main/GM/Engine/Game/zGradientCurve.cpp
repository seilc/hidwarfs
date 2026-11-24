/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zGradientCurve.cpp
*/
// Range: 0x800C45F0 -> 0x800C4674
class Entity * Sext::GradientCurve::Create(class EntityHandleBase * handle /* r29 */, class GradientCurve * asset /* r30 */) {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// Range: 0x800C4680 -> 0x800C470C
void * GradientCurve::MiniCurve::~MiniCurve(class MiniCurve * this /* r30 */) {
}
// Range: 0x800C4710 -> 0x800C48A0
void GradientCurve::MiniCurve::Setup(class MiniCurve * this /* r30 */, class zGradientCurve & inCurve /* r31 */, float inMin /* f28 */, float inMax /* f29 */, int inNumSamples /* r26 */) {
    // Local variables
    int numPoints; // r0
    float numPointsF; // f30
    float diff; // f29

    {
        // Range: 0x800C481C -> 0x800C4868
        // Local variables
        int idx; // r26

        {
            // Range: 0x800C481C -> 0x800C4868
            // Local variables
            float pos; // f1
        }
    }
}
// Range: 0x800C48A0 -> 0x800C4A18
void GradientCurve::MiniCurve::Setup(class MiniCurve * this /* r27 */, float inMin /* f29 */, float inMax /* f30 */, int inNumSamples /* r28 */) {
    // Local variables
    int numPoints; // r0
    float numPointsF; // f31
    float diff; // f2

    {
        // Range: 0x800C49A0 -> 0x800C49E8
        // Local variables
        int idx; // r5

        {
            // Range: 0x800C49A0 -> 0x800C49E8
            // Local variables
            float pos; // f0
        }
    }
}
// signature: GradientCurve::zGradientCurve::zGradientCurve(World::EntityHandleBase *, Sext::GradientCurve *, Memory::StackAllocator &)
// Range: 0x800C4A20 -> 0x800C4C2C
void * GradientCurve::zGradientCurve::zGradientCurve(class zGradientCurve * this /* r29 */, class GradientCurve * asset /* r30 */, class StackAllocator & allocator /* r31 */) {
    // Local variables
    float oneOverLookupMax; // f30

    {
        // Range: 0x800C4A88 -> 0x800C4B18
        // Local variables
        unsigned int i; // r6
    }
    {
        // Range: 0x800C4BAC -> 0x800C4C00
        // Local variables
        int i; // r28

        {
            // Range: 0x800C4BAC -> 0x800C4C00
            // Local variables
            float t; // f1
        }
    }

    // References
    // -> struct {} __vt__Q213GradientCurve14zGradientCurve;
}
// signature: GradientCurve::zGradientCurve::Find(unsigned long long)
// Range: 0x800C5170 -> 0x800C51B4
class zGradientCurve * GradientCurve::zGradientCurve::Find() {
    // Local variables
    class EntityHandleBase * handle; // r0
}
// signature: GradientCurve::zGradientCurve::Evaluate(float) const
// Range: 0x800C51C0 -> 0x800C51F0
float GradientCurve::zGradientCurve::Evaluate() const {
    // Local variables
    int idx; // r0
}
// signature: GradientCurve::zGradientCurve::EvaluateFull(float) const
// Range: 0x800C51F0 -> 0x800C52EC
float GradientCurve::zGradientCurve::EvaluateFull() const {
    // Local variables
    float t; // f0
    class sCurvePoint * p2; // r4
    class sCurvePoint * pEnd; // r0
    class sCurvePoint * p1; // r0
    float t2; // f4
    float end; // f3
    float out; // f1
    float dist; // f5
    float tSquared; // f0
}
// signature: GradientCurve::zGradientCurve::Evaluate(float, float, float) const
// Range: 0x800C52F0 -> 0x800C5328
float GradientCurve::zGradientCurve::Evaluate() const {
    // Local variables
    float dist; // f3
    float val; // f0
}
