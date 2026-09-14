/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xTimer.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800757C4 -> 0x80075BA0
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
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
struct xTimerAsset : public xBaseAsset {
    // Members
    float seconds; // offset 0x8, size 0x4
    float randomRange; // offset 0xC, size 0x4
};
// Range: 0x800757C4 -> 0x80075850
static float GetRandomizedTime(struct xTimerAsset * tasset /* r30 */) {
    // Local variables
    unsigned int halfRangeMilli; // r0
    int offset; // r0
}

// Range: 0x80075850 -> 0x80075870
void xTimerInit(void * b /* r0 */, void * tasset /* r0 */) {}

static unsigned int sPauseTimerHash[20]; // size: 0x50, address: 0x802D3400
// Range: 0x80075870 -> 0x8007591C
static int xTimer_ObjIDIsPauseTimer(unsigned int id /* r0 */) {
    // Local variables
    int bar; // r0
    int i; // r0

    // References
    // -> static unsigned int sPauseTimerHash[20];
}

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
// total size: 0x1C
struct xTimer : public xBase {
    // Members
    struct xTimerAsset * tasset; // offset 0x10, size 0x4
    unsigned char state; // offset 0x14, size 0x1
    unsigned char runsInPause; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    float secondsLeft; // offset 0x18, size 0x4
};
// Range: 0x8007591C -> 0x800759A8
void xTimerInit(struct xBase * b /* r30 */, struct xTimerAsset * tasset /* r31 */) {
    // Local variables
    struct xTimer * t; // r0
}

// Range: 0x800759A8 -> 0x800759F4
void xTimerReset(struct xTimer * t /* r31 */) {}

// total size: 0x0
struct st_SERIAL_CLIENTINFO {};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x1C
struct xSerial {
    // Members
private:
    unsigned int idtag; // offset 0x0, size 0x4
    int baseoff; // offset 0x4, size 0x4
    struct st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    int warned; // offset 0xC, size 0x4
    int curele; // offset 0x10, size 0x4
    int bitidx; // offset 0x14, size 0x4
    int bittally; // offset 0x18, size 0x4
};
// Range: 0x800759F4 -> 0x80075A3C
void xTimerSave(struct xTimer * ent /* r30 */, struct xSerial * s /* r31 */) {}

// Range: 0x80075A3C -> 0x80075A84
void xTimerLoad(struct xTimer * ent /* r30 */, struct xSerial * s /* r31 */) {}

// Range: 0x80075A84 -> 0x80075B4C
void xTimerEventCB(struct xBase * to /* r4 */, unsigned int toEvent /* r0 */, const float * toParam /* r0 */) {
    // Local variables
    struct xTimer * t; // r4
}

// Range: 0x80075B4C -> 0x80075BA0
void xTimerUpdate(struct xBase * to /* r3 */, float dt /* f0 */) {
    // Local variables
    struct xTimer * t; // r4
}


