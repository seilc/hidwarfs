/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zModuleMgr.cpp
*/
static class st_XORDEREDARRAY g_modlist; // size: 0x10, address: 0x80822A60
static class st_XORDEREDARRAY g_modlistUpdateSort; // size: 0x10, address: 0x80822A70
static class st_XORDEREDARRAY g_modlistRenderSort; // size: 0x10, address: 0x80822A80
// signature: OrdComp_updatePriority(void *, void *)
// Range: 0x80196590 -> 0x801965C0
int OrdComp_updatePriority() {
}
// signature: OrdComp_renderPriority(void *, void *)
// Range: 0x801965C0 -> 0x801965F0
int OrdComp_renderPriority() {
}
// signature: zModuleMgr_RegisterModule(zModule *, int, const char *, enModulePriority, enModulePriority)
// Range: 0x801965F0 -> 0x80196680
void zModuleMgr_RegisterModule(class zModule * mod /* r30 */) {
    // References
    // -> static class st_XORDEREDARRAY g_modlistRenderSort;
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
    // -> static class st_XORDEREDARRAY g_modlist;
}
// Range: 0x80196690 -> 0x801966CC
void * zModule::zModule() {
    // References
    // -> struct {} __vt__7zModule;
}
// Range: 0x801966D0 -> 0x8019674C
void zModule::Mgr_ScenePrepare() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x801966F8 -> 0x80196720
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x80196750 -> 0x801967C4
void zModule::Mgr_SceneFinish() {
    {
        // Range: 0x80196760 -> 0x8019679C
        // Local variables
        int i; // r29
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x801967E0 -> 0x8019685C
void zModule::Mgr_SceneInit() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x80196808 -> 0x80196830
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x80196860 -> 0x801968DC
void zModule::Mgr_ScenePostInit() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x80196888 -> 0x801968B0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x801968E0 -> 0x8019695C
void zModule::Mgr_SceneSetup() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x80196908 -> 0x80196930
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x80196960 -> 0x801969DC
void zModule::Mgr_ScenePostSetup() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x80196988 -> 0x801969B0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x801969E0 -> 0x80196A5C
void zModule::Mgr_SceneExit() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x80196A08 -> 0x80196A30
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x80196A60 -> 0x80196ADC
void zModule::Mgr_SceneReset() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x80196A88 -> 0x80196AB0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x80196AE0 -> 0x80196B7C
void zModule::Mgr_Timestep(float dt /* f31 */) {
    // Local variables
    int isPaused; // r0
    int num_mod; // r28

    {
        // Range: 0x80196B08 -> 0x80196B58
        // Local variables
        int i; // r27

        {
            // Range: 0x80196B08 -> 0x80196B58
            // Local variables
            class zModule * mod; // r3
        }
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x80196B90 -> 0x80196C2C
void zModule::Mgr_PostPlayerTimestep(float dt /* f31 */) {
    // Local variables
    int isPaused; // r0
    int num_mod; // r28

    {
        // Range: 0x80196BB8 -> 0x80196C08
        // Local variables
        int i; // r27

        {
            // Range: 0x80196BB8 -> 0x80196C08
            // Local variables
            class zModule * mod; // r3
        }
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
