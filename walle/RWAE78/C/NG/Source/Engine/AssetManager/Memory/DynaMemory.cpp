/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\AssetManager\Memory\DynaMemory.cpp
*/
static class DynaMemModule dynaMemMod; // size: 0x9C, address: 0x807FE084
static class ModuleRegistrator dynaMemModReg; // size: 0x8, address: 0x807FE120
class Module * dynaMemModule; // size: 0x4, address: 0x80706ED8
bool g_useMalloc; // size: 0x1, address: 0x807FE128
static class MemVolProps g_volumeProps[3]; // size: 0x24, address: 0x80706EDC
static class MemOwnerUnclaimed memOwnerUnclaimed; // size: 0x4, address: 0x807FE12C
static class MemHandle nullHandle; // size: 0x8, address: 0x807FE130
static class MemCallbackList memCallbackList; // size: 0x44, address: 0x807FE138
static class RelativePriority priority[2]; // size: 0x18, address: 0x80706F00
static bool enableMetrics; // size: 0x1, address: 0x80706F1C
static bool enableIntegity; // size: 0x1, address: 0x807FE17D
static class MemCB_BorrowedMemory memCB_borrowedMemory; // size: 0x4, address: 0x807FE180
static bool beWordy; // size: 0x1, address: 0x807FE184
// Range: 0x8024F574 -> 0x8024F578
void Domains::MemOwnerUnclaimed::MemUserAsksTheImpossible() {
}
// Range: 0x8024F570 -> 0x8024F574
void Domains::MemOwnerUnclaimed::MemStuffed() {
}
// Range: 0x8024F56C -> 0x8024F570
void Domains::MemOwnerUnclaimed::MemClogged() {
}
// Range: 0x8024F568 -> 0x8024F56C
void Domains::MemOwnerUnclaimed::DefragDone() {
}
// signature: Domains::DynaMemModule::GetPriority(int &) const
// Range: 0x802342B8 -> 0x802342FC
class RelativePriority * Domains::DynaMemModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * testSuiteModule;
}
// signature: Domains::DynaMemModule::Startup(int)
// Range: 0x802342FC -> 0x8023446C
void Domains::DynaMemModule::Startup(class DynaMemModule * this /* r29 */) {
    // References
    // -> bool g_useMalloc;
    // -> static class MemVolProps g_volumeProps[3];
    // -> static class MemHandle nullHandle;
    // -> static class MemOwnerUnclaimed memOwnerUnclaimed;
}
// signature: Domains::DynaMemModule::Shutdown(int)
// Range: 0x8023446C -> 0x80234534
void Domains::DynaMemModule::Shutdown(class DynaMemModule * this /* r27 */) {
    // References
    // -> bool g_useMalloc;
}
// signature: Domains::DynaMemModule::FirstUpdate(int)
// Range: 0x80234534 -> 0x80234538
void Domains::DynaMemModule::FirstUpdate() {
}
// signature: Domains::DynaMemModule::Update(int)
// Range: 0x80234538 -> 0x80234598
void Domains::DynaMemModule::Update() {
}
// signature: Domains::DynaMemMgr::GetVolume(Domains::enVolIdx)
// Range: 0x80234598 -> 0x802345A4
class MemVolume * Domains::DynaMemMgr::GetVolume() {
}
// Range: 0x802345A4 -> 0x802345B0
char * Domains::MemHandle::Data() const {
}
// signature: Domains::DLList_Sort_MemAddr(Domains::AllocEntry *, Domains::AllocEntry *)
// Range: 0x802345B0 -> 0x802345DC
int Domains::DLList_Sort_MemAddr() {
}
// signature: Domains::MemVolume::Init(char *, int, Domains::MemVolProps *, int)
// Range: 0x802345DC -> 0x802348F0
void Domains::MemVolume::Init(class MemVolume * this /* r28 */, char * memPool /* r29 */, int size /* r30 */, class MemVolProps * props /* r31 */) {
    {
        // Range: 0x802345E4 -> 0x802347C0
        // Local variables
        int fluff; // r9
    }
}
// Range: 0x802348F0 -> 0x80234B38
class MemHandle * Domains::MemVolume::Acquire(class MemVolume * this /* r27 */, int userAmount /* r28 */, int align /* r29 */, class MemCallbacks * memCB /* r30 */) {
    // Local variables
    class AllocEntry * allocEntry; // r31

