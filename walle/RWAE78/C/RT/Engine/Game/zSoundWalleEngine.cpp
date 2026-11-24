/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zSoundWalleEngine.cpp
*/
// Range: 0x801C2BA0 -> 0x801C2C8C
void zSoundWalleEngine::updateSound(class zSoundWalleEngine * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801C2C90 -> 0x801C2E94
void zSoundWalleEngine::sceneEnter(class zSoundWalleEngine * this /* r31 */) {
    // References
    // -> static class zSoundModule soundMod;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
    // -> class zGlobals globals;
}
// Range: 0x801C2EA0 -> 0x801C2EAC
void zSoundWalleEngine::sceneReset() {
}
// Range: 0x801C2EB0 -> 0x801C2F30
void zSoundWalleEngine::sceneExit(class zSoundWalleEngine * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// signature: zSoundWalleEngine::DynamicParamRPM::updateValue(float)
// Range: 0x801C2F30 -> 0x801C3004
void zSoundWalleEngine::DynamicParamRPM::updateValue() {
    // Local variables
    float valueNew; // f0
    float delta; // f2
    float goal; // f0

    {
        // Range: 0x801C2F88 -> 0x801C2FB0
        // Local variables
        float rpmDecel; // f0
        float rpmDelta; // f1
    }
    {
        // Range: 0x801C2FB0 -> 0x801C2FD4
        // Local variables
        float rpmAccel; // f0
        float rpmDelta; // f1
    }

    // References
    // -> class zGlobals globals;
}
// signature: zSoundWalleEngine::DynamicParamLoad::updateValue(float)
// Range: 0x801C3010 -> 0x801C3054
void zSoundWalleEngine::DynamicParamLoad::updateValue() {
    // Local variables
    float valueNew; // f1

    // References
    // -> class zGlobals globals;
}
