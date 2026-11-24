/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zJSPExtraData.cpp
*/
class _OGJSP_Extra_DataSchema _OGJSP_Extra_Dataschema; // size: 0x18, address: 0x8076E240
class SchemaRegistrator _OGJSP_Extra_DataschemaReg; // size: 0x8, address: 0x8076E258
class jspGroupPair sJspGroupPairs[10]; // size: 0xF0, address: 0x8076E260
int sNumPairs; // size: 0x4, address: 0x8076E350
// Range: 0x800E4D50 -> 0x800E4D60
void World::_OGJSP_Extra_DataEntity::Deactivate() {
}
// Range: 0x800E4D60 -> 0x800E4DB0
void World::_OGJSP_Extra_DataEntity::Destroy(class _OGJSP_Extra_DataEntity * this /* r31 */) {
}
// signature: World::_OGJSP_Extra_DataSchema::Fix(World::Asset *, long, int)
// Range: 0x800E4E10 -> 0x800E4E18
void World::_OGJSP_Extra_DataSchema::Fix() {
}
// signature: World::_OGJSP_Extra_DataSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E4E20 -> 0x800E4E6C
class EntityStub * World::_OGJSP_Extra_DataSchema::CreateStub(class _OGJSP_Extra_DataSchema * this /* r31 */) {
}
// signature: World::_OGJSP_Extra_DataSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800E4E70 -> 0x800E4E88
void World::_OGJSP_Extra_DataSchema::DestroyStub() {
}
// signature: World::_OGJSP_Extra_DataSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E4E90 -> 0x800E4EF8
class Entity * World::_OGJSP_Extra_DataSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World23_OGJSP_Extra_DataEntity;
}
// Range: 0x800E4F40 -> 0x800E4FF4
void zJSPExtraData::ShowAllAssociatedGroups(bool show /* r26 */) {
    {
        // Range: 0x800E4F58 -> 0x800E4F68
        // Local variables
        int i; // r27
    }

    // References
    // -> int sNumPairs;
    // -> class jspGroupPair sJspGroupPairs[10];
}
// Range: 0x800E5000 -> 0x800E5010
void zJSPExtraData::ClearGroupAssociations() {
    // References
    // -> int sNumPairs;
}
// signature: zJSPExtraData::Load(xBase &, xDynAsset &, unsigned long)
// Range: 0x800E5010 -> 0x800E509C
void zJSPExtraData::Load(class xBase * data /* r30 */, class xDynAsset * asset /* r31 */) {
    // References
    // -> class jspGroupPair sJspGroupPairs[10];
    // -> int sNumPairs;
}
