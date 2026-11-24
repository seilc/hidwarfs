/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Memory\MemoryUtil.cpp
*/
int wiiMem1OverflowUsed; // size: 0x4, address: 0x80804ED4
int wiiMem2OverflowUsed; // size: 0x4, address: 0x80804ED8
bool IsHeapInitialized; // size: 0x1, address: 0x80804EDC
class MEMiHeapHead * physicalMEM1Handle; // size: 0x4, address: 0x80804EE0
class MEMiHeapHead * physicalMEM2Handle; // size: 0x4, address: 0x80804EE4
// Range: 0x802903A4 -> 0x802903B8
void * __sys_alloc() {
}
// Range: 0x802903B8 -> 0x802906A8
void __sys_free(void * mem /* r31 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// Range: 0x802906A8 -> 0x80290984
void * Memory::AllocPhysicalMemory(int size /* r29 */, int align /* r30 */, enum PhysicalMemoryPool pool /* r28 */) {
    // Local variables
    unsigned char * mem; // r31

    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> bool IsHeapInitialized;
}
// signature: Memory::FreePhysicalMemory(void *, int, Memory::PhysicalMemoryPool)
// Range: 0x80290984 -> 0x80290A60
void Memory::FreePhysicalMemory(void * mem /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
}
// Range: 0x80290A60 -> 0x80290B00
void Memory::InitializePhysicalMemory() {
    // Local variables
    void * arenaLo; // r30
    void * arenaHi; // r0
    void * arenaLo2; // r30
    void * arenaHi2; // r0

    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> bool IsHeapInitialized;
}
