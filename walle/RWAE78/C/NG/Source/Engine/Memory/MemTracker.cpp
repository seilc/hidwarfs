/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Memory\MemTracker.cpp
*/
static class MemTracker globalHeapTrackerMain; // size: 0xA6C, address: 0x80804EF4
static class MemTracker globalHeapTrackerSecondary; // size: 0xA6C, address: 0x8080596C
class DeptLookup DeptLookupTable[5]; // size: 0x50, address: 0x8070AA88
class TagLookup TagLookupTable[133]; // size: 0x63C, address: 0x8070AAD8
// signature: Memory::GetGlobalHeapTracker(Memory::GlobalHeapEnum)
// Range: 0x80290B00 -> 0x80290B1C
class MemTracker * Memory::GetGlobalHeapTracker() {
    // References
    // -> static class MemTracker globalHeapTrackerSecondary;
    // -> static class MemTracker globalHeapTrackerMain;
}
// Range: 0x80290B1C -> 0x80290E44
void * Memory::MemTracker::~MemTracker(class MemTracker * this /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> class FileError okay;
}
// Range: 0x80290E4C -> 0x80290FCC
void Memory::MemTracker::_Init() {
    {
        // Range: 0x80290E68 -> 0x80290EE0
        // Local variables
        int i; // r12

        {
            // Range: 0x80290E68 -> 0x80290EE0
            // Local variables
            class TagLookup tagswapstorage; // r1+0x18
        }
    }
    {
        // Range: 0x80290F04 -> 0x80290F8C
        // Local variables
        int j; // r29

        {
            // Range: 0x80290F04 -> 0x80290F8C
            // Local variables
            class DeptLookup deptswapstorage; // r1+0x8
        }
    }

    // References
    // -> class DeptLookup DeptLookupTable[5];
    // -> class TagLookup TagLookupTable[133];
}
