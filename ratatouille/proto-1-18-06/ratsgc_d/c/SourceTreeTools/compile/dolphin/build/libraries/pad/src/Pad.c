/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\pad\src\Pad.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D8378 -> 0x803D9C7C
*/
const char * __PADVersion; // size: 0x4, address: 0x80D68298
static int Initialized; // size: 0x4, address: 0x80D6C160
static unsigned long EnabledBits; // size: 0x4, address: 0x80D6C164
static unsigned long ResettingBits; // size: 0x4, address: 0x80D6C168
static long ResettingChan; // size: 0x4, address: 0x80D6829C
static unsigned long RecalibrateBits; // size: 0x4, address: 0x80D6C16C
static unsigned long WaitingBits; // size: 0x4, address: 0x80D6C170
static unsigned long CheckingBits; // size: 0x4, address: 0x80D6C174
static unsigned long PendingBits; // size: 0x4, address: 0x80D6C178
static unsigned long BarrelBits; // size: 0x4, address: 0x80D6C17C
static unsigned long XPatchBits; // size: 0x4, address: 0x80D682A0
static unsigned long AnalogMode; // size: 0x4, address: 0x80D682A4
static unsigned long Spec; // size: 0x4, address: 0x80D682A8
// total size: 0xC
struct PADStatus {
    // Members
    unsigned short button; // offset 0x0, size 0x2
    signed char stickX; // offset 0x2, size 0x1
    signed char stickY; // offset 0x3, size 0x1
    signed char substickX; // offset 0x4, size 0x1
    signed char substickY; // offset 0x5, size 0x1
    unsigned char triggerLeft; // offset 0x6, size 0x1
    unsigned char triggerRight; // offset 0x7, size 0x1
    unsigned char analogA; // offset 0x8, size 0x1
    unsigned char analogB; // offset 0x9, size 0x1
    signed char err; // offset 0xA, size 0x1
};
static void (* MakeStatus)(long, struct PADStatus *, unsigned long *); // size: 0x4, address: 0x80D682AC
static unsigned long Type[4]; // size: 0x10, address: 0x80D5BA90
static struct PADStatus Origin[4]; // size: 0x30, address: 0x80D5BAA0
static unsigned long CmdReadOrigin; // size: 0x4, address: 0x80D682B0
static unsigned long CmdCalibrate; // size: 0x4, address: 0x80D682B4
static unsigned long CmdProbeDevice[4]; // size: 0x10, address: 0x80D5BAD0
// total size: 0x10
struct OSResetFunctionInfo {
    // Members
    int (* func)(int); // offset 0x0, size 0x4
    unsigned long priority; // offset 0x4, size 0x4
    struct OSResetFunctionInfo * next; // offset 0x8, size 0x4
    struct OSResetFunctionInfo * prev; // offset 0xC, size 0x4
};
static struct OSResetFunctionInfo ResetFunctionInfo; // size: 0x10, address: 0x8054CBBC
static void (* SamplingCallback)(); // size: 0x4, address: 0x80D6C180
// Range: 0x803D8378 -> 0x803D83DC
static void PADEnable(long chan /* r31 */) {
    // Local variables
    unsigned long cmd; // r30
    unsigned long chanBit; // r29
    unsigned long data[2]; // r1+0xC

    // References
    // -> static unsigned long EnabledBits;
    // -> static unsigned long AnalogMode;
}

// Range: 0x803D83DC -> 0x803D846C
static void PADDisable(long chan /* r29 */) {
    // Local variables
    int enabled; // r30
    unsigned long chanBit; // r31

    // References
    // -> static unsigned long BarrelBits;
    // -> static unsigned long PendingBits;
    // -> static unsigned long CheckingBits;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long EnabledBits;
}

// Range: 0x803D846C -> 0x803D8520
static void DoReset() {
    // Local variables
    unsigned long chanBit; // r31

    // References
    // -> static long ResettingChan;
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long ResettingBits;
}

// Range: 0x803D8520 -> 0x803D86CC
static void UpdateOrigin(long chan /* r30 */) {
    // Local variables
    struct PADStatus * origin; // r31
    unsigned long chanBit; // r29

    // References
    // -> static unsigned long XPatchBits;
    // -> static unsigned long AnalogMode;
    // -> static struct PADStatus Origin[4];
}

// Range: 0x803D86CC -> 0x803D8768
static void PADOriginCallback(long chan /* r1+0x8 */, unsigned long error /* r1+0xC */) {
    // References
    // -> static long ResettingChan;
}

// Range: 0x803D8768 -> 0x803D87F0
static void PADOriginUpdateCallback(long chan /* r31 */, unsigned long error /* r30 */) {
    // References
    // -> static unsigned long EnabledBits;
}

// Range: 0x803D87F0 -> 0x803D88EC
static void PADProbeCallback(long chan /* r30 */, unsigned long error /* r1+0xC */) {
    // References
    // -> static long ResettingChan;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long Type[4];
}

// Range: 0x803D88EC -> 0x803D8B60
static void PADTypeAndStatusCallback(long chan /* r1+0x8 */, unsigned long type /* r31 */) {
    // Local variables
    unsigned long chanBit; // r28
    unsigned long recalibrate; // r25
    int rc; // r29
    unsigned long error; // r26

    // References
    // -> static unsigned long PendingBits;
    // -> static long ResettingChan;
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long CmdProbeDevice[4];
    // -> static unsigned long CmdReadOrigin;
    // -> static unsigned long CmdCalibrate;
    // -> static unsigned long Spec;
    // -> static unsigned long Type[4];
    // -> static unsigned long RecalibrateBits;
}

