/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\dvd\src\dvderror.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A881C -> 0x803A8980
*/
static unsigned long ErrorTable[18]; // size: 0x48, address: 0x8053DF48
// Range: 0x803A881C -> 0x803A88BC
static unsigned char ErrorCode2Num(unsigned long errorCode /* r29 */) {
    // Local variables
    unsigned long i; // r31

    // References
    // -> static unsigned long ErrorTable[18];
}

// Range: 0x803A88BC -> 0x803A8938
static unsigned char Convert(unsigned long error /* r30 */) {
    // Local variables
    unsigned long statusCode; // r31
    unsigned long errorCode; // r29
    unsigned char errorNum; // r28
}

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
// Range: 0x803A8938 -> 0x803A8980
void __DVDStoreErrorCode(unsigned long error /* r1+0x8 */) {
    // Local variables
    struct OSSramEx * sram; // r31
    unsigned char num; // r30
}


