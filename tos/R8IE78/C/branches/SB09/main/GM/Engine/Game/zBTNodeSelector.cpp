/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTNodeSelector.cpp
*/
// Range: 0x80080C20 -> 0x80080C6C
void * zBTSelectorTask::zBTSelectorTask(class zBTSelectorTask * this /* r31 */) {
    // References
    // -> struct {} __vt__15zBTSelectorTask;
}
// Range: 0x80080C70 -> 0x80080CC4
void zBTSelectorTask::Setup(class zBTSelectorTask * this /* r31 */) {
}
// signature: zBTSelectorTask::Execute(float)
// Range: 0x80080CD0 -> 0x80080D98
enum eTaskState zBTSelectorTask::Execute(class zBTSelectorTask * this /* r31 */) {
}
// Range: 0x80080DA0 -> 0x80080DFC
void zBTSelectorTask::Cleanup(class zBTSelectorTask * this /* r30 */) {
    // References
    // -> class Factory factory;
}
// Range: 0x80080E00 -> 0x80080E48
class zBTTask * zBTNodeSelector::CreateTask() {
    // References
    // -> class Factory factory;
}
// Range: 0x80080E50 -> 0x80080F3C
int zBTNodeProbabilitySelector::ProbabilityChildIterator::Select(class ProbabilityChildIterator * this /* r31 */) {
    // Local variables
    float upper; // f31
    float roll; // f1

    {
        // Range: 0x80080E6C -> 0x80080EAC
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x80080EBC -> 0x80080F1C
        // Local variables
        int ii; // r3
    }
}
// Range: 0x80080F40 -> 0x80080F5C
void * zBTNodeProbabilitySelector::ProbabilityChildIterator::ProbabilityChildIterator() {
    // References
    // -> struct {} __vt__Q226zBTNodeProbabilitySelector24ProbabilityChildIterator;
}
// Range: 0x80080F60 -> 0x80080FDC
void zBTNodeProbabilitySelector::ProbabilityChildIterator::Begin(class ProbabilityChildIterator * this /* r31 */) {
    {
        // Range: 0x80080F68 -> 0x80080FAC
        // Local variables
        int i; // r6
    }
}
// Range: 0x80080FE0 -> 0x80081064
void zBTNodeProbabilitySelector::ProbabilityChildIterator::Next(class ProbabilityChildIterator * this /* r31 */) {
    // Local variables
    int tmp; // r7
}
// Range: 0x80081070 -> 0x800810F0
void zBTNodeProbabilitySelector::Setup(class zBTNodeProbabilitySelector * this /* r30 */, class BTNodeBase * nodeAsset /* r31 */) {
    // Local variables
    class SelectorNode * selectorAsset; // r0

    {
        // Range: 0x800810A8 -> 0x800810D8
        // Local variables
        int i; // r6
    }
}
// Range: 0x800810F0 -> 0x8008115C
class ChildIteratorBase * zBTNodeProbabilitySelector::CreateIterator(class zBTNodeProbabilitySelector * this /* r30 */) {
    // References
    // -> class Factory factory;
}
// Range: 0x80081160 -> 0x800811A8
class ChildIteratorBase * zBTNodeRandomSelector::CreateIterator(class zBTNodeRandomSelector * this /* r30 */) {
    // Local variables
    class ChildIteratorBase * iterator; // r31
}
