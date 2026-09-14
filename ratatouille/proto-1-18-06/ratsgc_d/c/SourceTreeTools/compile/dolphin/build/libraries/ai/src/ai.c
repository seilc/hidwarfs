/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\ai\src\ai.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803947F4 -> 0x803953D8
*/
const char * __AIVersion; // size: 0x4, address: 0x80D67F98
static void (* __AIS_Callback)(unsigned long); // size: 0x4, address: 0x80D6BCE0
static void (* __AID_Callback)(); // size: 0x4, address: 0x80D6BCE4
static unsigned char * __CallbackStack; // size: 0x4, address: 0x80D6BCE8
static unsigned char * __OldStack; // size: 0x4, address: 0x80D6BCEC
static int __AI_init_flag; // size: 0x4, address: 0x80D6BCF0
static int __AID_Active; // size: 0x4, address: 0x80D6BCF4
// Range: 0x803947F4 -> 0x8039483C
void (* AIRegisterDMACallback(void (* callback)() /* r1+0x8 */))() {
    // Local variables
    void (* old_callback)(); // r31
    int old; // r30

    // References
    // -> static void (* __AID_Callback)();
}

// Range: 0x8039483C -> 0x803948EC
void AIInitDMA(unsigned long start_addr /* r29 */, unsigned long length /* r30 */) {
    // Local variables
    int old; // r31
}

// Range: 0x803948EC -> 0x80394904
void AIStartDMA() {}

// Range: 0x80394904 -> 0x8039491C
void AIStopDMA() {}

// Range: 0x8039491C -> 0x80394924
int AICheckInit() {
    // References
    // -> static int __AI_init_flag;
}

// Range: 0x80394924 -> 0x80394940
void AIResetStreamSampleCount() {}

// Range: 0x80394940 -> 0x8039494C
void AISetStreamTrigger(unsigned long trigger /* r3 */) {}

// Range: 0x8039494C -> 0x80394A44
void AISetStreamPlayState(unsigned long state /* r31 */) {
    // Local variables
    int old; // r30
    unsigned char vol_left; // r29
    unsigned char vol_right; // r28
}

// Range: 0x80394A44 -> 0x80394A54
unsigned long AIGetStreamPlayState() {}

// Range: 0x80394A54 -> 0x80394B98
void AISetDSPSampleRate(unsigned long rate /* r26 */) {
    // Local variables
    int old; // r29
    unsigned long play_state; // r31
    unsigned long afr_state; // r30
    unsigned char vol_left; // r28
    unsigned char vol_right; // r27
}

// Range: 0x80394B98 -> 0x80394BAC
unsigned long AIGetDSPSampleRate() {}

// Range: 0x80394BAC -> 0x80394CBC
static void __AI_set_stream_sample_rate(unsigned long rate /* r31 */) {
    // Local variables
    int old; // r30
    unsigned long play_state; // r29
    unsigned char vol_left; // r28
    unsigned char vol_right; // r27
    unsigned long dsp_src_state; // r26
}

// Range: 0x80394CBC -> 0x80394CCC
unsigned long AIGetStreamSampleRate() {}

// Range: 0x80394CCC -> 0x80394D34
void AISetStreamVolLeft(unsigned char vol /* r31 */) {}

// Range: 0x80394D34 -> 0x80394D44
unsigned char AIGetStreamVolLeft() {}

// Range: 0x80394D44 -> 0x80394DA8
void AISetStreamVolRight(unsigned char vol /* r31 */) {}

// Range: 0x80394DA8 -> 0x80394DBC
unsigned char AIGetStreamVolRight() {}

static long long bound_32KHz; // size: 0x8, address: 0x80D6BCF8
static long long bound_48KHz; // size: 0x8, address: 0x80D6BD00
static long long min_wait; // size: 0x8, address: 0x80D6BD08
static long long max_wait; // size: 0x8, address: 0x80D6BD10
static long long buffer; // size: 0x8, address: 0x80D6BD18
// Range: 0x80394DBC -> 0x80394FB0
void AIInit(unsigned char * stack /* r31 */) {
    // References
    // -> static int __AI_init_flag;
    // -> static unsigned char * __CallbackStack;
    // -> static void (* __AID_Callback)();
    // -> static void (* __AIS_Callback)(unsigned long);
    // -> static long long buffer;
    // -> static long long max_wait;
    // -> static long long min_wait;
    // -> static long long bound_48KHz;
    // -> static long long bound_32KHz;
    // -> const char * __AIVersion;
}

// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    unsigned long psf_pad; // offset 0x1C4, size 0x4
    double psf[32]; // offset 0x1C8, size 0x100
};
// Range: 0x80394FB0 -> 0x80395028
static void __AISHandler(struct OSContext * context /* r1+0xC */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x10

    // References
    // -> static void (* __AIS_Callback)(unsigned long);
}

// Range: 0x80395028 -> 0x803950D8
static void __AIDHandler(struct OSContext * context /* r1+0xC */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x10
    unsigned short tmp; // r31

    // References
    // -> static int __AID_Active;
    // -> static void (* __AID_Callback)();
    // -> static unsigned char * __CallbackStack;
}

// Range: 0x803950D8 -> 0x80395130
static void __AICallbackStackSwitch(void * cb /* r31 */) {}

// total size: 0x30
struct STRUCT_TIMELOG {
    // Members
    long long t_start; // offset 0x0, size 0x8
    long long t1; // offset 0x8, size 0x8
    long long t2; // offset 0x10, size 0x8
    long long t3; // offset 0x18, size 0x8
    long long t4; // offset 0x20, size 0x8
    long long t_end; // offset 0x28, size 0x8
};
struct STRUCT_TIMELOG profile; // size: 0x30, address: 0x80D3DED8
// Range: 0x80395130 -> 0x803953D8
static void __AI_SRC_INIT() {
    // Local variables
    long long rising_32khz; // r22
    long long rising_48khz; // r26
    long long diff; // r30
    long long t1; // r1+0x10
    long long temp; // r24
    unsigned long temp0; // r20
    unsigned long temp1; // r19
    unsigned long done; // r29
    unsigned long volume; // r1+0x8
    unsigned long Init_Cnt; // r28
    unsigned long walking; // r21

    // References
    // -> struct STRUCT_TIMELOG profile;
    // -> static long long max_wait;
    // -> static long long buffer;
    // -> static long long bound_48KHz;
    // -> static long long bound_32KHz;
    // -> static long long min_wait;
}


