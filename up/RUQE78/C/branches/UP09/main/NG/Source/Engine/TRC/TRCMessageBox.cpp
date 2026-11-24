/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\TRC\TRCMessageBox.cpp
*/
static class MsgBoxManager sMsgBoxManager; // size: 0x48, address: 0x80852C50
// Range: 0x8035A730 -> 0x8035A780
void * TRC::TRCMsgBox::TRCMsgBox() {
    // References
    // -> struct {} __vt__Q23TRC9TRCMsgBox;
}
// Range: 0x8035A780 -> 0x8035A7EC
void TRC::TRCMsgBox::Show(class TRCMsgBox * this /* r31 */) {
    // References
    // -> class Module * trcModule;
}
// signature: TRC::TRCMsgBox::Close(TRC::TRCMsgBox::ResponseType)
// Range: 0x8035A7EC -> 0x8035A83C
void TRC::TRCMsgBox::Close(class TRCMsgBox * this /* r31 */) {
    // References
    // -> class Module * trcModule;
}
// Range: 0x8035A83C -> 0x8035A848
void TRC::TRCMsgBox::Hidden() {
}
// Range: 0x8035A848 -> 0x8035A854
class MsgBoxManager * TRC::MsgBoxManager::Instance() {
    // References
    // -> static class MsgBoxManager sMsgBoxManager;
}
// signature: TRC::MsgBoxManager::Add(TRC::TRCMsgBox *)
// Range: 0x8035A854 -> 0x8035AA04
void TRC::MsgBoxManager::Add() {
    // Local variables
    int idx; // r5

    {
        // Range: 0x8035A88C -> 0x8035A88C
        // Local variables
        int i; // r6
    }
}
// signature: TRC::MsgBoxManager::Remove(TRC::TRCMsgBox *)
// Range: 0x8035AA04 -> 0x8035AA80
void TRC::MsgBoxManager::Remove() {
    // Local variables
    int idx; // r7
}
// Range: 0x8035AA80 -> 0x8035AC44
void TRC::MsgBoxManager::Update(class MsgBoxManager * this /* r29 */) {
    // Local variables
    class TRCModule * trcMod; // r30

    // References
    // -> class Module * trcModule;
}
// signature: TRC::MsgBoxManager::Response(TRC::TRCMsgBox::ResponseType)
// Range: 0x8035AC44 -> 0x8035AC98
void TRC::MsgBoxManager::Response(class MsgBoxManager * this /* r31 */) {
}
