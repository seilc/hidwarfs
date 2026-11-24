/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Memory\Global.h
*/
// Range: 0x801BFDE0 -> 0x801BFE18
void * Memory::ThreadStackMarkSentry::ThreadStackMarkSentry(class ThreadStackMarkSentry * this /* r31 */) {
}
// Range: 0x8004D150 -> 0x8004D1A4
void * Memory::ThreadStackMarkSentry::~ThreadStackMarkSentry(class ThreadStackMarkSentry * this /* r29 */) {
}
// signature: Memory::StackAllocator::PushAlign(unsigned long)
// Range: 0x8001D3A0 -> 0x8001D3BC
unsigned long Memory::StackAllocator::PushAlign() {
}
// signature: Memory::AbstractAllocator::AbstractAllocator(void * (*)(Memory::AbstractAllocator *, unsigned long, eMemMgrTag), void (*)(Memory::AbstractAllocator *, void *, unsigned long))
// Range: 0x8020B400 -> 0x8020B40C
void * Memory::AbstractAllocator::AbstractAllocator() {
}
// signature: operator new(unsigned long, Memory::ThreadStackEnum, eMemMgrTag)
// Range: 0x80027410 -> 0x80027454
void * operator new(unsigned long size /* r31 */) {
}
// signature: operator delete[](void *, Memory::ThreadStackEnum, unsigned long)
// Range: 0x80027350 -> 0x80027390
void operator delete[](unsigned long size /* r31 */) {
}
// signature: operator new(unsigned long, Memory::UpdateFrameEnum, unsigned long, eMemMgrTag)
// Range: 0x8012DD90 -> 0x8012DDF0
void * operator new() {
    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: Delete<Memory::GlobalHeapEnum, Util::BlockAllocatorArray<void *>::Block>(Memory::GlobalHeapEnum &, Util::BlockAllocatorArray<void *>::Block *)
// Range: 0x800387E0 -> 0x800387FC
void Delete<Memory::GlobalHeapEnum, Util::BlockAllocatorArray<void *>::Block>() {
}
// Range: 0x800D4BB0 -> 0x800D4C10
void Delete<Memory::GlobalHeapEnum, zScaleform>(enum GlobalHeapEnum & a /* r30 */, class zScaleform * v /* r31 */) {
}
// Range: 0x801F5CD0 -> 0x801F5D24
void Delete<Memory::GlobalHeapEnum, Scaleform::SFEventNode>(enum GlobalHeapEnum & a /* r30 */, class SFEventNode * v /* r31 */) {
}
// signature: DeleteArray<Memory::ThreadStackEnum, xVec3>(const Memory::ThreadStackEnum &, xVec3 *, unsigned long)
// Range: 0x80027330 -> 0x80027344
void DeleteArray<Memory::ThreadStackEnum, xVec3>(enum ThreadStackEnum & a /* r6 */) {
}
// signature: DeleteArray<Memory::ThreadStackEnum, unsigned short>(const Memory::ThreadStackEnum &, unsigned short *, unsigned long)
// Range: 0x80027390 -> 0x800273A4
void DeleteArray<Memory::ThreadStackEnum, unsigned short>(enum ThreadStackEnum & a /* r6 */) {
}
// signature: DeleteArray<Memory::ThreadStackEnum, @unnamed@WAD00_cpp@::combo_vertex>(const Memory::ThreadStackEnum &, @unnamed@WAD00_cpp@::combo_vertex *, unsigned long)
// Range: 0x800273B0 -> 0x800273C4
void DeleteArray<Memory::ThreadStackEnum, @unnamed@WAD00_cpp@::combo_vertex>(enum ThreadStackEnum & a /* r6 */) {
}
// signature: DeleteArray<Memory::ThreadStackEnum, xVec2>(const Memory::ThreadStackEnum &, xVec2 *, unsigned long)
// Range: 0x800273D0 -> 0x800273E4
void DeleteArray<Memory::ThreadStackEnum, xVec2>(enum ThreadStackEnum & a /* r6 */) {
}
// signature: DeleteArray<Memory::GlobalHeapEnum, float>(const Memory::GlobalHeapEnum &, float *, unsigned long)
// Range: 0x800B5A10 -> 0x800B5A3C
void DeleteArray<Memory::GlobalHeapEnum, float>() {
}
// Range: 0x800BA480 -> 0x800BA528
void DeleteArray<Memory::GlobalHeapEnum, FX::Particles::MotionSystems::Turbulence>(enum GlobalHeapEnum & a /* r23 */, class Turbulence * v /* r24 */, unsigned long amount /* r25 */) {
    // References
    // -> unsigned int sNumTurbulence;
    // -> class xVec3 * sTurbulenceField;
}
// Range: 0x800BB7A0 -> 0x800BB814
void DeleteArray<Memory::GlobalHeapEnum, FX::Particles::MotionSystems::Attach>(enum GlobalHeapEnum & a /* r27 */, class Attach * v /* r28 */, unsigned long amount /* r29 */) {
}
// Range: 0x800BB820 -> 0x800BB8BC
void DeleteArray<Memory::GlobalHeapEnum, FX::Particles::MotionSystems::Collision>(enum GlobalHeapEnum & a /* r24 */, class Collision * v /* r25 */, unsigned long amount /* r26 */) {
}
// signature: DeleteArray<Memory::GlobalHeapEnum, xVec3>(const Memory::GlobalHeapEnum &, xVec3 *, unsigned long)
// Range: 0x80174080 -> 0x801740C8
void DeleteArray<Memory::GlobalHeapEnum, xVec3>(enum GlobalHeapEnum & a /* r30 */, class xVec3 * v /* r31 */) {
}
// signature: DeleteArray<Memory::EntityPoolEnum, unsigned char>(const Memory::EntityPoolEnum &, unsigned char *, unsigned long)
// Range: 0x801B50F0 -> 0x801B5108
void DeleteArray<Memory::EntityPoolEnum, unsigned char>() {
}
// signature: DeleteArray<Memory::ThreadStackEnum, Math::Vector4>(const Memory::ThreadStackEnum &, Math::Vector4 *, unsigned long)
// Range: 0x80203C50 -> 0x80203C58
void DeleteArray<Memory::ThreadStackEnum, Math::Vector4>() {
}
// signature: NewArray<World::GeometryEntity::BlobRef, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x801B77C0 -> 0x801B780C
class BlobRef * NewArray<World::GeometryEntity::BlobRef, Memory::StackAllocator>() {
    // Local variables
    class BlobRef * mem; // r6

    // References
    // -> struct {} __vt__Q35World14GeometryEntity9BlobOwner;
}
// signature: NewArray<Math::Vector4, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x801BBC10 -> 0x801BBC28
class Vector4 * NewArray<Math::Vector4, Memory::StackAllocator>(class StackAllocator & a /* r4 */) {
}
// signature: NewArray<unsigned short *, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x801BD6A0 -> 0x801BD6B8
unsigned short * * NewArray<unsigned short *, Memory::StackAllocator>(class StackAllocator & a /* r4 */) {
}
// signature: NewArray<Graphics::VertexBuffer, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x801C8D70 -> 0x801C8D88
class VertexBuffer * NewArray<Graphics::VertexBuffer, Memory::StackAllocator>(class StackAllocator & a /* r4 */) {
}
// signature: NewArray<xVec2, Memory::ThreadStackEnum>(const Memory::ThreadStackEnum &, eMemMgrTag, unsigned long)
// Range: 0x800273F0 -> 0x80027404
class xVec2 * NewArray<xVec2, Memory::ThreadStackEnum>(enum eMemMgrTag tag /* r0 */) {
    // Local variables
    class xVec2 * mem; // r0
}
// signature: NewArray<@unnamed@WAD00_cpp@::combo_vertex, Memory::ThreadStackEnum>(const Memory::ThreadStackEnum &, eMemMgrTag, unsigned long)
// Range: 0x80027460 -> 0x80027474
class combo_vertex * NewArray<@unnamed@WAD00_cpp@::combo_vertex, Memory::ThreadStackEnum>(enum eMemMgrTag tag /* r0 */) {
    // Local variables
    class combo_vertex * mem; // r0
}
// signature: NewArray<xVec3, Memory::ThreadStackEnum>(const Memory::ThreadStackEnum &, eMemMgrTag, unsigned long)
// Range: 0x80027480 -> 0x80027498
class xVec3 * NewArray<xVec3, Memory::ThreadStackEnum>(enum ThreadStackEnum & a /* r6 */, enum eMemMgrTag tag /* r0 */) {
    // Local variables
    class xVec3 * mem; // r0
}
// signature: NewArray<unsigned short, Memory::ThreadStackEnum>(const Memory::ThreadStackEnum &, eMemMgrTag, unsigned long)
// Range: 0x800274A0 -> 0x800274B4
unsigned short * NewArray<unsigned short, Memory::ThreadStackEnum>(enum eMemMgrTag tag /* r0 */) {
    // Local variables
    unsigned short * mem; // r0
}
// signature: NewArray<zBTNode *, xMemStaticType>(const xMemStaticType &, eMemMgrTag, unsigned long)
// Range: 0x8007E690 -> 0x8007E6A4
class zBTNode * * NewArray<zBTNode *, xMemStaticType>() {
}
// signature: NewArray<Util::PoolList<zBTTask *>::NodeType, xMemStaticType>(const xMemStaticType &, eMemMgrTag, unsigned long)
// Range: 0x80081C80 -> 0x80081C94
class NodeType * NewArray<Util::PoolList<zBTTask *>::NodeType, xMemStaticType>() {
}
// signature: NewArray<float, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x80103F90 -> 0x80103FA8
float * NewArray<float, Memory::GlobalHeapEnum>(enum eMemMgrTag tag /* r0 */) {
}
// signature: NewArray<zSearchMapLink, xMemStaticType>(const xMemStaticType &, eMemMgrTag, unsigned long)
// Range: 0x801A9680 -> 0x801A9694
class zSearchMapLink * NewArray<zSearchMapLink, xMemStaticType>() {
}
// signature: NewArray<int, Memory::UpdateFrameEnum>(const Memory::UpdateFrameEnum &, eMemMgrTag, unsigned long)
// Range: 0x801BDD60 -> 0x801BDDA0
int * NewArray<int, Memory::UpdateFrameEnum>() {
    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x801D1AE0 -> 0x801D1B58
class Matrix43 * NewArray<Math::Matrix43, Memory::ThreadStackEnum>(enum ThreadStackEnum & a /* r6 */, enum eMemMgrTag tag /* r0 */, unsigned long amount /* r28 */) {
    // Local variables
    class Matrix43 * mem; // r29
}
// signature: NewArray<Graphics::Scene *, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x801E4670 -> 0x801E4688
class Scene * * NewArray<Graphics::Scene *, Memory::GlobalHeapEnum>() {
}
// signature: NewArray<unsigned char, Memory::UpdateFrameEnum>(const Memory::UpdateFrameEnum &, eMemMgrTag, unsigned long, unsigned long)
// Range: 0x800269B0 -> 0x80026A1C
unsigned char * NewArray<unsigned char, Memory::UpdateFrameEnum>() {
    // References
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: NewArray<unsigned char, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long, unsigned long)
// Range: 0x801C3490 -> 0x801C34B8
unsigned char * NewArray<unsigned char, Memory::GlobalHeapEnum>(enum eMemMgrTag tag /* r0 */) {
}
// signature: NewArray<char, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long, unsigned long)
// Range: 0x801CDD50 -> 0x801CDDB8
char * NewArray<char, Memory::GlobalHeapEnum>(enum eMemMgrTag tag /* r0 */, unsigned long amount /* r30 */) {
    // Local variables
    char * mem; // r31
}
// Range: 0x801E53B0 -> 0x801E53F4
void * Memory::AllocThreadStack(unsigned long size /* r31 */) {
    // Local variables
    class StaticStackAllocator * threadStackAllocator; // r0
}
// Range: 0x801E5460 -> 0x801E54A0
void Memory::FreeThreadStack(unsigned long size /* r31 */) {
    // Local variables
    class StaticStackAllocator * threadStackAllocator; // r0
}
// signature: Memory::StaticStackAllocator::Create(void *, int)
// Range: 0x8001D380 -> 0x8001D394
void Memory::StaticStackAllocator::Create() {
}
// signature: Memory::SingleBufferAllocator::Alloc(unsigned long)
// Range: 0x801EAEA0 -> 0x801EAECC
void * Memory::SingleBufferAllocator::Alloc() {
    // Local variables
    int newPos; // r4
    void * mem; // r0
}
