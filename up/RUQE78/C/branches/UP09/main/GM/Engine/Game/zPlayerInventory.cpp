/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayerInventory.cpp
*/
static char * UseDefaultString; // size: 0x4, address: 0x807B4E60
static class Pointer32 pUseDefaultString; // size: 0x4, address: 0x80824CDC
static class Pointer32 pCustomString; // size: 0x4, address: 0x80824CE0
static char * UseDefaultString; // size: 0x4, address: 0x807B4E64
static class Pointer32 pUseDefaultString; // size: 0x4, address: 0x80824CE4
// Range: 0x8020CB70 -> 0x8020CB7C
void * zBadgeAnimation::zBadgeAnimation() {
}
// Range: 0x8020CB80 -> 0x8020CBE4
void * zBadgeAnimation::~zBadgeAnimation(class zBadgeAnimation * this /* r30 */) {
}
// signature: zBadgeAnimation::Init(unsigned int, int, float, GradientCurve::zGradientCurve *)
// Range: 0x8020CBF0 -> 0x8020CF84
void zBadgeAnimation::Init(class zBadgeAnimation * this /* r25 */, int value /* r26 */, float screenWidth /* f31 */, class zGradientCurve * path /* r27 */) {
    {
        // Range: 0x8020CC0C -> 0x8020CF64
        // Local variables
        class ModelInstanceAsset * masset; // r28
    }

    // References
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x8020CF90 -> 0x8020D2A0
void zBadgeAnimation::Update(class zBadgeAnimation * this /* r31 */, float dt /* f30 */) {
    {
        // Range: 0x8020D05C -> 0x8020D26C
        // Local variables
        float percent; // f1
        class xVec3 newPos; // r1+0xBC
        class xVec3 endPoint; // r1+0xC8
        class xMat4x3 & mat; // r30
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zPlayerInventory inventory;
}
// Range: 0x8020D2A0 -> 0x8020D2AC
void zBadgeAnimation::Reset() {
}
// signature: zBadgeAnimation::getMatrix(xVec3, float)
// Range: 0x8020D2B0 -> 0x8020D424
class xMat4x3 zBadgeAnimation::getMatrix(float scale /* f30 */) {
    // Local variables
    float spin; // f31
    class xMat4x3 ret; // r1+0x8
}
// Range: 0x8020D430 -> 0x8020D4DC
void * zPlayerInventory::~zPlayerInventory(class zPlayerInventory * this /* r29 */) {
}
// Range: 0x8020D4E0 -> 0x8020DBE0
void zPlayerInventory::Init(class zPlayerInventory * this /* r29 */) {
    {
        // Range: 0x8020D4FC -> 0x8020DB34
        // Local variables
        float screenWidth; // f31
        class zGradientCurve * pathCrv; // r28

        {
            // Range: 0x8020D544 -> 0x8020D574
            // Local variables
            int i; // r27
        }
        {
            // Range: 0x8020D584 -> 0x8020D5B4
            // Local variables
            int i; // r27
        }
        {
            // Range: 0x8020D5C4 -> 0x8020D5F4
            // Local variables
            int i; // r27
        }
        {
            // Range: 0x8020D604 -> 0x8020D634
            // Local variables
            int i; // r27
        }
        {
            // Range: 0x8020D690 -> 0x8020D718
            // Local variables
            int i; // r0
        }
        {
            // Range: 0x8020D718 -> 0x8020D750
            // Local variables
            int i; // r0
        }
        {
            // Range: 0x8020DAB0 -> 0x8020DAB4
            // Local variables
            int i; // r0
        }
    }
    {
        // Range: 0x8020DB34 -> 0x8020DB98
        // Local variables
        int * indices; // r3
        char * sName; // r27
        class zSoundFXAsset * asset; // r0
    }
}
// Range: 0x8020DBE0 -> 0x8020DCFC
void zPlayerInventory::Save(class zPlayerInventory * this /* r28 */, class xSerial * serial /* r29 */) {
    {
        // Range: 0x8020DC58 -> 0x8020DC70
        // Local variables
        int i; // r31
    }
    {
        // Range: 0x8020DC80 -> 0x8020DC90
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x8020DCA4 -> 0x8020DCB8
        // Local variables
        int i; // r30
    }
}
// Range: 0x8020DD00 -> 0x8020DF44
void zPlayerInventory::Load(class zPlayerInventory * this /* r28 */, class xSerial * serial /* r29 */) {
    {
        // Range: 0x8020DD78 -> 0x8020DD8C
        // Local variables
        int i; // r31
    }
    {
        // Range: 0x8020DD9C -> 0x8020DDAC
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x8020DDC0 -> 0x8020DDD0
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x8020DE28 -> 0x8020DEB0
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8020DEB0 -> 0x8020DEE8
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8020DEE8 -> 0x8020DF24
        // Local variables
        int i; // r0
    }

    // References
    // -> class Module * trcModule;
}
// Range: 0x8020DF50 -> 0x8020E7E8
void zPlayerInventory::CollectBadge(class zPlayerInventory * this /* r22 */, class xVec3 & pos /* r23 */, int gold /* r24 */, int silver /* r25 */, int bronze /* r26 */, int health /* r27 */, float probability /* f25 */) {
    {
        // Range: 0x8020E020 -> 0x8020E210
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8020E21C -> 0x8020E40C
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x8020E418 -> 0x8020E60C
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x8020E618 -> 0x8020E78C
        // Local variables
        int i; // r28
    }

    // References
    // -> static class zSoundModule * sMod;
}
// Range: 0x8020E7F0 -> 0x8020E918
void zPlayerInventory::Update(class zPlayerInventory * this /* r28 */, float dt /* f31 */) {
    {
        // Range: 0x8020E814 -> 0x8020E83C
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8020E858 -> 0x8020E874
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8020E890 -> 0x8020E8AC
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x8020E8C4 -> 0x8020E8E0
        // Local variables
        int i; // r29
    }
}
// signature: zPlayerInventory::AddBadge(int, int, int)
// Range: 0x8020E920 -> 0x8020EB78
void zPlayerInventory::AddBadge(class zPlayerInventory * this /* r31 */) {
    // References
    // -> static class Pointer32 pUseDefaultString;
    // -> static char * UseDefaultString;
    // -> class zGameCheats gGameCheats;
}
// signature: zPlayerInventory::AddBadge(int)
// Range: 0x8020EB80 -> 0x8020EDC4
void zPlayerInventory::AddBadge(class zPlayerInventory * this /* r31 */) {
    // Local variables
    int newPoints; // r4
    class EventActionOneInt params; // r1+0x8

    // References
    // -> static class Pointer32 pUseDefaultString;
    // -> static char * UseDefaultString;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x8020EDD0 -> 0x8020EFEC
bool zPlayerInventory::LostBadge(class zPlayerInventory * this /* r29 */, int value /* r23 */, class xVec3 * pos /* r30 */) {
    {
        // Range: 0x8020EE00 -> 0x8020EFD8
        // Local variables
        int numGoldFX; // r24
        int numSilverFX; // r31
        int numBronzeFX; // r5
        class EventActionOneInt params; // r1+0x10

        {
            // Range: 0x8020EE84 -> 0x8020EEF8
            // Local variables
            int i; // r23

            {
                // Range: 0x8020EE84 -> 0x8020EEF8
                // Local variables
                class zFXSpawn * fxSpawn; // r0
            }
        }
        {
            // Range: 0x8020EF04 -> 0x8020EF60
            // Local variables
            int i; // r23

            {
                // Range: 0x8020EF04 -> 0x8020EF60
                // Local variables
                class zFXSpawn * fxSpawn; // r0
            }
        }
        {
            // Range: 0x8020EF6C -> 0x8020EFC8
            // Local variables
            int i; // r23

            {
                // Range: 0x8020EF6C -> 0x8020EFC8
                // Local variables
                class zFXSpawn * fxSpawn; // r0
            }
        }
    }
}
// Range: 0x8020EFF0 -> 0x8020EFF8
int zPlayerInventory::GetCurrentBadgeValue() {
}
// Range: 0x8020F000 -> 0x8020F2D0
void zPlayerInventory::CollectUniqueCollectible(class zPlayerInventory * this /* r30 */, enum eUPFloatingItemType idx /* r31 */) {
    {
        // Range: 0x8020F01C -> 0x8020F26C
        // Local variables
        bool allMemoribilia; // r3
        bool allArtifact; // r4

        {
            // Range: 0x8020F0E4 -> 0x8020F108
            // Local variables
            int i; // r5
        }
        {
            // Range: 0x8020F1CC -> 0x8020F258
            // Local variables
            int i; // r0
        }
    }

    // References
    // -> static class Pointer32 pUseDefaultString;
    // -> static char * UseDefaultString;
}
// signature: zPlayerInventory::IsThisCollected(Sext::eUPFloatingItemType)
// Range: 0x8020F2D0 -> 0x8020F2FC
bool zPlayerInventory::IsThisCollected() {
}
// Range: 0x8020F300 -> 0x8020F448
int zPlayerInventory::GetCollectiblePercentage() {
    // Local variables
    int numCollected; // r5
    int total; // r6

    {
        // Range: 0x8020F30C -> 0x8020F32C
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x8020F3C8 -> 0x8020F43C
        // Local variables
        int i; // r0
    }
}
// Range: 0x8020F450 -> 0x8020F624
void zPlayerInventory::CheckQuestCardUnlock(class zPlayerInventory * this /* r31 */) {
    // Local variables
    int numCardUnlocked; // r0

    {
        // Range: 0x8020F484 -> 0x8020F604
        // Local variables
        int cardIdx; // r0
    }

    // References
    // -> static class Pointer32 pUseDefaultString;
    // -> static char * UseDefaultString;
}
// signature: zPlayerInventory::GetMemorabiliaOrArtifactString(Sext::eUPFloatingItemType)
// Range: 0x8020F630 -> 0x8020F860
char * zPlayerInventory::GetMemorabiliaOrArtifactString() {
}
// signature: zPlayerInventory::ShowInventoryTextBox(const char *, Sext::eUPFloatingItemType)
// Range: 0x8020F860 -> 0x8020F91C
void zPlayerInventory::ShowInventoryTextBox(char * uiBoxName /* r30 */) {
    // Local variables
    char * text; // r31
    class EventActionTextboxOn params; // r1+0x8

    // References
    // -> static char * UseDefaultString;
}
// signature: zPlayerInventory::IsMultiPlayerLevelUnlocked(unsigned int)
// Range: 0x8020F920 -> 0x8020F998
bool zPlayerInventory::IsMultiPlayerLevelUnlocked() {
    // References
    // -> class zGameCheats gGameCheats;
}
// Range: 0x8020F9A0 -> 0x8020FA98
void zPlayerInventory::UpdateHUDAllAbilities(class zPlayerInventory * this /* r27 */) {
}
// signature: zPlayerInventory::CollectTank(int)
// Range: 0x8020FAA0 -> 0x8020FB40
void zPlayerInventory::CollectTank(class zPlayerInventory * this /* r31 */) {
}
// signature: zPlayerInventory::CollectBattery(int)
// Range: 0x8020FB40 -> 0x8020FBDC
void zPlayerInventory::CollectBattery(class zPlayerInventory * this /* r31 */) {
}
// signature: zPlayerInventory::CollectCanteen(int)
// Range: 0x8020FBE0 -> 0x8020FC80
void zPlayerInventory::CollectCanteen(class zPlayerInventory * this /* r31 */) {
}
// signature: zPlayerInventory::CollectSheetMusic(int)
// Range: 0x8020FC80 -> 0x8020FD20
void zPlayerInventory::CollectSheetMusic(class zPlayerInventory * this /* r31 */) {
}
// Range: 0x8020FD20 -> 0x80210030
bool zPlayerInventory::UseTank() {
    // References
    // -> class zGlobals globals;
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
    // -> class zSoundWiimoteSpeaker * SoundList[18];
    // -> static class zUpWiimoteSoundHelper Instance;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80210030 -> 0x80210344
bool zPlayerInventory::UseBattery() {
    // References
    // -> class zGlobals globals;
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
    // -> class zSoundWiimoteSpeaker * SoundList[18];
    // -> static class zUpWiimoteSoundHelper Instance;
    // -> class zGameCheats gGameCheats;
}
// signature: zPlayerInventory::CollectBug(int, int)
// Range: 0x80210350 -> 0x80210518
void zPlayerInventory::CollectBug(class zPlayerInventory * this /* r31 */) {
    {
        // Range: 0x8021036C -> 0x802104F8
        // Local variables
        int totalBugs; // r27
        bool collectAll; // r3

        {
            // Range: 0x80210430 -> 0x802104C8
            // Local variables
            int i; // r4
        }
    }

    // References
    // -> static class Pointer32 pUseDefaultString;
    // -> static char * UseDefaultString;
}
// signature: zPlayerInventory::QueryBug(int, int)
// Range: 0x80210520 -> 0x8021054C
int zPlayerInventory::QueryBug() {
    // Local variables
    int idx; // r0
}
// Range: 0x80210550 -> 0x802106A8
int zPlayerInventory::GetBugPercentage() {
    // Local variables
    short bugTotal[14]; // r1+0x8
    int sumTotal; // r7
    int sumCollected; // r8

    {
        // Range: 0x80210568 -> 0x802105AC
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x802105AC -> 0x802105AC
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x802105AC -> 0x802105AC
            // Local variables
            unsigned int j; // r10
        }
    }
    {
        // Range: 0x8021063C -> 0x8021068C
        // Local variables
        int i; // r9
    }
}
// signature: zPlayerInventory::FinishLevel(unsigned int)
// Range: 0x802106B0 -> 0x802106F4
void zPlayerInventory::FinishLevel() {
    {
        // Range: 0x802106B8 -> 0x802106E8
        // Local variables
        int i; // r6
    }
}
// signature: zPlayerInventory::CheckAchievement(eAchievementType)
// Range: 0x80210700 -> 0x80210944
void zPlayerInventory::CheckAchievement() {
    {
        // Range: 0x8021077C -> 0x8021087C
        // Local variables
        int i; // r6
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80210950 -> 0x80210A68
void zPlayerInventory::CheatAllInventory() {
    {
        // Range: 0x8021097C -> 0x8021097C
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x80210984 -> 0x80210984
        // Local variables
        int i; // r0
    }

    // References
    // -> class zGlobals globals;
}
