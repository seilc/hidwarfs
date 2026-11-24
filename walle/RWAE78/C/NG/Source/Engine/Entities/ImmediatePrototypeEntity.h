/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\ImmediatePrototypeEntity.h
*/
// signature: World::ImmediatePrototypeEntity::GetImmediateGeometry(int)
// Range: 0x801E8770 -> 0x801E87A0
class ImmediateGeometryEntity * World::ImmediatePrototypeEntity::GetImmediateGeometry() {
}
// signature: World::ImmediateContext<Sext::DecalVertex>::ImmediateContext(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::Renderable3DTransform **, Graphics::Material *, Graphics::PrimitiveType)
// Range: 0x8002AD80 -> 0x8002AFF4
void * World::ImmediateContext<Sext::DecalVertex>::ImmediateContext(class ImmediateContext * this /* r30 */, class Material * overrideMaterial /* r12 */, enum PrimitiveType primType /* r0 */) {
    // References
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: World::ImmediateContext<Sext::ImmediateVertex>::ImmediateContext(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::Renderable3DTransform **, Graphics::Material *, Graphics::PrimitiveType)
// Range: 0x8002B950 -> 0x8002BBC4
void * World::ImmediateContext<Sext::ImmediateVertex>::ImmediateContext(class ImmediateContext * this /* r30 */, class Material * overrideMaterial /* r12 */, enum PrimitiveType primType /* r0 */) {
    // References
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: World::ImmediateContext<Sext::VertexUV>::ImmediateContext(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::Renderable3DTransform **, Graphics::Material *, Graphics::PrimitiveType)
// Range: 0x802561E4 -> 0x80256458
void * World::ImmediateContext<Sext::VertexUV>::ImmediateContext(class ImmediateContext * this /* r31 */, class Material * overrideMaterial /* r12 */, enum PrimitiveType primType /* r0 */) {
    // References
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x8002B0C0 -> 0x8002B4B4
class Renderable3D * World::ImmediateContext<Sext::DecalVertex>::Commit(class ImmediateContext * this /* r28 */) {
    // References
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x8002BC10 -> 0x8002C004
class Renderable3D * World::ImmediateContext<Sext::ImmediateVertex>::Commit(class ImmediateContext * this /* r28 */) {
    // References
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x80256458 -> 0x80256848
class Renderable3D * World::ImmediateContext<Sext::VertexUV>::Commit(class ImmediateContext * this /* r28 */) {
    // References
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x8002B880 -> 0x8002B948
void World::ImmediateContext<Sext::DecalVertex>::AddToScene(class Scene * scene /* r30 */, class Renderable3D * rend /* r31 */) {
}
// Range: 0x8002C010 -> 0x8002C0D8
void World::ImmediateContext<Sext::ImmediateVertex>::AddToScene(class Scene * scene /* r30 */, class Renderable3D * rend /* r31 */) {
}
// signature: World::ImmediateContext<ParticleGeometry::VertexType>::SetBroadBound(const Graphics::BroadBound &, const Math::Vector4 &)
// Range: 0x80164680 -> 0x801646FC
void World::ImmediateContext<ParticleGeometry::VertexType>::SetBroadBound() {
}
// Range: 0x8002BBD0 -> 0x8002BC10
void * World::ImmediateContext<Sext::ImmediateVertex>::~ImmediateContext(class ImmediateContext * this /* r31 */) {
}
// Range: 0x802B8E04 -> 0x802B8E1C
bool World::ImmediateContext<Sext::ImmediateVertex>::Valid() {
}
// Range: 0x8025AAC0 -> 0x8025AAC8
class ImmediateGeometryEntity * World::ImmediateContext<Sext::VertexUV>::GetImmediateGeometryEntity() const {
}
