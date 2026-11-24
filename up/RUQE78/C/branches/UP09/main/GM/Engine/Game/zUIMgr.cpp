/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUIMgr.cpp
*/
bool zSystemUIShowing; // size: 0x1, address: 0x8082C188
bool zSystemUIShowingChanged; // size: 0x1, address: 0x8082C189
bool zPausedBeforeSystemUIShowing; // size: 0x1, address: 0x8082C18A
bool returningToTitle; // size: 0x1, address: 0x8082C18B
bool noPressStart; // size: 0x1, address: 0x8082C18C
bool alreadyPaused; // size: 0x1, address: 0x8082C18D
bool pauseEnabled; // size: 0x1, address: 0x807B5780
unsigned int uiDisabledWhenPadMissing; // size: 0x4, address: 0x8082C190
static unsigned int activeUIPads; // size: 0x4, address: 0x807B5784
static float padDisabledTimer[4]; // size: 0x10, address: 0x8082C198
class zUI * uiElements[512]; // size: 0x800, address: 0x8082C1A8
int uiElementCount; // size: 0x4, address: 0x8082C9A8
bool uiHDREnabled; // size: 0x1, address: 0x8082C9AC
bool uiAnyActive; // size: 0x1, address: 0x807B5788
bool screenLetterBoxActive; // size: 0x1, address: 0x8082C9AD
float afterTimer; // size: 0x4, address: 0x8082C9B0
class tweak_callback uiCallbacks; // size: 0x28, address: 0x8082C9B8
static bool bladShowing; // size: 0x1, address: 0x8082C9E0
// Range: 0x8026FA50 -> 0x8026FA5C
float zUIGetTimer() {
    // References
    // -> float afterTimer;
}
// signature: zUIMgrInit(zScene *)
// Range: 0x8026FA60 -> 0x8026FE24
void zUIMgrInit() {
    {
        // Range: 0x8026FC50 -> 0x8026FD60
        // Local variables
        int i; // r29

        {
            // Range: 0x8026FC84 -> 0x8026FD5C
            // Local variables
            class UIMotionCommandAsset * cmd; // r5
            class UI_Motion * asset; // r0

            {
                // Range: 0x8026FC84 -> 0x8026FD4C
                // Local variables
                unsigned int j; // r6

                {
                    // Range: 0x8026FC84 -> 0x8026FD40
                    // Local variables
                    class UIMotionCommandColor & color; // r0
                }
            }
        }
    }
    {
        // Range: 0x8026FD88 -> 0x8026FD90
        // Local variables
        int i; // r30
    }

    // References
    // -> bool pauseEnabled;
    // -> bool uiAnyActive;
    // -> class zUI * uiElements[512];
    // -> class zGlobals globals;
    // -> int uiElementCount;
}
// Range: 0x8026FE30 -> 0x8027004C
void zUIMgrUpdate(float dt /* f31 */) {
    {
        // Range: 0x8026FE50 -> 0x8026FEBC
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8026FEFC -> 0x8026FF10
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x8026FFC0 -> 0x8027001C
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
    // -> static float padDisabledTimer[4];
}
// signature: zUIMgrEnablePause(bool)
// Range: 0x80270050 -> 0x8027005C
void zUIMgrEnablePause() {
    // References
    // -> bool pauseEnabled;
}
// signature: zUIMgrSetScreenLetterBox(bool)
// Range: 0x80270060 -> 0x8027006C
void zUIMgrSetScreenLetterBox() {
    // References
    // -> bool screenLetterBoxActive;
}
// Range: 0x80270070 -> 0x8027007C
bool zUIMgrGetScreenLetterBox() {
    // References
    // -> bool screenLetterBoxActive;
}
// Range: 0x80270080 -> 0x8027015C
void zUIMgrRender() {
    // Local variables
    bool inCinematic; // r28

    {
        // Range: 0x8027008C -> 0x8027013C
        // Local variables
        int i; // r27
    }

    // References
    // -> class zUI * uiElements[512];
    // -> bool uiHDREnabled;
    // -> int uiElementCount;
    // -> class zGlobals globals;
}
// signature: zUIMgrEnableHDR(bool)
// Range: 0x80270800 -> 0x8027080C
void zUIMgrEnableHDR() {
    // References
    // -> bool uiHDREnabled;
}
// signature: zUIMgrSetActivePadMask(unsigned int)
// Range: 0x80270810 -> 0x8027081C
void zUIMgrSetActivePadMask() {
    // References
    // -> static unsigned int activeUIPads;
}
// Range: 0x80270820 -> 0x8027082C
unsigned int zUIMgrGetActivePadMask() {
    // References
    // -> static unsigned int activeUIPads;
}
// signature: zUIMgrResetDisabledPointerTimer(int)
// Range: 0x80270830 -> 0x8027084C
void zUIMgrResetDisabledPointerTimer() {
    // References
    // -> static float padDisabledTimer[4];
}
// signature: zUIMgrIsPointerDisabled(int)
// Range: 0x80270850 -> 0x802708EC
bool zUIMgrIsPointerDisabled() {
    // Local variables
    bool isDisabled; // r7

    {
        // Range: 0x80270854 -> 0x80270884
        // Local variables
        int i; // r0
    }

    // References
    // -> static float padDisabledTimer[4];
}
// Range: 0x802708F0 -> 0x80270964
int zUIMgrGetPointerDisabled() {
    // Local variables
    int isDisabled; // r3

    {
        // Range: 0x802708F0 -> 0x8027091C
        // Local variables
        int i; // r0
    }

    // References
    // -> static float padDisabledTimer[4];
}
