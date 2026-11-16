/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
signed int xCounterEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x29DE00
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
// total size: 0x18
class _xCounter : public xBase {
    // Members
public:
    class xCounterAsset * asset; // offset 0x10, size 0x4
    signed short count; // offset 0x14, size 0x2
    unsigned char state; // offset 0x16, size 0x1
    unsigned char counterFlags; // offset 0x17, size 0x1
};
// total size: 0xC
class xCounterAsset : public xBaseAsset {
    // Members
public:
    signed short count; // offset 0x8, size 0x2
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
// total size: 0x0
class st_SERIAL_CLIENTINFO {};

/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029DE00 -> 0x0029DFC0
*/
// Range: 0x29DE00 -> 0x29DFC0
signed int xCounterEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29DE00 -> 0x29DFC0
        class _xCounter * t; // r2
        signed short newCount; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029DFC0 -> 0x0029E008
*/
// Range: 0x29DFC0 -> 0x29E008
void xCounterLoad(class _xCounter * ent /* r17 */, class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29DFC0 -> 0x29E008
    }
}


/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E010 -> 0x0029E058
*/
// Range: 0x29E010 -> 0x29E058
void xCounterSave(class _xCounter * ent /* r17 */, class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29E010 -> 0x29E058
    }
}


/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E060 -> 0x0029E0C0
*/
// Range: 0x29E060 -> 0x29E0C0
void xCounterReset(class xBase * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29E060 -> 0x29E0C0
        class _xCounter * t; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E0C0 -> 0x0029E134
*/
// Range: 0x29E0C0 -> 0x29E134
void xCounterInit(void * b /* r2 */, void * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x29E0C0 -> 0x29E134
    }
}


/*
    Compile unit: C:\SB\Core\x\xCounter.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E140 -> 0x0029E148
*/
// Range: 0x29E140 -> 0x29E148
void xCounterInit() {
    /* anonymous block */ {
        // Range: 0x29E140 -> 0x29E148
    }
}


