/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\world\baworobj.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8041A8B8 -> 0x8041E9FC
*/
static int cameraExtOffset; // size: 0x4, address: 0x80D6C2C8
static int atomicExtOffset; // size: 0x4, address: 0x80D6C2CC
static int clumpExtOffset; // size: 0x4, address: 0x80D6C2D0
static int lightExtOffset; // size: 0x4, address: 0x80D6C2D4
static int _rpTieFreeListBlockSize; // size: 0x4, address: 0x80D68618
static int _rpTieFreeListPreallocBlocks; // size: 0x4, address: 0x80D6861C
static int _rpLightTieFreeListBlockSize; // size: 0x4, address: 0x80D68620
static int _rpLightTieFreeListPreallocBlocks; // size: 0x4, address: 0x80D68624
static char __dbFunctionName[16]; // size: 0x10, address: 0x804EAD38
static struct RwModuleInfo worldObjModule; // size: 0x8, address: 0x80D6C2D8
static struct RwFreeList _rpTieFreeList; // size: 0x30, address: 0x80D5C5F8
static struct RwFreeList _rpLightTieFreeList; // size: 0x30, address: 0x80D5C628
// Range: 0x8041A8B8 -> 0x8041A9F0
static void * WorldObjectOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static struct RwModuleInfo worldObjModule;
    // -> void * RwEngineInstance;
    // -> static struct RwFreeList _rpLightTieFreeList;
    // -> static int _rpLightTieFreeListPreallocBlocks;
    // -> static int _rpLightTieFreeListBlockSize;
    // -> static struct RwFreeList _rpTieFreeList;
    // -> static int _rpTieFreeListPreallocBlocks;
    // -> static int _rpTieFreeListBlockSize;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EAD48
