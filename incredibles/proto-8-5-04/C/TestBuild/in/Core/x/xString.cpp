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
    Code range: 0x001BF040 -> 0x001BF5AC
*/
// Range: 0x1BF040 -> 0x1BF5AC
char * find_char(class substr & s /* r2 */, class substr & cs /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF040 -> 0x1BF5AC
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
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF5B0 -> 0x001BF674
*/
// Range: 0x1BF5B0 -> 0x1BF674
unsigned int atox(class substr & s /* r2 */, unsigned int & read_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF5B0 -> 0x1BF674
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
    Code range: 0x001BF680 -> 0x001BF738
*/
// Range: 0x1BF680 -> 0x1BF738
signed int icompare(class substr & s1 /* r2 */, class substr & s2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF680 -> 0x1BF738
        unsigned int len; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF740 -> 0x001BF79C
*/
// Range: 0x1BF740 -> 0x1BF79C
signed int imemcmp(void * d1 /* r2 */, void * d2 /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF740 -> 0x1BF79C
        char * s1; // r2
        char * s2; // r2
        unsigned int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BF7A0 -> 0x001BF9B8
*/
// Range: 0x1BF7A0 -> 0x1BF9B8
signed int xStrParseFloatList(float * dest /* r2 */, char * strbuf /* r2 */, signed int max /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1BF7A0 -> 0x1BF9B8
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
    Code range: 0x001BF9C0 -> 0x001BFA18
*/
// Range: 0x1BF9C0 -> 0x1BFA18
char * xStrupr(char * string /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BF9C0 -> 0x1BFA18
        char * p; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFA20 -> 0x001BFAB4
*/
// Range: 0x1BFA20 -> 0x1BFAB4
signed int xMemicmp(void * string1 /* r2 */, void * string2 /* r2 */, unsigned int chars /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BFA20 -> 0x1BFAB4
        char * str1; // r2
        char * str2; // r2
        signed int ret; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFAC0 -> 0x001BFBCC
*/
// Range: 0x1BFAC0 -> 0x1BFBCC
signed int xStricmp(char * string1 /* r2 */, char * string2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BFAC0 -> 0x1BFBCC
        signed int result; // r11
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFBD0 -> 0x001BFCB4
*/
// Range: 0x1BFBD0 -> 0x1BFCB4
char * xStristr(char * str1 /* r2 */, char * str2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BFBD0 -> 0x1BFCB4
        char * cp; // r2
        char * s1; // r10
        char * s2; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BFCC0 -> 0x001BFDF8
*/
// Range: 0x1BFCC0 -> 0x1BFDF8
char * xStrTokBuffer(char * string /* r2 */, char * control /* r2 */, void * buffer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BFCC0 -> 0x1BFDF8
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
    Code range: 0x001BFE00 -> 0x001BFF4C
*/
// Range: 0x1BFE00 -> 0x1BFF4C
unsigned int xStrTokCount(char * string /* r2 */, char * control /* r2 */, unsigned int * maxsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BFE00 -> 0x1BFF4C
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
    Code range: 0x001BFF50 -> 0x001C0078
*/
// Range: 0x1BFF50 -> 0x1C0078
char * xStrTok(char * string /* r2 */, char * control /* r2 */, char * * nextoken /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BFF50 -> 0x1C0078
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
    Code range: 0x001C0080 -> 0x001C00D0
*/
// Range: 0x1C0080 -> 0x1C00D0
unsigned int xStrHashCat(unsigned int prefix /* r2 */, char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0080 -> 0x1C00D0
        unsigned int i; // r2
        char c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C00D0 -> 0x001C0138
*/
// Range: 0x1C00D0 -> 0x1C0138
unsigned int xStrHash(char * s /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C00D0 -> 0x1C0138
        unsigned int value; // r2
        unsigned int i; // r8
        char c; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xString.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C0140 -> 0x001C0190
*/
// Range: 0x1C0140 -> 0x1C0190
unsigned int xStrHash(char * str /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C0140 -> 0x1C0190
        unsigned int i; // r2
        char c; // r2
    }
}


