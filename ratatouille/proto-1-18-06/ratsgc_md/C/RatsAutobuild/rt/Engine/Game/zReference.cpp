/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zReference.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CED88 -> 0x800CEE5C
*/
// total size: 0x10
struct basic_rect {
    // Static members
    static struct basic_rect m_Null; // size: 0x10
    static struct basic_rect m_Unit; // size: 0x10

    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
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
// Range: 0x800CED88 -> 0x800CEDA8
void zReferenceInit(struct xBase & data /* r0 */, struct xDynAsset & asset /* r0 */) {}

// total size: 0x14
struct zReference : public xBase {
    // Members
    struct xBase * current; // offset 0x10, size 0x4
};
// total size: 0x14
struct zReferenceAsset : public xDynAsset {
    // Members
    unsigned int initial; // offset 0x10, size 0x4
};
// Range: 0x800CEDA8 -> 0x800CEE00
void zReferenceInit(struct zReference * t /* r30 */, struct zReferenceAsset * a /* r31 */) {}

// Range: 0x800CEE00 -> 0x800CEE5C
void zReferenceEventCB(struct xBase * from /* r0 */, struct xBase * to /* r0 */, unsigned int toEvent /* r0 */, const float * toParam /* r0 */, struct xBase * toParamWidget /* r0 */, unsigned int toParamWidgetID /* r0 */) {
    // Local variables
    struct zReference * ref; // r0
}


