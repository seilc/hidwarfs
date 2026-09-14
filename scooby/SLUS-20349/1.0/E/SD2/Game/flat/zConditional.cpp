/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class zVarEntry zVarEntryTable[]; // size: 0x0, address: 0x2B3610
signed int zConditionalEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x1B16D0
// total size: 0x0
class st_SERIAL_CLIENTINFO {};
// total size: 0x10
class zVarEntry {
    // Members
public:
    unsigned int entry; // offset 0x0, size 0x4
    unsigned int varNameID; // offset 0x4, size 0x4
    char * varName; // offset 0x8, size 0x4
    unsigned int (* varCB)(); // offset 0xC, size 0x4
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
// total size: 0x8
class p2BaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};

/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B16D0 -> 0x001B1768
*/
// Range: 0x1B16D0 -> 0x1B1768
signed int zConditionalEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B16D0 -> 0x1B1768
        class _zConditional * t; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B1770 -> 0x001B1878
*/
// Range: 0x1B1770 -> 0x1B1878
unsigned int zConditional_Evaluate(class _zConditional * c /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1B1770 -> 0x1B1878
        signed int i; // r5
        class zVarEntry * v; // r4
        unsigned int temp; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B1880 -> 0x001B1888
*/
// Range: 0x1B1880 -> 0x1B1888
void zConditionalLoad(class _zConditional * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B1880 -> 0x1B1888
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B1890 -> 0x001B1898
*/
// Range: 0x1B1890 -> 0x1B1898
void zConditionalSave(class _zConditional * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1B1890 -> 0x1B1898
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001B18A0 -> 0x001B190C
*/
// Range: 0x1B18A0 -> 0x1B190C
void zConditionalInit(void * b /* r2 */, void * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1B18A0 -> 0x1B190C
    }
}


