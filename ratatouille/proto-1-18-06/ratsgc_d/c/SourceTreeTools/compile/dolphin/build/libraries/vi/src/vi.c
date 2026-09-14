/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\vi\src\vi.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803CB2C8 -> 0x803CD72C
*/
const char * __VIVersion; // size: 0x4, address: 0x80D68188
static int IsInitialized; // size: 0x4, address: 0x80D6C008
static unsigned long retraceCount; // size: 0x4, address: 0x80D6C00C
static unsigned long flushFlag; // size: 0x4, address: 0x80D6C010
// total size: 0x8
struct OSThreadLink {
    // Members
    struct OSThread * next; // offset 0x0, size 0x4
    struct OSThread * prev; // offset 0x4, size 0x4
};
// total size: 0x8
struct OSMutexLink {
    // Members
    struct OSMutex * next; // offset 0x0, size 0x4
    struct OSMutex * prev; // offset 0x4, size 0x4
};
// total size: 0x18
struct OSMutex {
    // Members
    struct OSThreadQueue queue; // offset 0x0, size 0x8
    struct OSThread * thread; // offset 0x8, size 0x4
    long count; // offset 0xC, size 0x4
    struct OSMutexLink link; // offset 0x10, size 0x8
};
// total size: 0x8
struct OSMutexQueue {
    // Members
    struct OSMutex * head; // offset 0x0, size 0x4
    struct OSMutex * tail; // offset 0x4, size 0x4
};
// total size: 0x318
struct OSThread {
    // Members
    struct OSContext context; // offset 0x0, size 0x2C8
    unsigned short state; // offset 0x2C8, size 0x2
    unsigned short attr; // offset 0x2CA, size 0x2
    long suspend; // offset 0x2CC, size 0x4
    long priority; // offset 0x2D0, size 0x4
    long base; // offset 0x2D4, size 0x4
    void * val; // offset 0x2D8, size 0x4
    struct OSThreadQueue * queue; // offset 0x2DC, size 0x4
    struct OSThreadLink link; // offset 0x2E0, size 0x8
    struct OSThreadQueue queueJoin; // offset 0x2E8, size 0x8
    struct OSMutex * mutex; // offset 0x2F0, size 0x4
    struct OSMutexQueue queueMutex; // offset 0x2F4, size 0x8
    struct OSThreadLink linkActive; // offset 0x2FC, size 0x8
    unsigned char * stackBase; // offset 0x304, size 0x4
    unsigned long * stackEnd; // offset 0x308, size 0x4
    long error; // offset 0x30C, size 0x4
    void * specific[2]; // offset 0x310, size 0x8
};
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
static struct OSThreadQueue retraceQueue; // size: 0x8, address: 0x80D6C014
static void (* PreCB)(unsigned long); // size: 0x4, address: 0x80D6C01C
static void (* PostCB)(unsigned long); // size: 0x4, address: 0x80D6C020
static void (* PositionCallback)(signed short, signed short); // size: 0x4, address: 0x80D6C024
static unsigned long encoderType; // size: 0x4, address: 0x80D6C028
static signed short displayOffsetH; // size: 0x2, address: 0x80D6C02C
static signed short displayOffsetV; // size: 0x2, address: 0x80D6C02E
static unsigned long changeMode; // size: 0x4, address: 0x80D6C030
static unsigned long long changed; // size: 0x8, address: 0x80D6C038
static unsigned short regs[59]; // size: 0x76, address: 0x80D5AE30
static unsigned long shdwChangeMode; // size: 0x4, address: 0x80D6C040
static unsigned long long shdwChanged; // size: 0x8, address: 0x80D6C048
static unsigned short shdwRegs[59]; // size: 0x76, address: 0x80D5AEA8
static // total size: 0x58
struct {
    // Members
    unsigned short DispPosX; // offset 0x0, size 0x2
    unsigned short DispPosY; // offset 0x2, size 0x2
    unsigned short DispSizeX; // offset 0x4, size 0x2
    unsigned short DispSizeY; // offset 0x6, size 0x2
    unsigned short AdjustedDispPosX; // offset 0x8, size 0x2
    unsigned short AdjustedDispPosY; // offset 0xA, size 0x2
    unsigned short AdjustedDispSizeY; // offset 0xC, size 0x2
    unsigned short AdjustedPanPosY; // offset 0xE, size 0x2
    unsigned short AdjustedPanSizeY; // offset 0x10, size 0x2
    unsigned short FBSizeX; // offset 0x12, size 0x2
    unsigned short FBSizeY; // offset 0x14, size 0x2
    unsigned short PanPosX; // offset 0x16, size 0x2
    unsigned short PanPosY; // offset 0x18, size 0x2
    unsigned short PanSizeX; // offset 0x1A, size 0x2
    unsigned short PanSizeY; // offset 0x1C, size 0x2
    enum /* @enum$3vi_c */ {
        VI_XFBMODE_SF = 0,
        VI_XFBMODE_DF = 1,
    } FBMode; // offset 0x20, size 0x4
    unsigned long nonInter; // offset 0x24, size 0x4
    unsigned long tv; // offset 0x28, size 0x4
    unsigned char wordPerLine; // offset 0x2C, size 0x1
    unsigned char std; // offset 0x2D, size 0x1
    unsigned char wpl; // offset 0x2E, size 0x1
    unsigned long bufAddr; // offset 0x30, size 0x4
    unsigned long tfbb; // offset 0x34, size 0x4
    unsigned long bfbb; // offset 0x38, size 0x4
    unsigned char xof; // offset 0x3C, size 0x1
    int black; // offset 0x40, size 0x4
    int threeD; // offset 0x44, size 0x4
    unsigned long rbufAddr; // offset 0x48, size 0x4
    unsigned long rtfbb; // offset 0x4C, size 0x4
    unsigned long rbfbb; // offset 0x50, size 0x4
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * timing; // offset 0x54, size 0x4
} HorVer; // size: 0x58, address: 0x80D5AF20
static // total size: 0x26
struct {
    // Members
    unsigned char equ; // offset 0x0, size 0x1
    unsigned short acv; // offset 0x2, size 0x2
    unsigned short prbOdd; // offset 0x4, size 0x2
    unsigned short prbEven; // offset 0x6, size 0x2
    unsigned short psbOdd; // offset 0x8, size 0x2
    unsigned short psbEven; // offset 0xA, size 0x2
    unsigned char bs1; // offset 0xC, size 0x1
    unsigned char bs2; // offset 0xD, size 0x1
    unsigned char bs3; // offset 0xE, size 0x1
    unsigned char bs4; // offset 0xF, size 0x1
    unsigned short be1; // offset 0x10, size 0x2
    unsigned short be2; // offset 0x12, size 0x2
    unsigned short be3; // offset 0x14, size 0x2
    unsigned short be4; // offset 0x16, size 0x2
    unsigned short nhlines; // offset 0x18, size 0x2
    unsigned short hlw; // offset 0x1A, size 0x2
    unsigned char hsy; // offset 0x1C, size 0x1
    unsigned char hcs; // offset 0x1D, size 0x1
    unsigned char hce; // offset 0x1E, size 0x1
    unsigned char hbe640; // offset 0x1F, size 0x1
    unsigned short hbs640; // offset 0x20, size 0x2
    unsigned char hbeCCIR656; // offset 0x22, size 0x1
    unsigned short hbsCCIR656; // offset 0x24, size 0x2
} * CurrTiming; // size: 0x4, address: 0x80D6C050
static unsigned long CurrTvMode; // size: 0x4, address: 0x80D6C054
static unsigned long NextBufAddr; // size: 0x4, address: 0x80D6C058
static unsigned long CurrBufAddr; // size: 0x4, address: 0x80D6C05C
static unsigned long FBSet; // size: 0x4, address: 0x80D6C060
// Range: 0x803CB2C8 -> 0x803CB2D0
static unsigned long getEncoderType() {}

