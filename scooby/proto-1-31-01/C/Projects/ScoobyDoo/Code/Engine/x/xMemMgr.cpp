/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int l_staticPoolBuffer[1396334]; // size: 0x5539B8, address: 0x4E2320
static unsigned int l_levelPoolBuffer[20256]; // size: 0x13C80, address: 0xA35CE0
static unsigned int l_preloadPoolBuffer[20256]; // size: 0x13C80, address: 0xA49960
static unsigned char * l_staticPool; // size: 0x4, address: 0x4A4D68
static unsigned char * l_levelPool; // size: 0x4, address: 0x4A4D6C
static unsigned char * l_preloadPool; // size: 0x4, address: 0x4A4D70
static signed int l_amInitialized; // size: 0x4, address: 0x4A4D74
static signed int l_tempIsLocked; // size: 0x4, address: 0x4A4D78
static unsigned int l_staticPoolSize; // size: 0x4, address: 0x4A4D7C
static unsigned int l_levelPoolSize; // size: 0x4, address: 0x4A4D80
static unsigned int l_preloadPoolSize; // size: 0x4, address: 0x4A4D84
unsigned int l_currentStaticUsed; // size: 0x4, address: 0x4A4D88
static unsigned int l_currentLevelUsed; // size: 0x4, address: 0x4A4D8C
static unsigned int l_currentPreloadUsed; // size: 0x4, address: 0x4A4D90
static unsigned int l_currentTempUsed; // size: 0x4, address: 0x4A4D94
static unsigned char * xMemCurrentStaticPointer; // size: 0x4, address: 0x4A4D98
static unsigned int xMemCurrentStaticPointerLocked; // size: 0x4, address: 0x4A4D9C
static unsigned char * xMemCurrentLevelPointer; // size: 0x4, address: 0x4A4DA0
static unsigned int xMemCurrentLevelPointerLocked; // size: 0x4, address: 0x4A4DA4
static unsigned char * xMemCurrentPreloadPointer; // size: 0x4, address: 0x4A4DA8
static unsigned int xMemCurrentPreloadPointerLocked; // size: 0x4, address: 0x4A4DAC
unsigned int l_levelResetStaticUsed; // size: 0x4, address: 0x4A4DB0
unsigned char * l_levelResetStaticPointer; // size: 0x4, address: 0x4A4DB4
static unsigned int * l_debugStaticBlockMap[20000]; // size: 0x13880, address: 0xA5D5E0
static unsigned int l_debugStaticBlockMapUsed; // size: 0x4, address: 0x4A4DB8
static unsigned int * l_debugLevelBlockMap[20000]; // size: 0x13880, address: 0xA70E60
static unsigned int l_debugLevelBlockMapUsed; // size: 0x4, address: 0x4A4DBC
static unsigned int * l_debugPreloadBlockMap[20000]; // size: 0x13880, address: 0xA846E0
static unsigned int l_debugPreloadBlockMapUsed; // size: 0x4, address: 0x4A4DC0
static unsigned int l_debugStaticLevelResetBlockUsed; // size: 0x4, address: 0x4A4DC4
static signed int lastId; // size: 0x4, address: 0x4A4628
static signed int currentIdSize; // size: 0x4, address: 0x4A4DC8
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00357AD0 -> 0x00357DA4
*/
// Range: 0x357AD0 -> 0x357DA4
void MEMCheckIntegrity() {
    /* anonymous block */ {
        // Range: 0x357AD0 -> 0x357DA4
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00357DB0 -> 0x00357E4C
*/
// Range: 0x357DB0 -> 0x357E4C
void memRecordRequest(unsigned int id /* r18 */, unsigned int count /* r17 */, unsigned int size /* r16 */, char * file /* r2 */, unsigned int line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x357DB0 -> 0x357E4C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00357E50 -> 0x00357FC8
*/
// Range: 0x357E50 -> 0x357FC8
void MEMUnlockTempMemory() {
    /* anonymous block */ {
        // Range: 0x357E50 -> 0x357FC8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00357FD0 -> 0x00358288
*/
// Range: 0x357FD0 -> 0x358288
void * MEMLockTempMemory(unsigned int count /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x357FD0 -> 0x358288
        signed int over; // r2
        signed int offset; // r2
        unsigned char * base; // r3
        unsigned int sizeToAlloc; // r16
        void * retVal; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00358290 -> 0x003582E0
*/
// Range: 0x358290 -> 0x3582E0
unsigned char * MEMStaticMemoryLevelReset() {
    /* anonymous block */ {
        // Range: 0x358290 -> 0x3582E0
        unsigned int * end; // r4
        unsigned int * clear; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003582E0 -> 0x00358300
*/
// Range: 0x3582E0 -> 0x358300
void MEMStaticMemorySetLevelReset() {
    /* anonymous block */ {
        // Range: 0x3582E0 -> 0x358300
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00358300 -> 0x00358614
*/
// Range: 0x358300 -> 0x358614
void * MEMGetStaticMemory(unsigned int count /* r19 */, unsigned int size /* r18 */, char * file /* r2 */, unsigned int line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x358300 -> 0x358614
        unsigned int i; // r4
        unsigned char * p; // r3
        signed int total; // r17
        void * retValue; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00358620 -> 0x00358668
*/
// Range: 0x358620 -> 0x358668
signed short MEMReset() {
    /* anonymous block */ {
        // Range: 0x358620 -> 0x358668
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xMemMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00358670 -> 0x00358704
*/
// Range: 0x358670 -> 0x358704
signed short MEMInit() {
    /* anonymous block */ {
        // Range: 0x358670 -> 0x358704
    }
}


