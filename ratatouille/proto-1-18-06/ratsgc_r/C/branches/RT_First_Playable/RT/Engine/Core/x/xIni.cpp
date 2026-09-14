/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xIni.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800740FC -> 0x80074800
*/
static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFD0B8
// Range: 0x800740FC -> 0x800741D8
static char * TrimWhitespace(char * str /* r31 */) {
    // Local variables
    char * c; // r4

    // References
    // -> static char __FUNCTION__[15];
}

void * RwEngineInstance; // size: 0x4, address: 0x80C09F34
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
// Range: 0x800741D8 -> 0x80074510
struct xIniFile * xIniParse(char * buf /* r26 */, int len /* r27 */) {
    // Local variables
    int i; // r4
    int ccr; // r31
    int clf; // r5
    int copen; // r30
    int lastCRLF; // r29
    char * c; // r0
    char * tok; // r0
    char * val; // r0
    char * lastLine; // r30
    char * line; // r27
    char * ltoken; // r1+0x8
    struct xIniFile * ini; // r28

    // References
    // -> void * RwEngineInstance;
}

// Range: 0x80074530 -> 0x8007455C
void xIniDestroy(struct xIniFile * ini /* r0 */) {
    // References
    // -> void * RwEngineInstance;
}

// Range: 0x8007455C -> 0x800745E4
int xIniGetIndex(struct xIniFile * ini /* r28 */, const char * tok /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800745E4 -> 0x80074640
int xIniGetInt(struct xIniFile * ini /* r30 */, const char * tok /* r0 */, int def /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80074640 -> 0x800746A8
float xIniGetFloat(struct xIniFile * ini /* r31 */, const char * tok /* r0 */, float def /* f31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x800746A8 -> 0x80074700
char * xIniGetString(struct xIniFile * ini /* r30 */, const char * tok /* r0 */, const char * def /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80074700 -> 0x80074788
int xIniGetIndex(struct xIniFile * ini /* r28 */, const char * tok /* r29 */, int idx /* r5 */) {
    // Local variables
    int i; // r30
}

// Range: 0x80074788 -> 0x80074800
char * xIniGetString(struct xIniFile * ini /* r29 */, const char * tok /* r0 */, const char * def /* r30 */, int & idx /* r31 */) {}