static // total size: 0x26
struct {
    // Members
    unsigned char equ; // offset 0x0, size 0x1
    unsigned short acv; // offset 0x2, size 0x2
    unsigned short prbOdd; // offset 0x4, size 0x2
    unsigned short prbEven; // offset 0x6, size 0x2
    unsigned short psbOdd; // offset 0x8, size 0x2
    unsigned short psbEven; // offset 0xA, size 0x2
    unsigned char bs1; // offset 0xC, size 0x1
    unsigned char bs2; // offset 0xD, size 0x1
    unsigned char bs3; // offset 0xE, size 0x1
    unsigned char bs4; // offset 0xF, size 0x1
    unsigned short be1; // offset 0x10, size 0x2
    unsigned short be2; // offset 0x12, size 0x2
    unsigned short be3; // offset 0x14, size 0x2
    unsigned short be4; // offset 0x16, size 0x2
    unsigned short nhlines; // offset 0x18, size 0x2
    unsigned short hlw; // offset 0x1A, size 0x2
    unsigned char hsy; // offset 0x1C, size 0x1
    unsigned char hcs; // offset 0x1D, size 0x1
    unsigned char hce; // offset 0x1E, size 0x1
    unsigned char hbe640; // offset 0x1F, size 0x1
    unsigned short hbs640; // offset 0x20, size 0x2
    unsigned char hbeCCIR656; // offset 0x22, size 0x1
    unsigned short hbsCCIR656; // offset 0x24, size 0x2
} timing[10]; // size: 0x17C, address: 0x8054839C
static // total size: 0x26
struct {
    // Members
    unsigned char equ; // offset 0x0, size 0x1
    unsigned short acv; // offset 0x2, size 0x2
    unsigned short prbOdd; // offset 0x4, size 0x2
    unsigned short prbEven; // offset 0x6, size 0x2
    unsigned short psbOdd; // offset 0x8, size 0x2
    unsigned short psbEven; // offset 0xA, size 0x2
    unsigned char bs1; // offset 0xC, size 0x1
    unsigned char bs2; // offset 0xD, size 0x1
    unsigned char bs3; // offset 0xE, size 0x1
    unsigned char bs4; // offset 0xF, size 0x1
    unsigned short be1; // offset 0x10, size 0x2
    unsigned short be2; // offset 0x12, size 0x2
    unsigned short be3; // offset 0x14, size 0x2
    unsigned short be4; // offset 0x16, size 0x2
    unsigned short nhlines; // offset 0x18, size 0x2
    unsigned short hlw; // offset 0x1A, size 0x2
    unsigned char hsy; // offset 0x1C, size 0x1
    unsigned char hcs; // offset 0x1D, size 0x1
    unsigned char hce; // offset 0x1E, size 0x1
    unsigned char hbe640; // offset 0x1F, size 0x1
    unsigned short hbs640; // offset 0x20, size 0x2
    unsigned char hbeCCIR656; // offset 0x22, size 0x1
    unsigned short hbsCCIR656; // offset 0x24, size 0x2
} * timingExtra; // size: 0x4, address: 0x80D6C064
static unsigned short taps[25]; // size: 0x32, address: 0x80548518
// Range: 0x803CB2D0 -> 0x803CB334
static long cntlzd(unsigned long long bit /* r27 */) {
    // Local variables
    unsigned long hi; // r30
    unsigned long lo; // r29
    long value; // r31
}

