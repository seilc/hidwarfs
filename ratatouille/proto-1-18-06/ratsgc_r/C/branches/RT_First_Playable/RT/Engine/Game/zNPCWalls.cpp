/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zNPCWalls.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B73B0 -> 0x802B7E0C
*/
static char __FUNCTION__[12]; // size: 0xC, address: 0x80C065D8
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
struct zNPCWallsAsset : public xDynAsset {
    // Members
    unsigned int npcWallsGroup; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
};
// total size: 0x1C
class zNPCWalls : public xBase {
    // Functions
    zNPCWalls(struct zNPCWallsAsset * asset);

    void Setup();

    void Initialize(struct xGroup * group, unsigned char invertWallNormals);

    unsigned char IntersectsRayXZ(const struct xVec3 & iRayStart, const struct xVec3 & iRayDelta, float & oDistRatio, struct xVec3 & oIPoint, struct xVec3 & oNormal);

    unsigned char IntersectsSweptCircle(class zSweptCircle & swCircle, int & wallID);

    // Members
    struct zNPCWallsAsset * npcWallsAsset; // offset 0x10, size 0x4
    class zWall * walls; // offset 0x14, size 0x4
    int numberOfWalls; // offset 0x18, size 0x4
};
// Range: 0x802B73B0 -> 0x802B7548
void zNPCWalls::InitDynamic(struct xBase & data /* r29 */, struct xDynAsset & asset /* r30 */, unsigned long asset_size /* r31 */) {
    // Local variables
    unsigned long expected_asset_size; // r28

    // References
    // -> static char __FUNCTION__[12];
}

