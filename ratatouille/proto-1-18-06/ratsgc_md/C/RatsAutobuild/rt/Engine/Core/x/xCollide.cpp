/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCollide.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800150FC -> 0x8001AFEC
*/
enum _xCollsIdx {
    k_XCOLLS_IDX_FLOOR = 0,
    k_XCOLLS_IDX_CEIL = 1,
    k_XCOLLS_IDX_FRONT = 2,
    k_XCOLLS_IDX_LEFT = 3,
    k_XCOLLS_IDX_REAR = 4,
    k_XCOLLS_IDX_RIGHT = 5,
    k_XCOLLS_IDX_COUNT = 6,
};
// Range: 0x800150FC -> 0x80015270
enum _xCollsIdx xCollideGetCollsIdx(const struct xCollis * coll /* r0 */, const struct xVec3 * tohit /* r30 */, const struct xMat3x3 * mat /* r31 */) {
    // Local variables
    float local_x; // f3
    float local_z; // f1
}

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
struct xVec3 g_O3; // size: 0xC, address: 0x803C5038
// total size: 0x2C
struct xIsect {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    struct xVec3 point; // offset 0x10, size 0xC
    struct xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
};
// Range: 0x80015270 -> 0x800153C8
unsigned int xSphereHitsSphere(const struct xSphere * a /* r30 */, const struct xSphere * b /* r4 */, struct xCollis * coll /* r31 */) {
    // Local variables
    struct xIsect isx; // r1+0x8

    // References
    // -> struct xVec3 g_O3;
}

// Range: 0x800153C8 -> 0x800154E8
unsigned int xSphereHitsBox(const struct xSphere * a /* r0 */, const struct xBox * b /* r4 */, struct xCollis * coll /* r31 */) {
    // Local variables
    struct xIsect isx; // r1+0x8

    // References
    // -> struct xVec3 g_O3;
}

// total size: 0x10
struct xSphere {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x30
struct xMat3x3 {
    // Members
    struct xVec3 right; // offset 0x0, size 0xC
    int flags; // offset 0xC, size 0x4
    struct xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x40
struct xMat4x3 : public xMat3x3 {
    // Members
    struct xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x800154E8 -> 0x800158B4
unsigned int xSphereHitsOBB_nu(const struct xSphere * s /* r28 */, const struct xBox * b /* r29 */, const struct xMat4x3 * m /* r30 */, struct xCollis * coll /* r31 */) {
    // Local variables
    struct xSphere xfs; // r1+0x10
    struct xMat4x3 mnormal; // r1+0x40
    float len2; // f1
    float len_inv; // f4
    float len2; // f1
    float len_inv; // f4
    float len2; // f1
    float len_inv; // f4
    struct xBox sbox; // r1+0x20
}

enum Dimension {
    XDIM = 0,
    YDIM = 1,
    ZDIM = 2,
};
// Range: 0x800158B4 -> 0x80015B54
static int PointWithinTriangle(struct xVec3 * _pt /* r0 */, struct xVec3 * * _tri /* r0 */, struct xVec3 * _normal /* r0 */) {
    // Local variables
    struct RwV3d * pt; // r0
    struct RwV3d * * tri; // r0
    struct RwV3d * normal; // r0
    enum Dimension dimension; // r5
    float absX; // f0
    float absY; // f2
    float absZ; // f3
    int inside; // r0
    int i; // r8
    int j; // r9
}

// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x80015B54 -> 0x80015C4C
static void FindNearestPointOnLine(struct xVec3 * result /* r31 */, struct xVec3 * point /* r0 */, struct xVec3 * start /* r5 */, struct xVec3 * end /* r6 */) {
    // Local variables
    float mu; // f2
    struct RwV3d candidate; // r1+0x8
    float lineLength2; // f0
}

// Range: 0x80015C4C -> 0x80015DBC
static void properSphereIsectTri(const struct xVec3 * center /* r26 */, float radius /* f29 */, struct xVec3 * tohit /* r27 */, float * dist_ptr /* r28 */, struct RpCollisionTriangle * tri /* r29 */) {
    // Local variables
    struct xVec3 projPoint; // r1+0x20
    float dist2plane; // f31
    float dist; // f30
    float dist2; // f30
    float radius2; // f31
    unsigned int i; // r30
    struct xVec3 vertClosestPoint; // r1+0x14
    float vertDist2; // f1
    struct xVec3 temp; // r1+0x8
}

static int sCollidingJSP; // size: 0x4, address: 0x803C0CA8
// total size: 0x4
struct RpVertexNormal {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x88
struct RpWorldSector {
    // Members
    int type; // offset 0x0, size 0x4
    struct RpTriangle * triangles; // offset 0x4, size 0x4
    struct RwV3d * vertices; // offset 0x8, size 0x4
    struct RpVertexNormal * normals; // offset 0xC, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwResEntry * repEntry; // offset 0x34, size 0x4
    struct RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    struct RwLinkList lightsInWorldSector; // offset 0x40, size 0x8
    struct RwBBox boundingBox; // offset 0x48, size 0x18
    struct RwBBox tightBoundingBox; // offset 0x60, size 0x18
    struct RpMeshHeader * mesh; // offset 0x78, size 0x4
    struct RxPipeline * pipeline; // offset 0x7C, size 0x4
    unsigned short matListWindowBase; // offset 0x80, size 0x2
    unsigned short numVertices; // offset 0x82, size 0x2
    unsigned short numTriangles; // offset 0x84, size 0x2
    unsigned short pad; // offset 0x86, size 0x2
};
// Range: 0x80015DBC -> 0x80015F70
static struct RpCollisionTriangle * sphereHitsEnvCB(struct RpIntersection * isx /* r0 */, struct RpWorldSector * sector /* r29 */, struct RpCollisionTriangle * tri /* r30 */, float dist /* r1+0x8 */, void * data /* r31 */) {
    // Local variables
    struct xCollis * coll; // r0
    float radius; // f31
    struct xVec3 * center; // r0
    struct xVec3 tohit; // r1+0xC
    float scale; // f31

