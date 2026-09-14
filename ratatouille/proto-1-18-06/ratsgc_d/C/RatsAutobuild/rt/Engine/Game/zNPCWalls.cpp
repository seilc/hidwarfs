/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCWalls.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80335D84 -> 0x803365E4
*/
static char __FUNCTION__[12]; // size: 0xC, address: 0x80D67B18
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
// Range: 0x80335D84 -> 0x80335F50
void zNPCWalls::InitDynamic(struct xBase & data /* r1+0x8 */, struct xDynAsset & asset /* r31 */, unsigned long asset_size /* r28 */) {
    // Local variables
    unsigned long expected_asset_size; // r29

    // References
    // -> static char __FUNCTION__[12];
}

// Range: 0x80335F50 -> 0x80335F98
// this: r31
zNPCWalls::zNPCWalls(struct zNPCWallsAsset * asset /* r30 */) {}

static char __FUNCTION__[6]; // size: 0x6, address: 0x80D67B24
// Range: 0x80335F98 -> 0x803360D8
// this: r31
void zNPCWalls::Setup() {
    // Local variables
    unsigned char areWallsInverted; // r29
    struct xBase * b; // r30
    struct xGroup * wallsGroup; // r28

    // References
    // -> static char __FUNCTION__[6];
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D67B2A
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
// Range: 0x803360D8 -> 0x80336270
// this: r31
void zNPCWalls::Initialize(struct xGroup * group /* r26 */, unsigned char invertWallNormals /* r1+0x8 */) {
    // Local variables
    int i; // r30
    struct xBase * b; // r27
    struct xMovePoint * mp1; // r29
    struct xMovePoint * mp2; // r28

    // References
    // -> static char __FUNCTION__[11];
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
// Range: 0x80336270 -> 0x80336380
// this: r31
unsigned char zNPCWalls::Intersects(const struct xVec3 & iPointA /* r1+0x8 */, const struct xVec3 & iDirection /* r1+0xC */, float & oDistRatio /* r27 */, struct xVec3 & oIPoint /* r1+0x10 */, struct xVec3 & oNormal /* r29 */) {
    // Local variables
    int closestWall; // r28
    struct xVec3 curPoint; // r1+0x24
    struct xVec3 closestPoint; // r1+0x18
    float ratioToThisWall; // r1+0x14
    float ratioToClosestWall; // f31
    int i; // r30
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
// Range: 0x80336380 -> 0x80336434
// this: r31
void zWall::Initialize(struct xVec3 * point1 /* r30 */, struct xVec3 * point2 /* r29 */) {}

// Range: 0x80336434 -> 0x803365E4
// this: r31
unsigned char zWall::Intersects(const struct xVec3 & iPointA /* r28 */, const struct xVec3 & iDirection /* r29 */, float & oDistRatio /* r30 */, struct xVec3 & oIPoint /* r1+0x8 */) {
    // Local variables
    float dx2; // f29
    float dz2; // f28
    float dxStart; // f27
    float dzStart; // f26
    float Bot; // f30
    float sTop; // f24
    float s; // f25
    float rTop; // f23
    float r; // f31
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

