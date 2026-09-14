/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\ifloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float gFloorQuickHeight[32][32]; // size: 0x1000, address: 0xAF9BA0
static signed int sLastTriangle; // size: 0x4, address: 0x4A4674
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
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
// total size: 0x8
class tagiFloorTri {
    // Members
public:
    unsigned short m_v[3]; // offset 0x0, size 0x6
    unsigned short m_n; // offset 0x6, size 0x2
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
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x40
class tagiFloor {
    // Members
public:
    float m_x1; // offset 0x0, size 0x4
    float m_y1; // offset 0x4, size 0x4
    float m_z1; // offset 0x8, size 0x4
    float m_x2; // offset 0xC, size 0x4
    float m_y2; // offset 0x10, size 0x4
    float m_z2; // offset 0x14, size 0x4
    unsigned int m_unit; // offset 0x18, size 0x4
    float m_w; // offset 0x1C, size 0x4
    float m_h; // offset 0x20, size 0x4
    unsigned int m_vCount; // offset 0x24, size 0x4
    unsigned int m_nCount; // offset 0x28, size 0x4
    unsigned int m_tCount; // offset 0x2C, size 0x4
    class Vector3D * m_v; // offset 0x30, size 0x4
    class Vector3D * m_n; // offset 0x34, size 0x4
    class tagiFloorTri * m_t; // offset 0x38, size 0x4
    unsigned int * m_tmask; // offset 0x3C, size 0x4
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
// total size: 0x24
class xLine2D {
    // Members
public:
    class _RwV2d m_p[2]; // offset 0x0, size 0x10
    class _RwV2d m_i[2]; // offset 0x10, size 0x10
    signed int m_iCount; // offset 0x20, size 0x4
};
// total size: 0x10C
class tagFile {
    // Members
public:
    char m_name[256]; // offset 0x0, size 0x100
    signed int m_state; // offset 0x100, size 0x4
    signed int m_desc; // offset 0x104, size 0x4
    unsigned int m_fpos; // offset 0x108, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\ifloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003881F0 -> 0x003881F8
*/
// Range: 0x3881F0 -> 0x3881F8
void iFloorDrawZBuffer() {
    /* anonymous block */ {
        // Range: 0x3881F0 -> 0x3881F8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\ifloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00388200 -> 0x00388470
*/
// Range: 0x388200 -> 0x388470
void iFloorDebugDraw(class tagiFloor * f /* r17 */) {
    /* anonymous block */ {
        // Range: 0x388200 -> 0x388470
        signed int j; // r2
        signed int i; // r16
        class Vector3D s[4]; // @ 0x00AFABA0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\ifloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00388470 -> 0x00388E80
*/
// Range: 0x388470 -> 0x388E80
float iFloorGetHeightIdx(class tagiFloor * f /* r20 */, float x /* r22 */, float y /* r21 */, float z /* r20 */, unsigned int * triIdx /* r19 */) {
    /* anonymous block */ {
        // Range: 0x388470 -> 0x388E80
        float ooarea; // r4
        float v3z; // r29+0xA0
        float v3x; // r2
        float v2z; // r6
        float v2x; // r5
        float v1z; // r4
        float v1x; // r3
        float bw; // r3
        float bv; // r2
        float bu; // r1
        float ooarea; // r4
        float v3z; // r29+0xA0
        float v3x; // r2
        float v2z; // r6
        float v2x; // r5
        float v1z; // r4
        float v1x; // r3
        float bw; // r3
        float bv; // r2
        float bu; // r1
        unsigned int ti; // r16
        unsigned int pmasklo; // r18
        unsigned int pmaskhi; // r17
        unsigned int pmask; // r2
        unsigned int i; // r16
        class Vector3D p; // r29+0x90
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\ifloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00388E80 -> 0x00389604
*/
// Range: 0x388E80 -> 0x389604
float iFloorGetHeight(class tagiFloor * f /* r19 */, float x /* r22 */, float y /* r21 */, float z /* r20 */) {
    /* anonymous block */ {
        // Range: 0x388E80 -> 0x389604
        float ooarea; // r29+0x90
        float bw; // r4
        float bv; // r3
        float bu; // r2
        float ooarea; // r29+0x90
        float bw; // r4
        float bv; // r3
        float bu; // r2
        unsigned int pmasklo; // r18
        unsigned int pmaskhi; // r17
        unsigned int pmask; // r2
        unsigned int i; // r16
        class Vector3D p; // r29+0x80
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\ifloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00389610 -> 0x00389948
*/
// Range: 0x389610 -> 0x389948
void iFloorLoadFromBuffer(class tagiFloor * f /* r18 */, unsigned char * data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x389610 -> 0x389948
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\ifloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00389950 -> 0x00389C0C
*/
// Range: 0x389950 -> 0x389C0C
unsigned int iFloorGetMaskLine2D(class tagiFloor * f /* r2 */, class xLine2D * l /* r2 */) {
    /* anonymous block */ {
        // Range: 0x389950 -> 0x389C0C
        unsigned int himask; // r6
        unsigned int lomask; // r5
        unsigned int i; // r2
        float ooh; // r21
        float oow; // r20
        unsigned int tmp; // r3
        float zd[2]; // r29+0x58
        float xd[2]; // r29+0x50
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\ifloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00389C10 -> 0x00389EBC
*/
// Range: 0x389C10 -> 0x389EBC
unsigned int iFloorGetMaskRadius(class tagiFloor * f /* r19 */, float x /* r29+0x60 */, float z /* r29+0x60 */, float r /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x389C10 -> 0x389EBC
        unsigned int himask; // r5
        unsigned int lomask; // r4
        unsigned int i; // r2
        unsigned int tmp; // r3
        float zd[2]; // r29+0x58
        float xd[2]; // r29+0x50
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\ifloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00389EC0 -> 0x00389F60
*/
// Range: 0x389EC0 -> 0x389F60
unsigned int iFloorGetMask(class tagiFloor * f /* r17 */, float x /* r29+0x40 */, float z /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x389EC0 -> 0x389F60
        unsigned int zbit; // r2
        unsigned int xbit; // r16
        float zd; // r20
        float xd; // r1
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\ifloor.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00389F60 -> 0x00389FB0
*/
// Range: 0x389F60 -> 0x389FB0
void iFloorLevelReset(class tagiFloor * f /* r2 */) {
    /* anonymous block */ {
        // Range: 0x389F60 -> 0x389FB0
    }
}


