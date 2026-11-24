/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xTRC.cpp
*/
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x8072D900
class _tagTRCDiskInfo gTrcDisk; // size: 0x8, address: 0x8072D930
int gTrcPortPlayerMap[4]; // size: 0x10, address: 0x8072D938
char * k_CONTROLLER_MISSING_MESSAGE; // size: 0x4, address: 0x8072D948
char * k_CONTROLLER_INVALID_MESSAGE; // size: 0x4, address: 0x8072D94C
bool gTrcSpaceCheckDone; // size: 0x1, address: 0x8072D950
bool gTrcControlsDisabled; // size: 0x1, address: 0x8072D951
bool gTrcLegalScreenDone; // size: 0x1, address: 0x8072D952
unsigned int gShowingContMissingMsg; // size: 0x4, address: 0x8072D954
static char composed_message_text[256]; // size: 0x100, address: 0x8072D958
static char * message_text; // size: 0x4, address: 0x8072DA58
// signature: xTRCSwapPads(_tagTRCPadInfo &, _tagTRCPadInfo &)
// Range: 0x800474F0 -> 0x80047534
void xTRCSwapPads() {
    // Local variables
    class _tagTRCPadInfo temppad; // r1+0x8
}
// Range: 0x80047370 -> 0x800473BC
class _tagTRCPadInfo & xTRCPadGetNextAvailablePad() {
    {
        // Range: 0x8004737C -> 0x800473B0
        // Local variables
        int i; // r0
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadRemove(int)
// Range: 0x800473C0 -> 0x800474F0
void xTRCPadRemove() {
    {
        // Range: 0x800473CC -> 0x800474DC
        // Local variables
        int i; // r6
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadSetState(int, _tagTRCState)
// Range: 0x80047550 -> 0x80047568
void xTRCPadSetState() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x80047570 -> 0x800475CC
int xTRCPadCount(enum _tagTRCState state /* r30 */) {
    // Local variables
    int counter; // r31
    int startidx; // r1+0x8
}
// Range: 0x800475D0 -> 0x8004762C
int xTRCPadCount(enum _tagTRCPadState padstate /* r30 */) {
    // Local variables
    int counter; // r31
    int startidx; // r1+0x8
}
// Range: 0x80047630 -> 0x800476D0
int xTRCPadCountWereActiveTotal() {
    // Local variables
    int activecount; // r0
    int missingcount; // r0
    int padstatecount; // r0
}
// Range: 0x800476D0 -> 0x80047860
void xTRCPadSetStatePadPort(int port /* r28 */, enum _tagTRCState state /* r29 */) {
    {
        // Range: 0x800476F8 -> 0x8004784C
        // Local variables
        int i; // r30

        {
            // Range: 0x80047700 -> 0x8004784C
            // Local variables
            enum _tagTRCState oldState; // r18

            {
                // Range: 0x80047710 -> 0x80047710
                // Local variables
                int candidate; // r4

                {
                    // Range: 0x80047710 -> 0x80047710
                    // Local variables
                    int ii; // r5
                }
            }
            {
                // Range: 0x80047710 -> 0x8004784C
                // Local variables
                int iii; // r0
            }
        }
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
    // -> int gTrcPortPlayerMap[4];
}
// signature: xTRCPadSetPadStatePort(int, _tagTRCPadState)
// Range: 0x80047860 -> 0x80047894
void xTRCPadSetPadStatePort() {
    {
        // Range: 0x8004786C -> 0x80047890
        // Local variables
        int i; // r0
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadFindFirst(int &, _tagTRCState)
// Range: 0x800478A0 -> 0x80047904
bool xTRCPadFindFirst() {
    // Local variables
    int i; // r8

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadFindFirstPadState(int &, _tagTRCPadState)
// Range: 0x80047910 -> 0x80047974
bool xTRCPadFindFirstPadState() {
    // Local variables
    int i; // r8

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x80047980 -> 0x8004798C
bool xTRCPadIsControlsDisabled() {
    // References
    // -> bool gTrcControlsDisabled;
}
// signature: xTRCPadGetPadPort(int)
// Range: 0x80047990 -> 0x800479A4
int xTRCPadGetPadPort() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadGetStateIdx(int)
// Range: 0x800479B0 -> 0x800479C8
enum _tagTRCState xTRCPadGetStateIdx() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadGetPadStatePort(int)
// Range: 0x800479D0 -> 0x80047A0C
enum _tagTRCPadState xTRCPadGetPadStatePort() {
    {
        // Range: 0x800479D0 -> 0x80047A04
        // Local variables
        int i; // r0
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadGetPadStateIdx(int)
// Range: 0x80047A10 -> 0x80047A28
enum _tagTRCPadState xTRCPadGetPadStateIdx() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadIsPort(int, _tagTRCState)
// Range: 0x80047A30 -> 0x80047A7C
bool xTRCPadIsPort() {
    {
        // Range: 0x80047A30 -> 0x80047A70
        // Local variables
        int i; // r0
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: @unnamed@WAD00_cpp@::xTRCIsNextState(int, unsigned int)
// Range: 0x80047A80 -> 0x80047AC4
static bool @unnamed@WAD00_cpp@::xTRCIsNextState() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: @unnamed@WAD00_cpp@::xTRCIsNextPadState(int, unsigned int)
// Range: 0x80047AD0 -> 0x80047B14
static bool @unnamed@WAD00_cpp@::xTRCIsNextPadState() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x80047B20 -> 0x80047BC0
static bool @unnamed@WAD00_cpp@::xTRCBabbleSort(bool (* funcShake)(int i, unsigned int state) /* r25 */, unsigned int state /* r26 */) {
    // Local variables
    bool babble; // r29
    int counter; // r28

    {
        // Range: 0x80047B30 -> 0x80047B98
        // Local variables
        int i; // r27
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x80047BC0 -> 0x80047C24
void xTRCPadReOrder() {
}
// signature: xTRCPadGetPort_Player(int)
// Range: 0x80047C30 -> 0x80047C9C
int xTRCPadGetPort_Player() {
    {
        // Range: 0x80047C44 -> 0x80047C88
        {
            // Range: 0x80047C60 -> 0x80047C88
            // Local variables
            unsigned int port; // r3
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: xTRCUpdate(int)
// Range: 0x80047CA0 -> 0x80047E00
void xTRCUpdate() {
    {
        // Range: 0x80047D00 -> 0x80047DE0
        // Local variables
        int startidx; // r1+0x8
    }

    // References
    // -> bool gTrcControlsDisabled;
    // -> static char composed_message_text[256];
    // -> static char * message_text;
    // -> bool alreadyPaused;
    // -> unsigned int uiDisabledWhenPadMissing;
    // -> bool bAllowInput;
    // -> static int cnt_fadesInProgress;
    // -> class zGlobals globals;
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCSwapPorts(int, int)
// Range: 0x80047E00 -> 0x80047E44
void xTRCSwapPorts() {
    {
        // Range: 0x80047E0C -> 0x80047E40
        // Local variables
        int i; // r0
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x80047E50 -> 0x80047EA0
void xTRCPadInsert(int i /* r31 */) {
    {
        // Range: 0x80047E80 -> 0x80047E8C
        // Local variables
        class _tagTRCPadInfo & trcpad; // r0
    }
}
// signature: xTRCResetPadStateToInserted(int)
// Range: 0x80047EA0 -> 0x80047FD0
void xTRCResetPadStateToInserted() {
    // Local variables
    int port; // r0

    {
        // Range: 0x80047EDC -> 0x80047FC0
        // Local variables
        int i; // r0

        {
            // Range: 0x80047F18 -> 0x80047F4C
            // Local variables
            int iii; // r0
        }
        {
            // Range: 0x80047F8C -> 0x80047FB4
            // Local variables
            int iii; // r0
        }
    }

    // References
    // -> int gTrcPortPlayerMap[4];
    // -> class _tagTRCPadInfo gTrcPad[4];
    // -> class zGlobals globals;
}
// Range: 0x80047FD0 -> 0x80048060
void xTRCResetAllPadStateToInserted() {
    {
        // Range: 0x80047FE0 -> 0x80048004
        // Local variables
        int i; // r31
    }

    // References
    // -> static char composed_message_text[256];
    // -> static char * message_text;
    // -> class zGlobals globals;
}
// Range: 0x80048060 -> 0x80048084
void xTRCInitMessages() {
    // References
    // -> char * k_CONTROLLER_INVALID_MESSAGE;
    // -> char * k_CONTROLLER_MISSING_MESSAGE;
}
// Range: 0x80048090 -> 0x800480A8
void xTRCClearPadMsg() {
    // References
    // -> static char composed_message_text[256];
    // -> static char * message_text;
}
// signature: xTRCPadGetPortPlayerMapOfPort(int)
// Range: 0x800480B0 -> 0x800480F0
int xTRCPadGetPortPlayerMapOfPort() {
    {
        // Range: 0x800480B0 -> 0x800480E8
        // Local variables
        int i; // r6
    }

    // References
    // -> int gTrcPortPlayerMap[4];
}
// signature: xTRCPadGetPortWithPortPlayerMap(int)
// Range: 0x800480F0 -> 0x8004811C
int xTRCPadGetPortWithPortPlayerMap() {
    // References
    // -> int gTrcPortPlayerMap[4];
}
// signature: xTRCPadSetPortPlayerMap(int, int)
// Range: 0x80048120 -> 0x80048134
void xTRCPadSetPortPlayerMap() {
    // References
    // -> int gTrcPortPlayerMap[4];
}
// signature: xTRCPadDisplayMessage(int, _tagTRCState)
// Range: 0x80048140 -> 0x80048324
void xTRCPadDisplayMessage() {
    // References
    // -> char * k_CONTROLLER_INVALID_MESSAGE;
    // -> static char composed_message_text[256];
    // -> char * k_CONTROLLER_MISSING_MESSAGE;
    // -> static char * message_text;
    // -> class _tagTRCPadInfo gTrcPad[4];
    // -> class zGlobals globals;
}
