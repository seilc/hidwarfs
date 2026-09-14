/*
    Compile unit: E:\SD2\Game\flat\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x20
class p2LinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class p2LinkAsset * link; // offset 0x8, size 0x4
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
// total size: 0x8
class p2BaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x0
class st_SERIAL_CLIENTINFO {};

/*
    Compile unit: E:\SD2\Game\flat\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D320 -> 0x0019D338
*/
// Range: 0x19D320 -> 0x19D338
void xBaseReset(class xBase * xb /* r2 */, class p2BaseAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D320 -> 0x19D338
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D340 -> 0x0019D398
*/
// Range: 0x19D340 -> 0x19D398
void xBaseLoad(class xBase * ent /* r16 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D340 -> 0x19D398
        signed int b; // r29+0x2C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D3A0 -> 0x0019D3E0
*/
// Range: 0x19D3A0 -> 0x19D3E0
void xBaseSave(class xBase * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D3A0 -> 0x19D3E0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D3E0 -> 0x0019D3E8
*/
// Range: 0x19D3E0 -> 0x19D3E8
void xBaseSetup() {
    /* anonymous block */ {
        // Range: 0x19D3E0 -> 0x19D3E8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xBase.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0019D3F0 -> 0x0019D424
*/
// Range: 0x19D3F0 -> 0x19D424
void xBaseInit(class xBase * xb /* r2 */, class p2BaseAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x19D3F0 -> 0x19D424
    }
}


