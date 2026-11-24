/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCinematic.cpp
*/
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_MB1XOpeningCinematic[1]; // size: 0xC, address: 0x806B5064
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_MB1XChiliBombTutorial[1]; // size: 0xC, address: 0x806B5070
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_CT2RClosing[1]; // size: 0xC, address: 0x806B507C
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_SW1XOpening[1]; // size: 0xC, address: 0x806B5088
static class zCinematicSyncTable gCinematicSyncTables[4]; // size: 0x30, address: 0x806B5098
static unsigned long long gCineSkipTable[64]; // size: 0x200, address: 0x80732A58
class xtextbox tb; // size: 0x88, address: 0x80733FC8
// signature: @unnamed@WAD01_cpp@::CinematicEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800990F0 -> 0x8009910C
static void @unnamed@WAD01_cpp@::CinematicEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x80099110 -> 0x80099200
void zCinematic::Init(class zCinematic * this /* r27 */, class zCinematicAsset * inAsset /* r28 */) {
    {
        // Range: 0x800991C0 -> 0x800991E8
        // Local variables
        unsigned int i; // r0
    }

    // References
    // -> static class zCinematicSyncTable gCinematicSyncTables[4];
}
// Range: 0x80099200 -> 0x80099274
void zCinematic::Setup(class zCinematic * this /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0
}
// Range: 0x80099280 -> 0x800992D4
void zCinematic::Reset(class zCinematic * this /* r31 */) {
}
// Range: 0x800992E0 -> 0x80099338
bool zCinematic::CanPlay() {
    // References
    // -> bool returningToTitle;
    // -> class zGlobals globals;
}
// Range: 0x80099340 -> 0x800994D0
void zCinematic::Play(class zCinematic * this /* r31 */, class xBase * caller /* r29 */) {
    {
        // Range: 0x8009940C -> 0x80099444
        // Local variables
        int i; // r0
    }

    // References
    // -> bool bAllowInput;
    // -> static unsigned long long gCineSkipTable[64];
    // -> class zGlobals globals;
}
// signature: zCinematic::GetCurrentClipAndFrame(unsigned long long &, unsigned int &, unsigned int &, unsigned int &)
// Range: 0x800994D0 -> 0x8009957C
void zCinematic::GetCurrentClipAndFrame() {
    // Local variables
    unsigned int clipsTotalFrames; // r12

    {
        // Range: 0x800994D8 -> 0x80099570
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x800994D8 -> 0x80099570
            // Local variables
            unsigned int clipRange; // r3
            unsigned int startFrame; // r30
        }
    }
}
// Range: 0x80099580 -> 0x80099638
void zCinematic::StartVideo(class zCinematic * this /* r31 */) {
    // Local variables
    unsigned long long clipID; // r1+0x10
    unsigned int absoluteCinematicFrame; // r1+0xC
    unsigned int currentClipFrame; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// Range: 0x80099640 -> 0x80099680
void zCinematic::Pause(class zCinematic * this /* r31 */) {
}
// Range: 0x80099680 -> 0x800996A8
void zCinematic::Unpause() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x800996B0 -> 0x80099764
void zCinematic::Stop(class zCinematic * this /* r29 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80099770 -> 0x8009978C
void zCinematic::StopPostponed() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80099790 -> 0x800998CC
enum eSoundStatus zCinematic::GetCinematicSoundStatus(class zCinematic * this /* r31 */) {
    // Local variables
    unsigned int curSoundState; // r1+0x1C

    {
        // Range: 0x800997E8 -> 0x800998B4
        // Local variables
        int chnlCount; // r1+0x10
        int subGrpCount; // r1+0x14
        class ChannelGroup * eventChnlGrp; // r1+0x18

        {
            // Range: 0x80099864 -> 0x800998AC
            // Local variables
            int i; // r31

            {
                // Range: 0x80099864 -> 0x800998AC
                // Local variables
                bool isVirtual; // r1+0x8
                class Channel * chnl; // r1+0xC
            }
        }
    }
}
// Range: 0x800998D0 -> 0x800999D8
float zCinematic::GetSoundTime() {
    // Local variables
    class ChannelGroup * eventChnlGrp; // r1+0x18
    int subGrpCount; // r1+0x14
    int chnlCount; // r1+0x10

    {
        // Range: 0x8009996C -> 0x800999C0
        {
            // Range: 0x8009996C -> 0x800999C0
            // Local variables
            float soundTime; // f1
            unsigned int soundPosition; // r1+0x8
            class Channel * chnl; // r1+0xC
        }
    }
}
// signature: zCinematic::GetCurSyncOffset(float)
// Range: 0x800999E0 -> 0x80099A60
float zCinematic::GetCurSyncOffset() {
    {
        // Range: 0x80099A14 -> 0x80099A54
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x80099A14 -> 0x80099A54
            // Local variables
            class zCinematicSyncTableEntry * curTableEntry; // r5
        }
    }
}
// Range: 0x80099A60 -> 0x8009A010
void zCinematic::Timestep(class zCinematic * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x80099B9C -> 0x80099FE0
        // Local variables
        class xVec3 camPos; // r1+0x30
        unsigned int clipIdx; // r1+0x18
        unsigned int currentClipFrame; // r1+0x1C
        unsigned int absoluteCinematicFrame; // r1+0x20
        unsigned long long clipID; // r1+0x28

        {
            // Range: 0x80099BF4 -> 0x80099E94
            // Local variables
            char dtStr[16]; // r1+0x40
            float limit; // f30
            int frame; // r27
            int sec; // r28
            int min; // r29
            char tempStr[64]; // r1+0x88
        }
        {
            // Range: 0x80099EC0 -> 0x80099FE0
            // Local variables
            float PIDWantedGameTimeVelocity; // r1+0x10
            float videoTimeMultiplier; // f0
            float wantedVideoAndGameTime; // f30
            float curSoundTime; // f0
            float curVideoTime; // f29
            float PIDWantedVideoTimeMultiplier; // r1+0x14
        }
    }

    // References
    // -> class xtextbox tb;
    // -> static class basic_rect screen_safe_bounds;
    // -> static class basic_rect screen_bounds;
    // -> class xColor g_GRAY80;
    // -> class xColor g_BLACK;
    // -> class zGlobals globals;
}
// signature: zCinematic::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8009A010 -> 0x8009A094
void zCinematic::HandleEvent() {
}
// signature: zCinematic::Stopped(bool)
// Range: 0x8009A0A0 -> 0x8009A1DC
void zCinematic::Stopped(class zCinematic * this /* r29 */) {
    {
        // Range: 0x8009A0A8 -> 0x8009A1C8
        // Local variables
        class EventNotifyCinematicDone params; // r1+0x8
    }

    // References
    // -> unsigned int uiDisabledWhenPadMissing;
    // -> bool bAllowInput;
    // -> class zGlobals globals;
}
// Range: 0x8009A1E0 -> 0x8009A1F8
bool zCinematic::AllObjectsGetUpdated() const {
}
// Range: 0x8009A200 -> 0x8009A240
bool zCinematic::HavokWorldGetsUpdated() const {
}
// Range: 0x8009A240 -> 0x8009A280
bool zCinematic::SimpleObjectsGetUpdated() const {
}
// Range: 0x8009A280 -> 0x8009A2C0
bool zCinematic::PlatformsGetUpdated() const {
}
// Range: 0x8009A2C0 -> 0x8009A300
bool zCinematic::PlayersGetUpdated() const {
}
// Range: 0x8009A300 -> 0x8009A380
bool zCinematic::IsSpecialCinematic() {
    // Local variables
    unsigned int specialScenesArray[5]; // r1+0x8
    int i; // r0

    // References
    // -> class zGlobals globals;
}
// Range: 0x8009A380 -> 0x8009A418
class Entity * Sext::zCinematicAsset::Create(class EntityHandleBase * handle /* r29 */, class zCinematicAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__10zCinematic;
}
// Range: 0x8009A420 -> 0x8009A4AC
void * zCinematic::~zCinematic(class zCinematic * this /* r30 */) {
    // References
    // -> struct {} __vt__10zCinematic;
}
// Range: 0x8009A4B0 -> 0x8009A4C4
void zCinematic_SceneInit() {
    // References
    // -> static unsigned long long gCineSkipTable[64];
}
// signature: zCinematic_Save(xSerial *)
// Range: 0x8009A4D0 -> 0x8009A4E0
void zCinematic_Save() {
    // References
    // -> static unsigned long long gCineSkipTable[64];
}
// signature: zCinematic_Load(xSerial *)
// Range: 0x8009A4E0 -> 0x8009A4F0
void zCinematic_Load() {
    // References
    // -> static unsigned long long gCineSkipTable[64];
}
