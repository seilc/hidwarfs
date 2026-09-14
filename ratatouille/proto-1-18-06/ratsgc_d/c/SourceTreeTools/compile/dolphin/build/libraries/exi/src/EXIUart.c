/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\exi\src\EXIUart.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803AABA4 -> 0x803AB184
*/
static long Chan; // size: 0x4, address: 0x80D6BF48
static unsigned long Dev; // size: 0x4, address: 0x80D6BF4C
static unsigned long Enabled; // size: 0x4, address: 0x80D6BF50
static unsigned long BarnacleEnabled; // size: 0x4, address: 0x80D6BF54
// Range: 0x803AABA4 -> 0x803AAD20
static int ProbeBarnacle(long chan /* r31 */, unsigned long dev /* r29 */, unsigned long * revision /* r28 */) {
    // Local variables
    int err; // r30
    unsigned long cmd; // r1+0x14
}

// Range: 0x803AAD20 -> 0x803AAEF0
void __OSEnableBarnacle(long chan /* r30 */, unsigned long dev /* r31 */) {
    // Local variables
    unsigned long id; // r1+0x10

    // References
    // -> static unsigned long BarnacleEnabled;
    // -> static unsigned long Enabled;
    // -> static unsigned long Dev;
    // -> static long Chan;
}

// Range: 0x803AAEF0 -> 0x803AAF60
int InitializeUART() {
    // References
    // -> static unsigned long Enabled;
    // -> static unsigned long Dev;
    // -> static long Chan;
    // -> static unsigned long BarnacleEnabled;
}

// Range: 0x803AAF60 -> 0x803AAFF8
static int QueueLength() {
    // Local variables
    unsigned long cmd; // r1+0x8

    // References
    // -> static long Chan;
    // -> static unsigned long Dev;
}

// Range: 0x803AAFF8 -> 0x803AB184
int WriteUARTN(void * buf /* r26 */, unsigned long len /* r30 */) {
    // Local variables
    unsigned long cmd; // r1+0x10
    int qLen; // r31
    long xLen; // r29
    char * ptr; // r28
    int locked; // r25
    int error; // r27

    // References
    // -> static long Chan;
    // -> static unsigned long Dev;
    // -> static unsigned long Enabled;
}


