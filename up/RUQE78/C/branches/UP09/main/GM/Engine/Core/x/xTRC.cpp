/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xTRC.cpp
*/
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x808158C8
static int MAX_RETRIES; // size: 0x4, address: 0x807756A0
static int BINK_MEMORY_SIZE; // size: 0x4, address: 0x807756A4
static float interval_distance; // size: 0x4, address: 0x807756A8
static float DISTANCE_EPSILON; // size: 0x4, address: 0x807756AC
static float ANGLE_EPSILON; // size: 0x4, address: 0x807756B0
static float freq; // size: 0x4, address: 0x807756B4
static float dthetax; // size: 0x4, address: 0x807756B8
static float dthetay; // size: 0x4, address: 0x807756BC
static float dxcos0; // size: 0x4, address: 0x807756C0
static float dxsin0; // size: 0x4, address: 0x807756C4
static float dycos0; // size: 0x4, address: 0x807756C8
static float dysin0; // size: 0x4, address: 0x807756CC
static float freq; // size: 0x4, address: 0x807756D0
static float freq2; // size: 0x4, address: 0x807756D4
static float freq; // size: 0x4, address: 0x807756D8
static float randumag; // size: 0x4, address: 0x807756DC
static float randvmag; // size: 0x4, address: 0x807756E0
static int numVertices; // size: 0x4, address: 0x807756E4
static int numPrimitives; // size: 0x4, address: 0x807756E8
static int numIndices; // size: 0x4, address: 0x807756EC
static int retWii; // size: 0x4, address: 0x807756F0
static int retNotWii; // size: 0x4, address: 0x807756F4
static int timesToPreRoll; // size: 0x4, address: 0x807756F8
static int ALLOC_OVERHEAD; // size: 0x4, address: 0x807756FC
static float refAnimLimitRefreshTime; // size: 0x4, address: 0x80775700
static int NUM_PARAMS; // size: 0x4, address: 0x80775704
static int NUM_SEGMENTS; // size: 0x4, address: 0x80775708
static int binkFullVolume; // size: 0x4, address: 0x8077570C
static float SPLINE_ORIENT_SPEED; // size: 0x4, address: 0x80775710
static float position_blend_speed; // size: 0x4, address: 0x80775714
static float orient_blend_speed; // size: 0x4, address: 0x80775718
static float threshold; // size: 0x4, address: 0x8077571C
static float audioThresholdRollingContactMaxVelocity; // size: 0x4, address: 0x80775720
static float audioThresholdRollingOffNormalCOMRelativeVelocity; // size: 0x4, address: 0x80775724
static unsigned int stride; // size: 0x4, address: 0x80775728
static int MAX_COUNTER_TEXT; // size: 0x4, address: 0x8077572C
static float THRESH_DIST; // size: 0x4, address: 0x80775730
static float THRESH_DIST2; // size: 0x4, address: 0x80775734
static float GUESS_SPAN; // size: 0x4, address: 0x80775738
static int max_tries; // size: 0x4, address: 0x8077573C
static float increase_factor; // size: 0x4, address: 0x80775740
static int padding; // size: 0x4, address: 0x80775744
static float max_pitch; // size: 0x4, address: 0x80775748
static float max_pitch; // size: 0x4, address: 0x8077574C
static float DEFAULT_ASPECT_RATIO; // size: 0x4, address: 0x80775750
static unsigned short keep_flags; // size: 0x2, address: 0x80775754
static unsigned int MAX_SUBST_TRANSITION; // size: 0x4, address: 0x80775758
static int islandArraysSize; // size: 0x4, address: 0x8077575C
static int maxIslandSize; // size: 0x4, address: 0x80775760
static float treadWidth; // size: 0x4, address: 0x80775764
static float treadHeight; // size: 0x4, address: 0x80775768
static float treadLength; // size: 0x4, address: 0x8077576C
class _tagTRCDiskInfo gTrcDisk; // size: 0x8, address: 0x808158F8
int gTrcPortPlayerMap[4]; // size: 0x10, address: 0x80815900
char * k_CONTROLLER_MISSING_MESSAGE; // size: 0x4, address: 0x80815910
char * k_CONTROLLER_INVALID_MESSAGE; // size: 0x4, address: 0x80815914
bool gTrcSpaceCheckDone; // size: 0x1, address: 0x80815918
bool gTrcControlsDisabled; // size: 0x1, address: 0x80815919
bool gTrcLegalScreenDone; // size: 0x1, address: 0x8081591A
unsigned int gShowingContMissingMsg; // size: 0x4, address: 0x8081591C
static char composed_message_text[256]; // size: 0x100, address: 0x80815920
static char * message_text; // size: 0x4, address: 0x80815A20
// signature: xTRCPadRemove(int)
// Range: 0x80083E20 -> 0x80083F90
void xTRCPadRemove() {
    {
        // Range: 0x80083E2C -> 0x80083F74
        // Local variables
        int i; // r5
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadSetState(int, _tagTRCState)
// Range: 0x80083FA0 -> 0x80083FB8
void xTRCPadSetState() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x80083FC0 -> 0x80084188
int xTRCPadCountWereActiveTotal() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x80084190 -> 0x80084388
void xTRCPadSetStatePadPort(int port /* r29 */, enum _tagTRCState state /* r30 */) {
    {
        // Range: 0x800841B0 -> 0x80084364
        // Local variables
        int i; // r31

        {
            // Range: 0x800841B0 -> 0x80084364
            // Local variables
            enum _tagTRCState oldState; // r19

            {
                // Range: 0x800841B0 -> 0x800841B0
                // Local variables
                int candidate; // r3

                {
                    // Range: 0x800841B0 -> 0x800841B0
                    // Local variables
                    int ii; // r0
                }
            }
            {
                // Range: 0x800841B0 -> 0x8008435C
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
// Range: 0x80084390 -> 0x800843D8
void xTRCPadSetPadStatePort() {
    {
        // Range: 0x80084394 -> 0x800843A0
        // Local variables
        int i; // r0
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadFindFirst(int &, _tagTRCState)
// Range: 0x800843E0 -> 0x80084444
bool xTRCPadFindFirst() {
    // Local variables
    int i; // r8

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadFindFirstPadState(int &, _tagTRCPadState)
// Range: 0x80084450 -> 0x800844B4
bool xTRCPadFindFirstPadState() {
    // Local variables
    int i; // r8

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x800844C0 -> 0x800844CC
bool xTRCPadIsControlsDisabled() {
    // References
    // -> bool gTrcControlsDisabled;
}
// signature: xTRCPadGetPadPort(int)
// Range: 0x800844D0 -> 0x800844E4
int xTRCPadGetPadPort() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadGetStateIdx(int)
// Range: 0x800844F0 -> 0x80084508
enum _tagTRCState xTRCPadGetStateIdx() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadGetPadStatePort(int)
// Range: 0x80084510 -> 0x80084560
enum _tagTRCPadState xTRCPadGetPadStatePort() {
    {
        // Range: 0x8008451C -> 0x80084550
        // Local variables
        int i; // r5
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadGetPadStateIdx(int)
// Range: 0x80084560 -> 0x80084578
enum _tagTRCPadState xTRCPadGetPadStateIdx() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadIsPort(int, _tagTRCState)
// Range: 0x80084580 -> 0x800845E0
bool xTRCPadIsPort() {
    {
        // Range: 0x8008458C -> 0x800845CC
        // Local variables
        int i; // r6
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// Range: 0x800845E0 -> 0x80084834
void xTRCPadReOrder() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCUpdate(int)
// Range: 0x80084840 -> 0x80084F1C
void xTRCUpdate() {
    {
        // Range: 0x80084ADC -> 0x80084F00
        // Local variables
        int startidx; // r5
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
    // -> class xGlobals * xglobals;
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCSwapPorts(int, int)
// Range: 0x80084F20 -> 0x80084F9C
void xTRCSwapPorts() {
    {
        // Range: 0x80084F24 -> 0x80084F98
        // Local variables
        int i; // r0
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCPadInsert(int)
// Range: 0x80084FA0 -> 0x80085074
void xTRCPadInsert() {
    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
}
// signature: xTRCResetPadStateToInserted(int)
// Range: 0x80085080 -> 0x800851F4
void xTRCResetPadStateToInserted() {
    // Local variables
    int port; // r0

    {
        // Range: 0x800850D4 -> 0x800851E8
        // Local variables
        int i; // r5

        {
            // Range: 0x80085120 -> 0x80085160
            // Local variables
            int iii; // r5
        }
        {
            // Range: 0x800851A4 -> 0x800851D8
            // Local variables
            int iii; // r5
        }
    }

    // References
    // -> class _tagTRCPadInfo gTrcPad[4];
    // -> class zGlobals globals;
    // -> int gTrcPortPlayerMap[4];
}
// Range: 0x80085200 -> 0x8008550C
void xTRCResetAllPadStateToInserted() {
    {
        // Range: 0x80085210 -> 0x80085214
        // Local variables
        int i; // r31
    }

    // References
    // -> static char composed_message_text[256];
    // -> static char * message_text;
    // -> class _tagTRCPadInfo gTrcPad[4];
    // -> class zGlobals globals;
}
// Range: 0x80085510 -> 0x80085534
void xTRCInitMessages() {
    // References
    // -> char * k_CONTROLLER_INVALID_MESSAGE;
    // -> char * k_CONTROLLER_MISSING_MESSAGE;
}
// Range: 0x80085540 -> 0x80085558
void xTRCClearPadMsg() {
    // References
    // -> static char composed_message_text[256];
    // -> static char * message_text;
}
// signature: xTRCPadGetPortPlayerMapOfPort(int)
// Range: 0x80085560 -> 0x800855BC
int xTRCPadGetPortPlayerMapOfPort() {
    {
        // Range: 0x80085564 -> 0x800855B4
        // Local variables
        int i; // r0
    }

    // References
    // -> int gTrcPortPlayerMap[4];
}
// signature: xTRCPadGetPortWithPortPlayerMap(int)
// Range: 0x800855C0 -> 0x800855EC
int xTRCPadGetPortWithPortPlayerMap() {
    // References
    // -> int gTrcPortPlayerMap[4];
}
// signature: xTRCPadSetPortPlayerMap(int, int)
// Range: 0x800855F0 -> 0x80085604
void xTRCPadSetPortPlayerMap() {
    // References
    // -> int gTrcPortPlayerMap[4];
}
// signature: DisplayMessage(int, _tagTRCState)
// Range: 0x80085610 -> 0x800857D8
static int DisplayMessage(int port /* r27 */) {
    {
        // Range: 0x8008565C -> 0x80085734
        // Local variables
        unsigned int len_message_text; // r0

        {
            // Range: 0x800856B8 -> 0x80085730
            // Local variables
            char c; // r0
            char * msg; // r30

            {
                // Range: 0x800856E0 -> 0x80085730
                // Local variables
                unsigned int sub_len; // r28
            }
        }
    }

    // References
    // -> char * k_CONTROLLER_INVALID_MESSAGE;
    // -> static char composed_message_text[256];
    // -> char * k_CONTROLLER_MISSING_MESSAGE;
    // -> static char * message_text;
}
// signature: xTRCPadDisplayMessage(int, _tagTRCState)
// Range: 0x800857E0 -> 0x80085864
void xTRCPadDisplayMessage() {
    {
        // Range: 0x800857E8 -> 0x80085854
        // Local variables
        int display_message; // r0
    }

    // References
    // -> static char * message_text;
    // -> class _tagTRCPadInfo gTrcPad[4];
    // -> class zGlobals globals;
}
