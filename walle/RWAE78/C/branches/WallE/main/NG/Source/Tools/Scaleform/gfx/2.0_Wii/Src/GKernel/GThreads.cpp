/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GThreads.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805D3F50 -> 0x805D49C8
*/
// total size: 0x4
class GDefaultAcquireInterface : public GAcquireInterface {};
// total size: 0x4
class CallableHandlers {
    // Members
    class GPtr pArray; // offset 0x0, size 0x4
};
// total size: 0x4
class GPtr {
    // Members
    class HandlerArray * pObject; // offset 0x0, size 0x4
};
static class GDefaultAcquireInterface di; // size: 0x4, address: 0x808DECAC
struct {} __vt__6GEvent; // size: 0x40, address: 0x8073FB60
struct {} __vt__9GWaitable; // size: 0x14, address: 0x8073FBA0
struct {} __vt__24GDefaultAcquireInterface; // size: 0x1C, address: 0x8073FBB4
// Range: 0x805D3F50 -> 0x805D4004
void * GWaitable::GWaitable(class GWaitable * this /* r30 */, bool enable /* r31 */) {
    // References
    // -> struct {} __vt__9GWaitable;
}
// Range: 0x805D40C0 -> 0x805D4144
void * GWaitable::~GWaitable(class GWaitable * this /* r30 */) {
    // References
    // -> struct {} __vt__9GWaitable;
}
// Range: 0x805D4150 -> 0x805D41B0
void GWaitable::HandlerArray::Release(class HandlerArray * this /* r31 */) {
}
// Range: 0x805D41B0 -> 0x805D442C
void GWaitable::HandlerArray::CallWaitHandlers(class HandlerArray * this /* r30 */) {
    {
        // Range: 0x805D4210 -> 0x805D43A4
        // Local variables
        class garray handlersCopy; // r1+0x8

        {
            // Range: 0x805D436C -> 0x805D437C
            // Local variables
            unsigned long i; // r28
        }
    }
}
// Range: 0x805D4430 -> 0x805D4444
void GWaitable::CallWaitHandlers() {
}
// Range: 0x805D4450 -> 0x805D4458
bool GWaitable::IsSignaled() const {
}
// Range: 0x805D4460 -> 0x805D4464
class GAcquireInterface * GWaitable::GetAcquireInterface() {
}
// Range: 0x805D4470 -> 0x805D4498
class GDefaultAcquireInterface * GDefaultAcquireInterface::GetDefaultAcquireInterface() {
    // References
    // -> static class GDefaultAcquireInterface di;
    // -> struct {} __vt__24GDefaultAcquireInterface;
}
// Range: 0x805D44E0 -> 0x805D44E8
bool GAcquireInterface::CanAcquire() {
}
// Range: 0x805D44F0 -> 0x805D44F8
bool GAcquireInterface::TryAcquire() {
}
// Range: 0x805D4500 -> 0x805D4508
bool GAcquireInterface::TryAcquireCommit() {
}
// Range: 0x805D4510 -> 0x805D4518
bool GAcquireInterface::TryAcquireCancel() {
}
// Range: 0x805D4520 -> 0x805D4618
void * GEvent::GEvent(class GEvent * this /* r29 */, bool setInitially /* r30 */, bool multiWait /* r31 */) {
    // References
    // -> struct {} __vt__6GEvent;
    // -> struct {} __vt__9GWaitable;
}
// Range: 0x805D4620 -> 0x805D4694
void * GEvent::~GEvent(class GEvent * this /* r30 */) {
}
// Range: 0x805D46A0 -> 0x805D4764
bool GEvent::Wait(class GEvent * this /* r29 */, unsigned int delay /* r30 */) {
    // Local variables
    bool state; // r30
}
// Range: 0x805D4770 -> 0x805D47FC
void GEvent::SetEvent(class GEvent * this /* r30 */) {
    // Local variables
    class CallableHandlers handlers; // r1+0x8
}
// Range: 0x805D48D0 -> 0x805D48D8
bool GEvent::IsSignaled() const {
}
// Range: 0x805D48E0 -> 0x805D48F0
class GAcquireInterface * GEvent::GetAcquireInterface() {
}
// Range: 0x805D48F0 -> 0x805D4900
bool GEvent::CanAcquire() {
}
// Range: 0x805D4900 -> 0x805D4910
bool GEvent::TryAcquire() {
}
// Range: 0x805D4910 -> 0x805D4970
bool GEvent::TryAcquireCommit(class GEvent * this /* r30 */) {
}
// Range: 0x805D4970 -> 0x805D4978
bool GEvent::TryAcquireCancel() {
}
