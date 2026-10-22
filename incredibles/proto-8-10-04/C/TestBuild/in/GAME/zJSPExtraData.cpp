/*
    Compile unit: C:\TestBuild\in\GAME\zJSPExtraData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
class jspGroupPair sJspGroupPairs[10]; // size: 0xA0, address: 0x6B61D0
signed int sNumPairs; // size: 0x4, address: 0x612A80
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
// total size: 0x18
class zJSPExtraDataAsset : public xDynAsset {
    // Members
public:
    unsigned int jspID; // offset 0x10, size 0x4
    unsigned int groupID; // offset 0x14, size 0x4
};
// total size: 0x10
class zJSPExtraData : public xBase {};
// total size: 0x10
class jspGroupPair {
    // Members
public:
    unsigned int jspID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    class xBase * pGroup; // offset 0x8, size 0x4
    class xBase * pWidget; // offset 0xC, size 0x4
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};

/*
    Compile unit: C:\TestBuild\in\GAME\zJSPExtraData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00483CB0 -> 0x00483D50
*/
// Range: 0x483CB0 -> 0x483D50
void Load(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x483CB0 -> 0x483D50
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zJSPExtraData.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00483D50 -> 0x00483EC4
*/
// Range: 0x483D50 -> 0x483EC4
void ShowAssociatedGroup(unsigned int jspAssetId /* r19 */, unsigned char show /* r18 */) {
    /* anonymous block */ {
        // Range: 0x483D50 -> 0x483EC4
        signed int i; // r17
    }
}


