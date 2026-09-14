/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6170 -> 0x003A61FC
*/
// Range: 0x3A6170 -> 0x3A61FC
static void * PKR_specialGet_loadbuf(class st_PACKER_READ_DATA * pr /* r18 */, signed int amount /* r17 */, signed int align /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6170 -> 0x3A61FC
        void * da_mem; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6200 -> 0x003A6208
*/
// Range: 0x3A6200 -> 0x3A6208
static void PKR_special_loadbuf_killed() {
    /* anonymous block */ {
        // Range: 0x3A6200 -> 0x3A6208
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6210 -> 0x003A62C4
*/
// Range: 0x3A6210 -> 0x3A62C4
static void PKR_relmem(unsigned int id /* r19 */, signed int blksize /* r18 */, void * memptr /* r17 */, signed int isTemp /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6210 -> 0x3A62C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A62D0 -> 0x003A63C0
*/
// Range: 0x3A62D0 -> 0x3A63C0
static void * PKR_getmem(unsigned int id /* r20 */, signed int amount /* r19 */, signed int align /* r18 */, signed int isTemp /* r2 */, char * * memtru /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3A62D0 -> 0x3A63C0
        void * memptr; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A63C0 -> 0x003A66D8
*/
// Range: 0x3A63C0 -> 0x3A66D8
static void PKR_bld_typecnt(class st_PACKER_READ_DATA * pr /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3A63C0 -> 0x3A66D8
        class st_PACKER_LTOC_NODE * laynode; // r23
        class st_PACKER_ATOC_NODE * assnode; // r2
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A66E0 -> 0x003A6758
*/
// Range: 0x3A66E0 -> 0x3A6758
static class PKRAssetType * PKR_type2typeref(unsigned int type /* r2 */, class PKRAssetType * typelist /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A66E0 -> 0x3A6758
        class PKRAssetType * da_type; // r16
        class PKRAssetType * tmptype; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6760 -> 0x003A6804
*/
// Range: 0x3A6760 -> 0x3A6804
static signed int LOD_r_STRM(class st_HIPLOADDATA * pkg /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6760 -> 0x3A6804
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6810 -> 0x003A6A54
*/
// Range: 0x3A6810 -> 0x3A6A54
static signed int LOD_r_LHDR(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3A6810 -> 0x3A6A54
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6A60 -> 0x003A6B28
*/
// Range: 0x3A6A60 -> 0x3A6B28
static signed int LOD_r_LTOC(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6A60 -> 0x3A6B28
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6B30 -> 0x003A6C30
*/
// Range: 0x3A6B30 -> 0x3A6C30
static signed int LOD_r_ADBG(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */, class st_PACKER_ATOC_NODE * assnode /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6B30 -> 0x3A6C30
        signed int ival; // r29+0x14C
        char tmpbuf[256]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6C30 -> 0x003A6E58
*/
// Range: 0x3A6C30 -> 0x3A6E58
static signed int LOD_r_AHDR(class st_HIPLOADDATA * pkg /* r19 */, class st_PACKER_READ_DATA * pr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3A6C30 -> 0x3A6E58
        unsigned int cid; // r2
        signed int ival; // r29+0x5C
        signed int isdup; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6E60 -> 0x003A6F28
*/
// Range: 0x3A6E60 -> 0x3A6F28
static signed int LOD_r_ATOC(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6E60 -> 0x3A6F28
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A6F30 -> 0x003A6FF8
*/
// Range: 0x3A6F30 -> 0x3A6FF8
static signed int LOD_r_DICT(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A6F30 -> 0x3A6FF8
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7000 -> 0x003A716C
*/
// Range: 0x3A7000 -> 0x3A716C
static signed int LOD_r_PLAT(class st_HIPLOADDATA * pkg /* r18 */, class st_PACKER_READ_DATA * pr /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3A7000 -> 0x3A716C
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7170 -> 0x003A7290
*/
// Range: 0x3A7170 -> 0x3A7290
static signed int ValidatePlatform(char * plat /* r18 */, char * vid /* r17 */, char * lang /* r2 */, char * title /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7170 -> 0x3A7290
        char fullname[128]; // r29+0x40
        signed int rc; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7290 -> 0x003A7344
*/
// Range: 0x3A7290 -> 0x3A7344
static signed int LOD_r_PVER(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7290 -> 0x3A7344
        signed int ver; // r29+0x3C
        signed int amt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7350 -> 0x003A75A0
*/
// Range: 0x3A7350 -> 0x3A75A0
static signed int LOD_r_PACK(class st_HIPLOADDATA * pkg /* r17 */, class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7350 -> 0x3A75A0
        unsigned int cid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A75A0 -> 0x003A75D8
*/
// Range: 0x3A75A0 -> 0x3A75D8
static signed int OrdTest_R_AssetID(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A75A0 -> 0x3A75D8
        signed int rc; // r2
        unsigned int key; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A75E0 -> 0x003A761C
*/
// Range: 0x3A75E0 -> 0x3A761C
static signed int OrdComp_R_Asset(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A75E0 -> 0x3A761C
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7620 -> 0x003A77D0
*/
// Range: 0x3A7620 -> 0x3A77D0
static signed int PKR_FRIEND_assetIsGameDup(unsigned int aid /* r17 */, class st_PACKER_READ_DATA * skippr /* r16 */, signed int oursize /* r23 */, unsigned int ourtype /* r22 */, unsigned int chksum /* r30 */) {
    /* anonymous block */ {
        // Range: 0x3A7620 -> 0x3A77D0
        signed int is_dup; // r21
        class st_PACKER_ATOC_NODE * tmp_ass; // r2
        signed int i; // r20
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A77D0 -> 0x003A7858
*/
// Range: 0x3A77D0 -> 0x3A7858
static signed int PKR_PkgHasAsset(class st_PACKER_READ_DATA * pr /* r16 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A77D0 -> 0x3A7858
        signed int rc; // r2
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7860 -> 0x003A798C
*/
// Range: 0x3A7860 -> 0x3A798C
static signed int PKR_GetAssetInfoByType(class st_PACKER_READ_DATA * pr /* r19 */, unsigned int type /* r18 */, signed int idx /* r17 */, class PKRAssetTOCInfo * tocinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7860 -> 0x3A798C
        class st_PACKER_ATOC_NODE * assnode; // r2
        class st_XORDEREDARRAY * typlist; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7990 -> 0x003A7A54
*/
// Range: 0x3A7990 -> 0x3A7A54
static signed int PKR_GetAssetInfo(class st_PACKER_READ_DATA * pr /* r18 */, unsigned int aid /* r17 */, class PKRAssetTOCInfo * tocinfo /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7990 -> 0x3A7A54
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7A60 -> 0x003A7A68
*/
// Range: 0x3A7A60 -> 0x3A7A68
static unsigned int PKR_GetBaseSector(class st_PACKER_READ_DATA * pr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A7A60 -> 0x3A7A68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7A70 -> 0x003A7AD4
*/
// Range: 0x3A7A70 -> 0x3A7AD4
static char * PKR_AssetName(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A7A70 -> 0x3A7AD4
        char * da_name; // r16
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7AE0 -> 0x003A7AE8
*/
// Range: 0x3A7AE0 -> 0x3A7AE8
unsigned int PKRAssetIDFromInst(void * asset_inst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A7AE0 -> 0x3A7AE8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7AF0 -> 0x003A7B30
*/
// Range: 0x3A7AF0 -> 0x3A7B30
static void PKR_Disconnect(class st_PACKER_READ_DATA * pr /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7AF0 -> 0x3A7B30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7B30 -> 0x003A7B38
*/
// Range: 0x3A7B30 -> 0x3A7B38
static unsigned int PKR_getPackTimestamp(class st_PACKER_READ_DATA * pr /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A7B30 -> 0x3A7B38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7B40 -> 0x003A7BB0
*/
// Range: 0x3A7B40 -> 0x3A7BB0
static signed int PKR_IsAssetReady(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A7B40 -> 0x3A7BB0
        signed int is_ok; // r16
        signed int idx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7BB0 -> 0x003A7C50
*/
// Range: 0x3A7BB0 -> 0x3A7C50
static void * PKR_AssetByType(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int type /* r2 */, signed int idx /* r2 */, unsigned int * size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A7BB0 -> 0x3A7C50
        class st_XORDEREDARRAY * typlist; // r2
        class st_PACKER_ATOC_NODE * assnode; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7C50 -> 0x003A7CB8
*/
// Range: 0x3A7C50 -> 0x3A7CB8
static signed int PKR_AssetCount(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int type /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A7C50 -> 0x3A7CB8
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7CC0 -> 0x003A7D34
*/
// Range: 0x3A7CC0 -> 0x3A7D34
static unsigned int PKR_GetAssetSize(class st_PACKER_READ_DATA * pr /* r17 */, unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A7CC0 -> 0x3A7D34
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7D40 -> 0x003A7D48
*/
// Range: 0x3A7D40 -> 0x3A7D48
static void * PKR_LoadAsset(class st_PACKER_READ_DATA * pr /* r2 */, unsigned int aid /* r2 */, signed int * assetsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A7D40 -> 0x3A7D48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7D50 -> 0x003A7D58
*/
// Range: 0x3A7D50 -> 0x3A7D58
static signed int PKR_LoadLayer() {
    /* anonymous block */ {
        // Range: 0x3A7D50 -> 0x3A7D58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7D60 -> 0x003A7E10
*/
// Range: 0x3A7D60 -> 0x3A7E10
static void * PKR_FindAsset(class st_PACKER_READ_DATA * pr /* r18 */, unsigned int aid /* r2 */, signed int * assetsize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7D60 -> 0x3A7E10
        signed int idx; // r2
        class st_PACKER_ATOC_NODE * assnode; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7E10 -> 0x003A7F28
*/
// Range: 0x3A7E10 -> 0x3A7F28
static void PKR_xform_asset(class st_PACKER_ATOC_NODE * assnode /* r17 */, signed int dumpable_layer /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A7E10 -> 0x3A7F28
        char * xformloc; // r2
        class PKRAssetType * atype; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A7F30 -> 0x003A8050
*/
// Range: 0x3A7F30 -> 0x3A8050
static void PKR_xformLayerAssets(class st_PACKER_LTOC_NODE * laynode /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3A7F30 -> 0x3A8050
        signed int i; // r19
        signed int will_be_dumped; // r18
        class st_PACKER_ATOC_NODE * tmpass; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8050 -> 0x003A8130
*/
// Range: 0x3A8050 -> 0x3A8130
static void PKR_updateLayerAssets(class st_PACKER_LTOC_NODE * laynode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A8050 -> 0x3A8130
        signed int i; // r8
        class st_PACKER_ATOC_NODE * tmpass; // r7
        signed int lay_hip_pos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8130 -> 0x003A8248
*/
// Range: 0x3A8130 -> 0x3A8248
static signed int PKR_findNextLayerToLoad(class st_PACKER_READ_DATA * * work_on_pkg /* r2 */, class st_PACKER_LTOC_NODE * * next_layer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A8130 -> 0x3A8248
        class st_PACKER_READ_DATA * tmppr; // r2
        class st_PACKER_LTOC_NODE * tmplay; // r2
        signed int i; // r10
        signed int j; // r12
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8250 -> 0x003A8358
*/
// Range: 0x3A8250 -> 0x3A8358
static void PKR_LayerMemRelease(class st_PACKER_LTOC_NODE * layer /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A8250 -> 0x3A8358
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8360 -> 0x003A8480
*/
// Range: 0x3A8360 -> 0x3A8480
static char * PKR_LayerMemReserve(class st_PACKER_READ_DATA * pr /* r2 */, class st_PACKER_LTOC_NODE * layer /* r6 */) {
    /* anonymous block */ {
        // Range: 0x3A8360 -> 0x3A8480
        char * mem; // r5
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8480 -> 0x003A88AC
*/
// Range: 0x3A8480 -> 0x3A88AC
static signed int PKR_LoadStep_Async() {
    /* anonymous block */ {
        // Range: 0x3A8480 -> 0x3A88AC
        signed int moretodo; // r2
        signed int rc; // r2
        enum en_READ_ASYNC_STATUS readstat; // r2
        class st_PACKER_ATOC_NODE * tmpass; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
        enum en_PKR_LAYER_LOAD_DEST loaddest; // r2
        class st_PACKER_READ_DATA * curpr; // @ 0x00637E8C
        class st_PACKER_LTOC_NODE * asynlay; // @ 0x00637E90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A88B0 -> 0x003A8A5C
*/
// Range: 0x3A88B0 -> 0x3A8A5C
static signed int PKR_parse_TOC(class st_HIPLOADDATA * pkg /* r19 */, class st_PACKER_READ_DATA * pr /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3A88B0 -> 0x3A8A5C
        signed int is_ok; // r17
        unsigned int cid; // r2
        signed int done; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8A60 -> 0x003A8BF0
*/
// Range: 0x3A8A60 -> 0x3A8BF0
static signed int PKR_SetActive(class st_PACKER_READ_DATA * pr /* r21 */, enum en_LAYER_TYPE layer /* r30 */) {
    /* anonymous block */ {
        // Range: 0x3A8A60 -> 0x3A8BF0
        signed int result; // r23
        signed int rc; // r2
        signed int i; // r20
        signed int j; // r19
        class st_PACKER_ATOC_NODE * assnode; // r2
        class st_PACKER_LTOC_NODE * laynode; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8BF0 -> 0x003A8E84
*/
// Range: 0x3A8BF0 -> 0x3A8E84
static void PKR_ReadDone(class st_PACKER_READ_DATA * pr /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3A8BF0 -> 0x3A8E84
        signed int i; // r19
        signed int j; // r18
        signed int lockid; // r2
        class st_PACKER_ATOC_NODE * assnode; // r2
        class st_PACKER_LTOC_NODE * laynode; // r2
        class st_XORDEREDARRAY * tmplist; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A8E90 -> 0x003A90B4
*/
// Range: 0x3A8E90 -> 0x3A90B4
static class st_PACKER_READ_DATA * PKR_ReadInit(void * userdata /* r22 */, char * pkgfile /* r20 */, unsigned int opts /* r23 */, signed int * cltver /* r19 */, class PKRAssetType * typelist /* r30 */, signed int fileflags /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3A8E90 -> 0x3A90B4
        class st_PACKER_READ_DATA * pr; // r17
        signed int i; // r6
        signed int uselock; // r21
        char * tocbuf_RAW; // r29+0xAC
        char * tocbuf_aligned; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A90C0 -> 0x003A90C8
*/
// Range: 0x3A90C0 -> 0x3A90C8
signed int PKRLoadStep() {
    /* anonymous block */ {
        // Range: 0x3A90C0 -> 0x3A90C8
        signed int more_todo; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A90D0 -> 0x003A90E0
*/
// Range: 0x3A90D0 -> 0x3A90E0
signed int PKRShutdown() {
    /* anonymous block */ {
        // Range: 0x3A90D0 -> 0x3A90E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A90E0 -> 0x003A9170
*/
// Range: 0x3A90E0 -> 0x3A9170
signed int PKRStartup() {
    /* anonymous block */ {
        // Range: 0x3A90E0 -> 0x3A9170
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xpkrsvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A9170 -> 0x003A9190
*/
// Range: 0x3A9170 -> 0x3A9190
class PKRReadFuncs * PKRGetReadFuncs(signed int apiver /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A9170 -> 0x3A9190
    }
}


