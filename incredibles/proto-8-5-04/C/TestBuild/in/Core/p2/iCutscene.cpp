/*
    Compile unit: C:\TestBuild\in\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
signed int _rxPipelineGlobalsOffset; // size: 0x4, address: 0x6093A8
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
signed int RpPDS_G3_Skin_PS2AllInstanceCallBack(class RxPS2AllPipeData *, void * *, unsigned int); // size: 0x0, address: 0x3CB118
signed int Cutscene_Skin_InstanceCallBack(class RxPS2AllPipeData *, void * *, unsigned int); // size: 0x0, address: 0x1F3810
void iCSAsyncReadCB(class tag_xFile *); // size: 0x0, address: 0x1F40C0
void iCSSoundCutsceneCB(enum iSndHandle, unsigned char); // size: 0x0, address: 0x1F40E0
class xCutscene sActiveCutscene; // size: 0x144, address: 0x6274C0
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
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
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0xB4
class tag_xFile {
    // Members
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
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
// total size: 0x10
class xCutsceneData {
    // Members
public:
    unsigned int DataType; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int ChunkSize; // offset 0x8, size 0x4
    union { // inferred
        unsigned int FileOffset; // offset 0xC, size 0x4
        void * DataPtr; // offset 0xC, size 0x4
    };
};
enum iSndHandle {
};
// total size: 0x20
class xSndGroup {
    // Members
public:
    class xSndGroupHeader header; // offset 0x0, size 0x20
    class xSndGroupInfo aSndGroupInfo[]; // offset 0x20, size 0x0
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
// total size: 0x8
class xCutsceneBreak {
    // Members
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
};
// total size: 0xC
class RpMesh {
    // Members
public:
    unsigned short * indices; // offset 0x0, size 0x4
    unsigned int numIndices; // offset 0x4, size 0x4
    class RpMaterial * material; // offset 0x8, size 0x4
};
// total size: 0x28
class PKRAssetType {
    // Members
public:
    unsigned int typetag; // offset 0x0, size 0x4
    unsigned int tflags; // offset 0x4, size 0x4
    signed int typalign; // offset 0x8, size 0x4
    void * (* readXForm)(void *, unsigned int, void *, unsigned int, unsigned int *); // offset 0xC, size 0x4
    void * (* writeXForm)(void *, unsigned int, void *, void *, unsigned int, unsigned int *); // offset 0x10, size 0x4
    signed int (* assetLoaded)(void *, unsigned int, void *, signed int); // offset 0x14, size 0x4
    void * (* makeData)(void *, unsigned int, void *, signed int *, signed int *); // offset 0x18, size 0x4
    void (* cleanup)(void *, unsigned int, void *); // offset 0x1C, size 0x4
    void (* assetUnloaded)(void *, unsigned int); // offset 0x20, size 0x4
    void (* writePeek)(void *, unsigned int, void *, char *); // offset 0x24, size 0x4
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x10
class xCutsceneTime {
    // Members
public:
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
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
// total size: 0x144
class xCutscene {
    // Members
public:
    class xCutsceneInfo * Info; // offset 0x0, size 0x4
    class xCutsceneData * Data; // offset 0x4, size 0x4
    unsigned int * TimeChunkOffs; // offset 0x8, size 0x4
    unsigned int * Visibility; // offset 0xC, size 0x4
    class xCutsceneBreak * BreakList; // offset 0x10, size 0x4
    class xCutsceneTime * Play; // offset 0x14, size 0x4
    class xCutsceneTime * Stream; // offset 0x18, size 0x4
    unsigned int Waiting; // offset 0x1C, size 0x4
    unsigned int BadReadPause; // offset 0x20, size 0x4
    float BadReadSpeed; // offset 0x24, size 0x4
    void * RawBuf; // offset 0x28, size 0x4
    void * AlignBuf; // offset 0x2C, size 0x4
    float Time; // offset 0x30, size 0x4
    float CamTime; // offset 0x34, size 0x4
    unsigned int PlayIndex; // offset 0x38, size 0x4
    unsigned int Ready; // offset 0x3C, size 0x4
    signed int DataLoading; // offset 0x40, size 0x4
    unsigned int GotData; // offset 0x44, size 0x4
    unsigned int ShutDownWait; // offset 0x48, size 0x4
    float PlaybackSpeed; // offset 0x4C, size 0x4
    unsigned int Opened; // offset 0x50, size 0x4
    class tag_xFile File; // offset 0x54, size 0xB4
    signed int AsyncID; // offset 0x108, size 0x4
    void * MemBuf; // offset 0x10C, size 0x4
    void * MemCurr; // offset 0x110, size 0x4
    unsigned int SndStarted; // offset 0x114, size 0x4
    unsigned int SndNumChannel; // offset 0x118, size 0x4
    unsigned int SndChannelReq[2]; // offset 0x11C, size 0x8
    unsigned int SndAssetID[2]; // offset 0x124, size 0x8
    enum iSndHandle SndHandle[2]; // offset 0x12C, size 0x8
    unsigned int SubTitlesID; // offset 0x134, size 0x4
    class XCSNNosey * cb_nosey; // offset 0x138, size 0x4
    class xCutsceneModelHack * ModelHack; // offset 0x13C, size 0x4
    unsigned char started; // offset 0x140, size 0x1
};
// total size: 0xE
class rwPS2AllPrimTypeLUT {
    // Members
public:
    unsigned char vertToIndRatio[7]; // offset 0x0, size 0x7
    unsigned char vertToIndOffset[7]; // offset 0x7, size 0x7
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
// total size: 0x4
class xCutsceneModelHack {
    // Members
public:
    class xModelPipe * pipe; // offset 0x0, size 0x4
};
// total size: 0x8
class xModelPipe {
    // Members
public:
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
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
// total size: 0x830
class xCutsceneInfo {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned int AssetID; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int NumTime; // offset 0xC, size 0x4
    unsigned int MaxModel; // offset 0x10, size 0x4
    unsigned int MaxBufEven; // offset 0x14, size 0x4
    unsigned int MaxBufOdd; // offset 0x18, size 0x4
    unsigned int HeaderSize; // offset 0x1C, size 0x4
    unsigned int VisCount; // offset 0x20, size 0x4
    unsigned int VisSize; // offset 0x24, size 0x4
    unsigned int BreakCount; // offset 0x28, size 0x4
    unsigned int pad; // offset 0x2C, size 0x4
    class xCutsceneAudioTrack AudioTracks[32]; // offset 0x30, size 0x800
};
// total size: 0x40
class xCutsceneAudioTrack {
    // Members
public:
    unsigned int uLeftSoundId; // offset 0x0, size 0x4
    unsigned int uRightSoundId; // offset 0x4, size 0x4
    char szLeftSound[28]; // offset 0x8, size 0x1C
    char szRightSound[28]; // offset 0x24, size 0x1C
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
// total size: 0xC
class XCSNNosey {
    // Members
public:
    void * userdata; // offset 0x4, size 0x4
    signed int flg_nosey; // offset 0x8, size 0x4
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
// total size: 0x10
class xSndGroupInfo {
    // Members
public:
    unsigned int uSoundNameHash; // offset 0x0, size 0x4
    float fVolume; // offset 0x4, size 0x4
    float fMinPitchMult; // offset 0x8, size 0x4
    float fMaxPitchMult; // offset 0xC, size 0x4
};
enum xRegion {
    eRegionUnknown = -1,
    eRegionUS = 0,
    eRegionBE = 1,
    eRegionCH = 2,
    eRegionCZ = 3,
    eRegionDE = 4,
    eRegionDK = 5,
    eRegionES = 6,
    eRegionFI = 7,
    eRegionFR = 8,
    eRegionIT = 9,
    eRegionJP = 10,
    eRegionKR = 11,
    eRegionNL = 12,
    eRegionNO = 13,
    eRegionPL = 14,
    eRegionPT = 15,
    eRegionRU = 16,
    eRegionSE = 17,
    eRegionSK = 18,
    eRegionTW = 19,
    eRegionUK = 20,
    eRegionCount = 21,
    eRegionMaxCount = 32,
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
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x18
class PKRAssetTOCInfo {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    class PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x90
class tag_iFile {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    char path[128]; // offset 0x4, size 0x80
    signed int fd; // offset 0x84, size 0x4
    signed int offset; // offset 0x88, size 0x4
    signed int length; // offset 0x8C, size 0x4
};
// total size: 0x20
class xSndGroupHeader : public xBaseAsset {
    // Members
public:
    unsigned int uPlayedMask; // offset 0x8, size 0x4
    unsigned char uInfoCount; // offset 0xC, size 0x1
    unsigned char uSetBits; // offset 0xD, size 0x1
    signed char nMaxPlays; // offset 0xE, size 0x1
    unsigned char uPriority; // offset 0xF, size 0x1
    unsigned char uFlags; // offset 0x10, size 0x1
    unsigned char eSoundCategory; // offset 0x11, size 0x1
    unsigned char ePlayRule; // offset 0x12, size 0x1
    unsigned char uInfoPad0; // offset 0x13, size 0x1
    float fInnerRadius; // offset 0x14, size 0x4
    float fOuterRadius; // offset 0x18, size 0x4
    char * pszGroupName; // offset 0x1C, size 0x4
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
enum XFILE_READSECTOR_STATUS {
    XFILE_RDSTAT_NOOP = 0,
    XFILE_RDSTAT_INPROG = 1,
    XFILE_RDSTAT_DONE = 2,
    XFILE_RDSTAT_FAIL = 3,
    XFILE_RDSTAT_QUEUED = 4,
    XFILE_RDSTAT_EXPIRED = 5,
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
    Compile unit: C:\TestBuild\in\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3720 -> 0x001F3810
*/
// Range: 0x1F3720 -> 0x1F3810
void iCutsceneSkinInstanceHack(class RpAtomic * atomic /* r2 */, unsigned char enable_hack /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F3720 -> 0x1F3810
        class RpMaterialList * matList; // r2
        signed int i; // r6
        class RxPipeline * pipeline; // r7
        class RxPipeline * srcPipe; // r7
        class RpMeshHeader * meshHeader; // r2
        class rxNodePS2AllMatPvtData * matPvtData; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3810 -> 0x001F3854
*/
// Range: 0x1F3810 -> 0x1F3854
static signed int Cutscene_Skin_InstanceCallBack(class RxPS2AllPipeData * ps2AllPipeData /* r2 */, void * * clusterData /* r2 */, unsigned int numClusters /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F3810 -> 0x1F3854
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3860 -> 0x001F3F00
*/
// Range: 0x1F3860 -> 0x1F3F00
signed int iCSLoadStep(class xCutscene * csn /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1F3860 -> 0x1F3F00
        signed int bytes; // r29+0x4C
        enum XFILE_READSECTOR_STATUS cdstat; // r2
        unsigned int skipAccum; // r17
        unsigned int tmpSize; // r29+0x48
        void * foundModel; // r2
        class xSndGroup * pLeftGroup; // r16
        class xSndGroup * pRightGroup; // r16
        class xSndGroup * pLeftGroup; // r2
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3F00 -> 0x001F3F38
*/
// Range: 0x1F3F00 -> 0x1F3F38
void iCSFileClose(class xCutscene * csn /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F3F00 -> 0x1F3F38
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F3F40 -> 0x001F4010
*/
// Range: 0x1F3F40 -> 0x1F4010
void iCSFileAsyncRead(class xCutscene * csn /* r16 */, void * dest /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F3F40 -> 0x1F4010
        unsigned int * tp; // r2
        unsigned int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4010 -> 0x001F40C0
*/
// Range: 0x1F4010 -> 0x1F40C0
unsigned int iCSFileOpen(class xCutscene * csn /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F4010 -> 0x1F40C0
        unsigned int headerskip; // r2
        class PKRAssetTOCInfo ainfo; // r29+0x30
        char * filename; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F40C0 -> 0x001F40D8
*/
// Range: 0x1F40C0 -> 0x1F40D8
static void iCSAsyncReadCB() {
    /* anonymous block */ {
        // Range: 0x1F40C0 -> 0x1F40D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F40E0 -> 0x001F4184
*/
// Range: 0x1F40E0 -> 0x1F4184
static void iCSSoundCutsceneCB(enum iSndHandle id /* r17 */, unsigned char first /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F40E0 -> 0x1F4184
        void * data; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4190 -> 0x001F4268
*/
// Range: 0x1F4190 -> 0x1F4268
static void * iCSSoundGetData(class xCutscene * csn /* r2 */, unsigned int channel /* r2 */, unsigned int chunk /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F4190 -> 0x1F4268
        void * retdata; // r2
        class xCutsceneData * data; // r10
        unsigned int dataIndex; // r9
        unsigned int numData; // r8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iCutscene.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F4270 -> 0x001F43B8
*/
// Range: 0x1F4270 -> 0x1F43B8
void iCSSoundSetup(class xCutscene * csn /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1F4270 -> 0x1F43B8
        unsigned int dataIndex; // r5
        class xCutsceneData * data; // r17
        unsigned int numData; // r2
        enum xRegion eMyRegion; // r2
        unsigned char bLeftFound; // r4
        unsigned int uDefaultLeftTrack; // r3
        unsigned int uRegion; // r6
    }
}


