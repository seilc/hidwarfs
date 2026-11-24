/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xParabola.cpp
*/
// signature: xParabola::GenerateParabolaFromLaunchVelocity(xParabola &, const xVec3 *, const xVec3 *, float, float, bool, bool)
// Range: 0x8003CDE0 -> 0x8003D180
bool xParabola::GenerateParabolaFromLaunchVelocity(class xParabola & parabola /* r26 */, class xVec3 * initPos /* r27 */, float launchVel /* f22 */, float gravity /* f23 */, bool useLowerAngleSolution /* r28 */) {
    // Local variables
    float dx; // f31
    float dx2; // f5
    float dy; // f30
    float dy2; // f6
    float dz; // f29
    float dz2; // f7
    float dw2; // f5
    float quadraticA; // f28
    float quadraticB; // f27
    float quadraticC; // f4
    float quadraticInsideSQRT; // f24
    float dm1; // f26
    float dm2; // f21
    float Voy1; // f27
    float Voy2; // f28
    float dt1; // f25
    float dt2; // f24
    bool solution1Valid; // r30
    bool solution2Valid; // r29
    class xVec3 wDir; // r1+0x8

    {
        // Range: 0x8003CEE4 -> 0x8003CF2C
        // Local variables
        float minVelocityParabolaSpeed; // f0
    }
    {
        // Range: 0x8003D064 -> 0x8003D0B8
        // Local variables
        float Voz; // f22
        float Vox; // f21
        float Vow; // f0
    }
    {
        // Range: 0x8003D0B8 -> 0x8003D10C
        // Local variables
        float Voz; // f22
        float Vox; // f21
        float Vow; // f0
    }
}
// signature: xParabola::GenerateMinVelocityParabola(xParabola &, const xVec3 *, const xVec3 *, float)
// Range: 0x8003D180 -> 0x8003D39C
void xParabola::GenerateMinVelocityParabola(class xParabola & parabola /* r29 */, class xVec3 * initPos /* r30 */, float gravity /* f30 */) {
    // Local variables
    float dx; // f27
    float dy; // f28
    float dz; // f31
    float dw; // f0
    float dy2; // f26
    float dw2; // f25
    float g2; // f24
    float dm2; // f23
    float dm; // f23
    float VoMin2; // f24
    float VoMin; // f0
    float dt; // f0
    class xVec3 wDir; // r1+0x8
    float Vow; // f23
    float insideSQRT; // f24
    float Voy; // f0

    // References
    // -> class xVec3 m_UnitAxisY;
}
