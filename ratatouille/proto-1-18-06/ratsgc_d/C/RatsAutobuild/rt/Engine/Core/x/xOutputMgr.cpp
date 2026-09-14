/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xOutputMgr.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A925C -> 0x800A9A80
*/
// total size: 0xC
struct xOutModstat {
    // Members
    unsigned int hval; // offset 0x0, size 0x4
    char * name; // offset 0x4, size 0x4
    enum xOutSeverity trumpsev; // offset 0x8, size 0x4
};
static struct xOutModstat xout_mss[128]; // size: 0x600, address: 0x80B866F8
static int xout_sev; // size: 0x4, address: 0x80D60178
// Range: 0x800A925C -> 0x800A9264
void xOutSetSev(int sev /* r3 */) {
    // References
    // -> static int xout_sev;
}

// Range: 0x800A9264 -> 0x800A926C
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
// Range: 0x800A926C -> 0x800A9374
static void xOutEnable(unsigned int hval /* r30 */, char * name /* r1+0x8 */, enum xOutSeverity trumpsev /* r28 */) {
    // Local variables
    unsigned int k; // r31
    unsigned int ok; // r29

    // References
    // -> static struct xOutModstat xout_mss[128];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D6017C
// Range: 0x800A9374 -> 0x800A9410
void xOutEnable(char * name /* r31 */, enum xOutSeverity trumpsev /* r1+0x8 */) {
    // References
    // -> static char __FUNCTION__[11];
}

static char __FUNCTION__[12]; // size: 0xC, address: 0x80D60187
// Range: 0x800A9410 -> 0x800A94A0
int xOutEnabled(char * name /* r31 */) {
    // References
    // -> static char __FUNCTION__[12];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D60193
// Range: 0x800A94A0 -> 0x800A9538
int xOutTrumps(char * name /* r31 */, enum xOutSeverity usersev /* r1+0x8 */) {
    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x800A9538 -> 0x800A9598
int xOutEnabled(unsigned int hval /* r3 */) {
    // Local variables
    unsigned int k; // r31
    unsigned int ok; // r30

    // References
    // -> static struct xOutModstat xout_mss[128];
}

// Range: 0x800A9598 -> 0x800A961C
int xOutTrumps(unsigned int hval /* r3 */, enum xOutSeverity usersev /* r4 */) {
    // Local variables
    unsigned int k; // r31
    unsigned int ok; // r30

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
// Range: 0x800A961C -> 0x800A96D0
void xOutCrit(const char * fmt /* r31 */) {
    // Local variables
    char buf[1024]; // r1+0x74
    struct __va_list_struct args[1]; // r1+0x68
}

// Range: 0x800A96D0 -> 0x800A97BC
void xOutErr(char * name /* r30 */, const char * fmt /* r31 */) {
    // Local variables
    char buf[1024]; // r1+0x74
    struct __va_list_struct args[1]; // r1+0x68

    // References
    // -> static int xout_sev;
}

// Range: 0x800A97BC -> 0x800A98A8
void xOutWarn(char * name /* r30 */, const char * fmt /* r31 */) {
    // Local variables
    char buf[1024]; // r1+0x74
    struct __va_list_struct args[1]; // r1+0x68

    // References
    // -> static int xout_sev;
}

// Range: 0x800A98A8 -> 0x800A9994
void xOutInfo(char * name /* r30 */, const char * fmt /* r31 */) {
    // Local variables
    char buf[1024]; // r1+0x74
    struct __va_list_struct args[1]; // r1+0x68

    // References
    // -> static int xout_sev;
}

// Range: 0x800A9994 -> 0x800A9A80
void xOutBabble(char * name /* r30 */, const char * fmt /* r31 */) {
    // Local variables
    char buf[1024]; // r1+0x74
    struct __va_list_struct args[1]; // r1+0x68

    // References
    // -> static int xout_sev;
}


