/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044E490 -> 0x0044E498
*/
// Range: 0x44E490 -> 0x44E498
enum xRegion xSTGetLocalizationEnum() {
    /* anonymous block */ {
        // Range: 0x44E490 -> 0x44E498
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044E4A0 -> 0x0044E4A8
*/
// Range: 0x44E4A0 -> 0x44E4A8
char * xSTGetLocalizationCode() {
    /* anonymous block */ {
        // Range: 0x44E4A0 -> 0x44E4A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044E4B0 -> 0x0044E544
*/
// Range: 0x44E4B0 -> 0x44E544
void xSTSetLocalizationCode(char * code /* r17 */) {
    /* anonymous block */ {
        // Range: 0x44E4B0 -> 0x44E544
        enum xRegion iRegion; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044E550 -> 0x0044E5C4
*/
// Range: 0x44E550 -> 0x44E5C4
static class st_STRAN_SCENE * XST_find_bySID(unsigned int sid /* r2 */, signed int flagHipHop /* r2 */) {
    /* anonymous block */ {
        // Range: 0x44E550 -> 0x44E5C4
        class st_STRAN_SCENE * da_sdata; // r2
        signed int i; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044E5D0 -> 0x0044E688
*/
// Range: 0x44E5D0 -> 0x44E688
static class st_STRAN_SCENE * XST_lock_next() {
    /* anonymous block */ {
        // Range: 0x44E5D0 -> 0x44E688
        class st_STRAN_SCENE * sdata; // r17
        signed int i; // r16
        signed int uselock; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044E690 -> 0x0044E7C4
*/
// Range: 0x44E690 -> 0x44E7C4
static char * XST_translate_sid_path(unsigned int sid /* r18 */, char * exten /* r17 */, unsigned char local /* r16 */) {
    /* anonymous block */ {
        // Range: 0x44E690 -> 0x44E7C4
        char path_delimiter[2]; // r29+0x4C
        char subdir[4]; // r29+0x48
        char fname[64]; // @ 0x007A9780
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044E7D0 -> 0x0044E928
*/
// Range: 0x44E7D0 -> 0x44E928
char * xST_xAssetID_HIPFullPath(unsigned int aid /* r20 */, unsigned int * sceneID /* r19 */) {
    /* anonymous block */ {
        // Range: 0x44E7D0 -> 0x44E928
        char * da_hipname; // r21
        signed int rc; // r2
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044E930 -> 0x0044E938
*/
// Range: 0x44E930 -> 0x44E938
char * xST_xAssetID_HIPFullPath(unsigned int aid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x44E930 -> 0x44E938
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044E940 -> 0x0044EAE0
*/
// Range: 0x44E940 -> 0x44EAE0
signed int xSTGetAssetInfoByType(unsigned int type /* r20 */, signed int idx /* r19 */, class PKRAssetTOCInfo * tocainfo /* r30 */) {
    /* anonymous block */ {
        // Range: 0x44E940 -> 0x44EAE0
        signed int found; // r23
        signed int sum; // r18
        signed int cnt; // r2
        signed int i; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044EAE0 -> 0x0044EC20
*/
// Range: 0x44EAE0 -> 0x44EC20
signed int xSTGetAssetInfo(unsigned int aid /* r20 */, class PKRAssetTOCInfo * tocainfo /* r19 */) {
    /* anonymous block */ {
        // Range: 0x44EAE0 -> 0x44EC20
        signed int found; // r18
        signed int i; // r17
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044EC20 -> 0x0044EDB4
*/
// Range: 0x44EC20 -> 0x44EDB4
void * xSTFindAssetByType(unsigned int type /* r20 */, signed int idx /* r21 */, unsigned int * size /* r23 */) {
    /* anonymous block */ {
        // Range: 0x44EC20 -> 0x44EDB4
        void * memptr; // r22
        signed int i; // r19
        signed int sum; // r18
        signed int cnt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044EDC0 -> 0x0044EEE4
*/
// Range: 0x44EDC0 -> 0x44EEE4
signed int xSTAssetCountByType(unsigned int type /* r19 */) {
    /* anonymous block */ {
        // Range: 0x44EDC0 -> 0x44EEE4
        signed int sum; // r18
        signed int cnt; // r2
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044EEF0 -> 0x0044F04C
*/
// Range: 0x44EEF0 -> 0x44F04C
void * xSTFindAsset(unsigned int aid /* r19 */, unsigned int * size /* r18 */) {
    /* anonymous block */ {
        // Range: 0x44EEF0 -> 0x44F04C
        void * memloc; // r2
        signed int i; // r17
        signed int asssize; // r29+0x5C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044F050 -> 0x0044F184
*/
// Range: 0x44F050 -> 0x44F184
char * xSTAssetName(void * raw_HIP_asset /* r19 */) {
    /* anonymous block */ {
        // Range: 0x44F050 -> 0x44F184
        char * aname; // r2
        signed int i; // r18
        unsigned int aid; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044F190 -> 0x0044F2C0
*/
// Range: 0x44F190 -> 0x44F2C0
char * xSTAssetName(unsigned int aid /* r18 */) {
    /* anonymous block */ {
        // Range: 0x44F190 -> 0x44F2C0
        char * aname; // r2
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044F2C0 -> 0x0044F3B8
*/
// Range: 0x44F2C0 -> 0x44F3B8
signed int xSTSwitchScene(unsigned int sid /* r21 */, void * userdata /* r20 */, signed int (* progmon)(void *, float) /* r19 */) {
    /* anonymous block */ {
        // Range: 0x44F2C0 -> 0x44F3B8
        class st_STRAN_SCENE * sdata; // r2
        signed int rc; // r22
        signed int i; // r18
        signed int types[3]; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044F3C0 -> 0x0044F3F8
*/
// Range: 0x44F3C0 -> 0x44F3F8
void xSTDisconnect(unsigned int sid /* r2 */, signed int flg_hiphop /* r2 */) {
    /* anonymous block */ {
        // Range: 0x44F3C0 -> 0x44F3F8
        class st_STRAN_SCENE * sdata; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044F400 -> 0x0044F450
*/
// Range: 0x44F400 -> 0x44F450
float xSTLoadStep() {
    /* anonymous block */ {
        // Range: 0x44F400 -> 0x44F450
        float pct; // r29+0x20
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044F450 -> 0x0044F634
*/
// Range: 0x44F450 -> 0x44F634
void xSTUnLoadSceneMany(unsigned int sceneID /* r18 */, signed int type /* r17 */) {
    /* anonymous block */ {
        // Range: 0x44F450 -> 0x44F634
        class st_STRAN_SCENE * sdata; // r16
        class st_STRAN_SCENE * sdata; // r16
        class st_STRAN_SCENE * sdata; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044F640 -> 0x0044F698
*/
// Range: 0x44F640 -> 0x44F698
signed int xSTQueueSceneAssets(unsigned int sid /* r2 */, signed int flg_hiphop /* r2 */) {
    /* anonymous block */ {
        // Range: 0x44F640 -> 0x44F698
        signed int result; // r16
        class st_STRAN_SCENE * sdata; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044F6A0 -> 0x0044FB50
*/
// Range: 0x44F6A0 -> 0x44FB50
signed int xSTPreLoadScene(unsigned int sid /* r20 */, void * userdata /* r23 */, signed int flg_hiphop /* r22 */, signed int fileflags /* r19 */, char * filename /* r2 */) {
    /* anonymous block */ {
        // Range: 0x44F6A0 -> 0x44FB50
        signed int result; // r2
        class st_STRAN_SCENE * sdata; // r16
        char * sfile; // r18
        signed int cltver; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044FB50 -> 0x0044FC18
*/
// Range: 0x44FB50 -> 0x44FC18
signed int xSTShutdown() {
    /* anonymous block */ {
        // Range: 0x44FB50 -> 0x44FC18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xstransvc.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0044FC20 -> 0x0044FC7C
*/
// Range: 0x44FC20 -> 0x44FC7C
signed int xSTStartup(class PKRAssetType * handlers /* r2 */) {
    /* anonymous block */ {
        // Range: 0x44FC20 -> 0x44FC7C
    }
}


