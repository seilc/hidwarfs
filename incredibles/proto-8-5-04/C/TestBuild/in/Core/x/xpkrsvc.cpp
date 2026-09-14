/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
static class PKRReadFuncs g_pkr_read_funcmap_original; // size: 0x44, address: 0x508450
static class PKRReadFuncs g_pkr_read_funcmap; // size: 0x44, address: 0x6487F0
static class st_HIPLOADFUNCS * g_hiprf; // size: 0x4, address: 0x608A90
static class st_PACKER_READ_DATA g_readdatainst[20]; // size: 0xB360, address: 0x648840
static unsigned int g_loadlock; // size: 0x4, address: 0x608A94
static signed int pkr_sector_size; // size: 0x4, address: 0x608A98
static signed int g_packinit; // size: 0x4, address: 0x608A9C
static signed int g_memalloc_pair; // size: 0x4, address: 0x608AA0
static signed int g_memalloc_runtot; // size: 0x4, address: 0x608AA4
static signed int g_memalloc_runfree; // size: 0x4, address: 0x608AA8
static char * g_strz_layername[12]; // size: 0x30, address: 0x0
static class RwResEntry * g_RWarena_resEntry; // size: 0x4, address: 0x608AB4
static class RwResEntry * g_RWarena_resOwner; // size: 0x4, address: 0x608AB8
static signed int g_RWarena_bufsize; // size: 0x4, address: 0x0
class RwModuleInfo resourcesModule; // size: 0x8, address: 0x609258
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x6B2890
void PKR_special_loadbuf_killed(class RwResEntry *); // size: 0x0, address: 0x1A70D0
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
signed int OrdTest_R_AssetID(void *, void *); // size: 0x0, address: 0x1A8470
signed int OrdComp_R_Asset(void *, void *); // size: 0x0, address: 0x1A84B0
enum _tagGameVidMode gVidMode; // size: 0x4, address: 0x608730
// total size: 0x0
class st_HIPLOADDATA {};
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
enum en_PKR_LAYER_LOAD_DEST {
    PKR_LDDEST_SKIP = 0,
    PKR_LDDEST_KEEPSTATIC = 1,
    PKR_LDDEST_KEEPMALLOC = 2,
    PKR_LDDEST_RWHANDOFF = 3,
    PKR_LDDEST_NOMORE = 4,
    PKR_LDDEST_FORCE = 2147483647,
};
// total size: 0x2D0
class PKRWriteData {
    // Members
public:
    class PKRAssetType * types; // offset 0x0, size 0x4
    void * userdata; // offset 0x4, size 0x4
    signed int lockid; // offset 0x8, size 0x4
    unsigned int pkropt; // offset 0xC, size 0x4
    signed int cltver; // offset 0x10, size 0x4
    char packfile[256]; // offset 0x14, size 0x100
    signed int sectalign; // offset 0x114, size 0x4
    signed int dassalign; // offset 0x118, size 0x4
    class st_XORDEREDARRAY asslist; // offset 0x11C, size 0x10
    class st_XORDEREDARRAY laylist; // offset 0x12C, size 0x10
    signed int off_lg_asset; // offset 0x13C, size 0x4
    signed int off_lg_layer; // offset 0x140, size 0x4
    signed int off_lg_xform; // offset 0x144, size 0x4
    char gameName[32]; // offset 0x148, size 0x20
    char platform[32]; // offset 0x168, size 0x20
    char videoSystem[32]; // offset 0x188, size 0x20
    char countryCode[32]; // offset 0x1A8, size 0x20
    char hdrfile[256]; // offset 0x1C8, size 0x100
    signed int (* hdrfunc)(void *, unsigned int, char *, char *); // offset 0x2C8, size 0x4
    signed int (* generrf)(unsigned int, enum en_generr, char *, char *); // offset 0x2CC, size 0x4
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
// total size: 0x2C
class st_PACKER_LTOC_NODE {
    // Members
public:
    enum en_LAYER_TYPE laytyp; // offset 0x0, size 0x4
    class st_XORDEREDARRAY assref; // offset 0x4, size 0x10
    signed int flg_ldstat; // offset 0x14, size 0x4
    signed int danglecnt; // offset 0x18, size 0x4
    unsigned int chksum; // offset 0x1C, size 0x4
    signed int laysize; // offset 0x20, size 0x4
    char * laymem; // offset 0x24, size 0x4
    char * laytru; // offset 0x28, size 0x4
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
// total size: 0x10
class st_XORDEREDARRAY {
    // Members
public:
    void * * list; // offset 0x0, size 0x4
    signed int cnt; // offset 0x4, size 0x4
    signed int max; // offset 0x8, size 0x4
    signed int warnlvl; // offset 0xC, size 0x4
};
enum en_READ_ASYNC_STATUS {
    HIP_RDSTAT_NONE = -1,
    HIP_RDSTAT_INPROG = 0,
    HIP_RDSTAT_SUCCESS = 1,
    HIP_RDSTAT_FAILED = 2,
    HIP_RDSTAT_NOBYPASS = 3,
    HIP_RDSTAT_NOASYNC = 4,
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
// total size: 0x34
class st_HIPLOADFUNCS {
    // Members
public:
    class st_HIPLOADDATA * (* create)(char *, char *, signed int, signed int); // offset 0x0, size 0x4
    void (* destroy)(class st_HIPLOADDATA *); // offset 0x4, size 0x4
    unsigned int (* basesector)(class st_HIPLOADDATA *); // offset 0x8, size 0x4
    unsigned int (* enter)(class st_HIPLOADDATA *); // offset 0xC, size 0x4
    void (* exit)(class st_HIPLOADDATA *); // offset 0x10, size 0x4
    signed int (* readBytes)(class st_HIPLOADDATA *, char *, signed int); // offset 0x14, size 0x4
    signed int (* readShorts)(class st_HIPLOADDATA *, signed short *, signed int); // offset 0x18, size 0x4
    signed int (* readLongs)(class st_HIPLOADDATA *, signed int *, signed int); // offset 0x1C, size 0x4
    signed int (* readFloats)(class st_HIPLOADDATA *, float *, signed int); // offset 0x20, size 0x4
    signed int (* readString)(class st_HIPLOADDATA *, char *); // offset 0x24, size 0x4
    signed int (* setBypass)(class st_HIPLOADDATA *, signed int, signed int); // offset 0x28, size 0x4
    void (* setSpot)(class st_HIPLOADDATA *, signed int); // offset 0x2C, size 0x4
    enum en_READ_ASYNC_STATUS (* pollRead)(class st_HIPLOADDATA *); // offset 0x30, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x8
class RwModuleInfo {
    // Members
public:
    signed int globalsOffset; // offset 0x0, size 0x4
    signed int numInstances; // offset 0x4, size 0x4
};
enum _tagGameVidMode {
    eGameVidModeNTSC = 0,
    eGameVidModePAL = 1,
};
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7040 -> 0x001A70CC
*/
// Range: 0x1A7040 -> 0x1A70CC
static void * PKR_specialGet_loadbuf(class st_PACKER_READ_DATA * pr /* r18 */, signed int amount /* r17 */, signed int align /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A7040 -> 0x1A70CC
        void * da_mem; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A70D0 -> 0x001A70D8
*/
// Range: 0x1A70D0 -> 0x1A70D8
static void PKR_special_loadbuf_killed() {
    /* anonymous block */ {
        // Range: 0x1A70D0 -> 0x1A70D8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A70E0 -> 0x001A7194
*/
// Range: 0x1A70E0 -> 0x1A7194
static void PKR_relmem(unsigned int id /* r19 */, signed int blksize /* r18 */, void * memptr /* r17 */, signed int isTemp /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A70E0 -> 0x1A7194
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A71A0 -> 0x001A7290
*/
// Range: 0x1A71A0 -> 0x1A7290
static void * PKR_getmem(unsigned int id /* r20 */, signed int amount /* r19 */, signed int align /* r18 */, signed int isTemp /* r2 */, char * * memtru /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A71A0 -> 0x1A7290
        void * memptr; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7290 -> 0x001A75A8
*/
// Range: 0x1A7290 -> 0x1A75A8
static void PKR_bld_typecnt(class st_PACKER_READ_DATA * pr /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1A7290 -> 0x1A75A8
        class st_PACKER_LTOC_NODE * laynode; // r23
        class st_PACKER_ATOC_NODE * assnode; // r5
        signed int i; // r20
        signed int j; // r19
        signed int idx; // r18
        signed int typcnt[129]; // r29+0xA0
        class st_XORDEREDARRAY * tmplist; // r2
        unsigned int lasttype; // r17
        signed int lasttidx; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A75B0 -> 0x001A7628
*/
// Range: 0x1A75B0 -> 0x1A7628
static class PKRAssetType * PKR_type2typeref(unsigned int type /* r2 */, class PKRAssetType * typelist /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A75B0 -> 0x1A7628
        class PKRAssetType * da_type; // r16
        class PKRAssetType * tmptype; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7630 -> 0x001A76D4
*/
// Range: 0x1A7630 -> 0x1A76D4
static signed int LOD_r_STRM(class st_HIPLOADDATA * pkg /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A7630 -> 0x1A76D4
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A76E0 -> 0x001A7924
*/
// Range: 0x1A76E0 -> 0x1A7924
static signed int LOD_r_LHDR(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A76E0 -> 0x1A7924
        unsigned int cid; // r2
        signed int ival; // r29+0x6C
        enum en_LAYER_TYPE laytyp; // r2
        signed int refcnt; // r29+0x68
        signed int idx; // r2
        signed int i; // r20
        class st_PACKER_LTOC_NODE * laynode; // r2
        class st_PACKER_ATOC_NODE * assnode; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7930 -> 0x001A79F8
*/
// Range: 0x1A7930 -> 0x1A79F8
static signed int LOD_r_LTOC(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A7930 -> 0x1A79F8
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7A00 -> 0x001A7B00
*/
// Range: 0x1A7A00 -> 0x1A7B00
static signed int LOD_r_ADBG(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */, class st_PACKER_ATOC_NODE * assnode /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A7A00 -> 0x1A7B00
        signed int ival; // r29+0x14C
        char tmpbuf[256]; // r29+0x40
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7B00 -> 0x001A7D28
*/
// Range: 0x1A7B00 -> 0x1A7D28
static signed int LOD_r_AHDR(class st_HIPLOADDATA * pkg /* r19 */, class st_PACKER_READ_DATA * pr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1A7B00 -> 0x1A7D28
        unsigned int cid; // r2
        signed int ival; // r29+0x5C
        signed int isdup; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7D30 -> 0x001A7DF8
*/
// Range: 0x1A7D30 -> 0x1A7DF8
static signed int LOD_r_ATOC(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A7D30 -> 0x1A7DF8
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7E00 -> 0x001A7EC8
*/
// Range: 0x1A7E00 -> 0x1A7EC8
static signed int LOD_r_DICT(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A7E00 -> 0x1A7EC8
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A7ED0 -> 0x001A803C
*/
// Range: 0x1A7ED0 -> 0x1A803C
static signed int LOD_r_PLAT(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1A7ED0 -> 0x1A803C
        signed int result; // r16
        char platname[32]; // r29+0xA0
        char vidname[32]; // r29+0x80
        char langname[32]; // r29+0x60
        char titlename[32]; // r29+0x40
        signed int n; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8040 -> 0x001A8160
*/
// Range: 0x1A8040 -> 0x1A8160
static signed int ValidatePlatform(char * plat /* r18 */, char * vid /* r17 */, char * lang /* r2 */, char * title /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A8040 -> 0x1A8160
        char fullname[128]; // r29+0x40
        signed int rc; // r4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8160 -> 0x001A8214
*/
// Range: 0x1A8160 -> 0x1A8214
static signed int LOD_r_PVER(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A8160 -> 0x1A8214
        signed int ver; // r29+0x3C
        signed int amt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8220 -> 0x001A8470
*/
// Range: 0x1A8220 -> 0x1A8470
static signed int LOD_r_PACK(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A8220 -> 0x1A8470
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8470 -> 0x001A84A8
*/
// Range: 0x1A8470 -> 0x1A84A8
static signed int OrdTest_R_AssetID(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8470 -> 0x1A84A8
        signed int rc; // r2
        unsigned int key; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A84B0 -> 0x001A84EC
*/
// Range: 0x1A84B0 -> 0x1A84EC
static signed int OrdComp_R_Asset(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A84B0 -> 0x1A84EC
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A84F0 -> 0x001A86A0
*/
// Range: 0x1A84F0 -> 0x1A86A0
static signed int PKR_FRIEND_assetIsGameDup(unsigned int aid /* r17 */, class st_PACKER_READ_DATA * skippr /* r16 */, signed int oursize /* r23 */, unsigned int ourtype /* r22 */, unsigned int chksum /* r30 */) {
    /* anonymous block */ {
        // Range: 0x1A84F0 -> 0x1A86A0
        signed int is_dup; // r21
        class st_PACKER_ATOC_NODE * tmp_ass; // r20
        signed int i; // r19
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A86A0 -> 0x001A8728
*/
// Range: 0x1A86A0 -> 0x1A8728
static signed int PKR_PkgHasAsset(class st_PACKER_READ_DATA * pr /* r16 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A86A0 -> 0x1A8728
        signed int rc; // r2
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8730 -> 0x001A885C
*/
// Range: 0x1A8730 -> 0x1A885C
static signed int PKR_GetAssetInfoByType(class st_PACKER_READ_DATA * pr /* r19 */, unsigned int type /* r18 */, signed int idx /* r17 */, class PKRAssetTOCInfo * tocinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A8730 -> 0x1A885C
        class st_PACKER_ATOC_NODE * assnode; // r2
        class st_XORDEREDARRAY * typlist; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8860 -> 0x001A8924
*/
// Range: 0x1A8860 -> 0x1A8924
static signed int PKR_GetAssetInfo(class st_PACKER_READ_DATA * pr /* r18 */, unsigned int aid /* r17 */, class PKRAssetTOCInfo * tocinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A8860 -> 0x1A8924
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8930 -> 0x001A8938
*/
// Range: 0x1A8930 -> 0x1A8938
static unsigned int PKR_GetBaseSector(class st_PACKER_READ_DATA * pr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8930 -> 0x1A8938
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8940 -> 0x001A89A4
*/
// Range: 0x1A8940 -> 0x1A89A4
static char * PKR_AssetName(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8940 -> 0x1A89A4
        char * da_name; // r16
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A89B0 -> 0x001A89F0
*/
// Range: 0x1A89B0 -> 0x1A89F0
static void PKR_Disconnect(class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A89B0 -> 0x1A89F0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A89F0 -> 0x001A89F8
*/
// Range: 0x1A89F0 -> 0x1A89F8
static unsigned int PKR_getPackTimestamp(class st_PACKER_READ_DATA * pr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A89F0 -> 0x1A89F8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8A00 -> 0x001A8A70
*/
// Range: 0x1A8A00 -> 0x1A8A70
static signed int PKR_IsAssetReady(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8A00 -> 0x1A8A70
        signed int is_ok; // r16
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8A70 -> 0x001A8B10
*/
// Range: 0x1A8A70 -> 0x1A8B10
static void * PKR_AssetByType(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int type /* r2 */, signed int idx /* r2 */, unsigned int * size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8A70 -> 0x1A8B10
        class st_XORDEREDARRAY * typlist; // r2
        class st_PACKER_ATOC_NODE * assnode; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8B10 -> 0x001A8B78
*/
// Range: 0x1A8B10 -> 0x1A8B78
static signed int PKR_AssetCount(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int type /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8B10 -> 0x1A8B78
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8B80 -> 0x001A8BF4
*/
// Range: 0x1A8B80 -> 0x1A8BF4
static unsigned int PKR_GetAssetSize(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8B80 -> 0x1A8BF4
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8C00 -> 0x001A8C08
*/
// Range: 0x1A8C00 -> 0x1A8C08
static void * PKR_LoadAsset(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int aid /* r2 */, signed int * assetsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8C00 -> 0x1A8C08
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8C10 -> 0x001A8C18
*/
// Range: 0x1A8C10 -> 0x1A8C18
static signed int PKR_LoadLayer() {
    /* anonymous block */ {
        // Range: 0x1A8C10 -> 0x1A8C18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8C20 -> 0x001A8CD0
*/
// Range: 0x1A8C20 -> 0x1A8CD0
static void * PKR_FindAsset(class st_PACKER_READ_DATA * pr /* r18 */, unsigned int aid /* r2 */, signed int * assetsize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A8C20 -> 0x1A8CD0
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8CD0 -> 0x001A8DE8
*/
// Range: 0x1A8CD0 -> 0x1A8DE8
static void PKR_xform_asset(class st_PACKER_ATOC_NODE * assnode /* r17 */, signed int dumpable_layer /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A8CD0 -> 0x1A8DE8
        char * xformloc; // r2
        class PKRAssetType * atype; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8DF0 -> 0x001A8F10
*/
// Range: 0x1A8DF0 -> 0x1A8F10
static void PKR_xformLayerAssets(class st_PACKER_LTOC_NODE * laynode /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1A8DF0 -> 0x1A8F10
        signed int i; // r19
        signed int will_be_dumped; // r18
        class st_PACKER_ATOC_NODE * tmpass; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8F10 -> 0x001A8FF0
*/
// Range: 0x1A8F10 -> 0x1A8FF0
static void PKR_updateLayerAssets(class st_PACKER_LTOC_NODE * laynode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8F10 -> 0x1A8FF0
        signed int i; // r8
        class st_PACKER_ATOC_NODE * tmpass; // r7
        signed int lay_hip_pos; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A8FF0 -> 0x001A9108
*/
// Range: 0x1A8FF0 -> 0x1A9108
static signed int PKR_findNextLayerToLoad(class st_PACKER_READ_DATA * * work_on_pkg /* r2 */, class st_PACKER_LTOC_NODE * * next_layer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1A8FF0 -> 0x1A9108
        class st_PACKER_READ_DATA * tmppr; // r2
        class st_PACKER_LTOC_NODE * tmplay; // r2
        signed int i; // r10
        signed int j; // r12
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9110 -> 0x001A9218
*/
// Range: 0x1A9110 -> 0x1A9218
static void PKR_LayerMemRelease(class st_PACKER_LTOC_NODE * layer /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1A9110 -> 0x1A9218
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9220 -> 0x001A9340
*/
// Range: 0x1A9220 -> 0x1A9340
static char * PKR_LayerMemReserve(class st_PACKER_READ_DATA * pr /* r2 */, class st_PACKER_LTOC_NODE * layer /* r6 */) {
    /* anonymous block */ {
        // Range: 0x1A9220 -> 0x1A9340
        char * mem; // r5
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9340 -> 0x001A976C
*/
// Range: 0x1A9340 -> 0x1A976C
static signed int PKR_LoadStep_Async() {
    /* anonymous block */ {
        // Range: 0x1A9340 -> 0x1A976C
        signed int moretodo; // r2
        signed int rc; // r2
        enum en_READ_ASYNC_STATUS readstat; // r2
        class st_PACKER_ATOC_NODE * tmpass; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
        class st_PACKER_READ_DATA * curpr; // @ 0x00608AAC
        class st_PACKER_LTOC_NODE * asynlay; // @ 0x00608AB0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9770 -> 0x001A991C
*/
// Range: 0x1A9770 -> 0x1A991C
static signed int PKR_parse_TOC(class st_HIPLOADDATA * pkg /* r19 */, class st_PACKER_READ_DATA * pr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1A9770 -> 0x1A991C
        signed int is_ok; // r17
        unsigned int cid; // r2
        signed int done; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9920 -> 0x001A9AB0
*/
// Range: 0x1A9920 -> 0x1A9AB0
static signed int PKR_SetActive(class st_PACKER_READ_DATA * pr /* r21 */, enum en_LAYER_TYPE layer /* r30 */) {
    /* anonymous block */ {
        // Range: 0x1A9920 -> 0x1A9AB0
        signed int result; // r23
        signed int rc; // r2
        signed int i; // r20
        signed int j; // r19
        class st_PACKER_ATOC_NODE * assnode; // r2
        class st_PACKER_LTOC_NODE * laynode; // r22
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9AB0 -> 0x001A9D44
*/
// Range: 0x1A9AB0 -> 0x1A9D44
static void PKR_ReadDone(class st_PACKER_READ_DATA * pr /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1A9AB0 -> 0x1A9D44
        signed int i; // r19
        signed int j; // r18
        signed int lockid; // r2
        class st_PACKER_ATOC_NODE * assnode; // r2
        class st_PACKER_LTOC_NODE * laynode; // r21
        class st_XORDEREDARRAY * tmplist; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9D50 -> 0x001A9F74
*/
// Range: 0x1A9D50 -> 0x1A9F74
static class st_PACKER_READ_DATA * PKR_ReadInit(void * userdata /* r22 */, char * pkgfile /* r20 */, unsigned int opts /* r23 */, signed int * cltver /* r19 */, class PKRAssetType * typelist /* r30 */, signed int fileflags /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1A9D50 -> 0x1A9F74
        class st_PACKER_READ_DATA * pr; // r17
        signed int i; // r6
        signed int uselock; // r21
        char * tocbuf_RAW; // r29+0xAC
        char * tocbuf_aligned; // r16
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9F80 -> 0x001A9F88
*/
// Range: 0x1A9F80 -> 0x1A9F88
signed int PKRLoadStep() {
    /* anonymous block */ {
        // Range: 0x1A9F80 -> 0x1A9F88
        signed int more_todo; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9F90 -> 0x001A9FA0
*/
// Range: 0x1A9F90 -> 0x1A9FA0
signed int PKRShutdown() {
    /* anonymous block */ {
        // Range: 0x1A9F90 -> 0x1A9FA0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001A9FA0 -> 0x001AA030
*/
// Range: 0x1A9FA0 -> 0x1AA030
signed int PKRStartup() {
    /* anonymous block */ {
        // Range: 0x1A9FA0 -> 0x1AA030
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001AA030 -> 0x001AA050
*/
// Range: 0x1AA030 -> 0x1AA050
class PKRReadFuncs * PKRGetReadFuncs(signed int apiver /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1AA030 -> 0x1AA050
    }
}


