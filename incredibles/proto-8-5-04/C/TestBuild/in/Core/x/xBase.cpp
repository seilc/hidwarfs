/*
    Compile unit: C:\TestBuild\in\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
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
// total size: 0x0
class st_SERIAL_CLIENTINFO {};
// total size: 0x1C
class xSerial {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int baseoff; // offset 0x4, size 0x4
    class st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    signed int warned; // offset 0xC, size 0x4
    signed int curele; // offset 0x10, size 0x4
    signed int bitidx; // offset 0x14, size 0x4
    signed int bittally; // offset 0x18, size 0x4
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
    Compile unit: C:\TestBuild\in\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171560 -> 0x0017158C
*/
// Range: 0x171560 -> 0x17158C
void xBaseReset(class xBase * xb /* r2 */, class xBaseAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171560 -> 0x17158C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171590 -> 0x001715E8
*/
// Range: 0x171590 -> 0x1715E8
void xBaseLoad(class xBase * ent /* r16 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171590 -> 0x1715E8
        signed int b; // r29+0x2C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001715F0 -> 0x00171634
*/
// Range: 0x1715F0 -> 0x171634
void xBaseSave(class xBase * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1715F0 -> 0x171634
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171640 -> 0x00171648
*/
// Range: 0x171640 -> 0x171648
void xBaseSetup() {
    /* anonymous block */ {
        // Range: 0x171640 -> 0x171648
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00171650 -> 0x00171684
*/
// Range: 0x171650 -> 0x171684
void xBaseInit(class xBase * xb /* r2 */, class xBaseAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x171650 -> 0x171684
    }
}


