/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int g_AshAnimationsCount; // size: 0x4, address: 0x4A4EA0
signed int g_BossAnimationsCount; // size: 0x4, address: 0x4A4EA4
signed int g_SNPCAnimationsCount; // size: 0x4, address: 0x4A4EA8
signed int g_DNPCAnimationsCount; // size: 0x4, address: 0x4A4EAC
class tagXAnimSet g_AshAnimations[1]; // size: 0x14, address: 0xAACBA0
class tagXAnimSet g_BossAnimations[2]; // size: 0x28, address: 0xAACBC0
class tagXAnimSet g_SNPCAnimations[5]; // size: 0x64, address: 0xAACBF0
class tagXAnimSet g_DNPCAnimations[5]; // size: 0x64, address: 0xAACC60
static class tagXAnimControl g_activeAnimations[50]; // size: 0x960, address: 0xAACCD0
class tagxFXEntry * g_fxTable; // size: 0x4, address: 0x0
static unsigned int interpreterMethodVFX; // size: 0x4, address: 0x4A4EB0
static unsigned int interpreterMethodVFXRumble; // size: 0x4, address: 0x4A4EB4
static unsigned int interpreterMethodSFX; // size: 0x4, address: 0x4A4EB8
static signed int pendingHeightReset; // size: 0x4, address: 0x4A4EBC
static class _xActor * pendingHeightActor; // size: 0x4, address: 0x4A4EC0
static float pendingHeight; // size: 0x4, address: 0x4A4EC4
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
class tagxActorDBData * gadb; // size: 0x4, address: 0x4A4658
signed int gPlayerType; // size: 0x4, address: 0x4A4E00
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
// total size: 0x18
class _xActor {
    // Members
public:
    void * m_resource; // offset 0x0, size 0x4
    class iActorRuntime * m_runtime; // offset 0x4, size 0x4
    unsigned int m_flags; // offset 0x8, size 0x4
    class tagxStateMgr * m_state; // offset 0xC, size 0x4
    unsigned short m_objectType; // offset 0x10, size 0x2
    unsigned short m_actorID; // offset 0x12, size 0x2
    void * m_texture; // offset 0x14, size 0x4
};
// total size: 0x18
class tagxState {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    signed int m_animState; // offset 0x4, size 0x4
    unsigned char * m_activeJoints; // offset 0x8, size 0x4
    signed short m_calloutNumber; // offset 0xC, size 0x2
    unsigned char m_enterEvent; // offset 0xE, size 0x1
    unsigned char m_exitEvent; // offset 0xF, size 0x1
    signed int m_linkCount; // offset 0x10, size 0x4
    class tagxStateLink * m_links; // offset 0x14, size 0x4
};
// total size: 0x6
class _FCinfo {
    // Members
public:
    unsigned short nidx[3]; // offset 0x0, size 0x6
};
// total size: 0x20
class xNavLink {
    // Members
public:
    unsigned char m_flags; // offset 0x0, size 0x1
    unsigned char m_countLocked; // offset 0x1, size 0x1
    unsigned char m_countOccupied; // offset 0x2, size 0x1
    unsigned char m_unused2; // offset 0x3, size 0x1
    unsigned int m_unused; // offset 0x4, size 0x4
    float m_distance; // offset 0x8, size 0x4
    class Vector3D m_dir; // offset 0xC, size 0xC
    class xNavPoint * m_linkTo; // offset 0x18, size 0x4
    class xNavPoint * m_linkFrom; // offset 0x1C, size 0x4
};
// total size: 0x30
class tagXAnimControl {
    // Members
public:
    unsigned short m_active; // offset 0x0, size 0x2
    unsigned char m_state; // offset 0x2, size 0x1
    unsigned char m_chainState; // offset 0x3, size 0x1
    class tagXAnimControl * m_chainFrom; // offset 0x4, size 0x4
    class tagXAnim * m_anim; // offset 0x8, size 0x4
    void * m_char; // offset 0xC, size 0x4
    signed short m_prevFrame; // offset 0x10, size 0x2
    signed short m_frame; // offset 0x12, size 0x2
    signed short m_incr; // offset 0x14, size 0x2
    signed short m_doneHandled; // offset 0x16, size 0x2
    unsigned char * m_activeJoints; // offset 0x18, size 0x4
    class Vector3D m_startPosition; // offset 0x1C, size 0xC
    class tagXAnimControl * m_next; // offset 0x28, size 0x4
    unsigned char m_startEvent; // offset 0x2C, size 0x1
    unsigned char m_endEvent; // offset 0x2D, size 0x1
    unsigned char m_loopEvent; // offset 0x2E, size 0x1
    unsigned char pad; // offset 0x2F, size 0x1
};
// total size: 0x20
class _p2Geom {
    // Members
public:
    unsigned int m_meshCount; // offset 0x0, size 0x4
    class tagP2Mesh * m_mesh; // offset 0x4, size 0x4
    class _iRenderEffects effects; // offset 0x8, size 0x14
    class _RpClump * m_clump; // offset 0x1C, size 0x4
};
// total size: 0x2C
class xNavPoint {
    // Members
public:
    unsigned int m_linkCount; // offset 0x0, size 0x4
    class xNavLink * m_link; // offset 0x4, size 0x4
    class Vector3D m_pos; // offset 0x8, size 0xC
    float m_cost; // offset 0x14, size 0x4
    float m_heuristic; // offset 0x18, size 0x4
    float m_f; // offset 0x1C, size 0x4
    class xNavPoint * m_parent; // offset 0x20, size 0x4
    unsigned short m_flags; // offset 0x24, size 0x2
    unsigned short m_occupiedCount; // offset 0x26, size 0x2
    unsigned int m_unused; // offset 0x28, size 0x4
};
// total size: 0x8
class tagXAnim {
    // Members
public:
    class tagiAnimResource * m_resource; // offset 0x0, size 0x4
    class tagiAnimRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x38
class tagP2Mesh {
    // Members
public:
    signed int m_vertexCount; // offset 0x0, size 0x4
    class tagP2VERTEX * m_vertex; // offset 0x4, size 0x4
    class tagP2VERTEX * m_neutralPose0; // offset 0x8, size 0x4
    class tagP2MeshVertex * m_neutralPose1; // offset 0xC, size 0x4
    class tagP2Weight * m_joints; // offset 0x10, size 0x4
    signed int m_indexCount; // offset 0x14, size 0x4
    unsigned short * m_index; // offset 0x18, size 0x4
    signed int m_visible; // offset 0x1C, size 0x4
    class _FCinfo * fc; // offset 0x20, size 0x4
    class Vector3D * fnorm; // offset 0x24, size 0x4
    class Vector3D * m_vnorm; // offset 0x28, size 0x4
    class Vector4D * m_vtnorm; // offset 0x2C, size 0x4
    class tagiMesh * m_next; // offset 0x30, size 0x4
    signed int m_normalsBuilt; // offset 0x34, size 0x4
};
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x28
class tagiAnimResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    unsigned int m_flags; // offset 0x4, size 0x4
    unsigned short m_loopStart; // offset 0x8, size 0x2
    unsigned short m_loopEnd; // offset 0xA, size 0x2
    unsigned short m_introStart; // offset 0xC, size 0x2
    unsigned short m_introEnd; // offset 0xE, size 0x2
    unsigned short m_exitStart; // offset 0x10, size 0x2
    unsigned short m_exitEnd; // offset 0x12, size 0x2
    unsigned short m_frameCount; // offset 0x14, size 0x2
    unsigned short m_jointCount; // offset 0x16, size 0x2
    unsigned short m_vfxCount; // offset 0x18, size 0x2
    unsigned short m_sfxCount; // offset 0x1A, size 0x2
    class tagiAnimFrame * m_joints; // offset 0x1C, size 0x4
    class _iVFXResource * m_vfx; // offset 0x20, size 0x4
    class _iSFXResource * m_sfx; // offset 0x24, size 0x4
};
// total size: 0x20
class _RpClump {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLinkList atomicList; // offset 0x8, size 0x8
    class _RwLLLink inWorldLink; // offset 0x10, size 0x8
    class _RpClump * (* callback)(class _RpClump *, void *); // offset 0x18, size 0x4
    unsigned short renderFrame; // offset 0x1C, size 0x2
};
// total size: 0x18
class tagiAnimFrame {
    // Members
public:
    float * m_tx; // offset 0x0, size 0x4
    float * m_ty; // offset 0x4, size 0x4
    float * m_tz; // offset 0x8, size 0x4
    float * m_rx; // offset 0xC, size 0x4
    float * m_ry; // offset 0x10, size 0x4
    float * m_rz; // offset 0x14, size 0x4
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x4
class tagxFXEntry {
    // Members
public:
    class tagXAnim * m_anim; // offset 0x0, size 0x4
};
// total size: 0x14
class tagP2VERTEX {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float tu; // offset 0xC, size 0x4
    float tv; // offset 0x10, size 0x4
};
// total size: 0xC
class tagxPadAction {
    // Members
public:
    unsigned int m_action; // offset 0x0, size 0x4
    unsigned short m_button; // offset 0x4, size 0x2
    unsigned short m_status; // offset 0x6, size 0x2
    unsigned char pad; // offset 0x8, size 0x1
    unsigned char m_analogActive; // offset 0x9, size 0x1
    signed char m_analogXValue; // offset 0xA, size 0x1
    signed char m_analogYValue; // offset 0xB, size 0x1
};
// total size: 0xC
class tagP2MeshVertex {
    // Members
public:
    float m_x; // offset 0x0, size 0x4
    float m_y; // offset 0x4, size 0x4
    float m_z; // offset 0x8, size 0x4
};
// total size: 0x8
class tagiAnimRuntime {
    // Members
public:
    void * m_sfx; // offset 0x0, size 0x4
    void * m_vfx; // offset 0x4, size 0x4
};
// total size: 0xC
class tagP2Weight {
    // Members
public:
    unsigned short m_joint0; // offset 0x0, size 0x2
    unsigned short m_joint1; // offset 0x2, size 0x2
    float m_weight0; // offset 0x4, size 0x4
    float m_weight1; // offset 0x8, size 0x4
};
// total size: 0x4
class tagxStateLink {
    // Members
public:
    unsigned char m_command; // offset 0x0, size 0x1
    unsigned char m_flags; // offset 0x1, size 0x1
    unsigned short m_state; // offset 0x2, size 0x2
};
// total size: 0x96C
class tagxActorDBData {
    // Members
public:
    class _xActor m_ash[1]; // offset 0x0, size 0x18
    class _xActor m_skullBat[4]; // offset 0x18, size 0x60
    class _xActor m_deadite[4]; // offset 0x78, size 0x60
    class _xActor m_treeBoss[1]; // offset 0xD8, size 0x18
    class _xActor m_skeleton[4]; // offset 0xF0, size 0x60
    class _xActor m_troopKnife[4]; // offset 0x150, size 0x60
    class _xActor m_troopClaw[4]; // offset 0x1B0, size 0x60
    class _xActor m_troopRange[4]; // offset 0x210, size 0x60
    class _xActor m_troopLeaderBoss[1]; // offset 0x270, size 0x18
    class _xActor m_hellbillyFat[4]; // offset 0x288, size 0x60
    class _xActor m_hellbillyThin[4]; // offset 0x2E8, size 0x60
    class _xActor m_demonPig[4]; // offset 0x348, size 0x60
    class _xActor m_matriarchBoss[1]; // offset 0x3A8, size 0x18
    class _xActor m_grandma[1]; // offset 0x3C0, size 0x18
    class _xActor m_allard[1]; // offset 0x3D8, size 0x18
    class _xActor m_deadAshBoss[1]; // offset 0x3F0, size 0x18
    class _xActor m_annieZombieBoss[1]; // offset 0x408, size 0x18
    class _xActor m_badAsh[1]; // offset 0x420, size 0x18
    class _xActor m_jenny[1]; // offset 0x438, size 0x18
    class _xActor m_evilHand[1]; // offset 0x450, size 0x18
    class _xActor m_warriorCultist[4]; // offset 0x468, size 0x60
    class _xActor m_guildMember[4]; // offset 0x4C8, size 0x60
    class _xActor m_merchant[4]; // offset 0x528, size 0x60
    class _xActor m_alzeez[1]; // offset 0x588, size 0x18
    class _xActor m_wizardBoss[1]; // offset 0x5A0, size 0x18
    class _xActor m_mudGolemBoss[1]; // offset 0x5B8, size 0x18
    class _xActor m_armorySkeleton[4]; // offset 0x5D0, size 0x60
    class _xActor m_armoryBoss[1]; // offset 0x630, size 0x18
    class _xActor m_invisibleMen[4]; // offset 0x648, size 0x60
    class _xActor m_netherPet[4]; // offset 0x6A8, size 0x60
    class _xActor m_elderBeast[2]; // offset 0x708, size 0x30
    class _xActor m_cthulhuBoss[1]; // offset 0x738, size 0x18
    class _xActor m_treeArm[1]; // offset 0x750, size 0x18
    class _xActor m_headlessSkeleton[1]; // offset 0x768, size 0x18
    class _xActor m_netherPet2[4]; // offset 0x780, size 0x60
    class _xActor m_netherPet3[4]; // offset 0x7E0, size 0x60
    class _xActor m_captain[1]; // offset 0x840, size 0x18
    class _xActor m_pumpKeeper[1]; // offset 0x858, size 0x18
    class _xActor * m_p[40]; // offset 0x870, size 0xA0
    signed char m_plimit[40]; // offset 0x910, size 0x28
    class _xActor * m_active[13]; // offset 0x938, size 0x34
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0x8
class _RwLinkList {
    // Members
public:
    class _RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x8
class tagXAnimTrigger {
    // Members
public:
    unsigned short m_frame; // offset 0x0, size 0x2
    unsigned short m_type; // offset 0x2, size 0x2
    unsigned int m_data; // offset 0x4, size 0x4
};
// total size: 0x44
class tagxStateThread {
    // Members
public:
    class tagxState * m_state; // offset 0x0, size 0x4
    class tagXAnimControl * m_animCtl; // offset 0x4, size 0x4
    signed int m_deferredWaiting; // offset 0x8, size 0x4
    class tagxPadAction m_deferred; // offset 0xC, size 0xC
    signed int m_rbp; // offset 0x18, size 0x4
    class tagxState * m_ring[10]; // offset 0x1C, size 0x28
};
// total size: 0x10
class Vector4D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float t; // offset 0xC, size 0x4
};
// total size: 0x14
class _iSFXResource {
    // Members
public:
    unsigned int m_id; // offset 0x0, size 0x4
    unsigned int m_joint; // offset 0x4, size 0x4
    unsigned char m_frame; // offset 0x8, size 0x1
    unsigned char m_vol; // offset 0x9, size 0x1
    unsigned char m_freq; // offset 0xA, size 0x1
    unsigned char m_valid; // offset 0xB, size 0x1
    unsigned int m_sndID; // offset 0xC, size 0x4
    unsigned char m_flag; // offset 0x10, size 0x1
    unsigned char m_pad[3]; // offset 0x11, size 0x3
};
// total size: 0x134
class iActorRuntime {
    // Members
public:
    class tagXAnimControl * m_active; // offset 0x0, size 0x4
    signed int m_available; // offset 0x4, size 0x4
    float m_fovr; // offset 0x8, size 0x4
    float m_bradius; // offset 0xC, size 0x4
    unsigned char m_onMaterial[4]; // offset 0x10, size 0x4
    signed int m_routeID; // offset 0x14, size 0x4
    signed int m_routePosition; // offset 0x18, size 0x4
    class xNavPoint * m_routeNavPoint; // offset 0x1C, size 0x4
    signed int m_health; // offset 0x20, size 0x4
    signed int m_sightFOV; // offset 0x24, size 0x4
    signed int m_sight; // offset 0x28, size 0x4
    signed int m_quiet; // offset 0x2C, size 0x4
    signed int m_canFly; // offset 0x30, size 0x4
    signed int m_canStrafe; // offset 0x34, size 0x4
    class Vector3D m_memPosition[5]; // offset 0x38, size 0x3C
    signed int m_groupID; // offset 0x74, size 0x4
    signed int m_groupIgnore; // offset 0x78, size 0x4
    class _p2Geom m_geom; // offset 0x7C, size 0x20
    void * m_skeleton; // offset 0x9C, size 0x4
    void * m_data; // offset 0xA0, size 0x4
    class tagxPhysicsObject m_phys; // offset 0xA4, size 0x88
    float m_lookat; // offset 0x12C, size 0x4
    signed int m_haveSpottedAsh; // offset 0x130, size 0x4
};
// total size: 0x0
class tagiMesh {};
// total size: 0x20C
class tagxStateMgr {
    // Members
public:
    signed int m_animationBasedMovement; // offset 0x0, size 0x4
    signed int m_player; // offset 0x4, size 0x4
    class tagxState * m_states; // offset 0x8, size 0x4
    class tagxState * m_current; // offset 0xC, size 0x4
    void (* m_triggerFunc)(class _xActor *, signed int, class tagXAnim *, class tagXAnimTrigger *); // offset 0x10, size 0x4
    signed int m_threadActive[7]; // offset 0x14, size 0x1C
    class tagxStateThread m_thread[7]; // offset 0x30, size 0x1DC
};
// total size: 0x14
class tagXAnimSet {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    unsigned int m_animationCount; // offset 0x4, size 0x4
    class tagXAnim * m_animations; // offset 0x8, size 0x4
    unsigned int m_readyCount; // offset 0xC, size 0x4
    class tagXAnim * m_ready; // offset 0x10, size 0x4
};
// total size: 0x24
class _iVFXResource {
    // Members
public:
    unsigned short m_frame; // offset 0x0, size 0x2
    unsigned char m_id; // offset 0x2, size 0x1
    unsigned char m_valid; // offset 0x3, size 0x1
    unsigned int m_joint; // offset 0x4, size 0x4
    class Vector3D m_a; // offset 0x8, size 0xC
    class Vector3D m_b; // offset 0x14, size 0xC
    unsigned char m_flag; // offset 0x20, size 0x1
    unsigned char m_pad[3]; // offset 0x21, size 0x3
};
// total size: 0x88
class tagxPhysicsObject {
    // Members
public:
    class Vector3D m_ang; // offset 0x0, size 0xC
    class Vector3D m_angVel; // offset 0xC, size 0xC
    class Vector3D m_pos; // offset 0x18, size 0xC
    class Vector3D m_vel; // offset 0x24, size 0xC
    class Vector3D m_acc; // offset 0x30, size 0xC
    class Vector3D m_vel_inst; // offset 0x3C, size 0xC
    class Vector3D m_scale; // offset 0x48, size 0xC
    class Vector3D m_motion; // offset 0x54, size 0xC
    float m_cbradius; // offset 0x60, size 0x4
    unsigned char m_flag; // offset 0x64, size 0x1
    unsigned char m_hitResult; // offset 0x65, size 0x1
    unsigned short m_shadow_radius; // offset 0x66, size 0x2
    unsigned char m_type; // offset 0x68, size 0x1
    unsigned char m_hitFlags; // offset 0x69, size 0x1
    unsigned short m_hitTriggerNoWalkID; // offset 0x6A, size 0x2
    class Vector3D m_hitVector; // offset 0x6C, size 0xC
    unsigned char m_hitActorType; // offset 0x78, size 0x1
    unsigned char m_hitTriggerWalkID; // offset 0x79, size 0x1
    unsigned char m_hitActorID; // offset 0x7A, size 0x1
    unsigned char m_hitObjectID; // offset 0x7B, size 0x1
    float m_floorHeight; // offset 0x7C, size 0x4
    unsigned int m_floorIdx; // offset 0x80, size 0x4
    unsigned int m_floorMask; // offset 0x84, size 0x4
};
// total size: 0x14
class _iRenderEffects {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned char colorA[4]; // offset 0x4, size 0x4
    unsigned char colorB[4]; // offset 0x8, size 0x4
    unsigned char litcolor[4]; // offset 0xC, size 0x4
    signed char abr; // offset 0x10, size 0x1
    signed char abrB; // offset 0x11, size 0x1
    unsigned char fadetime; // offset 0x12, size 0x1
    unsigned char fadectr; // offset 0x13, size 0x1
};
// total size: 0x2C
class xMessage {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    signed int senderType; // offset 0x4, size 0x4
    signed int senderId; // offset 0x8, size 0x4
    signed int recipientType; // offset 0xC, size 0x4
    signed int recipientId; // offset 0x10, size 0x4
    unsigned int message; // offset 0x14, size 0x4
    unsigned int data1; // offset 0x18, size 0x4
    unsigned int data2; // offset 0x1C, size 0x4
    unsigned int data3; // offset 0x20, size 0x4
    unsigned int data4; // offset 0x24, size 0x4
    float deliveryTime; // offset 0x28, size 0x4
};
// total size: 0x40
class tagMATRIX {
    // Members
public:
    float _11; // offset 0x0, size 0x4
    float _12; // offset 0x4, size 0x4
    float _13; // offset 0x8, size 0x4
    float _14; // offset 0xC, size 0x4
    float _21; // offset 0x10, size 0x4
    float _22; // offset 0x14, size 0x4
    float _23; // offset 0x18, size 0x4
    float _24; // offset 0x1C, size 0x4
    float _31; // offset 0x20, size 0x4
    float _32; // offset 0x24, size 0x4
    float _33; // offset 0x28, size 0x4
    float _34; // offset 0x2C, size 0x4
    float _41; // offset 0x30, size 0x4
    float _42; // offset 0x34, size 0x4
    float _43; // offset 0x38, size 0x4
    float _44; // offset 0x3C, size 0x4
};
// total size: 0x8
class _RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003642E0 -> 0x0036436C
*/
// Range: 0x3642E0 -> 0x36436C
void xAnimPostIdle() {
    /* anonymous block */ {
        // Range: 0x3642E0 -> 0x36436C
        class tagxPadAction action; // r29+0x30
        class _xActor * a; // r2
        class tagXAnimControl * act; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00364370 -> 0x00364AB0
*/
// Range: 0x364370 -> 0x364AB0
void xAnimIdle() {
    /* anonymous block */ {
        // Range: 0x364370 -> 0x364AB0
        signed int assetID; // r20
        class _xActor * a; // r19
        class tagXAnimTrigger trigger; // r29+0xF8
        class xMessage theMessage; // r29+0x90
        class _xActor * xa; // r3
        class _xActor * xa; // r2
        class xMessage theMessage; // r29+0x60
        class Vector3D rot; // r29+0xE8
        class Vector3D trans2; // r29+0xD8
        class Vector3D trans1; // r29+0xC8
        signed int endAnim; // r5
        class tagiAnimResource * ar; // r18
        class tagXAnim * anim; // r2
        class tagXAnimControl * act; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00364AB0 -> 0x00365274
*/
// Range: 0x364AB0 -> 0x365274
void xAnimIdleFX(void * actorVoid /* r21 */, class tagXAnim * anim /* r17 */, signed int frame /* r23 */) {
    /* anonymous block */ {
        // Range: 0x364AB0 -> 0x365274
        class Vector3D v2; // r29+0x188
        class Vector3D v1; // r29+0x178
        class tagMATRIX pm; // r29+0x130
        class tagMATRIX m; // r29+0xF0
        class Vector3D * v2; // r20
        class Vector3D * v1; // r19
        float dur; // r20
        float right; // r21
        float left; // r1
        signed int scriptHandled; // r29+0x19C
        class _iVFXResource * idx; // r18
        signed int scriptHandled; // r29+0x198
        class _iSFXResource * idx; // r18
        signed int matrixBuilt; // r30
        signed int i; // r17
        class tagiAnimResource * r; // r22
        class iActorRuntime * ar; // r16
        class _xActor * actor; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365280 -> 0x0036562C
*/
// Range: 0x365280 -> 0x36562C
void xAnimDebug(signed int mode /* r18 */) {
    /* anonymous block */ {
        // Range: 0x365280 -> 0x36562C
        char stateName[32]; // r29+0x170
        char jointMask[32]; // r29+0x150
        signed int j; // r5
        signed int i; // r17
        char name[256]; // r29+0x50
        class tagiAnimResource * ar; // r2
        class tagXAnim * anim; // r19
        class tagXAnimControl * act; // r16
        char buffer[32]; // @ 0x00AAD630
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365630 -> 0x00365810
*/
// Range: 0x365630 -> 0x365810
void doBulletCheck(class _xActor * actor /* r20 */) {
    /* anonymous block */ {
        // Range: 0x365630 -> 0x365810
        class xMessage theMessage; // r29+0x80
        class _xActor * npc; // r19
        signed int i; // r18
        signed int fov; // r17
        signed int bulletRange; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365810 -> 0x003658C4
*/
// Range: 0x365810 -> 0x3658C4
void xAnimActorSetNewPosition(void * actor /* r2 */) {
    /* anonymous block */ {
        // Range: 0x365810 -> 0x3658C4
        unsigned int i; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003658D0 -> 0x00365974
*/
// Range: 0x3658D0 -> 0x365974
void xAnimResetActor(void * actor /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3658D0 -> 0x365974
        signed int i; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365980 -> 0x003659F4
*/
// Range: 0x365980 -> 0x3659F4
void xAnimDeleteActive(class tagXAnimControl * curr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x365980 -> 0x3659F4
        class _xActor * xa; // r3
        class xMessage theMessage; // r29+0x20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365A00 -> 0x00365A0C
*/
// Range: 0x365A00 -> 0x365A0C
void xAnimChangeActive(class tagXAnimControl * curr /* r2 */, signed int state /* r2 */) {
    /* anonymous block */ {
        // Range: 0x365A00 -> 0x365A0C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365A10 -> 0x00365B50
*/
// Range: 0x365A10 -> 0x365B50
class tagXAnimControl * xAnimChainActive(class tagXAnimControl * curr /* r17 */, class tagXAnim * anim /* r16 */, unsigned char * activeJoints /* r2 */, signed int state /* r18 */, unsigned int startEvent /* r2 */, unsigned int endEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x365A10 -> 0x365B50
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365B50 -> 0x00365CD4
*/
// Range: 0x365B50 -> 0x365CD4
void xAnimReplaceActive(class tagXAnimControl * curr /* r22 */, class tagXAnim * anim /* r21 */, unsigned char * activeJoints /* r20 */, signed int state /* r19 */, unsigned int enterEvent /* r18 */, unsigned int exitEvent /* r17 */) {
    /* anonymous block */ {
        // Range: 0x365B50 -> 0x365CD4
        class xMessage theMessage; // r29+0xB0
        class xMessage theMessage; // r29+0x80
        class _xActor * xa; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365CE0 -> 0x00365F90
*/
// Range: 0x365CE0 -> 0x365F90
class tagXAnimControl * xAnimAddActive(class tagXAnim * anim /* r22 */, unsigned char * activeJoints /* r21 */, signed int state /* r20 */, void * c /* r19 */, signed int push /* r2 */, unsigned int startEvent /* r18 */, unsigned int endEvent /* r17 */) {
    /* anonymous block */ {
        // Range: 0x365CE0 -> 0x365F90
        class xMessage theMessage; // r29+0xA0
        class _xActor * xa; // r3
        class tagXAnimControl * act; // r16
        signed int lastFound; // r5
        signed int j; // r4
        signed int i; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00365F90 -> 0x00366348
*/
// Range: 0x365F90 -> 0x366348
class tagXAnim * xAnimFind(unsigned int assetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x365F90 -> 0x366348
        signed int checkIdOnly; // r7
        signed int idOnly; // r6
        signed int p; // r4
        signed int i; // r9
        signed int count; // r8
        class tagXAnim * a; // r2
        class tagXAnim * list; // r5
        signed int assetType; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366350 -> 0x00366528
*/
// Range: 0x366350 -> 0x366528
void xAnimLevelReset() {
    /* anonymous block */ {
        // Range: 0x366350 -> 0x366528
        class _xActor * xa; // r4
        signed int i; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366530 -> 0x00366544
*/
// Range: 0x366530 -> 0x366544
void xAnimReInitializeInterpreter() {
    /* anonymous block */ {
        // Range: 0x366530 -> 0x366544
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00366550 -> 0x003667D8
*/
// Range: 0x366550 -> 0x3667D8
void xAnimInit() {
    /* anonymous block */ {
        // Range: 0x366550 -> 0x3667D8
        signed int i; // r3
    }
}


