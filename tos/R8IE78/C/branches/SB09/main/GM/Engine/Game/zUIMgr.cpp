/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zUIMgr.cpp
*/
bool zSystemUIShowing; // size: 0x1, address: 0x8075A734
bool zSystemUIShowingChanged; // size: 0x1, address: 0x8075A735
bool zPausedBeforeSystemUIShowing; // size: 0x1, address: 0x8075A736
bool returningToTitle; // size: 0x1, address: 0x8075A737
bool noPressStart; // size: 0x1, address: 0x8075A738
bool alreadyPaused; // size: 0x1, address: 0x8075A739
bool pauseEnabled; // size: 0x1, address: 0x806C24C8
unsigned int uiDisabledWhenPadMissing; // size: 0x4, address: 0x8075A73C
static unsigned int activeUIPads; // size: 0x4, address: 0x806C24CC
static float padDisabledTimer[4]; // size: 0x10, address: 0x8075A740
class zUI * uiElements[512]; // size: 0x800, address: 0x8075A750
int uiElementCount; // size: 0x4, address: 0x8075AF50
bool uiHDREnabled; // size: 0x1, address: 0x8075AF54
bool uiAnyActive; // size: 0x1, address: 0x806C24D0
bool screenLetterBoxActive; // size: 0x1, address: 0x8075AF55
float afterTimer; // size: 0x4, address: 0x8075AF58
class tweak_callback uiCallbacks; // size: 0x28, address: 0x8075AF60
static bool bladShowing; // size: 0x1, address: 0x8075AF88
// Range: 0x80183340 -> 0x8018334C
float zUIGetTimer() {
    // References
    // -> float afterTimer;
}
// signature: zUIMgrInit(zScene *)
// Range: 0x80183350 -> 0x80183550
void zUIMgrInit() {
    {
        // Range: 0x80183370 -> 0x80183370
        // Local variables
        class zUIMgrInit_FindElementsCB _tempCB; // r1+0x24
    }
    {
        // Range: 0x80183388 -> 0x80183388
        // Local variables
        class zUIMgrInit_FindElementsCB _tempCB; // r1+0x20
    }
    {
        // Range: 0x80183398 -> 0x80183398
        // Local variables
        class zUIMgrInit_FindElementsCB _tempCB; // r1+0x1C
    }
    {
        // Range: 0x801833A8 -> 0x801833A8
        // Local variables
        class zUIMgrInit_FindElementsCB _tempCB; // r1+0x18
    }
    {
        // Range: 0x801833B8 -> 0x801833B8
        // Local variables
        class zUIMgrInit_FindElementsCB _tempCB; // r1+0x14
    }
    {
        // Range: 0x801833C8 -> 0x801833C8
        // Local variables
        class zUIMgrInit_FindElementsCB _tempCB; // r1+0x10
    }
    {
        // Range: 0x801833D8 -> 0x801833D8
        // Local variables
        class zUIMgrInit_FindElementsCB _tempCB; // r1+0xC
    }
    {
        // Range: 0x801833E8 -> 0x801834E0
        // Local variables
        int i; // r30

        {
            // Range: 0x80183404 -> 0x801834E0
            // Local variables
            class UIMotionCommandAsset * cmd; // r5
            class UI_Motion * asset; // r0

            {
                // Range: 0x80183404 -> 0x801834E0
                // Local variables
                unsigned int j; // r6

                {
                    // Range: 0x80183404 -> 0x801834C0
                    // Local variables
                    class UIMotionCommandColor & color; // r0
                }
            }
        }
    }
    {
        // Range: 0x80183504 -> 0x80183538
        // Local variables
        int i; // r28
    }

    // References
    // -> class zUI * uiElements[512];
    // -> class zGlobals globals;
    // -> int uiElementCount;
}
// Range: 0x801835A0 -> 0x80183618
void zUIMgrReset() {
    {
        // Range: 0x801835B0 -> 0x801835F0
        // Local variables
        int i; // r28
    }

    // References
    // -> bool pauseEnabled;
    // -> bool uiAnyActive;
    // -> int uiElementCount;
    // -> class zUI * uiElements[512];
}
// Range: 0x80183620 -> 0x801837F8
void zUIMgrUpdate(float dt /* f31 */) {
    {
        // Range: 0x80183640 -> 0x80183680
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801836C0 -> 0x801836EC
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x80183768 -> 0x801837D8
        // Local variables
        int i; // r26
    }

    // References
    // -> bool bAllowSelectInput;
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
// Range: 0x80183800 -> 0x8018380C
void zUIMgrEnablePause() {
    // References
    // -> bool pauseEnabled;
}
// signature: zUIMgrSetScreenLetterBox(bool)
// Range: 0x80183810 -> 0x8018381C
void zUIMgrSetScreenLetterBox() {
    // References
    // -> bool screenLetterBoxActive;
}
// Range: 0x80183820 -> 0x8018382C
bool zUIMgrGetScreenLetterBox() {
    // References
    // -> bool screenLetterBoxActive;
}
// Range: 0x80183830 -> 0x80183900
void zUIMgrRender() {
    // Local variables
    bool inCinematic; // r27

    {
        // Range: 0x80183854 -> 0x801838EC
        // Local variables
        int i; // r26
    }

    // References
    // -> bool uiHDREnabled;
    // -> int uiElementCount;
    // -> class zUI * uiElements[512];
    // -> class zGlobals globals;
}
// signature: zUIMgrExit(zScene *)
// Range: 0x80183910 -> 0x80183974
void zUIMgrExit() {
    {
        // Range: 0x80183920 -> 0x80183960
        // Local variables
        int i; // r28
    }

    // References
    // -> int uiElementCount;
    // -> class zUI * uiElements[512];
}
// signature: @unnamed@WAD03_cpp@::ElementCompare::operator()(const void *, const void *) const
// Range: 0x80183C60 -> 0x80183D38
static int @unnamed@WAD03_cpp@::ElementCompare::operator()() const {
    // Local variables
    class zUI * a; // r3
    class zUI * b; // r30
    unsigned long long akey; // r0:r0
    unsigned long long bkey; // r0:r0
}
// signature: zUIMgrEnableHDR(bool)
// Range: 0x80183D40 -> 0x80183D4C
void zUIMgrEnableHDR() {
    // References
    // -> bool uiHDREnabled;
}
// signature: zUIMgrSortList(zUI **, int)
// Range: 0x80183D50 -> 0x80183D80
void zUIMgrSortList() {
}
// signature: zUIMgrSetActivePadMask(unsigned int)
// Range: 0x80183D80 -> 0x80183D8C
void zUIMgrSetActivePadMask() {
    // References
    // -> static unsigned int activeUIPads;
}
// Range: 0x80183D90 -> 0x80183D9C
unsigned int zUIMgrGetActivePadMask() {
    // References
    // -> static unsigned int activeUIPads;
}
// signature: zUIMgrResetDisabledPointerTimer(int)
// Range: 0x80183DA0 -> 0x80183DBC
void zUIMgrResetDisabledPointerTimer() {
    // References
    // -> static float padDisabledTimer[4];
}
// signature: zUIMgrIsPointerDisabled(int)
// Range: 0x80183DC0 -> 0x80183E18
bool zUIMgrIsPointerDisabled() {
    // Local variables
    bool isDisabled; // r7

    {
        // Range: 0x80183DC0 -> 0x80183E10
        // Local variables
        int i; // r8
    }

    // References
    // -> static float padDisabledTimer[4];
}
// Range: 0x80183E20 -> 0x80183E6C
int zUIMgrGetPointerDisabled() {
    // Local variables
    int isDisabled; // r3

    {
        // Range: 0x80183E20 -> 0x80183E68
        // Local variables
        int i; // r7
    }

    // References
    // -> static float padDisabledTimer[4];
}
