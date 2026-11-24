/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Scaleform\ScaleformAllocator.cpp
*/
class HeapAllocatorWii * sfAllocator; // size: 0x4, address: 0x8077CF28
// Range: 0x801F2800 -> 0x801F28B0
void * Scaleform::HeapAllocatorWii::HeapAllocatorWii(class HeapAllocatorWii * this /* r30 */) {
    // References
    // -> class HeapAllocatorWii * sfAllocator;
    // -> struct {} __vt__Q29Scaleform16HeapAllocatorWii;
}
// signature: Scaleform::HeapAllocatorWii::Create(Memory::GlobalHeapEnum)
// Range: 0x801F28B0 -> 0x801F294C
void Scaleform::HeapAllocatorWii::Create(class HeapAllocatorWii * this /* r31 */) {
    // Local variables
    void * mem; // r0
}
// signature: Scaleform::ShouldBeInFastMem(GMemoryHeap *)
// Range: 0x801F2A50 -> 0x801F2A88
bool Scaleform::ShouldBeInFastMem() {
}
// Range: 0x801F2950 -> 0x801F2A50
void * Scaleform::HeapAllocatorWii::Alloc(class HeapAllocatorWii * this /* r26 */, unsigned long size /* r27 */, unsigned long align /* r28 */, class GMemoryHeap * heapId /* r31 */) {
    // Local variables
    void * mem; // r30
    int memIdx; // r29
}
// Range: 0x801F2A90 -> 0x801F2B5C
bool Scaleform::HeapAllocatorWii::Free(class HeapAllocatorWii * this /* r25 */, void * mem /* r26 */, unsigned long size /* r27 */, unsigned long align /* r28 */, class GMemoryHeap * heapId /* r29 */) {
    // Local variables
    int memIdx; // r31
    bool success; // r30
}
// Range: 0x801F2B60 -> 0x801F2C38
bool Scaleform::HeapAllocatorWii::ReallocInPlace(class HeapAllocatorWii * this /* r26 */, void * oldMem /* r27 */, unsigned long oldSize /* r28 */, unsigned long newSize /* r29 */, unsigned long align /* r31 */, class GMemoryHeap * heapId /* r30 */) {
    // Local variables
    bool success; // r31
}
