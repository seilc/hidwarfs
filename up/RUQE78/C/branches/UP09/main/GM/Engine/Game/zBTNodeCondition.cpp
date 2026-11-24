/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBTNodeCondition.cpp
*/
// Range: 0x800C0DC0 -> 0x800C0E30
void zBTConditionTask::Setup(class zBTConditionTask * this /* r31 */) {
}
// signature: zBTConditionTask::SelfDone(eTaskState)
// Range: 0x800C0E30 -> 0x800C0E7C
void zBTConditionTask::SelfDone() {
}
// Range: 0x800C0E80 -> 0x800C0EE4
void zBTConditionTask::Cleanup(class zBTConditionTask * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// signature: zBTInstantConditionTask::Execute(float)
// Range: 0x800C0EF0 -> 0x800C0F50
enum eTaskState zBTInstantConditionTask::Execute(class zBTInstantConditionTask * this /* r31 */) {
    // Local variables
    bool result; // r3
}
// signature: zBTMonitoringConditionTask::Execute(float)
// Range: 0x800C0F50 -> 0x800C0FB0
enum eTaskState zBTMonitoringConditionTask::Execute(class zBTMonitoringConditionTask * this /* r31 */) {
    // Local variables
    bool result; // r3
}
// signature: zBTNodeCondition::Setup(Sext::BTNodeBase *)
// Range: 0x800C0FB0 -> 0x800C0FC0
void zBTNodeCondition::Setup() {
}
// Range: 0x800C0FC0 -> 0x800C10BC
class zBTTask * zBTNodeCondition::CreateTask(class zBTNodeCondition * this /* r31 */) {
    // Local variables
    class zBTConditionTask * task; // r3

    // References
    // -> struct {} __vt__26zBTMonitoringConditionTask;
    // -> struct {} __vt__23zBTInstantConditionTask;
    // -> class zFactory factory;
}
