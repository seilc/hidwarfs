/*
    Compile unit: E:\SD2\Game\flat\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/

/*
    Compile unit: E:\SD2\Game\flat\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013D260 -> 0x0013D448
*/
// Range: 0x13D260 -> 0x13D448
signed int xStrParseFloatList(float * dest /* r2 */, char * strbuf /* r2 */, signed int max /* r21 */) {
    /* anonymous block */ {
        // Range: 0x13D260 -> 0x13D448
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
    Code range: 0x0013D450 -> 0x0013D494
*/
// Range: 0x13D450 -> 0x13D494
char * xStrupr(char * string /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13D450 -> 0x13D494
        char * p; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013D4A0 -> 0x0013D59C
*/
// Range: 0x13D4A0 -> 0x13D59C
signed int xStricmp(char * string1 /* r2 */, char * string2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13D4A0 -> 0x13D59C
        signed int result; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0013D5A0 -> 0x0013D6D8
*/
// Range: 0x13D5A0 -> 0x13D6D8
char * xStrTokBuffer(char * string /* r2 */, char * control /* r2 */, void * buffer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13D5A0 -> 0x13D6D8
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
    Code range: 0x0013D6E0 -> 0x0013D80C
*/
// Range: 0x13D6E0 -> 0x13D80C
char * xStrTok(char * string /* r2 */, char * control /* r2 */, char * * nextoken /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13D6E0 -> 0x13D80C
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
    Code range: 0x0013D810 -> 0x0013D85C
*/
// Range: 0x13D810 -> 0x13D85C
unsigned int xStrHash(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x13D810 -> 0x13D85C
        char c; // r2
        unsigned int i; // r2
    }
}


