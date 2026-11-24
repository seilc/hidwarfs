/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Scaleform\ScaleformAllocator.cpp
*/
static class MemCB_ScaleformAllocMemory memCB_scaleformAllocMemory; // size: 0x4, address: 0x8084DDF8
// Range: 0x8033815C -> 0x80338184
void * Scaleform::HeapAllocator::HeapAllocator() {
    // References
    // -> struct {} __vt__Q29Scaleform13HeapAllocator;
}
// signature: Scaleform::HeapAllocator::SetHeap(Memory::GlobalHeapEnum, eMemMgrTag)
// Range: 0x80338184 -> 0x80338190
void Scaleform::HeapAllocator::SetHeap() {
}
// Range: 0x80338190 -> 0x803381F8
void Scaleform::HeapAllocator::LockHeap(class HeapAllocator * this /* r31 */) {
}
// Range: 0x803381F8 -> 0x8033821C
void Scaleform::HeapAllocator::UnlockHeap() {
}
// Range: 0x8033821C -> 0x8033857C
void Scaleform::HeapAllocator::Create(class HeapAllocator * this /* r30 */) {
}
// Range: 0x8033857C -> 0x80338720
void Scaleform::HeapAllocator::Destroy(class HeapAllocator * this /* r31 */) {
}
// Range: 0x80338720 -> 0x803388DC
void * Scaleform::HeapAllocator::Alloc(class HeapAllocator * this /* r30 */, unsigned long size /* r31 */) {
    // Local variables
    void * mem; // r0
}
// Range: 0x8033919C -> 0x80339AD0
void Scaleform::HeapAllocator::Free(class HeapAllocator * this /* r28 */, void * mem /* r29 */) {
    {
        // Range: 0x803391A4 -> 0x80339ABC
        // Local variables
        int i; // r30
    }

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> void * nearestMovieReleased;
    // -> void * movieReleaseTest;
}
// Range: 0x80339AD0 -> 0x80339DA0
void * Scaleform::HeapAllocator::Realloc(class HeapAllocator * this /* r28 */, void * oldMem /* r29 */, unsigned long size /* r30 */) {
    // Local variables
    int oldSize; // r27
    void * newMem; // r31

    {
        // Range: 0x80339AD8 -> 0x80339B54
        // Local variables
        int i; // r9
    }

    // References
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