// Range: 0x803CB334 -> 0x803CB424
static int VISetRegs() {
    // Local variables
    long regIndex; // r30

    // References
    // -> static unsigned long NextBufAddr;
    // -> static unsigned long CurrBufAddr;
    // -> static struct [anonymous] HorVer;
    // -> static unsigned long CurrTvMode;
    // -> static struct [anonymous] * CurrTiming;
    // -> static unsigned long shdwChangeMode;
    // -> static unsigned long long shdwChanged;
    // -> static unsigned short shdwRegs[59];
}

static unsigned long dbgCount$20; // size: 0x4, address: 0x80D6C068
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
// Range: 0x803CB424 -> 0x803CB64C
static void __VIRetraceHandler(struct OSContext * context /* r29 */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x18
    unsigned short reg; // r31
    unsigned long inter; // r30
    signed short x; // r1+0x12
    signed short y; // r1+0x10

    // References
    // -> static struct OSThreadQueue retraceQueue;
    // -> static unsigned long retraceCount;
    // -> static void (* PostCB)(unsigned long);
    // -> static unsigned long dbgCount$20;
    // -> static unsigned long long changed;
    // -> static unsigned long flushFlag;
    // -> static void (* PreCB)(unsigned long);
    // -> static void (* PositionCallback)(signed short, signed short);
}

// Range: 0x803CB64C -> 0x803CB694
void (* VISetPreRetraceCallback(void (* cb)(unsigned long) /* r1+0x8 */))(unsigned long) {
    // Local variables
    int enabled; // r31
    void (* oldcb)(unsigned long); // r30

    // References
    // -> static void (* PreCB)(unsigned long);
}

// Range: 0x803CB694 -> 0x803CB6DC
void (* VISetPostRetraceCallback(void (* cb)(unsigned long) /* r1+0x8 */))(unsigned long) {
    // Local variables
    int enabled; // r31
    void (* oldcb)(unsigned long); // r30

    // References
    // -> static void (* PostCB)(unsigned long);
}

