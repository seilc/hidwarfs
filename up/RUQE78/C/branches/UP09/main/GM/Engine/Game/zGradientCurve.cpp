/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zGradientCurve.cpp
*/
// Range: 0x80177D30 -> 0x80177DBC
class Entity * Sext::GradientCurve::Create(class EntityHandleBase * handle /* r29 */, class GradientCurve * asset /* r30 */) {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// signature: GradientCurve::zGradientCurve::zGradientCurve(World::EntityHandleBase *, Sext::GradientCurve *, Memory::StackAllocator &)
// Range: 0x80177DC0 -> 0x80178008
void * GradientCurve::zGradientCurve::zGradientCurve(class zGradientCurve * this /* r29 */, class GradientCurve * asset /* r30 */, class StackAllocator & allocator /* r31 */) {
    // Local variables
    float oneOverLookupMax; // f30

    {
        // Range: 0x80177E6C -> 0x80177EA4
        // Local variables
        unsigned int i; // r6
    }
    {
        // Range: 0x80177F78 -> 0x80177FC0
        // Local variables
        int i; // r28

        {
            // Range: 0x80177F78 -> 0x80177FC0
            // Local variables
            float t; // f1
        }
    }

    // References
    // -> struct {} __vt__Q213GradientCurve14zGradientCurve;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: GradientCurve::zGradientCurve::Evaluate(float) const
// Range: 0x80178670 -> 0x801786A0
float GradientCurve::zGradientCurve::Evaluate() const {
    // Local variables
    int idx; // r0
}
// signature: GradientCurve::zGradientCurve::EvaluateFull(float) const
// Range: 0x801786A0 -> 0x801787A0
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
