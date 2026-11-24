/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xString.cpp
*/
// signature: xStrHash(const char *)
// Range: 0x80064720 -> 0x80064760
unsigned int xStrHash() {
    // Local variables
    unsigned int i; // r5

    {
        // Range: 0x80064720 -> 0x80064734
        // Local variables
        char c; // r6
    }
}
// signature: xStrHash(const char *, unsigned long)
// Range: 0x80064760 -> 0x800647B0
unsigned int xStrHash() {
    // Local variables
    unsigned int value; // r6

    {
        // Range: 0x80064764 -> 0x80064778
        // Local variables
        unsigned long i; // r7

        {
            // Range: 0x80064764 -> 0x80064778
            // Local variables
            char c; // r8
        }
    }
}
// signature: xStrHashCat(unsigned int, const char *)
// Range: 0x800647B0 -> 0x800647E8
unsigned int xStrHashCat() {
    // Local variables
    unsigned int i; // r3

    {
        // Range: 0x800647B4 -> 0x800647C0
        // Local variables
        char c; // r6
    }
}
// signature: xStrTok(char *, const char *, char **)
// Range: 0x800647F0 -> 0x80064958
char * xStrTok() {
    // Local variables
    unsigned char * str; // r8
    unsigned char * ctrl; // r4
    unsigned char map[32]; // r1+0x8
    int count; // r0
}
// signature: xStrTokCount(const char *, const char *, unsigned int *)
// Range: 0x80064960 -> 0x80064ADC
unsigned int xStrTokCount() {
    // Local variables
    unsigned int num; // r11
    unsigned int max; // r12
    unsigned int test; // r8
    unsigned char * str; // r9
    unsigned char * ctrl; // r4
    unsigned char map[32]; // r1+0x8
    int count; // r0
}
// signature: xStrTokBuffer(const char *, const char *, void *)
// Range: 0x80064AE0 -> 0x80064C60
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
// Range: 0x80064C60 -> 0x80064D68
int xStricmp() {
    // Local variables
    int result; // r9
}
// signature: xStrupr(char *)
// Range: 0x80064D70 -> 0x80064DB8
char * xStrupr() {
    // Local variables
    char * p; // r6
}
// signature: xStrlwr(char *)
// Range: 0x80064DC0 -> 0x80064E08
char * xStrlwr() {
    // Local variables
    char * p; // r6
}
// signature: xStrParseFloatList(float *, const char *, int)
// Range: 0x80064E10 -> 0x80064FF0
int xStrParseFloatList(float * dest /* r28 */, int max /* r29 */) {
    // Local variables
    char * str; // r31
    int index; // r30
    int digits; // r4
    int negate; // r24
    char * numstart; // r3
}
// signature: xStrParseFloat(const char *)
// Range: 0x80064FF0 -> 0x80065014
float xStrParseFloat() {
}
// signature: imemcmp(const void *, const void *, unsigned long)
// Range: 0x80065020 -> 0x80065070
int imemcmp() {
    // Local variables
    char * s1; // r3
    char * s2; // r4

    {
        // Range: 0x8006502C -> 0x8006505C
        // Local variables
        unsigned long i; // r0
    }
}
// signature: icompare(const substr &, const substr &)
// Range: 0x80065070 -> 0x80065104
int icompare() {
    // Local variables
    unsigned long len; // r0
}
// signature: atox(const substr &, unsigned long &)
// Range: 0x80065110 -> 0x80065230
unsigned int atox() {
    // Local variables
    char * p; // r8
    unsigned long size; // r9
    unsigned int total; // r3

    {
        // Range: 0x800651B0 -> 0x80065208
        // Local variables
        unsigned int v; // r6
        char c; // r5
    }
}
// signature: find_char(const substr &, const substr &)
// Range: 0x80065230 -> 0x80065960
char * find_char() {
    // Local variables
    char * p; // r6
    char * d; // r0

    {
        // Range: 0x80065274 -> 0x80065274
        // Local variables
        int i; // r4
    }
    {
        // Range: 0x800652BC -> 0x800652BC
        // Local variables
        int i; // r4

        {
            // Range: 0x800652BC -> 0x800652BC
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x80065314 -> 0x80065314
        // Local variables
        int i; // r4

        {
            // Range: 0x80065314 -> 0x80065314
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x8006537C -> 0x8006537C
        // Local variables
        int i; // r4

        {
            // Range: 0x8006537C -> 0x8006537C
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x800653F4 -> 0x800653F4
        // Local variables
        int i; // r4

        {
            // Range: 0x800653F4 -> 0x800653F4
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x8006547C -> 0x8006547C
        // Local variables
        int i; // r4

        {
            // Range: 0x8006547C -> 0x8006547C
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x80065514 -> 0x80065514
        // Local variables
        int i; // r4

        {
            // Range: 0x80065514 -> 0x80065514
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x800655BC -> 0x800655BC
        // Local variables
        int i; // r4

        {
            // Range: 0x800655BC -> 0x800655BC
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x80065674 -> 0x80065674
        // Local variables
        int i; // r4

        {
            // Range: 0x80065674 -> 0x80065674
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x8006573C -> 0x8006573C
        // Local variables
        int i; // r4

        {
            // Range: 0x8006573C -> 0x8006573C
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x80065814 -> 0x80065814
        // Local variables
        int i; // r4

        {
            // Range: 0x80065814 -> 0x80065814
            // Local variables
            char c; // r3
        }
    }
    {
        // Range: 0x800658FC -> 0x8006593C
        // Local variables
        int i; // r7

        {
            // Range: 0x80065908 -> 0x80065924
            // Local variables
            char * s; // r8
        }
    }
}
