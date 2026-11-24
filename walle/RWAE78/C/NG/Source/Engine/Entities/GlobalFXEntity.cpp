/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\GlobalFXEntity.cpp
*/
// signature: World::GlobalFXEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8023B9D0 -> 0x8023BD9C
class GlobalFXEntity * World::GlobalFXEntity::Create(class EntityHandleBase * handle /* r28 */, class Asset * baseAsset /* r29 */) {
    // Local variables
    class ScadMgr * scadMgr; // r30
    void * mem; // r0
    class StackAllocator allocator; // r1+0x2C
    unsigned long long shadowReceiveImmUID; // r5:r4

    {
        // Range: 0x8023BA50 -> 0x8023BAD4
        // Local variables
        class EntityHandle * handle; // r29
    }
    {
        // Range: 0x8023BAD4 -> 0x8023BB44
        // Local variables
        class EntityHandle * handle; // r29
    }
    {
        // Range: 0x8023BB44 -> 0x8023BBB4
        // Local variables
        class EntityHandle * handle; // r29
    }
    {
        // Range: 0x8023BBB4 -> 0x8023BC24
        // Local variables
        class EntityHandle * handle; // r29
    }
    {
        // Range: 0x8023BC24 -> 0x8023BCA4
        // Local variables
        class EntityHandle * handle; // r29

        {
            // Range: 0x8023BC40 -> 0x8023BCA4
            // Local variables
            int height; // r0
            int width; // r29
        }
    }
    {
        // Range: 0x8023BCD0 -> 0x8023BD6C
        // Local variables
        class EntityHandle * handle; // r29
    }

    // References
    // -> class PostProcess g_PostProcess;
}
// Range: 0x8023BE50 -> 0x8023C140
void World::GlobalFXEntity::Deactivate(class GlobalFXEntity * this /* r31 */) {
}
// signature: World::GlobalFXEntity::SetShadowImmediate(World::ImmediatePrototypeEntity *, World::ImmediatePrototypeEntity *)
// Range: 0x8023C140 -> 0x8023C154
void World::GlobalFXEntity::SetShadowImmediate() {
    // References
    // -> class ImmediatePrototypeEntity * shadowPostProcessImm;
    // -> class ImmediatePrototypeEntity * shadowReceiveImm;
}
