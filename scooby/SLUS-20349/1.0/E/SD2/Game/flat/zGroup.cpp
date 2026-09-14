/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int zGroupEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x1A0A10
// total size: 0x0
class xSerial {};
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
    Code range: 0x001A09C0 -> 0x001A09D8
*/
// Range: 0x1A09C0 -> 0x1A09D8
unsigned int zGroupGetItem(class _zGroup * g /* r2 */, unsigned int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A09C0 -> 0x1A09D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A09E0 -> 0x001A09F8
*/
// Range: 0x1A09E0 -> 0x1A09F8
class xBase * zGroupGetItemPtr(class _zGroup * g /* r2 */, unsigned int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A09E0 -> 0x1A09F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A0A00 -> 0x001A0A0C
*/
// Range: 0x1A0A00 -> 0x1A0A0C
unsigned int zGroupGetCount(class _zGroup * g /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A0A00 -> 0x1A0A0C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A0A10 -> 0x001A0B48
*/
// Range: 0x1A0A10 -> 0x1A0B48
signed int zGroupEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r22 */, float * toParam /* r21 */, class xBase * toParamWidget /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1A0A10 -> 0x1A0B48
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
    Code range: 0x001A0B50 -> 0x001A0B58
*/
// Range: 0x1A0B50 -> 0x1A0B58
void zGroupLoad(class _zGroup * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A0B50 -> 0x1A0B58
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A0B60 -> 0x001A0B68
*/
// Range: 0x1A0B60 -> 0x1A0B68
void zGroupSave(class _zGroup * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A0B60 -> 0x1A0B68
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A0B70 -> 0x001A0BDC
*/
// Range: 0x1A0B70 -> 0x1A0BDC
void zGroupInit(void * b /* r2 */, void * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A0B70 -> 0x1A0BDC
    }
}


