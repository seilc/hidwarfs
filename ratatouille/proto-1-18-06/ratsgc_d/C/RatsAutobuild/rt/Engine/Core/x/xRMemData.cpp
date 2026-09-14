/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xRMemData.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C9A6C -> 0x800C9CD0
*/
static unsigned int g_total_alloc; // size: 0x4, address: 0x80D69690
static int been_here; // size: 0x4, address: 0x80D69694
static char __FUNCTION__[5]; // size: 0x5, address: 0x80D608A0
unsigned int gActiveHeap; // size: 0x4, address: 0x80D692A8
// total size: 0x1
struct RyzMemData {};
// Range: 0x800C9A6C -> 0x800C9CCC
void * RyzMemData::operator new(unsigned long amt /* r29 */, int who /* r30 */, unsigned int memtag /* r25 */, struct RyzMemGrow * growCtxt /* r31 */) {
    // Local variables
    void * mem; // r28
    int dogrow; // r27

    // References
    // -> static unsigned int g_total_alloc;
    // -> static char __FUNCTION__[5];
    // -> unsigned int gActiveHeap;
    // -> static int been_here;
}

// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x1C
struct RyzMemGrow {
    // Members
protected:
    int flg_grow; // offset 0x0, size 0x4
    int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    struct xBase * user; // offset 0xC, size 0x4
    int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    struct xBase * user_last; // offset 0x18, size 0x4
};
// Range: 0x800C9CCC -> 0x800C9CD0
void RyzMemData::operator delete() {}


