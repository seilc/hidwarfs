/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xstransvc.cpp
*/
static int g_straninit; // size: 0x4, address: 0x8072AEF0
static class st_STRAN_DATA g_xstdata; // size: 0x2504, address: 0x8072AEF4
static char g_localCode[6]; // size: 0x6, address: 0x806B4188
static unsigned short g_localEnum; // size: 0x2, address: 0x8072D3F8
static unsigned int g_localDiscLanguageConfig; // size: 0x4, address: 0x8072D3FC
int sindex; // size: 0x4, address: 0x8072EC30
static char fname[64]; // size: 0x40, address: 0x8072D400
// Range: 0x80044AB0 -> 0x80044B2C
int xSTStartup() {
    // References
    // -> static class st_STRAN_DATA g_xstdata;
    // -> static int g_straninit;
}
// Range: 0x80044B70 -> 0x80044BAC
int xSTShutdown() {
    // References
    // -> static int g_straninit;
}
// signature: xSTPreLoadScene(unsigned int, void *, int, const char *)
// Range: 0x80044BB0 -> 0x80044D50
int xSTPreLoadScene(unsigned int sid /* r26 */, void * userdata /* r27 */, int flg_hiphop /* r28 */) {
    // Local variables
    int result; // reg65535
    char * sfile; // r30
    int cltver; // r29

    // References
    // -> static unsigned short g_localEnum;
    // -> static char g_localCode[6];
    // -> static char fname[64];
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: xSTQueueSceneAssets(unsigned int, int)
// Range: 0x80044D50 -> 0x80044D8C
int xSTQueueSceneAssets() {
    // Local variables
    int result; // r31
    class st_STRAN_SCENE * sdata; // r0
}
// Range: 0x80044D90 -> 0x80044E18
void xSTUnLoadSceneMany(unsigned int sceneID /* r29 */, int type /* r30 */) {
    {
        // Range: 0x80044D9C -> 0x80044DD4
        // Local variables
        class st_STRAN_SCENE * sdata; // r31
    }
    {
        // Range: 0x80044DD4 -> 0x80044E04
        // Local variables
        class st_STRAN_SCENE * sdata; // r31
    }
}
// signature: sortAssets(const void *, const void *)
// Range: 0x80044E20 -> 0x80044E8C
static int sortAssets() {
}
// Range: 0x80044E90 -> 0x80045058
void xSTGenerateTOC(class st_STRAN_SCENE * sdata /* r31 */) {
    // Local variables
    class Domain * dom; // r28
    int i; // r29
    unsigned int lastType; // r6
    int typeIndex; // r10

    {
        // Range: 0x80044EE8 -> 0x80044F20
        // Local variables
        class EntityHandleBase * goodie; // r0
        unsigned long long uid; // r0:r0
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xSTLoadStep(unsigned int)
// Range: 0x80045060 -> 0x8004510C
float xSTLoadStep() {
    // Local variables
    float pct; // f0

    {
        // Range: 0x80045080 -> 0x800450E8
        // Local variables
        int i; // r27

        {
            // Range: 0x80045080 -> 0x800450E8
            // Local variables
            class st_STRAN_SCENE * sdata; // r3
        }
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: xSTDisconnect(unsigned int, int)
// Range: 0x80045110 -> 0x80045114
void xSTDisconnect() {
}
// signature: xSTSwitchScene(unsigned int, void *)
// Range: 0x80045120 -> 0x8004518C
int xSTSwitchScene(unsigned int sid /* r28 */) {
    // Local variables
    int i; // r29
    int types[3]; // r1+0x8
}
// Range: 0x80045190 -> 0x80045228
int xSTAssetCountByType(unsigned int type /* r28 */) {
    // Local variables
    int sum; // r30
    class st_STRAN_SCENE * sdata; // r0
    int sceneCount; // r0
    int i; // r29

    {
        // Range: 0x800451C4 -> 0x80045210
        // Local variables
        int j; // r0
    }
}
// Range: 0x80045230 -> 0x800452EC
class EntityHandleBase * xSTFindHandleByType(unsigned int type /* r27 */, int idx /* r28 */) {
    // Local variables
    class st_STRAN_SCENE * sdata; // r0
    int scncnt; // r0
    int i; // r30
    int sum; // r29
    int cnt; // r0

    {
        // Range: 0x80045268 -> 0x800452D4
        // Local variables
        int j; // r0

        {
            // Range: 0x80045280 -> 0x800452D4
            // Local variables
            int scnIdx; // r4
        }
    }
}
// signature: xSTFindAssetByType(unsigned int, int, unsigned int *)
// Range: 0x800452F0 -> 0x80045340
void * xSTFindAssetByType(unsigned int * size /* r31 */) {
    // Local variables
    class EntityHandleBase * handle; // r3
}
// Range: 0x80045340 -> 0x80045460
void * xSTFindAssetByScene(unsigned int sceneID /* r23 */, int idx /* r24 */, unsigned int * size /* r25 */, unsigned int * type /* r26 */, unsigned long long * widgetUID /* r31 */) {
    // Local variables
    class st_STRAN_SCENE * sdata; // r30
    void * memptr; // r3
    int scncnt; // r0
    int i; // r28
    bool sfound; // r27

    {
        // Range: 0x800453DC -> 0x80045448
        // Local variables
        class st_STRAN_ASSET & asset; // r0
    }

    // References
    // -> int sindex;
}
// signature: XST_unlock(st_STRAN_SCENE *)
// Range: 0x80045460 -> 0x80045498
static void XST_unlock() {
    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// Range: 0x800454A0 -> 0x8004550C
static void XST_unlock_all() {
    // Local variables
    int i; // r28

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// Range: 0x80045510 -> 0x8004554C
int XST_cnt_locked() {
    // Local variables
    int cnt; // r3
    int i; // r6

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: XST_nth_locked(int)
// Range: 0x80045550 -> 0x800455B0
static class st_STRAN_SCENE * XST_nth_locked() {
    // Local variables
    class st_STRAN_SCENE * sdata; // r6
    int cnt; // r7
    int i; // r8

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: XST_find_bySID(unsigned int, int)
// Range: 0x800455B0 -> 0x80045620
static class st_STRAN_SCENE * XST_find_bySID() {
    // Local variables
    class st_STRAN_SCENE * da_sdata; // r9
    int i; // r10
    class st_STRAN_SCENE * tmp_sdata; // r11

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// Range: 0x80045620 -> 0x80045680
void xSTSetLocalizationCode(char * code /* r31 */) {
    // References
    // -> static unsigned short g_localEnum;
    // -> static char g_localCode[6];
}
// Range: 0x80045680 -> 0x8004568C
char * xSTGetLocalizationCode() {
    // References
    // -> static char g_localCode[6];
}
// Range: 0x80045690 -> 0x8004569C
unsigned short xSTGetLocalizationEnum() {
    // References
    // -> static unsigned short g_localEnum;
}
// signature: xSTGetFontMapping(LanguageID, const char **, const char **, const char **)
// Range: 0x800456A0 -> 0x800456C0
void xSTGetFontMapping() {
}
// signature: Sext::xBaseAsset::CustomFix(long)
// Range: 0x800456C0 -> 0x80045768
void Sext::xBaseAsset::CustomFix() {
    // References
    // -> class RTTID_Hash g_rttidHash[264];
}
