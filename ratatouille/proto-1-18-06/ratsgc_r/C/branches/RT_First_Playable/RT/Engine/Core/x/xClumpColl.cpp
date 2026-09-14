/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xClumpColl.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80017C3C -> 0x8001A008
*/
unsigned char xClumpColl_FilterFlags; // size: 0x1, address: 0x80BFBA18
unsigned char xClumpColl_FilterFlagsAllMask; // size: 0x1, address: 0x80C06EA0
unsigned char xClumpColl_FilterFlagsAllEqual; // size: 0x1, address: 0x80BFBA19
// Range: 0x80017C3C -> 0x80017C64
unsigned int xClumpColl_SetFilterFlags(unsigned char filterFlags /* r0 */, unsigned char allMask /* r0 */, unsigned char allEqual /* r0 */) {
    // Local variables
    unsigned int previousFlags; // r3

    // References
    // -> unsigned char xClumpColl_FilterFlagsAllEqual;
    // -> unsigned char xClumpColl_FilterFlagsAllMask;
    // -> unsigned char xClumpColl_FilterFlags;
}

// Range: 0x80017C64 -> 0x80017C7C
void xClumpColl_RestoreFilterFlags(unsigned int previousFlags /* r0 */) {
    // References
    // -> unsigned char xClumpColl_FilterFlagsAllEqual;
    // -> unsigned char xClumpColl_FilterFlagsAllMask;
    // -> unsigned char xClumpColl_FilterFlags;
}

void * RwEngineInstance; // size: 0x4, address: 0x80C09F34
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
union /* @class$820xClumpColl_cpp */ {
    struct xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
    unsigned int rawIdx; // offset 0x0, size 0x4
    struct RwV3d * p; // offset 0x0, size 0x4
};
// total size: 0x8
struct xClumpCollBSPTriangle {
    // Members
    union /* @class$820xClumpColl_cpp */ {
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
enum RwStreamType {
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
};
enum RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
struct RwStreamMemory {
    // Members
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
};
union RwStreamFile {
    void * fpFile; // offset 0x0, size 0x4
    void * constfpFile; // offset 0x0, size 0x4
};
// total size: 0x14
struct RwStreamCustom {
    // Members
    int (* sfnclose)(void *); // offset 0x0, size 0x4
    unsigned int (* sfnread)(void *, void *, unsigned int); // offset 0x4, size 0x4
    int (* sfnwrite)(void *, void *, unsigned int); // offset 0x8, size 0x4
    int (* sfnskip)(void *, unsigned int); // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
};
union RwStreamUnion {
    struct RwStreamMemory memory; // offset 0x0, size 0xC
    union RwStreamFile file; // offset 0x0, size 0x4
    struct RwStreamCustom custom; // offset 0x0, size 0x14
};
// total size: 0x24
struct RwStream {
    // Members
    enum RwStreamType type; // offset 0x0, size 0x4
    enum RwStreamAccessType accessType; // offset 0x4, size 0x4
    int position; // offset 0x8, size 0x4
    union RwStreamUnion Type; // offset 0xC, size 0x14
    int rwOwned; // offset 0x20, size 0x4
};
// Range: 0x80017C7C -> 0x80017D10
struct xClumpCollBSPTree * xClumpColl_StaticBufferInit(void * data /* r29 */) {
    // Local variables
    unsigned int * header; // r0
    unsigned int numBranchNodes; // r31
    unsigned int numTriangles; // r30
    struct xClumpCollBSPTree * tree; // r3

    // References
    // -> void * RwEngineInstance;
}

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
// total size: 0x8
struct RwLinkList {
    // Members
    struct RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0x8
struct RwMemory {
    // Members
    unsigned char * start; // offset 0x0, size 0x4
    unsigned int length; // offset 0x4, size 0x4
};
// Range: 0x80017D10 -> 0x80017D14
void xClumpColl_InstancePointers() {}

// total size: 0x8
struct nodeInfo {
    // Members
    unsigned int type; // offset 0x0, size 0x4
    unsigned int index; // offset 0x4, size 0x4
};
static char __FUNCTION__[42]; // size: 0x2A, address: 0x80414310
// total size: 0x18
struct RwBBox {
    // Members
    struct RwV3d sup; // offset 0x0, size 0xC
    struct RwV3d inf; // offset 0xC, size 0xC
};
// Range: 0x80017D28 -> 0x80017F64
struct xClumpCollBSPTree * xClumpColl_ForAllBoxLeafNodeIntersections(struct xClumpCollBSPTree * tree /* r27 */, struct RwBBox * box /* r28 */, int (* callBack)(struct xClumpCollBSPTriangle *, void *) /* r29 */, void * data /* r30 */) {
    // Local variables
    int nStack; // r31
    struct nodeInfo nodeStack[33]; // r1+0x10
    struct nodeInfo node; // r1+0x8
    struct xClumpCollBSPBranchNode * branch; // r5

