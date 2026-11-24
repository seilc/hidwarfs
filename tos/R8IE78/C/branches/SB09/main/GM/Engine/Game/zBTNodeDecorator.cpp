/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBTNodeDecorator.cpp
*/
// Range: 0x8007F390 -> 0x8007F414
class zBTNode * zBTDecoratorTask::GetChildNode(class zBTDecoratorTask * this /* r29 */) const {
    // Local variables
    class ChildIteratorBase * iterator; // r31
    class zBTNode * childNode; // r30
}
// Range: 0x8007F420 -> 0x8007F468
void * zBTDecoratorTask::zBTDecoratorTask(class zBTDecoratorTask * this /* r31 */) {
    // References
    // -> struct {} __vt__16zBTDecoratorTask;
}
// Range: 0x8007F470 -> 0x8007F480
void zBTDecoratorTask::Setup() {
}
// Range: 0x8007F480 -> 0x8007F4C8
class ChildIteratorBase * zBTNodeDecorator::CreateIterator(class zBTNodeDecorator * this /* r30 */) {
    // Local variables
    class ChildIteratorBase * iterator; // r31
}
// Range: 0x8007F520 -> 0x8007F56C
void zBTNodeDecorator::DestroyIterator(class ChildIteratorBase * iterator /* r31 */) {
    // References
    // -> class Factory factory;
}
// Range: 0x8007F570 -> 0x8007F5BC
void * zBTLoopDecoratorTask::zBTLoopDecoratorTask(class zBTLoopDecoratorTask * this /* r31 */) {
    // References
    // -> struct {} __vt__20zBTLoopDecoratorTask;
}
// Range: 0x8007F5C0 -> 0x8007F614
void zBTLoopDecoratorTask::Setup(class zBTLoopDecoratorTask * this /* r31 */) {
}
// signature: zBTLoopDecoratorTask::Execute(float)
// Range: 0x8007F620 -> 0x8007F704
enum eTaskState zBTLoopDecoratorTask::Execute(class zBTLoopDecoratorTask * this /* r31 */) {
}
// signature: zBTLoopDecoratorTask::SelfDone(eTaskState)
// Range: 0x8007F710 -> 0x8007F774
void zBTLoopDecoratorTask::SelfDone(class zBTLoopDecoratorTask * this /* r5 */) {
}
// signature: zBTLoopDecoratorTask::ChildDone(eTaskState)
// Range: 0x8007F780 -> 0x8007F7D8
void zBTLoopDecoratorTask::ChildDone(class zBTLoopDecoratorTask * this /* r7 */) {
}
// signature: zBTNodeLoopDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x8007F7E0 -> 0x8007F824
void zBTNodeLoopDecorator::Setup() {
    // Local variables
    class DecoratorNode * decoratorAsset; // r0
}
// Range: 0x8007F830 -> 0x8007F89C
class zBTTask * zBTNodeLoopDecorator::CreateTask(class zBTNodeLoopDecorator * this /* r31 */) {
    // References
    // -> class Factory factory;
}
// signature: zBTForceStatusDecoratorTask::Execute(float)
// Range: 0x8007F8A0 -> 0x8007F8F8
enum eTaskState zBTForceStatusDecoratorTask::Execute(class zBTForceStatusDecoratorTask * this /* r31 */) {
}
// Range: 0x8007F900 -> 0x8007F98C
void zBTForceStatusDecoratorTask::ChildDone(class zBTForceStatusDecoratorTask * this /* r30 */, enum eTaskState returnState /* r31 */) {
}
// signature: zBTNodeForceStatusDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x8007F990 -> 0x8007F9D4
void zBTNodeForceStatusDecorator::Setup() {
}
// Range: 0x8007F9E0 -> 0x8007FA50
class zBTTask * zBTNodeForceStatusDecorator::CreateTask(class zBTNodeForceStatusDecorator * this /* r30 */) {
    // References
    // -> struct {} __vt__27zBTForceStatusDecoratorTask;
    // -> class Factory factory;
}
// Range: 0x8007FA50 -> 0x8007FAA4
void zBTTimerDecoratorTask::Setup(class zBTTimerDecoratorTask * this /* r31 */) {
}
// signature: zBTTimerDecoratorTask::Execute(float)
// Range: 0x8007FAB0 -> 0x8007FB88
enum eTaskState zBTTimerDecoratorTask::Execute(class zBTTimerDecoratorTask * this /* r31 */) {
}
// signature: zBTTimerDecoratorTask::SelfDone(eTaskState)
// Range: 0x8007FB90 -> 0x8007FC38
void zBTTimerDecoratorTask::SelfDone(class zBTTimerDecoratorTask * this /* r31 */) {
}
// signature: zBTTimerDecoratorTask::ChildDone(eTaskState)
// Range: 0x8007FC40 -> 0x8007FC74
void zBTTimerDecoratorTask::ChildDone() {
}
// signature: zBTNodeTimerDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x8007FC80 -> 0x8007FCB8
void zBTNodeTimerDecorator::Setup() {
    // Local variables
    class DecoratorNode * decoratorAsset; // r0
}
// Range: 0x8007FCC0 -> 0x8007FD40
class zBTTask * zBTNodeTimerDecorator::CreateTask(class zBTNodeTimerDecorator * this /* r30 */) {
    // References
    // -> struct {} __vt__21zBTTimerDecoratorTask;
    // -> class Factory factory;
}
// signature: zBTRandomChanceDecoratorTask::Execute(float)
// Range: 0x8007FD40 -> 0x8007FDDC
enum eTaskState zBTRandomChanceDecoratorTask::Execute(class zBTRandomChanceDecoratorTask * this /* r31 */) {
    {
        // Range: 0x8007FD54 -> 0x8007FDC4
        // Local variables
        float roll; // f0
    }
}
// signature: zBTRandomChanceDecoratorTask::ChildDone(eTaskState)
// Range: 0x8007FE40 -> 0x8007FE80
void zBTRandomChanceDecoratorTask::ChildDone() {
}
// signature: zBTNodeRandomChanceDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x8007FE80 -> 0x8007FED4
void zBTNodeRandomChanceDecorator::Setup() {
    // Local variables
    class DecoratorNode * decoratorAsset; // r0
}
// Range: 0x8007FEE0 -> 0x8007FF74
class zBTTask * zBTNodeRandomChanceDecorator::CreateTask(class zBTNodeRandomChanceDecorator * this /* r30 */) {
    // References
    // -> struct {} __vt__28zBTRandomChanceDecoratorTask;
    // -> class Factory factory;
}
// signature: zBTTimeDelayDecoratorTask::Execute(float)
// Range: 0x8007FF80 -> 0x80080000
enum eTaskState zBTTimeDelayDecoratorTask::Execute(class zBTTimeDelayDecoratorTask * this /* r31 */) {
}
// signature: zBTNodeTimeDelayDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x80080000 -> 0x80080090
void zBTNodeTimeDelayDecorator::Setup() {
    // Local variables
    class DecoratorNode * decoratorAsset; // r0
}
// Range: 0x80080090 -> 0x8008012C
class zBTTask * zBTNodeTimeDelayDecorator::CreateTask(class zBTNodeTimeDelayDecorator * this /* r30 */) {
    // References
    // -> struct {} __vt__25zBTTimeDelayDecoratorTask;
    // -> class Factory factory;
}
// Range: 0x80080130 -> 0x80080184
void zBTEventHandlerDecoratorTask::Setup(class zBTEventHandlerDecoratorTask * this /* r31 */) {
}
// signature: zBTEventHandlerDecoratorTask::Execute(float)
// Range: 0x800801C0 -> 0x80080218
enum eTaskState zBTEventHandlerDecoratorTask::Execute(class zBTEventHandlerDecoratorTask * this /* r31 */) {
}
// Range: 0x80080220 -> 0x8008026C
void zBTEventHandlerDecoratorTask::Cleanup(class zBTEventHandlerDecoratorTask * this /* r31 */) {
    // References
    // -> class Factory factory;
}
// signature: zBTEventHandlerDecoratorTask::ReceiveEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80080270 -> 0x800802D0
bool zBTEventHandlerDecoratorTask::ReceiveEvent(class zBTEventHandlerDecoratorTask * this /* r31 */) {
}
// signature: zBTNodeEventHandlerDecorator::Setup(Sext::BTNodeBase *)
// Range: 0x800802D0 -> 0x80080304
void zBTNodeEventHandlerDecorator::Setup() {
    // Local variables
    class DecoratorNode * decoratorAsset; // r0
}
// Range: 0x80080310 -> 0x8008039C
class zBTTask * zBTNodeEventHandlerDecorator::CreateTask(class zBTNodeEventHandlerDecorator * this /* r30 */) {
    // References
    // -> struct {} __vt__28zBTEventHandlerDecoratorTask;
    // -> class Factory factory;
}
// signature: zBTTryAndCatchDecoratorTask::SelfDone(eTaskState)
// Range: 0x800803A0 -> 0x8008043C
void zBTTryAndCatchDecoratorTask::SelfDone(class zBTTryAndCatchDecoratorTask * this /* r31 */) {
}
// Range: 0x80080440 -> 0x800804B0
class zBTTask * zBTNodeTryAndCatchDecorator::CreateTask(class zBTNodeTryAndCatchDecorator * this /* r30 */) {
    // References
    // -> struct {} __vt__27zBTTryAndCatchDecoratorTask;
    // -> class Factory factory;
}
