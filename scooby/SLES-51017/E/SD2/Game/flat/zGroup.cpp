/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int zGroupEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x1A1170
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
// total size: 0x14
class _zGroup : public xBase {
    // Members
public:
    class zGroupAsset * asset; // offset 0x10, size 0x4
};
// total size: 0xC
class zGroupAsset : public p2BaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x0
class xSerial {};
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
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A1120 -> 0x001A1138
*/
// Range: 0x1A1120 -> 0x1A1138
unsigned int zGroupGetItem(class _zGroup * g /* r2 */, unsigned int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A1120 -> 0x1A1138
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A1140 -> 0x001A1158
*/
// Range: 0x1A1140 -> 0x1A1158
class xBase * zGroupGetItemPtr(class _zGroup * g /* r2 */, unsigned int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A1140 -> 0x1A1158
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A1160 -> 0x001A116C
*/
// Range: 0x1A1160 -> 0x1A116C
unsigned int zGroupGetCount(class _zGroup * g /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A1160 -> 0x1A116C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A1170 -> 0x001A12A8
*/
// Range: 0x1A1170 -> 0x1A12A8
signed int zGroupEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r22 */, float * toParam /* r21 */, class xBase * toParamWidget /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1A1170 -> 0x1A12A8
        class xBase * b; // r2
        signed int i; // r18
        signed int rand; // r17
        class _zGroup * g; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A12B0 -> 0x001A12B8
*/
// Range: 0x1A12B0 -> 0x1A12B8
void zGroupLoad(class _zGroup * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A12B0 -> 0x1A12B8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A12C0 -> 0x001A12C8
*/
// Range: 0x1A12C0 -> 0x1A12C8
void zGroupSave(class _zGroup * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A12C0 -> 0x1A12C8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A12D0 -> 0x001A133C
*/
// Range: 0x1A12D0 -> 0x1A133C
void zGroupInit(void * b /* r2 */, void * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A12D0 -> 0x1A133C
    }
}


