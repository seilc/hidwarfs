/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Memory\PoolManager.cpp
*/
// signature: Memory::PoolManager::PoolManager(Memory::MemTracker *, Memory::PhysicalMemoryPool)
// Range: 0x801EBDA0 -> 0x801EBDD0
void * Memory::PoolManager::PoolManager(class PoolManager * this /* r31 */) {
}
// Range: 0x801EBDD0 -> 0x801EBE1C
void * Memory::PoolManager::~PoolManager(class PoolManager * this /* r30 */) {
}
// Range: 0x801EBE20 -> 0x801EBFE4
void Memory::PoolManager::Create(class PoolManager * this /* r28 */, class MemTracker * memTracker /* r29 */, enum PhysicalMemoryPool pool /* r30 */) {
}
// Range: 0x801EBFF0 -> 0x801EC0D0
void Memory::PoolManager::Destroy(class PoolManager * this /* r30 */) {
}
// signature: Memory::PoolManager::GetMemorySize(void *)
// Range: 0x801EC0D0 -> 0x801EC1A4
int Memory::PoolManager::GetMemorySize() {
}
// Range: 0x801EC1B0 -> 0x801EC268
void * Memory::PoolManager::Alloc(class PoolManager * this /* r29 */, int size /* r30 */, enum eMemMgrTag tag /* r31 */) {
    // Local variables
    unsigned char * amem; // r0
}
// signature: Memory::PoolManager::Free(void *)
// Range: 0x801EC270 -> 0x801EC374
bool Memory::PoolManager::Free() {
}
