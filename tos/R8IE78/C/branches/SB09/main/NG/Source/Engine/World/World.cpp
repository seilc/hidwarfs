/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\World\World.cpp
*/
static class WorldModule worldmod; // size: 0x98, address: 0x80783360
static class ModuleRegistrator worldModReg; // size: 0x8, address: 0x807833F8
class Module * worldModule; // size: 0x4, address: 0x806CF578
class Scene * primaryScene; // size: 0x4, address: 0x80783400
static class PoolArray entitiesUpdateRender; // size: 0xC, address: 0x80783404
// Range: 0x80206C50 -> 0x80206C94
static void * @unnamed@WAD02_cpp@::WorldModule::WorldModule(class WorldModule * this /* r31 */) {
    // References
    // -> static struct {} __vt__Q219@unnamed@WAD02_cpp@11WorldModule;
}
// signature: @unnamed@WAD02_cpp@::WorldModule::Startup(int)
// Range: 0x80206CA0 -> 0x80206D14
static void @unnamed@WAD02_cpp@::WorldModule::Startup() {
    // References
    // -> class ModelInstanceArticlePool modelInstanceArticlePool;
    // -> static class PoolArray entitiesUpdateRender;
    // -> class Game * singleton;
}
// signature: @unnamed@WAD02_cpp@::WorldModule::Shutdown(int)
// Range: 0x80206D20 -> 0x80206D68
static void @unnamed@WAD02_cpp@::WorldModule::Shutdown() {
    // References
    // -> static class PoolArray entitiesUpdateRender;
    // -> class ModelInstanceArticlePool modelInstanceArticlePool;
}
// signature: @unnamed@WAD02_cpp@::WorldModule::Update(int)
// Range: 0x80206D70 -> 0x80206D94
static void @unnamed@WAD02_cpp@::WorldModule::Update() {
    // References
    // -> class Game * singleton;
}
// signature: @unnamed@WAD02_cpp@::WorldModule::StepEnd(int)
// Range: 0x80206DA0 -> 0x80206E14
static void @unnamed@WAD02_cpp@::WorldModule::StepEnd() {
    // References
    // -> static class PoolArray entitiesUpdateRender;
}
// signature: World::_AddEntity(World::EntityHandleBase *, Util::PoolArray<World::EntityHandleBase *> &)
// Range: 0x80206E20 -> 0x80206E40
void World::_AddEntity() {
}
// signature: World::AddEntity(World::EntityHandleBase *)
// Range: 0x80206E40 -> 0x80206E5C
void World::AddEntity() {
    // References
    // -> static class PoolArray entitiesUpdateRender;
}
// signature: World::_RemoveEntity(World::EntityHandleBase *, Util::PoolArray<World::EntityHandleBase *> &)
// Range: 0x80206E60 -> 0x80206EB0
void World::_RemoveEntity() {
    // Local variables
    int size; // r0

    {
        // Range: 0x80206E64 -> 0x80206EAC
        // Local variables
        int i; // r0
    }
}
// signature: World::RemoveEntity(World::EntityHandleBase *)
// Range: 0x80206EB0 -> 0x80206ECC
void World::RemoveEntity() {
    // References
    // -> static class PoolArray entitiesUpdateRender;
}
