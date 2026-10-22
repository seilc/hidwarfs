/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
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
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFAD0 -> 0x001C003C
*/
// Range: 0x1BFAD0 -> 0x1C003C
char * find_char(class substr & s /* r2 */, class substr & cs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BFAD0 -> 0x1C003C
        char * p; // r2
        char * d; // r2
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
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0040 -> 0x001C0104
*/
// Range: 0x1C0040 -> 0x1C0104
unsigned int atox(class substr & s /* r2 */, unsigned int & read_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0040 -> 0x1C0104
        char * p; // r7
        unsigned int size; // r6
        unsigned int total; // r2
        unsigned int v; // r3
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0110 -> 0x001C01C8
*/
// Range: 0x1C0110 -> 0x1C01C8
signed int icompare(class substr & s1 /* r2 */, class substr & s2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0110 -> 0x1C01C8
        unsigned int len; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C01D0 -> 0x001C022C
*/
// Range: 0x1C01D0 -> 0x1C022C
signed int imemcmp(void * d1 /* r2 */, void * d2 /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C01D0 -> 0x1C022C
        char * s1; // r2
        char * s2; // r2
        unsigned int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0230 -> 0x001C0448
*/
// Range: 0x1C0230 -> 0x1C0448
signed int xStrParseFloatList(float * dest /* r2 */, char * strbuf /* r2 */, signed int max /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1C0230 -> 0x1C0448
        char * str; // r20
        signed int index; // r19
        signed int digits; // r8
        signed int negate; // r18
        char * numstart; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0450 -> 0x001C04A8
*/
// Range: 0x1C0450 -> 0x1C04A8
char * xStrupr(char * string /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0450 -> 0x1C04A8
        char * p; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C04B0 -> 0x001C0544
*/
// Range: 0x1C04B0 -> 0x1C0544
signed int xMemicmp(void * string1 /* r2 */, void * string2 /* r2 */, unsigned int chars /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C04B0 -> 0x1C0544
        char * str1; // r2
        char * str2; // r2
        signed int ret; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0550 -> 0x001C065C
*/
// Range: 0x1C0550 -> 0x1C065C
signed int xStricmp(char * string1 /* r2 */, char * string2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0550 -> 0x1C065C
        signed int result; // r11
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0660 -> 0x001C0744
*/
// Range: 0x1C0660 -> 0x1C0744
char * xStristr(char * str1 /* r2 */, char * str2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0660 -> 0x1C0744
        char * cp; // r2
        char * s1; // r10
        char * s2; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0750 -> 0x001C0888
*/
// Range: 0x1C0750 -> 0x1C0888
char * xStrTokBuffer(char * string /* r2 */, char * control /* r2 */, void * buffer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0750 -> 0x1C0888
        char * * nextoken; // r2
        char * dest; // r7
        unsigned char * str; // r3
        unsigned char * ctrl; // r2
        unsigned char map[32]; // r29
        signed int count; // r8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0890 -> 0x001C09DC
*/
// Range: 0x1C0890 -> 0x1C09DC
unsigned int xStrTokCount(char * string /* r2 */, char * control /* r2 */, unsigned int * maxsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0890 -> 0x1C09DC
        unsigned int num; // r2
        unsigned int max; // r7
        unsigned int test; // r10
        unsigned char * str; // r3
        unsigned char * ctrl; // r2
        unsigned char map[32]; // r29
        signed int count; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C09E0 -> 0x001C0B08
*/
// Range: 0x1C09E0 -> 0x1C0B08
char * xStrTok(char * string /* r2 */, char * control /* r2 */, char * * nextoken /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C09E0 -> 0x1C0B08
        unsigned char * str; // r7
        unsigned char * ctrl; // r2
        unsigned char map[32]; // r29
        signed int count; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0B10 -> 0x001C0B60
*/
// Range: 0x1C0B10 -> 0x1C0B60
unsigned int xStrHashCat(unsigned int prefix /* r2 */, char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0B10 -> 0x1C0B60
        unsigned int i; // r2
        char c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0B60 -> 0x001C0BC8
*/
// Range: 0x1C0B60 -> 0x1C0BC8
unsigned int xStrHash(char * s /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0B60 -> 0x1C0BC8
        unsigned int value; // r2
        unsigned int i; // r8
        char c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0BD0 -> 0x001C0C20
*/
// Range: 0x1C0BD0 -> 0x1C0C20
unsigned int xStrHash(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0BD0 -> 0x1C0C20
        unsigned int i; // r2
        char c; // r2
    }
}


