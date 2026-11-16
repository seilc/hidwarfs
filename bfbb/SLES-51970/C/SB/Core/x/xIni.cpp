/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BAE28
// total size: 0xC
class xIniSection {
    // Members
public:
    char * sec; // offset 0x0, size 0x4
    signed int first; // offset 0x4, size 0x4
    signed int count; // offset 0x8, size 0x4
};
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
// total size: 0x8
class xIniValue {
    // Members
public:
    char * tok; // offset 0x0, size 0x4
    char * val; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EC0F0 -> 0x001EC1C0
*/
// Range: 0x1EC0F0 -> 0x1EC1C0
char * xIniGetString(class xIniFile * ini /* r20 */, char * tok /* r19 */, char * def /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1EC0F0 -> 0x1EC1C0
    }
}


/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EC1C0 -> 0x001EC2A0
*/
// Range: 0x1EC1C0 -> 0x1EC2A0
float xIniGetFloat(class xIniFile * ini /* r19 */, char * tok /* r18 */, float def /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1EC1C0 -> 0x1EC2A0
    }
}


/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EC2A0 -> 0x001EC378
*/
// Range: 0x1EC2A0 -> 0x1EC378
signed int xIniGetInt(class xIniFile * ini /* r20 */, char * tok /* r19 */, signed int def /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1EC2A0 -> 0x1EC378
    }
}


/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EC380 -> 0x001EC3C8
*/
// Range: 0x1EC380 -> 0x1EC3C8
void xIniDestroy(class xIniFile * ini /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1EC380 -> 0x1EC3C8
    }
}


/*
    Compile unit: C:\SB\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001EC3D0 -> 0x001EC944
*/
// Range: 0x1EC3D0 -> 0x1EC944
class xIniFile * xIniParse(char * buf /* r18 */, signed int len /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1EC3D0 -> 0x1EC944
        signed int i; // r7
        signed int ccr; // r16
        signed int clf; // r6
        signed int copen; // r17
        signed int lastCRLF; // r20
        char * c; // r2
        char * lastLine; // r17
        char * line; // r18
        char * ltoken; // r29+0x6C
        class xIniFile * ini; // r16
    }
}


