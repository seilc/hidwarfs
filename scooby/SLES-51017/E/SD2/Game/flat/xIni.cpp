/*
    Compile unit: E:\SD2\Game\flat\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x214
class xIniFile {
    // Members
public:
    signed int NumValues; // offset 0x0, size 0x4
    signed int NumSections; // offset 0x4, size 0x4
    class xIniValue * Values; // offset 0x8, size 0x4
    class xIniSection * Sections; // offset 0xC, size 0x4
    void * mem; // offset 0x10, size 0x4
    char name[256]; // offset 0x14, size 0x100
    char pathname[256]; // offset 0x114, size 0x100
};
// total size: 0xC
class xIniSection {
    // Members
public:
    char * sec; // offset 0x0, size 0x4
    signed int first; // offset 0x4, size 0x4
    signed int count; // offset 0x8, size 0x4
};
// total size: 0x8
class xIniValue {
    // Members
public:
    char * tok; // offset 0x0, size 0x4
    char * val; // offset 0x4, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001881E0 -> 0x0018829C
*/
// Range: 0x1881E0 -> 0x18829C
char * xIniGetString(class xIniFile * ini /* r20 */, char * tok /* r19 */, char * def /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1881E0 -> 0x18829C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001882A0 -> 0x00188364
*/
// Range: 0x1882A0 -> 0x188364
float xIniGetFloat(class xIniFile * ini /* r19 */, char * tok /* r18 */, float def /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1882A0 -> 0x188364
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00188370 -> 0x0018842C
*/
// Range: 0x188370 -> 0x18842C
signed int xIniGetInt(class xIniFile * ini /* r20 */, char * tok /* r19 */, signed int def /* r18 */) {
    /* anonymous block */ {
        // Range: 0x188370 -> 0x18842C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00188430 -> 0x00188460
*/
// Range: 0x188430 -> 0x188460
void xIniDestroy(class xIniFile * ini /* r16 */) {
    /* anonymous block */ {
        // Range: 0x188430 -> 0x188460
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00188460 -> 0x00188990
*/
// Range: 0x188460 -> 0x188990
class xIniFile * xIniParse(char * buf /* r16 */, signed int len /* r21 */) {
    /* anonymous block */ {
        // Range: 0x188460 -> 0x188990
        class xIniFile * ini; // r20
        char * ltoken; // r29+0x7C
        char * line; // r2
        char * lastLine; // r17
        char * c; // r2
        signed int lastCRLF; // r19
        signed int copen; // r18
        signed int clf; // r5
        signed int ccr; // r17
        signed int i; // r4
    }
}