enum /* @enum$2vi_c */ {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17,
};
// Range: 0x803CB6DC -> 0x803CB794
static // total size: 0x26
struct {
    // Members
    unsigned char equ; // offset 0x0, size 0x1
    unsigned short acv; // offset 0x2, size 0x2
    unsigned short prbOdd; // offset 0x4, size 0x2
    unsigned short prbEven; // offset 0x6, size 0x2
    unsigned short psbOdd; // offset 0x8, size 0x2
    unsigned short psbEven; // offset 0xA, size 0x2
    unsigned char bs1; // offset 0xC, size 0x1
    unsigned char bs2; // offset 0xD, size 0x1
    unsigned char bs3; // offset 0xE, size 0x1
    unsigned char bs4; // offset 0xF, size 0x1
    unsigned short be1; // offset 0x10, size 0x2
    unsigned short be2; // offset 0x12, size 0x2
    unsigned short be3; // offset 0x14, size 0x2
    unsigned short be4; // offset 0x16, size 0x2
    unsigned short nhlines; // offset 0x18, size 0x2
    unsigned short hlw; // offset 0x1A, size 0x2
    unsigned char hsy; // offset 0x1C, size 0x1
    unsigned char hcs; // offset 0x1D, size 0x1
    unsigned char hce; // offset 0x1E, size 0x1
    unsigned char hbe640; // offset 0x1F, size 0x1
    unsigned short hbs640; // offset 0x20, size 0x2
    unsigned char hbeCCIR656; // offset 0x22, size 0x1
    unsigned short hbsCCIR656; // offset 0x24, size 0x2
} * getTiming(enum /* @enum$2vi_c */ {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17,
} mode /* r3 */) {
    // References
    // -> static struct [anonymous] * timingExtra;
    // -> static struct [anonymous] timing[10];
}

// Range: 0x803CB794 -> 0x803CBA34
void __VIInit(enum /* @enum$2vi_c */ {
    VI_TVMODE_NTSC_INT = 0,
    VI_TVMODE_NTSC_DS = 1,
    VI_TVMODE_NTSC_PROG = 2,
    VI_TVMODE_PAL_INT = 4,
    VI_TVMODE_PAL_DS = 5,
    VI_TVMODE_EURGB60_INT = 20,
    VI_TVMODE_EURGB60_DS = 21,
    VI_TVMODE_MPAL_INT = 8,
    VI_TVMODE_MPAL_DS = 9,
    VI_TVMODE_DEBUG_INT = 12,
    VI_TVMODE_DEBUG_PAL_INT = 16,
    VI_TVMODE_DEBUG_PAL_DS = 17,
} mode /* r26 */) {
    // Local variables
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * tm; // r31
    unsigned long nonInter; // r29
    unsigned long tv; // r30
    unsigned long tvForReg; // r28
    unsigned long a; // r1+0xC
    unsigned short hct; // r25
    unsigned short vct; // r24
    unsigned long encoderType; // r27
}

// Range: 0x803CBA34 -> 0x803CBC50
static void AdjustPosition(unsigned short acv /* r3 */) {
    // Local variables
    long coeff; // r29
    long frac; // r30

    // References
    // -> static struct [anonymous] HorVer;
    // -> static signed short displayOffsetV;
    // -> static signed short displayOffsetH;
}

// total size: 0x14
struct OSSram {
    // Members
    unsigned short checkSum; // offset 0x0, size 0x2
    unsigned short checkSumInv; // offset 0x2, size 0x2
    unsigned long ead0; // offset 0x4, size 0x4
    unsigned long ead1; // offset 0x8, size 0x4
    unsigned long counterBias; // offset 0xC, size 0x4
    signed char displayOffsetH; // offset 0x10, size 0x1
    unsigned char ntd; // offset 0x11, size 0x1
    unsigned char language; // offset 0x12, size 0x1
    unsigned char flags; // offset 0x13, size 0x1
};
// Range: 0x803CBC50 -> 0x803CBCB8
static void ImportAdjustingValues() {
    // Local variables
    struct OSSram * sram; // r31

    // References
    // -> static signed short displayOffsetV;
    // -> static signed short displayOffsetH;
}

// Range: 0x803CBCB8 -> 0x803CC064
void VIInit() {
    // Local variables
    unsigned short dspCfg; // r28
    unsigned long value; // r29
    unsigned long tv; // r27
    unsigned long tvInBootrom; // r26

    // References
    // -> static void (* PostCB)(unsigned long);
    // -> static void (* PreCB)(unsigned long);
    // -> static struct OSThreadQueue retraceQueue;
    // -> static struct [anonymous] HorVer;
    // -> static struct [anonymous] * CurrTiming;
    // -> static unsigned long CurrTvMode;
    // -> static unsigned short regs[59];
    // -> static unsigned short taps[25];
    // -> static unsigned long flushFlag;
    // -> static unsigned long shdwChangeMode;
    // -> static unsigned long changeMode;
    // -> static unsigned long long shdwChanged;
    // -> static unsigned long long changed;
    // -> static unsigned long retraceCount;
    // -> static unsigned long encoderType;
    // -> static int IsInitialized;
    // -> const char * __VIVersion;
}

