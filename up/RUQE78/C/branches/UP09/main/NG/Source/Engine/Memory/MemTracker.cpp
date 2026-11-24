/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Memory\MemTracker.cpp
*/
static class MemTracker globalHeapTrackerMain; // size: 0xAB8, address: 0x8084C550
static class MemTracker globalHeapTrackerSecondary; // size: 0xAB8, address: 0x8084D018
class DeptLookup DeptLookupTable[5]; // size: 0x50, address: 0x807C0A30
class TagLookup TagLookupTable[150]; // size: 0x708, address: 0x807C0A80
// signature: Memory::GetGlobalHeapTracker(Memory::GlobalHeapEnum)
// Range: 0x8032915C -> 0x80329178
class MemTracker * Memory::GetGlobalHeapTracker() {
    // References
    // -> static class MemTracker globalHeapTrackerSecondary;
    // -> static class MemTracker globalHeapTrackerMain;
}
// Range: 0x80329178 -> 0x80329614
void * Memory::MemTracker::~MemTracker(class MemTracker * this /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> class FileError okay;
}
// Range: 0x80329618 -> 0x803297F8
void Memory::MemTracker::_Init() {
    {
        // Range: 0x80329634 -> 0x803296A8
        // Local variables
        int i; // r12

        {
            // Range: 0x80329634 -> 0x803296A8
            // Local variables
            class TagLookup tagswapstorage; // r1+0x18
        }
    }
    {
        // Range: 0x80329730 -> 0x803297B8
        // Local variables
        int j; // r29

        {
            // Range: 0x80329730 -> 0x803297B8
            // Local variables
            class DeptLookup deptswapstorage; // r1+0x8
        }
    }

    // References
    // -> class DeptLookup DeptLookupTable[5];
    // -> class TagLookup TagLookupTable[150];
}
