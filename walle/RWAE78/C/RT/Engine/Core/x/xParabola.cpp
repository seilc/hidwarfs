/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xParabola.cpp
*/
// signature: xParabola::GenerateParabolaFromLaunchVelocity(xParabola &, const xVec3 *, const xVec3 *, float, float, bool, bool)
// Range: 0x80053460 -> 0x80053A68
bool xParabola::GenerateParabolaFromLaunchVelocity(class xParabola * parabola /* r26 */, class xVec3 * initPos /* r27 */, float launchVel /* f20 */, float gravity /* f21 */, bool useLowerAngleSolution /* r28 */) {
    // Local variables
    float dx; // f30
    float dx2; // f7
    float dy; // f29
    float dy2; // f4
    float dz; // f28
    float dz2; // f5
    float dw2; // f5
    float quadraticA; // f27
    float quadraticB; // f26
    float quadraticC; // f3
    float quadraticInsideSQRT; // f25
    float dm1; // f24
    float dm2; // f25
    float Voy1; // f26
    float Voy2; // f27
    float dt1; // f23
    float dt2; // f22
    bool solution1Valid; // r30
    bool solution2Valid; // r29
    class xVec3 wDir; // r1+0x8

    {
        // Range: 0x80053570 -> 0x8005361C
        // Local variables
        float minVelocityParabolaSpeed; // f0
    }
    {
        // Range: 0x8005389C -> 0x80053940
        // Local variables
        float Voz; // f5
        float Vox; // f4
        float Vow; // f0
    }
    {
        // Range: 0x80053940 -> 0x800539E4
        // Local variables
        float Voz; // f5
        float Vox; // f4
        float Vow; // f0
    }
}
// signature: xParabola::GenerateMinVelocityParabola(xParabola &, const xVec3 *, const xVec3 *, float)
// Range: 0x80053A70 -> 0x80053E68
void xParabola::GenerateMinVelocityParabola(class xParabola * parabola /* r28 */, class xVec3 * initPos /* r29 */, float gravity /* f25 */) {
    // Local variables
    float dx; // f29
    float dy; // f30
    float dz; // f28
    float dw; // f0
    float dy2; // f23
    float dw2; // f22
    float g2; // f27
    float dm2; // f21
    float dm; // f26
    float VoMin2; // f27
    float VoMin; // f0
    float dt; // f0
    class xVec3 wDir; // r1+0x8
    float Vow; // f21
    float insideSQRT; // f22
    float Voy; // f0

    // References
    // -> class xVec3 m_UnitAxisY;
}