// Range: 0x803CC064 -> 0x803CC0B0
void VIWaitForRetrace() {
    // Local variables
    int enabled; // r31
    unsigned long count; // r30

    // References
    // -> static unsigned long retraceCount;
    // -> static struct OSThreadQueue retraceQueue;
}

// Range: 0x803CC0B0 -> 0x803CC168
static void setInterruptRegs(// total size: 0x26
struct {
    // Members
    unsigned char equ; // offset 0x0, size 0x1
    unsigned short acv; // offset 0x2, size 0x2
    unsigned short prbOdd; // offset 0x4, size 0x2
    unsigned short prbEven; // offset 0x6, size 0x2
    unsigned short psbOdd; // offset 0x8, size 0x2
    unsigned short psbEven; // offset 0xA, size 0x2
    unsigned char bs1; // offset 0xC, size 0x1
    unsigned char bs2; // offset 0xD, size 0x1
    unsigned char bs3; // offset 0xE, size 0x1
    unsigned char bs4; // offset 0xF, size 0x1
    unsigned short be1; // offset 0x10, size 0x2
    unsigned short be2; // offset 0x12, size 0x2
    unsigned short be3; // offset 0x14, size 0x2
    unsigned short be4; // offset 0x16, size 0x2
    unsigned short nhlines; // offset 0x18, size 0x2
    unsigned short hlw; // offset 0x1A, size 0x2
    unsigned char hsy; // offset 0x1C, size 0x1
    unsigned char hcs; // offset 0x1D, size 0x1
    unsigned char hce; // offset 0x1E, size 0x1
    unsigned char hbe640; // offset 0x1F, size 0x1
    unsigned short hbs640; // offset 0x20, size 0x2
    unsigned char hbeCCIR656; // offset 0x22, size 0x1
    unsigned short hbsCCIR656; // offset 0x24, size 0x2
} * tm /* r3 */) {
    // Local variables
    unsigned short vct; // r31
    unsigned short hct; // r30
    unsigned short borrow; // r29

    // References
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
}

enum /* @enum$3vi_c */ {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
};
// Range: 0x803CC168 -> 0x803CC218
static void setPicConfig(unsigned short fbSizeX /* r3 */, enum /* @enum$3vi_c */ {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
} xfbMode /* r4 */, unsigned short panPosX /* r5 */, unsigned short panSizeX /* r6 */, unsigned char * wordPerLine /* r7 */, unsigned char * std /* r8 */, unsigned char * wpl /* r9 */, unsigned char * xof /* r10 */) {
    // References
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
}

// Range: 0x803CC218 -> 0x803CC304
static void setBBIntervalRegs(// total size: 0x26
struct {
    // Members
    unsigned char equ; // offset 0x0, size 0x1
    unsigned short acv; // offset 0x2, size 0x2
    unsigned short prbOdd; // offset 0x4, size 0x2
    unsigned short prbEven; // offset 0x6, size 0x2
    unsigned short psbOdd; // offset 0x8, size 0x2
    unsigned short psbEven; // offset 0xA, size 0x2
    unsigned char bs1; // offset 0xC, size 0x1
    unsigned char bs2; // offset 0xD, size 0x1
    unsigned char bs3; // offset 0xE, size 0x1
    unsigned char bs4; // offset 0xF, size 0x1
    unsigned short be1; // offset 0x10, size 0x2
    unsigned short be2; // offset 0x12, size 0x2
    unsigned short be3; // offset 0x14, size 0x2
    unsigned short be4; // offset 0x16, size 0x2
    unsigned short nhlines; // offset 0x18, size 0x2
    unsigned short hlw; // offset 0x1A, size 0x2
    unsigned char hsy; // offset 0x1C, size 0x1
    unsigned char hcs; // offset 0x1D, size 0x1
    unsigned char hce; // offset 0x1E, size 0x1
    unsigned char hbe640; // offset 0x1F, size 0x1
    unsigned short hbs640; // offset 0x20, size 0x2
    unsigned char hbeCCIR656; // offset 0x22, size 0x1
    unsigned short hbsCCIR656; // offset 0x24, size 0x2
} * tm /* r3 */) {
    // Local variables
    unsigned short val; // r31

    // References
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
}

