/*
    Compile unit: C:\TestBuild\in\GAME\zProgressScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x611E6C
void zProgressScript_EventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x4296B0
// total size: 0x24
class xProgressScriptEventAsset {
    // Members
public:
    float percent; // offset 0x0, size 0x4
    signed int flags; // offset 0x4, size 0x4
    unsigned int widget; // offset 0x8, size 0x4
    unsigned int paramEvent; // offset 0xC, size 0x4
    float param[4]; // offset 0x10, size 0x10
    unsigned int paramWidget; // offset 0x20, size 0x4
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
// total size: 0x28
class zProgressScript : public xBase {
    // Members
public:
    class xProgressScriptAsset * sasset; // offset 0x10, size 0x4
    class xProgressScriptEventAsset * events; // offset 0x14, size 0x4
    signed int numFlagWords; // offset 0x18, size 0x4
    unsigned int * flags; // offset 0x1C, size 0x4
    float percent; // offset 0x20, size 0x4
    signed int current; // offset 0x24, size 0x4
};
// total size: 0xC
class xProgressScriptAsset : public xBaseAsset {
    // Members
public:
    unsigned int eventCount; // offset 0x8, size 0x4
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
// total size: 0x0
class xSerial {};

/*
    Compile unit: C:\TestBuild\in\GAME\zProgressScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004296B0 -> 0x0042973C
*/
// Range: 0x4296B0 -> 0x42973C
void zProgressScript_EventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4296B0 -> 0x42973C
        class zProgressScript * s; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zProgressScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00429740 -> 0x00429748
*/
// Range: 0x429740 -> 0x429748
void zProgressScript_Load(class zProgressScript * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x429740 -> 0x429748
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zProgressScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00429750 -> 0x00429758
*/
// Range: 0x429750 -> 0x429758
void zProgressScript_Save(class zProgressScript * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x429750 -> 0x429758
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zProgressScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00429760 -> 0x004297A8
*/
// Range: 0x429760 -> 0x4297A8
void zProgressScript_MoveTo(class zProgressScript * s /* r2 */, float percent /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x429760 -> 0x4297A8
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zProgressScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004297B0 -> 0x00429910
*/
// Range: 0x4297B0 -> 0x429910
void zProgressScript_WalkBack(class zProgressScript * s /* r20 */, float percent /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4297B0 -> 0x429910
        class xProgressScriptEventAsset * event; // r2
        class xBase * b; // r19
        class xBase * paramWidget; // r2
        signed int index; // r2
        signed int bit; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zProgressScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00429910 -> 0x00429A88
*/
// Range: 0x429910 -> 0x429A88
void zProgressScript_WalkForward(class zProgressScript * s /* r20 */, float percent /* r20 */) {
    /* anonymous block */ {
        // Range: 0x429910 -> 0x429A88
        class xProgressScriptEventAsset * event; // r2
        class xBase * b; // r19
        class xBase * paramWidget; // r2
        signed int index; // r2
        signed int bit; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zProgressScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00429A90 -> 0x00429B00
*/
// Range: 0x429A90 -> 0x429B00
void zProgressScript_JumpTo(class zProgressScript * s /* r2 */, float percent /* r29 */) {
    /* anonymous block */ {
        // Range: 0x429A90 -> 0x429B00
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zProgressScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00429B00 -> 0x00429BFC
*/
// Range: 0x429B00 -> 0x429BFC
void zProgressScript_Init(class xBase * b /* r17 */, class xProgressScriptAsset * sasset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x429B00 -> 0x429BFC
        class zProgressScript * s; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zProgressScript.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00429C00 -> 0x00429C08
*/
// Range: 0x429C00 -> 0x429C08
void zProgressScript_Init(void * b /* r2 */, void * sasset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x429C00 -> 0x429C08
    }
}


