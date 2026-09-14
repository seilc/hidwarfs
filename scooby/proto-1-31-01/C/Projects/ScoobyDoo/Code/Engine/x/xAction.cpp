/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAction.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int scriptSoundLoadIndex; // size: 0x4, address: 0x4A4ED4
signed int gGameState; // size: 0x4, address: 0x4A4640
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x4
class iActionRuntime {
    // Members
public:
    class xAction * m_and; // offset 0x0, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0x8
class xAction {
    // Members
public:
    class iActionResource * m_resource; // offset 0x0, size 0x4
    class iActionRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x8
class iActionResource {
    // Members
public:
    unsigned char m_cmdType; // offset 0x0, size 0x1
    unsigned char m_cmd; // offset 0x1, size 0x1
    unsigned short pad; // offset 0x2, size 0x2
    unsigned int m_cmdParameter; // offset 0x4, size 0x4
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAction.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036AED0 -> 0x0036B270
*/
// Range: 0x36AED0 -> 0x36B270
void xActionExecute(class xAction * a /* r16 */) {
    /* anonymous block */ {
        // Range: 0x36AED0 -> 0x36B270
        class iActionResource * r; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAction.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036B270 -> 0x0036B27C
*/
// Range: 0x36B270 -> 0x36B27C
void xActionReInitializeInterpreter() {
    /* anonymous block */ {
        // Range: 0x36B270 -> 0x36B27C
    }
}


