/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\AssetManager\Memory\DynaMemory.cpp
*/
static class DynaMemModule dynaMemMod; // size: 0x9C, address: 0x80774638
static class ModuleRegistrator dynaMemModReg; // size: 0x8, address: 0x807746D8
class Module * dynaMemModule; // size: 0x4, address: 0x806C95E0
bool g_useMalloc; // size: 0x1, address: 0x807746E0
static class MemVolProps g_volumeProps[3]; // size: 0x24, address: 0x806C95E4
static class MemOwnerUnclaimed memOwnerUnclaimed; // size: 0x4, address: 0x807746E4
static class MemHandle nullHandle; // size: 0x8, address: 0x807746E8
static class MemCallbackList memCallbackList; // size: 0x44, address: 0x807746F0
class RelativePriority priority[2]; // size: 0x18, address: 0x806C9608
bool enableMetrics; // size: 0x1, address: 0x806C9624
bool enableIntegity; // size: 0x1, address: 0x80774A55
static class MemCB_BorrowedMemory memCB_borrowedMemory; // size: 0x4, address: 0x80774734
bool beWordy; // size: 0x1, address: 0x80774A56
// Range: 0x801C23E0 -> 0x801C2404
void * Domains::MemCallbackList::MemCallbackList() {
    {
        // Range: 0x801C23EC -> 0x801C2400
        // Local variables
        int i; // r0
    }
}
// signature: Domains::MemCallbackList::AddCallback(Domains::MemCallbacks *)
// Range: 0x801B3870 -> 0x801B38C4
int Domains::MemCallbackList::AddCallback() {
    {
        // Range: 0x801B3874 -> 0x801B38A8
        // Local variables
        int i; // r7
    }
}
// Range: 0x801B2F50 -> 0x801B2F74
void Domains::InitNullHandle() {
    // References
    // -> static class MemHandle nullHandle;
}
// Range: 0x801B2F80 -> 0x801B2FCC
void * Domains::DynaMemModule::DynaMemModule(class DynaMemModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q27Domains13DynaMemModule;
}
// signature: Domains::DynaMemModule::GetPriority(int &) const
// Range: 0x801B2FD0 -> 0x801B3014
class RelativePriority * Domains::DynaMemModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[2];
    // -> class Module * testSuiteModule;
}
// signature: Domains::DynaMemModule::Startup(int)
// Range: 0x801B3020 -> 0x801B3088
void Domains::DynaMemModule::Startup(class DynaMemModule * this /* r30 */) {
}
// signature: Domains::DynaMemModule::Shutdown(int)
// Range: 0x801B3090 -> 0x801B30E0
void Domains::DynaMemModule::Shutdown(class DynaMemModule * this /* r31 */) {
}
// signature: Domains::DynaMemModule::Update(int)
// Range: 0x801B30E0 -> 0x801B30F4
void Domains::DynaMemModule::Update() {
}
// Range: 0x801B3100 -> 0x801B3148
void * Domains::DynaMemMgr::DynaMemMgr(class DynaMemMgr * this /* r29 */) {
}
// Range: 0x801B3150 -> 0x801B3200
void Domains::DynaMemMgr::SetupVolumes(class DynaMemMgr * this /* r25 */) {
    {
        // Range: 0x801B3160 -> 0x801B31EC
        // Local variables
        int i; // r27

        {
            // Range: 0x801B3160 -> 0x801B31EC
            // Local variables
            char * mem; // r0
            class MemVolProps * props; // r26
        }
    }

    // References
    // -> bool g_useMalloc;
    // -> static class MemVolProps g_volumeProps[3];
}
// Range: 0x801B3200 -> 0x801B3274
void Domains::DynaMemMgr::DestroyVolumes(class DynaMemMgr * this /* r28 */) {
    {
        // Range: 0x801B3214 -> 0x801B3260
        // Local variables
        int i; // r29

        {
            // Range: 0x801B3214 -> 0x801B3260
            // Local variables
            char * memPtr; // r1+0x8
        }
    }

    // References
    // -> bool g_useMalloc;
}
// signature: Domains::DynaMemMgr::GetVolume(Domains::enVolIdx)
// Range: 0x801B3280 -> 0x801B328C
class MemVolume * Domains::DynaMemMgr::GetVolume() {
}
// Range: 0x801B3290 -> 0x801B32DC
void Domains::DynaMemMgr::UpdateVolumes(class DynaMemMgr * this /* r29 */) {
    {
        // Range: 0x801B32A4 -> 0x801B32C8
        // Local variables
        int i; // r30
    }
}
// Range: 0x801B32E0 -> 0x801B32EC
char * Domains::MemHandle::Data() const {
}
// signature: Domains::MemAllocTable::Init(char *, int)
// Range: 0x801B32F0 -> 0x801B3340
void Domains::MemAllocTable::Init(class MemAllocTable * this /* r31 */) {
}
// Range: 0x801B3340 -> 0x801B3380
void Domains::MemAllocTable::Done(class MemAllocTable * this /* r31 */) {
}
// Range: 0x801B3380 -> 0x801B3438
void Domains::MemAllocTable::RawWipeTable(class MemAllocTable * this /* r28 */) {
    // Local variables
    class AllocEntry blank; // r1+0x8
    class AllocEntry * entry; // r31
    int num; // r30

    {
        // Range: 0x801B33AC -> 0x801B3424
        // Local variables
        int i; // r29
    }
}
// Range: 0x801B3440 -> 0x801B348C
class AllocEntry * Domains::MemAllocTable::NextUnused() {
}
// signature: Domains::MemAllocTable::AddToUnusedList(Domains::AllocEntry *)
// Range: 0x801B3490 -> 0x801B34C0
void Domains::MemAllocTable::AddToUnusedList() {
}
// signature: Domains::DLList_Sort_MemAddr(Domains::AllocEntry *, Domains::AllocEntry *)
// Range: 0x801B34C0 -> 0x801B34E8
int Domains::DLList_Sort_MemAddr() {
}
// signature: Domains::MemAllocTable::AddToFreeList(Domains::AllocEntry *)
// Range: 0x801B34F0 -> 0x801B3520
void Domains::MemAllocTable::AddToFreeList() {
}
// Range: 0x801B3520 -> 0x801B3548
void * Domains::MemVolume::MemVolume() {
    // References
    // -> static class MemOwnerUnclaimed memOwnerUnclaimed;
}
// signature: Domains::MemVolume::Init(char *, int, Domains::MemVolProps *, int)
// Range: 0x801B3550 -> 0x801B3668
void Domains::MemVolume::Init(class MemVolume * this /* r30 */, char * memPool /* r27 */, int size /* r28 */, class MemVolProps * props /* r29 */) {
    {
        // Range: 0x801B3558 -> 0x801B3614
        // Local variables
        class AllocEntry * entry; // r0
        int fluff; // r29
    }
}
// Range: 0x801B3670 -> 0x801B36AC
void Domains::MemVolume::Done(class MemVolume * this /* r30 */, char * * memPool /* r31 */) {
}
// Range: 0x801B36B0 -> 0x801B3864
class MemHandle * Domains::MemVolume::Acquire(class MemVolume * this /* r30 */, int userAmount /* r31 */, int align /* r25 */, class MemCallbacks * memCB /* r26 */) {
    // Local variables
    class AllocEntry * allocEntry; // r27