// Range: 0x803CC304 -> 0x803CC3DC
static void setScalingRegs(unsigned short panSizeX /* r3 */, unsigned short dispSizeX /* r4 */, int threeD /* r5 */) {
    // Local variables
    unsigned long scale; // r30

    // References
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
}

// Range: 0x803CC3DC -> 0x803CC470
static void calcFbbs(unsigned long bufAddr /* r3 */, unsigned short panPosX /* r4 */, unsigned short panPosY /* r5 */, unsigned char wordPerLine /* r6 */, enum /* @enum$3vi_c */ {
    VI_XFBMODE_SF = 0,
    VI_XFBMODE_DF = 1,
} xfbMode /* r7 */, unsigned short dispPosY /* r8 */, unsigned long * tfbb /* r9 */, unsigned long * bfbb /* r10 */) {
    // Local variables
    unsigned long bytesPerLine; // r31
    unsigned long xoffInWords; // r30
    unsigned long tmp; // r29
}

// Range: 0x803CC470 -> 0x803CC70C
static void setFbbRegs(// total size: 0x58
struct {
    // Members
    unsigned short DispPosX; // offset 0x0, size 0x2
    unsigned short DispPosY; // offset 0x2, size 0x2
    unsigned short DispSizeX; // offset 0x4, size 0x2
    unsigned short DispSizeY; // offset 0x6, size 0x2
    unsigned short AdjustedDispPosX; // offset 0x8, size 0x2
    unsigned short AdjustedDispPosY; // offset 0xA, size 0x2
    unsigned short AdjustedDispSizeY; // offset 0xC, size 0x2
    unsigned short AdjustedPanPosY; // offset 0xE, size 0x2
    unsigned short AdjustedPanSizeY; // offset 0x10, size 0x2
    unsigned short FBSizeX; // offset 0x12, size 0x2
    unsigned short FBSizeY; // offset 0x14, size 0x2
    unsigned short PanPosX; // offset 0x16, size 0x2
    unsigned short PanPosY; // offset 0x18, size 0x2
    unsigned short PanSizeX; // offset 0x1A, size 0x2
    unsigned short PanSizeY; // offset 0x1C, size 0x2
    enum /* @enum$3vi_c */ {
        VI_XFBMODE_SF = 0,
        VI_XFBMODE_DF = 1,
    } FBMode; // offset 0x20, size 0x4
    unsigned long nonInter; // offset 0x24, size 0x4
    unsigned long tv; // offset 0x28, size 0x4
    unsigned char wordPerLine; // offset 0x2C, size 0x1
    unsigned char std; // offset 0x2D, size 0x1
    unsigned char wpl; // offset 0x2E, size 0x1
    unsigned long bufAddr; // offset 0x30, size 0x4
    unsigned long tfbb; // offset 0x34, size 0x4
    unsigned long bfbb; // offset 0x38, size 0x4
    unsigned char xof; // offset 0x3C, size 0x1
    int black; // offset 0x40, size 0x4
    int threeD; // offset 0x44, size 0x4
    unsigned long rbufAddr; // offset 0x48, size 0x4
    unsigned long rtfbb; // offset 0x4C, size 0x4
    unsigned long rbfbb; // offset 0x50, size 0x4
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * timing; // offset 0x54, size 0x4
} * HorVer /* r31 */, unsigned long * tfbb /* r26 */, unsigned long * bfbb /* r27 */, unsigned long * rtfbb /* r28 */, unsigned long * rbfbb /* r29 */) {
    // Local variables
    unsigned long shifted; // r25

    // References
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
}

// Range: 0x803CC70C -> 0x803CC810
static void setHorizontalRegs(// total size: 0x26
struct {
    // Members
    unsigned char equ; // offset 0x0, size 0x1
    unsigned short acv; // offset 0x2, size 0x2
    unsigned short prbOdd; // offset 0x4, size 0x2
    unsigned short prbEven; // offset 0x6, size 0x2
    unsigned short psbOdd; // offset 0x8, size 0x2
    unsigned short psbEven; // offset 0xA, size 0x2
    unsigned char bs1; // offset 0xC, size 0x1
    unsigned char bs2; // offset 0xD, size 0x1
    unsigned char bs3; // offset 0xE, size 0x1
    unsigned char bs4; // offset 0xF, size 0x1
    unsigned short be1; // offset 0x10, size 0x2
    unsigned short be2; // offset 0x12, size 0x2
    unsigned short be3; // offset 0x14, size 0x2
    unsigned short be4; // offset 0x16, size 0x2
    unsigned short nhlines; // offset 0x18, size 0x2
    unsigned short hlw; // offset 0x1A, size 0x2
    unsigned char hsy; // offset 0x1C, size 0x1
    unsigned char hcs; // offset 0x1D, size 0x1
    unsigned char hce; // offset 0x1E, size 0x1
    unsigned char hbe640; // offset 0x1F, size 0x1
    unsigned short hbs640; // offset 0x20, size 0x2
    unsigned char hbeCCIR656; // offset 0x22, size 0x1
    unsigned short hbsCCIR656; // offset 0x24, size 0x2
} * tm /* r3 */, unsigned short dispPosX /* r4 */, unsigned short dispSizeX /* r5 */) {
    // Local variables
    unsigned long hbe; // r30
    unsigned long hbs; // r29
    unsigned long hbeLo; // r28
    unsigned long hbeHi; // r27

    // References
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
}

