/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\bageomet.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8040A450 -> 0x8040EB4C
*/
static struct RwPluginRegistry geometryTKList; // size: 0x18, address: 0x80550990
static char __dbFunctionName[19]; // size: 0x13, address: 0x804E9F10
// Range: 0x8040A450 -> 0x8040A5DC
static int GeometryAnnihilate(struct RpGeometry * geometry /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
    // -> static struct RwPluginRegistry geometryTKList;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804E9F23
static struct RwModuleInfo geometryModule; // size: 0x8, address: 0x80D6C290
// Range: 0x8040A5DC -> 0x8040A60C
void * _rpGeometryOpen(void * instance /* r3 */, int offset /* r4 */) {
    // References
    // -> static struct RwModuleInfo geometryModule;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804E9F33
// Range: 0x8040A60C -> 0x8040A638
void * _rpGeometryClose(void * instance /* r3 */) {
    // References
    // -> static struct RwModuleInfo geometryModule;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804E9F44
// Range: 0x8040A638 -> 0x8040A7C4
struct RpGeometry * RpGeometryCreateSpace(float radius /* f31 */) {
    // Local variables
    struct RpGeometry * geometry; // r31
    struct RpMorphTarget * morphTarget; // r29

    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E9F5A
// Range: 0x8040A7C4 -> 0x8040A8EC
struct RpMorphTarget * RpMorphTargetSetBoundingSphere(struct RpMorphTarget * morphTarget /* r1+0x8 */, const struct RwSphere * boundingSphere /* r30 */) {
    // References
    // -> static char __dbFunctionName[31];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804E9F79
// Range: 0x8040A8EC -> 0x8040A990
struct RwSphere * RpMorphTargetGetBoundingSphere(struct RpMorphTarget * morphTarget /* r30 */) {
    // References
    // -> static char __dbFunctionName[31];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[32]; // size: 0x20, address: 0x804E9F98
// Range: 0x8040A990 -> 0x8040ABB4
struct RpMorphTarget * RpMorphTargetCalcBoundingSphere(const struct RpMorphTarget * morphTarget /* r30 */, struct RwSphere * boundingSphere /* r26 */) {
    // Local variables
    struct RpGeometry * geometry; // r29
    struct RwV3d * vert; // r28
    int numVerts; // r27
    struct RwSphere sphere; // r1+0x14
    float sphere_radius; // f31
    struct RwBBox boundBox; // r1+0x24
    float nDist; // f30
    struct RwV3d vTmp; // r1+0x8

    // References
    // -> static char __dbFunctionName[32];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804E9FB8
// Range: 0x8040ABB4 -> 0x8040B038
int RpGeometryAddMorphTargets(struct RpGeometry * geometry /* r31 */, int mtcount /* r22 */) {
    // Local variables
    int i; // r28
    unsigned int mtsize; // r25
    unsigned int bytes; // r27
    struct RpMorphTarget * morphTarget; // r24
    struct RwV3d * vertexData; // r23
    unsigned char * src; // r21
    unsigned char * dst; // r20
    int len; // r19
    struct RwError _rwErrorCode; // r1+0x10
    struct RwError _rwErrorCode; // r1+0x8
    struct RpMorphTarget * aMorph; // r26
    struct RpMorphTarget * aMorph; // r29

    // References
    // -> static char __dbFunctionName[26];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804E9FD2
// Range: 0x8040B038 -> 0x8040B134
int RpGeometryAddMorphTarget(struct RpGeometry * geometry /* r30 */) {
    // References
    // -> static char __dbFunctionName[25];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804E9FEB
// Range: 0x8040B134 -> 0x8040B228
int RpGeometryGetNumMorphTargets(const struct RpGeometry * geometry /* r30 */) {
    // References
    // -> static char __dbFunctionName[29];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EA008
// Range: 0x8040B228 -> 0x8040B374
struct RpMorphTarget * RpGeometryGetMorphTarget(const struct RpGeometry * geometry /* r30 */, int morphTargetIndex /* r29 */) {
    // References
    // -> static char __dbFunctionName[25];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EA021
// Range: 0x8040B374 -> 0x8040B468
struct RwRGBA * RpGeometryGetPreLightColors(const struct RpGeometry * geometry /* r30 */) {
    // References
    // -> static char __dbFunctionName[28];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EA03D
enum RwTextureCoordinateIndex {
    rwNARWTEXTURECOORDINATEINDEX = 0,
    rwTEXTURECOORDINATEINDEX0 = 1,
    rwTEXTURECOORDINATEINDEX1 = 2,
    rwTEXTURECOORDINATEINDEX2 = 3,
    rwTEXTURECOORDINATEINDEX3 = 4,
    rwTEXTURECOORDINATEINDEX4 = 5,
    rwTEXTURECOORDINATEINDEX5 = 6,
    rwTEXTURECOORDINATEINDEX6 = 7,
    rwTEXTURECOORDINATEINDEX7 = 8,
    rwTEXTURECOORDINATEINDEXFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8040B468 -> 0x8040B5B8
struct RwTexCoords * RpGeometryGetVertexTexCoords(const struct RpGeometry * geometry /* r30 */, enum RwTextureCoordinateIndex uvIndex /* r29 */) {
    // References
    // -> static char __dbFunctionName[29];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EA05A
// Range: 0x8040B5B8 -> 0x8040B6AC
int RpGeometryGetNumTexCoordSets(const struct RpGeometry * geometry /* r30 */) {
    // References
    // -> static char __dbFunctionName[29];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EA077
// Range: 0x8040B6AC -> 0x8040B7A0
int RpGeometryGetNumVertices(const struct RpGeometry * geometry /* r30 */) {
    // References
    // -> static char __dbFunctionName[25];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EA090
// Range: 0x8040B7A0 -> 0x8040B844
struct RwV3d * RpMorphTargetGetVertices(const struct RpMorphTarget * morphTarget /* r30 */) {
    // References
    // -> static char __dbFunctionName[25];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804EA0A9
// Range: 0x8040B844 -> 0x8040B8E8
struct RwV3d * RpMorphTargetGetVertexNormals(const struct RpMorphTarget * morphTarget /* r30 */) {
    // References
    // -> static char __dbFunctionName[30];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EA0C7
// Range: 0x8040B8E8 -> 0x8040B9DC
struct RpTriangle * RpGeometryGetTriangles(const struct RpGeometry * geometry /* r30 */) {
    // References
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EA0DE
// Range: 0x8040B9DC -> 0x8040BAD0
int RpGeometryGetNumTriangles(const struct RpGeometry * geometry /* r30 */) {
    // References
    // -> static char __dbFunctionName[26];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EA0F8
// Range: 0x8040BAD0 -> 0x8040BC00
struct RpMaterial * RpGeometryGetMaterial(const struct RpGeometry * geometry /* r30 */, int matNum /* r29 */) {
    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804EA10E
// Range: 0x8040BC00 -> 0x8040BDB8
struct RpGeometry * RpGeometryTriangleSetVertexIndices(const struct RpGeometry * geometry /* r30 */, struct RpTriangle * triangle /* r29 */, unsigned short vert1 /* r26 */, unsigned short vert2 /* r27 */, unsigned short vert3 /* r28 */) {
    // References
    // -> static char __dbFunctionName[35];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804EA131
// Range: 0x8040BDB8 -> 0x8040BF30
struct RpGeometry * RpGeometryTriangleSetMaterial(struct RpGeometry * geometry /* r30 */, struct RpTriangle * triangle /* r28 */, struct RpMaterial * material /* r27 */) {
    // Local variables
    int i; // r29

    // References
    // -> static char __dbFunctionName[30];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[35]; // size: 0x23, address: 0x804EA14F
// Range: 0x8040BF30 -> 0x8040C094
struct RpGeometry * RpGeometryTriangleGetVertexIndices(const struct RpGeometry * geometry /* r29 */, const struct RpTriangle * triangle /* r30 */, unsigned short * vert1 /* r26 */, unsigned short * vert2 /* r27 */, unsigned short * vert3 /* r28 */) {
    // References
    // -> static char __dbFunctionName[35];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804EA172
// Range: 0x8040C094 -> 0x8040C1D4
struct RpMaterial * RpGeometryTriangleGetMaterial(const struct RpGeometry * geometry /* r29 */, const struct RpTriangle * triangle /* r30 */) {
    // Local variables
    struct RpMaterial * materialRet; // r28

    // References
    // -> static char __dbFunctionName[30];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EA190
// Range: 0x8040C1D4 -> 0x8040C2C8
int RpGeometryGetNumMaterials(const struct RpGeometry * geometry /* r30 */) {
    // References
    // -> static char __dbFunctionName[26];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804EA1AA
// Range: 0x8040C2C8 -> 0x8040C43C
struct RpGeometry * RpGeometryForAllMaterials(struct RpGeometry * geometry /* r30 */, struct RpMaterial * (* fpCallBack)(struct RpMaterial *, void *) /* r26 */, void * pData /* r1+0x8 */) {
    // Local variables
    int numMaterials; // r28
    int i; // r29
    struct RpMaterial * material; // r27

    // References
    // -> static char __dbFunctionName[26];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EA1C4
// Range: 0x8040C43C -> 0x8040C594
struct RpGeometry * RpGeometryLock(struct RpGeometry * geometry /* r31 */, int lockMode /* r29 */) {
    // References
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EA1D3
// total size: 0x14
struct RpBuildMeshTriangle {
    // Members
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    struct RpMaterial * material; // offset 0x8, size 0x4
    unsigned short matIndex; // offset 0xC, size 0x2
    unsigned short textureIndex; // offset 0xE, size 0x2
    unsigned short rasterIndex; // offset 0x10, size 0x2
    unsigned short pipelineIndex; // offset 0x12, size 0x2
};
// total size: 0xC
struct RpBuildMesh {
    // Members
    unsigned int triangleBufferSize; // offset 0x0, size 0x4
    unsigned int numTriangles; // offset 0x4, size 0x4
    struct RpBuildMeshTriangle * meshTriangles; // offset 0x8, size 0x4
};
// Range: 0x8040C594 -> 0x8040CA5C
struct RpGeometry * RpGeometryUnlock(struct RpGeometry * geometry /* r31 */) {
    // Local variables
    struct RwTexture * * textureArray; // r25
    struct RwRaster * * rasterArray; // r24
    struct RxPipeline * * pipelineArray; // r23
    unsigned short numTex; // r20
    unsigned short numRas; // r19
    unsigned short numPip; // r18
    struct RpBuildMesh * buildMesh; // r22
    struct RpMeshHeader * newMesh; // r1+0x2C
    int i; // r17
    int numMaterials; // r1+0x28
    struct RpTriangle * triangle; // r29
    struct RpMaterial * material; // r1+0x24
    unsigned short texIndex; // r28
    unsigned short rasIndex; // r27
    unsigned short pipIndex; // r26
    struct RxPipeline * pipeline; // r1+0x20
    struct RwTexture * texture; // r21
    struct RwRaster * raster; // r1+0x1C

    // References
    // -> static char __dbFunctionName[17];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EA1E4
// Range: 0x8040CA5C -> 0x8040CBA8
struct RpGeometry * RpGeometryForAllMeshes(const struct RpGeometry * geometry /* r30 */, struct RpMesh * (* fpCallBack)(struct RpMesh *, struct RpMeshHeader *, void *) /* r29 */, void * pData /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EA1FB
// Range: 0x8040CBA8 -> 0x8040D0DC
struct RpGeometry * RpGeometryCreate(int numVerts /* r29 */, int numTriangles /* r24 */, unsigned int format /* r25 */) {
    // Local variables
    struct RpGeometry * geometry; // r31
    unsigned char * goffset; // r28
    unsigned int gsize; // r26
    unsigned int numTexCoordSets; // r27
    int flags; // r23
    struct RwError _rwErrorCode; // r1+0x10
    unsigned int i; // r22
    int i; // r21

    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwPluginRegistry geometryTKList;
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EA20C
// Range: 0x8040D0DC -> 0x8040D1DC
struct RpGeometry * RpGeometryAddRef(struct RpGeometry * geometry /* r30 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EA21D
// Range: 0x8040D1DC -> 0x8040D320
int RpGeometryDestroy(struct RpGeometry * geometry /* r31 */) {
    // Local variables
    int result; // r29

    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EA22F
// Range: 0x8040D320 -> 0x8040D3F4
int RpGeometryRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* constructCB)(void *, int, int) /* r1+0xC */, void * (* destructCB)(void *, int, int) /* r1+0x10 */, void * (* copyCB)(void *, void *, int, int) /* r1+0x14 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry geometryTKList;
    // -> static char __dbFunctionName[25];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EA248
// Range: 0x8040D3F4 -> 0x8040D4DC
int RpGeometryRegisterPluginStream(unsigned int pluginID /* r1+0x8 */, struct RwStream * (* readCB)(struct RwStream *, int, void *, int, int) /* r27 */, struct RwStream * (* writeCB)(struct RwStream *, int, void *, int, int) /* r28 */, int (* getSizeCB)(void *, int, int) /* r29 */) {
    // Local variables
    int plug; // r30

    // References
    // -> static struct RwPluginRegistry geometryTKList;
    // -> static char __dbFunctionName[31];
}

static char __dbFunctionName[28]; // size: 0x1C, address: 0x804EA267
// Range: 0x8040D4DC -> 0x8040D674
static int GeometryStreamGetSizeActual(const struct RpGeometry * geometry /* r31 */) {
    // Local variables
    int size; // r30
    int i; // r29

    // References
    // -> static char __dbFunctionName[28];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EA283
// Range: 0x8040D674 -> 0x8040D798
unsigned int RpGeometryStreamGetSize(const struct RpGeometry * geometry /* r30 */) {
    // Local variables
    unsigned int size; // r29

    // References
    // -> static struct RwPluginRegistry geometryTKList;
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EA29B
// total size: 0x10
struct RpGeometryChunkInfo {
    // Members
    int format; // offset 0x0, size 0x4
    int numTriangles; // offset 0x4, size 0x4
    int numVertices; // offset 0x8, size 0x4
    int numMorphTargets; // offset 0xC, size 0x4
};
// total size: 0x8
struct _rpTriangle {
    // Members
    unsigned int vertex01; // offset 0x0, size 0x4
    unsigned int vertex2Mat; // offset 0x4, size 0x4
};
// total size: 0x18
struct _rpMorphTarget {
    // Members
    struct RwSphere boundingSphere; // offset 0x0, size 0x10
    int pointsPresent; // offset 0x10, size 0x4
    int normalsPresent; // offset 0x14, size 0x4
};
// Range: 0x8040D798 -> 0x8040DFD0
struct RpGeometry * RpGeometryStreamWrite(const struct RpGeometry * geometry /* r31 */, struct RwStream * stream /* r30 */) {
    // Local variables
    struct RpGeometryChunkInfo geom; // r1+0x30
    int i; // r28
    int flags; // r26
    int result; // r1+0x1C
    struct RwError _rwErrorCode; // r1+0x28
    unsigned int sizeTC; // r1+0x18
    struct _rpTriangle tri; // r1+0x20
    int numTris; // r25
    struct RpTriangle * srceTri; // r27
    struct _rpMorphTarget kf; // r1+0x40

    // References
    // -> static struct RwPluginRegistry geometryTKList;
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EA2B1
// Range: 0x8040DFD0 -> 0x8040E944
struct RpGeometry * RpGeometryStreamRead(struct RwStream * stream /* r30 */) {
    // Local variables
    struct RpGeometry * geometry; // r31
    struct RpGeometryChunkInfo geom; // r1+0x5C
    unsigned int version; // r1+0x40
    struct RwError _rwErrorCode; // r1+0x54
    unsigned int sizeLum; // r18
    int i; // r25
    unsigned int sizeTC; // r1+0x3C
    struct RpTriangle * destTri; // r28
    int numTris; // r22
    unsigned int size; // r21
    unsigned short hi; // r20
    unsigned short lo; // r19
    struct _rpTriangle * srceTri; // r26
    int i; // r24
    struct _rpMorphTarget kf; // r1+0x6C
    struct RpMorphTarget * morphTarget; // r27
    struct RwError _rwErrorCode; // r1+0x4C
    int i; // r23
    signed short matIndex; // r1+0x8
    int result; // r1+0x38
    struct RwError _rwErrorCode; // r1+0x44

    // References
    // -> static char __dbFunctionName[21];
    // -> static struct RwPluginRegistry geometryTKList;
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EA2C6
// Range: 0x8040E944 -> 0x8040EA38
unsigned int RpGeometryGetFlags(const struct RpGeometry * geometry /* r30 */) {
    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo geometryModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EA2D9
// Range: 0x8040EA38 -> 0x8040EB4C
struct RpGeometry * RpGeometrySetFlags(struct RpGeometry * geometry /* r1+0x8 */, unsigned int flags /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo geometryModule;
}


