/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Memory\Global.h
*/
// Range: 0x802E50B4 -> 0x802E50EC
void * Memory::ThreadStackMarkSentry::ThreadStackMarkSentry(class ThreadStackMarkSentry * this /* r31 */) {
}
// Range: 0x80092640 -> 0x800926A4
void * Memory::ThreadStackMarkSentry::~ThreadStackMarkSentry(class ThreadStackMarkSentry * this /* r29 */) {
}
// signature: Memory::StackAllocator::StackAllocator(void *, int)
// Range: 0x802D85B4 -> 0x802D85C8
void * Memory::StackAllocator::StackAllocator() {
}
// signature: Memory::StackAllocator::PushAlign(unsigned long)
// Range: 0x802D85C8 -> 0x802D85E4
unsigned long Memory::StackAllocator::PushAlign() {
}
// signature: operator new(unsigned long, Memory::GlobalHeapEnum, eMemMgrTag)
// Range: 0x80011A30 -> 0x80011A38
void * operator new() {
}
// Range: 0x8033B840 -> 0x8033BDA0
void Delete<Memory::GlobalHeapEnum, Graphics::ScaleformInternalEntity>(enum GlobalHeapEnum & a /* r29 */, class ScaleformInternalEntity * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// Range: 0x8033E7B0 -> 0x8033ED48
void Delete<Memory::GlobalHeapEnum, Scaleform::MovieNode>(enum GlobalHeapEnum & a /* r29 */, class MovieNode * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> void * nearestMovieReleased;
    // -> void * movieReleaseTest;
}
// Range: 0x803413C4 -> 0x80341E08
void Delete<Memory::GlobalHeapEnum, Scaleform::SFEventNode>(enum GlobalHeapEnum & a /* r27 */, class SFEventNode * v /* r28 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: DeleteArray<Memory::ThreadStackEnum, unsigned char>(const Memory::ThreadStackEnum &, unsigned char *, unsigned long)
// Range: 0x8006A0C0 -> 0x8006A100
void DeleteArray<Memory::ThreadStackEnum, unsigned char>(unsigned long amount /* r31 */) {
}
// Range: 0x8016A5C0 -> 0x8016A66C
void DeleteArray<Memory::GlobalHeapEnum, FX::Particles::MotionSystems::Turbulence>(enum GlobalHeapEnum & a /* r23 */, class Turbulence * v /* r24 */, unsigned long amount /* r25 */) {
    // References
    // -> unsigned int sNumTurbulence;
    // -> class xVec3 * sTurbulenceField;
}
// Range: 0x8016C0B0 -> 0x8016C1C8
void DeleteArray<Memory::GlobalHeapEnum, FX::Particles::MotionSystems::Attach>(enum GlobalHeapEnum & a /* r25 */, class Attach * v /* r26 */, unsigned long amount /* r27 */) {
}
// Range: 0x8016C1F0 -> 0x8016C31C
void DeleteArray<Memory::GlobalHeapEnum, FX::Particles::MotionSystems::Collision>(enum GlobalHeapEnum & a /* r25 */, class Collision * v /* r26 */, unsigned long amount /* r27 */) {
    // References
    // -> class SystemInstance * * sInstances;
    // -> class NumberPool sNumberPool;
}
// signature: DeleteArray<Memory::GlobalHeapEnum, FX::Particles::MotionSystems::Vortex>(const Memory::GlobalHeapEnum &, FX::Particles::MotionSystems::Vortex *, unsigned long)
// Range: 0x8016C340 -> 0x8016C35C
void DeleteArray<Memory::GlobalHeapEnum, FX::Particles::MotionSystems::Vortex>() {
}
// signature: DeleteArray<Memory::GlobalHeapEnum, unsigned char>(const Memory::GlobalHeapEnum &, unsigned char *, unsigned long)
// Range: 0x80317600 -> 0x80317B84
void DeleteArray<Memory::GlobalHeapEnum, unsigned char>(unsigned char * v /* r31 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: DeleteArray<Memory::GlobalHeapEnum, Util::PoolList<Scaleform::ScaleformListener *>::NodeType>(const Memory::GlobalHeapEnum &, Util::PoolList<Scaleform::ScaleformListener *>::NodeType *, unsigned long)
// Range: 0x8033BDA4 -> 0x8033C2E0
void DeleteArray<Memory::GlobalHeapEnum, Util::PoolList<Scaleform::ScaleformListener *>::NodeType>(class NodeType * v /* r30 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
}
// signature: DeleteArray<Memory::ThreadStackEnum, Math::Vector4>(const Memory::ThreadStackEnum &, Math::Vector4 *, unsigned long)
// Range: 0x80360398 -> 0x803603F4
void DeleteArray<Memory::ThreadStackEnum, Math::Vector4>() {
    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// signature: NewArray<unsigned char, Memory::StackAllocator>(Memory::StackAllocator &, eMemMgrTag, unsigned long)
// Range: 0x802D85E4 -> 0x802D85F8
unsigned char * NewArray<unsigned char, Memory::StackAllocator>(class StackAllocator & a /* r4 */) {
}
// signature: NewArray<char, Memory::GlobalHeapEnum>(Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x803388DC -> 0x8033919C
char * NewArray<char, Memory::GlobalHeapEnum>(unsigned long amount /* r27 */) {
    // Local variables
    char * mem; // r0

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: NewArray<unsigned char, Memory::ThreadStackEnum>(const Memory::ThreadStackEnum &, eMemMgrTag, unsigned long)
// Range: 0x8006A070 -> 0x8006A0B4
unsigned char * NewArray<unsigned char, Memory::ThreadStackEnum>(unsigned long amount /* r31 */) {
}
// signature: NewArray<FX::Particles::MotionSystems::Turbulence, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x8016AC50 -> 0x8016ADAC
class Turbulence * NewArray<FX::Particles::MotionSystems::Turbulence, Memory::GlobalHeapEnum>(enum eMemMgrTag tag /* r0 */, unsigned long amount /* r21 */) {
    // Local variables
    class Turbulence * mem; // r22

    // References
    // -> unsigned int sNumTurbulence;
    // -> class xVec3 * sTurbulenceField;
}
// Range: 0x8016C020 -> 0x8016C0B0
class Attach * NewArray<FX::Particles::MotionSystems::Attach, Memory::GlobalHeapEnum>(enum GlobalHeapEnum & a /* r6 */, enum eMemMgrTag tag /* r0 */, unsigned long amount /* r31 */) {
    // Local variables
    class Attach * mem; // r3
}
// signature: NewArray<FX::Particles::MotionSystems::Collision, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x8016C1D0 -> 0x8016C1EC
class Collision * NewArray<FX::Particles::MotionSystems::Collision, Memory::GlobalHeapEnum>(enum GlobalHeapEnum & a /* r6 */, enum eMemMgrTag tag /* r0 */) {
}
// signature: NewArray<FX::Particles::MotionSystems::Vortex, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x8016C320 -> 0x8016C33C
class Vortex * NewArray<FX::Particles::MotionSystems::Vortex, Memory::GlobalHeapEnum>(enum GlobalHeapEnum & a /* r6 */, enum eMemMgrTag tag /* r0 */) {
}
// signature: NewArray<FX::Particles::MotionSystems::Attractor, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x8016C360 -> 0x8016C378
class Attractor * NewArray<FX::Particles::MotionSystems::Attractor, Memory::GlobalHeapEnum>(enum eMemMgrTag tag /* r0 */) {
}
// signature: NewArray<Math::Vector, Memory::ThreadStackEnum>(const Memory::ThreadStackEnum &, eMemMgrTag, unsigned long)
// Range: 0x802E535C -> 0x802E53A0
class Vector * NewArray<Math::Vector, Memory::ThreadStackEnum>() {
    // Local variables
    class Vector * mem; // r0
}
// signature: NewArray<Math::Matrix43, Memory::ThreadStackEnum>(const Memory::ThreadStackEnum &, eMemMgrTag, unsigned long)
// Range: 0x803023D8 -> 0x8030241C
class Matrix43 * NewArray<Math::Matrix43, Memory::ThreadStackEnum>() {
    // Local variables
    class Matrix43 * mem; // r0
}
// signature: NewArray<unsigned char, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x80316734 -> 0x80317074
unsigned char * NewArray<unsigned char, Memory::GlobalHeapEnum>(unsigned long amount /* r28 */) {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: NewArray<Graphics::Scene *, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x803181F8 -> 0x80318B38
class Scene * * NewArray<Graphics::Scene *, Memory::GlobalHeapEnum>() {
    // Local variables
    class Scene * * mem; // r0

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: NewArray<@unnamed@WAD02_cpp@::TempNodeRef, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x80318B38 -> 0x80319478
class TempNodeRef * NewArray<@unnamed@WAD02_cpp@::TempNodeRef, Memory::GlobalHeapEnum>() {
    // Local variables
    class TempNodeRef * mem; // r0

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: NewArray<void *, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x8032634C -> 0x80326C4C
void * * NewArray<void *, Memory::GlobalHeapEnum>() {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: NewArray<Util::PoolList<Scaleform::ScaleformListener *>::NodeType, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x8033A738 -> 0x8033AFF8
class NodeType * NewArray<Util::PoolList<Scaleform::ScaleformListener *>::NodeType, Memory::GlobalHeapEnum>() {
    // Local variables
    class NodeType * mem; // r0

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: NewArray<const World::ScaleformAsset *, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x8033ED48 -> 0x8033F608
class ScaleformAsset * * NewArray<const World::ScaleformAsset *, Memory::GlobalHeapEnum>() {
    // Local variables
    class ScaleformAsset * * mem; // r0

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: NewArray<Util::NodeList<System::Module::Hook>, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x8034F4A4 -> 0x8034FD98
class NodeList * NewArray<Util::NodeList<System::Module::Hook>, Memory::GlobalHeapEnum>(unsigned long amount /* r26 */) {
    // Local variables
    class NodeList * mem; // r27

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: NewArray<Math::Vector4, Memory::ThreadStackEnum>(const Memory::ThreadStackEnum &, eMemMgrTag, unsigned long)
// Range: 0x803603F4 -> 0x80360450
class Vector4 * NewArray<Math::Vector4, Memory::ThreadStackEnum>() {
    // Local variables
    class Vector4 * mem; // r0

    // References
    // -> static class ThreadLocalStorage threadLocal;
}
// signature: NewArray<EmbeddedTreeAVL<World::EntityHandleBase, World::EntityHandleCmp, 36>, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x803658AC -> 0x803661A4
class EmbeddedTreeAVL * NewArray<EmbeddedTreeAVL<World::EntityHandleBase, World::EntityHandleCmp, 36>, Memory::GlobalHeapEnum>(unsigned long amount /* r26 */) {
    // Local variables
    class EmbeddedTreeAVL * mem; // r27

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: NewArray<Util::PoolList<World::EntityHandleBase>::NodeType, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long)
// Range: 0x803661A4 -> 0x80366AA8
class NodeType * NewArray<Util::PoolList<World::EntityHandleBase>::NodeType, Memory::GlobalHeapEnum>(unsigned long amount /* r26 */) {
    // Local variables
    class NodeType * mem; // r27

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// signature: NewArray<char, Memory::GlobalHeapEnum>(const Memory::GlobalHeapEnum &, eMemMgrTag, unsigned long, unsigned long)
// Range: 0x8035B2DC -> 0x8035BBE8
char * NewArray<char, Memory::GlobalHeapEnum>(unsigned long amount /* r26 */, unsigned long align /* r27 */) {
    // Local variables
    char * mem; // r0

    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
