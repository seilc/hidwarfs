/*
    Compile unit: C:\TestBuild\in\GAME\zBulletMarkAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
class zBulletMarkAssetMgr bulletmark_mgr; // size: 0x384, address: 0x6A66E0
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x384
class zBulletMarkAssetMgr {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class zBulletMarkAsset data[32]; // offset 0x4, size 0x380
};
// total size: 0x1C
class zBulletMarkAsset : public xDynAsset {
    // Members
public:
    unsigned int textureID; // offset 0x10, size 0x4
    float size; // offset 0x14, size 0x4
    float lifetime; // offset 0x18, size 0x4
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

/*
    Compile unit: C:\TestBuild\in\GAME\zBulletMarkAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00343060 -> 0x003430B4
*/
// Range: 0x343060 -> 0x3430B4
// this: r2
class zBulletMarkAsset * zBulletMarkAssetMgr::get(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x343060 -> 0x3430B4
        unsigned int i; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zBulletMarkAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003430C0 -> 0x003430C8
*/
// Range: 0x3430C0 -> 0x3430C8
// this: r2
void zBulletMarkAssetMgr::init() {
    /* anonymous block */ {
        // Range: 0x3430C0 -> 0x3430C8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zBulletMarkAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003430D0 -> 0x00343180
*/
// Range: 0x3430D0 -> 0x343180
void zBulletMarkAsset_Init(class xBase & data /* r2 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3430D0 -> 0x343180
    }
}


