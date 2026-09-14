/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int sParCmdListPoolCount; // size: 0x4, address: 0x4A4D18
static class tagParCmdList sParCmdListPool[50]; // size: 0x3E8, address: 0x4B9A00
static class tagParCmdList * sParCmdListDead; // size: 0x4, address: 0x4A4D1C
static unsigned int sParCmdPoolCount; // size: 0x4, address: 0x4A4D20
static class xParCmd sParCmdPool[250]; // size: 0x1388, address: 0x4B9DF0
static class xParCmd * sParCmdDead; // size: 0x4, address: 0x4A4D24
class tagParCmd_Header sParCmdHeader[2]; // size: 0x8, address: 0x4BB178
class tagParCmd_Bounce sParCmdBounce[10]; // size: 0x140, address: 0x4BB180
class tagParCmd_CopyVertexB sParCmdCopyVertexB[2]; // size: 0x8, address: 0x4BB2C0
class tagParCmd_Damping sParCmdDamping[2]; // size: 0x8, address: 0x4BB2C8
class tagParCmd_Explosion sParCmdExplosion[2]; // size: 0x40, address: 0x4BB2D0
class tagParCmd_Follow sParCmdFollow[2]; // size: 0x8, address: 0x4BB310
class tagParCmd_GravitateCmd sParCmdGravitate[2]; // size: 0x8, address: 0x4BB318
class tagParCmd_Jet sParCmdJet[2]; // size: 0x50, address: 0x4BB320
class tagParCmd_Move sParCmdMove[37]; // size: 0x128, address: 0x4BB370
class tagParCmd_OrbitLine sParCmdOrbitLine[2]; // size: 0x8, address: 0x4BB498
class tagParCmd_OrbitPoint sParCmdOrbitPoint[1]; // size: 0x1C, address: 0x4BB4A0
class tagParCmd_RandomAccel sParCmdRandomAccel[2]; // size: 0x8, address: 0x4BB4C0
class tagParCmd_RandomDisplace sParCmdRandomDisplace[2]; // size: 0x20, address: 0x4BB4D0
class tagParCmd_RandomVelocity sParCmdRandomVelocity[2]; // size: 0x8, address: 0x4BB4F0
class tagParCmd_Restore sParCmdRestore[2]; // size: 0x8, address: 0x4BB4F8
class tagParCmd_Sink sParCmdSink[2]; // size: 0x8, address: 0x4BB500
class tagParCmd_SinkVelocity sParCmdSinkVelocity[2]; // size: 0x8, address: 0x4BB508
class tagParCmd_Source sParCmdSource[2]; // size: 0x8, address: 0x4BB510
class tagParCmd_TargetColor sParCmdTargetColor[2]; // size: 0x18, address: 0x4BB520
class tagParCmd_TargetSize sParCmdTargetSize[2]; // size: 0x8, address: 0x4BB538
class tagParCmd_Vortex sParCmdVortex[2]; // size: 0x8, address: 0x4BB540
class tagParCmd_Friction sParCmdFriction[2]; // size: 0x20, address: 0x4BB550
class tagParCmd_KillSlow sParCmdKillSlow[2]; // size: 0x20, address: 0x4BB570
class tagParCmd_KillOld sParCmdKillOld[37]; // size: 0x128, address: 0x4BB590
class tagParCmd_Accelerate sParCmdAccelerate[37]; // size: 0x378, address: 0x4BB6C0
class tagParCmd_Emitter sParCmdEmitter[47]; // size: 0x154C, address: 0x4BBA40
class tagParCmd_KillCmd sParCmdKillCmd[2]; // size: 0x18, address: 0x4BCF90
class tagParCmd_DisableCmd sParCmdDisableCmd[2]; // size: 0x18, address: 0x4BCFB0
class tagParCmd_EnableCmd sParCmdEnableCmd[2]; // size: 0x8, address: 0x4BCFC8
class tagParCmd_LimitVelocity sParCmdLimitVelocity[2]; // size: 0x20, address: 0x4BCFD0
class tagParCmd_KillBox sParCmdKillBox[2]; // size: 0x38, address: 0x4BCFF0
class tagParCmd_SpawnVFX sParCmdSpawnVFX[37]; // size: 0x1BC, address: 0x4BD030
class tagParCmd_KillPlane sParCmdKillPlane[5]; // size: 0x50, address: 0x4BD1F0
class tagParCmd_RotMove sParCmdRotMove[2]; // size: 0x8, address: 0x4BD240
class tagParCmd_Texture sParCmdTexture[37]; // size: 0x784, address: 0x4BD250
class tagParCmd_KillInvis sParCmdKillInvis[1]; // size: 0x4, address: 0x4A4D28
class tagParCmd_Turbulence sParCmdTurbulence[2]; // size: 0x38, address: 0x4BD9E0
class tagParCmd_ModulateColor sParCmdModulateColor[2]; // size: 0x10, address: 0x4BDA20
static signed int sParCmdDataInfo[38][2]; // size: 0x130, address: 0x449800
static void * sParCmdDataPool[38]; // size: 0x98, address: 0x449930
void (* gParCmdExeTable[38])(class xParCmd *, class tagxParSys *, unsigned int); // size: 0x98, address: 0x449760
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x18
class tagParCmd_Accelerate {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    class Vector3D m_acc; // offset 0x4, size 0xC
    unsigned int m_freq; // offset 0x10, size 0x4
    unsigned int m_freqTime; // offset 0x14, size 0x4
};
// total size: 0x4
class tagParCmd_Source {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x14
class xParCmd {
    // Members
public:
    unsigned char m_tag; // offset 0x0, size 0x1
    unsigned char m_flag; // offset 0x1, size 0x1
    signed short m_count; // offset 0x2, size 0x2
    void * m_method; // offset 0x4, size 0x4
    void * m_data; // offset 0x8, size 0x4
    class xParCmd * m_next; // offset 0xC, size 0x4
    class xParCmd * m_prev; // offset 0x10, size 0x4
};
// total size: 0x4
class tagParCmd_RandomAccel {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x4
class tagParCmd_CopyVertexB {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x34
class tagParCmd_Texture {
    // Members
public:
    float m_x1; // offset 0x0, size 0x4
    float m_y1; // offset 0x4, size 0x4
    float m_x2; // offset 0x8, size 0x4
    float m_y2; // offset 0xC, size 0x4
    signed char m_texBirth; // offset 0x10, size 0x1
    unsigned char m_texType; // offset 0x11, size 0x1
    unsigned char m_texAnim; // offset 0x12, size 0x1
    unsigned char m_texDir; // offset 0x13, size 0x1
    class Vector3D m_minVel; // offset 0x14, size 0xC
    signed short m_animCount; // offset 0x20, size 0x2
    signed short m_animWait; // offset 0x22, size 0x2
    float m_unitW; // offset 0x24, size 0x4
    float m_unitH; // offset 0x28, size 0x4
    float m_unitRW; // offset 0x2C, size 0x4
    unsigned char m_pad; // offset 0x30, size 0x1
    unsigned char m_unitCount; // offset 0x31, size 0x1
    unsigned char m_columns; // offset 0x32, size 0x1
    unsigned char m_rows; // offset 0x33, size 0x1
};
// total size: 0xC
class tagParCmd_TargetColor {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    unsigned char m_targetColor[4]; // offset 0x4, size 0x4
    unsigned char m_velocity[4]; // offset 0x8, size 0x4
};
// total size: 0x8
class tagParCmd_KillOld {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    signed int m_ageLimit; // offset 0x4, size 0x4
};
// total size: 0xC
class tagParCmd_DisableCmd {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    signed int m_countdownToDisable; // offset 0x4, size 0x4
    class xParCmd * m_cmdToDisable; // offset 0x8, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};
enum eParCmdTag {
    eParCmdHeaderTag = 0,
    eParCmdBounceTag = 1,
    eParCmdCopyVertexBTag = 2,
    eParCmdDampingTag = 3,
    eParCmdExplosionTag = 4,
    eParCmdFollowTag = 5,
    eParCmdGravitateTag = 6,
    eParCmdJetTag = 7,
    eParCmdMoveTag = 8,
    eParCmdOrbitLineTag = 9,
    eParCmdOrbitPointTag = 10,
    eParCmdRandomAccelTag = 11,
    eParCmdRandomDisplaceTag = 12,
    eParCmdRandomVelocityTag = 13,
    eParCmdRestoreTag = 14,
    eParCmdSinkTag = 15,
    eParCmdSinkVelocityTag = 16,
    eParCmdSourceTag = 17,
    eParCmdTargetColorTag = 18,
    eParCmdTargetSizeTag = 19,
    eParCmdVortexTag = 20,
    eParCmdFrictionTag = 21,
    eParCmdKillSlowTag = 22,
    eParCmdKillOldTag = 23,
    eParCmdAccelerateTag = 24,
    eParCmdEmitterTag = 25,
    eParCmdKillCmdTag = 26,
    eParCmdDisableCmdTag = 27,
    eParCmdEnableCmdTag = 28,
    eParCmdLimitVelocityTag = 29,
    eParCmdKillBoxTag = 30,
    eParCmdSpawnVFXTag = 31,
    eParCmdKillPlaneTag = 32,
    eParCmdRotMoveTag = 33,
    eParCmdTextureTag = 34,
    eParCmdKillInvisTag = 35,
    eParCmdTurbulenceTag = 36,
    eParCmdModulateColorTag = 37,
    eParCmdTagCount = 38,
};
// total size: 0x4
class tagParCmd_TargetSize {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x10
class tagParCmd_RandomDisplace {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_minAge; // offset 0x1, size 0x1
    unsigned char m_delayCount; // offset 0x2, size 0x1
    unsigned char m_delay; // offset 0x3, size 0x1
    class Vector3D m_vel; // offset 0x4, size 0xC
};
// total size: 0x4
class tagParCmd_Damping {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x8
class tagParCmd_Move {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    signed int m_dt; // offset 0x4, size 0x4
};
// total size: 0x4
class tagParCmd_KillInvis {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad; // offset 0x1, size 0x1
    signed short m_ageMin; // offset 0x2, size 0x2
};
// total size: 0x14
class tagParCmdList {
    // Members
public:
    signed int m_numCmd; // offset 0x0, size 0x4
    class xParCmd * m_cmd; // offset 0x4, size 0x4
    class xParCmd * m_lastCmd; // offset 0x8, size 0x4
    class tagParCmdList * m_prev; // offset 0xC, size 0x4
    class tagParCmdList * m_next; // offset 0x10, size 0x4
};
// total size: 0xC
class tagParCmd_KillCmd {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    signed int m_countdownToKill; // offset 0x4, size 0x4
    class xParCmd * m_cmdToKill; // offset 0x8, size 0x4
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
// total size: 0x4
class tagParCmd_Vortex {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
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
class tagParCmd_ModulateColor {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[2]; // offset 0x1, size 0x2
    unsigned char m_flags; // offset 0x3, size 0x1
    signed short m_ageMin; // offset 0x4, size 0x2
    signed short m_ageMax; // offset 0x6, size 0x2
};
// total size: 0x4
class tagParCmd_Follow {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x4
class tagParCmd_RandomVelocity {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x10
class tagParCmd_LimitVelocity {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    class Vector3D m_maxVelocity; // offset 0x4, size 0xC
};
// total size: 0x10
class tagParCmd_KillSlow {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[2]; // offset 0x1, size 0x2
    unsigned char m_velAbs; // offset 0x3, size 0x1
    class Vector3D m_velMin; // offset 0x4, size 0xC
};
// total size: 0xC
class tagParCmd_SpawnVFX {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_vfxType; // offset 0x1, size 0x1
    unsigned char m_mode; // offset 0x2, size 0x1
    unsigned char m_delay; // offset 0x3, size 0x1
    unsigned char m_delayCount; // offset 0x4, size 0x1
    unsigned char m_spawnProbability; // offset 0x5, size 0x1
    unsigned short m_maxAge; // offset 0x6, size 0x2
    unsigned char m_displace[3]; // offset 0x8, size 0x3
    unsigned char m_pad; // offset 0xB, size 0x1
};
// total size: 0x4
class tagParCmd_EnableCmd {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
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
// total size: 0x10
class tagParCmd_Friction {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    class Vector3D m_friction; // offset 0x4, size 0xC
};
// total size: 0x74
class tagParCmd_Emitter {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned short m_emitLifeRandom; // offset 0x2, size 0x2
    unsigned char m_emitMode; // offset 0x4, size 0x1
    signed int m_emitType; // offset 0x8, size 0x4
    signed int m_emitAmount; // offset 0xC, size 0x4
    signed int m_emitAmountRangeMin; // offset 0x10, size 0x4
    signed int m_emitAmountRangeMax; // offset 0x14, size 0x4
    unsigned char m_emitCVel[4]; // offset 0x18, size 0x4
    unsigned char m_emitColor[4]; // offset 0x1C, size 0x4
    float m_emitSize; // offset 0x20, size 0x4
    float m_emitSizeRangeMin; // offset 0x24, size 0x4
    float m_emitSizeRangeMax; // offset 0x28, size 0x4
    float m_emitSizeVel; // offset 0x2C, size 0x4
    class Vector3D m_emitVel; // offset 0x30, size 0xC
    class Vector3D m_emitVelVar; // offset 0x3C, size 0xC
    class Vector3D m_origin; // offset 0x48, size 0xC
    class Vector3D m_p1; // offset 0x54, size 0xC
    class Vector3D m_p2; // offset 0x60, size 0xC
    class xParCmd * m_cmdTex; // offset 0x6C, size 0x4
    unsigned short m_delayCount; // offset 0x70, size 0x2
    unsigned short m_delay; // offset 0x72, size 0x2
};
// total size: 0x1C
class tagxParSys {
    // Members
public:
    unsigned int m_idx; // offset 0x0, size 0x4
    class xPar * m_root; // offset 0x4, size 0x4
    class xPar * m_dead; // offset 0x8, size 0x4
    signed int m_num_of_particles; // offset 0xC, size 0x4
    class tagParCmdList * m_cmd; // offset 0x10, size 0x4
    unsigned char m_alive; // offset 0x14, size 0x1
    unsigned char m_killWhenDead; // offset 0x15, size 0x1
    unsigned char m_active; // offset 0x16, size 0x1
    unsigned char m_visible; // offset 0x17, size 0x1
    unsigned char m_culled; // offset 0x18, size 0x1
    unsigned char m_deadGlobalPool; // offset 0x19, size 0x1
    unsigned char m_pad[2]; // offset 0x1A, size 0x2
};
// total size: 0x4
class tagParCmd_Restore {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x5C
class xPar {
    // Members
public:
    class xPar * m_next; // offset 0x0, size 0x4
    class xPar * m_prev; // offset 0x4, size 0x4
    class Vector3D m_pos; // offset 0x8, size 0xC
    class Vector3D m_vel; // offset 0x14, size 0xC
    class Vector3D m_acc; // offset 0x20, size 0xC
    float m_size; // offset 0x2C, size 0x4
    float m_sizeVel; // offset 0x30, size 0x4
    signed short m_lifetime; // offset 0x34, size 0x2
    unsigned char m_flag; // offset 0x36, size 0x1
    unsigned char m_mode; // offset 0x37, size 0x1
    unsigned char m_c[4]; // offset 0x38, size 0x4
    signed char m_cvel[4]; // offset 0x3C, size 0x4
    unsigned char m_c1[4]; // offset 0x40, size 0x4
    unsigned char m_c2[4]; // offset 0x44, size 0x4
    unsigned char m_rotdeg[3]; // offset 0x48, size 0x3
    unsigned char m_texIdx; // offset 0x4B, size 0x1
    float m_uva[2]; // offset 0x4C, size 0x8
    float m_uvb[2]; // offset 0x54, size 0x8
};
// total size: 0x20
class tagParCmd_Explosion {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    class Vector3D m_center; // offset 0x4, size 0xC
    float m_velocity; // offset 0x10, size 0x4
    float m_magnitude; // offset 0x14, size 0x4
    float m_lifetime; // offset 0x18, size 0x4
    float m_age; // offset 0x1C, size 0x4
};
// total size: 0x1C
class tagParCmd_KillBox {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[2]; // offset 0x1, size 0x2
    unsigned char m_killOut; // offset 0x3, size 0x1
    class Vector3D m_p[2]; // offset 0x4, size 0x18
};
// total size: 0x4
class tagParCmd_GravitateCmd {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x4
class tagParCmd_OrbitLine {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x28
class tagParCmd_Jet {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    class Vector3D m_center; // offset 0x4, size 0xC
    class Vector3D m_acc; // offset 0x10, size 0xC
    float m_gravity; // offset 0x1C, size 0x4
    float m_epsilon; // offset 0x20, size 0x4
    float m_maxRadiusSqr; // offset 0x24, size 0x4
};
// total size: 0x4
class tagParCmd_Sink {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x4
class tagParCmd_RotMove {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_rotadjust[3]; // offset 0x1, size 0x3
};
// total size: 0x10
class tagParCmd_KillPlane {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[2]; // offset 0x1, size 0x2
    unsigned char m_killBelow; // offset 0x3, size 0x1
    class Vector3D m_plane; // offset 0x4, size 0xC
};
// total size: 0x20
class tagParCmd_Bounce {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[2]; // offset 0x1, size 0x2
    unsigned char m_noStatic; // offset 0x3, size 0x1
    class Vector3D m_plane; // offset 0x4, size 0xC
    class Vector3D m_dampVelPercent; // offset 0x10, size 0xC
    unsigned int m_sndAssetID; // offset 0x1C, size 0x4
};
// total size: 0x1C
class tagParCmd_OrbitPoint {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
    class Vector3D m_center; // offset 0x4, size 0xC
    float m_gravity; // offset 0x10, size 0x4
    float m_epsilon; // offset 0x14, size 0x4
    float m_maxRadiusSqr; // offset 0x18, size 0x4
};
// total size: 0x4
class tagParCmd_SinkVelocity {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x4
class tagParCmd_Header {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[3]; // offset 0x1, size 0x3
};
// total size: 0x1C
class tagParCmd_Turbulence {
    // Members
public:
    unsigned char m_free; // offset 0x0, size 0x1
    unsigned char m_pad[2]; // offset 0x1, size 0x2
    unsigned char m_dirSinCos; // offset 0x3, size 0x1
    float m_ageMin; // offset 0x4, size 0x4
    float m_ageMax; // offset 0x8, size 0x4
    float m_lift; // offset 0xC, size 0x4
    float m_max_swirl_radius; // offset 0x10, size 0x4
    float m_currentSpin; // offset 0x14, size 0x4
    float m_spinRate; // offset 0x18, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A380 -> 0x0034A524
*/
// Range: 0x34A380 -> 0x34A524
class xParCmd * xParCmdListAddCmd(class tagParCmdList * list /* r18 */, enum eParCmdTag cmdtype /* r17 */) {
    /* anonymous block */ {
        // Range: 0x34A380 -> 0x34A524
        class xParCmd * cmd; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A530 -> 0x0034A75C
*/
// Range: 0x34A530 -> 0x34A75C
void xParCmdListExecute(class tagParCmdList * list /* r16 */, class tagxParSys * ps /* r18 */, unsigned int dt /* r17 */) {
    /* anonymous block */ {
        // Range: 0x34A530 -> 0x34A75C
        class xParCmd * idx; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A760 -> 0x0034A774
*/
// Range: 0x34A760 -> 0x34A774
void xParCmdListInit(class tagParCmdList * list /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34A760 -> 0x34A774
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A780 -> 0x0034A898
*/
// Range: 0x34A780 -> 0x34A898
class xParCmd * xParCmdAlloc() {
    /* anonymous block */ {
        // Range: 0x34A780 -> 0x34A898
        class xParCmd * l; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A8A0 -> 0x0034A908
*/
// Range: 0x34A8A0 -> 0x34A908
void xParCmdMemInit() {
    /* anonymous block */ {
        // Range: 0x34A8A0 -> 0x34A908
        class xParCmd * cmd; // r4
        signed int i; // r5
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A910 -> 0x0034AAD8
*/
// Range: 0x34A910 -> 0x34AAD8
void xParCmdListFree(class tagParCmdList * cmdlist /* r16 */) {
    /* anonymous block */ {
        // Range: 0x34A910 -> 0x34AAD8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AAE0 -> 0x0034ABF8
*/
// Range: 0x34AAE0 -> 0x34ABF8
class tagParCmdList * xParCmdListAlloc() {
    /* anonymous block */ {
        // Range: 0x34AAE0 -> 0x34ABF8
        class tagParCmdList * l; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AC00 -> 0x0034AC68
*/
// Range: 0x34AC00 -> 0x34AC68
void xParCmdListMemInit() {
    /* anonymous block */ {
        // Range: 0x34AC00 -> 0x34AC68
        class tagParCmdList * cmd; // r4
        signed int i; // r5
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AC70 -> 0x0034AF24
*/
// Range: 0x34AC70 -> 0x34AF24
void * xParCmdDataAlloc(signed int cmdDataType /* r19 */) {
    /* anonymous block */ {
        // Range: 0x34AC70 -> 0x34AF24
        unsigned char * data; // r18
        signed int size; // r17
        signed int count; // r16
        signed int i; // r4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xParCmd.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AF30 -> 0x0034AFC4
*/
// Range: 0x34AF30 -> 0x34AFC4
void xParCmdDataMemInit() {
    /* anonymous block */ {
        // Range: 0x34AF30 -> 0x34AFC4
        unsigned char * data; // r8
        signed int size; // r7
        signed int count; // r6
        signed int j; // r4
        signed int i; // r5
    }
}


