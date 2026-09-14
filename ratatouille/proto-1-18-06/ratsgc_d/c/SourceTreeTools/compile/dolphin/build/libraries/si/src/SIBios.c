/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\si\src\SIBios.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D9C7C -> 0x803DB480
*/
const char * __SIVersion; // size: 0x4, address: 0x80D682C0
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
// total size: 0x14
struct SIControl {
    // Members
    long chan; // offset 0x0, size 0x4
    unsigned long poll; // offset 0x4, size 0x4
    unsigned long inputBytes; // offset 0x8, size 0x4
    void * input; // offset 0xC, size 0x4
    void (* callback)(long, unsigned long, struct OSContext *); // offset 0x10, size 0x4
};
static struct SIControl Si; // size: 0x14, address: 0x8054CDFC
// total size: 0x20
struct SIPacket {
    // Members
    long chan; // offset 0x0, size 0x4
    void * output; // offset 0x4, size 0x4
    unsigned long outputBytes; // offset 0x8, size 0x4
    void * input; // offset 0xC, size 0x4
    unsigned long inputBytes; // offset 0x10, size 0x4
    void (* callback)(long, unsigned long, struct OSContext *); // offset 0x14, size 0x4
    long long fire; // offset 0x18, size 0x8
};
static struct SIPacket Packet[4]; // size: 0x80, address: 0x80D5BAE0
// total size: 0x28
struct OSAlarm {
    // Members
    void (* handler)(struct OSAlarm *, struct OSContext *); // offset 0x0, size 0x4
    unsigned long tag; // offset 0x4, size 0x4
    long long fire; // offset 0x8, size 0x8
    struct OSAlarm * prev; // offset 0x10, size 0x4
    struct OSAlarm * next; // offset 0x14, size 0x4
    long long period; // offset 0x18, size 0x8
    long long start; // offset 0x20, size 0x8
};
static struct OSAlarm Alarm[4]; // size: 0xA0, address: 0x80D5BB60
static unsigned long Type[4]; // size: 0x10, address: 0x8054CE10
static long long TypeTime[4]; // size: 0x20, address: 0x80D5BC00
static long long XferTime[4]; // size: 0x20, address: 0x80D5BC20
static void (* TypeCallback[4][4])(long, unsigned long); // size: 0x40, address: 0x80D5BC40
static void (* RDSTHandler[4])(signed short, struct OSContext *); // size: 0x10, address: 0x80D5BC80
static int InputBufferValid[4]; // size: 0x10, address: 0x80D5BC90
static unsigned long InputBuffer[4][2]; // size: 0x20, address: 0x80D5BCA0
static unsigned long InputBufferVcount[4]; // size: 0x10, address: 0x80D5BCC0
// Range: 0x803D9C7C -> 0x803D9C9C
int SIBusy() {
    // References
    // -> static struct SIControl Si;
}

// Range: 0x803D9C9C -> 0x803D9CD8
int SIIsChanBusy(long chan /* r3 */) {
    // References
    // -> static struct SIControl Si;
    // -> static struct SIPacket Packet[4];
}

// Range: 0x803D9CD8 -> 0x803D9D04
static void SIClearTCInterrupt() {
    // Local variables
    unsigned long reg; // r31
}

// Range: 0x803D9D04 -> 0x803D9E88
static unsigned long CompleteTransfer() {
    // Local variables
    unsigned long sr; // r29
    unsigned long i; // r30
    unsigned long rLen; // r28
    unsigned char * input; // r27
    unsigned long temp; // r26

    // References
    // -> static struct SIControl Si;
    // -> static long long TypeTime[4];
    // -> static unsigned long Type[4];
    // -> static long long XferTime[4];
}

// Range: 0x803D9E88 -> 0x803D9F64
static void SITransferNext(long chan /* r30 */) {
    // Local variables
    int i; // r29
    struct SIPacket * packet; // r31

    // References
    // -> static struct OSAlarm Alarm[4];
    // -> static struct SIPacket Packet[4];
}

