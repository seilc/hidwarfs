/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Memory\FixedAllocator.cpp
*/
// signature: Memory::FixedAllocator::FixedAllocator(int, int, void *, void *, Memory::MemTracker *, bool)
// Range: 0x8028C294 -> 0x8028C2CC
void * Memory::FixedAllocator::FixedAllocator(class FixedAllocator * this /* r31 */) {
}
// Range: 0x8028C2CC -> 0x8028C600
void * Memory::FixedAllocator::~FixedAllocator(class FixedAllocator * this /* r31 */) {
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
// signature: Memory::FixedAllocator::Create(int, int, void *, void *, Memory::MemTracker *, bool)
// Range: 0x8028C600 -> 0x8028C65C
void Memory::FixedAllocator::Create() {
    // Local variables
    class FixedHeader * buffIter; // r6
}
