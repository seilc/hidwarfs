/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\hio\src\hio.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803C90EC -> 0x803C9B14
*/
const char * __HIOVersion; // size: 0x4, address: 0x80D68168
static long Chan; // size: 0x4, address: 0x80D6816C
static unsigned long Dev; // size: 0x4, address: 0x80D6BFE8
static void (* ExiCallback)(); // size: 0x4, address: 0x80D6BFEC
static void (* TxCallback)(); // size: 0x4, address: 0x80D6BFF0
static void (* RxCallback)(); // size: 0x4, address: 0x80D6BFF4
static char __HIODigest1[71]; // size: 0x47, address: 0x80547584
static char __HIODigest2[34]; // size: 0x22, address: 0x805475CC
// Range: 0x803C90EC -> 0x803C9168
static void ExtHandler(long chan /* r31 */) {
    // References
    // -> static unsigned long Dev;
    // -> static long Chan;
}

// Range: 0x803C9168 -> 0x803C919C
static void ExiHandler() {
    // References
    // -> static void (* ExiCallback)();
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
// Range: 0x803C919C -> 0x803C9200
static void DbgHandler(struct OSContext * context /* r1+0xC */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x10

    // References
    // -> static void (* ExiCallback)();
}

// Range: 0x803C9200 -> 0x803C92C8
int HIOEnumDevices(int (* callback)(long) /* r30 */) {
    // Local variables
    long chan; // r31
    unsigned long id; // r1+0xC

    // References
    // -> static unsigned long Dev;
    // -> static long Chan;
}

// Range: 0x803C92C8 -> 0x803C95B8
int HIOInit(long chan /* r29 */, void (* callback)() /* r1+0xC */) {
    // Local variables
    int err; // r31
    unsigned long cmd; // r1+0x14
    unsigned long id; // r1+0x10

    // References
    // -> const char * __HIOVersion;
    // -> static unsigned long Dev;
    // -> static long Chan;
    // -> static void (* ExiCallback)();
    // -> static void (* RxCallback)();
    // -> static void (* TxCallback)();
    // -> static char __HIODigest2[34];
    // -> static char __HIODigest1[71];
}

// Range: 0x803C95B8 -> 0x803C962C
static int CheckConsoleType() {}

// Range: 0x803C962C -> 0x803C975C
int HIOReadMailbox(unsigned long * word /* r1+0x8 */) {
    // Local variables
    int err; // r31
    unsigned long cmd; // r1+0xC

    // References
    // -> static long Chan;
    // -> static unsigned long Dev;
}

// Range: 0x803C975C -> 0x803C985C
int HIOWriteMailbox(unsigned long word /* r1+0x8 */) {
    // Local variables
    int err; // r31
    unsigned long cmd; // r1+0xC

    // References
    // -> static long Chan;
    // -> static unsigned long Dev;
}

// Range: 0x803C985C -> 0x803C99B8
int HIORead(unsigned long addr /* r30 */, void * buffer /* r1+0xC */, long size /* r1+0x10 */) {
    // Local variables
    int err; // r31
    unsigned long cmd; // r1+0x14

    // References
    // -> static long Chan;
    // -> static unsigned long Dev;
}

// Range: 0x803C99B8 -> 0x803C9B14
int HIOWrite(unsigned long addr /* r30 */, void * buffer /* r1+0xC */, long size /* r1+0x10 */) {
    // Local variables
    int err; // r31
    unsigned long cmd; // r1+0x14

    // References
    // -> static long Chan;
    // -> static unsigned long Dev;
}


