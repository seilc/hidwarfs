/*
    Compile unit: C:\TestBuild\in\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
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
    Compile unit: C:\TestBuild\in\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019A090 -> 0x0019A170
*/
// Range: 0x19A090 -> 0x19A170
char * xIniGetString(class xIniFile * ini /* r21 */, char * tok /* r20 */, char * def /* r19 */, signed int & idx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x19A090 -> 0x19A170
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019A170 -> 0x0019A230
*/
// Range: 0x19A170 -> 0x19A230
char * xIniGetString(class xIniFile * ini /* r20 */, char * tok /* r19 */, char * def /* r18 */) {
    /* anonymous block */ {
        // Range: 0x19A170 -> 0x19A230
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019A230 -> 0x0019A300
*/
// Range: 0x19A230 -> 0x19A300
float xIniGetFloat(class xIniFile * ini /* r19 */, char * tok /* r18 */, float def /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19A230 -> 0x19A300
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019A300 -> 0x0019A3C8
*/
// Range: 0x19A300 -> 0x19A3C8
signed int xIniGetInt(class xIniFile * ini /* r20 */, char * tok /* r19 */, signed int def /* r18 */) {
    /* anonymous block */ {
        // Range: 0x19A300 -> 0x19A3C8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019A3D0 -> 0x0019A418
*/
// Range: 0x19A3D0 -> 0x19A418
void xIniDestroy(class xIniFile * ini /* r17 */) {
    /* anonymous block */ {
        // Range: 0x19A3D0 -> 0x19A418
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019A420 -> 0x0019A9D0
*/
// Range: 0x19A420 -> 0x19A9D0
class xIniFile * xIniParse(char * buf /* r17 */, signed int len /* r20 */) {
    /* anonymous block */ {
        // Range: 0x19A420 -> 0x19A9D0
        signed int i; // r7
        signed int ccr; // r19
        signed int clf; // r6
        signed int copen; // r16
        signed int lastCRLF; // r18
        char * c; // r2
        char * lastLine; // r16
        char * line; // r17
        char * ltoken; // r29+0x6C
        class xIniFile * ini; // r19
    }
}


