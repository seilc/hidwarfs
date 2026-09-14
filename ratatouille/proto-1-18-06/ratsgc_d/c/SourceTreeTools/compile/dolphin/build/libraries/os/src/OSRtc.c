/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSRtc.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D4EBC -> 0x803D5878
*/
// total size: 0x54
struct SramControl {
    // Members
    unsigned char sram[64]; // offset 0x0, size 0x40
    unsigned long offset; // offset 0x40, size 0x4
    int enabled; // offset 0x44, size 0x4
    int locked; // offset 0x48, size 0x4
    int sync; // offset 0x4C, size 0x4
    void (* callback)(); // offset 0x50, size 0x4
};
static struct SramControl Scb; // size: 0x54, address: 0x80D5B040
// Range: 0x803D4EBC -> 0x803D4FDC
static int ReadSram(void * buffer /* r30 */) {
    // Local variables
    int err; // r31
    unsigned long cmd; // r1+0xC
}

// Range: 0x803D4FDC -> 0x803D5080
static void WriteSramCallback() {
    // References
    // -> static struct SramControl Scb;
}

// Range: 0x803D5080 -> 0x803D518C
static int WriteSram(void * buffer /* r1+0x8 */, unsigned long offset /* r30 */, unsigned long size /* r1+0x10 */) {
    // Local variables
    int err; // r31
    unsigned long cmd; // r1+0x14
}

// Range: 0x803D518C -> 0x803D5204
void __OSInitSram() {
    // References
    // -> static struct SramControl Scb;
}

// Range: 0x803D5204 -> 0x803D5290
static void * LockSram(unsigned long offset /* r1+0x8 */) {
    // Local variables
    int enabled; // r30

    // References
    // -> static struct SramControl Scb;
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
// Range: 0x803D5290 -> 0x803D52B4
struct OSSram * __OSLockSram() {}

// total size: 0x2C
struct OSSramEx {
    // Members
    unsigned char flashID[2][12]; // offset 0x0, size 0x18
    unsigned long wirelessKeyboardID; // offset 0x18, size 0x4
    unsigned short wirelessPadID[4]; // offset 0x1C, size 0x8
    unsigned char dvdErrorCode; // offset 0x24, size 0x1
    unsigned char _padding0; // offset 0x25, size 0x1
    unsigned char flashIDCheckSum[2]; // offset 0x26, size 0x2
    unsigned short gbs; // offset 0x28, size 0x2
    unsigned char _padding1[2]; // offset 0x2A, size 0x2
};
// Range: 0x803D52B4 -> 0x803D52D8
struct OSSramEx * __OSLockSramEx() {}

// Range: 0x803D52D8 -> 0x803D5438
static int UnlockSram(int commit /* r1+0x8 */, unsigned long offset /* r27 */) {
    // Local variables
    unsigned short * p; // r29
    struct OSSram * sram; // r30
    struct OSSramEx * sram; // r28

    // References
    // -> static struct SramControl Scb;
}

// Range: 0x803D5438 -> 0x803D5464
int __OSUnlockSram(int commit /* r1+0x8 */) {}

// Range: 0x803D5464 -> 0x803D5490
int __OSUnlockSramEx(int commit /* r1+0x8 */) {}

// Range: 0x803D5490 -> 0x803D54A0
int __OSSyncSram() {
    // References
    // -> static struct SramControl Scb;
}

// Range: 0x803D54A0 -> 0x803D55E8
int __OSReadROM(void * buffer /* r29 */, long length /* r30 */, long offset /* r1+0x10 */) {
    // Local variables
    int err; // r31
    unsigned long cmd; // r1+0x14
}

// Range: 0x803D55E8 -> 0x803D5638
unsigned long OSGetSoundMode() {
    // Local variables
    struct OSSram * sram; // r31
    unsigned long mode; // r30
}

// Range: 0x803D5638 -> 0x803D56D4
void OSSetSoundMode(unsigned long mode /* r31 */) {
    // Local variables
    struct OSSram * sram; // r30
}

// Range: 0x803D56D4 -> 0x803D5710
unsigned char OSGetLanguage() {
    // Local variables
    struct OSSram * sram; // r31
    unsigned char language; // r30
}

// Range: 0x803D5710 -> 0x803D575C
unsigned short OSGetWirelessID(long chan /* r1+0x8 */) {
    // Local variables
    struct OSSramEx * sram; // r31
    unsigned short id; // r30
}

// Range: 0x803D575C -> 0x803D57C8
void OSSetWirelessID(long chan /* r29 */, unsigned short id /* r30 */) {
    // Local variables
    struct OSSramEx * sram; // r31
}

// Range: 0x803D57C8 -> 0x803D5804
unsigned short OSGetGbsMode() {
    // Local variables
    struct OSSramEx * sram; // r31
    unsigned short mode; // r30
}

// Range: 0x803D5804 -> 0x803D5878
void OSSetGbsMode(unsigned short mode /* r31 */) {
    // Local variables
    struct OSSramEx * sram; // r30
}


