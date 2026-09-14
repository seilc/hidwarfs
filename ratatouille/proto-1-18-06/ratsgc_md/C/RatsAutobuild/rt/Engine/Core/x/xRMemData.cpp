/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xRMemData.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005A948 -> 0x8005A9E0
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x803C1074
// total size: 0x1
struct RyzMemData {};
// Range: 0x8005A948 -> 0x8005A9DC
void * RyzMemData::operator new(unsigned long amt /* r30 */, struct RyzMemGrow * growCtxt /* r6 */) {
    // Local variables
    void * mem; // r31
    int dogrow; // r31

    // References
    // -> unsigned int gActiveHeap;
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
// Range: 0x8005A9DC -> 0x8005A9E0
void RyzMemData::operator delete() {}


