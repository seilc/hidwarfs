/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zJawFlapper.cpp
*/
float timeCounter; // size: 0x4, address: 0x8075AFF8
// Range: 0x80121970 -> 0x80121994
void * zJawFlapper::zJawFlapper() {
}
// signature: zJawFlapper::Init(World::xOGModelRef *, int, int, zJawFlapperNS::JawBoneMovementType)
// Range: 0x801219A0 -> 0x80121A30
void zJawFlapper::Init(class zJawFlapper * this /* r30 */) {
    // References
    // -> class xQuat g_IQ;
}
// Range: 0x80121A30 -> 0x80121A70
void zJawFlapper::Reset(class zJawFlapper * this /* r31 */) {
    // References
    // -> class xQuat g_IQ;
}
// signature: zJawFlapper::SetupFXAtBone(FX::zFXSpawn *, int)
// Range: 0x80121A70 -> 0x80121A7C
void zJawFlapper::SetupFXAtBone() {
}
// signature: zJawFlapper::SetJawLimits(float, float)
// Range: 0x80121A80 -> 0x80121A8C
void zJawFlapper::SetJawLimits() {
}
// signature: zJawFlapper::SetJawCyclePeriod(float)
// Range: 0x80121A90 -> 0x80121A98
void zJawFlapper::SetJawCyclePeriod() {
}
// signature: zJawFlapper::SetJawSpeechType(zJawFlapperNS::JawBoneMovementType)
// Range: 0x80121AA0 -> 0x80121AA8
void zJawFlapper::SetJawSpeechType() {
}
// signature: zJawFlapper::Update(float)
// Range: 0x80121AB0 -> 0x80121AC4
void zJawFlapper::Update() {
}
// Range: 0x80121AD0 -> 0x80121B78
void zJawFlapper::Start(class zJawFlapper * this /* r31 */) {
}
// Range: 0x80121B80 -> 0x80121BCC
void zJawFlapper::Stop(class zJawFlapper * this /* r31 */) {
}
// Range: 0x80121BD0 -> 0x80121E10
void zJawFlapper::ApplyBoneModificationAfterAnimatrices(class zJawFlapper * this /* r30 */, class Matrix43 * skinMat /* r31 */) {
    // Local variables
    class xMat4x3 jawMatrix; // r1+0x150
    class xMat4x3 rotationMatrix; // r1+0x110
    class xQuat targetQuat; // r1+0x50
    class xQuat currentQuat; // r1+0x40
    class xQuat blendedTargetQuat; // r1+0x30
    class xMat4x3 blendMat; // r1+0xD0
    class Matrix43 blendMatNG; // r1+0xA0

    {
        // Range: 0x80121CEC -> 0x80121DB4
        // Local variables
        int i; // r28

        {
            // Range: 0x80121D08 -> 0x80121DB4
            // Local variables
            class xMat4x3 jawBoneChildMatrix; // r1+0x60
            class xVec3 newPosition; // r1+0x14
            class xVec3 oldPosition; // r1+0x20
        }
    }

    // References
    // -> class xVec3 g_O3;
}
// Range: 0x80121E10 -> 0x80121F84
void zJawFlapper::UpdateNextJawRotation(class zJawFlapper * this /* r30 */, float dt /* f31 */) {
    // References
    // -> float timeCounter;
}
