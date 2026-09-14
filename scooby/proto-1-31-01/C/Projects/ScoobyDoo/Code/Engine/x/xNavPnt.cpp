/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNavPnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x2C
class xNavPoint {
    // Members
public:
    unsigned int m_linkCount; // offset 0x0, size 0x4
    class xNavLink * m_link; // offset 0x4, size 0x4
    class Vector3D m_pos; // offset 0x8, size 0xC
    float m_cost; // offset 0x14, size 0x4
    float m_heuristic; // offset 0x18, size 0x4
    float m_f; // offset 0x1C, size 0x4
    class xNavPoint * m_parent; // offset 0x20, size 0x4
    unsigned short m_flags; // offset 0x24, size 0x2
    unsigned short m_occupiedCount; // offset 0x26, size 0x2
    unsigned int m_unused; // offset 0x28, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
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
// total size: 0x20
class xNavLink {
    // Members
public:
    unsigned char m_flags; // offset 0x0, size 0x1
    unsigned char m_countLocked; // offset 0x1, size 0x1
    unsigned char m_countOccupied; // offset 0x2, size 0x1
    unsigned char m_unused2; // offset 0x3, size 0x1
    unsigned int m_unused; // offset 0x4, size 0x4
    float m_distance; // offset 0x8, size 0x4
    class Vector3D m_dir; // offset 0xC, size 0xC
    class xNavPoint * m_linkTo; // offset 0x18, size 0x4
    class xNavPoint * m_linkFrom; // offset 0x1C, size 0x4
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

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNavPnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356230 -> 0x00356284
*/
// Range: 0x356230 -> 0x356284
signed int xNavPointIsLinked(class xNavPoint * np1 /* r2 */, class xNavPoint * np2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x356230 -> 0x356284
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNavPnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356290 -> 0x00356474
*/
// Range: 0x356290 -> 0x356474
float xNavPointAStarGetNodeHeuristic(class xNavPoint * np /* r18 */, class xNavPoint * start /* r17 */, class xNavPoint * goal /* r16 */) {
    /* anonymous block */ {
        // Range: 0x356290 -> 0x356474
        float cross; // r1
        float dy2; // r29+0x70
        float dx2; // r6
        float dy1; // r5
        float dx1; // r4
        float fudge; // r20
        float i; // r3
        float h; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNavPnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356480 -> 0x003564A8
*/
// Range: 0x356480 -> 0x3564A8
float xNavPointSquareDistanceFromPoint(class xNavPoint * np /* r2 */, class Vector3D * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x356480 -> 0x3564A8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNavPnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003564B0 -> 0x00356638
*/
// Range: 0x3564B0 -> 0x356638
void xNavPointPathfinderFreeLink(class xNavPoint * np /* r17 */, class xNavPoint * np2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3564B0 -> 0x356638
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xNavPnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356640 -> 0x003566B8
*/
// Range: 0x356640 -> 0x3566B8
void xNavPointPathfinderOccupyLink(class xNavPoint * np /* r2 */, class xNavPoint * np2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x356640 -> 0x3566B8
        unsigned int i; // r7
    }
}


