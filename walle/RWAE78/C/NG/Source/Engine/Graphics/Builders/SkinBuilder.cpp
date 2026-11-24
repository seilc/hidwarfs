/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Builders\SkinBuilder.cpp
*/
static int s_dynConfigSizeTable[4]; // size: 0x10, address: 0x806D6040
// signature: Graphics::SkinBuilder::Create(const Graphics::Effect *, const Graphics::Material *, Graphics::Effect::ParamData *, Graphics::Shader::GeometryContext **, Graphics::PrimitiveType, int, int, const World::GeometryAsset::BoundAABB &, const Math::Vector4 &, const Graphics::Space::RenderAttrib &, float, float, Graphics::Effect::ParamData *, Graphics::FixedVertexBuffer *, int *, int, const World::GeometryAsset::IndexLOD *, int *, int, int, const void *, signed char, const unsigned char *, const Graphics::SkinSection *, int, const Math::Vector4 *, const unsigned char *, unsigned char)
// Range: 0x80276CC8 -> 0x80276F24
void Graphics::SkinBuilder::Create(class BoundAABB * bbound /* r17 */, class Vector4 * boundSphere /* r18 */, class RenderAttrib * viewAttrib /* r19 */, class ParamData * rendParamData /* r20 */, class FixedVertexBuffer * staticVertexBuffers /* r0 */, int * staticVertexBufferSizes /* r16 */, int staticVertexBufferCount /* r12 */, class IndexLOD * indexLods /* r1+0x94 */, int * indexBufferSizes /* r21 */, int indexLodCount /* r22 */, int jointCount /* r23 */, void * posInput /* r24 */, signed char dynConfig /* r25 */, unsigned char * bufferMap /* r26 */, class SkinSection * sections /* r27 */, int sectionCount /* r28 */, class Vector4 * animBoundSphereData /* r29 */, unsigned char * animBoundBoneIndexData /* r30 */, unsigned char animBoundDataCount /* r31 */) {
    {
        // Range: 0x80276D24 -> 0x80276E48
        // Local variables
        int i; // r0
    }
}
// Range: 0x80276F24 -> 0x80276F28
void Graphics::SkinBuilder::Destroy() {
}
// Range: 0x80276F28 -> 0x80276F2C
void Graphics::SkinBuilder::RenderAttach() {
}
// Range: 0x80276F2C -> 0x80277080
void Graphics::SkinBuilder::RenderDetach(class SkinBuilder * this /* r31 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem2OverflowUsed;
}
// Range: 0x80277080 -> 0x8027726C
void Graphics::SkinBuilder::SetStaticBuffers(class SkinBuilder * this /* r29 */, unsigned short * * indexLists /* r30 */, void * * staticVertexLists /* r31 */) {
    {
        // Range: 0x802771CC -> 0x802771D4
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x80277218 -> 0x80277220
        // Local variables
        int i; // r7
    }

    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem2OverflowUsed;
}
// signature: Graphics::SkinBuilder::Build(Graphics::Geometry *) const
// Range: 0x8027726C -> 0x802773E4
void Graphics::SkinBuilder::Build(class SkinBuilder * this /* r8 */) const {
    // Local variables
    class SkinGeometry * geom; // r0
    class Matrix43 * skinMat; // r5

    // References
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> static int s_dynConfigSizeTable[4];
}
// signature: Graphics::SkinBuilder::HackCompleteBuild(Graphics::Geometry *) const
// Range: 0x802773E4 -> 0x8027744C
void Graphics::SkinBuilder::HackCompleteBuild() const {
    // Local variables
    class SkinGeometry * geom; // r0

    // References
    // -> static int s_dynConfigSizeTable[4];
}
// signature: Graphics::SkinBuilder::Unbuild(Graphics::Geometry *) const
// Range: 0x8027744C -> 0x80277450
void Graphics::SkinBuilder::Unbuild() const {
}
// signature: Graphics::SkinBuilder::GetCreateGeometrySize(int &) const
// Range: 0x80277450 -> 0x80277468
int Graphics::SkinBuilder::GetCreateGeometrySize() const {
}
// signature: Graphics::SkinBuilder::CreateGeometry(void *, int) const
// Range: 0x80277468 -> 0x802774A8
class Geometry * Graphics::SkinBuilder::CreateGeometry() const {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// signature: Graphics::SkinBuilder::CreateGeometry(Memory::StackAllocator &) const
// Range: 0x802774A8 -> 0x802776C0
class Geometry * Graphics::SkinBuilder::CreateGeometry() const {
    {
        // Range: 0x802775D0 -> 0x80277670
        // Local variables
        int i; // r7
    }

