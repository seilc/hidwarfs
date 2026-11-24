/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Memory\Memory.cpp
*/
static class PoolManager globalHeapBlockAllocatorMain; // size: 0x34, address: 0x8084C35C
static class AllocModule memallocmod; // size: 0x98, address: 0x8084C390
static class ModuleRegistrator memoryModReg; // size: 0x8, address: 0x8084C428
class Module * allocModule; // size: 0x4, address: 0x807C0A14
static class ThreadLocalStorage threadLocal; // size: 0x4, address: 0x8084C430
static unsigned char * updateFrameMem; // size: 0x4, address: 0x8084C434
static unsigned char * renderFrameMem; // size: 0x4, address: 0x8084C438
static class MallocDebugWrapper globalMallocAllocatorMain; // size: 0x24, address: 0x8084C448
static class MallocDebugWrapper globalMallocAllocatorSecondary; // size: 0x24, address: 0x8084C478
class SingleBufferAllocator updateFrameAllocator; // size: 0xC, address: 0x8084C49C
class SingleBufferAllocator renderFrameAllocator; // size: 0xC, address: 0x8084C4A8
class AbstractAllocator aaGlobalHeap; // size: 0x8, address: 0x8084C4B8
class AbstractAllocator aaThreadStack; // size: 0x8, address: 0x8084C4C0
class AbstractAllocator aaUpdateFrame; // size: 0x8, address: 0x8084C4C8
class AbstractAllocator aaRenderFrame; // size: 0x8, address: 0x8084C4D0
class ThreadLocalStorageTable table; // size: 0x8, address: 0x8084C4E8
int gInHavokInit; // size: 0x4, address: 0x8084C4F0
int gInHavokDeinit; // size: 0x4, address: 0x8084C4F4
int gInExit; // size: 0x4, address: 0x8084C4F8
int havokAllocs[2][5]; // size: 0x28, address: 0x8084C500
int havokIndex; // size: 0x4, address: 0x8084C528
int gInShaderCompile; // size: 0x4, address: 0x8084C52C
unsigned int gShaderThread; // size: 0x4, address: 0x8084C530
// signature: @unnamed@WAD02_cpp@::GlobalHeapAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x80321A4C -> 0x803220D8
static void * @unnamed@WAD02_cpp@::GlobalHeapAllocCB(unsigned long size /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: @unnamed@WAD02_cpp@::GlobalHeapFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x803220D8 -> 0x80322544
static void @unnamed@WAD02_cpp@::GlobalHeapFreeCB(void * mem /* r31 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: @unnamed@WAD02_cpp@::ThreadStackAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x80322544 -> 0x803225A0
static void * @unnamed@WAD02_cpp@::ThreadStackAllocCB(unsigned long size /* r30 */) {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// signature: @unnamed@WAD02_cpp@::ThreadStackFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x803225A0 -> 0x803225FC
static void @unnamed@WAD02_cpp@::ThreadStackFreeCB(unsigned long size /* r30 */) {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// signature: @unnamed@WAD02_cpp@::UpdateFrameAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x803225FC -> 0x80322638
static void * @unnamed@WAD02_cpp@::UpdateFrameAllocCB() {
    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: @unnamed@WAD02_cpp@::UpdateFrameFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x80322638 -> 0x8032263C
static void @unnamed@WAD02_cpp@::UpdateFrameFreeCB() {
}
// signature: @unnamed@WAD02_cpp@::RenderFrameAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x8032263C -> 0x80322678
static void * @unnamed@WAD02_cpp@::RenderFrameAllocCB() {
    // References
    // -> class SingleBufferAllocator renderFrameAllocator;
}
// signature: @unnamed@WAD02_cpp@::RenderFrameFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x80322678 -> 0x8032267C
static void @unnamed@WAD02_cpp@::RenderFrameFreeCB() {
}
// signature: Memory::GetMemorySize(void *)
// Range: 0x8032267C -> 0x803227C4
int Memory::GetMemorySize() {
    // Local variables
    int size; // r0

    // References
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: Memory::AllocModule::Startup(int)
// Range: 0x803227C4 -> 0x80322A6C
void Memory::AllocModule::Startup() {
    // References
    // -> static unsigned char * renderFrameMem;
    // -> class SingleBufferAllocator renderFrameAllocator;
    // -> static unsigned char * updateFrameMem;
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> bool IsHeapInitialized;
}
// signature: Memory::AllocModule::Shutdown(int)
// Range: 0x80322A6C -> 0x80322B18
void Memory::AllocModule::Shutdown() {
    // References
    // -> static unsigned char * updateFrameMem;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static unsigned char * renderFrameMem;
}
// signature: Memory::AllocModule::FirstUpdate(int)
// Range: 0x80322B18 -> 0x80322B1C
void Memory::AllocModule::FirstUpdate() {
}
// signature: Memory::CreateThreadStack(int, int)
// Range: 0x80322B1C -> 0x80323504
void Memory::CreateThreadStack(int size /* r26 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class ThreadLocalStorageTable table;
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x80323504 -> 0x8032451C
void Memory::DestroyThreadStack() {
    // References
    // -> class ThreadLocalStorageTable table;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class ThreadLocalStorage threadLocal;
}
// signature: Memory::AllocGlobalHeap(unsigned long, Memory::GlobalHeapEnum, unsigned long, eMemMgrTag, bool)
// Range: 0x8032451C -> 0x80324E78
void * Memory::AllocGlobalHeap(unsigned long size /* r25 */, enum GlobalHeapEnum pool /* r26 */, unsigned long align /* r27 */, bool allocFromBack /* r28 */) {
    // Local variables
    unsigned char * amem; // r29

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: Memory::AllocGlobalHeap(unsigned long, Memory::GlobalHeapEnum, eMemMgrTag, bool)
// Range: 0x80324E78 -> 0x803257CC
void * Memory::AllocGlobalHeap(unsigned long size /* r26 */, enum GlobalHeapEnum pool /* r27 */, bool allocFromBack /* r28 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// Range: 0x803257CC -> 0x803258DC
void * Memory::ReallocGlobalHeap(void * oldMem /* r27 */, unsigned long newSize /* r28 */, enum GlobalHeapEnum pool /* r29 */, enum eMemMgrTag memTag /* r30 */) {
    // Local variables
    bool success; // r3
    void * newMem; // r31
    int oldSize; // r0

    {
        // Range: 0x8032582C -> 0x80325868
        // Local variables
        int oldSize; // r0
    }

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: Memory::FreeGlobalHeap(void *, Memory::GlobalHeapEnum)
// Range: 0x803258DC -> 0x80325E30
void Memory::FreeGlobalHeap(void * mem /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// Range: 0x80325E30 -> 0x80325E44
void Memory::SwapRenderFrameBuffers() {
    // References
    // -> class SingleBufferAllocator renderFrameAllocator;
}
// Range: 0x80325E44 -> 0x80325E84
class StaticStackAllocator * Memory::GetThreadStackAllocator() {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x80325E84 -> 0x8032634C
void * Memory::ThreadLocalStorageTable::~ThreadLocalStorageTable(class ThreadLocalStorageTable * this /* r31 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
}
// Range: 0x80326C4C -> 0x8032730C
void * operator new(unsigned long size /* r28 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int havokIndex;
    // -> int gInHavokInit;
    // -> bool IsHeapInitialized;
}
// Range: 0x8032730C -> 0x803279AC
void * operator new[](unsigned long size /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> bool IsHeapInitialized;
}
// Range: 0x803279AC -> 0x80327E2C
void operator delete(void * mem /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
}
// Range: 0x80327E2C -> 0x8032829C
void operator delete[](void * mem /* r31 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
