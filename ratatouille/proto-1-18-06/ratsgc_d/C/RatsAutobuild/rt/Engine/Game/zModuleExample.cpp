/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zModuleExample.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803249CC -> 0x803251C8
*/
enum en_VERBOSE_MSGLEVEL {
    DBML_NONE = 0,
    DBML_RELDISP = 1,
    DBML_DISP = 2,
    DBML_USER = 3,
    DBML_ERR = 4,
    DBML_TIME = 5,
    DBML_WARN = 6,
    DBML_VALID = 7,
    DBML_INFO = 8,
    DBML_DBG = 9,
    DBML_TEST = 10,
    DBML_VDBG = 11,
    DBML_SPEW = 12,
};
static enum en_VERBOSE_MSGLEVEL egMgsLvl; // size: 0x4, address: 0x80D678A8
static class zMODExample * g_mod_example; // size: 0x4, address: 0x80D6B9E0
static signed char init; // size: 0x1, address: 0x80D6B9F0
// total size: 0x1C
class zMODExample : public zModule {};
static class zMODExample mod_example; // size: 0x1C, address: 0x80D33EE0
// Range: 0x803249CC -> 0x80324A60
void zModuleExample_Startup() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
    // -> static class zMODExample mod_example;
    // -> static class zMODExample * g_mod_example;
    // -> static signed char init;
}

// total size: 0x48
struct {} zModule::__vtable; // size: 0x48, address: 0x8052DCE8
enum enModulePriority {
    MODULE_PRIORITY_EARLY = 0,
    MODULE_PRIORITY_NORMAL = 1,
    MODULE_PRIORITY_LATE = 2,
};
// total size: 0x1C
struct zModule {
    // Members
    int flg_skipUpdates : 1; // offset 0x0, size 0x4
    int flg_skipRenders : 1; // offset 0x0, size 0x4
    int flg_useBucketRender : 1; // offset 0x0, size 0x4
    int flg_useLayerRender : 1; // offset 0x0, size 0x4
    int flg_updateWhenPaused : 1; // offset 0x0, size 0x4
    int flg_updateInCinematic : 1; // offset 0x0, size 0x4
    int flg_notUsed : 26; // offset 0x0, size 0x4
protected:
    int tag_module; // offset 0x4, size 0x4
    const char * nam_module; // offset 0x8, size 0x4
    enum enModulePriority updatePriority; // offset 0xC, size 0x4
    enum enModulePriority renderPriority; // offset 0x10, size 0x4
    enum zLayerType lastAlphaLayer; // offset 0x14, size 0x4
public:
    void * __vptr$; // offset 0x18, size 0x4
};
// Range: 0x80324AC0 -> 0x80324AF4
void zModuleExample_Shutdown() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324AF4 -> 0x80324B58
void zMODExample::ModulePrepUse() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324B58 -> 0x80324BD4
void zMODExample::ScenePrepare() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324BD4 -> 0x80324C50
void zMODExample::SceneFinish() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324C50 -> 0x80324CB4
void zMODExample::SceneInit() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324CB4 -> 0x80324D18
void zMODExample::ScenePostInit() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324D18 -> 0x80324D7C
void zMODExample::SceneSetup() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324D7C -> 0x80324DE0
void zMODExample::ScenePostSetup() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324DE0 -> 0x80324E44
void zMODExample::SceneReset() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324E44 -> 0x80324EC0
void zMODExample::SceneExit() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324EC0 -> 0x80324F24
void zMODExample::Timestep() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324F24 -> 0x80324F88
void zMODExample::PostTimestep() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324F88 -> 0x80324FEC
void zMODExample::RenderPrep() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80324FEC -> 0x80325050
void zMODExample::RenderDone() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// Range: 0x80325050 -> 0x80325144
void zMODExample::RenderToBuckets() {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

enum zLayerType {
    eLAYER_FIRST = 0,
    eLAYER_PREPICKUP = 1,
    eLAYER_POSTPICKUP = 2,
    eLAYER_PREOOB = 3,
    eLAYER_POSTOOB = 4,
    eLAYER_PRECUTSCENE = 5,
    eLAYER_POSTCUTSCENE = 6,
    eLAYER_PRENPC = 7,
    eLAYER_POSTNPC = 8,
    eLAYER_PRESHADOW = 9,
    eLAYER_POSTSHADOW = 10,
    eLAYER_PREDECAL = 11,
    eLAYER_POSTDECAL = 12,
    eLAYER_PREFX = 13,
    eLAYER_POSTFX = 14,
    eLAYER_PREPARTICLES = 15,
    eLAYER_POSTPARTICLES = 16,
    eLAYER_PRENORMAL4 = 17,
    eLAYER_PRENORMAL3 = 18,
    eLAYER_PRENORMAL2 = 19,
    eLAYER_PRENORMAL = 20,
    eLAYER_NORMAL = 21,
    eLAYER_POSTNORMAL = 22,
    eLAYER_POSTNORMAL2 = 23,
    eLAYER_POSTNORMAL3 = 24,
    eLAYER_POSTNORMAL4 = 25,
    eLAYER_PREPTANK = 26,
    eLAYER_POSTPTANK = 27,
    eLAYER_PRELASTFX = 28,
    eLAYER_POSTLASTFX = 29,
    eLAYER_PRELAST = 30,
    eLAYER_LAST = 31,
    eLAYER_COUNT = 32,
};
// Range: 0x80325144 -> 0x803251C8
void zMODExample::RenderAlphaLayer(enum zLayerType alphaLayer /* r1+0x8 */) {
    // References
    // -> static enum en_VERBOSE_MSGLEVEL egMgsLvl;
}

// total size: 0x48
struct {} ModuleExample::zMODExample::__vtable; // size: 0x48, address: 0x8052DCA0

