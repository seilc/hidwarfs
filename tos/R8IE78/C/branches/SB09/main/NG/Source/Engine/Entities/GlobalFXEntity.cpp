/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\GlobalFXEntity.cpp
*/
// Range: 0x801B7930 -> 0x801B7A3C
class Entity * Sext::GlobalFX::Create(class EntityHandleBase * handle /* r29 */, class GlobalFX * asset /* r30 */) {
    // Local variables
    class StackAllocator allocator; // r1+0xC

    {
        // Range: 0x801B79D8 -> 0x801B7A24
        // Local variables
        class EntityHandle * handle; // r30

        {
            // Range: 0x801B79E4 -> 0x801B7A24
            // Local variables
            int height; // r0
            int width; // r30
        }
    }

    // References
    // -> class PostProcess g_PostProcess;
    // -> struct {} __vt__Q25World14GlobalFXEntity;
}
// Range: 0x801B7A40 -> 0x801B7A74
void World::GlobalFXEntity::Deactivate() {
}
