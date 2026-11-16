/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D5A0 -> 0x0020DC10
*/
// Range: 0x20D5A0 -> 0x20DC10
char * find_char(class substr & s /* r2 */, class substr & cs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20D5A0 -> 0x20DC10
        char * p; // r2
        char * d; // r3
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r6
        signed int i; // r7
        char * s; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020DC10 -> 0x0020DCD8
*/
// Range: 0x20DC10 -> 0x20DCD8
unsigned int atox(class substr & s /* r2 */, unsigned int & read_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20DC10 -> 0x20DCD8
        char * p; // r7
        unsigned int size; // r6
        unsigned int total; // r2
        unsigned int v; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020DCE0 -> 0x0020DDA0
*/
// Range: 0x20DCE0 -> 0x20DDA0
signed int icompare(class substr & s1 /* r2 */, class substr & s2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20DCE0 -> 0x20DDA0
        unsigned int len; // r11
    }
}


/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020DDA0 -> 0x0020DE08
*/
// Range: 0x20DDA0 -> 0x20DE08
signed int imemcmp(void * d1 /* r2 */, void * d2 /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20DDA0 -> 0x20DE08
        char * s1; // r2
        char * s2; // r2
        unsigned int i; // r9
    }
}


/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020DE10 -> 0x0020E01C
*/
// Range: 0x20DE10 -> 0x20E01C
signed int xStrParseFloatList(float * dest /* r2 */, char * strbuf /* r2 */, signed int max /* r21 */) {
    /* anonymous block */ {
        // Range: 0x20DE10 -> 0x20E01C
        char * str; // r20
        signed int index; // r19
        signed int digits; // r6
        signed int negate; // r18
        char * numstart; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E020 -> 0x0020E078
*/
// Range: 0x20E020 -> 0x20E078
char * xStrupr(char * string /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E020 -> 0x20E078
        char * p; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E080 -> 0x0020E180
*/
// Range: 0x20E080 -> 0x20E180
signed int xStricmp(char * string1 /* r2 */, char * string2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E080 -> 0x20E180
        signed int result; // r9
    }
}


/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E180 -> 0x0020E2D0
*/
// Range: 0x20E180 -> 0x20E2D0
char * xStrTokBuffer(char * string /* r2 */, char * control /* r2 */, void * buffer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E180 -> 0x20E2D0
        char * * nextoken; // r2
        char * dest; // r7
        unsigned char * str; // r3
        unsigned char * ctrl; // r2
        unsigned char map[32]; // r29
        signed int count; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E2D0 -> 0x0020E410
*/
// Range: 0x20E2D0 -> 0x20E410
char * xStrTok(char * string /* r2 */, char * control /* r2 */, char * * nextoken /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E2D0 -> 0x20E410
        unsigned char * str; // r7
        unsigned char * ctrl; // r2
        unsigned char map[32]; // r29
        signed int count; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E410 -> 0x0020E468
*/
// Range: 0x20E410 -> 0x20E468
unsigned int xStrHashCat(unsigned int prefix /* r2 */, char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E410 -> 0x20E468
        unsigned int i; // r2
        char c; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E470 -> 0x0020E4D8
*/
// Range: 0x20E470 -> 0x20E4D8
unsigned int xStrHash(char * s /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E470 -> 0x20E4D8
        unsigned int value; // r2
        unsigned int i; // r8
        char c; // r7
    }
}


/*
    Compile unit: C:\SB\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020E4E0 -> 0x0020E538
*/
// Range: 0x20E4E0 -> 0x20E538
unsigned int xStrHash(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20E4E0 -> 0x20E538
        unsigned int i; // r2
        char c; // r6
    }
}


