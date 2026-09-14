/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSReset.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D44B0 -> 0x803D49A4
*/
// total size: 0x10
struct OSResetFunctionInfo {
    // Members
    int (* func)(int); // offset 0x0, size 0x4
    unsigned long priority; // offset 0x4, size 0x4
    struct OSResetFunctionInfo * next; // offset 0x8, size 0x4
    struct OSResetFunctionInfo * prev; // offset 0xC, size 0x4
};
// total size: 0x8
struct OSResetFunctionQueue {
    // Members
    struct OSResetFunctionInfo * head; // offset 0x0, size 0x4
    struct OSResetFunctionInfo * tail; // offset 0x4, size 0x4
};
static struct OSResetFunctionQueue ResetFunctionQueue; // size: 0x8, address: 0x80D6C118
static unsigned long bootThisDol; // size: 0x4, address: 0x80D6C120
// Range: 0x803D44B0 -> 0x803D4584
void OSRegisterResetFunction(struct OSResetFunctionInfo * info /* r31 */) {
    // Local variables
    struct OSResetFunctionInfo * __prev; // r29
    struct OSResetFunctionInfo * __next; // r30
    struct OSResetFunctionInfo * __prev; // r28

    // References
    // -> static struct OSResetFunctionQueue ResetFunctionQueue;
}

// Range: 0x803D4584 -> 0x803D4620
int __OSCallResetFunctions(int final /* r1+0x8 */) {
    // Local variables
    struct OSResetFunctionInfo * info; // r31
    int err; // r30
    unsigned long priority; // r29

    // References
    // -> static struct OSResetFunctionQueue ResetFunctionQueue;
}

// Range: 0x803D4620 -> 0x803D4690
static void Reset(unsigned long resetCode /* r3 */) {}

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
// total size: 0x8
struct OSThreadQueue {
    // Members
    struct OSThread * head; // offset 0x0, size 0x4
    struct OSThread * tail; // offset 0x4, size 0x4
};
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
// Range: 0x803D4690 -> 0x803D46F4
static void KillThreads() {
    // Local variables
    struct OSThread * thread; // r31
    struct OSThread * next; // r30
}

// Range: 0x803D46F4 -> 0x803D4738
void __OSDoHotReset(unsigned long resetCode /* r1+0x8 */) {}

// Range: 0x803D4738 -> 0x803D47F4
void __OSShutdownDevices(int doRecal /* r29 */) {
    // Local variables
    int rc; // r31
    int disableRecalibration; // r30
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
// Range: 0x803D47F4 -> 0x803D4950
void OSResetSystem(int reset /* r31 */, unsigned long resetCode /* r30 */, int forceMenu /* r28 */) {
    // Local variables
    struct OSSram * sram; // r29

    // References
    // -> static unsigned long bootThisDol;
}

// total size: 0x1C
struct {
    // Members
    int valid; // offset 0x0, size 0x4
    unsigned long restartCode; // offset 0x4, size 0x4
    unsigned long bootDol; // offset 0x8, size 0x4
    void * regionStart; // offset 0xC, size 0x4
    void * regionEnd; // offset 0x10, size 0x4
    int argsUseDefault; // offset 0x14, size 0x4
    void * argsAddr; // offset 0x18, size 0x4
} __OSRebootParams; // size: 0x1C, address: 0x80D5AFD0
// Range: 0x803D4950 -> 0x803D49A4
unsigned long OSGetResetCode() {
    // Local variables
    unsigned long resetCode; // r31

    // References
    // -> struct [anonymous] __OSRebootParams;
}


