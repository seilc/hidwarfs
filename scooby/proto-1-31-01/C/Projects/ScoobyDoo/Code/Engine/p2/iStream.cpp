/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class _RwStream * currentFileID; // size: 0x4, address: 0x4A4ED8
char currentFileName[32]; // size: 0x20, address: 0xAADFC0
unsigned int currentID; // size: 0x4, address: 0x4A465C
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
signed int assetBufferRemain; // size: 0x4, address: 0x4A4E98
// total size: 0x4
class _RwStreamFile {
    // Members
public:
    void * fpFile; // offset 0x0, size 0x4
};
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
// total size: 0x28
class XStream {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    signed int currentOffset; // offset 0x4, size 0x4
    unsigned int * data; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
    unsigned int offset; // offset 0x10, size 0x4
    unsigned int done; // offset 0x14, size 0x4
    unsigned int assetID; // offset 0x18, size 0x4
    class tagXStreamDirectoryEntry * dir; // offset 0x1C, size 0x4
    unsigned int count; // offset 0x20, size 0x4
    unsigned int index; // offset 0x24, size 0x4
};
// total size: 0x14
class _RwStreamCustom {
    // Members
public:
    signed int (* sfnclose)(void *); // offset 0x0, size 0x4
    unsigned int (* sfnread)(void *, void *, unsigned int); // offset 0x4, size 0x4
    signed int (* sfnwrite)(void *, void *, unsigned int); // offset 0x8, size 0x4
    signed int (* sfnskip)(void *, unsigned int); // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
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
enum _RwStreamType {
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class _RwStreamUnion {
    // Members
public:
    union { // inferred
        class _RwStreamMemory memory; // offset 0x0, size 0xC
        class _RwStreamFile file; // offset 0x0, size 0x4
        class _RwStreamCustom custom; // offset 0x0, size 0x14
    };
};
enum _RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x24
class _RwStream {
    // Members
public:
    enum _RwStreamType type; // offset 0x0, size 0x4
    enum _RwStreamAccessType accessType; // offset 0x4, size 0x4
    signed int position; // offset 0x8, size 0x4
    class _RwStreamUnion Type; // offset 0xC, size 0x14
    signed int rwOwned; // offset 0x20, size 0x4
};
// total size: 0xC
class _RwStreamMemory {
    // Members
public:
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036BB40 -> 0x0036BC14
*/
// Range: 0x36BB40 -> 0x36BC14
void iStreamAbort(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x36BB40 -> 0x36BC14
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036BC20 -> 0x0036C52C
*/
// Range: 0x36BC20 -> 0x36C52C
void iStreamDoRead(class XStream * stream /* r21 */, void (* callback)(class XStream *) /* r20 */, signed int reloadSound /* r22 */) {
    /* anonymous block */ {
        // Range: 0x36BC20 -> 0x36C52C
        signed int stat; // r2
        signed int stat; // r2
        unsigned char * dataStart; // r19
        signed int assetID; // r2
        signed int lastSound; // r4
        signed int si; // r2
        signed int padSize; // r18
        signed int type; // r3
        signed int xfrSize; // r3
        unsigned int dramSize; // r17
        unsigned int sectors; // r18
        unsigned int bytes; // r16
        signed int h; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036C530 -> 0x0036C554
*/
// Range: 0x36C530 -> 0x36C554
void iStreamRead(class XStream * stream /* r2 */, void (* callback)(class XStream *) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x36C530 -> 0x36C554
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036C560 -> 0x0036C61C
*/
// Range: 0x36C560 -> 0x36C61C
void iStreamWait(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x36C560 -> 0x36C61C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036C620 -> 0x0036C704
*/
// Range: 0x36C620 -> 0x36C704
void iStreamSeek(unsigned int id /* r16 */) {
    /* anonymous block */ {
        // Range: 0x36C620 -> 0x36C704
        char name[32]; // r29+0x20
        signed int tens; // r3
        signed int scn; // r6
        signed int seq; // r5
        signed int act; // r3
    }
}


