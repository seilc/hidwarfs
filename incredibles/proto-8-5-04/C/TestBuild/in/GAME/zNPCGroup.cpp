/*
    Compile unit: C:\TestBuild\in\GAME\zNPCGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
void EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x447220
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
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x18
class group : public xBase {
    // Members
public:
    class group_asset * asset; // offset 0x10, size 0x4
    signed int attacking_count; // offset 0x14, size 0x4
};
// total size: 0x14
class group_asset : public xDynAsset {
    // Members
public:
    signed int max_attackers; // offset 0x10, size 0x4
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
    Compile unit: C:\TestBuild\in\GAME\zNPCGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004471D0 -> 0x00447214
*/
// Range: 0x4471D0 -> 0x447214
void init(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4471D0 -> 0x447214
        class group * new_group; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zNPCGroup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00447220 -> 0x00447228
*/
// Range: 0x447220 -> 0x447228
void EventCB() {
    /* anonymous block */ {
        // Range: 0x447220 -> 0x447228
    }
}


