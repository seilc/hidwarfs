/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xGameInterface.cpp
*/
static unsigned int MSG_BOX_HASH; // size: 0x4, address: 0x80720184
static unsigned int AUTOSAVING_INDICATOR_HASH; // size: 0x4, address: 0x80720188
class xGameInterface g_gameInterface; // size: 0x1C, address: 0x8072018C
// Range: 0x80032780 -> 0x800327C0
void * xGameInterface::xGameInterface() {
    // References
    // -> struct {} __vt__14xGameInterface;
}
// Range: 0x800327C0 -> 0x80032934
void xGameInterface::ShowMessageBox(class xGameInterface * this /* r30 */, class TRCMsgBox * mb /* r31 */) {
    {
        // Range: 0x800327F8 -> 0x80032920
        // Local variables
        char * arglist[6]; // r1+0x8
    }

    // References
    // -> static unsigned int MSG_BOX_HASH;
}
// Range: 0x80032940 -> 0x800329BC
void xGameInterface::HideMessageBox(class xGameInterface * this /* r31 */) {
    // References
    // -> static unsigned int MSG_BOX_HASH;
}
// Range: 0x800329C0 -> 0x800329CC
void xGameInterface::MessageBoxOpened() {
}
// Range: 0x800329D0 -> 0x800329E0
void xGameInterface::MessageBoxClosed() {
}
// Range: 0x800329E0 -> 0x80032A44
bool xGameInterface::IsMessageBoxAnimating(class xGameInterface * this /* r31 */) {
}
// Range: 0x80032A50 -> 0x80032A58
bool xGameInterface::IsMessageBoxVisible() {
}
// Range: 0x80032A60 -> 0x80032B34
bool xGameInterface::PauseGame(class xGameInterface * this /* r30 */, bool forcePause /* r31 */) {
}
// signature: xGameInterface::ResumeGame(bool, bool)
// Range: 0x80032B40 -> 0x80032BB4
void xGameInterface::ResumeGame(class xGameInterface * this /* r30 */, bool forceResume /* r31 */) {
}
// Range: 0x80032BC0 -> 0x80032BD0
int xGameInterface::GetPlayerPort() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80032BD0 -> 0x80032BD4
bool xGameInterface::IsInMainMenu() {
}
// Range: 0x80032BE0 -> 0x80032C24
void xGameInterface::ReturnToMainMenu() {
    // References
    // -> char * SCENE_LAYER_MNUS;
    // -> class zGlobals globals;
}
// Range: 0x80032C30 -> 0x80032C80
char * xGameInterface::GetGameName() {
    // Local variables
    char * str; // r0
}
// Range: 0x80032C80 -> 0x80032CD0
char * xGameInterface::GetGameComment() {
    // Local variables
    char * str; // r0
}
// Range: 0x80032CD0 -> 0x80032D00
void xGameInterface::HideAutosavingIndicator() {
}
