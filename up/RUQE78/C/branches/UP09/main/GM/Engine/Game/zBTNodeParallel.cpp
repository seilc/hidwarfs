/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBTNodeParallel.cpp
*/
// Range: 0x800C2980 -> 0x800C2A60
void zBTParallelTask::Setup(class zBTParallelTask * this /* r30 */) {
    // Local variables
    class ChildIteratorBase * iterator; // r31

    // References
    // -> class zFactory factory;
}
// signature: zBTParallelTask::Execute(float)
// Range: 0x800C2A60 -> 0x800C2C14
enum eTaskState zBTParallelTask::Execute(class zBTParallelTask * this /* r31 */) {
    {
        // Range: 0x800C2A74 -> 0x800C2B90
        // Local variables
        class ChildIteratorBase * iterator; // r27
    }
}
// Range: 0x800C2C20 -> 0x800C2D44
void zBTParallelTask::SelfDone(class zBTParallelTask * this /* r28 */, enum eTaskState returnState /* r29 */) {
}
// signature: zBTParallelTask::ChildDone(eTaskState)
// Range: 0x800C2D50 -> 0x800C2DC8
void zBTParallelTask::ChildDone(class zBTParallelTask * this /* r7 */) {
}
// Range: 0x800C2DD0 -> 0x800C2E30
void zBTParallelTask::Cleanup(class zBTParallelTask * this /* r29 */) {
    // References
    // -> class zFactory factory;
}
// signature: zBTNodeParallel::Setup(Sext::BTNodeBase *)
// Range: 0x800C2E30 -> 0x800C2E44
void zBTNodeParallel::Setup() {
    // Local variables
    class ParallelNode * parallelAsset; // r0
}
// Range: 0x800C2E50 -> 0x800C2EE8
class zBTTask * zBTNodeParallel::CreateTask(class zBTNodeParallel * this /* r31 */) {
    // References
    // -> struct {} __vt__15zBTParallelTask;
    // -> class zFactory factory;
}
// Range: 0x800C2F00 -> 0x800C2F8C
class ChildIteratorBase * zBTNodeParallel::CreateIterator(class zBTNodeParallel * this /* r30 */) {
    // Local variables
    class ChildIteratorBase * iterator; // r0

    // References
    // -> struct {} __vt__Q27zBTNode20ReverseChildIterator;
    // -> class zFactory factory;
}
