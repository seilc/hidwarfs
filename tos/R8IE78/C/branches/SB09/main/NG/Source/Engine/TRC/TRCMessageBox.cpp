/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\TRC\TRCMessageBox.cpp
*/
static class MsgBoxManager sMsgBoxManager; // size: 0x48, address: 0x80782C80
// Range: 0x801FEF70 -> 0x801FEFC0
void * TRC::TRCMsgBox::TRCMsgBox() {
    // References
    // -> struct {} __vt__Q23TRC9TRCMsgBox;
}
// Range: 0x801FEFC0 -> 0x801FF02C
void TRC::TRCMsgBox::Show(class TRCMsgBox * this /* r31 */) {
    // References
    // -> class Module * trcModule;
}
// signature: TRC::TRCMsgBox::Close(TRC::TRCMsgBox::ResponseType)
// Range: 0x801FF030 -> 0x801FF080
void TRC::TRCMsgBox::Close(class TRCMsgBox * this /* r31 */) {
    // References
    // -> class Module * trcModule;
}
// Range: 0x801FF080 -> 0x801FF08C
void TRC::TRCMsgBox::Hidden() {
}
// Range: 0x801FF090 -> 0x801FF09C
class MsgBoxManager * TRC::MsgBoxManager::Instance() {
    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// Range: 0x801FF0A0 -> 0x801FF0C8
void * TRC::MsgBoxManager::MsgBoxManager() {
    {
        // Range: 0x801FF0AC -> 0x801FF0C4
        // Local variables
        int i; // r0
    }
}
// Range: 0x801FF0D0 -> 0x801FF10C
bool TRC::MsgBoxManager::IsBackoutMessageVisible() {
    // Local variables
    int idx; // r0
}
// signature: TRC::MsgBoxManager::Add(TRC::TRCMsgBox *)
// Range: 0x801FF110 -> 0x801FF188
void TRC::MsgBoxManager::Add() {
    // Local variables
    int idx; // r9

    {
        // Range: 0x801FF160 -> 0x801FF170
        // Local variables
        int i; // r0
    }
}
// signature: TRC::MsgBoxManager::Remove(TRC::TRCMsgBox *)
// Range: 0x801FF190 -> 0x801FF20C
void TRC::MsgBoxManager::Remove() {
    // Local variables
    int idx; // r7
}
// Range: 0x801FF210 -> 0x801FF3C8
void TRC::MsgBoxManager::Update(class MsgBoxManager * this /* r29 */) {
    // Local variables
    class TRCModule * trcMod; // r30

    // References
    // -> class Module * trcModule;
}
// signature: TRC::MsgBoxManager::Response(TRC::TRCMsgBox::ResponseType)
// Range: 0x801FF3D0 -> 0x801FF424
void TRC::MsgBoxManager::Response(class MsgBoxManager * this /* r31 */) {
}