    {
        // Range: 0x801B36F4 -> 0x801B37A4
        // Local variables
        class AllocEntry * retEntry; // r27
        class MemHandle * retHandle; // r28
    }

    // References
    // -> static class MemCallbackList memCallbackList;
}
// Range: 0x801B38D0 -> 0x801B394C
void Domains::MemVolume::Release(class MemVolume * this /* r29 */, class MemHandle * memHandle /* r30 */) {
    // Local variables
    class AllocEntry * entry; // r31
}
// Range: 0x801B3950 -> 0x801B3AA0
class MemHandle * Domains::MemVolume::Partition(class MemVolume * this /* r26 */, class MemHandle * * origAlloc /* r27 */, int amt /* r28 */, class MemCallbacks * usrMemCB /* r24 */, int usrAlign /* r25 */) {
    // Local variables
    class AllocEntry * newEntry; // r30
    class AllocEntry * currEntry; // r29

    // References
    // -> static class MemCallbackList memCallbackList;
}
// Range: 0x801B3AA0 -> 0x801B3B20
void * Domains::MemVolume::BorrowMemory(class MemVolume * this /* r30 */, int amt /* r31 */) {
    // References
    // -> static class MemCB_BorrowedMemory memCB_borrowedMemory;
}
// Range: 0x801B3B20 -> 0x801B3B78
void Domains::MemVolume::RestoreMemory(class MemVolume * this /* r31 */) {
}
// Range: 0x801B3B80 -> 0x801B3C24
class MemHandle * Domains::MemHandleList::GrabUserHandle(class MemHandleList * this /* r31 */) {
    // Local variables
    class BlockOfHandles * blockPtr; // r5

