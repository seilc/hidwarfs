/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\plugin\collis\collquery.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803DD6A4 -> 0x803E07A8
*/
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
// total size: 0x18
struct RpTie {
    // Members
    struct RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    struct RpAtomic * apAtom; // offset 0x8, size 0x4
    struct RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    struct RpWorldSector * worldSector; // offset 0x14, size 0x4
};
// total size: 0x28
struct RpCollisionTriangle {
    // Members
    struct RwV3d normal; // offset 0x0, size 0xC
    struct RwV3d point; // offset 0xC, size 0xC
    int index; // offset 0x18, size 0x4
    struct RwV3d * vertices[3]; // offset 0x1C, size 0xC
};
static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E7970
// Range: 0x803DD6A4 -> 0x803DDBE0
static void SimpleGeomForAllTriIntsecLine(struct RpGeometry * geometry /* r28 */, struct RwLine * line /* r25 */, struct RpIntersection * is /* r1+0x8 */, struct RpCollisionTriangle * (* callBack)(struct RpIntersection *, struct RpCollisionTriangle *, float, void *) /* r1+0xC */, void * data /* r1+0x10 */) {
    // Local variables
    struct RwV3d delta; // r1+0x68
    struct RwV3d * verts; // r23
    struct RpTriangle * tri; // r27
    int i; // r24
    struct RwV3d * v0; // r31
    struct RwV3d * v1; // r30
    struct RwV3d * v2; // r29
    int result; // r26
    float dist; // f31
    struct RpCollisionTriangle collTri; // r1+0x74
    struct RwV3d edge1; // r1+0x5C
    struct RwV3d edge2; // r1+0x50
    struct RwV3d tVec; // r1+0x44
    struct RwV3d pVec; // r1+0x38
    struct RwV3d qVec; // r1+0x2C
    float det; // f30
    float lo; // f29
    float hi; // f28
    float u; // f27
    float v; // f25
    struct RwV3d vTmp; // r1+0x20
    struct RwV3d vTmp2; // r1+0x14
    float recipLength; // f26
    float lengthSq; // f24

    // References
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804E798E
// Range: 0x803DDBE0 -> 0x803DDD60
static void SimpleGeomForAllTriIntsecSphere(struct RpGeometry * geometry /* r31 */, const struct RwSphere * sphere /* r24 */, struct RpIntersection * is /* r1+0x8 */, struct RpCollisionTriangle * (* callBack)(struct RpIntersection *, struct RpCollisionTriangle *, float, void *) /* r1+0xC */, void * data /* r1+0x10 */) {
    // Local variables
    float recipRadius; // f31
    struct RwV3d * verts; // r27
    struct RpTriangle * tri; // r30
    int i; // r29
    struct RwV3d * v0; // r28
    struct RwV3d * v1; // r26
    struct RwV3d * v2; // r25
    struct RpCollisionTriangle collTri; // r1+0x18
    float dist; // r1+0x14

    // References
    // -> static char __dbFunctionName[32];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E79AE
static int first; // size: 0x4, address: 0x80D68300
// Range: 0x803DDD60 -> 0x803DEE04
static void GeometryForAllTriIntsecLine(struct RpGeometry * geometry /* r24 */, struct RwLine * line /* r31 */, struct RpIntersection * is /* r1+0x8 */, struct RpCollisionTriangle * (* callBack)(struct RpIntersection *, struct RpCollisionTriangle *, float, void *) /* r1+0xC */, void * data /* r1+0x10 */) {
    // Local variables
    struct RpCollTree * tree; // r26
    struct RwV3d delta; // r1+0x120
    struct RwV3d * verts; // r18
    struct RpTriangle * tris; // r1+0xC8
    struct RpCollSectorLineIt it; // r1+0x16C
    struct RwBBox padbb; // r1+0x12C
    int result; // r25
    float p0; // f30
    float p1; // f29
    float temp; // r1+0xC4
    float p0; // f28
    float p1; // f27
    float temp; // r1+0xC0
    float p0; // f26
    float p1; // f25
    float temp; // r1+0xBC
    unsigned short i; // r21
    unsigned short start; // r17
    unsigned short count; // r1+0x16
    struct RpCollSplit * split; // r29
    unsigned int axis; // r20
    float del; // r1+0xB8
    float sta; // f31
    float end; // f24
    float rec; // f21
    float pad; // r1+0xB4
    float padLo; // f23
    float padHi; // f22
    unsigned int index; // r1+0xB0
    struct RpTriangle * tri; // r22
    struct RwV3d * v0; // r30
    struct RwV3d * v1; // r28
    struct RwV3d * v2; // r27
    int result; // r23
    float dist; // f20
    struct RwV3d edge1; // r1+0x114
    struct RwV3d edge2; // r1+0x108
    struct RwV3d tVec; // r1+0xFC
    struct RwV3d pVec; // r1+0xF0
    struct RwV3d qVec; // r1+0xE4
    float det; // f19
    float lo; // f18
    float hi; // r1+0xAC
    float u; // r1+0xA8
    float v; // r1+0xA4
    struct RpCollisionTriangle collTri; // r1+0x144
    struct RwV3d vTmp; // r1+0xD8
    struct RwV3d vTmp2; // r1+0xCC
    float recipLength; // r1+0xA0
    float lengthSq; // r1+0x9C

    // References
    // -> static int first;
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804E79CA
static int first; // size: 0x4, address: 0x80D68304
// Range: 0x803DEE04 -> 0x803DF848
static void GeometryForAllTriIntsecSphere(struct RpGeometry * geometry /* r24 */, const struct RwSphere * sphere /* r30 */, struct RpIntersection * is /* r1+0x8 */, struct RpCollisionTriangle * (* callBack)(struct RpIntersection *, struct RpCollisionTriangle *, float, void *) /* r1+0xC */, void * data /* r1+0x10 */) {
    // Local variables
    struct RpCollTree * tree; // r31
    float recipRadius; // f21
    float innerSize; // f30
    float distSq; // f29
    struct RwBBox bbox; // r1+0x84
    struct RwBBox innerBBox; // r1+0x6C
    struct RwV3d * verts; // r18
    struct RpTriangle * tris; // r1+0x44
    struct RpCollSectorBBoxIt it; // r1+0xC4
    int result; // r1+0x40
    float dist; // f31
    unsigned short i; // r19
    unsigned short start; // r17
    unsigned short count; // r1+0x16
    unsigned int clip; // r1+0x3C
    struct RpCollSector * sector; // r27
    struct RpCollSplit * split; // r28
    unsigned int axis; // r21
    struct RpCollSplit * split; // r1+0x38
    struct RpCollSector * leftLeaf; // r26
    struct RpCollSector * rightLeaf; // r25
    unsigned int index; // r1+0x34
    struct RpTriangle * tri; // r20
    struct RwV3d * v0; // r29
    struct RwV3d * v1; // r23
    struct RwV3d * v2; // r22
    float dist; // r1+0x30
    struct RpCollisionTriangle collTri; // r1+0x9C
    struct RwV3d offset; // r1+0x60
    struct RwV3d vTmp; // r1+0x54
    struct RwV3d vTmp2; // r1+0x48
    float recipLength; // f28
    float lengthSq; // f20

    // References
    // -> static int first;
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804E79E8
// Range: 0x803DF848 -> 0x803DFF80
static void MorphGeomForAllTriIntsecLine(struct RpGeometry * geom /* r29 */, struct RpInterpolator * interp /* r26 */, struct RwLine * line /* r23 */, struct RpIntersection * is /* r1+0x8 */, struct RpCollisionTriangle * (* callBack)(struct RpIntersection *, struct RpCollisionTriangle *, float, void *) /* r1+0xC */, void * data /* r1+0x10 */) {
    // Local variables
    // total size: 0x30
    struct {
        // Members
        struct RwV3d tri[3]; // offset 0x0, size 0x24
        struct RwV3d * vertsA; // offset 0x24, size 0x4
        struct RwV3d * vertsB; // offset 0x28, size 0x4
        float fac; // offset 0x2C, size 0x4
    } lerp; // r1+0xA4
    struct RwV3d delta; // r1+0x70
    int i; // r20
    struct RwV3d * v0; // r31
    struct RwV3d * v1; // r28
    struct RwV3d * v2; // r27
    struct RpTriangle * tri; // r30
    float dist; // f31
    int result; // r25
    struct RpCollisionTriangle collTri; // r1+0x7C
    struct RwV3d * va; // r24
    struct RwV3d * vb; // r22
    struct RwV3d edge1; // r1+0x64
    struct RwV3d edge2; // r1+0x58
    struct RwV3d tVec; // r1+0x4C
    struct RwV3d pVec; // r1+0x40
    struct RwV3d qVec; // r1+0x34
    float det; // f30
    float lo; // f29
    float hi; // f28
    float u; // f27
    float v; // f25
    struct RwV3d vTmp; // r1+0x28
    struct RwV3d vTmp2; // r1+0x1C
    float recipLength; // f26
    float lengthSq; // f24

    // References
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E7A05
// Range: 0x803DFF80 -> 0x803E02F8
static void MorphGeomForAllTriIntsecSphere(struct RpGeometry * geom /* r30 */, struct RpInterpolator * interp /* r29 */, struct RwSphere * sphere /* r21 */, struct RpIntersection * is /* r1+0x8 */, struct RpCollisionTriangle * (* callBack)(struct RpIntersection *, struct RpCollisionTriangle *, float, void *) /* r1+0xC */, void * data /* r1+0x10 */) {
    // Local variables
    float recipRad; // f31
    // total size: 0x30
    struct {
        // Members
        struct RwV3d tri[3]; // offset 0x0, size 0x24
        struct RwV3d * vertsA; // offset 0x24, size 0x4
        struct RwV3d * vertsB; // offset 0x28, size 0x4
        float fac; // offset 0x2C, size 0x4
    } lerp; // r1+0x40
    struct RwV3d * v0; // r27
    struct RwV3d * v1; // r23
    struct RwV3d * v2; // r22
    int i; // r24
    struct RpTriangle * tri; // r31
    float dist; // r1+0x14
    struct RpCollisionTriangle collTri; // r1+0x18
    struct RwV3d * va; // r28
    struct RwV3d * vb; // r26

    // References
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E7A24
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
// Range: 0x803E02F8 -> 0x803E03EC
static void AtomicForAllTriIntsecLine(struct RpAtomic * atomic /* r30 */, struct RpIntersection * is /* r29 */, struct RpCollisionTriangle * (* callBack)(struct RpIntersection *, struct RpCollisionTriangle *, float, void *) /* r26 */, void * data /* r27 */) {
    // Local variables
    struct RwLine * line; // r28
    struct RpGeometry * geom; // r31
    struct RwMatrixTag inverseLTM; // r1+0x20
    struct RwLine localLine; // r1+0x8

    // References
    // -> static char __dbFunctionName[26];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E7A3E
// Range: 0x803E03EC -> 0x803E0528
static void AtomicForAllTriIntsecSphere(struct RpAtomic * atomic /* r30 */, const struct RwSphere * sphere /* r29 */, struct RpIntersection * is /* r26 */, struct RpCollisionTriangle * (* callBack)(struct RpIntersection *, struct RpCollisionTriangle *, float, void *) /* r27 */, void * data /* r28 */) {
    // Local variables
    struct RpGeometry * geom; // r31
    struct RwSphere localSphere; // r1+0x8
    struct RwMatrixTag inverseLTM; // r1+0x18
    float scaleSq; // f31
    float scale; // f30

    // References
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804E7A5A
// Range: 0x803E0528 -> 0x803E07A8
struct RpAtomic * RpAtomicForAllIntersections(struct RpAtomic * atomic /* r29 */, struct RpIntersection * intersection /* r31 */, struct RpCollisionTriangle * (* callBack)(struct RpIntersection *, struct RpCollisionTriangle *, float, void *) /* r27 */, void * data /* r26 */) {
    // Local variables
    struct RpAtomic * intsecAtomic; // r28
    struct RwSphere sphere; // r1+0x8

    // References
    // -> static char __dbFunctionName[28];
    // -> int _rpCollisionNumInstances;
}


