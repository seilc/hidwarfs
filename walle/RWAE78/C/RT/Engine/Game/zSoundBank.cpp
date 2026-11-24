/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zSoundBank.cpp
*/
static class @class soundBanks[64]; // size: 0x400, address: 0x807B2B80
static int soundBanksCount; // size: 0x4, address: 0x807B2F80
static class xOGSchema SoundBankSchema; // size: 0x18, address: 0x807B2F88
static class SchemaRegistrator SoundBankSchemaReg; // size: 0x8, address: 0x807B2FA0
// Range: 0x801C0D20 -> 0x801C0ED8
static void * @unnamed@WAD03_cpp@::LoadSoundBank(unsigned long long aid /* r24:r27 */, void * indata /* r31 */) {
    // Local variables
    char * soundBankName; // r28
    int len; // r0
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
// Range: 0x801C0EE0 -> 0x801C1258
static void @unnamed@WAD03_cpp@::ReleaseSoundBankByIndex() {
    // Local variables
    char buff[256]; // r1+0x20
    int len; // r27

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> static int soundBanksCount;
    // -> static class zQueue sQueue;
    // -> bool gSoundReadyToExit;
    // -> static class @class soundBanks[64];
    // -> bool gSysForceExit;
}
// Range: 0x801D92E0 -> 0x801D9330
void World::xOGEntitySoundBankWrap::Destroy(class xOGEntitySoundBankWrap * this /* r31 */) {
}
// Range: 0x801D9220 -> 0x801D92D4
void World::xOGEntitySoundBankWrap::Deactivate(class xOGEntitySoundBankWrap * this /* r31 */) {
    // References
    // -> static class @class soundBanks[64];
    // -> static int soundBanksCount;
    // -> bool gSysForceExit;
    // -> class zGlobals globals;
}
