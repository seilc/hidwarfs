/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char zEventLogBuf[20][256]; // size: 0x1400, address: 0x5C3CB0
signed int zEventLogBufInit; // size: 0x4, address: 0x0
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
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
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282AE0 -> 0x00282C7C
*/
// Range: 0x282AE0 -> 0x282C7C
void zEntEvent(class xBase * from /* r20 */, class xBase * to /* r19 */, unsigned int toEvent /* r18 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */, signed int forceEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x282AE0 -> 0x282C7C
        class xLinkAsset * idx; // r17
        signed int i; // r16
        class xBase * sendTo; // r21
        class xBase * b; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282C80 -> 0x00282CA0
*/
// Range: 0x282C80 -> 0x282CA0
void zEntEvent(class xBase * from /* r2 */, class xBase * to /* r5 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x282C80 -> 0x282CA0
    }
}


/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282CA0 -> 0x00282CC0
*/
// Range: 0x282CA0 -> 0x282CC0
void zEntEvent(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x282CA0 -> 0x282CC0
    }
}


/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282CC0 -> 0x00282CE0
*/
// Range: 0x282CC0 -> 0x282CE0
void zEntEvent(class xBase * to /* r4 */, unsigned int toEvent /* r5 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */) {
    /* anonymous block */ {
        // Range: 0x282CC0 -> 0x282CE0
    }
}


/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282CE0 -> 0x00282D00
*/
// Range: 0x282CE0 -> 0x282D00
void zEntEvent(class xBase * to /* r4 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x282CE0 -> 0x282D00
    }
}


/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282D00 -> 0x00282D44
*/
// Range: 0x282D00 -> 0x282D44
void zEntEvent(class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float toParam0 /* r29+0x20 */, float toParam1 /* r29+0x20 */, float toParam2 /* r29+0x20 */, float toParam3 /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x282D00 -> 0x282D44
        float toParam[4]; // r29+0x10
    }
}


/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282D50 -> 0x00282D70
*/
// Range: 0x282D50 -> 0x282D70
void zEntEvent(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x282D50 -> 0x282D70
    }
}


/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282D70 -> 0x00282DC8
*/
// Range: 0x282D70 -> 0x282DC8
void zEntEvent(unsigned int toID /* r2 */, unsigned int toEvent /* r16 */, float toParam0 /* r29+0x30 */, float toParam1 /* r29+0x30 */, float toParam2 /* r29+0x30 */, float toParam3 /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x282D70 -> 0x282DC8
        class xBase * sendTo; // r2
        float toParam[4]; // r29+0x20
    }
}


/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282DD0 -> 0x00282E18
*/
// Range: 0x282DD0 -> 0x282E18
void zEntEvent(unsigned int toID /* r2 */, unsigned int toEvent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x282DD0 -> 0x282E18
        class xBase * sendTo; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xEvent.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282E20 -> 0x00282E70
*/
// Range: 0x282E20 -> 0x282E70
void zEntEvent(char * to /* r2 */, unsigned int toEvent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x282E20 -> 0x282E70
        unsigned int id; // r2
        class xBase * sendTo; // r2
    }
}


