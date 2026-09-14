/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xpkrsvc.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B9CCC -> 0x800C5680
*/
enum eMemMgrTag {
    eMemMgrTag_2D = 0,
    eMemMgrTag_Anim = 1,
    eMemMgrTag_Audio = 2,
    eMemMgrTag_Bomb = 3,
    eMemMgrTag_Camera = 4,
    eMemMgrTag_Cinematic = 5,
    eMemMgrTag_Components = 6,
    eMemMgrTag_Destructible = 7,
    eMemMgrTag_Debug = 8,
    eMemMgrTag_Decal = 9,
    eMemMgrTag_Duplicator = 10,
    eMemMgrTag_Event = 11,
    eMemMgrTag_FMV = 12,
    eMemMgrTag_FXActionLine = 13,
    eMemMgrTag_FXRibbon = 14,
    eMemMgrTag_Enemy = 15,
    eMemMgrTag_EnergyStream = 16,
    eMemMgrTag_EntityMisc = 17,
    eMemMgrTag_EnvSpatial = 18,
    eMemMgrTag_EnvAbstract = 19,
    eMemMgrTag_Explosion = 20,
    eMemMgrTag_Flame = 21,
    eMemMgrTag_FlameThrower = 22,
    eMemMgrTag_ForceFieldEffect = 23,
    eMemMgrTag_FrozenObject = 24,
    eMemMgrTag_Grass = 25,
    eMemMgrTag_HierarchyBound = 26,
    eMemMgrTag_HUD = 27,
    eMemMgrTag_IncrediSlam = 28,
    eMemMgrTag_Im3DHelper = 29,
    eMemMgrTag_LaserBeam = 30,
    eMemMgrTag_LaserBolt = 31,
    eMemMgrTag_Light = 32,
    eMemMgrTag_Lightning = 33,
    eMemMgrTag_Lightweight = 34,
    eMemMgrTag_Message = 35,
    eMemMgrTag_Model = 36,
    eMemMgrTag_MotionBlur = 37,
    eMemMgrTag_Movable = 38,
    eMemMgrTag_MovePoint = 39,
    eMemMgrTag_NavigationMesh = 40,
    eMemMgrTag_NPCFX = 41,
    eMemMgrTag_NPCWalls = 42,
    eMemMgrTag_NPCGate = 43,
    eMemMgrTag_OneLiner = 44,
    eMemMgrTag_OrdArrayMgr = 45,
    eMemMgrTag_Packer = 46,
    eMemMgrTag_PackerAssetPool = 47,
    eMemMgrTag_PackerDefault = 48,
    eMemMgrTag_PackerTOC = 49,
    eMemMgrTag_PackerUnknown = 50,
    eMemMgrTag_Particle = 51,
    eMemMgrTag_Physics = 52,
    eMemMgrTag_Player = 53,
    eMemMgrTag_Projectile = 54,
    eMemMgrTag_RenderBuffer = 55,
    eMemMgrTag_Rubble = 56,
    eMemMgrTag_Scene = 57,
    eMemMgrTag_ScreenFX = 58,
    eMemMgrTag_Serializer = 59,
    eMemMgrTag_Shadow = 60,
    eMemMgrTag_Shower = 61,
    eMemMgrTag_SmashRing = 62,
    eMemMgrTag_SoundRAMAsset = 63,
    eMemMgrTag_Splash = 64,
    eMemMgrTag_Spline = 65,
    eMemMgrTag_SpotLight = 66,
    eMemMgrTag_Subtitle = 67,
    eMemMgrTag_Texture = 68,
    eMemMgrTag_TextureStream = 69,
    eMemMgrTag_Throwable = 70,
    eMemMgrTag_ThrowableSystem = 71,
    eMemMgrTag_Trigger = 72,
    eMemMgrTag_UberLaser = 73,
    eMemMgrTag_UI = 74,
    eMemMgrTag_UpdateCullMgr = 75,
    eMemMgrTag_VideoRAMAsset = 76,
    eMemMgrTag_ReactiveAnim = 77,
    eMemMgrTag_RenderWare = 78,
    eMemMgrTag_Shrapnel = 79,
    eMemMgrTag_Water = 80,
    eMemMgrTag_WaterHose = 81,
    eMemMgrTag_AnimCustom = 82,
    eMemMgrTag_SwitchLever = 83,
    eMemMgrTag_PlayerFX = 84,
    eMemMgrTag_RenderWareMisc = 85,
    eMemMgrTag_DecalRWMalloc = 86,
    eMemMgrTag_Heists = 87,
    eMemMgrTag_MiniGame = 88,
    eMemMgrTag_CookingMinigame = 89,
    eMemMgrTag_NumTags = 90,
};
// total size: 0x8
struct xPkrSvcMemMgrTagLookup {
    // Members
    enum en_LAYER_TYPE laytype; // offset 0x0, size 0x4
    enum eMemMgrTag memtag; // offset 0x4, size 0x4
};
static struct xPkrSvcMemMgrTagLookup xPkrSvcMemMgrTagLookupTable[12]; // size: 0x60, address: 0x804F6D60
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
// Range: 0x800B9CCC -> 0x800B9D44
static unsigned int PKR_lookupMemtag(enum en_LAYER_TYPE laytyp /* r3 */) {
    // Local variables
    int memtag; // r30
    unsigned int i; // r31

    // References
    // -> static struct xPkrSvcMemMgrTagLookup xPkrSvcMemMgrTagLookupTable[12];
}

