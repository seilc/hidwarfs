/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\dvd\src\emu_level2\fstload.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A8D78 -> 0x803A8FE4
*/
static unsigned long status; // size: 0x4, address: 0x80D6BF30
static unsigned char bb2Buf[63]; // size: 0x3F, address: 0x80D579D8
// total size: 0x20
struct DVDBB2 {
    // Members
    unsigned long bootFilePosition; // offset 0x0, size 0x4
    unsigned long FSTPosition; // offset 0x4, size 0x4
    unsigned long FSTLength; // offset 0x8, size 0x4
    unsigned long FSTMaxLength; // offset 0xC, size 0x4
    void * FSTAddress; // offset 0x10, size 0x4
    unsigned long userPosition; // offset 0x14, size 0x4
    unsigned long userLength; // offset 0x18, size 0x4
    unsigned long padding0; // offset 0x1C, size 0x4
};
static struct DVDBB2 * bb2; // size: 0x4, address: 0x80D6BF34
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
static struct DVDDiskID * idTmp; // size: 0x4, address: 0x80D6BF38
// Range: 0x803A8D78 -> 0x803A8E5C
static void cb(long result /* r30 */, struct DVDCommandBlock * block /* r31 */) {
    // References
    // -> static struct DVDDiskID * idTmp;
    // -> static unsigned long status;
    // -> static struct DVDBB2 * bb2;
}

// total size: 0x30
struct DVDCommandBlock {
    // Members
    struct DVDCommandBlock * next; // offset 0x0, size 0x4
    struct DVDCommandBlock * prev; // offset 0x4, size 0x4
    unsigned long command; // offset 0x8, size 0x4
    long state; // offset 0xC, size 0x4
    unsigned long offset; // offset 0x10, size 0x4
    unsigned long length; // offset 0x14, size 0x4
    void * addr; // offset 0x18, size 0x4
    unsigned long currTransferSize; // offset 0x1C, size 0x4
    unsigned long transferredSize; // offset 0x20, size 0x4
    struct DVDDiskID * id; // offset 0x24, size 0x4
    void (* callback)(long, struct DVDCommandBlock *); // offset 0x28, size 0x4
    void * userData; // offset 0x2C, size 0x4
};
static struct DVDCommandBlock block$17; // size: 0x30, address: 0x80D57A18
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
// Range: 0x803A8E5C -> 0x803A8FE4
void __fstLoad() {
    // Local variables
    struct OSBootInfo_s * bootInfo; // r29
    struct DVDDiskID * id; // r31
    unsigned char idTmpBuf[63]; // r1+0xC
    long state; // r28
    void * arenaHi; // r1+0x8

    // References
    // -> static struct DVDBB2 * bb2;
    // -> static struct DVDDiskID * idTmp;
    // -> static struct DVDCommandBlock block$17;
    // -> static unsigned char bb2Buf[63];
}


