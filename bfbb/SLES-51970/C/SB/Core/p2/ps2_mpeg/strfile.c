/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\strfile.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0xC
class StrFile {
    // Members
public:
    signed int file; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    signed int current; // offset 0x8, size 0x4
};
enum HISStatus {
    HIS_STATUS_INVALID_ID = 0,
    HIS_STATUS_DONE = 1,
    HIS_STATUS_IN_PROGRESS = 2,
    HIS_STATUS_IN_QUEUE = 3,
    HIS_STATUS_PARTIAL = 4,
    HIS_STATUS_FAILED = 5,
    HIS_STATUS_CANCELLED = 6,
    HIS_STATUS_DMA_WAIT = 7,
};

/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\strfile.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD1D0 -> 0x001BD300
*/
// Range: 0x1BD1D0 -> 0x1BD300
signed int strFileRead(class StrFile * file /* r20 */, void * buff /* r2 */, signed int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BD1D0 -> 0x1BD300
        signed int blocksToRead; // r19
        signed int id; // r2
        enum HISStatus status; // r18
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\strfile.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD300 -> 0x001BD308
*/
// Range: 0x1BD300 -> 0x1BD308
signed int strFileClose() {
    /* anonymous block */ {
        // Range: 0x1BD300 -> 0x1BD308
    }
}


/*
    Compile unit: C:\SB\Core\p2\ps2_mpeg\strfile.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BD310 -> 0x001BD358
*/
// Range: 0x1BD310 -> 0x1BD358
signed int strFileOpen(class StrFile * file /* r16 */, char * filename /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BD310 -> 0x1BD358
    }
}


