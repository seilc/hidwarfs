/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GMemory_sys.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805D2270 -> 0x805D2460
*/
// total size: 0x568
class GStandardAllocator : public GAllocator {
    // Members
    class IndexEntry BlockTable[64]; // offset 0x4, size 0x500
    class GAllocator * pBlockAllocator; // offset 0x504, size 0x4
    class GAllocator * pSystemAllocator; // offset 0x508, size 0x4
    class GAllocatorStats Stats; // offset 0x510, size 0x40
    class GLock Lock; // offset 0x550, size 0x1
};
// total size: 0x14
class IndexEntry {
    // Members
    class Node Head; // offset 0x0, size 0x8
    class Node Tail; // offset 0x8, size 0x8
    long BlockSize; // offset 0x10, size 0x4
};
// total size: 0x8
class Node {
    // Members
    class Node * pNext; // offset 0x0, size 0x4
    class Node * pPrev; // offset 0x4, size 0x4
};
// total size: 0x48
class GStandardBlockAllocator : public GAllocator {
    // Members
    class GAllocatorStats Stats; // offset 0x8, size 0x40
};
// total size: 0x4
class GDebugAllocator {};
static class GStandardAllocator GFC_Allocator; // size: 0x568, address: 0x80871DC8
static class GStandardBlockAllocator GFC_BlockAllocator; // size: 0x48, address: 0x80872330
static class GDebugAllocator GFC_DebugAllocator; // size: 0x4, address: 0x808DEC98
static class GAllocator * GFC_pAllocator; // size: 0x4, address: 0x808DDC88
static class GAllocator * GFC_pBlockAllocator; // size: 0x4, address: 0x808DDC8C
// Range: 0x805D2420 -> 0x805D2460
static void __sinit_\GMemory_sys_cpp() {
    // References
    // -> static class GDebugAllocator GFC_DebugAllocator;
    // -> struct {} __vt__15GDebugAllocator;
    // -> static class GStandardBlockAllocator GFC_BlockAllocator;
    // -> static class GStandardAllocator GFC_Allocator;
}
// signature: GMemory::SetAllocator(GAllocator *)
// Range: 0x805D2330 -> 0x805D234C
void GMemory::SetAllocator() {
    // References
    // -> static class GAllocator * GFC_pAllocator;
    // -> static class GStandardAllocator GFC_Allocator;
}
// Range: 0x805D2350 -> 0x805D2358
class GAllocator * GMemory::GetAllocator() {
    // References
    // -> static class GAllocator * GFC_pAllocator;
}
// Range: 0x805D2360 -> 0x805D2368
class GAllocator * GMemory::GetBlockAllocator() {
    // References
    // -> static class GAllocator * GFC_pBlockAllocator;
}
// signature: GMemory::Alloc(unsigned long)
// Range: 0x805D2370 -> 0x805D2388
void * GMemory::Alloc() {
    // References
    // -> static class GAllocator * GFC_pAllocator;
}
// signature: GMemory::Realloc(void *, unsigned long)
// Range: 0x805D2390 -> 0x805D23B0
void * GMemory::Realloc(void * pmem /* r0 */) {
    // References
    // -> static class GAllocator * GFC_pAllocator;
}
// signature: GMemory::Free(void *)
// Range: 0x805D23B0 -> 0x805D23C8
void GMemory::Free() {
    // References
    // -> static class GAllocator * GFC_pAllocator;
}
// signature: GMemory::AllocAligned(unsigned long, unsigned long, unsigned long)
// Range: 0x805D23D0 -> 0x805D23F8
void * GMemory::AllocAligned(unsigned long size /* r7 */, unsigned long align /* r0 */) {
    // References
    // -> static class GAllocator * GFC_pAllocator;
}
// signature: GMemory::FreeAligned(void *)
// Range: 0x805D2400 -> 0x805D2418
void GMemory::FreeAligned() {
    // References
    // -> static class GAllocator * GFC_pAllocator;
}
