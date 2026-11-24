/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\TRC\TRCPadManager.cpp
*/
// Range: 0x8035AC98 -> 0x8035AD84
void * TRC::TRCPadManager::TRCPadManager(class TRCPadManager * this /* r29 */) {
}
// signature: TRC::TRCPadManager::EnforcePadActivity(int)
// Range: 0x8035AD84 -> 0x8035ADA8
void TRC::TRCPadManager::EnforcePadActivity() {
}
// signature: TRC::TRCPadManager::EnableAccessoryActivity(int, TRC::TRCPadManager::AccessoryType)
// Range: 0x8035ADA8 -> 0x8035ADC0
void TRC::TRCPadManager::EnableAccessoryActivity() {
}
// Range: 0x8035ADC0 -> 0x8035AE90
void TRC::TRCPadManager::DisablePadActivity(class TRCPadManager * this /* r31 */, int padIdx /* r29 */) {
    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// Range: 0x8035AE90 -> 0x8035AF30
void TRC::TRCPadManager::DisableAllPadActivity(class TRCPadManager * this /* r25 */) {
    {
        // Range: 0x8035AEAC -> 0x8035AEF4
        // Local variables
        int i; // r26
    }

    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// Range: 0x8035AF30 -> 0x8035B184
void TRC::TRCPadManager::Update(class TRCPadManager * this /* r21 */) {
    {
        // Range: 0x8035AF6C -> 0x8035B154
        // Local variables
        int i; // r22

        {
            // Range: 0x8035AF6C -> 0x8035B154
            // Local variables
            class Pad * pad; // r0

            {
                // Range: 0x8035AF6C -> 0x8035B08C
                // Local variables
                char strKey[32]; // r1+0x28
            }
            {
                // Range: 0x8035B0D4 -> 0x8035B154
                // Local variables
                char strKey[32]; // r1+0x8
            }
        }
    }

    // References
    // -> static class MsgBoxManager sMsgBoxManager;
    // -> bool renderScaleformComponents;
}
