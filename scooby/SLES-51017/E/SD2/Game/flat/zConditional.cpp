/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class zVarEntry zVarEntryTable[]; // size: 0x0, address: 0x2B3F10
signed int zConditionalEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x1B1FB0
// total size: 0x8
class p2BaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x14
class _zConditional : public xBase {
    // Members
public:
    class zCondAsset * asset; // offset 0x10, size 0x4
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
// total size: 0x10
class zVarEntry {
    // Members
public:
    unsigned int entry; // offset 0x0, size 0x4
    unsigned int varNameID; // offset 0x4, size 0x4
    char * varName; // offset 0x8, size 0x4
    unsigned int (* varCB)(); // offset 0xC, size 0x4
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
// total size: 0x14
class zCondAsset : public p2BaseAsset {
    // Members
public:
    unsigned int constNum; // offset 0x8, size 0x4
    unsigned int expr1; // offset 0xC, size 0x4
    unsigned int op; // offset 0x10, size 0x4
};
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
// total size: 0x0
class st_SERIAL_CLIENTINFO {};

/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B1FB0 -> 0x001B2048
*/
// Range: 0x1B1FB0 -> 0x1B2048
signed int zConditionalEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B1FB0 -> 0x1B2048
        class _zConditional * t; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B2050 -> 0x001B2158
*/
// Range: 0x1B2050 -> 0x1B2158
unsigned int zConditional_Evaluate(class _zConditional * c /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1B2050 -> 0x1B2158
        signed int i; // r5
        class zVarEntry * v; // r4
        unsigned int temp; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B2160 -> 0x001B2168
*/
// Range: 0x1B2160 -> 0x1B2168
void zConditionalLoad(class _zConditional * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B2160 -> 0x1B2168
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B2170 -> 0x001B2178
*/
// Range: 0x1B2170 -> 0x1B2178
void zConditionalSave(class _zConditional * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B2170 -> 0x1B2178
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B2180 -> 0x001B21EC
*/
// Range: 0x1B2180 -> 0x1B21EC
void zConditionalInit(void * b /* r2 */, void * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1B2180 -> 0x1B21EC
    }
}


