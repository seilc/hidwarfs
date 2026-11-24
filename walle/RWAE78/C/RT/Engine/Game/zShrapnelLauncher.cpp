/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zShrapnelLauncher.cpp
*/
class _OGShrapnelLauncherSchema _OGShrapnelLauncherschema; // size: 0x18, address: 0x807B26B0
class SchemaRegistrator _OGShrapnelLauncherschemaReg; // size: 0x8, address: 0x807B26C8
class zShrapnelLauncherNode * LauncherArray; // size: 0x4, address: 0x807B26D0
static int NumOfLaunchers; // size: 0x4, address: 0x807B26D4
// Range: 0x801BE020 -> 0x801BE030
void World::_OGShrapnelLauncherEntity::Deactivate() {
}
// Range: 0x801BE030 -> 0x801BE080
void World::_OGShrapnelLauncherEntity::Destroy(class _OGShrapnelLauncherEntity * this /* r31 */) {
}
// signature: World::_OGShrapnelLauncherSchema::Fix(World::Asset *, long, int)
// Range: 0x801BE0E0 -> 0x801BE0E8
void World::_OGShrapnelLauncherSchema::Fix() {
}
// signature: World::_OGShrapnelLauncherSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801BE0F0 -> 0x801BE13C
class EntityStub * World::_OGShrapnelLauncherSchema::CreateStub(class _OGShrapnelLauncherSchema * this /* r31 */) {
}
// signature: World::_OGShrapnelLauncherSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801BE140 -> 0x801BE158
void World::_OGShrapnelLauncherSchema::DestroyStub() {
}
// signature: World::_OGShrapnelLauncherSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801BE160 -> 0x801BE1C4
class Entity * World::_OGShrapnelLauncherSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World25_OGShrapnelLauncherEntity;
}
// signature: zEventLaunchShrapnel(Sext::uid, xModelInstance *)
// Range: 0x801BE210 -> 0x801BE25C
void zEventLaunchShrapnel() {
    // Local variables
    unsigned long long shrapnelID; // r6:r7

    {
        // Range: 0x801BE238 -> 0x801BE258
        // Local variables
        int i; // r0
    }

    // References
    // -> class zShrapnelLauncherNode * LauncherArray;
    // -> static int NumOfLaunchers;
}
