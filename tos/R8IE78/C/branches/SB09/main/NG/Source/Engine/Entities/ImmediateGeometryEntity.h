/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\ImmediateGeometryEntity.h
*/
// Range: 0x801B8450 -> 0x801B84A0
void * World::ImmediateGeometry::~ImmediateGeometry(class ImmediateGeometry * this /* r30 */) {
}
// signature: World::ImmediateGeometryEntity::GetAllocSizeRenderableImmediate(bool, int, unsigned char *, int)
// Range: 0x80026420 -> 0x80026460
int World::ImmediateGeometryEntity::GetAllocSizeRenderableImmediate() {
    // Local variables
    unsigned char * mem; // r4
}
// Range: 0x800261B0 -> 0x80026418
class ImmediateGeometry * World::ImmediateGeometryEntity::CreateFrameGeometry(class ImmediateGeometryEntity * this /* r19 */, int vertexCount /* r20 */, int primCount /* r21 */, int indexCount /* r22 */, int vertexSize /* r23 */, class Renderable3DTransform * * xform /* r24 */, enum PrimitiveType primType /* r25 */, class PreallocImmediateGeomMem & preallocRenderMem /* r26 */, class ImmediateGeometryContext & igeomCtxt /* r27 */) {
    // Local variables
    class BuilderInfo & info; // r0
    class BuilderData & data; // r0
    unsigned char * mem; // r3
    int memSize; // r28
    class StackAllocator allocator; // r1+0x20
    void * rendParamDataBuffer; // r28

    {
        // Range: 0x8002622C -> 0x80026288
        // Local variables
        int newMemUse; // r3
    }

    // References
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
}
// signature: World::ImmediateGeometryEntity::CommitFrameGeometry(World::ImmediateGeometry *, World::ImmediateGeometryContext &)
// Range: 0x800264A0 -> 0x80026570
class Renderable3D * World::ImmediateGeometryEntity::CommitFrameGeometry(class ImmediateGeometryEntity * this /* r29 */, class ImmediateGeometry * geom /* r30 */) {
}
// signature: World::ImmediateGeometryEntity::AddToScene(Graphics::Scene *, Graphics::Renderable3D *, World::ImmediateGeometryContext &)
// Range: 0x800265C0 -> 0x8002673C
void World::ImmediateGeometryEntity::AddToScene(class Scene * scene /* r30 */, class Renderable3D * rend /* r31 */) {
}
