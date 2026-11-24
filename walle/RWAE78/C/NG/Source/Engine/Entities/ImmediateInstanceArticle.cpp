/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\ImmediateInstanceArticle.cpp
*/
class ImmediateInstanceArticleSchema schema; // size: 0x18, address: 0x807FE8D0
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FE8E8
class Schema * immediateInstanceSchema; // size: 0x4, address: 0x80707A2C
// signature: World::ImmediateInstanceArticleSchema::Fix(World::Asset *, long, int)
// Range: 0x8023D6B0 -> 0x8023D7DC
void World::ImmediateInstanceArticleSchema::Fix() {
    // Local variables
    class ImmediateInstanceAsset * asset; // r0
}
// signature: World::ImmediateInstanceArticleSchema::GetArticleSize(int &, const World::Asset *)
// Range: 0x8023D7DC -> 0x8023D7E4
int World::ImmediateInstanceArticleSchema::GetArticleSize() {
}
// signature: World::ImmediateInstanceArticleSchema::CreateArticle(Overseer::Goodie *, const World::Asset *, void *, int)
// Range: 0x8023D7E4 -> 0x8023D7E8
void World::ImmediateInstanceArticleSchema::CreateArticle() {
}
// signature: World::ImmediateInstanceArticle::GetCreateInfo(World::ImmediateInstanceArticle::CreateInfo &, World::ShaderEntity::ParamCargo::CreateInfo *, Overseer::Goodie *, const World::ImmediateInstanceAsset &)
// Range: 0x8023D7E8 -> 0x8023DC28
void World::ImmediateInstanceArticle::GetCreateInfo(class CreateInfo * info /* r25 */, class CreateInfo * paramCreateInfos /* r26 */, class ImmediateInstanceAsset * asset /* r27 */) {
    // Local variables
    int rendCount; // r28

    {
        // Range: 0x8023DAEC -> 0x8023DBB4
        // Local variables
        int i; // r5
    }

    // References
    // -> static class ScadMgrModule scadMgrMod;
}
// signature: World::ImmediateInstanceArticle::Create(void *, const World::ImmediateInstanceArticle::CreateInfo &, const World::ShaderEntity::ParamCargo::CreateInfo *, Overseer::Goodie *, const World::ImmediateInstanceAsset &)
// Range: 0x8023DC28 -> 0x8023DFE0
void World::ImmediateInstanceArticle::Create(class ImmediateInstanceArticle * this /* r15 */, class Goodie * goodie /* r1+0x8 */) {
    // Local variables
    class StackAllocator allocator; // r1+0x34
    class StackAllocator paramCargoAllocator; // r1+0x28
    class StackAllocator paramDataAllocator; // r1+0x1C
    class RenderableSettings * rendSettings; // r18

    {
        // Range: 0x8023DC64 -> 0x8023DC98
        // Local variables
        int endi; // r0
        int i; // r17

        {
            // Range: 0x8023DC64 -> 0x8023DC98
            // Local variables
            class ParamCargo * paramCargo; // r16
        }
    }

    // References
    // -> static float s_colorScale;
    // -> static float s_ambient[4];
}
// Range: 0x8023DFE0 -> 0x8023DFE4
void World::ImmediateInstanceArticle::Destroy() {
}
// Range: 0x8023DFE4 -> 0x8023E110
class ImmediateInstanceArticle * World::ImmediateInstanceArticle::BufferCreate(class Goodie * goodie /* r30 */, class ImmediateInstanceAsset * asset /* r31 */) {
    // Local variables
    class CreateInfo createInfo; // r1+0x14
    int memSize; // r28
    class StackAllocator allocator; // r1+0x8

    // References
    // -> struct {} __vt__Q25World24ImmediateInstanceArticle;
}
// Range: 0x8023E110 -> 0x8023E2EC
void World::ImmediateInstanceArticle::BufferDestroy(class ImmediateInstanceArticle * article /* r27 */) {
}
// signature: World::ImmediateInstanceArticle::ApplyToRenderable(Graphics::Renderable *, int)
// Range: 0x8023E2EC -> 0x8023E308
void World::ImmediateInstanceArticle::ApplyToRenderable() {
}
