/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\VertexDeclEntity.cpp
*/
class VertexDeclSchema schema; // size: 0x18, address: 0x807FEB78
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEB90
class Schema * vertexDeclSchema; // size: 0x4, address: 0x80707CE4
// signature: World::VertexDeclSchema::Fix(World::Asset *, long, int)
// Range: 0x802497BC -> 0x802497C0
void World::VertexDeclSchema::Fix() {
}
// signature: World::VertexDeclSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x802497C0 -> 0x8024980C
class EntityStub * World::VertexDeclSchema::CreateStub(class VertexDeclSchema * this /* r31 */) {
}
// signature: World::VertexDeclSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8024980C -> 0x80249824
void World::VertexDeclSchema::DestroyStub() {
}
// signature: World::VertexDeclSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80249824 -> 0x80249914
class Entity * World::VertexDeclSchema::ActivateEntity(class EntityHandleBase * handle /* r28 */, class Asset * baseAsset /* r29 */) {
    // References
    // -> struct {} __vt__Q28Graphics10VertexDecl;
    // -> struct {} __vt__Q25World16VertexDeclEntity;
}
// Range: 0x80249954 -> 0x802499C4
void World::VertexDeclEntity::Deactivate(class VertexDeclEntity * this /* r31 */) {
}
// Range: 0x802499C4 -> 0x80249A14
void World::VertexDeclEntity::Destroy(class VertexDeclEntity * this /* r31 */) {
}