// Range: 0x803CC810 -> 0x803CC9E8
static void setVerticalRegs(unsigned short dispPosY /* r3 */, unsigned short dispSizeY /* r4 */, unsigned char equ /* r5 */, unsigned short acv /* r6 */, unsigned short prbOdd /* r7 */, unsigned short prbEven /* r8 */, unsigned short psbOdd /* r9 */, unsigned short psbEven /* r10 */, int black /* r1+0x48 */) {
    // Local variables
    unsigned short actualPrbOdd; // r27
    unsigned short actualPrbEven; // r26
    unsigned short actualPsbOdd; // r25
    unsigned short actualPsbEven; // r24
    unsigned short actualAcv; // r28
    unsigned short c; // r30
    unsigned short d; // r31

    // References
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
}

static unsigned long message$147; // size: 0x4, address: 0x80D6C06C
// Range: 0x803CC9E8 -> 0x803CCA7C
static void PrintDebugPalCaution() {
    // References
    // -> static unsigned long message$147;
}

// total size: 0x3C
struct _GXRenderModeObj {
    // Members
    enum /* @enum$2vi_c */ {
        VI_TVMODE_NTSC_INT = 0,
        VI_TVMODE_NTSC_DS = 1,
        VI_TVMODE_NTSC_PROG = 2,
        VI_TVMODE_PAL_INT = 4,
        VI_TVMODE_PAL_DS = 5,
        VI_TVMODE_EURGB60_INT = 20,
        VI_TVMODE_EURGB60_DS = 21,
        VI_TVMODE_MPAL_INT = 8,
        VI_TVMODE_MPAL_DS = 9,
        VI_TVMODE_DEBUG_INT = 12,
        VI_TVMODE_DEBUG_PAL_INT = 16,
        VI_TVMODE_DEBUG_PAL_DS = 17,
    } viTVmode; // offset 0x0, size 0x4
    unsigned short fbWidth; // offset 0x4, size 0x2
    unsigned short efbHeight; // offset 0x6, size 0x2
    unsigned short xfbHeight; // offset 0x8, size 0x2
    unsigned short viXOrigin; // offset 0xA, size 0x2
    unsigned short viYOrigin; // offset 0xC, size 0x2
    unsigned short viWidth; // offset 0xE, size 0x2
    unsigned short viHeight; // offset 0x10, size 0x2
    enum /* @enum$3vi_c */ {
        VI_XFBMODE_SF = 0,
        VI_XFBMODE_DF = 1,
    } xFBmode; // offset 0x14, size 0x4
    unsigned char field_rendering; // offset 0x18, size 0x1
    unsigned char aa; // offset 0x19, size 0x1
    unsigned char sample_pattern[12][2]; // offset 0x1A, size 0x18
    unsigned char vfilter[7]; // offset 0x32, size 0x7
};
// Range: 0x803CCA7C -> 0x803CCFC4
void VIConfigure(const struct _GXRenderModeObj * rm /* r30 */) {
    // Local variables
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * tm; // r29
    unsigned long regDspCfg; // r28
    unsigned long regClksel; // r24
    int enabled; // r22
    unsigned long newNonInter; // r25
    unsigned long tvInBootrom; // r23
    unsigned long tvInGame; // r27

    // References
    // -> static struct [anonymous] HorVer;
    // -> static unsigned long FBSet;
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
    // -> static unsigned long encoderType;
    // -> static unsigned long changeMode;
}

