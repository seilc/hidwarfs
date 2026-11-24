/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBugSpawner.cpp
*/
// signature: zBugSpawnerEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C8D10 -> 0x800C8D2C
static void zBugSpawnerEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800C8D30 -> 0x800C8D80
void zBugSpawner::Init(class zBugSpawner * this /* r30 */, class zBugSpawnerAsset * inAsset /* r31 */) {
}
// Range: 0x800C8D80 -> 0x800C8E68
void zBugSpawner::Setup(class zBugSpawner * this /* r27 */) {
    // Local variables
    int bugCount; // r29

    {
        // Range: 0x800C8DF8 -> 0x800C8E20
        // Local variables
        int bugIdx; // r28
    }
}
// signature: zBugSpawner::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C8E70 -> 0x800C90F4
void zBugSpawner::HandleEvent(class zBugSpawner * this /* r31 */) {
    {
        // Range: 0x800C8F10 -> 0x800C8F30
        // Local variables
        class EventActionBugSpawnerHit paramst; // r1+0x8
    }
}
// Range: 0x800C9100 -> 0x800C91E4
class Entity * Sext::zBugSpawnerAsset::Create(class EntityHandleBase * handle /* r29 */, class zBugSpawnerAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__11zBugSpawner;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x800C91F0 -> 0x800C9258
void zBugSpawner::Update(class zBugSpawner * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x800C92B0 -> 0x800C933C
void * zBugSpawner::~zBugSpawner(class zBugSpawner * this /* r30 */) {
    // References
    // -> struct {} __vt__11zBugSpawner;
}
