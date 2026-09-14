/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xpkrsvc.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009B9E0 -> 0x800A11CC
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
static struct xPkrSvcMemMgrTagLookup xPkrSvcMemMgrTagLookupTable[12]; // size: 0x60, address: 0x80419B50
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
// Range: 0x8009B9E0 -> 0x8009BA3C
static unsigned int PKR_lookupMemtag(enum en_LAYER_TYPE laytyp /* r0 */) {
    // Local variables
    int memtag; // r5
    unsigned int i; // r6

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
// total size: 0x60
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
};
// total size: 0x8F0
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
// total size: 0x44
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
};
static struct PKRReadFuncs g_pkr_read_funcmap_original; // size: 0x44, address: 0x80419BB0
static struct PKRReadFuncs g_pkr_read_funcmap; // size: 0x44, address: 0x80419BF4
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
static struct st_HIPLOADFUNCS * g_hiprf; // size: 0x4, address: 0x80C07598
static struct st_PACKER_READ_DATA g_readdatainst[32]; // size: 0x11E00, address: 0x80419C38
static unsigned int g_loadlock; // size: 0x4, address: 0x80C0759C
int pkr_sector_size; // size: 0x4, address: 0x80C075A0
static int g_packinit; // size: 0x4, address: 0x80C075A4
static int g_memalloc_pair; // size: 0x4, address: 0x80C075A8
static int g_memalloc_runtot; // size: 0x4, address: 0x80C075AC
static int g_memalloc_runfree; // size: 0x4, address: 0x80C075B0
static char * g_strz_layername[12]; // size: 0x30, address: 0x8042BA38
// Range: 0x8009BA3C -> 0x8009BA5C
struct PKRReadFuncs * PKRGetReadFuncs(int apiver /* r0 */) {
    // References
    // -> static struct PKRReadFuncs g_pkr_read_funcmap;
}

// Range: 0x8009BA5C -> 0x8009BBD4
int PKRStartup() {
    // References
    // -> static int g_packinit;
    // -> int pkr_sector_size;
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static struct PKRReadFuncs g_pkr_read_funcmap_original;
    // -> static struct PKRReadFuncs g_pkr_read_funcmap;
}

