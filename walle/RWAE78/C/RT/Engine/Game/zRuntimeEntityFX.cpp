/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zRuntimeEntityFX.cpp
*/
// Range: 0x801AF270 -> 0x801AF2A8
void * zRuntimeEntityFX::zRuntimeEntityFX() {
}
// signature: zRuntimeEntityFX::_EmitEffect(const char *, zFXScriptSpawnPt *, xMat4x3 *, bool, bool)
// Range: 0x801AF2B0 -> 0x801AF444
class zFXScriptSpawnPt * zRuntimeEntityFX::_EmitEffect(class zRuntimeEntityFX * this /* r27 */, class zFXScriptSpawnPt * fx /* r28 */, class xMat4x3 * location /* r29 */, bool enableFXVelocityScaling /* r30 */, bool autoRelease /* r26 */) {
    // Local variables
    class zFXScriptSpawnPt * fxSpawn; // r31

    {
        // Range: 0x801AF2F8 -> 0x801AF3C0
        // Local variables
        class xVec3 * dPos; // r0
    }
    {
        // Range: 0x801AF3C0 -> 0x801AF418
        // Local variables
        class xBase * owner; // r5
    }
}
// signature: zRuntimeEntityFX::Setup(const zRuntimeEntityCreateInfo *)
// Range: 0x801AF460 -> 0x801AFBCC
void zRuntimeEntityFX::Setup() {
    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// signature: zRuntimeEntityFX::Killed(bool)
// Range: 0x801AFBD0 -> 0x801AFCD8
void zRuntimeEntityFX::Killed(class zRuntimeEntityFX * this /* r30 */) {
    {
        // Range: 0x801AFBD8 -> 0x801AFC3C
        // Local variables
        class xMat4x3 curMat; // r1+0x10
    }
}
