/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerSwitcher.cpp
*/
bool updated[4]; // size: 0x4, address: 0x80825558
class zSoundFX * characterSwitchSnd; // size: 0x4, address: 0x8082555C
class FMOD_VECTOR sndPos; // size: 0xC, address: 0x80825560
// Range: 0x802130F0 -> 0x80213614
void zPlayerSwitcher::Switch(class zPlayer * from /* r29 */, class zPlayer * to /* r30 */) {
    // Local variables
    int switchStatus; // r27
    class zPlayerInput * newSwapA; // r1+0x10
    class zPlayerInput * newSwapB; // r1+0xC
    class EventActionHudSetPlayer params; // r1+0x18

    // References
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
    // -> class zSoundWiimoteSpeaker * SoundList[18];
    // -> static class zUpWiimoteSoundHelper Instance;
    // -> class FMOD_VECTOR sndPos;
    // -> bool gSoundReadyToExit;
    // -> class zSoundFX * characterSwitchSnd;
    // -> class zGlobals globals;
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80213620 -> 0x8021368C
void zPlayerSwitcher::SceneSetup() {
    // References
    // -> class zSoundFX * characterSwitchSnd;
    // -> bool updated[4];
}
// signature: zPlayerSwitcher::Update(float, int)
// Range: 0x80213690 -> 0x802140A0
void zPlayerSwitcher::Update(int forceSwitch /* r31 */) {
    {
        // Range: 0x802136C8 -> 0x80214074
        // Local variables
        int i; // r21

        {
            // Range: 0x802136C8 -> 0x802136C8
            // Local variables
            int j; // r20
        }
        {
            // Range: 0x802136C8 -> 0x80213B94
            // Local variables
            class zCommonPlayer * rPlayer; // r20
        }
        {
            // Range: 0x80213B94 -> 0x80213C8C
            // Local variables
            class zCommonPlayer * rPlayer; // r20
        }
        {
            // Range: 0x80213C8C -> 0x80213D84
            // Local variables
            class zCommonPlayer * rPlayer; // r20
        }
        {
            // Range: 0x80213D84 -> 0x80213E04
            // Local variables
            class zCommonPlayer * rPlayer; // r20
        }
        {
            // Range: 0x80213E04 -> 0x80213F74
            // Local variables
            class zCommonPlayer * rPlayer; // r20
        }
        {
            // Range: 0x80213F74 -> 0x80214074
            // Local variables
            class zCommonPlayer * rPlayer; // r20
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zPlayerInputPadMgr padManager;
    // -> bool updated[4];
    // -> unsigned int numLiveEnemies;
}
