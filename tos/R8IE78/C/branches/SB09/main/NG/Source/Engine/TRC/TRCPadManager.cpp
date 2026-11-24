/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\TRC\TRCPadManager.cpp
*/
// Range: 0x801FF430 -> 0x801FF508
void * TRC::TRCPadManager::TRCPadManager(class TRCPadManager * this /* r29 */) {
    {
        // Range: 0x801FF498 -> 0x801FF4F0
        // Local variables
        unsigned int i; // r10
    }
}
// signature: TRC::TRCPadManager::SetPadAccessoryChangeConfirm(int, int)
// Range: 0x801FF510 -> 0x801FF528
void TRC::TRCPadManager::SetPadAccessoryChangeConfirm() {
}
// signature: TRC::TRCPadManager::SetPadAccessoryConfirm(int)
// Range: 0x801FF530 -> 0x801FF578
void TRC::TRCPadManager::SetPadAccessoryConfirm() {
}
// signature: TRC::TRCPadManager::CheckPadAccessoryChangeConfirm(int)
// Range: 0x801FF580 -> 0x801FF598
bool TRC::TRCPadManager::CheckPadAccessoryChangeConfirm() {
}
// signature: TRC::TRCPadManager::EnforcePadActivity(int)
// Range: 0x801FF5A0 -> 0x801FF5C8
void TRC::TRCPadManager::EnforcePadActivity() {
}
// signature: TRC::TRCPadManager::EnableAccessoryActivity(int, TRC::TRCPadManager::AccessoryType)
// Range: 0x801FF5D0 -> 0x801FF608
void TRC::TRCPadManager::EnableAccessoryActivity() {
}
// Range: 0x801FF610 -> 0x801FF628
bool TRC::TRCPadManager::CheckLockToHolding() {
}
// signature: TRC::TRCPadManager::SetLockToHolding(char)
// Range: 0x801FF630 -> 0x801FF638
void TRC::TRCPadManager::SetLockToHolding() {
}
// Range: 0x801FF640 -> 0x801FF658
bool TRC::TRCPadManager::CheckEscapable() {
}
// signature: TRC::TRCPadManager::SetEscapable(char)
// Range: 0x801FF660 -> 0x801FF668
void TRC::TRCPadManager::SetEscapable() {
}
// signature: TRC::TRCPadManager::CheckPreviousAccessoryActivity(int, TRC::TRCPadManager::AccessoryType)
// Range: 0x801FF670 -> 0x801FF68C
bool TRC::TRCPadManager::CheckPreviousAccessoryActivity() {
}
// signature: TRC::TRCPadManager::CheckAccessoryActivity(int, TRC::TRCPadManager::AccessoryType)
// Range: 0x801FF690 -> 0x801FF6AC
bool TRC::TRCPadManager::CheckAccessoryActivity() {
}
// signature: TRC::TRCPadManager::CheckAccessoryConnected(int)
// Range: 0x801FF6B0 -> 0x801FF6D0
bool TRC::TRCPadManager::CheckAccessoryConnected() {
}
// signature: TRC::TRCPadManager::CheckHolding(TRC::TRCPadManager::AccessoryType)
// Range: 0x801FF6D0 -> 0x801FF6E4
bool TRC::TRCPadManager::CheckHolding() {
}
// Range: 0x801FF6F0 -> 0x801FF788
void TRC::TRCPadManager::DisablePadTRC(class TRCPadManager * this /* r29 */, int padIdx /* r30 */) {
    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// Range: 0x801FF790 -> 0x801FF84C
void TRC::TRCPadManager::DisablePadActivity(class TRCPadManager * this /* r31 */, int padIdx /* r29 */) {
    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// signature: TRC::TRCPadManager::CheckInitialAccessory(int)
// Range: 0x801FF850 -> 0x801FF864
bool TRC::TRCPadManager::CheckInitialAccessory() {
}
// signature: TRC::TRCPadManager::CheckInitialAccessoryPrep(int)
// Range: 0x801FF870 -> 0x801FF884
bool TRC::TRCPadManager::CheckInitialAccessoryPrep() {
}
// signature: TRC::TRCPadManager::ClearInitialAccessoryPrep(int)
// Range: 0x801FF890 -> 0x801FF89C
void TRC::TRCPadManager::ClearInitialAccessoryPrep() {
}
// signature: TRC::TRCPadManager::SetupInitialAccessoryPrep(int)
// Range: 0x801FF8A0 -> 0x801FF8AC
void TRC::TRCPadManager::SetupInitialAccessoryPrep() {
}
// signature: TRC::TRCPadManager::SetupInitialAccessory(int)
// Range: 0x801FF8B0 -> 0x801FF8BC
void TRC::TRCPadManager::SetupInitialAccessory() {
}
// Range: 0x801FF8C0 -> 0x801FF984
void TRC::TRCPadManager::DisableAllPadActivity(class TRCPadManager * this /* r31 */) {
    {
        // Range: 0x801FF8D4 -> 0x801FF938
        // Local variables
        int i; // r26
    }

    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// Range: 0x801FF990 -> 0x801FFA20
void TRC::TRCPadManager::DisableAccessoryActivity(class TRCPadManager * this /* r28 */, int padIdx /* r29 */, enum AccessoryType accessoryType /* r30 */) {
    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// signature: TRC::TRCPadManager::CheckPadConnected(int)
// Range: 0x801FFA20 -> 0x801FFA64
bool TRC::TRCPadManager::CheckPadConnected() {
    // Local variables
    class Pad * pad; // r0
}
// Range: 0x801FFA70 -> 0x801FFE70
void TRC::TRCPadManager::Update(class TRCPadManager * this /* r22 */) {
    {
        // Range: 0x801FFA9C -> 0x801FFE5C
        // Local variables
        int i; // r23

        {
            // Range: 0x801FFA9C -> 0x801FFE5C
            // Local variables
            class Pad * pad; // r0
        }
    }

    // References
    // -> class Module * trcModule;
    // -> static class MsgBoxManager sMsgBoxManager;
}
