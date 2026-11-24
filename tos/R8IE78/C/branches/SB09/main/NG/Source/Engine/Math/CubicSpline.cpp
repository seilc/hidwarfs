/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Math\CubicSpline.cpp
*/
// Range: 0x801E8670 -> 0x801E8704
class Vector3 Math::CubicSplineNS::EvaluateSplinePosition(class Vector3 * coef /* r31 */, float t /* f31 */) {
}
// Range: 0x801E8710 -> 0x801E87C0
class Vector3 Math::CubicSplineNS::EvaluateSplineVelocity(class Vector3 * coef /* r31 */, float t /* f31 */) {
}
// Range: 0x801E87C0 -> 0x801E8850
class Vector3 Math::CubicSplineNS::EvaluateSplineAcceleration(class Vector3 * coef /* r31 */, float t /* f31 */) {
}
// signature: Math::CubicSpline::GetPoint(float)
// Range: 0x801E8850 -> 0x801E88C8
class Vector3 Math::CubicSpline::GetPoint(class CubicSpline * this /* r31 */) {
    // Local variables
    int segment; // r1+0xC
    float localT; // r1+0x8
}
// signature: Math::CubicSpline::GetVelocity(float)
// Range: 0x801E88D0 -> 0x801E8948
class Vector3 Math::CubicSpline::GetVelocity(class CubicSpline * this /* r31 */) {
    // Local variables
    int segment; // r1+0xC
    float localT; // r1+0x8
}
// signature: Math::CubicSpline::GetAcceleration(float)
// Range: 0x801E8950 -> 0x801E89C8
class Vector3 Math::CubicSpline::GetAcceleration(class CubicSpline * this /* r31 */) {
    // Local variables
    int segment; // r1+0xC
    float localT; // r1+0x8
}
// Range: 0x801E89D0 -> 0x801E89E8
float Math::CubicSpline::ApproximateLength() const {
}
// signature: Math::CubicSpline::Reparameterize(float, int &, float &)
// Range: 0x801E89F0 -> 0x801E8B3C
void Math::CubicSpline::Reparameterize() {
    // Local variables
    float dist; // f2

    {
        // Range: 0x801E8A88 -> 0x801E8B28
        // Local variables
        int maxseg; // r9
        int minseg; // r8
    }
}
// Range: 0x801E8B40 -> 0x801E8DF4
float Math::CubicSpline::GetSquareDistanceNewtonCorrection(class CubicSpline * this /* r30 */, float t /* f30 */, class Vector3 & p /* r31 */) {
    // Local variables
    int segment; // r1+0xC
    float localT; // r1+0x8
    class Vector3 * coef; // r28
    float t2; // f10
    float t3; // f11
    float t4; // f12
    float t5; // f13
    float d1[3]; // r1+0x1C
    float d2[3]; // r1+0x10
    float k[6]; // r1+0x28
    float localCorrection; // f2
    float localSegmentLength; // f0
    float globalCorrection; // f1

    {
        // Range: 0x801E8BBC -> 0x801E8D14
        // Local variables
        int i; // r0

        {
            // Range: 0x801E8BBC -> 0x801E8D14
            // Local variables
            float d; // f31
            float c; // f3
            float b; // f24
            float a; // f23
        }
    }
}
