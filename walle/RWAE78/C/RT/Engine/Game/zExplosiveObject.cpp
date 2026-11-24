/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zExplosiveObject.cpp
*/
class zExplosiveObject * firstExplosiveObject; // size: 0x4, address: 0x8076D260
class zExplosiveObject * lastExplosiveObject; // size: 0x4, address: 0x8076D264
static class xOGSchema ExplosiveObjectSchema; // size: 0x18, address: 0x8076D268
static class SchemaRegistrator ExplosiveObjectSchemaReg; // size: 0x8, address: 0x8076D280
class _OGExplosivePropertiesSchema _OGExplosivePropertiesschema; // size: 0x18, address: 0x8076D288
class SchemaRegistrator _OGExplosivePropertiesschemaReg; // size: 0x8, address: 0x8076D2A0
struct {} __vt__Q25World42xOGSchema<Q25World21ExplosiveObjectEntity>; // size: 0x28, address: 0x806FAD38
struct {} __vt__Q25World31xOGSchema<Q25World10BeamEntity>; // size: 0x28, address: 0x806FAD60
struct {} __vt__17zAnimViewerCamera; // size: 0x48, address: 0x806FAD88
struct {} __vt__Q25World45xOGSchema<Q25World24_BreakawayPlatformEntity>; // size: 0x28, address: 0x806FADD0
// Range: 0x800C9780 -> 0x800C9790
void World::_OGExplosivePropertiesEntity::Deactivate() {
}
// Range: 0x800C9790 -> 0x800C97E0
void World::_OGExplosivePropertiesEntity::Destroy(class _OGExplosivePropertiesEntity * this /* r31 */) {
}
// signature: World::_OGExplosivePropertiesSchema::Fix(World::Asset *, long, int)
// Range: 0x800C9840 -> 0x800C9848
void World::_OGExplosivePropertiesSchema::Fix() {
}
// signature: World::_OGExplosivePropertiesSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C9850 -> 0x800C989C
class EntityStub * World::_OGExplosivePropertiesSchema::CreateStub(class _OGExplosivePropertiesSchema * this /* r31 */) {
}
// signature: World::_OGExplosivePropertiesSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800C98A0 -> 0x800C98B8
void World::_OGExplosivePropertiesSchema::DestroyStub() {
}
// signature: World::_OGExplosivePropertiesSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C98C0 -> 0x800C9928
class Entity * World::_OGExplosivePropertiesSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World28_OGExplosivePropertiesEntity;
}
// signature: zExplosiveObject::Init(Sext::ExplosiveObject *)
// Range: 0x800C9970 -> 0x800C9A9C
void zExplosiveObject::Init(class zExplosiveObject * this /* r30 */) {
    {
        // Range: 0x800C9A30 -> 0x800C9A84
        // Local variables
        class hkpPropertyValue val; // r1+0x18
    }

    // References
    // -> class zExplosiveObject * lastExplosiveObject;
    // -> class zExplosiveObject * firstExplosiveObject;
}
// Range: 0x800C9AA0 -> 0x800C9AA4
void zExplosiveObject::Setup() {
}
// signature: zExplosiveObject::Update(xScene *, float)
// Range: 0x800C9AB0 -> 0x800CA280
void zExplosiveObject::Update(class zExplosiveObject * this /* r29 */, float deltaTime /* f26 */) {
    // Local variables
    bool shouldExplodeChained; // r30

    {
        // Range: 0x800C9DB4 -> 0x800CA238
        // Local variables
        float expDamage; // f30
        float expRad; // f31
    }

    // References
    // -> class zBombManager gBombManager;
    // -> class zExplosiveObject * firstExplosiveObject;
    // -> class xGlobals * xglobals;
}
// Range: 0x800CA280 -> 0x800CA488
void zExplosiveObject::HandleEvent(class zExplosiveObject * this /* r26 */, class xBase * from /* r27 */, unsigned int event /* r28 */, class EventAny * params /* r29 */) {
    // Local variables
    bool useSimpleObjEventCB; // r30

    {
        // Range: 0x800CA398 -> 0x800CA404
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionMount * parameters; // r0

        {
            // Range: 0x800CA3D8 -> 0x800CA404
            // Local variables
            float mt; // f1
        }
    }

    // References
    // -> class zGlobals globals;
}
// signature: zExplosiveObject::StaticInit(void *, void *)
// Range: 0x800CA490 -> 0x800CA4E0
void zExplosiveObject::StaticInit() {
    // References
    // -> struct {} __vt__16zExplosiveObject;
}
// signature: zExplosiveObject::StaticUpdate(xEnt *, xScene *, float)
// Range: 0x800CA520 -> 0x800CA524
void zExplosiveObject::StaticUpdate() {
}
// signature: zExplosiveObject::StaticHandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800CA530 -> 0x800CA540
void zExplosiveObject::StaticHandleEvent(class xBase * from /* r0 */) {
}
// Range: 0x800CA540 -> 0x800CA67C
void zExplosiveObj_SceneExit() {
    // Local variables
    int tidx; // r0
    class zExplosiveObject * current; // r31
    class zExplosiveObject * last; // r27

    // References
    // -> class zExplosiveObject * firstExplosiveObject;
    // -> class zExplosiveObject * lastExplosiveObject;
    // -> class zGlobals globals;
}
