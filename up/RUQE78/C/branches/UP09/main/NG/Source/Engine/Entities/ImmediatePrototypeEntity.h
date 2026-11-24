/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\ImmediatePrototypeEntity.h
*/
// signature: World::ImmediatePrototypeEntity::GetImmediateGeometry(int)
// Range: 0x80299D90 -> 0x80299DC0
class ImmediateGeometryEntity * World::ImmediatePrototypeEntity::GetImmediateGeometry() {
}
// signature: World::ImmediateContext<Sext::DecalVertex>::ImmediateContext(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::PreallocImmediateGeomMem *, Graphics::Renderable3DTransform **, const Graphics::Material *, Graphics::PrimitiveType)
// Range: 0x800499B0 -> 0x80049D84
void * World::ImmediateContext<Sext::DecalVertex>::ImmediateContext(class ImmediateContext * this /* r20 */, int vertexCount /* r21 */, int primCount /* r22 */, int indexCount /* r23 */, bool renderThread /* r24 */, class Renderable3DTransform * * xform /* r30 */, class Material * overrideMaterial /* r25 */, enum PrimitiveType primType /* r26 */) {
    // Local variables
    class PreallocImmediateGeomMem defaultMem; // r1+0x2C

    // References
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: World::ImmediateContext<Sext::ImmediateVertex>::ImmediateContext(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::PreallocImmediateGeomMem *, Graphics::Renderable3DTransform **, const Graphics::Material *, Graphics::PrimitiveType)
// Range: 0x8004A280 -> 0x8004A654
void * World::ImmediateContext<Sext::ImmediateVertex>::ImmediateContext(class ImmediateContext * this /* r20 */, int vertexCount /* r21 */, int primCount /* r22 */, int indexCount /* r23 */, bool renderThread /* r24 */, class Renderable3DTransform * * xform /* r30 */, class Material * overrideMaterial /* r25 */, enum PrimitiveType primType /* r26 */) {
    // Local variables
    class PreallocImmediateGeomMem defaultMem; // r1+0x2C

    // References
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: World::ImmediateContext<Sext::VertexUV>::ImmediateContext(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::PreallocImmediateGeomMem *, Graphics::Renderable3DTransform **, const Graphics::Material *, Graphics::PrimitiveType)
// Range: 0x802ED384 -> 0x802ED75C
void * World::ImmediateContext<Sext::VertexUV>::ImmediateContext(class ImmediateContext * this /* r20 */, int vertexCount /* r21 */, int primCount /* r22 */, int indexCount /* r23 */, bool renderThread /* r24 */, class Renderable3DTransform * * xform /* r30 */, class Material * overrideMaterial /* r25 */, enum PrimitiveType primType /* r26 */) {
    // Local variables
    class PreallocImmediateGeomMem defaultMem; // r1+0x2C

    // References
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: World::ImmediateContext<Sext::VertexPos>::ImmediateContext(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::PreallocImmediateGeomMem *, Graphics::Renderable3DTransform **, const Graphics::Material *, Graphics::PrimitiveType)
// Range: 0x802F6AE4 -> 0x802F6EBC
void * World::ImmediateContext<Sext::VertexPos>::ImmediateContext(class ImmediateContext * this /* r20 */, int vertexCount /* r21 */, int primCount /* r22 */, int indexCount /* r23 */, bool renderThread /* r24 */, class Renderable3DTransform * * xform /* r30 */, class Material * overrideMaterial /* r25 */, enum PrimitiveType primType /* r26 */) {
    // Local variables
    class PreallocImmediateGeomMem defaultMem; // r1+0x2C

    // References
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x80049DD0 -> 0x8004A0A4
class Renderable3D * World::ImmediateContext<Sext::DecalVertex>::Commit(class ImmediateContext * this /* r29 */) {
}
// Range: 0x802ED75C -> 0x802EDA2C
class Renderable3D * World::ImmediateContext<Sext::VertexUV>::Commit(class ImmediateContext * this /* r29 */) {
}
// Range: 0x8004A0C0 -> 0x8004A274
void World::ImmediateContext<Sext::DecalVertex>::AddToScene(class Scene * scene /* r30 */, class Renderable3D * rend /* r31 */) {
}
// Range: 0x8004A660 -> 0x8004A814
void World::ImmediateContext<Sext::ImmediateVertex>::AddToScene(class Scene * scene /* r30 */, class Renderable3D * rend /* r31 */) {
}
// signature: World::ImmediateContext<ParticleGeometry::VertexType>::SetBroadBound(const Graphics::BroadBound &, const Math::Vector4 &)
// Range: 0x80073D30 -> 0x80073DAC
void World::ImmediateContext<ParticleGeometry::VertexType>::SetBroadBound() {
}