// Range: 0x8009BC60 -> 0x8009BCA8
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
// Range: 0x8009BCA8 -> 0x8009BCE8
int PKRLoadStep(int block /* r0 */) {
    // Local variables
    int more_todo; // r0
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFDCB8
// Range: 0x8009BCE8 -> 0x8009C2A4
static struct st_PACKER_READ_DATA * PKR_ReadInit(void * userdata /* r23 */, const char * pkgfile /* r24 */, unsigned int opts /* r25 */, int * cltver /* r26 */, struct PKRAssetType * typelist /* r27 */, int fileflags /* r28 */) {
    // Local variables
    struct st_PACKER_READ_DATA * pr; // r31
    int i; // r6
    int uselock; // r30
    int rc; // r0
    char * tocbuf_RAW; // r1+0x8
    char * tocbuf_aligned; // r29

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static char __FUNCTION__[13];
    // -> static struct st_PACKER_READ_DATA g_readdatainst[32];
    // -> static unsigned int g_loadlock;
}

static char __FUNCTION__[13]; // size: 0xD, address: 0x80BFDCC8
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
enum en_PKR_LAYER_LOAD_DEST {
    PKR_LDDEST_SKIP = 0,
    PKR_LDDEST_KEEPSTATIC = 1,
    PKR_LDDEST_KEEPMALLOC = 2,
    PKR_LDDEST_RWHANDOFF = 3,
    PKR_LDDEST_NOMORE = 4,
    PKR_LDDEST_FORCE = 2147483647,
};
// Range: 0x8009C2A4 -> 0x8009C5D8
static void PKR_ReadDone(struct st_PACKER_READ_DATA * pr /* r29 */) {
    // Local variables
    int i; // r25
    int j; // r31
    int lockid; // r25
    struct st_PACKER_ATOC_NODE * assnode; // r24
    struct st_PACKER_LTOC_NODE * laynode; // r30
    struct st_XORDEREDARRAY * tmplist; // r3
    enum en_PKR_LAYER_LOAD_DEST loadDest; // r0
    unsigned int memTag; // r4
    unsigned int assSize; // r0

    // References
    // -> static unsigned int g_loadlock;
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static char __FUNCTION__[13];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFDCD8
// Range: 0x8009C5D8 -> 0x8009C99C
static int PKR_SetActive(struct st_PACKER_READ_DATA * pr /* r21 */, enum en_LAYER_TYPE layer /* r22 */) {
    // Local variables
    int result; // r27
    int rc; // r0
    int i; // r26
    int j; // r25
    struct st_PACKER_ATOC_NODE * assnode; // r24
    struct st_PACKER_LTOC_NODE * laynode; // r23

    // References
    // -> static char __FUNCTION__[14];
    // -> static char * g_strz_layername[12];
}

static char __FUNCTION__[14]; // size: 0xE, address: 0x80BFDCE8
// Range: 0x8009C99C -> 0x8009CCB8
static int PKR_parse_TOC(struct st_HIPLOADDATA * pkg /* r27 */, struct st_PACKER_READ_DATA * pr /* r28 */) {
    // Local variables
    int is_ok; // r30
    unsigned int cid; // r26
    int done; // r29

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static char __FUNCTION__[14];
}

static struct st_PACKER_READ_DATA * curpr; // size: 0x4, address: 0x80C075B4
static signed char init; // size: 0x1, address: 0x80C075B8
static struct st_PACKER_LTOC_NODE * asynlay; // size: 0x4, address: 0x80C075BC
static signed char init; // size: 0x1, address: 0x80C075C0
static char __FUNCTION__[19]; // size: 0x13, address: 0x80BFDCF8
enum en_READ_ASYNC_STATUS {
    HIP_RDSTAT_NONE = -1,
    HIP_RDSTAT_INPROG = 0,
    HIP_RDSTAT_SUCCESS = 1,
    HIP_RDSTAT_FAILED = 2,
    HIP_RDSTAT_NOBYPASS = 3,
    HIP_RDSTAT_NOASYNC = 4,
};
// Range: 0x8009CCB8 -> 0x8009D238
static int PKR_LoadStep_Async() {
    // Local variables
    int moretodo; // r3
    int rc; // r0
    enum en_READ_ASYNC_STATUS readstat; // r31
    struct st_PACKER_ATOC_NODE * tmpass; // r31
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0

    // References
    // -> static struct st_PACKER_READ_DATA * curpr;
    // -> static struct st_PACKER_LTOC_NODE * asynlay;
    // -> static char * g_strz_layername[12];
    // -> static char __FUNCTION__[19];
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static signed char init;
    // -> static signed char init;
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFDD0C
// Range: 0x8009D238 -> 0x8009D45C
static char * PKR_LayerMemReserve(struct st_PACKER_READ_DATA * pr /* r29 */, struct st_PACKER_LTOC_NODE * layer /* r30 */) {
    // Local variables
    char * mem; // r31
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0

    // References
    // -> static char * g_strz_layername[12];
    // -> static char __FUNCTION__[20];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80BFDD20
// Range: 0x8009D45C -> 0x8009D588
static void PKR_LayerMemRelease(struct st_PACKER_LTOC_NODE * layer /* r31 */) {
    // Local variables
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0

    // References
    // -> static char __FUNCTION__[20];
}

// Range: 0x8009D588 -> 0x8009D58C
void PKR_drv_guardLayer() {}

// Range: 0x8009D58C -> 0x8009D594
enum en_READ_ASYNC_STATUS PKR_drv_guardVerify() {}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFDD34
// Range: 0x8009D594 -> 0x8009D648
static enum en_PKR_LAYER_LOAD_DEST PKR_layerLoadDest(enum en_LAYER_TYPE laytyp /* r31 */) {
    // Local variables
    enum en_PKR_LAYER_LOAD_DEST load_place; // r3

    // References
    // -> static char __FUNCTION__[18];
}

// Range: 0x8009D648 -> 0x8009D6BC
static int PKR_layerTypeNeedsXForm(enum en_LAYER_TYPE laytyp /* r3 */) {
    // Local variables
    int do_xform; // r3
}

// Range: 0x8009D6BC -> 0x8009D7AC
static int PKR_findNextLayerToLoad(struct st_PACKER_READ_DATA * * work_on_pkg /* r0 */, struct st_PACKER_LTOC_NODE * * next_layer /* r0 */) {
    // Local variables
    struct st_PACKER_READ_DATA * tmppr; // r7
    struct st_PACKER_LTOC_NODE * tmplay; // r5
    int i; // r0
    int j; // r8

    // References
    // -> static unsigned int g_loadlock;
    // -> static struct st_PACKER_READ_DATA g_readdatainst[32];
}

static int doIntegrityChecks; // size: 0x4, address: 0x80C075C4
static signed char init; // size: 0x1, address: 0x80C075C8
static int dumpRawBuffer; // size: 0x4, address: 0x80C075CC
static signed char init; // size: 0x1, address: 0x80C075D0
static int dump_output; // size: 0x4, address: 0x80C075D4
static signed char init; // size: 0x1, address: 0x80C075D8
static char __FUNCTION__[22]; // size: 0x16, address: 0x80BFDD48
// Range: 0x8009D7AC -> 0x8009DB88
static void PKR_updateLayerAssets(struct st_PACKER_LTOC_NODE * laynode /* r27 */) {
    // Local variables
    int i; // r28
    struct st_PACKER_ATOC_NODE * tmpass; // r29
    int lay_hip_pos; // r28
    unsigned int tmpchk; // r0

    // References
    // -> static int dump_output;
    // -> static signed char init;
    // -> static int dumpRawBuffer;
    // -> static signed char init;
    // -> static int doIntegrityChecks;
    // -> static signed char init;
    // -> static char * g_strz_layername[12];
    // -> static char __FUNCTION__[22];
    // -> int pkr_sector_size;
}

// Range: 0x8009DB88 -> 0x8009DC44
static void PKR_xformLayerAssets(struct st_PACKER_LTOC_NODE * laynode /* r27 */) {
    // Local variables
    int i; // r30
    int will_be_dumped; // r29
    struct st_PACKER_ATOC_NODE * tmpass; // r28
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0
}

static char __FUNCTION__[16]; // size: 0x10, address: 0x80BFDD60
// Range: 0x8009DC44 -> 0x8009DEDC
static void PKR_xform_asset(struct st_PACKER_ATOC_NODE * assnode /* r29 */, int dumpable_layer /* r30 */) {
    // Local variables
    char * xformloc; // r0
    const struct PKRAssetType * atype; // r31

    // References
    // -> static char __FUNCTION__[16];
}

// Range: 0x8009DEDC -> 0x8009DFA8
static void * PKR_FindAsset(struct st_PACKER_READ_DATA * pr /* r29 */, unsigned int aid /* r0 */, int * assetsize /* r30 */) {
    // Local variables
    int idx; // r0
    struct st_PACKER_ATOC_NODE * assnode; // r31
}

// Range: 0x8009DFA8 -> 0x8009E074
struct st_PACKER_ATOC_NODE * PKR_FindAssetNode(struct st_PACKER_READ_DATA * pr /* r29 */, unsigned int aid /* r0 */, int * assetsize /* r30 */) {
    // Local variables
    int idx; // r0
    struct st_PACKER_ATOC_NODE * assnode; // r31
}

// Range: 0x8009E074 -> 0x8009E07C
static int PKR_LoadLayer() {}

// Range: 0x8009E07C -> 0x8009E0A0
static void * PKR_LoadAsset(struct st_PACKER_READ_DATA * pr /* r0 */, unsigned int aid /* r0 */, int * assetsize /* r7 */) {}

// Range: 0x8009E0A0 -> 0x8009E148
static unsigned int PKR_GetAssetSize(struct st_PACKER_READ_DATA * pr /* r29 */, unsigned int aid /* r30 */) {
    // Local variables
    int idx; // r0
    const struct st_PACKER_ATOC_NODE * assnode; // r31
}

// Range: 0x8009E148 -> 0x8009E1A8
static int PKR_AssetCount(struct st_PACKER_READ_DATA * pr /* r30 */, unsigned int type /* r0 */) {
    // Local variables
    int cnt; // r31
    int idx; // r0
}

// Range: 0x8009E1A8 -> 0x8009E258
static void * PKR_AssetByType(struct st_PACKER_READ_DATA * pr /* r29 */, unsigned int type /* r4 */, int idx /* r30 */, unsigned int * size /* r31 */) {
    // Local variables
    int typidx; // r0
    struct st_XORDEREDARRAY * typlist; // r3
    struct st_PACKER_ATOC_NODE * assnode; // r3
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFDD70
// Range: 0x8009E258 -> 0x8009E344
static int PKR_IsAssetReady(struct st_PACKER_READ_DATA * pr /* r29 */, unsigned int aid /* r30 */) {
    // Local variables
    int is_ok; // r31
    int idx; // r0

    // References
    // -> static char __FUNCTION__[17];
}

// Range: 0x8009E344 -> 0x8009E34C
static unsigned int PKR_getPackTimestamp(struct st_PACKER_READ_DATA * pr /* r3 */) {}

// Range: 0x8009E34C -> 0x8009E3B8
static void PKR_Disconnect(struct st_PACKER_READ_DATA * pr /* r31 */) {
    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8009E3B8 -> 0x8009E3C0
unsigned int PKRAssetIDFromInst(void * asset_inst /* r3 */) {}

// Range: 0x8009E3C0 -> 0x8009E430
static char * PKR_AssetName(struct st_PACKER_READ_DATA * pr /* r30 */, unsigned int aid /* r0 */) {
    // Local variables
    const char * da_name; // r31
    int idx; // r0
}

// Range: 0x8009E430 -> 0x8009E438
static unsigned int PKR_GetBaseSector(struct st_PACKER_READ_DATA * pr /* r3 */) {}

// Range: 0x8009E438 -> 0x8009E528
static int PKR_GetAssetInfo(struct st_PACKER_READ_DATA * pr /* r30 */, unsigned int aid /* r29 */, struct PKRAssetTOCInfo * tocinfo /* r31 */) {
    // Local variables
    int idx; // r0
    struct st_PACKER_ATOC_NODE * assnode; // r8

    // References
    // -> int pkr_sector_size;
}

// Range: 0x8009E528 -> 0x8009E64C
static int PKR_GetAssetInfoByType(struct st_PACKER_READ_DATA * pr /* r30 */, unsigned int type /* r28 */, int idx /* r29 */, struct PKRAssetTOCInfo * tocinfo /* r31 */) {
    // Local variables
    struct st_PACKER_ATOC_NODE * assnode; // r8
    int typidx; // r0
    struct st_XORDEREDARRAY * typlist; // r3

    // References
    // -> int pkr_sector_size;
}

// Range: 0x8009E64C -> 0x8009E6C4
static int PKR_PkgHasAsset(struct st_PACKER_READ_DATA * pr /* r31 */, unsigned int aid /* r0 */) {
    // Local variables
    int rc; // r3
    int idx; // r0
}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFDD84
enum en_pkrfindmyass {
    PKR_FIND_FAILED = 0,
    PKR_FIND_EXACT = 1,
    PKR_FIND_EXACT_XFORM = 2,
    PKR_FIND_RANGE = 3,
    PKR_FIND_RANGE_XFORM = 4,
};
// Range: 0x8009E6C4 -> 0x8009E85C
enum en_pkrfindmyass PKRFindMyAsset(struct st_PACKER_READ_DATA * pr /* r29 */, struct PKRAssetTOCInfo * tocinfo /* r30 */, void * ptr_raw /* r31 */) {
    // Local variables
    int i_rawaddr; // r0
    int i; // r27
    const struct st_PACKER_ATOC_NODE * assnode; // r26
    int isXForm; // r25
    int addr_beg; // r0
    int addr_end; // r0

    // References
    // -> static char __FUNCTION__[15];
}

static char __FUNCTION__[26]; // size: 0x1A, address: 0x8042BAC8
// Range: 0x8009E85C -> 0x8009EBE8
static int PKR_FRIEND_assetIsGameDup(unsigned int aid /* r26 */, const struct st_PACKER_READ_DATA * skippr /* r27 */, int oursize /* r28 */, unsigned int ourtype /* r29 */, unsigned int chksum /* r30 */, char * our_fnam /* r31 */) {
    // Local variables
    int is_dup; // r24
    const struct st_PACKER_ATOC_NODE * tmp_ass; // r23
    int i; // r22
    int idx; // r0
    int is_a_sound; // r21

    // References
    // -> static char __FUNCTION__[26];
    // -> static unsigned int g_loadlock;
    // -> static struct st_PACKER_READ_DATA g_readdatainst[32];
}

// Range: 0x8009EBE8 -> 0x8009EC70
static int PKR_makepool_anode(struct st_PACKER_READ_DATA * pr /* r30 */, int cnt /* r0 */) {
    // Local variables
    struct st_PACKER_ATOC_NODE * asspool; // r0
    int amount; // r31
}

// Range: 0x8009EC70 -> 0x8009ECD0
static void PKR_kiilpool_anode(struct st_PACKER_READ_DATA * pr /* r31 */) {}

static char __FUNCTION__[15]; // size: 0xF, address: 0x80BFDD94
// Range: 0x8009ECD0 -> 0x8009ED8C
static struct st_PACKER_ATOC_NODE * PKR_newassnode(struct st_PACKER_READ_DATA * pr /* r31 */, unsigned int aid /* r30 */) {
    // Local variables
    struct st_PACKER_ATOC_NODE * assnode; // r31

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x8009ED8C -> 0x8009EE38
static struct st_PACKER_LTOC_NODE * PKR_newlaynode(enum en_LAYER_TYPE laytyp /* r28 */, int refcnt /* r29 */) {
    // Local variables
    struct st_PACKER_LTOC_NODE * laynode; // r30
}

// Range: 0x8009EE38 -> 0x8009EE90
static void PKR_oldlaynode(struct st_PACKER_LTOC_NODE * laynode /* r31 */) {}

// Range: 0x8009EE90 -> 0x8009EEBC
static int OrdComp_R_Asset(void * vkey /* r0 */, void * vitem /* r0 */) {
    // Local variables
    int rc; // r3
}

static char __FUNCTION__[18]; // size: 0x12, address: 0x80BFDDA4
// Range: 0x8009EEBC -> 0x8009EF80
static int OrdTest_R_AssetID(void * vkey /* r3 */, void * vitem /* r4 */) {
    // Local variables
    int rc; // r3
    unsigned int key; // r31
    struct st_PACKER_ATOC_NODE * item; // r30

    // References
    // -> static char __FUNCTION__[18];
}

// Range: 0x8009EF80 -> 0x8009EF94
static int LOD_r_HIPA(struct st_PACKER_READ_DATA * pr /* r0 */) {}

// Range: 0x8009EF94 -> 0x8009F108
static int LOD_r_PACK(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    unsigned int cid; // r3

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8009F108 -> 0x8009F254
static int LOD_r_PVER(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int ver; // r1+0x8
    int amt; // r0

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8009F254 -> 0x8009F294
static int LOD_r_PFLG(struct st_HIPLOADDATA * pkg /* r0 */) {
    // Local variables
    int pkgflags; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8009F294 -> 0x8009F36C
static int LOD_r_PCNT(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8009F36C -> 0x8009F420
static int LOD_r_PCRT(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int ival; // r1+0x8
    char tymbuf[256]; // r1+0xC

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8009F420 -> 0x8009F474
static int LOD_r_PMOD(struct st_HIPLOADDATA * pkg /* r0 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFDDB8
// Range: 0x8009F474 -> 0x8009F768
static int ValidatePlatform(char * plat /* r28 */, char * vid /* r29 */, char * lang /* r30 */, char * title /* r31 */) {
    // Local variables
    char fullname[128]; // r1+0x8
    int rc; // r28

    // References
    // -> static char __FUNCTION__[17];
}

enum _tagGameVidMode {
    eGameVidModeNTSC = 0,
    eGameVidModePAL = 1,
};
enum _tagGameVidMode gVidMode; // size: 0x4, address: 0x80C08220
static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFDDCC
// Range: 0x8009F768 -> 0x8009FAD8
static int LOD_r_PLAT(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r1+0x8 */) {
    // Local variables
    int result; // r31
    char platname[32]; // r1+0x6C
    char vidname[32]; // r1+0x4C
    char langname[32]; // r1+0x2C
    char titlename[32]; // r1+0xC
    int n; // r0
    int rc; // r0

    // References
    // -> static char __FUNCTION__[11];
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8009FAD8 -> 0x8009FC00
static int LOD_r_DICT(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    unsigned int cid; // r3

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8009FC00 -> 0x8009FD20
static int LOD_r_ATOC(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    unsigned int cid; // r3

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8009FD20 -> 0x8009FD60
static int LOD_r_AINF(struct st_HIPLOADDATA * pkg /* r0 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8009FD60 -> 0x8009FFD0
static int LOD_r_AHDR(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    unsigned int cid; // r3
    int ival; // r1+0x8
    int isdup; // r0
    struct st_PACKER_ATOC_NODE * assnode; // r31

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8009FFD0 -> 0x800A00E8
static int LOD_r_ADBG(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */, struct st_PACKER_ATOC_NODE * assnode /* r31 */) {
    // Local variables
    int ival; // r1+0x8
    char tmpbuf[256]; // r1+0xC

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800A00E8 -> 0x800A01D0
static int LOD_r_LTOC(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    unsigned int cid; // r3

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800A01D0 -> 0x800A0210
static int LOD_r_LINF(struct st_HIPLOADDATA * pkg /* r0 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800A0210 -> 0x800A0464
static int LOD_r_LHDR(struct st_HIPLOADDATA * pkg /* r27 */, struct st_PACKER_READ_DATA * pr /* r28 */) {
    // Local variables
    unsigned int cid; // r3
    int ival; // r1+0xC
    enum en_LAYER_TYPE laytyp; // r26
    int refcnt; // r1+0x8
    int idx; // r0
    int i; // r30
    struct st_PACKER_LTOC_NODE * laynode; // r29
    struct st_PACKER_ATOC_NODE * assnode; // r26

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800A0464 -> 0x800A04C4
static int LOD_r_LDBG(struct st_HIPLOADDATA * pkg /* r0 */, struct st_PACKER_READ_DATA * pr /* r0 */, struct st_PACKER_LTOC_NODE * laynode /* r31 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800A04C4 -> 0x800A05AC
static int LOD_r_STRM(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    unsigned int cid; // r3

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800A05AC -> 0x800A05EC
static int LOD_r_DHDR(struct st_HIPLOADDATA * pkg /* r0 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800A05EC -> 0x800A05F4
static int LOD_r_DPAK() {}

// Range: 0x800A05F4 -> 0x800A0730
static void PKR_spew_verhist() {}

static char __FUNCTION__[17]; // size: 0x11, address: 0x80BFDDD8
// Range: 0x800A0730 -> 0x800A07FC
struct PKRAssetType * PKR_type2typeref(unsigned int type /* r3 */, struct PKRAssetType * typelist /* r4 */) {
    // Local variables
    struct PKRAssetType * da_type; // r31
    struct PKRAssetType * tmptype; // r4

    // References
    // -> static char __FUNCTION__[17];
}

// Range: 0x800A07FC -> 0x800A0B24
static void PKR_bld_typecnt(struct st_PACKER_READ_DATA * pr /* r29 */) {
    // Local variables
    struct st_PACKER_LTOC_NODE * laynode; // r25
    struct st_PACKER_ATOC_NODE * assnode; // r24
    int i; // r23
    int j; // r22
    int idx; // r3
    int typcnt[129]; // r1+0x8
    struct st_XORDEREDARRAY * tmplist; // r26
    unsigned int lasttype; // r31
    int lasttidx; // r30
    enum en_PKR_LAYER_LOAD_DEST loadDest; // r0
    unsigned int memTag; // r4
    unsigned int assSize; // r0
}

// Range: 0x800A0B24 -> 0x800A0B5C
static int PKR_typeHdlr_idx(struct st_PACKER_READ_DATA * pr /* r0 */, unsigned int type /* r0 */) {
    // Local variables
    int da_idx; // r3
    int cnt; // r5
    const struct PKRAssetType * atype; // r6
}

// Range: 0x800A0B5C -> 0x800A0BB8
void PKR_alloc_chkidx() {
    // References
    // -> static int g_memalloc_runtot;
    // -> static int g_memalloc_runfree;
    // -> static int g_memalloc_pair;
}

// Range: 0x800A0BB8 -> 0x800A0BE0
void * PKR_getmem(unsigned int id /* r0 */, int amount /* r0 */, unsigned int aid /* r0 */, int align /* r0 */, unsigned int memtag /* r0 */) {}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFDDEC
void * RwEngineInstance; // size: 0x4, address: 0x80C09F34
unsigned int gActiveHeap; // size: 0x4, address: 0x80C07448
// Range: 0x800A0BE0 -> 0x800A0F64
void * PKR_getmem(unsigned int id /* r25 */, int amount /* r26 */, unsigned int aid /* r27 */, int align /* r28 */, unsigned int memtag /* r29 */, int isTemp /* r31 */, char * * memtru /* r30 */) {
    // Local variables
    void * memptr; // r31

    // References
    // -> static int g_memalloc_pair;
    // -> static int g_memalloc_runtot;
    // -> static char __FUNCTION__[11];
    // -> unsigned int gActiveHeap;
    // -> void * RwEngineInstance;
}

static char __FUNCTION__[11]; // size: 0xB, address: 0x80BFDDF8
// Range: 0x800A0F64 -> 0x800A10EC
void PKR_relmem(unsigned int id /* r27 */, int blksize /* r28 */, void * memptr /* r29 */, unsigned int aid /* r30 */, int isTemp /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static int g_memalloc_pair;
    // -> static int g_memalloc_runfree;
    // -> static char __FUNCTION__[11];
}

// Range: 0x800A10EC -> 0x800A1138
static int PKR_push_memmark() {
    // Local variables
    int curlvl; // r31
}

// Range: 0x800A1138 -> 0x800A118C
static int PKR_pop_memmark() {
    // Local variables
    int curlvl; // r3
}


