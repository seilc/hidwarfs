/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Memory\Memory.cpp
*/
static class PoolManager globalHeapBlockAllocatorMain; // size: 0x34, address: 0x8077B714
static class AllocModule memallocmod; // size: 0x98, address: 0x8077B748
static class ModuleRegistrator memoryModReg; // size: 0x8, address: 0x8077B7E0
class Module * allocModule; // size: 0x4, address: 0x806CE8A4
static class ThreadLocalStorage threadLocal; // size: 0x4, address: 0x8077B7E8
static unsigned char * updateFrameMem; // size: 0x4, address: 0x8077B7EC
static unsigned char * renderFrameMem; // size: 0x4, address: 0x8077B7F0
static class MallocDebugWrapper globalMallocAllocatorMain; // size: 0x24, address: 0x8077B800
static class MallocDebugWrapper globalMallocAllocatorSecondary; // size: 0x24, address: 0x8077B830
class SingleBufferAllocator updateFrameAllocator; // size: 0xC, address: 0x8077B854
class SingleBufferAllocator renderFrameAllocator; // size: 0xC, address: 0x8077B860
class AbstractAllocator aaGlobalHeap; // size: 0x8, address: 0x8077B870
class AbstractAllocator aaThreadStack; // size: 0x8, address: 0x8077B878
class AbstractAllocator aaUpdateFrame; // size: 0x8, address: 0x8077B880
class AbstractAllocator aaRenderFrame; // size: 0x8, address: 0x8077B888
class ThreadLocalStorageTable table; // size: 0x8, address: 0x8077B8A0
int gInHavokInit; // size: 0x4, address: 0x8077B8A8
int gInHavokDeinit; // size: 0x4, address: 0x8077B8AC
int gInExit; // size: 0x4, address: 0x8077B8B0
int havokAllocs[2][5]; // size: 0x28, address: 0x8077B8B8
int havokIndex; // size: 0x4, address: 0x8077B8E0
int gInShaderCompile; // size: 0x4, address: 0x8077B8E4
unsigned int gShaderThread; // size: 0x4, address: 0x8077B8E8
// signature: @unnamed@WAD02_cpp@::GlobalHeapAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x801EAE30 -> 0x801EAE48
static void * @unnamed@WAD02_cpp@::GlobalHeapAllocCB() {
}
// signature: @unnamed@WAD02_cpp@::GlobalHeapFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x801EAE50 -> 0x801EAE5C
static void @unnamed@WAD02_cpp@::GlobalHeapFreeCB() {
}
// signature: @unnamed@WAD02_cpp@::ThreadStackAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x801EAE60 -> 0x801EAE68
static void * @unnamed@WAD02_cpp@::ThreadStackAllocCB() {
}
// signature: @unnamed@WAD02_cpp@::ThreadStackFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x801EAE70 -> 0x801EAE78
static void @unnamed@WAD02_cpp@::ThreadStackFreeCB() {
}
// signature: @unnamed@WAD02_cpp@::UpdateFrameAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x801EAE80 -> 0x801EAE94
static void * @unnamed@WAD02_cpp@::UpdateFrameAllocCB() {
    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: @unnamed@WAD02_cpp@::RenderFrameAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x801EAED0 -> 0x801EAEE4
static void * @unnamed@WAD02_cpp@::RenderFrameAllocCB() {
    // References
    // -> class SingleBufferAllocator renderFrameAllocator;
}
// Range: 0x801EAEF0 -> 0x801EAF34
int Memory::GetMemorySize(void * mem /* r31 */) {
    // Local variables
    int size; // r3

    // References
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// Range: 0x801EAF40 -> 0x801EAF84
void * Memory::AllocModule::AllocModule(class AllocModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q26Memory11AllocModule;
}
// signature: Memory::AllocModule::Startup(int)
// Range: 0x801EAF90 -> 0x801EB020
void Memory::AllocModule::Startup() {
    // References
    // -> static unsigned char * renderFrameMem;
    // -> class SingleBufferAllocator renderFrameAllocator;
    // -> static unsigned char * updateFrameMem;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: Memory::AllocModule::Shutdown(int)
// Range: 0x801EB020 -> 0x801EB068
void Memory::AllocModule::Shutdown() {
    // References
    // -> static unsigned char * updateFrameMem;
    // -> static unsigned char * renderFrameMem;
}
// signature: Memory::CreateThreadStack(int, int)
// Range: 0x801EB070 -> 0x801EB11C
void Memory::CreateThreadStack(int size /* r30 */) {
    // References
    // -> static class ThreadLocalStorage threadLocal;
    // -> class ThreadLocalStorageTable table;
}
// Range: 0x801EB120 -> 0x801EB1B8
void Memory::DestroyThreadStack() {
    // References
    // -> class ThreadLocalStorageTable table;
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x801EB1C0 -> 0x801EB2B8
void * Memory::AllocGlobalHeap(unsigned long size /* r26 */, enum GlobalHeapEnum pool /* r27 */, unsigned long align /* r28 */, enum eMemMgrTag memTag /* r29 */, bool allocFromBack /* r30 */) {
    // Local variables
    unsigned char * amem; // r3

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: Memory::AllocGlobalHeap(unsigned long, Memory::GlobalHeapEnum, eMemMgrTag, bool)
// Range: 0x801EB2C0 -> 0x801EB2D0
void * Memory::AllocGlobalHeap() {
}
// Range: 0x801EB2D0 -> 0x801EB408
void * Memory::ReallocGlobalHeap(void * oldMem /* r26 */, unsigned long newSize /* r27 */, enum GlobalHeapEnum pool /* r28 */, enum eMemMgrTag memTag /* r29 */, bool forceInPlace /* r30 */) {
    // Local variables
    bool success; // r3
    int oldSize; // r0

    {
        // Range: 0x801EB344 -> 0x801EB380
        // Local variables
        int oldSize; // r0
    }

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: Memory::FreeGlobalHeap(void *, Memory::GlobalHeapEnum)
// Range: 0x801EB410 -> 0x801EB480
void Memory::FreeGlobalHeap(void * mem /* r30 */) {
    {
        // Range: 0x801EB448 -> 0x801EB46C
        // Local variables
        bool owner; // r0
    }

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// Range: 0x801EB480 -> 0x801EB494
void Memory::SwapRenderFrameBuffers() {
    // References
    // -> class SingleBufferAllocator renderFrameAllocator;
}
// Range: 0x801EB4A0 -> 0x801EB4E0
class StaticStackAllocator * Memory::GetThreadStackAllocator() {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x801EB4E0 -> 0x801EB500
void * Memory::ThreadLocalStorageTable::ThreadLocalStorageTable() {
}
// Range: 0x801EB500 -> 0x801EB558
void * Memory::ThreadLocalStorageTable::~ThreadLocalStorageTable(class ThreadLocalStorageTable * this /* r31 */) {
}
// Range: 0x801EB560 -> 0x801EB590
int Memory::ThreadLocalStorageTable::AddUser() {
}
// Range: 0x801EB590 -> 0x801EB648
void Memory::ThreadLocalStorageTable::CreateData(class ThreadLocalStorageTable * this /* r30 */, int userIndex /* r28 */, int size /* r29 */) {
    // Local variables
    void * * data; // r31
    void * mem; // r30
}
// signature: Memory::ThreadLocalStorageTable::DeleteUserData(void **, int, int)
// Range: 0x801EB650 -> 0x801EB6F4
void Memory::ThreadLocalStorageTable::DeleteUserData(class ThreadLocalStorageTable * this /* r29 */, void * * userData /* r30 */) {
    // Local variables
    int firstUsed; // r5
}
// Range: 0x801EB700 -> 0x801EB78C
void * operator new(unsigned long size /* r30 */) {
    // References
    // -> int havokAllocs[2][5];
    // -> int havokIndex;
    // -> int gInHavokInit;
    // -> bool IsHeapInitialized;
}
// Range: 0x801EB790 -> 0x801EB7E4
void * operator new[](unsigned long size /* r31 */) {
    // References
    // -> bool IsHeapInitialized;
}
// signature: operator delete(void *)
// Range: 0x801EB7F0 -> 0x801EB830
void operator delete() {
    // References
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
}
// signature: operator delete[](void *)
// Range: 0x801EB830 -> 0x801EB844
void operator delete[]() {
}
