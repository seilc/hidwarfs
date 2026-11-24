/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xUIDMgr.cpp
*/
class _OGUIDReferenceSchema _OGUIDReferenceschema; // size: 0x18, address: 0x807656A8
class SchemaRegistrator _OGUIDReferenceschemaReg; // size: 0x8, address: 0x807656C0
class _OGUIDModelReferenceSchema _OGUIDModelReferenceschema; // size: 0x18, address: 0x807656C8
class SchemaRegistrator _OGUIDModelReferenceschemaReg; // size: 0x8, address: 0x807656E0
static unsigned long long nextUID; // size: 0x8, address: 0x807656E8
// Range: 0x80069100 -> 0x80069110
void World::_OGUIDReferenceEntity::Deactivate() {
}
// Range: 0x80069110 -> 0x80069160
void World::_OGUIDReferenceEntity::Destroy(class _OGUIDReferenceEntity * this /* r31 */) {
}
// signature: World::_OGUIDReferenceSchema::Fix(World::Asset *, long, int)
// Range: 0x800691C0 -> 0x800691C8
void World::_OGUIDReferenceSchema::Fix() {
}
// signature: World::_OGUIDReferenceSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800691D0 -> 0x8006921C
class EntityStub * World::_OGUIDReferenceSchema::CreateStub(class _OGUIDReferenceSchema * this /* r31 */) {
}
// signature: World::_OGUIDReferenceSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80069220 -> 0x80069238
void World::_OGUIDReferenceSchema::DestroyStub() {
}
// signature: World::_OGUIDReferenceSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80069240 -> 0x800692A4
class Entity * World::_OGUIDReferenceSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World21_OGUIDReferenceEntity;
}
// Range: 0x800692F0 -> 0x80069300
void World::_OGUIDModelReferenceEntity::Deactivate() {
}
// Range: 0x80069300 -> 0x80069350
void World::_OGUIDModelReferenceEntity::Destroy(class _OGUIDModelReferenceEntity * this /* r31 */) {
}
// signature: World::_OGUIDModelReferenceSchema::Fix(World::Asset *, long, int)
// Range: 0x800693B0 -> 0x800693B8
void World::_OGUIDModelReferenceSchema::Fix() {
}
// signature: World::_OGUIDModelReferenceSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800693C0 -> 0x8006940C
class EntityStub * World::_OGUIDModelReferenceSchema::CreateStub(class _OGUIDModelReferenceSchema * this /* r31 */) {
}
// signature: World::_OGUIDModelReferenceSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80069410 -> 0x80069428
void World::_OGUIDModelReferenceSchema::DestroyStub() {
}
// signature: World::_OGUIDModelReferenceSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80069430 -> 0x80069494
class Entity * World::_OGUIDModelReferenceSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World26_OGUIDModelReferenceEntity;
}
// Range: 0x800694E0 -> 0x800694FC
void xUIDMgrSceneInit() {
    // References
    // -> static unsigned long long nextUID;
}
// Range: 0x80069500 -> 0x8006958C
unsigned long long xUIDMgrFindUID(unsigned int nameHash /* r29 */) {
    // Local variables
    int count; // r0

    {
        // Range: 0x80069528 -> 0x8006955C
        // Local variables
        int i; // r30

        {
            // Range: 0x80069528 -> 0x8006955C
            // Local variables
            class xUIDMgrAsset * UIDRef; // r0
        }
    }
}
// Range: 0x80069590 -> 0x80069610
class ModelInstanceAsset * xUIDMgrFindModelInstanceAsset(unsigned int nameHash /* r29 */) {
    // Local variables
    int count; // r0

    {
        // Range: 0x800695B8 -> 0x800695E4
        // Local variables
        int i; // r30

        {
            // Range: 0x800695B8 -> 0x800695E4
            // Local variables
            class UIDModelReference * UIDModelRef; // r0
        }
    }
}
// Range: 0x80069610 -> 0x80069704
void * xUIDMgrFindAsset(unsigned int nameHash /* r28 */, unsigned int * size /* r29 */) {
}
// Range: 0x80069710 -> 0x8006973C
unsigned long long xUIDMgrGetUnusedUID() {
    // Local variables
    unsigned long long myID; // r0:r0

    // References
    // -> static unsigned long long nextUID;
}
