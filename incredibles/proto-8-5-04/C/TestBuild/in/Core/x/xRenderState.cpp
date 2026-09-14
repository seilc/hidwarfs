/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class RwRaster * hack_raster; // size: 0x4, address: 0x608C00
static signed int sRenderStateBlendTable[11]; // size: 0x2C, address: 0x0
static signed int old_alpha_discard_test; // size: 0x4, address: 0x608C04
static unsigned char alphaDiscardCurrentlySet; // size: 0x1, address: 0x608C08
static signed int (* old_bridge_cb)(class RxPS2AllPipeData *); // size: 0x4, address: 0x608C0C
static signed int (* * hacked_bridge_cb_pointer)(class RxPS2AllPipeData *); // size: 0x4, address: 0x608C10
static signed int (* * matfx_cb_pointer)(class RxPS2AllPipeData *); // size: 0x4, address: 0x0
static signed int (* old_matfx_cb)(class RxPS2AllPipeData *); // size: 0x4, address: 0x0
static class RpAtomic * current_hacked_atomic; // size: 0x4, address: 0x608C14
static signed int (* old_im_setup_cb)(class RxPS2AllPipeData *, class RwMatrixTag * *); // size: 0x4, address: 0x608C18
static class RwRGBA * im_material_color; // size: 0x4, address: 0x608C1C
static class RwRGBA old_im_material_color; // size: 0x4, address: 0x608C20
signed int FixClamp_RpPDS_G3_Uva_PS2AllMatBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x0
class RpMatFXState rpMatFXPipeState; // size: 0x20, address: 0x515270
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
class RwModuleInfo _rwIm3DModule; // size: 0x8, address: 0x6093A0
signed int yet_another_bullshit_workaround(class RxPS2AllPipeData *, class RwMatrixTag * *); // size: 0x0, address: 0x1D18D0
signed int HackedRpPDS_G3x_Generic_MeshPS2AllBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x1D1950
signed int HackedRpMeshPS2AllBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x1D2B90
signed int _rxPipelineGlobalsOffset; // size: 0x4, address: 0x6093A8
signed int HackedRpPDS_G3_Matfx_PS2AllMatBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x1D1DE0
signed int HIFastSkinMatBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x2F9690
signed int CloneBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x2BEF90
signed int RpPDS_G3x_Generic_MeshPS2AllBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x3CC928
signed int RpMeshPS2AllBridgeCallBack(class RxPS2AllPipeData *); // size: 0x0, address: 0x40FF48
__int128 * _rwDMAPktPtr; // size: 0x4, address: 0x6092A8
signed long skyTest_1; // size: 0x4, address: 0x607E58
signed long skyClamp_1; // size: 0x4, address: 0x607E70
signed long skyPrim_State; // size: 0x4, address: 0x607E90
void * skyUploadedCode; // size: 0x4, address: 0x607EE4
signed long skyTex1_1; // size: 0x4, address: 0x607E78
unsigned int skyUserSwitch2; // size: 0x4, address: 0x607EEC
unsigned int skyUserSwitch1; // size: 0x4, address: 0x607EE8
__int128 skyClipVect2; // size: 0x10, address: 0x515060
__int128 skyClipVect1; // size: 0x10, address: 0x515050
class RwRaster * skyTextureRaster; // size: 0x4, address: 0x609348
signed int skyAlphaTex; // size: 0x4, address: 0x60934C
signed int MatFXMaterialDataOffset; // size: 0x4, address: 0x607F80
signed long skyFogcol; // size: 0x4, address: 0x607E68
enum RwCullMode gSkyCullState; // size: 0x4, address: 0x609354
__int128 skyCClipVect2; // size: 0x10, address: 0x515080
__int128 skyCClipVect1; // size: 0x10, address: 0x515070
signed int skyTLClipperMode; // size: 0x4, address: 0x607EF4
signed int skyTSClipperMode; // size: 0x4, address: 0x607EF0
signed long skyZbuf_1; // size: 0x4, address: 0x607E48
signed int skyRasterExt; // size: 0x4, address: 0x609340
__int128 gifTag128; // size: 0x10, address: 0x514FD0
// total size: 0x1B0
class rwPS2AllResEntryHeader {
    // Members
public:
    signed int refCnt; // offset 0x0, size 0x4
    signed int clrCnt; // offset 0x4, size 0x4
    __int128 * data; // offset 0x8, size 0x4
    unsigned int numVerts; // offset 0xC, size 0x4
    unsigned int objIdentifier; // offset 0x10, size 0x4
    unsigned int meshIdentifier; // offset 0x14, size 0x4
    signed int batchSize; // offset 0x18, size 0x4
    signed int numBatches; // offset 0x1C, size 0x4
    signed int batchesPerTag; // offset 0x20, size 0x4
    signed int morphStart; // offset 0x24, size 0x4
    signed int morphFinish; // offset 0x28, size 0x4
    signed int morphNum; // offset 0x2C, size 0x4
    class rwPS2AllClusterQuickInfo clquickinfo[12]; // offset 0x30, size 0x60
    class rwPS2AllFieldRec fieldRec[12]; // offset 0x90, size 0x120
};
// total size: 0x90
class rpMatFXMaterialData {
    // Members
public:
    class MatFXEffectData data[2]; // offset 0x0, size 0x80
    enum RpMatFXMaterialFlags flags; // offset 0x80, size 0x4
};
// total size: 0x58
class RwTexture {
    // Members
public:
    class RwRaster * raster; // offset 0x0, size 0x4
    class RwTexDictionary * dict; // offset 0x4, size 0x4
    class RwLLLink lInDictionary; // offset 0x8, size 0x8
    char name[32]; // offset 0x10, size 0x20
    char mask[32]; // offset 0x30, size 0x20
    unsigned int filterAddressing; // offset 0x50, size 0x4
    signed int refCount; // offset 0x54, size 0x4
};
// total size: 0x14
class RpInterpolator {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed short startMorphTarget; // offset 0x4, size 0x2
    signed short endMorphTarget; // offset 0x6, size 0x2
    float time; // offset 0x8, size 0x4
    float recipTime; // offset 0xC, size 0x4
    float position; // offset 0x10, size 0x4
};
// total size: 0x18
class MatFXSkyMaterial {
    // Members
public:
    unsigned long alpha; // offset 0x0, size 0x4
    unsigned long fogcol; // offset 0x8, size 0x4
    unsigned long test; // offset 0x10, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
enum RpMeshHeaderFlags {
    rpMESHHEADERTRISTRIP = 1,
    rpMESHHEADERTRIFAN = 2,
    rpMESHHEADERLINELIST = 4,
    rpMESHHEADERPOLYLINE = 8,
    rpMESHHEADERPOINTLIST = 16,
    rpMESHHEADERPRIMMASK = 255,
    rpMESHHEADERUNINDEXED = 256,
    rpMESHHEADERFLAGSFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x48
class RxPS2AllPipeData {
    // Members
public:
    class rxNodePS2AllPvtData * objPvtData; // offset 0x0, size 0x4
    class rxNodePS2AllMatPvtData * matPvtData; // offset 0x4, size 0x4
    void * sourceObject; // offset 0x8, size 0x4
    class RpMeshHeader * meshHeader; // offset 0xC, size 0x4
    class RwMeshCache * meshCache; // offset 0x10, size 0x4
    enum RxInstanceFlags objInstance; // offset 0x14, size 0x4
    unsigned int objIdentifier; // offset 0x18, size 0x4
    float spExtra; // offset 0x1C, size 0x4
    signed int numMorphTargets; // offset 0x20, size 0x4
    unsigned int fastMorphing; // offset 0x24, size 0x4
    unsigned char transType; // offset 0x28, size 0x1
    unsigned char primType; // offset 0x29, size 0x1
    unsigned char matModulate; // offset 0x2A, size 0x1
    unsigned char vu1CodeIndex; // offset 0x2B, size 0x1
    class RpMesh * mesh; // offset 0x2C, size 0x4
    class RwResEntry * * cacheEntryRef; // offset 0x30, size 0x4
    enum RxInstanceFlags meshInstance; // offset 0x34, size 0x4
    unsigned int meshIdentifier; // offset 0x38, size 0x4
    class RwSurfaceProperties * surfProps; // offset 0x3C, size 0x4
    class RwTexture * texture; // offset 0x40, size 0x4
    class RwRGBA matCol; // offset 0x44, size 0x4
};
// total size: 0x20
class rxHeapBlockHeader {
    // Members
public:
    class rxHeapBlockHeader * prev; // offset 0x0, size 0x4
    class rxHeapBlockHeader * next; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeEntry; // offset 0xC, size 0x4
    unsigned int pad[4]; // offset 0x10, size 0x10
};
// total size: 0x14
class RxIoSpec {
    // Members
public:
    unsigned int numClustersOfInterest; // offset 0x0, size 0x4
    class RxClusterRef * clustersOfInterest; // offset 0x4, size 0x4
    enum RxClusterValidityReq * inputRequirements; // offset 0x8, size 0x4
    unsigned int numOutputs; // offset 0xC, size 0x4
    class RxOutputSpec * outputs; // offset 0x10, size 0x4
};
// total size: 0xB0
class RwFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink inDirtyListLink; // offset 0x8, size 0x8
    class RwMatrixTag modelling; // offset 0x10, size 0x40
    class RwMatrixTag ltm; // offset 0x50, size 0x40
    class RwLinkList objectList; // offset 0x90, size 0x8
    class RwFrame * child; // offset 0x98, size 0x4
    class RwFrame * next; // offset 0x9C, size 0x4
    class RwFrame * root; // offset 0xA0, size 0x4
};
// total size: 0x34
class RwRaster {
    // Members
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
// total size: 0x8
class rwPS2AllClusterInstanceInfo {
    // Members
public:
    unsigned int attrib; // offset 0x0, size 0x4
    unsigned int stride; // offset 0x4, size 0x4
};
// total size: 0x30
class RxPacket {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short numClusters; // offset 0x2, size 0x2
    class RxPipeline * pipeline; // offset 0x4, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x8, size 0x4
    unsigned int * slotsContinue; // offset 0xC, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0x10, size 0x4
    class RxCluster clusters[1]; // offset 0x14, size 0x1C
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
enum RwCullMode {
    rwCULLMODENACULLMODE = 0,
    rwCULLMODECULLNONE = 1,
    rwCULLMODECULLBACK = 2,
    rwCULLMODECULLFRONT = 3,
    rwCULLMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class RpMesh {
    // Members
public:
    unsigned short * indices; // offset 0x0, size 0x4
    unsigned int numIndices; // offset 0x4, size 0x4
    class RpMaterial * material; // offset 0x8, size 0x4
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x1C
class RpMaterial {
    // Members
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    class RwRGBA color; // offset 0x4, size 0x4
    class RxPipeline * pipeline; // offset 0x8, size 0x4
    class RwSurfaceProperties surfaceProps; // offset 0xC, size 0xC
    signed short refCount; // offset 0x18, size 0x2
    signed short pad; // offset 0x1A, size 0x2
};
// total size: 0x1C
class RxCluster {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned short stride; // offset 0x2, size 0x2
    void * data; // offset 0x4, size 0x4
    void * currentData; // offset 0x8, size 0x4
    unsigned int numAlloced; // offset 0xC, size 0x4
    unsigned int numUsed; // offset 0x10, size 0x4
    class RxPipelineCluster * clusterRef; // offset 0x14, size 0x4
    unsigned int attributes; // offset 0x18, size 0x4
};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
enum RpMatFXMaterialFlags {
    rpMATFXEFFECTNULL = 0,
    rpMATFXEFFECTBUMPMAP = 1,
    rpMATFXEFFECTENVMAP = 2,
    rpMATFXEFFECTBUMPENVMAP = 3,
    rpMATFXEFFECTDUAL = 4,
    rpMATFXEFFECTUVTRANSFORM = 5,
    rpMATFXEFFECTDUALUVTRANSFORM = 6,
    rpMATFXEFFECTMAX = 7,
    rpMATFXNUMEFFECTS = 6,
    rpMATFXFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class MatFXEnvMapData {
    // Members
public:
    class RwFrame * frame; // offset 0x0, size 0x4
    class RwTexture * texture; // offset 0x4, size 0x4
    float coef; // offset 0x8, size 0x4
    signed int useFrameBufferAlpha; // offset 0xC, size 0x4
};
enum RwBlendFunction {
    rwBLENDNABLEND = 0,
    rwBLENDZERO = 1,
    rwBLENDONE = 2,
    rwBLENDSRCCOLOR = 3,
    rwBLENDINVSRCCOLOR = 4,
    rwBLENDSRCALPHA = 5,
    rwBLENDINVSRCALPHA = 6,
    rwBLENDDESTALPHA = 7,
    rwBLENDINVDESTALPHA = 8,
    rwBLENDDESTCOLOR = 9,
    rwBLENDINVDESTCOLOR = 10,
    rwBLENDSRCALPHASAT = 11,
    rwBLENDFUNCTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xE
class rwPS2AllPrimTypeLUT {
    // Members
public:
    unsigned char vertToIndRatio[7]; // offset 0x0, size 0x7
    unsigned char vertToIndOffset[7]; // offset 0x7, size 0x7
};
// total size: 0x40
class RwMatrixTag {
    // Members
public:
    class RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x60
class RpGeometry {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    unsigned short lockedSinceLastInst; // offset 0xC, size 0x2
    signed short refCount; // offset 0xE, size 0x2
    signed int numTriangles; // offset 0x10, size 0x4
    signed int numVertices; // offset 0x14, size 0x4
    signed int numMorphTargets; // offset 0x18, size 0x4
    signed int numTexCoordSets; // offset 0x1C, size 0x4
    class RpMaterialList matList; // offset 0x20, size 0xC
    class RpTriangle * triangles; // offset 0x2C, size 0x4
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x34, size 0x20
    class RpMeshHeader * mesh; // offset 0x54, size 0x4
    class RwResEntry * repEntry; // offset 0x58, size 0x4
    class RpMorphTarget * morphTarget; // offset 0x5C, size 0x4
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x8
class MatFXUVAnimData {
    // Members
public:
    class RwMatrixTag * baseTransform; // offset 0x0, size 0x4
    class RwMatrixTag * dualTransform; // offset 0x4, size 0x4
};
// total size: 0x1C
class RpMorphTarget {
    // Members
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0x8
class RwMeshCache {
    // Members
public:
    unsigned int lengthOfMeshesArray; // offset 0x0, size 0x4
    class RwResEntry * meshes[1]; // offset 0x4, size 0x4
};
// total size: 0x8
class rwPS2AllClusterQuickInfo {
    // Members
public:
    __int128 * data; // offset 0x0, size 0x4
    unsigned int stride; // offset 0x4, size 0x4
};
// total size: 0x20
class RpMatFXState {
    // Members
public:
    enum RpMatFXMaterialFlags oldEffectType; // offset 0x0, size 0x4
    signed int (* bridgeCallBacks[7])(class RxPS2AllPipeData *); // offset 0x4, size 0x1C
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class RwRGBA {
    // Members
public:
    unsigned char red; // offset 0x0, size 0x1
    unsigned char green; // offset 0x1, size 0x1
    unsigned char blue; // offset 0x2, size 0x1
    unsigned char alpha; // offset 0x3, size 0x1
};
// total size: 0x58
class rxNodePS2AllPvtData {
    // Members
public:
    class rwPS2AllPrimTypeLUT primLUT; // offset 0x0, size 0xE
    unsigned char pad[2]; // offset 0xE, size 0x2
    signed int (* objectSetupCB)(class RxPS2AllPipeData *, class RwMatrixTag * *); // offset 0x10, size 0x4
    signed int (* objectFinalizeCB)(class RxPS2AllPipeData *); // offset 0x14, size 0x4
    class RxPipeline * groupPipe; // offset 0x18, size 0x4
    unsigned int lightOffset; // offset 0x1C, size 0x4
    unsigned int lightBufferSize; // offset 0x20, size 0x4
    __int128 * nullLightBlock; // offset 0x24, size 0x4
    float nullLightBuffer[12]; // offset 0x28, size 0x30
};
// total size: 0x70
class RpAtomic {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    class RwResEntry * repEntry; // offset 0x14, size 0x4
    class RpGeometry * geometry; // offset 0x18, size 0x4
    class RwSphere boundingSphere; // offset 0x1C, size 0x10
    class RwSphere worldBoundingSphere; // offset 0x2C, size 0x10
    class RpClump * clump; // offset 0x3C, size 0x4
    class RwLLLink inClumpLink; // offset 0x40, size 0x8
    class RpAtomic * (* renderCallBack)(class RpAtomic *); // offset 0x48, size 0x4
    class RpInterpolator interpolator; // offset 0x4C, size 0x14
    unsigned short renderFrame; // offset 0x60, size 0x2
    unsigned short pad; // offset 0x62, size 0x2
    class RwLinkList llWorldSectorsInAtomic; // offset 0x64, size 0x8
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0x1C
class RxNodeMethods {
    // Members
public:
    signed int (* nodeBody)(class RxPipelineNode *, class RxPipelineNodeParam *); // offset 0x0, size 0x4
    signed int (* nodeInit)(class RxNodeDefinition *); // offset 0x4, size 0x4
    void (* nodeTerm)(class RxNodeDefinition *); // offset 0x8, size 0x4
    signed int (* pipelineNodeInit)(class RxPipelineNode *); // offset 0xC, size 0x4
    void (* pipelineNodeTerm)(class RxPipelineNode *); // offset 0x10, size 0x4
    signed int (* pipelineNodeConfig)(class RxPipelineNode *, class RxPipeline *); // offset 0x14, size 0x4
    unsigned int (* configMsgHandler)(class RxPipelineNode *, unsigned int, unsigned int, void *); // offset 0x18, size 0x4
};
// total size: 0x18
class RwResEntry {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
    signed int size; // offset 0x8, size 0x4
    void * owner; // offset 0xC, size 0x4
    class RwResEntry * * ownerRef; // offset 0x10, size 0x4
    void (* destroyNotify)(class RwResEntry *); // offset 0x14, size 0x4
};
// total size: 0x34
class RxPipeline {
    // Members
public:
    signed int locked; // offset 0x0, size 0x4
    unsigned int numNodes; // offset 0x4, size 0x4
    class RxPipelineNode * nodes; // offset 0x8, size 0x4
    unsigned int packetNumClusterSlots; // offset 0xC, size 0x4
    enum rxEmbeddedPacketState embeddedPacketState; // offset 0x10, size 0x4
    class RxPacket * embeddedPacket; // offset 0x14, size 0x4
    unsigned int numInputRequirements; // offset 0x18, size 0x4
    class RxPipelineRequiresCluster * inputRequirements; // offset 0x1C, size 0x4
    void * superBlock; // offset 0x20, size 0x4
    unsigned int superBlockSize; // offset 0x24, size 0x4
    unsigned int entryPoint; // offset 0x28, size 0x4
    unsigned int pluginId; // offset 0x2C, size 0x4
    unsigned int pluginData; // offset 0x30, size 0x4
};
// total size: 0x20
class MatFXEffectUnion {
    // Members
public:
    union { // inferred
        class MatFXBumpMapData bumpMap; // offset 0x0, size 0x14
        class MatFXEnvMapData envMap; // offset 0x0, size 0x10
        class MatFXDualData dual; // offset 0x0, size 0x10
        class MatFXUVAnimData uvAnim; // offset 0x0, size 0x8
    };
};
// total size: 0x32C
class rxNodePS2AllMatPvtData {
    // Members
public:
    signed int (* meshInstanceTestCB)(class RxPS2AllPipeData *); // offset 0x0, size 0x4
    class RwResEntry * (* resEntryAllocCB)(class RxPS2AllPipeData *, class RwResEntry * *, unsigned int, void (*)(class RwResEntry *)); // offset 0x4, size 0x4
    signed int (* instanceCB)(class RxPS2AllPipeData *, void * *, unsigned int); // offset 0x8, size 0x4
    signed int (* bridgeCB)(class RxPS2AllPipeData *); // offset 0xC, size 0x4
    signed int (* postMeshCB)(class RxPS2AllPipeData *); // offset 0x10, size 0x4
    signed int vifOffset; // offset 0x14, size 0x4
    void * * vu1CodeArray; // offset 0x18, size 0x4
    unsigned int codeArrayLength; // offset 0x1C, size 0x4
    class rwPS2AllClusterInstanceInfo clinfo[12]; // offset 0x20, size 0x60
    unsigned int cliIndex[12]; // offset 0x80, size 0x30
    enum RpMeshHeaderFlags pipeType; // offset 0xB0, size 0x4
    unsigned char totallyOpaque; // offset 0xB4, size 0x1
    unsigned char numStripes; // offset 0xB5, size 0x1
    unsigned char sizeOnVU; // offset 0xB6, size 0x1
    unsigned char pad0; // offset 0xB7, size 0x1
    class rwPS2AllResEntryFormat strip; // offset 0xB8, size 0x138
    class rwPS2AllResEntryFormat list; // offset 0x1F0, size 0x138
    unsigned int magicValue; // offset 0x328, size 0x4
};
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
enum RxInstanceFlags {
    rxINSTANCENAINSTANCEFLAG = 0,
    rxINSTANCEDONTINSTANCE = 1,
    rxINSTANCEINPLACEINSTANCE = 2,
    rxINSTANCECONGRUENTINSTANCE = 4,
    rxINSTANCEFULLINSTANCE = 8,
    rxINSTANCETYPEMASK = 14,
    rxINSTANCEXYZ = 16,
    rxINSTANCENORMAL = 32,
    rxINSTANCERGBA = 64,
    rxINSTANCEUV = 128,
    rxINSTANCEUV1 = 128,
    rxINSTANCEUV2 = 256,
    rxINSTANCEUV3 = 512,
    rxINSTANCEUV4 = 1024,
    rxINSTANCEUV5 = 2048,
    rxINSTANCEUV6 = 4096,
    rxINSTANCEUV7 = 8192,
    rxINSTANCEUV8 = 16384,
    rxINSTANCEUSER1 = 32768,
    rxINSTANCEUSER2 = 65536,
    rxINSTANCEUSER3 = 131072,
    rxINSTANCEUSER4 = 262144,
    rxINSTANCEALL = 524272,
    rxINSTANCEMASK = 524287,
    rxINSTANCEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x28
class RxPipelineNode {
    // Members
public:
    class RxNodeDefinition * nodeDef; // offset 0x0, size 0x4
    unsigned int numOutputs; // offset 0x4, size 0x4
    unsigned int * outputs; // offset 0x8, size 0x4
    class RxPipelineCluster * * slotClusterRefs; // offset 0xC, size 0x4
    unsigned int * slotsContinue; // offset 0x10, size 0x4
    void * privateData; // offset 0x14, size 0x4
    unsigned int * inputToClusterSlot; // offset 0x18, size 0x4
    class RxPipelineNodeTopSortData * topSortData; // offset 0x1C, size 0x4
    void * initializationData; // offset 0x20, size 0x4
    unsigned int initializationDataSize; // offset 0x24, size 0x4
};
// total size: 0x138
class rwPS2AllResEntryFormat {
    // Members
public:
    unsigned char batchRound; // offset 0x0, size 0x1
    unsigned char stripReverse; // offset 0x1, size 0x1
    unsigned char pad[2]; // offset 0x2, size 0x2
    unsigned int maxInputSize; // offset 0x4, size 0x4
    signed int batchSize; // offset 0x8, size 0x4
    signed int batchesPerTag; // offset 0xC, size 0x4
    signed int morphBatchSize; // offset 0x10, size 0x4
    signed int morphBatchesPerTag; // offset 0x14, size 0x4
    class rwPS2AllFieldRec fieldRec[12]; // offset 0x18, size 0x120
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x10
class RpMeshHeader {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned short numMeshes; // offset 0x4, size 0x2
    unsigned short serialNum; // offset 0x6, size 0x2
    unsigned int totalIndicesInMesh; // offset 0x8, size 0x4
    unsigned int firstMeshOffset; // offset 0xC, size 0x4
};
// total size: 0x10
class MatFXDualData {
    // Members
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    enum RwBlendFunction srcBlendMode; // offset 0x4, size 0x4
    enum RwBlendFunction dstBlendMode; // offset 0x8, size 0x4
    void * padAlign; // offset 0xC, size 0x4
};
// total size: 0x40
class MatFXEffectData {
    // Members
public:
    class MatFXEffectUnion data; // offset 0x0, size 0x20
    enum RpMatFXMaterialFlags flag; // offset 0x20, size 0x4
    class MatFXSkyMaterial skyMat; // offset 0x28, size 0x18
};
// total size: 0x8
class RwModuleInfo {
    // Members
public:
    signed int globalsOffset; // offset 0x0, size 0x4
    signed int numInstances; // offset 0x4, size 0x4
};
// total size: 0x18
class rwPS2AllFieldRec {
    // Members
public:
    signed int numVerts; // offset 0x0, size 0x4
    signed int morphNumVerts; // offset 0x4, size 0x4
    signed int dataoffset; // offset 0x8, size 0x4
    signed int morphDataoffset; // offset 0xC, size 0x4
    signed short skip; // offset 0x10, size 0x2
    signed short morphSkip; // offset 0x12, size 0x2
    signed short reverse; // offset 0x14, size 0x2
    unsigned char vuoffset; // offset 0x16, size 0x1
    unsigned char pad[1]; // offset 0x17, size 0x1
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x2C
class RpClump {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList atomicList; // offset 0x8, size 0x8
    class RwLinkList lightList; // offset 0x10, size 0x8
    class RwLinkList cameraList; // offset 0x18, size 0x8
    class RwLLLink inWorldLink; // offset 0x20, size 0x8
    class RpClump * (* callback)(class RpClump *, void *); // offset 0x28, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x0
class rxReq {};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
// total size: 0x14
class MatFXBumpMapData {
    // Members
public:
    class RwFrame * frame; // offset 0x0, size 0x4
    class RwTexture * texture; // offset 0x4, size 0x4
    class RwTexture * bumpTexture; // offset 0x8, size 0x4
    float coef; // offset 0xC, size 0x4
    float invBumpWidth; // offset 0x10, size 0x4
};
// total size: 0x1C
class RxHeap {
    // Members
public:
    unsigned int superBlockSize; // offset 0x0, size 0x4
    class rxHeapSuperBlockDescriptor * head; // offset 0x4, size 0x4
    class rxHeapBlockHeader * headBlock; // offset 0x8, size 0x4
    class rxHeapFreeBlock * freeBlocks; // offset 0xC, size 0x4
    unsigned int entriesAlloced; // offset 0x10, size 0x4
    unsigned int entriesUsed; // offset 0x14, size 0x4
    signed int dirty; // offset 0x18, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x40
class RxNodeDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    class RxNodeMethods nodeMethods; // offset 0x4, size 0x1C
    class RxIoSpec io; // offset 0x20, size 0x14
    unsigned int pipelineNodePrivateDataSize; // offset 0x34, size 0x4
    enum RxNodeDefEditable editable; // offset 0x38, size 0x4
    signed int InputPipesCnt; // offset 0x3C, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x8
class RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1660 -> 0x001D1690
*/
// Range: 0x1D1660 -> 0x1D1690
void xRenderTexCacheRestore() {
    /* anonymous block */ {
        // Range: 0x1D1660 -> 0x1D1690
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1690 -> 0x001D16FC
*/
// Range: 0x1D1690 -> 0x1D16FC
void xRenderFixIMEnd() {
    /* anonymous block */ {
        // Range: 0x1D1690 -> 0x1D16FC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1700 -> 0x001D1734
*/
// Range: 0x1D1700 -> 0x1D1734
void xRenderFixIMBegin() {
    /* anonymous block */ {
        // Range: 0x1D1700 -> 0x1D1734
        signed int (* * im_setup_cb)(class RxPS2AllPipeData *, class RwMatrixTag * *); // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1740 -> 0x001D1754
*/
// Range: 0x1D1740 -> 0x1D1754
void xRenderFixUntexturedEnd() {
    /* anonymous block */ {
        // Range: 0x1D1740 -> 0x1D1754
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1760 -> 0x001D18C8
*/
// Range: 0x1D1760 -> 0x1D18C8
void xRenderFixUntexturedBegin(class RpAtomic * atomic /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1D1760 -> 0x1D18C8
        enum RpMatFXMaterialFlags matfx; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D18D0 -> 0x001D1944
*/
// Range: 0x1D18D0 -> 0x1D1944
static signed int yet_another_bullshit_workaround(class RxPS2AllPipeData * ps2AllPipeData /* r16 */, class RwMatrixTag * * transform /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D18D0 -> 0x1D1944
        signed int ret; // r2
        class RpMaterial * material; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1950 -> 0x001D1DD4
*/
// Range: 0x1D1950 -> 0x1D1DD4
signed int HackedRpPDS_G3x_Generic_MeshPS2AllBridgeCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1D1950 -> 0x1D1DD4
        signed int skyAlphaTex'252; // r2
        __int128 * _rwDMAPktPtr'251; // r2
        signed long old_sky_test; // r2
        class RwTexture * _nwtx; // r18
        class RwRaster * _nwrs; // r17
        unsigned int cFormat; // r2
        unsigned long tmp; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned int __skySwitchFlag; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
        void * _kohd; // r2
        unsigned long tmp; // r2
        class rwPS2AllResEntryHeader * _p2rh; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1DE0 -> 0x001D1EA8
*/
// Range: 0x1D1DE0 -> 0x1D1EA8
signed int HackedRpPDS_G3_Matfx_PS2AllMatBridgeCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1D1DE0 -> 0x1D1EA8
        enum RpMatFXMaterialFlags effectType; // r2
        class rpMatFXMaterialData * materialData; // r2
        void * * oldVU1CodeArray; // r2
        signed int ret; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D1EB0 -> 0x001D2564
*/
// Range: 0x1D1EB0 -> 0x1D2564
signed int HackedRpPDS_G3_Gem_PS2AllMatBridgeCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1D1EB0 -> 0x1D2564
        __int128 * _rwDMAPktPtr'408; // r3
        unsigned int skyUserSwitch1'407; // r4
        class RpMaterial * material; // r2
        class rpMatFXMaterialData * materialData; // r2
        class RwTexture * baseTexture; // r2
        class RwTexture * envMapTexture; // r2
        class RwFrame * envMapFrame; // r2
        class RwMatrixTag envMapMatrix; // r29+0x80
        float envMapCoef; // r29+0xEC
        unsigned long alpha_2; // r2
        unsigned long clamp_2; // r29+0xE0
        unsigned long fogcol_2; // r2
        unsigned long test_2; // r2
        unsigned long tex1_2; // r29+0xD8
        unsigned long zbuf_2; // r2
        unsigned long rastex1; // r29+0xD0
        unsigned long rastex2; // r29+0xC8
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
        unsigned long tmp; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned int __skySwitchFlag; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
        void * _kohd; // r2
        unsigned long tmp; // r2
        class rwPS2AllResEntryHeader * _p2rh; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
        float envParams[4]; // @ 0x00508700
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D2570 -> 0x001D2B8C
*/
// Range: 0x1D2570 -> 0x1D2B8C
signed int HackedRpPDS_G3_Uva_PS2AllMatBridgeCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1D2570 -> 0x1D2B8C
        signed int skyAlphaTex'317; // r2
        __int128 * _rwDMAPktPtr'316; // r3
        unsigned int skyUserSwitch1'315; // r4
        class RwMatrixTag * baseTransform; // r20
        class RwMatrixTag identity; // r29+0x60
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
        signed long old_sky_test; // r2
        class RwTexture * _nwtx; // r19
        class RwRaster * _nwrs; // r18
        unsigned int cFormat; // r2
        unsigned long tmp; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned int __skySwitchFlag; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
        void * _kohd; // r2
        unsigned long tmp; // r2
        class rwPS2AllResEntryHeader * _p2rh; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D2B90 -> 0x001D30C8
*/
// Range: 0x1D2B90 -> 0x1D30C8
signed int HackedRpMeshPS2AllBridgeCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1D2B90 -> 0x1D30C8
        signed int skyAlphaTex'279; // r2
        __int128 * _rwDMAPktPtr'278; // r3
        unsigned int skyUserSwitch1'277; // r4
        signed long old_sky_test; // r2
        class RwTexture * _nwtx; // r18
        class RwRaster * _nwrs; // r17
        unsigned int cFormat; // r2
        unsigned long tmp; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned long __tmp1; // r2
        unsigned int __skySwitchFlag; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
        void * _kohd; // r2
        unsigned long tmp; // r2
        class rwPS2AllResEntryHeader * _p2rh; // r2
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D30D0 -> 0x001D3360
*/
// Range: 0x1D30D0 -> 0x1D3360
static void Hacked_rpMatFXSkyUploadTextures(class RwTexture * _tex_1 /* r20 */, class RwTexture * _tex_2 /* r19 */, unsigned long & _tex0_1 /* r18 */, unsigned long & _tex0_2 /* r21 */, unsigned long & _tex1_1 /* r22 */, unsigned long & _tex1_2 /* r23 */, unsigned long & _clamp_1 /* r17 */, unsigned long & _clamp_2 /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1D30D0 -> 0x1D3360
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D3360 -> 0x001D3420
*/
// Range: 0x1D3360 -> 0x1D3420
void LessRetardedRpMeshPS2AllGIFTagUpload(class RxPS2AllPipeData * ps2AllPipeData /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D3360 -> 0x1D3420
        unsigned long __tmp1; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D3420 -> 0x001D3430
*/
// Range: 0x1D3420 -> 0x1D3430
void xRenderStateResetAlphaDiscard() {
    /* anonymous block */ {
        // Range: 0x1D3420 -> 0x1D3430
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D3430 -> 0x001D3484
*/
// Range: 0x1D3430 -> 0x1D3484
void xRenderStateSetAlphaDiscard(signed int value /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1D3430 -> 0x1D3484
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D3490 -> 0x001D34B0
*/
// Range: 0x1D3490 -> 0x1D34B0
void xRenderSceneExit() {
    /* anonymous block */ {
        // Range: 0x1D3490 -> 0x1D34B0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xRenderState.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D34B0 -> 0x001D34DC
*/
// Range: 0x1D34B0 -> 0x1D34DC
void xRenderSceneEnter() {
    /* anonymous block */ {
        // Range: 0x1D34B0 -> 0x1D34DC
    }
}


