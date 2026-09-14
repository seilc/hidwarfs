/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int streamOpen; // size: 0x4, address: 0x4A4CA8
static signed int headerUpdated; // size: 0x4, address: 0x4A4CAC
static unsigned int currentID; // size: 0x4, address: 0x4A4CB0
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
static void (* initTable[36])(class XStream *); // size: 0x90, address: 0x4463C0
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
void xStreamReadNextAsset(class XStream *); // size: 0x0, address: 0x32F0C0
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032EDA0 -> 0x0032EF28
*/
// Range: 0x32EDA0 -> 0x32EF28
void xStreamBlock(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32EDA0 -> 0x32EF28
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032EF30 -> 0x0032F0BC
*/
// Range: 0x32EF30 -> 0x32F0BC
void xStreamBeginReadMDS(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32EF30 -> 0x32F0BC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032F0C0 -> 0x0032F1B8
*/
// Range: 0x32F0C0 -> 0x32F1B8
void xStreamReadNextAsset(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32F0C0 -> 0x32F1B8
        signed int type; // r5
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032F1C0 -> 0x0032F33C
*/
// Range: 0x32F1C0 -> 0x32F33C
void xStreamReadHeader(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32F1C0 -> 0x32F33C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xStream.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032F340 -> 0x0032F388
*/
// Range: 0x32F340 -> 0x32F388
void xStreamSeek(class XStream * stream /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32F340 -> 0x32F388
    }
}


