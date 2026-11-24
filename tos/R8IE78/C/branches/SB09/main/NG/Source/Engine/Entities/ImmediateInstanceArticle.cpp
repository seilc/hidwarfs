/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\ImmediateInstanceArticle.cpp
*/
// signature: World::ImmediateInstanceArticle::GetCreateInfo(World::ImmediateInstanceArticle::CreateInfo &, World::ShaderEntity::ParamCargo::CreateInfo *, World::EntityHandleBase *, const World::ImmediateInstanceAsset &)
// Range: 0x801B8500 -> 0x801B863C
void World::ImmediateInstanceArticle::GetCreateInfo(class CreateInfo & info /* r26 */, class CreateInfo * paramCreateInfos /* r27 */, class ImmediateInstanceAsset & asset /* r25 */) {
    // Local variables
    int rendCount; // r30
    class RenderableSettings * rendSettings; // r29

    {
        // Range: 0x801B856C -> 0x801B85EC
        // Local variables
        int i; // r28

        {
            // Range: 0x801B856C -> 0x801B85EC
            // Local variables
            class RenderableSettings & settings; // r5
        }
    }
}
// signature: World::ImmediateInstanceArticle::Create(void *, const World::ImmediateInstanceArticle::CreateInfo &, const World::ShaderEntity::ParamCargo::CreateInfo *, World::EntityHandleBase *, const World::ImmediateInstanceAsset &)
// Range: 0x801B8640 -> 0x801B8818
void World::ImmediateInstanceArticle::Create(class ImmediateInstanceArticle * this /* r18 */, class CreateInfo & info /* r22 */, class CreateInfo * paramCreateInfos /* r19 */, class EntityHandleBase * parent /* r20 */, class ImmediateInstanceAsset & asset /* r21 */) {
    // Local variables
    class StackAllocator allocator; // r1+0x20
    class StackAllocator paramCargoAllocator; // r1+0x14
    class StackAllocator paramDataAllocator; // r1+0x8
    class RenderableSettings * rendSettings; // r26

    {
        // Range: 0x801B872C -> 0x801B8804
        // Local variables
        int endi; // r24
        int i; // r25

        {
            // Range: 0x801B872C -> 0x801B8804
            // Local variables
            class ParamCargo & paramCargo; // r21
            class CreateInfo & paramCreateInfo; // r22
            class RenderableSettings & settings; // r23
        }
    }
}
// Range: 0x801B8820 -> 0x801B8890
void World::ImmediateInstanceArticle::Deactivate(class ImmediateInstanceArticle * this /* r29 */) {
    {
        // Range: 0x801B8840 -> 0x801B886C
        // Local variables
        int i; // r30
    }
}
// Range: 0x801B8890 -> 0x801B8990
class ImmediateInstanceArticle * World::ImmediateInstanceArticle::BufferCreate(class EntityHandleBase * parent /* r28 */, class ImmediateInstanceAsset & asset /* r29 */) {
    // Local variables
    class CreateInfo createInfo; // r1+0x14
    int memSize; // r30
    class StackAllocator allocator; // r1+0x8
}
// Range: 0x801B8990 -> 0x801B89D0
void World::ImmediateInstanceArticle::BufferDestroy(class ImmediateInstanceArticle * article /* r31 */) {
}
// signature: World::ImmediateInstanceArticle::ApplyToRenderable(Graphics::Renderable *, int)
// Range: 0x801B89D0 -> 0x801B8A1C
void World::ImmediateInstanceArticle::ApplyToRenderable(class Renderable * rend /* r31 */) {
}
