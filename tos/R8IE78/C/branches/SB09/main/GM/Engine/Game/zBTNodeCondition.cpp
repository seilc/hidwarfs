/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTNodeCondition.cpp
*/
// Range: 0x8007F050 -> 0x8007F098
void * zBTConditionTask::zBTConditionTask(class zBTConditionTask * this /* r31 */) {
    // References
    // -> struct {} __vt__16zBTConditionTask;
}
// Range: 0x8007F0A0 -> 0x8007F128
void zBTConditionTask::Setup(class zBTConditionTask * this /* r31 */) {
}
// signature: zBTConditionTask::SelfDone(eTaskState)
// Range: 0x8007F130 -> 0x8007F17C
void zBTConditionTask::SelfDone() {
}
// Range: 0x8007F180 -> 0x8007F1DC
void zBTConditionTask::Cleanup(class zBTConditionTask * this /* r30 */) {
    // References
    // -> class Factory factory;
}
// signature: zBTInstantConditionTask::Execute(float)
// Range: 0x8007F1E0 -> 0x8007F240
enum eTaskState zBTInstantConditionTask::Execute(class zBTInstantConditionTask * this /* r31 */) {
    // Local variables
    bool result; // r3
}
// signature: zBTMonitoringConditionTask::Execute(float)
// Range: 0x8007F240 -> 0x8007F2A0
enum eTaskState zBTMonitoringConditionTask::Execute(class zBTMonitoringConditionTask * this /* r31 */) {
    // Local variables
    bool result; // r3
}
// signature: zBTNodeCondition::Setup(Sext::BTNodeBase *)
// Range: 0x8007F2A0 -> 0x8007F2B0
void zBTNodeCondition::Setup() {
}
// Range: 0x8007F2B0 -> 0x8007F388
class zBTTask * zBTNodeCondition::CreateTask(class zBTNodeCondition * this /* r30 */) {
    // Local variables
    class zBTConditionTask * task; // r31

    // References
    // -> struct {} __vt__26zBTMonitoringConditionTask;
    // -> struct {} __vt__23zBTInstantConditionTask;
    // -> class Factory factory;
}
