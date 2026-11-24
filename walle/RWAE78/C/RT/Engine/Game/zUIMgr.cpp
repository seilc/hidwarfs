/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zUIMgr.cpp
*/
class _OGUI_MotionSchema _OGUI_Motionschema; // size: 0x18, address: 0x807E4BF8
class SchemaRegistrator _OGUI_MotionschemaReg; // size: 0x8, address: 0x807E4C10
bool zSystemUIShowing; // size: 0x1, address: 0x807E4C18
bool zSystemUIShowingChanged; // size: 0x1, address: 0x807E4C19
bool zPausedBeforeSystemUIShowing; // size: 0x1, address: 0x807E4C1A
bool returningToTitle; // size: 0x1, address: 0x807E4C1B
bool noPressStart; // size: 0x1, address: 0x807E4C1C
bool alreadyPaused; // size: 0x1, address: 0x807E4C1D
bool pauseEnabled; // size: 0x1, address: 0x80700E74
unsigned int uiDisabledWhenPadMissing; // size: 0x4, address: 0x807E4C20
class zUI * uiElements[512]; // size: 0x800, address: 0x807E4C28
int uiElementCount; // size: 0x4, address: 0x807E5428
bool uiHDREnabled; // size: 0x1, address: 0x807E542C
bool uiAnyActive; // size: 0x1, address: 0x80700E75
bool screenLetterBoxActive; // size: 0x1, address: 0x807E542D
float afterTimer; // size: 0x4, address: 0x807E5430
class tweak_callback uiCallbacks; // size: 0x28, address: 0x807E5438
static bool bladShowing; // size: 0x1, address: 0x807E5460
static bool padUnplugged; // size: 0x1, address: 0x807E5461
// Range: 0x801CEFA0 -> 0x801CEFB0
void World::_OGUI_MotionEntity::Deactivate() {
}
// Range: 0x801CEFB0 -> 0x801CF000
void World::_OGUI_MotionEntity::Destroy(class _OGUI_MotionEntity * this /* r31 */) {
}
// signature: World::_OGUI_MotionSchema::Fix(World::Asset *, long, int)
// Range: 0x801CF060 -> 0x801CF068
void World::_OGUI_MotionSchema::Fix() {
}
// signature: World::_OGUI_MotionSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801CF070 -> 0x801CF0BC
class EntityStub * World::_OGUI_MotionSchema::CreateStub(class _OGUI_MotionSchema * this /* r31 */) {
}
// signature: World::_OGUI_MotionSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801CF0C0 -> 0x801CF0D8
void World::_OGUI_MotionSchema::DestroyStub() {
}
// signature: World::_OGUI_MotionSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801CF0E0 -> 0x801CF148
class Entity * World::_OGUI_MotionSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World18_OGUI_MotionEntity;
}
// signature: sendPadPressStartEvent(int)
// Range: 0x801CF190 -> 0x801CF25C
void sendPadPressStartEvent() {
    {
        // Range: 0x801CF198 -> 0x801CF248
        // Local variables
        class zUI * element; // r3
        class zUI * element_next; // r28

        {
            // Range: 0x801CF1AC -> 0x801CF1C0
            // Local variables
            int j; // r27
        }
    }

    // References
    // -> int uiElementCount;
    // -> class zUI * uiElements[512];
}
// Range: 0x801CF260 -> 0x801CF26C
float zUIGetTimer() {
    // References
    // -> float afterTimer;
}
// Range: 0x801CF270 -> 0x801CF6D4
void zUIMgrInit(class zScene * s /* r31 */) {
    // Local variables
    int tidx; // r0
    class zUIText * ui1; // r6
    class zUIImage * ui2; // r7
    class zUIModel * ui3; // r7
    class zUIBox * ui4; // r7
    class zUIUserString * ui5; // r7
    class zUIController * ui7; // r7
    class zScaleform * ui8; // r7

    {
        // Range: 0x801CF2B0 -> 0x801CF2B0
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x801CF304 -> 0x801CF304
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x801CF35C -> 0x801CF35C
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x801CF3B4 -> 0x801CF3B4
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x801CF40C -> 0x801CF40C
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x801CF464 -> 0x801CF464
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x801CF4B8 -> 0x801CF4B8
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x801CF4FC -> 0x801CF610
        // Local variables
        int i; // r29

        {
            // Range: 0x801CF530 -> 0x801CF60C
            // Local variables
            class UIMotionCommandAsset * cmd; // r5
            class UI_Motion * asset; // r0

            {
                // Range: 0x801CF530 -> 0x801CF5FC
                // Local variables
                unsigned int j; // r6

                {
                    // Range: 0x801CF530 -> 0x801CF5F0
                    // Local variables
                    class UIMotionCommandColor * color; // r0
                }
            }
        }
    }
    {
        // Range: 0x801CF638 -> 0x801CF640
        // Local variables
        int i; // r30
    }

    // References
    // -> bool pauseEnabled;
    // -> bool uiAnyActive;
    // -> class zUI * uiElements[512];
    // -> int uiElementCount;
}
// Range: 0x801CF6E0 -> 0x801CF89C
void zUIMgrUpdate(float dt /* f31 */) {
    {
        // Range: 0x801CF750 -> 0x801CF760
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x801CF810 -> 0x801CF86C
        // Local variables
        int i; // r27
    }

    // References
    // -> bool bAllowSelectInput;
    // -> static bool gAllowPortActivationThisFrame[4];
    // -> float afterTimer;
    // -> int uiElementCount;
    // -> class zUI * uiElements[512];
    // -> bool uiAnyActive;
    // -> bool returningToTitle;
    // -> bool zSystemUIShowingChanged;
    // -> class zGlobals globals;
}
// signature: zUIMgrEnablePause(bool)
// Range: 0x801CF8A0 -> 0x801CF8AC
void zUIMgrEnablePause() {
    // References
    // -> bool pauseEnabled;
}
// signature: zUIMgrSetScreenLetterBox(bool)
// Range: 0x801CF8B0 -> 0x801CF8BC
void zUIMgrSetScreenLetterBox() {
    // References
    // -> bool screenLetterBoxActive;
}
// Range: 0x801CF8C0 -> 0x801CF8CC
bool zUIMgrGetScreenLetterBox() {
    // References
    // -> bool screenLetterBoxActive;
}
// Range: 0x801CF8D0 -> 0x801CF9AC
void zUIMgrRender() {
    // Local variables
    bool inCinematic; // r28

    {
        // Range: 0x801CF8DC -> 0x801CF98C
        // Local variables
        int i; // r27
    }

    // References
    // -> class zUI * uiElements[512];
    // -> bool uiHDREnabled;
    // -> int uiElementCount;
    // -> class zGlobals globals;
}
// signature: zUIMgrSortList(zUI **, int)
// Range: 0x801D0050 -> 0x801D0080
void zUIMgrSortList() {
}
