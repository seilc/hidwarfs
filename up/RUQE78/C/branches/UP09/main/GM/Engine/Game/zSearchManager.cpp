/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zSearchManager.cpp
*/
static class zSearchManager gSearchManager; // size: 0x64, address: 0x80845924
static class SearchTaskEntry gSearchTasks[16]; // size: 0xC0, address: 0x80845988
class zDelegateP2 releaseObserver; // size: 0x8, address: 0x80845A48
// signature: zSearchTask::Execute(float)
// Range: 0x802CC9E0 -> 0x802CCA40
enum eTaskState zSearchTask::Execute(class zSearchTask * this /* r31 */) {
}
// Range: 0x802C9640 -> 0x802C964C
void zSearchTask::Cleanup() {
}
// Range: 0x802C9100 -> 0x802C9104
void zSearchManager::SceneInit() {
}
// Range: 0x802C9110 -> 0x802C94C0
void zSearchManager::SceneSetup(class zSearchManager * this /* r30 */) {
    // References
    // -> class zDelegateP2 releaseObserver;
    // -> struct {} __vt__29zSearchMapCreatorNavMeshGroup;
    // -> struct {} __vt__24zSearchMapCreatorNavMesh;
}
// Range: 0x802C9570 -> 0x802C9640
void zSearchManager::SceneReset() {
    {
        // Range: 0x802C95F0 -> 0x802C9610
        // Local variables
        int i; // r29
    }

    // References
    // -> static class SearchTaskEntry gSearchTasks[16];
}
// Range: 0x802C9650 -> 0x802C9654
void zSearchManager::SceneExit() {
}
// signature: zSearchManager::Timestep(float)
// Range: 0x802C9660 -> 0x802C9668
void zSearchManager::Timestep() {
}
// Range: 0x802C9670 -> 0x802C9770
bool zSearchManager::RunSearch(class zSearchStrategy * search /* r25 */, class zDelegateP0 * observer /* r26 */) {
    // Local variables
    int index; // r28

    {
        // Range: 0x802C9684 -> 0x802C96D4
        // Local variables
        int i; // r27
    }

    // References
    // -> class zDelegateP2 releaseObserver;
    // -> static class zSearchManager gSearchManager;
    // -> static class SearchTaskEntry gSearchTasks[16];
}
// Range: 0x802C9770 -> 0x802C9798
void zSearchManager_Startup() {
    // References
    // -> static class zSearchManager gSearchManager;
}
