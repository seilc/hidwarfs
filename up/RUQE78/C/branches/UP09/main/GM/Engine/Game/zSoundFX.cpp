/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSoundFX.cpp
*/
static class zQueue sQueue; // size: 0x2008, address: 0x80829428
static float LISTENER_POSITION; // size: 0x4, address: 0x807B5500
static class zSoundModule * sMod; // size: 0x4, address: 0x8082B430
static class zSoundAsset * musicAsset; // size: 0x4, address: 0x8082B434
static class Thread s_soundAssetPreloadThread; // size: 0x40, address: 0x8082B448
static class zSoundAssetPreloadRunnable s_soundAssetPreloadRunner; // size: 0x4, address: 0x8082B488
// Range: 0x802568A0 -> 0x80256F58
void zSoundAsset_Update3DListener() {
    // Local variables
    class xVec3 pos; // r1+0x8C
    class xVec3 vel; // r1+0x80
    class xVec3 at; // r1+0x74
    class xVec3 up; // r1+0x68

    {
        // Range: 0x8025692C -> 0x80256AE0
        // Local variables
        int i; // r30

        {
            // Range: 0x8025692C -> 0x8025692C
            // Local variables
            class xVec3 & playerPosOld; // r0
            class xVec3 & playerPos; // r0
        }
    }
    {
        // Range: 0x80256BE0 -> 0x80256BE8
        // Local variables
        int i; // r27

        {
            // Range: 0x80256BE8 -> 0x80256BE8
            {
                // Range: 0x80256BE8 -> 0x80256BE8
                // Local variables
                class xVec3 & playerPosOld; // r0
                class xVec3 & playerPos; // r0
            }
        }
    }
    {
        // Range: 0x80256DC0 -> 0x80256F10
        // Local variables
        class xVec3 playerPos; // r1+0x5C
        class xVec3 & cameraPos; // r27
    }

    // References
    // -> static float LISTENER_POSITION;
    // -> class xGlobals * xglobals;
    // -> class xVec3 g_O3;
    // -> class zGlobals globals;
}
// Range: 0x80256F60 -> 0x802571A8
void zSoundAsset_UnregisterBank(char * soundBankName /* r24 */) {
    {
        // Range: 0x80256FA8 -> 0x80257178
        // Local variables
        int i; // r26

        {
            // Range: 0x80256FA8 -> 0x80257178
            // Local variables
            class zSoundAsset * sasset; // r25
        }
    }

    // References
    // -> bool gSysForceExit;
    // -> static class zQueue sQueue;
    // -> bool gSoundReadyToExit;
}
// Range: 0x802571B0 -> 0x802573BC
void zSoundAsset_Unregister(class zSoundAsset * sasset /* r30 */) {
    // Local variables
    int count; // r0

    {
        // Range: 0x802571F4 -> 0x8025739C
        // Local variables
        int i; // r31

        {
            // Range: 0x802571F4 -> 0x8025739C
            // Local variables
            class zSoundAsset * sa; // r0
        }
    }

    // References
    // -> bool gSysForceExit;
    // -> static class zQueue sQueue;
    // -> bool gSoundReadyToExit;
}
// Range: 0x802573C0 -> 0x80257540
void zSoundAsset_Fix() {
    // Local variables
    int count; // r29

    {
        // Range: 0x80257408 -> 0x80257504
        // Local variables
        int i; // r28

        {
            // Range: 0x80257408 -> 0x80257504
            // Local variables
            class zSoundAsset * sasset; // r27
        }
    }

    // References
    // -> static class EventSystem * fmodEventSys;
    // -> bool gSysForceExit;
    // -> static class zQueue sQueue;
    // -> static class zSoundModule * sMod;
    // -> static class zSoundModule soundMod;
    // -> bool gSoundReadyToExit;
}
// Range: 0x80291F90 -> 0x80292068
static void @unnamed@WAD03_cpp@::zSoundAssetPreloadRunnable::Run() {
    // References
    // -> static class zSoundModule * sMod;
    // -> bool gSysForceExit;
    // -> static class zQueue sQueue;
}
// Range: 0x80257560 -> 0x802575CC
void zSoundAsset_Preload_Start() {
    // References
    // -> static class zSoundAssetPreloadRunnable s_soundAssetPreloadRunner;
    // -> static class Thread s_soundAssetPreloadThread;
    // -> static class zSoundModule * sMod;
}
// Range: 0x802575D0 -> 0x80257620
bool zSoundAsset_Preload_Step() {
    // References
    // -> static class zSoundModule * sMod;
    // -> static class Thread s_soundAssetPreloadThread;
}
// signature: zSoundAsset::Init(const char *, int *, bool)
// Range: 0x80257620 -> 0x80257884
void * zSoundAsset::Init(class zSoundAsset * this /* r30 */, int * indices /* r31 */) {
    // Local variables
    int i; // r0

    // References
    // -> static class zQueue sQueue;
    // -> bool gSoundReadyToExit;
    // -> class zGlobals globals;
}
// Range: 0x80257890 -> 0x80257960
void zSoundAsset::SetPosition(class zSoundAsset * this /* r30 */, class FMOD_VECTOR * pos /* r31 */) {
    {
        // Range: 0x802578BC -> 0x80257948
        // Local variables
        enum FMOD_RESULT res; // r0
        unsigned int mode; // r1+0x8
    }

    // References
    // -> bool gSoundReadyToExit;
}
// Range: 0x80257960 -> 0x802579BC
void zSoundAsset::SetPrimaryParameter(float value /* f31 */) {
    // Local variables
    enum FMOD_RESULT res; // r0
    class EventParameter * par; // r1+0x8

    // References
    // -> bool gSoundReadyToExit;
}
// Range: 0x802579C0 -> 0x80257C9C
void zSoundAsset::Update3DPosition(class zSoundAsset * this /* r31 */) {
    // Local variables
    unsigned int mode; // r1+0x8
    enum FMOD_RESULT res; // r0

    {
        // Range: 0x80257A14 -> 0x80257C88
        // Local variables
        class xVec3 dP; // r1+0x3C
    }

    // References
    // -> class zGlobals globals;
    // -> bool gSoundReadyToExit;
}
// signature: zSoundAsset::Play(int, int, const char *)
// Range: 0x80257CA0 -> 0x80257D00
void zSoundAsset::Play(class zSoundAsset * this /* r31 */, int playOrder /* r9 */, int eventIndex /* r8 */) {
    // References
    // -> static class zSoundModule * sMod;
}
// signature: zSoundAsset::Play(unsigned int)
// Range: 0x80257D00 -> 0x80257D58
void zSoundAsset::Play(class zSoundAsset * this /* r31 */) {
    // References
    // -> static class zSoundModule * sMod;
}
// Range: 0x80257D60 -> 0x80257E18
void zSoundAsset::Stop(class zSoundAsset * this /* r30 */, bool freeData /* r31 */) {
    {
        // Range: 0x80257DB4 -> 0x80257DF4
        // Local variables
        enum FMOD_RESULT result; // r0
        class EventGroup * eventGroup; // r1+0x8
    }

    // References
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
}
// Range: 0x80257E20 -> 0x80257E48
void zSoundAsset::Pause() {
    // References
    // -> bool gSysForceExit;
}
// Range: 0x80257E50 -> 0x80257ECC
bool zSoundAsset::IsLoopingEvent() {
    // Local variables
    int j; // r1+0xC
    char * name; // r1+0x8
    class FMOD_EVENT_INFO eInfo; // r1+0x10

    // References
    // -> bool gSoundReadyToExit;
}
// Range: 0x80257ED0 -> 0x80257F30
bool zSoundAsset::IsPlaying() const {
    // Local variables
    unsigned int state; // r1+0x8

    // References
    // -> bool gSoundReadyToExit;
}
// Range: 0x80257F30 -> 0x80257F74
bool zSoundAsset::IsInitialized() const {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80257F90 -> 0x80257FEC
void zSoundFX::Init(class zSoundFX * this /* r30 */, class zSoundFXAsset * inAsset /* r31 */) {
}
// Range: 0x80257FF0 -> 0x80258058
void zSoundFX::Reset(class zSoundFX * this /* r31 */) {
}
// Range: 0x80258070 -> 0x80258078
void zSoundFX::SceneExit() {
}
// signature: zSoundFX::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80258080 -> 0x8025823C
void zSoundFX::HandleEvent(class zSoundFX * this /* r31 */) {
    // References
    // -> bool gSysForceExit;
    // -> bool gSoundReadyToExit;
    // -> unsigned int g_rttidParentTable[246];
    // -> static class zSoundModule * sMod;
    // -> class zGlobals globals;
}
// Range: 0x80258240 -> 0x8025835C
class Entity * Sext::zSoundFXAsset::Create(class EntityHandleBase * handle /* r29 */, class zSoundFXAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zSoundFX;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80258360 -> 0x802583C0
void zSoundFX_SceneSetup() {
    // References
    // -> class zGlobals globals;
}
