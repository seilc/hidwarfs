/*
    Compile unit: E:\SD2\Game\flat\zTimer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int zTimerEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *); // size: 0x0, address: 0x196240
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class p2LinkAsset * link; // offset 0x8, size 0x4
    signed int (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *); // offset 0xC, size 0x4
};
// total size: 0x1C
class _zTimer : public xBase {
    // Members
public:
    class zTimerAsset * tasset; // offset 0x10, size 0x4
    unsigned char state; // offset 0x14, size 0x1
    unsigned char pad[3]; // offset 0x15, size 0x3
    float secondsLeft; // offset 0x18, size 0x4
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
// total size: 0xC
class zTimerAsset : public p2BaseAsset {
    // Members
public:
    float seconds; // offset 0x8, size 0x4
};
// total size: 0x20
class p2LinkAsset {
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
class p2BaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x0
class st_SERIAL_CLIENTINFO {};

/*
    Compile unit: E:\SD2\Game\flat\zTimer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001961F0 -> 0x00196240
*/
// Range: 0x1961F0 -> 0x196240
void zTimerUpdate(class xBase * to /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x1961F0 -> 0x196240
        class _zTimer * t; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zTimer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00196240 -> 0x001962D4
*/
// Range: 0x196240 -> 0x1962D4
signed int zTimerEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x196240 -> 0x1962D4
        class _zTimer * t; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zTimer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001962E0 -> 0x00196328
*/
// Range: 0x1962E0 -> 0x196328
void zTimerLoad(class _zTimer * ent /* r17 */, class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1962E0 -> 0x196328
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zTimer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00196330 -> 0x00196378
*/
// Range: 0x196330 -> 0x196378
void zTimerSave(class _zTimer * ent /* r17 */, class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x196330 -> 0x196378
    }
}


/*
    Compile unit: E:\SD2\Game\flat\zTimer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00196380 -> 0x001963EC
*/
// Range: 0x196380 -> 0x1963EC
void zTimerInit(void * b /* r17 */, void * tasset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x196380 -> 0x1963EC
    }
}