    {
        // Range: 0x801B3BD0 -> 0x801B3BF0
        // Local variables
        class BlockOfHandles * lastBlock; // r4
    }
}
// signature: Domains::MemHandleList::FreeUserHandle(Domains::MemHandle *)
// Range: 0x801B3C30 -> 0x801B3CA0
void Domains::MemHandleList::FreeUserHandle() {
    // Local variables
    class BlockOfHandles * blockPtr; // r8
}
// Range: 0x801B3CA0 -> 0x801B3D24
void Domains::MemHandleList::FreeEmptyHandleListBlocks(class MemHandleList * this /* r29 */) {
    // Local variables
    class BlockOfHandles * blockPtr; // r31
    class BlockOfHandles * lastPtr; // r30

    {
        // Range: 0x801B3CC0 -> 0x801B3CFC
        // Local variables
        class BlockOfHandles * freeMe; // r4
    }
}
// Range: 0x801B3D30 -> 0x801B3DB8
class BlockOfHandles * Domains::MemHandleList::CreateHandleListBlock(class MemHandleList * this /* r30 */) {
}
// Range: 0x801B3DC0 -> 0x801B3E1C
void Domains::MemHandleList::FreeHandleListBlock(class BlockOfHandles * blockPtr /* r31 */) {
}
// signature: Domains::MemVolume::AllocFirstFit(int, int)
// Range: 0x801B3E20 -> 0x801B3F88
class AllocEntry * Domains::MemVolume::AllocFirstFit(class MemVolume * this /* r28 */) {
    // Local variables
    int realMinSize; // r31
    class AllocEntry * skipEntry; // r4
    class AllocEntry * goodEntry; // r30
    class AllocEntry * scanEntry; // r29
    class AllocEntry * allocEntry; // r26

    {
        // Range: 0x801B3E4C -> 0x801B3EF8
        // Local variables
        long dist; // r26
        char * moveUp; // r27
    }
}
// signature: Domains::MemCompactor::Init(Domains::MemVolume *)
// Range: 0x801B3F90 -> 0x801B3FA4
void Domains::MemCompactor::Init() {
}
// Range: 0x801B3FB0 -> 0x801B3FC4
void Domains::MemCompactor::Update() {
}
// Range: 0x801B3FD0 -> 0x801B4078
void Domains::MemCompactor::MergeFreeBlocks(class MemCompactor * this /* r29 */) {
    // Local variables
    class AllocEntry * scanNode; // r31

    {
        // Range: 0x801B3FF8 -> 0x801B4064
        // Local variables
        class AllocEntry * currEntry; // r30
    }
}
// signature: Domains::DynaMem::Acquire(int, int, Domains::MemCallbacks *, Domains::enVolIdx)
// Range: 0x801B4080 -> 0x801B40C4
class MemHandle * Domains::DynaMem::Acquire(int align /* r0 */, class MemCallbacks * memCB /* r8 */) {
    // Local variables
    class MemHandle * memHandle; // r0

    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
// signature: Domains::DynaMem::Release(Domains::MemHandle *)
// Range: 0x801B40D0 -> 0x801B410C
void Domains::DynaMem::Release() {
    // Local variables
    enum enVolIdx volIndex; // r0

    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
// signature: Domains::DynaMem::Slice(Domains::MemHandle **, int, Domains::MemCallbacks *, int)
// Range: 0x801B4110 -> 0x801B4168
class MemHandle * Domains::DynaMem::Slice(int size /* r9 */, class MemCallbacks * memCB /* r0 */) {
    // Local variables
    enum enVolIdx volIndex; // r0
    class MemHandle * subHand; // r0

    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
// signature: Domains::DynaMem::MemVolumeOwnerRegister(Domains::DynaMem::MemOwner *, Domains::enVolIdx)
// Range: 0x801B4170 -> 0x801B418C
void Domains::DynaMem::MemVolumeOwnerRegister() {
    // References
    // -> static class DynaMemModule dynaMemMod;
}