// Range: 0x803D8B60 -> 0x803D8C38
static void PADReceiveCheckCallback(long chan /* r29 */, unsigned long type /* r31 */) {
    // Local variables
    unsigned long error; // r28
    unsigned long chanBit; // r30

    // References
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long CmdReadOrigin;
    // -> static unsigned long CheckingBits;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long EnabledBits;
}

// Range: 0x803D8C38 -> 0x803D8D14
int PADReset(unsigned long mask /* r31 */) {
    // Local variables
    int enabled; // r30
    unsigned long disableBits; // r29

    // References
    // -> static long ResettingChan;
    // -> static unsigned long RecalibrateBits;
    // -> static unsigned long Spec;
    // -> static unsigned long BarrelBits;
    // -> static unsigned long EnabledBits;
    // -> static unsigned long ResettingBits;
    // -> static unsigned long CheckingBits;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long PendingBits;
}

// Range: 0x803D8D14 -> 0x803D8DF4
int PADRecalibrate(unsigned long mask /* r31 */) {
    // Local variables
    int enabled; // r30
    unsigned long disableBits; // r29

    // References
    // -> static long ResettingChan;
    // -> static unsigned long RecalibrateBits;
    // -> static unsigned long BarrelBits;
    // -> static unsigned long EnabledBits;
    // -> static unsigned long ResettingBits;
    // -> static unsigned long CheckingBits;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long PendingBits;
}

unsigned long __PADSpec; // size: 0x4, address: 0x80D6C188
unsigned long __PADFixBits; // size: 0x4, address: 0x80D6C198
// Range: 0x803D8DF4 -> 0x803D8F64
int PADInit() {
    // Local variables
    long chan; // r31
    long long time; // r29

    // References
    // -> static struct OSResetFunctionInfo ResetFunctionInfo;
    // -> static unsigned long CmdProbeDevice[4];
    // -> static unsigned long RecalibrateBits;
    // -> unsigned long __PADFixBits;
    // -> static int Initialized;
    // -> unsigned long __PADSpec;
    // -> const char * __PADVersion;
}

// Range: 0x803D8F64 -> 0x803D9210
unsigned long PADRead(struct PADStatus * status /* r31 */) {
    // Local variables
    int enabled; // r27
    long chan; // r30
    unsigned long data[2]; // r1+0x10
    unsigned long chanBit; // r29
    unsigned long sr; // r26
    int chanShift; // r1+0xC
    unsigned long motor; // r28

    // References
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long CmdReadOrigin;
    // -> static void (* MakeStatus)(long, struct PADStatus *, unsigned long *);
    // -> static unsigned long CheckingBits;
    // -> static unsigned long WaitingBits;
    // -> static unsigned long EnabledBits;
    // -> static long ResettingChan;
    // -> static unsigned long ResettingBits;
    // -> static unsigned long PendingBits;
}

// Range: 0x803D9210 -> 0x803D92D8
void PADControlMotor(int chan /* r30 */, unsigned long command /* r31 */) {
    // Local variables
    int enabled; // r29
    unsigned long chanBit; // r28

    // References
    // -> static unsigned long AnalogMode;
    // -> static unsigned long Spec;
    // -> static unsigned long EnabledBits;
}

// Range: 0x803D92D8 -> 0x803D9380
void PADSetSpec(unsigned long spec /* r31 */) {
    // References
    // -> static unsigned long Spec;
    // -> static void (* MakeStatus)(long, struct PADStatus *, unsigned long *);
    // -> unsigned long __PADSpec;
    // -> static int Initialized;
}

// Range: 0x803D9380 -> 0x803D9500
static void SPEC0_MakeStatus(struct PADStatus * status /* r4 */, unsigned long * data /* r5 */) {}

// Range: 0x803D9500 -> 0x803D9680
static void SPEC1_MakeStatus(struct PADStatus * status /* r4 */, unsigned long * data /* r5 */) {}

// Range: 0x803D9680 -> 0x803D96DC
static signed char ClampS8(signed char var /* r3 */, signed char org /* r4 */) {
    // Local variables
    signed char min; // r31
    signed char max; // r30
}

// Range: 0x803D96DC -> 0x803D96F8
static unsigned char ClampU8(unsigned char var /* r3 */, unsigned char org /* r4 */) {}

// Range: 0x803D96F8 -> 0x803D9A60
static void SPEC2_MakeStatus(long chan /* r28 */, struct PADStatus * status /* r31 */, unsigned long * data /* r30 */) {
    // Local variables
    struct PADStatus * origin; // r29

    // References
    // -> static struct PADStatus Origin[4];
    // -> static unsigned long BarrelBits;
    // -> static unsigned long Type[4];
    // -> static unsigned long AnalogMode;
}

// Range: 0x803D9A60 -> 0x803D9AB4
int PADSync() {
    // References
    // -> static long ResettingChan;
    // -> static unsigned long ResettingBits;
}

static int recalibrated$216; // size: 0x4, address: 0x80D6C184
// Range: 0x803D9AB4 -> 0x803D9B40
static int OnReset(int final /* r1+0x8 */) {
    // Local variables
    int sync; // r31

    // References
    // -> static int recalibrated$216;
    // -> static void (* SamplingCallback)();
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
// Range: 0x803D9B40 -> 0x803D9B98
static void SamplingHandler(struct OSContext * context /* r1+0xC */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x10

    // References
    // -> static void (* SamplingCallback)();
}

// Range: 0x803D9B98 -> 0x803D9BF0
void (* PADSetSamplingCallback(void (* callback)() /* r30 */))() {
    // Local variables
    void (* prev)(); // r31

    // References
    // -> static void (* SamplingCallback)();
}

// Range: 0x803D9BF0 -> 0x803D9C7C
int __PADDisableRecalibration(int disable /* r1+0x8 */) {
    // Local variables
    int enabled; // r31
    int prev; // r30
}


