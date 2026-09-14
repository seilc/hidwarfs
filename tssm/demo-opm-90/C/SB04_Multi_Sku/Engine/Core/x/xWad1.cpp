/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xWad1.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float sCameraNearClip; // size: 0x4, address: 0x636E90
float sCameraFarClip; // size: 0x4, address: 0x636E94
class RwCamera * globalCamera; // size: 0x4, address: 0x638110
static class RwCamera * sMainGameCamera; // size: 0x4, address: 0x638120
float xCameraLastFov; // size: 0x4, address: 0x0
float scale; // size: 0x4, address: 0x0
static class xMemPool sxAnimTempTranPool; // size: 0x1C, address: 0x6D7D50
static class xMemPool sxAnimTempStatePool; // size: 0x1C, address: 0x6D7D70
unsigned int gxAnimUseGrowAlloc; // size: 0x4, address: 0x638124
float thresh; // size: 0x4, address: 0x0
float thresh; // size: 0x4, address: 0x0
unsigned char sLongAntennas; // size: 0x1, address: 0x0
static class xAntenna sAntennaList[96]; // size: 0x1F80, address: 0x6D7D90
static class RwTexture * sAntennaTex; // size: 0x4, address: 0x638130
static class SparkyCurve sSparksCurveDataRed[2]; // size: 0x18, address: 0x6045F0
static class SparkyCurve sSparksCurveDataGreen[2]; // size: 0x18, address: 0x604610
static class SparkyCurve sSparksCurveDataYellow[2]; // size: 0x18, address: 0x604630
static class SparkyEmitter sAntennaSparksRed; // size: 0x74, address: 0x62C7A0
static class SparkyEmitter sAntennaSparksGreen; // size: 0x74, address: 0x6D9D10
static class SparkyEmitter sAntennaSparksYellow; // size: 0x74, address: 0x6D9D90
static signed int g_modinit; // size: 0x4, address: 0x638134
static class xBehaveMgr * g_behavmgr; // size: 0x4, address: 0x638138
static unsigned int g_loadlock; // size: 0x4, address: 0x636E98
static class st_FILELOADINFO g_loadinst[8]; // size: 0x340, address: 0x6D9EA0
static class tag_xFile g_xfload[8]; // size: 0x5A0, address: 0x6DA1E0
static class st_BINIO_XTRADATA g_xtraload[8]; // size: 0x1E0, address: 0x6DA780
static class st_BINIO_XTRADATA * g_async_context; // size: 0x4, address: 0x63813C
static signed int sCamCollis; // size: 0x4, address: 0x638140
signed int xcam_collis_owner_disable; // size: 0x4, address: 0x638144
signed int xcam_do_collis; // size: 0x4, address: 0x636E9C
float xcam_collis_radius; // size: 0x4, address: 0x636EA0
float xcam_collis_stiffness; // size: 0x4, address: 0x636EA4
static class RpAtomic * sInvisWallHack; // size: 0x4, address: 0x638148
static signed int s_nestlevel; // size: 0x4, address: 0x0
float gCameraLastFov; // size: 0x4, address: 0x0
static class xMat4x3 sCameraFXMatOld; // size: 0x40, address: 0x0
static class _tagClimate * sClimate; // size: 0x4, address: 0x638154
float snow_life; // size: 0x4, address: 0x636EA8
static class xVec3 snow_vel; // size: 0xC, address: 0x62C860
static class xVec3 snow_dvel; // size: 0xC, address: 0x62C870
unsigned char xClumpColl_FilterFlags; // size: 0x1, address: 0x636EAC
unsigned char xClumpColl_FilterFlagsAllMask; // size: 0x1, address: 0x638158
unsigned char xClumpColl_FilterFlagsAllEqual; // size: 0x1, address: 0x636EB0
static class basic_rect screen_bounds; // size: 0x10, address: 0x62C880
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static char * KEY; // size: 0x4, address: 0x636EB4
static float destX; // size: 0x4, address: 0x63815C
static float destY; // size: 0x4, address: 0x638160
static float destWidth; // size: 0x4, address: 0x636EB8
static float destHeight; // size: 0x4, address: 0x636EBC
static char * preset_names[5]; // size: 0x14, address: 0x0
float dtscale; // size: 0x4, address: 0x636EC0
static float credits_time; // size: 0x4, address: 0x636EC4
static class xCreditsData * credits_data; // size: 0x4, address: 0x638164
static unsigned int credits_parentID; // size: 0x4, address: 0x638168
char * g_xCollis_FMT; // size: 0x4, address: 0x0
static signed int sCollidingJSP; // size: 0x4, address: 0x63816C
static class xCapsule * cb_capsule; // size: 0x4, address: 0x0
static float cb_dist; // size: 0x4, address: 0x0
static class xCapsule * cb_cap; // size: 0x4, address: 0x0
signed int xcollide_docam; // size: 0x4, address: 0x0
static class xRay3 cbray; // size: 0x24, address: 0x6DA960
static unsigned char cbnumcs; // size: 0x1, address: 0x638170
static unsigned char cbmaxcs; // size: 0x1, address: 0x638174
static unsigned char FLOOR; // size: 0x1, address: 0x638178
static unsigned char NEXT2; // size: 0x1, address: 0x63817C
static unsigned char OTHER; // size: 0x1, address: 0x638180
static class RpIntersection cbisx_local; // size: 0x1C, address: 0x6DA990
static float cbath; // size: 0x4, address: 0x638184
static class xMat3x3 * cbmat; // size: 0x4, address: 0x638188
static class xBoxFace box_faces[6]; // size: 0x480, address: 0x604650
static class xEdge * box_edges[6][6]; // size: 0x90, address: 0x604AD0
static class zSweptSphereGlobals sSwsGlobal; // size: 0x8, address: 0x638190
static signed int sSweptSphereEntFound; // size: 0x4, address: 0x638198
static class xEnt * sSweptSphereMover; // size: 0x4, address: 0x63819C
static unsigned char sSweptSphereCollType; // size: 0x1, address: 0x6381A0
static signed int sSweptSpherePenby; // size: 0x4, address: 0x6381A4
static unsigned int sSweptSphereIgnoreMovers; // size: 0x4, address: 0x6381A8
class xColor_tag g_RED; // size: 0x4, address: 0x0
class xColor_tag g_GREEN; // size: 0x4, address: 0x0
class xColor_tag g_BLUE; // size: 0x4, address: 0x0
class xColor_tag g_CYAN; // size: 0x4, address: 0x0
class xColor_tag g_MAGENTA; // size: 0x4, address: 0x62C890
class xColor_tag g_YELLOW; // size: 0x4, address: 0x62C898
class xColor_tag g_BLACK; // size: 0x4, address: 0x62C8A0
class xColor_tag g_WHITE; // size: 0x4, address: 0x62C8A8
class xColor_tag g_GRAY10; // size: 0x4, address: 0x0
class xColor_tag g_GRAY20; // size: 0x4, address: 0x0
class xColor_tag g_GRAY30; // size: 0x4, address: 0x0
class xColor_tag g_GRAY40; // size: 0x4, address: 0x0
class xColor_tag g_GRAY50; // size: 0x4, address: 0x0
class xColor_tag g_GRAY60; // size: 0x4, address: 0x0
class xColor_tag g_GRAY70; // size: 0x4, address: 0x0
class xColor_tag g_GRAY80; // size: 0x4, address: 0x0
class xColor_tag g_GRAY90; // size: 0x4, address: 0x0
class xColor_tag g_CLEAR; // size: 0x4, address: 0x62C8B0
class xColor_tag g_NEON_RED; // size: 0x4, address: 0x0
class xColor_tag g_NEON_GREEN; // size: 0x4, address: 0x0
class xColor_tag g_NEON_BLUE; // size: 0x4, address: 0x0
class xColor_tag g_PEACH; // size: 0x4, address: 0x0
class xColor_tag g_FUSCHIA; // size: 0x4, address: 0x0
class xColor_tag g_MAROON; // size: 0x4, address: 0x0
class xColor_tag g_MIDNIGHTBLUE; // size: 0x4, address: 0x0
class xColor_tag g_SEAGREEN; // size: 0x4, address: 0x0
class xColor_tag g_FORESTGREEN; // size: 0x4, address: 0x0
class xColor_tag g_PIMP_GOLD; // size: 0x4, address: 0x62C8B8
class xColor_tag g_ORANGE; // size: 0x4, address: 0x0
class xColor_tag g_KHAKI; // size: 0x4, address: 0x0
class xColor_tag g_LAVENDER; // size: 0x4, address: 0x0
class xColor_tag g_PINK; // size: 0x4, address: 0x0
class xColor_tag g_CHARTREUSE; // size: 0x4, address: 0x0
class xColor_tag g_COLOR_TRYME; // size: 0x4, address: 0x0
class xColor_tag g_COLOR_TRYME2; // size: 0x4, address: 0x0
class xColor_tag g_COLOR_TRYME3; // size: 0x4, address: 0x0
char * g_xColor_FMT; // size: 0x4, address: 0x0
static class tag_type xCounterTag; // size: 0x14, address: 0x62C8C0
static char STATIC_ALLOCATION_BUFFER[711624]; // size: 0xADBC8, address: 0x6DA9B0
class xCutscene sActiveCutscene; // size: 0x148, address: 0x788580
static unsigned int sCutTocCount[16]; // size: 0x40, address: 0x7886D0
static class xCutsceneInfo * sCutTocInfo[16]; // size: 0x40, address: 0x788710
static signed int sCutTocMax; // size: 0x4, address: 0x6381AC
static class xModelInstance sCutsceneFakeModel[8]; // size: 0x520, address: 0x788750
static class xCutsceneModelHack * sCutsceneModelHackBuf; // size: 0x4, address: 0x6381B0
static class xCamCutscene * cutscene_cam; // size: 0x4, address: 0x6381B4
// total size: 0x24
struct /* @anon5 */ {} xCamFollow::__vtable; // size: 0x24, address: 0x0
// total size: 0x24
struct /* @anon3 */ {} @unnamed@xWad1_cpp@::xCamCutscene::__vtable; // size: 0x24, address: 0x635E70
// total size: 0x24
struct /* @anon7 */ {} xCam::__vtable; // size: 0x24, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x638090
class xLightKit * gLastLightKit; // size: 0x4, address: 0x638078
class tagiRenderArrays gRenderArr; // size: 0x5280, address: 0x6A8870
void CutsceneShadowRender(class CutsceneShadowModel *); // size: 0x0, address: 0x414A20
class RwRaster * ShadowCameraRaster; // size: 0x4, address: 0x638244
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x643E38
__int128 * _rwDMAGateSlot; // size: 0x4, address: 0x637108
class xMat4x3 g_I3; // size: 0x40, address: 0x6D3810
class xGlobals * xglobals; // size: 0x4, address: 0x636F28
unsigned int gSoak; // size: 0x4, address: 0x637510
void xCounterEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x4169F0
void SweptSphereHitsEntCB(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x419900
class xGrid npcs_grid; // size: 0x38, address: 0x66AF20
class xGrid colls_oso_grid; // size: 0x38, address: 0x66AEE0
class xGrid colls_grid; // size: 0x38, address: 0x66AEA0
class RpMorphTarget anim_coll_old_mt; // size: 0x1C, address: 0x6D7CB0
signed int SweptSphereModelCB(signed int, signed int, void *); // size: 0x0, address: 0x41AE20
signed int _rpCollisionGeometryDataOffset; // size: 0x4, address: 0x636328
signed int SweptSphereLeafNodeCB(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x41BA50
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x6A7E70
class RpCollisionTriangle * sphereHitsEnvCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x42B6B0
class RpCollisionTriangle * sphereHitsEnv3CB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x425B10
class RpCollisionTriangle * sphereHitsEnv4CB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x4253B0
class RpCollisionTriangle * sphereHitsModel3CB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x425AF0
class RpCollisionTriangle * rayHitsEnvCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x4269A0
class RpCollisionTriangle * rayHitsModelBackwardCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x426AD0
class RpCollisionTriangle * rayHitsModelCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x426980
class xVec3 m_UnitAxisY; // size: 0xC, address: 0x62CAC8
class xVec3 m_Null; // size: 0xC, address: 0x62CAA8
class xVec3 g_O3; // size: 0xC, address: 0x62C4D0
void xCapsuleHitsEnt(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x0
signed int LeafNodeCapsuleIntersect(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x0
class RpCollisionTriangle * CapsuleEnvClosestToStartCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x0
class RpCollisionTriangle * CapsuleEnvClosestToLineCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x0
class RpCollisionTriangle * CapsuleModelClosestToLineCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x0
signed int xParabolaEnvCB(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x42ABA0
class RpCollisionTriangle * sphereHitsModelCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x42B690
class callback text_cb; // size: 0xC, address: 0x62BC08
unsigned int FB_YRES; // size: 0x4, address: 0x636F20
unsigned int FB_XRES; // size: 0x4, address: 0x636F1C
signed int LeafNodeBoxPolyIntersect(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x42FBA0
signed int LeafNodeSpherePolyIntersect(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x42FDF0
signed int LeafNodeLinePolyIntersect(class xClumpCollBSPTriangle *, void *); // size: 0x0, address: 0x430060
signed int rwPip2AtomicOffset; // size: 0x4, address: 0x637084
signed int rwPip2GeometryOffset; // size: 0x4, address: 0x637080
unsigned int gPTankDisable; // size: 0x4, address: 0x620608
void SweptSphereHitsCamFollowEnt(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x0
class xVec3 m_UnitAxisX; // size: 0xC, address: 0x62CAB8
class zGlobals globals; // size: 0x2410, address: 0x7AB790
signed int skyCameraExt; // size: 0x4, address: 0x63719C
void DualCamHitsCameraEnt(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x435030
float SECS_PER_VBLANK; // size: 0x4, address: 0x6382F4
// total size: 0x24
struct /* @anon6 */ {} xCamBlend::__vtable; // size: 0x24, address: 0x635EA0
void BFD_cb_GCP2_readasync(class tag_xFile *); // size: 0x0, address: 0x43A660
void DiscardBuffer(class st_FILELOADINFO *); // size: 0x0, address: 0x43ACF0
void SetBuffer(class st_FILELOADINFO *, char *, signed int); // size: 0x0, address: 0x43AD20
signed int ReadSeek(class st_FILELOADINFO *, signed int); // size: 0x0, address: 0x43AD50
signed int SkipBytes(class st_FILELOADINFO *, signed int); // size: 0x0, address: 0x43AE00
enum en_BIO_ASYNC_ERRCODES AsyncReadStatus(class st_FILELOADINFO *); // size: 0x0, address: 0x43AA30
signed int AsyncMRead(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // size: 0x0, address: 0x43AA50
signed int AsyncIRead(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // size: 0x0, address: 0x43AA40
signed int ReadIDoubles(class st_FILELOADINFO *, double *, signed int); // size: 0x0, address: 0x43AA60
signed int ReadIFloats(class st_FILELOADINFO *, float *, signed int); // size: 0x0, address: 0x43AA70
signed int ReadILongs(class st_FILELOADINFO *, signed int *, signed int); // size: 0x0, address: 0x43AA80
signed int ReadIShorts(class st_FILELOADINFO *, signed short *, signed int); // size: 0x0, address: 0x43AA90
signed int ReadMDoubles(class st_FILELOADINFO *, double *, signed int); // size: 0x0, address: 0x43AAA0
signed int ReadMFloats(class st_FILELOADINFO *, float *, signed int); // size: 0x0, address: 0x43AAE0
signed int ReadMLongs(class st_FILELOADINFO *, signed int *, signed int); // size: 0x0, address: 0x43AB50
signed int ReadMShorts(class st_FILELOADINFO *, signed short *, signed int); // size: 0x0, address: 0x43ABC0
signed int ReadBytes(class st_FILELOADINFO *, char *, signed int); // size: 0x0, address: 0x43AC20
void LoadDestroy(class st_FILELOADINFO *); // size: 0x0, address: 0x43AEE0
void GOALDestroy_Generic(class xFactoryInst *); // size: 0x0, address: 0x43CA10
class xFactoryInst * GOALCreate_Generic(signed int, class RyzMemGrow *, void *); // size: 0x0, address: 0x43CA30
// total size: 0x24
struct /* @anon2 */ {} xGoalEmpty::__vtable; // size: 0x24, address: 0x635E40
// total size: 0x24
struct /* @anon4 */ {} xGoal::__vtable; // size: 0x24, address: 0x635140
// total size: 0x24
struct /* @anon0 */ {} xGoalGeneric::__vtable; // size: 0x24, address: 0x635ED0
void xAnimPoolCB(class xMemPool *, void *); // size: 0x0, address: 0x43F820
unsigned char * g_iAnim_workBuffer; // size: 0x4, address: 0x636F94
class _reent * _impure_ptr; // size: 0x4, address: 0x528B78
char _ctype_[]; // size: 0x0, address: 0x611800
// total size: 0x24
struct /* @anon1 */ {} xCamDebug::__vtable; // size: 0x24, address: 0x0
// total size: 0x340
class xCamera : public xBase {
    // Members
public:
    class RwCamera * lo_cam; // offset 0x10, size 0x4
    class xMat4x3 mat; // offset 0x20, size 0x40
    class xMat4x3 omat; // offset 0x60, size 0x40
    class xMat3x3 mbasis; // offset 0xA0, size 0x30
    class xBound bound; // offset 0xD0, size 0x4C
    class xMat4x3 * tgt_mat; // offset 0x11C, size 0x4
    class xMat4x3 * tgt_omat; // offset 0x120, size 0x4
    class xBound * tgt_bound; // offset 0x124, size 0x4
    class xVec3 focus; // offset 0x128, size 0xC
    class xScene * sc; // offset 0x134, size 0x4
    class xVec3 tran_accum; // offset 0x138, size 0xC
    float fov; // offset 0x144, size 0x4
    unsigned int flags; // offset 0x148, size 0x4
    float tmr; // offset 0x14C, size 0x4
    float tm_acc; // offset 0x150, size 0x4
    float tm_dec; // offset 0x154, size 0x4
    float ltmr; // offset 0x158, size 0x4
    float ltm_acc; // offset 0x15C, size 0x4
    float ltm_dec; // offset 0x160, size 0x4
    float dmin; // offset 0x164, size 0x4
    float dmax; // offset 0x168, size 0x4
    float dcur; // offset 0x16C, size 0x4
    float dgoal; // offset 0x170, size 0x4
    float hmin; // offset 0x174, size 0x4
    float hmax; // offset 0x178, size 0x4
    float hcur; // offset 0x17C, size 0x4
    float hgoal; // offset 0x180, size 0x4
    float pmin; // offset 0x184, size 0x4
    float pmax; // offset 0x188, size 0x4
    float pcur; // offset 0x18C, size 0x4
    float pgoal; // offset 0x190, size 0x4
    float depv; // offset 0x194, size 0x4
    float hepv; // offset 0x198, size 0x4
    float pepv; // offset 0x19C, size 0x4
    float orn_epv; // offset 0x1A0, size 0x4
    float yaw_epv; // offset 0x1A4, size 0x4
    float pitch_epv; // offset 0x1A8, size 0x4
    float roll_epv; // offset 0x1AC, size 0x4
    class xQuat orn_cur; // offset 0x1B0, size 0x10
    class xQuat orn_goal; // offset 0x1C0, size 0x10
    class xQuat orn_diff; // offset 0x1D0, size 0x10
    float yaw_cur; // offset 0x1E0, size 0x4
    float yaw_goal; // offset 0x1E4, size 0x4
    float pitch_cur; // offset 0x1E8, size 0x4
    float pitch_goal; // offset 0x1EC, size 0x4
    float roll_cur; // offset 0x1F0, size 0x4
    float roll_goal; // offset 0x1F4, size 0x4
    float dct; // offset 0x1F8, size 0x4
    float dcd; // offset 0x1FC, size 0x4
    float dccv; // offset 0x200, size 0x4
    float dcsv; // offset 0x204, size 0x4
    float hct; // offset 0x208, size 0x4
    float hcd; // offset 0x20C, size 0x4
    float hccv; // offset 0x210, size 0x4
    float hcsv; // offset 0x214, size 0x4
    float pct; // offset 0x218, size 0x4
    float pcd; // offset 0x21C, size 0x4
    float pccv; // offset 0x220, size 0x4
    float pcsv; // offset 0x224, size 0x4
    float orn_ct; // offset 0x228, size 0x4
    float orn_cd; // offset 0x22C, size 0x4
    float orn_ccv; // offset 0x230, size 0x4
    float orn_csv; // offset 0x234, size 0x4
    float yaw_ct; // offset 0x238, size 0x4
    float yaw_cd; // offset 0x23C, size 0x4
    float yaw_ccv; // offset 0x240, size 0x4
    float yaw_csv; // offset 0x244, size 0x4
    float pitch_ct; // offset 0x248, size 0x4
    float pitch_cd; // offset 0x24C, size 0x4
    float pitch_ccv; // offset 0x250, size 0x4
    float pitch_csv; // offset 0x254, size 0x4
    float roll_ct; // offset 0x258, size 0x4
    float roll_cd; // offset 0x25C, size 0x4
    float roll_ccv; // offset 0x260, size 0x4
    float roll_csv; // offset 0x264, size 0x4
    class xVec4 frustplane[12]; // offset 0x270, size 0xC0
    float smoothOutwardSlidePos; // offset 0x330, size 0x4
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
// total size: 0x4
class RpCollisionData {
    // Members
public:
    class RpCollTree * tree; // offset 0x0, size 0x4
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
// total size: 0x8A0
class xGlobals {
    // Members
public:
    class xCamera oldSkoolCamera; // offset 0x0, size 0x340
    class xCamGroup * cam; // offset 0x340, size 0x4
    class xCamScreen * screen; // offset 0x344, size 0x4
    class xVec4 frustplane[12]; // offset 0x350, size 0xC0
    union { // inferred
        struct { // inferred
            class _tagxPad * pad0; // offset 0x410, size 0x4
            class _tagxPad * pad1; // offset 0x414, size 0x4
            class _tagxPad * pad2; // offset 0x418, size 0x4
            class _tagxPad * pad3; // offset 0x41C, size 0x4
        };
        class _tagxPad * pad[4]; // offset 0x410, size 0x10
    };
    signed int profile; // offset 0x420, size 0x4
    char profFunc[6][128]; // offset 0x424, size 0x300
    class xUpdateCullMgr * updateMgr; // offset 0x724, size 0x4
    signed int sceneFirst; // offset 0x728, size 0x4
    char sceneStart[32]; // offset 0x72C, size 0x20
    class RpWorld * currWorld; // offset 0x74C, size 0x4
    class iFogParams fog; // offset 0x750, size 0x1C
    class iFogParams fogA; // offset 0x76C, size 0x1C
    class iFogParams fogB; // offset 0x788, size 0x1C
    signed long fog_t0; // offset 0x7A8, size 0x4
    signed long fog_t1; // offset 0x7B0, size 0x4
    signed int option_vibration; // offset 0x7B8, size 0x4
    signed int option_subtitles; // offset 0x7BC, size 0x4
    unsigned int slowdown; // offset 0x7C0, size 0x4
    float update_dt; // offset 0x7C4, size 0x4
    signed short ForceCinematic; // offset 0x7C8, size 0x2
    signed short ForceAllCinematics; // offset 0x7CA, size 0x2
    signed int useHIPHOP; // offset 0x7CC, size 0x4
    unsigned char NoMusic; // offset 0x7D0, size 0x1
    unsigned char NoCutscenes; // offset 0x7D1, size 0x1
    unsigned char NoPadCheck; // offset 0x7D2, size 0x1
    char currentActivePad; // offset 0x7D3, size 0x1
    unsigned char firstStartPressed; // offset 0x7D4, size 0x1
    unsigned char fromLauncher; // offset 0x7D5, size 0x1
    unsigned char FlashWIP; // offset 0x7D6, size 0x1
    unsigned char inLoadingScreen; // offset 0x7D7, size 0x1
    unsigned char LoadingScene; // offset 0x7D8, size 0x1
    unsigned char InitializingLoadingScreen; // offset 0x7D9, size 0x1
    unsigned char ForceMono; // offset 0x7DA, size 0x1
    unsigned int minVSyncCnt; // offset 0x7DC, size 0x4
    unsigned char dontShowPadMessageDuringLoadingOrCutScene; // offset 0x7E0, size 0x1
    unsigned char autoSaveFeature; // offset 0x7E1, size 0x1
    signed int asyncLoadingScreen; // offset 0x7E4, size 0x4
    signed int asyncLoadingFlags; // offset 0x7E8, size 0x4
    char fromLauncherUser[32]; // offset 0x7EC, size 0x20
    class zPlayer * ___player_ent_dont_use_directly; // offset 0x80C, size 0x4
    class zScene * sceneCur; // offset 0x810, size 0x4
    class zScene * scenePreload; // offset 0x814, size 0x4
    class PS2DemoGlobals * PS2demo; // offset 0x818, size 0x4
    char watermark[127]; // offset 0x81C, size 0x7F
    unsigned char watermarkAlpha; // offset 0x89B, size 0x1
    float watermarkSize; // offset 0x89C, size 0x4
};
// total size: 0x24
class xAnimFile {
    // Members
public:
    class xAnimFile * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int FileFlags; // offset 0xC, size 0x4
    float Duration; // offset 0x10, size 0x4
    float TimeOffset; // offset 0x14, size 0x4
    unsigned short BoneCount; // offset 0x18, size 0x2
    unsigned char NumAnims[2]; // offset 0x1A, size 0x2
    void * * RawData; // offset 0x1C, size 0x4
    class xAnimPhysicsData * PhysicsData; // offset 0x20, size 0x4
};
// total size: 0x14
class xCurveAsset {
    // Members
public:
    enum xCurveType type; // offset 0x0, size 0x4
    enum xCurveClamp clamp; // offset 0x4, size 0x4
    float delta; // offset 0x8, size 0x4
    signed int numPoints; // offset 0xC, size 0x4
    float * points; // offset 0x10, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
// total size: 0x68
class xPsyche : public RyzMemData {
    // Members
public:
    class xBase * clt_owner; // offset 0x0, size 0x4
    class xPSYNote * cb_notice; // offset 0x4, size 0x4
    signed int flg_psyche; // offset 0x8, size 0x4
    class xGoal * goallist; // offset 0xC, size 0x4
    class xGoal * goalstak[5]; // offset 0x10, size 0x14
    float tmr_stack[5][1]; // offset 0x24, size 0x14
    signed int staktop; // offset 0x38, size 0x4
    class xGoal * pendgoal; // offset 0x3C, size 0x4
    enum en_pendtype pendtype; // offset 0x40, size 0x4
    signed int gid_safegoal; // offset 0x44, size 0x4
    void (* fun_remap)(signed int *, enum en_trantype *); // offset 0x48, size 0x4
    void * userContext; // offset 0x4C, size 0x4
    signed int cnt_transLastTimestep; // offset 0x50, size 0x4
    enum PSY_BRAIN_STATUS psystat; // offset 0x54, size 0x4
    class xBase fakebase; // offset 0x58, size 0x10
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
};
// total size: 0x20
class xAnimPlay {
    // Members
public:
    class xAnimPlay * Next; // offset 0x0, size 0x4
    unsigned short NumSingle; // offset 0x4, size 0x2
    unsigned short BoneCount; // offset 0x6, size 0x2
    class xAnimSingle * Single; // offset 0x8, size 0x4
    void * Object; // offset 0xC, size 0x4
    class xAnimTable * Table; // offset 0x10, size 0x4
    class xMemPool * Pool; // offset 0x14, size 0x4
    class xModelInstance * ModelInst; // offset 0x18, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x1C, size 0x4
};
// total size: 0xA0
class xEntMechData {
    // Members
public:
    class xBound original_bound; // offset 0x0, size 0x4C
    class xVec3 original_position; // offset 0x4C, size 0xC
    class xVec3 destination_position; // offset 0x58, size 0xC
    class xVec3 direction; // offset 0x64, size 0xC
    float original_rotation; // offset 0x70, size 0x4
    float destination_rotation; // offset 0x74, size 0x4
    float sliding_speed; // offset 0x78, size 0x4
    float rotation_speed; // offset 0x7C, size 0x4
    signed int state; // offset 0x80, size 0x4
    float sliding_forth_decel_time; // offset 0x84, size 0x4
    float rotation_forth_decel_time; // offset 0x88, size 0x4
    float sliding_back_decel_time; // offset 0x8C, size 0x4
    float rotating_back_decel_time; // offset 0x90, size 0x4
    float scale_speed; // offset 0x94, size 0x4
    float current_scale; // offset 0x98, size 0x4
    float * entity_rotation_angle; // offset 0x9C, size 0x4
};
// total size: 0xC8
class xSweptSphere {
    // Members
public:
    unsigned char detect_initial_penetration; // offset 0x0, size 0x1
    unsigned char init_collide; // offset 0x1, size 0x1
    class xVec3 start; // offset 0x4, size 0xC
    class xVec3 end; // offset 0x10, size 0xC
    float radius; // offset 0x1C, size 0x4
    float dist; // offset 0x20, size 0x4
    class xVec3 dir; // offset 0x24, size 0xC
    class xBox box; // offset 0x30, size 0x18
    class xQCData qcd; // offset 0x48, size 0x20
    float curdist; // offset 0x68, size 0x4
    unsigned int oid; // offset 0x6C, size 0x4
    void * optr; // offset 0x70, size 0x4
    class xModelInstance * mptr; // offset 0x74, size 0x4
    class xVec3 worldContact; // offset 0x78, size 0xC
    signed int hitIt; // offset 0x84, size 0x4
    class xVec3 worldPos; // offset 0x88, size 0xC
    class xVec3 worldNormal; // offset 0x94, size 0xC
    class xVec3 worldTangent; // offset 0xA0, size 0xC
    class xJSPHeader * jsp; // offset 0xAC, size 0x4
    class xClumpCollBSPTriangle * bspTriangle; // offset 0xB0, size 0x4
    enum xCollideSphereHitType type; // offset 0xB4, size 0x4
    class xPlane tri_plane; // offset 0xB8, size 0x10
};
// total size: 0x10
class xPlane {
    // Members
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float d; // offset 0xC, size 0x4
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
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
// total size: 0x2C
class xSpline3 {
    // Members
public:
    unsigned short type; // offset 0x0, size 0x2
    unsigned short flags; // offset 0x2, size 0x2
    unsigned int N; // offset 0x4, size 0x4
    unsigned int allocN; // offset 0x8, size 0x4
    class xVec3 * points; // offset 0xC, size 0x4
    float * time; // offset 0x10, size 0x4
    class xVec3 * p12; // offset 0x14, size 0x4
    class xVec3 * bctrl; // offset 0x18, size 0x4
    float * knot; // offset 0x1C, size 0x4
    class xCoef3 * coef; // offset 0x20, size 0x4
    unsigned int arcSample; // offset 0x24, size 0x4
    float * arcLength; // offset 0x28, size 0x4
};
// total size: 0x8
class SweptSphereCollParam {
    // Members
public:
    class RpGeometry * geometry; // offset 0x0, size 0x4
    class xSweptSphere * sws; // offset 0x4, size 0x4
};
// total size: 0x38
class xEntMotionMechData {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char flags; // offset 0x1, size 0x1
    unsigned char sld_axis; // offset 0x2, size 0x1
    unsigned char rot_axis; // offset 0x3, size 0x1
    unsigned char scale_axis; // offset 0x4, size 0x1
    float sld_dist; // offset 0x8, size 0x4
    float sld_tm; // offset 0xC, size 0x4
    float sld_acc_tm; // offset 0x10, size 0x4
    float sld_dec_tm; // offset 0x14, size 0x4
    float rot_dist; // offset 0x18, size 0x4
    float rot_tm; // offset 0x1C, size 0x4
    float rot_acc_tm; // offset 0x20, size 0x4
    float rot_dec_tm; // offset 0x24, size 0x4
    float ret_delay; // offset 0x28, size 0x4
    float post_ret_delay; // offset 0x2C, size 0x4
    float scale_amount; // offset 0x30, size 0x4
    float scale_duration; // offset 0x34, size 0x4
};
// total size: 0x14
class RwStreamCustom {
    // Members
public:
    signed int (* sfnclose)(void *); // offset 0x0, size 0x4
    unsigned int (* sfnread)(void *, void *, unsigned int); // offset 0x4, size 0x4
    signed int (* sfnwrite)(void *, void *, unsigned int); // offset 0x8, size 0x4
    signed int (* sfnskip)(void *, unsigned int); // offset 0xC, size 0x4
    void * data; // offset 0x10, size 0x4
};
enum en_trantype {
    GOAL_TRAN_NONE = 0,
    GOAL_TRAN_SET = 1,
    GOAL_TRAN_PUSH = 2,
    GOAL_TRAN_POP = 3,
    GOAL_TRAN_POPTO = 4,
    GOAL_TRAN_POPALL = 5,
    GOAL_TRAN_POPBASE = 6,
    GOAL_TRAN_POPSAFE = 7,
    GOAL_TRAN_SWAP = 8,
    GOAL_TRAN_NOMORE = 9,
    GOAL_TRAN_FORCE = 2147483647,
};
// total size: 0xA4
class xModelInstance {
    // Members
public:
    class xModelInstance * Next; // offset 0x0, size 0x4
    class xModelInstance * Parent; // offset 0x4, size 0x4
    class xModelPool * Pool; // offset 0x8, size 0x4
    class xAnimPlay * Anim; // offset 0xC, size 0x4
    class RpAtomic * Data; // offset 0x10, size 0x4
    class xModelPipe Pipe; // offset 0x14, size 0x8
    unsigned char InFrustum; // offset 0x1C, size 0x1
    unsigned char TrueClip; // offset 0x1D, size 0x1
    signed char sortBias; // offset 0x1E, size 0x1
    unsigned char modelpad; // offset 0x1F, size 0x1
    float RedMultiplier; // offset 0x20, size 0x4
    float GreenMultiplier; // offset 0x24, size 0x4
    float BlueMultiplier; // offset 0x28, size 0x4
    float Alpha; // offset 0x2C, size 0x4
    float FadeStart; // offset 0x30, size 0x4
    float FadeEnd; // offset 0x34, size 0x4
    class xSurface * Surf; // offset 0x38, size 0x4
    class xModelBucket * * Bucket; // offset 0x3C, size 0x4
    class xModelInstance * BucketNext; // offset 0x40, size 0x4
    class xLightKit * LightKit; // offset 0x44, size 0x4
    void * Object; // offset 0x48, size 0x4
    unsigned short Flags; // offset 0x4C, size 0x2
    unsigned char BoneCount; // offset 0x4E, size 0x1
    unsigned char BoneIndex; // offset 0x4F, size 0x1
    unsigned char * BoneRemap; // offset 0x50, size 0x4
    class RwMatrixTag * Mat; // offset 0x54, size 0x4
    class xVec3 Scale; // offset 0x58, size 0xC
    class xBox animBound; // offset 0x64, size 0x18
    class xBox combinedAnimBound; // offset 0x7C, size 0x18
    unsigned int modelID; // offset 0x94, size 0x4
    unsigned int shadowID; // offset 0x98, size 0x4
    class RpAtomic * shadowmapAtomic; // offset 0x9C, size 0x4
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        class xVec3 * verts; // offset 0x0, size 0x4
    } anim_coll; // offset 0xA0, size 0x4
};
// total size: 0x2C
class xAnimTransition {
    // Members
public:
    class xAnimTransition * Next; // offset 0x0, size 0x4
    class xAnimState * Dest; // offset 0x4, size 0x4
    unsigned int (* Conditional)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0x8, size 0x4
    unsigned int (* Callback)(class xAnimTransition *, class xAnimSingle *, void *); // offset 0xC, size 0x4
    unsigned int Flags; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
    float SrcTime; // offset 0x18, size 0x4
    float DestTime; // offset 0x1C, size 0x4
    unsigned short Priority; // offset 0x20, size 0x2
    unsigned short QueuePriority; // offset 0x22, size 0x2
    float BlendRecip; // offset 0x24, size 0x4
    unsigned short * BlendOffset; // offset 0x28, size 0x4
};
// total size: 0x4C
class xAnimState {
    // Members
public:
    class xAnimState * Next; // offset 0x0, size 0x4
    char * Name; // offset 0x4, size 0x4
    unsigned int ID; // offset 0x8, size 0x4
    unsigned int Flags; // offset 0xC, size 0x4
    unsigned int UserFlags; // offset 0x10, size 0x4
    float Speed; // offset 0x14, size 0x4
    class xAnimFile * Data; // offset 0x18, size 0x4
    class xAnimEffect * Effects; // offset 0x1C, size 0x4
    class xAnimTransitionList * Default; // offset 0x20, size 0x4
    class xAnimTransitionList * List; // offset 0x24, size 0x4
    float * BoneBlend; // offset 0x28, size 0x4
    float * TimeSnap; // offset 0x2C, size 0x4
    float FadeRecip; // offset 0x30, size 0x4
    unsigned short * FadeOffset; // offset 0x34, size 0x4
    void * CallbackData; // offset 0x38, size 0x4
    class xAnimMultiFile * MultiFile; // offset 0x3C, size 0x4
    void (* BeforeEnter)(class xAnimPlay *, class xAnimState *, void *); // offset 0x40, size 0x4
    void (* StateCallback)(class xAnimState *, class xAnimSingle *, void *); // offset 0x44, size 0x4
    void (* BeforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int); // offset 0x48, size 0x4
};
// total size: 0x10
class zDestructibleStateFXParams {
    // Members
public:
    float timer; // offset 0x0, size 0x4
    unsigned int flags; // offset 0x4, size 0x4
    class zParEmitter * emitter; // offset 0x8, size 0x4
    unsigned int (* fn)(float); // offset 0xC, size 0x4
};
// total size: 0x8
class xCutsceneBreak {
    // Members
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
};
// total size: 0x8
class xDestructibleAssetAttachedAnimList {
    // Members
public:
    unsigned int nanimations; // offset 0x0, size 0x4
    unsigned int * animationIDs; // offset 0x4, size 0x4
};
// total size: 0x54
class xCollis {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int oid; // offset 0x4, size 0x4
    void * optr; // offset 0x8, size 0x4
    class xModelInstance * mptr; // offset 0xC, size 0x4
    float dist; // offset 0x10, size 0x4
    float test_dist; // offset 0x14, size 0x4
    class xVec3 norm; // offset 0x18, size 0xC
    class xVec3 tohit; // offset 0x24, size 0xC
    class xVec3 depen; // offset 0x30, size 0xC
    class xVec3 hdng; // offset 0x3C, size 0xC
    union { // inferred
        // total size: 0xC
        class /* @class */ {
            // Members
        public:
            float t; // offset 0x0, size 0x4
            float u; // offset 0x4, size 0x4
            float v; // offset 0x8, size 0x4
        } tuv; // offset 0x48, size 0xC
        class tri_data tri; // offset 0x48, size 0xC
    };
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
// total size: 0x8
class xCamScreen {
    // Members
public:
    class RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0xC
class xListItem {
    // Members
public:
    signed int flg_travFilter; // offset 0x0, size 0x4
    class xGoal * next; // offset 0x4, size 0x4
    class xGoal * prev; // offset 0x8, size 0x4
};
// total size: 0x18
class xAnimTable {
    // Members
public:
    char * Name; // offset 0x0, size 0x4
    class xAnimTransition * TransitionList; // offset 0x4, size 0x4
    class xAnimState * StateList; // offset 0x8, size 0x4
    unsigned int AnimIndex; // offset 0xC, size 0x4
    unsigned int MorphIndex; // offset 0x10, size 0x4
    unsigned int UserFlags; // offset 0x14, size 0x4
};
// total size: 0x28
class RpCollisionTriangle {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    class RwV3d point; // offset 0xC, size 0xC
    signed int index; // offset 0x18, size 0x4
    class RwV3d * vertices[3]; // offset 0x1C, size 0xC
};
// total size: 0x14
class xPECircle {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
// total size: 0x0
class zEntHangable {};
// total size: 0x10
class xCutsceneTime {
    // Members
public:
    float StartTime; // offset 0x0, size 0x4
    float EndTime; // offset 0x4, size 0x4
    unsigned int NumData; // offset 0x8, size 0x4
    unsigned int ChunkIndex; // offset 0xC, size 0x4
};
// total size: 0xC
class zShrapnelAsset {
    // Members
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
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
// total size: 0x28
class RpCollTree {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class RwBBox bbox; // offset 0x4, size 0x18
    unsigned short numEntries; // offset 0x1C, size 0x2
    unsigned short numSplits; // offset 0x1E, size 0x2
    class RpCollSplit * splits; // offset 0x20, size 0x4
    unsigned short * map; // offset 0x24, size 0x4
};
// total size: 0x2C
class xJSPHeader {
    // Members
public:
    char idtag[4]; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int jspNodeCount; // offset 0x8, size 0x4
    class RpClump * clump; // offset 0xC, size 0x4
    class xClumpCollBSPTree * colltree; // offset 0x10, size 0x4
    class xJSPNodeInfo * jspNodeList; // offset 0x14, size 0x4
    unsigned int stripVecCount; // offset 0x18, size 0x4
    class RwV3d * stripVecList; // offset 0x1C, size 0x4
    unsigned short vertDataFlags; // offset 0x20, size 0x2
    unsigned short vertDataStride; // offset 0x22, size 0x2
    class xJSPNodeTree * nodetree; // offset 0x24, size 0x4
    class xJSPNodeLight * nodelight; // offset 0x28, size 0x4
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
// total size: 0x120
class xCamCutscene : public xCam {
    // Members
public:
    class xCutscene * csn; // offset 0xD0, size 0x4
    class xMat4x3 original_mat; // offset 0xE0, size 0x40
};
// total size: 0x54
class xAntenna {
    // Members
public:
    class xEnt * pParent; // offset 0x0, size 0x4
    signed int startBone; // offset 0x4, size 0x4
    signed int endBone; // offset 0x8, size 0x4
    float length; // offset 0xC, size 0x4
    float rigidity; // offset 0x10, size 0x4
    class xVec3 tipCurrentPosition; // offset 0x14, size 0xC
    class xVec3 tipCurrentVelocity; // offset 0x20, size 0xC
    float accumDist; // offset 0x2C, size 0x4
    float distToCorrect; // offset 0x30, size 0x4
    class xVec3 tipCorrection; // offset 0x34, size 0xC
    float timer; // offset 0x40, size 0x4
    unsigned char noLight; // offset 0x44, size 0x1
    class xVec3 lastEndBonePos; // offset 0x48, size 0xC
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
// total size: 0x148
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
    unsigned char useDefaultTrack; // offset 0x141, size 0x1
    unsigned int useDefaultTrackID; // offset 0x144, size 0x4
};
// total size: 0x4C
class xBound {
    // Members
public:
    class xQCData qcd; // offset 0x0, size 0x20
    unsigned char type; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    union { // inferred
        class xSphere sph; // offset 0x24, size 0x10
        class xBBox box; // offset 0x24, size 0x24
        class xCylinder cyl; // offset 0x24, size 0x14
    };
    class xMat4x3 * mat; // offset 0x48, size 0x4
};
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
};
// total size: 0x30
class xGoal : public xListItem, public xFactoryInst {
    // Members
public:
    class xPsyche * psyche; // offset 0x18, size 0x4
    enum en_GOALSTATE stat; // offset 0x1C, size 0x4
    signed int flg_able; // offset 0x20, size 0x4
    signed int (* fun_process)(class xGoal *, void *, enum en_trantype *, float, void *); // offset 0x24, size 0x4
    void * cbdata; // offset 0x28, size 0x4
};
// total size: 0x2F0
class _reent {
    // Members
public:
    signed int _errno; // offset 0x0, size 0x4
    class __sFILE * _stdin; // offset 0x4, size 0x4
    class __sFILE * _stdout; // offset 0x8, size 0x4
    class __sFILE * _stderr; // offset 0xC, size 0x4
    signed int _inc; // offset 0x10, size 0x4
    char _emergency[25]; // offset 0x14, size 0x19
    signed int _current_category; // offset 0x30, size 0x4
    char * _current_locale; // offset 0x34, size 0x4
    signed int __sdidinit; // offset 0x38, size 0x4
    void (* __cleanup)(class _reent *); // offset 0x3C, size 0x4
    class _Bigint * _result; // offset 0x40, size 0x4
    signed int _result_k; // offset 0x44, size 0x4
    class _Bigint * _p5s; // offset 0x48, size 0x4
    class _Bigint * * _freelist; // offset 0x4C, size 0x4
    signed int _cvtlen; // offset 0x50, size 0x4
    char * _cvtbuf; // offset 0x54, size 0x4
    // total size: 0xF0
    class /* @class */ {
        // Members
    public:
        union { // inferred
            // total size: 0x58
            class /* @class */ {
                // Members
            public:
                unsigned int _unused_rand; // offset 0x0, size 0x4
                char * _strtok_last; // offset 0x4, size 0x4
                char _asctime_buf[26]; // offset 0x8, size 0x1A
                class tm _localtime_buf; // offset 0x24, size 0x24
                signed int _gamma_signgam; // offset 0x48, size 0x4
                unsigned long long _rand_next; // offset 0x50, size 0x8
            } _reent; // offset 0x0, size 0x58
            // total size: 0xF0
            class /* @class */ {
                // Members
            public:
                unsigned char * _nextf[30]; // offset 0x0, size 0x78
                unsigned int _nmalloc[30]; // offset 0x78, size 0x78
            } _unused; // offset 0x0, size 0xF0
        };
    } _new; // offset 0x58, size 0xF0
    class _atexit * _atexit; // offset 0x148, size 0x4
    class _atexit _atexit0; // offset 0x14C, size 0x88
    void (* * _sig_func)(signed int); // offset 0x1D4, size 0x4
    class _glue __sglue; // offset 0x1D8, size 0xC
    class __sFILE __sf[3]; // offset 0x1E4, size 0x108
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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
// total size: 0x8
class fade {
    // Members
public:
    float start; // offset 0x0, size 0x4
    float end; // offset 0x4, size 0x4
};
// total size: 0x10
class xLightKit {
    // Members
public:
    unsigned int tagID; // offset 0x0, size 0x4
    unsigned int groupID; // offset 0x4, size 0x4
    unsigned int lightCount; // offset 0x8, size 0x4
    class xLightKitLight * lightList; // offset 0xC, size 0x4
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
// total size: 0x0
class st_SERIAL_CLIENTINFO {};
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
// total size: 0x48
class xGoalGeneric : public xGoal {
    // Members
public:
    signed int (* fun_enter)(class xGoal *, void *, float, void *); // offset 0x30, size 0x4
    signed int (* fun_exit)(class xGoal *, void *, float, void *); // offset 0x34, size 0x4
    signed int (* fun_suspend)(class xGoal *, void *, float, void *); // offset 0x38, size 0x4
    signed int (* fun_resume)(class xGoal *, void *, float, void *); // offset 0x3C, size 0x4
    signed int (* fun_sysevent)(class xGoal *, void *, class xBase *, class xBase *, unsigned int, float *, class xBase *, signed int *); // offset 0x40, size 0x4
    void * usrData; // offset 0x44, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x68
class st_FILELOADINFO {
    // Members
public:
    void (* destroy)(class st_FILELOADINFO *); // offset 0x0, size 0x4
    signed int (* readBytes)(class st_FILELOADINFO *, char *, signed int); // offset 0x4, size 0x4
    signed int (* readMShorts)(class st_FILELOADINFO *, signed short *, signed int); // offset 0x8, size 0x4
    signed int (* readMLongs)(class st_FILELOADINFO *, signed int *, signed int); // offset 0xC, size 0x4
    signed int (* readMFloats)(class st_FILELOADINFO *, float *, signed int); // offset 0x10, size 0x4
    signed int (* readMDoubles)(class st_FILELOADINFO *, double *, signed int); // offset 0x14, size 0x4
    signed int (* readIShorts)(class st_FILELOADINFO *, signed short *, signed int); // offset 0x18, size 0x4
    signed int (* readILongs)(class st_FILELOADINFO *, signed int *, signed int); // offset 0x1C, size 0x4
    signed int (* readIFloats)(class st_FILELOADINFO *, float *, signed int); // offset 0x20, size 0x4
    signed int (* readIDoubles)(class st_FILELOADINFO *, double *, signed int); // offset 0x24, size 0x4
    signed int (* skipBytes)(class st_FILELOADINFO *, signed int); // offset 0x28, size 0x4
    signed int (* seekSpot)(class st_FILELOADINFO *, signed int); // offset 0x2C, size 0x4
    void (* setDoubleBuf)(class st_FILELOADINFO *, char *, signed int); // offset 0x30, size 0x4
    void (* discardDblBuf)(class st_FILELOADINFO *); // offset 0x34, size 0x4
    signed int (* asyncIRead)(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // offset 0x38, size 0x4
    signed int (* asyncMRead)(class st_FILELOADINFO *, signed int, char *, signed int, signed int); // offset 0x3C, size 0x4
    enum en_BIO_ASYNC_ERRCODES (* asyncReadStatus)(class st_FILELOADINFO *); // offset 0x40, size 0x4
    unsigned int lockid; // offset 0x44, size 0x4
    enum en_FIOERRCODES error; // offset 0x48, size 0x4
    unsigned int basesector; // offset 0x4C, size 0x4
    void * privdata; // offset 0x50, size 0x4
    void * xtradata; // offset 0x54, size 0x4
    void * asyndata; // offset 0x58, size 0x4
    signed int filesize; // offset 0x5C, size 0x4
    signed int remain; // offset 0x60, size 0x4
    signed int position; // offset 0x64, size 0x4
};
// total size: 0x10
class xClumpCollBSPTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    signed int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
// total size: 0x4C
class xCMpreset {
    // Members
public:
    unsigned short num; // offset 0x0, size 0x2
    unsigned short align; // offset 0x2, size 0x2
    float delay; // offset 0x4, size 0x4
    float innerspace; // offset 0x8, size 0x4
    class xCMtextbox box[2]; // offset 0xC, size 0x40
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
};
// total size: 0x28
class xEntOrbitData {
    // Members
public:
    class xVec3 orig; // offset 0x0, size 0xC
    class xVec3 c; // offset 0xC, size 0xC
    float a; // offset 0x18, size 0x4
    float b; // offset 0x1C, size 0x4
    float p; // offset 0x20, size 0x4
    float w; // offset 0x24, size 0x4
};
// total size: 0x1C
class RpIntersection {
    // Members
public:
    class RpIntersectData t; // offset 0x0, size 0x18
    enum RpIntersectType type; // offset 0x18, size 0x4
};
// total size: 0xC
class xFactoryInst : public RyzMemData {
    // Members
public:
    signed int itemType; // offset 0x0, size 0x4
    class xFactoryInst * nextprod; // offset 0x4, size 0x4
    class xFactoryInst * prevprod; // offset 0x8, size 0x4
};
// total size: 0x24
class Speed {
    // Members
public:
    float spd_emitBase; // offset 0x0, size 0x4
    float spd_emitRand; // offset 0x4, size 0x4
    float spd_outBase; // offset 0x8, size 0x4
    float spd_outRand; // offset 0xC, size 0x4
    float acc_emitaxis; // offset 0x10, size 0x4
    float acc_outward; // offset 0x14, size 0x4
    class xVec3 acc_world; // offset 0x18, size 0xC
};
// total size: 0x1C0
class zNMECommon : public zNMENPCWrapper {
    // Members
public:
    class zNMEAsset * nmeass; // offset 0x130, size 0x4
    signed int siz_nmeass; // offset 0x134, size 0x4
    class xPsyche * psy_self; // offset 0x138, size 0x4
    class NMECfgCommon * cfg_common; // offset 0x13C, size 0x4
    class NMEShadParms * cfg_shadparm; // offset 0x140, size 0x4
    signed int flg_vuln; // offset 0x144, size 0x4
    signed int flg_move; // offset 0x148, size 0x4
    signed int flg_misc; // offset 0x14C, size 0x4
    signed int flg_able; // offset 0x150, size 0x4
    float spd_throttle; // offset 0x154, size 0x4
    class NMERuntime runtimeData; // offset 0x158, size 0x20
    class zNMEDriver * drv_data; // offset 0x178, size 0x4
    class zNMENavNet * navnet; // offset 0x17C, size 0x4
    union { // inferred
        float tmr_common[3]; // offset 0x180, size 0xC
        struct { // inferred
            float tmr_invuln; // offset 0x180, size 0x4
            float tmr_scary; // offset 0x184, size 0x4
            float tmr_lastAlert; // offset 0x188, size 0x4
        };
    };
    class zNMECommon * npc_duplodude; // offset 0x18C, size 0x4
    class zNMESoundTable * snd_table; // offset 0x190, size 0x4
    enum iSndHandle sndID[10]; // offset 0x194, size 0x28
    class zShrapnelAsset * shrapnelAsset; // offset 0x1BC, size 0x4
};
// total size: 0x8
class node_base {
    // Members
public:
    class node_base * prev; // offset 0x0, size 0x4
    class node_base * next; // offset 0x4, size 0x4
};
// total size: 0x24
class xRay3 {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    float min_t; // offset 0x18, size 0x4
    float max_t; // offset 0x1C, size 0x4
    signed int flags; // offset 0x20, size 0x4
};
// total size: 0x50
class xAnimSingle {
    // Members
public:
    unsigned int SingleFlags; // offset 0x0, size 0x4
    class xAnimState * State; // offset 0x4, size 0x4
    float Time; // offset 0x8, size 0x4
    float CurrentSpeed; // offset 0xC, size 0x4
    float BilinearLerp[2]; // offset 0x10, size 0x8
    class xAnimEffect * Effect; // offset 0x18, size 0x4
    unsigned int ActiveCount; // offset 0x1C, size 0x4
    float LastTime; // offset 0x20, size 0x4
    class xAnimActiveEffect * ActiveList; // offset 0x24, size 0x4
    class xAnimPlay * Play; // offset 0x28, size 0x4
    class xAnimTransition * Sync; // offset 0x2C, size 0x4
    class xAnimTransition * Tran; // offset 0x30, size 0x4
    class xAnimSingle * Blend; // offset 0x34, size 0x4
    float BlendFactor; // offset 0x38, size 0x4
    class xVec3 PhysDisp; // offset 0x3C, size 0xC
    float YawDisp; // offset 0x48, size 0x4
    unsigned int pad[1]; // offset 0x4C, size 0x4
};
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
};
// total size: 0x3C
class st_BINIO_XTRADATA {
    // Members
public:
    char * dbl_buf; // offset 0x0, size 0x4
    signed int dblbuf_size; // offset 0x4, size 0x4
    signed int dbl_beg; // offset 0x8, size 0x4
    signed int dbl_end; // offset 0xC, size 0x4
    signed int dbl_amt; // offset 0x10, size 0x4
    unsigned int fpos; // offset 0x14, size 0x4
    char * asyn_data; // offset 0x18, size 0x4
    signed int asyn_amt; // offset 0x1C, size 0x4
    signed int asyn_elesize; // offset 0x20, size 0x4
    signed int asyn_ismot; // offset 0x24, size 0x4
    enum en_BIO_ASYNC_ERRCODES asyn_status; // offset 0x28, size 0x4
    unsigned int pad[3]; // offset 0x2C, size 0xC
    signed int gcaskey; // offset 0x38, size 0x4
};
// total size: 0x1030
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
    class xCutsceneAudioTrack AudioTracks[32]; // offset 0x30, size 0x1000
};
// total size: 0x20
class xQCData {
    // Members
public:
    signed char xmin; // offset 0x0, size 0x1
    signed char ymin; // offset 0x1, size 0x1
    signed char zmin; // offset 0x2, size 0x1
    signed char zmin_dup; // offset 0x3, size 0x1
    signed char xmax; // offset 0x4, size 0x1
    signed char ymax; // offset 0x5, size 0x1
    signed char zmax; // offset 0x6, size 0x1
    signed char zmax_dup; // offset 0x7, size 0x1
    class xVec3 min; // offset 0x8, size 0xC
    class xVec3 max; // offset 0x14, size 0xC
};
// total size: 0x18
class _xCounter : public xBase {
    // Members
public:
    class xCounterAsset * asset; // offset 0x10, size 0x4
    signed short count; // offset 0x14, size 0x2
    unsigned char state; // offset 0x16, size 0x1
    unsigned char pad; // offset 0x17, size 0x1
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
};
// total size: 0x8
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum iSndHandle SndHandle; // offset 0x4, size 0x4
    };
};
// total size: 0x200
class zLasso {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float secsTotal; // offset 0x4, size 0x4
    float secsLeft; // offset 0x8, size 0x4
    float stRadius; // offset 0xC, size 0x4
    float tgRadius; // offset 0x10, size 0x4
    float crRadius; // offset 0x14, size 0x4
    class xVec3 stCenter; // offset 0x18, size 0xC
    class xVec3 tgCenter; // offset 0x24, size 0xC
    class xVec3 crCenter; // offset 0x30, size 0xC
    class xVec3 stNormal; // offset 0x3C, size 0xC
    class xVec3 tgNormal; // offset 0x48, size 0xC
    class xVec3 crNormal; // offset 0x54, size 0xC
    class xVec3 honda; // offset 0x60, size 0xC
    float stSlack; // offset 0x6C, size 0x4
    float stSlackDist; // offset 0x70, size 0x4
    float tgSlack; // offset 0x74, size 0x4
    float tgSlackDist; // offset 0x78, size 0x4
    float crSlack; // offset 0x7C, size 0x4
    float currDist; // offset 0x80, size 0x4
    float lastDist; // offset 0x84, size 0x4
    class xVec3 lastRefs[5]; // offset 0x88, size 0x3C
    unsigned char reindex[5]; // offset 0xC4, size 0x5
    unsigned char pad[3]; // offset 0xC9, size 0x3
    class xVec3 anchor; // offset 0xCC, size 0xC
    class xModelTag tag; // offset 0xD8, size 0x20
    class xModelInstance * model; // offset 0xF8, size 0x4
    unsigned int patTongue; // offset 0xFC, size 0x4
    class RpAtomic * tipModel; // offset 0x100, size 0x4
    class xMat4x3 * tipMatrix; // offset 0x104, size 0x4
    float tipDelay; // offset 0x108, size 0x4
    float tipLerp; // offset 0x10C, size 0x4
    class xSpline3 * spl; // offset 0x110, size 0x4
    unsigned int spldata[59]; // offset 0x114, size 0xEC
};
// total size: 0x20
class pool_list_base {
    // Members
public:
    signed int _size; // offset 0x0, size 0x4
    signed int _max_size; // offset 0x4, size 0x4
    class node_base head; // offset 0x8, size 0x8
    class node_base tail; // offset 0x10, size 0x8
    class node_base * stack; // offset 0x18, size 0x4
    void * buffer; // offset 0x1C, size 0x4
};
// total size: 0x24
class xParabola {
    // Members
public:
    class xVec3 initPos; // offset 0x0, size 0xC
    class xVec3 initVel; // offset 0xC, size 0xC
    float gravity; // offset 0x18, size 0x4
    float minTime; // offset 0x1C, size 0x4
    float maxTime; // offset 0x20, size 0x4
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
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x18
class RpTie {
    // Members
public:
    class RwLLLink lAtomicInWorldSector; // offset 0x0, size 0x8
    class RpAtomic * apAtom; // offset 0x8, size 0x4
    class RwLLLink lWorldSectorInAtomic; // offset 0xC, size 0x8
    class RpWorldSector * worldSector; // offset 0x14, size 0x4
};
// total size: 0x24
struct /* @anon0 */ {};
// total size: 0x8
class xClumpCollBSPTriangle {
    // Members
public:
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
            unsigned int rawIdx; // offset 0x0, size 0x4
            class RwV3d * p; // offset 0x0, size 0x4
        };
    } v; // offset 0x0, size 0x4
    unsigned char flags; // offset 0x4, size 0x1
    unsigned char detailed_info_cache_index; // offset 0x5, size 0x1
    unsigned short matIndex; // offset 0x6, size 0x2
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
// total size: 0xD8
class xEnt : public xBase {
    // Members
public:
    class xEntAsset * asset; // offset 0x10, size 0x4
    unsigned short idx; // offset 0x14, size 0x2
    unsigned char flags; // offset 0x16, size 0x1
    unsigned char miscflags; // offset 0x17, size 0x1
    unsigned char subType; // offset 0x18, size 0x1
    unsigned char pflags; // offset 0x19, size 0x1
    unsigned short moreFlags; // offset 0x1A, size 0x2
    unsigned char _isCulled : 2; // offset 0x1C, size 0x1
    unsigned char collisionEventReceived : 2; // offset 0x1C, size 0x1
    unsigned char driving_count; // offset 0x1D, size 0x1
    unsigned char num_ffx; // offset 0x1E, size 0x1
    unsigned char collType; // offset 0x1F, size 0x1
    unsigned char collLev; // offset 0x20, size 0x1
    unsigned char chkby; // offset 0x21, size 0x1
    unsigned char penby; // offset 0x22, size 0x1
    void (* visUpdate)(class xEnt *); // offset 0x24, size 0x4
    class xModelInstance * model; // offset 0x28, size 0x4
    class xModelInstance * collModel; // offset 0x2C, size 0x4
    class xModelInstance * camcollModel; // offset 0x30, size 0x4
    void (* update)(class xEnt *, class xScene *, float); // offset 0x34, size 0x4
    void (* endUpdate)(class xEnt *, class xScene *, float); // offset 0x38, size 0x4
    void (* bupdate)(class xEnt *, class xVec3 *); // offset 0x3C, size 0x4
    void (* move)(class xEnt *, class xScene *, float, class xEntFrame *); // offset 0x40, size 0x4
    void (* render)(class xEnt *); // offset 0x44, size 0x4
    class xEntFrame * frame; // offset 0x48, size 0x4
    class xEntCollis * collis; // offset 0x4C, size 0x4
    class xGridBound gridb; // offset 0x50, size 0x18
    class xBound bound; // offset 0x68, size 0x4C
    void (* transl)(class xEnt *, class xVec3 *, class xMat4x3 *); // offset 0xB4, size 0x4
    class xFFX * ffx; // offset 0xB8, size 0x4
    class xEnt * driver; // offset 0xBC, size 0x4
    class xEnt * driven; // offset 0xC0, size 0x4
    signed int driveMode; // offset 0xC4, size 0x4
    class xShadowSimpleCache * simpShadow; // offset 0xC8, size 0x4
    class xEntShadow * entShadow; // offset 0xCC, size 0x4
    class anim_coll_data * anim_coll; // offset 0xD0, size 0x4
    void * user_data; // offset 0xD4, size 0x4
};
// total size: 0x24
class _tagClimate {
    // Members
public:
    class _tagRain rain; // offset 0x0, size 0x10
    class _tagWind wind; // offset 0x10, size 0x14
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
// total size: 0x14
class xAnimEffect {
    // Members
public:
    class xAnimEffect * Next; // offset 0x0, size 0x4
    unsigned short Flags; // offset 0x4, size 0x2
    unsigned short Probability; // offset 0x6, size 0x2
    float StartTime; // offset 0x8, size 0x4
    float EndTime; // offset 0xC, size 0x4
    unsigned int (* Callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *); // offset 0x10, size 0x4
};
// total size: 0x30
class zMovePoint : public xMovePoint {};
// total size: 0x20
class zNMENavNet {
    // Members
public:
    class zMovePoint * nav_past; // offset 0x0, size 0x4
    class zMovePoint * nav_curr; // offset 0x4, size 0x4
    class zMovePoint * nav_dest; // offset 0x8, size 0x4
    class zMovePoint * nav_lead; // offset 0xC, size 0x4
    class xSpline3 * spl_mvptspline; // offset 0x10, size 0x4
    float len_mvptspline; // offset 0x14, size 0x4
    float dst_curspline; // offset 0x18, size 0x4
    class zNMECommon * nme_owner; // offset 0x1C, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x68
class xScene {
    // Members
public:
    unsigned int sceneID; // offset 0x0, size 0x4
    unsigned short flags; // offset 0x4, size 0x2
    unsigned short num_trigs; // offset 0x6, size 0x2
    unsigned short num_stats; // offset 0x8, size 0x2
    unsigned short num_dyns; // offset 0xA, size 0x2
    unsigned short num_npcs; // offset 0xC, size 0x2
    unsigned short num_act_ents; // offset 0xE, size 0x2
    float gravity; // offset 0x10, size 0x4
    float drag; // offset 0x14, size 0x4
    float friction; // offset 0x18, size 0x4
    unsigned short num_ents_allocd; // offset 0x1C, size 0x2
    unsigned short num_trigs_allocd; // offset 0x1E, size 0x2
    unsigned short num_stats_allocd; // offset 0x20, size 0x2
    unsigned short num_dyns_allocd; // offset 0x22, size 0x2
    unsigned short num_npcs_allocd; // offset 0x24, size 0x2
    class xEnt * * trigs; // offset 0x28, size 0x4
    class xEnt * * stats; // offset 0x2C, size 0x4
    class xEnt * * dyns; // offset 0x30, size 0x4
    class xEnt * * npcs; // offset 0x34, size 0x4
    class xEnt * * act_ents; // offset 0x38, size 0x4
    class xEnv * env; // offset 0x3C, size 0x4
    class xMemPool mempool; // offset 0x40, size 0x1C
    class xBase * (* resolvID)(unsigned int); // offset 0x5C, size 0x4
    char * (* base2Name)(class xBase *); // offset 0x60, size 0x4
    char * (* id2Name)(unsigned int); // offset 0x64, size 0x4
};
// total size: 0x2C
class xEdge {
    // Members
public:
    class xCollideLineSegment segment; // offset 0x0, size 0x1C
    class xPlane edge; // offset 0x1C, size 0x10
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
// total size: 0x18
class NMEShadParms {
    // Members
public:
    class SimpShadParm simpshad; // offset 0x0, size 0xC
    class FullShadParm fullshad; // offset 0xC, size 0x4
    class ShadowRadii shadrad; // offset 0x10, size 0x8
};
// total size: 0x50
class xEntAsset : public xBaseAsset {
    // Members
public:
    unsigned char flags; // offset 0x8, size 0x1
    unsigned char subtype; // offset 0x9, size 0x1
    unsigned char pflags; // offset 0xA, size 0x1
    unsigned char moreFlags; // offset 0xB, size 0x1
    unsigned int surfaceID; // offset 0xC, size 0x4
    class xVec3 ang; // offset 0x10, size 0xC
    class xVec3 pos; // offset 0x1C, size 0xC
    class xVec3 scale; // offset 0x28, size 0xC
    float redMult; // offset 0x34, size 0x4
    float greenMult; // offset 0x38, size 0x4
    float blueMult; // offset 0x3C, size 0x4
    float seeThru; // offset 0x40, size 0x4
    float seeThruSpeed; // offset 0x44, size 0x4
    unsigned int modelInfoID; // offset 0x48, size 0x4
    unsigned int animListID; // offset 0x4C, size 0x4
};
// total size: 0xB4
class tag_xFile {
    // Members
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
};
enum en_pendtype {
    PEND_TRAN_NONE = 0,
    PEND_TRAN_SET = 1,
    PEND_TRAN_PUSH = 2,
    PEND_TRAN_POP = 3,
    PEND_TRAN_POPTO = 4,
    PEND_TRAN_POPALL = 5,
    PEND_TRAN_SWAP = 6,
    PEND_TRAN_INPROG = 7,
    PEND_TRAN_NOMORE = 8,
};
// total size: 0x44
class zDestructibleState {
    // Members
public:
    class xModelInstance * model; // offset 0x0, size 0x4
    class zShrapnelAsset * shrapnel; // offset 0x4, size 0x4
    class zShrapnelAsset * shrapnelhit; // offset 0x8, size 0x4
    unsigned int percent; // offset 0xC, size 0x4
    enum iSndGroupHandle sg_handle_idle; // offset 0x10, size 0x4
    enum iSndGroupHandle sg_handle_hit; // offset 0x14, size 0x4
    enum iSndGroupHandle sg_handle_hit_switch; // offset 0x18, size 0x4
    enum iSndHandle sh_handle_idle; // offset 0x1C, size 0x4
    enum iSndHandle sh_handle_hit; // offset 0x20, size 0x4
    enum iSndHandle sh_handle_hit_switch; // offset 0x24, size 0x4
    unsigned int sg_fx_id; // offset 0x28, size 0x4
    unsigned int sg_fx_id_switch; // offset 0x2C, size 0x4
    class sphericalEmitter * rumbleHit; // offset 0x30, size 0x4
    class sphericalEmitter * rumbleSwitch; // offset 0x34, size 0x4
    class zDestructibleStateAttachedAnimList * animList; // offset 0x38, size 0x4
    class zDestructibleStateFXList fxList; // offset 0x3C, size 0x8
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
// total size: 0x1C
class xCollideLineSegment {
    // Members
public:
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 dir; // offset 0xC, size 0xC
    float length; // offset 0x18, size 0x4
};
// total size: 0x20
class xSphereHitsModel_context {
    // Members
public:
    class xCollis * coll; // offset 0x0, size 0x4
    class RpIntersection localx; // offset 0x4, size 0x1C
};
// total size: 0x34
class xFactory : public RyzMemData {
    // Members
public:
    class XGOFTypeInfo * infopool; // offset 0x0, size 0x4
    class st_XORDEREDARRAY infolist; // offset 0x4, size 0x10
    class xFactoryInst * products; // offset 0x14, size 0x4
    class RyzMemGrow growContextData; // offset 0x18, size 0x1C
};
// total size: 0x1C
class xCapsule {
    // Members
public:
    class xVec3 start; // offset 0x0, size 0xC
    class xVec3 end; // offset 0xC, size 0xC
    float r; // offset 0x18, size 0x4
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
// total size: 0xC
class CutsceneShadowModel {
    // Members
public:
    class RpAtomic * model; // offset 0x0, size 0x4
    class RwMatrixTag * animMat; // offset 0x4, size 0x4
    unsigned int shadowBits; // offset 0x8, size 0x4
};
// total size: 0x4
class xCutsceneModelHack {
    // Members
public:
    class xModelPipe * pipe; // offset 0x0, size 0x4
};
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_MAXTYPES = 2,
};
// total size: 0xC
class SparkyCurve {
    // Members
public:
    float time; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float scale; // offset 0x8, size 0x4
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
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x1C
class xMemPool {
    // Members
public:
    void * FreeList; // offset 0x0, size 0x4
    unsigned short NextOffset; // offset 0x4, size 0x2
    unsigned short Flags; // offset 0x6, size 0x2
    void * UsedList; // offset 0x8, size 0x4
    void (* InitCB)(class xMemPool *, void *); // offset 0xC, size 0x4
    void * Buffer; // offset 0x10, size 0x4
    unsigned short Size; // offset 0x14, size 0x2
    unsigned short NumRealloc; // offset 0x16, size 0x2
    unsigned int Total; // offset 0x18, size 0x4
};
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0xC
class XCSNNosey {
    // Members
public:
    void * userdata; // offset 0x4, size 0x4
    signed int flg_nosey; // offset 0x8, size 0x4
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
// total size: 0x10
class xCutsceneAnimHdr {
    // Members
public:
    unsigned int RootIndex; // offset 0x0, size 0x4
    float Translate[3]; // offset 0x4, size 0xC
};
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
};
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0xC
class SimpShadParm {
    // Members
public:
    float rad_shadow; // offset 0x0, size 0x4
    char * nam_shadowTexture; // offset 0x4, size 0x4
    class RwRaster * rast_shadow; // offset 0x8, size 0x4
};
// total size: 0x70
class xBinaryCamera {
    // Members
public:
    class config cfg; // offset 0x0, size 0x3C
    class xCamera * camera; // offset 0x3C, size 0x4
    class xQuat cam_dir; // offset 0x40, size 0x10
    class xVec3 * s1; // offset 0x50, size 0x4
    class xVec3 * s2; // offset 0x54, size 0x4
    float s2_radius; // offset 0x58, size 0x4
    class xVec2 stick_offset; // offset 0x5C, size 0x8
};
// total size: 0x24
class RwStream {
    // Members
public:
    enum RwStreamType type; // offset 0x0, size 0x4
    enum RwStreamAccessType accessType; // offset 0x4, size 0x4
    signed int position; // offset 0x8, size 0x4
    class RwStreamUnion Type; // offset 0xC, size 0x14
    signed int rwOwned; // offset 0x20, size 0x4
};
// total size: 0xC
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x5FC
class xEntCollis {
    // Members
public:
    unsigned char chk; // offset 0x0, size 0x1
    unsigned char pen; // offset 0x1, size 0x1
    unsigned char env_sidx; // offset 0x2, size 0x1
    unsigned char env_eidx; // offset 0x3, size 0x1
    unsigned char npc_sidx; // offset 0x4, size 0x1
    unsigned char npc_eidx; // offset 0x5, size 0x1
    unsigned char dyn_sidx; // offset 0x6, size 0x1
    unsigned char dyn_eidx; // offset 0x7, size 0x1
    unsigned char stat_sidx; // offset 0x8, size 0x1
    unsigned char stat_eidx; // offset 0x9, size 0x1
    unsigned char idx; // offset 0xA, size 0x1
    class xCollis colls[18]; // offset 0xC, size 0x5E8
    void (* post)(class xEnt *, class xScene *, float, class xEntCollis *); // offset 0x5F4, size 0x4
    unsigned int (* depenq)(class xEnt *, class xEnt *, class xScene *, float, class xCollis *); // offset 0x5F8, size 0x4
};
// total size: 0xC
class _glue {
    // Members
public:
    class _glue * _next; // offset 0x0, size 0x4
    signed int _niobs; // offset 0x4, size 0x4
    class __sFILE * _iobs; // offset 0x8, size 0x4
};
// total size: 0x4
class xCreditsData {
    // Members
public:
    unsigned int dummy; // offset 0x0, size 0x4
};
// total size: 0x14
class xCollideSphereToPolygonResults {
    // Members
public:
    float dist; // offset 0x0, size 0x4
    class xVec3 contact; // offset 0x4, size 0xC
    enum xCollideSphereHitType type; // offset 0x10, size 0x4
};
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
};
// total size: 0xF0
class xEntFrame {
    // Members
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    class xMat4x3 oldmat; // offset 0x40, size 0x40
    class xVec3 oldvel; // offset 0x80, size 0xC
    class xRot oldrot; // offset 0x8C, size 0x10
    class xRot drot; // offset 0x9C, size 0x10
    class xRot rot; // offset 0xAC, size 0x10
    class xVec3 dvel; // offset 0xBC, size 0xC
    class xVec3 vel; // offset 0xC8, size 0xC
    unsigned int mode; // offset 0xD4, size 0x4
    class xVec3 dpos; // offset 0xD8, size 0xC
};
// total size: 0x34
class xDestructibleAssetState {
    // Members
public:
    unsigned int percent; // offset 0x0, size 0x4
    unsigned int modelID; // offset 0x4, size 0x4
    unsigned int shrapnelID; // offset 0x8, size 0x4
    unsigned int shrapnelhitID; // offset 0xC, size 0x4
    unsigned int soundgroupidleID; // offset 0x10, size 0x4
    unsigned int soundgroupfxID; // offset 0x14, size 0x4
    unsigned int soundgrouphitID; // offset 0x18, size 0x4
    unsigned int soundgroupfxIDswitch; // offset 0x1C, size 0x4
    unsigned int soundgrouphitIDswitch; // offset 0x20, size 0x4
    unsigned int rumbleIDhit; // offset 0x24, size 0x4
    unsigned int rumbleIDswitch; // offset 0x28, size 0x4
    unsigned int fx_flags; // offset 0x2C, size 0x4
    class xDestructibleAssetAttachedAnimList * animlist; // offset 0x30, size 0x4
};
// total size: 0x4
class xPESphere {
    // Members
public:
    float radius; // offset 0x0, size 0x4
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
class RpCollSplit {
    // Members
public:
    class RpCollSector leftSector; // offset 0x0, size 0x8
    class RpCollSector rightSector; // offset 0x8, size 0x8
};
// total size: 0x10
class RwPlane {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    float distance; // offset 0xC, size 0x4
};
// total size: 0x0
class xModelAssetInfo {};
// total size: 0x5C
class xEnvAsset : public xBaseAsset {
    // Members
public:
    unsigned int bspAssetID; // offset 0x8, size 0x4
    unsigned int startCameraAssetID; // offset 0xC, size 0x4
    unsigned int climateFlags; // offset 0x10, size 0x4
    float climateStrengthMin; // offset 0x14, size 0x4
    float climateStrengthMax; // offset 0x18, size 0x4
    unsigned int bspLightKit; // offset 0x1C, size 0x4
    unsigned int objectLightKit; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    unsigned int bspCollisionAssetID; // offset 0x28, size 0x4
    unsigned int bspFXAssetID; // offset 0x2C, size 0x4
    unsigned int bspCameraAssetID; // offset 0x30, size 0x4
    unsigned int bspMapperID; // offset 0x34, size 0x4
    unsigned int bspMapperCollisionID; // offset 0x38, size 0x4
    unsigned int bspMapperFXID; // offset 0x3C, size 0x4
    float loldHeight; // offset 0x40, size 0x4
    class xVec3 minBounds; // offset 0x44, size 0xC
    class xVec3 maxBounds; // offset 0x50, size 0xC
};
// total size: 0x1C0
class xCamFollow : public xCam {
    // Members
public:
    class config cfg; // offset 0xD0, size 0x94
    class xVec3 * target; // offset 0x164, size 0x4
    class xCamCoordCylinder end_coord; // offset 0x168, size 0x18
    class xVec3 face; // offset 0x180, size 0xC
    class xVec3 end_face; // offset 0x18C, size 0xC
    float vel_dist; // offset 0x198, size 0x4
    float vel_height; // offset 0x19C, size 0x4
    float vel_theta; // offset 0x1A0, size 0x4
    float vel_face_height; // offset 0x1A4, size 0x4
    float vel_origin_y; // offset 0x1A8, size 0x4
    float drift_time; // offset 0x1AC, size 0x4
    float vel_stick; // offset 0x1B0, size 0x4
    class xVec2 drift_loc; // offset 0x1B4, size 0x8
    float drift_vel; // offset 0x1BC, size 0x4
};
// total size: 0x30
class xCoef3 {
    // Members
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
};
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0x54
class xCamConfigFollow {
    // Members
public:
    class zone_data zone_rest; // offset 0x0, size 0x18
    class zone_data zone_above; // offset 0x18, size 0x18
    class zone_data zone_below; // offset 0x30, size 0x18
    float speed_zone_offset; // offset 0x48, size 0x4
    float speed_zone_face; // offset 0x4C, size 0x4
    float speed_move_orbit; // offset 0x50, size 0x4
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
// total size: 0x130
class zNMENPCWrapper : public base {
    // Members
public:
    void (* fun_setup)(class xEnt *); // offset 0x11C, size 0x4
    void (* fun_reset)(class xEnt *); // offset 0x120, size 0x4
    signed int colFreq; // offset 0x124, size 0x4
    unsigned char flg_colCheck; // offset 0x128, size 0x1
    unsigned char flg_penCheck; // offset 0x129, size 0x1
    unsigned short flg_unusedCollFlags; // offset 0x12A, size 0x2
    signed int aflg_basenme : 8; // offset 0x12C, size 0x4
    signed int flg_upward : 8; // offset 0x12C, size 0x4
    signed int flg_xtrarend : 1; // offset 0x12C, size 0x4
    signed int flg_inUpdate : 1; // offset 0x12C, size 0x4
    signed int flg_newtime : 1; // offset 0x12C, size 0x4
    signed int flg_postproc : 1; // offset 0x12C, size 0x4
    signed int flg_profProc : 1; // offset 0x12C, size 0x4
    signed int flg_hudrend : 1; // offset 0x12C, size 0x4
    signed int flg_moreUnusedSpace : 10; // offset 0x12C, size 0x4
};
// total size: 0x38
class xCMcredits {
    // Members
public:
    unsigned int credits_size; // offset 0x0, size 0x4
    float len; // offset 0x4, size 0x4
    unsigned int flags; // offset 0x8, size 0x4
    class sxy in; // offset 0xC, size 0x8
    class sxy out; // offset 0x14, size 0x8
    float scroll_rate; // offset 0x1C, size 0x4
    float lifetime; // offset 0x20, size 0x4
    class fade fin; // offset 0x24, size 0x8
    class fade fout; // offset 0x2C, size 0x8
    unsigned int num_presets; // offset 0x34, size 0x4
};
// total size: 0x2C
class xIsect {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float penned; // offset 0x4, size 0x4
    float contained; // offset 0x8, size 0x4
    float lapped; // offset 0xC, size 0x4
    class xVec3 point; // offset 0x10, size 0xC
    class xVec3 norm; // offset 0x1C, size 0xC
    float dist; // offset 0x28, size 0x4
};
// total size: 0x44
class zSceneParameters : public xDynAsset {
    // Members
public:
    unsigned int idle03ExtraCount; // offset 0x10, size 0x4
    class xAnimFile * * idle03Extras; // offset 0x14, size 0x4
    unsigned int idle04ExtraCount; // offset 0x18, size 0x4
    class xAnimFile * * idle04Extras; // offset 0x1C, size 0x4
    unsigned char bombCount; // offset 0x20, size 0x1
    unsigned char extraIdleDelay; // offset 0x21, size 0x1
    unsigned char hdrGlow; // offset 0x22, size 0x1
    unsigned char hdrDarken; // offset 0x23, size 0x1
    unsigned int uDefaultMusicHash; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    float waterTileWidth; // offset 0x2C, size 0x4
    float lodFadeDistance; // offset 0x30, size 0x4
    unsigned int pad[4]; // offset 0x34, size 0x10
};
// total size: 0x10
class plane_type {
    // Members
public:
    class xVec3 norm; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
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
// total size: 0x18
class ParabolaCBData {
    // Members
public:
    class xParabola * p; // offset 0x0, size 0x4
    class xVec3 N; // offset 0x4, size 0xC
    float d; // offset 0x10, size 0x4
    class xCollis * colls; // offset 0x14, size 0x4
};
// total size: 0x10
class xClumpCollBSPBranchNode {
    // Members
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0x3C
class xQCControl {
    // Members
public:
    float world_xmin; // offset 0x0, size 0x4
    float world_ymin; // offset 0x4, size 0x4
    float world_zmin; // offset 0x8, size 0x4
    float world_xmax; // offset 0xC, size 0x4
    float world_ymax; // offset 0x10, size 0x4
    float world_zmax; // offset 0x14, size 0x4
    float world_xsz; // offset 0x18, size 0x4
    float world_ysz; // offset 0x1C, size 0x4
    float world_zsz; // offset 0x20, size 0x4
    float scale_x; // offset 0x24, size 0x4
    float scale_y; // offset 0x28, size 0x4
    float scale_z; // offset 0x2C, size 0x4
    float center_x; // offset 0x30, size 0x4
    float center_y; // offset 0x34, size 0x4
    float center_z; // offset 0x38, size 0x4
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
// total size: 0x38
class xGrid {
    // Members
public:
    unsigned char ingrid_id; // offset 0x0, size 0x1
    unsigned char pad[3]; // offset 0x1, size 0x3
    unsigned short nx; // offset 0x4, size 0x2
    unsigned short nz; // offset 0x6, size 0x2
    float minx; // offset 0x8, size 0x4
    float minz; // offset 0xC, size 0x4
    float maxx; // offset 0x10, size 0x4
    float maxz; // offset 0x14, size 0x4
    float csizex; // offset 0x18, size 0x4
    float csizez; // offset 0x1C, size 0x4
    float inv_csizex; // offset 0x20, size 0x4
    float inv_csizez; // offset 0x24, size 0x4
    float maxr; // offset 0x28, size 0x4
    class xGridBound * * cells; // offset 0x2C, size 0x4
    class xGridBound * other; // offset 0x30, size 0x4
    signed int iter_active; // offset 0x34, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x40
class zFlyKey {
    // Members
public:
    signed int frame; // offset 0x0, size 0x4
    float matrix[12]; // offset 0x4, size 0x30
    float aperture[2]; // offset 0x34, size 0x8
    float focal; // offset 0x3C, size 0x4
};
// total size: 0x18
class xCMhunk {
    // Members
public:
    unsigned int hunk_size; // offset 0x0, size 0x4
    unsigned int preset; // offset 0x4, size 0x4
    float t0; // offset 0x8, size 0x4
    float t1; // offset 0xC, size 0x4
    char * text1; // offset 0x10, size 0x4
    char * text2; // offset 0x14, size 0x4
};
// total size: 0x1C
class xSerial {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int baseoff; // offset 0x4, size 0x4
    class st_SERIAL_CLIENTINFO * ctxtdata; // offset 0x8, size 0x4
    signed int warned; // offset 0xC, size 0x4
    signed int curele; // offset 0x10, size 0x4
    signed int bitidx; // offset 0x14, size 0x4
    signed int bittally; // offset 0x18, size 0x4
};
// total size: 0x1C
class zCheckPoint {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float rot; // offset 0xC, size 0x4
    unsigned int initCamID; // offset 0x10, size 0x4
    unsigned char * jsp_active; // offset 0x14, size 0x4
    enum xSndEffect currentEffect; // offset 0x18, size 0x4
};
enum en_npartyp {
    NPAR_TYP_UNKNOWN = 0,
    NPAR_TYP_DUMMY = 1,
    NPAR_TYP_DUSTPUFF = 2,
    NPAR_TYP_DUSTHEAT = 3,
    NPAR_TYP_RADIOACTIVE = 4,
    NPAR_TYP_FLINGVAPORS_DE = 5,
    NPAR_TYP_FLINGVAPORS_TR = 6,
    NPAR_TYP_FLINGVAPORS_JK = 7,
    NPAR_TYP_FOGBREATH = 8,
    NPAR_TYP_POPGAS = 9,
    NPAR_TYP_SPITSPRAY = 10,
    NPAR_TYP_SLIMED = 11,
    NPAR_TYP_PLASMA = 12,
    NPAR_TYP_ENERGY = 13,
    NPAR_TYP_MUZZLE = 14,
    NPAR_TYP_CLOUDS = 15,
    NPAR_TYP_EXHAUST = 16,
    NPAR_TYP_HEATED = 17,
    NPAR_TYP_NOTES = 18,
    NPAR_TYP_NOTES_UPGRADE = 19,
    NPAR_TYP_RKOWAVES = 20,
    NPAR_TYP_JETFLAME = 21,
    NPAR_TYP_JETSMOKE = 22,
    NPAR_TYP_SEASPRAY = 23,
    NPAR_TYP_SEASPLASH = 24,
    NPAR_TYP_SEAMIST = 25,
    NPAR_TYP_SEAFOG = 26,
    NPAR_TYP_SEAFOG_NOROT = 27,
    NPAR_TYP_SEASPARKLE = 28,
    NPAR_TYP_SEAFOAM = 29,
    NPAR_TYP_SEARAINBOW = 30,
    NPAR_TYP_RAIN = 31,
    NPAR_TYP_SPAWNRINGS = 32,
    NPAR_TYP_MACHRING = 33,
    NPAR_TYP_RINGS = 34,
    NPAR_TYP_SPARKS = 35,
    NPAR_TYP_COLORS = 36,
    NPAR_TYP_SPARKY = 37,
    NPAR_TYP_FOUNTAIN = 38,
    NPAR_TYP_FIRESPIRAL = 39,
    NPAR_TYP_FIREWORKS = 40,
    NPAR_TYP_NOMORE = 41,
    NPAR_TYP_FORCE = 2147483647,
};
// total size: 0xC
class xEntSpeedData {
    // Members
public:
    float speed; // offset 0x0, size 0x4
    float acceleration; // offset 0x4, size 0x4
    float dest_speed; // offset 0x8, size 0x4
};
// total size: 0x2
class /* @class */ {
    // Members
public:
    unsigned char invisible : 1; // offset 0x0, size 0x1
    unsigned char ethereal : 1; // offset 0x0, size 0x1
    unsigned char merge : 1; // offset 0x0, size 0x1
    unsigned char word_break : 1; // offset 0x0, size 0x1
    unsigned char word_end : 1; // offset 0x0, size 0x1
    unsigned char line_break : 1; // offset 0x0, size 0x1
    unsigned char stop : 1; // offset 0x0, size 0x1
    unsigned char tab : 1; // offset 0x0, size 0x1
    unsigned char insert : 1; // offset 0x1, size 0x1
    unsigned char dynamic : 1; // offset 0x1, size 0x1
    unsigned char page_break : 1; // offset 0x1, size 0x1
    unsigned char stateful : 1; // offset 0x1, size 0x1
    unsigned char japanese_break : 1; // offset 0x1, size 0x1
    unsigned short dummy : 3; // offset 0x0, size 0x2
};
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
};
// total size: 0x10
class CurveInfo {
    // Members
public:
    class SparkyCurve * curveData; // offset 0x0, size 0x4
    signed int curveSize; // offset 0x4, size 0x4
    float alf_master; // offset 0x8, size 0x4
    float scl_master; // offset 0xC, size 0x4
};
// total size: 0x0
class xParSys {};
// total size: 0x20
class xCutsceneMgr : public xBase {
    // Members
public:
    class xCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    float oldfov; // offset 0x1C, size 0x4
};
// total size: 0x1C
class RpWorldCameraExt {
    // Members
public:
    class RpWorldSector * * frustumSectors; // offset 0x0, size 0x4
    signed int space; // offset 0x4, size 0x4
    signed int position; // offset 0x8, size 0x4
    class RpWorld * world; // offset 0xC, size 0x4
    class RwCamera * (* oldBeginUpdate)(class RwCamera *); // offset 0x10, size 0x4
    class RwCamera * (* oldEndUpdate)(class RwCamera *); // offset 0x14, size 0x4
    class RwObjectHasFrame * (* oldSync)(class RwObjectHasFrame *); // offset 0x18, size 0x4
};
// total size: 0x24
struct /* @anon1 */ {};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
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
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x50
class iEnv {
    // Members
public:
    class RpWorld * world; // offset 0x0, size 0x4
    class RpWorld * collision; // offset 0x4, size 0x4
    class RpWorld * fx; // offset 0x8, size 0x4
    class RpWorld * camera; // offset 0xC, size 0x4
    signed int jsp_count; // offset 0x10, size 0x4
    unsigned int * jsp_aid; // offset 0x14, size 0x4
    class xJSPHeader * * jsp_list; // offset 0x18, size 0x4
    class xBox * jsp_bound; // offset 0x1C, size 0x4
    signed int * jsp_visibilityCount; // offset 0x20, size 0x4
    signed int jspMatOrderCount; // offset 0x24, size 0x4
    class iEnvMatOrder * jspMatOrderList; // offset 0x28, size 0x4
    class RpLight * light[2]; // offset 0x2C, size 0x8
    class RwFrame * light_frame[2]; // offset 0x34, size 0x8
    signed int memlvl; // offset 0x3C, size 0x4
    unsigned short numOpaque; // offset 0x40, size 0x2
    unsigned short numTransparent; // offset 0x42, size 0x2
};
// total size: 0x10
class xJSPNodeTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xJSPNodeTreeBranch * branchNodes; // offset 0x4, size 0x4
    signed int numLeafNodes; // offset 0x8, size 0x4
    class xJSPNodeTreeLeaf * leafNodes; // offset 0xC, size 0x4
};
// total size: 0x10
class xCollideSphereToLineSegmentResults {
    // Members
public:
    float dist; // offset 0x0, size 0x4
    class xVec3 contact; // offset 0x4, size 0xC
};
// total size: 0x18
class xGridBound {
    // Members
public:
    void * data; // offset 0x0, size 0x4
    unsigned short gx; // offset 0x4, size 0x2
    unsigned short gz; // offset 0x6, size 0x2
    unsigned char oversize; // offset 0x8, size 0x1
    unsigned char deleted; // offset 0x9, size 0x1
    unsigned char gpad; // offset 0xA, size 0x1
    unsigned char pad; // offset 0xB, size 0x1
    class xGrid * grid; // offset 0xC, size 0x4
    class xGridBound * * head; // offset 0x10, size 0x4
    class xGridBound * next; // offset 0x14, size 0x4
};
// total size: 0x10
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0x74
class SparkyEmitter {
    // Members
public:
    enum en_npartyp useNPARtype; // offset 0x0, size 0x4
    class Flags flags; // offset 0x4, size 0x4
    class RunTime run; // offset 0x8, size 0x8
    class Size size; // offset 0x10, size 0x8
    class Damage dmg; // offset 0x18, size 0x10
    class Life life; // offset 0x28, size 0x8
    class Emit emit; // offset 0x30, size 0x10
    class Speed speed; // offset 0x40, size 0x24
    class CurveInfo curve; // offset 0x64, size 0x10
};
// total size: 0x4
class RwStreamFile {
    // Members
public:
    union { // inferred
        void * fpFile; // offset 0x0, size 0x4
        void * constfpFile; // offset 0x0, size 0x4
    };
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
// total size: 0x18
class xCMheader {
    // Members
public:
    unsigned int magic; // offset 0x0, size 0x4
    unsigned int version; // offset 0x4, size 0x4
    unsigned int crdID; // offset 0x8, size 0x4
    unsigned int state; // offset 0xC, size 0x4
    float total_time; // offset 0x10, size 0x4
    unsigned int total_size; // offset 0x14, size 0x4
};
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x18
class zFragAsset {
    // Members
public:
    enum zFragType type; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int parentID[2]; // offset 0x8, size 0x8
    float lifetime; // offset 0x10, size 0x4
    float delay; // offset 0x14, size 0x4
};
// total size: 0xCC
class xCutsceneMgrAsset : public xBaseAsset {
    // Members
public:
    unsigned int cutsceneAssetID; // offset 0x8, size 0x4
    unsigned int flags; // offset 0xC, size 0x4
    float interpSpeed; // offset 0x10, size 0x4
    unsigned int uSubtitlesID; // offset 0x14, size 0x4
    float startTime[15]; // offset 0x18, size 0x3C
    float endTime[15]; // offset 0x54, size 0x3C
    unsigned int emitID[15]; // offset 0x90, size 0x3C
};
// total size: 0x168
class xJSPNodeLight {
    // Members
public:
    class RpAtomic * atomic; // offset 0x0, size 0x4
    signed int lightCount; // offset 0x4, size 0x4
    class RpTie dummyTie; // offset 0x8, size 0x18
    class RpWorldSector dummySector; // offset 0x20, size 0x88
    class xJSPMiniLightTie dummyLightTie[16]; // offset 0xA8, size 0xC0
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
enum RxClusterValid {
    rxCLVALID_NOCHANGE = 0,
    rxCLVALID_VALID = 1,
    rxCLVALID_INVALID = 2,
    rxCLUSTERVALIDFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x18
class RwLine {
    // Members
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RwV3d end; // offset 0xC, size 0xC
};
// total size: 0x8
class xPERect {
    // Members
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
};
// total size: 0xC
class OriginalBackupData {
    // Members
public:
    signed int flg_enableWander : 1; // offset 0x0, size 0x4
    signed int flg_enablePatrol : 1; // offset 0x0, size 0x4
    signed int flg_enableDetect : 1; // offset 0x0, size 0x4
    signed int flg_activeOn : 1; // offset 0x0, size 0x4
    signed int flg_takeNoDamage : 1; // offset 0x0, size 0x4
    signed int flg_unused : 27; // offset 0x0, size 0x4
    union { // inferred
        enum en_allow overrideDetect; // offset 0x4, size 0x4
        signed int alignmeproperly; // offset 0x4, size 0x4
    };
    union { // inferred
        enum en_allow overrideAttack; // offset 0x8, size 0x4
        signed int alignmeproperlyToo; // offset 0x8, size 0x4
    };
};
// total size: 0x0
class xPlatformAsset {};
// total size: 0x8
class nodeInfo {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    unsigned int index; // offset 0x4, size 0x4
};
// total size: 0x114
class dualCamInfo {
    // Members
public:
    class xSweptSphere playerToCameraSWS; // offset 0x0, size 0xC8
    class xBound cameraBound; // offset 0xC8, size 0x4C
};
// total size: 0x24
struct /* @anon2 */ {};
// total size: 0x10
class xUpdateCullEnt {
    // Members
public:
    unsigned short index; // offset 0x0, size 0x2
    signed short groupIndex; // offset 0x2, size 0x2
    unsigned int (* update_cull_cb)(void *, void *); // offset 0x4, size 0x4
    void * cbdata; // offset 0x8, size 0x4
    class xUpdateCullEnt * nextInGroup; // offset 0xC, size 0x4
};
// total size: 0x80
class xCutsceneAudioTrack {
    // Members
public:
    unsigned int uLeftSoundId; // offset 0x0, size 0x4
    unsigned int uRightSoundId; // offset 0x4, size 0x4
    char szLeftSound[60]; // offset 0x8, size 0x3C
    char szRightSound[60]; // offset 0x44, size 0x3C
};
// total size: 0x28
class xMovePointAsset : public xBaseAsset {
    // Members
public:
    class xVec3 pos; // offset 0x8, size 0xC
    unsigned short wt; // offset 0x14, size 0x2
    unsigned char on; // offset 0x16, size 0x1
    unsigned char bezIndex; // offset 0x17, size 0x1
    unsigned char flg_props; // offset 0x18, size 0x1
    unsigned char pad; // offset 0x19, size 0x1
    unsigned short numPoints; // offset 0x1A, size 0x2
    float delay; // offset 0x1C, size 0x4
    float zoneRadius; // offset 0x20, size 0x4
    float arenaRadius; // offset 0x24, size 0x4
};
enum iSndGroupHandle {
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x24
class PolyTestParam {
    // Members
public:
    class RwBBox bbox; // offset 0x0, size 0x18
    class RpWorldSector * worldSector; // offset 0x18, size 0x4
    void * leafTestData; // offset 0x1C, size 0x4
    class CallBackParam * cbParam; // offset 0x20, size 0x4
};
// total size: 0x8
class __sbuf {
    // Members
public:
    unsigned char * _base; // offset 0x0, size 0x4
    signed int _size; // offset 0x4, size 0x4
};
// total size: 0x24
struct /* @anon3 */ {};
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
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
// total size: 0x20
class xGroup : public xBase {
    // Members
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
// total size: 0x4
class Flags {
    // Members
public:
    signed char doDamage; // offset 0x0, size 0x1
    signed char useLinear; // offset 0x1, size 0x1
    signed char unused[2]; // offset 0x2, size 0x2
};
// total size: 0xC
class CallBackParam {
    // Members
public:
    class RpIntersection * intersection; // offset 0x0, size 0x4
    class IntersectionCallBack u; // offset 0x4, size 0x4
    void * data; // offset 0x8, size 0x4
};
// total size: 0x8
class xCutsceneMphFrame {
    // Members
public:
    float Time; // offset 0x0, size 0x4
    unsigned int Flags; // offset 0x4, size 0x4
};
enum iSndHandle {
};
// total size: 0x88
class _atexit {
    // Members
public:
    class _atexit * _next; // offset 0x0, size 0x4
    signed int _ind; // offset 0x4, size 0x4
    void (* _fns[32])(); // offset 0x8, size 0x80
};
// total size: 0x4
class FullShadParm {
    // Members
public:
    signed int tobeDetermined; // offset 0x0, size 0x4
};
// total size: 0x0
class zFrag {};
enum xCollideSphereHitType {
    exCOLLIDESPHEREHITTYPE_UNKNOWN = 0,
    exCOLLIDESPHEREHITTYPE_INTERIOR = 1,
    exCOLLIDESPHEREHITTYPE_EDGE = 2,
    exCOLLIDESPHEREHITTYPE_VERTEX = 3,
};
// total size: 0x20
class xModelTag {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
// total size: 0x14
class xParInterp {
    // Members
public:
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
};
// total size: 0x18
class xBehaveMgr : public RyzMemData {
    // Members
public:
    class xFactory * goalFactory; // offset 0x0, size 0x4
    class xPsyche * psypool; // offset 0x4, size 0x4
    class st_XORDEREDARRAY psylist; // offset 0x8, size 0x10
};
// total size: 0xA0
class zNMEDriver {
    // Members
public:
    class xEnt * ent_driver; // offset 0x0, size 0x4
    float tym_mount; // offset 0x4, size 0x4
    class xMat4x3 mat_parLast; // offset 0x10, size 0x40
    class xMat4x3 mat_ownerLast; // offset 0x50, size 0x40
    signed int flg_inContact : 1; // offset 0x90, size 0x4
    signed int flg_matchOrient : 1; // offset 0x90, size 0x4
    signed int flg_unused : 30; // offset 0x90, size 0x4
};
enum en_xpsytime {
    XPSY_TYMR_CURGOAL = 0,
    XPSY_TYMR_NOMORE = 1,
};
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x28
class sphericalEmitterAsset : public xDynAsset {
    // Members
public:
    unsigned int effectID; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    class xVec3 position; // offset 0x18, size 0xC
    unsigned char onlyRumbleOnY; // offset 0x24, size 0x1
    unsigned char fallOff; // offset 0x25, size 0x1
    unsigned char onlyOnFloor; // offset 0x26, size 0x1
};
// total size: 0x30
class xMovePoint : public xBase {
    // Members
public:
    class xMovePointAsset * asset; // offset 0x10, size 0x4
    class xVec3 * pos; // offset 0x14, size 0x4
    class xMovePoint * * nodes; // offset 0x18, size 0x4
    class xMovePoint * prev; // offset 0x1C, size 0x4
    unsigned int node_wt_sum; // offset 0x20, size 0x4
    unsigned char on; // offset 0x24, size 0x1
    unsigned char pad[3]; // offset 0x25, size 0x3
    float delay; // offset 0x28, size 0x4
    class xSpline3 * spl; // offset 0x2C, size 0x4
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
class xPEEntBound {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char pad1; // offset 0x2, size 0x1
    unsigned char pad2; // offset 0x3, size 0x1
    float expand; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0x2B0
class zPlatform : public zEnt {
    // Members
public:
    class xPlatformAsset * plat_asset; // offset 0xDC, size 0x4
    class xEntMotion motion; // offset 0xE0, size 0xD0
    unsigned short state; // offset 0x1B0, size 0x2
    unsigned short plat_flags; // offset 0x1B2, size 0x2
    float tmr; // offset 0x1B4, size 0x4
    signed int ctr; // offset 0x1B8, size 0x4
    class xMovePoint * src; // offset 0x1BC, size 0x4
    class xModelInstance * am; // offset 0x1C0, size 0x4
    class xModelInstance * bm; // offset 0x1C4, size 0x4
    signed int moving; // offset 0x1C8, size 0x4
    class xEntDrive drv; // offset 0x1D0, size 0xC0
    class zPlatFMRunTime * fmrt; // offset 0x290, size 0x4
    class zDestructible * destructible; // offset 0x294, size 0x4
    float elapsedTime; // offset 0x298, size 0x4
    class xEntOpacity opacity; // offset 0x29C, size 0x8
    enum iSndHandle sndID; // offset 0x2A4, size 0x4
};
// total size: 0x4
class xPSYNote {};
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
};
// total size: 0x20
class sphericalEmitter : public emitterBase {
    // Members
public:
    class sphericalEmitterAsset * pAsset; // offset 0x18, size 0x4
    float radiusSqrd; // offset 0x1C, size 0x4
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
class zNMEAsset : public xDynAsset {
    // Members
public:
    class xEntAsset ent_asset; // offset 0x10, size 0x50
};
// total size: 0x8
class xCutsceneMphRun {
    // Members
public:
    signed int VertIdx; // offset 0x0, size 0x4
    signed int VertCt; // offset 0x4, size 0x4
};
// total size: 0x54
class xParEmitterAsset : public xBaseAsset {
    // Members
public:
    unsigned char emit_flags; // offset 0x8, size 0x1
    unsigned char emit_type; // offset 0x9, size 0x1
    unsigned short pad; // offset 0xA, size 0x2
    unsigned int propID; // offset 0xC, size 0x4
    union { // inferred
        class xPECircle e_circle; // offset 0x10, size 0x14
        class xPESphere e_sphere; // offset 0x10, size 0x4
        class xPERect e_rect; // offset 0x10, size 0x8
        class xPELine e_line; // offset 0x10, size 0x1C
        class xPEVolume e_volume; // offset 0x10, size 0x4
        class xPEOffsetPoint e_offsetp; // offset 0x10, size 0xC
        class xPEVCyl e_vcyl; // offset 0x10, size 0xC
        class xPEEntBone e_entbone; // offset 0x10, size 0x18
        class xPEEntBound e_entbound; // offset 0x10, size 0xC
    };
    unsigned int attachToID; // offset 0x2C, size 0x4
    class xVec3 pos; // offset 0x30, size 0xC
    class xVec3 vel; // offset 0x3C, size 0xC
    float vel_angle_variation; // offset 0x48, size 0x4
    unsigned int cull_mode; // offset 0x4C, size 0x4
    float cull_dist_sqr; // offset 0x50, size 0x4
};
// total size: 0xC
class RwStreamMemory {
    // Members
public:
    unsigned int position; // offset 0x0, size 0x4
    unsigned int nSize; // offset 0x4, size 0x4
    unsigned char * memBlock; // offset 0x8, size 0x4
};
// total size: 0xC
class xCounterAsset : public xBaseAsset {
    // Members
public:
    signed short count; // offset 0x8, size 0x2
};
// total size: 0x30
class xEntSplineData {
    // Members
public:
    class xEntSpeedData speed_data; // offset 0x0, size 0xC
    class NURBS * spline; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    unsigned char arrived; // offset 0x14, size 0x1
    float position_blend_v; // offset 0x18, size 0x4
    float orient_blend_v; // offset 0x1C, size 0x4
    class xQuat current_orient; // offset 0x20, size 0x10
};
enum PSY_BRAIN_STATUS {
    PSY_STAT_BLANK = 0,
    PSY_STAT_GROW = 1,
    PSY_STAT_EXTEND = 2,
    PSY_STAT_THINK = 3,
    PSY_STAT_NOMORE = 4,
    PSY_STAT_FORCE = 2147483647,
};
// total size: 0x10
class xJSPNodeTreeBranch {
    // Members
public:
    unsigned short leftNode; // offset 0x0, size 0x2
    unsigned short rightNode; // offset 0x2, size 0x2
    unsigned char leftType; // offset 0x4, size 0x1
    unsigned char rightType; // offset 0x5, size 0x1
    unsigned short coord; // offset 0x6, size 0x2
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
};
// total size: 0x24
class RxObjSpace3DVertex {
    // Members
public:
    class RwV3d objVertex; // offset 0x0, size 0xC
    class RxColorUnion c; // offset 0xC, size 0x4
    class RwV3d objNormal; // offset 0x10, size 0xC
    float u; // offset 0x1C, size 0x4
    float v; // offset 0x20, size 0x4
};
// total size: 0x24
struct /* @anon4 */ {};
enum zFragType {
    eFragInactive = 0,
    eFragGroup = 1,
    eFragShrapnel = 2,
    eFragParticle = 3,
    eFragProjectile = 4,
    eFragLightning = 5,
    eFragSound = 6,
    eFragShockwave = 7,
    eFragExplosion = 8,
    eFragDistortion = 9,
    eFragFire = 10,
    eFragCount = 11,
    eFragForceSize = 2147483647,
};
// total size: 0xC
class zone_data {
    // Members
public:
    float distance; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
    float height_focus; // offset 0x8, size 0x4
};
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x1
class RyzMemData {};
// total size: 0x14
class xEntMotionPenData {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char plane; // offset 0x1, size 0x1
    unsigned char pad[2]; // offset 0x2, size 0x2
    float len; // offset 0x4, size 0x4
    float range; // offset 0x8, size 0x4
    float period; // offset 0xC, size 0x4
    float phase; // offset 0x10, size 0x4
};
// total size: 0x8
class zDestructibleStateAttachedAnimList {
    // Members
public:
    unsigned int nanimations; // offset 0x0, size 0x4
    void * * animData; // offset 0x4, size 0x4
};
// total size: 0x10
class _tagRain {
    // Members
public:
    signed int rain; // offset 0x0, size 0x4
    float strength; // offset 0x4, size 0x4
    class zParEmitter * rain_emitter; // offset 0x8, size 0x4
    class zParEmitter * snow_emitter; // offset 0xC, size 0x4
};
// total size: 0x4
class IntersectionCallBack {
    // Members
public:
    union { // inferred
        class RpWorldSector * (* sectorCB)(class RpIntersection *, class RpWorldSector *, void *); // offset 0x0, size 0x4
        class RpCollisionTriangle * (* worldCB)(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // offset 0x0, size 0x4
        class RpAtomic * (* atomicCB)(class RpIntersection *, class RpWorldSector *, class RpAtomic *, float, void *); // offset 0x0, size 0x4
    };
};
// total size: 0x1C
class xPELine {
    // Members
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
};
// total size: 0x50
class xEntPenData {
    // Members
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
};
// total size: 0x18
class xClumpCollV3dGradient {
    // Members
public:
    float dydx; // offset 0x0, size 0x4
    float dzdx; // offset 0x4, size 0x4
    float dxdy; // offset 0x8, size 0x4
    float dzdy; // offset 0xC, size 0x4
    float dxdz; // offset 0x10, size 0x4
    float dydz; // offset 0x14, size 0x4
};
// total size: 0x1C
class NMECfgCommon {
    // Members
public:
    class Damage damage; // offset 0x0, size 0x4
    class Physics physics; // offset 0x4, size 0x8
    class Movement movement; // offset 0xC, size 0x10
};
// total size: 0x10
class TempAtomicList {
    // Members
public:
    class RpAtomic * atomic; // offset 0x0, size 0x4
    class RpGeometry * geom; // offset 0x4, size 0x4
    class RpMeshHeader * meshHeader; // offset 0x8, size 0x4
    class RwMeshCache * meshCache; // offset 0xC, size 0x4
};
// total size: 0x20
class xMorphTargetFile {
    // Members
public:
    unsigned int Magic; // offset 0x0, size 0x4
    unsigned short NumTargets; // offset 0x4, size 0x2
    unsigned short NumVerts; // offset 0x6, size 0x2
    unsigned int Flags; // offset 0x8, size 0x4
    float Scale; // offset 0xC, size 0x4
    class xVec3 Center; // offset 0x10, size 0xC
    float Radius; // offset 0x1C, size 0x4
};
// total size: 0x18
class xEntNPCAsset {
    // Members
public:
    signed int npcFlags; // offset 0x0, size 0x4
    signed int npcModel; // offset 0x4, size 0x4
    signed int npcProps; // offset 0x8, size 0x4
    unsigned int movepoint; // offset 0xC, size 0x4
    unsigned int taskWidgetPrime; // offset 0x10, size 0x4
    unsigned int taskWidgetSecond; // offset 0x14, size 0x4
};
// total size: 0x38
class effectAsset : public xDynAsset {
    // Members
public:
    float time; // offset 0x10, size 0x4
    float intensity; // offset 0x14, size 0x4
    unsigned int id; // offset 0x18, size 0x4
    unsigned char priority; // offset 0x1C, size 0x1
    unsigned char type; // offset 0x1D, size 0x1
    unsigned char rumbleInPause; // offset 0x1E, size 0x1
    unsigned char pad; // offset 0x1F, size 0x1
    float param1; // offset 0x20, size 0x4
    float param2; // offset 0x24, size 0x4
    float shakeMagnitude; // offset 0x28, size 0x4
    float shakeCycleMax; // offset 0x2C, size 0x4
    float shakeRotationalMagnitude; // offset 0x30, size 0x4
    unsigned char shakeY; // offset 0x34, size 0x1
};
// total size: 0x0
class NURBS {};
// total size: 0x0
class xFFX {};
// total size: 0x160
class xCamDebug : public xCam {
    // Members
public:
    class config cfg; // offset 0xD0, size 0x70
    class analog_data * analog_move; // offset 0x140, size 0x4
    class analog_data * analog_turn; // offset 0x144, size 0x4
    class xVec2 dpad; // offset 0x148, size 0x8
    float slow_input; // offset 0x150, size 0x4
};
// total size: 0x1C
class RyzMemGrow {
    // Members
public:
    signed int flg_grow; // offset 0x0, size 0x4
    signed int amt; // offset 0x4, size 0x4
    char * ptr; // offset 0x8, size 0x4
    class xBase * user; // offset 0xC, size 0x4
    signed int amt_last; // offset 0x10, size 0x4
    char * ptr_last; // offset 0x14, size 0x4
    class xBase * user_last; // offset 0x18, size 0x4
};
enum _xCollsIdx {
    k_XCOLLS_IDX_FLOOR = 0,
    k_XCOLLS_IDX_CEIL = 1,
    k_XCOLLS_IDX_FRONT = 2,
    k_XCOLLS_IDX_LEFT = 3,
    k_XCOLLS_IDX_REAR = 4,
    k_XCOLLS_IDX_RIGHT = 5,
    k_XCOLLS_IDX_COUNT = 6,
};
// total size: 0x24
struct /* @anon5 */ {};
// total size: 0x8
class ShadowRadii {
    // Members
public:
    float rad_noShadow; // offset 0x0, size 0x4
    float rad_complexShadow; // offset 0x4, size 0x4
};
// total size: 0x170
class zPlatFMRunTime {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float tmrs[13]; // offset 0x4, size 0x34
    float ttms[13]; // offset 0x38, size 0x34
    float atms[13]; // offset 0x6C, size 0x34
    float dtms[13]; // offset 0xA0, size 0x34
    float vms[13]; // offset 0xD4, size 0x34
    float dss[13]; // offset 0x108, size 0x34
    float total_change[13]; // offset 0x13C, size 0x34
};
// total size: 0x28
class xEntMotionERData {
    // Members
public:
    class xVec3 ret_pos; // offset 0x0, size 0xC
    class xVec3 ext_dpos; // offset 0xC, size 0xC
    float ext_tm; // offset 0x18, size 0x4
    float ext_wait_tm; // offset 0x1C, size 0x4
    float ret_tm; // offset 0x20, size 0x4
    float ret_wait_tm; // offset 0x24, size 0x4
};
// total size: 0x8
class RunTime {
    // Members
public:
    float acc_gravity; // offset 0x0, size 0x4
    float fac_damp; // offset 0x4, size 0x4
};
// total size: 0xC
class RpMaterialList {
    // Members
public:
    class RpMaterial * * materials; // offset 0x0, size 0x4
    signed int numMaterials; // offset 0x4, size 0x4
    signed int space; // offset 0x8, size 0x4
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x40
class RpLight {
    // Members
public:
    class RwObjectHasFrame object; // offset 0x0, size 0x14
    float radius; // offset 0x14, size 0x4
    class RwRGBAReal color; // offset 0x18, size 0x10
    float minusCosAngle; // offset 0x28, size 0x4
    class RwLinkList WorldSectorsInLight; // offset 0x2C, size 0x8
    class RwLLLink inWorld; // offset 0x34, size 0x8
    unsigned short lightFrame; // offset 0x3C, size 0x2
    unsigned short pad; // offset 0x3E, size 0x2
};
// total size: 0x184
class xParEmitterCustomSettings : public xParEmitterPropsAsset {
    // Members
public:
    unsigned int custom_flags; // offset 0x138, size 0x4
    unsigned int attachToID; // offset 0x13C, size 0x4
    class xVec3 pos; // offset 0x140, size 0xC
    class xVec3 last_emit_position; // offset 0x14C, size 0xC
    class xVec3 vel; // offset 0x158, size 0xC
    class xVec3 last_emit_velocity; // offset 0x164, size 0xC
    float vel_angle_variation; // offset 0x170, size 0x4
    unsigned char rot[3]; // offset 0x174, size 0x3
    unsigned char padding; // offset 0x177, size 0x1
    float radius; // offset 0x178, size 0x4
    float emit_interval_current; // offset 0x17C, size 0x4
    class xBase * emit_volume; // offset 0x180, size 0x4
};
// total size: 0x1C4
class RpCollSectorCapsuleIt {
    // Members
public:
    class RpCollTree * tree; // offset 0x0, size 0x4
    class RwV3d start; // offset 0x4, size 0xC
    class RwV3d delta; // offset 0x10, size 0xC
    class RwV3d recip; // offset 0x1C, size 0xC
    float radius; // offset 0x28, size 0x4
    class RpCollSector dummy; // offset 0x2C, size 0x8
    class RpCollSectorLineItNodeInfo stack[33]; // offset 0x34, size 0x18C
    class RpCollSectorLineItNodeInfo * curr; // offset 0x1C0, size 0x4
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
// total size: 0x40
class xEntBoulderAsset {
    // Members
public:
    float gravity; // offset 0x0, size 0x4
    float mass; // offset 0x4, size 0x4
    float bounce; // offset 0x8, size 0x4
    float friction; // offset 0xC, size 0x4
    float maxVel; // offset 0x10, size 0x4
    float maxAngVel; // offset 0x14, size 0x4
    float stickiness; // offset 0x18, size 0x4
    float bounceDamp; // offset 0x1C, size 0x4
    unsigned int flags; // offset 0x20, size 0x4
    float killtimer; // offset 0x24, size 0x4
    unsigned int hitpoints; // offset 0x28, size 0x4
    union { // inferred
        unsigned int uSoundGroupHash; // offset 0x2C, size 0x4
        enum iSndGroupHandle soundID; // offset 0x2C, size 0x4
    };
    float minSoundVel; // offset 0x30, size 0x4
    float maxSoundVel; // offset 0x34, size 0x4
    float fSphereRadius; // offset 0x38, size 0x4
    unsigned char uPad0; // offset 0x3C, size 0x1
    unsigned char uPad1; // offset 0x3D, size 0x1
    unsigned char uPad2; // offset 0x3E, size 0x1
    unsigned char uBoneIndex; // offset 0x3F, size 0x1
};
// total size: 0xF0
class /* @class */ {
    // Members
public:
    union { // inferred
        // total size: 0x58
        class /* @class */ {
            // Members
        public:
            unsigned int _unused_rand; // offset 0x0, size 0x4
            char * _strtok_last; // offset 0x4, size 0x4
            char _asctime_buf[26]; // offset 0x8, size 0x1A
            class tm _localtime_buf; // offset 0x24, size 0x24
            signed int _gamma_signgam; // offset 0x48, size 0x4
            unsigned long long _rand_next; // offset 0x50, size 0x8
        } _reent; // offset 0x0, size 0x58
        // total size: 0xF0
        class /* @class */ {
            // Members
        public:
            unsigned char * _nextf[30]; // offset 0x0, size 0x78
            unsigned int _nmalloc[30]; // offset 0x78, size 0x78
        } _unused; // offset 0x0, size 0xF0
    };
};
// total size: 0x10
class iEnvMatOrder {
    // Members
public:
    unsigned short jspIndex; // offset 0x0, size 0x2
    unsigned short nodeIndex; // offset 0x2, size 0x2
    signed int matGroup; // offset 0x4, size 0x4
    class RpAtomic * atomic; // offset 0x8, size 0x4
    class xJSPNodeInfo * nodeInfo; // offset 0xC, size 0x4
};
// total size: 0x8
class RwMeshCache {
    // Members
public:
    unsigned int lengthOfMeshesArray; // offset 0x0, size 0x4
    class RwResEntry * meshes[1]; // offset 0x4, size 0x4
};
// total size: 0x50
class PolyLineTestParam {
    // Members
public:
    class RwV3d start; // offset 0x0, size 0xC
    class RpWorldSector * worldSector; // offset 0xC, size 0x4
    class RwV3d delta; // offset 0x10, size 0xC
    class xClumpCollV3dGradient grad; // offset 0x1C, size 0x18
    class RwLine line; // offset 0x34, size 0x18
    class CallBackParam * cbParam; // offset 0x4C, size 0x4
};
// total size: 0x8
class rwPS2AllClusterQuickInfo {
    // Members
public:
    __int128 * data; // offset 0x0, size 0x4
    unsigned int stride; // offset 0x4, size 0x4
};
enum RpIntersectType {
    rpINTERSECTNONE = 0,
    rpINTERSECTLINE = 1,
    rpINTERSECTPOINT = 2,
    rpINTERSECTSPHERE = 3,
    rpINTERSECTBOX = 4,
    rpINTERSECTATOMIC = 5,
    rpINTERSECTTYPEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x4
class RpVertexNormal {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
    signed char z; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
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
// total size: 0x5280
class tagiRenderArrays {
    // Members
public:
    unsigned short m_index[960]; // offset 0x0, size 0x780
    class RxObjSpace3DVertex m_vertex[480]; // offset 0x780, size 0x4380
    float m_vertexTZ[480]; // offset 0x4B00, size 0x780
};
enum RxClusterForcePresent {
    rxCLALLOWABSENT = 0,
    rxCLFORCEPRESENT = 1,
    rxCLUSTERFORCEPRESENTFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x8
class JDeltaRun {
    // Members
public:
    signed int VertIdx; // offset 0x0, size 0x4
    signed int VertCt; // offset 0x4, size 0x4
};
// total size: 0x2C
class xDestructibleAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int nstates; // offset 0x4, size 0x4
    unsigned int hit_points; // offset 0x8, size 0x4
    unsigned int hit_filter; // offset 0xC, size 0x4
    unsigned int launch_flag; // offset 0x10, size 0x4
    unsigned int behaviour; // offset 0x14, size 0x4
    unsigned int flags; // offset 0x18, size 0x4
    unsigned int soundgroupidleID; // offset 0x1C, size 0x4
    float respawn; // offset 0x20, size 0x4
    unsigned char target_priority; // offset 0x24, size 0x1
    class xDestructibleAssetState * states; // offset 0x28, size 0x4
};
// total size: 0x18
class zone_data {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
    class xVec3 face; // offset 0xC, size 0xC
};
// total size: 0xA4
class xShadowSimpleCache {
    // Members
public:
    unsigned short flags; // offset 0x0, size 0x2
    unsigned char alpha; // offset 0x2, size 0x1
    unsigned char pad; // offset 0x3, size 0x1
    unsigned int collPriority; // offset 0x4, size 0x4
    class xVec3 pos; // offset 0x8, size 0xC
    class xVec3 at; // offset 0x14, size 0xC
    float tol_movement; // offset 0x20, size 0x4
    float radiusOptional; // offset 0x24, size 0x4
    class xEnt * castOnEnt; // offset 0x28, size 0x4
    class xShadowSimplePoly poly; // offset 0x2C, size 0x30
    float envHeight; // offset 0x5C, size 0x4
    float shadowHeight; // offset 0x60, size 0x4
    union { // inferred
        unsigned int raster; // offset 0x64, size 0x4
        class RwRaster * ptr_raster; // offset 0x64, size 0x4
    };
    float dydx; // offset 0x68, size 0x4
    float dydz; // offset 0x6C, size 0x4
    class xVec3 corner[4]; // offset 0x70, size 0x30
    void * collSkipsItem; // offset 0xA0, size 0x4
};
// total size: 0x11C
class base : public xEnt, public xFactoryInst {
    // Members
public:
    signed short bound_bone; // offset 0xE4, size 0x2
    unsigned short sound_id_offset; // offset 0xE6, size 0x2
    unsigned short global_parameters_size; // offset 0xE8, size 0x2
    unsigned short local_parameters_size; // offset 0xEA, size 0x2
    unsigned int type; // offset 0xEC, size 0x4
    class xModelAssetParam * global_parameters; // offset 0xF0, size 0x4
    class xModelAssetParam * local_parameters; // offset 0xF4, size 0x4
    union { // inferred
        class xMovePoint * movepoint; // offset 0xF8, size 0x4
        unsigned int movepoint_asset_id; // offset 0xF8, size 0x4
    };
    class xEntNPCAssetIN * npc_asset; // offset 0xFC, size 0x4
    class xModelAssetInfo * model_asset; // offset 0x100, size 0x4
    float shadow_strength; // offset 0x104, size 0x4
    float shadow_cache_fudge_factor; // offset 0x108, size 0x4
    class xVec3 bound_offset; // offset 0x110, size 0xC
};
// total size: 0x18
class xPortalAsset : public xBaseAsset {
    // Members
public:
    unsigned int assetCameraID; // offset 0x8, size 0x4
    unsigned int assetMarkerID; // offset 0xC, size 0x4
    float ang; // offset 0x10, size 0x4
    unsigned int sceneID; // offset 0x14, size 0x4
};
// total size: 0x4
class RxColorUnion {
    // Members
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
// total size: 0x5C
class zDestructible {
    // Members
public:
    class xDestructibleAsset * asset; // offset 0x0, size 0x4
    unsigned int id; // offset 0x4, size 0x4
    unsigned int cur_hit_pts; // offset 0x8, size 0x4
    unsigned int curstateidx; // offset 0xC, size 0x4
    unsigned int nstates; // offset 0x10, size 0x4
    unsigned int hit_pts; // offset 0x14, size 0x4
    unsigned int hit_filter; // offset 0x18, size 0x4
    unsigned int launch_flag; // offset 0x1C, size 0x4
    unsigned int behaviour; // offset 0x20, size 0x4
    unsigned int base_modelID; // offset 0x24, size 0x4
    enum iSndGroupHandle sg_handle_idle; // offset 0x28, size 0x4
    enum iSndHandle sh_handle_idle; // offset 0x2C, size 0x4
    class xModelInstance * base_model; // offset 0x30, size 0x4
    class xModelInstance * base_collision; // offset 0x34, size 0x4
    class zDestructibleState * dstates; // offset 0x38, size 0x4
    float hit_to_destroy_timer; // offset 0x3C, size 0x4
    float timer; // offset 0x40, size 0x4
    float respawn_time; // offset 0x44, size 0x4
    void (* destroy_notify)(class zDestructible *, void *); // offset 0x48, size 0x4
    void * notify_context; // offset 0x4C, size 0x4
    class xEnt * root_ent; // offset 0x50, size 0x4
    unsigned int flags; // offset 0x54, size 0x4
    unsigned char has_animation; // offset 0x58, size 0x1
    unsigned char active; // offset 0x59, size 0x1
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
};
enum RwStreamAccessType {
    rwNASTREAMACCESS = 0,
    rwSTREAMREAD = 1,
    rwSTREAMWRITE = 2,
    rwSTREAMAPPEND = 3,
    rwSTREAMACCESSTYPEFORCEENUMSIZEINT = 2147483647,
};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
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
// total size: 0x3C
class config {
    // Members
public:
    class zone_data zone_rest; // offset 0x0, size 0xC
    class zone_data zone_above; // offset 0xC, size 0xC
    class zone_data zone_below; // offset 0x18, size 0xC
    float move_speed; // offset 0x24, size 0x4
    float turn_speed; // offset 0x28, size 0x4
    float stick_speed; // offset 0x2C, size 0x4
    float stick_yaw_vel; // offset 0x30, size 0x4
    float max_yaw_vel; // offset 0x34, size 0x4
    float margin_angle; // offset 0x38, size 0x4
};
// total size: 0xC
class RpCollSectorLineItNodeInfo {
    // Members
public:
    class RpCollSector * sector; // offset 0x0, size 0x4
    float pa; // offset 0x4, size 0x4
    float pb; // offset 0x8, size 0x4
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
};
// total size: 0x160
class zGlobalSettings {
    // Members
public:
    unsigned short AnalogMin; // offset 0x0, size 0x2
    unsigned short AnalogMax; // offset 0x2, size 0x2
    float SundaeTime; // offset 0x4, size 0x4
    float SundaeMult; // offset 0x8, size 0x4
    unsigned int InitialShinyCount; // offset 0xC, size 0x4
    unsigned int InitialSpatulaCount; // offset 0x10, size 0x4
    signed int ShinyValuePurple; // offset 0x14, size 0x4
    signed int ShinyValueBlue; // offset 0x18, size 0x4
    signed int ShinyValueGreen; // offset 0x1C, size 0x4
    signed int ShinyValueYellow; // offset 0x20, size 0x4
    signed int ShinyValueRed; // offset 0x24, size 0x4
    signed int ShinyValueCombo0; // offset 0x28, size 0x4
    signed int ShinyValueCombo1; // offset 0x2C, size 0x4
    signed int ShinyValueCombo2; // offset 0x30, size 0x4
    signed int ShinyValueCombo3; // offset 0x34, size 0x4
    signed int ShinyValueCombo4; // offset 0x38, size 0x4
    signed int ShinyValueCombo5; // offset 0x3C, size 0x4
    signed int ShinyValueCombo6; // offset 0x40, size 0x4
    signed int ShinyValueCombo7; // offset 0x44, size 0x4
    signed int ShinyValueCombo8; // offset 0x48, size 0x4
    signed int ShinyValueCombo9; // offset 0x4C, size 0x4
    signed int ShinyValueCombo10; // offset 0x50, size 0x4
    signed int ShinyValueCombo11; // offset 0x54, size 0x4
    signed int ShinyValueCombo12; // offset 0x58, size 0x4
    signed int ShinyValueCombo13; // offset 0x5C, size 0x4
    signed int ShinyValueCombo14; // offset 0x60, size 0x4
    signed int ShinyValueCombo15; // offset 0x64, size 0x4
    float ComboTimer; // offset 0x68, size 0x4
    unsigned int Initial_Specials; // offset 0x6C, size 0x4
    unsigned int TakeDamage; // offset 0x70, size 0x4
    float DamageTimeHit; // offset 0x74, size 0x4
    float DamageTimeSurface; // offset 0x78, size 0x4
    float DamageTimeEGen; // offset 0x7C, size 0x4
    float DamageSurfKnock; // offset 0x80, size 0x4
    float DamageGiveHealthKnock; // offset 0x84, size 0x4
    unsigned int CheatSpongeball; // offset 0x88, size 0x4
    unsigned int CheatPlayerSwitch; // offset 0x8C, size 0x4
    unsigned int CheatAlwaysPortal; // offset 0x90, size 0x4
    unsigned int CheatFlyToggle; // offset 0x94, size 0x4
    unsigned int FriendlySelectMode; // offset 0x98, size 0x4
    float RotMatchMaxAngle; // offset 0x9C, size 0x4
    float RotMatchMatchTime; // offset 0xA0, size 0x4
    float RotMatchRelaxTime; // offset 0xA4, size 0x4
    float Gravity; // offset 0xA8, size 0x4
    float BBashTime; // offset 0xAC, size 0x4
    float BBashHeight; // offset 0xB0, size 0x4
    float BBashDelay; // offset 0xB4, size 0x4
    float BBashCVTime; // offset 0xB8, size 0x4
    float BBounceSpeed; // offset 0xBC, size 0x4
    float BBashGauntletDelay; // offset 0xC0, size 0x4
    float BBashGauntletBlastRadius; // offset 0xC4, size 0x4
    float BSpinMinFrame; // offset 0xC8, size 0x4
    float BSpinMaxFrame; // offset 0xCC, size 0x4
    float BSpinRadius; // offset 0xD0, size 0x4
    float BSpinReach; // offset 0xD4, size 0x4
    float BSpinReachUpgrade; // offset 0xD8, size 0x4
    float CartwheelDamageSize; // offset 0xDC, size 0x4
    float BubbleBowlTimeDelay; // offset 0xE0, size 0x4
    float BubbleBowlLaunchPosLeft; // offset 0xE4, size 0x4
    float BubbleBowlLaunchPosUp; // offset 0xE8, size 0x4
    float BubbleBowlLaunchPosAt; // offset 0xEC, size 0x4
    float BubbleBowlLaunchVelLeft; // offset 0xF0, size 0x4
    float BubbleBowlLaunchVelUp; // offset 0xF4, size 0x4
    float BubbleBowlLaunchVelAt; // offset 0xF8, size 0x4
    float BubbleBowlPercentIncrease; // offset 0xFC, size 0x4
    float BubbleBowlMinSpeed; // offset 0x100, size 0x4
    float BubbleBowlMinRecoverTime; // offset 0x104, size 0x4
    float SlideAccelVelMin; // offset 0x108, size 0x4
    float SlideAccelVelMax; // offset 0x10C, size 0x4
    float SlideAccelStart; // offset 0x110, size 0x4
    float SlideAccelEnd; // offset 0x114, size 0x4
    float SlideAccelPlayerFwd; // offset 0x118, size 0x4
    float SlideAccelPlayerBack; // offset 0x11C, size 0x4
    float SlideAccelPlayerSide; // offset 0x120, size 0x4
    float SlideVelMaxStart; // offset 0x124, size 0x4
    float SlideVelMaxEnd; // offset 0x128, size 0x4
    float SlideVelMaxIncTime; // offset 0x12C, size 0x4
    float SlideVelMaxIncAccel; // offset 0x130, size 0x4
    float SlideAirHoldTime; // offset 0x134, size 0x4
    float SlideAirSlowTime; // offset 0x138, size 0x4
    float SlideAirDblHoldTime; // offset 0x13C, size 0x4
    float SlideAirDblSlowTime; // offset 0x140, size 0x4
    float SlideVelDblBoost; // offset 0x144, size 0x4
    unsigned char SlideApplyPhysics; // offset 0x148, size 0x1
    unsigned char PowerUp[10]; // offset 0x149, size 0xA
    unsigned char InitialPowerUp[10]; // offset 0x153, size 0xA
    unsigned char AttractModeDuringGameplay; // offset 0x15D, size 0x1
};
// total size: 0x30
class xShadowPoly {
    // Members
public:
    class xVec4 vert[3]; // offset 0x0, size 0x30
};
// total size: 0xF0
class /* @class */ {
    // Members
public:
    unsigned char * _nextf[30]; // offset 0x0, size 0x78
    unsigned int _nmalloc[30]; // offset 0x78, size 0x78
};
// total size: 0x4
class xPEVolume {
    // Members
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0xD0
class xEntMotion {
    // Members
public:
    class xEntMotionAsset * asset; // offset 0x0, size 0x4
    unsigned char type; // offset 0x4, size 0x1
    unsigned char pad; // offset 0x5, size 0x1
    unsigned short ent_motion_flags; // offset 0x6, size 0x2
    float t; // offset 0x8, size 0x4
    float tmr; // offset 0xC, size 0x4
    float d; // offset 0x10, size 0x4
    union { // inferred
        class xEntERData er; // offset 0x20, size 0x44
        class xEntOrbitData orb; // offset 0x20, size 0x28
        class xEntSplineData spl; // offset 0x20, size 0x30
        class xEntMPData mp; // offset 0x20, size 0x50
        class xEntMechData mech; // offset 0x20, size 0xA0
        class xEntPenData pen; // offset 0x20, size 0x50
    };
    class xEnt * owner; // offset 0xC0, size 0x4
    class xEnt * target; // offset 0xC4, size 0x4
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
// total size: 0xFC
class zPlayer : public zEnt {
    // Members
public:
    class xVec3 trigLastFramePos; // offset 0xE0, size 0xC
    signed int zPlayerFlags; // offset 0xEC, size 0x4
    unsigned int lorezModelID; // offset 0xF0, size 0x4
    class xModelInstance * lorezModel; // offset 0xF4, size 0x4
    class xModelInstance * hirezModel; // offset 0xF8, size 0x4
};
// total size: 0x38
class jot {
    // Members
public:
    class substr s; // offset 0x0, size 0x8
    // total size: 0x2
    class /* @class */ {
        // Members
    public:
        unsigned char invisible : 1; // offset 0x0, size 0x1
        unsigned char ethereal : 1; // offset 0x0, size 0x1
        unsigned char merge : 1; // offset 0x0, size 0x1
        unsigned char word_break : 1; // offset 0x0, size 0x1
        unsigned char word_end : 1; // offset 0x0, size 0x1
        unsigned char line_break : 1; // offset 0x0, size 0x1
        unsigned char stop : 1; // offset 0x0, size 0x1
        unsigned char tab : 1; // offset 0x0, size 0x1
        unsigned char insert : 1; // offset 0x1, size 0x1
        unsigned char dynamic : 1; // offset 0x1, size 0x1
        unsigned char page_break : 1; // offset 0x1, size 0x1
        unsigned char stateful : 1; // offset 0x1, size 0x1
        unsigned char japanese_break : 1; // offset 0x1, size 0x1
        unsigned short dummy : 3; // offset 0x0, size 0x2
    } flag; // offset 0x8, size 0x2
    unsigned short context_size; // offset 0xA, size 0x2
    void * context; // offset 0xC, size 0x4
    class basic_rect bounds; // offset 0x10, size 0x10
    class basic_rect render_bounds; // offset 0x20, size 0x10
    class callback * cb; // offset 0x30, size 0x4
    class tag_type * tag; // offset 0x34, size 0x4
};
// total size: 0x20C
class zPlayerLassoInfo {
    // Members
public:
    float dist; // offset 0x0, size 0x4
    class xEnt * swingTarget; // offset 0x4, size 0x4
    class xEnt * releasedSwing; // offset 0x8, size 0x4
    class zLasso lasso; // offset 0xC, size 0x200
};
// total size: 0x24
struct /* @anon6 */ {};
// total size: 0x8
class RpCollSector {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char contents; // offset 0x1, size 0x1
    unsigned short index; // offset 0x2, size 0x2
    float value; // offset 0x4, size 0x4
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
};
// total size: 0x8
class Size {
    // Members
public:
    float width; // offset 0x0, size 0x4
    float height; // offset 0x4, size 0x4
};
enum RwStreamType {
    rwNASTREAM = 0,
    rwSTREAMFILE = 1,
    rwSTREAMFILENAME = 2,
    rwSTREAMMEMORY = 3,
    rwSTREAMCUSTOM = 4,
    rwSTREAMTYPEFORCEENUMSIZEINT = 2147483647,
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0x3C
class xEntMotionAsset {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char use_banking; // offset 0x1, size 0x1
    unsigned short ent_motion_flags; // offset 0x2, size 0x2
    union { // inferred
        class xEntMotionERData er; // offset 0x4, size 0x28
        class xEntMotionOrbitData orb; // offset 0x4, size 0x18
        class xEntMotionSplineData spl; // offset 0x4, size 0xC
        class xEntMotionMPData mp; // offset 0x4, size 0xC
        class xEntMotionMechData mech; // offset 0x4, size 0x38
        class xEntMotionPenData pen; // offset 0x4, size 0x14
    };
};
// total size: 0x8
class TestSphere {
    // Members
public:
    class RwSphere * sphere; // offset 0x0, size 0x4
    float recipRadius; // offset 0x4, size 0x4
};
// total size: 0x380
class zLedgeGrabParams {
    // Members
public:
    float animGrab; // offset 0x0, size 0x4
    float zdist; // offset 0x4, size 0x4
    class xVec3 tranTable[60]; // offset 0x8, size 0x2D0
    signed int tranCount; // offset 0x2D8, size 0x4
    class xEnt * optr; // offset 0x2DC, size 0x4
    class xMat4x3 omat; // offset 0x2E0, size 0x40
    float y0det; // offset 0x320, size 0x4
    float dydet; // offset 0x324, size 0x4
    float r0det; // offset 0x328, size 0x4
    float drdet; // offset 0x32C, size 0x4
    float thdet; // offset 0x330, size 0x4
    float rtime; // offset 0x334, size 0x4
    float ttime; // offset 0x338, size 0x4
    float tmr; // offset 0x33C, size 0x4
    class xVec3 spos; // offset 0x340, size 0xC
    class xVec3 epos; // offset 0x34C, size 0xC
    class xVec3 tpos; // offset 0x358, size 0xC
    signed int nrays; // offset 0x364, size 0x4
    signed int rrand; // offset 0x368, size 0x4
    float startrot; // offset 0x36C, size 0x4
    float endrot; // offset 0x370, size 0x4
};
// total size: 0x10
class zJumpParam {
    // Members
public:
    float PeakHeight; // offset 0x0, size 0x4
    float TimeGravChange; // offset 0x4, size 0x4
    float TimeHold; // offset 0x8, size 0x4
    float ImpulseVel; // offset 0xC, size 0x4
};
// total size: 0x4
class Damage {
    // Members
public:
    float tym_invuln; // offset 0x0, size 0x4
};
// total size: 0x14
class _tagWind {
    // Members
public:
    float strength; // offset 0x0, size 0x4
    float angle; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
// total size: 0x138
class xParEmitterPropsAsset : public xBaseAsset {
    // Members
public:
    unsigned int parSysID; // offset 0x8, size 0x4
    union { // inferred
        class xParInterp rate; // offset 0xC, size 0x14
        class xParInterp value[1]; // offset 0xC, size 0x14
    };
    class xParInterp life; // offset 0x20, size 0x14
    class xParInterp size_birth; // offset 0x34, size 0x14
    class xParInterp size_death; // offset 0x48, size 0x14
    class xParInterp color_birth[4]; // offset 0x5C, size 0x50
    class xParInterp color_death[4]; // offset 0xAC, size 0x50
    class xParInterp vel_scale; // offset 0xFC, size 0x14
    class xParInterp vel_angle; // offset 0x110, size 0x14
    class xVec3 vel; // offset 0x124, size 0xC
    unsigned int emit_limit; // offset 0x130, size 0x4
    float emit_limit_reset_time; // offset 0x134, size 0x4
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
// total size: 0x4F0
class zScene : public xScene {
    // Members
public:
    class _zPortal * pendingPortal; // offset 0x68, size 0x4
    signed int num_base; // offset 0x6C, size 0x4
    class xBase * * base; // offset 0x70, size 0x4
    unsigned int num_update_base; // offset 0x74, size 0x4
    class xBase * * update_base; // offset 0x78, size 0x4
    signed int baseCount[141]; // offset 0x7C, size 0x234
    class xBase * baseList[141]; // offset 0x2B0, size 0x234
    class _zEnv * zen; // offset 0x4E4, size 0x4
    class zSceneParameters * parameters; // offset 0x4E8, size 0x4
    unsigned char enableDrawing; // offset 0x4EC, size 0x1
};
enum Dimension {
    XDIM = 0,
    YDIM = 1,
    ZDIM = 2,
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
// total size: 0x10
class xCoef {
    // Members
public:
    float a[4]; // offset 0x0, size 0x10
};
// total size: 0x50
class xEntMPData {
    // Members
public:
    class xEntSpeedData speed_data; // offset 0x0, size 0xC
    float curdist; // offset 0xC, size 0x4
    class xMovePoint * dest; // offset 0x10, size 0x4
    class xMovePoint * src; // offset 0x14, size 0x4
    class xSpline3 * spl; // offset 0x18, size 0x4
    float dist; // offset 0x1C, size 0x4
    unsigned int padalign; // offset 0x20, size 0x4
    class xQuat aquat; // offset 0x30, size 0x10
    class xQuat bquat; // offset 0x40, size 0x10
};
// total size: 0x0
class zRewardsMgr {};
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
// total size: 0x18
class JDeltaTarget {
    // Members
public:
    signed int skipSize; // offset 0x0, size 0x4
    signed int numRuns; // offset 0x4, size 0x4
    signed int numVerts; // offset 0x8, size 0x4
    float scale; // offset 0xC, size 0x4
    class JDeltaRun runs[1]; // offset 0x10, size 0x8
};
// total size: 0x20
class split_tag {
    // Members
public:
    class substr tag; // offset 0x0, size 0x8
    class substr name; // offset 0x8, size 0x8
    class substr action; // offset 0x10, size 0x8
    class substr value; // offset 0x18, size 0x8
};
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x70
class config : public xCamConfigFollow {
    // Members
public:
    class xVec2 stick_vel; // offset 0x54, size 0x8
    class xVec3 move_vel; // offset 0x5C, size 0xC
    float slow_turn; // offset 0x68, size 0x4
    float slow_move; // offset 0x6C, size 0x4
};
// total size: 0x0
class xModelAssetParam {};
// total size: 0x20
class xEntNPCAssetIN : public xEntNPCAsset {
    // Members
public:
    unsigned int navigation_mesh_id; // offset 0x18, size 0x4
    unsigned int settings; // offset 0x1C, size 0x4
};
enum en_nmesimp {
    NME_SIMP_HAPPY = 0,
    NME_SIMP_DEAD = 1,
    NME_SIMP_IGNORANT = 2,
    NME_SIMP_WARYDETECT = 3,
    NME_SIMP_WARY = 4,
    NME_SIMP_WORRIED = 5,
    NME_SIMP_CONFUSED = 6,
    NME_SIMP_BIGBULLY = 7,
    NPC_STAT_NOMORE = 8,
};
// total size: 0x2410
class zGlobals : public xGlobals {
    // Members
public:
    unsigned int playerTag; // offset 0x8A0, size 0x4
    unsigned int playerLoaded; // offset 0x8A4, size 0x4
    unsigned int playerLoadOrder[8]; // offset 0x8A8, size 0x20
    unsigned char invertJoystick; // offset 0x8C8, size 0x1
    class zPlayerGlobals player; // offset 0x8D0, size 0x1B00
    class zAssetPickupTable * pickupTable; // offset 0x23D0, size 0x4
    class zCutsceneMgr * cmgr; // offset 0x23D4, size 0x4
    class zCutsceneMgr * DisabledCutsceneDoneMgr; // offset 0x23D8, size 0x4
    char startDebugMode[32]; // offset 0x23DC, size 0x20
    unsigned int noMovies; // offset 0x23FC, size 0x4
    unsigned int boundUpdateTime; // offset 0x2400, size 0x4
    unsigned char draw_player_after_fx; // offset 0x2404, size 0x1
    enum zGlobalDemoType demoType; // offset 0x2408, size 0x4
};
// total size: 0x74
class xtextbox {
    // Members
public:
    class xfont font; // offset 0x0, size 0x30
    class basic_rect bounds; // offset 0x30, size 0x10
    unsigned int flags; // offset 0x40, size 0x4
    float line_space; // offset 0x44, size 0x4
    float tab_stop; // offset 0x48, size 0x4
    float left_indent; // offset 0x4C, size 0x4
    float right_indent; // offset 0x50, size 0x4
    class callback * cb; // offset 0x54, size 0x4
    void * context; // offset 0x58, size 0x4
    char * * texts; // offset 0x5C, size 0x4
    unsigned int * text_sizes; // offset 0x60, size 0x4
    unsigned int texts_size; // offset 0x64, size 0x4
    class substr text; // offset 0x68, size 0x8
    unsigned int text_hash; // offset 0x70, size 0x4
};
// total size: 0x18
class xEntMotionOrbitData {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
    float period; // offset 0x14, size 0x4
};
// total size: 0x4
class RwSplitBits {
    // Members
public:
    union { // inferred
        float nReal; // offset 0x0, size 0x4
        signed int nInt; // offset 0x0, size 0x4
        unsigned int nUInt; // offset 0x0, size 0x4
    };
};
// total size: 0x18
class RpIntersectData {
    // Members
public:
    union { // inferred
        class RwLine line; // offset 0x0, size 0x18
        class RwV3d point; // offset 0x0, size 0xC
        class RwSphere sphere; // offset 0x0, size 0x10
        class RwBBox box; // offset 0x0, size 0x18
        void * object; // offset 0x0, size 0x4
    };
};
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
// total size: 0x58
class /* @class */ {
    // Members
public:
    unsigned int _unused_rand; // offset 0x0, size 0x4
    char * _strtok_last; // offset 0x4, size 0x4
    char _asctime_buf[26]; // offset 0x8, size 0x1A
    class tm _localtime_buf; // offset 0x24, size 0x24
    signed int _gamma_signgam; // offset 0x48, size 0x4
    unsigned long long _rand_next; // offset 0x50, size 0x8
};
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
    k_WALLJUMP_STUCK = 4,
    k_WALLJUMP_FALL = 5,
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x3080
class xShadowCache {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
    signed int entCount; // offset 0x10, size 0x4
    signed int polyCount; // offset 0x14, size 0x4
    float polyRayDepth[5]; // offset 0x18, size 0x14
    unsigned short castOnEnt; // offset 0x2C, size 0x2
    unsigned short castOnPoly; // offset 0x2E, size 0x2
    unsigned int pad; // offset 0x30, size 0x4
    class xEnt * ent[16]; // offset 0x34, size 0x40
    class xShadowPoly poly[256]; // offset 0x80, size 0x3000
};
// total size: 0xC
class xPEOffsetPoint {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0x14
class tag_type {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x18
class xCamCoordCylinder {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};
enum en_FIOERRCODES {
    FIOERR_NONE = 0,
    FIOERR_READFAIL = 1,
    FIOERR_WRITEFAIL = 2,
    FIOERR_SEEKFAIL = 3,
    FIOERR_USERABORT = 4,
};
// total size: 0x2C
class xEntShadow {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    class xVec3 vec; // offset 0xC, size 0xC
    class RpAtomic * shadowModel; // offset 0x18, size 0x4
    float dst_cast; // offset 0x1C, size 0x4
    float radius[2]; // offset 0x20, size 0x8
    signed int flg_castOnOneDFF : 1; // offset 0x28, size 0x4
    signed int flg_castOnAllDFF : 1; // offset 0x28, size 0x4
    signed int flg_disableEnvCast : 1; // offset 0x28, size 0x4
    signed int flg_shadowUnused : 29; // offset 0x28, size 0x4
};
// total size: 0x8
class xEntOpacity {
    // Members
public:
    float delta_opacity; // offset 0x0, size 0x4
    float delta_opacity_2; // offset 0x4, size 0x4
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
// total size: 0x10
class Damage {
    // Members
public:
    float rad_collide; // offset 0x0, size 0x4
    float pam_collide[2]; // offset 0x4, size 0x8
    unsigned char alf_collide; // offset 0xC, size 0x1
    signed char unused[3]; // offset 0xD, size 0x3
};
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
// total size: 0x20
class xCMtextbox {
    // Members
public:
    unsigned int font; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    class sxy char_size; // offset 0x8, size 0x8
    class sxy char_spacing; // offset 0x10, size 0x8
    class sxy box; // offset 0x18, size 0x8
};
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
// total size: 0x24
class zCutsceneMgr : public xCutsceneMgr {
    // Members
public:
    unsigned char pausedMusic; // offset 0x20, size 0x1
    unsigned char sendDoneForDisabledCutscene; // offset 0x21, size 0x1
};
// total size: 0x4
class xColorUnpack {
    // Members
public:
    unsigned char a; // offset 0x0, size 0x1
    unsigned char b; // offset 0x1, size 0x1
    unsigned char g; // offset 0x2, size 0x1
    unsigned char r; // offset 0x3, size 0x1
};
// total size: 0x0
class anim_coll_data {};
// total size: 0x8
class Physics {
    // Members
public:
    float acc_grav; // offset 0x0, size 0x4
    float spd_maxFall; // offset 0x4, size 0x4
};
// total size: 0xC8
class zNMESoundTable {
    // Members
public:
    enum iSndGroupHandle sndGroupHandle[10]; // offset 0x0, size 0x28
    char * assetNames[10]; // offset 0x28, size 0x28
    float timer[10]; // offset 0x50, size 0x28
    float time[10]; // offset 0x78, size 0x28
    signed int flags[10]; // offset 0xA0, size 0x28
};
// total size: 0x60
class xLightKitLight {
    // Members
public:
    unsigned int type; // offset 0x0, size 0x4
    class RwRGBAReal color; // offset 0x4, size 0x10
    float matrix[16]; // offset 0x14, size 0x40
    float radius; // offset 0x54, size 0x4
    float angle; // offset 0x58, size 0x4
    class RpLight * platLight; // offset 0x5C, size 0x4
};
// total size: 0x0
class zAssetPickupTable {};
// total size: 0x8
class Restore {
    // Members
public:
    unsigned char chkby; // offset 0x0, size 0x1
    unsigned char penby; // offset 0x1, size 0x1
    unsigned char padpad[2]; // offset 0x2, size 0x2
    union { // inferred
        enum en_npcgol gid_compare; // offset 0x4, size 0x4
        signed int gid_COMPARE; // offset 0x4, size 0x4
    };
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0xC0
class xEntDrive {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    float otm; // offset 0x4, size 0x4
    float otmr; // offset 0x8, size 0x4
    float os; // offset 0xC, size 0x4
    float tm; // offset 0x10, size 0x4
    float tmr; // offset 0x14, size 0x4
    float s; // offset 0x18, size 0x4
    class xEnt * old_driver; // offset 0x1C, size 0x4
    class xEnt * driver; // offset 0x20, size 0x4
    class xEnt * driven; // offset 0x24, size 0x4
    class xVec3 driven_pos_in_old_driver; // offset 0x28, size 0xC
    class xVec3 driven_pos_in_driver; // offset 0x34, size 0xC
    class xVec3 last_driven_pos; // offset 0x40, size 0xC
    float yaw_in_driver; // offset 0x4C, size 0x4
    class xVec3 dloc; // offset 0x50, size 0xC
    class tri_data tri; // offset 0x60, size 0x60
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x24
class tm {
    // Members
public:
    signed int tm_sec; // offset 0x0, size 0x4
    signed int tm_min; // offset 0x4, size 0x4
    signed int tm_hour; // offset 0x8, size 0x4
    signed int tm_mday; // offset 0xC, size 0x4
    signed int tm_mon; // offset 0x10, size 0x4
    signed int tm_year; // offset 0x14, size 0x4
    signed int tm_wday; // offset 0x18, size 0x4
    signed int tm_yday; // offset 0x1C, size 0x4
    signed int tm_isdst; // offset 0x20, size 0x4
};
enum en_allow {
    ALLOW_NEVER = 0,
    ALLOW_NORMAL = 1,
    ALLOW_ALWAYS = 2,
    ALLOW_NOMORE = 3,
};
// total size: 0x4
class xCollideSphereToPointResults {
    // Members
public:
    float dist; // offset 0x0, size 0x4
};
// total size: 0x1B00
class zPlayerGlobals {
    // Members
public:
    class xEntShadow entShadow_embedded; // offset 0x0, size 0x2C
    class xShadowSimpleCache simpShadow_embedded; // offset 0x2C, size 0xA4
    class zGlobalSettings g; // offset 0xD0, size 0x160
    class zPlayerSettings * s; // offset 0x230, size 0x4
    class zPlayerSettings sb; // offset 0x240, size 0x470
    class zPlayerSettings patrick; // offset 0x6B0, size 0x470
    class zPlayerSettings spongepat; // offset 0xB20, size 0x470
    class xLightKit * pPlayerLightKit; // offset 0xF90, size 0x4
    class xModelInstance * model_spongebob; // offset 0xF94, size 0x4
    class xModelInstance * model_patrick; // offset 0xF98, size 0x4
    class xModelInstance * model_spongepat; // offset 0xF9C, size 0x4
    class xModelInstance * model_car; // offset 0xFA0, size 0x4
    unsigned int Visible; // offset 0xFA4, size 0x4
    signed int Speed; // offset 0xFA8, size 0x4
    float SpeedMult; // offset 0xFAC, size 0x4
    signed int Sneak; // offset 0xFB0, size 0x4
    signed int Teeter; // offset 0xFB4, size 0x4
    float SlipFadeTimer; // offset 0xFB8, size 0x4
    signed int Slide; // offset 0xFBC, size 0x4
    float SlideTimer; // offset 0xFC0, size 0x4
    signed int Stepping; // offset 0xFC4, size 0x4
    signed int JumpState; // offset 0xFC8, size 0x4
    signed int LastJumpState; // offset 0xFCC, size 0x4
    float JumpTimer; // offset 0xFD0, size 0x4
    float LookAroundTimer; // offset 0xFD4, size 0x4
    unsigned int LookAroundRand; // offset 0xFD8, size 0x4
    unsigned int LastProjectile; // offset 0xFDC, size 0x4
    float DecelRun; // offset 0xFE0, size 0x4
    float DecelRunSpeed; // offset 0xFE4, size 0x4
    float HotsauceTimer; // offset 0xFE8, size 0x4
    float LeanLerp; // offset 0xFEC, size 0x4
    float ScareTimer; // offset 0xFF0, size 0x4
    class xBase * ScareSource; // offset 0xFF4, size 0x4
    float CowerTimer; // offset 0xFF8, size 0x4
    float DamageTimer; // offset 0xFFC, size 0x4
    float SundaeTimer; // offset 0x1000, size 0x4
    float ControlOffTimer; // offset 0x1004, size 0x4
    float HelmetTimer; // offset 0x1008, size 0x4
    unsigned int WorldDisguise; // offset 0x100C, size 0x4
    unsigned int Bounced; // offset 0x1010, size 0x4
    float FallDeathTimer; // offset 0x1014, size 0x4
    float HeadbuttVel; // offset 0x1018, size 0x4
    float HeadbuttTimer; // offset 0x101C, size 0x4
    unsigned int DoMeleeCheck; // offset 0x1020, size 0x4
    float ForceSlipperyTimer; // offset 0x1024, size 0x4
    float ForceSlipperyFriction; // offset 0x1028, size 0x4
    float ShockRadius; // offset 0x102C, size 0x4
    float ShockRadiusOld; // offset 0x1030, size 0x4
    float Face_ScareTimer; // offset 0x1034, size 0x4
    unsigned int Face_ScareRandom; // offset 0x1038, size 0x4
    unsigned int Face_Event; // offset 0x103C, size 0x4
    float Face_EventTimer; // offset 0x1040, size 0x4
    float Face_PantTimer; // offset 0x1044, size 0x4
    unsigned int Face_AnimSpecific; // offset 0x1048, size 0x4
    unsigned int IdleRand; // offset 0x104C, size 0x4
    float IdleMinorTimer; // offset 0x1050, size 0x4
    float IdleMajorTimer; // offset 0x1054, size 0x4
    float IdleSitTimer; // offset 0x1058, size 0x4
    signed int Transparent; // offset 0x105C, size 0x4
    class zEnt * FireTarget; // offset 0x1060, size 0x4
    unsigned int PlayerIsFrozen; // offset 0x1064, size 0x4
    unsigned int ControlOff; // offset 0x1068, size 0x4
    unsigned int ControlOnEvent; // offset 0x106C, size 0x4
    unsigned int AutoMoveSpeed; // offset 0x1070, size 0x4
    float AutoMoveDist; // offset 0x1074, size 0x4
    class xVec3 AutoMoveTarget; // offset 0x1078, size 0xC
    class xBase * AutoMoveObject; // offset 0x1084, size 0x4
    class zEnt * Diggable; // offset 0x1088, size 0x4
    float DigTimer; // offset 0x108C, size 0x4
    class zPlayerCarryInfo carry; // offset 0x1090, size 0xF0
    class zPlayerLassoInfo lassoInfo; // offset 0x1180, size 0x20C
    class xModelTag BubbleWandTag[2]; // offset 0x138C, size 0x40
    class xModelInstance * model_wand; // offset 0x13CC, size 0x4
    class xEntBoulder * bubblebowl[2]; // offset 0x13D0, size 0x8
    float bbowlInitVel; // offset 0x13D8, size 0x4
    class zEntHangable * HangFound; // offset 0x13DC, size 0x4
    class zEntHangable * HangEnt; // offset 0x13E0, size 0x4
    class zEntHangable * HangEntLast; // offset 0x13E4, size 0x4
    class xVec3 HangPivot; // offset 0x13E8, size 0xC
    class xVec3 HangVel; // offset 0x13F4, size 0xC
    float HangLength; // offset 0x1400, size 0x4
    class xVec3 HangStartPos; // offset 0x1404, size 0xC
    float HangStartLerp; // offset 0x1410, size 0x4
    class xModelTag HangPawTag[4]; // offset 0x1414, size 0x80
    float HangPawOffset; // offset 0x1494, size 0x4
    float HangElapsed; // offset 0x1498, size 0x4
    float Jump_CurrGravity; // offset 0x149C, size 0x4
    float Jump_HoldTimer; // offset 0x14A0, size 0x4
    float Jump_ChangeTimer; // offset 0x14A4, size 0x4
    signed int Jump_CanDouble; // offset 0x14A8, size 0x4
    signed int Jump_CanFloat; // offset 0x14AC, size 0x4
    signed int Jump_SpringboardStart; // offset 0x14B0, size 0x4
    class zPlatform * Jump_Springboard; // offset 0x14B4, size 0x4
    signed int CanJump; // offset 0x14B8, size 0x4
    signed int CanBubbleSpin; // offset 0x14BC, size 0x4
    signed int CanBubbleBounce; // offset 0x14C0, size 0x4
    signed int CanBubbleBash; // offset 0x14C4, size 0x4
    signed int IsJumping; // offset 0x14C8, size 0x4
    signed int IsDJumping; // offset 0x14CC, size 0x4
    signed int IsBubbleSpinning; // offset 0x14D0, size 0x4
    signed int IsBubbleBouncing; // offset 0x14D4, size 0x4
    signed int IsBubbleBashing; // offset 0x14D8, size 0x4
    signed int IsBubbleBowling; // offset 0x14DC, size 0x4
    signed int WasDJumping; // offset 0x14E0, size 0x4
    enum _zPlayerWallJumpState WallJumpState; // offset 0x14E4, size 0x4
    signed int cheat_mode; // offset 0x14E8, size 0x4
    class zRewardsMgr * rewardsMgr; // offset 0x14EC, size 0x4
    unsigned int ManlinessPointsCurrentRange; // offset 0x14F0, size 0x4
    unsigned int InvManlinessPoints; // offset 0x14F4, size 0x4
    unsigned int InvManlinessPointsMultiplier; // offset 0x14F8, size 0x4
    unsigned int InvGoofyGoober; // offset 0x14FC, size 0x4
    unsigned int InvTreasureChest[20]; // offset 0x1500, size 0x50
    unsigned int InvTreasureChestMax[20]; // offset 0x1550, size 0x50
    unsigned int InvTreasureChestCurrentLevel; // offset 0x15A0, size 0x4
    unsigned int InvLevelPickups[20]; // offset 0x15A4, size 0x50
    unsigned int InvLevelPickupsCurrentLevel; // offset 0x15F4, size 0x4
    unsigned int InvTreasureChestTotal; // offset 0x15F8, size 0x4
    unsigned int InvTreasureChestOpened; // offset 0x15FC, size 0x4
    unsigned int CurrentSkillLevel; // offset 0x1600, size 0x4
    unsigned int InitialUnusedSkillPoints; // offset 0x1604, size 0x4
    signed short CurrentUnusedSkillPoints; // offset 0x1608, size 0x2
    signed short CurrentSpentSkillPoints; // offset 0x160A, size 0x2
    class xModelTag BubbleTag; // offset 0x160C, size 0x20
    class xEntDrive drv; // offset 0x1630, size 0xC0
    class xSurface * floor_surf; // offset 0x16F0, size 0x4
    class xVec3 floor_norm; // offset 0x16F4, size 0xC
    signed int slope; // offset 0x1700, size 0x4
    class xCollis earc_coll; // offset 0x1704, size 0x54
    class xSphere head_sph; // offset 0x1758, size 0x10
    class xModelTag center_tag; // offset 0x1768, size 0x20
    class xModelTag head_tag; // offset 0x1788, size 0x20
    unsigned int TongueFlags[2]; // offset 0x17A8, size 0x8
    class xVec3 RootUp; // offset 0x17B0, size 0xC
    class xVec3 RootUpTarget; // offset 0x17BC, size 0xC
    class zCheckPoint checkpoint; // offset 0x17C8, size 0x1C
    unsigned int SlideTrackSliding; // offset 0x17E4, size 0x4
    unsigned int SlideTrackCount; // offset 0x17E8, size 0x4
    class xEnt * SlideTrackEnt[161]; // offset 0x17EC, size 0x284
    unsigned int SlideNotGroundedSinceSlide; // offset 0x1A70, size 0x4
    class xVec3 SlideTrackDir; // offset 0x1A74, size 0xC
    class xVec3 SlideTrackVel; // offset 0x1A80, size 0xC
    float SlideTrackDecay; // offset 0x1A8C, size 0x4
    float SlideTrackLean; // offset 0x1A90, size 0x4
    float SlideTrackLand; // offset 0x1A94, size 0x4
    unsigned char * sb_model_indices; // offset 0x1A98, size 0x4
    class xModelInstance * sb_models[11]; // offset 0x1A9C, size 0x2C
    unsigned int currentPlayer; // offset 0x1AC8, size 0x4
    class xVec3 PredictRotate; // offset 0x1ACC, size 0xC
    class xVec3 PredictTranslate; // offset 0x1AD8, size 0xC
    float PredictAngV; // offset 0x1AE4, size 0x4
    class xVec3 PredictCurrDir; // offset 0x1AE8, size 0xC
    float PredictCurrVel; // offset 0x1AF4, size 0x4
    float KnockBackTimer; // offset 0x1AF8, size 0x4
    float KnockIntoAirTimer; // offset 0x1AFC, size 0x4
};
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
};
// total size: 0xC
class xPEVCyl {
    // Members
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
enum xCurveType {
    xCVT_BAKED = 0,
};
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
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
// total size: 0x208
class xEntBoulder : public xEnt {
    // Members
public:
    class xEntBoulderAsset * basset; // offset 0xD8, size 0x4
    class xShadowSimpleCache simpShadow_embedded; // offset 0xDC, size 0xA4
    class xEntShadow entShadow_embedded; // offset 0x180, size 0x2C
    class xVec3 localCenter; // offset 0x1AC, size 0xC
    class xVec3 vel; // offset 0x1B8, size 0xC
    class xVec3 rotVec; // offset 0x1C4, size 0xC
    class xVec3 force; // offset 0x1D0, size 0xC
    class xVec3 instForce; // offset 0x1DC, size 0xC
    float angVel; // offset 0x1E8, size 0x4
    float timeToLive; // offset 0x1EC, size 0x4
    signed int hitpoints; // offset 0x1F0, size 0x4
    float fOOSphRadius; // offset 0x1F4, size 0x4
    enum iSndHandle currSndFX; // offset 0x1F8, size 0x4
    unsigned int lastRolling; // offset 0x1FC, size 0x4
    unsigned int rollingID; // offset 0x200, size 0x4
    unsigned char collis_chk; // offset 0x204, size 0x1
    unsigned char collis_pen; // offset 0x205, size 0x1
    unsigned char pad1[2]; // offset 0x206, size 0x2
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
class xEntMotionSplineData {
    // Members
public:
    unsigned int spline_id; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    float lean_modifier; // offset 0x8, size 0x4
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
// total size: 0x94
class config : public xCamConfigFollow {
    // Members
public:
    float speed_move; // offset 0x54, size 0x4
    class xVec2 stick_vel; // offset 0x58, size 0x8
    class xVec2 stick_accel; // offset 0x60, size 0x8
    float stick_speed; // offset 0x68, size 0x4
    // total size: 0x8
    class /* @class */ {
        // Members
    public:
        float width; // offset 0x0, size 0x4
        float dist_min; // offset 0x4, size 0x4
    } collide; // offset 0x6C, size 0x8
    // total size: 0x20
    class /* @class */ {
        // Members
    public:
        float speed; // offset 0x0, size 0x4
        float dist; // offset 0x4, size 0x4
        float dist_min; // offset 0x8, size 0x4
        float delay; // offset 0xC, size 0x4
        float fade_time; // offset 0x10, size 0x4
        float vel_min; // offset 0x14, size 0x4
        float hang_min; // offset 0x18, size 0x4
        float hang_max; // offset 0x1C, size 0x4
    } vel_drift; // offset 0x74, size 0x20
};
enum xCurveClamp {
    xCC_CONSTANT = 0,
    xCC_CYCLE = 1,
    xCC_OSCILLATE = 2,
};
enum en_BIO_ASYNC_ERRCODES {
    BINIO_ASYNC_FAIL = -1,
    BINIO_ASYNC_NOOP = 0,
    BINIO_ASYNC_INPROG = 1,
    BINIO_ASYNC_DONE = 2,
    BINIO_ASYNC_FORCEENUMSIZEINT = 2147483647,
};
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
};
// total size: 0xF0
class zPlayerCarryInfo {
    // Members
public:
    class xEnt * grabbed; // offset 0x0, size 0x4
    unsigned int grabbedModelID; // offset 0x4, size 0x4
    class xMat4x3 spin; // offset 0x10, size 0x40
    class xEnt * throwTarget; // offset 0x50, size 0x4
    class xEnt * flyingToTarget; // offset 0x54, size 0x4
    float minDist; // offset 0x58, size 0x4
    float maxDist; // offset 0x5C, size 0x4
    float minHeight; // offset 0x60, size 0x4
    float maxHeight; // offset 0x64, size 0x4
    float maxCosAngle; // offset 0x68, size 0x4
    float throwMinDist; // offset 0x6C, size 0x4
    float throwMaxDist; // offset 0x70, size 0x4
    float throwHammerMinDist; // offset 0x74, size 0x4
    float throwHammerMaxDist; // offset 0x78, size 0x4
    float throwMinHeight; // offset 0x7C, size 0x4
    float throwMaxHeight; // offset 0x80, size 0x4
    float throwMaxStack; // offset 0x84, size 0x4
    float throwMaxCosAngle; // offset 0x88, size 0x4
    float throwTargetRotRate; // offset 0x8C, size 0x4
    float targetRot; // offset 0x90, size 0x4
    unsigned int grabTarget; // offset 0x94, size 0x4
    class xVec3 grabOffset; // offset 0x98, size 0xC
    float grabLerpMin; // offset 0xA4, size 0x4
    float grabLerpMax; // offset 0xA8, size 0x4
    float grabLerpLast; // offset 0xAC, size 0x4
    unsigned int grabYclear; // offset 0xB0, size 0x4
    float throwGravity; // offset 0xB4, size 0x4
    float throwHeight; // offset 0xB8, size 0x4
    float throwDistance; // offset 0xBC, size 0x4
    float throwPowerAddDistance; // offset 0xC0, size 0x4
    float fruitFloorDecayMin; // offset 0xC4, size 0x4
    float fruitFloorDecayMax; // offset 0xC8, size 0x4
    float fruitFloorBounce; // offset 0xCC, size 0x4
    float fruitFloorFriction; // offset 0xD0, size 0x4
    float fruitCeilingBounce; // offset 0xD4, size 0x4
    float fruitWallBounce; // offset 0xD8, size 0x4
    float fruitLifetime; // offset 0xDC, size 0x4
    class xEnt * patLauncher; // offset 0xE0, size 0x4
};
// total size: 0x24
struct /* @anon7 */ {};
enum en_GOALSTATE {
    GOAL_STAT_UNKNOWN = 0,
    GOAL_STAT_PROCESS = 1,
    GOAL_STAT_ENTER = 2,
    GOAL_STAT_EXIT = 3,
    GOAL_STAT_SUSPEND = 4,
    GOAL_STAT_RESUME = 5,
    GOAL_STAT_PAUSED = 6,
    GOAL_STAT_DONE = 7,
    GOAL_STAT_NOMORE = 8,
    GOAL_STAT_FORCE = 2147483647,
};
// total size: 0x470
class zPlayerSettings {
    // Members
public:
    enum _zPlayerType pcType; // offset 0x0, size 0x4
    float MoveSpeed[6]; // offset 0x4, size 0x18
    float AnimSneak[3]; // offset 0x1C, size 0xC
    float AnimWalk[3]; // offset 0x28, size 0xC
    float AnimRun[3]; // offset 0x34, size 0xC
    float JumpGravity; // offset 0x40, size 0x4
    float GravSmooth; // offset 0x44, size 0x4
    float FloatSpeed; // offset 0x48, size 0x4
    float ButtsmashSpeed; // offset 0x4C, size 0x4
    class zJumpParam Jump; // offset 0x50, size 0x10
    class zJumpParam Bounce; // offset 0x60, size 0x10
    class zJumpParam Spring; // offset 0x70, size 0x10
    class zJumpParam Wall; // offset 0x80, size 0x10
    class zJumpParam Double; // offset 0x90, size 0x10
    class zJumpParam SlideDouble; // offset 0xA0, size 0x10
    class zJumpParam SlideJump; // offset 0xB0, size 0x10
    float WallJumpVelocity; // offset 0xC0, size 0x4
    class zLedgeGrabParams ledge; // offset 0xD0, size 0x380
    float spin_damp_xz; // offset 0x450, size 0x4
    float spin_damp_y; // offset 0x454, size 0x4
    unsigned char talk_anims; // offset 0x458, size 0x1
    unsigned char talk_filter_size; // offset 0x459, size 0x1
    unsigned char talk_filter[4]; // offset 0x45A, size 0x4
    unsigned int Health; // offset 0x460, size 0x4
    unsigned int MaxHealth; // offset 0x464, size 0x4
};
// total size: 0x90
class zParEmitter : public xParEmitter {};
// total size: 0x8
class Life {
    // Members
public:
    float tym_lifeBase; // offset 0x0, size 0x4
    float tym_lifeRand; // offset 0x4, size 0x4
};
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
};
enum XFILE_READSECTOR_STATUS {
    XFILE_RDSTAT_NOOP = 0,
    XFILE_RDSTAT_INPROG = 1,
    XFILE_RDSTAT_DONE = 2,
    XFILE_RDSTAT_FAIL = 3,
    XFILE_RDSTAT_QUEUED = 4,
    XFILE_RDSTAT_EXPIRED = 5,
};
// total size: 0x10
class Movement {
    // Members
public:
    float spd_move; // offset 0x0, size 0x4
    float acc_move; // offset 0x4, size 0x4
    float dst_deviant; // offset 0x8, size 0x4
    float spd_turnrate; // offset 0xC, size 0x4
};
// total size: 0x40
class RwSky2DVertexAlignmentOverlay {
    // Members
public:
    union { // inferred
        class RwSky2DVertexFields els; // offset 0x0, size 0x40
        __int128 qWords[4]; // offset 0x0, size 0x40
    };
};
// total size: 0x0
class xParGroup {};
// total size: 0x20
class NMERuntime {
    // Members
public:
    signed int flg_enableWander : 1; // offset 0x0, size 0x4
    signed int flg_enablePatrol : 1; // offset 0x0, size 0x4
    signed int flg_enableDetect : 1; // offset 0x0, size 0x4
    signed int flg_activeOn : 1; // offset 0x0, size 0x4
    signed int flg_takeNoDamage : 1; // offset 0x0, size 0x4
    signed int flg_unused : 27; // offset 0x0, size 0x4
    union { // inferred
        enum en_allow overrideDetect; // offset 0x4, size 0x4
        signed int alignmeproperly; // offset 0x4, size 0x4
    };
    union { // inferred
        enum en_allow overrideAttack; // offset 0x8, size 0x4
        signed int alignmeproperlyToo; // offset 0x8, size 0x4
    };
    class OriginalBackupData orig; // offset 0xC, size 0xC
    class Restore restore; // offset 0x18, size 0x8
};
// total size: 0x20
class xCMtexture {
    // Members
public:
    unsigned int assetID; // offset 0x0, size 0x4
    class xColor_tag color; // offset 0x4, size 0x4
    float x; // offset 0x8, size 0x4
    float y; // offset 0xC, size 0x4
    float w; // offset 0x10, size 0x4
    float h; // offset 0x14, size 0x4
    class RwTexture * texture; // offset 0x18, size 0x4
    unsigned int pad; // offset 0x1C, size 0x4
};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x44
class xEntERData {
    // Members
public:
    class xVec3 a; // offset 0x0, size 0xC
    class xVec3 b; // offset 0xC, size 0xC
    class xVec3 dir; // offset 0x18, size 0xC
    float et; // offset 0x24, size 0x4
    float wet; // offset 0x28, size 0x4
    float rt; // offset 0x2C, size 0x4
    float wrt; // offset 0x30, size 0x4
    float p; // offset 0x34, size 0x4
    float brt; // offset 0x38, size 0x4
    float ert; // offset 0x3C, size 0x4
    signed int state; // offset 0x40, size 0x4
};
// total size: 0x0
class rxReq {};
// total size: 0x8
class /* @class */ {
    // Members
public:
    float width; // offset 0x0, size 0x4
    float dist_min; // offset 0x4, size 0x4
};
// total size: 0x18
class xPEEntBone {
    // Members
public:
    unsigned char flags; // offset 0x0, size 0x1
    unsigned char type; // offset 0x1, size 0x1
    unsigned char bone; // offset 0x2, size 0x1
    unsigned char pad1; // offset 0x3, size 0x1
    class xVec3 offset; // offset 0x4, size 0xC
    float radius; // offset 0x10, size 0x4
    float deflection; // offset 0x14, size 0x4
};
// total size: 0x18
class emitterBase : public xBase {
    // Members
public:
    class effectAsset * pEffectAsset; // offset 0x10, size 0x4
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
// total size: 0xC
class xEntMotionMPData {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
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
class XGOFTypeInfo {
    // Members
public:
    signed int tid; // offset 0x0, size 0x4
    class xFactoryInst * (* creator)(signed int, class RyzMemGrow *, void *); // offset 0x4, size 0x4
    void (* destroyer)(class xFactoryInst *); // offset 0x8, size 0x4
};
// total size: 0x30
class xfont {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    float width; // offset 0x4, size 0x4
    float height; // offset 0x8, size 0x4
    float space; // offset 0xC, size 0x4
    class xColor_tag color; // offset 0x10, size 0x4
    class xColor_tag shadowColor; // offset 0x14, size 0x4
    float shadowOffsetX; // offset 0x18, size 0x4
    float shadowOffsetY; // offset 0x1C, size 0x4
    class basic_rect clip; // offset 0x20, size 0x10
};
// total size: 0x40
class RwSky2DVertexFields {
    // Members
public:
    class RwV3d scrVertex; // offset 0x0, size 0xC
    float camVertex_z; // offset 0xC, size 0x4
    float u; // offset 0x10, size 0x4
    float v; // offset 0x14, size 0x4
    float recipZ; // offset 0x18, size 0x4
    float pad1; // offset 0x1C, size 0x4
    class RwRGBAReal color; // offset 0x20, size 0x10
    class RwV3d objNormal; // offset 0x30, size 0xC
    float pad2; // offset 0x3C, size 0x4
};
// total size: 0x8
class RwLinkList {
    // Members
public:
    class RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x0
class xSurface {};
// total size: 0x10
class Emit {
    // Members
public:
    signed int num_emitBase; // offset 0x0, size 0x4
    signed int num_emitRand; // offset 0x4, size 0x4
    float rad_emitBase; // offset 0x8, size 0x4
    float rad_emitRand; // offset 0xC, size 0x4
};
// total size: 0x18
class xModelBucket {
    // Members
public:
    class RpAtomic * Data; // offset 0x0, size 0x4
    class RpAtomic * OriginalData; // offset 0x4, size 0x4
    union { // inferred
        class xModelInstance * List; // offset 0x8, size 0x4
        class xModelBucket * * BackRef; // offset 0x8, size 0x4
    };
    signed int ClipFlags; // offset 0xC, size 0x4
    class xModelPipe Pipe; // offset 0x10, size 0x8
};
// total size: 0x8
class sxy {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x90
class xParEmitter : public xBase {
    // Members
public:
    class xParEmitterAsset * tasset; // offset 0x10, size 0x4
    class xParGroup * group; // offset 0x14, size 0x4
    class xParEmitterPropsAsset * prop; // offset 0x18, size 0x4
    unsigned char rate_mode; // offset 0x1C, size 0x1
    class xVec3 last_emit_position; // offset 0x20, size 0xC
    class xVec3 last_emit_velocity; // offset 0x2C, size 0xC
    float rate; // offset 0x38, size 0x4
    float rate_time; // offset 0x3C, size 0x4
    float rate_fraction; // offset 0x40, size 0x4
    float rate_fraction_cull; // offset 0x44, size 0x4
    unsigned char emit_flags; // offset 0x48, size 0x1
    unsigned char emit_pad[3]; // offset 0x49, size 0x3
    unsigned char rot[3]; // offset 0x4C, size 0x3
    class xModelTag tag; // offset 0x50, size 0x20
    float oocull_distance_sqr; // offset 0x70, size 0x4
    float distance_to_cull_sqr; // offset 0x74, size 0x4
    void * attachTo; // offset 0x78, size 0x4
    class xParSys * parSys; // offset 0x7C, size 0x4
    class xBase * emit_volume; // offset 0x80, size 0x4
    class xVec3 last_attach_loc; // offset 0x84, size 0xC
};
enum en_npcgol {
    NME_GOAL_UNKNOWN = 0,
    NME_GOAL_CRIT_IDLE = 1313293056,
    NME_GOAL_CRIT_PATROL = 1313293057,
    NME_GOAL_CRIT_DYING = 1313293058,
    NME_GOAL_CRIT_DEAD = 1313293059,
    NME_GOAL_CRIT_BATTACK = 1313293060,
    NME_GOAL_CRIT_JATTACK = 1313293061,
    NME_GOAL_CRIT_JDYING = 1313293062,
    NME_GOAL_TURR_IDLE = 1313294080,
    NME_GOAL_TURR_RELOAD = 1313294081,
    NME_GOAL_TURR_HURT = 1313294082,
    NME_GOAL_TURR_DEAD = 1313294083,
    NME_GOAL_TURR_TREADY = 1313294084,
    NME_GOAL_TURR_TTURN = 1313294085,
    NME_GOAL_TURR_TSHOOT = 1313294086,
    NME_GOAL_TURR_PDORMANT = 1313294087,
    NME_GOAL_TURR_PALERT = 1313294088,
    NME_GOAL_TURR_PPATALPHA = 1313294089,
    NME_GOAL_TURR_BIDLE = 1313294090,
    NME_GOAL_TURR_BTURN = 1313294091,
    NME_GOAL_TURR_BSHOOT = 1313294092,
    NME_GOAL_TURR_BHURT = 1313294093,
    NME_GOAL_TURR_SPIRAL = 1313294094,
    NME_GOAL_IDLE = 1313295872,
    NME_GOAL_PATROL = 1313295873,
    NME_GOAL_WANDER = 1313295874,
    NME_GOAL_FIDGET = 1313295875,
    NME_GOAL_WAITING = 1313295876,
    NME_GOAL_DEAD = 1313295877,
    NME_GOAL_NOMANLAND = 1313295878,
    NME_GOAL_LIMBO = 1313295879,
    NME_GOAL_DEV_ANIMVIEW = 1313293312,
    NME_GOAL_DEV_HEROMODE = 1313293313,
    NME_GOAL_TIKI_IDLE = 1313297408,
    NME_GOAL_TIKI_PATROL = 1313297409,
    NME_GOAL_TIKI_HIDE = 1313297410,
    NME_GOAL_TIKI_COUNT = 1313297411,
    NME_GOAL_TIKI_DYING = 1313297412,
    NME_GOAL_TIKI_DEAD = 1313297413,
    NME_GOAL_AFTERLIFE = 1313297152,
    NME_GOAL_SPAWN = 1313297153,
    NME_GOAL_WOUND = 1313297154,
    NME_GOAL_SPOOKED = 1313297155,
    NME_GOAL_NOTICE = 1313297156,
    NME_GOAL_SCAREWAIT = 1313297157,
    NME_GOAL_SCARE = 1313297158,
    NME_GOAL_TAUNT = 1313297159,
    NME_GOAL_EVILPAT = 1313296384,
    NME_GOAL_STUNNED = 1313296385,
    NME_GOAL_PATCARRY = 1313296386,
    NME_GOAL_PATTWIRL = 1313296387,
    NME_GOAL_PATTHROW = 1313296388,
    NME_GOAL_TRIGGER_NORMAL = 1313298432,
    NME_GOAL_TRIGGER_SCARY = 1313298433,
    NME_GOAL_TRIGGER_DETECT = 1313298434,
    NME_GOAL_TRIGGER_ALERT = 1313298435,
    NME_GOAL_TRIGGER_BATTLE = 1313298436,
    NME_GOAL_TRIGGER_WOUND = 1313298437,
    NME_GOAL_TRIGGER_ATTACK = 1313298438,
    NME_GOAL_TRIGGER_VINIVICIVIDI = 1313298439,
    NME_GOAL_FOGGER_AWARE = 1313293568,
    NME_GOAL_FOGGER_BATTLE = 1313293569,
    NME_GOAL_FOGGER_ATTACK = 1313293570,
    NME_GOAL_SLAMMER_AWARE = 1313293571,
    NME_GOAL_SLAMMER_BATTLE = 1313293572,
    NME_GOAL_SLAMMER_ATTACK = 1313293573,
    NME_GOAL_SPINNER_AWARE = 1313293574,
    NME_GOAL_SPINNER_BATTLE = 1313293575,
    NME_GOAL_FLINGER_NORMAL = 1313293576,
    NME_GOAL_FLINGER_AWARE = 1313293577,
    NME_GOAL_FLINGER_BATTLE = 1313293578,
    NME_GOAL_FLINGER_ATTACK = 1313293579,
    NME_GOAL_FLINGER_BOING = 1313293580,
    NME_GOAL_FLINGER_FLEE = 1313293581,
    NME_GOAL_FLINGER_PANIC = 1313293582,
    NME_GOAL_FLINGER_MOVE = 1313293583,
    NME_GOAL_POPPER_NORMAL = 1313293584,
    NME_GOAL_POPPER_AWARE = 1313293585,
    NME_GOAL_POPPER_WOUND = 1313293586,
    NME_GOAL_POPPER_EVADE = 1313293587,
    NME_GOAL_POPPER_BATTLE = 1313293588,
    NME_GOAL_POPPER_ATTACK = 1313293589,
    NME_GOAL_ZAP_NORMAL = 1313293590,
    NME_GOAL_ZAP_AWARE = 1313293591,
    NME_GOAL_ZAP_BATTLE = 1313293592,
    NME_GOAL_ZAP_WOUND = 1313293593,
    NME_GOAL_ZAP_ZAP = 1313293594,
    NME_GOAL_ZAP_MOVE = 1313293595,
    NME_GOAL_MERV_NORMAL = 1313293596,
    NME_GOAL_MERV_AWARE = 1313293597,
    NME_GOAL_MERV_BATTLE = 1313293598,
    NME_GOAL_MERV_ZAP = 1313293599,
    NME_GOAL_MERV_BOMB = 1313293600,
    NME_GOAL_MERV_BOWL = 1313293601,
    NME_GOAL_MERV_WOUND = 1313293602,
    NME_GOAL_MERV_MOVE = 1313293603,
    NME_GOAL_BUCK_RUNNING = 1313293604,
    NME_GOAL_BUCK_BIRTHING = 1313293605,
    NME_GOAL_BUCK_DYING = 1313293606,
    NME_GOAL_BUCK_DEAD = 1313293607,
    NME_GOAL_DENNIS_NORMAL = 1313293608,
    NME_GOAL_DENNIS_EVADE = 1313293609,
    NME_GOAL_DENNIS_BATTLE = 1313293610,
    NME_GOAL_DENNIS_ATTACK = 1313293611,
    NME_GOAL_DENNIS_TAUNT = 1313293612,
    NME_GOAL_DENNIS_DAMAGE = 1313293613,
    NME_GOAL_DENNIS_DEAD = 1313293614,
    NME_GOAL_DENTOO_NORMAL = 1313293615,
    NME_GOAL_DENTOO_EVADE = 1313293616,
    NME_GOAL_DENTOO_BATTLE = 1313293617,
    NME_GOAL_DENTOO_ATTACK = 1313293618,
    NME_GOAL_DENTOO_TAUNT = 1313293619,
    NME_GOAL_DENTOO_DAMAGE = 1313293620,
    NME_GOAL_DENTOO_DEAD = 1313293621,
    NME_GOAL_SBBAT_IDLE = 1313293622,
    NME_GOAL_SBBAT_DEAD = 1313293623,
    NME_GOAL_NOMORE = 1313293624,
    NME_GOAL_FORCE = 2147483647,
};
// total size: 0x14
class RwStreamUnion {
    // Members
public:
    union { // inferred
        class RwStreamMemory memory; // offset 0x0, size 0xC
        class RwStreamFile file; // offset 0x0, size 0x4
        class RwStreamCustom custom; // offset 0x0, size 0x14
    };
};
// total size: 0x18
class _Bigint {
    // Members
public:
    class _Bigint * _next; // offset 0x0, size 0x4
    signed int _k; // offset 0x4, size 0x4
    signed int _maxwds; // offset 0x8, size 0x4
    signed int _sign; // offset 0xC, size 0x4
    signed int _wds; // offset 0x10, size 0x4
    unsigned int _x[1]; // offset 0x14, size 0x4
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
// total size: 0x20
class /* @class */ {
    // Members
public:
    float speed; // offset 0x0, size 0x4
    float dist; // offset 0x4, size 0x4
    float dist_min; // offset 0x8, size 0x4
    float delay; // offset 0xC, size 0x4
    float fade_time; // offset 0x10, size 0x4
    float vel_min; // offset 0x14, size 0x4
    float hang_min; // offset 0x18, size 0x4
    float hang_max; // offset 0x1C, size 0x4
};
// total size: 0x58
class __sFILE {
    // Members
public:
    unsigned char * _p; // offset 0x0, size 0x4
    signed int _r; // offset 0x4, size 0x4
    signed int _w; // offset 0x8, size 0x4
    signed short _flags; // offset 0xC, size 0x2
    signed short _file; // offset 0xE, size 0x2
    class __sbuf _bf; // offset 0x10, size 0x8
    signed int _lbfsize; // offset 0x18, size 0x4
    void * _cookie; // offset 0x1C, size 0x4
    signed int (* _read)(void *, char *, signed int); // offset 0x20, size 0x4
    signed int (* _write)(void *, char *, signed int); // offset 0x24, size 0x4
    signed long (* _seek)(void *, signed long, signed int); // offset 0x28, size 0x4
    signed int (* _close)(void *); // offset 0x2C, size 0x4
    class __sbuf _ub; // offset 0x30, size 0x8
    unsigned char * _up; // offset 0x38, size 0x4
    signed int _ur; // offset 0x3C, size 0x4
    unsigned char _ubuf[3]; // offset 0x40, size 0x3
    unsigned char _nbuf[1]; // offset 0x43, size 0x1
    class __sbuf _lb; // offset 0x44, size 0x8
    signed int _blksize; // offset 0x4C, size 0x4
    signed int _offset; // offset 0x50, size 0x4
    class _reent * _data; // offset 0x54, size 0x4
};
// total size: 0xC0
class xBoxFace {
    // Members
public:
    class xPlane surface; // offset 0x0, size 0x10
    class xEdge edges[4]; // offset 0x10, size 0xB0
};
// total size: 0x60
class tri_data : public tri_data {
    // Members
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
    class xMat4x3 trioldmat; // offset 0x20, size 0x40
};
// total size: 0x8
class zDestructibleStateFXList {
    // Members
public:
    unsigned int nfx; // offset 0x0, size 0x4
    class zDestructibleStateFXParams * fxParams; // offset 0x4, size 0x4
};
// total size: 0x4
class /* @class */ {
    // Members
public:
    union { // inferred
        class xClumpCollBSPVertInfo i; // offset 0x0, size 0x4
        unsigned int rawIdx; // offset 0x0, size 0x4
        class RwV3d * p; // offset 0x0, size 0x4
    };
};
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
};
// total size: 0x10
class RwRGBAReal {
    // Members
public:
    float red; // offset 0x0, size 0x4
    float green; // offset 0x4, size 0x4
    float blue; // offset 0x8, size 0x4
    float alpha; // offset 0xC, size 0x4
};
// total size: 0x8
class zSweptSphereGlobals {
    // Members
public:
    signed int hitFound; // offset 0x0, size 0x4
    class xMat4x3 * modelMat; // offset 0x4, size 0x4
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

