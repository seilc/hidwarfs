/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\ImmediatePrototypeEntity.h
*/
// signature: World::ImmediatePrototypeEntity::GetImmediateGeometry(int)
// Range: 0x80026150 -> 0x80026180
class ImmediateGeometryEntity * World::ImmediatePrototypeEntity::GetImmediateGeometry() {
}
// signature: World::ImmediateContext<Sext::ImmediateVertex>::ImmediateContext(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::PreallocImmediateGeomMem *, Graphics::Renderable3DTransform **, Graphics::PrimitiveType)
// Range: 0x80026740 -> 0x80026854
void * World::ImmediateContext<Sext::ImmediateVertex>::ImmediateContext(class ImmediateContext * this /* r25 */, int vertexCount /* r26 */, int primCount /* r27 */, int indexCount /* r28 */, class PreallocImmediateGeomMem * preallocRenderMem /* r29 */, class Renderable3DTransform * * xform /* r30 */, enum PrimitiveType primType /* r31 */) {
}
// signature: World::ImmediateContext<Sext::VertexUV>::ImmediateContext(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::PreallocImmediateGeomMem *, Graphics::Renderable3DTransform **, Graphics::PrimitiveType)
// Range: 0x801C89A0 -> 0x801C8CE4
void * World::ImmediateContext<Sext::VertexUV>::ImmediateContext(class ImmediateContext * this /* r20 */, int vertexCount /* r21 */, int primCount /* r22 */, int indexCount /* r23 */, class Renderable3DTransform * * xform /* r24 */, enum PrimitiveType primType /* r25 */) {
    // References
    // -> struct {} __vt__Q25World17ImmediateGeometry;
}
// signature: World::ImmediateContext<Sext::VertexPos>::ImmediateContext(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::PreallocImmediateGeomMem *, Graphics::Renderable3DTransform **, Graphics::PrimitiveType)
// Range: 0x80214D00 -> 0x802150BC
void * World::ImmediateContext<Sext::VertexPos>::ImmediateContext(class ImmediateContext * this /* r21 */, int vertexCount /* r22 */, int primCount /* r23 */, int indexCount /* r24 */, class Renderable3DTransform * * xform /* r29 */, enum PrimitiveType primType /* r25 */) {
    // References
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: World::ImmediateContext<Sext::VertexUV>::Create(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::PreallocImmediateGeomMem *, Graphics::Renderable3DTransform **, Graphics::PrimitiveType)
// Range: 0x801E6280 -> 0x801E636C
void World::ImmediateContext<Sext::VertexUV>::Create(class ImmediateContext * this /* r25 */, int vertexCount /* r26 */, int primCount /* r27 */, int indexCount /* r28 */, class PreallocImmediateGeomMem * preallocRenderMem /* r29 */, class Renderable3DTransform * * xform /* r30 */, enum PrimitiveType primType /* r31 */) {
    // Local variables
    class PreallocImmediateGeomMem defaultMem; // r1+0x10
}
// signature: World::ImmediateContext<Sext::ImmediateVertex>::Create(World::ImmediatePrototypeEntity *, int, int, int, int, bool, Graphics::PreallocImmediateGeomMem *, Graphics::Renderable3DTransform **, Graphics::PrimitiveType)
// Range: 0x801E6370 -> 0x801E645C
void World::ImmediateContext<Sext::ImmediateVertex>::Create(class ImmediateContext * this /* r25 */, int vertexCount /* r26 */, int primCount /* r27 */, int indexCount /* r28 */, class PreallocImmediateGeomMem * preallocRenderMem /* r29 */, class Renderable3DTransform * * xform /* r30 */, enum PrimitiveType primType /* r31 */) {
    // Local variables
    class PreallocImmediateGeomMem defaultMem; // r1+0x10
}
// Range: 0x80026880 -> 0x8002697C
class Renderable3D * World::ImmediateContext<Sext::ImmediateVertex>::Commit(class ImmediateContext * this /* r31 */) {
    // Local variables
    class Renderable3D * renderable; // r3

    {
        // Range: 0x800268B4 -> 0x80026918
        // Local variables
        int istride; // r8

        {
            // Range: 0x800268C8 -> 0x80026918
            // Local variables
            int j; // r0
            int i; // r9

            {
                // Range: 0x800268DC -> 0x80026918
                // Local variables
                int k; // r0
            }
        }
    }
}
// Range: 0x801C8D90 -> 0x801C8F0C
class Renderable3D * World::ImmediateContext<Sext::VertexUV>::Commit(class ImmediateContext * this /* r31 */) {
    {
        // Range: 0x801C8DC4 -> 0x801C8E28
        // Local variables
        int istride; // r8

        {
            // Range: 0x801C8DD8 -> 0x801C8E28
            // Local variables
            int j; // r0
            int i; // r9

            {
                // Range: 0x801C8DEC -> 0x801C8E28
                // Local variables
                int k; // r0
            }
        }
    }
}
// Range: 0x802150C0 -> 0x80215398
class Renderable3D * World::ImmediateContext<Sext::VertexPos>::Commit(class ImmediateContext * this /* r31 */) {
    {
        // Range: 0x80215100 -> 0x8021526C
        // Local variables
        int istride; // r7

        {
            // Range: 0x80215118 -> 0x8021526C
            // Local variables
            int i; // r8

            {
                // Range: 0x80215128 -> 0x8021526C
                // Local variables
                int k; // r9
            }
        }
    }
}
// signature: World::ImmediateContext<Sext::ImmediateVertex>::AddToScene(Graphics::Scene *, Graphics::Renderable3D *)
// Range: 0x80026980 -> 0x800269A8
void World::ImmediateContext<Sext::ImmediateVertex>::AddToScene(class ImmediateContext * this /* r6 */) {
}
// Range: 0x80210760 -> 0x80210768
class ImmediateGeometryEntity * World::ImmediateContext<Sext::VertexUV>::GetImmediateGeometryEntity() const {
}
