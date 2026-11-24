/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSoundFX.cpp
*/
static class zQueue sQueue; // size: 0x2008, address: 0x80757D28
static float LISTENER_POSITION; // size: 0x4, address: 0x806C22A4
static class zSoundModule * sMod; // size: 0x4, address: 0x80759D30
static class zSoundAsset * musicAsset; // size: 0x4, address: 0x80759D34
static class Thread s_soundAssetPreloadThread; // size: 0x40, address: 0x80759D48
static class zSoundAssetPreloadRunnable s_soundAssetPreloadRunner; // size: 0x4, address: 0x80759D88
// Range: 0x8016D070 -> 0x8016D19C
void zSoundAsset_Update3DListener() {
    // Local variables
    class xVec3 pos; // r1+0x50
    class xVec3 vel; // r1+0x44
    class xVec3 at; // r1+0x38
    class xVec3 up; // r1+0x2C

    {
        // Range: 0x8016D084 -> 0x8016D184
        // Local variables
        class xVec3 playerPos; // r1+0x20
        class xVec3 & cameraPos; // r30
    }

    // References
    // -> class zGlobals globals;
    // -> class xVec3 g_O3;
    // -> static float LISTENER_POSITION;
}
// Range: 0x8016D1A0 -> 0x8016D248
void zSoundAsset_Update() {
    // Local variables
    int count; // r30
    class zSoundAsset * sasset; // r1+0x8

    {
        // Range: 0x8016D1E8 -> 0x8016D234
        // Local variables
        int i; // r29
    }

    // References
    // -> static class zSoundModule soundMod;
    // -> static class zQueue sQueue;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016D250 -> 0x8016D2EC
bool zSoundAsset_IsStarving() {
    // Local variables
    class zSoundAsset * sasset; // r1+0xC

    {
        // Range: 0x8016D27C -> 0x8016D2D4
        // Local variables
        int i; // r29

        {
            // Range: 0x8016D2A4 -> 0x8016D2D4
            // Local variables
            unsigned int eventState; // r1+0x8
        }
    }

    // References
    // -> static class zQueue sQueue;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016D2F0 -> 0x8016D3C0
void zSoundAsset_UnregisterBank(char * soundBankName /* r26 */) {
    {
        // Range: 0x8016D32C -> 0x8016D3AC
        // Local variables
        int i; // r27

        {
            // Range: 0x8016D32C -> 0x8016D3AC
            // Local variables
            class zSoundAsset * sasset; // r1+0x8
        }
    }

    // References
    // -> static class zQueue sQueue;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016D4D0 -> 0x8016D584
void zSoundAsset_Unregister(class zSoundAsset * sasset /* r28 */) {
    // Local variables
    int count; // r30

    {
        // Range: 0x8016D510 -> 0x8016D570
        // Local variables
        int i; // r29

        {
            // Range: 0x8016D510 -> 0x8016D570
            // Local variables
            class zSoundAsset * sa; // r1+0x8
        }
    }

    // References
    // -> static class zQueue sQueue;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016D590 -> 0x8016D618
bool zSoundAsset_Find(class zSoundAsset * sasset /* r28 */) {
    // Local variables
    int count; // r30

    {
        // Range: 0x8016D5C0 -> 0x8016D600
        // Local variables
        int i; // r29

        {
            // Range: 0x8016D5C0 -> 0x8016D600
            // Local variables
            class zSoundAsset * sa; // r1+0x8
        }
    }

    // References
    // -> static class zQueue sQueue;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016D620 -> 0x8016D6D0
void zSoundAsset_Register(class zSoundAsset * sasset /* r31 */) {
    // References
    // -> static class zQueue sQueue;
}
// Range: 0x8016D6D0 -> 0x8016D760
void zSoundAsset_Fix(class zSoundAsset * sasset /* r29 */) {
    // Local variables
    char * end; // r0
    int len; // r30
    int idx; // r0

    // References
    // -> static class zSoundModule * sMod;
}
// Range: 0x8016D760 -> 0x8016D7F4
void zSoundAsset_Fix() {
    // Local variables
    int count; // r29

    {
        // Range: 0x8016D7A8 -> 0x8016D7E0
        // Local variables
        int i; // r28

        {
            // Range: 0x8016D7A8 -> 0x8016D7E0
            // Local variables
            class zSoundAsset * sasset; // r1+0x8
        }
    }

    // References
    // -> static class zQueue sQueue;
    // -> static class zSoundModule * sMod;
    // -> static class zSoundModule soundMod;
    // -> bool gSoundReadyToExit;
}
// Range: 0x801899E0 -> 0x801899E4
static void @unnamed@WAD03_cpp@::zSoundAssetPreloadRunnable::Run() {
}
// Range: 0x8016D800 -> 0x8016D86C
void zSoundAsset_Preload_Start() {
    // References
    // -> static class zSoundAssetPreloadRunnable s_soundAssetPreloadRunner;
    // -> static class Thread s_soundAssetPreloadThread;
    // -> static class zSoundModule * sMod;
}
// Range: 0x8016D870 -> 0x8016D8C0
bool zSoundAsset_Preload_Step() {
    // References
    // -> static class zSoundModule * sMod;
    // -> static class Thread s_soundAssetPreloadThread;
}
// Range: 0x8016D8C0 -> 0x8016DA10
bool zSoundAsset_Preload() {
    // Local variables
    int count; // r25
    int preloadIndex; // r24

    {
        // Range: 0x8016D8D8 -> 0x8016D990
        // Local variables
        class zSoundAsset * sasset; // r1+0x8
    }

    // References
    // -> static class zSoundModule * sMod;
    // -> bool gSysForceExit;
    // -> class zGlobals globals;
    // -> static class zQueue sQueue;
}
// Range: 0x8016DA10 -> 0x8016DAF4
bool zSoundAsset::IsEqual(class zSoundAsset * this /* r29 */, char * name /* r30 */, int * indices /* r31 */) {
    {
        // Range: 0x8016DAA4 -> 0x8016DADC
        // Local variables
        int i; // r0
    }

    // References
    // -> class zGlobals globals;
}
// signature: zSoundAsset::Init(const char *, int *, bool)
// Range: 0x8016DB00 -> 0x8016DC0C
void * zSoundAsset::Init(class zSoundAsset * this /* r30 */, int * indices /* r31 */) {
    // Local variables
    int i; // r6

    // References
    // -> class zGlobals globals;
}
// signature: zSoundAsset::SetPosition(const FMOD_VECTOR *)
// Range: 0x8016DC10 -> 0x8016DCC0
void zSoundAsset::SetPosition(class zSoundAsset * this /* r31 */) {
    {
        // Range: 0x8016DC34 -> 0x8016DCAC
        // Local variables
        enum FMOD_RESULT res; // r0
        unsigned int mode; // r1+0x8
    }

    // References
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016DCC0 -> 0x8016DD0C
void zSoundAsset::KeyOff() {
    // Local variables
    enum FMOD_RESULT res; // r0
    class EventParameter * par; // r1+0x8

    // References
    // -> bool gSoundReadyToExit;
}
// signature: zSoundAsset::SetParameterByIndex(int, float)
// Range: 0x8016DD10 -> 0x8016DD68
void zSoundAsset::SetParameterByIndex(float value /* f31 */) {
    // Local variables
    enum FMOD_RESULT res; // r0
    class EventParameter * par; // r1+0x8

    // References
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016DD70 -> 0x8016DE74
void zSoundAsset::Update3DPosition(class zSoundAsset * this /* r31 */) {
    // Local variables
    unsigned int mode; // r1+0x8
    enum FMOD_RESULT res; // r0

    {
        // Range: 0x8016DDC4 -> 0x8016DE60
        // Local variables
        class xVec3 dP; // r1+0xC
        class FMOD_VECTOR curVel; // r1+0x18
        class FMOD_VECTOR curPos; // r1+0x24
    }

    // References
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016DE80 -> 0x8016DEF8
bool zSoundAsset::isAudible(class zSoundAsset * this /* r31 */) {
    {
        // Range: 0x8016DE88 -> 0x8016DEE0
        // Local variables
        class xVec3 dL; // r1+0x14
    }

    // References
    // -> class zGlobals globals;
}
// signature: zSoundAsset::Play(int, int, const char *)
// Range: 0x8016DF00 -> 0x8016DF68
void zSoundAsset::Play(class zSoundAsset * this /* r31 */, int playOrder /* r9 */, int eventIndex /* r8 */) {
    // References
    // -> static class zSoundModule * sMod;
}
// signature: zSoundAsset::PlayWiimote(int)
// Range: 0x8016DF70 -> 0x8016DFD8
void zSoundAsset::PlayWiimote(class zSoundAsset * this /* r31 */) {
    // References
    // -> static class zSoundModule * sMod;
}
// signature: zSoundAsset::Play(unsigned int)
// Range: 0x8016DFE0 -> 0x8016E040
void zSoundAsset::Play(class zSoundAsset * this /* r31 */) {
    // References
    // -> static class zSoundModule * sMod;
}
// Range: 0x8016E040 -> 0x8016E0E8
void zSoundAsset::Stop(class zSoundAsset * this /* r30 */, bool freeData /* r31 */) {
    {
        // Range: 0x8016E084 -> 0x8016E0C4
        // Local variables
        enum FMOD_RESULT result; // r0
        class EventGroup * eventGroup; // r1+0x8
    }

    // References
    // -> static class zSoundModule * sMod;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016E0F0 -> 0x8016E10C
void zSoundAsset::Pause() {
    // References
    // -> static class zSoundModule * sMod;
}
// Range: 0x8016E110 -> 0x8016E12C
void zSoundAsset::Unpause() {
    // References
    // -> static class zSoundModule * sMod;
}
// Range: 0x8016E130 -> 0x8016E1D8
bool zSoundAsset::IsLoopingEvent() {
    // Local variables
    int j; // r1+0xC
    char * name; // r1+0x8
    class FMOD_EVENT_INFO eInfo; // r1+0x10

    // References
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016E1E0 -> 0x8016E240
bool zSoundAsset::IsPlaying() const {
    // Local variables
    unsigned int state; // r1+0x8

    // References
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016E240 -> 0x8016E294
bool zSoundAsset::IsPaused() const {
    // Local variables
    bool ret; // r1+0x8

    // References
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016E2A0 -> 0x8016E2E4
bool zSoundAsset::IsInitialized() const {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8016E2F0 -> 0x8016E334
void zSoundAsset::SceneExit(class zSoundAsset * this /* r31 */) {
}
// signature: zSoundAssetMultiple::Init(const char *, int *, bool)
// Range: 0x8016E340 -> 0x8016E47C
void * zSoundAssetMultiple::Init(class zSoundAssetMultiple * this /* r28 */) {
    // Local variables
    void * ret; // r30

    {
        // Range: 0x8016E378 -> 0x8016E464
        // Local variables
        enum FMOD_RESULT result; // r0

        {
            // Range: 0x8016E3C4 -> 0x8016E440
            // Local variables
            class NodeType * memoryPool; // r29
        }
    }

    // References
    // -> static class zSoundModule * sMod;
    // -> class zGlobals globals;
}
// signature: zSoundAssetMultiple::GetEvent(unsigned long long)
// Range: 0x8016E480 -> 0x8016E524
class Event * zSoundAssetMultiple::GetEvent() {
    // References
    // -> class zGlobals globals;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016E530 -> 0x8016E750
void zSoundAssetMultiple::Play(class zSoundAssetMultiple * this /* r27 */, unsigned long long owner /* r29:r28 */, class FMOD_VECTOR * pos /* r30 */, unsigned int iSurface /* r31 */) {
    {
        // Range: 0x8016E590 -> 0x8016E64C
        {
            // Range: 0x8016E590 -> 0x8016E64C
            {
                // Range: 0x8016E59C -> 0x8016E64C
                // Local variables
                char * pLoopingString; // r1+0xC
                unsigned int state; // r1+0x10
            }
        }
    }
    {
        // Range: 0x8016E64C -> 0x8016E6C4
        // Local variables
        class EventInstance newInstance; // r1+0x18
    }
    {
        // Range: 0x8016E6C8 -> 0x8016E738
        {
            // Range: 0x8016E6C8 -> 0x8016E738
            // Local variables
            unsigned int state; // r1+0x8
        }
    }

    // References
    // -> class zGlobals globals;
    // -> bool gSoundReadyToExit;
}
// signature: zSoundAssetMultiple::Stop(unsigned long long)
// Range: 0x8016E750 -> 0x8016E800
void zSoundAssetMultiple::Stop(class zSoundAssetMultiple * this /* r30 */) {
    // References
    // -> class zGlobals globals;
    // -> bool gSoundReadyToExit;
}
// signature: zSoundAssetMultiple::KeyOff(unsigned long long)
// Range: 0x8016E800 -> 0x8016E874
void zSoundAssetMultiple::KeyOff() {
    // References
    // -> class zGlobals globals;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016E880 -> 0x8016E90C
void zSoundAssetMultiple::StopAll(class zSoundAssetMultiple * this /* r28 */) {
    // References
    // -> static class zSoundModule * sMod;
    // -> class zGlobals globals;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016E910 -> 0x8016E9D4
void zSoundAssetMultiple::Update3DPosition(class zSoundAssetMultiple * this /* r27 */) {
    // Local variables
    class Event * oldEvent; // r29
    class FMOD_VECTOR * oldPos; // r28
    float oldDist; // f31

    // References
    // -> class zGlobals globals;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8016E9E0 -> 0x8016E9F4
void zSoundAssetMultiple::SceneExit() {
}
// Range: 0x8016EA00 -> 0x8016EA60
void zSoundFX::Init(class zSoundFX * this /* r30 */, class zSoundFXAsset * inAsset /* r31 */) {
}
// Range: 0x8016EA60 -> 0x8016EAC8
void zSoundFX::ResetAttachedTo(class zSoundFX * this /* r31 */) {
}
// Range: 0x8016EAD0 -> 0x8016EAD4
void zSoundFX::Reset() {
}
// Range: 0x8016EAE0 -> 0x8016EAE8
void zSoundFX::SceneExit() {
}
// Range: 0x8016EAF0 -> 0x8016EBF8
void zSoundFX::Update(class zSoundFX * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x8016EB54 -> 0x8016EBD8
        // Local variables
        class xVec3 dist; // r1+0x14
    }

    // References
    // -> class zGlobals globals;
}
// signature: zSoundFX::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8016EC00 -> 0x8016ED28
void zSoundFX::HandleEvent(class zSoundFX * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8016ED30 -> 0x8016EDC0
class Entity * Sext::zSoundFXAsset::Create(class EntityHandleBase * handle /* r29 */, class zSoundFXAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zSoundFX;
}
// Range: 0x8016EDC0 -> 0x8016EE28
void zSoundFX_SceneExit() {
    // References
    // -> static class zSoundModule soundMod;
    // -> class zGlobals globals;
}
// Range: 0x8016EE30 -> 0x8016EE8C
void zSoundFXMultiple::Init(class zSoundFXMultiple * this /* r30 */, class zSoundFXMultipleAsset * inAsset /* r31 */) {
}
// Range: 0x8016EE90 -> 0x8016EEA8
void zSoundFXMultiple::Setup() {
}
// Range: 0x8016EEB0 -> 0x8016EEE8
void zSoundFXMultiple::SceneExit(class zSoundFXMultiple * this /* r31 */) {
}
// Range: 0x8016EEF0 -> 0x8016EF80
class Entity * Sext::zSoundFXMultipleAsset::Create(class EntityHandleBase * handle /* r29 */, class zSoundFXMultipleAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__16zSoundFXMultiple;
}
