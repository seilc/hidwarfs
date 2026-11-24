/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Util\Containers.h
*/
// signature: Util::PoolArray<@unnamed@WAD02_cpp@::TempNodeRef>::SetPool(@unnamed@WAD02_cpp@::TempNodeRef *, int)
// Range: 0x80319478 -> 0x8031948C
void Util::PoolArray<@unnamed@WAD02_cpp@::TempNodeRef>::SetPool() {
}
// signature: Util::PoolArray<System::Module *>::operator[](int)
// Range: 0x8034ED54 -> 0x8034ED64
class Module * & Util::PoolArray<System::Module *>::operator[]() {
}
// signature: Util::PoolArray<@unnamed@WAD02_cpp@::ModuleReference>::operator[](int)
// Range: 0x80350354 -> 0x80350364
class ModuleReference & Util::PoolArray<@unnamed@WAD02_cpp@::ModuleReference>::operator[]() {
}
// signature: Util::PoolArray<@unnamed@WAD02_cpp@::ModuleRelationList>::operator[](int)
// Range: 0x80351354 -> 0x80351364
class ModuleRelationList & Util::PoolArray<@unnamed@WAD02_cpp@::ModuleRelationList>::operator[]() {
}
// Range: 0x8035133C -> 0x80351354
class ModuleRelationList & Util::PoolArray<@unnamed@WAD02_cpp@::ModuleRelationList>::Back() {
}
// Range: 0x80351364 -> 0x80351378
class ModuleReference * Util::PoolArray<@unnamed@WAD02_cpp@::ModuleReference>::End() {
}
// Range: 0x8034FE24 -> 0x8034FEAC
void * Util::StackPoolArray<@unnamed@WAD02_cpp@::ModuleReference>::StackPoolArray(class StackPoolArray * this /* r28 */, int poolSize /* r29 */) {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x80350364 -> 0x803503EC
void * Util::StackPoolArray<@unnamed@WAD02_cpp@::ModuleRelationList>::StackPoolArray(class StackPoolArray * this /* r28 */, int poolSize /* r29 */) {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x80350E0C -> 0x80350E94
void * Util::StackPoolArray<int>::StackPoolArray(class StackPoolArray * this /* r28 */, int poolSize /* r29 */) {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x8034FEAC -> 0x80350354
void * Util::StackPoolArray<@unnamed@WAD02_cpp@::ModuleReference>::~StackPoolArray(class StackPoolArray * this /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x803503EC -> 0x80350894
void * Util::StackPoolArray<@unnamed@WAD02_cpp@::ModuleRelationList>::~StackPoolArray(class StackPoolArray * this /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x80350E94 -> 0x8035133C
void * Util::StackPoolArray<int *>::~StackPoolArray(class StackPoolArray * this /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x80098A80 -> 0x80098B34
void * Util::BlockAllocatorArray<void *>::~BlockAllocatorArray(class BlockAllocatorArray * this /* r29 */) {
    // References
    // -> struct {} __vt__Q24Util23BlockAllocatorArray<Pv>;
}
// Range: 0x801F2AD0 -> 0x801F2B84
void * Util::BlockAllocatorArray<zNeoDrivenLink>::~BlockAllocatorArray(class BlockAllocatorArray * this /* r29 */) {
    // References
    // -> struct {} __vt__Q24Util37BlockAllocatorArray<14zNeoDrivenLink>;
}
// Range: 0x802CE0F4 -> 0x802CE1AC
void * Util::BlockAllocatorArray<unsigned long long>::~BlockAllocatorArray(class BlockAllocatorArray * this /* r29 */) {
    // References
    // -> struct {} __vt__Q24Util23BlockAllocatorArray<Ux>;
}
// signature: Util::BlockAllocatorArray<zNeoDrivenLink>::operator[](int)
// Range: 0x801972D0 -> 0x80197340
class zNeoDrivenLink & Util::BlockAllocatorArray<zNeoDrivenLink>::operator[]() {
}
// Range: 0x80197FC0 -> 0x80198320
void Util::BlockAllocatorArray<zNeoDrivenLink>::PushBack(class BlockAllocatorArray * this /* r30 */, class zNeoDrivenLink & val /* r31 */) {
}
// Range: 0x80340B54 -> 0x80340B64
bool Util::PoolListBase::Empty() const {
}
// Range: 0x803366E0 -> 0x803366F0
class Iterator & Util::PoolList<GPtr<Scaleform::GSFMemoryFile>>::Iterator::operator++() {
}
// signature: Util::PoolList<Scaleform::MovieNode *>::Iterator::operator++(int)
// Range: 0x8033F608 -> 0x8033F614
class Iterator Util::PoolList<Scaleform::MovieNode *>::Iterator::operator++() {
}
// Range: 0x803366D4 -> 0x803366E0
class GPtr & Util::PoolList<GPtr<Scaleform::GSFMemoryFile>>::Iterator::operator*() const {
}
// signature: Util::PoolList<Scaleform::MovieNode *>::SetPool(Util::PoolList<Scaleform::MovieNode *>::NodeType *, int)
// Range: 0x8033B4AC -> 0x8033B504
void Util::PoolList<Scaleform::MovieNode *>::SetPool() {
    // Local variables
    class NodeType * n; // r4
    class NodeType * endn; // r3
}
// signature: Util::PoolList<World::EntityHandleBase>::SetPool(Util::PoolList<World::EntityHandleBase>::NodeType *, int)
// Range: 0x80366AA8 -> 0x80366B00
void Util::PoolList<World::EntityHandleBase>::SetPool() {
    // Local variables
    class NodeType * n; // r4
    class NodeType * endn; // r3
}
// signature: Util::PoolList<Scaleform::MovieNode *>::Erase(Util::PoolList<Scaleform::MovieNode *>::Iterator)
// Range: 0x8033F614 -> 0x8033F650
class Iterator Util::PoolList<Scaleform::MovieNode *>::Erase() {
}
// signature: Util::PoolList<Scaleform::TextureNode *>::PushBack(Scaleform::TextureNode *const &)
// Range: 0x8033D358 -> 0x8033D3B8
void Util::PoolList<Scaleform::TextureNode *>::PushBack() {
}
// Range: 0x80351378 -> 0x80351398
class ModuleRelationNode * Util::PoolAllocator<@unnamed@WAD02_cpp@::ModuleRelationNode>::Alloc() {
}
// Range: 0x80350894 -> 0x80350964
void * Util::StackPoolAllocator<@unnamed@WAD02_cpp@::ModuleRelationNode>::StackPoolAllocator(class StackPoolAllocator * this /* r31 */, int poolSize /* r28 */) {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// Range: 0x80350964 -> 0x80350E0C
void * Util::StackPoolAllocator<@unnamed@WAD02_cpp@::ModuleRelationNode>::~StackPoolAllocator(class StackPoolAllocator * this /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> static class ThreadLocalStorage threadLocal;
}
