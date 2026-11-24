/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\AssetManager\Memory\DynaMemory.cpp
*/
static class DynaMemModule dynaMemMod; // size: 0x9C, address: 0x80845EC4
static class ModuleRegistrator dynaMemModReg; // size: 0x8, address: 0x80845F60
class Module * dynaMemModule; // size: 0x4, address: 0x807BD358
bool g_useMalloc; // size: 0x1, address: 0x80845F68
static class MemVolProps g_volumeProps[3]; // size: 0x24, address: 0x807BD35C
static class MemOwnerUnclaimed memOwnerUnclaimed; // size: 0x4, address: 0x80845F6C
static class MemHandle nullHandle; // size: 0x8, address: 0x80845F70
static class MemCallbackList memCallbackList; // size: 0x44, address: 0x80845F78
static class RelativePriority priority[2]; // size: 0x18, address: 0x807BD380
static bool enableMetrics; // size: 0x1, address: 0x807BD39C
static bool enableIntegity; // size: 0x1, address: 0x80845FBD
static class MemCB_BorrowedMemory memCB_borrowedMemory; // size: 0x4, address: 0x80845FC0
static bool beWordy; // size: 0x1, address: 0x80845FC4
// Range: 0x802E6844 -> 0x802E6848
void Domains::MemOwnerUnclaimed::MemUserAsksTheImpossible() {
}
// Range: 0x802E6840 -> 0x802E6844
void Domains::MemOwnerUnclaimed::MemStuffed() {
}
// Range: 0x802E683C -> 0x802E6840
void Domains::MemOwnerUnclaimed::MemClogged() {
}
// Range: 0x802E6838 -> 0x802E683C
void Domains::MemOwnerUnclaimed::DefragDone() {
}
// signature: Domains::DynaMemModule::GetPriority(int &) const
// Range: 0x802D4EE8 -> 0x802D4F2C
class RelativePriority * Domains::DynaMemModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * testSuiteModule;
}
// signature: Domains::DynaMemModule::Startup(int)
// Range: 0x802D4F2C -> 0x802D509C
void Domains::DynaMemModule::Startup(class DynaMemModule * this /* r29 */) {
    // References
    // -> bool g_useMalloc;
    // -> static class MemVolProps g_volumeProps[3];
    // -> static class MemHandle nullHandle;
    // -> static class MemOwnerUnclaimed memOwnerUnclaimed;
}
// signature: Domains::DynaMemModule::Shutdown(int)
// Range: 0x802D509C -> 0x802D5164
void Domains::DynaMemModule::Shutdown(class DynaMemModule * this /* r27 */) {
    // References
    // -> bool g_useMalloc;
}
// signature: Domains::DynaMemModule::FirstUpdate(int)
// Range: 0x802D5164 -> 0x802D5168
void Domains::DynaMemModule::FirstUpdate() {
}
// signature: Domains::DynaMemModule::Update(int)
// Range: 0x802D5168 -> 0x802D51C8
void Domains::DynaMemModule::Update() {
}
// signature: Domains::DynaMemMgr::GetVolume(Domains::enVolIdx)
// Range: 0x802D51C8 -> 0x802D51D4
class MemVolume * Domains::DynaMemMgr::GetVolume() {
}
// Range: 0x802D51D4 -> 0x802D51E0
char * Domains::MemHandle::Data() const {
}
// signature: Domains::DLList_Sort_MemAddr(Domains::AllocEntry *, Domains::AllocEntry *)
// Range: 0x802D51E0 -> 0x802D520C
int Domains::DLList_Sort_MemAddr() {
}
// signature: Domains::MemVolume::Init(char *, int, Domains::MemVolProps *, int)
// Range: 0x802D520C -> 0x802D5520
void Domains::MemVolume::Init(class MemVolume * this /* r28 */, char * memPool /* r29 */, int size /* r30 */, class MemVolProps * props /* r31 */) {
    {
        // Range: 0x802D5214 -> 0x802D53F0
        // Local variables
        int fluff; // r9
    }
}
// Range: 0x802D5520 -> 0x802D5768
class MemHandle * Domains::MemVolume::Acquire(class MemVolume * this /* r27 */, int userAmount /* r28 */, int align /* r29 */, class MemCallbacks * memCB /* r30 */) {
    // Local variables
    class AllocEntry * allocEntry; // r31

    {
        // Range: 0x802D5564 -> 0x802D565C
        // Local variables
        class AllocEntry * retEntry; // r4
        class MemHandle * retHandle; // r31
    }

    // References
    // -> static class MemCallbackList memCallbackList;
}
// Range: 0x802D5768 -> 0x802D5888
void Domains::MemVolume::Release(class MemVolume * this /* r30 */, class MemHandle * memHandle /* r31 */) {
    // Local variables
    class AllocEntry * entry; // r7
}
// Range: 0x802D5888 -> 0x802D5AF4
class MemHandle * Domains::MemVolume::Partition(class MemVolume * this /* r24 */, class MemHandle * * origAlloc /* r25 */, int amt /* r26 */, class MemCallbacks * usrMemCB /* r27 */, int usrAlign /* r28 */) {
    // Local variables
    class AllocEntry * currEntry; // r29

    // References
    // -> static class MemCallbackList memCallbackList;
}
// Range: 0x802D5AF8 -> 0x802D5B68
void * Domains::MemVolume::BorrowMemory(class MemVolume * this /* r30 */, int amt /* r31 */) {
    // References
    // -> static class MemCB_BorrowedMemory memCB_borrowedMemory;
}
// Range: 0x802D5B68 -> 0x802D5CA8
void Domains::MemVolume::RestoreMemory(class MemVolume * this /* r31 */) {
}
// Range: 0x802D5CA8 -> 0x802D5DA4
class MemHandle * Domains::MemHandleList::GrabUserHandle(class MemHandleList * this /* r30 */) {
    // Local variables
    class BlockOfHandles * blockPtr; // r31

    {
        // Range: 0x802D5D4C -> 0x802D5D6C
        // Local variables
        class BlockOfHandles * lastBlock; // r3
    }
}
// Range: 0x802D5DA4 -> 0x802D5E50
void Domains::MemHandleList::FreeEmptyHandleListBlocks(class MemHandleList * this /* r26 */) {
    // Local variables
    class BlockOfHandles * blockPtr; // r29
    class BlockOfHandles * lastPtr; // r28

    {
        // Range: 0x802D5DBC -> 0x802D5E28
        // Local variables
        class BlockOfHandles * freeMe; // r27
    }
}
// signature: Domains::MemVolume::AllocFirstFit(int, int)
// Range: 0x802D5E50 -> 0x802D6078
class AllocEntry * Domains::MemVolume::AllocFirstFit(class MemVolume * this /* r29 */) {
    // Local variables
    int realMinSize; // r31
    class AllocEntry * skipEntry; // r4
    class AllocEntry * goodEntry; // r30
    class AllocEntry * scanEntry; // r6

    {
        // Range: 0x802D5E84 -> 0x802D5F40
        // Local variables
        long dist; // r9
        char * moveUp; // r0
    }
}
// Range: 0x802D6080 -> 0x802D6148
void Domains::MemCompactor::MergeFreeBlocks() {
    // Local variables
    class AllocEntry * scanNode; // r9

    {
        // Range: 0x802D608C -> 0x802D613C
        // Local variables
        class AllocEntry * currEntry; // r10
    }
}
// Range: 0x802D6148 -> 0x802D6288
void Domains::DynaMem::Release(class MemHandle * memHandle /* r31 */) {
    // Local variables
    enum enVolIdx volIndex; // r0

    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
