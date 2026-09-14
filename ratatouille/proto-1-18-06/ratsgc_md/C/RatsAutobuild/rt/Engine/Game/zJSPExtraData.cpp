/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zJSPExtraData.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80126AB8 -> 0x80126D04
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
// total size: 0x10
struct jspGroupPair {
    // Members
    unsigned int jspID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    struct xBase * pGroup; // offset 0x8, size 0x4
    struct xBase * pWidget; // offset 0xC, size 0x4
};
struct jspGroupPair sJspGroupPairs[10]; // size: 0xA0, address: 0x80380708
int sNumPairs; // size: 0x4, address: 0x803C2D88
// total size: 0x10
struct zJSPExtraData : public xBase {
    // Functions
    void LoadPrivate(const class zJSPExtraDataAsset & myAsset);

    // Static members
    static int sNumPairs; // size: 0x4
    static struct jspGroupPair sJspGroupPairs[10]; // size: 0xA0
    static int MAX_PAIRS; // size: 0x4
};
// Range: 0x80126AB8 -> 0x80126B4C
void zJSPExtraData::ShowAllAssociatedGroups(unsigned char show /* r3 */) {
    // Local variables
    int i; // r27

    // References
    // -> int sNumPairs;
    // -> struct jspGroupPair sJspGroupPairs[10];
}

// Range: 0x80126B4C -> 0x80126C44
void zJSPExtraData::ShowAssociatedGroup(unsigned int jspAssetId /* r25 */, unsigned char show /* r26 */) {
    // Local variables
    int i; // r27

    // References
    // -> int sNumPairs;
    // -> struct jspGroupPair sJspGroupPairs[10];
}

// Range: 0x80126C44 -> 0x80126C50
void zJSPExtraData::ClearGroupAssociations() {
    // References
    // -> int sNumPairs;
}

// Range: 0x80126C50 -> 0x80126C84
void zJSPExtraData::AddPair(unsigned int jspID /* r0 */, unsigned int groupID /* r0 */, struct zJSPExtraData * widget /* r0 */) {
    // References
    // -> int sNumPairs;
    // -> struct jspGroupPair sJspGroupPairs[10];
}

// Range: 0x80126C84 -> 0x80126CA4
void zJSPExtraData::Load(struct xBase & data /* r0 */, struct xDynAsset & asset /* r0 */) {}

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
// total size: 0x18
class zJSPExtraDataAsset : public xDynAsset {
    // Members
public:
    unsigned int jspID; // offset 0x10, size 0x4
    unsigned int groupID; // offset 0x14, size 0x4
};
// Range: 0x80126CA4 -> 0x80126D04
// this: r30
void zJSPExtraData::LoadPrivate(const class zJSPExtraDataAsset & myAsset /* r31 */) {}


