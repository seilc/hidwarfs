/*
    Compile unit: C:\TestBuild\in\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char zEventLogBuf[20][256]; // size: 0x1400, address: 0x0
signed int zEventLogBufInit; // size: 0x4, address: 0x0
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
enum ForceEvent {
    FE_YES = 0,
    FE_NO = 1,
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C97A0 -> 0x001C99B4
*/
// Range: 0x1C97A0 -> 0x1C99B4
void zEntEvent(class xBase * from /* r20 */, class xBase * to /* r19 */, unsigned int toEvent /* r18 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */, unsigned int toParamWidgetID /* r2 */, enum ForceEvent forceEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1C97A0 -> 0x1C99B4
        class xLinkAsset * idx; // r17
        signed int i; // r16
        class xBase * sendTo; // r21
        class xBase * b; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C99C0 -> 0x001C9A0C
*/
// Range: 0x1C99C0 -> 0x1C9A0C
void zEntEvent(unsigned int toID /* r2 */, unsigned int toEvent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C99C0 -> 0x1C9A0C
        class xBase * sendTo; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001C9A10 -> 0x001C9A64
*/
// Range: 0x1C9A10 -> 0x1C9A64
void zEntEvent(char * to /* r2 */, unsigned int toEvent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1C9A10 -> 0x1C9A64
        unsigned int id; // r2
        class xBase * sendTo; // r2
    }
}


