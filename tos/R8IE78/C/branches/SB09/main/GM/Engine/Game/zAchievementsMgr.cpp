/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zAchievementsMgr.cpp
*/
static class zAchievementsMgr gAchievementsMgr; // size: 0x208, address: 0x8072ECE8
unsigned short ACH26_SBDefeatCount; // size: 0x2, address: 0x8072EEF0
unsigned short ACH40_PTDefeatCount; // size: 0x2, address: 0x8072EEF2
unsigned short ACH41_PTShakeCount; // size: 0x2, address: 0x8072EEF4
unsigned short ACH42_PTTurnUnhappyCount; // size: 0x2, address: 0x8072EEF6
// Range: 0x80051F80 -> 0x80051FA4
void zAchievementsMgr_Startup() {
    // References
    // -> static class zAchievementsMgr gAchievementsMgr;
}
// Range: 0x80051FB0 -> 0x80052010
void zAchievementsMgr::ModulePrepUse(class zAchievementsMgr * this /* r29 */) {
    // References
    // -> unsigned short ACH42_PTTurnUnhappyCount;
    // -> unsigned short ACH41_PTShakeCount;
    // -> unsigned short ACH40_PTDefeatCount;
    // -> unsigned short ACH26_SBDefeatCount;
}
// signature: zAchievementsMgr::Timestep(float)
// Range: 0x80052010 -> 0x800520B8
void zAchievementsMgr::Timestep(class zAchievementsMgr * this /* r31 */) {
}
// Range: 0x800520C0 -> 0x800520D8
void zAchievementsMgr::SceneFinish() {
}
// signature: zAchievementsMgr::Award(eAchievementType, xBase *)
// Range: 0x800520E0 -> 0x800520F8
void zAchievementsMgr::Award(enum eAchievementType achievementType /* r0 */) {
    // References
    // -> static class zAchievementsMgr gAchievementsMgr;
}
// signature: zAchievementsMgr::Award_Save(xSerial *)
// Range: 0x80052100 -> 0x80052110
void zAchievementsMgr::Award_Save() {
    // References
    // -> static class zAchievementsMgr gAchievementsMgr;
}
// Range: 0x80052110 -> 0x80052184
void zAchievementsMgr::Award_Load(class xSerial * s /* r30 */) {
    // References
    // -> unsigned short ACH42_PTTurnUnhappyCount;
    // -> unsigned short ACH41_PTShakeCount;
    // -> unsigned short ACH40_PTDefeatCount;
    // -> unsigned short ACH26_SBDefeatCount;
    // -> static class zAchievementsMgr gAchievementsMgr;
}
// Range: 0x80052190 -> 0x8005219C
void zAchievementsMgr::AwardFailed() {
    // References
    // -> static class zAchievementsMgr gAchievementsMgr;
}
// Range: 0x800521A0 -> 0x800521C8
void zAchievementsMgr::_SetupQueues() {
}
// Range: 0x800521D0 -> 0x800521E4
void zAchievementsMgr::_FlipQueues() {
    // Local variables
    class fixed_queue * temp; // r4
}
// signature: zAchievementsMgr::_Award(eAchievementType, xBase *)
// Range: 0x800521F0 -> 0x800522AC
void zAchievementsMgr::_Award() {
    // References
    // -> bool achievmentsAllowed;
}
// Range: 0x800522B0 -> 0x80052308
void zAchievementsMgr::_AwardFailed(class zAchievementsMgr * this /* r30 */) {
    {
        // Range: 0x800522C4 -> 0x800522F4
        // Local variables
        int i; // r31
    }
}
// Range: 0x80052310 -> 0x800523A0
void zAchievementsMgr::_UpdateProcessingAchievements(class zAchievementsMgr * this /* r31 */) {
}
// Range: 0x800523A0 -> 0x80052414
void zAchievementsMgr::_Award_Save(class zAchievementsMgr * this /* r6 */, class xSerial * s /* r30 */) {
    // References
    // -> unsigned short ACH42_PTTurnUnhappyCount;
    // -> unsigned short ACH41_PTShakeCount;
    // -> unsigned short ACH40_PTDefeatCount;
    // -> unsigned short ACH26_SBDefeatCount;
}
