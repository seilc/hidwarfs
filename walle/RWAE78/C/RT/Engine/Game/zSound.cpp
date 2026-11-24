/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zSound.cpp
*/
static class zSoundModule soundMod; // size: 0x460, address: 0x807B26F8
static bool s_soundWrappersUpdatePaused; // size: 0x1, address: 0x807B2B58
static class ModuleRegistrator soundModreg; // size: 0x8, address: 0x807B2B60
static bool gUnmuteOneliners; // size: 0x1, address: 0x807B2B68
static bool gMuteOneliners; // size: 0x1, address: 0x807B2B69
static bool gUnmuteRequested; // size: 0x1, address: 0x807B2B6A
static class EventSystem * fmodEventSys; // size: 0x4, address: 0x807B2B6C
static class System * fmodSys; // size: 0x4, address: 0x807B2B70
static class Event * eventLastMusic; // size: 0x4, address: 0x807B2B74
static bool wasMuted; // size: 0x1, address: 0x807B2B78
// Range: 0x801BE670 -> 0x801BE67C
class zSoundModule * GlobalGetSoundModule() {
    // References
    // -> static class zSoundModule soundMod;
}
// signature: @unnamed@WAD03_cpp@::FileHandleData::DvdCallback(long, DVDFileInfo *)
// Range: 0x801BEAB0 -> 0x801BEAC0
static void @unnamed@WAD03_cpp@::FileHandleData::DvdCallback() {
    // Local variables
    class FileHandleData * fhd; // r0
}
// signature: @unnamed@WAD03_cpp@::myopen(const char *, int, unsigned int *, void **, void **)
// Range: 0x801BE680 -> 0x801BE7B8
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myopen(char * name /* r27 */, unsigned int * filesize /* r28 */, void * * handle /* r29 */) {
    // Local variables
    class FileHandleData * fp; // r30
    bool openSuccess; // r0

    // References
    // -> class Global * gGlobal;
}
// signature: @unnamed@WAD03_cpp@::myclose(void *, void *)
// Range: 0x801BE7C0 -> 0x801BE87C
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myclose() {
    // Local variables
    class FileHandleData * fp; // r31
    bool closeSuccess; // r0

    // References
    // -> class Global * gGlobal;
}
// signature: @unnamed@WAD03_cpp@::myread(void *, void *, unsigned int, unsigned int *, void *)
// Range: 0x801BE880 -> 0x801BEAAC
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myread(void * buf /* r27 */, unsigned int count /* r28 */, unsigned int * read /* r29 */) {
    // Local variables
    class FileHandleData * fp; // r31
    unsigned int rd; // r0
    unsigned int bytesleft; // r30
    int realsize; // r5
    int readResult; // r0

    {
        // Range: 0x801BE9B0 -> 0x801BEA7C
        // Local variables
        int readResult; // r0
        char tempBuf[32]; // r1+0x20
    }
}
// signature: @unnamed@WAD03_cpp@::myseek(void *, unsigned int, void *)
// Range: 0x801BEAC0 -> 0x801BEAF0
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myseek() {
    // Local variables
    class FileHandleData * fp; // r0
    int retval; // r0
}
// signature: zSoundModule::Startup(int)
// Range: 0x801BEAF0 -> 0x801BECE4
void zSoundModule::Startup(class zSoundModule * this /* r29 */) {
    // Local variables
    unsigned int fmodversion; // r1+0x8
    unsigned char soundmode; // r0
    char medPath[256]; // r1+0x10

    // References
    // -> bool gSysForceExit;
    // -> class StartupConfig * config;
    // -> static class System * fmodSys;
    // -> static class EventSystem * fmodEventSys;
}
// signature: zSoundModule::Shutdown(int)
// Range: 0x801BECF0 -> 0x801BED6C
void zSoundModule::Shutdown(class zSoundModule * this /* r30 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
}
// signature: zSoundModule::Update(int)
// Range: 0x801BED70 -> 0x801BF4A4
void zSoundModule::Update(class zSoundModule * this /* r25 */) {
    // Local variables
    float dt; // f0
    int i; // r30

    // References
    // -> static bool gUnmuteRequested;
    // -> static class System * fmodSys;
    // -> static class zQueue sPhysQueue;
    // -> static bool s_soundWrappersUpdatePaused;
    // -> float dt;
    // -> static class zQueue sQueue;
    // -> static bool wasMuted;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
}
// Range: 0x801BF4B0 -> 0x801BF500
class Event * zSoundModule::Stop(class Event * event /* r31 */) {
    // References
    // -> bool gSysForceExit;
}
// signature: zSoundModule::GetEvent(FMOD::EventGroup *, int, int &, int *, unsigned int, int)
// Range: 0x801BF500 -> 0x801BF88C
class Event * zSoundModule::GetEvent(class zSoundModule * this /* r26 */, class EventGroup * eGroup /* r27 */, int playOrder /* r28 */, int * levelDyn /* r29 */, int * indicesTreeDyn /* r30 */, unsigned int eventMode /* r31 */) {
    // Local variables
    class Event * event; // r1+0xC
    class EventGroup * subGroup; // r1+0x8

    {
        // Range: 0x801BF70C -> 0x801BF874
        // Local variables
        class EventGroup * eGroupInst; // r3

        {
            // Range: 0x801BF718 -> 0x801BF7B4
            // Local variables
            int i; // r23
        }
    }

