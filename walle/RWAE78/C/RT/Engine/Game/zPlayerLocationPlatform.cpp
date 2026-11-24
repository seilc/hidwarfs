/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlayerLocationPlatform.cpp
*/
class _OGPlayer_Location_Platform_ConnectorSchema _OGPlayer_Location_Platform_Connectorschema; // size: 0x18, address: 0x80798690
class SchemaRegistrator _OGPlayer_Location_Platform_ConnectorschemaReg; // size: 0x8, address: 0x807986A8
class zPlayerLocationPlatformConnector * head; // size: 0x4, address: 0x807986B0
// Range: 0x80179F20 -> 0x80179F30
void World::_OGPlayer_Location_Platform_ConnectorEntity::Deactivate() {
}
// Range: 0x80179F30 -> 0x80179F80
void World::_OGPlayer_Location_Platform_ConnectorEntity::Destroy(class _OGPlayer_Location_Platform_ConnectorEntity * this /* r31 */) {
}
// signature: World::_OGPlayer_Location_Platform_ConnectorSchema::Fix(World::Asset *, long, int)
// Range: 0x80179FE0 -> 0x80179FE8
void World::_OGPlayer_Location_Platform_ConnectorSchema::Fix() {
}
// signature: World::_OGPlayer_Location_Platform_ConnectorSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80179FF0 -> 0x8017A03C
class EntityStub * World::_OGPlayer_Location_Platform_ConnectorSchema::CreateStub(class _OGPlayer_Location_Platform_ConnectorSchema * this /* r31 */) {
}
// signature: World::_OGPlayer_Location_Platform_ConnectorSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8017A040 -> 0x8017A058
void World::_OGPlayer_Location_Platform_ConnectorSchema::DestroyStub() {
}
// signature: World::_OGPlayer_Location_Platform_ConnectorSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8017A060 -> 0x8017A0C8
class Entity * World::_OGPlayer_Location_Platform_ConnectorSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World43_OGPlayer_Location_Platform_ConnectorEntity;
}
// Range: 0x8017A110 -> 0x8017A230
void * zPlayerLocationPlatformConnector::zPlayerLocationPlatformConnector(class zPlayerLocationPlatformConnector * this /* r31 */, class Player_Location_Platform_Connector * theAsset /* r30 */) {
    {
        // Range: 0x8017A1F4 -> 0x8017A214
        // Local variables
        class zPlayerLocationPlatformConnector * cur; // r4
    }

    // References
    // -> class zPlayerLocationPlatformConnector * head;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> struct {} __vt__32zPlayerLocationPlatformConnector;
}
// signature: zPlayerLocationPlatformConnector::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x8017A230 -> 0x8017A240
void zPlayerLocationPlatformConnector::Init() {
}
// signature: zPlayerLocationPlatformConnector::Update(float)
// Range: 0x8017A240 -> 0x8017A5A4
void zPlayerLocationPlatformConnector::Update() {
    {
        // Range: 0x8017A330 -> 0x8017A478
        // Local variables
        class zWallePlayer * wplayer; // r0
    }

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x8017A5B0 -> 0x8017A604
void zPlayerLocationPlatformConnector::UpdateAll(float dt /* f31 */) {
    // Local variables
    class zPlayerLocationPlatformConnector * cur; // r31

    // References
    // -> class zPlayerLocationPlatformConnector * head;
}
