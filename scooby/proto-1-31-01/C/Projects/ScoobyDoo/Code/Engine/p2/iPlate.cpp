/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPlate.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char dbfont_chars[51]; // size: 0x33, address: 0x0
unsigned char dxoff; // size: 0x1, address: 0x0
class _iPlateRuntime * g_PlateMgr; // size: 0x4, address: 0x4A4EFC
signed int gPlateCount; // size: 0x4, address: 0x4A4F00
class _iPlateResource gPlateList[300]; // size: 0x960, address: 0x0
unsigned short mask_color; // size: 0x2, address: 0x0
float mask_alpha; // size: 0x4, address: 0x0
unsigned char actual_mask_pixels; // size: 0x1, address: 0x0
float bgi; // size: 0x4, address: 0x0
unsigned int blank_frames; // size: 0x4, address: 0x0
signed int after_fmv_master_volume; // size: 0x4, address: 0x0
unsigned int sTexMemHack; // size: 0x4, address: 0x0
signed int gGameState; // size: 0x4, address: 0x4A4640
class xPlate gPlate; // size: 0xC, address: 0xAA67B0
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0xC
class _iPlateMaskResource {
    // Members
public:
    unsigned char columnStart; // offset 0x0, size 0x1
    unsigned char scanStart; // offset 0x1, size 0x1
    unsigned char columnWidth; // offset 0x2, size 0x1
    unsigned char columnHeight; // offset 0x3, size 0x1
    float depth; // offset 0x4, size 0x4
    unsigned char * data; // offset 0x8, size 0x4
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0x8
class _iPlateResource {
    // Members
public:
    unsigned int maskCount; // offset 0x0, size 0x4
    class _iPlateMaskResource * masks; // offset 0x4, size 0x4
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x10
class _iPlateRuntime {
    // Members
public:
    signed int nextFrame; // offset 0x0, size 0x4
    signed int cineFrame; // offset 0x4, size 0x4
    signed int dispFrame; // offset 0x8, size 0x4
    float cinez; // offset 0xC, size 0x4
};
// total size: 0x28
class XStream {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    signed int currentOffset; // offset 0x4, size 0x4
    unsigned int * data; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
    unsigned int offset; // offset 0x10, size 0x4
    unsigned int done; // offset 0x14, size 0x4
    unsigned int assetID; // offset 0x18, size 0x4
    class tagXStreamDirectoryEntry * dir; // offset 0x1C, size 0x4
    unsigned int count; // offset 0x20, size 0x4
    unsigned int index; // offset 0x24, size 0x4
};
// total size: 0xC
class xPlate {
    // Members
public:
    signed int m_initialized; // offset 0x0, size 0x4
    signed int m_currentIndex; // offset 0x4, size 0x4
    class _iPlateRuntime * m_runtime; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPlate.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00370220 -> 0x00370248
*/
// Range: 0x370220 -> 0x370248
void p2PlateRender() {
    /* anonymous block */ {
        // Range: 0x370220 -> 0x370248
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPlate.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00370250 -> 0x00370548
*/
// Range: 0x370250 -> 0x370548
void iPlateReset() {
    /* anonymous block */ {
        // Range: 0x370250 -> 0x370548
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPlate.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00370550 -> 0x00370558
*/
// Range: 0x370550 -> 0x370558
void p2PlateExit() {
    /* anonymous block */ {
        // Range: 0x370550 -> 0x370558
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iPlate.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00370560 -> 0x00370568
*/
// Range: 0x370560 -> 0x370568
void p2MaskExit() {
    /* anonymous block */ {
        // Range: 0x370560 -> 0x370568
    }
}


