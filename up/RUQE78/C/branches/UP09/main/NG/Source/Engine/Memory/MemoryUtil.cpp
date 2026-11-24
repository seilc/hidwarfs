/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Memory\MemoryUtil.cpp
*/
bool IsHeapInitialized; // size: 0x1, address: 0x8084C534
class MEMiHeapHead * physicalMEM1Handle; // size: 0x4, address: 0x8084C538
class MEMiHeapHead * physicalMEM2Handle; // size: 0x4, address: 0x8084C53C
// Range: 0x8032829C -> 0x80328928
void * __sys_alloc(unsigned long size /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// Range: 0x80328928 -> 0x80328D94
void __sys_free(void * mem /* r31 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// Range: 0x80328D94 -> 0x80329010
void * Memory::AllocPhysicalMemory(int size /* r28 */, int align /* r30 */, enum PhysicalMemoryPool pool /* r29 */) {
    // Local variables
    unsigned char * mem; // r31

    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> bool IsHeapInitialized;
}
// signature: Memory::FreePhysicalMemory(void *, int, Memory::PhysicalMemoryPool)
// Range: 0x80329010 -> 0x803290BC
void Memory::FreePhysicalMemory(void * mem /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
}
// Range: 0x803290BC -> 0x8032915C
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
