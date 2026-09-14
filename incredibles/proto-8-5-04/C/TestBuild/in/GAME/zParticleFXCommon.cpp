/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static class EnergyPulseSystem energy_pulse_system; // size: 0xC, address: 0x6BEEA0
static class RubbleSystem rubble_system; // size: 0xC, address: 0x6BEEB0
static class FlameConeSystem flame_cone_system; // size: 0xC, address: 0x6BEEC0
static class SmokePuffSystem smoke_puff_system; // size: 0xC, address: 0x6BEED0
static class LavaDripSystem lava_drip_system; // size: 0xC, address: 0x6BEEE0
static class SparkSystem spark_system; // size: 0xC, address: 0x6BEEF0
// total size: 0xC
struct /* @anon7 */ {} SparkSystem::__vtable; // size: 0xC, address: 0x606E80
// total size: 0xC
struct /* @anon10 */ {} RegisterOnFirstEmitSystem<zParticleEmitterConeVolume<zParticleColorWhiteFadeOut<zParticleMoverGravity<zParticleRadiusConst<zParticlePoolType<ptank_pool__pos_color_size, zParticleBase>>>>>, SparkSystem>::__vtable; // size: 0xC, address: 0x0
// total size: 0xC
struct /* @anon8 */ {} LavaDripSystem::__vtable; // size: 0xC, address: 0x606E90
// total size: 0xC
struct /* @anon0 */ {} RegisterOnFirstEmitSystem<zParticleEmitterConeVolume<zParticleColorWhiteFadeOut<zParticleMoverLinearVel<zParticleRadiusPercent<zParticlePoolType<ptank_pool__pos_color_size, zParticleBase>>>>>, LavaDripSystem>::__vtable; // size: 0xC, address: 0x0
// total size: 0xC
struct /* @anon9 */ {} SmokePuffSystem::__vtable; // size: 0xC, address: 0x606EA0
// total size: 0xC
struct /* @anon2 */ {} RegisterOnFirstEmitSystem<zParticleEmitterConeVolume<zParticleColorToBlackFadeOut<zParticleMoverLinearVel<zParticleRadiusPercent<zParticlePoolType<ptank_pool__pos_color_size, zParticleBase>>>>>, SmokePuffSystem>::__vtable; // size: 0xC, address: 0x0
// total size: 0xC
struct /* @anon4 */ {} FlameConeSystem::__vtable; // size: 0xC, address: 0x606EB0
// total size: 0xC
struct /* @anon6 */ {} RegisterOnFirstEmitSystem<zParticleEmitterConeVolume<zParticleColorToBlackFadeOut<zParticleMoverLinearVel<zParticleRadiusPercent<zParticlePoolType<ptank_pool__pos_color_size, zParticleBase>>>>>, FlameConeSystem>::__vtable; // size: 0xC, address: 0x0
// total size: 0xC
struct /* @anon1 */ {} RubbleSystem::__vtable; // size: 0xC, address: 0x606EC0
// total size: 0xC
struct /* @anon5 */ {} RegisterOnFirstEmitSystem<zParticleEmitterConeSurface<zParticleColorWhiteOpaque<zParticleMoverGravity<zParticleRadiusPercent<zParticlePoolType<ptank_pool__pos_color_size, zParticleBase>>>>>, RubbleSystem>::__vtable; // size: 0xC, address: 0x0
// total size: 0xC
struct /* @anon11 */ {} EnergyPulseSystem::__vtable; // size: 0xC, address: 0x606ED0
// total size: 0xC
struct /* @anon3 */ {} RegisterOnFirstEmitSystem<zParticleUVStaticTile<3, 3, zParticleEmitterConeSurface<zParticleColorWhiteFadeOut<zParticleMoverLinearDecel<zParticleRadiusConst<zParticlePoolType<ptank_pool__pos_color_size_uv2, zParticleBase>>>>>>, EnergyPulseSystem>::__vtable; // size: 0xC, address: 0x0
signed int Update(unsigned char *, signed int, class ptank_pool &, float, void *); // size: 0x0, address: 0x4807E0
signed int _rpPTankAtomicDataOffset; // size: 0x4, address: 0x608208
signed int Update(unsigned char *, signed int, class ptank_pool &, float, void *); // size: 0x0, address: 0x480BE0
signed int Update(unsigned char *, signed int, class ptank_pool &, float, void *); // size: 0x0, address: 0x480FD0
signed int Update(unsigned char *, signed int, class ptank_pool &, float, void *); // size: 0x0, address: 0x4814A0
signed int Update(unsigned char *, signed int, class ptank_pool &, float, void *); // size: 0x0, address: 0x481860
// total size: 0xC
class RegisterOnFirstEmitSystem : public zParticleSystemHelper {
    // Members
public:
    unsigned char registered; // offset 0x4, size 0x1
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
// total size: 0x40
class padded_particle {
    // Members
public:
    union { // inferred
        class zParticleEmitterConeVolume p; // offset 0x0, size 0x40
        char padding[64]; // offset 0x0, size 0x40
    };
};
// total size: 0x40
class padded_particle {
    // Members
public:
    union { // inferred
        class zParticleUVStaticTile p; // offset 0x0, size 0x40
        char padding[64]; // offset 0x0, size 0x40
    };
};
// total size: 0x40
class EmitState : public EmitState {
    // Members
public:
    class xVec3 dir; // offset 0x30, size 0xC
    float dir_random; // offset 0x3C, size 0x4
};
// total size: 0xC
class SmokePuffSystem : public RegisterOnFirstEmitSystem {};
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
// total size: 0x1
class zParticleSystemHelperEmitter {};
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
class zParticlePoolType : public zParticleBase {};
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
class RegisterOnFirstEmitSystem : public zParticleSystemHelper {
    // Members
public:
    unsigned char registered; // offset 0x4, size 0x1
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @anon0 */ {};
// total size: 0xC
struct /* @anon1 */ {};
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
// total size: 0x4
class zParticleSystemHelper : public zParticleSystemHelperEmitter {
    // Members
public:
    signed int particle_batch_id; // offset 0x0, size 0x4
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
class zParticleRadiusConst : public zParticlePoolType {};
// total size: 0x20
class ptank_pool {
    // Members
public:
    class render_state rs; // offset 0x0, size 0x10
    unsigned int order_group; // offset 0x10, size 0x4
    signed int order_index; // offset 0x14, size 0x4
    unsigned int used; // offset 0x18, size 0x4
    class RpAtomic * ptank; // offset 0x1C, size 0x4
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
struct /* @anon2 */ {};
// total size: 0xC
class LavaDripSystem : public RegisterOnFirstEmitSystem {};
// total size: 0x40
class padded_particle {
    // Members
public:
    union { // inferred
        class zParticleEmitterConeVolume p; // offset 0x0, size 0x34
        char padding[64]; // offset 0x0, size 0x40
    };
};
// total size: 0x38
class zParticleMoverLinearVel : public zParticleRadiusPercent {
    // Members
public:
    class xVec3 start; // offset 0x18, size 0xC
    class xVec3 velocity; // offset 0x24, size 0xC
    float time_elapsed; // offset 0x30, size 0x4
    float lifetime; // offset 0x34, size 0x4
};
// total size: 0x4
class zParticleSystemHelper : public zParticleSystemHelperEmitter {
    // Members
public:
    signed int particle_batch_id; // offset 0x0, size 0x4
};
// total size: 0x38
class zParticleColorWhiteFadeOut : public zParticleMoverLinearVel {};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x38
class zParticleMoverLinearDecel : public zParticleRadiusConst {
    // Members
public:
    class xVec3 start; // offset 0x10, size 0xC
    class xVec3 dir; // offset 0x1C, size 0xC
    float time_elapsed; // offset 0x28, size 0x4
    float lifetime; // offset 0x2C, size 0x4
    float A; // offset 0x30, size 0x4
    float B; // offset 0x34, size 0x4
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
struct /* @anon3 */ {};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x1
class zParticleSystemHelperEmitter {};
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x38
class EmitState : public EmitState {
    // Members
public:
    float initial_color; // offset 0x30, size 0x4
    float initial_alpha; // offset 0x34, size 0x4
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
// total size: 0x40
class zParticleColorToBlackFadeOut : public zParticleMoverLinearVel {
    // Members
public:
    float initial_color; // offset 0x38, size 0x4
    float initial_alpha; // offset 0x3C, size 0x4
};
// total size: 0xC
class EnergyPulseSystem : public RegisterOnFirstEmitSystem {};
// total size: 0x38
class zParticleEmitterConeVolume : public zParticleColorWhiteFadeOut {};
// total size: 0x60
class EmitState : public EmitState {
    // Members
public:
    class xVec3 dir; // offset 0x34, size 0xC
    class xVec3 plane_x; // offset 0x40, size 0xC
    class xVec3 plane_y; // offset 0x4C, size 0xC
    float out; // offset 0x58, size 0x4
    float out_rand; // offset 0x5C, size 0x4
};
// total size: 0xC
struct /* @anon4 */ {};
// total size: 0x38
class zParticleColorWhiteFadeOut : public zParticleMoverLinearDecel {};
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
// total size: 0x40
class padded_particle {
    // Members
public:
    union { // inferred
        class zParticleEmitterConeSurface p; // offset 0x0, size 0x3C
        char padding[64]; // offset 0x0, size 0x40
    };
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
// total size: 0x40
class zParticleEmitterConeVolume : public zParticleColorToBlackFadeOut {};
// total size: 0xC
struct /* @anon5 */ {};
// total size: 0x2C
class ptank_pool__pos_color_size : public ptank_pool {
    // Members
public:
    class xVec3 * pos; // offset 0x20, size 0x4
    class xColor_tag * color; // offset 0x24, size 0x4
    class xVec2 * size; // offset 0x28, size 0x4
};
// total size: 0x4
class EmitState : public EmitState {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
// total size: 0x10
class zParticleBase {
    // Members
public:
    class xVec3 position; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
class render_state {
    // Members
public:
    class RwTexture * texture; // offset 0x0, size 0x4
    unsigned int src_blend; // offset 0x4, size 0x4
    unsigned int dst_blend; // offset 0x8, size 0x4
    signed int flags; // offset 0xC, size 0x4
};
// total size: 0x38
class zParticleEmitterConeSurface : public zParticleColorWhiteFadeOut {};
// total size: 0x1C
class RpMorphTarget {
    // Members
public:
    class RpGeometry * parentGeom; // offset 0x0, size 0x4
    class RwSphere boundingSphere; // offset 0x4, size 0x10
    class RwV3d * verts; // offset 0x14, size 0x4
    class RwV3d * normals; // offset 0x18, size 0x4
};
// total size: 0xC
class RubbleSystem : public RegisterOnFirstEmitSystem {};
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
// total size: 0x1
class EmitState {};
// total size: 0xC
class RegisterOnFirstEmitSystem : public zParticleSystemHelper {
    // Members
public:
    unsigned char registered; // offset 0x4, size 0x1
};
// total size: 0x4
class EmitState : public EmitState {
    // Members
public:
    float radius; // offset 0x0, size 0x4
};
// total size: 0x10
class zParticleRadiusConst : public zParticlePoolType {};
// total size: 0x48
class EmitState : public EmitState {
    // Members
public:
    class xVec3 dir; // offset 0x38, size 0xC
    float dir_random; // offset 0x44, size 0x4
};
// total size: 0xC
class FlameConeSystem : public RegisterOnFirstEmitSystem {};
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
class RegisterOnFirstEmitSystem : public zParticleSystemHelper {
    // Members
public:
    unsigned char registered; // offset 0x4, size 0x1
};
// total size: 0x30
class EmitState : public EmitState {
    // Members
public:
    class xVec3 travel_dir; // offset 0x4, size 0xC
    float vel; // offset 0x10, size 0x4
    float vel_rand; // offset 0x14, size 0x4
    class xVec3 start; // offset 0x18, size 0xC
    float life; // offset 0x24, size 0x4
    float life_rand; // offset 0x28, size 0x4
    float gravity; // offset 0x2C, size 0x4
};
// total size: 0xC
struct /* @anon6 */ {};
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
class zParticleMoverGravity : public zParticleRadiusConst {
    // Members
public:
    class xVec3 start; // offset 0x10, size 0xC
    class xVec3 vel0; // offset 0x1C, size 0xC
    float time_elapsed; // offset 0x28, size 0x4
    float lifetime; // offset 0x2C, size 0x4
    float A; // offset 0x30, size 0x4
};
// total size: 0x10
class zParticlePoolType : public zParticleBase {};
// total size: 0x4
class zParticleSystemHelper : public zParticleSystemHelperEmitter {
    // Members
public:
    signed int particle_batch_id; // offset 0x0, size 0x4
};
// total size: 0x40
class zParticleUVStaticTile : public zParticleEmitterConeSurface {
    // Members
public:
    float u; // offset 0x38, size 0x4
    float v; // offset 0x3C, size 0x4
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
// total size: 0x2C
class EmitState : public EmitState {
    // Members
public:
    class xVec3 travel_dir; // offset 0x4, size 0xC
    class xVec3 start; // offset 0x10, size 0xC
    float life; // offset 0x1C, size 0x4
    float life_rand; // offset 0x20, size 0x4
    float dist; // offset 0x24, size 0x4
    float dist_rand; // offset 0x28, size 0x4
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x40
class padded_particle {
    // Members
public:
    union { // inferred
        class zParticleEmitterConeVolume p; // offset 0x0, size 0x38
        char padding[64]; // offset 0x0, size 0x40
    };
};
// total size: 0x4
class zParticleSystemHelper : public zParticleSystemHelperEmitter {
    // Members
public:
    signed int particle_batch_id; // offset 0x0, size 0x4
};
// total size: 0x18
class zParticleRadiusPercent : public zParticlePoolType {
    // Members
public:
    float radius_start; // offset 0x10, size 0x4
    float radius_delta; // offset 0x14, size 0x4
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
// total size: 0x34
class zParticleColorWhiteFadeOut : public zParticleMoverGravity {};
// total size: 0x1
class zParticleSystemHelperEmitter {};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0xC
struct /* @anon7 */ {};
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
// total size: 0x30
class ptank_pool__pos_color_size_uv2 : public ptank_pool {
    // Members
public:
    class xVec3 * pos; // offset 0x20, size 0x4
    class xColor_tag * color; // offset 0x24, size 0x4
    class xVec2 * size; // offset 0x28, size 0x4
    class xVec2 * uv; // offset 0x2C, size 0x4
};
// total size: 0x3C
class zParticleMoverGravity : public zParticleRadiusPercent {
    // Members
public:
    class xVec3 start; // offset 0x18, size 0xC
    class xVec3 vel0; // offset 0x24, size 0xC
    float time_elapsed; // offset 0x30, size 0x4
    float lifetime; // offset 0x34, size 0x4
    float A; // offset 0x38, size 0x4
};
// total size: 0xC
class RegisterOnFirstEmitSystem : public zParticleSystemHelper {
    // Members
public:
    unsigned char registered; // offset 0x4, size 0x1
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
// total size: 0x1
class zParticleSystemHelperEmitter {};
// total size: 0x34
class zParticleEmitterConeVolume : public zParticleColorWhiteFadeOut {};
// total size: 0x8
class EmitState : public EmitState {
    // Members
public:
    float radius_start; // offset 0x0, size 0x4
    float radius_end; // offset 0x4, size 0x4
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
// total size: 0x3C
class zParticleColorWhiteOpaque : public zParticleMoverGravity {};
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
// total size: 0xC
class SparkSystem : public RegisterOnFirstEmitSystem {};
// total size: 0x4
class zParticleSystemHelper : public zParticleSystemHelperEmitter {
    // Members
public:
    signed int particle_batch_id; // offset 0x0, size 0x4
};
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
// total size: 0xC
class RegisterOnFirstEmitSystem : public zParticleSystemHelper {
    // Members
public:
    unsigned char registered; // offset 0x4, size 0x1
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
// total size: 0xC
struct /* @anon8 */ {};
// total size: 0x3C
class zParticleEmitterConeSurface : public zParticleColorWhiteOpaque {};
// total size: 0x40
class EmitState : public EmitState {
    // Members
public:
    class xVec3 dir; // offset 0x30, size 0xC
    float dir_random; // offset 0x3C, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0xC
struct /* @anon9 */ {};
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
// total size: 0x34
class EmitState : public EmitState {
    // Members
public:
    class xVec3 travel_dir; // offset 0x8, size 0xC
    float vel; // offset 0x14, size 0x4
    float vel_rand; // offset 0x18, size 0x4
    class xVec3 start; // offset 0x1C, size 0xC
    float life; // offset 0x28, size 0x4
    float life_rand; // offset 0x2C, size 0x4
    float gravity; // offset 0x30, size 0x4
};
// total size: 0xC
struct /* @anon10 */ {};
// total size: 0x1
class zParticleSystemHelperEmitter {};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x58
class EmitState : public EmitState {
    // Members
public:
    class xVec3 dir; // offset 0x2C, size 0xC
    class xVec3 plane_x; // offset 0x38, size 0xC
    class xVec3 plane_y; // offset 0x44, size 0xC
    float out; // offset 0x50, size 0x4
    float out_rand; // offset 0x54, size 0x4
};
// total size: 0x4
class zParticleSystemHelper : public zParticleSystemHelperEmitter {
    // Members
public:
    signed int particle_batch_id; // offset 0x0, size 0x4
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
// total size: 0x30
class EmitState : public EmitState {
    // Members
public:
    class xVec3 travel_dir; // offset 0x8, size 0xC
    class xVec3 start; // offset 0x14, size 0xC
    float life; // offset 0x20, size 0x4
    float life_rand; // offset 0x24, size 0x4
    float vel; // offset 0x28, size 0x4
    float vel_rand; // offset 0x2C, size 0x4
};
// total size: 0xC
struct /* @anon11 */ {};

/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047ED90 -> 0x0047EEBC
*/
// Range: 0x47ED90 -> 0x47EEBC
void zParticleFXCommon_SceneInit() {
    /* anonymous block */ {
        // Range: 0x47ED90 -> 0x47EEBC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047EEC0 -> 0x0047F320
*/
// Range: 0x47EEC0 -> 0x47F320
void zParticleFXCommon_EmitSparks(float num_particles /* r20 */, class xVec3 & pos /* r2 */, class xVec3 & normal /* r2 */, float vel_min /* r29+0xF0 */, float vel_vary /* r29+0xF0 */, float gravity /* r29 */, float angle /* r21 */, float life_min /* r29+0xF0 */, float life_vary /* r29+0xF0 */) {
    /* anonymous block */ {
        // Range: 0x47EEC0 -> 0x47F320
        class EmitState emit_state; // r29+0xA0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047F320 -> 0x0047F754
*/
// Range: 0x47F320 -> 0x47F754
void zParticleFXCommon_EmitLavaDrip(float & num_particles /* r17 */, class xVec3 & pos /* r2 */, class xVec3 & normal /* r2 */, float lifetime /* r29+0xD0 */) {
    /* anonymous block */ {
        // Range: 0x47F320 -> 0x47F754
        class EmitState emit_state; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047F770 -> 0x0047FBA8
*/
// Range: 0x47F770 -> 0x47FBA8
void zParticleFXCommon_EmitFlameCone(float num_particles /* r29 */, class xVec3 & pos /* r2 */, class xVec3 & normal /* r2 */, float vel /* r29+0xF0 */, float angle /* r20 */, float lifetime /* r29+0xF0 */) {
    /* anonymous block */ {
        // Range: 0x47F770 -> 0x47FBA8
        class EmitState emit_state; // r29+0x90
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0047FBB0 -> 0x004800F0
*/
// Range: 0x47FBB0 -> 0x4800F0
void zParticleFXCommon_EmitRubble(float num_particles /* r29+0xAC */, class xVec3 & pos /* r2 */, class xVec3 & normal /* r2 */, float vel /* r29+0x120 */, float gravity /* r30 */, float angle /* r29+0x120 */, float lifetime /* r29+0x120 */, float start_radius /* r20 */, float end_radius /* r29 */) {
    /* anonymous block */ {
        // Range: 0x47FBB0 -> 0x4800F0
        class EmitState emit_state; // r29+0xB0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004800F0 -> 0x00480768
*/
// Range: 0x4800F0 -> 0x480768
void zParticleFXCommon_EmitEnergyPulse(float num_particles /* r29+0xDC */, class xVec3 & pos /* r2 */, class xVec3 & dir /* r2 */, float base_radius /* r29+0x150 */, float base_time /* r29+0x150 */, float base_rise /* r29+0x150 */) {
    /* anonymous block */ {
        // Range: 0x4800F0 -> 0x480768
        class EmitState emit_state; // r29+0xF0
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00480770 -> 0x004807E0
*/
// Range: 0x480770 -> 0x4807E0
// this: r16
void SparkSystem::Register() {
    /* anonymous block */ {
        // Range: 0x480770 -> 0x4807E0
        class RwTexture * texture; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00480B60 -> 0x00480BD4
*/
// Range: 0x480B60 -> 0x480BD4
// this: r16
void LavaDripSystem::Register() {
    /* anonymous block */ {
        // Range: 0x480B60 -> 0x480BD4
        class RwTexture * texture; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00480F60 -> 0x00480FD0
*/
// Range: 0x480F60 -> 0x480FD0
// this: r16
void SmokePuffSystem::Register() {
    /* anonymous block */ {
        // Range: 0x480F60 -> 0x480FD0
        class RwTexture * texture; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004813A0 -> 0x00481414
*/
// Range: 0x4813A0 -> 0x481414
// this: r16
void FlameConeSystem::Register() {
    /* anonymous block */ {
        // Range: 0x4813A0 -> 0x481414
        class RwTexture * texture; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00481420 -> 0x00481494
*/
// Range: 0x481420 -> 0x481494
// this: r16
void RubbleSystem::Register() {
    /* anonymous block */ {
        // Range: 0x481420 -> 0x481494
        class RwTexture * texture; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zParticleFXCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004817E0 -> 0x00481858
*/
// Range: 0x4817E0 -> 0x481858
// this: r16
void EnergyPulseSystem::Register() {
    /* anonymous block */ {
        // Range: 0x4817E0 -> 0x481858
        class RwTexture * texture; // r2
    }
}


