/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\OSFont.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D28A4 -> 0x803D32DC
*/
static unsigned short FontEncode; // size: 0x2, address: 0x80D68208
// total size: 0x30
struct OSFontHeader {
    // Members
    unsigned short fontType; // offset 0x0, size 0x2
    unsigned short firstChar; // offset 0x2, size 0x2
    unsigned short lastChar; // offset 0x4, size 0x2
    unsigned short invalChar; // offset 0x6, size 0x2
    unsigned short ascent; // offset 0x8, size 0x2
    unsigned short descent; // offset 0xA, size 0x2
    unsigned short width; // offset 0xC, size 0x2
    unsigned short leading; // offset 0xE, size 0x2
    unsigned short cellWidth; // offset 0x10, size 0x2
    unsigned short cellHeight; // offset 0x12, size 0x2
    unsigned long sheetSize; // offset 0x14, size 0x4
    unsigned short sheetFormat; // offset 0x18, size 0x2
    unsigned short sheetColumn; // offset 0x1A, size 0x2
    unsigned short sheetRow; // offset 0x1C, size 0x2
    unsigned short sheetWidth; // offset 0x1E, size 0x2
    unsigned short sheetHeight; // offset 0x20, size 0x2
    unsigned short widthTable; // offset 0x22, size 0x2
    unsigned long sheetImage; // offset 0x24, size 0x4
    unsigned long sheetFullSize; // offset 0x28, size 0x4
    unsigned char c0; // offset 0x2C, size 0x1
    unsigned char c1; // offset 0x2D, size 0x1
    unsigned char c2; // offset 0x2E, size 0x1
    unsigned char c3; // offset 0x2F, size 0x1
};
static struct OSFontHeader * FontDataAnsi; // size: 0x4, address: 0x80D6C0E0
static struct OSFontHeader * FontDataSjis; // size: 0x4, address: 0x80D6C0E4
static char * (* ParseString)(unsigned short, char *, struct OSFontHeader * *, int *); // size: 0x4, address: 0x80D6C0E8
static unsigned short HankakuToCode[192]; // size: 0x180, address: 0x8054A970
static unsigned short Zenkaku2Code[1221]; // size: 0x98A, address: 0x8054AAF0
// Range: 0x803D28A4 -> 0x803D28E4
static int IsSjisLeadByte(unsigned char c /* r3 */) {}

// Range: 0x803D28E4 -> 0x803D2918
static int IsSjisTrailByte(unsigned char c /* r3 */) {}

// Range: 0x803D2918 -> 0x803D2A78
static int GetFontCode(unsigned short encode /* r1+0x8 */, unsigned short code /* r31 */) {
    // Local variables
    int i; // r28
    int j; // r30
    int i; // r27
    int j; // r29

    // References
    // -> static unsigned short Zenkaku2Code[1221];
    // -> static unsigned short HankakuToCode[192];
}

// Range: 0x803D2A78 -> 0x803D2B48
static void Decode(unsigned char * s /* r3 */, unsigned char * d /* r4 */) {
    // Local variables
    int i; // r27
    int j; // r26
    int k; // r25
    int p; // r24
    int q; // r31
    int r7; // r29
    int r25; // r23
    int cnt; // r30
    int os; // r21
    unsigned int flag; // r28
    unsigned int code; // r22
}

// Range: 0x803D2B48 -> 0x803D2B7C
static unsigned long GetFontSize(unsigned char * buf /* r3 */) {}

// Range: 0x803D2B7C -> 0x803D2C04
unsigned short OSGetFontEncode() {
    // References
    // -> static unsigned short FontEncode;
    // -> static char * (* ParseString)(unsigned short, char *, struct OSFontHeader * *, int *);
}

// Range: 0x803D2C04 -> 0x803D2C78
static void ReadROM(void * buf /* r28 */, int length /* r30 */, int offset /* r29 */) {
    // Local variables
    int len; // r31
}

// Range: 0x803D2C78 -> 0x803D2E48
static unsigned long ReadFont(void * img /* r26 */, unsigned short encode /* r19 */, void * fontData /* r18 */) {
    // Local variables
    unsigned long size; // r25
    struct OSFontHeader * font; // r31
    int fontCode; // r24
    unsigned char * imageSrc; // r23
    int sheet; // r22
    int numChars; // r21
    int row; // r29
    int column; // r27
    int x; // r20
    int y; // r30
    unsigned char * src; // r28
    unsigned short imageT[4]; // r1+0x14
}

// Range: 0x803D2E48 -> 0x803D2F2C
unsigned long OSLoadFont(struct OSFontHeader * fontData /* r29 */, void * tmp /* r30 */) {
    // Local variables
    unsigned short encode; // r28
    unsigned long size; // r31

    // References
    // -> static struct OSFontHeader * FontDataSjis;
    // -> static struct OSFontHeader * FontDataAnsi;
}

// Range: 0x803D2F2C -> 0x803D2FFC
static char * ParseStringS(unsigned short encode /* r28 */, const char * string /* r30 */, struct OSFontHeader * * pfont /* r1+0x10 */, int * pfontCode /* r1+0x14 */) {
    // Local variables
    struct OSFontHeader * font; // r29
    unsigned short code; // r31

    // References
    // -> static struct OSFontHeader * FontDataSjis;
    // -> static struct OSFontHeader * FontDataAnsi;
}

// Range: 0x803D2FFC -> 0x803D32DC
char * OSGetFontTexel(const char * string /* r21 */, void * image /* r1+0xC */, long pos /* r22 */, long stride /* r1+0x14 */, long * width /* r16 */) {
    // Local variables
    unsigned short encode; // r20
    struct OSFontHeader * font; // r1+0x20
    unsigned char * src; // r29
    unsigned char * dst; // r28
    int fontCode; // r1+0x1C
    int sheet; // r25
    int numChars; // r24
    int row; // r27
    int column; // r26
    int x; // r31
    int y; // r30
    int offsetSrc; // r19
    int offsetDst; // r18
    unsigned char * colorIndex; // r17
    unsigned char * imageSrc; // r23

    // References
    // -> static char * (* ParseString)(unsigned short, char *, struct OSFontHeader * *, int *);
}


