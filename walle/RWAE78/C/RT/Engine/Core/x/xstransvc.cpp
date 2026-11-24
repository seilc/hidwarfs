/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xstransvc.cpp
*/
static int g_straninit; // size: 0x4, address: 0x8075FBA4
static class st_STRAN_DATA g_xstdata; // size: 0x2504, address: 0x8075FBA8
static char g_localCode[5]; // size: 0x5, address: 0x806F3004
static unsigned short g_localEnum; // size: 0x2, address: 0x807620AC
static unsigned int g_localDiscLanguageConfig; // size: 0x4, address: 0x807620B0
static char sName[32]; // size: 0x20, address: 0x807620B8
static int sindex; // size: 0x4, address: 0x807620D8
static char fname[64]; // size: 0x40, address: 0x807620E0
// Range: 0x80061D00 -> 0x80061DF8
int xSTStartup() {
    // References
    // -> static class st_STRAN_DATA g_xstdata;
    // -> static int g_straninit;
}
// Range: 0x80061E00 -> 0x80061F10
int xSTShutdown() {
    // References
    // -> static class st_STRAN_DATA g_xstdata;
    // -> static int g_straninit;
}
// signature: xSTPreLoadScene(unsigned int, void *, int, int, const char *)
// Range: 0x80061F10 -> 0x800620A0
int xSTPreLoadScene(unsigned int sid /* r26 */, void * userdata /* r31 */, int flg_hiphop /* r27 */) {
    // Local variables
    int result; // reg65535
    class st_STRAN_SCENE * sdata; // r0
    char * sfile; // r29
    int cltver; // r28

    // References
    // -> static class st_STRAN_DATA g_xstdata;
    // -> static unsigned short g_localEnum;
    // -> static char g_localCode[5];
    // -> static char fname[64];
}
// signature: xSTQueueSceneAssets(unsigned int, int)
// Range: 0x800620A0 -> 0x800620DC
int xSTQueueSceneAssets() {
    // Local variables
    int result; // r31
    class st_STRAN_SCENE * sdata; // r0
}
// Range: 0x800620E0 -> 0x800623D8
void xSTUnLoadSceneMany(unsigned int sceneID /* r26 */, int type /* r27 */) {
    {
        // Range: 0x800620EC -> 0x8006225C
        // Local variables
        class st_STRAN_SCENE * sdata; // r0
    }
    {
        // Range: 0x8006225C -> 0x800623C4
        // Local variables
        class st_STRAN_SCENE * sdata; // r0
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
    // -> static class xAssetTypeIDEntry typeList[248];
}
// signature: sortAssets(const void *, const void *)
// Range: 0x800623E0 -> 0x800624B4
static int sortAssets(void * a2 /* r30 */) {
    // Local variables
    class st_STRAN_ASSET * ass2; // r0
}
// Range: 0x800624C0 -> 0x80062AD4
void xSTGenerateTOC(class st_STRAN_SCENE * sdata /* r25 */) {
    // Local variables
    class Domain * dom; // r29
    int i; // r31
    unsigned int lastType; // r6
    int typeIndex; // r10

    {
        // Range: 0x80062690 -> 0x800627E8
        // Local variables
        unsigned int type; // r0
        class Goodie * goodie; // r26
        unsigned long long uid; // r28:r27

        {
            // Range: 0x8006269C -> 0x800627E8
            // Local variables
            unsigned int outsize; // r1+0x8
        }
    }

    // References
    // -> static class xAssetTypeIDEntry typeList[248];
    // -> static class xMemWatermark memWatermark;
}
// signature: xSTLoadStep(unsigned int)
// Range: 0x80062AE0 -> 0x80062B8C
float xSTLoadStep() {
    // Local variables
    float pct; // f0

    {
        // Range: 0x80062B0C -> 0x80062B58
        // Local variables
        int i; // r27
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: xSTDisconnect(unsigned int, int)
// Range: 0x80062B90 -> 0x80062B94
void xSTDisconnect() {
}
// Range: 0x80062BA0 -> 0x80062C60
int xSTSwitchScene(unsigned int sid /* r26 */, void * userdata /* r27 */, int (* progmon)(void * userdata, float percent) /* r28 */) {
    // Local variables
    class st_STRAN_SCENE * sdata; // r0
    int i; // r29
    int types[3]; // r1+0x8
}
// Range: 0x80062C60 -> 0x80062CF0
char * xSTAssetName(unsigned long long aid /* r30:r29 */) {
    // Local variables
    class Goodie * goodie; // r0

    {
        // Range: 0x80062C94 -> 0x80062CAC
        // Local variables
        char * name; // r3
    }

    // References
    // -> static char sName[32];
}
// Range: 0x80062CF0 -> 0x80062D90
void * xSTFindAsset(unsigned long long aid /* r31:r29 */, unsigned int * size /* r30 */) {
    // Local variables
    class Goodie * goodie; // r31
}
// signature: xSTAssetCountByType(unsigned int)
// Range: 0x80062D90 -> 0x80063048
int xSTAssetCountByType() {
    // Local variables
    int sum; // r12
    class st_STRAN_SCENE * sdata; // r0
    int scncnt; // r0
    int i; // r31

    {
        // Range: 0x80062FD8 -> 0x80063020
        // Local variables
        int j; // r30
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: xSTAssetCountByTypeMask(unsigned int, unsigned int)
// Range: 0x80063050 -> 0x80063308
int xSTAssetCountByTypeMask() {
    // Local variables
    int sum; // r30
    class st_STRAN_SCENE * sdata; // r0
    int scncnt; // r0
    int i; // r29

    {
        // Range: 0x800632BC -> 0x800632E4
        // Local variables
        int j; // r0
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// Range: 0x80063310 -> 0x80063624
void * xSTFindAssetByTypeMask(unsigned int type /* r17 */, unsigned int mask /* r18 */, int idx /* r19 */, unsigned int * size /* r20 */) {
    // Local variables
    class st_STRAN_SCENE * sdata; // r0
    void * memptr; // r25
    int scncnt; // r0
    int i; // r24
    int sum; // r23
    int cnt; // r22

    {
        // Range: 0x8006356C -> 0x800635E8
        // Local variables
        int j; // r21

        {
            // Range: 0x80063584 -> 0x800635D8
            // Local variables
            int scnIdx; // r4

            {
                // Range: 0x80063598 -> 0x800635D4
                // Local variables
                class st_STRAN_ASSET * asset; // r0
            }
        }
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// Range: 0x80063630 -> 0x80063944
void * xSTFindAssetByType(unsigned int type /* r23 */, int idx /* r24 */, unsigned int * size /* r25 */) {
    // Local variables
    class st_STRAN_SCENE * sdata; // r0
    void * memptr; // r28
    int scncnt; // r0
    int i; // r27
    int sum; // r26
    int cnt; // r19

    {
        // Range: 0x80063890 -> 0x80063910
        // Local variables
        int j; // r6

        {
            // Range: 0x800638A8 -> 0x80063910
            // Local variables
            int scnIdx; // r4

            {
                // Range: 0x800638C8 -> 0x80063904
                // Local variables
                class st_STRAN_ASSET * asset; // r0
            }
        }
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// Range: 0x80063950 -> 0x80063C74
void * xSTFindAssetByType(unsigned int type /* r21 */, int idx /* r22 */, unsigned int * size /* r23 */, unsigned long long * widgetUID /* r24 */) {
    // Local variables
    class st_STRAN_SCENE * sdata; // r0
    void * memptr; // r28
    int scncnt; // r0
    int i; // r27
    int sum; // r26
    int cnt; // r25

    {
        // Range: 0x80063BB0 -> 0x80063C40
        // Local variables
        int j; // r6

        {
            // Range: 0x80063BC8 -> 0x80063C40
            // Local variables
            int scnIdx; // r4

            {
                // Range: 0x80063BE8 -> 0x80063C34
                // Local variables
                class st_STRAN_ASSET * asset; // r0
            }
        }
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: xSTFindAssetByScene(unsigned int, int, unsigned int *, unsigned int *, unsigned long long *)
// Range: 0x80063C80 -> 0x80064010
void * xSTFindAssetByScene(unsigned int * size /* r29 */, unsigned int * type /* r30 */, unsigned long long * widgetUID /* r31 */) {
    // Local variables
    class st_STRAN_SCENE * sdata; // r6
    void * memptr; // r26
    int scncnt; // r0
    int i; // r26
    bool sfound; // r7

    {
        // Range: 0x80063F74 -> 0x80063FF8
        // Local variables
        class st_STRAN_ASSET * asset; // r0
    }

    // References
    // -> static int sindex;
    // -> static class st_STRAN_DATA g_xstdata;
}
// Range: 0x80064010 -> 0x800640C0
int xSTGetAssetInfo(unsigned long long aid /* r29:r28 */, class PKRAssetTOCInfo * tocainfo /* r30 */) {
    // Local variables
    class Goodie * goodie; // r31
}
// Range: 0x800640C0 -> 0x800643FC
int xSTGetAssetInfoByType(unsigned int type /* r23 */, int idx /* r24 */, class PKRAssetTOCInfo * tocainfo /* r25 */) {
    // Local variables
    int found; // r3
    int sum; // r28
    int cnt; // r27
    int scncnt; // r0

    {
        // Range: 0x800641B0 -> 0x800643DC
        // Local variables
        int i; // r26

        {
            // Range: 0x800641B0 -> 0x800643DC
            // Local variables
            class st_STRAN_SCENE * sdata; // r0

            {
                // Range: 0x80064320 -> 0x800643D4
                // Local variables
                int j; // r7

                {
                    // Range: 0x80064340 -> 0x800643C8
                    // Local variables
                    int scnIdx; // r5

                    {
                        // Range: 0x80064358 -> 0x800643BC
                        // Local variables
                        class st_STRAN_ASSET * asset; // r0
                    }
                }
            }
        }
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// Range: 0x80064400 -> 0x8006449C
static class st_STRAN_SCENE * XST_lock_next() {
    // Local variables
    class st_STRAN_SCENE * sdata; // r3
    int i; // r7
    int uselock; // r8

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: XST_find_bySID(unsigned int, int)
// Range: 0x800644A0 -> 0x800645B4
static class st_STRAN_SCENE * XST_find_bySID() {
    // Local variables
    class st_STRAN_SCENE * da_sdata; // r8
    int i; // r9

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// Range: 0x800645C0 -> 0x80064700
void xSTSetLocalizationCode(char * code /* r27 */) {
    // References
    // -> static unsigned short g_localEnum;
    // -> static int LanguageArraySize;
    // -> static class LanguageTableEntry LanguageNamesArray[31];
    // -> static char g_localCode[5];
}
// Range: 0x80064700 -> 0x8006470C
char * xSTGetLocalizationCode() {
    // References
    // -> static char g_localCode[5];
}
// Range: 0x80064710 -> 0x8006471C
unsigned short xSTGetLocalizationEnum() {
    // References
    // -> static unsigned short g_localEnum;
}
