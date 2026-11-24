/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zTortureChamber.cpp
*/
class _OGTortureChamberSchema _OGTortureChamberschema; // size: 0x18, address: 0x807E48A0
class SchemaRegistrator _OGTortureChamberschemaReg; // size: 0x8, address: 0x807E48B8
static class zTortureChamberManager tcmgr; // size: 0x220, address: 0x807E48C8
// Range: 0x801C4CF0 -> 0x801C4D00
void World::_OGTortureChamberEntity::Deactivate() {
}
// Range: 0x801C4D00 -> 0x801C4D50
void World::_OGTortureChamberEntity::Destroy(class _OGTortureChamberEntity * this /* r31 */) {
}
// signature: World::_OGTortureChamberSchema::Fix(World::Asset *, long, int)
// Range: 0x801C4DB0 -> 0x801C4DB8
void World::_OGTortureChamberSchema::Fix() {
}
// signature: World::_OGTortureChamberSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C4DC0 -> 0x801C4E0C
class EntityStub * World::_OGTortureChamberSchema::CreateStub(class _OGTortureChamberSchema * this /* r31 */) {
}
// signature: World::_OGTortureChamberSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801C4E10 -> 0x801C4E28
void World::_OGTortureChamberSchema::DestroyStub() {
}
// signature: World::_OGTortureChamberSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C4E30 -> 0x801C4E94
class Entity * World::_OGTortureChamberSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World23_OGTortureChamberEntity;
}
// signature: @unnamed@WAD03_cpp@::TortureChamberManagerEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C4EE0 -> 0x801C4FD4
static void @unnamed@WAD03_cpp@::TortureChamberManagerEventWrapper() {
}
// Range: 0x801C4FE0 -> 0x801C5024
void zTortureChamberManager::Init() {
    // References
    // -> class zGlobals globals;
    // -> struct {} __vt__22zTortureChamberManager;
    // -> static class zTortureChamberManager tcmgr;
}
// Range: 0x801C5070 -> 0x801C5110
void zTortureChamberManager::_Init() {
    {
        // Range: 0x801C5098 -> 0x801C50D0
        // Local variables
        int i; // r29

        {
            // Range: 0x801C5098 -> 0x801C50D0
            // Local variables
            class TortureCell * newCells; // r0
        }
    }
}
// signature: zTortureChamberManager::RemoveCells(unsigned long long)
// Range: 0x801C5110 -> 0x801C51A8
void zTortureChamberManager::RemoveCells() {
    {
        // Range: 0x801C5114 -> 0x801C51A4
        // Local variables
        int i; // r0

        {
            // Range: 0x801C5114 -> 0x801C5194
            // Local variables
            int j; // r10
        }
    }
}
// signature: zTortureChamberRead(void *, unsigned long long, void *, unsigned int, unsigned int *)
// Range: 0x801C51B0 -> 0x801C5280
void * zTortureChamberRead() {
    // Local variables
    class zTortureChamberAsset * asset; // r0

    {
        // Range: 0x801C51B4 -> 0x801C5254
        // Local variables
        unsigned int i; // r4
    }

    // References
    // -> class zGlobals globals;
}
// signature: zTortureChamberUnload(void *, unsigned long long)
// Range: 0x801C5280 -> 0x801C5290
void zTortureChamberUnload() {
    // References
    // -> class zGlobals globals;
}
