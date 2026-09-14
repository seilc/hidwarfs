/*
    Compile unit: C:\TestBuild\in\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static unsigned int g_total_alloc; // size: 0x4, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1080 -> 0x001D1088
*/
// Range: 0x1D1080 -> 0x1D1088
void operator delete() {
    /* anonymous block */ {
        // Range: 0x1D1080 -> 0x1D1088
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRMemData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1090 -> 0x001D1114
*/
// Range: 0x1D1090 -> 0x1D1114
void * operator new(unsigned int amt /* r2 */, class RyzMemGrow * growCtxt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D1090 -> 0x1D1114
        void * mem; // r2
        signed int dogrow; // r3
    }
}


