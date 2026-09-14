/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int gTextCount; // size: 0x4, address: 0x4A4C90
signed int gTextResetPoint; // size: 0x4, address: 0x4A4C94
class tagxText gTextReference[320]; // size: 0xA00, address: 0x4ACA40
static char * badText; // size: 0x4, address: 0x0
static char * blankText; // size: 0x4, address: 0x4A3E40
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x8
class tagxText {
    // Members
public:
    unsigned int assetId; // offset 0x0, size 0x4
    char * string; // offset 0x4, size 0x4
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
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E110 -> 0x0032E1C4
*/
// Range: 0x32E110 -> 0x32E1C4
char * xTextFind(unsigned int assetId /* r2 */) {
    /* anonymous block */ {
        // Range: 0x32E110 -> 0x32E1C4
        char * ret; // r2
        signed int i; // r5
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E1D0 -> 0x0032E2E4
*/
// Range: 0x32E1D0 -> 0x32E2E4
void xTextAdd(unsigned int assetId /* r17 */, char * string /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32E1D0 -> 0x32E2E4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E2F0 -> 0x0032E300
*/
// Range: 0x32E2F0 -> 0x32E300
void xTextLevelReset() {
    /* anonymous block */ {
        // Range: 0x32E2F0 -> 0x32E300
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E300 -> 0x0032E310
*/
// Range: 0x32E300 -> 0x32E310
void xTextSetLevelReset() {
    /* anonymous block */ {
        // Range: 0x32E300 -> 0x32E310
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xText.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E310 -> 0x0032E320
*/
// Range: 0x32E310 -> 0x32E320
void xTextInit() {
    /* anonymous block */ {
        // Range: 0x32E310 -> 0x32E320
    }
}


