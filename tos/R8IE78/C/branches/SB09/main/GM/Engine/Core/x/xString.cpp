/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xString.cpp
*/
// signature: xStrHash(const char *)
// Range: 0x80045770 -> 0x800457B0
unsigned int xStrHash() {
    // Local variables
    unsigned int i; // r5

    {
        // Range: 0x80045770 -> 0x800457A8
        // Local variables
        char c; // r6
    }
}
// signature: xStrHash(const char *, unsigned long)
// Range: 0x800457B0 -> 0x80045800
unsigned int xStrHash() {
    // Local variables
    unsigned int value; // r6

    {
        // Range: 0x800457B4 -> 0x800457F8
        // Local variables
        unsigned long i; // r7

        {
            // Range: 0x800457B4 -> 0x800457F8
            // Local variables
            char c; // r8
        }
    }
}
// signature: xStrTok(char *, const char *, char **)
// Range: 0x80045800 -> 0x800458FC
char * xStrTok() {
    // Local variables
    unsigned char * str; // r8
    unsigned char * ctrl; // r4
    unsigned char map[32]; // r1+0x8
    int count; // r0
}
// signature: xStrTokCount(const char *, const char *, unsigned int *)
// Range: 0x80045900 -> 0x80045A0C
unsigned int xStrTokCount() {
    // Local variables
    unsigned int num; // r6
    unsigned int max; // r0
    unsigned int test; // r10
    unsigned char * str; // r11
    unsigned char * ctrl; // r4
    unsigned char map[32]; // r1+0x8
    int count; // r0
}
// signature: xStrTokBuffer(const char *, const char *, void *)
// Range: 0x80045A10 -> 0x80045B20
char * xStrTokBuffer() {
    // Local variables
    char * * nextoken; // r0
    char * dest; // r6
    unsigned char * str; // r10
    unsigned char * ctrl; // r4
    unsigned char map[32]; // r1+0x8
    int count; // r0
}
// signature: xStricmp(const char *, const char *)
// Range: 0x80045B20 -> 0x80045C28
int xStricmp() {
    // Local variables
    int result; // r9
}
// signature: xStrupr(char *)
// Range: 0x80045C30 -> 0x80045C78
char * xStrupr() {
    // Local variables
    char * p; // r6
}
// signature: xStrlwr(char *)
// Range: 0x80045C80 -> 0x80045CC8
char * xStrlwr() {
    // Local variables
    char * p; // r6
}
// signature: xStrParseFloatList(float *, const char *, int)
// Range: 0x80045CD0 -> 0x80045EAC
int xStrParseFloatList(float * dest /* r28 */, int max /* r29 */) {
    // Local variables
    char * str; // r31
    int index; // r30
    int digits; // r4
    int negate; // r24
    char * numstart; // r3
}
// signature: xStrParseFloat(const char *)
// Range: 0x80045EB0 -> 0x80045ED4
float xStrParseFloat() {
}
// signature: imemcmp(const void *, const void *, unsigned long)
// Range: 0x80045EE0 -> 0x80045F30
int imemcmp() {
    // Local variables
    char * s1; // r3
    char * s2; // r4

    {
        // Range: 0x80045EEC -> 0x80045F28
        // Local variables
        unsigned long i; // r0
    }
}
// Range: 0x80045F30 -> 0x80045FAC
int icompare(class substr & s1 /* r30 */, class substr & s2 /* r31 */) {
    // Local variables
    int c; // r0
}
// signature: atox(const substr &, unsigned long &)
// Range: 0x80045FB0 -> 0x8004609C
unsigned int atox(unsigned long & read_size /* r29 */) {
    // Local variables
    char * p; // r31
    unsigned long size; // r30
    unsigned int total; // r3

    {
        // Range: 0x80046010 -> 0x80046088
        // Local variables
        unsigned int v; // r5
        char c; // r4
    }
}
// signature: find_char(const substr &, const substr &)
// Range: 0x800460A0 -> 0x8004679C
char * find_char() {
    // Local variables
    char * p; // r6
    char * d; // r0

    {
        // Range: 0x800460E4 -> 0x800460E4
        // Local variables
        int i; // r4
    }
    {
        // Range: 0x80046128 -> 0x80046128
        // Local variables
        int i; // r4

        {
            // Range: 0x80046128 -> 0x80046128
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x8004617C -> 0x8004617C
        // Local variables
        int i; // r4

        {
            // Range: 0x8004617C -> 0x8004617C
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x800461E0 -> 0x800461E0
        // Local variables
        int i; // r4

        {
            // Range: 0x800461E0 -> 0x800461E0
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x80046254 -> 0x80046254
        // Local variables
        int i; // r4

        {
            // Range: 0x80046254 -> 0x80046254
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x800462D8 -> 0x800462D8
        // Local variables
        int i; // r4

        {
            // Range: 0x800462D8 -> 0x800462D8
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x8004636C -> 0x8004636C
        // Local variables
        int i; // r4

        {
            // Range: 0x8004636C -> 0x8004636C
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x80046410 -> 0x80046410
        // Local variables
        int i; // r4

        {
            // Range: 0x80046410 -> 0x80046410
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x800464C4 -> 0x800464C4
        // Local variables
        int i; // r4

        {
            // Range: 0x800464C4 -> 0x800464C4
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x80046588 -> 0x80046588
        // Local variables
        int i; // r4

        {
            // Range: 0x80046588 -> 0x80046588
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x8004665C -> 0x8004665C
        // Local variables
        int i; // r4

        {
            // Range: 0x8004665C -> 0x8004665C
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x80046740 -> 0x80046794
        // Local variables
        int i; // r7

        {
            // Range: 0x80046748 -> 0x80046794
            // Local variables
            char * s; // r8
        }
    }
}
