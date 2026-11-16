/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class st_PACKER_READ_FUNCS g_pkr_read_funcmap_original; // size: 0x44, address: 0x4180C0
static class st_PACKER_READ_FUNCS g_pkr_read_funcmap; // size: 0x44, address: 0x597C40
static class st_HIPLOADFUNCS * g_hiprf; // size: 0x4, address: 0x50EF84
static class st_PACKER_READ_DATA g_readdatainst[16]; // size: 0x8F80, address: 0x597C90
static unsigned int g_loadlock; // size: 0x4, address: 0x50EF88
static signed int pkr_sector_size; // size: 0x4, address: 0x50EF8C
static signed int g_packinit; // size: 0x4, address: 0x50EF90
static signed int g_memalloc_pair; // size: 0x4, address: 0x50EF94
static signed int g_memalloc_runtot; // size: 0x4, address: 0x50EF98
static signed int g_memalloc_runfree; // size: 0x4, address: 0x50EF9C
static char * g_strz_layername[11]; // size: 0x2C, address: 0x0
static class RwResEntry * g_RWarena_resEntry; // size: 0x4, address: 0x50EFA8
static class RwResEntry * g_RWarena_resOwner; // size: 0x4, address: 0x50EFAC
static signed int g_RWarena_bufsize; // size: 0x4, address: 0x0
class RwModuleInfo resourcesModule; // size: 0x8, address: 0x50F148
unsigned int ourGlobals[4096]; // size: 0x4000, address: 0x5BAE28
void PKR_special_loadbuf_killed(class RwResEntry *); // size: 0x0, address: 0x1F6870
unsigned int gActiveHeap; // size: 0x4, address: 0x50EF44
signed int OrdTest_R_AssetID(void *, void *); // size: 0x0, address: 0x1F7DF0
signed int OrdComp_R_Asset(void *, void *); // size: 0x0, address: 0x1F7E30
// total size: 0x8F8
class st_PACKER_READ_DATA {
    // Members
public:
    class st_PACKER_ASSETTYPE * types; // offset 0x0, size 0x4
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
// total size: 0x0
class st_HIPLOADDATA {};
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
    class st_PACKER_ASSETTYPE * typeref; // offset 0x34, size 0x4
    class st_HIPLOADDATA * ownpkg; // offset 0x38, size 0x4
    class st_PACKER_READ_DATA * ownpr; // offset 0x3C, size 0x4
    char basename[32]; // offset 0x40, size 0x20
};
// total size: 0x28
class st_PACKER_ASSETTYPE {
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
// total size: 0x250
class st_PACKER_WRITE_DATA {
    // Members
public:
    class st_PACKER_ASSETTYPE * types; // offset 0x0, size 0x4
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
    char hdrfile[256]; // offset 0x148, size 0x100
    signed int (* hdrfunc)(void *, unsigned int, char *, char *); // offset 0x248, size 0x4
    signed int (* generrf)(unsigned int, enum en_GENERATE_ERROR, char *, char *); // offset 0x24C, size 0x4
};
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x44
class st_PACKER_READ_FUNCS {
    // Members
public:
    unsigned int api_ver; // offset 0x0, size 0x4
    class st_PACKER_READ_DATA * (* Init)(void *, char *, unsigned int, signed int *, class st_PACKER_ASSETTYPE *); // offset 0x4, size 0x4
    void (* Done)(class st_PACKER_READ_DATA *); // offset 0x8, size 0x4
    signed int (* LoadLayer)(class st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0xC, size 0x4
    unsigned int (* GetAssetSize)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x10, size 0x4
    void * (* LoadAsset)(class st_PACKER_READ_DATA *, unsigned int, char *, void *); // offset 0x14, size 0x4
    void * (* AssetByType)(class st_PACKER_READ_DATA *, unsigned int, signed int, unsigned int *); // offset 0x18, size 0x4
    signed int (* AssetCount)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x1C, size 0x4
    signed int (* IsAssetReady)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x20, size 0x4
    signed int (* SetActive)(class st_PACKER_READ_DATA *, enum en_LAYER_TYPE); // offset 0x24, size 0x4
    char * (* AssetName)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x28, size 0x4
    unsigned int (* GetBaseSector)(class st_PACKER_READ_DATA *); // offset 0x2C, size 0x4
    signed int (* GetAssetInfo)(class st_PACKER_READ_DATA *, unsigned int, class st_PKR_ASSET_TOCINFO *); // offset 0x30, size 0x4
    signed int (* GetAssetInfoByType)(class st_PACKER_READ_DATA *, unsigned int, signed int, class st_PKR_ASSET_TOCINFO *); // offset 0x34, size 0x4
    signed int (* PkgHasAsset)(class st_PACKER_READ_DATA *, unsigned int); // offset 0x38, size 0x4
    unsigned int (* PkgTimeStamp)(class st_PACKER_READ_DATA *); // offset 0x3C, size 0x4
    void (* PkgDisconnect)(class st_PACKER_READ_DATA *); // offset 0x40, size 0x4
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
class st_PKR_ASSET_TOCINFO {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    class st_PACKER_ASSETTYPE * typeref; // offset 0x4, size 0x4
    unsigned int sector; // offset 0x8, size 0x4
    unsigned int plus_offset; // offset 0xC, size 0x4
    unsigned int size; // offset 0x10, size 0x4
    void * mempos; // offset 0x14, size 0x4
};
enum en_LAYER_TYPE {
    PKR_LTYPE_ALL = -1,
    PKR_LTYPE_DEFAULT = 0,
    PKR_LTYPE_TEXTURE = 1,
    PKR_LTYPE_BSP = 2,
    PKR_LTYPE_MODEL = 3,
    PKR_LTYPE_ANIMATION = 4,
    PKR_LTYPE_VRAM = 5,
    PKR_LTYPE_SRAM = 6,
    PKR_LTYPE_SNDTOC = 7,
    PKR_LTYPE_CUTSCENE = 8,
    PKR_LTYPE_CUTSCENETOC = 9,
    PKR_LTYPE_JSPINFO = 10,
    PKR_LTYPE_NOMORE = 11,
};
enum en_READ_ASYNC_STATUS {
    HIP_RDSTAT_NONE = -1,
    HIP_RDSTAT_INPROG = 0,
    HIP_RDSTAT_SUCCESS = 1,
    HIP_RDSTAT_FAILED = 2,
    HIP_RDSTAT_NOBYPASS = 3,
    HIP_RDSTAT_NOASYNC = 4,
};
// total size: 0x34
class st_HIPLOADFUNCS {
    // Members
public:
    class st_HIPLOADDATA * (* create)(char *, char *, signed int); // offset 0x0, size 0x4
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
enum en_GENERATE_ERROR {
    PKR_GENERR_NONE = 0,
    PKR_GENERR_PACKOPEN = 1,
    PKR_GENERR_ASSETOPEN = 2,
    PKR_GENERR_EMPTYASSET = 3,
    PKR_GENERR_WRITEFAIL = 4,
    PKR_GENERR_VIRTUAL = 5,
    PKR_GENERR_DUPEASSET = 6,
    PKR_GENERR_UNKNOWN = 7,
};
enum en_PKR_LAYER_LOAD_DEST {
    PKR_LDDEST_SKIP = 0,
    PKR_LDDEST_KEEPSTATIC = 1,
    PKR_LDDEST_KEEPMALLOC = 2,
    PKR_LDDEST_RWHANDOFF = 3,
    PKR_LDDEST_NOMORE = 4,
    PKR_LDDEST_FORCE = 2147483647,
};
// total size: 0x8
class RwModuleInfo {
    // Members
public:
    signed int globalsOffset; // offset 0x0, size 0x4
    signed int numInstances; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F67D0 -> 0x001F6870
*/
// Range: 0x1F67D0 -> 0x1F6870
static void * PKR_specialGet_loadbuf(class st_PACKER_READ_DATA * pr /* r18 */, signed int amount /* r16 */, signed int align /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1F67D0 -> 0x1F6870
        void * da_mem; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6870 -> 0x001F6878
*/
// Range: 0x1F6870 -> 0x1F6878
static void PKR_special_loadbuf_killed() {
    /* anonymous block */ {
        // Range: 0x1F6870 -> 0x1F6878
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6880 -> 0x001F6934
*/
// Range: 0x1F6880 -> 0x1F6934
static void PKR_relmem(unsigned int id /* r19 */, signed int blksize /* r18 */, void * memptr /* r17 */, signed int isTemp /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F6880 -> 0x1F6934
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6940 -> 0x001F6A30
*/
// Range: 0x1F6940 -> 0x1F6A30
static void * PKR_getmem(unsigned int id /* r18 */, signed int amount /* r17 */, signed int align /* r20 */, signed int isTemp /* r2 */, char * * memtru /* r19 */) {
    /* anonymous block */ {
        // Range: 0x1F6940 -> 0x1F6A30
        void * memptr; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6A30 -> 0x001F6D40
*/
// Range: 0x1F6A30 -> 0x1F6D40
static void PKR_bld_typecnt(class st_PACKER_READ_DATA * pr /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1F6A30 -> 0x1F6D40
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
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6D40 -> 0x001F6DAC
*/
// Range: 0x1F6D40 -> 0x1F6DAC
static class st_PACKER_ASSETTYPE * PKR_type2typeref(unsigned int type /* r2 */, class st_PACKER_ASSETTYPE * typelist /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F6D40 -> 0x1F6DAC
        class st_PACKER_ASSETTYPE * da_type; // r16
        class st_PACKER_ASSETTYPE * tmptype; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6DB0 -> 0x001F6E5C
*/
// Range: 0x1F6DB0 -> 0x1F6E5C
static signed int LOD_r_STRM(class st_HIPLOADDATA * pkg /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F6DB0 -> 0x1F6E5C
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F6E60 -> 0x001F70AC
*/
// Range: 0x1F6E60 -> 0x1F70AC
static signed int LOD_r_LHDR(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F6E60 -> 0x1F70AC
        unsigned int cid; // r2
        signed int ival; // r29+0x6C
        enum en_LAYER_TYPE laytyp; // r20
        signed int refcnt; // r29+0x68
        signed int idx; // r2
        signed int i; // r20
        class st_PACKER_LTOC_NODE * laynode; // r19
        class st_PACKER_ATOC_NODE * assnode; // r18
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F70B0 -> 0x001F7180
*/
// Range: 0x1F70B0 -> 0x1F7180
static signed int LOD_r_LTOC(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F70B0 -> 0x1F7180
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7180 -> 0x001F7274
*/
// Range: 0x1F7180 -> 0x1F7274
static signed int LOD_r_ADBG(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */, class st_PACKER_ATOC_NODE * assnode /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F7180 -> 0x1F7274
        signed int ival; // r29+0x14C
        char tmpbuf[256]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7280 -> 0x001F74A0
*/
// Range: 0x1F7280 -> 0x1F74A0
static signed int LOD_r_AHDR(class st_HIPLOADDATA * pkg /* r19 */, class st_PACKER_READ_DATA * pr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1F7280 -> 0x1F74A0
        unsigned int cid; // r2
        signed int ival; // r29+0x5C
        signed int isdup; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F74A0 -> 0x001F7570
*/
// Range: 0x1F74A0 -> 0x1F7570
static signed int LOD_r_ATOC(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F74A0 -> 0x1F7570
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7570 -> 0x001F7640
*/
// Range: 0x1F7570 -> 0x1F7640
static signed int LOD_r_DICT(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F7570 -> 0x1F7640
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7640 -> 0x001F77BC
*/
// Range: 0x1F7640 -> 0x1F77BC
static signed int LOD_r_PLAT(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1F7640 -> 0x1F77BC
        signed int result; // r16
        signed int plattag; // r29+0xCC
        char platname[32]; // r29+0xA0
        char vidname[32]; // r29+0x80
        char langname[32]; // r29+0x60
        char titlename[32]; // r29+0x40
        signed int n; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F77C0 -> 0x001F7AC4
*/
// Range: 0x1F77C0 -> 0x1F7AC4
static signed int ValidatePlatform(char * plat /* r19 */, char * vid /* r16 */, char * lang /* r18 */, char * title /* r17 */) {
    /* anonymous block */ {
        // Range: 0x1F77C0 -> 0x1F7AC4
        char fullname[128]; // r29+0x50
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7AD0 -> 0x001F7B88
*/
// Range: 0x1F7AD0 -> 0x1F7B88
static signed int LOD_r_PVER(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F7AD0 -> 0x1F7B88
        signed int ver; // r29+0x3C
        signed int amt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7B90 -> 0x001F7DE8
*/
// Range: 0x1F7B90 -> 0x1F7DE8
static signed int LOD_r_PACK(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F7B90 -> 0x1F7DE8
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7DF0 -> 0x001F7E30
*/
// Range: 0x1F7DF0 -> 0x1F7E30
static signed int OrdTest_R_AssetID(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F7DF0 -> 0x1F7E30
        signed int rc; // r2
        unsigned int key; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7E30 -> 0x001F7E78
*/
// Range: 0x1F7E30 -> 0x1F7E78
static signed int OrdComp_R_Asset(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F7E30 -> 0x1F7E78
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F7E80 -> 0x001F8048
*/
// Range: 0x1F7E80 -> 0x1F8048
static signed int PKR_FRIEND_assetIsGameDup(unsigned int aid /* r18 */, class st_PACKER_READ_DATA * skippr /* r17 */, signed int oursize /* r23 */, unsigned int ourtype /* r16 */, unsigned int chksum /* r30 */) {
    /* anonymous block */ {
        // Range: 0x1F7E80 -> 0x1F8048
        signed int is_dup; // r22
        class st_PACKER_ATOC_NODE * tmp_ass; // r21
        signed int i; // r20
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8050 -> 0x001F80D8
*/
// Range: 0x1F8050 -> 0x1F80D8
static signed int PKR_PkgHasAsset(class st_PACKER_READ_DATA * pr /* r16 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F8050 -> 0x1F80D8
        signed int rc; // r2
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F80E0 -> 0x001F822C
*/
// Range: 0x1F80E0 -> 0x1F822C
static signed int PKR_GetAssetInfoByType(class st_PACKER_READ_DATA * pr /* r19 */, unsigned int type /* r18 */, signed int idx /* r17 */, class st_PKR_ASSET_TOCINFO * tocinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F80E0 -> 0x1F822C
        class st_PACKER_ATOC_NODE * assnode; // r6
        class st_XORDEREDARRAY * typlist; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8230 -> 0x001F8308
*/
// Range: 0x1F8230 -> 0x1F8308
static signed int PKR_GetAssetInfo(class st_PACKER_READ_DATA * pr /* r18 */, unsigned int aid /* r17 */, class st_PKR_ASSET_TOCINFO * tocinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F8230 -> 0x1F8308
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r6
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8310 -> 0x001F8318
*/
// Range: 0x1F8310 -> 0x1F8318
static unsigned int PKR_GetBaseSector(class st_PACKER_READ_DATA * pr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F8310 -> 0x1F8318
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8320 -> 0x001F838C
*/
// Range: 0x1F8320 -> 0x1F838C
static char * PKR_AssetName(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F8320 -> 0x1F838C
        char * da_name; // r16
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8390 -> 0x001F8398
*/
// Range: 0x1F8390 -> 0x1F8398
unsigned int PKRAssetIDFromInst(void * asset_inst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F8390 -> 0x1F8398
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F83A0 -> 0x001F83E0
*/
// Range: 0x1F83A0 -> 0x1F83E0
static void PKR_Disconnect(class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F83A0 -> 0x1F83E0
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F83E0 -> 0x001F83E8
*/
// Range: 0x1F83E0 -> 0x1F83E8
static unsigned int PKR_getPackTimestamp(class st_PACKER_READ_DATA * pr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F83E0 -> 0x1F83E8
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F83F0 -> 0x001F8468
*/
// Range: 0x1F83F0 -> 0x1F8468
static signed int PKR_IsAssetReady(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F83F0 -> 0x1F8468
        signed int is_ok; // r16
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8470 -> 0x001F8530
*/
// Range: 0x1F8470 -> 0x1F8530
static void * PKR_AssetByType(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int type /* r2 */, signed int idx /* r2 */, unsigned int * size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F8470 -> 0x1F8530
        class st_XORDEREDARRAY * typlist; // r4
        class st_PACKER_ATOC_NODE * assnode; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8530 -> 0x001F8598
*/
// Range: 0x1F8530 -> 0x1F8598
static signed int PKR_AssetCount(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int type /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F8530 -> 0x1F8598
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F85A0 -> 0x001F8624
*/
// Range: 0x1F85A0 -> 0x1F8624
static unsigned int PKR_GetAssetSize(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F85A0 -> 0x1F8624
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8630 -> 0x001F8638
*/
// Range: 0x1F8630 -> 0x1F8638
static void * PKR_LoadAsset(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F8630 -> 0x1F8638
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8640 -> 0x001F8648
*/
// Range: 0x1F8640 -> 0x1F8648
static signed int PKR_LoadLayer() {
    /* anonymous block */ {
        // Range: 0x1F8640 -> 0x1F8648
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8650 -> 0x001F86BC
*/
// Range: 0x1F8650 -> 0x1F86BC
static void * PKR_FindAsset(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F8650 -> 0x1F86BC
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F86C0 -> 0x001F87E8
*/
// Range: 0x1F86C0 -> 0x1F87E8
static void PKR_xform_asset(class st_PACKER_ATOC_NODE * assnode /* r17 */, signed int dumpable_layer /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F86C0 -> 0x1F87E8
        char * xformloc; // r2
        class st_PACKER_ASSETTYPE * atype; // r18
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F87F0 -> 0x001F8908
*/
// Range: 0x1F87F0 -> 0x1F8908
static void PKR_xformLayerAssets(class st_PACKER_LTOC_NODE * laynode /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1F87F0 -> 0x1F8908
        signed int i; // r19
        signed int will_be_dumped; // r18
        class st_PACKER_ATOC_NODE * tmpass; // r17
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8910 -> 0x001F89F8
*/
// Range: 0x1F8910 -> 0x1F89F8
static void PKR_updateLayerAssets(class st_PACKER_LTOC_NODE * laynode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F8910 -> 0x1F89F8
        signed int i; // r8
        class st_PACKER_ATOC_NODE * tmpass; // r7
        signed int lay_hip_pos; // r12
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8A00 -> 0x001F8B10
*/
// Range: 0x1F8A00 -> 0x1F8B10
static signed int PKR_findNextLayerToLoad(class st_PACKER_READ_DATA * * work_on_pkg /* r2 */, class st_PACKER_LTOC_NODE * * next_layer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F8A00 -> 0x1F8B10
        class st_PACKER_READ_DATA * tmppr; // r10
        class st_PACKER_LTOC_NODE * tmplay; // r9
        signed int i; // r8
        signed int j; // r11
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8B10 -> 0x001F8C30
*/
// Range: 0x1F8B10 -> 0x1F8C30
static void PKR_LayerMemRelease(class st_PACKER_LTOC_NODE * layer /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F8B10 -> 0x1F8C30
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r4
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8C30 -> 0x001F8D54
*/
// Range: 0x1F8C30 -> 0x1F8D54
static char * PKR_LayerMemReserve(class st_PACKER_READ_DATA * pr /* r2 */, class st_PACKER_LTOC_NODE * layer /* r6 */) {
    /* anonymous block */ {
        // Range: 0x1F8C30 -> 0x1F8D54
        char * mem; // r5
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r3
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F8D60 -> 0x001F9198
*/
// Range: 0x1F8D60 -> 0x1F9198
static signed int PKR_LoadStep_Async() {
    /* anonymous block */ {
        // Range: 0x1F8D60 -> 0x1F9198
        signed int moretodo; // r2
        signed int rc; // r2
        enum en_READ_ASYNC_STATUS readstat; // r2
        class st_PACKER_ATOC_NODE * tmpass; // r16
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r4
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r3
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r4
        class st_PACKER_READ_DATA * curpr; // @ 0x0050EFA0
        class st_PACKER_LTOC_NODE * asynlay; // @ 0x0050EFA4
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F91A0 -> 0x001F9348
*/
// Range: 0x1F91A0 -> 0x1F9348
static signed int PKR_parse_TOC(class st_HIPLOADDATA * pkg /* r19 */, class st_PACKER_READ_DATA * pr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x1F91A0 -> 0x1F9348
        signed int is_ok; // r17
        unsigned int cid; // r2
        signed int done; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9350 -> 0x001F94C4
*/
// Range: 0x1F9350 -> 0x1F94C4
static signed int PKR_SetActive(class st_PACKER_READ_DATA * pr /* r22 */, enum en_LAYER_TYPE layer /* r21 */) {
    /* anonymous block */ {
        // Range: 0x1F9350 -> 0x1F94C4
        signed int result; // r23
        signed int rc; // r2
        signed int i; // r20
        signed int j; // r19
        class st_PACKER_ATOC_NODE * assnode; // r18
        class st_PACKER_LTOC_NODE * laynode; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F94D0 -> 0x001F9754
*/
// Range: 0x1F94D0 -> 0x1F9754
static void PKR_ReadDone(class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x1F94D0 -> 0x1F9754
        signed int i; // r21
        signed int j; // r20
        signed int lockid; // r17
        class st_PACKER_ATOC_NODE * assnode; // r5
        class st_PACKER_LTOC_NODE * laynode; // r19
        class st_XORDEREDARRAY * tmplist; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9760 -> 0x001F9980
*/
// Range: 0x1F9760 -> 0x1F9980
static class st_PACKER_READ_DATA * PKR_ReadInit(void * userdata /* r21 */, char * pkgfile /* r20 */, unsigned int opts /* r22 */, signed int * cltver /* r19 */, class st_PACKER_ASSETTYPE * typelist /* r23 */) {
    /* anonymous block */ {
        // Range: 0x1F9760 -> 0x1F9980
        class st_PACKER_READ_DATA * pr; // r18
        signed int i; // r6
        signed int uselock; // r17
        char * tocbuf_RAW; // r29+0x9C
        char * tocbuf_aligned; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9980 -> 0x001F9988
*/
// Range: 0x1F9980 -> 0x1F9988
signed int PKRLoadStep() {
    /* anonymous block */ {
        // Range: 0x1F9980 -> 0x1F9988
        signed int more_todo; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9990 -> 0x001F99A4
*/
// Range: 0x1F9990 -> 0x1F99A4
signed int PKRShutdown() {
    /* anonymous block */ {
        // Range: 0x1F9990 -> 0x1F99A4
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F99B0 -> 0x001F9AF8
*/
// Range: 0x1F99B0 -> 0x1F9AF8
signed int PKRStartup() {
    /* anonymous block */ {
        // Range: 0x1F99B0 -> 0x1F9AF8
    }
}


/*
    Compile unit: C:\SB\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001F9B00 -> 0x001F9B38
*/
// Range: 0x1F9B00 -> 0x1F9B38
class st_PACKER_READ_FUNCS * PKRGetReadFuncs(signed int apiver /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1F9B00 -> 0x1F9B38
    }
}


