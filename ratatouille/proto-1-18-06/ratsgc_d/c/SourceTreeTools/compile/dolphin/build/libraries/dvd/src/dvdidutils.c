/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\dvd\src\dvdidutils.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A8980 -> 0x803A8D44
*/
// Range: 0x803A8980 -> 0x803A89C4
static unsigned long strnlen(const char * str /* r3 */, unsigned long maxlen /* r4 */) {
    // Local variables
    unsigned long i; // r31
}

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
// Range: 0x803A89C4 -> 0x803A8D44
int DVDCompareDiskID(const struct DVDDiskID * id1 /* r29 */, const struct DVDDiskID * id2 /* r30 */) {
    // Local variables
    const char * game1; // r21
    const char * game2; // r20
    const char * company1; // r23
    const char * company2; // r22
    unsigned char diskNum1; // r27
    unsigned char diskNum2; // r26
    unsigned char version1; // r25
    unsigned char version2; // r24
    unsigned long length; // r28
}


