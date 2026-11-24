/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xstransvc.cpp
*/
static int g_straninit; // size: 0x4, address: 0x80812EB0
static class st_STRAN_DATA g_xstdata; // size: 0x2504, address: 0x80812EB4
static char g_localCode[5]; // size: 0x5, address: 0x807A2350
static unsigned short g_localEnum; // size: 0x2, address: 0x808153B8
static unsigned int g_localDiscLanguageConfig; // size: 0x4, address: 0x808153BC
static int sindex; // size: 0x4, address: 0x808153C0
static char fname[64]; // size: 0x40, address: 0x808153C8
// Range: 0x80080330 -> 0x80080428
int xSTStartup() {
    // References
    // -> static class st_STRAN_DATA g_xstdata;
    // -> static int g_straninit;
}
// Range: 0x80080430 -> 0x80080540
int xSTShutdown() {
    // References
    // -> static class st_STRAN_DATA g_xstdata;
    // -> static int g_straninit;
}
// signature: xSTPreLoadScene(unsigned int, void *, int, const char *)
// Range: 0x80080540 -> 0x800806D0
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
// Range: 0x800806D0 -> 0x8008070C
int xSTQueueSceneAssets() {
    // Local variables
    int result; // r31
    class st_STRAN_SCENE * sdata; // r0
}
// Range: 0x80080710 -> 0x80080858
void xSTUnLoadSceneMany(unsigned int sceneID /* r29 */, int type /* r30 */) {
    {
        // Range: 0x8008071C -> 0x800807B4
        // Local variables
        class st_STRAN_SCENE * sdata; // r0
    }
    {
        // Range: 0x800807B4 -> 0x8008083C
        // Local variables
        class st_STRAN_SCENE * sdata; // r0
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: sortAssets(const void *, const void *)
// Range: 0x80080860 -> 0x800808CC
static int sortAssets() {
}
// Range: 0x800808D0 -> 0x80080D80
void xSTGenerateTOC(class st_STRAN_SCENE * sdata /* r28 */) {
    // Local variables
    class Domain * dom; // r29
    int i; // r30
    unsigned int lastType; // r6
    int typeIndex; // r10

    {
        // Range: 0x80080A9C -> 0x80080ABC
        // Local variables
        class EntityHandleBase * goodie; // r0
        unsigned long long uid; // r0:r0
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xSTLoadStep(unsigned int)
// Range: 0x80080D80 -> 0x80080E2C
float xSTLoadStep() {
    // Local variables
    float pct; // f0

    {
        // Range: 0x80080DAC -> 0x80080DF8
        // Local variables
        int i; // r27
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: xSTDisconnect(unsigned int, int)
// Range: 0x80080E30 -> 0x80080E34
void xSTDisconnect() {
}
// signature: xSTSwitchScene(unsigned int, void *)
// Range: 0x80080E40 -> 0x80080EB8
int xSTSwitchScene(unsigned int sid /* r29 */) {
    // Local variables
    int i; // r30
    int types[3]; // r1+0x8
}
// signature: xSTAssetCountByType(unsigned int)
// Range: 0x80080EC0 -> 0x80081178
int xSTAssetCountByType() {
    // Local variables
    int sum; // r12
    class st_STRAN_SCENE * sdata; // r0
    int scncnt; // r0
    int i; // r31

    {
        // Range: 0x80081108 -> 0x80081150
        // Local variables
        int j; // r30
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: xSTFindHandleByType(unsigned int, int)
// Range: 0x80081180 -> 0x80081464
class EntityHandleBase * xSTFindHandleByType() {
    // Local variables
    class st_STRAN_SCENE * sdata; // r0
    int scncnt; // r0
    int i; // r31
    int sum; // r30
    int cnt; // r6

    {
        // Range: 0x800813D0 -> 0x80081438
        // Local variables
        int j; // r29

        {
            // Range: 0x800813E8 -> 0x80081438
            // Local variables
            int scnIdx; // r10
        }
    }

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: xSTFindAssetByType(unsigned int, int, unsigned int *)
// Range: 0x80081470 -> 0x800814C0
void * xSTFindAssetByType(unsigned int * size /* r31 */) {
    // Local variables
    class EntityHandleBase * handle; // r3
}
// signature: xSTFindAssetByScene(unsigned int, int, unsigned int *, unsigned int *, unsigned long long *)
// Range: 0x800814C0 -> 0x80081838
void * xSTFindAssetByScene(unsigned int * size /* r29 */, unsigned int * type /* r30 */, unsigned long long * widgetUID /* r31 */) {
    // Local variables
    class st_STRAN_SCENE * sdata; // r6
    void * memptr; // r3
    int scncnt; // r0
    int i; // r28
    bool sfound; // r7

    {
        // Range: 0x800817B4 -> 0x80081820
        // Local variables
        class st_STRAN_ASSET & asset; // r0
    }

    // References
    // -> static int sindex;
    // -> static class st_STRAN_DATA g_xstdata;
}
// Range: 0x80081840 -> 0x800818DC
static class st_STRAN_SCENE * XST_lock_next() {
    // Local variables
    class st_STRAN_SCENE * sdata; // r3
    int i; // r7
    int uselock; // r8

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// signature: XST_find_bySID(unsigned int, int)
// Range: 0x800818E0 -> 0x800819F4
static class st_STRAN_SCENE * XST_find_bySID() {
    // Local variables
    class st_STRAN_SCENE * da_sdata; // r8
    int i; // r9

    // References
    // -> static class st_STRAN_DATA g_xstdata;
}
// Range: 0x80081A00 -> 0x80081B4C
void xSTSetLocalizationCode(char * code /* r27 */) {
    // References
    // -> static unsigned short g_localEnum;
    // -> static int LanguageArraySize;
    // -> static class LanguageTableEntry LanguageNamesArray[31];
    // -> static char g_localCode[5];
}
// Range: 0x80081B50 -> 0x80081B5C
char * xSTGetLocalizationCode() {
    // References
    // -> static char g_localCode[5];
}
// Range: 0x80081B60 -> 0x80081B6C
unsigned short xSTGetLocalizationEnum() {
    // References
    // -> static unsigned short g_localEnum;
}
// signature: xSTGetFontMapping(int, const char **, const char **, const char **)
// Range: 0x80081B70 -> 0x80081B90
void xSTGetFontMapping() {
}