    {
        // Range: 0x80234934 -> 0x80234A2C
        // Local variables
        class AllocEntry * retEntry; // r4
        class MemHandle * retHandle; // r31
    }

    // References
    // -> static class MemCallbackList memCallbackList;
}
// Range: 0x80234B38 -> 0x80234C58
void Domains::MemVolume::Release(class MemVolume * this /* r30 */, class MemHandle * memHandle /* r31 */) {
    // Local variables
    class AllocEntry * entry; // r7
}
// Range: 0x80234C58 -> 0x80234EC4
class MemHandle * Domains::MemVolume::Partition(class MemVolume * this /* r24 */, class MemHandle * * origAlloc /* r25 */, int amt /* r26 */, class MemCallbacks * usrMemCB /* r27 */, int usrAlign /* r28 */) {
    // Local variables
    class AllocEntry * currEntry; // r29

    // References
    // -> static class MemCallbackList memCallbackList;
}
// signature: Domains::MemCB_BorrowedMemory::Relocating(Domains::MemHandle *)
// Range: 0x8024F558 -> 0x8024F568
void Domains::MemCB_BorrowedMemory::Relocating() {
}
// Range: 0x80234F04 -> 0x80234F74
void * Domains::MemVolume::BorrowMemory(class MemVolume * this /* r30 */, int amt /* r31 */) {
    // References
    // -> static class MemCB_BorrowedMemory memCB_borrowedMemory;
}
// Range: 0x80234F74 -> 0x802350B4
void Domains::MemVolume::RestoreMemory(class MemVolume * this /* r31 */) {
}
// Range: 0x802350B4 -> 0x802351B0
class MemHandle * Domains::MemHandleList::GrabUserHandle(class MemHandleList * this /* r30 */) {
    // Local variables
    class BlockOfHandles * blockPtr; // r31

    {
        // Range: 0x80235158 -> 0x80235178
        // Local variables
        class BlockOfHandles * lastBlock; // r3
    }
}
// Range: 0x802351B0 -> 0x8023525C
void Domains::MemHandleList::FreeEmptyHandleListBlocks(class MemHandleList * this /* r26 */) {
    // Local variables
    class BlockOfHandles * blockPtr; // r29
    class BlockOfHandles * lastPtr; // r28

    {
        // Range: 0x802351C8 -> 0x80235234
        // Local variables
        class BlockOfHandles * freeMe; // r27
    }
}
// signature: Domains::MemVolume::AllocFirstFit(int, int)
// Range: 0x8023525C -> 0x80235484
class AllocEntry * Domains::MemVolume::AllocFirstFit(class MemVolume * this /* r29 */) {
    // Local variables
    int realMinSize; // r31
    class AllocEntry * skipEntry; // r4
    class AllocEntry * goodEntry; // r30
    class AllocEntry * scanEntry; // r6

    {
        // Range: 0x80235290 -> 0x8023534C
        // Local variables
        long dist; // r9
        char * moveUp; // r0
    }
}
// Range: 0x80235490 -> 0x80235558
void Domains::MemCompactor::MergeFreeBlocks() {
    // Local variables
    class AllocEntry * scanNode; // r9

    {
        // Range: 0x8023549C -> 0x8023554C
        // Local variables
        class AllocEntry * currEntry; // r10
    }
}
// Range: 0x80235558 -> 0x80235698
void Domains::DynaMem::Release(class MemHandle * memHandle /* r31 */) {
    // Local variables
    enum enVolIdx volIndex; // r0

    // References
    // -> static class DynaMemModule dynaMemMod;
    // -> static class MemHandle nullHandle;
}
