/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTInterpreter.cpp
*/
// Range: 0x80081B10 -> 0x80081BB8
void zBTInterpreter::FreeAllTasks(class zBTInterpreter * this /* r29 */) {
    {
        // Range: 0x80081B24 -> 0x80081B64
        // Local variables
        class zBTTask * task; // r30
    }
    {
        // Range: 0x80081B64 -> 0x80081BA4
        // Local variables
        class zBTTask * task; // r30
    }
}
// signature: zBTInterpreter::Setup(int, int)
// Range: 0x80081BC0 -> 0x80081C80
void zBTInterpreter::Setup(class zBTInterpreter * this /* r30 */, int maxTasks /* r31 */) {
    // Local variables
    class NodeType * taskPool; // r0
}
// signature: zBTInterpreter::Update(float)
// Range: 0x80081D40 -> 0x80081DAC
void zBTInterpreter::Update(class zBTInterpreter * this /* r29 */) {
    {
        // Range: 0x80081D58 -> 0x80081D98
        // Local variables
        class zBTTask * task; // r30
    }
}
// Range: 0x80081DB0 -> 0x80081E50
class zBTTask * zBTInterpreter::Open(class zBTInterpreter * this /* r29 */, class zBTNode * node /* r30 */, class zBTTask * owner /* r31 */) {
    // Local variables
    class zBTTask * task; // r1+0x8
}
// signature: zBTInterpreter::Open(unsigned int, zBTTask *)
// Range: 0x80081E90 -> 0x80081EE4
class zBTTask * zBTInterpreter::Open(class zBTInterpreter * this /* r30 */, class zBTTask * owner /* r31 */) {
    // Local variables
    class zBT * nextTree; // r0
}
// signature: zBTInterpreter::Close(zSchedulerTask *, eTaskState)
// Range: 0x80081EF0 -> 0x80081F5C
void zBTInterpreter::Close(class zBTInterpreter * this /* r30 */) {
}
