/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Memory\MemoryUtil.h
*/
// Range: 0x801EAB00 -> 0x801EABEC
void * Memory::AllocPhysicalMemory1(int size /* r29 */, int align /* r31 */) {
    // Local variables
    void * mem; // r30

    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
}
// Range: 0x801EADD0 -> 0x801EAE2C
void Memory::FreePhysicalMemory1(void * mem /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
}
// Range: 0x801EABF0 -> 0x801EACDC
void * Memory::AllocPhysicalMemory2(int size /* r29 */, int align /* r31 */) {
    // Local variables
    void * mem; // r30

    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
}
// Range: 0x801C2800 -> 0x801C285C
void Memory::FreePhysicalMemory2(void * mem /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
}
