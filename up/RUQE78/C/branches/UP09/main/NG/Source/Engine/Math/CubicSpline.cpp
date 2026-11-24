/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Math\CubicSpline.cpp
*/
// signature: Math::CubicSpline::GetPoint(float)
// Range: 0x8031E398 -> 0x8031E534
class Vector3 Math::CubicSpline::GetPoint(class CubicSpline * this /* r31 */) {
    // Local variables
    int segment; // r1+0xC
    float localT; // r1+0x8
}
// signature: Math::CubicSpline::GetVelocity(float)
// Range: 0x8031E534 -> 0x8031E6C4
class Vector3 Math::CubicSpline::GetVelocity(class CubicSpline * this /* r31 */) {
    // Local variables
    int segment; // r1+0xC
    float localT; // r1+0x8
}
// signature: Math::CubicSpline::GetAcceleration(float)
// Range: 0x8031E6C4 -> 0x8031E7C8
class Vector3 Math::CubicSpline::GetAcceleration(class CubicSpline * this /* r31 */) {
    // Local variables
    int segment; // r1+0xC
    float localT; // r1+0x8
}
// Range: 0x8031E7C8 -> 0x8031E7E0
float Math::CubicSpline::ApproximateLength() const {
}
// signature: Math::CubicSpline::Reparameterize(float, int &, float &)
// Range: 0x8031E7E0 -> 0x8031E930
void Math::CubicSpline::Reparameterize() {
    // Local variables
    float dist; // f2

    {
        // Range: 0x8031E878 -> 0x8031E91C
        // Local variables
        int maxseg; // r9
        int minseg; // r8
    }
}
// Range: 0x8031E930 -> 0x8031EC00
float Math::CubicSpline::GetSquareDistanceNewtonCorrection(class CubicSpline * this /* r30 */, float t /* f11 */, class Vector3 & p /* r31 */) {
    // Local variables
    int segment; // r1+0xC
    float localT; // r1+0x8
    class Vector3 * coef; // r26
    float t2; // f7
    float t3; // f8
    float t4; // f9
    float t5; // f10
    float d1[3]; // r1+0x1C
    float d2[3]; // r1+0x10
    float k[6]; // r1+0x28
    float localCorrection; // f2
    float localSegmentLength; // f0
    float globalCorrection; // f1

    {
        // Range: 0x8031E9AC -> 0x8031EB20
        // Local variables
        int i; // r0

        {
            // Range: 0x8031E9AC -> 0x8031EB20
            // Local variables
            float d; // f22
            float c; // f31
            float b; // f29
            float a; // f25
        }
    }
}
