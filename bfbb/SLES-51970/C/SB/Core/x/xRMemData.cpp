/*
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int g_total_alloc; // size: 0x4, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x50EF44
// total size: 0x1C
class RyzMemGrow {
    // Members
public:
    signed int flg_grow; // offset 0x0, size 0x4
    signed int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    class xBase * user; // offset 0xC, size 0x4
    signed int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    class xBase * user_last; // offset 0x18, size 0x4
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
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2650 -> 0x002F267C
*/
// Range: 0x2F2650 -> 0x2F267C
// this: r2
void RyzMemGrow::Done() {
    /* anonymous block */ {
        // Range: 0x2F2650 -> 0x2F267C
    }
}


/*
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2680 -> 0x002F26A8
*/
// Range: 0x2F2680 -> 0x2F26A8
// this: r2
class RyzMemGrow * RyzMemGrow::Resume() {
    /* anonymous block */ {
        // Range: 0x2F2680 -> 0x2F26A8
    }
}


/*
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F26B0 -> 0x002F2724
*/
// Range: 0x2F26B0 -> 0x2F2724
// this: r17
class RyzMemGrow * RyzMemGrow::Init(class xBase * growuser /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2F26B0 -> 0x2F2724
    }
}


/*
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2730 -> 0x002F2738
*/
// Range: 0x2F2730 -> 0x2F2738
void operator delete() {
    /* anonymous block */ {
        // Range: 0x2F2730 -> 0x2F2738
    }
}


/*
    Compile unit: C:\SB\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002F2740 -> 0x002F27C4
*/
// Range: 0x2F2740 -> 0x2F27C4
void * operator new(unsigned int amt /* r2 */, class RyzMemGrow * growCtxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2F2740 -> 0x2F27C4
        void * mem; // r16
        signed int dogrow; // r3
    }
}


