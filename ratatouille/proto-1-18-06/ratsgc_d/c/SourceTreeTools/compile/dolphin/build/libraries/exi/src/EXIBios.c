/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\exi\src\EXIBios.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A8FE4 -> 0x803AABA4
*/
const char * __EXIVersion; // size: 0x4, address: 0x80D68068
// total size: 0x40
struct EXIControl {
    // Members
    void (* exiCallback)(long, struct OSContext *); // offset 0x0, size 0x4
    void (* tcCallback)(long, struct OSContext *); // offset 0x4, size 0x4
    void (* extCallback)(long, struct OSContext *); // offset 0x8, size 0x4
    unsigned long state; // offset 0xC, size 0x4
    int immLen; // offset 0x10, size 0x4
    unsigned char * immBuf; // offset 0x14, size 0x4
    unsigned long dev; // offset 0x18, size 0x4
    unsigned long id; // offset 0x1C, size 0x4
    long idTime; // offset 0x20, size 0x4
    int items; // offset 0x24, size 0x4
    // total size: 0x8
    struct {
        // Members
        unsigned long dev; // offset 0x0, size 0x4
        void (* callback)(long, struct OSContext *); // offset 0x4, size 0x4
    } queue[3]; // offset 0x28, size 0x18
};
static struct EXIControl Ecb[3]; // size: 0xC0, address: 0x80D57A48
static unsigned long IDSerialPort1; // size: 0x4, address: 0x80D6BF40
// Range: 0x803A8FE4 -> 0x803A90E0
static void SetExiInterruptMask(long chan /* r1+0x8 */, struct EXIControl * exi /* r31 */) {
    // Local variables
    struct EXIControl * exi2; // r30

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A90E0 -> 0x803A91B8
static void CompleteTransfer(long chan /* r29 */) {
    // Local variables
    struct EXIControl * exi; // r31
    unsigned char * buf; // r28
    unsigned long data; // r27
    int i; // r30
    int len; // r26

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A91B8 -> 0x803A93A0
int EXIImm(long chan /* r29 */, void * buf /* r23 */, long len /* r27 */, unsigned long type /* r26 */, void (* callback)(long, struct OSContext *) /* r1+0x18 */) {
    // Local variables
    struct EXIControl * exi; // r30
    int enabled; // r25
    unsigned long data; // r24
    int i; // r28

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A93A0 -> 0x803A9440
int EXIImmEx(long chan /* r28 */, void * buf /* r29 */, long len /* r30 */, unsigned long mode /* r1+0x14 */) {
    // Local variables
    long xLen; // r31
}

// Range: 0x803A9440 -> 0x803A9604
int EXIDma(long chan /* r29 */, void * buf /* r25 */, long len /* r28 */, unsigned long type /* r26 */, void (* callback)(long, struct OSContext *) /* r1+0x18 */) {
    // Local variables
    struct EXIControl * exi; // r30
    int enabled; // r27

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A9604 -> 0x803A97B0
int EXISync(long chan /* r31 */) {
    // Local variables
    struct EXIControl * exi; // r30
    int rc; // r28
    int enabled; // r27

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A97B0 -> 0x803A9874
unsigned long EXIClearInterrupts(long chan /* r30 */, int exi /* r1+0xC */, int tc /* r1+0x10 */, int ext /* r1+0x14 */) {
    // Local variables
    unsigned long cpr; // r31
    unsigned long prev; // r29
}

// Range: 0x803A9874 -> 0x803A9924
void (* EXISetExiCallback(long chan /* r31 */, void (* exiCallback)(long, struct OSContext *) /* r1+0xC */))(long, struct OSContext *) {
    // Local variables
    struct EXIControl * exi; // r30
    void (* prev)(long, struct OSContext *); // r29
    int enabled; // r28

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A9924 -> 0x803A9980
void EXIProbeReset() {
    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A9980 -> 0x803A9B40
static int __EXIProbe(long chan /* r31 */) {
    // Local variables
    struct EXIControl * exi; // r30
    int enabled; // r26
    int rc; // r29
    unsigned long cpr; // r28
    long t; // r27

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A9B40 -> 0x803A9BC0
int EXIProbe(long chan /* r30 */) {
    // Local variables
    struct EXIControl * exi; // r29
    int rc; // r31
    unsigned long id; // r1+0xC

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A9BC0 -> 0x803A9C24
long EXIProbeEx(long chan /* r31 */) {}

// Range: 0x803A9C24 -> 0x803A9D04
static int __EXIAttach(long chan /* r31 */, void (* extCallback)(long, struct OSContext *) /* r1+0xC */) {
    // Local variables
    struct EXIControl * exi; // r30
    int enabled; // r29

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A9D04 -> 0x803A9DB4
int EXIAttach(long chan /* r31 */, void (* extCallback)(long, struct OSContext *) /* r1+0xC */) {
    // Local variables
    struct EXIControl * exi; // r29
    int enabled; // r30
    int rc; // r28

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A9DB4 -> 0x803A9E8C
int EXIDetach(long chan /* r29 */) {
    // Local variables
    struct EXIControl * exi; // r31
    int enabled; // r30

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803A9E8C -> 0x803AA05C
int EXISelect(long chan /* r31 */, unsigned long dev /* r28 */, unsigned long freq /* r25 */) {
    // Local variables
    struct EXIControl * exi; // r29
    unsigned long cpr; // r27
    int enabled; // r26

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803AA05C -> 0x803AA190
int EXIDeselect(long chan /* r31 */) {
    // Local variables
    struct EXIControl * exi; // r30
    unsigned long cpr; // r29
    int enabled; // r28

    // References
    // -> static struct EXIControl Ecb[3];
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
// Range: 0x803AA190 -> 0x803AA25C
static void EXIIntrruptHandler(signed short interrupt /* r1+0x8 */, struct OSContext * context /* r28 */) {
    // Local variables
    long chan; // r31
    struct EXIControl * exi; // r29
    void (* callback)(long, struct OSContext *); // r30
    struct OSContext exceptionContext; // r1+0x10

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803AA25C -> 0x803AA348
static void TCIntrruptHandler(signed short interrupt /* r27 */, struct OSContext * context /* r28 */) {
    // Local variables
    long chan; // r31
    struct EXIControl * exi; // r30
    void (* callback)(long, struct OSContext *); // r29
    struct OSContext exceptionContext; // r1+0x10

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803AA348 -> 0x803AA424
static void EXTIntrruptHandler(signed short interrupt /* r1+0x8 */, struct OSContext * context /* r28 */) {
    // Local variables
    long chan; // r31
    struct EXIControl * exi; // r30
    void (* callback)(long, struct OSContext *); // r29
    struct OSContext exceptionContext; // r1+0x10

    // References
    // -> static struct EXIControl Ecb[3];
}

int __OSInIPL; // size: 0x4, address: 0x80D6C0A8
// Range: 0x803AA424 -> 0x803AA5D0
void EXIInit() {
    // Local variables
    unsigned long id; // r1+0x8

    // References
    // -> const char * __EXIVersion;
    // -> int __OSInIPL;
    // -> static unsigned long IDSerialPort1;
}

// Range: 0x803AA5D0 -> 0x803AA778
int EXILock(long chan /* r29 */, unsigned long dev /* r28 */, void (* unlockedCallback)(long, struct OSContext *) /* r25 */) {
    // Local variables
    struct EXIControl * exi; // r31
    int enabled; // r27
    int i; // r26

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803AA778 -> 0x803AA86C
int EXIUnlock(long chan /* r30 */) {
    // Local variables
    struct EXIControl * exi; // r31
    int enabled; // r29
    void (* unlockedCallback)(long, struct OSContext *); // r28

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803AA86C -> 0x803AA8D4
unsigned long EXIGetState(long chan /* r31 */) {
    // Local variables
    struct EXIControl * exi; // r30

    // References
    // -> static struct EXIControl Ecb[3];
}

// Range: 0x803AA8D4 -> 0x803AA904
static void UnlockedHandler(long chan /* r1+0x8 */) {
    // Local variables
    unsigned long id; // r1+0x10
}

// Range: 0x803AA904 -> 0x803AABA4
long EXIGetID(long chan /* r31 */, unsigned long dev /* r28 */, unsigned long * id /* r26 */) {
    // Local variables
    struct EXIControl * exi; // r29
    int err; // r30
    unsigned long cmd; // r1+0x14
    long startTime; // r25
    int enabled; // r27

    // References
    // -> static unsigned long IDSerialPort1;
    // -> static struct EXIControl Ecb[3];
}