static unsigned long cmdTypeAndStatus$48; // size: 0x4, address: 0x80D6C190
// Range: 0x803D9F64 -> 0x803DA1C0
static void SIInterruptHandler(signed short interrupt /* r1+0x8 */, struct OSContext * context /* r22 */) {
    // Local variables
    unsigned long reg; // r26
    long chan; // r28
    unsigned long sr; // r27
    void (* callback)(long, unsigned long, struct OSContext *); // r25
    int i; // r31
    unsigned long vcount; // r24
    unsigned long x; // r23

    // References
    // -> static void (* RDSTHandler[4])(signed short, struct OSContext *);
    // -> static unsigned long InputBufferVcount[4];
    // -> static struct SIControl Si;
    // -> static unsigned long Type[4];
    // -> static unsigned long cmdTypeAndStatus$48;
}

// Range: 0x803DA1C0 -> 0x803DA268
static int SIEnablePollingInterrupt(int enable /* r1+0x8 */) {
    // Local variables
    int enabled; // r29
    int rc; // r28
    unsigned long reg; // r31
    int i; // r30

    // References
    // -> static unsigned long InputBufferVcount[4];
}

// Range: 0x803DA268 -> 0x803DA330
int SIRegisterPollingHandler(void (* handler)(signed short, struct OSContext *) /* r28 */) {
    // Local variables
    int enabled; // r30
    int i; // r31

    // References
    // -> static void (* RDSTHandler[4])(signed short, struct OSContext *);
}

// Range: 0x803DA330 -> 0x803DA3F8
int SIUnregisterPollingHandler(void (* handler)(signed short, struct OSContext *) /* r1+0x8 */) {
    // Local variables
    int enabled; // r29
    int i; // r31

    // References
    // -> static void (* RDSTHandler[4])(signed short, struct OSContext *);
}

// Range: 0x803DA3F8 -> 0x803DA4AC
void SIInit() {
    // References
    // -> static struct SIControl Si;
    // -> static struct SIPacket Packet[4];
    // -> const char * __SIVersion;
}

// Range: 0x803DA4AC -> 0x803DA6B8
static int __SITransfer(long chan /* r27 */, void * output /* r1+0xC */, unsigned long outputBytes /* r28 */, void * input /* r1+0x14 */, unsigned long inputBytes /* r29 */, void (* callback)(long, unsigned long, struct OSContext *) /* r23 */) {
    // Local variables
    int enabled; // r26
    unsigned long rLen; // r24
    unsigned long i; // r30
    unsigned long sr; // r25
    union {
        unsigned long val; // offset 0x0, size 0x4
        // total size: 0x4
        struct {
            // Members
            unsigned long tcint : 1; // offset 0x0, size 0x4
            unsigned long tcintmsk : 1; // offset 0x0, size 0x4
            unsigned long comerr : 1; // offset 0x0, size 0x4
            unsigned long rdstint : 1; // offset 0x0, size 0x4
            unsigned long rdstintmsk : 1; // offset 0x0, size 0x4
            unsigned long pad2 : 4; // offset 0x0, size 0x4
            unsigned long outlngth : 7; // offset 0x0, size 0x4
            unsigned long pad1 : 1; // offset 0x0, size 0x4
            unsigned long inlngth : 7; // offset 0x0, size 0x4
            unsigned long pad0 : 5; // offset 0x0, size 0x4
            unsigned long channel : 2; // offset 0x0, size 0x4
            unsigned long tstart : 1; // offset 0x0, size 0x4
        } f; // offset 0x0, size 0x4
    } comcsr; // r1+0x20

    // References
    // -> static struct SIControl Si;
}

// Range: 0x803DA6B8 -> 0x803DA744
unsigned long SIGetStatus(long chan /* r30 */) {
    // Local variables
    int enabled; // r29
    unsigned long sr; // r31
    int chanShift; // r28

    // References
    // -> static unsigned long Type[4];
}

// Range: 0x803DA744 -> 0x803DA7B4
void SISetCommand(long chan /* r31 */, unsigned long command /* r1+0xC */) {}

// Range: 0x803DA7B4 -> 0x803DA7C4
void SITransferCommands() {}

// Range: 0x803DA7C4 -> 0x803DA890
unsigned long SISetXY(unsigned long x /* r29 */, unsigned long y /* r27 */) {
    // Local variables
    unsigned long poll; // r30
    int enabled; // r28

    // References
    // -> static struct SIControl Si;
}

