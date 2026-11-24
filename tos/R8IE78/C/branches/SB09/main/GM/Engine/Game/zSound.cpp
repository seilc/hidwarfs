/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSound.cpp
*/
static class zSoundModule soundMod; // size: 0x560, address: 0x80757370
static bool s_soundWrappersUpdatePaused; // size: 0x1, address: 0x807578D0
static class ModuleRegistrator soundModreg; // size: 0x8, address: 0x807578D8
static bool gUnmuteOneliners; // size: 0x1, address: 0x807578E0
static bool gMuteOneliners; // size: 0x1, address: 0x807578E1
static bool gUnmuteRequested; // size: 0x1, address: 0x807578E2
bool muteByFMV; // size: 0x1, address: 0x807578E3
static class EventSystem * fmodEventSys; // size: 0x4, address: 0x807578E4
static class System * fmodSys; // size: 0x4, address: 0x807578E8
static class Event * eventLastMusic; // size: 0x4, address: 0x807578EC
float MusicSystemMaxVolume; // size: 0x4, address: 0x8068E504
bool wasMuted; // size: 0x1, address: 0x8075B008
// Range: 0x8016A680 -> 0x8016A68C
class System * zGetFMODSystem() {
    // References
    // -> static class System * fmodSys;
}
// Range: 0x8016A690 -> 0x8016A6D4
class MusicSystem * zGetFMODMusicSystem() {
    // Local variables
    class MusicSystem * musicSystem; // r1+0x8

