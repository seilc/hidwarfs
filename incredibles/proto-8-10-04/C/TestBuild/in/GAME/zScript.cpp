/*
    Compile unit: C:\TestBuild\in\GAME\zScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
void zScriptEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x153E40
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
// total size: 0x24
class _zScript : public xBase {
    // Members
public:
    class xScriptAsset * tasset; // offset 0x10, size 0x4
    class xScriptEventAsset * current; // offset 0x14, size 0x4
    unsigned char state; // offset 0x18, size 0x1
    unsigned char pad[3]; // offset 0x19, size 0x3
    float time; // offset 0x1C, size 0x4
    float scaleFactor; // offset 0x20, size 0x4
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
// total size: 0x14
class xScriptAsset : public xBaseAsset {
    // Members
public:
    float scaleFactor; // offset 0x8, size 0x4
    unsigned int eventCount; // offset 0xC, size 0x4
    unsigned char loop; // offset 0x10, size 0x1
    unsigned char pad[3]; // offset 0x11, size 0x3
};
// total size: 0x20
class xScriptEventAsset {
    // Members
public:
    float time; // offset 0x0, size 0x4
    unsigned int widget; // offset 0x4, size 0x4
    unsigned int paramEvent; // offset 0x8, size 0x4
    float param[4]; // offset 0xC, size 0x10
    unsigned int paramWidget; // offset 0x1C, size 0x4
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
// total size: 0x0
class xSerial {};

/*
    Compile unit: C:\TestBuild\in\GAME\zScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00153C60 -> 0x00153CD0
*/
// Range: 0x153C60 -> 0x153CD0
void zScriptUpdate(class xBase * to /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x153C60 -> 0x153CD0
        class _zScript * t; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00153CD0 -> 0x00153E40
*/
// Range: 0x153CD0 -> 0x153E40
static unsigned char zScriptExecuteEvents(class _zScript * t /* r19 */, float start /* r21 */, float end /* r20 */) {
    /* anonymous block */ {
        // Range: 0x153CD0 -> 0x153E40
        signed int i; // r18
        signed int eventCount; // r2
        class xScriptEventAsset * currentScript; // r17
        class xBase * b; // r20
        class xBase * paramWidget; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00153E40 -> 0x00153FE4
*/
// Range: 0x153E40 -> 0x153FE4
void zScriptEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x153E40 -> 0x153FE4
        class _zScript * t; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00153FF0 -> 0x00153FF8
*/
// Range: 0x153FF0 -> 0x153FF8
void zScriptLoad(class _zScript * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x153FF0 -> 0x153FF8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00154000 -> 0x00154008
*/
// Range: 0x154000 -> 0x154008
void zScriptSave(class _zScript * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x154000 -> 0x154008
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00154010 -> 0x001540B0
*/
// Range: 0x154010 -> 0x1540B0
void zScriptInit(void * b /* r16 */, void * tasset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x154010 -> 0x1540B0
    }
}


