/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zSearchManager.cpp
*/
static class zSearchManager gSearchManager; // size: 0x5C, address: 0x80773D44
static class SearchTaskEntry gSearchTasks[16]; // size: 0xC0, address: 0x80773DA0
class DelegateP2 releaseObserver; // size: 0x8, address: 0x80773E60
// signature: zSearchTask::Execute(float)
// Range: 0x801AB9C0 -> 0x801ABA34
enum eTaskState zSearchTask::Execute(class zSearchTask * this /* r30 */) {
    {
        // Range: 0x801AB9D4 -> 0x801ABA1C
        // Local variables
        int i; // r31
    }
}
// Range: 0x801A9A20 -> 0x801A9C2C
void zSearchManager::SceneSetup(class zSearchManager * this /* r31 */) {
    // References
    // -> class DelegateP2 releaseObserver;
    // -> struct {} __vt__29zSearchMapCreatorNavMeshGroup;
    // -> struct {} __vt__24zSearchMapCreatorNavMesh;
}
// Range: 0x801A9D10 -> 0x801A9D88
void zSearchManager::SceneReset() {
    {
        // Range: 0x801A9D34 -> 0x801A9D74
        // Local variables
        int i; // r27
    }

    // References
    // -> static class SearchTaskEntry gSearchTasks[16];
}
// Range: 0x801A9D90 -> 0x801A9D98
void zSearchManager::SceneExit() {
}
// signature: zSearchManager::Timestep(float)
// Range: 0x801A9DA0 -> 0x801A9DA8
void zSearchManager::Timestep() {
}
// signature: zSearchManager::GetMap(unsigned long long)
// Range: 0x801A9DB0 -> 0x801A9E04
class zSearchMap * zSearchManager::GetMap() {
    // References
    // -> static class zSearchManager gSearchManager;
}
// Range: 0x801A9E10 -> 0x801A9F18
bool zSearchManager::RunSearch(class zSearchStrategy * search /* r23 */, class DelegateP0 * observer /* r24 */) {
    // Local variables
    int index; // r26

    {
        // Range: 0x801A9E20 -> 0x801A9E8C
        // Local variables
        int i; // r25
    }

    // References
    // -> class DelegateP2 releaseObserver;
    // -> static class zSearchManager gSearchManager;
    // -> static class SearchTaskEntry gSearchTasks[16];
}
// Range: 0x801A9F20 -> 0x801A9FA8
void zSearchManager::AbortSearch(class zSearchStrategy * search /* r25 */) {
    {
        // Range: 0x801A9F30 -> 0x801A9F94
        // Local variables
        int i; // r26
    }

    // References
    // -> static class SearchTaskEntry gSearchTasks[16];
    // -> static class zSearchManager gSearchManager;
}
// signature: zSearchManager::SearchDone(zSchedulerTask *, eTaskState)
// Range: 0x801A9FB0 -> 0x801AA038
void zSearchManager::SearchDone() {
    {
        // Range: 0x801A9FBC -> 0x801AA024
        // Local variables
        int i; // r0
    }

    // References
    // -> static class SearchTaskEntry gSearchTasks[16];
}
// Range: 0x801AA040 -> 0x801AA068
void zSearchManager_Startup() {
    // References
    // -> static class zSearchManager gSearchManager;
}
