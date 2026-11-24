/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zDebrisPile.cpp
*/
class _OGDebrisPileSchema _OGDebrisPileschema; // size: 0x18, address: 0x8076D0B0
class SchemaRegistrator _OGDebrisPileschemaReg; // size: 0x8, address: 0x8076D0C8
static class zProjectileController gFoodItemParams; // size: 0x40, address: 0x8076D0D0
static class zProjectileController gHealthItemParams; // size: 0x40, address: 0x8076D110
static class zProjectileController gMissedHealthItemParams; // size: 0x40, address: 0x8076D150
static int debrisPileTypeIndex; // size: 0x4, address: 0x806F4470
// Range: 0x800C5C30 -> 0x800C5C40
void World::_OGDebrisPileEntity::Deactivate() {
}
// Range: 0x800C5C40 -> 0x800C5C90
void World::_OGDebrisPileEntity::Destroy(class _OGDebrisPileEntity * this /* r31 */) {
}
// signature: World::_OGDebrisPileSchema::Fix(World::Asset *, long, int)
// Range: 0x800C5CF0 -> 0x800C5CF8
void World::_OGDebrisPileSchema::Fix() {
}
// signature: World::_OGDebrisPileSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C5D00 -> 0x800C5D4C
class EntityStub * World::_OGDebrisPileSchema::CreateStub(class _OGDebrisPileSchema * this /* r31 */) {
}
// signature: World::_OGDebrisPileSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800C5D50 -> 0x800C5D68
void World::_OGDebrisPileSchema::DestroyStub() {
}
// signature: World::_OGDebrisPileSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800C5D70 -> 0x800C5DD4
class Entity * World::_OGDebrisPileSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World19_OGDebrisPileEntity;
}
// signature: @unnamed@WAD01_cpp@::DebrisPileEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C5E20 -> 0x800C5E3C
static void @unnamed@WAD01_cpp@::DebrisPileEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800C5E40 -> 0x800C6120
void zDebrisPile::SpawnItems(class zDebrisPile * this /* r29 */, class xEnt * player /* r30 */) {
    {
        // Range: 0x800C5E6C -> 0x800C5F28
        // Local variables
        int i; // r27

        {
            // Range: 0x800C5E6C -> 0x800C5F28
            // Local variables
            class zProjectileLaunchData launchData; // r1+0x80
        }
    }
    {
        // Range: 0x800C5F40 -> 0x800C6020
        // Local variables
        class zProjectileLaunchData launchData; // r1+0x44

        {
            // Range: 0x800C5FD4 -> 0x800C6008
            // Local variables
            int j; // r27
        }
    }
    {
        // Range: 0x800C6020 -> 0x800C60F0
        // Local variables
        class zProjectileLaunchData launchData; // r1+0x8

        {
            // Range: 0x800C6098 -> 0x800C60CC
            // Local variables
            int j; // r27
        }
    }

    // References
    // -> static class zProjectileController gMissedHealthItemParams;
    // -> static class zProjectileController gHealthItemParams;
    // -> static class zProjectileController gFoodItemParams;
}
// Range: 0x800C6140 -> 0x800C6190
void zDebrisPile::Init(class zDebrisPile * this /* r30 */, class zDebrisPileAsset * inAsset /* r31 */) {
}
// Range: 0x800C6190 -> 0x800C62B4
void zDebrisPile::Setup(class zDebrisPile * this /* r27 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x800C62C0 -> 0x800C6350
void zDebrisPile::Reset(class zDebrisPile * this /* r31 */) {
}
// Range: 0x800C6360 -> 0x800C6374
void zDebrisPile::Render() {
}
// signature: zDebrisPile::Update(float)
// Range: 0x800C6380 -> 0x800C6490
void zDebrisPile::Update(class zDebrisPile * this /* r31 */) {
    // Local variables
    class xEnt * closest; // r4
    float minDist2; // f5

    {
        // Range: 0x800C63DC -> 0x800C63DC
        // Local variables
        int i; // r0

        {
            // Range: 0x800C63DC -> 0x800C63DC
            // Local variables
            float dist2; // f0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800C6490 -> 0x800C64FC
void zDebrisPile::SceneExit(class zDebrisPile * this /* r31 */) {
}
// signature: zDebrisPile::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C6500 -> 0x800C652C
void zDebrisPile::HandleEvent() {
}
// Range: 0x800C6530 -> 0x800C6580
void zDebrisPile::Save(class zDebrisPile * this /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x800C6580 -> 0x800C6600
void zDebrisPile::Load(class zDebrisPile * this /* r29 */, class xSerial * s /* r30 */, bool dummy /* r31 */) {
    {
        // Range: 0x800C65C8 -> 0x800C65E4
        // Local variables
        int tempHealthLeft; // r1+0x8
        int tempFoodLeft; // r1+0xC
    }
}
// signature: zDebrisPileInit(void *, void *)
// Range: 0x800C6600 -> 0x800C6624
void zDebrisPileInit() {
    // References
    // -> struct {} __vt__11zDebrisPile;
}
// Range: 0x800C6630 -> 0x800C665C
void zDebrisPileSceneInit() {
    // References
    // -> static int debrisPileTypeIndex;
}
// Range: 0x800C6660 -> 0x800C66F8
void zDebrisPileUpdate(float dt /* f31 */) {
    // Local variables
    class zDebrisPile * current; // r31
    class zDebrisPile * last; // r30

    // References
    // -> static int debrisPileTypeIndex;
    // -> class zGlobals globals;
}
// Range: 0x800C6700 -> 0x800C677C
void zDebrisPileSceneExit() {
    // Local variables
    class zDebrisPile * current; // r31
    class zDebrisPile * last; // r30

    // References
    // -> static int debrisPileTypeIndex;
    // -> class zGlobals globals;
}
