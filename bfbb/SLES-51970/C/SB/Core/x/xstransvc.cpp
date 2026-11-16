/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static signed int g_straninit; // size: 0x4, address: 0x50F068
static class st_STRAN_DATA g_xstdata; // size: 0x1144, address: 0x5B8CA0
static class st_PACKER_READ_FUNCS * g_pkrf; // size: 0x4, address: 0x50F06C
static class st_PACKER_ASSETTYPE * g_typeHandlers; // size: 0x4, address: 0x50F070
// total size: 0x114
class st_STRAN_SCENE {
    // Members
public:
    unsigned int scnid; // offset 0x0, size 0x4
    signed int lockid; // offset 0x4, size 0x4
    class st_PACKER_READ_DATA * spkg; // offset 0x8, size 0x4
    signed int isHOP; // offset 0xC, size 0x4
    void * userdata; // offset 0x10, size 0x4
    char fnam[256]; // offset 0x14, size 0x100
};
// total size: 0x0
class st_PACKER_READ_DATA {};
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
// total size: 0x1144
class st_STRAN_DATA {
    // Members
public:
    class st_STRAN_SCENE hipscn[16]; // offset 0x0, size 0x1140
    unsigned int loadlock; // offset 0x1140, size 0x4
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

/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020BF50 -> 0x0020BFD8
*/
// Range: 0x20BF50 -> 0x20BFD8
static class st_STRAN_SCENE * XST_find_bySID(unsigned int sid /* r2 */, signed int findTheHOP /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20BF50 -> 0x20BFD8
        class st_STRAN_SCENE * da_sdata; // r2
        signed int i; // r9
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020BFE0 -> 0x0020C098
*/
// Range: 0x20BFE0 -> 0x20C098
static class st_STRAN_SCENE * XST_lock_next() {
    /* anonymous block */ {
        // Range: 0x20BFE0 -> 0x20C098
        class st_STRAN_SCENE * sdata; // r17
        signed int i; // r16
        signed int uselock; // r5
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C0A0 -> 0x0020C1E8
*/
// Range: 0x20C0A0 -> 0x20C1E8
char * xST_xAssetID_HIPFullPath(unsigned int aid /* r21 */, unsigned int * sceneID /* r20 */) {
    /* anonymous block */ {
        // Range: 0x20C0A0 -> 0x20C1E8
        char * da_hipname; // r19
        signed int rc; // r2
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C1F0 -> 0x0020C1F8
*/
// Range: 0x20C1F0 -> 0x20C1F8
char * xST_xAssetID_HIPFullPath(unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20C1F0 -> 0x20C1F8
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C200 -> 0x0020C404
*/
// Range: 0x20C200 -> 0x20C404
signed int xSTGetAssetInfoByType(unsigned int type /* r20 */, signed int idx /* r19 */, class st_PKR_ASSET_TOCINFO * ainfo /* r30 */) {
    /* anonymous block */ {
        // Range: 0x20C200 -> 0x20C404
        signed int found; // r23
        class st_PKR_ASSET_TOCINFO tocinfo; // r29+0xA0
        signed int rc; // r2
        signed int i; // r18
        signed int sum; // r17
        signed int cnt; // r22
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C410 -> 0x0020C5A8
*/
// Range: 0x20C410 -> 0x20C5A8
signed int xSTGetAssetInfo(unsigned int aid /* r17 */, class st_PKR_ASSET_TOCINFO * tocainfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x20C410 -> 0x20C5A8
        signed int found; // r21
        class st_PKR_ASSET_TOCINFO tocinfo; // r29+0x70
        signed int rc; // r2
        signed int scncnt; // r20
        signed int i; // r19
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C5B0 -> 0x0020C738
*/
// Range: 0x20C5B0 -> 0x20C738
void * xSTFindAssetByType(unsigned int type /* r17 */, signed int idx /* r16 */, unsigned int * size /* r23 */) {
    /* anonymous block */ {
        // Range: 0x20C5B0 -> 0x20C738
        void * memptr; // r22
        signed int scncnt; // r21
        signed int i; // r20
        signed int sum; // r19
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C740 -> 0x0020C860
*/
// Range: 0x20C740 -> 0x20C860
signed int xSTAssetCountByType(unsigned int type /* r19 */) {
    /* anonymous block */ {
        // Range: 0x20C740 -> 0x20C860
        signed int sum; // r18
        signed int cnt; // r2
        signed int scncnt; // r17
        signed int i; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020C860 -> 0x0020CA1C
*/
// Range: 0x20C860 -> 0x20CA1C
void * xSTFindAsset(unsigned int aid /* r21 */, unsigned int * size /* r20 */) {
    /* anonymous block */ {
        // Range: 0x20C860 -> 0x20CA1C
        void * memloc; // r19
        signed int ready; // r2
        signed int scncnt; // r18
        signed int i; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020CA20 -> 0x0020CB4C
*/
// Range: 0x20CA20 -> 0x20CB4C
char * xSTAssetName(void * raw_HIP_asset /* r19 */) {
    /* anonymous block */ {
        // Range: 0x20CA20 -> 0x20CB4C
        char * aname; // r2
        unsigned int aid; // r2
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020CB50 -> 0x0020CC70
*/
// Range: 0x20CB50 -> 0x20CC70
char * xSTAssetName(unsigned int aid /* r18 */) {
    /* anonymous block */ {
        // Range: 0x20CB50 -> 0x20CC70
        char * aname; // r2
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020CC70 -> 0x0020CD38
*/
// Range: 0x20CC70 -> 0x20CD38
signed int xSTSwitchScene(unsigned int sid /* r19 */, void * userdata /* r18 */, signed int (* progmon)(void *, float) /* r17 */) {
    /* anonymous block */ {
        // Range: 0x20CC70 -> 0x20CD38
        class st_STRAN_SCENE * sdata; // r21
        signed int rc; // r20
        signed int i; // r16
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020CD40 -> 0x0020CD84
*/
// Range: 0x20CD40 -> 0x20CD84
void xSTDisconnect(unsigned int sid /* r2 */, signed int flg_hiphop /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20CD40 -> 0x20CD84
        class st_STRAN_SCENE * sdata; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020CD90 -> 0x0020CDE0
*/
// Range: 0x20CD90 -> 0x20CDE0
float xSTLoadStep() {
    /* anonymous block */ {
        // Range: 0x20CD90 -> 0x20CDE0
        float pct; // r20
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020CDE0 -> 0x0020D008
*/
// Range: 0x20CDE0 -> 0x20D008
void xSTUnLoadScene(unsigned int sid /* r2 */, signed int flg_hiphop /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20CDE0 -> 0x20D008
        class st_STRAN_SCENE * sdata; // r16
        signed int cnt; // r18
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D010 -> 0x0020D074
*/
// Range: 0x20D010 -> 0x20D074
signed int xSTQueueSceneAssets(unsigned int sid /* r2 */, signed int flg_hiphop /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20D010 -> 0x20D074
        signed int result; // r16
        class st_STRAN_SCENE * sdata; // r2
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D080 -> 0x0020D46C
*/
// Range: 0x20D080 -> 0x20D46C
signed int xSTPreLoadScene(unsigned int sid /* r20 */, void * userdata /* r21 */, signed int flg_hiphop /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20D080 -> 0x20D46C
        signed int result; // r2
        class st_STRAN_SCENE * sdata; // r16
        signed int cltver; // r19
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D470 -> 0x0020D538
*/
// Range: 0x20D470 -> 0x20D538
signed int xSTShutdown() {
    /* anonymous block */ {
        // Range: 0x20D470 -> 0x20D538
    }
}


/*
    Compile unit: C:\SB\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0020D540 -> 0x0020D598
*/
// Range: 0x20D540 -> 0x20D598
signed int xSTStartup(class st_PACKER_ASSETTYPE * handlers /* r2 */) {
    /* anonymous block */ {
        // Range: 0x20D540 -> 0x20D598
    }
}