    // References
    // -> struct {} __vt__Q28Graphics12SkinGeometry;
}
// signature: Graphics::SkinBuilder::AttachGeometry(Graphics::Geometry *) const
// Range: 0x802776C0 -> 0x802776E0
void Graphics::SkinBuilder::AttachGeometry() const {
}
// signature: Graphics::SkinBuilder::AttachTemporaryGeometry(Graphics::Geometry *, void (*)(Graphics::Node *)) const
// Range: 0x802776E0 -> 0x80277734
void Graphics::SkinBuilder::AttachTemporaryGeometry() const {
}
// signature: Graphics::SkinBuilder::DetachGeometry(Graphics::Geometry *) const
// Range: 0x80277734 -> 0x80277754
void Graphics::SkinBuilder::DetachGeometry() const {
}
// signature: Graphics::SkinBuilder::DestroyGeometry(Graphics::Geometry *) const
// Range: 0x80277754 -> 0x8027776C
void Graphics::SkinBuilder::DestroyGeometry() const {
}
// signature: Graphics::SkinBuilder::GetCreateRenderableSize(int &) const
// Range: 0x802777AC -> 0x802777DC
int Graphics::SkinBuilder::GetCreateRenderableSize() const {
}
// signature: Graphics::SkinBuilder::CreateRenderable(void *, int, Graphics::Geometry *, const Graphics::Effect::ParamData *) const
// Range: 0x802777DC -> 0x80277828
class Renderable * Graphics::SkinBuilder::CreateRenderable(int bufferSize /* r0 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// signature: Graphics::SkinBuilder::CreateRenderable(Memory::StackAllocator &, Graphics::Geometry *, const Graphics::Effect::ParamData *) const
// Range: 0x80277828 -> 0x80277930
class Renderable * Graphics::SkinBuilder::CreateRenderable(class SkinBuilder * this /* r28 */, class Geometry * geom /* r29 */) const {
    // References
    // -> struct {} __vt__Q28Graphics12Renderable3D;
}
// signature: Graphics::SkinBuilder::DestroyRenderable(Graphics::Renderable *) const
// Range: 0x80277930 -> 0x80277948
void Graphics::SkinBuilder::DestroyRenderable() const {
}
// signature: Graphics::SkinGeometry::ComputeBounds(Math::Vector4 &, Graphics::BroadBound &, const Math::Matrix43 &, Math::Vector4 *, int)
// Range: 0x80277948 -> 0x80278410
void Graphics::SkinGeometry::ComputeBounds(class SkinGeometry * this /* r22 */, class Vector4 * worldSphere /* r23 */, class BroadBound * worldBound /* r24 */, class Matrix43 * worldMatrix /* r25 */, class Vector4 * workArea /* r26 */) {
    // Local variables
    class Vector objUpper; // r1+0x118
    class Vector objLower; // r1+0x108
    class Vector worldUpper; // r1+0xF8
    class Vector worldLower; // r1+0xE8
    class SkinBuilder * skinBuilder; // r0
    class Vector4 * animBoundSphereData; // r30
    int animBoundDataCount; // r29
    unsigned char * animBoundBoneIndexData; // r28
    class Vector4 * workWorld; // r27
    class Vector worldScale; // r1+0xD8
    float maxWorldScale; // f0
    class Vector objCenter; // r1+0xB8
    class Vector worldCenter; // r1+0xA8
    float objRad; // f19
    float worldRad; // f18

    {
        // Range: 0x80277A98 -> 0x80277D5C
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x80277D6C -> 0x8027808C
        // Local variables
        int i; // r17

        {
            // Range: 0x80277D6C -> 0x8027808C
            // Local variables
            float scaledRadius; // f16
            float maxScale; // f0
            class Vector scale; // r1+0xC8
            unsigned char boneIndex; // r4
        }
    }
    {
        // Range: 0x802780A0 -> 0x802782A4
        // Local variables
        int i; // r17

        {
            // Range: 0x802780A0 -> 0x802782A4
            // Local variables
            float tmpWorldRad; // f0
            float tmpObjRad; // f17
        }
    }
}
// Range: 0x80278410 -> 0x802784AC
void Graphics::SkinGeometry::RenderAttach() {
    // Local variables
    class SkinBuilder * builder; // r0

    {
        // Range: 0x80278424 -> 0x80278430
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x8027845C -> 0x80278490
        // Local variables
        int i; // r9
    }
}
// Range: 0x802784AC -> 0x802784B0
void Graphics::SkinGeometry::RenderDetach() {
}
// signature: Graphics::SkinBuilder::AsyncBuild(Graphics::Renderable *, Graphics::Geometry *) const
// Range: 0x802784B0 -> 0x802784B4
void Graphics::SkinBuilder::AsyncBuild() const {
}
