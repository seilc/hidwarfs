/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zAchievementsMgr.cpp
*/
static class zAchievementsMgr gAchievementsMgr; // size: 0x1C0, address: 0x80818258
// Range: 0x800998F0 -> 0x80099914
void zAchievementsMgr_Startup() {
    // References
    // -> static class zAchievementsMgr gAchievementsMgr;
}
// Range: 0x80099920 -> 0x8009995C
void zAchievementsMgr::ModulePrepUse() {
}
// signature: zAchievementsMgr::Timestep(float)
// Range: 0x80099960 -> 0x80099A7C
void zAchievementsMgr::Timestep(class zAchievementsMgr * this /* r31 */) {
}
// Range: 0x80099A80 -> 0x80099A98
void zAchievementsMgr::SceneFinish() {
}
// signature: zAchievementsMgr::Award(eAchievementType, xBase *)
// Range: 0x80099AA0 -> 0x80099B74
void zAchievementsMgr::Award() {
    // References
    // -> static class zAchievementsMgr gAchievementsMgr;
    // -> bool achievmentsAllowed;
}
// signature: zAchievementsMgr::Award_Save(xSerial *)
// Range: 0x80099B80 -> 0x80099B94
void zAchievementsMgr::Award_Save() {
    // References
    // -> static class zAchievementsMgr gAchievementsMgr;
}
// signature: zAchievementsMgr::Award_Load(xSerial *)
// Range: 0x80099BA0 -> 0x80099BB8
void zAchievementsMgr::Award_Load() {
    // References
    // -> static class zAchievementsMgr gAchievementsMgr;
}
// Range: 0x80099BC0 -> 0x80099C98
void zAchievementsMgr::AwardFailed() {
    // References
    // -> bool achievmentsAllowed;
    // -> static class zAchievementsMgr gAchievementsMgr;
}
