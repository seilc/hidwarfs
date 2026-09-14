/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class st_PACKER_READ_FUNCS g_pkr_read_funcmap; // size: 0x40, address: 0x28A660
static class st_HIPLOADFUNCS * g_hiprf; // size: 0x4, address: 0x357C54
static class st_PACKER_READ_DATA g_readdatainst[8]; // size: 0x47C0, address: 0x28A6A0
static unsigned int g_loadlock; // size: 0x4, address: 0x357C58
static signed int g_packinit; // size: 0x4, address: 0x357C5C
static signed int g_memalloc_pair; // size: 0x4, address: 0x0
static signed int g_memalloc_runtot; // size: 0x4, address: 0x0
static class RwResEntry * g_RWarena_resEntry; // size: 0x4, address: 0x357C70
static class RwResEntry * g_RWarena_resOwner; // size: 0x4, address: 0x357C74
static signed int g_RWarena_bufsize; // size: 0x4, address: 0x0
void PKR_special_loadbuf_killed(class RwResEntry *); // size: 0x0, address: 0x11D8D0
unsigned int gActiveHeap; // size: 0x4, address: 0x357CAC
signed int OrdTest_R_AssetID(void *, void *); // size: 0x0, address: 0x11E790
signed int OrdTest_R_Asset(void *, void *); // size: 0x0, address: 0x11E7C0
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
    char name[32]; // offset 0x40, size 0x20
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
    PKR_LTYPE_NOMORE = 10,
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
// total size: 0x28
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
// total size: 0x14
class st_PKR_ASSET_TOCINFO {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    unsigned int sector; // offset 0x4, size 0x4
    unsigned int plus_offset; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    void * mempos; // offset 0x10, size 0x4
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
// total size: 0x8
class RwLLLink {
    // Members
public:
    class RwLLLink * next; // offset 0x0, size 0x4
    class RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x40
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
};
enum en_READ_ASYNC_STATUS {
    HIP_RDSTAT_NONE = -1,
    HIP_RDSTAT_INPROG = 0,
    HIP_RDSTAT_SUCCESS = 1,
    HIP_RDSTAT_FAILED = 2,
    HIP_RDSTAT_NOBYPASS = 3,
    HIP_RDSTAT_NOASYNC = 4,
};

/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011D8D0 -> 0x0011D8D8
*/
// Range: 0x11D8D0 -> 0x11D8D8
static void PKR_special_loadbuf_killed() {
    /* anonymous block */ {
        // Range: 0x11D8D0 -> 0x11D8D8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011D8E0 -> 0x0011D908
*/
// Range: 0x11D8E0 -> 0x11D908
static void PKR_relmem(void * memptr /* r2 */, signed int isTemp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11D8E0 -> 0x11D908
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011D910 -> 0x0011D98C
*/
// Range: 0x11D910 -> 0x11D98C
static void * PKR_getmem(signed int amount /* r17 */, signed int isTemp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11D910 -> 0x11D98C
        void * memptr; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011D990 -> 0x0011DC84
*/
// Range: 0x11D990 -> 0x11DC84
static void PKR_bld_typecnt(class st_PACKER_READ_DATA * pr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x11D990 -> 0x11DC84
        signed int lasttidx; // r2
        unsigned int lasttype; // r2
        class st_XORDEREDARRAY * tmplist; // r2
        signed int typcnt[129]; // r29+0x90
        signed int idx; // r2
        signed int j; // r5
        signed int i; // r4
        class st_PACKER_ATOC_NODE * assnode; // r11
        class st_PACKER_LTOC_NODE * laynode; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011DC90 -> 0x0011DCC8
*/
// Range: 0x11DC90 -> 0x11DCC8
static class st_PACKER_ASSETTYPE * PKR_type2typeref(unsigned int type /* r2 */, class st_PACKER_ASSETTYPE * typelist /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11DC90 -> 0x11DCC8
        class st_PACKER_ASSETTYPE * tmptype; // r2
        class st_PACKER_ASSETTYPE * da_type; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011DCD0 -> 0x0011DF08
*/
// Range: 0x11DCD0 -> 0x11DF08
static signed int LOD_r_LHDR(class st_HIPLOADDATA * pkg /* r19 */, class st_PACKER_READ_DATA * pr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x11DCD0 -> 0x11DF08
        class st_PACKER_ATOC_NODE * assnode; // r21
        signed int i; // r20
        signed int idx; // r2
        signed int refcnt; // r29+0x78
        enum en_LAYER_TYPE laytyp; // r20
        signed int ival; // r29+0x74
        unsigned int cid; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011DF10 -> 0x0011E01C
*/
// Range: 0x11DF10 -> 0x11E01C
static signed int LOD_r_ADBG(class st_HIPLOADDATA * pkg /* r19 */, class st_PACKER_READ_DATA * pr /* r18 */, class st_PACKER_ATOC_NODE * assnode /* r17 */) {
    /* anonymous block */ {
        // Range: 0x11DF10 -> 0x11E01C
        char tmpbuf[256]; // r29+0x50
        signed int ival; // r29+0x15C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011E020 -> 0x0011E248
*/
// Range: 0x11E020 -> 0x11E248
static signed int LOD_r_AHDR(class st_HIPLOADDATA * pkg /* r20 */, class st_PACKER_READ_DATA * pr /* r19 */) {
    /* anonymous block */ {
        // Range: 0x11E020 -> 0x11E248
        signed int isdup; // r2
        signed int ival; // r29+0x6C
        unsigned int cid; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011E250 -> 0x0011E324
*/
// Range: 0x11E250 -> 0x11E324
static signed int LOD_r_ATOC(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x11E250 -> 0x11E324
        unsigned int cid; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011E330 -> 0x0011E48C
*/
// Range: 0x11E330 -> 0x11E48C
static signed int LOD_r_DICT(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x11E330 -> 0x11E48C
        unsigned int cid; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011E490 -> 0x0011E550
*/
// Range: 0x11E490 -> 0x11E550
static signed int LOD_r_PVER(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x11E490 -> 0x11E550
        signed int amt; // r2
        signed int ver; // r29+0x4C
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011E550 -> 0x0011E788
*/
// Range: 0x11E550 -> 0x11E788
static signed int LOD_r_PACK(class st_HIPLOADDATA * pkg /* r19 */, class st_PACKER_READ_DATA * pr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x11E550 -> 0x11E788
        unsigned int cid; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011E790 -> 0x0011E7BC
*/
// Range: 0x11E790 -> 0x11E7BC
static signed int OrdTest_R_AssetID(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11E790 -> 0x11E7BC
        unsigned int key; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011E7C0 -> 0x0011E7F0
*/
// Range: 0x11E7C0 -> 0x11E7F0
static signed int OrdTest_R_Asset(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11E7C0 -> 0x11E7F0
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011E7F0 -> 0x0011E908
*/
// Range: 0x11E7F0 -> 0x11E908
static signed int PKR_FRIEND_assetIsGameDup(unsigned int aid /* r21 */, class st_PACKER_READ_DATA * skippr /* r20 */) {
    /* anonymous block */ {
        // Range: 0x11E7F0 -> 0x11E908
        signed int idx; // r2
        signed int i; // r17
        class st_PACKER_ATOC_NODE * tmp_ass; // r4
        signed int is_dup; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011E910 -> 0x0011E990
*/
// Range: 0x11E910 -> 0x11E990
static signed int PKR_PkgHasAsset(class st_PACKER_READ_DATA * pr /* r16 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11E910 -> 0x11E990
        signed int idx; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011E990 -> 0x0011EABC
*/
// Range: 0x11E990 -> 0x11EABC
static signed int PKR_GetAssetInfoByType(class st_PACKER_READ_DATA * pr /* r19 */, unsigned int type /* r18 */, signed int idx /* r17 */, class st_PKR_ASSET_TOCINFO * tocinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x11E990 -> 0x11EABC
        class st_XORDEREDARRAY * typlist; // r4
        class st_PACKER_ATOC_NODE * assnode; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011EAC0 -> 0x0011EB90
*/
// Range: 0x11EAC0 -> 0x11EB90
static signed int PKR_GetAssetInfo(class st_PACKER_READ_DATA * pr /* r18 */, unsigned int aid /* r17 */, class st_PKR_ASSET_TOCINFO * tocinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x11EAC0 -> 0x11EB90
        class st_PACKER_ATOC_NODE * assnode; // r5
        signed int idx; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011EB90 -> 0x0011EB98
*/
// Range: 0x11EB90 -> 0x11EB98
static unsigned int PKR_GetBaseSector(class st_PACKER_READ_DATA * pr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11EB90 -> 0x11EB98
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011EBA0 -> 0x0011EBFC
*/
// Range: 0x11EBA0 -> 0x11EBFC
static char * PKR_AssetName(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11EBA0 -> 0x11EBFC
        signed int idx; // r2
        char * da_name; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011EC00 -> 0x0011EC08
*/
// Range: 0x11EC00 -> 0x11EC08
static unsigned int PKR_getPackTimestamp(class st_PACKER_READ_DATA * pr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11EC00 -> 0x11EC08
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011EC10 -> 0x0011EC80
*/
// Range: 0x11EC10 -> 0x11EC80
static signed int PKR_IsAssetReady(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11EC10 -> 0x11EC80
        signed int idx; // r2
        signed int is_ok; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011EC80 -> 0x0011ED2C
*/
// Range: 0x11EC80 -> 0x11ED2C
static void * PKR_AssetByType(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int type /* r2 */, signed int idx /* r2 */, unsigned int * size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11EC80 -> 0x11ED2C
        class st_PACKER_ATOC_NODE * assnode; // r3
        class st_XORDEREDARRAY * typlist; // r4
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011ED30 -> 0x0011ED98
*/
// Range: 0x11ED30 -> 0x11ED98
static signed int PKR_AssetCount(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int type /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11ED30 -> 0x11ED98
        signed int cnt; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011EDA0 -> 0x0011EE1C
*/
// Range: 0x11EDA0 -> 0x11EE1C
static unsigned int PKR_GetAssetSize(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11EDA0 -> 0x11EE1C
        class st_PACKER_ATOC_NODE * assnode; // r16
        signed int idx; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011EE20 -> 0x0011EE84
*/
// Range: 0x11EE20 -> 0x11EE84
static void * PKR_LoadAsset(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11EE20 -> 0x11EE84
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011EE90 -> 0x0011EE98
*/
// Range: 0x11EE90 -> 0x11EE98
static signed int PKR_LoadLayer() {
    /* anonymous block */ {
        // Range: 0x11EE90 -> 0x11EE98
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011EEA0 -> 0x0011EF80
*/
// Range: 0x11EEA0 -> 0x11EF80
static void PKR_xform_asset(class st_PACKER_ATOC_NODE * assnode /* r16 */) {
    /* anonymous block */ {
        // Range: 0x11EEA0 -> 0x11EF80
        class st_PACKER_ASSETTYPE * atype; // r4
        char * xformloc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011EF80 -> 0x0011F078
*/
// Range: 0x11EF80 -> 0x11F078
static void PKR_xformLayerAssets(class st_PACKER_LTOC_NODE * laynode /* r20 */) {
    /* anonymous block */ {
        // Range: 0x11EF80 -> 0x11F078
        class st_PACKER_ATOC_NODE * tmpass; // r18
        signed int will_be_dumped; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011F080 -> 0x0011F170
*/
// Range: 0x11F080 -> 0x11F170
static void PKR_updateLayerAssets(class st_PACKER_LTOC_NODE * laynode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11F080 -> 0x11F170
        signed int lay_hip_pos; // r7
        class st_PACKER_ATOC_NODE * tmpass; // r6
        signed int i; // r5
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011F170 -> 0x0011F290
*/
// Range: 0x11F170 -> 0x11F290
static signed int PKR_findNextLayerToLoad(class st_PACKER_READ_DATA * * work_on_pkg /* r2 */, class st_PACKER_LTOC_NODE * * next_layer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x11F170 -> 0x11F290
        signed int j; // r6
        signed int i; // r8
        class st_PACKER_LTOC_NODE * tmplay; // r7
        class st_PACKER_READ_DATA * tmppr; // r6
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011F290 -> 0x0011F7BC
*/
// Range: 0x11F290 -> 0x11F7BC
static signed int PKR_LoadStep_Async() {
    /* anonymous block */ {
        // Range: 0x11F290 -> 0x11F7BC
        class st_PACKER_ATOC_NODE * tmpass; // r19
        enum en_READ_ASYNC_STATUS readstat; // r2
        signed int rc; // r2
        signed int moretodo; // r16
        class st_PACKER_READ_DATA * curpr; // @ 0x00357C60
        class st_PACKER_LTOC_NODE * asynlay; // @ 0x00357C68
        signed char init; // @ 0x00357C6C
        signed char init; // @ 0x00357C64
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011F7C0 -> 0x0011F9D4
*/
// Range: 0x11F7C0 -> 0x11F9D4
static signed int PKR_parse_TOC(class st_HIPLOADDATA * pkg /* r20 */, class st_PACKER_READ_DATA * pr /* r19 */) {
    /* anonymous block */ {
        // Range: 0x11F7C0 -> 0x11F9D4
        signed int done; // r17
        unsigned int cid; // r2
        signed int is_ok; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011F9E0 -> 0x0011FB38
*/
// Range: 0x11F9E0 -> 0x11FB38
static signed int PKR_SetActive(class st_PACKER_READ_DATA * pr /* r22 */, enum en_LAYER_TYPE layer /* r30 */) {
    /* anonymous block */ {
        // Range: 0x11F9E0 -> 0x11FB38
        class st_PACKER_LTOC_NODE * laynode; // r19
        class st_PACKER_ATOC_NODE * assnode; // r18
        signed int j; // r17
        signed int i; // r23
        signed int rc; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011FB40 -> 0x0011FD78
*/
// Range: 0x11FB40 -> 0x11FD78
static void PKR_ReadDone(class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x11FB40 -> 0x11FD78
        class st_XORDEREDARRAY * tmplist; // r2
        class st_PACKER_LTOC_NODE * laynode; // r19
        class st_PACKER_ATOC_NODE * assnode; // r5
        signed int lockid; // r17
        signed int j; // r18
        signed int i; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011FD80 -> 0x0011FF98
*/
// Range: 0x11FD80 -> 0x11FF98
static class st_PACKER_READ_DATA * PKR_ReadInit(void * userdata /* r22 */, char * pkgfile /* r21 */, unsigned int opts /* r23 */, signed int * cltver /* r20 */, class st_PACKER_ASSETTYPE * typelist /* r30 */) {
    /* anonymous block */ {
        // Range: 0x11FD80 -> 0x11FF98
        char * tocbuf_aligned; // r18
        char * tocbuf_RAW; // r2
        signed int uselock; // r17
        signed int i; // r5
        class st_PACKER_READ_DATA * pr; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011FFA0 -> 0x0011FFA8
*/
// Range: 0x11FFA0 -> 0x11FFA8
signed int PKRLoadStep() {
    /* anonymous block */ {
        // Range: 0x11FFA0 -> 0x11FFA8
        signed int more_todo; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011FFB0 -> 0x0011FFC8
*/
// Range: 0x11FFB0 -> 0x11FFC8
signed int PKRShutdown() {
    /* anonymous block */ {
        // Range: 0x11FFB0 -> 0x11FFC8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0011FFD0 -> 0x00120010
*/
// Range: 0x11FFD0 -> 0x120010
signed int PKRStartup() {
    /* anonymous block */ {
        // Range: 0x11FFD0 -> 0x120010
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120010 -> 0x00120030
*/
// Range: 0x120010 -> 0x120030
class st_PACKER_READ_FUNCS * PKRGetReadFuncs(signed int apiver /* r2 */) {
    /* anonymous block */ {
        // Range: 0x120010 -> 0x120030
    }
}


