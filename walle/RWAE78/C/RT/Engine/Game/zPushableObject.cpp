/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPushableObject.cpp
*/
class _OGPushable_ObjectSchema _OGPushable_Objectschema; // size: 0x18, address: 0x807996F8
class SchemaRegistrator _OGPushable_ObjectschemaReg; // size: 0x8, address: 0x80799710
static class xEntAsset fakeAsset; // size: 0xF0, address: 0x80799720
static bool needInit; // size: 0x1, address: 0x8070061C
// Range: 0x8018F930 -> 0x8018F940
void World::_OGPushable_ObjectEntity::Deactivate() {
}
// Range: 0x8018F940 -> 0x8018F990
void World::_OGPushable_ObjectEntity::Destroy(class _OGPushable_ObjectEntity * this /* r31 */) {
}
// signature: World::_OGPushable_ObjectSchema::Fix(World::Asset *, long, int)
// Range: 0x8018F9F0 -> 0x8018F9F8
void World::_OGPushable_ObjectSchema::Fix() {
}
// signature: World::_OGPushable_ObjectSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8018FA00 -> 0x8018FA4C
class EntityStub * World::_OGPushable_ObjectSchema::CreateStub(class _OGPushable_ObjectSchema * this /* r31 */) {
}
// signature: World::_OGPushable_ObjectSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8018FA50 -> 0x8018FA68
void World::_OGPushable_ObjectSchema::DestroyStub() {
}
// signature: World::_OGPushable_ObjectSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8018FA70 -> 0x8018FAD8
class Entity * World::_OGPushable_ObjectSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World24_OGPushable_ObjectEntity;
}
// signature: @unnamed@WAD03_cpp@::MoveWrapper(xEnt *, xScene *, float, xEntFrame *)
// Range: 0x8018FB20 -> 0x8018FB24
static void @unnamed@WAD03_cpp@::MoveWrapper() {
}
// signature: @unnamed@WAD03_cpp@::EventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8018FB30 -> 0x8018FC10
static void @unnamed@WAD03_cpp@::EventWrapper(class xBase * from /* r6 */, class xBase * to /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8018FC10 -> 0x8018FC1C
float zPushableObject::GetGridCellSize() {
}
// signature: zPushableObject::CheckPos(const xVec3 &)
// Range: 0x8018FC20 -> 0x8018FC28
bool zPushableObject::CheckPos() {
}
// Range: 0x8018FC30 -> 0x8018FE14
void * zPushableObject::zPushableObject(class zPushableObject * this /* r30 */, class Pushable_Object * theAsset /* r31 */) {
    // Local variables
    class xBound * pbound; // r0

    // References
    // -> class xVec3 m_Null;
    // -> static class xEntAsset fakeAsset;
    // -> static bool needInit;
    // -> struct {} __vt__15zPushableObject;
}
// signature: zPushableObject::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x8018FE20 -> 0x8018FE30
void zPushableObject::Init() {
}
// signature: zPushableObject::RoundToGrid(float)
// Range: 0x8018FE30 -> 0x8018FEA0
float zPushableObject::RoundToGrid() {
    // Local variables
    float grid; // f0
}
// signature: zPushableObject::Move(xScene *, float, xEntFrame *)
// Range: 0x8018FEA0 -> 0x80190038
void zPushableObject::Move() {
    // Local variables
    float newSpeed; // f4

    {
        // Range: 0x8018FF10 -> 0x8018FFAC
        // Local variables
        float gridPos; // f0
    }
    {
        // Range: 0x8018FFAC -> 0x80190024
        // Local variables
        float gridPos; // f0
    }
}
// signature: zPushableObject::EntityHit(xEnt *)
// Range: 0x80190040 -> 0x801901C0
void zPushableObject::EntityHit() {
    // Local variables
    class xVec3 diff; // r1+0x2C
    float atDot; // f0
    float rightDot; // f0
    class xVec3 destPos; // r1+0x20
}
