/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zGradientCurve.cpp
*/
// Range: 0x800DDFF0 -> 0x800DE1F4
void GradientCurve::zGradientCurve::Create(class zGradientCurve * this /* r29 */, class GradientCurve * asset /* r30 */) {
    // Local variables
    float oneOverLookupMax; // f30

    {
        // Range: 0x800DE078 -> 0x800DE09C
        // Local variables
        unsigned int i; // r6
    }
    {
        // Range: 0x800DE180 -> 0x800DE1B8
        // Local variables
        int i; // r27

        {
            // Range: 0x800DE180 -> 0x800DE1B8
            // Local variables
            float t; // f1
        }
    }
}
// signature: GradientCurve::zGradientCurve::Evaluate(float) const
// Range: 0x800DE860 -> 0x800DE890
float GradientCurve::zGradientCurve::Evaluate() const {
    // Local variables
    int idx; // r0
}
// signature: GradientCurve::zGradientCurve::EvaluateFull(float) const
// Range: 0x800DE890 -> 0x800DE97C
float GradientCurve::zGradientCurve::EvaluateFull() const {
    // Local variables
    float t; // f0
    class sCurvePoint * p2; // r5
    class sCurvePoint * pEnd; // r0
    class sCurvePoint * p1; // r0
    float t2; // f4
    float end; // f3
    float out; // f1
    float dist; // f5
    float tSquared; // f0
}
// signature: GradientCurve::zGradientCurve::Evaluate(float, float, float) const
// Range: 0x800DE980 -> 0x800DE9B8
float GradientCurve::zGradientCurve::Evaluate() const {
    // Local variables
    float dist; // f3
    float val; // f0
}
