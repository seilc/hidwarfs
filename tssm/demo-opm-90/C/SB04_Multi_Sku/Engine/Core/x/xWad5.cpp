/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xWad5.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
static signed int cnt_fadesInProgress; // size: 0x4, address: 0x6381B8
static class xVec2 * uvmap_buffer; // size: 0x4, address: 0x6381BC
static float uvmap_uoffset; // size: 0x4, address: 0x6381C0
static float uvmap_voffset; // size: 0x4, address: 0x6381C4
static float uvmap_uscale; // size: 0x4, address: 0x6381C8
static float uvmap_vscale; // size: 0x4, address: 0x6381CC
static float uvmap_udelta; // size: 0x4, address: 0x6381D0
static float uvmap_vdelta; // size: 0x4, address: 0x6381D4
static float uvmap_xscale; // size: 0x4, address: 0x6381D8
static float uvmap_yscale; // size: 0x4, address: 0x6381DC
static float uvmap_xdelta; // size: 0x4, address: 0x6381E0
static float uvmap_ydelta; // size: 0x4, address: 0x6381E4
static unsigned int common_warp_ids[6]; // size: 0x18, address: 0x788C70
static class warper warp_buffer[128]; // size: 0x1800, address: 0x788C90
static class warper warp_lists[6]; // size: 0x120, address: 0x78A490
static class warper * warp_stack; // size: 0x4, address: 0x6381E8
static unsigned char render_this_frame; // size: 0x1, address: 0x6381EC
char * common_warp_names[7]; // size: 0x1C, address: 0x604B70
void (* common_warp_animate[6])(class xVec2 *, class warper &, class xVec2 &, float, float, float, float); // size: 0x18, address: 0x604B90
static class xFXCameraTexture camtex; // size: 0x48, address: 0x78A5B0
unsigned char g_debugRenderSafeArea; // size: 0x1, address: 0x6381F0
static class _xFadeData mFade; // size: 0x18, address: 0x78A600
static float mLetterboxO; // size: 0x4, address: 0x6381F4
static float mLetterboxTO; // size: 0x4, address: 0x6381F8
static float sLetterBoxSize; // size: 0x4, address: 0x6381FC
static unsigned char sLetterBoxAlpha; // size: 0x1, address: 0x636EC8
class xGlare sGlare[10]; // size: 0x208, address: 0x78A620
class xVec3 sFullScreenGlareDir; // size: 0xC, address: 0x604BA8
float sFullScreenGlareIntensity; // size: 0x4, address: 0x636ECC
class RwRGBA sFullScreenGlareColor; // size: 0x4, address: 0x636ED0
signed int sFullScreenGlareEnabled; // size: 0x4, address: 0x638200
unsigned int sFullScreenGlareTextureID; // size: 0x4, address: 0x636ED4
class RwTexture * sFullScreenGlareTexturePtr; // size: 0x4, address: 0x638204
static class xMat4x3 sCameraFXMatOld; // size: 0x40, address: 0x78A9C0
static unsigned char anycameraFXActive; // size: 0x1, address: 0x638208
class cameraFXTableEntry sCameraFXTable[3]; // size: 0x24, address: 0x604BC0
class cameraFX sCameraFX[10]; // size: 0x2F8, address: 0x78AA00
static class xScrFxLensFlareSource * sFlareSource; // size: 0x4, address: 0x63820C
static signed int sNumFlareSources; // size: 0x4, address: 0x638210
static class xScrFxLensFlareParams sDefaultLensFlareParams; // size: 0x10, address: 0x604BF0
static class xScrFxLensFlareParams * sLensFlareParams; // size: 0x4, address: 0x636EE0
static class iScrFxLensFlare sFlare[128]; // size: 0x1800, address: 0x78AD00
static signed int sNumFlares; // size: 0x4, address: 0x638214
class RwTexture * gxFlareTexture; // size: 0x4, address: 0x638218
class RwFrame * gxFlareFrame; // size: 0x4, address: 0x638220
signed int sort_flares; // size: 0x4, address: 0x638224
signed int dumpFlares; // size: 0x4, address: 0x0
static class xPulseGlareMgr glare_mgr; // size: 0x3600, address: 0x78C500
static signed int g_serinit; // size: 0x4, address: 0x638228
static class st_XSERIAL_DATA_PRIV g_xserdata; // size: 0x24, address: 0x78FB90
static signed int g_tbl_onbit[32]; // size: 0x80, address: 0x78FBC0
static signed int g_tbl_clear[32]; // size: 0x80, address: 0x78FC40
class RpLight * ShadowLight; // size: 0x4, address: 0x63822C
class RwRGBAReal ShadowLightColor; // size: 0x10, address: 0x604C30
static float SHADOW_BOTH; // size: 0x4, address: 0x638230
static class RxObjSpace3DVertex * Im3DBuffer; // size: 0x4, address: 0x638234
static unsigned int Im3DBufferPos; // size: 0x4, address: 0x638238
float ShadowThreshold; // size: 0x4, address: 0x0
class RwCamera * ShadowCamera; // size: 0x4, address: 0x638240
class RwRaster * ShadowCameraRaster; // size: 0x4, address: 0x638244
static class RwRaster * ShadowRenderRaster; // size: 0x4, address: 0x638248
unsigned int gShadowFlags; // size: 0x4, address: 0x0
float gShadowObjectRadius; // size: 0x4, address: 0x63824C
static unsigned int shadow_ent_count; // size: 0x4, address: 0x638250
static class xEnt * shadow_ent_list[16]; // size: 0x40, address: 0x0
static signed int sShadowCollJSP; // size: 0x4, address: 0x638254
class RwMatrixTag sm_matrix; // size: 0x40, address: 0x78FCC0
float rscale; // size: 0x4, address: 0x636EF4
class RwV3d gCamPos; // size: 0xC, address: 0x78FD00
static unsigned int skyOldTest; // size: 0x4, address: 0x638258
static unsigned int shadvolquad_idx[6][4]; // size: 0x60, address: 0x604C40
static class xEnt * sEntSelf; // size: 0x4, address: 0x63825C
static unsigned char sCastEnvironment; // size: 0x1, address: 0x636EF8
static class xShadowMgr * sMgrList; // size: 0x4, address: 0x638260
static signed int sMgrCount; // size: 0x4, address: 0x638264
static signed int sMgrTotal; // size: 0x4, address: 0x638268
static class xShadowCache sCacheList[6]; // size: 0x12300, address: 0x78FD10
static class xShadowSimpleQueue sCollQueue[2]; // size: 0x30, address: 0x7A2010
static class RxRenderStateVector xrsv; // size: 0x2C, address: 0x7A2040
static class RxObjSpace3DVertex sShadVert[384]; // size: 0x3600, address: 0x7A2070
static class RwRaster * sShadRasters[64]; // size: 0x100, address: 0x7A5670
static class RwRaster * sShadRaster; // size: 0x4, address: 0x63826C
static unsigned int sShadVertCount; // size: 0x4, address: 0x638270
static class RwMatrixTag * sModelMat; // size: 0x4, address: 0x638280
static class SkyDomeInfo sSkyList[8]; // size: 0x80, address: 0x7A5770
static signed int sSkyCount; // size: 0x4, address: 0x638284
static float old_far_clip; // size: 0x4, address: 0x638288
float thresh; // size: 0x4, address: 0x0
float thresh; // size: 0x4, address: 0x0
float speedOfSound; // size: 0x4, address: 0x62CA80
class xSndGlobals gSnd; // size: 0x2970, address: 0x7A57F0
enum xSndEffect m_eCurrentEffect; // size: 0x4, address: 0x63828C
enum xSndEffect m_ePendingEffect; // size: 0x4, address: 0x638290
static float effectRequestTimer; // size: 0x4, address: 0x638294
static float s_fCategoryVolume[6]; // size: 0x18, address: 0x7A8160
static float s_fCategoryVolumeFade[6]; // size: 0x18, address: 0x7A8180
static class xSoundFX * s_managedEnvSoundFX[1]; // size: 0x4, address: 0x638298
static float sBasisUniformBspline[4][4]; // size: 0x40, address: 0x0
static float sBasisBezier[4][4]; // size: 0x40, address: 0x604CA0
static float sBasisHermite[4][4]; // size: 0x40, address: 0x604CE0
static signed int g_straninit; // size: 0x4, address: 0x6382A4
static class st_STRAN_DATA g_xstdata; // size: 0x1594, address: 0x7A81A0
static class PKRReadFuncs * g_pkrf; // size: 0x4, address: 0x6382A8
static class PKRAssetType * g_typeHandlers; // size: 0x4, address: 0x6382AC
static char g_localCode[4]; // size: 0x4, address: 0x636EFC
static enum xRegion g_localEnum; // size: 0x4, address: 0x6382B0
static class basic_rect screen_bounds; // size: 0x10, address: 0x62CA90
static class basic_rect default_adjust; // size: 0x10, address: 0x0
static float subtitleSize; // size: 0x4, address: 0x6382B4
static class xSurface * surfs; // size: 0x4, address: 0x6382C0
static unsigned short nsurfs; // size: 0x2, address: 0x6382C4
static unsigned int sPauseTimerHash[20]; // size: 0x50, address: 0x604D30
char timestamp[129]; // size: 0x81, address: 0x0
class xSpacePartitionTree2D space_tree; // size: 0xD0, address: 0x7AB050
class _tagTRCPadInfo gTrcPad[4]; // size: 0x30, address: 0x7AB120
class _tagTRCDiskInfo gTrcDisk; // size: 0x8, address: 0x6382D0
unsigned int gInTRC; // size: 0x4, address: 0x0
static char * k_CONTROLLER_MISSING_MESSAGE; // size: 0x4, address: 0x6382D8
static char * k_CONTROLLER_INVALID_MESSAGE; // size: 0x4, address: 0x6382DC
static class xColor_tag yellow; // size: 0x4, address: 0x62CAA0
static char composed_message_text[256]; // size: 0x100, address: 0x7AB1D0
static char * message_text; // size: 0x4, address: 0x6382E4
static unsigned int standalone; // size: 0x4, address: 0x6382E8
static signed int g_xutilinit; // size: 0x4, address: 0x6382F0
static signed int g_crc_needinit; // size: 0x4, address: 0x636F14
static unsigned int g_crc32_table[256]; // size: 0x400, address: 0x7AB350
static unsigned short ascii_table[3][2]; // size: 0xC, address: 0x604D90
static unsigned short ascii_k_table[33]; // size: 0x42, address: 0x604DA0
static unsigned short ascii_special_table[33]; // size: 0x42, address: 0x0
class xVec3 m_Null; // size: 0xC, address: 0x62CAA8
class xVec3 m_Ones; // size: 0xC, address: 0x0
class xVec3 m_NegOnes; // size: 0xC, address: 0x0
class xVec3 m_UnitAxisX; // size: 0xC, address: 0x62CAB8
class xVec3 m_UnitAxisY; // size: 0xC, address: 0x62CAC8
class xVec3 m_UnitAxisZ; // size: 0xC, address: 0x0
class xVec3 m_HalfVec; // size: 0xC, address: 0x0
class xVec3 m_NegHalfVec; // size: 0xC, address: 0x0
class xVec3 m_DoubleVec; // size: 0xC, address: 0x0
class xVec3 m_NegDoubleVec; // size: 0xC, address: 0x0
char _ctype_[]; // size: 0x0, address: 0x611800
unsigned int xUpdateCull_AlwaysTrueCB(void *, void *); // size: 0x0, address: 0x448700
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x643E38
unsigned int gActiveHeap; // size: 0x4, address: 0x638090
class xGlobals * xglobals; // size: 0x4, address: 0x636F28
class callback text_cb; // size: 0xC, address: 0x62BC08
class xColor_tag g_BLACK; // size: 0x4, address: 0x62C8A0
signed int bad_card_available; // size: 0x4, address: 0x6377C4
signed int bad_card_needed; // size: 0x4, address: 0x6377C8
enum eGameMode gGameMode; // size: 0x4, address: 0x6375B0
class zGlobals globals; // size: 0x2410, address: 0x7AB790
unsigned int FB_YRES; // size: 0x4, address: 0x636F20
unsigned int FB_XRES; // size: 0x4, address: 0x636F1C
unsigned int gBusStopIsRunning; // size: 0x4, address: 0x637CCC
void xTimerEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x44A740
void fileCallback(class tag_xFile *); // size: 0x0, address: 0x44B3A0
char * apszRegionCode[21]; // size: 0x54, address: 0x602730
void xSoundFXEventCB(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x454450
enum eSNDCurrentPlayer gCurrentPlayer; // size: 0x4, address: 0x6379FC
signed long skyFrame_1; // size: 0x4, address: 0x636800
unsigned int lastSetFBMSK; // size: 0x4, address: 0x638500
void xSkyDome_EmptyRender(class xEnt *); // size: 0x0, address: 0x458130
void xSkyDome_EmptyRender(class xEnt *); // size: 0x0, address: 0x458130
signed int shadowRayEntCB(class xEnt *, void *); // size: 0x0, address: 0x459C80
class xGrid colls_oso_grid; // size: 0x38, address: 0x66AEE0
class xGrid colls_grid; // size: 0x38, address: 0x66AEA0
class xQCControl xqc_def_ctrl; // size: 0x3C, address: 0x6A7E70
class RpCollisionTriangle * shadowRayCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x459D80
class RpCollisionTriangle * shadowRayModelCB(class RpIntersection *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x459D60
class xVec3 g_NY3; // size: 0xC, address: 0x62C520
unsigned char xClumpColl_FilterFlags; // size: 0x1, address: 0x636EAC
void xShadowModelRender(class xModelInstance *); // size: 0x0, address: 0x45B080
signed int CmpShadowMgr(void *, void *); // size: 0x0, address: 0x45B280
__int128 * _rwDMAGateSlot; // size: 0x4, address: 0x637108
class tagiRenderInput gRenderBuffer; // size: 0x80, address: 0x6ADAF0
class RpCollisionTriangle * shadowCacheEnvCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x45CA20
signed int shadowCacheEntityCB(class xEnt *, void *); // size: 0x0, address: 0x45C000
class xGrid npcs_grid; // size: 0x38, address: 0x66AF20
signed int shadowCacheLeafCB(signed int, signed int, void *); // size: 0x0, address: 0x45C2E0
signed int _rpCollisionGeometryDataOffset; // size: 0x4, address: 0x636328
class RpCollisionTriangle * ShadowRenderTriangleCB(class RpIntersection *, class RpWorldSector *, class RpCollisionTriangle *, float, void *); // size: 0x0, address: 0x0
void modelRenderCB(void *); // size: 0x0, address: 0x0
void xRayHitsEnt(class xScene *, class xRay3 *, class xQCData *, class xEnt *, void *); // size: 0x0, address: 0x39B9A0
signed int xSER_xsgclt_svproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x460120
signed int xSER_xsgclt_svinfo_fill(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x460180
signed int xSER_xsgclt_svproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x460310
signed int xSER_xsgclt_svinfo_clt(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x460360
signed int xSER_xsgclt_svproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_WRITECONTEXT *); // size: 0x0, address: 0x4603F0
signed int xSER_xsgclt_svinfo_ver(void *, class st_XSAVEGAME_DATA *, signed int *, signed int *); // size: 0x0, address: 0x460420
signed int xSER_xsgclt_ldproc_fill(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x4600B0
signed int xSER_xsgclt_ldproc_clt(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x4602A0
signed int xSER_xsgclt_ldproc_ver(void *, class st_XSAVEGAME_DATA *, class st_XSAVEGAME_READCONTEXT *, unsigned int, signed int); // size: 0x0, address: 0x460380
signed int xSER_ord_compare(void *, void *); // size: 0x0, address: 0x460680
signed int xSER_ord_test(void *, void *); // size: 0x0, address: 0x460640
void xPulseFn(class xPulse &, float); // size: 0x0, address: 0x462210
signed int lfcmp(void *, void *); // size: 0x0, address: 0x462710
void xScrFxLensFlare_RenderElements(class RwRaster *, class RwFrame *, unsigned char, void *); // size: 0x0, address: 0x462730
class RwCamera * globalCamera; // size: 0x4, address: 0x638110
void LensFlareSourceCB(void *, unsigned int, void *); // size: 0x0, address: 0x4632B0
void LensFlareElementCB(void *, unsigned int, void *); // size: 0x0, address: 0x4635B0
class xMat4x3 g_I3; // size: 0x40, address: 0x6D3810
__int128 * _rwDMAPktPtr; // size: 0x4, address: 0x637100
class xColor_tag g_WHITE; // size: 0x4, address: 0x62C8A8
class xColor_tag g_CLEAR; // size: 0x4, address: 0x62C8B0
void cb_dispatch(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x4682D0
// total size: 0xC
class cell {
    // Members
public:
    union { // inferred
        class cell * next_free_cell; // offset 0x0, size 0x4
        struct { // inferred
            unsigned short parent; // offset 0x0, size 0x2
            unsigned short children; // offset 0x2, size 0x2
        };
    };
    unsigned short entries; // offset 0x4, size 0x2
    unsigned char cid; // offset 0x6, size 0x1
    unsigned char level; // offset 0x7, size 0x1
    unsigned short xcode; // offset 0x8, size 0x2
    unsigned short ycode; // offset 0xA, size 0x2
};
// total size: 0x14
class entry_data {
    // Members
public:
    union { // inferred
        class entry_data * next_free_entry; // offset 0x0, size 0x4
        void * value; // offset 0x0, size 0x4
    };
    signed int type; // offset 0x4, size 0x4
    unsigned short searchid; // offset 0x8, size 0x2
    unsigned short owner_size; // offset 0xA, size 0x2
    unsigned short owner[4]; // offset 0xC, size 0x8
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
// total size: 0x1C
class xPELine {
    // Members
public:
    class xVec3 pos1; // offset 0x0, size 0xC
    class xVec3 pos2; // offset 0xC, size 0xC
    float radius; // offset 0x18, size 0x4
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
// total size: 0x70
class ShadowCBParam {
    // Members
public:
    class xShadowCache * cache; // offset 0x0, size 0x4
    class RpIntersection * isx; // offset 0x4, size 0x4
    class xVec3 capsuleStart; // offset 0x8, size 0xC
    class xVec3 capsuleEnd; // offset 0x14, size 0xC
    float capsuleRadius; // offset 0x20, size 0x4
    class xEnt * ent; // offset 0x24, size 0x4
    class RwLine localLine; // offset 0x28, size 0x18
    class RwV3d localDelta; // offset 0x40, size 0xC
    float localRadius; // offset 0x4C, size 0x4
    class RwMatrixTag * modelMat; // offset 0x50, size 0x4
    class RpGeometry * geom; // offset 0x54, size 0x4
    unsigned int polyFound; // offset 0x58, size 0x4
    class xEnt * rayCloser[5]; // offset 0x5C, size 0x14
};
// total size: 0x6C
class xSndVoiceInfo {
    // Members
public:
    union { // inferred
        class xSndGroup * soundGroup; // offset 0x0, size 0x4
        enum iSndGroupHandle soundGroupHandle; // offset 0x0, size 0x4
    };
    unsigned int assetID; // offset 0x4, size 0x4
    enum iSndHandle sndUniqueID; // offset 0x8, size 0x4
    class xEnt * pParent; // offset 0xC, size 0x4
    class xVec3 * pPosition; // offset 0x10, size 0x4
    unsigned int flags; // offset 0x14, size 0x4
    float vol; // offset 0x18, size 0x4
    float xpitch; // offset 0x1C, size 0x4
    float dopplerFreqCoef; // offset 0x20, size 0x4
    signed short category; // offset 0x24, size 0x2
    unsigned char bformerlyAPartOfPriority; // offset 0x26, size 0x1
    unsigned char priority; // offset 0x27, size 0x1
    class xVec3 actualPos; // offset 0x28, size 0xC
    class xVec3 playPos; // offset 0x34, size 0xC
    class xVec3 * pVelocity; // offset 0x40, size 0x4
    class xVec3 actualVelocity; // offset 0x44, size 0xC
    float distToListener; // offset 0x50, size 0x4
    float innerRadius; // offset 0x54, size 0x4
    float outerRadius; // offset 0x58, size 0x4
    class iSndInfo ps; // offset 0x5C, size 0xC
    class iSndFileInfo * pSndFileInfo; // offset 0x68, size 0x4
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
// total size: 0x10
class RxClusterDefinition {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    unsigned int defaultStride; // offset 0x4, size 0x4
    unsigned int defaultAttributes; // offset 0x8, size 0x4
    char * attributeSet; // offset 0xC, size 0x4
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
class st_SERIAL_CLIENTINFO {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int * membuf; // offset 0x4, size 0x4
    signed int trueoff; // offset 0x8, size 0x4
    signed int actsize; // offset 0xC, size 0x4
};
// total size: 0x30
class warper {
    // Members
public:
    class warper * next; // offset 0x0, size 0x4
    class warper * prev; // offset 0x4, size 0x4
    signed int flags; // offset 0x8, size 0x4
    float life; // offset 0xC, size 0x4
    float iduration; // offset 0x10, size 0x4
    float radius; // offset 0x14, size 0x4
    float intensity; // offset 0x18, size 0x4
    float freq; // offset 0x1C, size 0x4
    enum type_enum type; // offset 0x20, size 0x4
    union { // inferred
        class xVec3 loc3; // offset 0x24, size 0xC
        class xVec2 loc2; // offset 0x24, size 0x8
        class xVec3 * ploc3; // offset 0x24, size 0x4
        class xVec2 * ploc2; // offset 0x24, size 0x4
    };
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
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x1594
class st_STRAN_DATA {
    // Members
public:
    class st_STRAN_SCENE hipscn[20]; // offset 0x0, size 0x1590
    unsigned int loadlock; // offset 0x1590, size 0x4
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
// total size: 0x4
class entry_node {
    // Members
public:
    union { // inferred
        class entry_node * next_free_node; // offset 0x0, size 0x4
        struct { // inferred
            unsigned short next; // offset 0x0, size 0x2
            unsigned short entry; // offset 0x2, size 0x2
        };
    };
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
// total size: 0x0
class zEntHangable {};
// total size: 0x20
class xGroup : public xBase {
    // Members
public:
    class xGroupAsset * asset; // offset 0x10, size 0x4
    class xBase * * item; // offset 0x14, size 0x4
    unsigned int last_index; // offset 0x18, size 0x4
    signed int flg_group; // offset 0x1C, size 0x4
};
// total size: 0x8F8
class st_PACKER_READ_DATA {
    // Members
public:
    class PKRAssetType * types; // offset 0x0, size 0x4
    void * userdata; // offset 0x4, size 0x4
    unsigned int opts; // offset 0x8, size 0x4
    unsigned int pkgver; // offset 0xC, size 0x4
    signed int cltver; // offset 0x10, size 0x4
    signed int subver; // offset 0x14, size 0x4
    signed int compatver; // offset 0x18, size 0x4
    class st_HIPLOADDATA * pkg; // offset 0x1C, size 0x4
    unsigned int base_sector; // offset 0x20, size 0x4
    signed int lockid; // offset 0x24, size 0x4
    char packfile[128]; // offset 0x28, size 0x80
    signed int asscnt; // offset 0xA8, size 0x4
    signed int laycnt; // offset 0xAC, size 0x4
    class st_XORDEREDARRAY asstoc; // offset 0xB0, size 0x10
    class st_XORDEREDARRAY laytoc; // offset 0xC0, size 0x10
    class st_PACKER_ATOC_NODE * pool_anode; // offset 0xD0, size 0x4
    signed int pool_nextaidx; // offset 0xD4, size 0x4
    class st_XORDEREDARRAY typelist[129]; // offset 0xD8, size 0x810
    signed long time_made; // offset 0x8E8, size 0x4
    signed long time_mod; // offset 0x8F0, size 0x4
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
// total size: 0x30
class xShadowSimplePoly {
    // Members
public:
    class xVec3 vert[3]; // offset 0x0, size 0x24
    class xVec3 norm; // offset 0x24, size 0xC
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
// total size: 0x30
class xScrFxLensFlareSourceAsset : public xDynAsset {
    // Members
public:
    unsigned int object; // offset 0x10, size 0x4
    unsigned int elementID; // offset 0x14, size 0x4
    class xScrFxLensFlareElement * * elementArray; // offset 0x18, size 0x4
    unsigned int numElements; // offset 0x1C, size 0x4
    float size; // offset 0x20, size 0x4
    float intensity; // offset 0x24, size 0x4
    float coneAngle; // offset 0x28, size 0x4
    unsigned int distanceAttenuationMode; // offset 0x2C, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    float cx0; // offset 0x0, size 0x4
    float cy0; // offset 0x4, size 0x4
    float cx1; // offset 0x8, size 0x4
    float cy1; // offset 0xC, size 0x4
};
// total size: 0x8
class zDestructibleStateAttachedAnimList {
    // Members
public:
    unsigned int nanimations; // offset 0x0, size 0x4
    void * * animData; // offset 0x4, size 0x4
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
// total size: 0x6C
class xPulseGlare {
    // Members
public:
    class config cfg; // offset 0x0, size 0xC
    void (* cb_update_size)(class xPulse &, float); // offset 0xC, size 0x4
    void (* cb_update_rot)(class xPulse &, float); // offset 0x10, size 0x4
    class xVec3 pos; // offset 0x14, size 0xC
    class xVec3 dir; // offset 0x20, size 0xC
    float scale_dir; // offset 0x2C, size 0x4
    float elapsed; // offset 0x30, size 0x4
    float lifetime; // offset 0x34, size 0x4
    float size; // offset 0x38, size 0x4
    float angle; // offset 0x3C, size 0x4
    class xPulse p; // offset 0x40, size 0x14
    signed int flags; // offset 0x54, size 0x4
    class RwRaster * raster; // offset 0x58, size 0x4
    class RwRGBAReal col; // offset 0x5C, size 0x10
};
// total size: 0x14
class xPulse {
    // Members
public:
    float max_amp; // offset 0x0, size 0x4
    float elapsed; // offset 0x4, size 0x4
    float period; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float noise; // offset 0x10, size 0x4
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
class xTextureHandle {
    // Members
public:
    class RwTexture * m_pTexture; // offset 0x0, size 0x4
    class xInternalMovieNode * m_pMovie; // offset 0x4, size 0x4
    class xInternalTextureNode * m_pNode; // offset 0x8, size 0x4
    class xInternalTextureNode * m_pPrevNode; // offset 0xC, size 0x4
};
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
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
// total size: 0x10
class zQuat {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
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
// total size: 0x50
class zUIAsset : public xDynAsset {
    // Members
public:
    float x; // offset 0x10, size 0x4
    float y; // offset 0x14, size 0x4
    float z; // offset 0x18, size 0x4
    float width; // offset 0x1C, size 0x4
    float height; // offset 0x20, size 0x4
    signed int flags; // offset 0x24, size 0x4
    unsigned int color; // offset 0x28, size 0x4
    unsigned int selectedMotion; // offset 0x2C, size 0x4
    unsigned int unselectedMotion; // offset 0x30, size 0x4
    unsigned char brightness; // offset 0x34, size 0x1
    unsigned char pad[3]; // offset 0x35, size 0x3
    unsigned int autoMenuUp; // offset 0x38, size 0x4
    unsigned int autoMenuDown; // offset 0x3C, size 0x4
    unsigned int autoMenuLeft; // offset 0x40, size 0x4
    unsigned int autoMenuRight; // offset 0x44, size 0x4
    unsigned int custom; // offset 0x48, size 0x4
    unsigned int customWidget; // offset 0x4C, size 0x4
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
// total size: 0xD0
class xSpacePartitionTree2D {
    // Members
public:
    class xVec2 origin; // offset 0x0, size 0x8
    class xVec2 size; // offset 0x8, size 0x8
    float cell_size[9]; // offset 0x10, size 0x24
    float cell_isize[9]; // offset 0x34, size 0x24
    float cell_frac[9]; // offset 0x58, size 0x24
    signed int max_depth; // offset 0x7C, size 0x4
    float ilogdepth; // offset 0x80, size 0x4
    signed int grid_size_x; // offset 0x84, size 0x4
    signed int grid_shift_x; // offset 0x88, size 0x4
    signed int grid_mask_x; // offset 0x8C, size 0x4
    signed int grid_size_y; // offset 0x90, size 0x4
    signed int grid_shift_y; // offset 0x94, size 0x4
    signed int grid_mask_y; // offset 0x98, size 0x4
    unsigned short current_searchid; // offset 0x9C, size 0x2
    class entry_data * free_entries; // offset 0xA0, size 0x4
    class entry_node * free_nodes; // offset 0xA4, size 0x4
    class cell * free_cells; // offset 0xA8, size 0x4
    signed int free_cells_size; // offset 0xAC, size 0x4
    signed int safety_free_cells_size; // offset 0xB0, size 0x4
    class cell * grid; // offset 0xB4, size 0x4
    class entry_data * entry_buffer; // offset 0xB8, size 0x4
    signed int entry_buffer_size; // offset 0xBC, size 0x4
    class entry_node * node_buffer; // offset 0xC0, size 0x4
    signed int node_buffer_size; // offset 0xC4, size 0x4
    class cell * cell_buffer; // offset 0xC8, size 0x4
    signed int cell_buffer_size; // offset 0xCC, size 0x4
};
// total size: 0xC
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x60
class st_PACKER_ATOC_NODE {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    unsigned int asstype; // offset 0x4, size 0x4
    signed int d_off; // offset 0x8, size 0x4
    signed int d_size; // offset 0xC, size 0x4
    signed int d_pad; // offset 0x10, size 0x4
    unsigned int d_chksum; // offset 0x14, size 0x4
    signed int assalign; // offset 0x18, size 0x4
    signed int infoflag; // offset 0x1C, size 0x4
    signed int loadflag; // offset 0x20, size 0x4
    char * memloc; // offset 0x24, size 0x4
    signed int x_size; // offset 0x28, size 0x4
    signed int readcnt; // offset 0x2C, size 0x4
    signed int readrem; // offset 0x30, size 0x4
    class PKRAssetType * typeref; // offset 0x34, size 0x4
    class st_HIPLOADDATA * ownpkg; // offset 0x38, size 0x4
    class st_PACKER_READ_DATA * ownpr; // offset 0x3C, size 0x4
    char name[32]; // offset 0x40, size 0x20
};
// total size: 0xC
class XCSNNosey {
    // Members
public:
    void * userdata; // offset 0x4, size 0x4
    signed int flg_nosey; // offset 0x8, size 0x4
};
// total size: 0xC
class tri_data {
    // Members
public:
    unsigned int index; // offset 0x0, size 0x4
    float r; // offset 0x4, size 0x4
    float d; // offset 0x8, size 0x4
};
// total size: 0x20
class text_profile {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    class text_profile * parent; // offset 0x4, size 0x4
    signed long start_time; // offset 0x8, size 0x4
    signed long accumulated_time; // offset 0x10, size 0x4
    float last_frame_time; // offset 0x18, size 0x4
    unsigned int calls; // offset 0x1C, size 0x4
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
// total size: 0x8
class cb_fp_wrapper {
    // Members
public:
    unsigned char (* cb)(class entry_data *, void *); // offset 0x0, size 0x4
    void * context; // offset 0x4, size 0x4
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
// total size: 0x1890
class xTextureManager {
    // Members
public:
    unsigned int m_maxPoolSize; // offset 0x0, size 0x4
    unsigned int m_currentPoolSize; // offset 0x4, size 0x4
    signed int m_lru; // offset 0x8, size 0x4
    class xInternalTextureNode m_texture_nodes[128]; // offset 0xC, size 0x1200
    class xInternalMovieNode m_movie_nodes[4]; // offset 0x120C, size 0xC0
    class tag_xFile m_files[8]; // offset 0x12CC, size 0x5A0
    unsigned int m_clearIDs[8]; // offset 0x186C, size 0x20
    signed int m_pendingRequests; // offset 0x188C, size 0x4
};
// total size: 0x14
class xVolume : public xBase {
    // Members
public:
    class xVolumeAsset * asset; // offset 0x10, size 0x4
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
// total size: 0x30
class xCoef3 {
    // Members
public:
    class xCoef x; // offset 0x0, size 0x10
    class xCoef y; // offset 0x10, size 0x10
    class xCoef z; // offset 0x20, size 0x10
};
// total size: 0x1C
class xTimer : public xBase {
    // Members
public:
    class xTimerAsset * tasset; // offset 0x10, size 0x4
    unsigned char state; // offset 0x14, size 0x1
    unsigned char runsInPause; // offset 0x15, size 0x1
    unsigned short flags; // offset 0x16, size 0x2
    float secondsLeft; // offset 0x18, size 0x4
};
// total size: 0x10
class RpCollSplit {
    // Members
public:
    class RpCollSector leftSector; // offset 0x0, size 0x8
    class RpCollSector rightSector; // offset 0x8, size 0x8
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
// total size: 0x8
class xJSPNodeInfo {
    // Members
public:
    signed int originalMatIndex; // offset 0x0, size 0x4
    unsigned short nodeFlags; // offset 0x4, size 0x2
    signed short sortOrder; // offset 0x6, size 0x2
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
// total size: 0x4
class xCutsceneModelHack {
    // Members
public:
    class xModelPipe * pipe; // offset 0x0, size 0x4
};
enum RwFogType {
    rwFOGTYPENAFOGTYPE = 0,
    rwFOGTYPELINEAR = 1,
    rwFOGTYPEEXPONENTIAL = 2,
    rwFOGTYPEEXPONENTIAL2 = 3,
    rwFOGTYPEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x10
class xScrFxLensFlareSource {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class xVec3 * pos; // offset 0x4, size 0x4
    class xVec3 * at; // offset 0x8, size 0x4
    class xScrFxLensFlareSourceAsset * asset; // offset 0xC, size 0x4
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
// total size: 0x0
class xPlatformAsset {};
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
// total size: 0x20
class xJSPNodeTreeLeaf {
    // Members
public:
    signed int nodeIndex; // offset 0x0, size 0x4
    signed int leafCount; // offset 0x4, size 0x4
    class RwBBox box; // offset 0x8, size 0x18
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
// total size: 0xB4
class tag_xFile {
    // Members
public:
    char relname[32]; // offset 0x0, size 0x20
    class tag_iFile ps; // offset 0x20, size 0x90
    void * user_data; // offset 0xB0, size 0x4
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
enum en_LAYER_TYPE {
    PKR_LTYPE_ALL = -1,
    PKR_LTYPE_DEFAULT = 0,
    PKR_LTYPE_TEXTURE = 1,
    PKR_LTYPE_TEXTURE_STRM = 2,
    PKR_LTYPE_BSP = 3,
    PKR_LTYPE_MODEL = 4,
    PKR_LTYPE_ANIMATION = 5,
    PKR_LTYPE_VRAM = 6,
    PKR_LTYPE_SRAM = 7,
    PKR_LTYPE_SNDTOC = 8,
    PKR_LTYPE_CUTSCENE = 9,
    PKR_LTYPE_CUTSCENETOC = 10,
    PKR_LTYPE_JSPINFO = 11,
    PKR_LTYPE_NOMORE = 12,
};
// total size: 0xC
class xAnimMultiFile : public xAnimMultiFileBase {
    // Members
public:
    class xAnimMultiFileEntry Files[1]; // offset 0x4, size 0x8
};
// total size: 0x1C
class NURBS : public xBaseAsset {
    // Members
public:
    signed int p; // offset 0x8, size 0x4
    signed int m; // offset 0xC, size 0x4
    signed int n; // offset 0x10, size 0x4
    float * knot; // offset 0x14, size 0x4
    class xVec3 * control; // offset 0x18, size 0x4
};
// total size: 0x8
class RpTriangle {
    // Members
public:
    unsigned short vertIndex[3]; // offset 0x0, size 0x6
    unsigned short matIndex; // offset 0x6, size 0x2
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
// total size: 0x80
class tagiRenderInput {
    // Members
public:
    unsigned short * m_index; // offset 0x0, size 0x4
    class RxObjSpace3DVertex * m_vertex; // offset 0x4, size 0x4
    float * m_vertexTZ; // offset 0x8, size 0x4
    unsigned int m_mode; // offset 0xC, size 0x4
    signed int m_vertexType; // offset 0x10, size 0x4
    signed int m_vertexTypeSize; // offset 0x14, size 0x4
    signed int m_indexCount; // offset 0x18, size 0x4
    signed int m_vertexCount; // offset 0x1C, size 0x4
    class xMat4x3 m_camViewMatrix; // offset 0x20, size 0x40
    class xVec4 m_camViewR; // offset 0x60, size 0x10
    class xVec4 m_camViewU; // offset 0x70, size 0x10
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
// total size: 0x60
class _ProjectionParam {
    // Members
public:
    class RwV3d at; // offset 0x0, size 0xC
    class RwMatrixTag invMatrix; // offset 0x10, size 0x40
    unsigned char shadowValue; // offset 0x50, size 0x1
    signed int fade; // offset 0x54, size 0x4
    unsigned int numIm3DBatch; // offset 0x58, size 0x4
    unsigned int shadowWord; // offset 0x5C, size 0x4
};
// total size: 0x20
class xSndGroup {
    // Members
public:
    class xSndGroupHeader header; // offset 0x0, size 0x20
    class xSndGroupInfo aSndGroupInfo[]; // offset 0x20, size 0x0
};
// total size: 0x8
class substr {
    // Members
public:
    char * text; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
// total size: 0x24
class zCutsceneMgr : public xCutsceneMgr {
    // Members
public:
    unsigned char pausedMusic; // offset 0x20, size 0x1
    unsigned char sendDoneForDisabledCutscene; // offset 0x21, size 0x1
};
// total size: 0x8
class xCamScreen {
    // Members
public:
    class RwCamera * icam; // offset 0x0, size 0x4
    float fov; // offset 0x4, size 0x4
};
// total size: 0x10
class xShadowMgr {
    // Members
public:
    class xEnt * ent; // offset 0x0, size 0x4
    class xShadowCache * cache; // offset 0x4, size 0x4
    signed int priority; // offset 0x8, size 0x4
    signed int cacheReady; // offset 0xC, size 0x4
};
// total size: 0x114
class st_STRAN_SCENE {
    // Members
public:
    unsigned int scnid; // offset 0x0, size 0x4
    signed int lockid; // offset 0x4, size 0x4
    class st_PACKER_READ_DATA * spkg; // offset 0x8, size 0x4
    signed int flgHipHop; // offset 0xC, size 0x4
    void * userdata; // offset 0x10, size 0x4
    char fnam[256]; // offset 0x14, size 0x100
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
// total size: 0x2
class _tagPadAnalog {
    // Members
public:
    signed char x; // offset 0x0, size 0x1
    signed char y; // offset 0x1, size 0x1
};
// total size: 0x1C
class xSoundFX : public xBase {
    // Members
public:
    class xSoundFXAsset * asset; // offset 0x10, size 0x4
    enum iSndHandle sndHandle; // offset 0x14, size 0x4
    float cachedOuterDistSquared; // offset 0x18, size 0x4
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x30
class xInternalMovieNode {
    // Members
public:
    unsigned int hash_id; // offset 0x0, size 0x4
    class PKRAssetTOCInfo info; // offset 0x4, size 0x18
    class MOVIE * pMovie; // offset 0x1C, size 0x4
    class RwTexture * pTexture; // offset 0x20, size 0x4
    unsigned char used; // offset 0x24, size 0x1
    unsigned char m_looping; // offset 0x25, size 0x1
    unsigned short m_freezeframed; // offset 0x26, size 0x2
    unsigned int m_startframe; // offset 0x28, size 0x4
    unsigned int m_endframe; // offset 0x2C, size 0x4
};
// total size: 0x8
class cb_accum_wrapper {
    // Members
public:
    class entry_data * * results; // offset 0x0, size 0x4
    class entry_data * * end_results; // offset 0x4, size 0x4
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
// total size: 0x8
class ShadowSimpleCBParam {
    // Members
public:
    class xShadowSimpleCache * cache; // offset 0x0, size 0x4
    class RpIntersection * isx; // offset 0x4, size 0x4
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
// total size: 0x10
class /* @class */ {
    // Members
public:
    union { // inferred
        class xQuat quat; // offset 0x0, size 0x10
        class xCamOrientEuler euler; // offset 0x0, size 0xC
    };
};
// total size: 0xC
class config {
    // Members
public:
    float vis_angle; // offset 0x0, size 0x4
    float amp_freq; // offset 0x4, size 0x4
    float rot_freg; // offset 0x8, size 0x4
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
// total size: 0x28
class xSurface : public xBase {
    // Members
public:
    unsigned int idx; // offset 0x10, size 0x4
    unsigned int type; // offset 0x14, size 0x4
    union { // inferred
        unsigned int mat_idx; // offset 0x18, size 0x4
        class xEnt * ent; // offset 0x18, size 0x4
        void * obj; // offset 0x18, size 0x4
    };
    float friction; // offset 0x1C, size 0x4
    unsigned char state; // offset 0x20, size 0x1
    unsigned char pad[3]; // offset 0x21, size 0x3
    void * moprops; // offset 0x24, size 0x4
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
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
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
enum eSNDCurrentPlayer {
    eCurrentPlayerSpongeBob = 0,
    eCurrentPlayerPatrick = 1,
    eCurrentPlayerCar = 2,
    eCurrentPlayerSpongePat = 3,
    eCurrentPlayerCount = 4,
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
// total size: 0x24
class xInternalTextureNode {
    // Members
public:
    class PKRAssetTOCInfo info; // offset 0x0, size 0x18
    union { // inferred
        void * pAssetMemory; // offset 0x18, size 0x4
        class RwTexture * pTexture; // offset 0x18, size 0x4
    };
    unsigned short LRU; // offset 0x1C, size 0x2
    unsigned char refCount; // offset 0x1E, size 0x1
    signed char state; // offset 0x1F, size 0x1
    unsigned char used; // offset 0x20, size 0x1
};
// total size: 0xC
class xAnimPhysicsData {
    // Members
public:
    class xVec3 * tranTable; // offset 0x0, size 0x4
    float * yawTable; // offset 0x4, size 0x4
    signed int tranCount; // offset 0x8, size 0x4
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
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
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
// total size: 0x14
class search_end {
    // Members
public:
    float u; // offset 0x0, size 0x4
    class xVec3 pos; // offset 0x4, size 0xC
    float dist_to_circle; // offset 0x10, size 0x4
};
// total size: 0x0
class zAssetPickupTable {};
// total size: 0x4
class xPEVolume {
    // Members
public:
    unsigned int emit_volumeID; // offset 0x0, size 0x4
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
enum RwTextureFilterMode {
    rwFILTERNAFILTERMODE = 0,
    rwFILTERNEAREST = 1,
    rwFILTERLINEAR = 2,
    rwFILTERMIPNEAREST = 3,
    rwFILTERMIPLINEAR = 4,
    rwFILTERLINEARMIPNEAREST = 5,
    rwFILTERLINEARMIPLINEAR = 6,
    rwTEXTUREFILTERMODEFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x24
class st_XSERIAL_DATA_PRIV {
    // Members
public:
    signed int flg_info; // offset 0x0, size 0x4
    signed int * bitbuf; // offset 0x4, size 0x4
    signed int buf_bytcnt; // offset 0x8, size 0x4
    class st_SERIAL_CLIENTINFO * cltbuf; // offset 0xC, size 0x4
    class st_SERIAL_CLIENTINFO * cltnext; // offset 0x10, size 0x4
    class st_XORDEREDARRAY cltlist; // offset 0x14, size 0x10
};
// total size: 0x4C
class cameraFX {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    signed int flags; // offset 0x4, size 0x4
    float elapsedTime; // offset 0x8, size 0x4
    float maxTime; // offset 0xC, size 0x4
    union { // inferred
        class cameraFXShake shake; // offset 0x10, size 0x3C
        class cameraFXZoom zoom; // offset 0x10, size 0x20
    };
};
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
// total size: 0x44
class PKRReadFuncs {
    // Members
public:
    unsigned int api_ver; // offset 0x0, size 0x4
    class st_PACKER_READ_DATA * (* Init)(void *, char *, unsigned int, signed int *, class PKRAssetType *, signed int); // offset 0x4, size 0x4
    void (* Done)(class st_PACKER_READ_DATA *); // offset 0x8, size 0x4
    signed int (* LoadLayer)(class st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0xC, size 0x4
    unsigned int (* GetAssetSize)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x10, size 0x4
    void * (* LoadAsset)(class st_PACKER_READ_DATA *, unsigned int, char *, void *, signed int *); // offset 0x14, size 0x4
    void * (* AssetByType)(class st_PACKER_READ_DATA *, unsigned int, signed int, unsigned int *); // offset 0x18, size 0x4
    signed int (* AssetCount)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x1C, size 0x4
    signed int (* IsAssetReady)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x20, size 0x4
    signed int (* SetActive)(class st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0x24, size 0x4
    char * (* AssetName)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x28, size 0x4
    unsigned int (* GetBaseSector)(class st_PACKER_READ_DATA *); // offset 0x2C, size 0x4
    signed int (* GetAssetInfo)(class st_PACKER_READ_DATA *, unsigned int, class PKRAssetTOCInfo *); // offset 0x30, size 0x4
    signed int (* GetAssetInfoByType)(class st_PACKER_READ_DATA *, unsigned int, signed int, class PKRAssetTOCInfo *); // offset 0x34, size 0x4
    signed int (* PkgHasAsset)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x38, size 0x4
    unsigned int (* PkgTimeStamp)(class st_PACKER_READ_DATA *); // offset 0x3C, size 0x4
    void (* PkgDisconnect)(class st_PACKER_READ_DATA *); // offset 0x40, size 0x4
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
// total size: 0xC
class xSubtitleLine {
    // Members
public:
    float fStartTime; // offset 0x0, size 0x4
    float fStopTime; // offset 0x4, size 0x4
    unsigned int uStringOffset; // offset 0x8, size 0x4
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
// total size: 0xC
class RxOutputSpec {
    // Members
public:
    char * name; // offset 0x0, size 0x4
    enum RxClusterValid * outputClusters; // offset 0x4, size 0x4
    enum RxClusterValid allOtherClusters; // offset 0x8, size 0x4
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
// total size: 0x0
class xEntBoulder {};
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
// total size: 0x0
class st_XSAVEGAME_DATA {};
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
// total size: 0xC
class xJSPMiniLightTie {
    // Members
public:
    class RwLLLink lightInWorldSector; // offset 0x0, size 0x8
    class RpLight * light; // offset 0x8, size 0x4
};
// total size: 0x8
class /* @class */ {
    // Members
public:
    unsigned int address; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
enum zGlobalDemoType {
    zDT_NONE = 0,
    zDT_E3 = 1,
    zDT_PUBLICITY = 2,
    zDT_OPM = 3,
    zDT_LAST = 4,
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
// total size: 0x8
class ShadowCacheContext {
    // Members
public:
    class xShadowCache * cache; // offset 0x0, size 0x4
    float minNormY; // offset 0x4, size 0x4
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
// total size: 0x70
class xEnv {
    // Members
public:
    class iEnv * geom; // offset 0x0, size 0x4
    class iEnv ienv; // offset 0x10, size 0x50
    class xLightKit * lightKit; // offset 0x60, size 0x4
};
// total size: 0x28
class xScreenFade : public xBase {
    // Members
public:
    class asset_type * asset; // offset 0x10, size 0x4
    enum eScreenFadeState state; // offset 0x14, size 0x4
    class xColor_tag src; // offset 0x18, size 0x4
    class xColor_tag current_color; // offset 0x1C, size 0x4
    float time_passed; // offset 0x20, size 0x4
    class xBase * owner; // offset 0x24, size 0x4
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
// total size: 0xC
class /* @class */ {
    // Members
public:
    float t; // offset 0x0, size 0x4
    float u; // offset 0x4, size 0x4
    float v; // offset 0x8, size 0x4
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
// total size: 0xC
class iSndInfo {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    class iSndVol vol; // offset 0x4, size 0x4
    signed int lastStreamBuffer; // offset 0x8, size 0x4
};
enum RwTextureAddressMode {
    rwTEXTUREADDRESSNATEXTUREADDRESS = 0,
    rwTEXTUREADDRESSWRAP = 1,
    rwTEXTUREADDRESSMIRROR = 2,
    rwTEXTUREADDRESSCLAMP = 3,
    rwTEXTUREADDRESSBORDER = 4,
    rwTEXTUREADDRESSMODEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x14
class _zPortal : public xBase {
    // Members
public:
    class xPortalAsset * passet; // offset 0x10, size 0x4
};
// total size: 0x10
class xSphere {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
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
// total size: 0x1C
class RpIntersection {
    // Members
public:
    class RpIntersectData t; // offset 0x0, size 0x18
    enum RpIntersectType type; // offset 0x18, size 0x4
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
// total size: 0xC
class _tagTRCPadInfo : public _tagiTRCPadInfo {
    // Members
public:
    signed int id; // offset 0x4, size 0x4
    enum _tagTRCState state; // offset 0x8, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x6C
class zUI : public xBase {
    // Members
public:
    class zUIAsset * asset; // offset 0x10, size 0x4
    class State current; // offset 0x14, size 0x18
    class State startMovement; // offset 0x2C, size 0x18
    float z; // offset 0x44, size 0x4
    class zUIMotionAsset * selectedMotion; // offset 0x48, size 0x4
    class zUIMotionAsset * unselectedMotion; // offset 0x4C, size 0x4
    class zUICustom * custom; // offset 0x50, size 0x4
    unsigned char visible; // offset 0x54, size 0x1
    unsigned char focus; // offset 0x55, size 0x1
    unsigned char lastFocus; // offset 0x56, size 0x1
    unsigned char selected; // offset 0x57, size 0x1
    unsigned char brighten; // offset 0x58, size 0x1
    unsigned char hdrPass; // offset 0x59, size 0x1
    unsigned char locked; // offset 0x5A, size 0x1
    class zUIMotionAsset * motion; // offset 0x60, size 0x4
    float motionTime; // offset 0x64, size 0x4
    unsigned char motionFiredEvent; // offset 0x68, size 0x1
    unsigned char motionLoop; // offset 0x69, size 0x1
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
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
class xSndGroupInfo {
    // Members
public:
    unsigned int uSoundNameHash; // offset 0x0, size 0x4
    float fVolume; // offset 0x4, size 0x4
    float fMinPitchMult; // offset 0x8, size 0x4
    float fMaxPitchMult; // offset 0xC, size 0x4
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
// total size: 0x28
class RpCollisionTriangle {
    // Members
public:
    class RwV3d normal; // offset 0x0, size 0xC
    class RwV3d point; // offset 0xC, size 0xC
    signed int index; // offset 0x18, size 0x4
    class RwV3d * vertices[3]; // offset 0x1C, size 0xC
};
enum en_pkrfindmyass {
    PKR_FIND_FAILED = 0,
    PKR_FIND_EXACT = 1,
    PKR_FIND_EXACT_XFORM = 2,
    PKR_FIND_RANGE = 3,
    PKR_FIND_RANGE_XFORM = 4,
};
// total size: 0x10
class xRot {
    // Members
public:
    class xVec3 axis; // offset 0x0, size 0xC
    float angle; // offset 0xC, size 0x4
};
// total size: 0x1C
class HIFastIMLockStruct {
    // Members
public:
    __int128 * dmaPacket; // offset 0x0, size 0x4
    signed int qwCount; // offset 0x4, size 0x4
    signed int format; // offset 0x8, size 0x4
    class xVec3 * pos; // offset 0xC, size 0x4
    class xVec2 * uv; // offset 0x10, size 0x4
    class xColor_tag * color; // offset 0x14, size 0x4
    signed int vertCount; // offset 0x18, size 0x4
};
// total size: 0x0
class st_XSAVEGAME_WRITECONTEXT {};
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
// total size: 0xC
class rxHeapSuperBlockDescriptor {
    // Members
public:
    void * start; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
    class rxHeapSuperBlockDescriptor * next; // offset 0x8, size 0x4
};
// total size: 0x18
class _xFadeData {
    // Members
public:
    unsigned char active; // offset 0x0, size 0x1
    unsigned char hold_at_dest; // offset 0x1, size 0x1
    class xColor_tag src; // offset 0x2, size 0x4
    class xColor_tag dest; // offset 0x6, size 0x4
    float time_passed; // offset 0xC, size 0x4
    float time_total; // offset 0x10, size 0x4
    class xColor_tag current_color; // offset 0x14, size 0x4
};
// total size: 0xC
class xPEOffsetPoint {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
};
// total size: 0x0
class xFFX {};
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
// total size: 0x3600
class xPulseGlareMgr {
    // Members
public:
    class xPulseGlare glares[128]; // offset 0x0, size 0x3600
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
// total size: 0x10
class xCoef {
    // Members
public:
    float a[4]; // offset 0x0, size 0x10
};
// total size: 0x14
class xCylinder {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    float r; // offset 0xC, size 0x4
    float h; // offset 0x10, size 0x4
};
// total size: 0x4
class xTextAsset {
    // Members
public:
    unsigned int len; // offset 0x0, size 0x4
};
// total size: 0x30
class xShadowPoly {
    // Members
public:
    class xVec4 vert[3]; // offset 0x0, size 0x30
};
// total size: 0x4
class RpSector {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
};
// total size: 0x0
class zRewardsMgr {};
// total size: 0x90
class zParEmitter : public xParEmitter {};
// total size: 0x4
class xClumpCollBSPVertInfo {
    // Members
public:
    unsigned short atomIndex; // offset 0x0, size 0x2
    unsigned short meshVertIndex; // offset 0x2, size 0x2
};
// total size: 0x0
class zUIMotionAsset {};
// total size: 0x4
class _tagiPad {
    // Members
public:
    signed int port; // offset 0x0, size 0x4
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
// total size: 0x10
class xClumpCollBSPTree {
    // Members
public:
    signed int numBranchNodes; // offset 0x0, size 0x4
    class xClumpCollBSPBranchNode * branchNodes; // offset 0x4, size 0x4
    signed int numTriangles; // offset 0x8, size 0x4
    class xClumpCollBSPTriangle * triangles; // offset 0xC, size 0x4
};
// total size: 0x18
class emitterBase : public xBase {
    // Members
public:
    class effectAsset * pEffectAsset; // offset 0x10, size 0x4
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
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
};
// total size: 0x10
class xScrFxLensFlareParams {
    // Members
public:
    float near_dist; // offset 0x0, size 0x4
    float far_dist; // offset 0x4, size 0x4
    float near_dist2; // offset 0x8, size 0x4
    float far_dist2; // offset 0xC, size 0x4
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
// total size: 0x14
class xFXFastRaster {
    // Members
public:
    class RwRaster * src; // offset 0x0, size 0x4
    class RwRaster * dst; // offset 0x4, size 0x4
    unsigned int fbmsk; // offset 0x8, size 0x4
    unsigned int test; // offset 0xC, size 0x4
    unsigned int old_alpha_1; // offset 0x10, size 0x4
};
// total size: 0x0
class st_XSAVEGAME_READCONTEXT {};
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
// total size: 0x8
class zUICustom {
    // Members
public:
    class zUI * ui; // offset 0x4, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    signed int file_index; // offset 0x0, size 0x4
    unsigned int lsn; // offset 0x4, size 0x4
    unsigned int data_size; // offset 0x8, size 0x4
    unsigned short stream_interleave_size; // offset 0xC, size 0x2
    unsigned short stream_interleave_count; // offset 0xE, size 0x2
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
// total size: 0x1C
class iSndFileInfo {
    // Members
public:
    enum iSndHandle ID; // offset 0x0, size 0x4
    unsigned int assetID; // offset 0x4, size 0x4
    unsigned short sample_rate; // offset 0x8, size 0x2
    unsigned char is_streamed; // offset 0xA, size 0x1
    unsigned char is_looped; // offset 0xB, size 0x1
    union { // inferred
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            unsigned int address; // offset 0x0, size 0x4
            unsigned int size; // offset 0x4, size 0x4
        } nonstream; // offset 0xC, size 0x8
        // total size: 0x10
        class /* @class */ {
            // Members
        public:
            signed int file_index; // offset 0x0, size 0x4
            unsigned int lsn; // offset 0x4, size 0x4
            unsigned int data_size; // offset 0x8, size 0x4
            unsigned short stream_interleave_size; // offset 0xC, size 0x2
            unsigned short stream_interleave_count; // offset 0xE, size 0x2
        } stream; // offset 0xC, size 0x10
    };
};
enum _zPlayerWallJumpState {
    k_WALLJUMP_NOT = 0,
    k_WALLJUMP_LAUNCH = 1,
    k_WALLJUMP_FLIGHT = 2,
    k_WALLJUMP_LAND = 3,
    k_WALLJUMP_STUCK = 4,
    k_WALLJUMP_FALL = 5,
};
// total size: 0x8
class RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
class xSubtitlesAsset : public xBaseAsset {
    // Members
public:
    unsigned short m_uAssetNumLines; // offset 0x8, size 0x2
    unsigned short m_uAssetByteCount; // offset 0xA, size 0x2
    class xSubtitleLine m_paSubtitleLines[]; // offset 0xC, size 0x0
};
// total size: 0x10
class xTimerAsset : public xBaseAsset {
    // Members
public:
    float seconds; // offset 0x8, size 0x4
    float randomRange; // offset 0xC, size 0x4
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
class zFrag {};
// total size: 0xC
class xEntMotionSplineData {
    // Members
public:
    unsigned int spline_id; // offset 0x0, size 0x4
    float speed; // offset 0x4, size 0x4
    float lean_modifier; // offset 0x8, size 0x4
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
// total size: 0x8
class RxPipelineCluster {
    // Members
public:
    class RxClusterDefinition * clusterRef; // offset 0x0, size 0x4
    unsigned int creationAttributes; // offset 0x4, size 0x4
};
// total size: 0x8
class xEntOpacity {
    // Members
public:
    float delta_opacity; // offset 0x0, size 0x4
    float delta_opacity_2; // offset 0x4, size 0x4
};
// total size: 0x4
class sort_uint_functor {
    // Members
public:
    unsigned int key_offset; // offset 0x0, size 0x4
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
// total size: 0x10
class xClumpCollBSPBranchNode {
    // Members
public:
    unsigned int leftInfo; // offset 0x0, size 0x4
    unsigned int rightInfo; // offset 0x4, size 0x4
    float leftValue; // offset 0x8, size 0x4
    float rightValue; // offset 0xC, size 0x4
};
enum RxClusterValidityReq {
    rxCLREQ_DONTWANT = 0,
    rxCLREQ_REQUIRED = 1,
    rxCLREQ_OPTIONAL = 2,
    rxCLUSTERVALIDITYREQFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class xAnimTransitionList {
    // Members
public:
    class xAnimTransitionList * Next; // offset 0x0, size 0x4
    class xAnimTransition * T; // offset 0x4, size 0x4
};
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
// total size: 0xC
class xPEVCyl {
    // Members
public:
    float height; // offset 0x0, size 0x4
    float radius; // offset 0x4, size 0x4
    float deflection; // offset 0x8, size 0x4
};
// total size: 0xC
class RxClusterRef {
    // Members
public:
    class RxClusterDefinition * clusterDef; // offset 0x0, size 0x4
    enum RxClusterForcePresent forcePresent; // offset 0x4, size 0x4
    unsigned int reserved; // offset 0x8, size 0x4
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
// total size: 0x8
class _tagTRCDiskInfo {
    // Members
public:
    enum _tagTRCState state; // offset 0x0, size 0x4
    enum _tagTRCState id; // offset 0x4, size 0x4
};
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
// total size: 0x60
class tri_data : public tri_data {
    // Members
public:
    class xVec3 loc; // offset 0xC, size 0xC
    float yaw; // offset 0x18, size 0x4
    class xCollis * coll; // offset 0x1C, size 0x4
    class xMat4x3 trioldmat; // offset 0x20, size 0x40
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
// total size: 0x4
class FloatAndVoid {
    // Members
public:
    union { // inferred
        float f; // offset 0x0, size 0x4
        void * v; // offset 0x0, size 0x4
    };
};
// total size: 0x0
class anim_coll_data {};
// total size: 0xC
class zShrapnelAsset {
    // Members
public:
    signed int fassetCount; // offset 0x0, size 0x4
    unsigned int shrapnelID; // offset 0x4, size 0x4
    void (* initCB)(class zShrapnelAsset *, class xModelInstance *, class xVec3 *, void (*)(class zFrag *, class zFragAsset *)); // offset 0x8, size 0x4
};
// total size: 0x18
class State {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float width; // offset 0x8, size 0x4
    float height; // offset 0xC, size 0x4
    class xColor_tag color; // offset 0x10, size 0x4
    unsigned char brightness; // offset 0x14, size 0x1
    unsigned char pad[3]; // offset 0x15, size 0x3
};
// total size: 0x4
class RpCollisionData {
    // Members
public:
    class RpCollTree * tree; // offset 0x0, size 0x4
};
// total size: 0x64
class xVolumeAsset : public xBaseAsset {
    // Members
public:
    unsigned int flags; // offset 0x8, size 0x4
    class xBound bound; // offset 0xC, size 0x4C
    float rot; // offset 0x58, size 0x4
    float xpivot; // offset 0x5C, size 0x4
    float zpivot; // offset 0x60, size 0x4
};
enum iSndHandle {
};
// total size: 0x8
class zDestructibleStateFXList {
    // Members
public:
    unsigned int nfx; // offset 0x0, size 0x4
    class zDestructibleStateFXParams * fxParams; // offset 0x4, size 0x4
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
// total size: 0x0
class xParSys {};
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
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
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
class RwV4dTag {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float w; // offset 0xC, size 0x4
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
// total size: 0x0
class st_HIPLOADDATA {};
enum RwShadeMode {
    rwSHADEMODENASHADEMODE = 0,
    rwSHADEMODEFLAT = 1,
    rwSHADEMODEGOURAUD = 2,
    rwSHADEMODEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0xDC
class zEnt : public xEnt {
    // Members
public:
    class xAnimTable * atbl; // offset 0xD8, size 0x4
};
enum type_enum {
    TYPE_INVALID = -1,
    TYPE_WARBLE = 0,
    TYPE_LENS = 1,
    TYPE_RIPPLE = 2,
    TYPE_SHOCKWAVE = 3,
    TYPE_HEAT_SHIMMER = 4,
    TYPE_STATIC_LENS = 5,
    MAX_TYPE = 6,
};
// total size: 0x3C
class xScrFxLensFlareElement : public xDynAsset {
    // Members
public:
    unsigned int textureID; // offset 0x10, size 0x4
    class RwTexture * texture; // offset 0x14, size 0x4
    float position; // offset 0x18, size 0x4
    float width; // offset 0x1C, size 0x4
    float height; // offset 0x20, size 0x4
    float uv[2][2]; // offset 0x24, size 0x10
    unsigned int color; // offset 0x34, size 0x4
    unsigned int mode; // offset 0x38, size 0x4
};
// total size: 0x0
class xParGroup {};
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
class iSndVol {
    // Members
public:
    signed short volL; // offset 0x0, size 0x2
    signed short volR; // offset 0x2, size 0x2
};
enum eScreenFadeState {
    eScreenFadeStateOff = 0,
    eScreenFadeStateFadeDown = 1,
    eScreenFadeStateWait = 2,
    eScreenFadeStateFadeUp = 3,
    eScreenFadeStateMax = 4,
};
// total size: 0x8
class xDestructibleAssetAttachedAnimList {
    // Members
public:
    unsigned int nanimations; // offset 0x0, size 0x4
    unsigned int * animationIDs; // offset 0x4, size 0x4
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    class xVec3 * verts; // offset 0x0, size 0x4
};
// total size: 0x74
class zUIText : public zUI {
    // Members
public:
    class xColor_tag shadowColor; // offset 0x6C, size 0x4
    char * text; // offset 0x70, size 0x4
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
// total size: 0xC
class xGroupAsset : public xBaseAsset {
    // Members
public:
    unsigned short itemCount; // offset 0x8, size 0x2
    unsigned short groupFlags; // offset 0xA, size 0x2
};
// total size: 0x8
class st_SERIAL_PERCID_SIZE {
    // Members
public:
    unsigned int idtag; // offset 0x0, size 0x4
    signed int needsize; // offset 0x4, size 0x4
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
// total size: 0x4
class RxColorUnion {
    // Members
public:
    union { // inferred
        class RwRGBA preLitColor; // offset 0x0, size 0x4
        class RwRGBA color; // offset 0x0, size 0x4
    };
};
// total size: 0xC
class xEntMotionMPData {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned int mp_id; // offset 0x4, size 0x4
    float speed; // offset 0x8, size 0x4
};
// total size: 0x8
class xAnimMultiFileEntry {
    // Members
public:
    unsigned int ID; // offset 0x0, size 0x4
    class xAnimFile * File; // offset 0x4, size 0x4
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
// total size: 0x8
class xModelPipe {
    // Members
public:
    unsigned int Flags; // offset 0x0, size 0x4
    unsigned char Layer; // offset 0x4, size 0x1
    unsigned char AlphaDiscard; // offset 0x5, size 0x1
    unsigned short PipePad; // offset 0x6, size 0x2
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
// total size: 0x20
class xSoundFXAsset : public xBaseAsset {
    // Members
public:
    union { // inferred
        unsigned int soundAssetID; // offset 0x8, size 0x4
        enum iSndGroupHandle soundAsset; // offset 0x8, size 0x4
    };
    unsigned int attachID; // offset 0xC, size 0x4
    class xVec3 pos; // offset 0x10, size 0xC
    unsigned int uFlags; // offset 0x1C, size 0x4
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
// total size: 0xC
class cameraFXTableEntry {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    void (* func)(class cameraFX *, float, class xMat4x3 *, class xMat4x3 *); // offset 0x4, size 0x4
    void (* funcKill)(class cameraFX *); // offset 0x8, size 0x4
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
enum eGameMode {
    eGameMode_Boot = 0,
    eGameMode_Intro = 1,
    eGameMode_Title = 2,
    eGameMode_Start = 3,
    eGameMode_Load = 4,
    eGameMode_Options = 5,
    eGameMode_Save = 6,
    eGameMode_Pause = 7,
    eGameMode_Stall = 8,
    eGameMode_WorldMap = 9,
    eGameMode_MonsterGallery = 10,
    eGameMode_ConceptArtGallery = 11,
    eGameMode_Game = 12,
    eGameMode_Count = 13,
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
class xAnimActiveEffect {
    // Members
public:
    class xAnimEffect * Effect; // offset 0x0, size 0x4
    union { // inferred
        unsigned int Handle; // offset 0x4, size 0x4
        enum iSndHandle SndHandle; // offset 0x4, size 0x4
    };
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
// total size: 0x20
class xModelTag {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    unsigned int matidx; // offset 0xC, size 0x4
    float wt[4]; // offset 0x10, size 0x10
};
enum RwCameraProjection {
    rwNACAMERAPROJECTION = 0,
    rwPERSPECTIVE = 1,
    rwPARALLEL = 2,
    rwCAMERAPROJECTIONFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x24
class xBBox {
    // Members
public:
    class xVec3 center; // offset 0x0, size 0xC
    class xBox box; // offset 0xC, size 0x18
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
// total size: 0x4
class sort_str_functor {
    // Members
public:
    unsigned int key_offset; // offset 0x0, size 0x4
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
// total size: 0x18
class xCamCoordCylinder {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
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
// total size: 0x4
class sort_istr_functor {
    // Members
public:
    unsigned int key_offset; // offset 0x0, size 0x4
};
enum iSndGroupHandle {
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
// total size: 0x14
class RwObjectHasFrame {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLLLink lFrame; // offset 0x8, size 0x8
    class RwObjectHasFrame * (* sync)(class RwObjectHasFrame *); // offset 0x10, size 0x4
};
// total size: 0x1C
class RwImage {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    signed int width; // offset 0x4, size 0x4
    signed int height; // offset 0x8, size 0x4
    signed int depth; // offset 0xC, size 0x4
    signed int stride; // offset 0x10, size 0x4
    unsigned char * cpPixels; // offset 0x14, size 0x4
    class RwRGBA * palette; // offset 0x18, size 0x4
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
enum rxEmbeddedPacketState {
    rxPKST_PACKETLESS = 0,
    rxPKST_UNUSED = 1,
    rxPKST_INUSE = 2,
    rxPKST_PENDING = 3,
    rxEMBEDDEDPACKETSTATEFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x4
class xAnimMultiFileBase {
    // Members
public:
    unsigned int Count; // offset 0x0, size 0x4
};
// total size: 0x8
class xCutsceneBreak {
    // Members
public:
    float Time; // offset 0x0, size 0x4
    signed int Index; // offset 0x4, size 0x4
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
// total size: 0x0
class BINK {};
// total size: 0x2
class DoubleChar {
    // Members
public:
    unsigned char byte1; // offset 0x0, size 0x1
    unsigned char byte2; // offset 0x1, size 0x1
};
// total size: 0xC
class RwSurfaceProperties {
    // Members
public:
    float ambient; // offset 0x0, size 0x4
    float specular; // offset 0x4, size 0x4
    float diffuse; // offset 0x8, size 0x4
};
// total size: 0x20
class asset_type : public xDynAsset {
    // Members
public:
    class xColor_tag dest; // offset 0x10, size 0x4
    float fadeDownTime; // offset 0x14, size 0x4
    float waitTime; // offset 0x18, size 0x4
    float fadeUpTime; // offset 0x1C, size 0x4
};
// total size: 0x8
class RpCollSector {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char contents; // offset 0x1, size 0x1
    unsigned short index; // offset 0x2, size 0x2
    float value; // offset 0x4, size 0x4
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
// total size: 0xC
class xEntSpeedData {
    // Members
public:
    float speed; // offset 0x0, size 0x4
    float acceleration; // offset 0x4, size 0x4
    float dest_speed; // offset 0x8, size 0x4
};
// total size: 0x14
class xPECircle {
    // Members
public:
    float radius; // offset 0x0, size 0x4
    float deflection; // offset 0x4, size 0x4
    class xVec3 dir; // offset 0x8, size 0xC
};
enum xSndMode {
    xSndMode_Mono = 0,
    xSndMode_Stereo = 1,
    xSndMode_Dolby = 2,
    xSndMode_Count = 3,
};
// total size: 0xC
class xModelPool {
    // Members
public:
    class xModelPool * Next; // offset 0x0, size 0x4
    unsigned int NumMatrices; // offset 0x4, size 0x4
    class xModelInstance * List; // offset 0x8, size 0x4
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
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x20
class cameraFXZoom {
    // Members
public:
    float holdTime; // offset 0x0, size 0x4
    float vel; // offset 0x4, size 0x4
    float accel; // offset 0x8, size 0x4
    float distance; // offset 0xC, size 0x4
    unsigned int mode; // offset 0x10, size 0x4
    float velCur; // offset 0x14, size 0x4
    float distanceCur; // offset 0x18, size 0x4
    float holdTimeCur; // offset 0x1C, size 0x4
};
// total size: 0x20
class xCutsceneMgr : public xBase {
    // Members
public:
    class xCutsceneMgrAsset * tasset; // offset 0x10, size 0x4
    class xCutscene * csn; // offset 0x14, size 0x4
    unsigned int stop; // offset 0x18, size 0x4
    float oldfov; // offset 0x1C, size 0x4
};
// total size: 0x4
class sort_float_functor {
    // Members
public:
    unsigned int key_offset; // offset 0x0, size 0x4
};
enum en_SAVEGAME_MODE {
    XSG_MODE_LOAD = 10,
    XSG_MODE_SAVE = 11,
};
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
};
// total size: 0x30
class iScrFxLensFlare {
    // Members
public:
    class xVec3 pos; // offset 0x0, size 0xC
    float dist2; // offset 0xC, size 0x4
    class xVec3 at; // offset 0x10, size 0xC
    void * source; // offset 0x1C, size 0x4
    float intensity; // offset 0x20, size 0x4
    float attenuatedIntensity; // offset 0x24, size 0x4
    unsigned int flags; // offset 0x28, size 0x4
    unsigned int padding; // offset 0x2C, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
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
// total size: 0x4
class _tagiTRCPadInfo {
    // Members
public:
    enum _tagPadInit pad_init; // offset 0x0, size 0x4
};
enum RpWorldRenderOrder {
    rpWORLDRENDERNARENDERORDER = 0,
    rpWORLDRENDERFRONT2BACK = 1,
    rpWORLDRENDERBACK2FRONT = 2,
    rpWORLDRENDERORDERFORCEENUMSIZEINT = 2147483647,
};
// total size: 0x14
class _zEnv : public xBase {
    // Members
public:
    class xEnvAsset * easset; // offset 0x10, size 0x4
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
class zSimpleShadowTableHeader {
    // Members
public:
    unsigned int num; // offset 0x0, size 0x4
};
// total size: 0xC
class callback {
    // Members
public:
    void (* render)(class jot &, class xtextbox &, float, float); // offset 0x0, size 0x4
    void (* layout_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x4, size 0x4
    void (* render_update)(class jot &, class xtextbox &, class xtextbox &); // offset 0x8, size 0x4
};
// total size: 0x40
class RwSky2DVertex {
    // Members
public:
    class RwSky2DVertexAlignmentOverlay u; // offset 0x0, size 0x40
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
// total size: 0x14
class tag_type {
    // Members
public:
    class substr name; // offset 0x0, size 0x8
    void (* parse_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0x8, size 0x4
    void (* reset_tag)(class jot &, class xtextbox &, class xtextbox &, class split_tag &); // offset 0xC, size 0x4
    void * context; // offset 0x10, size 0x4
};
// total size: 0x10
class SkyDomeInfo {
    // Members
public:
    class xEnt * ent; // offset 0x0, size 0x4
    signed int sortorder; // offset 0x4, size 0x4
    signed int lockXZ; // offset 0x8, size 0x4
    signed int lockY; // offset 0xC, size 0x4
};
// total size: 0xC
class RxPipelineNodeTopSortData {
    // Members
public:
    unsigned int numIns; // offset 0x0, size 0x4
    unsigned int numInsVisited; // offset 0x4, size 0x4
    class rxReq * req; // offset 0x8, size 0x4
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
// total size: 0x2
class SJIS_STRUCT {
    // Members
public:
    union { // inferred
        unsigned short sjisChar; // offset 0x0, size 0x2
        class DoubleChar doubleChar; // offset 0x0, size 0x2
    };
};
// total size: 0x20
class sphericalEmitter : public emitterBase {
    // Members
public:
    class sphericalEmitterAsset * pAsset; // offset 0x18, size 0x4
    float radiusSqrd; // offset 0x1C, size 0x4
};
enum xSndListener {
    xSndListener_CAMERA = 0,
    xSndListener_PLAYER = 1,
    xSndListener_MAX_TYPES = 2,
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
// total size: 0x4
class sort_int_functor {
    // Members
public:
    unsigned int key_offset; // offset 0x0, size 0x4
};
// total size: 0x4
class xPESphere {
    // Members
public:
    float radius; // offset 0x0, size 0x4
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
// total size: 0x8
class RxPipelineNodeParam {
    // Members
public:
    void * dataParam; // offset 0x0, size 0x4
    class RxHeap * heap; // offset 0x4, size 0x4
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
enum _zPlayerType {
    ePlayer_SB = 0,
    ePlayer_Patrick = 1,
    ePlayer_MAXTYPES = 2,
};
// total size: 0x18
class RwTexDictionary {
    // Members
public:
    class RwObject object; // offset 0x0, size 0x8
    class RwLinkList texturesInDict; // offset 0x8, size 0x8
    class RwLLLink lInInstance; // offset 0x10, size 0x8
};
// total size: 0x50
class xEntPenData {
    // Members
public:
    class xVec3 top; // offset 0x0, size 0xC
    float w; // offset 0xC, size 0x4
    class xMat4x3 omat; // offset 0x10, size 0x40
};
// total size: 0x0
class rxReq {};
// total size: 0x48
class xFXCameraTexture {
    // Members
public:
    class RwCamera * cam; // offset 0x0, size 0x4
    class RwRaster * raster; // offset 0x4, size 0x4
    class RwRaster * bgraster; // offset 0x8, size 0x4
    class RpWorld * world; // offset 0xC, size 0x4
    class RwTexture * texture; // offset 0x10, size 0x4
    unsigned int vert_buffer_used; // offset 0x14, size 0x4
    class xColor_tag bgcolor; // offset 0x18, size 0x4
    class RwCamera * oldcam; // offset 0x1C, size 0x4
    class RpWorld * oldworld; // offset 0x20, size 0x4
    float rcz; // offset 0x24, size 0x4
    float w; // offset 0x28, size 0x4
    float h; // offset 0x2C, size 0x4
    class RwRaster * zraster; // offset 0x30, size 0x4
    signed int max_tw; // offset 0x34, size 0x4
    signed int max_th; // offset 0x38, size 0x4
    float old_near_plane; // offset 0x3C, size 0x4
    float old_far_plane; // offset 0x40, size 0x4
    float old_znear; // offset 0x44, size 0x4
};
enum xSndEffect {
    xSndEffect_NONE = 0,
    xSndEffect_CAVE = 1,
    xSndEffect_MAX_TYPES = 2,
};
// total size: 0x8
class RwTexCoords {
    // Members
public:
    float u; // offset 0x0, size 0x4
    float v; // offset 0x4, size 0x4
};
// total size: 0x18
class xShadowSimpleQueue {
    // Members
public:
    class xShadowSimpleCache * cache; // offset 0x0, size 0x4
    unsigned int priority; // offset 0x4, size 0x4
    class xMat4x3 * modelMatrix; // offset 0x8, size 0x4
    float radius; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float ecc; // offset 0x14, size 0x4
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
// total size: 0x80
class xCutsceneAudioTrack {
    // Members
public:
    unsigned int uLeftSoundId; // offset 0x0, size 0x4
    unsigned int uRightSoundId; // offset 0x4, size 0x4
    char szLeftSound[60]; // offset 0x8, size 0x3C
    char szRightSound[60]; // offset 0x44, size 0x3C
};
// total size: 0x3C
class cameraFXShake {
    // Members
public:
    float magnitude; // offset 0x0, size 0x4
    class xVec3 dir; // offset 0x4, size 0xC
    float cycleTime; // offset 0x10, size 0x4
    float cycleMax; // offset 0x14, size 0x4
    float dampen; // offset 0x18, size 0x4
    float dampenRate; // offset 0x1C, size 0x4
    float rotate_magnitude; // offset 0x20, size 0x4
    float radius; // offset 0x24, size 0x4
    class xVec3 * epicenterP; // offset 0x28, size 0x4
    class xVec3 epicenter; // offset 0x2C, size 0xC
    class xVec3 * player; // offset 0x38, size 0x4
};
// total size: 0x8
class xPERect {
    // Members
public:
    float x_len; // offset 0x0, size 0x4
    float z_len; // offset 0x4, size 0x4
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
// total size: 0x18
class RwVideoMode {
    // Members
public:
    signed int width; // offset 0x0, size 0x4
    signed int height; // offset 0x4, size 0x4
    signed int depth; // offset 0x8, size 0x4
    enum RwVideoModeFlag flags; // offset 0xC, size 0x4
    signed int refRate; // offset 0x10, size 0x4
    signed int format; // offset 0x14, size 0x4
};
// total size: 0x2970
class xSndGlobals {
    // Members
public:
    class xSndVoiceInfo voice[96]; // offset 0x0, size 0x2880
    class xMat4x3 listenerMat[2]; // offset 0x2880, size 0x80
    class xVec3 listenerVel[2]; // offset 0x2900, size 0x18
    class xVec3 right; // offset 0x2918, size 0xC
    class xVec3 up; // offset 0x2924, size 0xC
    class xVec3 at; // offset 0x2930, size 0xC
    class xVec3 pos; // offset 0x293C, size 0xC
    class xVec3 velocity; // offset 0x2948, size 0xC
    unsigned int m_uSndMgrFlags; // offset 0x2954, size 0x4
    enum xSndMode sndMode; // offset 0x2958, size 0x4
    unsigned int SndCount; // offset 0x295C, size 0x4
    enum xSndListener listenerMode; // offset 0x2960, size 0x4
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
// total size: 0x14
class xParInterp {
    // Members
public:
    float val[2]; // offset 0x0, size 0x8
    unsigned int interp; // offset 0x8, size 0x4
    float freq; // offset 0xC, size 0x4
    float oofreq; // offset 0x10, size 0x4
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
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
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
enum exVoiceType {
    exVoiceType_Streamed = 0,
    exVoiceType_RAM = 1,
};
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
// total size: 0x10
class basic_rect {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float w; // offset 0x8, size 0x4
    float h; // offset 0xC, size 0x4
};
// total size: 0x34
class xGlare {
    // Members
public:
    signed int flags; // offset 0x0, size 0x4
    class xVec3 pos; // offset 0x4, size 0xC
    float intensity; // offset 0x10, size 0x4
    float intensityFadeRate; // offset 0x14, size 0x4
    float lifetime; // offset 0x18, size 0x4
    float size; // offset 0x1C, size 0x4
    class RwRGBAReal col; // offset 0x20, size 0x10
    class RwRaster * raster; // offset 0x30, size 0x4
};
enum _tagPadState {
    ePad_Disabled = 0,
    ePad_DisabledError = 1,
    ePad_Enabled = 2,
    ePad_Missing = 3,
    ePad_Total = 4,
};
// total size: 0x2C
class RxRenderStateVector {
    // Members
public:
    unsigned int Flags; // offset 0x0, size 0x4
    enum RwShadeMode ShadeMode; // offset 0x4, size 0x4
    enum RwBlendFunction SrcBlend; // offset 0x8, size 0x4
    enum RwBlendFunction DestBlend; // offset 0xC, size 0x4
    class RwRaster * TextureRaster; // offset 0x10, size 0x4
    enum RwTextureAddressMode AddressModeU; // offset 0x14, size 0x4
    enum RwTextureAddressMode AddressModeV; // offset 0x18, size 0x4
    enum RwTextureFilterMode FilterMode; // offset 0x1C, size 0x4
    class RwRGBA BorderColor; // offset 0x20, size 0x4
    enum RwFogType FogType; // offset 0x24, size 0x4
    class RwRGBA FogColor; // offset 0x28, size 0x4
};
enum RwVideoModeFlag {
    rwVIDEOMODEEXCLUSIVE = 1,
    rwVIDEOMODEINTERLACE = 2,
    rwVIDEOMODEFFINTERLACE = 4,
    rwVIDEOMODE_PS2_FSAASHRINKBLIT = 256,
    rwVIDEOMODE_PS2_FSAAREADCIRCUIT = 512,
    rwVIDEOMODE_XBOX_WIDESCREEN = 256,
    rwVIDEOMODE_XBOX_PROGRESSIVE = 512,
    rwVIDEOMODE_XBOX_FIELD = 1024,
    rwVIDEOMODE_XBOX_10X11PIXELASPECT = 2048,
    rwVIDEOMODEFLAGFORCEENUMSIZEINT = 2147483647,
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
// total size: 0x8
class rxHeapFreeBlock {
    // Members
public:
    unsigned int size; // offset 0x0, size 0x4
    class rxHeapBlockHeader * ptr; // offset 0x4, size 0x4
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
class RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};

