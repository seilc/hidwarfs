/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBTNodeAction.cpp
*/
// Range: 0x800C0900 -> 0x800C09E8
void zBTActionTask::Setup(class zBTActionTask * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x800C0A30 -> 0x800C0AA4
enum eTaskState zBTActionTask::Execute(class zBTActionTask * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800C0AC0 -> 0x800C0B54
void zBTActionTask::SelfDone(class zBTActionTask * this /* r30 */, enum eTaskState returnState /* r31 */) {
}
// Range: 0x800C0B70 -> 0x800C0CAC
void zBTActionTask::Cleanup(class zBTActionTask * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x800C0CB0 -> 0x800C0CBC
void zBTActionTask::ResumeTask() {
}
// signature: zBTNodeAction::Setup(Sext::BTNodeBase *)
// Range: 0x800C0CC0 -> 0x800C0CC8
void zBTNodeAction::Setup() {
}
// Range: 0x800C0CD0 -> 0x800C0D54
class zBTTask * zBTNodeAction::CreateTask(class zBTNodeAction * this /* r31 */) {
    // References
    // -> struct {} __vt__13zBTActionTask;
    // -> class zFactory factory;
}
// Range: 0x800C0D60 -> 0x800C0DAC
void zBTNodeAction::DestroyTask(class zBTTask * task /* r31 */) {
    // References
    // -> class zFactory factory;
}