// Range: 0x803DA890 -> 0x803DA964
unsigned long SIEnablePolling(unsigned long poll /* r31 */) {
    // Local variables
    int enabled; // r28
    unsigned long en; // r29

    // References
    // -> static struct SIControl Si;
}

// Range: 0x803DA964 -> 0x803DAA0C
unsigned long SIDisablePolling(unsigned long poll /* r31 */) {
    // Local variables
    int enabled; // r29

    // References
    // -> static struct SIControl Si;
}

// Range: 0x803DAA0C -> 0x803DAAB4
static int SIGetResponseRaw(long chan /* r31 */) {
    // Local variables
    unsigned long sr; // r29

    // References
    // -> static int InputBufferValid[4];
    // -> static unsigned long InputBuffer[4][2];
}

// Range: 0x803DAAB4 -> 0x803DAB74
int SIGetResponse(long chan /* r31 */, void * data /* r27 */) {
    // Local variables
    int rc; // r29
    int enabled; // r28

    // References
    // -> static unsigned long InputBuffer[4][2];
    // -> static int InputBufferValid[4];
}

// Range: 0x803DAB74 -> 0x803DAC64
static void AlarmHandler(struct OSAlarm * alarm /* r1+0x8 */) {
    // Local variables
    long chan; // r29
    struct SIPacket * packet; // r31

    // References
    // -> static struct SIPacket Packet[4];
    // -> static struct OSAlarm Alarm[4];
}

// Range: 0x803DAC64 -> 0x803DADDC
int SITransfer(long chan /* r30 */, void * output /* r17 */, unsigned long outputBytes /* r18 */, void * input /* r19 */, unsigned long inputBytes /* r20 */, void (* callback)(long, unsigned long, struct OSContext *) /* r21 */, long long delay /* r23 */) {
    // Local variables
    int enabled; // r27
    struct SIPacket * packet; // r31
    long long now; // r25
    long long fire; // r28

    // References
    // -> static struct OSAlarm Alarm[4];
    // -> static long long XferTime[4];
    // -> static struct SIControl Si;
    // -> static struct SIPacket Packet[4];
}

// Range: 0x803DADDC -> 0x803DAE74
static void CallTypeAndStatusCallback(long chan /* r29 */, unsigned long type /* r1+0xC */) {
    // Local variables
    void (* callback)(long, unsigned long); // r30
    int i; // r31

    // References
    // -> static void (* TypeCallback[4][4])(long, unsigned long);
}

static unsigned long cmdFixDevice$203[4]; // size: 0x10, address: 0x80D5BCD0
unsigned long __PADFixBits; // size: 0x4, address: 0x80D6C198
// Range: 0x803DAE74 -> 0x803DB180
static void GetTypeCallback(long chan /* r31 */, unsigned long error /* r24 */) {
    // Local variables
    unsigned long type; // r28
    unsigned long chanBit; // r26
    int fix; // r25
    unsigned long id; // r29

    // References
    // -> static unsigned long Type[4];
    // -> static unsigned long cmdFixDevice$203[4];
    // -> unsigned long __PADFixBits;
    // -> static long long TypeTime[4];
}

static unsigned long cmdTypeAndStatus$224; // size: 0x4, address: 0x80D6C194
// Range: 0x803DB180 -> 0x803DB378
unsigned long SIGetType(long chan /* r31 */) {
    // Local variables
    int enabled; // r28
    unsigned long type; // r29
    long long diff; // r25

    // References
    // -> static unsigned long Type[4];
    // -> static unsigned long cmdTypeAndStatus$224;
    // -> static long long TypeTime[4];
    // -> static struct SIControl Si;
}

// Range: 0x803DB378 -> 0x803DB480
unsigned long SIGetTypeAsync(long chan /* r30 */, void (* callback)(long, unsigned long) /* r26 */) {
    // Local variables
    int enabled; // r25
    unsigned long type; // r27
    int i; // r31

    // References
    // -> static void (* TypeCallback[4][4])(long, unsigned long);
    // -> static unsigned long Type[4];
}


