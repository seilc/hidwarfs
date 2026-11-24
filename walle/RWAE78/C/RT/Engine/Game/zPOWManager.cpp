/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPOWManager.cpp
*/
static class zPOWManager gPOWManager; // size: 0x48, address: 0x80798F88
class zFactory factory; // size: 0x34, address: 0x80798FD0
int POWGroupTID; // size: 0x4, address: 0x80799004
// Range: 0x80182030 -> 0x80182058
void zPOWManager_Startup() {
    // References
    // -> static class zPOWManager gPOWManager;
}
// Range: 0x80182060 -> 0x80182064
void zPOWManager_Shutdown() {
}
// Range: 0x80182070 -> 0x801820F8
void zPOWManager::ScenePrepare(class zPOWManager * this /* r31 */) {
    // References
    // -> int POWGroupTID;
    // -> class zFactory factory;
}
// Range: 0x80182100 -> 0x8018226C
void zPOWManager::SceneSetup() {
    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x80182270 -> 0x80182274
void zPOWManager::SceneReset() {
}
// Range: 0x80182280 -> 0x80182284
void zPOWManager::SceneInit() {
}
// Range: 0x80182290 -> 0x80182318
void zPOWManager::SceneExit() {
    // Local variables
    class zPOWGroup * current; // r31
    class zPOWGroup * last; // r30

    // References
    // -> class zFactory factory;
    // -> int POWGroupTID;
    // -> class zGlobals globals;
}
// signature: zPOWManager::Timestep(float)
// Range: 0x80182320 -> 0x80182324
void zPOWManager::Timestep() {
}
