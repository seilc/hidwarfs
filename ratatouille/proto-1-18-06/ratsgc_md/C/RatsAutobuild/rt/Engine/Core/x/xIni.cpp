/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xIni.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80040180 -> 0x800407E0
*/
// Range: 0x80040180 -> 0x80040214
static char * TrimWhitespace(char * str /* r31 */) {
    // Local variables
    char * c; // r4
}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
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
// Range: 0x80040214 -> 0x80040540
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

// Range: 0x80040560 -> 0x8004058C
void xIniDestroy(struct xIniFile * ini /* r0 */) {
    // References
    // -> void * RwEngineInstance;
}

// Range: 0x8004058C -> 0x800405FC
int xIniGetIndex(struct xIniFile * ini /* r28 */, const char * tok /* r29 */) {
    // Local variables
    int i; // r30
}

// Range: 0x800405FC -> 0x80040650
int xIniGetInt(struct xIniFile * ini /* r30 */, const char * tok /* r0 */, int def /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80040650 -> 0x800406B8
float xIniGetFloat(struct xIniFile * ini /* r31 */, const char * tok /* r0 */, float def /* f31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x800406B8 -> 0x80040708
char * xIniGetString(struct xIniFile * ini /* r30 */, const char * tok /* r0 */, const char * def /* r31 */) {
    // Local variables
    int index; // r0
}

// Range: 0x80040708 -> 0x80040778
int xIniGetIndex(struct xIniFile * ini /* r28 */, const char * tok /* r29 */, int idx /* r5 */) {
    // Local variables
    int i; // r30
}

// Range: 0x80040778 -> 0x800407E0
char * xIniGetString(struct xIniFile * ini /* r29 */, const char * tok /* r0 */, const char * def /* r30 */, int & idx /* r31 */) {}


