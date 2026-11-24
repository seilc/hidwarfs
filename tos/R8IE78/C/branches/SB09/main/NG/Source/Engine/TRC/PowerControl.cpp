/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\TRC\PowerControl.cpp
*/
bool shutdown; // size: 0x1, address: 0x807829E0
bool restartOnShutdown; // size: 0x1, address: 0x807829E1
bool wiiMenuOnShutdown; // size: 0x1, address: 0x807829E2
bool dataMgrOnShutdown; // size: 0x1, address: 0x807829E3
static bool (* shutdownCallback)(); // size: 0x4, address: 0x807829E4
// Range: 0x801FEB40 -> 0x801FEB74
void TRC::ResetCallback() {
    // References
    // -> bool dataMgrOnShutdown;
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> bool shutdown;
}
// Range: 0x801FEB80 -> 0x801FEBB4
void TRC::PowerCallback() {
    // References
    // -> bool dataMgrOnShutdown;
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> bool shutdown;
}
// Range: 0x801FEBC0 -> 0x801FEBF4
void TRC::WiiMenuCallback() {
    // References
    // -> bool dataMgrOnShutdown;
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> bool shutdown;
}
// Range: 0x801FEC00 -> 0x801FEC34
void TRC::WiiDataMgrCallback() {
    // References
    // -> bool dataMgrOnShutdown;
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> bool shutdown;
}
// Range: 0x801FEC40 -> 0x801FEC54
bool (* TRC::SetShutdownCallback(bool (* callback)() /* r0 */))() {
    // Local variables
    bool (* oldCallback)(); // r0

    // References
    // -> static bool (* shutdownCallback)();
}
// Range: 0x801FEC60 -> 0x801FEC6C
bool TRC::IsShutdownInProgress() {
    // References
    // -> bool shutdown;
}
// Range: 0x801FEC70 -> 0x801FEDDC
void TRC::ProcessShutdown() {
    {
        // Range: 0x801FEC8C -> 0x801FEDC8
        // Local variables
        bool shutdownAllowed; // r3
        unsigned int screenMode; // r0
        class _GXRenderModeObj * renderMode; // r3
    }

    // References
    // -> bool dataMgrOnShutdown;
    // -> bool wiiMenuOnShutdown;
    // -> bool restartOnShutdown;
    // -> static bool (* shutdownCallback)();
    // -> class _GXRenderModeObj GXEurgb60Hz480IntDf;
    // -> class _GXRenderModeObj GXPal528IntDf;
    // -> class _GXRenderModeObj GXNtsc480IntDf;
    // -> bool shutdown;
}