    // References
    // -> static char __FUNCTION__[42];
}

static char __FUNCTION__[43]; // size: 0x2B, address: 0x8041433C
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
// total size: 0x18
struct RwLine {
    // Members
    struct RwV3d start; // offset 0x0, size 0xC
    struct RwV3d end; // offset 0xC, size 0xC
};
union RwSplitBits {
    float nReal; // offset 0x0, size 0x4
    int nInt; // offset 0x0, size 0x4
    unsigned int nUInt; // offset 0x0, size 0x4
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// Range: 0x80017F64 -> 0x8001899C
struct xClumpCollBSPTree * xClumpColl_ForAllLineLeafNodeIntersections(struct xClumpCollBSPTree * tree /* r25 */, struct RwLine * line /* r29 */, struct xClumpCollV3dGradient * grad /* r26 */, int (* callBack)(struct xClumpCollBSPTriangle *, void *) /* r27 */, void * data /* r28 */) {
    // Local variables
    int nStack; // r30
    struct nodeInfo nodeStack[33]; // r1+0x68
    struct nodeInfo node; // r1+0x18
    struct RwLine lineStack[33]; // r1+0x170
    struct RwLine currLine; // r1+0x50
    union RwSplitBits lStart; // r1+0x14
    union RwSplitBits lEnd; // r1+0x10
    union RwSplitBits rStart; // r1+0xC
    union RwSplitBits rEnd; // r1+0x8
    struct xClumpCollBSPBranchNode * branch; // r29
    struct RwV3d vTmp; // r1+0x44
    float delta; // f3
    struct RwV3d vTmp; // r1+0x38
    float delta; // f3
    struct RwV3d vLeft; // r1+0x2C
    struct RwV3d vRight; // r1+0x20
    float delta; // f3
    float delta; // f3

    // References
    // -> static char __FUNCTION__[43];
}

static char __FUNCTION__[46]; // size: 0x2E, address: 0x80414368
// Range: 0x800189EC -> 0x80019444
struct xClumpCollBSPTree * xClumpColl_ForAllCapsuleLeafNodeIntersections(struct xClumpCollBSPTree * tree /* r25 */, struct RwLine * line /* r29 */, float radius /* f31 */, struct xClumpCollV3dGradient * grad /* r26 */, int (* callBack)(struct xClumpCollBSPTriangle *, void *) /* r27 */, void * data /* r28 */) {
    // Local variables
    int nStack; // r30
    struct nodeInfo nodeStack[33]; // r1+0x68
    struct nodeInfo node; // r1+0x18
    struct RwLine lineStack[33]; // r1+0x170
    struct RwLine currLine; // r1+0x50
    union RwSplitBits lStart; // r1+0x14
    union RwSplitBits lEnd; // r1+0x10
    union RwSplitBits rStart; // r1+0xC
    union RwSplitBits rEnd; // r1+0x8
    struct xClumpCollBSPBranchNode * branch; // r29
    struct RwV3d vTmp; // r1+0x44
    float delta; // f3
    struct RwV3d vTmp; // r1+0x38
    float delta; // f3
    struct RwV3d vLeft; // r1+0x2C
    struct RwV3d vRight; // r1+0x20
    float delta; // f3
    float delta; // f3

