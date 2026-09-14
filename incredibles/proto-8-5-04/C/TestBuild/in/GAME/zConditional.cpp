/*
    Compile unit: C:\TestBuild\in\GAME\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
class zVarEntry zVarEntryTable[]; // size: 0x0, address: 0x5060B0
void zConditionalEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x127C20
// total size: 0x18
class _zConditional : public xBase {
    // Members
public:
    class zCondAsset * asset; // offset 0x10, size 0x4
    class zVarEntry * varEntry; // offset 0x14, size 0x4
};
// total size: 0x1C
class xSerial {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int baseoff; // offset 0x4, size 0x4
    class st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    signed int warned; // offset 0xC, size 0x4
    signed int curele; // offset 0x10, size 0x4
    signed int bitidx; // offset 0x14, size 0x4
    signed int bittally; // offset 0x18, size 0x4
};
// total size: 0x18
class zCondAsset : public xBaseAsset {
    // Members
public:
    unsigned int constNum; // offset 0x8, size 0x4
    unsigned int expr1; // offset 0xC, size 0x4
    unsigned int op; // offset 0x10, size 0x4
    unsigned int value_asset; // offset 0x14, size 0x4
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
// total size: 0x10
class zVarEntry {
    // Members
public:
    unsigned int entry; // offset 0x0, size 0x4
    unsigned int varNameID; // offset 0x4, size 0x4
    char * varName; // offset 0x8, size 0x4
    unsigned int (* varCB)(void *); // offset 0xC, size 0x4
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
class st_SERIAL_CLIENTINFO {};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};

/*
    Compile unit: C:\TestBuild\in\GAME\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127C20 -> 0x00127D24
*/
// Range: 0x127C20 -> 0x127D24
void zConditionalEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x127C20 -> 0x127D24
        class _zConditional * t; // r16
        unsigned int event; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127D30 -> 0x00127E54
*/
// Range: 0x127D30 -> 0x127E54
unsigned int zConditional_Evaluate(class _zConditional * c /* r16 */) {
    /* anonymous block */ {
        // Range: 0x127D30 -> 0x127E54
        unsigned int temp; // r2
        void * context; // r2
        unsigned int id; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127E60 -> 0x00127F5C
*/
// Range: 0x127E60 -> 0x127F5C
unsigned int zConditional_GetCount(class _zConditional * c /* r19 */) {
    /* anonymous block */ {
        // Range: 0x127E60 -> 0x127F5C
        class zVarEntry * v; // r18
        void * context; // r2
        signed int i; // r17
        unsigned int id; // r2
        unsigned int temp; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127F60 -> 0x00127F68
*/
// Range: 0x127F60 -> 0x127F68
void zConditionalLoad(class _zConditional * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x127F60 -> 0x127F68
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127F70 -> 0x00127F78
*/
// Range: 0x127F70 -> 0x127F78
void zConditionalSave(class _zConditional * ent /* r2 */, class xSerial * s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x127F70 -> 0x127F78
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00127F80 -> 0x00128024
*/
// Range: 0x127F80 -> 0x128024
void zConditionalInit(class xBase * b /* r2 */, class zCondAsset * asset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x127F80 -> 0x128024
        class _zConditional * c; // r16
        signed int i; // r6
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zConditional.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00128030 -> 0x00128038
*/
// Range: 0x128030 -> 0x128038
void zConditionalInit(void * b /* r2 */, void * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x128030 -> 0x128038
    }
}


