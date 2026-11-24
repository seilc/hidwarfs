/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\World\Entity.cpp
*/
static class EntityModule entmod; // size: 0x98, address: 0x80809CE8
static class ModuleRegistrator entityModReg; // size: 0x8, address: 0x80809D80
class Module * entityModule; // size: 0x4, address: 0x8070B714
static class RelativePriority priority[1]; // size: 0xC, address: 0x8070B718
class AbstractAllocator aaEntityPool; // size: 0x8, address: 0x80809D90
// signature: @unnamed@WAD02_cpp@::EntityModule::GetPriority(int &) const
// Range: 0x802BC2AC -> 0x802BC2EC
static class RelativePriority * @unnamed@WAD02_cpp@::EntityModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * worldModule;
}
// signature: @unnamed@WAD02_cpp@::EntityModule::Startup(int)
// Range: 0x802BC2EC -> 0x802BC590
static void @unnamed@WAD02_cpp@::EntityModule::Startup() {
    // References
    // -> class Schema * clipSchema;
    // -> class Schema * genericShaderSchema;
    // -> class Schema * cinematicSchema;
    // -> class Schema * cameraFlyBlobSchema;
    // -> class Schema * skinAnimateStreamBlobSchema;
    // -> class Schema * lightKitSceneSchema;
    // -> class Schema * lightKitSchema;
    // -> class Schema * immediateGeometrySchema;
    // -> class Schema * immediatePrototypeSchema;
    // -> class Schema * collisionMeshBlobSchema;
    // -> class Schema * basicObjectSchema;
    // -> class Schema * vertexDeclSchema;
    // -> class Schema * textureResourceSchema;
    // -> class Schema * fontAssetSchema;
    // -> class Schema * skeletonBlobSchema;
    // -> class Schema * fontSchema;
    // -> class Schema * renderModeSchema;
    // -> class Schema * rawBlobSchema;
    // -> class Schema * modelPrototypeSchema;
    // -> class Schema * modelInstanceSchema;
    // -> class Schema * materialSchema;
    // -> class Schema * skinGeometrySchema;
    // -> class Schema * staticGeometrySchema;
    // -> class Schema * effectSchema;
    // -> class Schema * triggerSchema;
    // -> class Schema * basic3DSchema;
    // -> class Schema * unknownThingSchema;
}
// signature: @unnamed@WAD02_cpp@::EntityPoolAllocCB(Memory::AbstractAllocator *, unsigned long, eMemMgrTag)
// Range: 0x802BC590 -> 0x802BC5A8
static void * @unnamed@WAD02_cpp@::EntityPoolAllocCB() {
}
// signature: @unnamed@WAD02_cpp@::EntityPoolFreeCB(Memory::AbstractAllocator *, void *, unsigned long)
// Range: 0x802BC5A8 -> 0x802BC87C
static void @unnamed@WAD02_cpp@::EntityPoolFreeCB(void * mem /* r30 */) {
    // References
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
}
// Range: 0x802BC87C -> 0x802BC8B8
unsigned int World::EntityHandleBase::GetEntityTypeID() const {
    // References
    // -> class PoolArray schemas;
}
