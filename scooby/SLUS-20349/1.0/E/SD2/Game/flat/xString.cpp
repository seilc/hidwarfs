/*
    Compile unit: E:\SD2\Game\flat\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/

/*
    Compile unit: E:\SD2\Game\flat\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013CD80 -> 0x0013CF68
*/
// Range: 0x13CD80 -> 0x13CF68
signed int xStrParseFloatList(float * dest /* r2 */, char * strbuf /* r2 */, signed int max /* r21 */) {
    /* anonymous block */ {
        // Range: 0x13CD80 -> 0x13CF68
        char * numstart; // r2
        signed int negate; // r18
        signed int digits; // r3
        signed int index; // r17
        char * str; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013CF70 -> 0x0013CFB4
*/
// Range: 0x13CF70 -> 0x13CFB4
char * xStrupr(char * string /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13CF70 -> 0x13CFB4
        char * p; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013CFC0 -> 0x0013D0BC
*/
// Range: 0x13CFC0 -> 0x13D0BC
signed int xStricmp(char * string1 /* r2 */, char * string2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13CFC0 -> 0x13D0BC
        signed int result; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013D0C0 -> 0x0013D1F8
*/
// Range: 0x13D0C0 -> 0x13D1F8
char * xStrTokBuffer(char * string /* r2 */, char * control /* r2 */, void * buffer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13D0C0 -> 0x13D1F8
        signed int count; // r7
        unsigned char map[32]; // r29
        unsigned char * ctrl; // r2
        unsigned char * str; // r8
        char * dest; // r2
        char * * nextoken; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013D200 -> 0x0013D32C
*/
// Range: 0x13D200 -> 0x13D32C
char * xStrTok(char * string /* r2 */, char * control /* r2 */, char * * nextoken /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13D200 -> 0x13D32C
        signed int count; // r3
        unsigned char map[32]; // r29
        unsigned char * ctrl; // r2
        unsigned char * str; // r7
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013D330 -> 0x0013D37C
*/
// Range: 0x13D330 -> 0x13D37C
unsigned int xStrHash(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13D330 -> 0x13D37C
        char c; // r2
        unsigned int i; // r2
    }
}