// Range: 0x802B7548 -> 0x802B7590
// this: r30
zNPCWalls::zNPCWalls(struct zNPCWallsAsset * asset /* r31 */) {}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80C065E4
// Range: 0x802B7590 -> 0x802B7690
// this: r30
void zNPCWalls::Setup() {
    // Local variables
    unsigned char areWallsInverted; // r31
    struct xBase * b; // r4

    // References
    // -> static char __FUNCTION__[6];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C065EC
// total size: 0xC
struct xGroupAsset : public xBaseAsset {
    // Members
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x24
struct xGroup : public xBase {
    // Members
    struct xGroupAsset * asset; // offset 0x10, size 0x4
    struct xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    unsigned int ptr_last_index; // offset 0x1C, size 0x4
    int flg_group; // offset 0x20, size 0x4
};
// total size: 0x28
struct xMovePointAsset : public xBaseAsset {
    // Members
    struct xVec3 pos; // offset 0x8, size 0xC
    unsigned short wt; // offset 0x14, size 0x2
    unsigned char on; // offset 0x16, size 0x1
    unsigned char bezIndex; // offset 0x17, size 0x1
    unsigned char flg_props; // offset 0x18, size 0x1
    unsigned char pad; // offset 0x19, size 0x1
    unsigned short numPoints; // offset 0x1A, size 0x2
    float delay; // offset 0x1C, size 0x4
    float zoneRadius; // offset 0x20, size 0x4
    float arenaRadius; // offset 0x24, size 0x4
};
// total size: 0x0
struct xSpline3 {};
// total size: 0x34
struct xMovePoint : public xBase {
    // Members
    struct xMovePointAsset * asset; // offset 0x10, size 0x4
    struct xVec3 * pos; // offset 0x14, size 0x4
    struct xMovePoint * * nodes; // offset 0x18, size 0x4
    struct xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char pad[3]; // offset 0x25, size 0x3
    unsigned int start_point_of_id; // offset 0x28, size 0x4
    float delay; // offset 0x2C, size 0x4
    struct xSpline3 * spl; // offset 0x30, size 0x4
};
// Range: 0x802B7690 -> 0x802B77FC
// this: r27
void zNPCWalls::Initialize(struct xGroup * group /* r28 */, unsigned char invertWallNormals /* r29 */) {
    // Local variables
    int i; // r30
    struct xBase * b; // r0
    struct xMovePoint * mp1; // r0
    struct xMovePoint * mp2; // r0

    // References
    // -> static char __FUNCTION__[11];
}

// total size: 0x24
class zWall {
    // Functions
    void Initialize(struct xVec2 & point1, struct xVec2 & point2);

    unsigned char IntersectsRay(const struct xVec2 & iRayStart, const struct xVec2 & iRayDelta, float & oDistRatio, struct xVec2 & oIPoint);

    float IntersectsLine(const struct xVec2 & iLinePoint, const struct xVec2 & iLineDelta);

    unsigned char IntersectsSweptCircle(class zSweptCircle & swCircle);

    // Members
public:
    struct xVec2 start; // offset 0x0, size 0x8
    struct xVec2 end; // offset 0x8, size 0x8
    struct xVec2 dir; // offset 0x10, size 0x8
    struct xVec2 normal; // offset 0x18, size 0x8
    float length; // offset 0x20, size 0x4
};
// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// Range: 0x802B77FC -> 0x802B7924
// this: r25
unsigned char zNPCWalls::IntersectsRayXZ(const struct xVec3 & iRayStart /* r0 */, const struct xVec3 & iRayDelta /* r29 */, float & oDistRatio /* r26 */, struct xVec3 & oIPoint /* r27 */, struct xVec3 & oNormal /* r28 */) {
    // Local variables
    int closestWall; // r30
    struct xVec2 curPoint; // r1+0x24
    struct xVec2 closestPoint; // r1+0x1C
    float ratioToThisWall; // r1+0x8
    float ratioToClosestWall; // f31
    struct xVec2 iRayStart2D; // r1+0x14
    struct xVec2 iRayDelta2D; // r1+0xC
    int i; // r29
}

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
// Range: 0x802B7924 -> 0x802B799C
// this: r27
unsigned char zNPCWalls::IntersectsSweptCircle(class zSweptCircle & swCircle /* r28 */, int & wallID /* r29 */) {
    // Local variables
    int i; // r30
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80C065F8
// Range: 0x802B799C -> 0x802B7A70
// this: r29
void zWall::Initialize(struct xVec2 & point1 /* r30 */, struct xVec2 & point2 /* r31 */) {
    // References
    // -> static char __FUNCTION__[11];
}

// Range: 0x802B7A70 -> 0x802B7B30
// this: r0
unsigned char zWall::IntersectsRay(const struct xVec2 & iRayStart /* r0 */, const struct xVec2 & iRayDelta /* r0 */, float & oDistRatio /* r0 */, struct xVec2 & oIPoint /* r0 */) {
    // Local variables
    float dx; // f6
    float dy; // f7
    float dx2; // f8
    float dy2; // f9
    float dxStart; // f10
    float dyStart; // f5
    float Bot; // f11
    float s; // f0
    float r; // f0
}

int __float_max[]; // size: 0x0, address: 0x80C06AB8
// Range: 0x802B7B30 -> 0x802B7B9C
// this: r0
float zWall::IntersectsLine(const struct xVec2 & iLinePoint /* r0 */, const struct xVec2 & iLineDelta /* r0 */) {
    // Local variables
    float dx2; // f5
    float dy2; // f6
    float dxStart; // f7
    float dyStart; // f1
    float Bot; // f2

    // References
    // -> int __float_max[];
}

// total size: 0x40
class zSweptCircle {
    // Members
public:
    struct xVec2 start; // offset 0x0, size 0x8
    float radius; // offset 0x8, size 0x4
    float dist; // offset 0xC, size 0x4
    struct xVec2 dir; // offset 0x10, size 0x8
    struct xVec2 end; // offset 0x18, size 0x8
    struct xVec2 left; // offset 0x20, size 0x8
    float curDist; // offset 0x28, size 0x4
    struct xVec2 curEnd; // offset 0x2C, size 0x8
    unsigned char hitSomething; // offset 0x34, size 0x1
    struct xVec2 contactPoint; // offset 0x38, size 0x8
};
// Range: 0x802B7B9C -> 0x802B7E0C
// this: r30
unsigned char zWall::IntersectsSweptCircle(class zSweptCircle & swCircle /* r31 */) {
    // Local variables
    float R; // f30
    struct xVec2 circleStartToWallStart; // r1+0x20
    struct xVec2 circleEndToWallStart; // r1+0x18
    float circleStartDistance; // f0
    float circleEndDistance; // f0
    float circleStartAlong; // f30
    struct xVec2 LineSweepStart; // r1+0x10
    float s; // f0
    struct xVec2 toStart; // r1+0x8
    float distAway; // f0
    float startAlong; // f30
    float backDist; // f0
}

// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x4
struct xColor_tag {
    // Members
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        struct RwRGBA rgba; // offset 0x0, size 0x4
    };
};