    // References
    // -> static int sCollidingJSP;
}

// Range: 0x80015F70 -> 0x80015FA4
static struct RpCollisionTriangle * sphereHitsModelCB(struct RpCollisionTriangle * tri /* r4 */, float dist /* f0 */, void * data /* r3 */) {
    // Local variables
    struct xSphereHitsModel_context * context; // r0
}

// total size: 0x18
struct RwLine {
    // Members
    struct RwV3d start; // offset 0x0, size 0xC
    struct RwV3d end; // offset 0xC, size 0xC
};
union RpIntersectData {
    struct RwLine line; // offset 0x0, size 0x18
    struct RwV3d point; // offset 0x0, size 0xC
    struct RwSphere sphere; // offset 0x0, size 0x10
    struct RwBBox box; // offset 0x0, size 0x18
    void * object; // offset 0x0, size 0x4
};
enum RpIntersectType {
    rpINTERSECTNONE = 0,
    rpINTERSECTLINE = 1,
    rpINTERSECTPOINT = 2,
    rpINTERSECTSPHERE = 3,
    rpINTERSECTBOX = 4,
    rpINTERSECTATOMIC = 5,
    rpINTERSECTTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct RpIntersection {
    // Members
    union RpIntersectData t; // offset 0x0, size 0x18
    enum RpIntersectType type; // offset 0x18, size 0x4
};
// total size: 0x20
struct xSphereHitsModel_context {
    // Members
    struct xCollis * coll; // offset 0x0, size 0x4
    struct RpIntersection localx; // offset 0x4, size 0x1C
};
// Range: 0x80015FA4 -> 0x8001619C
unsigned int xSphereHitsModel(const struct xSphere * b /* r27 */, const struct xModelInstance * m /* r29 */, struct xCollis * coll /* r30 */) {
    // Local variables
    struct RpIntersection isx; // r1+0x28
    struct xSphereHitsModel_context context; // r1+0x8
    struct xMat4x3 * mat; // r31
    float mscale; // f0
    float mag2; // f0
}

// total size: 0x10
struct RwSphere {
    // Members
    struct RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x1C
struct RpMorphTarget {
    // Members
    struct RpGeometry * parentGeom; // offset 0x0, size 0x4
    struct RwSphere boundingSphere; // offset 0x4, size 0x10
    struct RwV3d * verts; // offset 0x14, size 0x4
    struct RwV3d * normals; // offset 0x18, size 0x4
};
struct RpMorphTarget anim_coll_old_mt; // size: 0x1C, address: 0x803C10A0
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
// total size: 0x50
struct xEntAsset : public xBaseAsset {
    // Members
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    struct xVec3 ang; // offset 0x10, size 0xC
    struct xVec3 pos; // offset 0x1C, size 0xC
    struct xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
struct RpSector {
    // Members
    int type; // offset 0x0, size 0x4
};
// total size: 0x70
struct RpWorld {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    struct RpMaterialList matList; // offset 0x10, size 0xC
    struct RpSector * rootSector; // offset 0x1C, size 0x4
    int numTexCoordSets; // offset 0x20, size 0x4
    int numClumpsInWorld; // offset 0x24, size 0x4
    struct RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    struct RwLinkList clumpList; // offset 0x2C, size 0x8
    struct RwLinkList lightList; // offset 0x34, size 0x8
    struct RwLinkList directionalLightList; // offset 0x3C, size 0x8
    struct RwV3d worldOrigin; // offset 0x44, size 0xC
    struct RwBBox boundingBox; // offset 0x50, size 0x18
    struct RpWorldSector * (* renderCallBack)(struct RpWorldSector *); // offset 0x68, size 0x4
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x10
struct xClumpCollBSPBranchNode {
    // Members
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x4
struct xClumpCollBSPVertInfo {
    // Members
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
union /* @class$805xCollide_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$805xCollide_cpp */ {
        struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        unsigned int rawIdx; // offset 0x0, size 0x4
        struct RwV3d * p; // offset 0x0, size 0x4
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char detailed_info_cache_index; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x10
struct xClumpCollBSPTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    int numTriangles; // offset 0x8, size 0x4
    struct xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
// total size: 0x8
struct xJSPNodeInfo {
    // Members
    int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x10
struct xJSPNodeTreeBranch {
    // Members
    unsigned short leftNode; // offset 0x0, size 0x2
    unsigned short rightNode; // offset 0x2, size 0x2
    unsigned char leftType; // offset 0x4, size 0x1
    unsigned char rightType; // offset 0x5, size 0x1
    unsigned short coord; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x20
struct xJSPNodeTreeLeaf {
    // Members
    int nodeIndex; // offset 0x0, size 0x4
    int leafCount; // offset 0x4, size 0x4
    struct RwBBox box; // offset 0x8, size 0x18
};
// total size: 0x10
struct xJSPNodeTree {
    // Members
    int numBranchNodes; // offset 0x0, size 0x4
    struct xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    int numLeafNodes; // offset 0x8, size 0x4
    struct xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
};
// total size: 0x18
struct RpTie {
    // Members
    struct RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    struct RpAtomic * apAtom; // offset 0x8, size 0x4
    struct RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    struct RpWorldSector * worldSector; // offset 0x14, size 0x4
};
// total size: 0xC
struct xJSPMiniLightTie {
    // Members
    struct RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    struct RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x108
struct xJSPNodeLight {
    // Members
    struct RpAtomic * atomic; // offset 0x0, size 0x4
    int lightCount; // offset 0x4, size 0x4
    struct RpTie dummyTie; // offset 0x8, size 0x18
    struct RpWorldSector dummySector; // offset 0x20, size 0x88
    struct xJSPMiniLightTie dummyLightTie[8]; // offset 0xA8, size 0x60
};
// total size: 0x2C
struct xJSPHeader {
    // Members
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    struct RpClump * clump; // offset 0xC, size 0x4
    struct xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    struct xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
    unsigned int stripVecCount; // offset 0x18, size 0x4
    struct RwV3d * stripVecList; // offset 0x1C, size 0x4
    unsigned short vertDataFlags; // offset 0x20, size 0x2
    unsigned short vertDataStride; // offset 0x22, size 0x2
    struct xJSPNodeTree * nodetree; // offset 0x24, size 0x4
    struct xJSPNodeLight * nodelight; // offset 0x28, size 0x4
};
// total size: 0x10
struct iEnvMatOrder {
    // Members
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    int matGroup; // offset 0x4, size 0x4
    struct RpAtomic * atomic; // offset 0x8, size 0x4
    struct xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
};
// total size: 0xA4
struct RwFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    struct RwMatrixTag modelling; // offset 0x10, size 0x40
    struct RwMatrixTag ltm; // offset 0x50, size 0x40
    struct RwLinkList objectList; // offset 0x90, size 0x8
    struct RwFrame * child; // offset 0x98, size 0x4
    struct RwFrame * next; // offset 0x9C, size 0x4
    struct RwFrame * root; // offset 0xA0, size 0x4
};
// total size: 0x44
struct iEnv {
    // Members
    struct RpWorld * world; // offset 0x0, size 0x4
    struct RpWorld * collision; // offset 0x4, size 0x4
    struct RpWorld * fx; // offset 0x8, size 0x4
    struct RpWorld * camera; // offset 0xC, size 0x4
    int jsp_count; // offset 0x10, size 0x4
    unsigned int * jsp_aid; // offset 0x14, size 0x4
    struct xJSPHeader * * jsp_list; // offset 0x18, size 0x4
    struct xBox * jsp_bound; // offset 0x1C, size 0x4
    int * jsp_visibilityCount; // offset 0x20, size 0x4
    int jspMatOrderCount; // offset 0x24, size 0x4
    struct iEnvMatOrder * jspMatOrderList; // offset 0x28, size 0x4
    struct RpLight * light[2]; // offset 0x2C, size 0x8
    struct RwFrame * light_frame[2]; // offset 0x34, size 0x8
    int memlvl; // offset 0x3C, size 0x4
    unsigned short numOpaque; // offset 0x40, size 0x2
    unsigned short numTransparent; // offset 0x42, size 0x2
};
// total size: 0x4C
struct xEnv {
    // Members
    struct iEnv * geom; // offset 0x0, size 0x4
    struct iEnv ienv; // offset 0x4, size 0x44
    struct xLightKit * lightKit; // offset 0x48, size 0x4
};
// total size: 0x70
struct xScene {
    // Members
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short numTrigs; // offset 0x6, size 0x2
    unsigned short numSpecialTriggers; // offset 0x8, size 0x2
    unsigned short numStats; // offset 0xA, size 0x2
    unsigned short numDyns; // offset 0xC, size 0x2
    unsigned short numNpcs; // offset 0xE, size 0x2
    unsigned short numActEnts; // offset 0x10, size 0x2
    float gravity; // offset 0x14, size 0x4
    float drag; // offset 0x18, size 0x4
    float friction; // offset 0x1C, size 0x4
    unsigned short numEntsAllocd; // offset 0x20, size 0x2
    unsigned short numTrigsAllocd; // offset 0x22, size 0x2
    unsigned short numSpecialTriggersAllocd; // offset 0x24, size 0x2
    unsigned short numStatsAllocd; // offset 0x26, size 0x2
    unsigned short numDynsAllocd; // offset 0x28, size 0x2
    unsigned short numNpcsAllocd; // offset 0x2A, size 0x2
    struct xEnt * * trigs; // offset 0x2C, size 0x4
    struct xEnt * * specialTriggers; // offset 0x30, size 0x4
    struct xEnt * * stats; // offset 0x34, size 0x4
    struct xEnt * * dyns; // offset 0x38, size 0x4
    struct xEnt * * npcs; // offset 0x3C, size 0x4
    struct xEnt * * actEnts; // offset 0x40, size 0x4
    struct xEnv * env; // offset 0x44, size 0x4
    struct xMemPool mempool; // offset 0x48, size 0x1C
    struct xBase * (* resolvID)(unsigned int); // offset 0x64, size 0x4
    char * (* base2Name)(struct xBase *); // offset 0x68, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x6C, size 0x4
};
// total size: 0x10
struct xRot {
    // Members
    struct xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0xF0
struct xEntFrame {
    // Members
    struct xMat4x3 mat; // offset 0x0, size 0x40
    struct xMat4x3 oldmat; // offset 0x40, size 0x40
    struct xVec3 oldvel; // offset 0x80, size 0xC
    struct xRot oldrot; // offset 0x8C, size 0x10
    struct xRot drot; // offset 0x9C, size 0x10
    struct xRot rot; // offset 0xAC, size 0x10
    struct xVec3 dvel; // offset 0xBC, size 0xC
    struct xVec3 vel; // offset 0xC8, size 0xC
    unsigned int mode; // offset 0xD4, size 0x4
    struct xVec3 dpos; // offset 0xD8, size 0xC
};
// total size: 0x5FC
struct xEntCollis {
    // Members
    unsigned char chk; // offset 0x0, size 0x1
    unsigned char pen; // offset 0x1, size 0x1
    unsigned char env_sidx; // offset 0x2, size 0x1
    unsigned char env_eidx; // offset 0x3, size 0x1
    unsigned char npc_sidx; // offset 0x4, size 0x1
    unsigned char npc_eidx; // offset 0x5, size 0x1
    unsigned char dyn_sidx; // offset 0x6, size 0x1
    unsigned char dyn_eidx; // offset 0x7, size 0x1
    unsigned char stat_sidx; // offset 0x8, size 0x1
    unsigned char stat_eidx; // offset 0x9, size 0x1
    unsigned char idx; // offset 0xA, size 0x1
    struct xCollis colls[18]; // offset 0xC, size 0x5E8
    void (* post)(struct xEnt *, struct xScene *, float, struct xEntCollis *); // offset 0x5F4, size 0x4
    unsigned int (* depenq)(struct xEnt *, struct xEnt *, struct xScene *, float, struct xCollis *); // offset 0x5F8, size 0x4
};
// total size: 0x18
struct xGridBound {
    // Members
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char oversize; // offset 0x8, size 0x1
    unsigned char deleted; // offset 0x9, size 0x1
    unsigned char gpad; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
    struct xGrid * grid; // offset 0xC, size 0x4
    struct xGridBound * * head; // offset 0x10, size 0x4
    struct xGridBound * next; // offset 0x14, size 0x4
};
// total size: 0x0
struct xFFX {};
// total size: 0x50
struct xEntDriveInfo {
    // Members
    struct xMat4x3 driveMat; // offset 0x0, size 0x40
    struct xVec3 centerOffset; // offset 0x40, size 0xC
    unsigned int flags; // offset 0x4C, size 0x4
};
// total size: 0x30
struct xShadowSimplePoly {
    // Members
    struct xVec3 vert[3]; // offset 0x0, size 0x24
    struct xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0xA4
struct xShadowSimpleCache {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    struct xVec3 pos; // offset 0x8, size 0xC
    struct xVec3 at; // offset 0x14, size 0xC
    float tol_movement; // offset 0x20, size 0x4
    float radiusOptional; // offset 0x24, size 0x4
    struct xEnt * castOnEnt; // offset 0x28, size 0x4
    struct xShadowSimplePoly poly; // offset 0x2C, size 0x30
    float envHeight; // offset 0x5C, size 0x4
    float shadowHeight; // offset 0x60, size 0x4
    union { // inferred
        unsigned int raster; // offset 0x64, size 0x4
        struct RwRaster * ptr_raster; // offset 0x64, size 0x4
    };
    float dydx; // offset 0x68, size 0x4
    float dydz; // offset 0x6C, size 0x4
    struct xVec3 corner[4]; // offset 0x70, size 0x30
    void * collSkipsItem; // offset 0xA0, size 0x4
};
// total size: 0x2C
struct xEntShadow {
    // Members
    struct xVec3 pos; // offset 0x0, size 0xC
    struct xVec3 vec; // offset 0xC, size 0xC
    struct RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
    int flg_castOnOneDFF : 1; // offset 0x28, size 0x4
    int flg_castOnAllDFF : 1; // offset 0x28, size 0x4
    int flg_disableEnvCast : 1; // offset 0x28, size 0x4
    int flg_shadowUnused : 29; // offset 0x28, size 0x4
};
// total size: 0x0
struct anim_coll_data {};
// total size: 0xD8
struct xEnt : public xBase {
    // Members
    struct xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned char flags; // offset 0x16, size 0x1
    unsigned char miscflags; // offset 0x17, size 0x1
    unsigned char subType; // offset 0x18, size 0x1
    unsigned char pflags; // offset 0x19, size 0x1
    unsigned short moreFlags; // offset 0x1A, size 0x2
    unsigned char isCulled : 2; // offset 0x1C, size 0x1
    unsigned char collisionEventReceived : 2; // offset 0x1C, size 0x1
    unsigned char driving_count : 7; // offset 0x1D, size 0x1
    unsigned char driving_reset : 1; // offset 0x1D, size 0x1
    unsigned char num_ffx; // offset 0x1E, size 0x1
    unsigned char collType; // offset 0x1F, size 0x1
    unsigned char collLev; // offset 0x20, size 0x1
    unsigned char chkby; // offset 0x21, size 0x1
    unsigned char penby; // offset 0x22, size 0x1
    void (* visUpdate)(struct xEnt *); // offset 0x24, size 0x4
    struct xModelInstance * model; // offset 0x28, size 0x4
    struct xModelInstance * collModel; // offset 0x2C, size 0x4
    struct xModelInstance * camcollModel; // offset 0x30, size 0x4
    void (* update)(struct xEnt *, struct xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(struct xEnt *, struct xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(struct xEnt *, struct xVec3 *); // offset 0x3C, size 0x4
    void (* move)(struct xEnt *, struct xScene *, float, struct xEntFrame *); // offset 0x40, size 0x4
    void (* render)(struct xEnt *); // offset 0x44, size 0x4
    struct xEntFrame * frame; // offset 0x48, size 0x4
    struct xEntCollis * collis; // offset 0x4C, size 0x4
    struct xGridBound gridb; // offset 0x50, size 0x18
    struct xBound bound; // offset 0x68, size 0x4C
    void (* transl)(struct xEnt *, struct xVec3 *, struct xMat4x3 *); // offset 0xB4, size 0x4
    struct xFFX * ffx; // offset 0xB8, size 0x4
    struct xEnt * driver; // offset 0xBC, size 0x4
    struct xEnt * driven; // offset 0xC0, size 0x4
    struct xEntDriveInfo * driveInfo; // offset 0xC4, size 0x4
    struct xShadowSimpleCache * simpShadow; // offset 0xC8, size 0x4
    struct xEntShadow * entShadow; // offset 0xCC, size 0x4
    struct anim_coll_data * anim_coll; // offset 0xD0, size 0x4
    void * user_data; // offset 0xD4, size 0x4
};
// Range: 0x8001619C -> 0x800161D8
unsigned int xSphereHitsEntModel(const struct xSphere * b /* r0 */, const struct xEnt * ent /* r4 */, struct xCollis * coll /* r0 */) {
    // Local variables
    unsigned int ret; // r0
}

// total size: 0x24
struct xParabola {
    // Members
    struct xVec3 initPos; // offset 0x0, size 0xC
    struct xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
};
// Range: 0x800161D8 -> 0x8001625C
void xParabolaRecenter(struct xParabola * p /* r31 */, float newZeroT /* f31 */) {
    // Local variables
    struct xVec3 newPos; // r1+0x14
    struct xVec3 newVel; // r1+0x8
}

// Range: 0x8001625C -> 0x80016774
static int xParabolaEnvCB(struct xClumpCollBSPTriangle * triangles /* r27 */, void * data /* r28 */) {
    // Local variables
    struct ParabolaCBData * pd; // r0
    struct xParabola * p; // r31
    struct xCollis * colls; // r30
    struct xVec3 * v0; // r29
    struct xVec3 * v1; // r26
    struct xVec3 * v2; // r25
    unsigned char tester; // r24
    float a; // f29
    float b; // f26
    float c; // f2
    float det; // f30
    struct xVec3 v1p; // r1+0x44
    struct xVec3 v2p; // r1+0x38
    struct xVec3 N; // r1+0x2C
    float pdist; // f9
    float t1; // f28
    float t2; // f27
    struct xVec3 s1; // r1+0x20
    struct xVec3 s2; // r1+0x14
    float c1; // f3
    float c2; // f4
    float c0; // f1
    float d11; // f0
    float d12; // f0
    float d22; // f0
    float p1; // f0
    float p2; // f0
    struct xVec3 pp; // r1+0x8
}

// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x18
struct ParabolaCBData {
    // Members
    struct xParabola * p; // offset 0x0, size 0x4
    struct xVec3 N; // offset 0x4, size 0xC
    float d; // offset 0x10, size 0x4
    struct xCollis * colls; // offset 0x14, size 0x4
};
// Range: 0x80016774 -> 0x80016A10
int xParabolaHitsEnv(struct xParabola * p /* r6 */, const struct xEnv * env /* r30 */, struct xCollis * colls /* r31 */) {
    // Local variables
    struct RwBBox xb; // r1+0x20
    float extremumT; // f4
    float extremum; // f1
    struct ParabolaCBData data; // r1+0x8
    int i; // r27
}

static const struct xCapsule * cb_capsule; // size: 0x4, address: 0x803C0CAC
// Range: 0x80016A10 -> 0x80016C8C
static struct RpCollisionTriangle * CapsuleEnvClosestToLineCB(struct RpCollisionTriangle * tri /* r25 */, void * data /* r26 */) {
    // Local variables
    struct xCollis * colls; // r0
    const struct xVec3 * p1; // r31
    const struct xVec3 * p2; // r30
    const struct xVec3 * v0; // r29
    const struct xVec3 * v1; // r28
    const struct xVec3 * v2; // r27
    float t; // r1+0x10
    float u; // r1+0xC
    float v; // r1+0x8
    float ln_ptz; // f4
    float tri_ptx; // f31
    float tri_pty; // f30
    float tri_ptz; // f6
    float tohitx; // f3
    float tohity; // f0
    float tohitz; // f4
    float d2; // f5

    // References
    // -> static const struct xCapsule * cb_capsule;
}

// Range: 0x80016C8C -> 0x80016CBC
static struct RpCollisionTriangle * CapsuleModelClosestToLineCB(struct RpCollisionTriangle * tri /* r4 */, float dist /* f0 */, void * data /* r6 */) {}

// total size: 0x28
struct RpCollisionTriangle {
    // Members
    struct RwV3d normal; // offset 0x0, size 0xC
    struct RwV3d point; // offset 0xC, size 0xC
    int index; // offset 0x18, size 0x4
    struct RwV3d * vertices[3]; // offset 0x1C, size 0xC
};
// Range: 0x80016CBC -> 0x80016E20
static int LeafNodeCapsuleIntersect(struct xClumpCollBSPTriangle * triangles /* r26 */, void * data /* r27 */) {
    // Local variables
    struct CallBackParam * cbParam; // r0
    struct RwV3d * v0; // r30
    struct RwV3d * v1; // r29
    struct RwV3d * v2; // r28
    struct RpCollisionTriangle collisionTri; // r1+0x8
    float recipLength; // f0
}

// total size: 0x1C
struct xCapsule {
    // Members
    struct xVec3 start; // offset 0x0, size 0xC
    struct xVec3 end; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
};
// Range: 0x80016E20 -> 0x800170F4
int xCapsuleIsectsModelClosestToLine(const struct xCapsule * c /* r28 */, const struct xModelInstance * model /* r29 */, struct xCollis * colls /* r30 */) {
    // Local variables
    struct RpIntersection isx; // r1+0x3C
    struct xSphere cbound; // r1+0x10
    float dx__; // f7
    float dy__; // f8
    float dz__; // f8
    struct xMat4x3 & mat; // r31
    struct xMat3x3 old_mat; // r1+0x60
    float mscale; // f0
    struct xCapsule lcap; // r1+0x20
    float s; // f3

    // References
    // -> static const struct xCapsule * cb_capsule;
}

// total size: 0x18
struct xClumpCollV3dGradient {
    // Members
    float dydx; // offset 0x0, size 0x4
    float dzdx; // offset 0x4, size 0x4
    float dxdy; // offset 0x8, size 0x4
    float dzdy; // offset 0xC, size 0x4
    float dxdz; // offset 0x10, size 0x4
    float dydz; // offset 0x14, size 0x4
};
union IntersectionCallBack {
    struct RpWorldSector * (* sectorCB)(struct RpIntersection *, struct RpWorldSector *, void *); // offset 0x0, size 0x4
    struct RpCollisionTriangle * (* worldCB)(struct RpIntersection *, struct RpWorldSector *, struct RpCollisionTriangle *, float, void *); // offset 0x0, size 0x4
    struct RpAtomic * (* atomicCB)(struct RpIntersection *, struct RpWorldSector *, struct RpAtomic *, float, void *); // offset 0x0, size 0x4
};
// total size: 0xC
struct CallBackParam {
    // Members
    struct RpIntersection * intersection; // offset 0x0, size 0x4
    union IntersectionCallBack u; // offset 0x4, size 0x4
    void * data; // offset 0x8, size 0x4
};
// Range: 0x800170F4 -> 0x8001733C
int xCapsuleIsectsEnvClosestToLine(const struct xCapsule * c /* r30 */, const struct xEnv * env /* r26 */, struct xCollis * colls /* r31 */) {
    // Local variables
    struct xClumpCollV3dGradient grad; // r1+0x14
    struct CallBackParam param; // r1+0x8
    int i; // r27
    float s; // f3

    // References
    // -> static const struct xCapsule * cb_capsule;
}

// total size: 0xC
struct xModelPool {
    // Members
    struct xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    struct xModelInstance * List; // offset 0x8, size 0x4
};
// total size: 0xC
struct xAnimPhysicsData {
    // Members
    struct xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    int tranCount; // offset 0x8, size 0x4
};
// total size: 0x24
struct xAnimFile {
    // Members
    struct xAnimFile * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * RawData; // offset 0x1C, size 0x4
    struct xAnimPhysicsData * PhysicsData; // offset 0x20, size 0x4
};
enum xSndHandle {
};
// total size: 0x8
struct xAnimActiveEffect {
    // Members
    struct xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum xSndHandle SndHandle; // offset 0x4, size 0x4
    };
};
// total size: 0x14
struct xAnimEffect {
    // Members
    struct xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned short Probability; // offset 0x6, size 0x2
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, struct xAnimActiveEffect *, struct xAnimSingle *, void *); // offset 0x10, size 0x4
};
// total size: 0x2C
struct xAnimTransition {
    // Members
    struct xAnimTransition * Next; // offset 0x0, size 0x4
    struct xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(struct xAnimTransition *, struct xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
// total size: 0x8
struct xAnimTransitionList {
    // Members
    struct xAnimTransitionList * Next; // offset 0x0, size 0x4
    struct xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x4
struct xAnimMultiFileBase {
    // Members
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x8
struct xAnimMultiFileEntry {
    // Members
    unsigned int ID; // offset 0x0, size 0x4
    struct xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0xC
struct xAnimMultiFile : public xAnimMultiFileBase {
    // Members
    struct xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x10
struct xQuat {
    // Members
    struct xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
// total size: 0x4C
struct xAnimState {
    // Members
    struct xAnimState * Next; // offset 0x0, size 0x4
    const char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    struct xAnimFile * Data; // offset 0x18, size 0x4
    struct xAnimEffect * Effects; // offset 0x1C, size 0x4
    struct xAnimTransitionList * Default; // offset 0x20, size 0x4
    struct xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    struct xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(struct xAnimPlay *, struct xAnimState *, void *); // offset 0x40, size 0x4
    void (* StateCallback)(struct xAnimState *, struct xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x48, size 0x4
};
// total size: 0x50
struct xAnimSingle {
    // Members
    unsigned int SingleFlags; // offset 0x0, size 0x4
    struct xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    struct xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    struct xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    struct xAnimPlay * Play; // offset 0x28, size 0x4
    struct xAnimTransition * Sync; // offset 0x2C, size 0x4
    struct xAnimTransition * Tran; // offset 0x30, size 0x4
    struct xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    struct xVec3 PhysDisp; // offset 0x3C, size 0xC
    float YawDisp; // offset 0x48, size 0x4
    unsigned int pad[1]; // offset 0x4C, size 0x4
};
// total size: 0x18
struct xAnimTable {
    // Members
    const char * Name; // offset 0x0, size 0x4
    struct xAnimTransition * TransitionList; // offset 0x4, size 0x4
    struct xAnimState * StateList; // offset 0x8, size 0x4
    unsigned int AnimIndex; // offset 0xC, size 0x4
    unsigned int MorphIndex; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
};
// total size: 0x1C
struct xMemPool {
    // Members
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(struct xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
// total size: 0x20
struct xAnimPlay {
    // Members
    struct xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    struct xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    struct xAnimTable * Table; // offset 0x10, size 0x4
    struct xMemPool * Pool; // offset 0x14, size 0x4
    struct xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(struct xAnimPlay *, struct xQuat *, struct xVec3 *, int); // offset 0x1C, size 0x4
};
// total size: 0x8
struct RwObject {
    // Members
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x8
struct RwLLLink {
    // Members
    struct RwLLLink * next; // offset 0x0, size 0x4
    struct RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x14
struct RwObjectHasFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink lFrame; // offset 0x8, size 0x8
    struct RwObjectHasFrame * (* sync)(struct RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x18
struct RwResEntry {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
    int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    struct RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(struct RwResEntry *); // offset 0x14, size 0x4
};
// total size: 0x34
struct RwRaster {
    // Members
    struct RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    int width; // offset 0xC, size 0x4
    int height; // offset 0x10, size 0x4
    int depth; // offset 0x14, size 0x4
    int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    int originalWidth; // offset 0x28, size 0x4
    int originalHeight; // offset 0x2C, size 0x4
    int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x18
struct RwTexDictionary {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList texturesInDict; // offset 0x8, size 0x8
    struct RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x58
struct RwTexture {
    // Members
    struct RwRaster * raster; // offset 0x0, size 0x4
    struct RwTexDictionary * dict; // offset 0x4, size 0x4
    struct RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    int refCount; // offset 0x54, size 0x4
};
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0xC
struct rxHeapSuperBlockDescriptor {
    // Members
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    struct rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x8
struct rxHeapFreeBlock {
    // Members
    unsigned int size; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x20
struct rxHeapBlockHeader {
    // Members
    struct rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    struct rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x1C
struct RxHeap {
    // Members
    unsigned int superBlockSize; // offset 0x0, size 0x4
    struct rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    struct rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    struct rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    int dirty; // offset 0x18, size 0x4
};
// total size: 0x8
struct RxPipelineNodeParam {
    // Members
    void * dataParam; // offset 0x0, size 0x4
    struct RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x1C
struct RxNodeMethods {
    // Members
    int (* nodeBody)(struct RxPipelineNode *, struct RxPipelineNodeParam *); // offset 0x0, size 0x4
    int (* nodeInit)(struct RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(struct RxNodeDefinition *); // offset 0x8, size 0x4
    int (* pipelineNodeInit)(struct RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(struct RxPipelineNode *); // offset 0x10, size 0x4
    int (* pipelineNodeConfig)(struct RxPipelineNode *, struct RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(struct RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
// total size: 0x10
struct RxClusterDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    const char * attributeSet; // offset 0xC, size 0x4
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxClusterRef {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RxOutputSpec {
    // Members
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x14
struct RxIoSpec {
    // Members
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    struct RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    struct RxOutputSpec * outputs; // offset 0x10, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x40
struct RxNodeDefinition {
    // Members
    char * name; // offset 0x0, size 0x4
    struct RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    struct RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    int InputPipesCnt; // offset 0x3C, size 0x4
};
// total size: 0x8
struct RxPipelineCluster {
    // Members
    struct RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x0
struct rxReq {};
// total size: 0xC
struct RxPipelineNodeTopSortData {
    // Members
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    struct rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x28
struct RxPipelineNode {
    // Members
    struct RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    struct RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct RxCluster {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    struct RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0x30
struct RxPacket {
    // Members
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    struct RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    struct RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    struct RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0xC
struct RxPipelineRequiresCluster {
    // Members
    struct RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x34
struct RxPipeline {
    // Members
    int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    struct RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    struct RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    struct RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
// total size: 0xC
struct RwSurfaceProperties {
    // Members
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x1C
struct RpMaterial {
    // Members
    struct RwTexture * texture; // offset 0x0, size 0x4
    struct RwRGBA color; // offset 0x4, size 0x4
    struct RxPipeline * pipeline; // offset 0x8, size 0x4
    struct RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0xC
struct RpMaterialList {
    // Members
    struct RpMaterial * * materials; // offset 0x0, size 0x4
    int numMaterials; // offset 0x4, size 0x4
    int space; // offset 0x8, size 0x4
};
// total size: 0x8
struct RpTriangle {
    // Members
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x8
struct RwTexCoords {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x10
struct RpMeshHeader {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0x60
struct RpGeometry {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    int numTriangles; // offset 0x10, size 0x4
    int numVertices; // offset 0x14, size 0x4
    int numMorphTargets; // offset 0x18, size 0x4
    int numTexCoordSets; // offset 0x1C, size 0x4
    struct RpMaterialList matList; // offset 0x20, size 0xC
    struct RpTriangle * triangles; // offset 0x2C, size 0x4
    struct RwRGBA * preLitLum; // offset 0x30, size 0x4
    struct RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    struct RpMeshHeader * mesh; // offset 0x54, size 0x4
    struct RwResEntry * repEntry; // offset 0x58, size 0x4
    struct RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
// total size: 0x2C
struct RpClump {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLinkList atomicList; // offset 0x8, size 0x8
    struct RwLinkList lightList; // offset 0x10, size 0x8
    struct RwLinkList cameraList; // offset 0x18, size 0x8
    struct RwLLLink inWorldLink; // offset 0x20, size 0x8
    struct RpClump * (* callback)(struct RpClump *, void *); // offset 0x28, size 0x4
};
// total size: 0x14
struct RpInterpolator {
    // Members
    int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
// total size: 0x70
struct RpAtomic {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    struct RwResEntry * repEntry; // offset 0x14, size 0x4
    struct RpGeometry * geometry; // offset 0x18, size 0x4
    struct RwSphere boundingSphere; // offset 0x1C, size 0x10
    struct RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    struct RpClump * clump; // offset 0x3C, size 0x4
    struct RwLLLink inClumpLink; // offset 0x40, size 0x8
    struct RpAtomic * (* renderCallBack)(struct RpAtomic *); // offset 0x48, size 0x4
    struct RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    struct RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    struct RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x8
struct xModelPipe {
    // Members
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
};
// total size: 0x0
struct xSurface {};
// total size: 0x18
struct xModelBucket {
    // Members
    struct RpAtomic * Data; // offset 0x0, size 0x4
    struct RpAtomic * OriginalData; // offset 0x4, size 0x4
    union { // inferred
        struct xModelInstance * List; // offset 0x8, size 0x4
        struct xModelBucket * * BackRef; // offset 0x8, size 0x4
    };
    int ClipFlags; // offset 0xC, size 0x4
    struct xModelPipe Pipe; // offset 0x10, size 0x8
};
// total size: 0x10
struct RwRGBAReal {
    // Members
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x40
struct RpLight {
    // Members
    struct RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    struct RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    struct RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    struct RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
// total size: 0x60
struct xLightKitLight {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    struct RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    struct RpLight * platLight; // offset 0x5C, size 0x4
};
// total size: 0x14
struct xLightKit {
    // Members
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    struct xLightKitLight * lightList; // offset 0xC, size 0x4
    int blended; // offset 0x10, size 0x4
};
// total size: 0x40
struct RwMatrixTag {
    // Members
    struct RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    struct RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    struct RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    struct RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x4
struct /* @class$786xCollide_cpp */ {
    // Members
    struct xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x0
struct xLight {};
// total size: 0xCC
struct xModelInstance {
    // Members
    struct xModelInstance * Next; // offset 0x0, size 0x4
    struct xModelInstance * Parent; // offset 0x4, size 0x4
    struct xModelPool * Pool; // offset 0x8, size 0x4
    struct xAnimPlay * Anim; // offset 0xC, size 0x4
    struct RpAtomic * Data; // offset 0x10, size 0x4
    struct xModelPipe Pipe; // offset 0x14, size 0x8
    unsigned char InFrustum; // offset 0x1C, size 0x1
    unsigned char TrueClip; // offset 0x1D, size 0x1
    signed char sortBias; // offset 0x1E, size 0x1
    unsigned char modelpad; // offset 0x1F, size 0x1
    float RedMultiplier; // offset 0x20, size 0x4
    float GreenMultiplier; // offset 0x24, size 0x4
    float BlueMultiplier; // offset 0x28, size 0x4
    float Alpha; // offset 0x2C, size 0x4
    float FadeStart; // offset 0x30, size 0x4
    float FadeEnd; // offset 0x34, size 0x4
    struct xSurface * Surf; // offset 0x38, size 0x4
    struct xModelBucket * * Bucket; // offset 0x3C, size 0x4
    struct xModelInstance * BucketNext; // offset 0x40, size 0x4
    struct xLightKit * LightKit; // offset 0x44, size 0x4
    struct xLightKit * LightKitBlend; // offset 0x48, size 0x4
    float BlendDuration; // offset 0x4C, size 0x4
    float BlendTimeRemaining; // offset 0x50, size 0x4
    void * Object; // offset 0x54, size 0x4
    unsigned short Flags; // offset 0x58, size 0x2
    unsigned char BoneCount; // offset 0x5A, size 0x1
    unsigned char BoneIndex; // offset 0x5B, size 0x1
    unsigned char * BoneRemap; // offset 0x5C, size 0x4
    struct RwMatrixTag * Mat; // offset 0x60, size 0x4
    struct xVec3 Scale; // offset 0x64, size 0xC
    struct xBox animBound; // offset 0x70, size 0x18
    struct xBox combinedAnimBound; // offset 0x88, size 0x18
    unsigned int modelID; // offset 0xA0, size 0x4
    unsigned int shadowID; // offset 0xA4, size 0x4
    // total size: 0x4
    struct /* @class$786xCollide_cpp */ {
        // Members
        struct xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA8, size 0x4
    struct xLight * lights[4]; // offset 0xAC, size 0x10
    float lightsDistance[4]; // offset 0xBC, size 0x10
};
// total size: 0xC
struct /* @class$804xCollide_cpp */ {
    // Members
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0xC
struct tri_data {
    // Members
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x54
struct xCollis {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    struct xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    float test_dist; // offset 0x14, size 0x4
    struct xVec3 norm; // offset 0x18, size 0xC
    struct xVec3 tohit; // offset 0x24, size 0xC
    struct xVec3 depen; // offset 0x30, size 0xC
    struct xVec3 hdng; // offset 0x3C, size 0xC
    union { // inferred
        // total size: 0xC
        struct /* @class$804xCollide_cpp */ {
            // Members
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        struct tri_data tri; // offset 0x48, size 0xC
    };
};
// total size: 0x38
struct xGrid {
    // Members
    unsigned char ingrid_id; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    unsigned short nx; // offset 0x4, size 0x2
    unsigned short nz; // offset 0x6, size 0x2
    float minx; // offset 0x8, size 0x4
    float minz; // offset 0xC, size 0x4
    float maxx; // offset 0x10, size 0x4
    float maxz; // offset 0x14, size 0x4
    float csizex; // offset 0x18, size 0x4
    float csizez; // offset 0x1C, size 0x4
    float inv_csizex; // offset 0x20, size 0x4
    float inv_csizez; // offset 0x24, size 0x4
    float maxr; // offset 0x28, size 0x4
    struct xGridBound * * cells; // offset 0x2C, size 0x4
    struct xGridBound * other; // offset 0x30, size 0x4
    int iter_active; // offset 0x34, size 0x4
};
struct xGrid colls_grid; // size: 0x38, address: 0x803C1E40
struct xGrid colls_oso_grid; // size: 0x38, address: 0x803C1E78
// total size: 0x18
struct xLine3 {
    // Members
    struct xVec3 p1; // offset 0x0, size 0xC
    struct xVec3 p2; // offset 0xC, size 0xC
};
// total size: 0x24
struct xRay3 {
    // Members
    struct xVec3 origin; // offset 0x0, size 0xC
    struct xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    int flags; // offset 0x20, size 0x4
};
// total size: 0x20
struct xQCData {
    // Members
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    struct xVec3 min; // offset 0x8, size 0xC
    struct xVec3 max; // offset 0x14, size 0xC
};
// total size: 0x3C
struct xQCControl {
    // Members
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
};
struct xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x803C1280
// Range: 0x8001733C -> 0x80017450
unsigned int xBoxHitsSphere(const struct xBox * a /* r0 */, const struct xSphere * b /* r0 */, struct xCollis * coll /* r31 */) {
    // Local variables
    struct xIsect isx; // r1+0x8

    // References
    // -> struct xVec3 g_O3;
}

// Range: 0x80017450 -> 0x80017EAC
static unsigned int Mgc_BoxBoxTest(const struct xBox * a /* r28 */, const struct xMat4x3 * matA /* r29 */, const struct xBox * b /* r30 */, const struct xMat4x3 * matB /* r31 */) {
    // Local variables
    struct xVec3 akA[3]; // r1+0x44
    struct xVec3 akB[3]; // r1+0x20
    float _mag; // f0
    float _mag; // f0
    float _mag; // f0
    float _mag; // f0
    float _mag; // f0
    float _mag; // f0
    struct xVec3 centA; // r1+0x14
    struct xVec3 centB; // r1+0x8
    float fR; // f1
}

// Range: 0x80017EAC -> 0x80017F04
unsigned int xObbHitsObb(const struct xBox * a /* r0 */, const struct xMat4x3 * a_mat /* r0 */, const struct xBox * b /* r0 */, const struct xMat4x3 * b_mat /* r0 */, struct xCollis * coll /* r31 */) {}

struct xMat4x3 g_I3; // size: 0x40, address: 0x803C1010
// Range: 0x80017F04 -> 0x80017F70
unsigned int xBoxHitsObb(const struct xBox * a /* r0 */, const struct xBox * b /* r7 */, const struct xMat4x3 * mat /* r0 */, struct xCollis * coll /* r31 */) {
    // References
    // -> struct xMat4x3 g_I3;
}

// total size: 0x10
struct /* @class$2210xCollide_cpp */ {
    // Members
    struct xVec3 norm; // offset 0x0, size 0xC
    float D; // offset 0xC, size 0x4
};
// Range: 0x80017F70 -> 0x80018450
void xCollideCalcTri(struct tri_data & tri /* r28 */, const struct xModelInstance & model /* r29 */, const struct xVec3 & center /* r30 */, const struct xVec3 & heading /* r31 */) {
    // Local variables
    struct xVec3 v[3]; // r1+0xC0
    struct RpGeometry * geom; // r4
    const struct xVec3 * verts; // r25
    const struct RpTriangle & t; // r24
    int i; // r23
    struct xVec3 e[3]; // r1+0x9C
    // total size: 0x10
    struct /* @class$2210xCollide_cpp */ {
        // Members
        struct xVec3 norm; // offset 0x0, size 0xC
        float D; // offset 0xC, size 0x4
    } plane; // r1+0x8C
    struct xVec3 p; // r1+0x80
    float num; // f31
    float denom; // f0
    struct xVec3 b; // r1+0x74
    struct xVec3 A; // r1+0x68
    struct xVec3 B; // r1+0x5C
    struct xVec3 C; // r1+0x50
    struct xVec3 AxB; // r1+0x44
    struct xVec3 CxB; // r1+0x38
    float len2; // f0
    struct xVec3 d; // r1+0x2C
    struct xVec3 ad; // r1+0x20
    struct xVec3 d; // r1+0x14
    struct xVec3 ad; // r1+0x8
}

// Range: 0x80018450 -> 0x80018454
static void render_tri() {}

// Range: 0x80018454 -> 0x80018610
struct xVec3 xCollisTriHit(const struct tri_data & tri /* r31 */, const struct xModelInstance & model /* r0 */) {
    // Local variables
    const struct xMat4x3 & m; // r26
    struct xVec3 v[3]; // r1+0x74
    struct RpGeometry * geom; // r4
    const struct xVec3 * verts; // r25
    const struct RpTriangle & t; // r24
    int i; // r23
    struct xVec3 r[2]; // r1+0x5C
    struct xVec3 d; // r1+0x50
    struct xVec3 A; // r1+0x44
    struct xVec3 B; // r1+0x38
    struct xVec3 C; // r1+0x2C
    struct xVec3 AxB; // r1+0x20
    struct xVec3 CxB; // r1+0x14
    float len2; // f0
    struct xVec3 hit; // r1+0x8
}

// Range: 0x80018610 -> 0x800187A8
unsigned char xSphereHitsBox(const struct xVec3 & c /* r0 */, float r /* f0 */, const struct xBox & b /* r0 */) {
    // Local variables
    float ex; // f10
    float ey; // f11
    float ez; // f8
    float ax; // f4
    float ay; // f2
    float az; // f0
    float dx; // f3
    float dy; // f4
    float dz; // f5
}

// Range: 0x800187A8 -> 0x800187D0
unsigned char xOBBHitsOBB(const struct xBox & a /* r0 */, const struct xMat4x3 & amat /* r0 */, const struct xBox & b /* r0 */, const struct xMat4x3 & bmat /* r0 */) {}

// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// Range: 0x800187D0 -> 0x80018914
unsigned char xSphereHitsVCylinder(const struct xVec3 & sc /* r30 */, float sr /* f30 */, const struct xVec3 & cc /* r31 */, float cr /* f31 */, float ch /* f0 */) {
    // Local variables
    float ydist; // f2
    struct xVec2 xzloc1; // r1+0x18
    struct xVec2 xzloc2; // r1+0x10
    float xzdist2; // f0
    float max_xzdist; // f2
}

struct xVec3 m_Null; // size: 0xC, address: 0x803C5738
// Range: 0x80018914 -> 0x80018B68
unsigned int xSphereHitsVCylinder(const struct xSphere * sph /* r29 */, const struct xCylinder * cyl /* r30 */, struct xCollis * coll /* r31 */) {
    // Local variables
    float sr; // f31
    float ydist; // f30
    struct xVec2 xzloc1; // r1+0x18
    struct xVec2 xzloc2; // r1+0x10
    float xzdist2; // f29
    float max_xzdist; // f28
    float xzcenter_dist; // f0

    // References
    // -> struct xVec3 m_Null;
}

// Range: 0x80018B68 -> 0x80018D9C
unsigned int xCylinderHitsSphere(const struct xCylinder * cyl /* r29 */, const struct xSphere * sph /* r30 */, struct xCollis * coll /* r31 */) {
    // Local variables
    float sr; // f31
    float ydist; // f30
    struct xVec2 xzloc1; // r1+0x18
    struct xVec2 xzloc2; // r1+0x10
    float xzdist2; // f31
    float max_xzdist; // f29
    float xzcenter_dist; // f0

    // References
    // -> struct xVec3 m_Null;
}

// Range: 0x80018D9C -> 0x80018E9C
unsigned char xSphereHitsVCircle(const struct xVec3 & sc /* r30 */, float sr /* f1 */, const struct xVec3 & cc /* r31 */, float cr /* f30 */) {
    // Local variables
    float ydist; // f2
    struct xVec2 xzloc1; // r1+0x18
    struct xVec2 xzloc2; // r1+0x10
    float xzdist2; // f0
    float max_xzdist; // f0
}

// Range: 0x80018E9C -> 0x800190A4
unsigned char xSphereHitsCone(const struct xVec3 & center /* r28 */, float radius /* f30 */, const struct xVec3 & kv0 /* r29 */, float kr0 /* f28 */, const struct xVec3 & kv1 /* r5 */, float kr1 /* f31 */) {
    // Local variables
    struct xMat4x3 mat; // r1+0x20
    float dist; // f0
    struct xVec3 C; // r1+0x10
    float Cx; // f1
    float Cy; // f2
    float Dx; // f5
    float Ex; // f6
    float Ey; // f7
    float a; // f31
    float b; // f29
    float det; // f1
    float i2a; // f4
    float t0; // f2
    float t1; // f1
}

struct xVec3 m_UnitAxisY; // size: 0xC, address: 0x803C575C
// Range: 0x800190A4 -> 0x800191A4
void xBoxForTriangle(struct xBox & box /* r0 */, const struct xVec3 & p0 /* r0 */, const struct xVec3 & p1 /* r0 */, const struct xVec3 & p2 /* r0 */) {}

// Range: 0x800191A4 -> 0x800191F4
void xBoxForModel(struct xBox & o /* r30 */, const struct xModelInstance * m /* r31 */, unsigned char childModels /* r0 */) {}

// Range: 0x800191F4 -> 0x80019318
void xBoxForIModelLocal(struct xBox & o /* r28 */, const struct RpAtomic * imodel /* r0 */, unsigned char initBox /* r0 */) {
    // Local variables
    struct RpGeometry * geom; // r31
    struct RpMorphTarget * mtgt; // r30
    unsigned short idx; // r29
    struct xVec3 lower; // r1+0x14
    struct xVec3 upper; // r1+0x8
}

// Range: 0x80019318 -> 0x800193E4
void xBoxForModelLocal(struct xBox & o /* r28 */, const struct xModelInstance * m /* r29 */, unsigned char childModels /* r0 */) {
    // Local variables
    const struct xModelInstance * curModel; // r30
}

// Range: 0x800193E4 -> 0x800194F4
void xSphereForModel(struct xSphere & o /* r25 */, const struct xModelInstance * model /* r26 */, unsigned char childModels /* r0 */) {
    // Local variables
    struct RpAtomic * imodel; // r3
    struct RpGeometry * geom; // r30
    struct RpMorphTarget * mtgt; // r29
    unsigned short idx; // r28
    const struct xModelInstance * cur_model; // r27
    struct xSphere s; // r1+0x8
}

static struct xRay3 cbray; // size: 0x24, address: 0x803C0CB0
static unsigned char cbnumcs; // size: 0x1, address: 0x803C0CD4
static unsigned char cbmaxcs; // size: 0x1, address: 0x803C0CD5
static unsigned char FLOOR; // size: 0x1, address: 0x803C0CD6
static unsigned char NEXT2; // size: 0x1, address: 0x803C0CD7
static unsigned char OTHER; // size: 0x1, address: 0x803C0CD8
static struct RpIntersection cbisx_local; // size: 0x1C, address: 0x803C0CDC
static float cbath; // size: 0x4, address: 0x803C0CF8
// Range: 0x800194F4 -> 0x80019588
static struct RpCollisionTriangle * rayHitsEnvBackwardCB(struct RpWorldSector * sector /* r0 */, struct RpCollisionTriangle * tri /* r5 */, float dist /* f1 */, void * data /* r0 */) {
    // Local variables
    struct xCollis * coll; // r0

    // References
    // -> static int sCollidingJSP;
    // -> static struct xRay3 cbray;
}

// Range: 0x80019588 -> 0x800195B4
static struct RpCollisionTriangle * rayHitsModelBackwardCB(struct RpIntersection * isx /* r0 */, struct RpCollisionTriangle * tri /* r4 */, float dist /* f0 */, void * data /* r6 */) {}

// Range: 0x800195B4 -> 0x800196C4
static struct RpCollisionTriangle * rayHitsEnvCB(struct RpWorldSector * sector /* r0 */, struct RpCollisionTriangle * tri /* r31 */, float dist /* f1 */, void * data /* r0 */) {
    // Local variables
    struct xCollis * coll; // r0
    unsigned char flags; // r3

    // References
    // -> static int sCollidingJSP;
    // -> static struct xRay3 cbray;
}

// Range: 0x800196C4 -> 0x800196F0
static struct RpCollisionTriangle * rayHitsModelCB(struct RpIntersection * isx /* r0 */, struct RpCollisionTriangle * tri /* r4 */, float dist /* f0 */, void * data /* r6 */) {}

// Range: 0x800196F0 -> 0x800199E0
unsigned int xRayHitsModelSingle(const struct xRay3 * r /* r29 */, const struct xModelInstance * m /* r30 */, struct xCollis * coll /* r31 */) {
    // Local variables
    struct RpIntersection isx; // r1+0x2C
    float len; // f3
    struct xMat4x3 * mat; // r28
    float mscale; // f0
    struct RwV3d temp; // r1+0x20
    struct xVec3 center; // r1+0x14
    struct xVec3 heading; // r1+0x8

    // References
    // -> static struct xRay3 cbray;
}

// Range: 0x80019A2C -> 0x80019AC0
unsigned int xRayHitsModel(const struct xRay3 * r /* r29 */, const struct xModelInstance * m /* r31 */, struct xCollis * coll /* r30 */) {
    // Local variables
    struct xModelInstance * model; // r31
    struct xCollis temp_coll; // r1+0x8
}

// total size: 0x0
struct xCamGroup {};
// total size: 0x0
struct xCamScreen {};
// total size: 0x10
struct xVec4 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x10
struct xUpdateCullEnt {
    // Members
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* update_cull_cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    struct xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
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
// total size: 0xC
struct xUpdateCullGroup {
    // Members
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    struct xGroup * groupObject; // offset 0x8, size 0x4
};
// total size: 0x2C
struct xUpdateCullMgr {
    // Members
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * ent; // offset 0x8, size 0x4
    struct xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    struct xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    struct xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x1C
struct iFogParams {
    // Members
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    struct RwRGBA fogcolor; // offset 0x10, size 0x4
    struct RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
// total size: 0x0
struct zPlayer {};
// total size: 0x14
class zPlayerContainer {
    // Members
    struct zPlayer * playerArray[4]; // offset 0x0, size 0x10
    int numPlayers; // offset 0x10, size 0x4
};
// total size: 0x18
struct xPortalAsset : public xBaseAsset {
    // Members
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x14
struct _zPortal : public xBase {
    // Members
    struct xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x5C
struct xEnvAsset : public xBaseAsset {
    // Members
    unsigned int bspAssetID; // offset 0x8, size 0x4
    unsigned int startCameraAssetID; // offset 0xC, size 0x4
    unsigned int climateFlags; // offset 0x10, size 0x4
    float climateStrengthMin; // offset 0x14, size 0x4
    float climateStrengthMax; // offset 0x18, size 0x4
    unsigned int bspLightKit; // offset 0x1C, size 0x4
    unsigned int objectLightKit; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    unsigned int bspCollisionAssetID; // offset 0x28, size 0x4
    unsigned int bspFXAssetID; // offset 0x2C, size 0x4
    unsigned int bspCameraAssetID; // offset 0x30, size 0x4
    unsigned int bspMapperID; // offset 0x34, size 0x4
    unsigned int bspMapperCollisionID; // offset 0x38, size 0x4
    unsigned int bspMapperFXID; // offset 0x3C, size 0x4
    float loldHeight; // offset 0x40, size 0x4
    struct xVec3 minBounds; // offset 0x44, size 0xC
    struct xVec3 maxBounds; // offset 0x50, size 0xC
};
// total size: 0x14
struct _zEnv : public xBase {
    // Members
    struct xEnvAsset * easset; // offset 0x10, size 0x4
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x68
struct zSceneParameters : public xDynAsset {
    // Members
    unsigned int idle03ExtraCount; // offset 0x10, size 0x4
    struct xAnimFile * * idle03Extras; // offset 0x14, size 0x4
    unsigned int idle04ExtraCount; // offset 0x18, size 0x4
    struct xAnimFile * * idle04Extras; // offset 0x1C, size 0x4
    unsigned char bombCount; // offset 0x20, size 0x1
    unsigned char extraIdleDelay; // offset 0x21, size 0x1
    unsigned char hdrGlow; // offset 0x22, size 0x1
    unsigned char hdrDarken; // offset 0x23, size 0x1
    unsigned int uDefaultMusicHash; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    float waterTileWidth; // offset 0x2C, size 0x4
    float lodFadeDistance; // offset 0x30, size 0x4
    float waterTileOffsetX; // offset 0x34, size 0x4
    float waterTileOffsetZ; // offset 0x38, size 0x4
    unsigned char numCheckpoints; // offset 0x3C, size 0x1
    unsigned char pad1[3]; // offset 0x3D, size 0x3
    float grassDistFade; // offset 0x40, size 0x4
    float grassDistCull; // offset 0x44, size 0x4
    unsigned int piggybank; // offset 0x48, size 0x4
    unsigned int maxAnimationMem; // offset 0x4C, size 0x4
    unsigned int maxArtMem; // offset 0x50, size 0x4
    unsigned int maxDesignMem; // offset 0x54, size 0x4
    unsigned int maxProgrammingMem; // offset 0x58, size 0x4
    unsigned int pad[3]; // offset 0x5C, size 0xC
};
// total size: 0x6A8
struct zScene : public xScene {
    // Members
    struct _zPortal * pendingPortal; // offset 0x70, size 0x4
    int num_base; // offset 0x74, size 0x4
    struct xBase * * base; // offset 0x78, size 0x4
    unsigned int num_update_base; // offset 0x7C, size 0x4
    struct xBase * * update_base; // offset 0x80, size 0x4
    int baseCount[195]; // offset 0x84, size 0x30C
    struct xBase * baseList[195]; // offset 0x390, size 0x30C
    struct _zEnv * zen; // offset 0x69C, size 0x4
    struct zSceneParameters * parameters; // offset 0x6A0, size 0x4
    unsigned char enableDrawing; // offset 0x6A4, size 0x1
};
enum sceDemoEndReason {
    SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
    SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
    SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
    SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
    SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
    SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5,
};
// total size: 0x38
struct PS2DemoGlobals {
    // Members
    unsigned short language; // offset 0x0, size 0x2
    unsigned short aspect; // offset 0x2, size 0x2
    unsigned short play_mode; // offset 0x4, size 0x2
    unsigned short inactive_timeout; // offset 0x6, size 0x2
    unsigned short gameplay_timeout; // offset 0x8, size 0x2
    enum sceDemoEndReason exit_code; // offset 0xC, size 0x4
    unsigned int FMV_playing : 1; // offset 0x10, size 0x4
    unsigned int more_padding : 31; // offset 0x10, size 0x4
    float bail_timer; // offset 0x14, size 0x4
    int inactive_detect; // offset 0x18, size 0x4
    float inactive_timer; // offset 0x1C, size 0x4
    float gameplay_timer; // offset 0x20, size 0x4
    char subdir[16]; // offset 0x24, size 0x10
    unsigned short quit; // offset 0x34, size 0x2
    unsigned short vmode; // offset 0x36, size 0x2
};
// total size: 0x570
struct xGlobals {
    // Members
    struct xCamGroup * cam; // offset 0x0, size 0x4
    struct xCamScreen * screen; // offset 0x4, size 0x4
    struct xVec4 frustplane[12]; // offset 0x8, size 0xC0
    int profile; // offset 0xC8, size 0x4
    char profFunc[6][128]; // offset 0xCC, size 0x300
    struct xUpdateCullMgr * updateMgr; // offset 0x3CC, size 0x4
    int sceneFirst; // offset 0x3D0, size 0x4
    char sceneStart[32]; // offset 0x3D4, size 0x20
    struct RpWorld * currWorld; // offset 0x3F4, size 0x4
    struct iFogParams fog; // offset 0x3F8, size 0x1C
    struct iFogParams fogA; // offset 0x414, size 0x1C
    struct iFogParams fogB; // offset 0x430, size 0x1C
    long long fog_t0; // offset 0x450, size 0x8
    long long fog_t1; // offset 0x458, size 0x8
    int option_vibration_p1; // offset 0x460, size 0x4
    int option_vibration_p2; // offset 0x464, size 0x4
    int option_vibration_p1_menu; // offset 0x468, size 0x4
    int option_vibration_p2_menu; // offset 0x46C, size 0x4
    int option_subtitles; // offset 0x470, size 0x4
    unsigned int slowdown; // offset 0x474, size 0x4
    float update_dt; // offset 0x478, size 0x4
    unsigned int dumpCutscene; // offset 0x47C, size 0x4
    signed short ForceCutscene; // offset 0x480, size 0x2
    int useHIPHOP; // offset 0x484, size 0x4
    unsigned char NoMusic; // offset 0x488, size 0x1
    unsigned char NoCutscenes; // offset 0x489, size 0x1
    unsigned char NoPadCheck; // offset 0x48A, size 0x1
    unsigned char firstStartPressed; // offset 0x48B, size 0x1
    unsigned char fromLauncher; // offset 0x48C, size 0x1
    unsigned char skipAssertWithController; // offset 0x48D, size 0x1
    unsigned char enableHelperAI; // offset 0x48E, size 0x1
    unsigned char enableHelperAIAttack; // offset 0x48F, size 0x1
    unsigned char enableDebugControls; // offset 0x490, size 0x1
    unsigned char showReleaseMemInfo; // offset 0x491, size 0x1
    unsigned char FlashWIP; // offset 0x492, size 0x1
    unsigned char inLoadingScreen; // offset 0x493, size 0x1
    unsigned char LoadingScene; // offset 0x494, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x495, size 0x1
    unsigned char ForceMono; // offset 0x496, size 0x1
    unsigned char UnlimitedNukes; // offset 0x497, size 0x1
    unsigned int minVSyncCnt; // offset 0x498, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x49C, size 0x1
    unsigned char autoSaveFeature; // offset 0x49D, size 0x1
    unsigned char skipAsserts; // offset 0x49E, size 0x1
    unsigned char beforeFirstFrame; // offset 0x49F, size 0x1
    int asyncLoadingScreen; // offset 0x4A0, size 0x4
    int asyncLoadingFlags; // offset 0x4A4, size 0x4
    char fromLauncherUser[32]; // offset 0x4A8, size 0x20
    class zPlayerContainer players; // offset 0x4C8, size 0x14
    struct zScene * sceneCur; // offset 0x4DC, size 0x4
    struct zScene * scenePreload; // offset 0x4E0, size 0x4
    struct PS2DemoGlobals * PS2demo; // offset 0x4E4, size 0x4
    char watermark[127]; // offset 0x4E8, size 0x7F
    unsigned char watermarkAlpha; // offset 0x567, size 0x1
    float watermarkSize; // offset 0x568, size 0x4
    unsigned char showMenuOnBoot; // offset 0x56C, size 0x1
    unsigned char enableHUD; // offset 0x56D, size 0x1
    unsigned char skipAnimViewer; // offset 0x56E, size 0x1
};
struct xGlobals * xglobals; // size: 0x4, address: 0x803BE168
// Range: 0x80019AC0 -> 0x80019D3C
unsigned int xRayHitsJSP(const struct xRay3 * r /* r29 */, const struct xJSPHeader * jsp /* r30 */, struct xCollis * coll /* r31 */) {
    // Local variables
    struct RpIntersection isx; // r1+0x8
    float len; // f3
    const struct xEnv * env; // r6
    int count; // r5
    struct xJSPHeader * * jsplist; // r4
    int index; // r7
    struct xIsect iBoxIsect; // r1+0x24

    // References
    // -> static struct xRay3 cbray;
    // -> static int sCollidingJSP;
    // -> struct xGlobals * xglobals;
}

// Range: 0x80019D3C -> 0x80019FC8
unsigned int xRayHitsEnv(const struct xRay3 * r /* r28 */, const struct xEnv * env /* r29 */, struct xCollis * coll /* r30 */) {
    // Local variables
    struct RpIntersection isx; // r1+0x8
    float len; // f3
    int i; // r31
    struct xIsect iBoxIsect; // r1+0x24

    // References
    // -> static struct xRay3 cbray;
    // -> static int sCollidingJSP;
}

// Range: 0x80019FC8 -> 0x8001A4AC
static struct RpCollisionTriangle * sphereHitsEnv3CB(struct RpIntersection * isx /* r0 */, struct RpWorldSector * sector /* r28 */, struct RpCollisionTriangle * tri /* r29 */, float dist /* r1+0x8 */, void * data /* r30 */) {
    // Local variables
    struct xCollis * colls; // r0
    float radius; // f31
    struct xVec3 tohit; // r1+0x18
    struct xVec3 hdng; // r1+0xC
    unsigned char idx; // r31
    float dot; // f0
    float odot; // f0
    float ndot; // f0
    float scale; // f31

    // References
    // -> static unsigned char cbmaxcs;
    // -> static unsigned char cbnumcs;
    // -> static int sCollidingJSP;
    // -> static unsigned char NEXT2;
    // -> static unsigned char OTHER;
    // -> static unsigned char FLOOR;
}

// Range: 0x8001A4AC -> 0x8001A4DC
static struct RpCollisionTriangle * sphereHitsModel3CB(struct RpCollisionTriangle * tri /* r4 */, float dist /* f0 */, void * data /* r6 */) {
    // References
    // -> static struct RpIntersection cbisx_local;
}

// Range: 0x8001A4DC -> 0x8001A744
int xSphereHitsModel3(const struct xSphere * b /* r27 */, const struct xModelInstance * m /* r28 */, struct xCollis * colls /* r29 */, unsigned char ncolls /* r30 */, float sth /* f30 */) {
    // Local variables
    struct RpIntersection isx; // r1+0x10
    unsigned char idx; // r5
    unsigned char i; // r6
    struct xMat4x3 * mat; // r31
    float mscale; // f0
    struct xMat3x3 mnormal; // r1+0x30

    // References
    // -> static unsigned char cbnumcs;
    // -> static struct RpIntersection cbisx_local;
    // -> static unsigned char OTHER;
    // -> static unsigned char NEXT2;
    // -> static unsigned char FLOOR;
    // -> static unsigned char cbmaxcs;
    // -> static float cbath;
}

// Range: 0x8001A744 -> 0x8001A914
int xSphereHitsEnv3(const struct xSphere * b /* r26 */, const struct xEnv * env /* r27 */, struct xCollis * colls /* r28 */, unsigned char ncolls /* r29 */, float sth /* f31 */) {
    // Local variables
    struct RpIntersection isx; // r1+0x8
    unsigned char idx; // r5
    int i; // r30

    // References
    // -> static unsigned char cbnumcs;
    // -> static int sCollidingJSP;
    // -> static unsigned char OTHER;
    // -> static unsigned char NEXT2;
    // -> static unsigned char FLOOR;
    // -> static unsigned char cbmaxcs;
    // -> static float cbath;
}

// Range: 0x8001A914 -> 0x8001AA44
unsigned int xSphereHitsEnv(const struct xSphere * b /* r27 */, const struct xEnv * env /* r28 */, struct xCollis * coll /* r29 */) {
    // Local variables
    struct RpIntersection isx; // r1+0x8
    int i; // r30

    // References
    // -> static int sCollidingJSP;
}

// Range: 0x8001AA44 -> 0x8001AAF8
unsigned char xOBBHitsEnt(const struct xBox & box /* r29 */, const struct xMat4x3 & mat /* r30 */, const struct xEnt * ent /* r31 */, const struct xQCData * quickCullData /* r6 */) {}

// Range: 0x8001AAF8 -> 0x8001ABD0
static struct RpCollisionTriangle * OBBHitsEnvCB(struct RpCollisionTriangle * tri /* r30 */, void * data /* r31 */) {
    // Local variables
    struct OBBCallbackData * cbData; // r0
    struct xVec3 verts[3]; // r1+0x8
}

// Range: 0x8001ABD0 -> 0x8001ABFC
static struct RpCollisionTriangle * OBBHitsModelCB(struct RpIntersection * isx /* r0 */, struct RpCollisionTriangle * tri /* r4 */, float dist /* f0 */, void * data /* r6 */) {}

struct xGrid npcs_grid; // size: 0x38, address: 0x803C1EB0
// total size: 0x24
struct xBBox {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    struct xBox box; // offset 0xC, size 0x18
};
// total size: 0x14
struct xCylinder {
    // Members
    struct xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x4C
struct xBound {
    // Members
    struct xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        struct xSphere sph; // offset 0x24, size 0x10
        struct xBBox box; // offset 0x24, size 0x24
        struct xCylinder cyl; // offset 0x24, size 0x14
    };
    struct xMat4x3 * mat; // offset 0x48, size 0x4
};
// total size: 0x10
struct OBBHitsEntCB {
    // Functions
    static OBBHitsEntCB(const struct xBound & bound, unsigned char & hit, const struct xEnt * object, unsigned char chkby, unsigned char collType);

    static unsigned char operator()(struct xEnt & ent);

    // Members
private:
    const struct xBound & bound; // offset 0x0, size 0x4
    unsigned char & hit; // offset 0x4, size 0x4
    const struct xEnt * object; // offset 0x8, size 0x4
    unsigned char chkby; // offset 0xC, size 0x1
    unsigned char collType; // offset 0xD, size 0x1
};
// Range: 0x8001ABFC -> 0x8001AD18
unsigned char xOBBHitsScene(const struct xBox & box /* r26 */, const struct xMat4x3 & mat /* r27 */, struct xScene * sc /* r28 */, const struct xEnt * object /* r29 */, unsigned char collType /* r30 */, unsigned char chk /* r31 */) {
    // Local variables
    struct xMat4x3 tempMat; // r1+0x30
    struct xBound bound; // r1+0x70
    unsigned char hit; // r1+0x10
    struct OBBHitsEntCB cb; // r1+0x14

    // References
    // -> struct xGrid npcs_grid;
    // -> struct xGrid colls_oso_grid;
    // -> struct xGrid colls_grid;
}

// Range: 0x8001AD18 -> 0x8001AD30
// this: r0
static OBBHitsEntCB::OBBHitsEntCB(const struct xBound & bound /* r0 */, unsigned char & hit /* r0 */, const struct xEnt * object /* r0 */, unsigned char chkby /* r0 */, unsigned char collType /* r0 */) {}

// total size: 0xC
struct OBBCallbackData {
    // Members
    const struct xBox & box; // offset 0x0, size 0x4
    const struct xMat4x3 & mat; // offset 0x4, size 0x4
    unsigned char jsp; // offset 0x8, size 0x1
    unsigned char hit; // offset 0x9, size 0x1
};
// Range: 0x8001AD30 -> 0x8001AE24
unsigned char xOBBHitsEnv(const struct xBox & box /* r8 */, const struct xMat4x3 & mat /* r7 */, const struct xEnv * env /* r27 */) {
    // Local variables
    struct OBBCallbackData data; // r1+0x8
    struct RpIntersection intersection; // r1+0x2C
    struct xBox outputBox; // r1+0x14
    int i; // r28
}

// Range: 0x8001AE24 -> 0x8001AF4C
unsigned char xOBBHitsModel(const struct xBox & box /* r29 */, const struct xMat4x3 & mat /* r30 */, const struct xModelInstance * model /* r31 */) {
    // Local variables
    struct RpIntersection intersection; // r1+0x1C
    struct RwFrame * frame; // r26
    struct RwMatrixTag * ltm; // r4
    struct xMat4x3 modelInverseMat; // r1+0x80
    struct xMat4x3 modelSpaceMat; // r1+0x40
    struct OBBCallbackData data; // r1+0x10
}

// total size: 0xC
struct xGridIterator {
    // Members
    struct xGridBound * * listhead; // offset 0x0, size 0x4
    struct xGridBound * curcell; // offset 0x4, size 0x4
    unsigned int delfound; // offset 0x8, size 0x4
};
// Range: 0x8001AF4C -> 0x8001AFEC
// this: r31
static unsigned char OBBHitsEntCB::operator()(struct xEnt & ent /* r4 */) {}


