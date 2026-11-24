/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBTNodeDecorator.cpp
*/
// Range: 0x800C10F0 -> 0x800C1100
void zBTDecoratorTask::Setup() {
}
// Range: 0x800C1110 -> 0x800C119C
class ChildIteratorBase * zBTNodeDecorator::CreateIterator(class zBTNodeDecorator * this /* r30 */) {
    // Local variables
    class ChildIteratorBase * iterator; // r0

    // References
    // -> struct {} __vt__Q27zBTNode13ChildIterator;
    // -> class zFactory factory;
}
// Range: 0x800C11A0 -> 0x800C11EC
void zBTNodeDecorator::DestroyIterator(class ChildIteratorBase * iterator /* r31 */) {
    // References
    // -> class zFactory factory;
}
// signature: zBTLoopDecoratorTask::Execute(float)
// Range: 0x800C1210 -> 0x800C1454
enum eTaskState zBTLoopDecoratorTask::Execute(class zBTLoopDecoratorTask * this /* r31 */) {
}
// signature: zBTLoopDecoratorTask::SelfDone(eTaskState)
// Range: 0x800C1460 -> 0x800C14C4
void zBTLoopDecoratorTask::SelfDone(class zBTLoopDecoratorTask * this /* r5 */) {
}
// signature: zBTLoopDecoratorTask::ChildDone(eTaskState)
// Range: 0x800C14D0 -> 0x800C1528
void zBTLoopDecoratorTask::ChildDone(class zBTLoopDecoratorTask * this /* r7 */) {
}
// signature: zBTNodeLoopDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x800C1530 -> 0x800C1544
void zBTNodeLoopDecorator::Setup() {
    // Local variables
    class DecoratorNode * decoratorAsset; // r0
}
// Range: 0x800C1550 -> 0x800C15E4
class zBTTask * zBTNodeLoopDecorator::CreateTask(class zBTNodeLoopDecorator * this /* r31 */) {
    // References
    // -> struct {} __vt__20zBTLoopDecoratorTask;
    // -> class zFactory factory;
}
// signature: zBTForceStatusDecoratorTask::Execute(float)
// Range: 0x800C15F0 -> 0x800C1708
enum eTaskState zBTForceStatusDecoratorTask::Execute(class zBTForceStatusDecoratorTask * this /* r28 */) {
}
// Range: 0x800C1720 -> 0x800C17B4
void zBTForceStatusDecoratorTask::ChildDone(class zBTForceStatusDecoratorTask * this /* r30 */, enum eTaskState returnState /* r31 */) {
}
// signature: zBTNodeForceStatusDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x800C17C0 -> 0x800C1804
void zBTNodeForceStatusDecorator::Setup() {
}
// Range: 0x800C1810 -> 0x800C1890
class zBTTask * zBTNodeForceStatusDecorator::CreateTask(class zBTNodeForceStatusDecorator * this /* r31 */) {
    // References
    // -> struct {} __vt__27zBTForceStatusDecoratorTask;
    // -> class zFactory factory;
}
// signature: zBTTimerDecoratorTask::Execute(float)
// Range: 0x800C18A0 -> 0x800C1AE0
enum eTaskState zBTTimerDecoratorTask::Execute(class zBTTimerDecoratorTask * this /* r31 */) {
}
// signature: zBTTimerDecoratorTask::SelfDone(eTaskState)
// Range: 0x800C1AE0 -> 0x800C1B88
void zBTTimerDecoratorTask::SelfDone(class zBTTimerDecoratorTask * this /* r31 */) {
}
// signature: zBTTimerDecoratorTask::ChildDone(eTaskState)
// Range: 0x800C1B90 -> 0x800C1BC4
void zBTTimerDecoratorTask::ChildDone() {
}
// signature: zBTNodeTimerDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x800C1BD0 -> 0x800C1BDC
void zBTNodeTimerDecorator::Setup() {
}
// Range: 0x800C1BE0 -> 0x800C1C60
class zBTTask * zBTNodeTimerDecorator::CreateTask(class zBTNodeTimerDecorator * this /* r31 */) {
    // References
    // -> struct {} __vt__21zBTTimerDecoratorTask;
    // -> class zFactory factory;
}
// signature: zBTRandomChanceDecoratorTask::Execute(float)
// Range: 0x800C1C60 -> 0x800C1DB8
enum eTaskState zBTRandomChanceDecoratorTask::Execute(class zBTRandomChanceDecoratorTask * this /* r28 */) {
    {
        // Range: 0x800C1C80 -> 0x800C1D94
        // Local variables
        float roll; // f0
    }
}
// signature: zBTRandomChanceDecoratorTask::ChildDone(eTaskState)
// Range: 0x800C1DD0 -> 0x800C1E10
void zBTRandomChanceDecoratorTask::ChildDone() {
}
// signature: zBTNodeRandomChanceDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x800C1E10 -> 0x800C1E64
void zBTNodeRandomChanceDecorator::Setup() {
    // Local variables
    class DecoratorNode * decoratorAsset; // r0
}
// Range: 0x800C1E70 -> 0x800C1F50
class zBTTask * zBTNodeRandomChanceDecorator::CreateTask(class zBTNodeRandomChanceDecorator * this /* r30 */) {
    // References
    // -> struct {} __vt__28zBTRandomChanceDecoratorTask;
    // -> class zFactory factory;
}
// Range: 0x800C1F50 -> 0x800C2020
void zBTTimeDelayDecoratorTask::Setup(class zBTTimeDelayDecoratorTask * this /* r31 */) {
}
// signature: zBTTimeDelayDecoratorTask::Execute(float)
// Range: 0x800C2020 -> 0x800C2160
enum eTaskState zBTTimeDelayDecoratorTask::Execute(class zBTTimeDelayDecoratorTask * this /* r28 */) {
}
// signature: zBTNodeTimeDelayDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x800C2180 -> 0x800C2210
void zBTNodeTimeDelayDecorator::Setup() {
    // Local variables
    class DecoratorNode * decoratorAsset; // r0
}
// Range: 0x800C2210 -> 0x800C22F8
class zBTTask * zBTNodeTimeDelayDecorator::CreateTask(class zBTNodeTimeDelayDecorator * this /* r30 */) {
    // References
    // -> struct {} __vt__25zBTTimeDelayDecoratorTask;
    // -> class zFactory factory;
}
// Range: 0x800C2300 -> 0x800C2394
void zBTEventHandlerDecoratorTask::Setup(class zBTEventHandlerDecoratorTask * this /* r31 */) {
}
// signature: zBTEventHandlerDecoratorTask::Execute(float)
// Range: 0x800C23D0 -> 0x800C24E8
enum eTaskState zBTEventHandlerDecoratorTask::Execute(class zBTEventHandlerDecoratorTask * this /* r28 */) {
}
// Range: 0x800C2510 -> 0x800C25C0
void zBTEventHandlerDecoratorTask::Cleanup(class zBTEventHandlerDecoratorTask * this /* r31 */) {
    // References
    // -> class zFactory factory;
}
// signature: zBTEventHandlerDecoratorTask::ReceiveEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C25C0 -> 0x800C2620
bool zBTEventHandlerDecoratorTask::ReceiveEvent(class zBTEventHandlerDecoratorTask * this /* r31 */) {
}
// signature: zBTNodeEventHandlerDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x800C2620 -> 0x800C2654
void zBTNodeEventHandlerDecorator::Setup() {
    // Local variables
    class DecoratorNode * decoratorAsset; // r0
}
// Range: 0x800C2660 -> 0x800C26F8
class zBTTask * zBTNodeEventHandlerDecorator::CreateTask(class zBTNodeEventHandlerDecorator * this /* r31 */) {
    // References
    // -> struct {} __vt__28zBTEventHandlerDecoratorTask;
    // -> class zFactory factory;
}
// signature: zBTTryAndCatchDecoratorTask::SelfDone(eTaskState)
// Range: 0x800C2710 -> 0x800C28DC
void zBTTryAndCatchDecoratorTask::SelfDone(class zBTTryAndCatchDecoratorTask * this /* r29 */) {
}
// Range: 0x800C2900 -> 0x800C2980
class zBTTask * zBTNodeTryAndCatchDecorator::CreateTask(class zBTNodeTryAndCatchDecorator * this /* r31 */) {
    // References
    // -> struct {} __vt__27zBTTryAndCatchDecoratorTask;
    // -> class zFactory factory;
}