// total size: 0x28
struct PKRAssetType {
    // Members
    unsigned int typetag; // offset 0x0, size 0x4
    unsigned int tflags; // offset 0x4, size 0x4
    int typalign; // offset 0x8, size 0x4
    void * (* readXForm)(void *, unsigned int, void *, unsigned int, unsigned int *); // offset 0xC, size 0x4
    void * (* writeXForm)(void *, unsigned int, void *, void *, unsigned int, unsigned int *); // offset 0x10, size 0x4
    int (* assetLoaded)(void *, unsigned int, void *, int); // offset 0x14, size 0x4
    void * (* makeData)(void *, unsigned int, void *, int *, int *); // offset 0x18, size 0x4
    void (* cleanup)(void *, unsigned int, void *); // offset 0x1C, size 0x4
    void (* assetUnloaded)(void *, unsigned int); // offset 0x20, size 0x4
    void (* writePeek)(void *, unsigned int, void *, char *); // offset 0x24, size 0x4
};
// total size: 0x0
struct st_HIPLOADDATA {};
// total size: 0x10
struct st_XORDEREDARRAY {
    // Members
    void * list; // offset 0x0, size 0x4
    int cnt; // offset 0x4, size 0x4
    int max; // offset 0x8, size 0x4
    int warnlvl; // offset 0xC, size 0x4
};
// total size: 0x100
struct st_PACKER_ATOC_NODE {
    // Members
    unsigned int aid; // offset 0x0, size 0x4
    unsigned int asstype; // offset 0x4, size 0x4
    int d_off; // offset 0x8, size 0x4
    int d_size; // offset 0xC, size 0x4
    int d_pad; // offset 0x10, size 0x4
    unsigned int d_chksum; // offset 0x14, size 0x4
    int assalign; // offset 0x18, size 0x4
    int infoflag; // offset 0x1C, size 0x4
    int loadflag; // offset 0x20, size 0x4
    char * memloc; // offset 0x24, size 0x4
    int x_size; // offset 0x28, size 0x4
    int readcnt; // offset 0x2C, size 0x4
    int readrem; // offset 0x30, size 0x4
    struct PKRAssetType * typeref; // offset 0x34, size 0x4
    struct st_HIPLOADDATA * ownpkg; // offset 0x38, size 0x4
    struct st_PACKER_READ_DATA * ownpr; // offset 0x3C, size 0x4
    char name[32]; // offset 0x40, size 0x20
    char fullname[128]; // offset 0x60, size 0x80
    long long dbg_loadtime[4]; // offset 0xE0, size 0x20
};
// total size: 0xD28
struct st_PACKER_READ_DATA {
    // Members
    struct PKRAssetType * types; // offset 0x0, size 0x4
    void * userdata; // offset 0x4, size 0x4
    unsigned int opts; // offset 0x8, size 0x4
    unsigned int pkgver; // offset 0xC, size 0x4
    int cltver; // offset 0x10, size 0x4
    int subver; // offset 0x14, size 0x4
    int compatver; // offset 0x18, size 0x4
    struct st_HIPLOADDATA * pkg; // offset 0x1C, size 0x4
    unsigned int base_sector; // offset 0x20, size 0x4
    int lockid; // offset 0x24, size 0x4
    char packfile[128]; // offset 0x28, size 0x80
    int asscnt; // offset 0xA8, size 0x4
    int laycnt; // offset 0xAC, size 0x4
    struct st_XORDEREDARRAY asstoc; // offset 0xB0, size 0x10
    struct st_XORDEREDARRAY laytoc; // offset 0xC0, size 0x10
    struct st_PACKER_ATOC_NODE * pool_anode; // offset 0xD0, size 0x4
    int pool_nextaidx; // offset 0xD4, size 0x4
    struct st_XORDEREDARRAY typelist[129]; // offset 0xD8, size 0x810
    long time_made; // offset 0x8E8, size 0x4
    long time_mod; // offset 0x8EC, size 0x4
    int dbg_typlodtym_done; // offset 0x8F0, size 0x4
    float dbg_typlodtym[130]; // offset 0x8F4, size 0x208
    float dbg_typxformtym[130]; // offset 0xAFC, size 0x208
    long long dbg_readtime[4]; // offset 0xD08, size 0x20
};
// total size: 0x20
struct PKRAssetTOCInfo {
    // Members
    unsigned int aid; // offset 0x0, size 0x4
    struct PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
    const char * assetname; // offset 0x18, size 0x4
    const char * filename; // offset 0x1C, size 0x4
};
// total size: 0x60
struct PKRReadFuncs {
    // Members
    unsigned int api_ver; // offset 0x0, size 0x4
    struct st_PACKER_READ_DATA * (* Init)(void *, char *, unsigned int, int *, struct PKRAssetType *, int); // offset 0x4, size 0x4
    void (* Done)(struct st_PACKER_READ_DATA *); // offset 0x8, size 0x4
    int (* LoadLayer)(struct st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0xC, size 0x4
    unsigned int (* GetAssetSize)(struct st_PACKER_READ_DATA *, unsigned int); // offset 0x10, size 0x4
    void * (* LoadAsset)(struct st_PACKER_READ_DATA *, unsigned int, char *, void *, int *); // offset 0x14, size 0x4
    void * (* AssetByType)(struct st_PACKER_READ_DATA *, unsigned int, int, unsigned int *); // offset 0x18, size 0x4
    int (* AssetCount)(struct st_PACKER_READ_DATA *, unsigned int); // offset 0x1C, size 0x4
    int (* IsAssetReady)(struct st_PACKER_READ_DATA *, unsigned int); // offset 0x20, size 0x4
    int (* SetActive)(struct st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0x24, size 0x4
    char * (* AssetName)(struct st_PACKER_READ_DATA *, unsigned int); // offset 0x28, size 0x4
    unsigned int (* GetBaseSector)(struct st_PACKER_READ_DATA *); // offset 0x2C, size 0x4
    int (* GetAssetInfo)(struct st_PACKER_READ_DATA *, unsigned int, struct PKRAssetTOCInfo *); // offset 0x30, size 0x4
    int (* GetAssetInfoByType)(struct st_PACKER_READ_DATA *, unsigned int, int, struct PKRAssetTOCInfo *); // offset 0x34, size 0x4
    int (* PkgHasAsset)(struct st_PACKER_READ_DATA *, unsigned int); // offset 0x38, size 0x4
    unsigned int (* PkgTimeStamp)(struct st_PACKER_READ_DATA *); // offset 0x3C, size 0x4
    void (* PkgDisconnect)(struct st_PACKER_READ_DATA *); // offset 0x40, size 0x4
    void (* dbgrpt_stats)(struct st_PACKER_READ_DATA *); // offset 0x44, size 0x4
    void (* dbgrpt_typeInfo)(struct st_PACKER_READ_DATA *); // offset 0x48, size 0x4
    void (* dbgrpt_typeTally)(struct st_PACKER_READ_DATA *); // offset 0x4C, size 0x4
    void (* dbgrpt_layers)(struct st_PACKER_READ_DATA *); // offset 0x50, size 0x4
    void (* dbgrpt_assets)(struct st_PACKER_READ_DATA *); // offset 0x54, size 0x4
    void (* dbgrpt_kosher)(struct st_PACKER_READ_DATA *); // offset 0x58, size 0x4
    void (* dbgrpt_loadtimes)(struct st_PACKER_READ_DATA *, int); // offset 0x5C, size 0x4
};
static struct PKRReadFuncs g_pkr_read_funcmap_original; // size: 0x60, address: 0x804F6DC0
static struct PKRReadFuncs g_pkr_read_funcmap; // size: 0x60, address: 0x804F6E20
// total size: 0x34
struct st_HIPLOADFUNCS {
    // Members
    struct st_HIPLOADDATA * (* create)(char *, char *, int, int); // offset 0x0, size 0x4
    void (* destroy)(struct st_HIPLOADDATA *); // offset 0x4, size 0x4
    unsigned int (* basesector)(struct st_HIPLOADDATA *); // offset 0x8, size 0x4
    unsigned int (* enter)(struct st_HIPLOADDATA *); // offset 0xC, size 0x4
    void (* exit)(struct st_HIPLOADDATA *); // offset 0x10, size 0x4
    int (* readBytes)(struct st_HIPLOADDATA *, char *, int); // offset 0x14, size 0x4
    int (* readShorts)(struct st_HIPLOADDATA *, signed short *, int); // offset 0x18, size 0x4
    int (* readLongs)(struct st_HIPLOADDATA *, int *, int); // offset 0x1C, size 0x4
    int (* readFloats)(struct st_HIPLOADDATA *, float *, int); // offset 0x20, size 0x4
    int (* readString)(struct st_HIPLOADDATA *, char *); // offset 0x24, size 0x4
    int (* setBypass)(struct st_HIPLOADDATA *, int, int); // offset 0x28, size 0x4
    void (* setSpot)(struct st_HIPLOADDATA *, int); // offset 0x2C, size 0x4
    enum en_READ_ASYNC_STATUS (* pollRead)(struct st_HIPLOADDATA *); // offset 0x30, size 0x4
};
static struct st_HIPLOADFUNCS * g_hiprf; // size: 0x4, address: 0x80D69430
static struct st_PACKER_READ_DATA g_readdatainst[32]; // size: 0x1A500, address: 0x804F6E80
static unsigned int g_loadlock; // size: 0x4, address: 0x80D69434
int pkr_sector_size; // size: 0x4, address: 0x80D69438
static int g_packinit; // size: 0x4, address: 0x80D6943C
static int g_memalloc_pair; // size: 0x4, address: 0x80D69440
static int g_memalloc_runtot; // size: 0x4, address: 0x80D69444
static int g_memalloc_runfree; // size: 0x4, address: 0x80D69448
static char * g_strz_layername[12]; // size: 0x30, address: 0x80511380
static long long g_tym_traklast[4]; // size: 0x20, address: 0x80B953C0
// Range: 0x800B9D44 -> 0x800B9D64
struct PKRReadFuncs * PKRGetReadFuncs(int apiver /* r3 */) {
    // References
    // -> static struct PKRReadFuncs g_pkr_read_funcmap;
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80D604A8
// Range: 0x800B9D64 -> 0x800B9FA0
int PKRStartup() {
    // References
    // -> static int g_packinit;
    // -> static char __FUNCTION__[11];
    // -> int pkr_sector_size;
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static struct PKRReadFuncs g_pkr_read_funcmap_original;
    // -> static struct PKRReadFuncs g_pkr_read_funcmap;
}

// Range: 0x800B9FA0 -> 0x800B9FF0
int PKRShutdown() {
    // References
    // -> static int g_packinit;
}

enum en_generr {
    PKR_GENERR_NONE = 0,
    PKR_GENERR_PACKOPEN = 1,
    PKR_GENERR_ASSETOPEN = 2,
    PKR_GENERR_EMPTYASSET = 3,
    PKR_GENERR_WRITEFAIL = 4,
    PKR_GENERR_VIRTUAL = 5,
    PKR_GENERR_DUPEASSET = 6,
    PKR_GENERR_UNKNOWN = 7,
};
// total size: 0x2D0
struct PKRWriteData {
    // Members
    struct PKRAssetType * types; // offset 0x0, size 0x4
    void * userdata; // offset 0x4, size 0x4
    int lockid; // offset 0x8, size 0x4
    unsigned int pkropt; // offset 0xC, size 0x4
    int cltver; // offset 0x10, size 0x4
    char packfile[256]; // offset 0x14, size 0x100
    int sectalign; // offset 0x114, size 0x4
    int dassalign; // offset 0x118, size 0x4
    struct st_XORDEREDARRAY asslist; // offset 0x11C, size 0x10
    struct st_XORDEREDARRAY laylist; // offset 0x12C, size 0x10
    int off_lg_asset; // offset 0x13C, size 0x4
    int off_lg_layer; // offset 0x140, size 0x4
    int off_lg_xform; // offset 0x144, size 0x4
    char gameName[32]; // offset 0x148, size 0x20
    char platform[32]; // offset 0x168, size 0x20
    char videoSystem[32]; // offset 0x188, size 0x20
    char countryCode[32]; // offset 0x1A8, size 0x20
    char hdrfile[256]; // offset 0x1C8, size 0x100
    int (* hdrfunc)(void *, unsigned int, char *, char *); // offset 0x2C8, size 0x4
    int (* generrf)(unsigned int, enum en_generr, char *, char *); // offset 0x2CC, size 0x4
};
// Range: 0x800B9FF0 -> 0x800BA04C
int PKRLoadStep(int block /* r1+0x8 */) {
    // Local variables
    int more_todo; // r31
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D604B3
// total size: 0x2C
struct st_PACKER_LTOC_NODE {
    // Members
    enum en_LAYER_TYPE laytyp; // offset 0x0, size 0x4
    struct st_XORDEREDARRAY assref; // offset 0x4, size 0x10
    int flg_ldstat; // offset 0x14, size 0x4
    int danglecnt; // offset 0x18, size 0x4
    unsigned int chksum; // offset 0x1C, size 0x4
    int laysize; // offset 0x20, size 0x4
    char * laymem; // offset 0x24, size 0x4
    char * laytru; // offset 0x28, size 0x4
};
// Range: 0x800BA04C -> 0x800BA9DC
static struct st_PACKER_READ_DATA * PKR_ReadInit(void * userdata /* r1+0x8 */, const char * pkgfile /* r28 */, unsigned int opts /* r19 */, int * cltver /* r25 */, struct PKRAssetType * typelist /* r20 */, int fileflags /* r21 */) {
    // Local variables
    struct st_PACKER_READ_DATA * pr; // r31
    int i; // r29
    int uselock; // r24
    int rc; // r23
    char * tocbuf_RAW; // r1+0xC
    char * tocbuf_aligned; // r27
    struct st_PACKER_LTOC_NODE * tmplay; // r30
    struct st_PACKER_ATOC_NODE * tmpass; // r26

    // References
    // -> static char __FUNCTION__[13];
    // -> static char * g_strz_layername[12];
    // -> static long long g_tym_traklast[4];
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static struct st_PACKER_READ_DATA g_readdatainst[32];
    // -> static unsigned int g_loadlock;
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80D604C0
enum en_PKR_LAYER_LOAD_DEST {
    PKR_LDDEST_SKIP = 0,
    PKR_LDDEST_KEEPSTATIC = 1,
    PKR_LDDEST_KEEPMALLOC = 2,
    PKR_LDDEST_RWHANDOFF = 3,
    PKR_LDDEST_NOMORE = 4,
    PKR_LDDEST_FORCE = 2147483647,
};
// Range: 0x800BA9DC -> 0x800BAD78
static void PKR_ReadDone(struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int i; // r28
    int j; // r27
    int lockid; // r22
    struct st_PACKER_ATOC_NODE * assnode; // r29
    struct st_PACKER_LTOC_NODE * laynode; // r30
    struct st_XORDEREDARRAY * tmplist; // r26
    enum en_PKR_LAYER_LOAD_DEST loadDest; // r25
    unsigned int memTag; // r24
    unsigned int assSize; // r23

    // References
    // -> static unsigned int g_loadlock;
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D604CD
// Range: 0x800BAD78 -> 0x800BB1F0
static int PKR_SetActive(struct st_PACKER_READ_DATA * pr /* r29 */, enum en_LAYER_TYPE layer /* r23 */) {
    // Local variables
    int result; // r25
    int rc; // r26
    int i; // r28
    int j; // r27
    struct st_PACKER_ATOC_NODE * assnode; // r31
    struct st_PACKER_LTOC_NODE * laynode; // r30

    // References
    // -> static char __FUNCTION__[14];
    // -> static char * g_strz_layername[12];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80D604DB
// Range: 0x800BB1F0 -> 0x800BB570
static int PKR_parse_TOC(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int is_ok; // r28
    unsigned int cid; // r29
    int done; // r27

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static char __FUNCTION__[14];
}

static struct st_PACKER_READ_DATA * curpr; // size: 0x4, address: 0x80D6944C
static signed char init; // size: 0x1, address: 0x80D69450
static struct st_PACKER_LTOC_NODE * asynlay; // size: 0x4, address: 0x80D69454
static signed char init; // size: 0x1, address: 0x80D69458
static int been_here; // size: 0x4, address: 0x80D6945C
static int been_here; // size: 0x4, address: 0x80D69460
static int been_here; // size: 0x4, address: 0x80D69464
static int gametotal; // size: 0x4, address: 0x80D69468
static signed char init; // size: 0x1, address: 0x80D6946C
static int been_here; // size: 0x4, address: 0x80D69470
static int been_here; // size: 0x4, address: 0x80D69474
static int been_here; // size: 0x4, address: 0x80D69478
static int been_here; // size: 0x4, address: 0x80D6947C
static int been_here; // size: 0x4, address: 0x80D69480
static int been_here; // size: 0x4, address: 0x80D69484
static int been_here; // size: 0x4, address: 0x80D69488
static int been_here; // size: 0x4, address: 0x80D6948C
static int been_here; // size: 0x4, address: 0x80D69490
static int been_here; // size: 0x4, address: 0x80D69494
static char __FUNCTION__[19]; // size: 0x13, address: 0x80D604E9
enum en_READ_ASYNC_STATUS {
    HIP_RDSTAT_NONE = -1,
    HIP_RDSTAT_INPROG = 0,
    HIP_RDSTAT_SUCCESS = 1,
    HIP_RDSTAT_FAILED = 2,
    HIP_RDSTAT_NOBYPASS = 3,
    HIP_RDSTAT_NOASYNC = 4,
};
// Range: 0x800BB570 -> 0x800BC078
static int PKR_LoadStep_Async() {
    // Local variables
    int moretodo; // r29
    int rc; // r28
    enum en_READ_ASYNC_STATUS readstat; // r31
    struct st_PACKER_ATOC_NODE * tmpass; // r30
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r27
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r26
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r25

    // References
    // -> static struct st_PACKER_READ_DATA * curpr;
    // -> static struct st_PACKER_LTOC_NODE * asynlay;
    // -> static int been_here;
    // -> static char __FUNCTION__[19];
    // -> static char * g_strz_layername[12];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int gametotal;
    // -> static signed char init;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static signed char init;
    // -> static signed char init;
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D604FC
// Range: 0x800BC078 -> 0x800BC2D8
static char * PKR_LayerMemReserve(struct st_PACKER_READ_DATA * pr /* r1+0x8 */, struct st_PACKER_LTOC_NODE * layer /* r31 */) {
    // Local variables
    char * mem; // r30
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r29

    // References
    // -> static char * g_strz_layername[12];
    // -> static char __FUNCTION__[20];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D60510
// Range: 0x800BC2D8 -> 0x800BC424
static void PKR_LayerMemRelease(struct st_PACKER_LTOC_NODE * layer /* r31 */) {
    // Local variables
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r30

    // References
    // -> static char __FUNCTION__[20];
}

// Range: 0x800BC424 -> 0x800BC428
void PKR_drv_guardLayer() {}

// Range: 0x800BC428 -> 0x800BC440
enum en_READ_ASYNC_STATUS PKR_drv_guardVerify() {
    // Local variables
    enum en_READ_ASYNC_STATUS confirm; // r31
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D60524
// Range: 0x800BC440 -> 0x800BC50C
static enum en_PKR_LAYER_LOAD_DEST PKR_layerLoadDest(enum en_LAYER_TYPE laytyp /* r30 */) {
    // Local variables
    enum en_PKR_LAYER_LOAD_DEST load_place; // r31

    // References
    // -> static char __FUNCTION__[18];
}

// Range: 0x800BC50C -> 0x800BC5A4
static int PKR_layerTypeNeedsXForm(enum en_LAYER_TYPE laytyp /* r30 */) {
    // Local variables
    int do_xform; // r31
}

// Range: 0x800BC5A4 -> 0x800BC6CC
static int PKR_findNextLayerToLoad(struct st_PACKER_READ_DATA * * work_on_pkg /* r3 */, struct st_PACKER_LTOC_NODE * * next_layer /* r4 */) {
    // Local variables
    struct st_PACKER_READ_DATA * tmppr; // r31
    struct st_PACKER_LTOC_NODE * tmplay; // r29
    int i; // r30
    int j; // r28

    // References
    // -> static struct st_PACKER_READ_DATA g_readdatainst[32];
    // -> static unsigned int g_loadlock;
}

static int been_here; // size: 0x4, address: 0x80D69498
static int been_here; // size: 0x4, address: 0x80D6949C
static int been_here; // size: 0x4, address: 0x80D694A0
static int been_here; // size: 0x4, address: 0x80D694A4
static int been_here; // size: 0x4, address: 0x80D694A8
static int doIntegrityChecks; // size: 0x4, address: 0x80D694AC
static signed char init; // size: 0x1, address: 0x80D694B0
static int been_here; // size: 0x4, address: 0x80D694B4
static int been_here; // size: 0x4, address: 0x80D694B8
static int dumpRawBuffer; // size: 0x4, address: 0x80D694BC
static signed char init; // size: 0x1, address: 0x80D694C0
static int dump_output; // size: 0x4, address: 0x80D694C4
static signed char init; // size: 0x1, address: 0x80D694C8
static char __FUNCTION__[22]; // size: 0x16, address: 0x80511410
// Range: 0x800BC6CC -> 0x800BCD90
static void PKR_updateLayerAssets(struct st_PACKER_LTOC_NODE * laynode /* r30 */) {
    // Local variables
    int i; // r29
    struct st_PACKER_ATOC_NODE * tmpass; // r31
    int lay_hip_pos; // r27
    int reloff; // r26
    unsigned int tmpchk; // r28

    // References
    // -> static int dump_output;
    // -> static signed char init;
    // -> static int dumpRawBuffer;
    // -> static signed char init;
    // -> static int been_here;
    // -> static char __FUNCTION__[22];
    // -> static int been_here;
    // -> static int doIntegrityChecks;
    // -> static signed char init;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static char * g_strz_layername[12];
    // -> int pkr_sector_size;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D694CC
static char __FUNCTION__[21]; // size: 0x15, address: 0x80511426
// Range: 0x800BCD90 -> 0x800BCEB0
static void PKR_xformLayerAssets(struct st_PACKER_LTOC_NODE * laynode /* r30 */) {
    // Local variables
    int i; // r29
    int will_be_dumped; // r28
    struct st_PACKER_ATOC_NODE * tmpass; // r31
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r27

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[21];
}

static int been_here; // size: 0x4, address: 0x80D694D0
static int been_here; // size: 0x4, address: 0x80D694D4
static int been_here; // size: 0x4, address: 0x80D694D8
static int been_here; // size: 0x4, address: 0x80D694DC
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60536
// Range: 0x800BCEB0 -> 0x800BD310
static void PKR_xform_asset(struct st_PACKER_ATOC_NODE * assnode /* r31 */, int dumpable_layer /* r28 */) {
    // Local variables
    char * xformloc; // r29
    const struct PKRAssetType * atype; // r30

    // References
    // -> static long long g_tym_traklast[4];
    // -> static int been_here;
    // -> static char __FUNCTION__[16];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D694E0
static int been_here; // size: 0x4, address: 0x80D694E4
static char __FUNCTION__[14]; // size: 0xE, address: 0x80D60546
// Range: 0x800BD310 -> 0x800BD490
static void * PKR_FindAsset(struct st_PACKER_READ_DATA * pr /* r28 */, unsigned int aid /* r1+0x8 */, int * assetsize /* r30 */) {
    // Local variables
    int idx; // r29
    struct st_PACKER_ATOC_NODE * assnode; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[14];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D694E8
static int been_here; // size: 0x4, address: 0x80D694EC
static char __FUNCTION__[18]; // size: 0x12, address: 0x80D60554
// Range: 0x800BD490 -> 0x800BD610
struct st_PACKER_ATOC_NODE * PKR_FindAssetNode(struct st_PACKER_READ_DATA * pr /* r28 */, unsigned int aid /* r1+0x8 */, int * assetsize /* r30 */) {
    // Local variables
    int idx; // r29
    struct st_PACKER_ATOC_NODE * assnode; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[18];
    // -> static int been_here;
}

// Range: 0x800BD610 -> 0x800BD618
static int PKR_LoadLayer() {}

// Range: 0x800BD618 -> 0x800BD650
static void * PKR_LoadAsset(struct st_PACKER_READ_DATA * pr /* r1+0x8 */, unsigned int aid /* r1+0xC */, int * assetsize /* r1+0x10 */) {}

static int been_here; // size: 0x4, address: 0x80D694F0
static int been_here; // size: 0x4, address: 0x80D694F4
static int been_here; // size: 0x4, address: 0x80D694F8
static int been_here; // size: 0x4, address: 0x80D694FC
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60566
// Range: 0x800BD650 -> 0x800BD844
static unsigned int PKR_GetAssetSize(struct st_PACKER_READ_DATA * pr /* r29 */, unsigned int aid /* r28 */) {
    // Local variables
    int idx; // r30
    const struct st_PACKER_ATOC_NODE * assnode; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69500
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D60577
// Range: 0x800BD844 -> 0x800BD8FC
static int PKR_AssetCount(struct st_PACKER_READ_DATA * pr /* r31 */, unsigned int type /* r27 */) {
    // Local variables
    int cnt; // r28
    int idx; // r30
    struct st_XORDEREDARRAY * tmplist; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[15];
}

static int been_here; // size: 0x4, address: 0x80D69504
static int been_here; // size: 0x4, address: 0x80D69508
static int been_here; // size: 0x4, address: 0x80D6950C
static int been_here; // size: 0x4, address: 0x80D69510
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D60586
// Range: 0x800BD8FC -> 0x800BDB40
static void * PKR_AssetByType(struct st_PACKER_READ_DATA * pr /* r25 */, unsigned int type /* r1+0x8 */, int idx /* r26 */, unsigned int * size /* r29 */) {
    // Local variables
    void * memloc; // r28
    int typidx; // r27
    struct st_XORDEREDARRAY * typlist; // r30
    struct st_PACKER_ATOC_NODE * assnode; // r31

    // References
    // -> static long long g_tym_traklast[4];
    // -> static int been_here;
    // -> static char __FUNCTION__[16];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69514
static int been_here; // size: 0x4, address: 0x80D69518
static int been_here; // size: 0x4, address: 0x80D6951C
static int been_here; // size: 0x4, address: 0x80D69520
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60596
// Range: 0x800BDB40 -> 0x800BDD6C
static int PKR_IsAssetReady(struct st_PACKER_READ_DATA * pr /* r28 */, unsigned int aid /* r27 */) {
    // Local variables
    int is_ok; // r30
    struct st_PACKER_ATOC_NODE * assnode; // r31
    int idx; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69524
static char __FUNCTION__[21]; // size: 0x15, address: 0x8051143B
// Range: 0x800BDD6C -> 0x800BDE00
static unsigned int PKR_getPackTimestamp(struct st_PACKER_READ_DATA * pr /* r29 */) {
    // Local variables
    unsigned long l; // r31
    unsigned long r; // r30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[21];
}

static int been_here; // size: 0x4, address: 0x80D69528
static int been_here; // size: 0x4, address: 0x80D6952C
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D605A7
// Range: 0x800BDE00 -> 0x800BDF04
static void PKR_Disconnect(struct st_PACKER_READ_DATA * pr /* r31 */) {
    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static int been_here;
    // -> static char __FUNCTION__[15];
    // -> static int been_here;
}

// Range: 0x800BDF04 -> 0x800BDF20
unsigned int PKRAssetIDFromInst(void * asset_inst /* r3 */) {
    // Local variables
    struct st_PACKER_ATOC_NODE * assnode; // r31
}

// Range: 0x800BDF20 -> 0x800BDF94
static char * PKR_AssetName(struct st_PACKER_READ_DATA * pr /* r28 */, unsigned int aid /* r27 */) {
    // Local variables
    const char * da_name; // r31
    int idx; // r30
    struct st_PACKER_ATOC_NODE * assnode; // r29
}

// Range: 0x800BDF94 -> 0x800BDF9C
static unsigned int PKR_GetBaseSector(struct st_PACKER_READ_DATA * pr /* r3 */) {}

// Range: 0x800BDF9C -> 0x800BE094
static int PKR_GetAssetInfo(struct st_PACKER_READ_DATA * pr /* r29 */, unsigned int aid /* r27 */, struct PKRAssetTOCInfo * tocinfo /* r31 */) {
    // Local variables
    int idx; // r28
    struct st_PACKER_ATOC_NODE * assnode; // r30

    // References
    // -> int pkr_sector_size;
}

static int been_here; // size: 0x4, address: 0x80D69530
static int been_here; // size: 0x4, address: 0x80D69534
static int been_here; // size: 0x4, address: 0x80D69538
static int been_here; // size: 0x4, address: 0x80D6953C
static char __FUNCTION__[23]; // size: 0x17, address: 0x80511450
// Range: 0x800BE094 -> 0x800BE360
static int PKR_GetAssetInfoByType(struct st_PACKER_READ_DATA * pr /* r27 */, unsigned int type /* r1+0x8 */, int idx /* r28 */, struct PKRAssetTOCInfo * tocinfo /* r31 */) {
    // Local variables
    struct st_PACKER_ATOC_NODE * assnode; // r30
    int typidx; // r26
    struct st_XORDEREDARRAY * typlist; // r29

    // References
    // -> static long long g_tym_traklast[4];
    // -> int pkr_sector_size;
    // -> static int been_here;
    // -> static char __FUNCTION__[23];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

// Range: 0x800BE360 -> 0x800BE40C
static int PKR_PkgHasAsset(struct st_PACKER_READ_DATA * pr /* r28 */, unsigned int aid /* r1+0x8 */) {
    // Local variables
    int rc; // r31
    int idx; // r29
    struct st_PACKER_ATOC_NODE * assnode; // r30
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80D605B6
enum en_pkrfindmyass {
    PKR_FIND_FAILED = 0,
    PKR_FIND_EXACT = 1,
    PKR_FIND_EXACT_XFORM = 2,
    PKR_FIND_RANGE = 3,
    PKR_FIND_RANGE_XFORM = 4,
};
// Range: 0x800BE40C -> 0x800BE5DC
enum en_pkrfindmyass PKRFindMyAsset(struct st_PACKER_READ_DATA * pr /* r28 */, struct PKRAssetTOCInfo * tocinfo /* r1+0x8 */, void * ptr_raw /* r24 */) {
    // Local variables
    int i_rawaddr; // r27
    int i; // r30
    const struct st_PACKER_ATOC_NODE * assnode; // r31
    int isXForm; // r29
    int addr_beg; // r26
    int addr_end; // r23

    // References
    // -> static char __FUNCTION__[15];
}

static unsigned int stopOnAsset; // size: 0x4, address: 0x80D69540
static signed char init; // size: 0x1, address: 0x80D69544
static int been_here; // size: 0x4, address: 0x80D69548
static int been_here; // size: 0x4, address: 0x80D6954C
static int been_here; // size: 0x4, address: 0x80D69550
static int been_here; // size: 0x4, address: 0x80D69554
static int been_here; // size: 0x4, address: 0x80D69558
static char __FUNCTION__[26]; // size: 0x1A, address: 0x80511467
// Range: 0x800BE5DC -> 0x800BEC48
static int PKR_FRIEND_assetIsGameDup(unsigned int aid /* r19 */, const struct st_PACKER_READ_DATA * skippr /* r25 */, int oursize /* r20 */, unsigned int ourtype /* r27 */, unsigned int chksum /* r21 */, char * our_fnam /* r28 */) {
    // Local variables
    int is_dup; // r23
    struct st_PACKER_READ_DATA * tmp_pr; // r30
    const struct st_PACKER_ATOC_NODE * tmp_ass; // r31
    int i; // r26
    int idx; // r22
    int bonus; // r29
    int is_a_sound; // r24

    // References
    // -> static char __FUNCTION__[26];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static struct st_PACKER_READ_DATA g_readdatainst[32];
    // -> static unsigned int g_loadlock;
    // -> static unsigned int stopOnAsset;
    // -> static signed char init;
}

static int been_here; // size: 0x4, address: 0x80D6955C
static int been_here; // size: 0x4, address: 0x80D69560
static int been_here; // size: 0x4, address: 0x80D69564
static int been_here; // size: 0x4, address: 0x80D69568
static int been_here; // size: 0x4, address: 0x80D6956C
static char __FUNCTION__[19]; // size: 0x13, address: 0x80D605C5
// Range: 0x800BEC48 -> 0x800BEE64
static int PKR_makepool_anode(struct st_PACKER_READ_DATA * pr /* r31 */, int cnt /* r28 */) {
    // Local variables
    struct st_PACKER_ATOC_NODE * asspool; // r30
    int amount; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[19];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

// Range: 0x800BEE64 -> 0x800BEEDC
static void PKR_kiilpool_anode(struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int amount; // r30
}

static int been_here; // size: 0x4, address: 0x80D69570
static int been_here; // size: 0x4, address: 0x80D69574
static int been_here; // size: 0x4, address: 0x80D69578
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D605D8
// Range: 0x800BEEDC -> 0x800BF09C
static struct st_PACKER_ATOC_NODE * PKR_newassnode(struct st_PACKER_READ_DATA * pr /* r31 */, unsigned int aid /* r29 */) {
    // Local variables
    struct st_PACKER_ATOC_NODE * assnode; // r30

    // References
    // -> static char __FUNCTION__[15];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D6957C
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D605E7
// Range: 0x800BF09C -> 0x800BF19C
static struct st_PACKER_LTOC_NODE * PKR_newlaynode(enum en_LAYER_TYPE laytyp /* r30 */, int refcnt /* r28 */) {
    // Local variables
    struct st_PACKER_LTOC_NODE * laynode; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[15];
}

static int been_here; // size: 0x4, address: 0x80D69580
static int been_here; // size: 0x4, address: 0x80D69584
static char __FUNCTION__[15]; // size: 0xF, address: 0x80D605F6
// Range: 0x800BF19C -> 0x800BF28C
static void PKR_oldlaynode(struct st_PACKER_LTOC_NODE * laynode /* r31 */) {
    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[15];
    // -> static int been_here;
}

// Range: 0x800BF28C -> 0x800BF2F4
static int OrdComp_R_Asset(void * vkey /* r3 */, void * vitem /* r4 */) {
    // Local variables
    int rc; // r31
    struct st_PACKER_ATOC_NODE * key; // r30
    struct st_PACKER_ATOC_NODE * item; // r29
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80D60605
// Range: 0x800BF2F4 -> 0x800BF3F0
static int OrdTest_R_AssetID(void * vkey /* r1+0x8 */, void * vitem /* r1+0xC */) {
    // Local variables
    int rc; // r30
    unsigned int key; // r29
    struct st_PACKER_ATOC_NODE * item; // r31

    // References
    // -> static char __FUNCTION__[18];
}

// Range: 0x800BF3F0 -> 0x800BF414
static int LOD_r_HIPA(struct st_PACKER_READ_DATA * pr /* r4 */) {
    // Local variables
    int result; // r31
}

static int been_here; // size: 0x4, address: 0x80D69588
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D60617
// Range: 0x800BF414 -> 0x800BF5F0
static int LOD_r_PACK(struct st_HIPLOADDATA * pkg /* r31 */, struct st_PACKER_READ_DATA * pr /* r29 */) {
    // Local variables
    int result; // r28
    unsigned int cid; // r30

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static int been_here;
    // -> static char __FUNCTION__[11];
}

// Range: 0x800BF5F0 -> 0x800BF75C
static int LOD_r_PVER(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int result; // r28
    int ver; // r1+0x8
    int amt; // r30

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800BF75C -> 0x800BF7B0
static int LOD_r_PFLG(struct st_HIPLOADDATA * pkg /* r1+0x8 */) {
    // Local variables
    int result; // r31
    int pkgflags; // r1+0xC

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

static int been_here; // size: 0x4, address: 0x80D6958C
static int been_here; // size: 0x4, address: 0x80D69590
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D60622
// Range: 0x800BF7B0 -> 0x800BF934
static int LOD_r_PCNT(struct st_HIPLOADDATA * pkg /* r31 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    int result; // r29
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static int been_here;
    // -> static char __FUNCTION__[11];
    // -> static int been_here;
}

// Range: 0x800BF934 -> 0x800BF9FC
static int LOD_r_PCRT(struct st_HIPLOADDATA * pkg /* r28 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int result; // r29
    int ival; // r1+0x8
    char tymbuf[256]; // r1+0xC

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800BF9FC -> 0x800BFA64
static int LOD_r_PMOD(struct st_HIPLOADDATA * pkg /* r1+0x8 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    int result; // r31
    int ival; // r1+0xC

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80D6062D
// Range: 0x800BFA64 -> 0x800BFD80
static int ValidatePlatform(char * plat /* r28 */, char * vid /* r30 */, char * lang /* r1+0x8 */, char * title /* r27 */) {
    // Local variables
    char fullname[128]; // r1+0xC
    int rc; // r31

    // References
    // -> static char __FUNCTION__[17];
}

enum _tagGameVidMode {
    eGameVidModeNTSC = 0,
    eGameVidModePAL = 1,
};
enum _tagGameVidMode gVidMode; // size: 0x4, address: 0x80D6A5B8
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D6063E
// Range: 0x800BFD80 -> 0x800C06AC
static int LOD_r_PLAT(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r1+0x8 */) {
    // Local variables
    int result; // r29
    char platname[32]; // r1+0x6C
    char vidname[32]; // r1+0x4C
    char langname[32]; // r1+0x2C
    char titlename[32]; // r1+0xC
    int n; // r31
    int rc; // r24

    // References
    // -> static char __FUNCTION__[11];
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

static int been_here; // size: 0x4, address: 0x80D69594
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D60649
// Range: 0x800C06AC -> 0x800C0838
static int LOD_r_DICT(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r29 */) {
    // Local variables
    int result; // r28
    unsigned int cid; // r31

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static int been_here;
    // -> static char __FUNCTION__[11];
}

static int been_here; // size: 0x4, address: 0x80D69598
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D60654
// Range: 0x800C0838 -> 0x800C09BC
static int LOD_r_ATOC(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r29 */) {
    // Local variables
    int result; // r28
    unsigned int cid; // r31

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static int been_here;
    // -> static char __FUNCTION__[11];
}

// Range: 0x800C09BC -> 0x800C0A10
static int LOD_r_AINF(struct st_HIPLOADDATA * pkg /* r1+0x8 */) {
    // Local variables
    int result; // r31
    int ival; // r1+0xC

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

static int been_here; // size: 0x4, address: 0x80D6959C
static int been_here; // size: 0x4, address: 0x80D695A0
static int been_here; // size: 0x4, address: 0x80D695A4
static int been_here; // size: 0x4, address: 0x80D695A8
static int been_here; // size: 0x4, address: 0x80D695AC
static int been_here; // size: 0x4, address: 0x80D695B0
static int been_here; // size: 0x4, address: 0x80D695B4
static int been_here; // size: 0x4, address: 0x80D695B8
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D6065F
// Range: 0x800C0A10 -> 0x800C1020
static int LOD_r_AHDR(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r29 */) {
    // Local variables
    int result; // r27
    unsigned int cid; // r28
    int ival; // r1+0x8
    int isdup; // r26
    struct st_PACKER_ATOC_NODE * assnode; // r31

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static int been_here;
    // -> static char __FUNCTION__[11];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D695BC
static int been_here; // size: 0x4, address: 0x80D695C0
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D6066A
// Range: 0x800C1020 -> 0x800C11EC
static int LOD_r_ADBG(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r26 */, struct st_PACKER_ATOC_NODE * assnode /* r31 */) {
    // Local variables
    int result; // r27
    int ival; // r1+0x8
    char tmpbuf[256]; // r1+0xC
    int amt; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[11];
    // -> static int been_here;
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

static int been_here; // size: 0x4, address: 0x80D695C4
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D60675
// Range: 0x800C11EC -> 0x800C1338
static int LOD_r_LTOC(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r28 */) {
    // Local variables
    int result; // r29
    unsigned int cid; // r31

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static int been_here;
    // -> static char __FUNCTION__[11];
}

// Range: 0x800C1338 -> 0x800C138C
static int LOD_r_LINF(struct st_HIPLOADDATA * pkg /* r1+0x8 */) {
    // Local variables
    int result; // r31
    int ival; // r1+0xC

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

static int been_here; // size: 0x4, address: 0x80D695C8
static int been_here; // size: 0x4, address: 0x80D695CC
static int been_here; // size: 0x4, address: 0x80D695D0
static int been_here; // size: 0x4, address: 0x80D695D4
static int been_here; // size: 0x4, address: 0x80D695D8
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D60680
// Range: 0x800C138C -> 0x800C1794
static int LOD_r_LHDR(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r25 */) {
    // Local variables
    int result; // r23
    unsigned int cid; // r28
    int ival; // r1+0xC
    enum en_LAYER_TYPE laytyp; // r24
    int refcnt; // r1+0x8
    int idx; // r26
    int i; // r27
    struct st_PACKER_LTOC_NODE * laynode; // r31
    struct st_PACKER_ATOC_NODE * assnode; // r30

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static int been_here;
    // -> static char __FUNCTION__[11];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D695DC
static int been_here; // size: 0x4, address: 0x80D695E0
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D6068B
// Range: 0x800C1794 -> 0x800C18C4
static int LOD_r_LDBG(struct st_HIPLOADDATA * pkg /* r1+0x8 */, struct st_PACKER_READ_DATA * pr /* r28 */, struct st_PACKER_LTOC_NODE * laynode /* r29 */) {
    // Local variables
    int result; // r30
    int ival; // r1+0xC
    int amt; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[11];
    // -> static int been_here;
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

static int been_here; // size: 0x4, address: 0x80D695E4
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D60696
// Range: 0x800C18C4 -> 0x800C1A10
static int LOD_r_STRM(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r28 */) {
    // Local variables
    int result; // r29
    unsigned int cid; // r31

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static int been_here;
    // -> static char __FUNCTION__[11];
}

// Range: 0x800C1A10 -> 0x800C1A64
static int LOD_r_DHDR(struct st_HIPLOADDATA * pkg /* r1+0x8 */) {
    // Local variables
    int result; // r31
    int ival; // r1+0xC

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800C1A64 -> 0x800C1A7C
static int LOD_r_DPAK() {
    // Local variables
    int result; // r31
}

// Range: 0x800C1A7C -> 0x800C1BB8
static void PKR_spew_verhist() {}

static int been_here; // size: 0x4, address: 0x80D695E8
static int been_here; // size: 0x4, address: 0x80D695EC
static int been_here; // size: 0x4, address: 0x80D695F0
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D606A1
// Range: 0x800C1BB8 -> 0x800C1DB8
struct PKRAssetType * PKR_type2typeref(unsigned int type /* r28 */, struct PKRAssetType * typelist /* r1+0x8 */) {
    // Local variables
    struct PKRAssetType * da_type; // r30
    struct PKRAssetType * tmptype; // r31
    int safety; // r29

    // References
    // -> static char __FUNCTION__[17];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D695F4
static char __FUNCTION__[16]; // size: 0x10, address: 0x80D606B2
// Range: 0x800C1DB8 -> 0x800C21CC
static void PKR_bld_typecnt(struct st_PACKER_READ_DATA * pr /* r28 */) {
    // Local variables
    struct st_PACKER_LTOC_NODE * laynode; // r29
    struct st_PACKER_ATOC_NODE * assnode; // r31
    int i; // r30
    int j; // r26
    int idx; // r27
    int typcnt[129]; // r1+0x10
    struct st_XORDEREDARRAY * tmplist; // r24
    unsigned int lasttype; // r25
    int lasttidx; // r21
    int hits; // r23
    int miss; // r22
    enum en_PKR_LAYER_LOAD_DEST loadDest; // r20
    unsigned int memTag; // r19
    unsigned int assSize; // r18

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[16];
}

static int been_here; // size: 0x4, address: 0x80D695F8
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D606C2
// Range: 0x800C21CC -> 0x800C2278
static int PKR_typeHdlr_cnt(struct st_PACKER_READ_DATA * pr /* r29 */) {
    // Local variables
    int num_types; // r30
    const struct PKRAssetType * atype; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
}

static int been_here; // size: 0x4, address: 0x80D695FC
static int been_here; // size: 0x4, address: 0x80D69600
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D606D3
// Range: 0x800C2278 -> 0x800C23A0
static int PKR_typeHdlr_idx(struct st_PACKER_READ_DATA * pr /* r28 */, unsigned int type /* r1+0x8 */) {
    // Local variables
    int da_idx; // r29
    int cnt; // r30
    const struct PKRAssetType * atype; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
    // -> static int been_here;
}

// Range: 0x800C23A0 -> 0x800C2414
void PKR_alloc_chkidx() {
    // References
    // -> static int g_memalloc_runfree;
    // -> static int g_memalloc_runtot;
    // -> static int g_memalloc_pair;
}

// Range: 0x800C2414 -> 0x800C2464
void * PKR_getmem(unsigned int id /* r1+0x8 */, int amount /* r1+0xC */, unsigned int aid /* r1+0x10 */, int align /* r1+0x14 */, unsigned int memtag /* r1+0x18 */) {}

static int been_here; // size: 0x4, address: 0x80D69604
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D606E4
const char * _rwMemoryLastAllocFile; // size: 0x4, address: 0x80D6C318
unsigned int _rwMemoryLastAllocLine; // size: 0x4, address: 0x80D6C31C
void * RwEngineInstance; // size: 0x4, address: 0x80D6C374
unsigned int gActiveHeap; // size: 0x4, address: 0x80D692A8
// Range: 0x800C2464 -> 0x800C28F0
void * PKR_getmem(unsigned int id /* r28 */, int amount /* r30 */, unsigned int aid /* r25 */, int align /* r29 */, unsigned int memtag /* r1+0x8 */, int isTemp /* r26 */, char * * memtru /* r27 */) {
    // Local variables
    void * memptr; // r31

    // References
    // -> static int g_memalloc_pair;
    // -> static int g_memalloc_runtot;
    // -> static char __FUNCTION__[11];
    // -> unsigned int gActiveHeap;
    // -> void * RwEngineInstance;
    // -> unsigned int _rwMemoryLastAllocLine;
    // -> const char * _rwMemoryLastAllocFile;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69608
static int been_here; // size: 0x4, address: 0x80D6960C
static char __FUNCTION__[11]; // size: 0xB, address: 0x80D606EF
// Range: 0x800C28F0 -> 0x800C2B70
void PKR_relmem(unsigned int id /* r29 */, int blksize /* r30 */, void * memptr /* r31 */, unsigned int aid /* r1+0x8 */, int isTemp /* r1+0xC */) {
    // References
    // -> void * RwEngineInstance;
    // -> static int g_memalloc_pair;
    // -> static int g_memalloc_runfree;
    // -> static char __FUNCTION__[11];
    // -> static int been_here;
    // -> static int been_here;
}

// Range: 0x800C2B70 -> 0x800C2BC8
static int PKR_push_memmark() {
    // Local variables
    int curlvl; // r31
}

// Range: 0x800C2BC8 -> 0x800C2C2C
static int PKR_pop_memmark() {
    // Local variables
    int curlvl; // r31
}

// Range: 0x800C2C2C -> 0x800C2F20
static void PKR_r_rpt_stats(struct st_PACKER_READ_DATA * pr /* r31 */) {}

static int been_here; // size: 0x4, address: 0x80D69610
static char __FUNCTION__[19]; // size: 0x13, address: 0x80D606FA
// Range: 0x800C2F20 -> 0x800C32A0
static void PKR_r_rpt_typeInfo(struct st_PACKER_READ_DATA * pr /* r23 */) {
    // Local variables
    const struct PKRAssetType * atype; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[19];
}

static int been_here; // size: 0x4, address: 0x80D69614
static char __FUNCTION__[20]; // size: 0x14, address: 0x80D6070D
// Range: 0x800C32A0 -> 0x800C3C38
static void PKR_r_rpt_typeTally(struct st_PACKER_READ_DATA * pr /* r23 */) {
    // Local variables
    int * cnt_tally; // r22
    int * cnt_bytes; // r21
    int * cnt_padin; // r20
    int * cnt_load; // r26
    int * cnt_dump; // r19
    int * cnt_skip; // r24
    char * tru_tally; // r1+0x40
    char * tru_bytes; // r1+0x3C
    char * tru_padin; // r1+0x38
    char * tru_load; // r1+0x34
    char * tru_dump; // r1+0x30
    char * tru_skip; // r1+0x2C
    int sum_tally; // r1+0x28
    int sum_bytes; // r1+0x24
    int sum_padin; // r1+0x20
    int sum_load; // r18
    int sum_dump; // r1+0x1C
    int sum_skip; // r17
    const struct PKRAssetType * atype; // r1+0x18
    int num_types; // r1+0x14
    int idx; // r29
    int i; // r28
    int j; // r30
    int alloc_size; // r25
    struct st_PACKER_ATOC_NODE * curass; // r31
    struct st_PACKER_LTOC_NODE * curlay; // r27
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r1+0x10

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[20];
}

static int been_here; // size: 0x4, address: 0x80D69618
static int been_here; // size: 0x4, address: 0x80D6961C
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60721
// Range: 0x800C3C38 -> 0x800C3F60
static void PKR_r_rpt_layers(struct st_PACKER_READ_DATA * pr /* r22 */) {
    // Local variables
    int i; // r29
    int j; // r28
    struct st_PACKER_LTOC_NODE * curlay; // r30
    struct st_PACKER_ATOC_NODE * curass; // r31
    int sum_assdata; // r26
    int sum_laysize; // r27
    int sum_padtot; // r24
    int sum_paduse; // r25
    int readfill; // r23

    // References
    // -> int pkr_sector_size;
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
    // -> static char * g_strz_layername[12];
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69620
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60732
// Range: 0x800C3F60 -> 0x800C4254
static void PKR_r_rpt_assets(struct st_PACKER_READ_DATA * pr /* r29 */) {
    // Local variables
    int i; // r30
    struct st_PACKER_ATOC_NODE * curass; // r31

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
}

static int been_here; // size: 0x4, address: 0x80D69624
static int been_here; // size: 0x4, address: 0x80D69628
static int been_here; // size: 0x4, address: 0x80D6962C
static int been_here; // size: 0x4, address: 0x80D69630
static int been_here; // size: 0x4, address: 0x80D69634
static int been_here; // size: 0x4, address: 0x80D69638
static int been_here; // size: 0x4, address: 0x80D6963C
static char __FUNCTION__[17]; // size: 0x11, address: 0x80D60743
// Range: 0x800C4254 -> 0x800C4E44
static void PKR_r_rpt_kosher(struct st_PACKER_READ_DATA * pr /* r28 */) {
    // Local variables
    int i; // r30
    int j; // r27
    struct st_PACKER_ATOC_NODE * curass; // r31
    struct st_PACKER_LTOC_NODE * curlay; // r29
    int reqalign; // r24
    char * memptr; // r22
    char * memtru; // r1+0x8
    unsigned int newchk; // r23
    struct st_PACKER_ATOC_NODE * bogus; // r26
    int rc; // r25
    enum en_READ_ASYNC_STATUS readstat; // r21

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[17];
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
    // -> int pkr_sector_size;
    // -> static int been_here;
    // -> static int been_here;
}

static int been_here; // size: 0x4, address: 0x80D69640
static int been_here; // size: 0x4, address: 0x80D69644
static int been_here; // size: 0x4, address: 0x80D69648
static int been_here; // size: 0x4, address: 0x80D6964C
static char __FUNCTION__[19]; // size: 0x13, address: 0x80D60754
enum en_VERBOSE_MSGLEVEL {
    DBML_NONE = 0,
    DBML_RELDISP = 1,
    DBML_DISP = 2,
    DBML_USER = 3,
    DBML_ERR = 4,
    DBML_TIME = 5,
    DBML_WARN = 6,
    DBML_VALID = 7,
    DBML_INFO = 8,
    DBML_DBG = 9,
    DBML_TEST = 10,
    DBML_VDBG = 11,
    DBML_SPEW = 12,
};
// Range: 0x800C4E44 -> 0x800C5648
static void PKR_r_rpt_timetrak(struct st_PACKER_READ_DATA * pr /* r31 */, int flg_opts /* r25 */) {
    // Local variables
    int i; // r30
    struct st_PACKER_ATOC_NODE * curass; // r28
    int idx; // r24
    int cntout; // r26
    int condense; // r23
    int num_types; // r22
    float tym_tmp; // f31
    float tym_full; // f29
    float tym_xfm; // f30
    float tym_justxform; // f28
    int nice; // r27
    enum en_VERBOSE_MSGLEVEL mlvl; // r29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[19];
    // -> static int been_here;
    // -> static int been_here;
    // -> static int been_here;
}


