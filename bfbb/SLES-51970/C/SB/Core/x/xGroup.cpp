/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x50EF44
signed int xGroupEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x29F450
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x20
class xGroup : public xBase {
    // Members
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
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
// total size: 0x0
class xSerial {};
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
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029F310 -> 0x0029F350
*/
// Range: 0x29F310 -> 0x29F350
// this: r2
unsigned int xGroup::get_any() {
    /* anonymous block */ {
        // Range: 0x29F310 -> 0x29F350
        unsigned int id; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029F350 -> 0x0029F364
*/
// Range: 0x29F350 -> 0x29F364
unsigned int xGroupGetItem(class xGroup * g /* r2 */, unsigned int index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29F350 -> 0x29F364
    }
}


/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029F370 -> 0x0029F438
*/
// Range: 0x29F370 -> 0x29F438
class xBase * xGroupGetItemPtr(class xGroup * g /* r20 */, unsigned int index /* r19 */) {
    /* anonymous block */ {
        // Range: 0x29F370 -> 0x29F438
    }
}


/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029F440 -> 0x0029F44C
*/
// Range: 0x29F440 -> 0x29F44C
unsigned int xGroupGetCount(class xGroup * g /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29F440 -> 0x29F44C
    }
}


/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029F450 -> 0x0029F718
*/
// Range: 0x29F450 -> 0x29F718
signed int xGroupEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r20 */, float * toParam /* r19 */, class xBase * toParamWidget /* r18 */) {
    /* anonymous block */ {
        // Range: 0x29F450 -> 0x29F718
        class xGroup * g; // r17
        signed int rand; // r16
        signed int i; // r22
        class xBase * b; // r2
        signed int i; // r22
        class xBase * b; // r2
        signed int i; // r22
        class xBase * b; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029F720 -> 0x0029F728
*/
// Range: 0x29F720 -> 0x29F728
void xGroupLoad(class xGroup * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29F720 -> 0x29F728
    }
}


/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029F730 -> 0x0029F738
*/
// Range: 0x29F730 -> 0x29F738
void xGroupSave(class xGroup * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29F730 -> 0x29F738
    }
}


/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029F740 -> 0x0029F7DC
*/
// Range: 0x29F740 -> 0x29F7DC
void xGroupSetup(class xGroup * g /* r19 */) {
    /* anonymous block */ {
        // Range: 0x29F740 -> 0x29F7DC
        unsigned int count; // r18
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029F7E0 -> 0x0029F88C
*/
// Range: 0x29F7E0 -> 0x29F88C
void xGroupInit(void * b /* r2 */, void * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x29F7E0 -> 0x29F88C
    }
}


