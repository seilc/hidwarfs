/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBTNode.cpp
*/
// Range: 0x800C0510 -> 0x800C0580
void zBTTask::SetObserver(class zBTTask * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// signature: zBTTask::SelfDone(eTaskState)
// Range: 0x800C05B0 -> 0x800C05B4
void zBTTask::SelfDone() {
}
// signature: zBTTask::TaskChangeCB(zSchedulerTask *, eTaskState)
// Range: 0x800C05C0 -> 0x800C05D4
void zBTTask::TaskChangeCB() {
}
// Range: 0x800C05E0 -> 0x800C05EC
void zBTNode::ChildIterator::Begin() {
}
// Range: 0x800C05F0 -> 0x800C0600
void zBTNode::ChildIterator::Next() {
}
// Range: 0x800C0600 -> 0x800C0618
class zBTNode * zBTNode::ChildIterator::Current() const {
}
// Range: 0x800C0620 -> 0x800C0640
bool zBTNode::ChildIterator::IsDone() const {
}
// Range: 0x800C0640 -> 0x800C0654
void zBTNode::ReverseChildIterator::Begin() {
}
// Range: 0x800C0660 -> 0x800C0670
void zBTNode::ReverseChildIterator::Next() {
}
// Range: 0x800C0680 -> 0x800C068C
bool zBTNode::ReverseChildIterator::IsDone() const {
}
// Range: 0x800C0690 -> 0x800C06D0
void zBTNode::RandomChildIterator::Cleanup(class RandomChildIterator * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// signature: zBTNode::RandomChildIterator::SetOwner(zBTNode *)
// Range: 0x800C06D0 -> 0x800C0724
void zBTNode::RandomChildIterator::SetOwner(class RandomChildIterator * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// Range: 0x800C0730 -> 0x800C07F0
void zBTNode::RandomChildIterator::Begin(class RandomChildIterator * this /* r31 */) {
    {
        // Range: 0x800C0738 -> 0x800C0768
        // Local variables
        int i; // r6
    }
}
// Range: 0x800C07F0 -> 0x800C08B4
void zBTNode::RandomChildIterator::Next(class RandomChildIterator * this /* r31 */) {
    // Local variables
    int tmp; // r8
}
// Range: 0x800C08C0 -> 0x800C08D8
class zBTNode * zBTNode::RandomChildIterator::Current() const {
}
// Range: 0x800C08E0 -> 0x800C08F4
bool zBTNode::RandomChildIterator::IsDone() const {
}