    // References
    // -> static class EventSystem * fmodEventSys;
}
// Range: 0x8016A6E0 -> 0x8016A6EC
class zSoundModule * GlobalGetSoundModule() {
    // References
    // -> static class zSoundModule soundMod;
}
// Range: 0x8016A6F0 -> 0x8016A75C
void * zSoundModule::zSoundModule(class zSoundModule * this /* r31 */) {
    // References
    // -> struct {} __vt__12zSoundModule;
}
// signature: @unnamed@WAD03_cpp@::myopen(const char *, int, unsigned int *, void **, void **)
// Range: 0x8016A760 -> 0x8016A858
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myopen(char * name /* r28 */, unsigned int * filesize /* r29 */, void * * handle /* r30 */) {
    // Local variables
    class FileHandleData * fp; // r31

    // References
    // -> class Global * gGlobal;
}
// signature: @unnamed@WAD03_cpp@::myclose(void *, void *)
// Range: 0x8016A860 -> 0x8016A8C8
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myclose() {
    // Local variables
    class FileHandleData * fp; // r31

    // References
    // -> class Global * gGlobal;
}
// signature: @unnamed@WAD03_cpp@::myread(void *, void *, unsigned int, unsigned int *, void *)
// Range: 0x8016A8D0 -> 0x8016AA08
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myread(void * buf /* r26 */, unsigned int count /* r27 */, unsigned int * read /* r28 */) {
    // Local variables
    class FileHandleData * fp; // r31
    unsigned int rd; // r0
    unsigned int bytesleft; // r30
    int realsize; // r5
    int readResult; // r29

    {
        // Range: 0x8016A988 -> 0x8016A9D8
        // Local variables
        int readResult; // r0
        char tempBuf[32]; // r1+0x20
    }
}
// signature: @unnamed@WAD03_cpp@::myseek(void *, unsigned int, void *)
// Range: 0x8016AA10 -> 0x8016AA48
static enum FMOD_RESULT @unnamed@WAD03_cpp@::myseek() {
    // Local variables
    class FileHandleData * fp; // r0
}
// signature: zSoundModule::Startup(int)
// Range: 0x8016AA50 -> 0x8016AC3C
void zSoundModule::Startup(class zSoundModule * this /* r29 */) {
    // Local variables
    unsigned int fmodversion; // r1+0x8
    unsigned char soundmode; // r0
    class FMOD_WII_INFO extradriverdatawii; // r1+0xC
    char medPath[256]; // r1+0x18

    // References
    // -> class StartupConfig * config;
    // -> static class System * fmodSys;
    // -> static class EventSystem * fmodEventSys;
}
// Range: 0x8016AC40 -> 0x8016ACA0
void zSoundModule::SetMediaPath(class zSoundModule * this /* r30 */, char * mediaPath /* r31 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x8016ACA0 -> 0x8016ACC4
void zSoundModule::SceneSetup() {
    // References
    // -> static class System * fmodSys;
    // -> bool gSysForceExit;
}
// Range: 0x8016ACD0 -> 0x8016ACF0
void zSoundModule::SceneExit() {
    // References
    // -> bool gSysForceExit;
}
// signature: zSoundModule::Shutdown(int)
// Range: 0x8016ACF0 -> 0x8016AD64
void zSoundModule::Shutdown(class zSoundModule * this /* r29 */) {
    // References
    // -> static class EventSystem * fmodEventSys;
}
// signature: zSoundModule::Update(int)
// Range: 0x8016AD70 -> 0x8016B050
void zSoundModule::Update(class zSoundModule * this /* r30 */) {
    // Local variables
    float dt; // f0

    // References
    // -> static bool gUnmuteRequested;
    // -> bool gSysForceExit;
    // -> static class EventSystem * fmodEventSys;
    // -> static class System * fmodSys;
    // -> static bool s_soundWrappersUpdatePaused;
    // -> float dt;
    // -> class zGlobals globals;
    // -> bool wasMuted;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016B050 -> 0x8016B0A0
class Event * zSoundModule::Stop(class Event * event /* r31 */) {
    // References
    // -> bool gSysForceExit;
}
// Range: 0x8016B0A0 -> 0x8016B0E8
class Event * zSoundModule::Pause(class Event * event /* r31 */) {
    // References
    // -> bool gSysForceExit;
}
// Range: 0x8016B0F0 -> 0x8016B138
class Event * zSoundModule::Unpause(class Event * event /* r31 */) {
    // References
    // -> bool gSysForceExit;
}
// signature: zSoundModule::Play(zSoundAsset *, int, int, const char *, unsigned int, int, bool)
// Range: 0x8016B140 -> 0x8016B4A4
class Event * zSoundModule::Play(class zSoundModule * this /* r24 */, class zSoundAsset * soundAssetToPlay /* r25 */, char * eventName /* r26 */, int controllerID /* r1+0x8 */, bool infoOnly /* r27 */) {
    // Local variables
    class Event * event; // r1+0x1C
    class EventGroup * eGroup; // r1+0x18
    class EventGroup * eNextGroup; // r1+0x14
    enum FMOD_RESULT res; // r0
    char * rootGroupName; // r31
    int * indicesTree; // r30
    int indicesCount; // r29
    unsigned int eventMode; // r28
    bool isMusic; // r20
    int i; // r19

    {
        // Range: 0x8016B190 -> 0x8016B238
        // Local variables
        class EventProject * eProject; // r1+0x10
    }
    {
        // Range: 0x8016B238 -> 0x8016B354
        // Local variables
        int eIdx; // r5
        int idx; // r18
    }
    {
        // Range: 0x8016B354 -> 0x8016B3B4
        // Local variables
        class EventGroup * groupSearch; // r3
    }
    {
        // Range: 0x8016B3B4 -> 0x8016B48C
        // Local variables
        char * pLoopingString; // r1+0xC
    }

    // References
    // -> static class zSoundModule soundMod;
    // -> class zGlobals globals;
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::GetGroupIndex(const char *)
// Range: 0x8016B4B0 -> 0x8016B54C
int zSoundModule::GetGroupIndex() {
    // Local variables
    int idx; // r1+0x10
    char * eName; // r1+0xC
    class EventProject * eStruct; // r1+0x8
    enum FMOD_RESULT res; // r0

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x8016B550 -> 0x8016B6FC
void zSoundModule::FreeEventDataForAllProject() {
    // Local variables
    int numProjects; // r1+0x18
    class FMOD_EVENT_SYSTEMINFO sysInfo; // r1+0x20

    {
        // Range: 0x8016B58C -> 0x8016B5E0
        // Local variables
        int projectIdx; // r29

        {
            // Range: 0x8016B58C -> 0x8016B5E0
            // Local variables
            class EventProject * eProject; // r1+0x14
        }
    }
    {
        // Range: 0x8016B634 -> 0x8016B6E8
        // Local variables
        int projectIdx; // r29

        {
            // Range: 0x8016B634 -> 0x8016B6E8
            // Local variables
            int numProjectGroups; // r1+0xC
            class EventProject * eProject; // r1+0x10

            {
                // Range: 0x8016B67C -> 0x8016B6E8
                // Local variables
                int groupIndex; // r28

                {
                    // Range: 0x8016B67C -> 0x8016B6E8
                    // Local variables
                    class EventGroup * eGroup; // r1+0x8
                }
            }
        }
    }

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::FreeGroupData(const char *)
// Range: 0x8016B700 -> 0x8016B790
bool zSoundModule::FreeGroupData() {
    // Local variables
    class EventProject * eProject; // r1+0x8
    enum FMOD_RESULT res; // r0

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// Range: 0x8016B790 -> 0x8016B8E8
bool zSoundModule::LoadGroupData(char * rootName /* r29 */, bool isStreaming /* r28 */) {
    // Local variables
    enum FMOD_RESULT res; // r0
    class EventProject * eGroup; // r1+0x10
    int count; // r1+0xC

    {
        // Range: 0x8016B840 -> 0x8016B8CC
        // Local variables
        int i; // r29

        {
            // Range: 0x8016B840 -> 0x8016B8CC
            // Local variables
            class EventGroup * eSubGroup; // r1+0x8
        }
    }

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::SetMasterFade(float, bool, bool)
// Range: 0x8016B8F0 -> 0x8016BA04
void zSoundModule::SetMasterFade() {
}
// signature: zSoundModule::SetUnpauseFadeIn(float, float)
// Range: 0x8016BA10 -> 0x8016BAAC
void zSoundModule::SetUnpauseFadeIn() {
    // References
    // -> class zGlobals globals;
}
// signature: zSoundModule::AddLoadingStreamingEvent(FMOD::Event *)
// Range: 0x8016BAB0 -> 0x8016BB0C
void zSoundModule::AddLoadingStreamingEvent() {
}
// Range: 0x8016BB10 -> 0x8016BC80
void zSoundModule::UpdateLoadingEvent(class zSoundModule * this /* r28 */) {
    // Local variables
    class Event * fevent; // r30
    unsigned int st; // r1+0x8

    {
        // Range: 0x8016BB24 -> 0x8016BC6C
        // Local variables
        int i; // r29
    }
}
// Range: 0x8016BC80 -> 0x8016BD14
void zSoundModule::Set3DListenerAttributes(int numOfListener /* r25 */, int iListener /* r26 */, class FMOD_VECTOR * pos /* r27 */, class FMOD_VECTOR * vel /* r28 */, class FMOD_VECTOR * at /* r29 */, class FMOD_VECTOR * up /* r30 */) {
    // Local variables
    int currentNum; // r1+0x8

    // References
    // -> static class System * fmodSys;
    // -> bool gSysForceExit;
}
// Range: 0x8016BD20 -> 0x8016BDB8
void zSoundModule::SetMasterVolumeMusic(float value /* f31 */) {
}
// Range: 0x8016BDC0 -> 0x8016BE60
void zSoundModule::SetMasterVolumeSFX(class zSoundModule * this /* r31 */, float value /* f31 */) {
}
// Range: 0x8016BE60 -> 0x8016BEF8
void zSoundModule::SetMasterVolumeDialog(float value /* f31 */) {
}
// Range: 0x8016BF00 -> 0x8016BF68
void zSoundModule::SetMasterVolumeCine(float value /* f31 */) {
}
// Range: 0x8016BF70 -> 0x8016C010
void zSoundModule::EndOfLevelMuteSound() {
}
// Range: 0x8016C010 -> 0x8016C0B0
void zSoundModule::StartOfLevelUnmuteSound() {
}
// signature: zSoundModule::SoundCategoryGetCategory(const char *)
// Range: 0x8016C0B0 -> 0x8016C148
class EventCategory * zSoundModule::SoundCategoryGetCategory() {
    // Local variables
    class EventCategory * category; // r1+0x8

    {
        // Range: 0x8016C0E4 -> 0x8016C130
        // Local variables
        enum FMOD_RESULT result; // r31
    }

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
}
// signature: zSoundModule::SoundCategorySetMute(const char *, bool)
// Range: 0x8016C150 -> 0x8016C198
void zSoundModule::SoundCategorySetMute(bool muted /* r31 */) {
    // Local variables
    class EventCategory * category; // r0
}
// signature: zSoundModule::SoundCategorySetVolume(const char *, float)
// Range: 0x8016C1A0 -> 0x8016C1E8
void zSoundModule::SoundCategorySetVolume(float volume /* f31 */) {
    // Local variables
    class EventCategory * category; // r0
}
// signature: zSoundModule::SoundCategoryStopAllEvents(const char *)
// Range: 0x8016C1F0 -> 0x8016C228
void zSoundModule::SoundCategoryStopAllEvents() {
    // Local variables
    class EventCategory * category; // r0
}
// Range: 0x8016C230 -> 0x8016C394
void zSoundModule::SoundCategoryPauseUnpauseAllExceptUI(bool pause /* r31 */) {
    // References
    // -> bool gSysForceExit;
}
// signature: zSoundModule::CheckDirtyDisc(FMOD_RESULT)
// Range: 0x8016C3A0 -> 0x8016C3D4
void zSoundModule::CheckDirtyDisc() {
}
// signature: zSoundModule::GetEventByIndex(FMOD::EventGroup *, int, unsigned int, FMOD::Event **)
// Range: 0x8016C3E0 -> 0x8016C448
enum FMOD_RESULT zSoundModule::GetEventByIndex() {
    // Local variables
    enum FMOD_RESULT result; // r31

    // References
    // -> bool gSysForceExit;
}
// signature: zSoundModule::GetGroupByIndex(FMOD::EventGroup *, int, bool, FMOD::EventGroup **)
// Range: 0x8016C450 -> 0x8016C4B8
enum FMOD_RESULT zSoundModule::GetGroupByIndex() {
    // Local variables
    enum FMOD_RESULT result; // r31

    // References
    // -> bool gSysForceExit;
}
// Range: 0x8016C4C0 -> 0x8016C5B8
void zSoundModule::TRCUnPauseMaster() {
    // References
    // -> static class zSoundModule soundMod;
    // -> class zGlobals globals;
}
// Range: 0x8016C5C0 -> 0x8016C5FC
void zSoundModule::TRCPauseMaster() {
}
// Range: 0x8016C600 -> 0x8016C66C
void zSoundModule::PauseMaster(bool callByFMV /* r31 */) {
    // References
    // -> bool muteByFMV;
}
// signature: zSoundModule::UnPauseMaster(bool)
// Range: 0x8016C670 -> 0x8016C6DC
void zSoundModule::UnPauseMaster() {
    // References
    // -> bool muteByFMV;
}
// Range: 0x8016C6E0 -> 0x8016C744
void TurnOnWiimoteSpeaker(int max_pad /* r29 */, bool isTurnON /* r30 */) {
    {
        // Range: 0x8016C6F8 -> 0x8016C730
        // Local variables
        int i; // r31
    }
}
