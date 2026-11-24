/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Memory\Memory.cpp
*/
static class PoolManager globalHeapBlockAllocatorMain; // size: 0x34, address: 0x80804D0C
static class AllocModule memallocmod; // size: 0x98, address: 0x80804D40
static class ModuleRegistrator memoryModReg; // size: 0x8, address: 0x80804DD8
class Module * allocModule; // size: 0x4, address: 0x8070AA6C
static class ThreadLocalStorage threadLocal; // size: 0x4, address: 0x80804DE0
static unsigned char * updateFrameMem; // size: 0x4, address: 0x80804DE4
static unsigned char * renderFrameMem; // size: 0x4, address: 0x80804DE8
static class MallocDebugWrapper globalMallocAllocatorMain; // size: 0x1C, address: 0x80804DF8
static class MallocDebugWrapper globalMallocAllocatorSecondary; // size: 0x1C, address: 0x80804E20
class SingleBufferAllocator updateFrameAllocator; // size: 0xC, address: 0x80804E3C
class SingleBufferAllocator renderFrameAllocator; // size: 0xC, address: 0x80804E48
class AbstractAllocator aaGlobalHeap; // size: 0x8, address: 0x80804E58
class AbstractAllocator aaThreadStack; // size: 0x8, address: 0x80804E60
class AbstractAllocator aaUpdateFrame; // size: 0x8, address: 0x80804E68
class AbstractAllocator aaRenderFrame; // size: 0x8, address: 0x80804E70
class ThreadLocalStorageTable table; // size: 0x8, address: 0x80804E88
int gInHavokInit; // size: 0x4, address: 0x80804E90
int gInHavokDeinit; // size: 0x4, address: 0x80804E94
int gInExit; // size: 0x4, address: 0x80804E98
int havokAllocs[2][5]; // size: 0x28, address: 0x80804EA0
int havokIndex; // size: 0x4, address: 0x80804EC8
int gInShaderCompile; // size: 0x4, address: 0x80804ECC
unsigned int gShaderThread; // size: 0x4, address: 0x80804ED0
// signature: @unnamed@WAD02_cpp@::GlobalHeapAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x8028CCC4 -> 0x8028CCDC
static void * @unnamed@WAD02_cpp@::GlobalHeapAllocCB() {
}
// signature: @unnamed@WAD02_cpp@::GlobalHeapFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x8028CCDC -> 0x8028CFCC
static void @unnamed@WAD02_cpp@::GlobalHeapFreeCB(void * mem /* r31 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: @unnamed@WAD02_cpp@::ThreadStackAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x8028CFCC -> 0x8028D028
static void * @unnamed@WAD02_cpp@::ThreadStackAllocCB(unsigned long size /* r30 */) {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// signature: @unnamed@WAD02_cpp@::ThreadStackFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x8028D028 -> 0x8028D084
static void @unnamed@WAD02_cpp@::ThreadStackFreeCB(unsigned long size /* r30 */) {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// signature: @unnamed@WAD02_cpp@::UpdateFrameAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x8028D084 -> 0x8028D0C0
static void * @unnamed@WAD02_cpp@::UpdateFrameAllocCB() {
    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: @unnamed@WAD02_cpp@::UpdateFrameFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x8028D0C0 -> 0x8028D0C4
static void @unnamed@WAD02_cpp@::UpdateFrameFreeCB() {
}
// signature: @unnamed@WAD02_cpp@::RenderFrameAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x8028D0C4 -> 0x8028D100
static void * @unnamed@WAD02_cpp@::RenderFrameAllocCB() {
    // References
    // -> class SingleBufferAllocator renderFrameAllocator;
}
// signature: @unnamed@WAD02_cpp@::RenderFrameFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x8028D100 -> 0x8028D104
static void @unnamed@WAD02_cpp@::RenderFrameFreeCB() {
}
// signature: Memory::AllocModule::Startup(int)
// Range: 0x8028D104 -> 0x8028D40C
void Memory::AllocModule::Startup() {
    // References
    // -> static unsigned char * renderFrameMem;
    // -> class SingleBufferAllocator renderFrameAllocator;
    // -> static unsigned char * updateFrameMem;
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> bool IsHeapInitialized;
}
// signature: Memory::AllocModule::Shutdown(int)
// Range: 0x8028D40C -> 0x8028D4E8
void Memory::AllocModule::Shutdown() {
    // References
    // -> static unsigned char * updateFrameMem;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static unsigned char * renderFrameMem;
}
// signature: Memory::AllocModule::FirstUpdate(int)
// Range: 0x8028D4E8 -> 0x8028D4EC
void Memory::AllocModule::FirstUpdate() {
}
// Range: 0x8028D4EC -> 0x8028E03C
void Memory::DestroyThreadStack() {
    // References
    // -> class ThreadLocalStorageTable table;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x8028E03C -> 0x8028EA1C
void * Memory::AllocGlobalHeap(unsigned long size /* r24 */, enum GlobalHeapEnum pool /* r25 */, unsigned long align /* r26 */, enum eMemMgrTag memTag /* r27 */, bool allocFromBack /* r28 */) {
    // Local variables
    class MemTracker * memTracker; // r0
    unsigned char * amem; // r29

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class MemTracker globalHeapTrackerSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> static class MemTracker globalHeapTrackerMain;
}
// signature: Memory::AllocGlobalHeap(unsigned long, Memory::GlobalHeapEnum, eMemMgrTag, bool)
// Range: 0x8028EA1C -> 0x8028EA2C
void * Memory::AllocGlobalHeap() {
}
// Range: 0x8028EA2C -> 0x8028F194
void * Memory::ReallocGlobalHeap(void * oldMem /* r27 */, unsigned long newSize /* r28 */, enum GlobalHeapEnum pool /* r29 */, enum eMemMgrTag memTag /* r30 */) {
    // Local variables
    bool success; // r26

    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: Memory::FreeGlobalHeap(void *, Memory::GlobalHeapEnum)
// Range: 0x8028F194 -> 0x8028F550
void Memory::FreeGlobalHeap(void * mem /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// Range: 0x8028F550 -> 0x8028F564
void Memory::SwapRenderFrameBuffers() {
    // References
    // -> class SingleBufferAllocator renderFrameAllocator;
}
// Range: 0x8028F564 -> 0x8028F5A4
class StaticStackAllocator * Memory::GetThreadStackAllocator() {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x8028F5A4 -> 0x8028F8F0
void * Memory::ThreadLocalStorageTable::~ThreadLocalStorageTable(class ThreadLocalStorageTable * this /* r31 */) {
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
// Range: 0x8028FCB4 -> 0x8028FD48
void * operator new(unsigned long size /* r30 */) {
    // References
    // -> int havokAllocs[2][5];
    // -> int havokIndex;
    // -> int gInHavokInit;
    // -> bool IsHeapInitialized;
}
// Range: 0x8028FD48 -> 0x8028FD9C
void * operator new[](unsigned long size /* r31 */) {
    // References
    // -> bool IsHeapInitialized;
}
// Range: 0x8028FD9C -> 0x802900B0
void operator delete(void * mem /* r30 */) {
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
// Range: 0x802900B0 -> 0x802903A4
void operator delete[](void * mem /* r31 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
