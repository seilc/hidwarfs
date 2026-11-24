/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\System\Multithread.cpp
*/
static long priorityMap[7]; // size: 0x1C, address: 0x80789130
// signature: System::CommChannel::Init(int)
// Range: 0x803530DC -> 0x80353150
void System::CommChannel::Init(class CommChannel * this /* r30 */) {
}
// signature: System::CommChannel::SetPool(char *, int)
// Range: 0x80353150 -> 0x80353168
void System::CommChannel::SetPool() {
}
// signature: System::CommChannel::Acquire(int, int)
// Range: 0x80353168 -> 0x80353374
char * System::CommChannel::Acquire(class CommChannel * this /* r28 */, int amountUser /* r29 */) {
    // Local variables
    int amtNeedEstMax; // r30
    char * userData; // r22

    {
        // Range: 0x803531DC -> 0x80353330
        // Local variables
        int amtSpaceAvail; // r23
        int idxSpaceAvail; // r4

        {
            // Range: 0x803531DC -> 0x803531E4
            // Local variables
            int amtPostSpace; // r22
        }
    }
}
// Range: 0x80353374 -> 0x80353454
void System::CommChannel::Commit(class CommChannel * this /* r31 */) {
}
// Range: 0x80353454 -> 0x80353648
char * System::CommChannel::Receive(class CommChannel * this /* r26 */, int * amount /* r27 */, bool waitForMessage /* r28 */) {
    // Local variables
    class BlockHeader * head; // r29

    {
        // Range: 0x803534B8 -> 0x803535F4
        // Local variables
        char * msgStart; // r0
        int distToEnd; // r6
    }
    {
        // Range: 0x80353614 -> 0x80353630
        // Local variables
        char * msgUser; // r0
    }
}
// Range: 0x80353648 -> 0x80353744
void System::CommChannel::Acknowledge(class CommChannel * this /* r31 */) {
    {
        // Range: 0x803536A8 -> 0x803536E4
        // Local variables
        class BlockHeader * head; // r6
    }
}
// signature: System::Thread::Create(const char *, int, int, int, int, System::ThreadPriority)
// Range: 0x80353748 -> 0x803542E4
void System::Thread::Create(class Thread * this /* r25 */, int stackSize /* r28 */, enum ThreadPriority priority /* r26 */) {
    // References
    // -> static long priorityMap[7];
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// Range: 0x803542E4 -> 0x80354D38
void System::Thread::Destroy(class Thread * this /* r29 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: System::Thread::Start(System::Thread::Runnable *)
// Range: 0x80354D38 -> 0x80354D44
void System::Thread::Start() {
}
// Range: 0x80354D44 -> 0x80354DA0
void System::Thread::WaitForStop(class Thread * this /* r31 */) {
}
// Range: 0x80354DA0 -> 0x80355768
void System::Thread::RunningStart() {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class ThreadLocalStorageTable table;
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x80355768 -> 0x8035676C
void System::Thread::RunningStop(class Thread * this /* r25 */) {
    // References
    // -> class ThreadLocalStorageTable table;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class ThreadLocalStorage threadLocal;
}
// signature: System::Thread::RunCallback(void *)
// Range: 0x8035676C -> 0x803567B8
void * System::Thread::RunCallback() {
    // Local variables
    class Thread * thread; // r31
}
