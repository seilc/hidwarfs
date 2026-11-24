/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBTNodeSelector.cpp
*/
// Range: 0x800C32C0 -> 0x800C3314
void zBTSelectorTask::Setup(class zBTSelectorTask * this /* r31 */) {
}
// signature: zBTSelectorTask::Execute(float)
// Range: 0x800C3320 -> 0x800C3454
enum eTaskState zBTSelectorTask::Execute(class zBTSelectorTask * this /* r28 */) {
}
// Range: 0x800C3480 -> 0x800C34E4
void zBTSelectorTask::Cleanup(class zBTSelectorTask * this /* r30 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x800C34F0 -> 0x800C3560
class zBTTask * zBTNodeSelector::CreateTask() {
    // References
    // -> struct {} __vt__15zBTSelectorTask;
    // -> class zFactory factory;
}
// Range: 0x800C35A0 -> 0x800C37D4
void zBTNodeProbabilitySelector::ProbabilityChildIterator::Begin(class ProbabilityChildIterator * this /* r31 */) {
    {
        // Range: 0x800C35A8 -> 0x800C35D8
        // Local variables
        int i; // r6
    }
}
// Range: 0x800C37E0 -> 0x800C3A18
void zBTNodeProbabilitySelector::ProbabilityChildIterator::Next(class ProbabilityChildIterator * this /* r31 */) {
    // Local variables
    int tmp; // r8
}
// Range: 0x800C3A40 -> 0x800C3AC8
void zBTNodeProbabilitySelector::Setup(class zBTNodeProbabilitySelector * this /* r30 */, class BTNodeBase * nodeAsset /* r31 */) {
    // Local variables
    class SelectorNode * selectorAsset; // r0

    {
        // Range: 0x800C3A78 -> 0x800C3A88
        // Local variables
        int i; // r7
    }
}
// Range: 0x800C3AD0 -> 0x800C3B74
class ChildIteratorBase * zBTNodeProbabilitySelector::CreateIterator(class zBTNodeProbabilitySelector * this /* r30 */) {
    // References
    // -> struct {} __vt__Q226zBTNodeProbabilitySelector24ProbabilityChildIterator;
    // -> class zFactory factory;
}
// Range: 0x800C3B90 -> 0x800C3C20
class ChildIteratorBase * zBTNodeRandomSelector::CreateIterator(class zBTNodeRandomSelector * this /* r30 */) {
    // Local variables
    class ChildIteratorBase * iterator; // r0

    // References
    // -> struct {} __vt__Q27zBTNode19RandomChildIterator;
    // -> class zFactory factory;
}
