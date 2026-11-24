/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCinematic.cpp
*/
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_MB1XOpeningCinematic[1]; // size: 0xC, address: 0x807A35C0
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_MB1XChiliBombTutorial[1]; // size: 0xC, address: 0x807A35CC
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_CT2RClosing[1]; // size: 0xC, address: 0x807A35D8
static class zCinematicSyncTableEntry gCinematicSyncTableEntries_SW1XOpening[1]; // size: 0xC, address: 0x807A35E4
static class zCinematicSyncTable gCinematicSyncTables[4]; // size: 0x30, address: 0x807A35F0
static class xScreenFade * screenFade; // size: 0x4, address: 0x8081C30C
static class xScreenFade * screenFadeStart; // size: 0x4, address: 0x8081C310
static unsigned long long gCineSkipTable[64]; // size: 0x200, address: 0x8081C318
static class xtextbox tb; // size: 0x88, address: 0x8081C518
// Range: 0x80135200 -> 0x80135320
void zCinematic::Init(class zCinematic * this /* r27 */, class zCinematicAsset * inAsset /* r28 */) {
    {
        // Range: 0x80135294 -> 0x80135308
        // Local variables
        unsigned int i; // r0
    }

    // References
    // -> static class zCinematicSyncTable gCinematicSyncTables[4];
}
// Range: 0x80135320 -> 0x80135394
void zCinematic::Setup(class zCinematic * this /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0
}
// Range: 0x801353A0 -> 0x801353F4
void zCinematic::Reset(class zCinematic * this /* r31 */) {
}
// Range: 0x80135400 -> 0x80135698
void zCinematic::Play(class zCinematic * this /* r31 */, class xBase * caller /* r29 */) {
    {
        // Range: 0x80135504 -> 0x80135560
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
// signature: zCinematic::GetCurrentClipAndFrame(unsigned long long &, unsigned int &, unsigned int &, unsigned int &)
// Range: 0x801356A0 -> 0x8013575C
void zCinematic::GetCurrentClipAndFrame() {
    // Local variables
    unsigned int clipsTotalFrames; // r12

    {
        // Range: 0x801356B0 -> 0x80135744
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x801356B0 -> 0x80135744
            // Local variables
            unsigned int clipRange; // r3
            unsigned int startFrame; // r30
        }
    }
}
// Range: 0x80135760 -> 0x801357A0
void zCinematic::Pause(class zCinematic * this /* r31 */) {
}
// Range: 0x801357A0 -> 0x801357C8
void zCinematic::Unpause() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x801357D0 -> 0x80135908
void zCinematic::Stop(class zCinematic * this /* r29 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80135910 -> 0x80135914
void zCinematic::StopPostponed() {
}
// Range: 0x80135920 -> 0x80135A5C
enum eSoundStatus zCinematic::GetCinematicSoundStatus(class zCinematic * this /* r31 */) {
    // Local variables
    unsigned int curSoundState; // r1+0x1C

    {
        // Range: 0x80135978 -> 0x80135A44
        // Local variables
        int chnlCount; // r1+0x10
        int subGrpCount; // r1+0x14
        class ChannelGroup * eventChnlGrp; // r1+0x18

        {
            // Range: 0x801359F4 -> 0x80135A2C
            // Local variables
            int i; // r31

            {
                // Range: 0x801359F4 -> 0x80135A2C
                // Local variables
                bool isVirtual; // r1+0x8
                class Channel * chnl; // r1+0xC
            }
        }
    }
}
// Range: 0x80135A60 -> 0x80135B68
float zCinematic::GetSoundTime() {
    // Local variables
    class ChannelGroup * eventChnlGrp; // r1+0x18
    int subGrpCount; // r1+0x14
    int chnlCount; // r1+0x10

    {
        // Range: 0x80135AFC -> 0x80135B4C
        {
            // Range: 0x80135AFC -> 0x80135B4C
            // Local variables
            float soundTime; // f1
            unsigned int soundPosition; // r1+0x8
            class Channel * chnl; // r1+0xC
        }
    }
}
// Range: 0x80135B70 -> 0x801364B8
void zCinematic::Timestep(class zCinematic * this /* r29 */, float dt /* f31 */) {
    {
        // Range: 0x80135E68 -> 0x80136488
        // Local variables
        class xVec3 camPos; // r1+0x58
        unsigned int clipIdx; // r1+0x28
        unsigned int currentClipFrame; // r1+0x2C
        unsigned int absoluteCinematicFrame; // r1+0x30
        unsigned long long clipID; // r1+0x50

        {
            // Range: 0x80135EC0 -> 0x80136268
            // Local variables
            char dtStr[16]; // r1+0x68
            float limit; // f30
            int frame; // r26
            int sec; // r28
            int min; // r30
            char tempStr[64]; // r1+0xE8
        }
        {
            // Range: 0x801362F4 -> 0x80136488
            // Local variables
            float PIDWantedGameTimeVelocity; // r1+0x20
            float videoTimeMultiplier; // f0
            float wantedVideoAndGameTime; // f29
            float curSoundTime; // f0
            float curVideoTime; // f30
            float PIDWantedVideoTimeMultiplier; // r1+0x24
        }
    }

    // References
    // -> static class xScreenFade * screenFade;
    // -> static class xtextbox tb;
    // -> class callback text_cb;
    // -> static class basic_rect screen_safe_bounds;
    // -> class xColor g_BLACK;
    // -> class xColor g_GRAY80;
    // -> static class basic_rect screen_bounds;
    // -> class zGlobals globals;
    // -> static class xScreenFade * screenFadeStart;
}
// signature: zCinematic::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801364C0 -> 0x80136544
void zCinematic::HandleEvent() {
}
// signature: zCinematic::Stopped(bool)
// Range: 0x80136550 -> 0x801367EC
void zCinematic::Stopped(class zCinematic * this /* r31 */) {
    {
        // Range: 0x80136558 -> 0x801367D0
        // Local variables
        class EventNotifyCinematicDone params; // r1+0x8
    }

    // References
    // -> static class xScreenFade * screenFade;
    // -> unsigned int uiDisabledWhenPadMissing;
    // -> bool bAllowInput;
    // -> class zGlobals globals;
}
// Range: 0x801367F0 -> 0x80136914
class Entity * Sext::zCinematicAsset::Create(class EntityHandleBase * handle /* r29 */, class zCinematicAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__10zCinematic;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80136930 -> 0x801369E0
void * zCinematic::~zCinematic(class zCinematic * this /* r30 */) {
    // References
    // -> struct {} __vt__10zCinematic;
}
// Range: 0x801369E0 -> 0x80136A54
void zCinematic_SceneInit() {
    // Local variables
    unsigned long long id; // r0:r0

    // References
    // -> static unsigned long long gCineSkipTable[64];
    // -> static class xScreenFade * screenFadeStart;
    // -> static class xScreenFade * screenFade;
}
// signature: zCinematic_Save(xSerial *)
// Range: 0x80136A60 -> 0x80136A70
void zCinematic_Save() {
    // References
    // -> static unsigned long long gCineSkipTable[64];
}
// signature: zCinematic_Load(xSerial *)
// Range: 0x80136A70 -> 0x80136A80
void zCinematic_Load() {
    // References
    // -> static unsigned long long gCineSkipTable[64];
}
