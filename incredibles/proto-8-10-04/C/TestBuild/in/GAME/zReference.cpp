/*
    Compile unit: C:\TestBuild\in\GAME\zReference.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
void zReferenceEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x29A1F0
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
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x14
class zReferenceAsset : public xDynAsset {
    // Members
public:
    unsigned int initial; // offset 0x10, size 0x4
};
// total size: 0x14
class zReference : public xBase {
    // Members
public:
    class xBase * current; // offset 0x10, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zReference.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A1F0 -> 0x0029A274
*/
// Range: 0x29A1F0 -> 0x29A274
void zReferenceEventCB(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r13 */, float * toParam /* r12 */, class xBase * toParamWidget /* r11 */, unsigned int toParamWidgetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29A1F0 -> 0x29A274
        class zReference * ref; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zReference.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A280 -> 0x0029A2E8
*/
// Range: 0x29A280 -> 0x29A2E8
void zReferenceInit(class xBase & data /* r18 */, class xDynAsset & asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x29A280 -> 0x29A2E8
    }
}


