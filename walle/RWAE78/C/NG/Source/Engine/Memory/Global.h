/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Memory\Global.h
*/
// Range: 0x8024B90C -> 0x8024B944
void * Memory::ThreadStackMarkSentry::ThreadStackMarkSentry(class ThreadStackMarkSentry * this /* r31 */) {
}
// Range: 0x800795D0 -> 0x80079634
void * Memory::ThreadStackMarkSentry::~ThreadStackMarkSentry(class ThreadStackMarkSentry * this /* r29 */) {
}
// Range: 0x802A6F54 -> 0x802A6F5C
void * Memory::StaticStackAllocator::GetBuffer() const {
}
// signature: Memory::StackAllocator::StackAllocator(void *, int)
// Range: 0x8022C6C4 -> 0x8022C6D8
void * Memory::StackAllocator::StackAllocator() {
}
// Range: 0x80023AA0 -> 0x80023AE0
void * Memory::StackAllocator::~StackAllocator(class StackAllocator * this /* r31 */) {
}
// signature: Memory::StackAllocator::PushAlign(unsigned long)
// Range: 0x80238584 -> 0x802385A0
unsigned long Memory::StackAllocator::PushAlign() {
}
// signature: operator new(unsigned long, Memory::GlobalHeapEnum, eMemMgrTag)
// Range: 0x801653F0 -> 0x801653F8
void * operator new() {
}
// signature: operator new(unsigned long, Memory::StackAllocator &, eMemMgrTag)
// Range: 0x8022C6F4 -> 0x8022C708
void * operator new(unsigned long size /* r0 */) {
}
// signature: DeleteArray<Memory::StaticStackAllocator, Util::PoolList<Scaleform::SFEventNode *>::NodeType>(Memory::StaticStackAllocator &, Util::PoolList<Scaleform::SFEventNode *>::NodeType *, unsigned long)
// Range: 0x802A6F5C -> 0x802A6F70
void DeleteArray<Memory::StaticStackAllocator, Util::PoolList<Scaleform::SFEventNode *>::NodeType>() {
}
// signature: DeleteArray<Memory::StaticStackAllocator, Util::PoolList<Scaleform::SFCallbackNode *>::NodeType>(Memory::StaticStackAllocator &, Util::PoolList<Scaleform::SFCallbackNode *>::NodeType *, unsigned long)
// Range: 0x802A6F70 -> 0x802A6F84
void DeleteArray<Memory::StaticStackAllocator, Util::PoolList<Scaleform::SFCallbackNode *>::NodeType>() {
}
// Range: 0x8029FE04 -> 0x802A01BC
void Delete<Memory::GlobalHeapEnum, Graphics::ScaleformInternalEntity>(enum GlobalHeapEnum * a /* r29 */, class ScaleformInternalEntity * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: Delete<Memory::GlobalHeapEnum, Scaleform::SFCallbackNode>(const Memory::GlobalHeapEnum &, Scaleform::SFCallbackNode *)
// Range: 0x802A43CC -> 0x802A4760
void Delete<Memory::GlobalHeapEnum, Scaleform::SFCallbackNode>(class SFCallbackNode * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// Range: 0x802A4760 -> 0x802A4E54
void Delete<Memory::GlobalHeapEnum, Scaleform::SFEventNode>(enum GlobalHeapEnum * a /* r28 */, class SFEventNode * v /* r29 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// Range: 0x802A4E54 -> 0x802A5200
void Delete<Memory::GlobalHeapEnum, Scaleform::ViewNode>(enum GlobalHeapEnum * a /* r29 */, class ViewNode * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: DeleteArray<Memory::ThreadStackEnum, Math::Vector>(const Memory::ThreadStackEnum &, Math::Vector *, unsigned long)
// Range: 0x8026D5D8 -> 0x8026D618
void DeleteArray<Memory::ThreadStackEnum, Math::Vector>() {
}
// signature: DeleteArray<Memory::GlobalHeapEnum, unsigned char>(const Memory::GlobalHeapEnum &, unsigned char *, unsigned long)
// Range: 0x80282CF4 -> 0x802830C8
void DeleteArray<Memory::GlobalHeapEnum, unsigned char>(unsigned char * v /* r31 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: DeleteArray<Memory::GlobalHeapEnum, void *>(const Memory::GlobalHeapEnum &, void **, unsigned long)
// Range: 0x8028F8F0 -> 0x8028FCB4
void DeleteArray<Memory::GlobalHeapEnum, void *>(void * * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: DeleteArray<Memory::GlobalHeapEnum, char>(const Memory::GlobalHeapEnum &, char *, unsigned long)
// Range: 0x8029B7AC -> 0x8029BB40
void DeleteArray<Memory::GlobalHeapEnum, char>(char * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: DeleteArray<Memory::GlobalHeapEnum, Util::PoolList<Scaleform::ScaleformListener *>::NodeType>(const Memory::GlobalHeapEnum &, Util::PoolList<Scaleform::ScaleformListener *>::NodeType *, unsigned long)
// Range: 0x802A04C8 -> 0x802A085C
void DeleteArray<Memory::GlobalHeapEnum, Util::PoolList<Scaleform::ScaleformListener *>::NodeType>(class NodeType * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: DeleteArray<Memory::GlobalHeapEnum, Util::PoolList<Scaleform::ViewNode *>::NodeType>(const Memory::GlobalHeapEnum &, Util::PoolList<Scaleform::ViewNode *>::NodeType *, unsigned long)
// Range: 0x802A085C -> 0x802A0BF0
void DeleteArray<Memory::GlobalHeapEnum, Util::PoolList<Scaleform::ViewNode *>::NodeType>(class NodeType * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: DeleteArray<Memory::GlobalHeapEnum, Util::PoolList<Scaleform::TextureNode *>::NodeType>(const Memory::GlobalHeapEnum &, Util::PoolList<Scaleform::TextureNode *>::NodeType *, unsigned long)
// Range: 0x802A0BF0 -> 0x802A0F84
void DeleteArray<Memory::GlobalHeapEnum, Util::PoolList<Scaleform::TextureNode *>::NodeType>(class NodeType * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: DeleteArray<Memory::GlobalHeapEnum, Util::PoolList<Scaleform::MovieNode *>::NodeType>(const Memory::GlobalHeapEnum &, Util::PoolList<Scaleform::MovieNode *>::NodeType *, unsigned long)
// Range: 0x802A0F84 -> 0x802A1318
void DeleteArray<Memory::GlobalHeapEnum, Util::PoolList<Scaleform::MovieNode *>::NodeType>(class NodeType * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: DeleteArray<Memory::ThreadStackEnum, Math::Vector4>(const Memory::ThreadStackEnum &, Math::Vector4 *, unsigned long)
// Range: 0x802B8D4C -> 0x802B8DA8
void DeleteArray<Memory::ThreadStackEnum, Math::Vector4>() {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// signature: NewArray<unsigned char, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x8022C6E0 -> 0x8022C6F4
unsigned char * NewArray<unsigned char, Memory::StackAllocator>(class StackAllocator * a /* r4 */) {
}
// signature: NewArray<unsigned short, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x8023A298 -> 0x8023A2B0
unsigned short * NewArray<unsigned short, Memory::StackAllocator>(class StackAllocator * a /* r4 */) {
}
// signature: NewArray<World::ModelPartDefinition, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x80244B90 -> 0x80244BA8
class ModelPartDefinition * NewArray<World::ModelPartDefinition, Memory::StackAllocator>(class StackAllocator * a /* r4 */) {
    // Local variables
    class ModelPartDefinition * mem; // r0
}
// signature: NewArray<unsigned long long, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x80244BA8 -> 0x80244BC0
unsigned long long * NewArray<unsigned long long, Memory::StackAllocator>(class StackAllocator * a /* r4 */) {
    // Local variables
    unsigned long long * mem; // r0
}
// signature: NewArray<Math::Vector4, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x80244BDC -> 0x80244BF4
class Vector4 * NewArray<Math::Vector4, Memory::StackAllocator>(class StackAllocator * a /* r4 */) {
    // Local variables
    class Vector4 * mem; // r0
}
// signature: NewArray<Math::Matrix43, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x80244BF4 -> 0x80244C0C
class Matrix43 * NewArray<Math::Matrix43, Memory::StackAllocator>(class StackAllocator * a /* r4 */) {
    // Local variables
    class Matrix43 * mem; // r0
}
// signature: NewArray<World::ModelPrototypeEntity::RefColl, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x802452E4 -> 0x802452FC
class RefColl * NewArray<World::ModelPrototypeEntity::RefColl, Memory::StackAllocator>(class StackAllocator * a /* r4 */) {
    // Local variables
    class RefColl * mem; // r0
}
// signature: NewArray<Graphics::Builder *, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x802452FC -> 0x80245314
class Builder * * NewArray<Graphics::Builder *, Memory::StackAllocator>(class StackAllocator * a /* r4 */) {
    // Local variables
    class Builder * * mem; // r0
}
// signature: NewArray<World::EntityHandle<World::ModelPrototypeEntity> *, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x80245314 -> 0x8024532C
class EntityHandle * * NewArray<World::EntityHandle<World::ModelPrototypeEntity> *, Memory::StackAllocator>(class StackAllocator * a /* r4 */) {
    // Local variables
    class EntityHandle * * mem; // r0
}
// signature: NewArray<World::EntityHandle<World::GeometryEntity> *, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x8024532C -> 0x80245344
class EntityHandle * * NewArray<World::EntityHandle<World::GeometryEntity> *, Memory::StackAllocator>(class StackAllocator * a /* r4 */) {
    // Local variables
    class EntityHandle * * mem; // r0
}
// signature: NewArray<xCollisionEnt *, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x8001B150 -> 0x8001B168
class xCollisionEnt * * NewArray<xCollisionEnt *, Memory::GlobalHeapEnum>(enum eMemMgrTag tag /* r0 */) {
}
// signature: NewArray<unsigned char, Memory::EntityPoolEnum>(const Memory::EntityPoolEnum &, eMemMgrTag, unsigned long)
// Range: 0x80238AC4 -> 0x80238AD8
unsigned char * NewArray<unsigned char, Memory::EntityPoolEnum>() {
}
// signature: NewArray<Math::Vector, Memory::ThreadStackEnum>(const Memory::ThreadStackEnum &, eMemMgrTag, unsigned long)
// Range: 0x8024BD34 -> 0x8024BD78
class Vector * NewArray<Math::Vector, Memory::ThreadStackEnum>() {
    // Local variables
    class Vector * mem; // r0
}
// signature: NewArray<Math::Quaternion, Memory::ThreadStackEnum>(const Memory::ThreadStackEnum &, eMemMgrTag, unsigned long)
// Range: 0x8024BD78 -> 0x8024BDBC
class Quaternion * NewArray<Math::Quaternion, Memory::ThreadStackEnum>() {
    // Local variables
    class Quaternion * mem; // r0
}
// signature: NewArray<System::Module *, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x802AF8E4 -> 0x802AF8FC
class Module * * NewArray<System::Module *, Memory::GlobalHeapEnum>() {
    // Local variables
    class Module * * mem; // r0
}
// signature: NewArray<Util::NodeList<System::Module::Hook>, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x802B0068 -> 0x802B00D8
class NodeList * NewArray<Util::NodeList<System::Module::Hook>, Memory::GlobalHeapEnum>(unsigned long amount /* r31 */) {
    // Local variables
    class NodeList * mem; // r3
}
// signature: NewArray<Math::Vector4, Memory::ThreadStackEnum>(const Memory::ThreadStackEnum &, eMemMgrTag, unsigned long)
// Range: 0x802B8DA8 -> 0x802B8E04
class Vector4 * NewArray<Math::Vector4, Memory::ThreadStackEnum>() {
    // Local variables
    class Vector4 * mem; // r0

    // References
    // -> static class ThreadLocalStorage threadLocal;
}
