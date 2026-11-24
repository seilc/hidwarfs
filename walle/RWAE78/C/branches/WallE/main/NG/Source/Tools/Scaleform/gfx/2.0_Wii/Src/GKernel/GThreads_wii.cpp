/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GThreads_wii.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805D6460 -> 0x805D7188
*/
// total size: 0x28
class GMutexImpl : public GNewOverrideBase {
    // Members
    class OSMutex Mutex; // offset 0x0, size 0x18
    bool Recursive; // offset 0x18, size 0x1
    unsigned int LockCount; // offset 0x1C, size 0x4
    class GMutex_AreadyLockedAcquireInterface AreadyLockedAcquire; // offset 0x20, size 0x8
};
// total size: 0x8
class GMutex_AreadyLockedAcquireInterface : public GAcquireInterface {
    // Members
    class GMutex * pMutex; // offset 0x4, size 0x4
};
// total size: 0x34
class GWaitConditionImpl : public GNewOverrideBase {
    // Members
    class OSMutex Mutex; // offset 0x0, size 0x18
    class OSCond Condv; // offset 0x18, size 0x8
    class GAtomicInt Waiters; // offset 0x20, size 0x4
    class GAtomicInt NotifyVar; // offset 0x24, size 0x4
    class garray WaitAlarms; // offset 0x28, size 0xC
};
// total size: 0x4
class GAtomicInt : public GAtomicValueBase {};
// total size: 0x4
class GAtomicValueBase {
    // Members
    unsigned long Value; // offset 0x0, size 0x4
};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class OSAlarm * * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
// total size: 0x30
class OSAlarm {
    // Members
    void (* handler)(class OSAlarm * alarm, class OSContext * context); // offset 0x0, size 0x4
    unsigned long tag; // offset 0x4, size 0x4
    long long fire; // offset 0x8, size 0x8
    class OSAlarm * prev; // offset 0x10, size 0x4
    class OSAlarm * next; // offset 0x14, size 0x4
    long long period; // offset 0x18, size 0x8
    long long start; // offset 0x20, size 0x8
    void * userData; // offset 0x28, size 0x4
};
struct {} __vt__35GMutex_AreadyLockedAcquireInterface; // size: 0x28, address: 0x8073FC28
struct {} __vt__6GMutex; // size: 0x40, address: 0x8073FC50
// Range: 0x805D7110 -> 0x805D7114
void GMutex_AreadyLockedAcquireInterface::AddRef() {
}
// signature: GMutex_AreadyLockedAcquireInterface::Release(unsigned int)
// Range: 0x805D7120 -> 0x805D7124
void GMutex_AreadyLockedAcquireInterface::Release() {
}
// signature: GMutex_AreadyLockedAcquireInterface::SetRefCountMode(unsigned int)
// Range: 0x805D7130 -> 0x805D7138
bool GMutex_AreadyLockedAcquireInterface::SetRefCountMode() {
}
// Range: 0x805D6460 -> 0x805D6468
bool GMutex_AreadyLockedAcquireInterface::CanAcquire() {
}
// Range: 0x805D6470 -> 0x805D6484
bool GMutex_AreadyLockedAcquireInterface::TryAcquire() {
}
// Range: 0x805D6490 -> 0x805D64A4
bool GMutex_AreadyLockedAcquireInterface::TryAcquireCommit() {
}
// Range: 0x805D64B0 -> 0x805D64C4
bool GMutex_AreadyLockedAcquireInterface::TryAcquireCancel() {
}
// signature: GMutexImpl::Unlock(GMutex *)
// Range: 0x805D6510 -> 0x805D65DC
void GMutexImpl::Unlock(class GMutexImpl * this /* r29 */) {
    // Local variables
    unsigned int lockCount; // r0
    class CallableHandlers handlers; // r1+0x8
}
// Range: 0x805D65E0 -> 0x805D666C
bool GMutexImpl::IsLockedByAnotherThread(class GMutexImpl * this /* r30 */, class GMutex * pmutex /* r31 */) {
}
// Range: 0x805D6670 -> 0x805D66D4
class GAcquireInterface * GMutexImpl::GetAcquireInterface(class GMutexImpl * this /* r30 */, class GMutex * pmutex /* r31 */) {
}
// signature: GMutex::GMutex(bool, bool)
// Range: 0x805D66E0 -> 0x805D6774
void * GMutex::GMutex(class GMutex * this /* r29 */, bool recursive /* r30 */) {
    // References
    // -> struct {} __vt__35GMutex_AreadyLockedAcquireInterface;
    // -> struct {} __vt__6GMutex;
}
// Range: 0x805D6780 -> 0x805D6804
void * GMutex::~GMutex(class GMutex * this /* r30 */) {
    // References
    // -> struct {} __vt__6GMutex;
}
// Range: 0x805D6810 -> 0x805D684C
void GMutex::Lock() {
}
// Range: 0x805D6850 -> 0x805D685C
void GMutex::Unlock() {
}
// Range: 0x805D6860 -> 0x805D686C
bool GMutex::IsLockedByAnotherThread() {
}
// Range: 0x805D6870 -> 0x805D6884
bool GMutex::IsSignaled() const {
}
// Range: 0x805D6890 -> 0x805D689C
class GAcquireInterface * GMutex::GetAcquireInterface() {
}
// Range: 0x805D68A0 -> 0x805D68C8
bool GMutex::CanAcquire() {
}
// Range: 0x805D68D0 -> 0x805D6920
bool GMutex::TryAcquire() {
}
// Range: 0x805D6920 -> 0x805D6928
bool GMutex::TryAcquireCommit() {
}
// Range: 0x805D6930 -> 0x805D6954
bool GMutex::TryAcquireCancel() {
}
// Range: 0x805D6960 -> 0x805D6A50
void * GWaitConditionImpl::~GWaitConditionImpl(class GWaitConditionImpl * this /* r28 */) {
    {
        // Range: 0x805D698C -> 0x805D6998
        // Local variables
        unsigned int i; // r30
    }
}
// signature: GWaitConditionImpl::AlarmHandler(OSAlarm *, OSContext *)
// Range: 0x805D6A50 -> 0x805D6AC4
void GWaitConditionImpl::AlarmHandler() {
    // Local variables
    class GWaitConditionImpl * pImpl; // r6
}
// Range: 0x805D6AD0 -> 0x805D6F78
bool GWaitConditionImpl::Wait(class GWaitConditionImpl * this /* r25 */, class GMutex * pmutex /* r26 */, unsigned int delay /* r30 */) {
    // Local variables
    bool result; // r30
    unsigned int lockCount; // r29
    class OSAlarm * pwa; // r28
    unsigned int wai; // r27
    int a; // r24

    {
        // Range: 0x805D6B24 -> 0x805D6B2C
        // Local variables
        unsigned int i; // r24
    }
    {
        // Range: 0x805D6D6C -> 0x805D6DEC
        // Local variables
        unsigned long nv; // r0

        {
            // Range: 0x805D6D6C -> 0x805D6D6C
            // Local variables
            class OSAlarm * palarm; // r0

            {
                // Range: 0x805D6D6C -> 0x805D6D6C
                // Local variables
                unsigned int i; // r6
            }
        }
    }
    {
        // Range: 0x805D6E58 -> 0x805D6E7C
        // Local variables
        unsigned int i; // r24
    }
    {
        // Range: 0x805D6F30 -> 0x805D6F38
        // Local variables
        unsigned int i; // r24
    }
}
// Range: 0x805D6F80 -> 0x805D6FF8
void * GWaitCondition::GWaitCondition(class GWaitCondition * this /* r30 */) {
}
// Range: 0x805D7000 -> 0x805D705C
void * GWaitCondition::~GWaitCondition(class GWaitCondition * this /* r30 */) {
}
// signature: GWaitCondition::Wait(GMutex *, unsigned int)
// Range: 0x805D7060 -> 0x805D7068
bool GWaitCondition::Wait() {
}
// Range: 0x805D7070 -> 0x805D7104
void GWaitCondition::NotifyAll() {
}