// Range: 0x8041A9F0 -> 0x8041AAE4
static void * WorldObjectClose(void * instance /* r31 */) {
    // References
    // -> static struct RwModuleInfo worldObjModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EAD59
// total size: 0x1C
struct RpWorldCameraExt {
    // Members
    struct RpWorldSector * * frustumSectors; // offset 0x0, size 0x4
    int space; // offset 0x4, size 0x4
    int position; // offset 0x8, size 0x4
    struct RpWorld * world; // offset 0xC, size 0x4
    struct RwCamera * (* oldBeginUpdate)(struct RwCamera *); // offset 0x10, size 0x4
    struct RwCamera * (* oldEndUpdate)(struct RwCamera *); // offset 0x14, size 0x4
    struct RwObjectHasFrame * (* oldSync)(struct RwObjectHasFrame *); // offset 0x18, size 0x4
};
// Range: 0x8041AAE4 -> 0x8041AB68
void _rwCameraAssertWorld(struct RwCamera * camera /* r1+0x8 */, struct RpWorld * world /* r1+0xC */) {
    // Local variables
    struct RpWorldCameraExt * cameraExt; // r31

    // References
    // -> static char __dbFunctionName[21];
    // -> static int cameraExtOffset;
}

static char __dbFunctionName[29]; // size: 0x1D, address: 0x804EAD6E
// Range: 0x8041AB68 -> 0x8041AC10
static int SectorsInFrustumDeinitialise(struct RpWorldCameraExt * cameraExt /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[29];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EAD8B
// Range: 0x8041AC10 -> 0x8041ADE0
static int SectorsInFrustumAddSpace(struct RpWorldCameraExt * cameraExt /* r31 */, int nNum /* r26 */) {
    // Local variables
    struct RpWorldSector * * newFrustumSectors; // r29
    int memSize; // r30
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[25];
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EADA4
// Range: 0x8041ADE0 -> 0x8041AE84
static struct RwCamera * WorldCameraBeginUpdate(struct RwCamera * camera /* r30 */) {
    // Local variables
    struct RpWorldCameraExt * cameraExt; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[23];
    // -> static int cameraExtOffset;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EADBB
// Range: 0x8041AE84 -> 0x8041AF18
static struct RwCamera * WorldCameraEndUpdate(struct RwCamera * camera /* r30 */) {
    // Local variables
    struct RpWorldCameraExt * cameraExt; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[21];
    // -> static int cameraExtOffset;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EADD0
// Range: 0x8041AF18 -> 0x8041B050
static struct RwObjectHasFrame * WorldCameraSync(struct RwObjectHasFrame * object /* r29 */) {
    // Local variables
    struct RpWorldCameraExt * cameraExt; // r30
    struct RwCamera * camera; // r26
    struct RpWorld * world; // r31
    int (* const HintRenderF2BFunc)(void *, void *, int); // r27

    // References
    // -> static char __dbFunctionName[16];
    // -> void * RwEngineInstance;
    // -> static int cameraExtOffset;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EADE0
// Range: 0x8041B050 -> 0x8041B12C
static void * WorldInitCameraExt(void * object /* r29 */) {
    // Local variables
    struct RpWorldCameraExt * cameraExt; // r31
    struct RwCamera * camera; // r30

    // References
    // -> static char __dbFunctionName[19];
    // -> static int cameraExtOffset;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EADF3
// Range: 0x8041B12C -> 0x8041B20C
static void * WorldCopyCameraExt(void * dstObject /* r29 */, void * srcObject /* r27 */) {
    // Local variables
    struct RpWorldCameraExt * dstCameraExt; // r31
    const struct RpWorldCameraExt * srcCameraExt; // r30

    // References
    // -> static char __dbFunctionName[19];
    // -> static int cameraExtOffset;
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EAE06
// Range: 0x8041B20C -> 0x8041B2F4
static void * WorldDeInitCameraExt(void * object /* r29 */) {
    // Local variables
    struct RpWorldCameraExt * cameraExt; // r31
    struct RwCamera * camera; // r30

    // References
    // -> static char __dbFunctionName[21];
    // -> static int cameraExtOffset;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EAE1B
// Range: 0x8041B2F4 -> 0x8041B3BC
int _rpLightTieDestroy(struct RpLightTie * tie /* r31 */) {
    // References
    // -> static struct RwModuleInfo worldObjModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EAE2E
// Range: 0x8041B3BC -> 0x8041B498
int _rpTieDestroy(struct RpTie * tie /* r31 */) {
    // References
    // -> static struct RwModuleInfo worldObjModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EAE3C
// Range: 0x8041B498 -> 0x8041B55C
static void AtomicDestroyTies(struct RpAtomic * atomic /* r30 */) {
    // Local variables
    struct RwLLLink * cur; // r31
    struct RwLLLink * end; // r29
    struct RpTie * tie; // r28

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804EAE4E
// Range: 0x8041B55C -> 0x8041B870
static void WorldAttachAtomicSphere(struct RpWorld * world /* r24 */, struct RpAtomic * atomic /* r27 */) {
    // Local variables
    struct RpSector * spSect; // r29
    struct RpSector * spaStack[64]; // r1+0x20
    int nStack; // r25
    struct RwV3d inf; // r1+0x14
    struct RwV3d sup; // r1+0x8
    const struct RwSphere * worldSphere; // r28
    struct RpTie * tie; // r31
    struct RpPlaneSector * pspPlane; // r30

    // References
    // -> static struct RwModuleInfo worldObjModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EAE66
// total size: 0x8
struct RpWorldAtomicExt {
    // Members
    struct RpWorld * world; // offset 0x0, size 0x4
    struct RwObjectHasFrame * (* oldSync)(struct RwObjectHasFrame *); // offset 0x4, size 0x4
};
// Range: 0x8041B870 -> 0x8041B984
static struct RwObjectHasFrame * WorldAtomicSync(struct RwObjectHasFrame * type /* r28 */) {
    // Local variables
    struct RpAtomic * atomic; // r31
    struct RpWorldAtomicExt * atomicExt; // r30
    struct RpWorld * world; // r29

    // References
    // -> static char __dbFunctionName[16];
    // -> static int atomicExtOffset;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EAE76
// Range: 0x8041B984 -> 0x8041BA34
static void * WorldInitAtomicExt(void * object /* r29 */) {
    // Local variables
    struct RpWorldAtomicExt * atomicExt; // r30
    struct RpAtomic * atomic; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[19];
    // -> static int atomicExtOffset;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EAE89
// Range: 0x8041BA34 -> 0x8041BAD8
static void * WorldCopyAtomicExt(void * dstObject /* r30 */, void * srcObject /* r1+0x8 */) {
    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EAE9C
// Range: 0x8041BAD8 -> 0x8041BBB0
static void * WorldDeInitAtomicExt(void * object /* r29 */) {
    // Local variables
    struct RpWorldAtomicExt * atomicExt; // r31
    struct RpAtomic * atomic; // r30

    // References
    // -> static char __dbFunctionName[21];
    // -> static int atomicExtOffset;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EAEB1
// total size: 0x8
struct RpWorldClumpExt {
    // Members
    struct RpWorld * world; // offset 0x0, size 0x4
    unsigned int clumpsInFrustumID; // offset 0x4, size 0x4
};
// Range: 0x8041BBB0 -> 0x8041BC48
static void * WorldInitClumpExt(void * object /* r30 */) {
    // Local variables
    struct RpWorldClumpExt * clumpExt; // r31

    // References
    // -> static struct RwModuleInfo worldObjModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[18];
    // -> static int clumpExtOffset;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EAEC3
// Range: 0x8041BC48 -> 0x8041BD08
static void * WorldCopyClumpExt(void * dstObject /* r29 */, void * srcObject /* r28 */) {
    // Local variables
    const struct RpWorldClumpExt * srcClumpExt; // r31

    // References
    // -> static char __dbFunctionName[18];
    // -> static int clumpExtOffset;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EAED5
// Range: 0x8041BD08 -> 0x8041BDD4
static void * WorldDeInitClumpExt(void * object /* r30 */) {
    // References
    // -> static char __dbFunctionName[20];
    // -> static int clumpExtOffset;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EAEE9
// Range: 0x8041BDD4 -> 0x8041BE98
static void LightDestroyTies(struct RpLight * light /* r30 */) {
    // Local variables
    struct RwLLLink * cur; // r31
    struct RwLLLink * end; // r29
    struct RpLightTie * tie; // r28

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EAEFA
// total size: 0x8
struct RpWorldLightExt {
    // Members
    struct RpWorld * world; // offset 0x0, size 0x4
    struct RwObjectHasFrame * (* oldSync)(struct RwObjectHasFrame *); // offset 0x4, size 0x4
};
// Range: 0x8041BE98 -> 0x8041C220
static struct RwObjectHasFrame * WorldLightSync(struct RwObjectHasFrame * object /* r23 */) {
    // Local variables
    struct RpLight * light; // r31
    struct RpWorldLightExt * lightExt; // r25
    struct RpWorld * world; // r24
    struct RwFrame * lightFrame; // r22
    enum RpLightType type; // r21
    struct RpSector * sect; // r28
    struct RpSector * spaStack[64]; // r1+0x28
    int nStack; // r27
    struct RwV3d inf; // r1+0x1C
    struct RwV3d sup; // r1+0x10
    float radius; // f31
    struct RpLightTie * tie; // r30
    struct RpPlaneSector * pspPlane; // r29
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo worldObjModule;
    // -> void * RwEngineInstance;
    // -> static int lightExtOffset;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EAF09
// Range: 0x8041C220 -> 0x8041C2BC
static void * WorldInitLightExt(void * object /* r29 */) {
    // Local variables
    struct RpLight * light; // r31
    struct RpWorldLightExt * lightExt; // r30

    // References
    // -> static char __dbFunctionName[18];
    // -> static int lightExtOffset;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EAF1B
// Range: 0x8041C2BC -> 0x8041C37C
static void * WorldCopyLightExt(void * dstObject /* r29 */, void * srcObject /* r28 */) {
    // Local variables
    const struct RpWorldLightExt * srcLightExt; // r31

    // References
    // -> static char __dbFunctionName[18];
    // -> static int lightExtOffset;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EAF2D
// Range: 0x8041C37C -> 0x8041C44C
static void * WorldDeInitLightExt(void * object /* r30 */) {
    // Local variables
    struct RpLight * light; // r29
    struct RpWorldLightExt * lightExt; // r31

    // References
    // -> static char __dbFunctionName[20];
    // -> static int lightExtOffset;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EAF41
// Range: 0x8041C44C -> 0x8041C778
static struct RpWorld * WorldSyncCamera(struct RpWorld * world /* r22 */, struct RwCamera * camera /* r25 */) {
    // Local variables
    struct RpSector * spaStack[64]; // r1+0x48
    struct RpSector * spSect; // r30
    struct RwV3d vViewPoint; // r1+0x3C
    struct RwV3d inf; // r1+0x30
    struct RwV3d sup; // r1+0x24
    const struct RwFrustumPlane * plpPlanes; // r28
    struct RpWorldCameraExt * cameraExt; // r29
    int goBackToFront; // r21
    int nStack; // r26
    int position; // r23
    int isAtomic; // r1+0x14
    int outside; // r20
    int i; // r27
    struct RpWorldSector * worldSector; // r19
    const struct RwV3d * const base; // r24
    struct RwV3d vCorner; // r1+0x18
    union RwSplitBits sbSide; // r1+0x10
    struct RpPlaneSector * pspPlane; // r31
    union RwSplitBits sbLeft; // r1+0xC
    union RwSplitBits sbRight; // r1+0x8
    int viewPointIsHigher; // r18

    // References
    // -> static int cameraExtOffset;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EAF51
// Range: 0x8041C778 -> 0x8041C854
static struct RpAtomic * WorldAddClumpAtomic(struct RpAtomic * atomic /* r31 */, void * data /* r30 */) {
    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EAF65
// Range: 0x8041C854 -> 0x8041C970
static struct RpAtomic * WorldRemoveClumpAtomic(struct RpAtomic * atomic /* r30 */, void * data /* r1+0x8 */) {
    // Local variables
    struct RpWorld * const world; // r31
    struct RpWorldAtomicExt * atomicExt; // r29

    // References
    // -> static int atomicExtOffset;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EAF7C
// Range: 0x8041C970 -> 0x8041CA4C
static struct RpLight * WorldAddClumpLight(struct RpLight * light /* r31 */, void * data /* r30 */) {
    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EAF8F
// Range: 0x8041CA4C -> 0x8041CB68
static struct RpLight * WorldRemoveClumpLight(struct RpLight * light /* r30 */, void * data /* r1+0x8 */) {
    // Local variables
    struct RpWorld * const world; // r31
    struct RpWorldLightExt * lightExt; // r29

    // References
    // -> static int lightExtOffset;
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EAFA5
// Range: 0x8041CB68 -> 0x8041CC44
static struct RwCamera * WorldAddClumpCamera(struct RwCamera * camera /* r31 */, void * data /* r30 */) {
    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EAFB9
// Range: 0x8041CC44 -> 0x8041CD60
static struct RwCamera * WorldRemoveClumpCamera(struct RwCamera * camera /* r30 */, void * data /* r1+0x8 */) {
    // Local variables
    struct RpWorld * const world; // r31
    struct RpWorldCameraExt * cameraExt; // r29

    // References
    // -> static int cameraExtOffset;
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804EAFD0
// Range: 0x8041CD60 -> 0x8041CE18
static struct RwStream * writeGeometryMesh(struct RwStream * stream /* r30 */, void * object /* r1+0x8 */) {
    // Local variables
    const struct RpGeometry * geometry; // r31

    // References
    // -> static char __dbFunctionName[18];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EAFE2
// Range: 0x8041CE18 -> 0x8041CEE8
static struct RwStream * readGeometryMesh(struct RwStream * stream /* r30 */, void * object /* r1+0x8 */) {
    // Local variables
    struct RpGeometry * geometry; // r31

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EAFF3
// Range: 0x8041CEE8 -> 0x8041CF6C
static int sizeGeometryMesh(void * object /* r30 */) {
    // Local variables
    const struct RpGeometry * geometry; // r31

    // References
    // -> static char __dbFunctionName[17];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EB004
// Range: 0x8041CF6C -> 0x8041D01C
static struct RwStream * writeGeometryNative(struct RwStream * stream /* r30 */, void * object /* r1+0x8 */) {
    // Local variables
    const struct RpGeometry * geometry; // r31

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EB018
// Range: 0x8041D01C -> 0x8041D0E0
static struct RwStream * readGeometryNative(struct RwStream * stream /* r30 */, void * object /* r1+0x8 */) {
    // Local variables
    struct RpGeometry * geometry; // r31

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EB02B
// Range: 0x8041D0E0 -> 0x8041D158
static int sizeGeometryNative(void * object /* r1+0x8 */) {
    // Local variables
    const struct RpGeometry * geometry; // r31

    // References
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804EB03E
// Range: 0x8041D158 -> 0x8041D204
static struct RwStream * writeWorldSectorNative(struct RwStream * stream /* r30 */, void * object /* r1+0x8 */) {
    // Local variables
    const struct RpWorldSector * sector; // r31

    // References
    // -> static char __dbFunctionName[23];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EB055
// Range: 0x8041D204 -> 0x8041D2C4
static struct RwStream * readWorldSectorNative(struct RwStream * stream /* r30 */, void * object /* r1+0x8 */) {
    // Local variables
    struct RpWorldSector * sector; // r31

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804EB06B
// Range: 0x8041D2C4 -> 0x8041D338
static int sizeWorldSectorNative(void * object /* r1+0x8 */) {
    // Local variables
    const struct RpWorldSector * sector; // r31

    // References
    // -> static char __dbFunctionName[22];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EB081
// Range: 0x8041D338 -> 0x8041D3F8
static struct RwStream * writeSectorMesh(struct RwStream * stream /* r29 */, void * object /* r1+0x8 */) {
    // Local variables
    const struct RpWorldSector * sector; // r31
    const struct RpWorld * world; // r30

    // References
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EB091
// Range: 0x8041D3F8 -> 0x8041D4D0
static struct RwStream * readSectorMesh(struct RwStream * stream /* r29 */, void * object /* r1+0x8 */) {
    // Local variables
    struct RpWorldSector * sector; // r31
    const struct RpWorld * world; // r30

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EB0A0
// Range: 0x8041D4D0 -> 0x8041D550
static int sizeSectorMesh(void * object /* r1+0x8 */) {
    // Local variables
    const struct RpWorldSector * sector; // r31

    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804EB0AF
// Range: 0x8041D550 -> 0x8041D894
int _rpWorldObjRegisterExtensions() {
    // Local variables
    int status; // r31

    // References
    // -> static int lightExtOffset;
    // -> static int clumpExtOffset;
    // -> static int atomicExtOffset;
    // -> static int cameraExtOffset;
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EB0CD
// Range: 0x8041D894 -> 0x8041DA08
struct RpWorld * RpWorldAddCamera(struct RpWorld * world /* r28 */, struct RwCamera * camera /* r29 */) {
    // Local variables
    struct RwFrame * frame; // r27
    struct RpWorldCameraExt * cameraExt; // r30

    // References
    // -> static char __dbFunctionName[17];
    // -> static int cameraExtOffset;
    // -> static struct RwModuleInfo worldObjModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EB0DE
// Range: 0x8041DA08 -> 0x8041DBCC
struct RpWorld * RpWorldRemoveCamera(struct RpWorld * world /* r29 */, struct RwCamera * camera /* r28 */) {
    // Local variables
    struct RpWorldCameraExt * cameraExt; // r31

    // References
    // -> static char __dbFunctionName[20];
    // -> static int cameraExtOffset;
    // -> static struct RwModuleInfo worldObjModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EB0F2
// Range: 0x8041DBCC -> 0x8041DCA0
struct RpWorld * RwCameraGetWorld(const struct RwCamera * camera /* r29 */) {
    // Local variables
    const struct RpWorldCameraExt * cameraExt; // r30

    // References
    // -> static char __dbFunctionName[17];
    // -> static int cameraExtOffset;
    // -> static struct RwModuleInfo worldObjModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EB103
// Range: 0x8041DCA0 -> 0x8041DE0C
struct RpWorld * RpWorldAddAtomic(struct RpWorld * world /* r28 */, struct RpAtomic * atomic /* r29 */) {
    // Local variables
    struct RwFrame * frame; // r27
    struct RpWorldAtomicExt * atomicExt; // r30

    // References
    // -> static char __dbFunctionName[17];
    // -> static int atomicExtOffset;
    // -> static struct RwModuleInfo worldObjModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EB114
// Range: 0x8041DE0C -> 0x8041DFA4
struct RpWorld * RpWorldRemoveAtomic(struct RpWorld * world /* r28 */, struct RpAtomic * atomic /* r30 */) {
    // Local variables
    struct RpWorldAtomicExt * atomicExt; // r29

    // References
    // -> static char __dbFunctionName[20];
    // -> static int atomicExtOffset;
    // -> static struct RwModuleInfo worldObjModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804EB128
// Range: 0x8041DFA4 -> 0x8041E078
struct RpWorld * RpAtomicGetWorld(const struct RpAtomic * atomic /* r29 */) {
    // Local variables
    const struct RpWorldAtomicExt * atomicExt; // r30

    // References
    // -> static int atomicExtOffset;
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo worldObjModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EB139
// Range: 0x8041E078 -> 0x8041E270
struct RpWorld * RpWorldAddClump(struct RpWorld * world /* r31 */, struct RpClump * clump /* r30 */) {
    // Local variables
    struct RpWorldClumpExt * clumpExt; // r28
    struct RwFrame * clumpFrame; // r27

    // References
    // -> static struct RwModuleInfo worldObjModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
    // -> static int clumpExtOffset;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EB149
// Range: 0x8041E270 -> 0x8041E534
struct RpWorld * RpWorldRemoveClump(struct RpWorld * world /* r28 */, struct RpClump * clump /* r30 */) {
    // Local variables
    struct RpWorldClumpExt * clumpExt; // r31
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[19];
    // -> static int clumpExtOffset;
    // -> static struct RwModuleInfo worldObjModule;
}

static char __dbFunctionName[31]; // size: 0x1F, address: 0x804EB15C
// Range: 0x8041E534 -> 0x8041E69C
struct RwCamera * RwCameraForAllSectorsInFrustum(struct RwCamera * camera /* r28 */, struct RpWorldSector * (* callback)(struct RpWorldSector *, void *) /* r26 */, void * data /* r1+0x8 */) {
    // Local variables
    struct RpWorldCameraExt * cameraExt; // r29
    struct RpWorldSector * * frustumSectors; // r30
    int i; // r27

    // References
    // -> static char __dbFunctionName[31];
    // -> static struct RwModuleInfo worldObjModule;
    // -> static int cameraExtOffset;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EB17B
// Range: 0x8041E69C -> 0x8041E860
struct RpWorld * RpWorldAddLight(struct RpWorld * world /* r31 */, struct RpLight * light /* r30 */) {
    // Local variables
    struct RpWorldLightExt * lightExt; // r28
    struct RwFrame * frame; // r27

    // References
    // -> static char __dbFunctionName[16];
    // -> static int lightExtOffset;
    // -> static struct RwModuleInfo worldObjModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EB18B
// Range: 0x8041E860 -> 0x8041E9FC
struct RpWorld * RpWorldRemoveLight(struct RpWorld * world /* r28 */, struct RpLight * light /* r31 */) {
    // Local variables
    struct RpWorldLightExt * lightExt; // r29

    // References
    // -> static char __dbFunctionName[19];
    // -> static int lightExtOffset;
    // -> static struct RwModuleInfo worldObjModule;
}


