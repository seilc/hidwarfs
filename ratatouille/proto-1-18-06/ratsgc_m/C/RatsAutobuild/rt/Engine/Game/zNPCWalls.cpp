/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCWalls.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C029C -> 0x801C06E4
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

    unsigned char Intersects(const struct xVec3 & iPointA, const struct xVec3 & iDirection, float & oDistRatio, struct xVec3 & oIPoint, struct xVec3 & oNormal);

    // Members
    struct zNPCWallsAsset * npcWallsAsset; // offset 0x10, size 0x4
    class zWall * walls; // offset 0x14, size 0x4
    int numberOfWalls; // offset 0x18, size 0x4
};
// Range: 0x801C029C -> 0x801C02EC
void zNPCWalls::InitDynamic(struct xBase & data /* r0 */, struct xDynAsset & asset /* r30 */, unsigned long asset_size /* r31 */) {}

// Range: 0x801C02EC -> 0x801C032C
// this: r30
zNPCWalls::zNPCWalls(struct zNPCWallsAsset * asset /* r31 */) {}

// Range: 0x801C032C -> 0x801C0398
// this: r30
void zNPCWalls::Setup() {
    // Local variables
    unsigned char areWallsInverted; // r31
    struct xBase * b; // r4
}

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
// total size: 0x30
struct xMovePoint : public xBase {
    // Members
    struct xMovePointAsset * asset; // offset 0x10, size 0x4
    struct xVec3 * pos; // offset 0x14, size 0x4
    struct xMovePoint * * nodes; // offset 0x18, size 0x4
    struct xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char pad[3]; // offset 0x25, size 0x3
    float delay; // offset 0x28, size 0x4
    struct xSpline3 * spl; // offset 0x2C, size 0x4
};
// Range: 0x801C0398 -> 0x801C0474
// this: r26
void zNPCWalls::Initialize(struct xGroup * group /* r27 */, unsigned char invertWallNormals /* r28 */) {
    // Local variables
    int i; // r29
    struct xBase * b; // r0
    struct xMovePoint * mp1; // r0
    struct xMovePoint * mp2; // r0
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
// Range: 0x801C0474 -> 0x801C0584
// this: r23
unsigned char zNPCWalls::Intersects(const struct xVec3 & iPointA /* r24 */, const struct xVec3 & iDirection /* r25 */, float & oDistRatio /* r26 */, struct xVec3 & oIPoint /* r27 */, struct xVec3 & oNormal /* r28 */) {
    // Local variables
    int closestWall; // r30
    struct xVec3 curPoint; // r1+0x18
    struct xVec3 closestPoint; // r1+0xC
    float ratioToThisWall; // r1+0x8
    float ratioToClosestWall; // f31
    int i; // r29
}

// total size: 0x1C
class zWall {
    // Functions
    void Initialize(struct xVec3 * point1, struct xVec3 * point2);

    unsigned char Intersects(const struct xVec3 & iPointA, const struct xVec3 & iDirection, float & oDistRatio, struct xVec3 & oIPoint);

    // Members
public:
    float x; // offset 0x0, size 0x4
    float z; // offset 0x4, size 0x4
    float dx; // offset 0x8, size 0x4
    float dz; // offset 0xC, size 0x4
    float nx; // offset 0x10, size 0x4
    float nz; // offset 0x14, size 0x4
    float length; // offset 0x18, size 0x4
};
// Range: 0x801C0584 -> 0x801C061C
// this: r31
void zWall::Initialize(struct xVec3 * point1 /* r0 */, struct xVec3 * point2 /* r0 */) {}

// Range: 0x801C061C -> 0x801C06E4
// this: r0
unsigned char zWall::Intersects(const struct xVec3 & iPointA /* r0 */, const struct xVec3 & iDirection /* r0 */, float & oDistRatio /* r0 */, struct xVec3 & oIPoint /* r7 */) {
    // Local variables
    float dx2; // f7
    float dz2; // f8
    float dxStart; // f4
    float dzStart; // f1
    float Bot; // f9
    float s; // f0
    float r; // f1
}


