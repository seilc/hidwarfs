/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xGameInterface.cpp
*/
static unsigned int MSG_BOX_HASH; // size: 0x4, address: 0x80808460
static unsigned int AUTOSAVING_INDICATOR_HASH; // size: 0x4, address: 0x80808464
class xGameInterface g_gameInterface; // size: 0x24, address: 0x80808468
// Range: 0x80060450 -> 0x80060684
void xGameInterface::ShowMessageBox(class xGameInterface * this /* r30 */, class TRCMsgBox * mb /* r31 */) {
    {
        // Range: 0x800604E8 -> 0x80060670
        // Local variables
        char * arglist[6]; // r1+0x10

        {
            // Range: 0x80060608 -> 0x80060648
            // Local variables
            int params[2]; // r1+0x8
            unsigned int userInt; // r0
        }
    }

    // References
    // -> static unsigned int MSG_BOX_HASH;
}
// Range: 0x80060690 -> 0x80060784
void xGameInterface::HideMessageBox(class xGameInterface * this /* r28 */) {
    // References
    // -> static unsigned int MSG_BOX_HASH;
}
// Range: 0x80060790 -> 0x8006079C
void xGameInterface::MessageBoxOpened() {
}
// Range: 0x800607A0 -> 0x800607B0
void xGameInterface::MessageBoxClosed() {
}
// Range: 0x800607B0 -> 0x80060814
bool xGameInterface::IsMessageBoxAnimating(class xGameInterface * this /* r31 */) {
}
// Range: 0x80060820 -> 0x80060828
bool xGameInterface::IsMessageBoxVisible() {
}
// Range: 0x80060830 -> 0x80060970
bool xGameInterface::PauseGame(class xGameInterface * this /* r30 */, bool forcePause /* r31 */) {
    {
        // Range: 0x800608D4 -> 0x80060910
        // Local variables
        class EventActionDispatcher_SetPauseState params; // r1+0x8
    }

    // References
    // -> bool renderScaleformComponents;
}
// Range: 0x80060970 -> 0x800609EC
void xGameInterface::ResumeGame(class xGameInterface * this /* r30 */, bool forceResume /* r31 */) {
}
// Range: 0x800609F0 -> 0x80060A00
int xGameInterface::GetPlayerPort() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80060A00 -> 0x80060A04
bool xGameInterface::IsInMainMenu() {
}
// Range: 0x80060A10 -> 0x80060A54
void xGameInterface::ReturnToMainMenu() {
    // References
    // -> char * SCENE_LAYER_MNUS;
    // -> class zGlobals globals;
}
// Range: 0x80060A60 -> 0x80060A74
char * xGameInterface::GetGameName() {
}
// Range: 0x80060A80 -> 0x80060A84
void xGameInterface::ShowAutosavingIndicator() {
}
// Range: 0x80060A90 -> 0x80060A94
void xGameInterface::HideAutosavingIndicator() {
}
// Range: 0x80060AA0 -> 0x80060AB4
void xGameInterface_SceneSetup() {
    // References
    // -> class xGameInterface g_gameInterface;
}
// Range: 0x80060AC0 -> 0x80060AD8
void xGameInterface_SceneExit() {
    // References
    // -> class xGameInterface g_gameInterface;
}
