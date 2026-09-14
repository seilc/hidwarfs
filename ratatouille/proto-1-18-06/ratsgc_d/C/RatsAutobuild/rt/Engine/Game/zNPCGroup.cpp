/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCGroup.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021D194 -> 0x8021D3A8
*/
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
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x14
struct group_asset : public xDynAsset {
    // Static members
    static int VERSION; // size: 0x4

    // Members
    int max_attackers; // offset 0x10, size 0x4
};
// total size: 0x18
class group : public xBase {
    // Members
protected:
    const struct group_asset * asset; // offset 0x10, size 0x4
    int attacking_count; // offset 0x14, size 0x4
};
// Range: 0x8021D194 -> 0x8021D1F0
void group::EventCB(struct xBase * from /* r1+0x8 */, struct xBase * to /* r31 */, unsigned int toEvent /* r1+0xC */, const float * toParam /* r1+0x10 */, struct xBase * toParamWidget /* r1+0x14 */, unsigned int toParamWidgetID /* r1+0x18 */) {}

static char __FUNCTION__[5]; // size: 0x5, address: 0x80D649F8
// Range: 0x8021D1F0 -> 0x8021D3A4
void group::init(struct xBase & data /* r27 */, struct xDynAsset & asset /* r31 */, unsigned long asset_size /* r28 */) {
    // Local variables
    unsigned long expected_asset_size; // r29
    class group * new_group; // r30

    // References
    // -> static char __FUNCTION__[5];
}

// Range: 0x8021D3A4 -> 0x8021D3A8
void group::handle_event() {}


