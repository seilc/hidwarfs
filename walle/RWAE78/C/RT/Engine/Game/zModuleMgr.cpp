/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zModuleMgr.cpp
*/
static class st_XORDEREDARRAY g_modlist; // size: 0x10, address: 0x80791340
static class st_XORDEREDARRAY g_modlistUpdateSort; // size: 0x10, address: 0x80791350
static class st_XORDEREDARRAY g_modlistRenderSort; // size: 0x10, address: 0x80791360
// signature: OrdComp_updatePriority(void *, void *)
// Range: 0x800EF9B0 -> 0x800EF9E0
int OrdComp_updatePriority() {
}
// signature: OrdComp_renderPriority(void *, void *)
// Range: 0x800EF9E0 -> 0x800EFA10
int OrdComp_renderPriority() {
}
// signature: zModuleMgr_RegisterModule(zModule *, int, const char *, enModulePriority, enModulePriority)
// Range: 0x800EFA10 -> 0x800EFA9C
void zModuleMgr_RegisterModule(class zModule * mod /* r31 */) {
    // References
    // -> static class st_XORDEREDARRAY g_modlistRenderSort;
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
    // -> static class st_XORDEREDARRAY g_modlist;
}
// Range: 0x800EFAB0 -> 0x800EFAEC
void * zModule::zModule() {
    // References
    // -> struct {} __vt__7zModule;
}
// signature: OrdTest_moduleID(const void *, void *)
// Range: 0x800EFAF0 -> 0x800EFB20
int OrdTest_moduleID() {
    // Local variables
    int id; // r5
}
// Range: 0x800EFB20 -> 0x800EFB7C
class zModule * zModule::Mgr_FindModule(int moduleID /* r1+0x8 */) {
    // Local variables
    int idx; // r0

    // References
    // -> static class st_XORDEREDARRAY g_modlist;
}
// Range: 0x800EFB80 -> 0x800EFBFC
void zModule::Mgr_ScenePrepare() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800EFBA8 -> 0x800EFBD0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800EFC00 -> 0x800EFC74
void zModule::Mgr_SceneFinish() {
    {
        // Range: 0x800EFC10 -> 0x800EFC4C
        // Local variables
        int i; // r29
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800EFC80 -> 0x800EFCFC
void zModule::Mgr_SceneInit() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800EFCA8 -> 0x800EFCD0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800EFD00 -> 0x800EFD7C
void zModule::Mgr_ScenePostInit() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800EFD28 -> 0x800EFD50
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800EFD80 -> 0x800EFDFC
void zModule::Mgr_SceneSetup() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800EFDA8 -> 0x800EFDD0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800EFE00 -> 0x800EFE7C
void zModule::Mgr_ScenePostSetup() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800EFE28 -> 0x800EFE50
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800EFE80 -> 0x800EFEFC
void zModule::Mgr_SceneExit() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800EFEA8 -> 0x800EFED0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800EFF00 -> 0x800EFF7C
void zModule::Mgr_SceneReset() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800EFF28 -> 0x800EFF50
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800EFF80 -> 0x800F001C
void zModule::Mgr_Timestep(float dt /* f31 */) {
    // Local variables
    int isPaused; // r0
    int num_mod; // r28

    {
        // Range: 0x800EFFA8 -> 0x800EFFF8
        // Local variables
        int i; // r27

        {
            // Range: 0x800EFFA8 -> 0x800EFFF8
            // Local variables
            class zModule * mod; // r3
        }
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800F0030 -> 0x800F00CC
void zModule::Mgr_PostPlayerTimestep(float dt /* f31 */) {
    // Local variables
    int isPaused; // r0
    int num_mod; // r28

    {
        // Range: 0x800F0058 -> 0x800F00A8
        // Local variables
        int i; // r27

        {
            // Range: 0x800F0058 -> 0x800F00A8
            // Local variables
            class zModule * mod; // r3
        }
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800F00D0 -> 0x800F016C
void zModule::Mgr_PostPhysicsTimestep(float dt /* f31 */) {
    // Local variables
    int isPaused; // r0
    int num_mod; // r28

    {
        // Range: 0x800F00F8 -> 0x800F0148
        // Local variables
        int i; // r27

        {
            // Range: 0x800F00F8 -> 0x800F0148
            // Local variables
            class zModule * mod; // r3
        }
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
