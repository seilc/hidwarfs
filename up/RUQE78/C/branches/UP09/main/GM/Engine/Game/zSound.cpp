/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSound.cpp
*/
static class zSoundModule soundMod; // size: 0x590, address: 0x80828A68
static bool s_soundWrappersUpdatePaused; // size: 0x1, address: 0x80828FF8
static class ModuleRegistrator soundModreg; // size: 0x8, address: 0x80829000
static bool gUnmuteOneliners; // size: 0x1, address: 0x80829008
static bool gMuteOneliners; // size: 0x1, address: 0x80829009
static bool gUnmuteRequested; // size: 0x1, address: 0x8082900A
static class EventSystem * fmodEventSys; // size: 0x4, address: 0x8082900C
static class System * fmodSys; // size: 0x4, address: 0x80829010
static class Event * eventLastMusic; // size: 0x4, address: 0x80829014
static bool wasMuted; // size: 0x1, address: 0x80829018
// Range: 0x80251A30 -> 0x80251A3C
class System * zGetFMODSystem() {
    // References
    // -> static class System * fmodSys;
}
// Range: 0x80251A40 -> 0x80251A4C
class zSoundModule * GlobalGetSoundModule() {
    // References
    // -> static class zSoundModule soundMod;
}
// signature: @unnamed@WAD03_cpp@::myopen(const char *, int, unsigned int *, void **, void **)
// Range: 0x80251A50 -> 0x80251B60
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myopen(char * name /* r28 */, unsigned int * filesize /* r29 */, void * * handle /* r30 */) {
    // Local variables
    class FileHandleData * fp; // r31

    // References
    // -> class Global * gGlobal;
}
// signature: @unnamed@WAD03_cpp@::myclose(void *, void *)
// Range: 0x80251B60 -> 0x80251BC8
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myclose() {
    // Local variables
    class FileHandleData * fp; // r31

    // References
    // -> class Global * gGlobal;
}
// signature: @unnamed@WAD03_cpp@::myread(void *, void *, unsigned int, unsigned int *, void *)
// Range: 0x80251BD0 -> 0x80251D08
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myread(void * buf /* r26 */, unsigned int count /* r27 */, unsigned int * read /* r28 */) {
    // Local variables
    class FileHandleData * fp; // r31
    unsigned int rd; // r0
    unsigned int bytesleft; // r30
    int realsize; // r5
    int readResult; // r29

    {
        // Range: 0x80251C88 -> 0x80251CD8
        // Local variables
        int readResult; // r0
        char tempBuf[32]; // r1+0x20
    }
}
// signature: @unnamed@WAD03_cpp@::myseek(void *, unsigned int, void *)
// Range: 0x80251D10 -> 0x80251D48
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myseek() {
    // Local variables
    class FileHandleData * fp; // r0
}
// signature: zSoundModule::Startup(int)
// Range: 0x80251D50 -> 0x80251F48
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
// Range: 0x80251F50 -> 0x80251F74
void zSoundModule::SceneSetup() {
    // References
    // -> static class System * fmodSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::Shutdown(int)
// Range: 0x80251F80 -> 0x8025200C
void zSoundModule::Shutdown(class zSoundModule * this /* r29 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
}
// signature: zSoundModule::Update(int)
// Range: 0x80252010 -> 0x802532C4
void zSoundModule::Update(class zSoundModule * this /* r29 */) {
    // Local variables
    float dt; // f0

    {
        // Range: 0x802523D0 -> 0x802524B0
        // Local variables
        float vol; // f30
    }
    {
        // Range: 0x802525A0 -> 0x80252680
        // Local variables
        float vol; // f30
    }

    // References
    // -> static bool gUnmuteRequested;
    // -> static class System * fmodSys;
    // -> static class zQueue sPhysQueue;
    // -> static class zSoundModule soundMod;
    // -> static bool s_soundWrappersUpdatePaused;
    // -> float dt;
    // -> class zGlobals globals;
    // -> static class zQueue sQueue;
    // -> static bool wasMuted;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
}
// Range: 0x802532D0 -> 0x80253320
class Event * zSoundModule::Stop(class Event * event /* r31 */) {
    // References
    // -> bool gSysForceExit;
}
// signature: zSoundModule::GetEvent(FMOD::EventGroup *, int, int &, int *, unsigned int, int)
// Range: 0x80253320 -> 0x80253784
class Event * zSoundModule::GetEvent(class zSoundModule * this /* r26 */, class EventGroup * eGroup /* r27 */, int playOrder /* r28 */, int & levelDyn /* r29 */, int * indicesTreeDyn /* r30 */, unsigned int eventMode /* r31 */) {
    // Local variables
    class Event * event; // r1+0xC
    class EventGroup * subGroup; // r1+0x8

    {
        // Range: 0x802535BC -> 0x8025376C
        // Local variables
        class EventGroup * eGroupInst; // r3

        {
            // Range: 0x802535C8 -> 0x80253688
            // Local variables
            int i; // r23
        }
    }

    // References
    // -> bool gSysForceExit;
}
// Range: 0x80253790 -> 0x80253E28
class Event * zSoundModule::Play(class zSoundModule * this /* r27 */, class zSoundAsset * soundAssetToPlay /* r28 */, int playOrder /* r29 */, int eventIndex /* r14 */, char * eventName /* r30 */, int iSurface /* r31 */) {
    // Local variables
    class Event * event; // r1+0x24
    class EventGroup * eGroup; // r1+0x20
    class EventGroup * eNextGroup; // r1+0x1C
    enum FMOD_RESULT res; // r0
    char * rootGroupName; // r20
    int * indicesTree; // r19
    int indicesCount; // r18
    int & levelDyn; // r1+0x68
    int * indicesTreeDyn; // r1+0x64
    unsigned int eventMode; // r17
    bool isMusic; // r16
    int i; // r15

    {
        // Range: 0x802537FC -> 0x80253990
        // Local variables
        class EventProject * eProject; // r1+0x18
    }
    {
        // Range: 0x80253990 -> 0x80253B4C
        // Local variables
        int eIdx; // r0
        int idx; // r21
    }
    {
        // Range: 0x80253B94 -> 0x80253CD4
        // Local variables
        class EventGroup * groupSearch; // r0

        {
            // Range: 0x80253BB4 -> 0x80253C80
            // Local variables
            char * pSurfaceNames[15]; // r1+0x28
        }
    }
    {
        // Range: 0x80253CD4 -> 0x80253E10
        // Local variables
        char * pLoopingString; // r1+0x14
    }

    // References
    // -> static class Event * eventLastMusic;
    // -> static class zSoundModule soundMod;
    // -> class zGlobals globals;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80253E30 -> 0x80254040
class Event * zSoundModule::GetEvent(class EventGroup * eGroup /* r31 */, char * propName /* r23 */, char * propTextValue /* r24 */, char * propTextValueDefault /* r25 */, unsigned int eventMode /* r26 */) {
    // Local variables
    int eventCount; // r1+0x10
    class Event * event; // r1+0xC
    char * eParam; // r1+0x8
    int idx; // r28

    {
        // Range: 0x80253E94 -> 0x80253FB8
        // Local variables
        int i; // r27
    }

    // References
    // -> bool gSysForceExit;
}
// signature: zSoundModule::FreeEventData(const char *)
// Range: 0x80254040 -> 0x80254114
void zSoundModule::FreeEventData() {
    // Local variables
    class EventProject * eProject; // r1+0x10
    int numProjectGroups; // r1+0xC

    {
        // Range: 0x802540A4 -> 0x802540F0
        // Local variables
        int groupIndex; // r31

        {
            // Range: 0x802540A4 -> 0x802540F0
            // Local variables
            class EventGroup * eGroup; // r1+0x8
        }
    }

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80254120 -> 0x80254318
bool zSoundModule::LoadGroupData(char * rootName /* r29 */, bool isStreaming /* r28 */) {
    // Local variables
    enum FMOD_RESULT res; // r0
    class EventProject * eGroup; // r1+0x10
    int count; // r1+0xC

    {
        // Range: 0x80254208 -> 0x802542E0
        // Local variables
        int i; // r29

        {
            // Range: 0x80254208 -> 0x802542E0
            // Local variables
            class EventGroup * eSubGroup; // r1+0x8
        }
    }

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::SetMasterFade(float, bool, bool)
// Range: 0x80254320 -> 0x80254608
void zSoundModule::SetMasterFade() {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80254610 -> 0x80254708
void zSoundModule::HackUIMusicFadeIn() {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80254710 -> 0x80254808
void zSoundModule::HackUIFadeIn() {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::SetUnpauseFadeIn(float, float)
// Range: 0x80254810 -> 0x802548AC
void zSoundModule::SetUnpauseFadeIn() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x802548B0 -> 0x80254944
void zSoundModule::Set3DListenerAttributes(int numOfListener /* r25 */, int iListener /* r26 */, class FMOD_VECTOR * pos /* r27 */, class FMOD_VECTOR * vel /* r28 */, class FMOD_VECTOR * at /* r29 */, class FMOD_VECTOR * up /* r30 */) {
    // Local variables
    int currentNum; // r1+0x8

    // References
    // -> static class System * fmodSys;
    // -> bool gSysForceExit;
}
// Range: 0x80254950 -> 0x80254C10
void zSoundModule::SetMasterVolumeMusic(class zSoundModule * this /* r30 */, float value /* f30 */) {
    // Local variables
    float volume; // f0

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80254C10 -> 0x80254DF0
void zSoundModule::SetMasterVolumeSFX(class zSoundModule * this /* r30 */, float value /* f31 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80254DF0 -> 0x80254FD4
void zSoundModule::SetMasterVolumeDialog(float value /* f30 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::SetMasterVolumeCine(float)
// Range: 0x80254FE0 -> 0x80254FE8
void zSoundModule::SetMasterVolumeCine() {
}
// Range: 0x80254FF0 -> 0x80255260
void zSoundModule::EndOfLevelMuteSound() {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80255260 -> 0x802554D0
void zSoundModule::StartOfLevelUnmuteSound() {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x802554D0 -> 0x802555C0
void zSoundModule::SoundCategorySetMute(char * soundCategory /* r6 */, bool muted /* r30 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::SoundCategorySetVolume(const char *, float)
// Range: 0x802555C0 -> 0x802556AC
void zSoundModule::SoundCategorySetVolume(float volume /* f31 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::SoundCategoryStopAllEvents(const char *)
// Range: 0x802556B0 -> 0x8025578C
void zSoundModule::SoundCategoryStopAllEvents() {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80255790 -> 0x80255C68
void zSoundModule::SoundCategoryPauseUnpauseAllExceptUI(bool pause /* r31 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80255C70 -> 0x802560FC
void zSoundModule::TRCUnPauseMaster() {
    // References
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
    // -> static class zSoundModule soundMod;
    // -> class zGlobals globals;
}
// Range: 0x80256100 -> 0x80256274
void zSoundModule::TRCPauseMaster() {
    // References
    // -> class zGlobals globals;
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80256280 -> 0x80256368
void zSoundModule::PauseMaster() {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x80256370 -> 0x80256458
void zSoundModule::UnPauseMaster() {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
