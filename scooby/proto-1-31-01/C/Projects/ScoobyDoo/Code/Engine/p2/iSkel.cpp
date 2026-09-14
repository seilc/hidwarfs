/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSkel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
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
// total size: 0x50
class tagiJointResource {
    // Members
public:
    class tagMATRIX m_orientMatrix; // offset 0x0, size 0x40
    class Vector3D m_home; // offset 0x40, size 0xC
    unsigned int m_parent; // offset 0x4C, size 0x4
};
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
// total size: 0xC
class tagP2MeshVertex {
    // Members
public:
    float m_x; // offset 0x0, size 0x4
    float m_y; // offset 0x4, size 0x4
    float m_z; // offset 0x8, size 0x4
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
// total size: 0x8
class xSkel {
    // Members
public:
    class tagiSkelResource * m_resource; // offset 0x0, size 0x4
    class tagiSkelRuntime * m_runtime; // offset 0x4, size 0x4
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
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x8
class tagXAnim {
    // Members
public:
    class tagiAnimResource * m_resource; // offset 0x0, size 0x4
    class tagiAnimRuntime * m_runtime; // offset 0x4, size 0x4
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
// total size: 0x8
class tagXAnimTrigger {
    // Members
public:
    unsigned short m_frame; // offset 0x0, size 0x2
    unsigned short m_type; // offset 0x2, size 0x2
    unsigned int m_data; // offset 0x4, size 0x4
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
// total size: 0xA4
class tagiJointRuntime {
    // Members
public:
    float m_tx; // offset 0x0, size 0x4
    float m_ty; // offset 0x4, size 0x4
    float m_tz; // offset 0x8, size 0x4
    float m_rx; // offset 0xC, size 0x4
    float m_ry; // offset 0x10, size 0x4
    float m_rz; // offset 0x14, size 0x4
    class Vector3D m_worldHome; // offset 0x18, size 0xC
    class tagMATRIX m_localMatrix; // offset 0x24, size 0x40
    class tagMATRIX m_worldMatrix; // offset 0x64, size 0x40
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
// total size: 0xC
class tagP2Weight {
    // Members
public:
    unsigned short m_joint0; // offset 0x0, size 0x2
    unsigned short m_joint1; // offset 0x2, size 0x2
    float m_weight0; // offset 0x4, size 0x4
    float m_weight1; // offset 0x8, size 0x4
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
// total size: 0x8
class tagiAnimRuntime {
    // Members
public:
    void * m_sfx; // offset 0x0, size 0x4
    void * m_vfx; // offset 0x4, size 0x4
};
// total size: 0x4
class tagxStateLink {
    // Members
public:
    unsigned char m_command; // offset 0x0, size 0x1
    unsigned char m_flags; // offset 0x1, size 0x1
    unsigned short m_state; // offset 0x2, size 0x2
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
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x6
class _FCinfo {
    // Members
public:
    unsigned short nidx[3]; // offset 0x0, size 0x6
};
// total size: 0xC
class tagiSkelResource {
    // Members
public:
    unsigned int m_assetID; // offset 0x0, size 0x4
    unsigned int m_jointCount; // offset 0x4, size 0x4
    class tagiJointResource * m_joints; // offset 0x8, size 0x4
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
// total size: 0x4
class tagiSkelRuntime {
    // Members
public:
    class tagiJointRuntime * m_joints; // offset 0x0, size 0x4
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
// total size: 0x8
class _RwLinkList {
    // Members
public:
    class _RwLLLink link; // offset 0x0, size 0x8
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
// total size: 0x0
class tagiMesh {};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iSkel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0036FD80 -> 0x0036FD90
*/
// Range: 0x36FD80 -> 0x36FD90
void iSkelAssign(class _xActor * actor /* r2 */, class xSkel * skeleton /* r2 */) {
    /* anonymous block */ {
        // Range: 0x36FD80 -> 0x36FD90
    }
}


