/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C7860 -> 0x003C7940
*/
// Range: 0x3C7860 -> 0x3C7940
char * xIniGetString(class xIniFile * ini /* r21 */, char * tok /* r20 */, char * def /* r19 */, signed int & idx /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3C7860 -> 0x3C7940
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C7940 -> 0x003C7A00
*/
// Range: 0x3C7940 -> 0x3C7A00
char * xIniGetString(class xIniFile * ini /* r20 */, char * tok /* r19 */, char * def /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3C7940 -> 0x3C7A00
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C7A00 -> 0x003C7AD0
*/
// Range: 0x3C7A00 -> 0x3C7AD0
float xIniGetFloat(class xIniFile * ini /* r19 */, char * tok /* r18 */, float def /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3C7A00 -> 0x3C7AD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C7AD0 -> 0x003C7B98
*/
// Range: 0x3C7AD0 -> 0x3C7B98
signed int xIniGetInt(class xIniFile * ini /* r20 */, char * tok /* r19 */, signed int def /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3C7AD0 -> 0x3C7B98
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C7BA0 -> 0x003C7BE8
*/
// Range: 0x3C7BA0 -> 0x3C7BE8
void xIniDestroy(class xIniFile * ini /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3C7BA0 -> 0x3C7BE8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xIni.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003C7BF0 -> 0x003C81A0
*/
// Range: 0x3C7BF0 -> 0x3C81A0
class xIniFile * xIniParse(char * buf /* r17 */, signed int len /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3C7BF0 -> 0x3C81A0
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


