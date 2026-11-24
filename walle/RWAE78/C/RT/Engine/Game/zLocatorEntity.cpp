/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zLocatorEntity.cpp
*/
class _OGLocatorSchema _OGLocatorschema; // size: 0x18, address: 0x8076E3B0
class SchemaRegistrator _OGLocatorschemaReg; // size: 0x8, address: 0x8076E3C8
// Range: 0x800E8B00 -> 0x800E8B10
void World::_OGLocatorEntity::Deactivate() {
}
// Range: 0x800E8B10 -> 0x800E8B60
void World::_OGLocatorEntity::Destroy(class _OGLocatorEntity * this /* r31 */) {
}
// signature: World::_OGLocatorSchema::Fix(World::Asset *, long, int)
// Range: 0x800E8BC0 -> 0x800E8BC8
void World::_OGLocatorSchema::Fix() {
}
// signature: World::_OGLocatorSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E8BD0 -> 0x800E8C1C
class EntityStub * World::_OGLocatorSchema::CreateStub(class _OGLocatorSchema * this /* r31 */) {
}
// signature: World::_OGLocatorSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800E8C20 -> 0x800E8C38
void World::_OGLocatorSchema::DestroyStub() {
}
// signature: World::_OGLocatorSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E8C40 -> 0x800E8CA4
class Entity * World::_OGLocatorSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World16_OGLocatorEntity;
}
// Range: 0x800E8CF0 -> 0x800E8D70
void zLocators_Update(float dt /* f31 */) {
    // Local variables
    int tidx; // r0
    class zLocator * current; // r31
    class zLocator * last; // r30

    // References
    // -> class zGlobals globals;
}
// signature: LocatorEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800E8D70 -> 0x800E8D74
static void LocatorEventWrapper() {
}
// signature: zLocator::Init(void *, void *)
// Range: 0x800E8D80 -> 0x800E8DE0
void zLocator::Init(void * base /* r31 */) {
    // References
    // -> struct {} __vt__8zLocator;
}
// signature: zLocator::GetBoneMat(World::ModelInstanceArticle *, unsigned long)
// Range: 0x800E8DE0 -> 0x800E9020
void zLocator::GetBoneMat(class zLocator * this /* r29 */) {
    // Local variables
    class xMat4x3 root_mat; // r1+0x38

    {
        // Range: 0x800E8F04 -> 0x800E9004
        // Local variables
        class Matrix43 m; // r1+0x8
    }
}
// signature: zLocator::Update(float)
// Range: 0x800E9020 -> 0x800E96B4
void zLocator::Update(class zLocator * this /* r26 */) {
    {
        // Range: 0x800E9268 -> 0x800E9694
        // Local variables
        float stopTime; // f1
        float startTime; // f3
    }
}
// Range: 0x800E96C0 -> 0x800E9CAC
void zLocator::PlayVFX(class zLocator * this /* r29 */, unsigned long long clipID /* r31:r30 */) {
    // Local variables
    class Goodie * goodie; // r0
    class CinematicBlobEntity * entity; // r6
    int locatorNameLen; // r23
    char buf[256]; // r1+0x8
}
// Range: 0x800E9CB0 -> 0x800EA2E4
void zLocator::SetupVFX(class zLocator * this /* r26 */) {
    // References
    // -> class xMat4x3 g_I3;
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// Range: 0x800EA2F0 -> 0x800EA67C
void zLocator::StopVFX(class zLocator * this /* r27 */) {
}