// Range: 0x803CCFC4 -> 0x803CD0C0
void VIFlush() {
    // Local variables
    int enabled; // r29
    long regIndex; // r31

    // References
    // -> static struct [anonymous] HorVer;
    // -> static unsigned long NextBufAddr;
    // -> static unsigned long flushFlag;
    // -> static unsigned long long changed;
    // -> static unsigned short regs[59];
    // -> static unsigned short shdwRegs[59];
    // -> static unsigned long long shdwChanged;
    // -> static unsigned long changeMode;
    // -> static unsigned long shdwChangeMode;
}

// Range: 0x803CD0C0 -> 0x803CD148
void VISetNextFrameBuffer(void * fb /* r30 */) {
    // Local variables
    int enabled; // r29

    // References
    // -> static struct [anonymous] HorVer;
    // -> static unsigned long FBSet;
}

// Range: 0x803CD148 -> 0x803CD1C0
void VISetBlack(int black /* r1+0x10 */) {
    // Local variables
    int enabled; // r29
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * tm; // r31

    // References
    // -> static struct [anonymous] HorVer;
}

// Range: 0x803CD1C0 -> 0x803CD20C
static void GetCurrentDisplayPosition(unsigned long * hct /* r3 */, unsigned long * vct /* r4 */) {
    // Local variables
    unsigned long hcount; // r30
    unsigned long vcount0; // r29
    unsigned long vcount; // r31
}

// Range: 0x803CD20C -> 0x803CD258
static unsigned long getCurrentHalfLine() {
    // Local variables
    unsigned long hcount; // r1+0xC
    unsigned long vcount; // r1+0x8

    // References
    // -> static struct [anonymous] * CurrTiming;
}

// Range: 0x803CD258 -> 0x803CD294
static unsigned long getCurrentFieldEvenOdd() {
    // References
    // -> static struct [anonymous] * CurrTiming;
}

// Range: 0x803CD294 -> 0x803CD2E4
unsigned long VIGetNextField() {
    // Local variables
    unsigned long nextField; // r31
    int enabled; // r30

    // References
    // -> static struct [anonymous] HorVer;
}

// Range: 0x803CD2E4 -> 0x803CD33C
unsigned long VIGetCurrentLine() {
    // Local variables
    unsigned long halfLine; // r31
    // total size: 0x26
    struct {
        // Members
        unsigned char equ; // offset 0x0, size 0x1
        unsigned short acv; // offset 0x2, size 0x2
        unsigned short prbOdd; // offset 0x4, size 0x2
        unsigned short prbEven; // offset 0x6, size 0x2
        unsigned short psbOdd; // offset 0x8, size 0x2
        unsigned short psbEven; // offset 0xA, size 0x2
        unsigned char bs1; // offset 0xC, size 0x1
        unsigned char bs2; // offset 0xD, size 0x1
        unsigned char bs3; // offset 0xE, size 0x1
        unsigned char bs4; // offset 0xF, size 0x1
        unsigned short be1; // offset 0x10, size 0x2
        unsigned short be2; // offset 0x12, size 0x2
        unsigned short be3; // offset 0x14, size 0x2
        unsigned short be4; // offset 0x16, size 0x2
        unsigned short nhlines; // offset 0x18, size 0x2
        unsigned short hlw; // offset 0x1A, size 0x2
        unsigned char hsy; // offset 0x1C, size 0x1
        unsigned char hcs; // offset 0x1D, size 0x1
        unsigned char hce; // offset 0x1E, size 0x1
        unsigned char hbe640; // offset 0x1F, size 0x1
        unsigned short hbs640; // offset 0x20, size 0x2
        unsigned char hbeCCIR656; // offset 0x22, size 0x1
        unsigned short hbsCCIR656; // offset 0x24, size 0x2
    } * tm; // r30
    int enabled; // r29

    // References
    // -> static struct [anonymous] * CurrTiming;
}

// Range: 0x803CD33C -> 0x803CD3C8
unsigned long VIGetTvFormat() {
    // Local variables
    unsigned long format; // r31
    int enabled; // r30

    // References
    // -> static unsigned long CurrTvMode;
}

// Range: 0x803CD3C8 -> 0x803CD6E8
void __VIDisplayPositionToXY(unsigned long hct /* r3 */, unsigned long vct /* r4 */, signed short * x /* r5 */, signed short * y /* r6 */) {
    // Local variables
    unsigned long halfLine; // r31

    // References
    // -> static struct [anonymous] * CurrTiming;
    // -> static struct [anonymous] HorVer;
}

// Range: 0x803CD6E8 -> 0x803CD72C
void __VIGetCurrentPosition(signed short * x /* r1+0x8 */, signed short * y /* r1+0xC */) {
    // Local variables
    unsigned long hcount; // r1+0x14
    unsigned long vcount; // r1+0x10
}


