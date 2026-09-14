/*
    Compile unit: E:\SD2\Game\flat\iDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class RwRaster * mCharset; // size: 0x4, address: 0x0
static class RwRGBA mForegroundColor; // size: 0x4, address: 0x0
static class RwRGBA mBackgroundColor; // size: 0x4, address: 0x0
unsigned int gScreenDump; // size: 0x4, address: 0x357D08
static signed int sDumpFileNumber; // size: 0x4, address: 0x357D0C
char gScreenDumpPath[256]; // size: 0x100, address: 0x3695E0
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x2B5AD0
// total size: 0xC0
class tag_xFile {
    // Members
public:
    char relname[16]; // offset 0x0, size 0x10
    class tag_iFile ps; // offset 0x10, size 0xB0
};
// total size: 0x34
class RwRaster {
    // Members
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
// total size: 0xC
class tagBITMAPFILEHEADER {
    // Members
public:
    signed int bfSize; // offset 0x0, size 0x4
    signed short bfReserved1; // offset 0x4, size 0x2
    signed short bfReserved2; // offset 0x6, size 0x2
    signed int bfOffBits; // offset 0x8, size 0x4
};
// total size: 0xB0
class tag_iFile {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    class sceCdlFILE file; // offset 0x88, size 0x24
    void (* cb)(signed int); // offset 0xAC, size 0x4
};
// total size: 0x24
class sceCdlFILE {
    // Members
public:
    unsigned int lsn; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    char name[16]; // offset 0x8, size 0x10
    unsigned char date[8]; // offset 0x18, size 0x8
    unsigned int flag; // offset 0x20, size 0x4
};
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x28
class tagBITMAPINFOHEADER {
    // Members
public:
    signed int biSize; // offset 0x0, size 0x4
    signed int biWidth; // offset 0x4, size 0x4
    signed int biHeight; // offset 0x8, size 0x4
    signed short biPlanes; // offset 0xC, size 0x2
    signed short biBitCount; // offset 0xE, size 0x2
    signed int biCompression; // offset 0x10, size 0x4
    signed int biSizeImage; // offset 0x14, size 0x4
    signed int biXPelsPerMeter; // offset 0x18, size 0x4
    signed int biYPelsPerMeter; // offset 0x1C, size 0x4
    signed int biClrUsed; // offset 0x20, size 0x4
    signed int biClrImportant; // offset 0x24, size 0x4
};
// total size: 0x1C
class RwImage {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed int width; // offset 0x4, size 0x4
    signed int height; // offset 0x8, size 0x4
    signed int depth; // offset 0xC, size 0x4
    signed int stride; // offset 0x10, size 0x4
    unsigned char * cpPixels; // offset 0x14, size 0x4
    class RwRGBA * palette; // offset 0x18, size 0x4
};
// total size: 0x38
class BmpMegaHeader {
    // Members
public:
    char prepad[2]; // offset 0x0, size 0x2
    char bfType[2]; // offset 0x2, size 0x2
    class tagBITMAPFILEHEADER bmFile; // offset 0x4, size 0xC
    class tagBITMAPINFOHEADER bmInfo; // offset 0x10, size 0x28
};

/*
    Compile unit: E:\SD2\Game\flat\iDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00128410 -> 0x00128788
*/
// Range: 0x128410 -> 0x128788
void iDebugScreenDump() {
    /* anonymous block */ {
        // Range: 0x128410 -> 0x128788
        unsigned char * p; // r4
        class BmpMegaHeader mhdr; // r29+0x160
        signed long t1; // r2
        signed long t0; // r20
        unsigned char * imp; // r19
        unsigned char * buf; // r18
        unsigned char * bp; // r2
        char fname[64]; // r29+0x120
        unsigned int y; // r17
        unsigned int x; // r3
        class tag_xFile file; // r29+0x60
        unsigned char * pixels; // r18
        unsigned char * oldCamPixels; // r17
        class RwImage * image; // r16
        signed int height; // r20
        signed int width; // r16
        class RwRaster * camRas; // r19
    }
}


