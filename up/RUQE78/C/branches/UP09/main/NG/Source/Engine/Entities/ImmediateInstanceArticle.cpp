/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\ImmediateInstanceArticle.cpp
*/
// signature: World::ImmediateInstanceArticle::GetCreateInfo(World::ImmediateInstanceArticle::CreateInfo &, World::ShaderEntity::ParamCargo::CreateInfo *, World::EntityHandleBase *, const World::ImmediateInstanceAsset &)
// Range: 0x802DC4FC -> 0x802DC698
void World::ImmediateInstanceArticle::GetCreateInfo(class CreateInfo & info /* r29 */, class CreateInfo * paramCreateInfos /* r30 */, class ImmediateInstanceAsset & asset /* r27 */) {
    // Local variables
    int rendCount; // r31
    class RenderableSettings * rendSettings; // r0

    {
        // Range: 0x802DC568 -> 0x802DC624
        // Local variables
        int i; // r5

        {
            // Range: 0x802DC568 -> 0x802DC624
            // Local variables
            class MaterialParam * rendParams; // r0
        }
    }
}
// signature: World::ImmediateInstanceArticle::Create(void *, const World::ImmediateInstanceArticle::CreateInfo &, const World::ShaderEntity::ParamCargo::CreateInfo *, World::EntityHandleBase *, const World::ImmediateInstanceAsset &)
// Range: 0x802DC698 -> 0x802DC888
void World::ImmediateInstanceArticle::Create(class ImmediateInstanceArticle * this /* r19 */, class EntityHandleBase * parent /* r20 */) {
    // Local variables
    class StackAllocator allocator; // r1+0x30
    class StackAllocator paramCargoAllocator; // r1+0x24
    class StackAllocator paramDataAllocator; // r1+0x18
    class RenderableSettings * rendSettings; // r0

    {
        // Range: 0x802DC6D8 -> 0x802DC85C
        // Local variables
        int endi; // r0
        int i; // r22

        {
            // Range: 0x802DC6D8 -> 0x802DC85C
            // Local variables
            class ParamCargo & paramCargo; // r21
        }
    }
}
// Range: 0x802DC888 -> 0x802DC98C
class ImmediateInstanceArticle * World::ImmediateInstanceArticle::BufferCreate(class EntityHandleBase * parent /* r30 */, class ImmediateInstanceAsset & asset /* r31 */) {
    // Local variables
    class CreateInfo createInfo; // r1+0x14
    int memSize; // r27
    class StackAllocator allocator; // r1+0x8
}
// Range: 0x802DC98C -> 0x802DCA78
void World::ImmediateInstanceArticle::BufferDestroy(class ImmediateInstanceArticle * article /* r31 */) {
}
// signature: World::ImmediateInstanceArticle::ApplyToRenderable(Graphics::Renderable *, int)
// Range: 0x802DCA78 -> 0x802DCA94
void World::ImmediateInstanceArticle::ApplyToRenderable() {
}
