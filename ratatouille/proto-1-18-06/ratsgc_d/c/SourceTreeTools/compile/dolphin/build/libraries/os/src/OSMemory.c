/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSMemory.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D3DF8 -> 0x803D419C
*/
// total size: 0x10
struct OSResetFunctionInfo {
    // Members
    int (* func)(int); // offset 0x0, size 0x4
    unsigned long priority; // offset 0x4, size 0x4
    struct OSResetFunctionInfo * next; // offset 0x8, size 0x4
    struct OSResetFunctionInfo * prev; // offset 0xC, size 0x4
};
static struct OSResetFunctionInfo ResetFunctionInfo; // size: 0x10, address: 0x8054B8A0
// total size: 0x20
struct DVDDiskID {
    // Members
    char gameName[4]; // offset 0x0, size 0x4
    char company[2]; // offset 0x4, size 0x2
    unsigned char diskNumber; // offset 0x6, size 0x1
    unsigned char gameVersion; // offset 0x7, size 0x1
    unsigned char streaming; // offset 0x8, size 0x1
    unsigned char streamingBufSize; // offset 0x9, size 0x1
    unsigned char padding[22]; // offset 0xA, size 0x16
};
// total size: 0x40
struct OSBootInfo_s {
    // Members
    struct DVDDiskID DVDDiskID; // offset 0x0, size 0x20
    unsigned long magic; // offset 0x20, size 0x4
    unsigned long version; // offset 0x24, size 0x4
    unsigned long memorySize; // offset 0x28, size 0x4
    unsigned long consoleType; // offset 0x2C, size 0x4
    void * arenaLo; // offset 0x30, size 0x4
    void * arenaHi; // offset 0x34, size 0x4
    void * FSTLocation; // offset 0x38, size 0x4
    unsigned long FSTMaxLength; // offset 0x3C, size 0x4
};
// Range: 0x803D3DF8 -> 0x803D3E2C
unsigned long OSGetPhysicalMemSize() {
    // Local variables
    struct OSBootInfo_s * BootInfo; // r31
}

// Range: 0x803D3E2C -> 0x803D3E60
unsigned long OSGetConsoleSimulatedMemSize() {
    // Local variables
    unsigned long * memSize; // r31
}

// Range: 0x803D3E60 -> 0x803D3EA4
static int OnReset(int final /* r1+0x8 */) {}

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
void (* __OSErrorTable[])(unsigned short, struct OSContext *); // size: 0x0, address: 0x80D5AFF0
// Range: 0x803D3EA4 -> 0x803D3F48
static void MEMIntrruptHandler(struct OSContext * context /* r29 */) {
    // Local variables
    unsigned long addr; // r31
    unsigned long cause; // r30

    // References
    // -> void (* __OSErrorTable[])(unsigned short, struct OSContext *);
}

// Range: 0x803D3F48 -> 0x803D3FC8
static void Config24MB() {}

// Range: 0x803D3FC8 -> 0x803D4048
static void Config48MB() {}

// Range: 0x803D4048 -> 0x803D4060
static void RealMode(unsigned long addr /* r3 */) {}

// Range: 0x803D4060 -> 0x803D419C
void __OSInitMemoryProtection() {
    // Local variables
    int enabled; // r30
    unsigned long size; // r31

    // References
    // -> static struct OSResetFunctionInfo ResetFunctionInfo;
}


