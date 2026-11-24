/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zModuleMgr.cpp
*/
static class st_XORDEREDARRAY g_modlist; // size: 0x10, address: 0x807530B8
static class st_XORDEREDARRAY g_modlistUpdateSort; // size: 0x10, address: 0x807530C8
static class st_XORDEREDARRAY g_modlistRenderSort; // size: 0x10, address: 0x807530D8
// Range: 0x800D5F10 -> 0x800D5F70
void zModule::Mgr_Shutdown() {
    // References
    // -> static class st_XORDEREDARRAY g_modlist;
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
    // -> static class st_XORDEREDARRAY g_modlistRenderSort;
}
// signature: OrdComp_updatePriority(void *, void *)
// Range: 0x800D5F70 -> 0x800D5FA0
int OrdComp_updatePriority() {
}
// signature: OrdComp_renderPriority(void *, void *)
// Range: 0x800D5FA0 -> 0x800D5FD0
int OrdComp_renderPriority() {
}
// signature: zModuleMgr_RegisterModule(zModule *, int, const char *, enModulePriority, enModulePriority)
// Range: 0x800D5FD0 -> 0x800D605C
void zModuleMgr_RegisterModule(class zModule * mod /* r31 */) {
    // References
    // -> static class st_XORDEREDARRAY g_modlistRenderSort;
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
    // -> static class st_XORDEREDARRAY g_modlist;
}
// Range: 0x800D6060 -> 0x800D609C
void * zModule::zModule() {
    // References
    // -> struct {} __vt__7zModule;
}
// Range: 0x800D60A0 -> 0x800D6104
void zModule::Mgr_ScenePrepare() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800D60B8 -> 0x800D60F0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800D6110 -> 0x800D6174
void zModule::Mgr_SceneFinish() {
    {
        // Range: 0x800D6120 -> 0x800D6160
        // Local variables
        int i; // r29
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800D6180 -> 0x800D61E4
void zModule::Mgr_SceneInit() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800D6198 -> 0x800D61D0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800D61F0 -> 0x800D6254
void zModule::Mgr_ScenePostInit() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800D6208 -> 0x800D6240
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800D6260 -> 0x800D62C4
void zModule::Mgr_SceneSetup() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800D6278 -> 0x800D62B0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800D62D0 -> 0x800D6334
void zModule::Mgr_ScenePostSetup() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800D62E8 -> 0x800D6320
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800D6340 -> 0x800D63A4
void zModule::Mgr_SceneExit() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800D6358 -> 0x800D6390
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800D63B0 -> 0x800D6414
void zModule::Mgr_SceneReset() {
    // Local variables
    int num_mod; // r29

    {
        // Range: 0x800D63C8 -> 0x800D6400
        // Local variables
        int i; // r28
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800D6420 -> 0x800D64BC
void zModule::Mgr_Timestep(float dt /* f31 */) {
    // Local variables
    int isPaused; // r0
    int num_mod; // r28

    {
        // Range: 0x800D6448 -> 0x800D64A4
        // Local variables
        int i; // r27

        {
            // Range: 0x800D6448 -> 0x800D64A4
            // Local variables
            class zModule * mod; // r3
        }
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
// Range: 0x800D64C0 -> 0x800D655C
void zModule::Mgr_PostPlayerTimestep(float dt /* f31 */) {
    // Local variables
    int isPaused; // r0
    int num_mod; // r28

    {
        // Range: 0x800D64E8 -> 0x800D6544
        // Local variables
        int i; // r27

        {
            // Range: 0x800D64E8 -> 0x800D6544
            // Local variables
            class zModule * mod; // r3
        }
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
}
