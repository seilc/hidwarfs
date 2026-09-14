/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xIni.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80089298 -> 0x80089A20
*/
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D5FC18
// Range: 0x80089298 -> 0x80089390
static char * TrimWhitespace(char * str /* r31 */) {
    // Local variables
    char * c; // r30

    // References
    // -> static char __FUNCTION__[15];
}

const char * _rwMemoryLastAllocFile; // size: 0x4, address: 0x80D6C318
unsigned int _rwMemoryLastAllocLine; // size: 0x4, address: 0x80D6C31C
void * RwEngineInstance; // size: 0x4, address: 0x80D6C374
// total size: 0x8
struct xIniValue {
    // Members
    const char * tok; // offset 0x0, size 0x4
    const char * val; // offset 0x4, size 0x4
};
// total size: 0xC
struct xIniSection {
    // Members
    const char * sec; // offset 0x0, size 0x4
    int first; // offset 0x4, size 0x4
    int count; // offset 0x8, size 0x4
};
// total size: 0x210
struct xIniFile {
    // Members
    int NumValues; // offset 0x0, size 0x4
    int NumSections; // offset 0x4, size 0x4
    struct xIniValue * Values; // offset 0x8, size 0x4
    struct xIniSection * Sections; // offset 0xC, size 0x4
    char name[256]; // offset 0x10, size 0x100
    char pathname[256]; // offset 0x110, size 0x100
};
// Range: 0x80089390 -> 0x8008971C
struct xIniFile * xIniParse(char * buf /* r25 */, int len /* r20 */) {
    // Local variables
    int valueAlloc; // r19
    int sectionAlloc; // r18
    int i; // r26
    int ccr; // r24
    int clf; // r23
    int copen; // r22
    int lastCRLF; // r28
    char * c; // r29
    char * tok; // r21
    char * val; // r17
    char * lastLine; // r27
    char * line; // r30
    char * ltoken; // r1+0xC
    struct xIniFile * ini; // r31

    // References
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

// Range: 0x8008974C -> 0x80089780
void xIniDestroy(struct xIniFile * ini /* r1+0x8 */) {
    // References
    // -> void * RwEngineInstance;
}

// Range: 0x80089780 -> 0x800897F4
int xIniGetIndex(struct xIniFile * ini /* r30 */, const char * tok /* r1+0x8 */) {
    // Local variables
    int i; // r31
}

// Range: 0x800897F4 -> 0x8008985C
int xIniGetInt(struct xIniFile * ini /* r30 */, const char * tok /* r1+0x8 */, int def /* r1+0xC */) {
    // Local variables
    int index; // r31
}

// Range: 0x8008985C -> 0x800898C8
float xIniGetFloat(struct xIniFile * ini /* r30 */, const char * tok /* r1+0x8 */, float def /* r1+0xC */) {
    // Local variables
    int index; // r31
}

// Range: 0x800898C8 -> 0x8008992C
char * xIniGetString(struct xIniFile * ini /* r30 */, const char * tok /* r1+0x8 */, const char * def /* r1+0xC */) {
    // Local variables
    int index; // r31
}

// Range: 0x8008992C -> 0x800899A4
int xIniGetIndex(struct xIniFile * ini /* r30 */, const char * tok /* r1+0x8 */, int idx /* r1+0xC */) {
    // Local variables
    int i; // r31
}

// Range: 0x800899A4 -> 0x80089A20
char * xIniGetString(struct xIniFile * ini /* r30 */, const char * tok /* r1+0x8 */, const char * def /* r1+0xC */, int & idx /* r31 */) {}


