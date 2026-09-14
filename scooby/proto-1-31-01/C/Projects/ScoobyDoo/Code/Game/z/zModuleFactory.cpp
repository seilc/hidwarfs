/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zModuleFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x24
struct /* @anon1 */ {} zMain::__vtable; // size: 0x24, address: 0x4A27C0
// total size: 0x24
struct /* @anon0 */ {} xModule::__vtable; // size: 0x24, address: 0x4A2790
// total size: 0x30
class xModule {
    // Members
public:
    signed int m_type; // offset 0x0, size 0x4
    char m_name[32]; // offset 0x4, size 0x20
    signed int m_init; // offset 0x24, size 0x4
    signed int m_state; // offset 0x28, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0x24
struct /* @anon0 */ {};
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
// total size: 0x24
struct /* @anon1 */ {};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Game\z\zModuleFactory.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003ED3A0 -> 0x003ED748
*/
// Range: 0x3ED3A0 -> 0x3ED748
class xModule * create(signed int type /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3ED3A0 -> 0x3ED748
        class xModule * m; // r16
    }
}


