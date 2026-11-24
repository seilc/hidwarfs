/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Memory\MemoryUtil.cpp
*/
bool IsHeapInitialized; // size: 0x1, address: 0x8077B8EC
class MEMiHeapHead * physicalMEM1Handle; // size: 0x4, address: 0x8077B8F0
class MEMiHeapHead * physicalMEM2Handle; // size: 0x4, address: 0x8077B8F4
// Range: 0x801EB850 -> 0x801EB864
void * __sys_alloc() {
}
// Range: 0x801EB870 -> 0x801EB878
void __sys_free() {
}
// Range: 0x801EB880 -> 0x801EB8F0
void * Memory::AllocPhysicalMemory(int size /* r29 */, int align /* r30 */, enum PhysicalMemoryPool pool /* r31 */) {
    // Local variables
    unsigned char * mem; // r3

    // References
    // -> bool IsHeapInitialized;
}
// signature: Memory::FreePhysicalMemory(void *, int, Memory::PhysicalMemoryPool)
// Range: 0x801EB8F0 -> 0x801EB90C
void Memory::FreePhysicalMemory() {
}
// Range: 0x801EB910 -> 0x801EB9A8
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
// signature: Memory::GetPhysicalMemoryFreeMax(Memory::PhysicalMemoryPool)
// Range: 0x801EB9B0 -> 0x801EBA20
int Memory::GetPhysicalMemoryFreeMax() {
    {
        // Range: 0x801EB9B8 -> 0x801EB9D8
        // Local variables
        int size1; // r0
    }
    {
        // Range: 0x801EB9D8 -> 0x801EBA08
        // Local variables
        int size2; // r31
    }

    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
}
// signature: Memory::GetPhysicalMemoryFreeMin(Memory::PhysicalMemoryPool)
// Range: 0x801EBA20 -> 0x801EBA98
int Memory::GetPhysicalMemoryFreeMin() {
    {
        // Range: 0x801EBA4C -> 0x801EBA80
        // Local variables
        int size2; // r31
    }

    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
}
// Range: 0x801EBAA0 -> 0x801EBAC8
bool Memory::IsUsingExtendedMemory() {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
}
