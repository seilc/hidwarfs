/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\plcore\rwstring.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8043BB60 -> 0x8043C704
*/
static char nullString[1]; // size: 0x1, address: 0x80D71FC0
static char __dbFunctionName[8]; // size: 0x8, address: 0x80D71FC1
// Range: 0x8043BB60 -> 0x8043BC48
static int StrICmp(const char * s1 /* r3 */, const char * s2 /* r4 */) {
    // Local variables
    char c1; // r31
    char c2; // r30

    // References
    // -> static char __dbFunctionName[8];
}

static char __dbFunctionName[7]; // size: 0x7, address: 0x80D71FC9
// Range: 0x8043BC48 -> 0x8043BCBC
static char * StrUpr(char * s /* r3 */) {
    // Local variables
    char * p; // r31
    char c; // r30

    // References
    // -> static char __dbFunctionName[7];
}

static char __dbFunctionName[7]; // size: 0x7, address: 0x80D71FD0
// Range: 0x8043BCBC -> 0x8043BD30
static char * StrLwr(char * s /* r3 */) {
    // Local variables
    char * p; // r31
    char c; // r30

    // References
    // -> static char __dbFunctionName[7];
}

static char __dbFunctionName[7]; // size: 0x7, address: 0x80D71FD7
union RwPtrChar {
    char * ptrChar; // offset 0x0, size 0x4
    const char * constptrChar; // offset 0x0, size 0x4
};
// Range: 0x8043BD30 -> 0x8043BDDC
static char * StrChr(const char * s /* r31 */, int c /* r1+0x8 */) {
    // Local variables
    union RwPtrChar result; // r1+0xC
    char match; // r29
    char ch; // r30

    // References
    // -> static char __dbFunctionName[7];
}

static char __dbFunctionName[8]; // size: 0x8, address: 0x80D71FDE
// Range: 0x8043BDDC -> 0x8043BE84
static char * StrRChr(const char * s /* r31 */, int c /* r1+0x8 */) {
    // Local variables
    union RwPtrChar result; // r1+0xC
    char match; // r29
    char ch; // r30

    // References
    // -> static char __dbFunctionName[8];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ED150
// Range: 0x8043BE84 -> 0x8043BFB4
int _rwStringOpen() {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ED15E
// Range: 0x8043BFB4 -> 0x8043BFD0
void _rwStringClose() {
    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ED16D
// Range: 0x8043BFD0 -> 0x8043C038
unsigned int _rwStringStreamGetSize(const char * string /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char nullString[1];
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804ED184
// Range: 0x8043C038 -> 0x8043C114
char * _rwStringStreamWrite(const char * string /* r31 */, struct RwStream * stream /* r29 */) {
    // Local variables
    unsigned int stringSize; // r30

    // References
    // -> static char nullString[1];
    // -> static char __dbFunctionName[21];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804ED199
// Range: 0x8043C114 -> 0x8043C310
static char * StringStreamRead(char * nativeString /* r27 */, struct RwStream * stream /* r24 */, unsigned int length /* r31 */) {
    // Local variables
    char multiByteString[64]; // r1+0x80
    char * baseString; // r28
    int mallocced; // r1+0x40
    struct RwError _rwErrorCode; // r1+0x44
    unsigned int bytesToRead; // r29
    unsigned int i; // r30

    // References
    // -> static char __dbFunctionName[17];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ED1AA
// Range: 0x8043C310 -> 0x8043C530
static char * UnicodeStringStreamRead(char * nativeString /* r29 */, struct RwStream * stream /* r22 */, unsigned int length /* r31 */) {
    // Local variables
    unsigned short uniCodeString[64]; // r1+0x80
    char * baseString; // r28
    int mallocced; // r26
    struct RwError _rwErrorCode; // r1+0x40
    unsigned int bytesToRead; // r27
    unsigned int i; // r30
    unsigned int CharCount; // r25

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[24];
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804ED1C2
// Range: 0x8043C530 -> 0x8043C704
char * _rwStringStreamFindAndRead(char * string /* r28 */, struct RwStream * stream /* r31 */) {
    // Local variables
    unsigned int type; // r1+0x10
    unsigned int length; // r1+0xC
    unsigned int version; // r1+0x8
    int valid; // r29
    struct RwError _rwErrorCode; // r1+0x14

    // References
    // -> static char __dbFunctionName[27];
}


