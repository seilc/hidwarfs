/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCinematic.cpp
*/
class _OGCinematicPlayerSchema _OGCinematicPlayerschema; // size: 0x18, address: 0x8076C0A0
class SchemaRegistrator _OGCinematicPlayerschemaReg; // size: 0x8, address: 0x8076C0B8
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_MB1XOpeningCinematic[1]; // size: 0xC, address: 0x806F4274
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_MB1XChiliBombTutorial[1]; // size: 0xC, address: 0x806F4280
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_CT2RClosing[1]; // size: 0xC, address: 0x806F428C
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_SW1XOpening[1]; // size: 0xC, address: 0x806F4298
static class zCinematicSyncTable gCinematicSyncTables[4]; // size: 0x30, address: 0x806F42A8
static class xScreenFade * screenFade; // size: 0x4, address: 0x8076C0C0
static class xScreenFade * screenFadeStart; // size: 0x4, address: 0x8076C0C4
static unsigned long long gCineSkipTable[64]; // size: 0x200, address: 0x8076C0C8
// Range: 0x800AE860 -> 0x800AE870
void World::_OGCinematicPlayerEntity::Deactivate() {
}
// Range: 0x800AE870 -> 0x800AE8C0
void World::_OGCinematicPlayerEntity::Destroy(class _OGCinematicPlayerEntity * this /* r31 */) {
}
// signature: World::_OGCinematicPlayerSchema::Fix(World::Asset *, long, int)
// Range: 0x800AE920 -> 0x800AE928
void World::_OGCinematicPlayerSchema::Fix() {
}
// signature: World::_OGCinematicPlayerSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800AE930 -> 0x800AE97C
class EntityStub * World::_OGCinematicPlayerSchema::CreateStub(class _OGCinematicPlayerSchema * this /* r31 */) {
}
// signature: World::_OGCinematicPlayerSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800AE980 -> 0x800AE998
void World::_OGCinematicPlayerSchema::DestroyStub() {
}
// signature: World::_OGCinematicPlayerSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800AE9A0 -> 0x800AEA04
class Entity * World::_OGCinematicPlayerSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World24_OGCinematicPlayerEntity;
}
// signature: @unnamed@WAD01_cpp@::CinematicEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800AEA50 -> 0x800AEA6C
static void @unnamed@WAD01_cpp@::CinematicEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800AEA70 -> 0x800AEB94
void zCinematic::Init(class zCinematic * this /* r29 */, class zCinematicAsset * inAsset /* r31 */) {
    {
        // Range: 0x800AEB04 -> 0x800AEB78
        // Local variables
        unsigned int i; // r0
    }

    // References
    // -> static class zCinematicSyncTable gCinematicSyncTables[4];
}
// Range: 0x800AEBA0 -> 0x800AEC1C
void zCinematic::Setup(class zCinematic * this /* r31 */) {
    // Local variables
    class Goodie * goodie; // r0
}
// Range: 0x800AEC20 -> 0x800AEC74
void zCinematic::Reset(class zCinematic * this /* r31 */) {
}
// Range: 0x800AEC80 -> 0x800AEE90
void zCinematic::Play(class zCinematic * this /* r31 */, class xBase * caller /* r29 */) {
    {
        // Range: 0x800AED84 -> 0x800AEDE0
        // Local variables
        int i; // r9
    }

    // References
    // -> static class xScreenFade * screenFadeStart;
    // -> bool bAllowInput;
    // -> static unsigned long long gCineSkipTable[64];
    // -> bool returningToTitle;
    // -> class zGlobals globals;
}
// Range: 0x800AEE90 -> 0x800AEF84
void zCinematic::StartVideo(class zCinematic * this /* r29 */) {
    // Local variables
    int tidx; // r0
    class zLocator * current; // r31
    class zLocator * last; // r30

    // References
    // -> class zGlobals globals;
    // -> static class xScreenFade * screenFadeStart;
}
// Range: 0x800AEF90 -> 0x800AEFD0
void zCinematic::Pause(class zCinematic * this /* r31 */) {
}
// Range: 0x800AEFD0 -> 0x800AEFF8
void zCinematic::Unpause() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800AF000 -> 0x800AF128
void zCinematic::Stop(class zCinematic * this /* r31 */) {
    // Local variables
    int tidx; // r0
    class zLocator * current; // r30
    class zLocator * last; // r29

    // References
    // -> class zGlobals globals;
}
// Range: 0x800AF130 -> 0x800AF26C
enum eSoundStatus zCinematic::GetCinematicSoundStatus(class zCinematic * this /* r31 */) {
    // Local variables
    unsigned int curSoundState; // r1+0x1C

