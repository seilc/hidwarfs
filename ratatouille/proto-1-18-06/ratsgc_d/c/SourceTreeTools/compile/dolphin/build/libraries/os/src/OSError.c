/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSError.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D1918 -> 0x803D2000
*/
unsigned long __OSFpscrEnableBits; // size: 0x4, address: 0x80D681F0
// Range: 0x803D1918 -> 0x803D19A8
void OSReport(const char * msg /* r31 */) {
    // Local variables
    // total size: 0xC
    struct {
        // Members
        char gpr; // offset 0x0, size 0x1
        char fpr; // offset 0x1, size 0x1
        char reserved[2]; // offset 0x2, size 0x2
        char * input_arg_area; // offset 0x4, size 0x4
        char * reg_save_area; // offset 0x8, size 0x4
    } marker[1]; // r1+0x6C
}

// Range: 0x803D19A8 -> 0x803D1ABC
void OSPanic(const char * file /* r1+0x68 */, int line /* r1+0x6C */, const char * msg /* r28 */) {
    // Local variables
    // total size: 0xC
    struct {
        // Members
        char gpr; // offset 0x0, size 0x1
        char fpr; // offset 0x1, size 0x1
        char reserved[2]; // offset 0x2, size 0x2
        char * input_arg_area; // offset 0x4, size 0x4
        char * reg_save_area; // offset 0x8, size 0x4
    } marker[1]; // r1+0x74
    unsigned long i; // r29
    unsigned long * p; // r31
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
void (* __OSErrorTable[17])(unsigned short, struct OSContext *); // size: 0x44, address: 0x80D5AFF0
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
// Range: 0x803D1ABC -> 0x803D1CB4
void (* OSSetErrorHandler(unsigned short error /* r27 */, void (* handler)(unsigned short, struct OSContext *) /* r24 */))(unsigned short, struct OSContext *) {
    // Local variables
    void (* oldHandler)(unsigned short, struct OSContext *); // r26
    int enabled; // r25
    unsigned long msr; // r30
    unsigned long fpscr; // r29
    struct OSThread * thread; // r31
    int i; // r28

    // References
    // -> unsigned long __OSFpscrEnableBits;
    // -> void (* __OSErrorTable[17])(unsigned short, struct OSContext *);
}

char * __OSExceptionNames[]; // size: 0x0, address: 0x80548D18
signed short __OSLastInterrupt; // size: 0x2, address: 0x80D6C100
unsigned long __OSLastInterruptSrr0; // size: 0x4, address: 0x80D6C0FC
long long __OSLastInterruptTime; // size: 0x8, address: 0x80D6C108
// Range: 0x803D1CB4 -> 0x803D2000
void __OSUnhandledException(unsigned char exception /* r29 */, struct OSContext * context /* r31 */, unsigned long dsisr /* r24 */, unsigned long dar /* r27 */) {
    // Local variables
    long long now; // r22
    unsigned long fpscr; // r26
    unsigned long msr; // r25

    // References
    // -> long long __OSLastInterruptTime;
    // -> unsigned long __OSLastInterruptSrr0;
    // -> signed short __OSLastInterrupt;
    // -> char * __OSExceptionNames[];
    // -> void (* __OSErrorTable[17])(unsigned short, struct OSContext *);
}


