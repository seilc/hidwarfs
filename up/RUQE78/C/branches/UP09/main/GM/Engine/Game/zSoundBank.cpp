/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSoundBank.cpp
*/
static class @class soundBanks[64]; // size: 0x400, address: 0x80829020
static int soundBanksCount; // size: 0x4, address: 0x80829420
// Range: 0x80256460 -> 0x80256644
static void * @unnamed@WAD03_cpp@::LoadSoundBank(unsigned long long aid /* r24:r26 */, void * indata /* r30 */) {
    // Local variables
    char * soundBankName; // r27
    int len; // r0
    enum FMOD_RESULT fRes; // r0
    char sceneAbr[5]; // r1+0xC
    char mediaPath[256]; // r1+0x318
    char fileName[256]; // r1+0x218
    char newName[256]; // r1+0x118
    char * language; // r24
    char * fileExt; // r0
    class EventProject * eProject; // r1+0x8

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> static class zSoundModule soundMod;
    // -> static class @class soundBanks[64];
    // -> static int soundBanksCount;
    // -> bool gSysForceExit;
    // -> class zGlobals globals;
}
// signature: @unnamed@WAD03_cpp@::ReleaseSoundBankByIndex(int)
// Range: 0x80256650 -> 0x802567D0
static void @unnamed@WAD03_cpp@::ReleaseSoundBankByIndex() {
    // Local variables
    char buff[256]; // r1+0x18
    int len; // r24

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> static int soundBanksCount;
    // -> static class @class soundBanks[64];
    // -> bool gSysForceExit;
}
// Range: 0x802902C0 -> 0x80290374
void World::xOGEntitySoundBankWrap::Deactivate(class xOGEntitySoundBankWrap * this /* r31 */) {
    // References
    // -> static class @class soundBanks[64];
    // -> static int soundBanksCount;
    // -> bool gSysForceExit;
    // -> class zGlobals globals;
}
// Range: 0x802567D0 -> 0x802568A0
class Entity * World::SoundBankWrap::Create(class EntityHandleBase * handle /* r29 */, class SoundBankWrap * asset /* r30 */) {
    // References
    // -> struct {} __vt__Q25World22xOGEntitySoundBankWrap;
    // -> struct {} __vt__Q25World9xOGEntity;
}
