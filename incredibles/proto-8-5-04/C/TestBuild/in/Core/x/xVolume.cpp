/*
    Compile unit: C:\TestBuild\in\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x14
class xVolume : public xBase {
    // Members
public:
    class xVolumeAsset * asset; // offset 0x10, size 0x4
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x30
class xMat3x3 {
    // Members
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x0
class xSerial {};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x64
class xVolumeAsset : public xBaseAsset {
    // Members
public:
    unsigned int flags; // offset 0x8, size 0x4
    class xBound bound; // offset 0xC, size 0x4C
    float rot; // offset 0x58, size 0x4
    float xpivot; // offset 0x5C, size 0x4
    float zpivot; // offset 0x60, size 0x4
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0x4C
class xBound {
    // Members
public:
    class xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        class xSphere sph; // offset 0x24, size 0x10
        class xBBox box; // offset 0x24, size 0x24
        class xCylinder cyl; // offset 0x24, size 0x14
    };
    class xMat4x3 * mat; // offset 0x48, size 0x4
};
// total size: 0x20
class xQCData {
    // Members
public:
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D15C0 -> 0x001D15CC
*/
// Range: 0x1D15C0 -> 0x1D15CC
// this: r2
class xBound * xVolume::GetBound() {
    /* anonymous block */ {
        // Range: 0x1D15C0 -> 0x1D15CC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D15D0 -> 0x001D15D8
*/
// Range: 0x1D15D0 -> 0x1D15D8
// this: r2
void xVolume::Load(class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D15D0 -> 0x1D15D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D15E0 -> 0x001D15E8
*/
// Range: 0x1D15E0 -> 0x1D15E8
// this: r2
void xVolume::Save(class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D15E0 -> 0x1D15E8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D15F0 -> 0x001D15F8
*/
// Range: 0x1D15F0 -> 0x1D15F8
// this: r2
void xVolume::Reset() {
    /* anonymous block */ {
        // Range: 0x1D15F0 -> 0x1D15F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xVolume.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1600 -> 0x001D1654
*/
// Range: 0x1D1600 -> 0x1D1654
// this: r17
void xVolume::Init(class xVolumeAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1D1600 -> 0x1D1654
    }
}