    {
        // Range: 0x800AF188 -> 0x800AF254
        // Local variables
        int chnlCount; // r1+0x10
        int subGrpCount; // r1+0x14
        class ChannelGroup * eventChnlGrp; // r1+0x18

        {
            // Range: 0x800AF204 -> 0x800AF23C
            // Local variables
            int i; // r31

            {
                // Range: 0x800AF204 -> 0x800AF23C
                // Local variables
                bool isVirtual; // r1+0x8
                class Channel * chnl; // r1+0xC
            }
        }
    }
}
// Range: 0x800AF270 -> 0x800AF378
float zCinematic::GetSoundTime() {
    // Local variables
    class ChannelGroup * eventChnlGrp; // r1+0x18
    int subGrpCount; // r1+0x14
    int chnlCount; // r1+0x10

    {
        // Range: 0x800AF30C -> 0x800AF35C
        {
            // Range: 0x800AF30C -> 0x800AF35C
            // Local variables
            float soundTime; // f1
            unsigned int soundPosition; // r1+0x8
            class Channel * chnl; // r1+0xC
        }
    }
}
// Range: 0x800AF380 -> 0x800AF724
void zCinematic::Timestep(class zCinematic * this /* r31 */, float dt /* f29 */) {
    {
        // Range: 0x800AF4F0 -> 0x800AF6F4
        // Local variables
        class xVec3 camPos; // r1+0x10

        {
            // Range: 0x800AF590 -> 0x800AF6F4
            // Local variables
            float PIDWantedGameTimeVelocity; // r1+0x8
            float videoTimeMultiplier; // f0
            float wantedVideoAndGameTime; // f30
            float curSoundTime; // f0
            float curVideoTime; // f31
            float PIDWantedVideoTimeMultiplier; // r1+0xC
        }
    }

    // References
    // -> static class xScreenFade * screenFade;
    // -> static class xScreenFade * screenFadeStart;
}
// signature: zCinematic::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800AF730 -> 0x800AF7B4
void zCinematic::HandleEvent() {
}
// signature: zCinematic::Stopped(bool)
// Range: 0x800AF7C0 -> 0x800AFA30
void zCinematic::Stopped(class zCinematic * this /* r31 */) {
    {
        // Range: 0x800AF7C8 -> 0x800AFA14
        // Local variables
        class EventNotifyCinematicDone params; // r1+0x8
    }

    // References
    // -> static class xScreenFade * screenFade;
    // -> unsigned int uiDisabledWhenPadMissing;
    // -> bool bAllowInput;
    // -> class zGlobals globals;
}
// signature: zCinematic_Init(void *, void *)
// Range: 0x800AFA30 -> 0x800AFA9C
void zCinematic_Init() {
    // References
    // -> struct {} __vt__10zCinematic;
}
// Range: 0x800AFAE0 -> 0x800AFB74
void zCinematic_SceneExit() {
    // Local variables
    int tidx; // r0
    class zCinematic * current; // r31
    class zCinematic * last; // r30

    // References
    // -> class zGlobals globals;
}
// signature: zCinematic_Save(xSerial *)
// Range: 0x800AFB80 -> 0x800AFB90
void zCinematic_Save() {
    // References
    // -> static unsigned long long gCineSkipTable[64];
}
// signature: zCinematic_Load(xSerial *)
// Range: 0x800AFB90 -> 0x800AFBA0
void zCinematic_Load() {
    // References
    // -> static unsigned long long gCineSkipTable[64];
}
