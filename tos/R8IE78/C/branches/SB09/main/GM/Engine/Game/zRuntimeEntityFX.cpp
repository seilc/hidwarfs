/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zRuntimeEntityFX.cpp
*/
// signature: zRuntimeEntityFX::_EmitEffect(const char *, FX::zFXSpawn *, xMat4x3 *, bool, bool)
// Range: 0x8012EA40 -> 0x8012EB80
class zFXSpawn * zRuntimeEntityFX::_EmitEffect(class zRuntimeEntityFX * this /* r26 */, class zFXSpawn * fx /* r27 */, class xMat4x3 * location /* r28 */, bool enableFXVelocityScaling /* r30 */, bool autoRelease /* r29 */) {
    // Local variables
    class zFXSpawn * fxSpawn; // r31

    {
        // Range: 0x8012EA78 -> 0x8012EB00
        // Local variables
        class xVec3 * dPos; // r9
    }
    {
        // Range: 0x8012EB00 -> 0x8012EB60
        // Local variables
        class xBase * driver; // r30
    }
}
// Range: 0x8012EB80 -> 0x8012ED58
void zRuntimeEntityFX::Setup(class zRuntimeEntityFX * this /* r30 */, class zRuntimeEntityCreateInfo * ci /* r31 */) {
}
// Range: 0x8012ED60 -> 0x8012ED7C
void zRuntimeEntityFX::Exit() {
}
// Range: 0x8012ED80 -> 0x8012EE78
void zRuntimeEntityFX::Spawned(class zRuntimeEntityFX * this /* r30 */) {
    // Local variables
    class xMat4x3 curMat; // r1+0x8

    {
        // Range: 0x8012EDD0 -> 0x8012EE34
        // Local variables
        class xMat4x3 * ownerMatPtr; // r31
    }
}
// Range: 0x8012EE80 -> 0x8012EEC4
void zRuntimeEntityFX::Flush(class zRuntimeEntityFX * this /* r31 */) {
}
// signature: zRuntimeEntityFX::Killed(bool)
// Range: 0x8012EED0 -> 0x8012EF90
void zRuntimeEntityFX::Killed(class zRuntimeEntityFX * this /* r31 */) {
    {
        // Range: 0x8012EED8 -> 0x8012EF34
        // Local variables
        class xMat4x3 curMat; // r1+0x10
    }
}
// Range: 0x8012EF90 -> 0x8012EFFC
void zRuntimeEntityFX::Pinged(class zRuntimeEntityFX * this /* r31 */) {
    // Local variables
    class xMat4x3 curMat; // r1+0x8
}
// Range: 0x8012F000 -> 0x8012F06C
void zRuntimeEntityFX::TimedOut(class zRuntimeEntityFX * this /* r31 */) {
    // Local variables
    class xMat4x3 curMat; // r1+0x8
}
// signature: zRuntimeEntityFX::Update(float)
// Range: 0x8012F070 -> 0x8012F0D4
void zRuntimeEntityFX::Update(class zRuntimeEntityFX * this /* r31 */) {
    // Local variables
    class xMat4x3 curMat; // r1+0x8
}
