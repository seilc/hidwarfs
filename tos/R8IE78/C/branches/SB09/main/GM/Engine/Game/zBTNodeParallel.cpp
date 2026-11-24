/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTNodeParallel.cpp
*/
// Range: 0x800804B0 -> 0x80080508
void * zBTParallelTask::zBTParallelTask(class zBTParallelTask * this /* r31 */) {
    // References
    // -> struct {} __vt__15zBTParallelTask;
}
// Range: 0x80080510 -> 0x800805E8
void zBTParallelTask::Setup(class zBTParallelTask * this /* r30 */) {
    // Local variables
    class ChildIteratorBase * iterator; // r31

    // References
    // -> class Factory factory;
}
// Range: 0x800805F0 -> 0x8008065C
void zBTParallelTask::StopAllChildren(class zBTParallelTask * this /* r29 */) {
    {
        // Range: 0x80080604 -> 0x80080648
        // Local variables
        int i; // r30
    }
}
// signature: zBTParallelTask::Execute(float)
// Range: 0x80080660 -> 0x800807C0
enum eTaskState zBTParallelTask::Execute(class zBTParallelTask * this /* r30 */) {
    {
        // Range: 0x80080674 -> 0x8008073C
        // Local variables
        class ChildIteratorBase * iterator; // r31
    }
}
// Range: 0x800807C0 -> 0x80080850
void zBTParallelTask::SelfDone(class zBTParallelTask * this /* r30 */, enum eTaskState returnState /* r31 */) {
}
// signature: zBTParallelTask::ChildDone(eTaskState)
// Range: 0x80080850 -> 0x800808C8
void zBTParallelTask::ChildDone(class zBTParallelTask * this /* r7 */) {
}
// Range: 0x800808D0 -> 0x80080920
void zBTParallelTask::Cleanup(class zBTParallelTask * this /* r29 */) {
    // References
    // -> class Factory factory;
}
// signature: zBTNodeParallel::Setup(Sext::BTNodeBase *)
// Range: 0x80080920 -> 0x80080934
void zBTNodeParallel::Setup() {
    // Local variables
    class ParallelNode * parallelAsset; // r0
}
// Range: 0x80080940 -> 0x800809A4
class zBTTask * zBTNodeParallel::CreateTask(class zBTNodeParallel * this /* r31 */) {
    // References
    // -> class Factory factory;
}
// Range: 0x800809B0 -> 0x80080A28
class ChildIteratorBase * zBTNodeParallel::CreateIterator(class zBTNodeParallel * this /* r30 */) {
    // Local variables
    class ChildIteratorBase * iterator; // r0

    // References
    // -> class Factory factory;
}
