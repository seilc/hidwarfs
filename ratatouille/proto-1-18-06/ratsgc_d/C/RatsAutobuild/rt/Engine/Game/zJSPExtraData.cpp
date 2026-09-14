/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zJSPExtraData.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802398B0 -> 0x80239D7C
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
struct jspGroupPair sJspGroupPairs[10]; // size: 0xA0, address: 0x80D187A0
int sNumPairs; // size: 0x4, address: 0x80D6B068
static char __FUNCTION__[24]; // size: 0x18, address: 0x80523E00
// total size: 0x10
struct zJSPExtraData : public xBase {
    // Functions
    void LoadPrivate(const class zJSPExtraDataAsset & myAsset);

    // Static members
    static int sNumPairs; // size: 0x4
    static struct jspGroupPair sJspGroupPairs[10]; // size: 0xA0
    static int MAX_PAIRS; // size: 0x4
};
// Range: 0x802398B0 -> 0x802399F0
void zJSPExtraData::ShowAllAssociatedGroups(unsigned char show /* r1+0x8 */) {
    // Local variables
    int i; // r31

    // References
    // -> int sNumPairs;
    // -> struct jspGroupPair sJspGroupPairs[10];
    // -> static char __FUNCTION__[24];
}

// Range: 0x802399F0 -> 0x80239BD4
void zJSPExtraData::ShowAssociatedGroup(unsigned int jspAssetId /* r1+0x8 */, unsigned char show /* r1+0xC */) {
    // Local variables
    int i; // r31

    // References
    // -> int sNumPairs;
    // -> struct jspGroupPair sJspGroupPairs[10];
}

// Range: 0x80239BD4 -> 0x80239BE0
void zJSPExtraData::ClearGroupAssociations() {
    // References
    // -> int sNumPairs;
}

static char __FUNCTION__[8]; // size: 0x8, address: 0x80D64E78
// Range: 0x80239BE0 -> 0x80239CE4
void zJSPExtraData::AddPair(unsigned int jspID /* r1+0x8 */, unsigned int groupID /* r1+0xC */, struct zJSPExtraData * widget /* r1+0x10 */) {
    // References
    // -> int sNumPairs;
    // -> struct jspGroupPair sJspGroupPairs[10];
    // -> static char __FUNCTION__[8];
}

// Range: 0x80239CE4 -> 0x80239D14
void zJSPExtraData::Load(struct xBase & data /* r1+0x8 */, struct xDynAsset & asset /* r1+0xC */) {}

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
// Range: 0x80239D14 -> 0x80239D7C
// this: r31
void zJSPExtraData::LoadPrivate(const class zJSPExtraDataAsset & myAsset /* r30 */) {}


