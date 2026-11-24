/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zRuntimeEntityFX.cpp
*/
// signature: zRuntimeEntityFX::_EmitEffect(const char *, FX::zFXSpawn *, xMat4x3 *, bool, bool)
// Range: 0x80228880 -> 0x802289A8
class zFXSpawn * zRuntimeEntityFX::_EmitEffect(class zRuntimeEntityFX * this /* r26 */, class zFXSpawn * fx /* r27 */, class xMat4x3 * location /* r28 */, bool enableFXVelocityScaling /* r29 */, bool autoRelease /* r30 */) {
    // Local variables
    class zFXSpawn * fxSpawn; // r31

    {
        // Range: 0x802288B8 -> 0x80228940
        // Local variables
        class xVec3 * dPos; // r9
    }
    {
        // Range: 0x80228940 -> 0x80228988
        // Local variables
        class xBase * driver; // r5
    }
}
// Range: 0x802289C0 -> 0x80228CE0
void zRuntimeEntityFX::Setup(class zRuntimeEntityFX * this /* r30 */, class zRuntimeEntityCreateInfo * ci /* r31 */) {
}
// Range: 0x80228CE0 -> 0x80228E98
void zRuntimeEntityFX::Spawned(class zRuntimeEntityFX * this /* r31 */) {
    // Local variables
    class xMat4x3 curMat; // r1+0x8

    {
        // Range: 0x80228D78 -> 0x80228E4C
        // Local variables
        class xMat4x3 * ownerMatPtr; // r0
    }
}
