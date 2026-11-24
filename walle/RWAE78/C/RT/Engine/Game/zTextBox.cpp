/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zTextBox.cpp
*/
class _OGtext_boxSchema _OGtext_boxschema; // size: 0x18, address: 0x807E3E70
class SchemaRegistrator _OGtext_boxschemaReg; // size: 0x8, address: 0x807E3E88
static class ztextbox * head_active; // size: 0x4, address: 0x807E3E90
static class tag_type new_tags[1]; // size: 0x14, address: 0x80700DFC
static unsigned long new_tags_size; // size: 0x4, address: 0x80700E10
// Range: 0x801C4580 -> 0x801C4590
void World::_OGtext_boxEntity::Deactivate() {
}
// Range: 0x801C4590 -> 0x801C45E0
void World::_OGtext_boxEntity::Destroy(class _OGtext_boxEntity * this /* r31 */) {
}
// signature: World::_OGtext_boxSchema::Fix(World::Asset *, long, int)
// Range: 0x801C4640 -> 0x801C4648
void World::_OGtext_boxSchema::Fix() {
}
// signature: World::_OGtext_boxSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C4650 -> 0x801C469C
class EntityStub * World::_OGtext_boxSchema::CreateStub(class _OGtext_boxSchema * this /* r31 */) {
}
// signature: World::_OGtext_boxSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801C46A0 -> 0x801C46B8
void World::_OGtext_boxSchema::DestroyStub() {
}
// signature: World::_OGtext_boxSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C46C0 -> 0x801C4728
class Entity * World::_OGtext_boxSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World17_OGtext_boxEntity;
}
// signature: @unnamed@WAD03_cpp@::parse_tag_blahblah(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801C4770 -> 0x801C4774
static void @unnamed@WAD03_cpp@::parse_tag_blahblah() {
}
// signature: @unnamed@WAD03_cpp@::cb_dispatch(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C4780 -> 0x801C4B74
static void @unnamed@WAD03_cpp@::cb_dispatch(class xBase * to /* r31 */) {
    // Local variables
    class ztextbox * e; // r0

    {
        // Range: 0x801C4974 -> 0x801C4A24
        // Local variables
        class EventActionVisible * params; // r0
    }
    {
        // Range: 0x801C4A80 -> 0x801C4AF0
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x801C4AF4 -> 0x801C4B44
        // Local variables
        class EventActionLegacy * params; // r0
    }

    // References
    // -> static class ztextbox * head_active;
}
// signature: ztextbox::load(xBase &, xDynAsset &, unsigned long)
// Range: 0x801C4B80 -> 0x801C4CF0
void ztextbox::load(class xBase * data /* r31 */, class xDynAsset * asset /* r30 */) {
    // References
    // -> static class ztextbox * head_active;
}
