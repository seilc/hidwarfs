/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xOutputMgr.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008D254 -> 0x8008D9B0
*/
// total size: 0xC
struct xOutModstat {
    // Members
    unsigned int hval; // offset 0x0, size 0x4
    char * name; // offset 0x4, size 0x4
    enum xOutSeverity trumpsev; // offset 0x8, size 0x4
};
static struct xOutModstat xout_mss[128]; // size: 0x600, address: 0x80A84218
static int xout_sev; // size: 0x4, address: 0x80BFD6F8
// Range: 0x8008D254 -> 0x8008D25C
void xOutSetSev(int sev /* r0 */) {
    // References
    // -> static int xout_sev;
}

// Range: 0x8008D25C -> 0x8008D264
int xOutGetSev() {
    // References
    // -> static int xout_sev;
}

enum xOutSeverity {
    xOutSevIgnore = -1,
    xOutSevCrit = 1,
    xOutSevErr = 2,
    xOutSevWarn = 3,
    xOutSevInfo = 4,
    xOutSevBabble = 5,
    xOutSevForce = 2147483647,
};
// Range: 0x8008D264 -> 0x8008D2FC
static void xOutEnable(unsigned int hval /* r0 */, char * name /* r0 */, enum xOutSeverity trumpsev /* r0 */) {
    // Local variables
    unsigned int k; // r9
    unsigned int ok; // r10

    // References
    // -> static struct xOutModstat xout_mss[128];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFD6FC
// Range: 0x8008D2FC -> 0x8008D390
void xOutEnable(char * name /* r30 */, enum xOutSeverity trumpsev /* r31 */) {
    // References
    // -> static char __FUNCTION__[11];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80BFD708
// Range: 0x8008D390 -> 0x8008D410
int xOutEnabled(char * name /* r31 */) {
    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFD714
// Range: 0x8008D410 -> 0x8008D4A0
int xOutTrumps(char * name /* r30 */, enum xOutSeverity usersev /* r31 */) {
    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x8008D4A0 -> 0x8008D4E4
int xOutEnabled(unsigned int hval /* r0 */) {
    // Local variables
    unsigned int k; // r5
    unsigned int ok; // r6

    // References
    // -> static struct xOutModstat xout_mss[128];
}

// Range: 0x8008D4E4 -> 0x8008D548
int xOutTrumps(unsigned int hval /* r0 */, enum xOutSeverity usersev /* r0 */) {
    // Local variables
    unsigned int k; // r7
    unsigned int ok; // r8

    // References
    // -> static struct xOutModstat xout_mss[128];
}

// total size: 0xC
struct __va_list_struct {
    // Members
    char gpr; // offset 0x0, size 0x1
    char fpr; // offset 0x1, size 0x1
    char reserved[2]; // offset 0x2, size 0x2
    char * input_arg_area; // offset 0x4, size 0x4
    char * reg_save_area; // offset 0x8, size 0x4
};
// Range: 0x8008D548 -> 0x8008D600
void xOutCrit(const char * fmt /* r30 */) {
    // Local variables
    char buf[1024]; // r1+0x74
    struct __va_list_struct args[1]; // r1+0x68
}

// Range: 0x8008D600 -> 0x8008D6EC
void xOutErr(char * name /* r30 */, const char * fmt /* r31 */) {
    // Local variables
    char buf[1024]; // r1+0x74
    struct __va_list_struct args[1]; // r1+0x68

    // References
    // -> static int xout_sev;
}

// Range: 0x8008D6EC -> 0x8008D7D8
void xOutWarn(char * name /* r30 */, const char * fmt /* r31 */) {
    // Local variables
    char buf[1024]; // r1+0x74
    struct __va_list_struct args[1]; // r1+0x68

    // References
    // -> static int xout_sev;
}

// Range: 0x8008D7D8 -> 0x8008D8C4
void xOutInfo(char * name /* r30 */, const char * fmt /* r31 */) {
    // Local variables
    char buf[1024]; // r1+0x74
    struct __va_list_struct args[1]; // r1+0x68

    // References
    // -> static int xout_sev;
}

// Range: 0x8008D8C4 -> 0x8008D9B0
void xOutBabble(char * name /* r30 */, const char * fmt /* r31 */) {
    // Local variables
    char buf[1024]; // r1+0x74
    struct __va_list_struct args[1]; // r1+0x68

    // References
    // -> static int xout_sev;
}


