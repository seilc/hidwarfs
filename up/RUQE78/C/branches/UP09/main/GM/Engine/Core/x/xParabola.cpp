/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xParabola.cpp
*/
// signature: xParabola::GenerateParabolaFromLaunchVelocity(xParabola &, const xVec3 *, const xVec3 *, float, float, bool, bool)
// Range: 0x800718A0 -> 0x80071D94
bool xParabola::GenerateParabolaFromLaunchVelocity(class xParabola & parabola /* r30 */, float launchVel /* f31 */) {
    // Local variables
    float dx; // f0
    float dx2; // f9
    float dy; // f3
    float dy2; // f10
    float dz; // f4
    float dz2; // f11
    float dw2; // f9
    float quadraticA; // f5
    float quadraticB; // f12
    float quadraticC; // f8
    float quadraticInsideSQRT; // f7
    float dm1; // f13
    float dm2; // f11
    float Voy1; // f5
    float Voy2; // r31
    float dt1; // f6
    float dt2; // f7
    bool solution1Valid; // r5
    bool solution2Valid; // r7
    class xVec3 wDir; // r1+0x8

    {
        // Range: 0x80071944 -> 0x800719E4
        // Local variables
        float minVelocityParabolaSpeed; // f0
    }
    {
        // Range: 0x80071C38 -> 0x80071CD4
        // Local variables
        float Voz; // f7
        float Vox; // f8
        float Vow; // f0
    }
    {
        // Range: 0x80071CD4 -> 0x80071D70
        // Local variables
        float Voz; // f5
        float Vox; // f6
        float Vow; // f0
    }
}
// signature: xParabola::GenerateMinVelocityParabola(xParabola &, const xVec3 *, const xVec3 *, float)
// Range: 0x80071DA0 -> 0x80072080
void xParabola::GenerateMinVelocityParabola() {
    // Local variables
    float dx; // f3
    float dy; // f8
    float dz; // f4
    float dw; // f0
    float dy2; // f9
    float dw2; // f10
    float g2; // f11
    float dm2; // f12
    float dm; // f12
    float VoMin2; // f5
    float VoMin; // f0
    float dt; // f0
    class xVec3 wDir; // r1+0x8
    float Vow; // f6
    float insideSQRT; // f7
    float Voy; // f0

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: xParabola::GenerateParabolaFromApexHeight(xParabola &, const xVec3 *, const xVec3 *, float, float, bool)
// Range: 0x80072080 -> 0x8007224C
void xParabola::GenerateParabolaFromApexHeight() {
    // Local variables
    float deltaHeight; // f4
    float totalApexHeight; // f6
    float riseTime; // f7
    float fallTime; // f0
    float timeInAir; // f8
    float xDistance; // f3
    float zDistance; // f7
}
