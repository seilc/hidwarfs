/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\TRC\PowerControl.cpp
*/
bool shutdown; // size: 0x1, address: 0x808529D0
bool restartOnShutdown; // size: 0x1, address: 0x808529D1
bool wiiMenuOnShutdown; // size: 0x1, address: 0x808529D2
static bool (* shutdownCallback)(); // size: 0x4, address: 0x808529D4
// Range: 0x8035A4D8 -> 0x8035A504
void TRC::ResetCallback() {
    // References
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> bool shutdown;
}
// Range: 0x8035A504 -> 0x8035A530
void TRC::PowerCallback() {
    // References
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> bool shutdown;
}
// Range: 0x8035A530 -> 0x8035A544
bool (* TRC::SetShutdownCallback(bool (* callback)() /* r0 */))() {
    // Local variables
    bool (* oldCallback)(); // r0

    // References
    // -> static bool (* shutdownCallback)();
}
// Range: 0x8035A544 -> 0x8035A550
bool TRC::IsShutdownInProgress() {
    // References
    // -> bool shutdown;
}
// Range: 0x8035A550 -> 0x8035A628
void TRC::ProcessShutdown() {
    {
        // Range: 0x8035A568 -> 0x8035A614
        // Local variables
        bool shutdownAllowed; // r3
    }

    // References
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> static bool (* shutdownCallback)();
    // -> bool shutdown;
}
