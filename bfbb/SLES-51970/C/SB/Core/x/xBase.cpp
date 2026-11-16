/*
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
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
// total size: 0x0
class st_SERIAL_CLIENTINFO {};
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
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEE60 -> 0x001BEE8C
*/
// Range: 0x1BEE60 -> 0x1BEE8C
void xBaseReset(class xBase * xb /* r2 */, class xBaseAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEE60 -> 0x1BEE8C
    }
}


/*
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEE90 -> 0x001BEEF0
*/
// Range: 0x1BEE90 -> 0x1BEEF0
void xBaseLoad(class xBase * ent /* r16 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEE90 -> 0x1BEEF0
        signed int b; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEEF0 -> 0x001BEF3C
*/
// Range: 0x1BEEF0 -> 0x1BEF3C
void xBaseSave(class xBase * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEEF0 -> 0x1BEF3C
    }
}


/*
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEF40 -> 0x001BEF48
*/
// Range: 0x1BEF40 -> 0x1BEF48
void xBaseSetup() {
    /* anonymous block */ {
        // Range: 0x1BEF40 -> 0x1BEF48
    }
}


/*
    Compile unit: C:\SB\Core\x\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001BEF50 -> 0x001BEF84
*/
// Range: 0x1BEF50 -> 0x1BEF84
void xBaseInit(class xBase * xb /* r2 */, class xBaseAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1BEF50 -> 0x1BEF84
    }
}


