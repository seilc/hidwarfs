/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\System\Multithread.cpp
*/
static long priorityMap[7]; // size: 0x1C, address: 0x806D7078
// signature: System::CommChannel::Init(int)
// Range: 0x802B2158 -> 0x802B21C8
void System::CommChannel::Init(class CommChannel * this /* r30 */) {
}
// Range: 0x802B21C8 -> 0x802B21CC
void System::CommChannel::Done() {
}
// signature: System::CommChannel::SetPool(char *, int)
// Range: 0x802B21CC -> 0x802B21E4
void System::CommChannel::SetPool() {
}
// signature: System::CommChannel::Acquire(int, int)
// Range: 0x802B21E4 -> 0x802B2354
char * System::CommChannel::Acquire(class CommChannel * this /* r30 */, int amountUser /* r31 */) {
    // Local variables
    int amtNeedEstMax; // r25
    char * userData; // r23

    {
        // Range: 0x802B2220 -> 0x802B22FC
        // Local variables
        int amtSpaceAvail; // r24
        int idxSpaceAvail; // r5

        {
            // Range: 0x802B2220 -> 0x802B2228
            // Local variables
            int amtPostSpace; // r23
        }
    }
}
// Range: 0x802B2354 -> 0x802B23E4
void System::CommChannel::Commit(class CommChannel * this /* r31 */) {
}
// Range: 0x802B23E4 -> 0x802B2538
char * System::CommChannel::Receive(class CommChannel * this /* r27 */, int * amount /* r28 */, bool waitForMessage /* r29 */) {
    // Local variables
    class BlockHeader * head; // r26

    {
        // Range: 0x802B2410 -> 0x802B24FC
        // Local variables
        char * msgStart; // r0
        int distToEnd; // r6
    }
    {
        // Range: 0x802B2504 -> 0x802B2520
        // Local variables
        char * msgUser; // r0
    }
}
// Range: 0x802B2538 -> 0x802B25E4
void System::CommChannel::Acknowledge(class CommChannel * this /* r31 */) {
    {
        // Range: 0x802B2560 -> 0x802B259C
        // Local variables
        class BlockHeader * head; // r6
    }
}
// Range: 0x802B25E4 -> 0x802B25E8
void * System::Thread::Thread() {
}
// Range: 0x802B25E8 -> 0x802B28F4
void * System::Thread::~Thread(class Thread * this /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
}
// signature: System::Thread::Create(const char *, int, int, int, int, System::ThreadPriority)
// Range: 0x802B28F4 -> 0x802B29EC
void System::Thread::Create(class Thread * this /* r28 */, int stackSize /* r29 */, enum ThreadPriority priority /* r30 */) {
    // References
    // -> static long priorityMap[7];
}
// Range: 0x802B29EC -> 0x802B30F0
void System::Thread::Destroy(class Thread * this /* r29 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: System::Thread::Start(System::Thread::Runnable *)
// Range: 0x802B30F0 -> 0x802B30FC
void System::Thread::Start() {
}
// Range: 0x802B30FC -> 0x802B3158
void System::Thread::WaitForStop(class Thread * this /* r31 */) {
}
// Range: 0x802B3158 -> 0x802B3D98
void * System::Thread::RunCallback(void * context /* r26 */) {
    // Local variables
    class Thread * thread; // r0

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> class ThreadLocalStorageTable table;
    // -> static class ThreadLocalStorage threadLocal;
}
