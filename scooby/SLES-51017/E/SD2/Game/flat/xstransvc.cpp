/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int g_straninit; // size: 0x4, address: 0x3585F8
static class st_STRAN_DATA g_xstdata; // size: 0x884, address: 0x28F830
static class st_PACKER_READ_FUNCS * g_pkrf; // size: 0x4, address: 0x3585FC
static class st_PACKER_ASSETTYPE * g_typeHandlers; // size: 0x4, address: 0x358600
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
// total size: 0x0
class st_PACKER_READ_DATA {};
// total size: 0x110
class st_STRAN_SCENE {
    // Members
public:
    unsigned int scnid; // offset 0x0, size 0x4
    signed int lockid; // offset 0x4, size 0x4
    class st_PACKER_READ_DATA * spkg; // offset 0x8, size 0x4
    void * userdata; // offset 0xC, size 0x4
    char fnam[256]; // offset 0x10, size 0x100
};
// total size: 0x14
class st_xST_XASSETINFO {
    // Members
public:
    unsigned int aid; // offset 0x0, size 0x4
    unsigned int sector; // offset 0x4, size 0x4
    unsigned int plus_offset; // offset 0x8, size 0x4
    unsigned int size; // offset 0xC, size 0x4
    void * mempos; // offset 0x10, size 0x4
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
// total size: 0x884
class st_STRAN_DATA {
    // Members
public:
    class st_STRAN_SCENE hipscn[8]; // offset 0x0, size 0x880
    unsigned int loadlock; // offset 0x880, size 0x4
};

/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001201A0 -> 0x001201F8
*/
// Range: 0x1201A0 -> 0x1201F8
static class st_STRAN_SCENE * XST_find_bySID(unsigned int sid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1201A0 -> 0x1201F8
        signed int i; // r6
        class st_STRAN_SCENE * da_sdata; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120200 -> 0x001202A8
*/
// Range: 0x120200 -> 0x1202A8
static class st_STRAN_SCENE * XST_lock_next() {
    /* anonymous block */ {
        // Range: 0x120200 -> 0x1202A8
        signed int uselock; // r4
        signed int i; // r16
        class st_STRAN_SCENE * sdata; // r17
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001202B0 -> 0x001203F0
*/
// Range: 0x1202B0 -> 0x1203F0
char * xST_xAssetID_HIPFullPath(unsigned int aid /* r21 */, unsigned int * sceneID /* r20 */) {
    /* anonymous block */ {
        // Range: 0x1202B0 -> 0x1203F0
        signed int i; // r17
        signed int rc; // r2
        char * da_hipname; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001203F0 -> 0x001203F8
*/
// Range: 0x1203F0 -> 0x1203F8
char * xST_xAssetID_HIPFullPath(unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1203F0 -> 0x1203F8
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120400 -> 0x001205F4
*/
// Range: 0x120400 -> 0x1205F4
signed int xSTGetAssetInfoByType(unsigned int type /* r22 */, signed int idx /* r20 */, class st_xST_XASSETINFO * ainfo /* r23 */) {
    /* anonymous block */ {
        // Range: 0x120400 -> 0x1205F4
        signed int cnt; // r21
        signed int sum; // r17
        signed int i; // r16
        signed int rc; // r2
        class st_PKR_ASSET_TOCINFO tocinfo; // r29+0xA0
        signed int found; // r30
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120600 -> 0x001207B8
*/
// Range: 0x120600 -> 0x1207B8
signed int xSTGetAssetInfo(unsigned int aid /* r20 */, class st_xST_XASSETINFO * ainfo /* r19 */) {
    /* anonymous block */ {
        // Range: 0x120600 -> 0x1207B8
        signed int i; // r16
        signed int rc; // r2
        class st_PKR_ASSET_TOCINFO tocinfo; // r29+0x70
        signed int found; // r21
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001207C0 -> 0x00120940
*/
// Range: 0x1207C0 -> 0x120940
void * xSTFindAssetByType(unsigned int type /* r21 */, signed int idx /* r20 */, unsigned int * size /* r23 */) {
    /* anonymous block */ {
        // Range: 0x1207C0 -> 0x120940
        signed int cnt; // r2
        signed int sum; // r17
        signed int i; // r16
        void * memptr; // r22
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120940 -> 0x00120A50
*/
// Range: 0x120940 -> 0x120A50
signed int xSTAssetCountByType(unsigned int type /* r19 */) {
    /* anonymous block */ {
        // Range: 0x120940 -> 0x120A50
        signed int i; // r17
        signed int cnt; // r2
        signed int sum; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120A50 -> 0x00120BE8
*/
// Range: 0x120A50 -> 0x120BE8
void * xSTFindAsset(unsigned int aid /* r21 */, unsigned int * size /* r20 */) {
    /* anonymous block */ {
        // Range: 0x120A50 -> 0x120BE8
        signed int rc; // r2
        signed int i; // r17
        signed int ready; // r2
        void * memloc; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120BF0 -> 0x00120D08
*/
// Range: 0x120BF0 -> 0x120D08
char * xSTAssetName(unsigned int aid /* r18 */) {
    /* anonymous block */ {
        // Range: 0x120BF0 -> 0x120D08
        signed int i; // r16
        char * aname; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120D10 -> 0x00120DC4
*/
// Range: 0x120D10 -> 0x120DC4
signed int xSTSwitchScene(unsigned int sid /* r2 */, void * userdata /* r19 */, signed int (* progmon)(void *, float) /* r18 */) {
    /* anonymous block */ {
        // Range: 0x120D10 -> 0x120DC4
        signed int rc; // r2
        class st_STRAN_SCENE * sdata; // r17
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120DD0 -> 0x00120E08
*/
// Range: 0x120DD0 -> 0x120E08
float xSTLoadStep() {
    /* anonymous block */ {
        // Range: 0x120DD0 -> 0x120E08
        signed int rc; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00120E10 -> 0x00121018
*/
// Range: 0x120E10 -> 0x121018
void xSTUnLoadScene(unsigned int sid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x120E10 -> 0x121018
        signed int i; // r16
        class st_STRAN_SCENE * sdata; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00121020 -> 0x00121074
*/
// Range: 0x121020 -> 0x121074
signed int xSTQueueSceneAssets(unsigned int sid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x121020 -> 0x121074
        class st_STRAN_SCENE * sdata; // r2
        signed int result; // r16
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00121080 -> 0x001212E0
*/
// Range: 0x121080 -> 0x1212E0
signed int xSTPreLoadScene(unsigned int sid /* r20 */, void * userdata /* r22 */) {
    /* anonymous block */ {
        // Range: 0x121080 -> 0x1212E0
        signed int cnt_retry; // r19
        signed int cltver; // r18
        class st_STRAN_SCENE * sdata; // r17
        signed int result; // r2
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001212E0 -> 0x001213A0
*/
// Range: 0x1212E0 -> 0x1213A0
signed int xSTShutdown() {
    /* anonymous block */ {
        // Range: 0x1212E0 -> 0x1213A0
    }
}


/*
    Compile unit: E:\SD2\Game\flat\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001213A0 -> 0x001213F4
*/
// Range: 0x1213A0 -> 0x1213F4
signed int xSTStartup(class st_PACKER_ASSETTYPE * handlers /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1213A0 -> 0x1213F4
    }
}


