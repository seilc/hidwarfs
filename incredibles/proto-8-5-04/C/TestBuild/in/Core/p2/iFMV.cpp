/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class basic_rect screen_bounds; // size: 0x10, address: 0x0
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static class xMemoryManagerGeneral binkAllocator; // size: 0x34, address: 0x61D9A0
static void * iop_addr; // size: 0x4, address: 0x6088A4
static signed int initReferenceCount; // size: 0x4, address: 0x6088A8
void BinkFileClose(class BINKIO *); // size: 0x0, address: 0x15D860
unsigned int BinkFileIdle(class BINKIO *); // size: 0x0, address: 0x15DD90
void BinkFileSetInfo(class BINKIO *, void *, unsigned int, unsigned int, unsigned int); // size: 0x0, address: 0x15D870
unsigned int BinkFileGetBufferSize(class BINKIO *, unsigned int); // size: 0x0, address: 0x15D950
unsigned int BinkFileReadFrame(class BINKIO *, unsigned int, signed int, void *, unsigned int); // size: 0x0, address: 0x15D970
unsigned int BinkFileReadHeader(class BINKIO *, signed int, void *, unsigned int); // size: 0x0, address: 0x15E100
void DVDReadCallback(class tag_xFile *); // size: 0x0, address: 0x15DF70
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x66B400
class xGlobals * xglobals; // size: 0x4, address: 0x6076C8
class _tagxPad mPad[4]; // size: 0x4E0, address: 0x648310
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
class xColor_tag g_BLACK; // size: 0x4, address: 0x5E7208
signed int (* BinkOpenRAD_IOP(unsigned int))(class BINKSND *, unsigned int, signed int, signed int, unsigned int, class BINK *); // size: 0x0, address: 0x36D940
// total size: 0x1C
struct /* @anon0 */ {} xMemoryManagerGeneral::__vtable; // size: 0x1C, address: 0x603AA0
// total size: 0x1C
struct /* @anon1 */ {} xMemoryManager::__vtable; // size: 0x1C, address: 0x0
signed int BinkFileOpen(class BINKIO *, char *, unsigned int); // size: 0x0, address: 0x15D6F0
void _MovieFree(void *); // size: 0x0, address: 0x15F6A0
void * _MovieAlloc(unsigned int); // size: 0x0, address: 0x15F6B0
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
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
enum RxNodeDefEditable {
    rxNODEDEFCONST = 0,
    rxNODEDEFEDITABLE = 1,
    rxNODEDEFEDITABLEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class RwFrustumPlane {
    // Members
public:
    class RwPlane plane; // offset 0x0, size 0x10
    unsigned char closestX; // offset 0x10, size 0x1
    unsigned char closestY; // offset 0x11, size 0x1
    unsigned char closestZ; // offset 0x12, size 0x1
    unsigned char pad; // offset 0x13, size 0x1
};
// total size: 0x394
class BINK {
    // Members
public:
    unsigned int Width; // offset 0x0, size 0x4
    unsigned int Height; // offset 0x4, size 0x4
    unsigned int Frames; // offset 0x8, size 0x4
    unsigned int FrameNum; // offset 0xC, size 0x4
    unsigned int LastFrameNum; // offset 0x10, size 0x4
    unsigned int FrameRate; // offset 0x14, size 0x4
    unsigned int FrameRateDiv; // offset 0x18, size 0x4
    unsigned int ReadError; // offset 0x1C, size 0x4
    unsigned int OpenFlags; // offset 0x20, size 0x4
    unsigned int BinkType; // offset 0x24, size 0x4
    unsigned int Size; // offset 0x28, size 0x4
    unsigned int FrameSize; // offset 0x2C, size 0x4
    unsigned int SndSize; // offset 0x30, size 0x4
    class BINKRECT FrameRects[8]; // offset 0x34, size 0x80
    signed int NumRects; // offset 0xB4, size 0x4
    unsigned int PlaneNum; // offset 0xB8, size 0x4
    void * YPlane[2]; // offset 0xBC, size 0x8
    void * APlane[2]; // offset 0xC4, size 0x8
    unsigned int YWidth; // offset 0xCC, size 0x4
    unsigned int YHeight; // offset 0xD0, size 0x4
    unsigned int UVWidth; // offset 0xD4, size 0x4
    unsigned int UVHeight; // offset 0xD8, size 0x4
    void * MaskPlane; // offset 0xDC, size 0x4
    unsigned int MaskPitch; // offset 0xE0, size 0x4
    unsigned int MaskLength; // offset 0xE4, size 0x4
    unsigned int LargestFrameSize; // offset 0xE8, size 0x4
    unsigned int InternalFrames; // offset 0xEC, size 0x4
    signed int NumTracks; // offset 0xF0, size 0x4
    unsigned int Highest1SecRate; // offset 0xF4, size 0x4
    unsigned int Highest1SecFrame; // offset 0xF8, size 0x4
    signed int Paused; // offset 0xFC, size 0x4
    unsigned int BackgroundThread; // offset 0x100, size 0x4
    void * compframe; // offset 0x104, size 0x4
    void * preloadptr; // offset 0x108, size 0x4
    unsigned int * frameoffsets; // offset 0x10C, size 0x4
    class BINKIO bio; // offset 0x110, size 0x13C
    unsigned char * ioptr; // offset 0x24C, size 0x4
    unsigned int iosize; // offset 0x250, size 0x4
    unsigned int decompwidth; // offset 0x254, size 0x4
    unsigned int decompheight; // offset 0x258, size 0x4
    signed int * trackindexes; // offset 0x25C, size 0x4
    unsigned int * tracksizes; // offset 0x260, size 0x4
    unsigned int * tracktypes; // offset 0x264, size 0x4
    signed int * trackIDs; // offset 0x268, size 0x4
    unsigned int numrects; // offset 0x26C, size 0x4
    unsigned int playedframes; // offset 0x270, size 0x4
    unsigned int firstframetime; // offset 0x274, size 0x4
    unsigned int startframetime; // offset 0x278, size 0x4
    unsigned int startblittime; // offset 0x27C, size 0x4
    unsigned int startsynctime; // offset 0x280, size 0x4
    unsigned int startsyncframe; // offset 0x284, size 0x4
    unsigned int twoframestime; // offset 0x288, size 0x4
    unsigned int entireframetime; // offset 0x28C, size 0x4
    unsigned int slowestframetime; // offset 0x290, size 0x4
    unsigned int slowestframe; // offset 0x294, size 0x4
    unsigned int slowest2frametime; // offset 0x298, size 0x4
    unsigned int slowest2frame; // offset 0x29C, size 0x4
    unsigned int soundon; // offset 0x2A0, size 0x4
    unsigned int videoon; // offset 0x2A4, size 0x4
    unsigned int totalmem; // offset 0x2A8, size 0x4
    unsigned int timevdecomp; // offset 0x2AC, size 0x4
    unsigned int timeadecomp; // offset 0x2B0, size 0x4
    unsigned int timeblit; // offset 0x2B4, size 0x4
    unsigned int timeopen; // offset 0x2B8, size 0x4
    unsigned int fileframerate; // offset 0x2BC, size 0x4
    unsigned int fileframeratediv; // offset 0x2C0, size 0x4
    unsigned int runtimeframes; // offset 0x2C4, size 0x4
    signed int rtindex; // offset 0x2C8, size 0x4
    unsigned int * rtframetimes; // offset 0x2CC, size 0x4
    unsigned int * rtadecomptimes; // offset 0x2D0, size 0x4
    unsigned int * rtvdecomptimes; // offset 0x2D4, size 0x4
    unsigned int * rtblittimes; // offset 0x2D8, size 0x4
    unsigned int * rtreadtimes; // offset 0x2DC, size 0x4
    unsigned int * rtidlereadtimes; // offset 0x2E0, size 0x4
    unsigned int * rtthreadreadtimes; // offset 0x2E4, size 0x4
    unsigned int lastblitflags; // offset 0x2E8, size 0x4
    unsigned int lastdecompframe; // offset 0x2EC, size 0x4
    unsigned int lastresynctime; // offset 0x2F0, size 0x4
    unsigned int doresync; // offset 0x2F4, size 0x4
    unsigned int skipcount; // offset 0x2F8, size 0x4
    unsigned int toofewskipstomask; // offset 0x2FC, size 0x4
    unsigned int playingtracks; // offset 0x300, size 0x4
    unsigned int soundskips; // offset 0x304, size 0x4
    class BINKSND * bsnd; // offset 0x308, size 0x4
    unsigned int skippedlastblit; // offset 0x30C, size 0x4
    unsigned int skipped_this_frame; // offset 0x310, size 0x4
    unsigned int skippedblits; // offset 0x314, size 0x4
    class BUNDLEPOINTERS bunp; // offset 0x318, size 0x24
    unsigned int skipped_in_a_row; // offset 0x33C, size 0x4
    unsigned int big_sound_skip_adj; // offset 0x340, size 0x4
    unsigned int big_sound_skip_reduce; // offset 0x344, size 0x4
    unsigned int last_time_almost_empty; // offset 0x348, size 0x4
    unsigned int last_read_count; // offset 0x34C, size 0x4
    unsigned int last_sound_count; // offset 0x350, size 0x4
    unsigned int snd_callback_buffer[16]; // offset 0x354, size 0x40
};
// total size: 0xC
class xUpdateCullGroup {
    // Members
public:
    unsigned int active; // offset 0x0, size 0x4
    unsigned short startIndex; // offset 0x4, size 0x2
    unsigned short endIndex; // offset 0x6, size 0x2
    class xGroup * groupObject; // offset 0x8, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x138
class _tagxPad {
    // Members
public:
    unsigned char value[22]; // offset 0x0, size 0x16
    unsigned char last_value[22]; // offset 0x16, size 0x16
    unsigned int on; // offset 0x2C, size 0x4
    unsigned int pressed; // offset 0x30, size 0x4
    unsigned int released; // offset 0x34, size 0x4
    class _tagPadAnalog analog1; // offset 0x38, size 0x2
    class _tagPadAnalog analog2; // offset 0x3A, size 0x2
    enum _tagPadState state; // offset 0x3C, size 0x4
    unsigned int flags; // offset 0x40, size 0x4
    signed short port; // offset 0x44, size 0x2
    signed short slot; // offset 0x46, size 0x2
    class _tagiPad context; // offset 0x48, size 0x4
    float al2d_timer; // offset 0x4C, size 0x4
    float ar2d_timer; // offset 0x50, size 0x4
    float d_timer; // offset 0x54, size 0x4
    float up_tmr[22]; // offset 0x58, size 0x58
    float down_tmr[22]; // offset 0xB0, size 0x58
    class analog_data analog[2]; // offset 0x108, size 0x30
};
// total size: 0x17C
class BINKSND {
    // Members
public:
    signed int (* Ready)(class BINKSND *); // offset 0x0, size 0x4
    signed int (* Lock)(class BINKSND *, unsigned char * *, unsigned int *); // offset 0x4, size 0x4
    signed int (* Unlock)(class BINKSND *, unsigned int); // offset 0x8, size 0x4
    void (* Volume)(class BINKSND *, signed int); // offset 0xC, size 0x4
    void (* Pan)(class BINKSND *, signed int); // offset 0x10, size 0x4
    signed int (* Pause)(class BINKSND *, signed int); // offset 0x14, size 0x4
    signed int (* SetOnOff)(class BINKSND *, signed int); // offset 0x18, size 0x4
    void (* Close)(class BINKSND *); // offset 0x1C, size 0x4
    void (* MixBins)(class BINKSND *, unsigned int *, unsigned int); // offset 0x20, size 0x4
    void (* MixBinVols)(class BINKSND *, unsigned int *, signed int *, unsigned int); // offset 0x24, size 0x4
    unsigned int sndbufsize; // offset 0x28, size 0x4
    unsigned char * sndbuf; // offset 0x2C, size 0x4
    unsigned char * sndend; // offset 0x30, size 0x4
    unsigned char * sndwritepos; // offset 0x34, size 0x4
    unsigned char * sndreadpos; // offset 0x38, size 0x4
    unsigned int sndcomp; // offset 0x3C, size 0x4
    unsigned int sndamt; // offset 0x40, size 0x4
    unsigned int sndconvert8; // offset 0x44, size 0x4
    unsigned int sndendframe; // offset 0x48, size 0x4
    unsigned int sndprime; // offset 0x4C, size 0x4
    unsigned int sndpad; // offset 0x50, size 0x4
    unsigned int BestSizeIn16; // offset 0x54, size 0x4
    unsigned int BestSizeMask; // offset 0x58, size 0x4
    unsigned int SoundDroppedOut; // offset 0x5C, size 0x4
    signed int NoThreadService; // offset 0x60, size 0x4
    signed int OnOff; // offset 0x64, size 0x4
    unsigned int Latency; // offset 0x68, size 0x4
    unsigned int VideoScale; // offset 0x6C, size 0x4
    unsigned int freq; // offset 0x70, size 0x4
    signed int bits; // offset 0x74, size 0x4
    signed int chans; // offset 0x78, size 0x4
    unsigned char snddata[256]; // offset 0x7C, size 0x100
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
// total size: 0x13C
class BINKIO {
    // Members
public:
    unsigned int (* ReadHeader)(class BINKIO *, signed int, void *, unsigned int); // offset 0x0, size 0x4
    unsigned int (* ReadFrame)(class BINKIO *, unsigned int, signed int, void *, unsigned int); // offset 0x4, size 0x4
    unsigned int (* GetBufferSize)(class BINKIO *, unsigned int); // offset 0x8, size 0x4
    void (* SetInfo)(class BINKIO *, void *, unsigned int, unsigned int, unsigned int); // offset 0xC, size 0x4
    unsigned int (* Idle)(class BINKIO *); // offset 0x10, size 0x4
    void (* Close)(class BINKIO *); // offset 0x14, size 0x4
    class BINK * bink; // offset 0x18, size 0x4
    unsigned int ReadError; // offset 0x1C, size 0x4
    unsigned int DoingARead; // offset 0x20, size 0x4
    unsigned int BytesRead; // offset 0x24, size 0x4
    unsigned int Working; // offset 0x28, size 0x4
    unsigned int TotalTime; // offset 0x2C, size 0x4
    unsigned int ForegroundTime; // offset 0x30, size 0x4
    unsigned int IdleTime; // offset 0x34, size 0x4
    unsigned int ThreadTime; // offset 0x38, size 0x4
    unsigned int BufSize; // offset 0x3C, size 0x4
    unsigned int BufHighUsed; // offset 0x40, size 0x4
    unsigned int CurBufSize; // offset 0x44, size 0x4
    unsigned int CurBufUsed; // offset 0x48, size 0x4
    unsigned char iodata[160]; // offset 0x4C, size 0xA0
    void (* suspend_callback)(class BINKIO *); // offset 0xEC, size 0x4
    signed int (* try_suspend_callback)(class BINKIO *); // offset 0xF0, size 0x4
    void (* resume_callback)(class BINKIO *); // offset 0xF4, size 0x4
    void (* idle_on_callback)(class BINKIO *); // offset 0xF8, size 0x4
    unsigned int callback_control[16]; // offset 0xFC, size 0x40
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x20
class xGroup : public xBase {
    // Members
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
// total size: 0x10
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x190
class RwCamera {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    enum RwCameraProjection projectionType; // offset 0x14, size 0x4
    class RwCamera * (* beginUpdate)(class RwCamera *); // offset 0x18, size 0x4
    class RwCamera * (* endUpdate)(class RwCamera *); // offset 0x1C, size 0x4
    class RwMatrixTag viewMatrix; // offset 0x20, size 0x40
    class RwRaster * frameBuffer; // offset 0x60, size 0x4
    class RwRaster * zBuffer; // offset 0x64, size 0x4
    class RwV2d viewWindow; // offset 0x68, size 0x8
    class RwV2d recipViewWindow; // offset 0x70, size 0x8
    class RwV2d viewOffset; // offset 0x78, size 0x8
    float nearPlane; // offset 0x80, size 0x4
    float farPlane; // offset 0x84, size 0x4
    float fogPlane; // offset 0x88, size 0x4
    float zScale; // offset 0x8C, size 0x4
    float zShift; // offset 0x90, size 0x4
    class RwFrustumPlane frustumPlanes[6]; // offset 0x94, size 0x78
    class RwBBox frustumBoundBox; // offset 0x10C, size 0x18
    class RwV3d frustumCorners[8]; // offset 0x124, size 0x60
};
// total size: 0x70
class RpWorld {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    unsigned int flags; // offset 0x8, size 0x4
    enum RpWorldRenderOrder renderOrder; // offset 0xC, size 0x4
    class RpMaterialList matList; // offset 0x10, size 0xC
    class RpSector * rootSector; // offset 0x1C, size 0x4
    signed int numTexCoordSets; // offset 0x20, size 0x4
    signed int numClumpsInWorld; // offset 0x24, size 0x4
    class RwLLLink * currentClumpLink; // offset 0x28, size 0x4
    class RwLinkList clumpList; // offset 0x2C, size 0x8
    class RwLinkList lightList; // offset 0x34, size 0x8
    class RwLinkList directionalLightList; // offset 0x3C, size 0x8
    class RwV3d worldOrigin; // offset 0x44, size 0xC
    class RwBBox boundingBox; // offset 0x50, size 0x18
    class RpWorldSector * (* renderCallBack)(class RpWorldSector *); // offset 0x68, size 0x4
    class RxPipeline * pipeline; // offset 0x6C, size 0x4
};
// total size: 0xD0
class xCam {
    // Members
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    float fov; // offset 0x40, size 0x4
    signed int flags; // offset 0x44, size 0x4
    unsigned int owner; // offset 0x48, size 0x4
    class xCamGroup * group; // offset 0x4C, size 0x4
    class analog_data analog; // offset 0x50, size 0x18
    float motion_factor; // offset 0x68, size 0x4
    enum xCamCoordType coord_type; // offset 0x6C, size 0x4
    enum xCamOrientType orient_type; // offset 0x70, size 0x4
    // total size: 0x20
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class xVec3 cart; // offset 0x0, size 0xC
            class xCamCoordCylinder cylinder; // offset 0x0, size 0x18
            class xCamCoordSphere sphere; // offset 0x0, size 0x20
        };
    } coord; // offset 0x80, size 0x20
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class xQuat quat; // offset 0x0, size 0x10
            class xCamOrientEuler euler; // offset 0x0, size 0xC
        };
    } orient; // offset 0xA0, size 0x10
    class xCamConfigCommon cfg_common; // offset 0xB0, size 0x8
    signed int group_index; // offset 0xBC, size 0x4
    signed int group_flags; // offset 0xC0, size 0x4
    class xCamBlend * blender; // offset 0xC4, size 0x4
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
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
};
// total size: 0x1C
struct /* @anon0 */ {};
// total size: 0xC
class _tagTRCPadInfo : public _tagiTRCPadInfo {
    // Members
public:
    signed int id; // offset 0x4, size 0x4
    enum _tagTRCState state; // offset 0x8, size 0x4
};
// total size: 0x2C
class xUpdateCullMgr {
    // Members
public:
    unsigned int entCount; // offset 0x0, size 0x4
    unsigned int entActive; // offset 0x4, size 0x4
    void * * ent; // offset 0x8, size 0x4
    class xUpdateCullEnt * * mgr; // offset 0xC, size 0x4
    unsigned int mgrCount; // offset 0x10, size 0x4
    unsigned int mgrCurr; // offset 0x14, size 0x4
    class xUpdateCullEnt * mgrList; // offset 0x18, size 0x4
    unsigned int grpCount; // offset 0x1C, size 0x4
    class xUpdateCullGroup * grpList; // offset 0x20, size 0x4
    void (* activateCB)(void *); // offset 0x24, size 0x4
    void (* deactivateCB)(void *); // offset 0x28, size 0x4
};
// total size: 0x120
class xCamGroup {
    // Members
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    class xVec3 vel; // offset 0x40, size 0xC
    float fov; // offset 0x4C, size 0x4
    float fov_default; // offset 0x50, size 0x4
    signed int flags; // offset 0x54, size 0x4
    class xCam * primary; // offset 0x58, size 0x4
    class analog_data analog; // offset 0x5C, size 0x18
    class xCam * owned[32]; // offset 0x74, size 0x80
    signed int size; // offset 0xF4, size 0x4
    signed int primary_index; // offset 0xF8, size 0x4
    signed int child_flags; // offset 0xFC, size 0x4
    signed int child_flags_mask; // offset 0x100, size 0x4
    class xCamBlend * blend_cam[4]; // offset 0x104, size 0x10
};
// total size: 0x88
class RpWorldSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    class RpTriangle * triangles; // offset 0x4, size 0x4
    class RwV3d * vertices; // offset 0x8, size 0x4
    class RpVertexNormal * normals; // offset 0xC, size 0x4
    class RwTexCoords * texCoords[8]; // offset 0x10, size 0x20
    class RwRGBA * preLitLum; // offset 0x30, size 0x4
    class RwResEntry * repEntry; // offset 0x34, size 0x4
    class RwLinkList collAtomicsInWorldSector; // offset 0x38, size 0x8
    class RwLinkList lightsInWorldSector; // offset 0x40, size 0x8
    class RwBBox boundingBox; // offset 0x48, size 0x18
    class RwBBox tightBoundingBox; // offset 0x60, size 0x18
    class RpMeshHeader * mesh; // offset 0x78, size 0x4
    class RxPipeline * pipeline; // offset 0x7C, size 0x4
    unsigned short matListWindowBase; // offset 0x80, size 0x2
    unsigned short numVertices; // offset 0x82, size 0x2
    unsigned short numTriangles; // offset 0x84, size 0x2
    unsigned short pad; // offset 0x86, size 0x2
};
// total size: 0x10
class BINKRECT {
    // Members
public:
    signed int Left; // offset 0x0, size 0x4
    signed int Top; // offset 0x4, size 0x4
    signed int Width; // offset 0x8, size 0x4
    signed int Height; // offset 0xC, size 0x4
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
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
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
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x24
class MOVIE {
    // Members
public:
    class BINK * hBink; // offset 0x0, size 0x4
    class RwRaster * pBinkRaster; // offset 0x4, size 0x4
    signed int asyncReadKey; // offset 0x8, size 0x4
    class RwTexture * pBinkTexture; // offset 0xC, size 0x4
    unsigned char * pPreBuffer; // offset 0x10, size 0x4
    unsigned char * pPreBufferAligned; // offset 0x14, size 0x4
    unsigned int PreBufferSize; // offset 0x18, size 0x4
    signed int FileOffset; // offset 0x1C, size 0x4
    class tag_xFile * pFile; // offset 0x20, size 0x4
};
// total size: 0x10
class xVec4 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
};
// total size: 0x10
class xUpdateCullEnt {
    // Members
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
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
// total size: 0x20
class /* @class */ {
    // Members
public:
    union { // inferred
        class xVec3 cart; // offset 0x0, size 0xC
        class xCamCoordCylinder cylinder; // offset 0x0, size 0x18
        class xCamCoordSphere sphere; // offset 0x0, size 0x20
    };
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0xC
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x30
class DebugAllocationHeader {
    // Members
public:
    char * file; // offset 0x0, size 0x4
    signed int line; // offset 0x4, size 0x4
    char * function; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    class DebugAllocationHeader * prev; // offset 0x10, size 0x4
    class DebugAllocationHeader * next; // offset 0x14, size 0x4
    class xMemoryManager * manager; // offset 0x18, size 0x4
    unsigned int magic[5]; // offset 0x1C, size 0x14
};
// total size: 0xB4
class tag_xFile {
    // Members
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x24
class BUNDLEPOINTERS {
    // Members
public:
    void * typeptr; // offset 0x0, size 0x4
    void * type16ptr; // offset 0x4, size 0x4
    void * colorptr; // offset 0x8, size 0x4
    void * bits2ptr; // offset 0xC, size 0x4
    void * motionXptr; // offset 0x10, size 0x4
    void * motionYptr; // offset 0x14, size 0x4
    void * dctptr; // offset 0x18, size 0x4
    void * mdctptr; // offset 0x1C, size 0x4
    void * patptr; // offset 0x20, size 0x4
};
// total size: 0x24
class xMemoryManager {
    // Members
public:
    void * arenaStart; // offset 0x4, size 0x4
    void * arenaEnd; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    char * lastFile; // offset 0x10, size 0x4
    char * lastFunction; // offset 0x14, size 0x4
    signed int lastLine; // offset 0x18, size 0x4
    unsigned int debugDataSize; // offset 0x1C, size 0x4
    class DebugAllocationHeader * activeList; // offset 0x20, size 0x4
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    union { // inferred
        class xQuat quat; // offset 0x0, size 0x10
        class xCamOrientEuler euler; // offset 0x0, size 0xC
    };
};
// total size: 0x4
class RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
// total size: 0x10
class FreeNode {
    // Members
public:
    class FreeNode * next; // offset 0x0, size 0x4
    class FreeNode * prev; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
    unsigned int pad[1]; // offset 0xC, size 0x4
};
// total size: 0x8
class xCamScreen {
    // Members
public:
    class RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
enum sceDemoEndReason {
    SCE_DEMO_ENDREASON_ATTRACT_INTERRUPTED = 0,
    SCE_DEMO_ENDREASON_ATTRACT_COMPLETE = 1,
    SCE_DEMO_ENDREASON_PLAYABLE_INACTIVITY_TIMEOUT = 2,
    SCE_DEMO_ENDREASON_PLAYABLE_GAMEPLAY_TIMEOUT = 3,
    SCE_DEMO_ENDREASON_PLAYABLE_COMPLETE = 4,
    SCE_DEMO_ENDREASON_PLAYABLE_QUIT = 5,
    SCE_DEMO_ENDREASON_NETCONFIG_REQUEST = 6,
    SCE_DEMO_ENDREASON_NETCONFIG_COMPLETE = 7,
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
// total size: 0x8
class xCamConfigCommon {
    // Members
public:
    unsigned char priority; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float blend_time; // offset 0x4, size 0x4
};
// total size: 0x18
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
enum _GameOstrich {
    eGameOstrich_Loading = 0,
    eGameOstrich_PlayingMovie = 1,
    eGameOstrich_InScene = 2,
    eGameOstrich_Total = 3,
};
// total size: 0x0
class zPlayer {};
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
// total size: 0x30
class xMat3x3 {
    // Members
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x0
class zScene {};
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
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
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
// total size: 0x560
class xGlobals {
    // Members
public:
    class xCamGroup * cam; // offset 0x0, size 0x4
    class xCamScreen * screen; // offset 0x4, size 0x4
    class xVec4 frustplane[12]; // offset 0x10, size 0xC0
    union { // inferred
        struct { // inferred
            class _tagxPad * pad0; // offset 0xD0, size 0x4
            class _tagxPad * pad1; // offset 0xD4, size 0x4
            class _tagxPad * pad2; // offset 0xD8, size 0x4
            class _tagxPad * pad3; // offset 0xDC, size 0x4
        };
        class _tagxPad * pad[4]; // offset 0xD0, size 0x10
    };
    signed int profile; // offset 0xE0, size 0x4
    char profFunc[6][128]; // offset 0xE4, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x3E4, size 0x4
    signed int sceneFirst; // offset 0x3E8, size 0x4
    char sceneStart[32]; // offset 0x3EC, size 0x20
    class RpWorld * currWorld; // offset 0x40C, size 0x4
    class iFogParams fog; // offset 0x410, size 0x1C
    class iFogParams fogA; // offset 0x42C, size 0x1C
    class iFogParams fogB; // offset 0x448, size 0x1C
    signed long long fog_t0; // offset 0x468, size 0x8
    signed long long fog_t1; // offset 0x470, size 0x8
    signed int option_vibration; // offset 0x478, size 0x4
    signed int option_subtitles; // offset 0x47C, size 0x4
    unsigned int slowdown; // offset 0x480, size 0x4
    float update_dt; // offset 0x484, size 0x4
    signed short ForceCinematic; // offset 0x488, size 0x2
    signed int useHIPHOP; // offset 0x48C, size 0x4
    unsigned char NoMusic; // offset 0x490, size 0x1
    unsigned char NoCutscenes; // offset 0x491, size 0x1
    unsigned char NoPadCheck; // offset 0x492, size 0x1
    char currentActivePad; // offset 0x493, size 0x1
    unsigned char firstStartPressed; // offset 0x494, size 0x1
    unsigned char fromLauncher; // offset 0x495, size 0x1
    unsigned char FlashWIP; // offset 0x496, size 0x1
    unsigned char inLoadingScreen; // offset 0x497, size 0x1
    unsigned char LoadingScene; // offset 0x498, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x499, size 0x1
    unsigned char ForceMono; // offset 0x49A, size 0x1
    unsigned int minVSyncCnt; // offset 0x49C, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x4A0, size 0x1
    unsigned char autoSaveFeature; // offset 0x4A1, size 0x1
    signed int asyncLoadingScreen; // offset 0x4A4, size 0x4
    signed int asyncLoadingFlags; // offset 0x4A8, size 0x4
    char fromLauncherUser[32]; // offset 0x4AC, size 0x20
    class zPlayer * ___player_ent_dont_use_directly; // offset 0x4CC, size 0x4
    class zScene * sceneCur; // offset 0x4D0, size 0x4
    class zScene * scenePreload; // offset 0x4D4, size 0x4
    class PS2DemoGlobals * PS2demo; // offset 0x4D8, size 0x4
    char watermark[127]; // offset 0x4DC, size 0x7F
    unsigned char watermarkAlpha; // offset 0x55B, size 0x1
    float watermarkSize; // offset 0x55C, size 0x4
};
enum _tagPadInit {
    ePadInit_Open1 = 0,
    ePadInit_WaitStable2 = 1,
    ePadInit_EnableAnalog3 = 2,
    ePadInit_EnableAnalog3LetsAllPissOffChris = 3,
    ePadInit_EnableRumble4 = 4,
    ePadInit_EnableRumbleTest5 = 5,
    ePadInit_PressureS6 = 6,
    ePadInit_PressureSTest7 = 7,
    ePadInit_Complete8a = 8,
    ePadInit_Complete8b = 9,
    ePadInit_Finished9 = 10,
};
// total size: 0x4
class _tagiTRCPadInfo {
    // Members
public:
    enum _tagPadInit pad_init; // offset 0x0, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x4
class xColor_tag {
    // Members
public:
    union { // inferred
        struct { // inferred
            unsigned char r; // offset 0x0, size 0x1
            unsigned char g; // offset 0x1, size 0x1
            unsigned char b; // offset 0x2, size 0x1
            unsigned char a; // offset 0x3, size 0x1
        };
        class RwRGBA rgba; // offset 0x0, size 0x4
    };
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
};
// total size: 0x34
class xMemoryManagerGeneral : public xMemoryManager {
    // Members
public:
    class FreeNode * freeStart; // offset 0x24, size 0x4
    class FreeNode * freeEnd; // offset 0x28, size 0x4
    enum Dir dir; // offset 0x2C, size 0x4
    enum Strategy strategy; // offset 0x30, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
// total size: 0x1C
class iFogParams {
    // Members
public:
    enum RwFogType type; // offset 0x0, size 0x4
    float start; // offset 0x4, size 0x4
    float stop; // offset 0x8, size 0x4
    float density; // offset 0xC, size 0x4
    class RwRGBA fogcolor; // offset 0x10, size 0x4
    class RwRGBA bgcolor; // offset 0x14, size 0x4
    unsigned char * table; // offset 0x18, size 0x4
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x34
class PS2DemoGlobals {
    // Members
public:
    unsigned short language; // offset 0x0, size 0x2
    unsigned short aspect; // offset 0x2, size 0x2
    unsigned short play_mode; // offset 0x4, size 0x2
    unsigned short inactive_timeout; // offset 0x6, size 0x2
    unsigned short gameplay_timeout; // offset 0x8, size 0x2
    enum sceDemoEndReason exit_code; // offset 0xC, size 0x4
    unsigned int FMV_playing : 1; // offset 0x10, size 0x4
    unsigned int more_padding : 31; // offset 0x10, size 0x4
    float bail_timer; // offset 0x14, size 0x4
    float inactive_timer; // offset 0x18, size 0x4
    float gameplay_timer; // offset 0x1C, size 0x4
    char subdir[16]; // offset 0x20, size 0x10
    unsigned short quit; // offset 0x30, size 0x2
    unsigned short vmode; // offset 0x32, size 0x2
};
// total size: 0x0
class rxReq {};
// total size: 0x18
class xCamCoordCylinder {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
class RxPipelineRequiresCluster {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterValidityReq rqdOrOpt; // offset 0x4, size 0x4
    unsigned int slotIndex; // offset 0x8, size 0x4
};
enum Dir {
    Up = 0,
    Down = 1,
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
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
enum _tagTRCState {
    TRC_Unknown = 0,
    TRC_PadMissing = 1,
    TRC_PadInserted = 2,
    TRC_PadInvalidNoAnalog = 3,
    TRC_PadInvalidType = 4,
    TRC_DiskNotIdentified = 5,
    TRC_DiskIdentified = 6,
    TRC_DiskTrayOpen = 7,
    TRC_DiskTrayClosed = 8,
    TRC_DiskNoDisk = 9,
    TRC_DiskInvalid = 10,
    TRC_DiskRetry = 11,
    TRC_DiskFatal = 12,
    TRC_Total = 13,
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
enum Strategy {
    FirstFit = 0,
    BestFit = 1,
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
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
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
// total size: 0x1C
struct /* @anon1 */ {};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015D510 -> 0x0015D6E8
*/
// Range: 0x15D510 -> 0x15D6E8
class RwTexture * xFMVGetTexture(class MOVIE * pMovie /* r20 */, unsigned short looping /* r19 */, unsigned short freezeframed /* r18 */, unsigned int startframe /* r17 */, unsigned int endframe /* r16 */) {
    /* anonymous block */ {
        // Range: 0x15D510 -> 0x15D6E8
        unsigned char * pBits; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015D6F0 -> 0x0015D860
*/
// Range: 0x15D6F0 -> 0x15D860
signed int BinkFileOpen(class BINKIO * bio /* r17 */, char * filename /* r16 */, unsigned int flags /* r18 */) {
    /* anonymous block */ {
        // Range: 0x15D6F0 -> 0x15D860
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015D860 -> 0x0015D868
*/
// Range: 0x15D860 -> 0x15D868
static void BinkFileClose() {
    /* anonymous block */ {
        // Range: 0x15D860 -> 0x15D868
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015D870 -> 0x0015D94C
*/
// Range: 0x15D870 -> 0x15D94C
static void BinkFileSetInfo(class BINKIO * bio /* r19 */, void * buf /* r2 */, unsigned int size /* r2 */, unsigned int filesize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x15D870 -> 0x15D94C
        unsigned int BufAligned; // r2
        unsigned char * Buffer; // r18
        unsigned int Size; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015D950 -> 0x0015D964
*/
// Range: 0x15D950 -> 0x15D964
static unsigned int BinkFileGetBufferSize(unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x15D950 -> 0x15D964
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015D970 -> 0x0015DD84
*/
// Range: 0x15D970 -> 0x15DD84
static unsigned int BinkFileReadFrame(class BINKIO * bio /* r21 */, signed int offset /* r20 */, void * dest /* r22 */, unsigned int size /* r23 */) {
    /* anonymous block */ {
        // Range: 0x15D970 -> 0x15DD84
        unsigned int amt; // r2
        unsigned int tamt; // r29+0xE0
        unsigned int timer; // r2
        unsigned char * pDest; // r2
        unsigned int read_offset; // r2
        unsigned int timer2; // r2
        unsigned int cpy; // r19
        unsigned int front; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015DD90 -> 0x0015DE00
*/
// Range: 0x15DD90 -> 0x15DE00
static unsigned int BinkFileIdle(class BINKIO * bio /* r16 */) {
    /* anonymous block */ {
        // Range: 0x15DD90 -> 0x15DE00
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015DE00 -> 0x0015DF68
*/
// Range: 0x15DE00 -> 0x15DF68
static void ReadKickoff(class BINKIO * bio /* r19 */) {
    /* anonymous block */ {
        // Range: 0x15DE00 -> 0x15DF68
        unsigned int left; // r18
        unsigned int requestSize; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015DF70 -> 0x0015E0FC
*/
// Range: 0x15DF70 -> 0x15E0FC
static void DVDReadCallback(class tag_xFile * file /* r2 */) {
    /* anonymous block */ {
        // Range: 0x15DF70 -> 0x15E0FC
        class BINKIO * bio; // r18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015E100 -> 0x0015E2BC
*/
// Range: 0x15E100 -> 0x15E2BC
static unsigned int BinkFileReadHeader(class BINKIO * bio /* r21 */, signed int offset /* r20 */, void * dest /* r23 */, unsigned int size /* r19 */) {
    /* anonymous block */ {
        // Range: 0x15E100 -> 0x15E2BC
        unsigned int nToReadBytes; // r30
        void * newExtraSectors; // r2
        void * newExtraSectorsAligned; // r2
        unsigned int amt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015E2C0 -> 0x0015EDB0
*/
// Range: 0x15E2C0 -> 0x15EDB0
static unsigned int iFMVPlay(char * filename /* r16 */, unsigned int buttons /* r22 */, unsigned int uSubtitlesAID /* r29+0x128 */, unsigned char skippable /* r29+0x127 */, unsigned char lockController /* r21 */, signed int uAudioTrack /* r29+0x12C */) {
    /* anonymous block */ {
        // Range: 0x15E2C0 -> 0x15EDB0
        class BINK * hBinkMovie; // r20
        signed long long delay; // r2
        signed long long now; // r2
        unsigned char bTrackFound; // r7
        signed int track; // r6
        class RwRaster * pCamRaster; // r29+0x110
        signed int iBackBufWidth; // r2
        signed int iBackBufHeight; // r2
        signed int iSafeWidth; // r2
        signed int iSafeHeight; // r2
        float fInvAspect; // r1
        signed int iHorizPad; // r10
        signed int iVertPad; // r9
        class RwRaster * pBinkRaster; // r19
        signed int iBinkMovieHalfHeight; // r23
        signed int controllerEnd; // r2
        signed long long fmvAbortDelay; // r17
        unsigned char aborted; // r29+0x100
        signed long long dwTimeNow; // r2
        signed int i; // r18
        unsigned char * pBits; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015EDB0 -> 0x0015EF10
*/
// Range: 0x15EDB0 -> 0x15EF10
unsigned int iFMVPlay(char * filename /* r20 */, unsigned int buttons /* r19 */, float time /* r20 */, unsigned int uSubtitlesAID /* r18 */, unsigned char skippable /* r17 */, unsigned char lockController /* r16 */) {
    /* anonymous block */ {
        // Range: 0x15EDB0 -> 0x15EF10
        char fullname[64]; // r29+0x70
        char BIK[5]; // r29+0xB8
        enum _GameOstrich old; // r20
        enum xRegion localRegion; // r2
        unsigned int ret; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015EF10 -> 0x0015F000
*/
// Range: 0x15EF10 -> 0x15F000
void iFMVClose(class MOVIE * & pMovie /* r16 */) {
    /* anonymous block */ {
        // Range: 0x15EF10 -> 0x15F000
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015F000 -> 0x0015F34C
*/
// Range: 0x15F000 -> 0x15F34C
class MOVIE * iFMVOpen(class PKRAssetTOCInfo & rAssetInfo /* r18 */) {
    /* anonymous block */ {
        // Range: 0x15F000 -> 0x15F34C
        class MOVIE * pMovie; // r16
        char * pFilename; // r17
        unsigned int file_ok; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015F350 -> 0x0015F590
*/
// Range: 0x15F350 -> 0x15F590
static void iFMVPrebufferReadComplete(class MOVIE * pMovie /* r16 */) {
    /* anonymous block */ {
        // Range: 0x15F350 -> 0x15F590
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015F590 -> 0x0015F68C
*/
// Range: 0x15F590 -> 0x15F68C
static void iFMVInit() {
    /* anonymous block */ {
        // Range: 0x15F590 -> 0x15F68C
        class RwResEntry * repEntryOwner; // r29+0x1C
        class RwResEntry * repEntry; // r2
        unsigned int uIOPMem; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015F690 -> 0x0015F698
*/
// Range: 0x15F690 -> 0x15F698
unsigned char iFMVSystemInit() {
    /* anonymous block */ {
        // Range: 0x15F690 -> 0x15F698
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015F6A0 -> 0x0015F6B0
*/
// Range: 0x15F6A0 -> 0x15F6B0
static void _MovieFree(void * pMemToFree /* r2 */) {
    /* anonymous block */ {
        // Range: 0x15F6A0 -> 0x15F6B0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\p2\iFMV.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0015F6B0 -> 0x0015F6C4
*/
// Range: 0x15F6B0 -> 0x15F6C4
static void * _MovieAlloc(unsigned int uNumBytes /* r2 */) {
    /* anonymous block */ {
        // Range: 0x15F6B0 -> 0x15F6C4
        void * pAllocated; // r2
    }
}


