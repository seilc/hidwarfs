/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xpkrsvc.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80055D18 -> 0x80058B0C
*/
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
// total size: 0x18
struct PKRAssetTOCInfo {
    // Members
    unsigned int aid; // offset 0x0, size 0x4
    struct PKRAssetType * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
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
static struct PKRReadFuncs g_pkr_read_funcmap_original; // size: 0x44, address: 0x802BCC88
static struct PKRReadFuncs g_pkr_read_funcmap; // size: 0x44, address: 0x802BCCCC
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
static struct st_HIPLOADFUNCS * g_hiprf; // size: 0x4, address: 0x803C1240
static struct st_PACKER_READ_DATA g_readdatainst[32]; // size: 0x11E00, address: 0x802BCD10
static unsigned int g_loadlock; // size: 0x4, address: 0x803C1244
int pkr_sector_size; // size: 0x4, address: 0x803C1248
static int g_packinit; // size: 0x4, address: 0x803C124C
static int g_memalloc_pair; // size: 0x4, address: 0x803C1250
static int g_memalloc_runtot; // size: 0x4, address: 0x803C1254
static int g_memalloc_runfree; // size: 0x4, address: 0x803C1258
// Range: 0x80055D18 -> 0x80055D38
struct PKRReadFuncs * PKRGetReadFuncs(int apiver /* r0 */) {
    // References
    // -> static struct PKRReadFuncs g_pkr_read_funcmap;
}

// Range: 0x80055D38 -> 0x80055D90
int PKRStartup() {
    // References
    // -> static int g_packinit;
    // -> int pkr_sector_size;
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static struct PKRReadFuncs g_pkr_read_funcmap_original;
    // -> static struct PKRReadFuncs g_pkr_read_funcmap;
}

// Range: 0x80055E1C -> 0x80055E2C
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
// Range: 0x80055E2C -> 0x80055E4C
int PKRLoadStep() {
    // Local variables
    int more_todo; // r0
}

// Range: 0x80055E4C -> 0x80056050
static struct st_PACKER_READ_DATA * PKR_ReadInit(void * userdata /* r23 */, const char * pkgfile /* r24 */, unsigned int opts /* r25 */, int * cltver /* r26 */, struct PKRAssetType * typelist /* r27 */, int fileflags /* r28 */) {
    // Local variables
    struct st_PACKER_READ_DATA * pr; // r31
    int i; // r6
    int uselock; // r30
    char * tocbuf_RAW; // r1+0x8
    char * tocbuf_aligned; // r29

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static struct st_PACKER_READ_DATA g_readdatainst[32];
    // -> static unsigned int g_loadlock;
}

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
// Range: 0x80056050 -> 0x80056214
static void PKR_ReadDone(struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int i; // r27
    int j; // r28
    int lockid; // r27
    struct st_PACKER_ATOC_NODE * assnode; // r4
    struct st_PACKER_LTOC_NODE * laynode; // r26
    struct st_XORDEREDARRAY * tmplist; // r3

    // References
    // -> static unsigned int g_loadlock;
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

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
// Range: 0x80056214 -> 0x8005632C
static int PKR_SetActive(struct st_PACKER_READ_DATA * pr /* r27 */, enum en_LAYER_TYPE layer /* r28 */) {
    // Local variables
    int result; // r31
    int rc; // r0
    int i; // r30
    int j; // r24
    struct st_PACKER_ATOC_NODE * assnode; // r23
    struct st_PACKER_LTOC_NODE * laynode; // r29
}

// Range: 0x8005632C -> 0x800564A0
static int PKR_parse_TOC(struct st_HIPLOADDATA * pkg /* r28 */, struct st_PACKER_READ_DATA * pr /* r29 */) {
    // Local variables
    int is_ok; // r31
    unsigned int cid; // r3
    int done; // r30

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

static struct st_PACKER_READ_DATA * curpr; // size: 0x4, address: 0x803C125C
static signed char init; // size: 0x1, address: 0x803C1260
static struct st_PACKER_LTOC_NODE * asynlay; // size: 0x4, address: 0x803C1264
static signed char init; // size: 0x1, address: 0x803C1268
enum en_READ_ASYNC_STATUS {
    HIP_RDSTAT_NONE = -1,
    HIP_RDSTAT_INPROG = 0,
    HIP_RDSTAT_SUCCESS = 1,
    HIP_RDSTAT_FAILED = 2,
    HIP_RDSTAT_NOBYPASS = 3,
    HIP_RDSTAT_NOASYNC = 4,
};
enum en_PKR_LAYER_LOAD_DEST {
    PKR_LDDEST_SKIP = 0,
    PKR_LDDEST_KEEPSTATIC = 1,
    PKR_LDDEST_KEEPMALLOC = 2,
    PKR_LDDEST_RWHANDOFF = 3,
    PKR_LDDEST_NOMORE = 4,
    PKR_LDDEST_FORCE = 2147483647,
};
// Range: 0x800564A0 -> 0x80056718
static int PKR_LoadStep_Async() {
    // Local variables
    int moretodo; // r3
    int rc; // r0
    enum en_READ_ASYNC_STATUS readstat; // r3
    struct st_PACKER_ATOC_NODE * tmpass; // r31
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0

    // References
    // -> static struct st_PACKER_READ_DATA * curpr;
    // -> static struct st_PACKER_LTOC_NODE * asynlay;
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
    // -> static signed char init;
    // -> static signed char init;
}

// Range: 0x80056718 -> 0x80056814
static char * PKR_LayerMemReserve(struct st_PACKER_LTOC_NODE * layer /* r30 */) {
    // Local variables
    char * mem; // r31
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0
}

// Range: 0x80056814 -> 0x800568F4
static void PKR_LayerMemRelease(struct st_PACKER_LTOC_NODE * layer /* r31 */) {
    // Local variables
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0
}

// Range: 0x800568F4 -> 0x800568F8
void PKR_drv_guardLayer() {}

// Range: 0x800568F8 -> 0x80056900
enum en_READ_ASYNC_STATUS PKR_drv_guardVerify() {}

// Range: 0x80056900 -> 0x80056948
static enum en_PKR_LAYER_LOAD_DEST PKR_layerLoadDest(enum en_LAYER_TYPE laytyp /* r0 */) {
    // Local variables
    enum en_PKR_LAYER_LOAD_DEST load_place; // r3
}

// Range: 0x80056948 -> 0x80056988
static int PKR_layerTypeNeedsXForm(enum en_LAYER_TYPE laytyp /* r0 */) {
    // Local variables
    int do_xform; // r3
}

// Range: 0x80056988 -> 0x80056A7C
static int PKR_findNextLayerToLoad(struct st_PACKER_READ_DATA * * work_on_pkg /* r0 */, struct st_PACKER_LTOC_NODE * * next_layer /* r0 */) {
    // Local variables
    struct st_PACKER_READ_DATA * tmppr; // r7
    struct st_PACKER_LTOC_NODE * tmplay; // r5
    int i; // r0
    int j; // r9

    // References
    // -> static struct st_PACKER_READ_DATA g_readdatainst[32];
    // -> static unsigned int g_loadlock;
}

// Range: 0x80056A7C -> 0x80056B30
static void PKR_updateLayerAssets(struct st_PACKER_LTOC_NODE * laynode /* r0 */) {
    // Local variables
    int i; // r0
    struct st_PACKER_ATOC_NODE * tmpass; // r5
    int lay_hip_pos; // r9
}

// Range: 0x80056B30 -> 0x80056BCC
static void PKR_xformLayerAssets(struct st_PACKER_LTOC_NODE * laynode /* r26 */) {
    // Local variables
    int i; // r29
    int will_be_dumped; // r28
    struct st_PACKER_ATOC_NODE * tmpass; // r27
    enum en_PKR_LAYER_LOAD_DEST loaddest; // r0
}

// Range: 0x80056BCC -> 0x80056CE0
static void PKR_xform_asset(struct st_PACKER_ATOC_NODE * assnode /* r29 */, int dumpable_layer /* r30 */) {
    // Local variables
    char * xformloc; // r0
    const struct PKRAssetType * atype; // r31
}

// Range: 0x80056CE0 -> 0x80056D9C
static void * PKR_FindAsset(struct st_PACKER_READ_DATA * pr /* r29 */, unsigned int aid /* r0 */, int * assetsize /* r30 */) {
    // Local variables
    int idx; // r0
    struct st_PACKER_ATOC_NODE * assnode; // r31
}

// Range: 0x80056D9C -> 0x80056DA4
static int PKR_LoadLayer() {}

// Range: 0x80056DA4 -> 0x80056DC8
static void * PKR_LoadAsset(struct st_PACKER_READ_DATA * pr /* r0 */, unsigned int aid /* r0 */, int * assetsize /* r7 */) {}

// Range: 0x80056DC8 -> 0x80056E3C
static unsigned int PKR_GetAssetSize(struct st_PACKER_READ_DATA * pr /* r30 */, unsigned int aid /* r0 */) {
    // Local variables
    int idx; // r0
    const struct st_PACKER_ATOC_NODE * assnode; // r31
}

// Range: 0x80056E3C -> 0x80056E94
static int PKR_AssetCount(struct st_PACKER_READ_DATA * pr /* r30 */, unsigned int type /* r0 */) {
    // Local variables
    int cnt; // r31
    int idx; // r0
}

// Range: 0x80056E94 -> 0x80056F34
static void * PKR_AssetByType(struct st_PACKER_READ_DATA * pr /* r29 */, unsigned int type /* r4 */, int idx /* r30 */, unsigned int * size /* r31 */) {
    // Local variables
    int typidx; // r0
    struct st_XORDEREDARRAY * typlist; // r3
    struct st_PACKER_ATOC_NODE * assnode; // r3
}

// Range: 0x80056F34 -> 0x80056FA0
static int PKR_IsAssetReady(struct st_PACKER_READ_DATA * pr /* r30 */, unsigned int aid /* r0 */) {
    // Local variables
    int is_ok; // r31
    int idx; // r0
}

// Range: 0x80056FA0 -> 0x80056FA8
static unsigned int PKR_getPackTimestamp(struct st_PACKER_READ_DATA * pr /* r3 */) {}

// Range: 0x80056FA8 -> 0x80056FF4
static void PKR_Disconnect(struct st_PACKER_READ_DATA * pr /* r31 */) {
    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x80056FF4 -> 0x8005705C
static char * PKR_AssetName(struct st_PACKER_READ_DATA * pr /* r30 */, unsigned int aid /* r0 */) {
    // Local variables
    const char * da_name; // r31
    int idx; // r0
}

// Range: 0x8005705C -> 0x80057064
static unsigned int PKR_GetBaseSector(struct st_PACKER_READ_DATA * pr /* r3 */) {}

// Range: 0x80057064 -> 0x8005711C
static int PKR_GetAssetInfo(struct st_PACKER_READ_DATA * pr /* r29 */, unsigned int aid /* r30 */, struct PKRAssetTOCInfo * tocinfo /* r31 */) {
    // Local variables
    int idx; // r0
    struct st_PACKER_ATOC_NODE * assnode; // r6

    // References
    // -> int pkr_sector_size;
}

// Range: 0x8005711C -> 0x80057200
static int PKR_GetAssetInfoByType(struct st_PACKER_READ_DATA * pr /* r28 */, unsigned int type /* r29 */, int idx /* r30 */, struct PKRAssetTOCInfo * tocinfo /* r31 */) {
    // Local variables
    struct st_PACKER_ATOC_NODE * assnode; // r6
    int typidx; // r0
    struct st_XORDEREDARRAY * typlist; // r3

    // References
    // -> int pkr_sector_size;
}

// Range: 0x80057200 -> 0x80057278
static int PKR_PkgHasAsset(struct st_PACKER_READ_DATA * pr /* r31 */, unsigned int aid /* r0 */) {
    // Local variables
    int rc; // r3
    int idx; // r0
}

// Range: 0x80057278 -> 0x800573D4
static int PKR_FRIEND_assetIsGameDup(unsigned int aid /* r25 */, const struct st_PACKER_READ_DATA * skippr /* r26 */, int oursize /* r27 */, unsigned int ourtype /* r28 */, unsigned int chksum /* r29 */) {
    // Local variables
    int is_dup; // r31
    struct st_PACKER_READ_DATA * tmp_pr; // r23
    const struct st_PACKER_ATOC_NODE * tmp_ass; // r23
    int i; // r30
    int idx; // r0

    // References
    // -> static struct st_PACKER_READ_DATA g_readdatainst[32];
    // -> static unsigned int g_loadlock;
}

// Range: 0x800573D4 -> 0x80057450
static int PKR_makepool_anode(struct st_PACKER_READ_DATA * pr /* r30 */, int cnt /* r0 */) {
    // Local variables
    struct st_PACKER_ATOC_NODE * asspool; // r0
    int amount; // r31
}

// Range: 0x80057450 -> 0x800574B0
static void PKR_kiilpool_anode(struct st_PACKER_READ_DATA * pr /* r31 */) {}

// Range: 0x800574B0 -> 0x80057508
static struct st_PACKER_ATOC_NODE * PKR_newassnode(struct st_PACKER_READ_DATA * pr /* r0 */, unsigned int aid /* r30 */) {
    // Local variables
    struct st_PACKER_ATOC_NODE * assnode; // r31
}

// Range: 0x80057508 -> 0x8005758C
static struct st_PACKER_LTOC_NODE * PKR_newlaynode(enum en_LAYER_TYPE laytyp /* r29 */, int refcnt /* r30 */) {
    // Local variables
    struct st_PACKER_LTOC_NODE * laynode; // r31
}

// Range: 0x8005758C -> 0x800575E4
static void PKR_oldlaynode(struct st_PACKER_LTOC_NODE * laynode /* r31 */) {}

// Range: 0x800575E4 -> 0x80057610
static int OrdComp_R_Asset(void * vkey /* r0 */, void * vitem /* r0 */) {
    // Local variables
    int rc; // r3
}

// Range: 0x80057610 -> 0x80057638
static int OrdTest_R_AssetID(void * vkey /* r0 */, void * vitem /* r0 */) {
    // Local variables
    int rc; // r3
    unsigned int key; // r0
}

// Range: 0x80057638 -> 0x8005764C
static int LOD_r_HIPA(struct st_PACKER_READ_DATA * pr /* r0 */) {}

// Range: 0x8005764C -> 0x80057790
static int LOD_r_PACK(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    unsigned int cid; // r3

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x80057790 -> 0x80057864
static int LOD_r_PVER(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int ver; // r1+0x8
    int amt; // r0

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x80057864 -> 0x800578A4
static int LOD_r_PFLG(struct st_HIPLOADDATA * pkg /* r0 */) {
    // Local variables
    int pkgflags; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800578A4 -> 0x80057974
static int LOD_r_PCNT(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x80057974 -> 0x80057A20
static int LOD_r_PCRT(struct st_HIPLOADDATA * pkg /* r30 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int ival; // r1+0x8
    char tymbuf[256]; // r1+0xC

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x80057A20 -> 0x80057A74
static int LOD_r_PMOD(struct st_HIPLOADDATA * pkg /* r0 */, struct st_PACKER_READ_DATA * pr /* r31 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x80057A74 -> 0x80057BA4
static int ValidatePlatform(char * plat /* r29 */, char * vid /* r30 */, char * lang /* r7 */, char * title /* r31 */) {
    // Local variables
    char fullname[128]; // r1+0x8
    int rc; // r29
}

enum _tagGameVidMode {
    eGameVidModeNTSC = 0,
    eGameVidModePAL = 1,
};
enum _tagGameVidMode gVidMode; // size: 0x4, address: 0x803C2088
// Range: 0x80057BA4 -> 0x80057D0C
static int LOD_r_PLAT(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    int result; // r31
    char platname[32]; // r1+0x68
    char vidname[32]; // r1+0x48
    char langname[32]; // r1+0x28
    char titlename[32]; // r1+0x8
    int n; // r0
    int rc; // r0

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x80057D0C -> 0x80057DD4
static int LOD_r_DICT(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    unsigned int cid; // r3

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x80057DD4 -> 0x80057E8C
static int LOD_r_ATOC(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    unsigned int cid; // r3

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x80057E8C -> 0x80057ECC
static int LOD_r_AINF(struct st_HIPLOADDATA * pkg /* r0 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x80057ECC -> 0x800580CC
static int LOD_r_AHDR(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    unsigned int cid; // r3
    int ival; // r1+0x8
    int isdup; // r0
    struct st_PACKER_ATOC_NODE * assnode; // r31

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800580CC -> 0x800581D4
static int LOD_r_ADBG(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */, struct st_PACKER_ATOC_NODE * assnode /* r31 */) {
    // Local variables
    int ival; // r1+0x8
    char tmpbuf[256]; // r1+0xC

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800581D4 -> 0x8005828C
static int LOD_r_LTOC(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    unsigned int cid; // r3

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8005828C -> 0x800582CC
static int LOD_r_LINF(struct st_HIPLOADDATA * pkg /* r0 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800582CC -> 0x80058484
static int LOD_r_LHDR(struct st_HIPLOADDATA * pkg /* r27 */, struct st_PACKER_READ_DATA * pr /* r28 */) {
    // Local variables
    unsigned int cid; // r3
    int ival; // r1+0xC
    enum en_LAYER_TYPE laytyp; // r29
    int refcnt; // r1+0x8
    int idx; // r0
    int i; // r30
    struct st_PACKER_LTOC_NODE * laynode; // r29
    struct st_PACKER_ATOC_NODE * assnode; // r26

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x80058484 -> 0x800584E4
static int LOD_r_LDBG(struct st_HIPLOADDATA * pkg /* r0 */, struct st_PACKER_READ_DATA * pr /* r0 */, struct st_PACKER_LTOC_NODE * laynode /* r31 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800584E4 -> 0x8005859C
static int LOD_r_STRM(struct st_HIPLOADDATA * pkg /* r29 */, struct st_PACKER_READ_DATA * pr /* r30 */) {
    // Local variables
    unsigned int cid; // r3

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x8005859C -> 0x800585DC
static int LOD_r_DHDR(struct st_HIPLOADDATA * pkg /* r0 */) {
    // Local variables
    int ival; // r1+0x8

    // References
    // -> static struct st_HIPLOADFUNCS * g_hiprf;
}

// Range: 0x800585DC -> 0x800585E4
static int LOD_r_DPAK() {}

// Range: 0x800585E4 -> 0x800585E8
static void PKR_spew_verhist() {}

// Range: 0x800585E8 -> 0x80058650
struct PKRAssetType * PKR_type2typeref(unsigned int type /* r3 */, struct PKRAssetType * typelist /* r4 */) {
    // Local variables
    struct PKRAssetType * da_type; // r31
    struct PKRAssetType * tmptype; // r4
}

// Range: 0x80058650 -> 0x80058888
static void PKR_bld_typecnt(struct st_PACKER_READ_DATA * pr /* r26 */) {
    // Local variables
    struct st_PACKER_LTOC_NODE * laynode; // r30
    struct st_PACKER_ATOC_NODE * assnode; // r23
    int i; // r31
    int j; // r29
    int idx; // r3
    int typcnt[129]; // r1+0x8
    struct st_XORDEREDARRAY * tmplist; // r3
    unsigned int lasttype; // r28
    int lasttidx; // r27
}

// Range: 0x80058888 -> 0x800588C0
static int PKR_typeHdlr_idx(struct st_PACKER_READ_DATA * pr /* r0 */, unsigned int type /* r0 */) {
    // Local variables
    int da_idx; // r3
    int cnt; // r5
    const struct PKRAssetType * atype; // r6
}

// Range: 0x800588C0 -> 0x800588C4
void PKR_alloc_chkidx() {}

// Range: 0x800588C4 -> 0x800588EC
void * PKR_getmem(unsigned int id /* r0 */, int amount /* r0 */, unsigned int aid /* r0 */, int align /* r0 */, unsigned int memtag /* r0 */) {}

void * RwEngineInstance; // size: 0x4, address: 0x803C4584
unsigned int gActiveHeap; // size: 0x4, address: 0x803C1074
// Range: 0x800588EC -> 0x800589E8
void * PKR_getmem(unsigned int id /* r27 */, int amount /* r28 */, int align /* r29 */, int isTemp /* r0 */, char * * memtru /* r30 */) {
    // Local variables
    void * memptr; // r31

    // References
    // -> static int g_memalloc_runtot;
    // -> static int g_memalloc_pair;
    // -> unsigned int gActiveHeap;
    // -> void * RwEngineInstance;
}

// Range: 0x800589E8 -> 0x80058A84
void PKR_relmem(unsigned int id /* r28 */, int blksize /* r29 */, void * memptr /* r30 */, int isTemp /* r31 */) {
    // References
    // -> void * RwEngineInstance;
    // -> static int g_memalloc_runfree;
    // -> static int g_memalloc_pair;
}

// Range: 0x80058A84 -> 0x80058AA4
static int PKR_push_memmark() {
    // Local variables
    int curlvl; // r0
}

// Range: 0x80058AA4 -> 0x80058ACC
static int PKR_pop_memmark() {
    // Local variables
    int curlvl; // r3
}


