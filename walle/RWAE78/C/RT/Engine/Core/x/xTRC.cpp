/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xTRC.cpp
*/
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x807654B8
class _tagTRCDiskInfo gTrcDisk; // size: 0x8, address: 0x807654E8
int gTrcPortPlayerMap[4]; // size: 0x10, address: 0x807654F0
char * k_CONTROLLER_MISSING_MESSAGE; // size: 0x4, address: 0x80765500
char * k_CONTROLLER_INVALID_MESSAGE; // size: 0x4, address: 0x80765504
bool gTrcSpaceCheckDone; // size: 0x1, address: 0x80765508
bool gTrcControlsDisabled; // size: 0x1, address: 0x80765509
bool gTrcLegalScreenDone; // size: 0x1, address: 0x8076550A
unsigned int gShowingContMissingMsg; // size: 0x4, address: 0x8076550C
static char composed_message_text[256]; // size: 0x100, address: 0x80765510
static char * message_text; // size: 0x4, address: 0x80765610
static unsigned int standalone; // size: 0x4, address: 0x80765614
static class xtextbox tb; // size: 0x88, address: 0x80765618
// signature: xTRCPadRemove(int)
// Range: 0x80067680 -> 0x800677F0
void xTRCPadRemove() {
    {
        // Range: 0x8006768C -> 0x800677D4
        // Local variables
        int i; // r5
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadSetState(int, _tagTRCState)
// Range: 0x80067800 -> 0x80067818
void xTRCPadSetState() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x80067820 -> 0x800679E8
int xTRCPadCountWereActiveTotal() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x800679F0 -> 0x80067BE8
void xTRCPadSetStatePadPort(int port /* r29 */, enum _tagTRCState state /* r30 */) {
    {
        // Range: 0x80067A10 -> 0x80067BC4
        // Local variables
        int i; // r31

        {
            // Range: 0x80067A10 -> 0x80067BC4
            // Local variables
            enum _tagTRCState oldState; // r19

            {
                // Range: 0x80067A10 -> 0x80067A10
                // Local variables
                int candidate; // r3

                {
                    // Range: 0x80067A10 -> 0x80067A10
                    // Local variables
                    int ii; // r0
                }
            }
            {
                // Range: 0x80067A10 -> 0x80067BBC
                // Local variables
                int iii; // r4
            }
        }
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
    // -> int gTrcPortPlayerMap[4];
}
// signature: xTRCPadSetPadStatePort(int, _tagTRCPadState)
// Range: 0x80067BF0 -> 0x80067C38
void xTRCPadSetPadStatePort() {
    {
        // Range: 0x80067BF4 -> 0x80067C00
        // Local variables
        int i; // r0
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadFindFirst(int &, _tagTRCState)
// Range: 0x80067C40 -> 0x80067CA4
bool xTRCPadFindFirst() {
    // Local variables
    int i; // r8

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadFindFirstPadState(int &, _tagTRCPadState)
// Range: 0x80067CB0 -> 0x80067D14
bool xTRCPadFindFirstPadState() {
    // Local variables
    int i; // r8

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x80067D20 -> 0x80067D2C
bool xTRCPadIsControlsDisabled() {
    // References
    // -> bool gTrcControlsDisabled;
}
// signature: xTRCPadGetPadPort(int)
// Range: 0x80067D30 -> 0x80067D44
int xTRCPadGetPadPort() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadGetStateIdx(int)
// Range: 0x80067D50 -> 0x80067D68
enum _tagTRCState xTRCPadGetStateIdx() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadGetPadStatePort(int)
// Range: 0x80067D70 -> 0x80067DC0
enum _tagTRCPadState xTRCPadGetPadStatePort() {
    {
        // Range: 0x80067D7C -> 0x80067DB0
        // Local variables
        int i; // r5
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadGetPadStateIdx(int)
// Range: 0x80067DC0 -> 0x80067DD8
enum _tagTRCPadState xTRCPadGetPadStateIdx() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadIsPort(int, _tagTRCState)
// Range: 0x80067DE0 -> 0x80067E40
bool xTRCPadIsPort() {
    {
        // Range: 0x80067DEC -> 0x80067E2C
        // Local variables
        int i; // r6
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x80067E40 -> 0x80068094
void xTRCPadReOrder() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCUpdate(int)
// Range: 0x800680A0 -> 0x80068804
void xTRCUpdate() {
    {
        // Range: 0x8006833C -> 0x80068770
        // Local variables
        int startidx; // r5
    }

    // References
    // -> bool gTrcControlsDisabled;
    // -> int gTrcPortPlayerMap[4];
    // -> static char composed_message_text[256];
    // -> static char * message_text;
    // -> bool alreadyPaused;
    // -> bool zSystemUIShowing;
    // -> unsigned int uiDisabledWhenPadMissing;
    // -> bool bAllowInput;
    // -> static int cnt_fadesInProgress;
    // -> class zGlobals globals;
    // -> class xGlobals * xglobals;
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadInsert(int)
// Range: 0x80068810 -> 0x800688E4
void xTRCPadInsert() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCResetPadStateToInserted(int)
// Range: 0x800688F0 -> 0x80068A64
void xTRCResetPadStateToInserted() {
    // Local variables
    int port; // r0

    {
        // Range: 0x80068944 -> 0x80068A58
        // Local variables
        int i; // r5

        {
            // Range: 0x80068990 -> 0x800689D0
            // Local variables
            int iii; // r5
        }
        {
            // Range: 0x80068A14 -> 0x80068A48
            // Local variables
            int iii; // r5
        }
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
    // -> class zGlobals globals;
    // -> int gTrcPortPlayerMap[4];
}
// Range: 0x80068A70 -> 0x80068D7C
void xTRCResetAllPadStateToInserted() {
    {
        // Range: 0x80068A80 -> 0x80068A84
        // Local variables
        int i; // r31
    }

    // References
    // -> static char composed_message_text[256];
    // -> static char * message_text;
    // -> class _tagTRCPadInfo gTrcPad[4];
    // -> class zGlobals globals;
}
// Range: 0x80068D80 -> 0x80068DA4
void xTRCInitMessages() {
    // References
    // -> char * k_CONTROLLER_INVALID_MESSAGE;
    // -> char * k_CONTROLLER_MISSING_MESSAGE;
}
// Range: 0x80068DB0 -> 0x80068DC8
void xTRCClearPadMsg() {
    // References
    // -> static char composed_message_text[256];
    // -> static char * message_text;
}
// Range: 0x80068DD0 -> 0x80068DE8
void xTRCReset() {
    // References
    // -> static char composed_message_text[256];
    // -> static char * message_text;
}
// signature: xTRCPadGetPortPlayerMapOfPort(int)
// Range: 0x80068DF0 -> 0x80068E4C
int xTRCPadGetPortPlayerMapOfPort() {
    {
        // Range: 0x80068DF4 -> 0x80068E44
        // Local variables
        int i; // r0
    }

    // References
    // -> int gTrcPortPlayerMap[4];
}
// signature: xTRCPadGetPortWithPortPlayerMap(int)
// Range: 0x80068E50 -> 0x80068E7C
int xTRCPadGetPortWithPortPlayerMap() {
    // References
    // -> int gTrcPortPlayerMap[4];
}
// signature: xTRCPadSetPortPlayerMap(int, int)
// Range: 0x80068E80 -> 0x80068E94
void xTRCPadSetPortPlayerMap() {
    // References
    // -> int gTrcPortPlayerMap[4];
}
// signature: DisplayMessage(int, _tagTRCState)
// Range: 0x80068EA0 -> 0x80069068
static int DisplayMessage(int port /* r27 */) {
    {
        // Range: 0x80068EEC -> 0x80068FC4
        // Local variables
        unsigned int len_message_text; // r0

        {
            // Range: 0x80068F4C -> 0x80068FC0
            // Local variables
            char c; // r0
            char * msg; // r30

            {
                // Range: 0x80068F70 -> 0x80068FC0
                // Local variables
                unsigned int sub_len; // r28
            }
        }
    }

    // References
    // -> char * k_CONTROLLER_INVALID_MESSAGE;
    // -> static char composed_message_text[256];
    // -> char * k_CONTROLLER_MISSING_MESSAGE;
    // -> enum eGameMode gGameMode;
    // -> static char * message_text;
}
// signature: xTRCPadDisplayMessage(int, _tagTRCState)
// Range: 0x80069070 -> 0x800690F4
void xTRCPadDisplayMessage() {
    {
        // Range: 0x80069078 -> 0x800690E4
        // Local variables
        int display_message; // r0
    }

    // References
    // -> static char * message_text;
    // -> class _tagTRCPadInfo gTrcPad[4];
    // -> class zGlobals globals;
}
