/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Memory\MallocDebugWrapper.cpp
*/
// signature: Memory::MallocDebugWrapper::MallocDebugWrapper(Memory::GlobalHeapEnum, Memory::PhysicalMemoryPool)
// Range: 0x801EAA20 -> 0x801EAA64
void * Memory::MallocDebugWrapper::MallocDebugWrapper(class MallocDebugWrapper * this /* r30 */, enum PhysicalMemoryPool physPool /* r31 */) {
}
// signature: Memory::MallocDebugWrapper::Alloc(int, eMemMgrTag, int, bool)
// Range: 0x801EAA70 -> 0x801EAB00
void * Memory::MallocDebugWrapper::Alloc(class MallocDebugWrapper * this /* r28 */, int size /* r29 */, int align /* r30 */, bool allocFromBack /* r31 */) {
    // Local variables
    unsigned char * mem; // r0
}
// Range: 0x801EACE0 -> 0x801EAD68
bool Memory::MallocDebugWrapper::Resize(class MallocDebugWrapper * this /* r29 */, void * mem /* r30 */, int size /* r31 */) {
    // Local variables
    bool success; // r31
}
// Range: 0x801EAD70 -> 0x801EADD0
void Memory::MallocDebugWrapper::Free(class MallocDebugWrapper * this /* r30 */, void * mem /* r31 */) {
}
