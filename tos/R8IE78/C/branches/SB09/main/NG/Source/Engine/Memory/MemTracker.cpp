/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Memory\MemTracker.cpp
*/
static class MemTracker globalHeapTrackerMain; // size: 0x9FC, address: 0x8077B904
static class MemTracker globalHeapTrackerSecondary; // size: 0x9FC, address: 0x8077C30C
class DeptLookup DeptLookupTable[5]; // size: 0x50, address: 0x806CE8C0
class TagLookup TagLookupTable[103]; // size: 0x4D4, address: 0x806CE910
// signature: Memory::GetGlobalHeapTracker(Memory::GlobalHeapEnum)
// Range: 0x801EBAD0 -> 0x801EBAEC
class MemTracker * Memory::GetGlobalHeapTracker() {
    // References
    // -> static class MemTracker globalHeapTrackerSecondary;
    // -> static class MemTracker globalHeapTrackerMain;
}
// signature: Memory::MemTracker::MemTracker(int)
// Range: 0x801EBAF0 -> 0x801EBB80
void * Memory::MemTracker::MemTracker(class MemTracker * this /* r29 */) {
}
// Range: 0x801EBB80 -> 0x801EBBD4
void * Memory::MemTracker::~MemTracker(class MemTracker * this /* r30 */) {
}
// signature: Memory::MemTracker::_SetDeptMaxMem(const int, const int)
// Range: 0x801EBBE0 -> 0x801EBC18
void Memory::MemTracker::_SetDeptMaxMem() {
    {
        // Range: 0x801EBBE0 -> 0x801EBC14
        // Local variables
        unsigned int i; // r0
    }

    // References
    // -> class DeptLookup DeptLookupTable[5];
}
// Range: 0x801EBC20 -> 0x801EBD6C
void Memory::MemTracker::_Init(class MemTracker * this /* r31 */) {
    {
        // Range: 0x801EBC28 -> 0x801EBCAC
        // Local variables
        int i; // r27

        {
            // Range: 0x801EBC28 -> 0x801EBCAC
            // Local variables
            class TagLookup tagswapstorage; // r1+0x18
        }
    }
    {
        // Range: 0x801EBCAC -> 0x801EBD3C
        // Local variables
        int j; // r23

        {
            // Range: 0x801EBCAC -> 0x801EBD3C
            // Local variables
            class DeptLookup deptswapstorage; // r1+0x8
        }
    }
    {
        // Range: 0x801EBD3C -> 0x801EBD58
        // Local variables
        int k; // r0
    }

    // References
    // -> class DeptLookup DeptLookupTable[5];
    // -> class TagLookup TagLookupTable[103];
}
