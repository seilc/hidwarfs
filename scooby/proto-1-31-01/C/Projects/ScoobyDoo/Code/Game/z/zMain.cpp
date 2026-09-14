/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x24
struct /* @anon0 */ {} zMain::__vtable; // size: 0x24, address: 0x4A27C0
signed int gQuit; // size: 0x4, address: 0x4A4F30
unsigned long m_currentTime; // size: 0x4, address: 0xB122B0
unsigned long gTimerValue; // size: 0x4, address: 0x4A5340
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x0
class zCharacter {};
// total size: 0x24
struct /* @anon0 */ {};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0x3C
class zMain : public xModule {
    // Members
public:
    class zDemo * m_modDemo; // offset 0x30, size 0x4
    class xModule * m_gameObjMgr; // offset 0x34, size 0x4
    class xModule * m_gameAnimMgr; // offset 0x38, size 0x4
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
// total size: 0x30
class xModule {
    // Members
public:
    signed int m_type; // offset 0x0, size 0x4
    char m_name[32]; // offset 0x4, size 0x20
    signed int m_init; // offset 0x24, size 0x4
    signed int m_state; // offset 0x28, size 0x4
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
// total size: 0x17C
class zDemo : public xModule {
    // Members
public:
    class zCharacter * m_chars; // offset 0x30, size 0x4
    class zCharacter * m_snacks[40]; // offset 0x34, size 0xA0
    class zCharacter * m_grass[41]; // offset 0xD4, size 0xA4
    signed int m_lastCamera; // offset 0x178, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5E50 -> 0x003A6030
*/
// Range: 0x3A5E50 -> 0x3A6030
signed int main() {
    /* anonymous block */ {
        // Range: 0x3A5E50 -> 0x3A6030
        class zMain * sd2Main; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6030 -> 0x003A609C
*/
// Range: 0x3A6030 -> 0x3A609C
// this: r16
void zMain::render() {
    /* anonymous block */ {
        // Range: 0x3A6030 -> 0x3A609C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A60A0 -> 0x003A6110
*/
// Range: 0x3A60A0 -> 0x3A6110
// this: r16
void zMain::nextFrame() {
    /* anonymous block */ {
        // Range: 0x3A60A0 -> 0x3A6110
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6110 -> 0x003A6170
*/
// Range: 0x3A6110 -> 0x3A6170
// this: r16
void zMain::restart() {
    /* anonymous block */ {
        // Range: 0x3A6110 -> 0x3A6170
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6170 -> 0x003A61D8
*/
// Range: 0x3A6170 -> 0x3A61D8
// this: r16
void zMain::kill() {
    /* anonymous block */ {
        // Range: 0x3A6170 -> 0x3A61D8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zMain.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A61E0 -> 0x003A62E8
*/
// Range: 0x3A61E0 -> 0x3A62E8
// this: r16
void zMain::init() {
    /* anonymous block */ {
        // Range: 0x3A61E0 -> 0x3A62E8
    }
}