    // References
    // -> static char __FUNCTION__[46];
}

static char __FUNCTION__[26]; // size: 0x1A, address: 0x80414398
// total size: 0x28
struct RpCollisionTriangle {
    // Members
    struct RwV3d normal; // offset 0x0, size 0xC
    struct RwV3d point; // offset 0xC, size 0xC
    int index; // offset 0x18, size 0x4
    struct RwV3d * vertices[3]; // offset 0x1C, size 0xC
};
// Range: 0x80019444 -> 0x800198A4
static int LeafNodeLinePolyIntersect(struct xClumpCollBSPTriangle * triangles /* r29 */, void * data /* r30 */) {
    // Local variables
    struct PolyLineTestParam * isData; // r0
    struct CallBackParam * cbParam; // r31
    struct RwV3d * v0; // r27
    struct RwV3d * v1; // r26
    struct RwV3d * v2; // r25
    float distance; // f31
    int result; // r0
    struct RwV3d edge1; // r1+0x20
    struct RwV3d edge2; // r1+0x14
    float det; // f0
    struct RwV3d edgetmp; // r1+0x8
    float lo; // f1
    float hi; // f13
    float u; // f30
    float v; // f2
    struct RpCollisionTriangle collisionTri; // r1+0x2C
    float recipLength; // f0

    // References
    // -> static char __FUNCTION__[26];
}

static char __FUNCTION__[28]; // size: 0x1C, address: 0x804143B4
// Range: 0x800198A4 -> 0x80019A40
static int LeafNodeSpherePolyIntersect(struct xClumpCollBSPTriangle * triangles /* r31 */, void * data /* r25 */) {
    // Local variables
    struct PolyTestParam * isData; // r0
    struct CallBackParam * cbParam; // r29
    struct TestSphere * testSphere; // r28
    struct RwV3d * v0; // r27
    struct RwV3d * v1; // r26
    struct RwV3d * v2; // r25
    float distance; // r1+0x8
    struct RpCollisionTriangle collisionTri; // r1+0xC

    // References
    // -> static char __FUNCTION__[28];
}

static char __FUNCTION__[25]; // size: 0x19, address: 0x804143D0
// Range: 0x80019A40 -> 0x80019C64
static int LeafNodeBoxPolyIntersect(struct xClumpCollBSPTriangle * triangles /* r31 */, void * data /* r25 */) {
    // Local variables
    struct PolyTestParam * isData; // r29
    struct CallBackParam * cbParam; // r28
    struct RwV3d * v0; // r27
    struct RwV3d * v1; // r26
    struct RwV3d * v2; // r25
    struct RpCollisionTriangle collisionTri; // r1+0x8
    float recipLength; // f0

    // References
    // -> static char __FUNCTION__[25];
}

static char __FUNCTION__[31]; // size: 0x1F, address: 0x804143EC
// total size: 0x10
struct RwSphere {
    // Members
    struct RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
// total size: 0x14
struct RwObjectHasFrame {
    // Members
    struct RwObject object; // offset 0x0, size 0x8
    struct RwLLLink lFrame; // offset 0x8, size 0x8
    struct RwObjectHasFrame * (* sync)(struct RwObjectHasFrame *); // offset 0x10, size 0x4
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
// total size: 0x1C
struct RpMorphTarget {
    // Members
    struct RpGeometry * parentGeom; // offset 0x0, size 0x4
    struct RwSphere boundingSphere; // offset 0x4, size 0x10
    struct RwV3d * verts; // offset 0x14, size 0x4
    struct RwV3d * normals; // offset 0x18, size 0x4
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
// total size: 0x8
struct RpTriangle {
    // Members
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x4
struct RpVertexNormal {
    // Members
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
};
// total size: 0x8
struct RwTexCoords {
    // Members
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x4
struct RwRGBA {
    // Members
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
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
// total size: 0x10
struct RpMeshHeader {
    // Members
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
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
// total size: 0x50
struct PolyLineTestParam {
    // Members
    struct RwV3d start; // offset 0x0, size 0xC
    struct RpWorldSector * worldSector; // offset 0xC, size 0x4
    struct RwV3d delta; // offset 0x10, size 0xC
    struct xClumpCollV3dGradient grad; // offset 0x1C, size 0x18
    struct RwLine line; // offset 0x34, size 0x18
    struct CallBackParam * cbParam; // offset 0x4C, size 0x4
};
// total size: 0x24
struct PolyTestParam {
    // Members
    struct RwBBox bbox; // offset 0x0, size 0x18
    struct RpWorldSector * worldSector; // offset 0x18, size 0x4
    void * leafTestData; // offset 0x1C, size 0x4
    struct CallBackParam * cbParam; // offset 0x20, size 0x4
};
// total size: 0x8
struct TestSphere {
    // Members
    struct RwSphere * sphere; // offset 0x0, size 0x4
    float recipRadius; // offset 0x4, size 0x4
};
// Range: 0x80019C64 -> 0x80019FD4
struct xClumpCollBSPTree * xClumpColl_ForAllIntersections(struct xClumpCollBSPTree * tree /* r28 */, struct RpIntersection * intersection /* r29 */, struct RpCollisionTriangle * (* callBack)(struct RpIntersection *, struct RpWorldSector *, struct RpCollisionTriangle *, float, void *) /* r30 */, void * data /* r31 */) {
    // Local variables
    struct CallBackParam cbParam; // r1+0x10
    struct PolyLineTestParam isData; // r1+0x64
    struct PolyTestParam isData; // r1+0x40
    struct TestSphere testSphere; // r1+0x8
    struct PolyTestParam isData; // r1+0x1C

    // References
    // -> static char __FUNCTION__[31];
}


