/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char dm_names[18][16]; // size: 0x120, address: 0x0
class PerfTimes g_perfTimes; // size: 0xE0, address: 0xAA6AA0
static class PerfTimes statRecord[100]; // size: 0x5780, address: 0xAA6B80
static signed int statRecordLoc; // size: 0x4, address: 0x4A4E48
unsigned char debug_mode; // size: 0x1, address: 0x4A4E4C
unsigned char dbfont_display; // size: 0x1, address: 0x4A4E50
signed int sndDebugMode; // size: 0x4, address: 0x4A4E54
signed int routeDebugMode; // size: 0x4, address: 0x4A4E58
signed int guiDebugMode; // size: 0x4, address: 0x4A4E5C
signed int animDebugMode; // size: 0x4, address: 0x4A4E60
signed int msgDebugMode; // size: 0x4, address: 0x4A4E64
signed int parDebugMode; // size: 0x4, address: 0x4A4E68
static signed int sTestSndID; // size: 0x4, address: 0x4A4E6C
unsigned char gDGon; // size: 0x1, address: 0x4A4E70
unsigned char gDGmode; // size: 0x1, address: 0x4A4650
unsigned char gDGbits; // size: 0x1, address: 0x4A4654
signed char gDGfield[6]; // size: 0x6, address: 0x44F388
static class _XDG dg[6]; // size: 0x318, address: 0xAAC300
static unsigned int dg_color[6]; // size: 0x18, address: 0x0
static char dg_color_str[6][8]; // size: 0x30, address: 0x44F390
static char dg_field_str[28][15]; // size: 0x1A4, address: 0x44F3C0
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
unsigned int frametime; // size: 0x4, address: 0x4A4F40
unsigned int l_currentStaticUsed; // size: 0x4, address: 0x4A4D88
signed int gDebugDrawDebugInfo; // size: 0x4, address: 0x4A4E1C
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0x8
class _RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x84
class _XDG {
    // Members
public:
    unsigned short idx; // offset 0x0, size 0x2
    signed short value[51]; // offset 0x2, size 0x66
    float mult; // offset 0x68, size 0x4
    unsigned int graphcolor; // offset 0x6C, size 0x4
    signed int tickmin; // offset 0x70, size 0x4
    signed int tickmax; // offset 0x74, size 0x4
    signed int tickstep; // offset 0x78, size 0x4
    unsigned int tickcolor; // offset 0x7C, size 0x4
    unsigned int flags; // offset 0x80, size 0x4
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
// total size: 0xE0
class PerfTimes {
    // Members
public:
    unsigned long total; // offset 0x0, size 0x4
    unsigned long lasttotal; // offset 0x8, size 0x4
    unsigned long console; // offset 0x10, size 0x4
    unsigned long sound; // offset 0x18, size 0x4
    unsigned long anim; // offset 0x20, size 0x4
    unsigned long animPost; // offset 0x28, size 0x4
    unsigned long actor; // offset 0x30, size 0x4
    unsigned long obj; // offset 0x38, size 0x4
    unsigned long script; // offset 0x40, size 0x4
    unsigned long scriptPF; // offset 0x48, size 0x4
    unsigned long particle; // offset 0x50, size 0x4
    unsigned long path; // offset 0x58, size 0x4
    unsigned long route; // offset 0x60, size 0x4
    unsigned long gui; // offset 0x68, size 0x4
    unsigned long cart; // offset 0x70, size 0x4
    unsigned long gstate; // offset 0x78, size 0x4
    unsigned long msg; // offset 0x80, size 0x4
    unsigned long x1; // offset 0x88, size 0x4
    unsigned long x2; // offset 0x90, size 0x4
    unsigned long x3; // offset 0x98, size 0x4
    unsigned long scrfx; // offset 0xA0, size 0x4
    unsigned long fmv; // offset 0xA8, size 0x4
    unsigned long xidle; // offset 0xB0, size 0x4
    unsigned long xsceneidle; // offset 0xB8, size 0x4
    unsigned long camera; // offset 0xC0, size 0x4
    unsigned long decode; // offset 0xC8, size 0x4
    unsigned long main0V; // offset 0xD0, size 0x4
    unsigned long plate; // offset 0xD8, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0035F8D0 -> 0x0036011C
*/
// Range: 0x35F8D0 -> 0x36011C
void xDebugGraphIdle() {
    /* anonymous block */ {
        // Range: 0x35F8D0 -> 0x36011C
        unsigned long * ptr; // r2
        unsigned int val; // r2
        unsigned int stack; // [invalid]
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00360120 -> 0x00360130
*/
// Range: 0x360120 -> 0x360130
void xDebugGraphInit() {
    /* anonymous block */ {
        // Range: 0x360120 -> 0x360130
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00360130 -> 0x003603DC
*/
// Range: 0x360130 -> 0x3603DC
void xDebugGraphRender(class _XDG * gp /* r21 */) {
    /* anonymous block */ {
        // Range: 0x360130 -> 0x3603DC
        unsigned char b; // r20
        unsigned char g; // r19
        unsigned char r; // r18
        class _RwV2d p1; // r29+0x98
        class _RwV2d p0; // r29+0x90
        signed int idx; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003603E0 -> 0x00360608
*/
// Range: 0x3603E0 -> 0x360608
void xDebugGraphSetup(class _XDG * gp /* r21 */, float mult /* r20 */, unsigned int graphcolor /* r20 */, signed int tickmin /* r19 */, signed int tickmax /* r18 */, signed int tickstep /* r17 */, unsigned int tickcolor /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3603E0 -> 0x360608
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00360610 -> 0x00360C58
*/
// Range: 0x360610 -> 0x360C58
void xDebugModeService() {
    /* anonymous block */ {
        // Range: 0x360610 -> 0x360C58
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xDebug.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00360C60 -> 0x00360CC8
*/
// Range: 0x360C60 -> 0x360CC8
void xDebugUpdateStats() {
    /* anonymous block */ {
        // Range: 0x360C60 -> 0x360CC8
    }
}


