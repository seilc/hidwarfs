/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerJawFlapper.cpp
*/
static float timeCounter; // size: 0x4, address: 0x80824CE8
// Range: 0x80210A70 -> 0x80210A94
void * zPlayerJawFlapper::zPlayerJawFlapper() {
}
// signature: zPlayerJawFlapper::Init(World::xOGModel *, int, int, zPlayerJawFlapperNS::JawBoneMovementType, int)
// Range: 0x80210AA0 -> 0x80210B2C
void zPlayerJawFlapper::Init() {
    // References
    // -> class xQuat g_IQ;
}
// Range: 0x80210B30 -> 0x80210B60
void zPlayerJawFlapper::Reset() {
    // References
    // -> class xQuat g_IQ;
}
// signature: zPlayerJawFlapper::SetupFXAtBone(FX::zFXSpawn *, int)
// Range: 0x80210B60 -> 0x80210B6C
void zPlayerJawFlapper::SetupFXAtBone() {
}
// signature: zPlayerJawFlapper::SetJawLimits(float, float)
// Range: 0x80210B70 -> 0x80210B7C
void zPlayerJawFlapper::SetJawLimits() {
}
// signature: zPlayerJawFlapper::SetJawCyclePeriod(float)
// Range: 0x80210B80 -> 0x80210B88
void zPlayerJawFlapper::SetJawCyclePeriod() {
}
// signature: zPlayerJawFlapper::Update(float)
// Range: 0x80210B90 -> 0x80210BA4
void zPlayerJawFlapper::Update() {
}
// Range: 0x80210BB0 -> 0x80210C58
void zPlayerJawFlapper::Start(class zPlayerJawFlapper * this /* r31 */) {
}
// Range: 0x80210C60 -> 0x80210CAC
void zPlayerJawFlapper::Stop(class zPlayerJawFlapper * this /* r31 */) {
}
// Range: 0x80210CB0 -> 0x8021148C
void zPlayerJawFlapper::ApplyBoneModificationAfterAnimatrices(class zPlayerJawFlapper * this /* r30 */, class Matrix43 * skinMat /* r31 */) {
    // Local variables
    class xMat4x3 jawMatrix; // r1+0x150
    class xMat4x3 rotationMatrix; // r1+0x110
    class xQuat targetQuat; // r1+0x50
    class xQuat currentQuat; // r1+0x40
    class xQuat blendedTargetQuat; // r1+0x30
    class xMat4x3 blendMat; // r1+0xD0
    class Matrix43 blendMatNG; // r1+0xA0

    {
        // Range: 0x80211190 -> 0x80211384
        // Local variables
        int i; // r28

        {
            // Range: 0x802111B4 -> 0x80211384
            // Local variables
            class xMat4x3 jawBoneChildMatrix; // r1+0x60
            class xVec3 newPosition; // r1+0x14
            class xVec3 oldPosition; // r1+0x20
        }
    }

    // References
    // -> class xVec3 g_O3;
}
// Range: 0x80211490 -> 0x80211604
void zPlayerJawFlapper::UpdateNextJawRotation(class zPlayerJawFlapper * this /* r30 */, float dt /* f31 */) {
    // References
    // -> static float timeCounter;
}
