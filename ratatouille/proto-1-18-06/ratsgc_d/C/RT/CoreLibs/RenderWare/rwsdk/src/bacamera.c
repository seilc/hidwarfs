/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\src\bacamera.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8043EAF8 -> 0x804428D0
*/
static char __dbFunctionName[24]; // size: 0x18, address: 0x804ED3D0
// Range: 0x8043EAF8 -> 0x8043ECD0
static struct RwCamera * CameraUpdateZShiftScale(struct RwCamera * camera /* r31 */) {
    // Local variables
    float zOutInf; // f31
    float zOutSup; // f30
    float zInInf; // f29
    float zInSup; // f28
    float zScale; // f26
    float zShift; // f24
    union RwSplitBits zInWid; // r1+0x8
    float zOutWid; // f27
    float zDelta; // f25

    // References
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804ED3E8
// Range: 0x8043ECD0 -> 0x8043F7DC
static void CameraBuildPerspClipPlanes(struct RwCamera * camera /* r28 */) {
    // Local variables
    struct RwV3d vTmp; // r1+0x38
    struct RwV3d vTmp2; // r1+0x2C
    struct RwV3d vRight; // r1+0x20
    struct RwV3d vUp; // r1+0x14
    struct RwV3d vCOP; // r1+0x8
    struct RwMatrixTag * cameraLTM; // r29
    float recip; // f31
    float scale; // f30
    int i; // r26
    struct RwV3d * frustumVerts; // r30
    struct RwFrustumPlane * frustumPlanes; // r31
    struct RwV3d * target; // r27
    float length2; // f29
    float length2; // f28
    float length2; // f27
    float length2; // f26

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[27]; // size: 0x1B, address: 0x804ED403
// Range: 0x8043F7DC -> 0x8043FA78
static struct RwCamera * CameraBuildPerspViewMatrix(struct RwCamera * camera /* r29 */) {
    // Local variables
    float scale; // f31
    struct RwV3d vVector; // r1+0x8
    const struct RwMatrixTag * cameraLTM; // r31
    struct RwMatrixTag * viewMatrix; // r30

    // References
    // -> static char __dbFunctionName[27];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804ED41E
// Range: 0x8043FA78 -> 0x80440174
static void CameraBuildParallelClipPlanes(struct RwCamera * camera /* r29 */) {
    // Local variables
    float width; // f29
    float height; // f28
    float nearPlane; // f27
    float farPlane; // f26
    float offsetx; // f25
    float offsety; // f24
    float offset; // f31
    struct RwV3d vTmp; // r1+0x14
    struct RwV3d vTmp2; // r1+0x8
    float recip; // f30
    struct RwV3d * frustumVerts; // r30
    struct RwMatrixTag * cameraLTM; // r28
    struct RwFrustumPlane * frustumPlanes; // r31
    float length2; // f23
    float length2; // f22

    // References
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[30]; // size: 0x1E, address: 0x804ED43C
// Range: 0x80440174 -> 0x8044040C
static struct RwCamera * CameraBuildParallelViewMatrix(struct RwCamera * camera /* r29 */) {
    // Local variables
    float scale; // f31
    struct RwV3d vVector; // r1+0x8
    const struct RwMatrixTag * cameraLTM; // r31
    struct RwMatrixTag * viewMatrix; // r30

    // References
    // -> static char __dbFunctionName[30];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804ED45A
// Range: 0x8044040C -> 0x804404F4
static struct RwObjectHasFrame * CameraSync(struct RwObjectHasFrame * type /* r30 */) {
    // Local variables
    struct RwCamera * camera; // r31

    // References
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804ED465
// Range: 0x804404F4 -> 0x80440620
static struct RwCamera * CameraEndUpdate(struct RwCamera * camera /* r30 */) {
    // Local variables
    int (* CameraEndUpdateFunc)(void *, void *, int); // r29

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804ED475
static int messaged; // size: 0x4, address: 0x80D6C360
// Range: 0x80440620 -> 0x8044093C
static struct RwCamera * CameraBeginUpdate(struct RwCamera * camera /* r31 */) {
    // Local variables
    int (* CameraBeginUpdateFunc)(void *, void *, int); // r28
    int CameraFrameIsOrthonormal; // r29
    struct RwMatrixTolerance tolerance; // r1+0x8

    // References
    // -> static char __dbFunctionName[18];
    // -> void * RwEngineInstance;
    // -> static int messaged;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ED487
static struct RwModuleInfo cameraModule; // size: 0x8, address: 0x80D6C368
// Range: 0x8044093C -> 0x804409BC
void * _rwCameraClose(void * instance /* r1+0x8 */) {
    // References
    // -> static struct RwModuleInfo cameraModule;
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[15];
}

static int _rwCameraFreeListBlockSize; // size: 0x4, address: 0x80D688F8
static int _rwCameraFreeListPreallocBlocks; // size: 0x4, address: 0x80D688FC
static char __dbFunctionName[14]; // size: 0xE, address: 0x804ED496
static struct RwFreeList _rwCameraFreeList; // size: 0x30, address: 0x80D5D6A0
static int inCameraBeginEndUpdate; // size: 0x4, address: 0x80D6C364
// Range: 0x804409BC -> 0x80440A70
void * _rwCameraOpen(void * instance /* r1+0x8 */, int offset /* r1+0xC */) {
    // References
    // -> static int inCameraBeginEndUpdate;
    // -> static struct RwModuleInfo cameraModule;
    // -> void * RwEngineInstance;
    // -> static struct RwFreeList _rwCameraFreeList;
    // -> static int _rwCameraFreeListPreallocBlocks;
    // -> static int _rwCameraFreeListBlockSize;
    // -> struct RwPluginRegistry cameraTKList;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804ED4A4
// Range: 0x80440A70 -> 0x80440B58
struct RwCamera * RwCameraEndUpdate(struct RwCamera * camera /* r31 */) {
    // Local variables
    struct RwCamera * result; // r29

    // References
    // -> static int inCameraBeginEndUpdate;
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804ED4B6
// Range: 0x80440B58 -> 0x80440C24
struct RwCamera * RwCameraBeginUpdate(struct RwCamera * camera /* r31 */) {
    // Local variables
    struct RwCamera * result; // r30

    // References
    // -> static int inCameraBeginEndUpdate;
    // -> static char __dbFunctionName[20];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ED4CA
// Range: 0x80440C24 -> 0x80440CF0
struct RwV2d * RwCameraGetViewOffset(const struct RwCamera * camera /* r30 */) {
    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ED4E0
// Range: 0x80440CF0 -> 0x80440E04
struct RwCamera * RwCameraSetViewOffset(struct RwCamera * camera /* r31 */, const struct RwV2d * offset /* r28 */) {
    // Local variables
    struct RwFrame * frame; // r29

    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804ED4F6
// Range: 0x80440E04 -> 0x80440F24
struct RwCamera * RwCameraSetRaster(struct RwCamera * camera /* r1+0x8 */, struct RwRaster * raster /* r31 */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[18]; // size: 0x12, address: 0x804ED508
// Range: 0x80440F24 -> 0x80440FF0
struct RwRaster * RwCameraGetRaster(const struct RwCamera * camera /* r31 */) {
    // References
    // -> static char __dbFunctionName[18];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804ED51A
// Range: 0x80440FF0 -> 0x80441104
struct RwCamera * RwCameraSetZRaster(struct RwCamera * camera /* r1+0x8 */, struct RwRaster * zRaster /* r30 */) {
    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804ED52D
// Range: 0x80441104 -> 0x804411D0
struct RwRaster * RwCameraGetZRaster(const struct RwCamera * camera /* r31 */) {
    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804ED540
// Range: 0x804411D0 -> 0x804412F8
struct RwCamera * RwCameraSetNearClipPlane(struct RwCamera * camera /* r31 */, float nearClip /* f31 */) {
    // Local variables
    struct RwFrame * frame; // r29

    // References
    // -> static char __dbFunctionName[25];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804ED559
// Range: 0x804412F8 -> 0x804413C4
float RwCameraGetNearClipPlane(const struct RwCamera * camera /* r31 */) {
    // References
    // -> static char __dbFunctionName[25];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ED572
// Range: 0x804413C4 -> 0x804414B8
struct RwCamera * RwCameraSetFarClipPlane(struct RwCamera * camera /* r31 */, float farClip /* r1+0x8 */) {
    // Local variables
    struct RwFrame * frame; // r29

    // References
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ED58A
// Range: 0x804414B8 -> 0x80441584
float RwCameraGetFarClipPlane(const struct RwCamera * camera /* r31 */) {
    // References
    // -> static char __dbFunctionName[24];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ED5A2
// Range: 0x80441584 -> 0x8044166C
struct RwCamera * RwCameraSetFogDistance(struct RwCamera * camera /* r1+0x8 */, float fogDistance /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ED5B9
// Range: 0x8044166C -> 0x8044170C
float RwCameraGetFogDistance(const struct RwCamera * camera /* r31 */) {
    // References
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804ED5D0
// Range: 0x8044170C -> 0x8044177C
struct RwCamera * RwCameraGetCurrentCamera() {
    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[25];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[26]; // size: 0x1A, address: 0x804ED5E9
enum RwFrustumTestResult {
    rwSPHEREOUTSIDE = 0,
    rwSPHEREBOUNDARY = 1,
    rwSPHEREINSIDE = 2,
    rwFRUSTUMTESTRESULTFORCEENUMSIZEINT = 2147483647,
};
// Range: 0x8044177C -> 0x804418F4
enum RwFrustumTestResult RwCameraFrustumTestSphere(const struct RwCamera * camera /* r26 */, const struct RwSphere * sphere /* r30 */) {
    // Local variables
    const struct RwFrustumPlane * frustumPlane; // r31
    int numPlanes; // r28
    enum RwFrustumTestResult result; // r27
    float nDot; // f31

    // References
    // -> static char __dbFunctionName[26];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ED603
// Range: 0x804418F4 -> 0x80441AF4
struct RwCamera * RwCameraClear(struct RwCamera * camera /* r30 */, struct RwRGBA * color /* r27 */, int clearMode /* r28 */) {
    // Local variables
    int (* CameraClearFunc)(void *, void *, int); // r29

    // References
    // -> static char __dbFunctionName[14];
    // -> void * RwEngineInstance;
    // -> static int inCameraBeginEndUpdate;
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804ED611
// Range: 0x80441AF4 -> 0x80441C10
struct RwCamera * RwCameraShowRaster(struct RwCamera * camera /* r31 */, void * dev /* r1+0x8 */, unsigned int flags /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[19];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ED624
// Range: 0x80441C10 -> 0x80441DB8
struct RwCamera * RwCameraSetProjection(struct RwCamera * camera /* r30 */, enum RwCameraProjection projection /* r28 */) {
    // Local variables
    struct RwFrame * frame; // r29
    struct RwError _rwErrorCode; // r1+0x8

    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ED63A
// Range: 0x80441DB8 -> 0x80441E84
enum RwCameraProjection RwCameraGetProjection(const struct RwCamera * camera /* r31 */) {
    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ED650
// Range: 0x80441E84 -> 0x80442010
struct RwCamera * RwCameraSetViewWindow(struct RwCamera * camera /* r31 */, const struct RwV2d * viewWindow /* r29 */) {
    // Local variables
    struct RwFrame * frame; // r28

    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ED666
// Range: 0x80442010 -> 0x804420DC
struct RwV2d * RwCameraGetViewWindow(const struct RwCamera * camera /* r30 */) {
    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[22]; // size: 0x16, address: 0x804ED67C
// Range: 0x804420DC -> 0x804421A8
struct RwMatrixTag * RwCameraGetViewMatrix(struct RwCamera * camera /* r30 */) {
    // References
    // -> static char __dbFunctionName[22];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[23]; // size: 0x17, address: 0x804ED692
// Range: 0x804421A8 -> 0x8044227C
int RwCameraRegisterPlugin(int size /* r29 */, unsigned int pluginID /* r1+0x8 */, void * (* constructCB)(void *, int, int) /* r1+0xC */, void * (* destructCB)(void *, int, int) /* r1+0x10 */, void * (* copyCB)(void *, void *, int, int) /* r1+0x14 */) {
    // Local variables
    int plug; // r30

    // References
    // -> struct RwPluginRegistry cameraTKList;
    // -> static char __dbFunctionName[23];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[24]; // size: 0x18, address: 0x804ED6A9
// Range: 0x8044227C -> 0x804422D4
int RwCameraGetPluginOffset(unsigned int pluginID /* r1+0x8 */) {
    // Local variables
    int offset; // r31

    // References
    // -> struct RwPluginRegistry cameraTKList;
    // -> static char __dbFunctionName[24];
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804ED6C1
// Range: 0x804422D4 -> 0x804423BC
struct RwCamera * RwCameraSetFrame(struct RwCamera * camera /* r1+0x8 */, struct RwFrame * frame /* r1+0xC */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[17]; // size: 0x11, address: 0x804ED6D2
// Range: 0x804423BC -> 0x80442488
struct RwFrame * RwCameraGetFrame(const struct RwCamera * camera /* r30 */) {
    // References
    // -> static char __dbFunctionName[17];
    // -> static struct RwModuleInfo cameraModule;
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804ED6E3
// Range: 0x80442488 -> 0x80442588
int RwCameraDestroy(struct RwCamera * camera /* r31 */) {
    // References
    // -> static struct RwModuleInfo cameraModule;
    // -> void * RwEngineInstance;
    // -> struct RwPluginRegistry cameraTKList;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804ED6F3
// Range: 0x80442588 -> 0x80442734
struct RwCamera * RwCameraCreate() {
    // Local variables
    struct RwCamera * camera; // r31

    // References
    // -> struct RwPluginRegistry cameraTKList;
    // -> static char __dbFunctionName[15];
    // -> static struct RwModuleInfo cameraModule;
    // -> void * RwEngineInstance;
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804ED702
// Range: 0x80442734 -> 0x804428D0
struct RwCamera * RwCameraClone(struct RwCamera * camera /* r28 */) {
    // Local variables
    struct RwCamera * oldCamera; // r30
    struct RwCamera * newCamera; // r31

    // References
    // -> struct RwPluginRegistry cameraTKList;
    // -> static char __dbFunctionName[14];
    // -> static struct RwModuleInfo cameraModule;
}


