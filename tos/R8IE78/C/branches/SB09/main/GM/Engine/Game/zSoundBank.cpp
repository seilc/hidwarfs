/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSoundBank.cpp
*/
static class @class soundBanks[64]; // size: 0x400, address: 0x807578F0
static int soundBanksCount; // size: 0x4, address: 0x80757CF0
static bool musicSystemLoaded; // size: 0x1, address: 0x80757CF4
class zSoundCue * cueStack[10]; // size: 0x28, address: 0x80757CF8
int stackTail; // size: 0x4, address: 0x80757D20
// signature: @unnamed@WAD03_cpp@::ReleaseSoundBankByIndex(int)
// Range: 0x8016C750 -> 0x8016C828
static void @unnamed@WAD03_cpp@::ReleaseSoundBankByIndex() {
    // Local variables
    char buff[256]; // r1+0x8
    int len; // r25

    // References
    // -> static class zSoundModule soundMod;
    // -> static int soundBanksCount;
    // -> static class @class soundBanks[64];
    // -> bool gSysForceExit;
}
// Range: 0x8016C830 -> 0x8016C8A4
void zSoundFreeMusicData() {
    // Local variables
    class MusicSystem * ms; // r30

    // References
    // -> static bool musicSystemLoaded;
}
// Range: 0x8016C8B0 -> 0x8016C910
void zSoundLoadMusicData() {
    // Local variables
    class MusicSystem * ms; // r0

    // References
    // -> static bool musicSystemLoaded;
}
// Range: 0x80188970 -> 0x80188A2C
void World::xOGEntitySoundBankWrap::Deactivate(class xOGEntitySoundBankWrap * this /* r31 */) {
    // References
    // -> static class @class soundBanks[64];
    // -> static int soundBanksCount;
    // -> bool gSysForceExit;
    // -> class zGlobals globals;
}
// Range: 0x8016C910 -> 0x8016CB2C
class Entity * World::SoundBankWrap::Create(class EntityHandleBase * handle /* r25 */, class SoundBankWrap * asset /* r24 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> static class zSoundModule soundMod;
    // -> static class @class soundBanks[64];
    // -> static int soundBanksCount;
    // -> bool gSysForceExit;
    // -> class zGlobals globals;
    // -> struct {} __vt__Q25World22xOGEntitySoundBankWrap;
}
// signature: zSoundCue::popStack(zSoundCue *)
// Range: 0x8016CB30 -> 0x8016CBE8
void zSoundCue::popStack() {
    {
        // Range: 0x8016CB60 -> 0x8016CBE4
        // Local variables
        int deleteTarget; // r6

        {
            // Range: 0x8016CB68 -> 0x8016CB98
            // Local variables
            int i; // r7
        }
        {
            // Range: 0x8016CBA0 -> 0x8016CBD4
            // Local variables
            int i; // r0
        }
    }

    // References
    // -> class zSoundCue * cueStack[10];
    // -> int stackTail;
}
// signature: zSoundCue::pushStack(zSoundCue *)
// Range: 0x8016CBF0 -> 0x8016CC1C
void zSoundCue::pushStack() {
    // References
    // -> class zSoundCue * cueStack[10];
    // -> int stackTail;
}
// Range: 0x8016CC20 -> 0x8016CC70
void zSoundCue::Init(class zSoundCue * this /* r30 */, class zSoundCueAsset * inAsset /* r31 */) {
}
// Range: 0x8016CC70 -> 0x8016CCD4
void zSoundCue::SceneExit(class zSoundCue * this /* r31 */) {
}
// Range: 0x8016CCE0 -> 0x8016CD3C
void zSoundCue::Reset(class zSoundCue * this /* r31 */) {
}
// Range: 0x8016CD40 -> 0x8016CD60
void zSoundCue::Setup() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8016CD60 -> 0x8016CDB0
bool zSoundCue::IsActive() {
    {
        // Range: 0x8016CD6C -> 0x8016CD9C
        // Local variables
        bool ret; // r1+0x8
    }
}
// Range: 0x8016CDB0 -> 0x8016CE20
void zSoundCue::cueBegin(class zSoundCue * this /* r31 */) {
}
// Range: 0x8016CE20 -> 0x8016CE40
void zSoundCue::cueEnd() {
}
// signature: zSoundCue::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8016CE40 -> 0x8016CF84
void zSoundCue::HandleEvent(class zSoundCue * this /* r31 */) {
    // References
    // -> class zSoundCue * cueStack[10];
    // -> int stackTail;
    // -> class zGlobals globals;
}
// Range: 0x8016CF90 -> 0x8016D020
class Entity * Sext::zSoundCueAsset::Create(class EntityHandleBase * handle /* r29 */, class zSoundCueAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__9zSoundCue;
}
