/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char * HISRequestThreadStateNames[25]; // size: 0x64, address: 0x508AC0
char * HISMainThreadStateNames[10]; // size: 0x28, address: 0x508B30
char * HISStreamThreadStateNames[4]; // size: 0x10, address: 0x508B60
enum HISMemoryType {
    HIS_MEMORY_EE = 0,
    HIS_MEMORY_IOP = 1,
    HIS_MEMORY_SPU = 2,
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
    Compile unit: C:\TestBuild\in\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F2450 -> 0x001F24D0
*/
// Range: 0x1F2450 -> 0x1F24D0
enum HISStatus HISWaitForCompletion(signed int requestID /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1F2450 -> 0x1F24D0
        enum HISStatus status; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\his\HISAPI.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F24D0 -> 0x001F2570
*/
// Range: 0x1F24D0 -> 0x1F2570
enum HISStatus HISLoadBlock(signed int fileIndex /* r2 */, signed int sourceBlock /* r2 */, signed int sourceSize /* r2 */, void * destinationAddress /* r2 */, enum HISMemoryType destinationType /* r2 */, signed int priority /* r2 */, signed int flags /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F24D0 -> 0x1F2570
        signed int id; // r17
    }
}