    // References
    // -> bool gSysForceExit;
}
// Range: 0x801BF890 -> 0x801BFDB8
class Event * zSoundModule::Play(class zSoundModule * this /* r26 */, class zSoundAsset * soundAssetToPlay /* r27 */, int playOrder /* r28 */, int eventIndex /* r29 */, char * eventName /* r30 */, int iSurface /* r31 */) {
    // Local variables
    class Event * event; // r1+0x24
    class EventGroup * eGroup; // r1+0x20
    class EventGroup * eNextGroup; // r1+0x1C
    char * rootGroupName; // r20
    int * indicesTree; // r19
    int indicesCount; // r18
    int * levelDyn; // r1+0x3C
    int * indicesTreeDyn; // r14
    unsigned int eventMode; // r17
    class EventProject * eProject; // r1+0x18
    enum FMOD_RESULT res; // r0
    bool isMusic; // r16
    int i; // r15

    {
        // Range: 0x801BFA68 -> 0x801BFBB8
        // Local variables
        int eIdx; // r0
        int idx; // r21
    }
    {
        // Range: 0x801BFC00 -> 0x801BFCF0
        // Local variables
        class EventGroup * groupSearch; // r0

        {
            // Range: 0x801BFC20 -> 0x801BFC9C
            // Local variables
            char * pSurfaceNames[5]; // r1+0x28
        }
    }
    {
        // Range: 0x801BFCF0 -> 0x801BFDA0
        // Local variables
        char * pLoopingString; // r1+0x14
    }

    // References
    // -> static class Event * eventLastMusic;
    // -> class zGlobals globals;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x801BFDC0 -> 0x801BFF64
class Event * zSoundModule::GetEvent(class EventGroup * eGroup /* r23 */, char * propName /* r24 */, char * propTextValue /* r25 */, char * propTextValueDefault /* r26 */, unsigned int eventMode /* r27 */) {
    // Local variables
    int eventCount; // r1+0x10
    class Event * event; // r1+0xC
    char * eParam; // r1+0x8
    int idx; // r29

    {
        // Range: 0x801BFE24 -> 0x801BFF00
        // Local variables
        int i; // r28
    }

    // References
    // -> bool gSysForceExit;
}
// signature: zSoundModule::FreeEventData(const char *)
// Range: 0x801BFF70 -> 0x801C0044
void zSoundModule::FreeEventData() {
    // Local variables
    class EventProject * eProject; // r1+0x10
    int numProjectGroups; // r1+0xC

    {
        // Range: 0x801BFFD4 -> 0x801C0020
        // Local variables
        int groupIndex; // r31

        {
            // Range: 0x801BFFD4 -> 0x801C0020
            // Local variables
            class EventGroup * eGroup; // r1+0x8
        }
    }

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x801C0050 -> 0x801C019C
bool zSoundModule::LoadGroupData(char * rootName /* r29 */) {
    // Local variables
    enum FMOD_RESULT res; // r0
    class EventProject * eGroup; // r1+0x10
    int count; // r1+0xC

    {
        // Range: 0x801C0104 -> 0x801C0168
        // Local variables
        int i; // r29

        {
            // Range: 0x801C0104 -> 0x801C0168
            // Local variables
            class EventGroup * eSubGroup; // r1+0x8
        }
    }

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x801C01A0 -> 0x801C0244
void zSoundModule::SoundCategorySetFadeUpTime(class zSoundModule * this /* r28 */, char * soundCategory /* r29 */, float time /* f31 */) {
    // Local variables
    int i; // r30
}
// signature: zSoundModule::Set3DListenerAttributes(int, FMOD_VECTOR *, FMOD_VECTOR *, FMOD_VECTOR *, FMOD_VECTOR *)
// Range: 0x801C0250 -> 0x801C0290
void zSoundModule::Set3DListenerAttributes(class FMOD_VECTOR * pos /* r11 */, class FMOD_VECTOR * vel /* r10 */, class FMOD_VECTOR * at /* r9 */) {
    // References
    // -> static class System * fmodSys;
    // -> bool gSysForceExit;
}
// Range: 0x801C0290 -> 0x801C0440
void zSoundModule::SetMasterVolumeMusic(class zSoundModule * this /* r30 */, float value /* f31 */) {
    // Local variables
    float volume; // f0

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x801C0440 -> 0x801C07F4
void zSoundModule::SetMasterVolumeSFX(class zSoundModule * this /* r31 */, float value /* f31 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::SetMasterVolumeCine(float)
// Range: 0x801C0800 -> 0x801C0808
void zSoundModule::SetMasterVolumeCine() {
}
// Range: 0x801C0810 -> 0x801C08DC
void zSoundModule::SoundCategorySetMute(char * soundCategory /* r6 */, bool muted /* r30 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::SoundCategorySetVolume(const char *, float)
// Range: 0x801C08E0 -> 0x801C09A8
void zSoundModule::SoundCategorySetVolume(float volume /* f31 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::SoundCategoryStopAllEvents(const char *)
// Range: 0x801C09B0 -> 0x801C0A68
void zSoundModule::SoundCategoryStopAllEvents() {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x801C0A70 -> 0x801C0B78
void zSoundModule::SoundCategoryPauseUnpauseAllExcept(char * soundCategory /* r25 */, bool pause /* r26 */) {
    // Local variables
    int i; // r27

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> static class zSoundModule soundMod;
    // -> bool gSysForceExit;
}
// Range: 0x801C0B80 -> 0x801C0C44
void zSoundModule::PauseMaster() {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x801C0C50 -> 0x801C0D14
void zSoundModule::UnPauseMaster() {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
