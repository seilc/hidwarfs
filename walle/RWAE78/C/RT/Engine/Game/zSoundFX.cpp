/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zSoundFX.cpp
*/
class _OGSoundFXSchema _OGSoundFXschema; // size: 0x18, address: 0x807B2FA8
class SchemaRegistrator _OGSoundFXschemaReg; // size: 0x8, address: 0x807B2FC0
static class zQueue sQueue; // size: 0x1008, address: 0x807B2FC8
static class zSoundModule * sMod; // size: 0x4, address: 0x807B3FD0
static class zSoundAsset * musicAsset; // size: 0x4, address: 0x807B3FD4
static class Thread s_soundAssetPreloadThread; // size: 0x40, address: 0x807B3FE8
static class zSoundAssetPreloadRunnable s_soundAssetPreloadRunner; // size: 0x4, address: 0x807B4028
// Range: 0x801C12A0 -> 0x801C12B0
void World::_OGSoundFXEntity::Deactivate() {
}
// Range: 0x801C12B0 -> 0x801C1300
void World::_OGSoundFXEntity::Destroy(class _OGSoundFXEntity * this /* r31 */) {
}
// signature: World::_OGSoundFXSchema::Fix(World::Asset *, long, int)
// Range: 0x801C1360 -> 0x801C1368
void World::_OGSoundFXSchema::Fix() {
}
// signature: World::_OGSoundFXSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C1370 -> 0x801C13BC
class EntityStub * World::_OGSoundFXSchema::CreateStub(class _OGSoundFXSchema * this /* r31 */) {
}
// signature: World::_OGSoundFXSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801C13C0 -> 0x801C13D8
void World::_OGSoundFXSchema::DestroyStub() {
}
// signature: World::_OGSoundFXSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C13E0 -> 0x801C1448
class Entity * World::_OGSoundFXSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World16_OGSoundFXEntity;
}
// Range: 0x801C1490 -> 0x801C1688
void zSoundAsset_Unregister(class zSoundAsset * sasset /* r30 */) {
    // Local variables
    int count; // r0

    {
        // Range: 0x801C14D4 -> 0x801C1668
        // Local variables
        int i; // r31

        {
            // Range: 0x801C14D4 -> 0x801C1668
            // Local variables
            class zSoundAsset * sa; // r0
        }
    }

    // References
    // -> bool gSysForceExit;
    // -> static class zQueue sQueue;
    // -> bool gSoundReadyToExit;
}
// Range: 0x801C1690 -> 0x801C1814
void zSoundAsset_Fix() {
    // Local variables
    int count; // r29

    {
        // Range: 0x801C16DC -> 0x801C17D8
        // Local variables
        int i; // r28

        {
            // Range: 0x801C16DC -> 0x801C17D8
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
// Range: 0x801DD5B0 -> 0x801DD648
static void @unnamed@WAD03_cpp@::zSoundAssetPreloadRunnable::Run() {
    // References
    // -> static class zSoundModule * sMod;
    // -> bool gSysForceExit;
    // -> static class zQueue sQueue;
}
// Range: 0x801C1860 -> 0x801C18D0
void zSoundAsset_Preload_Start() {
    // References
    // -> static class zSoundAssetPreloadRunnable s_soundAssetPreloadRunner;
    // -> static class Thread s_soundAssetPreloadThread;
    // -> static class zSoundModule * sMod;
}
// Range: 0x801C18D0 -> 0x801C1920
bool zSoundAsset_Preload_Step() {
    // References
    // -> static class zSoundModule * sMod;
    // -> static class Thread s_soundAssetPreloadThread;
}
// signature: zSoundAsset::Init(const char *, int *, bool)
// Range: 0x801C1920 -> 0x801C1B5C
void * zSoundAsset::Init(class zSoundAsset * this /* r30 */, int * indices /* r31 */) {
    // Local variables
    int i; // r0

    // References
    // -> static class zQueue sQueue;
    // -> bool gSoundReadyToExit;
    // -> class zGlobals globals;
}
// signature: zSoundAsset::SetPosition(const FMOD_VECTOR *)
// Range: 0x801C1B60 -> 0x801C1B90
void zSoundAsset::SetPosition() {
}
// signature: zSoundAsset::Play(int, int, const char *)
// Range: 0x801C1B90 -> 0x801C1BF0
void zSoundAsset::Play(class zSoundAsset * this /* r31 */, int playOrder /* r9 */, int eventIndex /* r8 */) {
    // References
    // -> static class zSoundModule * sMod;
}
// signature: zSoundAsset::Play(unsigned int)
// Range: 0x801C1BF0 -> 0x801C1C48
void zSoundAsset::Play(class zSoundAsset * this /* r31 */) {
    // References
    // -> static class zSoundModule * sMod;
}
// Range: 0x801C1C50 -> 0x801C1CF0
void zSoundAsset::Stop(class zSoundAsset * this /* r30 */, bool freeData /* r31 */) {
    {
        // Range: 0x801C1C98 -> 0x801C1CD8
        // Local variables
        enum FMOD_RESULT result; // r0
        class EventGroup * eventGroup; // r1+0x8
    }

    // References
    // -> bool gSysForceExit;
}
// Range: 0x801C1CF0 -> 0x801C1D18
void zSoundAsset::Pause() {
    // References
    // -> bool gSysForceExit;
}
// Range: 0x801C1D20 -> 0x801C1D68
bool zSoundAsset::IsPlaying() const {
    // Local variables
    unsigned int state; // r1+0x8
}
// Range: 0x801C1D70 -> 0x801C1DB4
bool zSoundAsset::IsInitialized() const {
    // References
    // -> class zGlobals globals;
}
// signature: SoundFXEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C1DC0 -> 0x801C1DDC
static void SoundFXEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x801C1DE0 -> 0x801C1E3C
void zSoundFX::Init(class zSoundFX * this /* r30 */, class zSoundFXAsset * inAsset /* r31 */) {
}
// signature: zSoundFX::SetAttachedTo(xEnt *)
// Range: 0x801C1E40 -> 0x801C1E48
void zSoundFX::SetAttachedTo() {
}
// Range: 0x801C1E50 -> 0x801C1EE8
void zSoundFX::Reset() {
    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801C1EF0 -> 0x801C1F88
void zSoundFX::Setup() {
    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801C1F90 -> 0x801C1F98
void zSoundFX::SceneExit() {
}
// signature: zSoundFX::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C1FA0 -> 0x801C20D8
void zSoundFX::HandleEvent(class zSoundFX * this /* r31 */) {
    // References
    // -> bool gSysForceExit;
    // -> static class zSoundModule * sMod;
    // -> class zGlobals globals;
}
// signature: zSoundFX_Init(void *, void *)
// Range: 0x801C20E0 -> 0x801C2144
void zSoundFX_Init() {
    // References
    // -> struct {} __vt__8zSoundFX;
}
