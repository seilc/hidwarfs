/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Builders\SkinBuilder.cpp
*/
static int s_dynConfigSizeTable[4]; // size: 0x10, address: 0x80787D48
// signature: Graphics::SkinBuilder::Create(const Graphics::Effect *, const Graphics::Material *, Graphics::Effect::ParamData *, Graphics::Shader::GeometryContext **, Graphics::PrimitiveType, int, int, const World::GeometryAsset::BoundAABB &, const Math::Vector4 &, const Graphics::Space::RenderAttrib &, float, float, Graphics::Effect::ParamData *, Graphics::FixedVertexBuffer *, int *, int, const World::GeometryAsset::IndexLOD *, int *, int, int, const void *, int, signed char, const unsigned char *, const Graphics::SkinSection *, int, const World::SkinGeometryAsset::MorphData *, unsigned int, const Math::Vector4 *, const unsigned char *, unsigned char, unsigned int, unsigned short, const World::SkinGeometryAsset::WiiSkinPalette *)
// Range: 0x80308610 -> 0x803088AC
void Graphics::SkinBuilder::Create(class BoundAABB & bbound /* r16 */, class Vector4 & boundSphere /* r17 */, class RenderAttrib & viewAttrib /* r1+0x80 */, class ParamData * rendParamData /* r18 */, class FixedVertexBuffer * staticVertexBuffers /* r0 */, int * staticVertexBufferSizes /* r14 */, int staticVertexBufferCount /* r12 */, class IndexLOD * indexLods /* r1+0x94 */, int * indexBufferSizes /* r19 */, int indexLodCount /* r20 */, int jointCount /* r21 */, void * posInput /* r22 */, int posInputSize /* r23 */, signed char dynConfig /* r24 */, unsigned char * bufferMap /* r25 */, class SkinSection * sections /* r26 */, int sectionCount /* r27 */, class MorphData * morphData /* r28 */, unsigned int morphCount /* r29 */, class Vector4 * animBoundSphereData /* r30 */, unsigned char * animBoundBoneIndexData /* r31 */, unsigned char animBoundDataCount /* r14 */, unsigned int geomFlags /* r1+0xD0 */, unsigned short wiiPaletteCount /* r1+0xD6 */, class WiiSkinPalette * wiiPaletteList /* r1+0xD8 */) {
    {
        // Range: 0x80308674 -> 0x803087A8
        // Local variables
        int i; // r0
    }
}
// Range: 0x803088AC -> 0x803088B0
void Graphics::SkinBuilder::RenderAttach() {
}
// Range: 0x803088B0 -> 0x803089D4
void Graphics::SkinBuilder::RenderDetach(class SkinBuilder * this /* r31 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
}
// Range: 0x803089D4 -> 0x80308B90
void Graphics::SkinBuilder::SetStaticBuffers(class SkinBuilder * this /* r29 */, unsigned short * * indexLists /* r30 */, void * * staticVertexLists /* r31 */) {
    {
        // Range: 0x80308AF0 -> 0x80308AF8
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x80308B3C -> 0x80308B44
        // Local variables
        int i; // r7
    }

    // References
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
}
// signature: Graphics::ApplyMorphRun(unsigned char *, int, void *&, int, float, float)
// Range: 0x80308B90 -> 0x80308C70
void Graphics::ApplyMorphRun(float weight /* r1+0x8 */) {
    // Local variables
    class WII_PN * mv; // r8
    float * wPtr; // r9
    float xx; // f0
    float yy; // f1
    float zz; // f2
    float dX; // f3
    float dY; // f4
    float dZ; // f5
    float w; // f6
    int stride; // r0
    short * srcPtr; // r3
    int dStride; // r0
    short * dPtr; // r4
    signed char * dNPtr; // r7
    float nxx; // f7
    float nyy; // f8
    float nzz; // f9
    float dNX; // f10
    float dNY; // f11
    float dNZ; // f12

    {
        // Range: 0x80308BE0 -> 0x80308C5C
        // Local variables
        int j; // r0
    }
}
// signature: Graphics::SkinBuilder::Build(Graphics::Geometry *, Graphics::PreallocImmediateGeomMem *) const
// Range: 0x80308C70 -> 0x80308F94
void Graphics::SkinBuilder::Build(class SkinBuilder * this /* r28 */, class Geometry * baseGeom /* r29 */) const {
    // Local variables
    class SkinGeometry * geom; // r0
    void * input; // reg65535
    class Matrix43 * skinMat; // r5

    {
        // Range: 0x80308D58 -> 0x80308E50
        // Local variables
        void * morphedInput; // r30

        {
            // Range: 0x80308D94 -> 0x80308E40
            // Local variables
            int k; // r23

            {
                // Range: 0x80308D94 -> 0x80308E40
                // Local variables
                unsigned char * out; // r0
                void * morphData; // r0
                class MorphRun * morphRuns; // r22
                class MorphData & morph; // r3
                float weight; // f28
            }
        }
    }

    // References
    // -> static int s_dynConfigSizeTable[4];
    // -> class BuildBuffer g_renderBuildBuffer;
}
// signature: Graphics::SkinBuilder::HackCompleteBuild(Graphics::Geometry *) const
// Range: 0x80308F94 -> 0x80308FFC
void Graphics::SkinBuilder::HackCompleteBuild() const {
    // Local variables
    class SkinGeometry * geom; // r0

    // References
    // -> static int s_dynConfigSizeTable[4];
}
// signature: Graphics::SkinBuilder::Unbuild(Graphics::Geometry *) const
// Range: 0x80308FFC -> 0x80309000
void Graphics::SkinBuilder::Unbuild() const {
}
// signature: Graphics::SkinBuilder::GetCreateGeometrySize(int &) const
// Range: 0x80309000 -> 0x80309018
int Graphics::SkinBuilder::GetCreateGeometrySize() const {
}
// signature: Graphics::SkinBuilder::CreateGeometry(Memory::StackAllocator &) const
// Range: 0x8030901C -> 0x80309254
class Geometry * Graphics::SkinBuilder::CreateGeometry() const {
    {
        // Range: 0x8030914C -> 0x80309204
        // Local variables
        int i; // r8
    }

    // References
    // -> struct {} __vt__Q28Graphics12SkinGeometry;
}
// signature: Graphics::SkinBuilder::CreateRenderable(Memory::StackAllocator &, Graphics::Geometry *, const Graphics::Effect::ParamData *) const
// Range: 0x80309270 -> 0x80309378
class Renderable * Graphics::SkinBuilder::CreateRenderable(class SkinBuilder * this /* r28 */, class Geometry * geom /* r29 */) const {
    // References
    // -> struct {} __vt__Q28Graphics12Renderable3D;
}
// signature: Graphics::WiiFastBoundMaxScale(const Math::Matrix33 &)
// Range: 0x8030937C -> 0x803093F4
float Graphics::WiiFastBoundMaxScale() {
    // Local variables
    float col0xy; // f0
    float col1xy; // f1
    float col2xy; // f1
    float col0z; // f2
    float col1z; // f3
    float col2z; // f4
    float epsilon; // f3
    void * matPtr; // r0
    float c_half; // f4
    float c_three; // f5
    float rsqrt; // f1
    float nwork0; // f2
    float nwork1; // f1
}
// signature: Graphics::WiiFastBoundBox(Math::Vector &, Math::Vector &, Math::Vector4 *, const Math::Matrix43 *, const Math::Matrix43 &, float, const Math::Vector4 *, const unsigned char *, int)
// Range: 0x803093F4 -> 0x803095F8
void Graphics::WiiFastBoundBox() {
    // Local variables
    float world0xy; // f0
    float world1xy; // f2
    float world2xy; // f3
    float world0zw; // f4
    float world1zw; // f5
    float world2zw; // f6
    float c_half; // f7
    float c_three; // f8
    float maxScaleReg; // f0
    float upperXY; // f9
    float upperZ; // f10
    float lowerXY; // f11
    float lowerZ; // f12
    class Vector4 * curBoneSph; // r8
    class Vector4 * curWorkSph; // r5

    {
        // Range: 0x80309484 -> 0x80309488
        // Local variables
        int i; // r0

        {
            // Range: 0x80309484 -> 0x80309488
            // Local variables
            float col2zw; // f23
            float col1zw; // f24
            float col0zw; // f25
            float col2xy; // f26
            float col1xy; // f27
            float col0xy; // f28
            float rsqrt; // f29
            float radius; // f30
            float posZW; // f31
            float posXY; // f13
            class Matrix43 * curSkinMat; // r7
        }
    }
}
// signature: Graphics::WiiFastBoundRadius(Math::Vector &, Math::Vector4 *, int)
// Range: 0x803095F8 -> 0x80309728
float Graphics::WiiFastBoundRadius() {
    // Local variables
    float centerXY; // f0
    float centerZ; // f2
    class Vector4 * curWorkSph; // r4
    float sphXY; // f3
    float sphZR; // f4
    float sphDZ; // f5
    float nwork0; // f6
    float nwork1; // f5
    float maxRadius; // f1
    float c_half; // f7
    float c_three; // f8
    float epsilon; // f9

    {
        // Range: 0x8030962C -> 0x80309680
        // Local variables
        int i; // r0
    }
}
// signature: Graphics::SkinGeometry::ComputeBounds(Math::Vector4 &, Graphics::BroadBound &, const Math::Matrix43 &, Math::Vector4 *, int)
// Range: 0x80309728 -> 0x80309A60
void Graphics::SkinGeometry::ComputeBounds(class SkinGeometry * this /* r26 */, class Vector4 & worldSphere /* r23 */, class BroadBound & worldBound /* r31 */, class Matrix43 & worldMatrix /* r24 */, class Vector4 * workArea /* r25 */) {
    // Local variables
    class Vector worldUpper; // r1+0x48
    class Vector worldLower; // r1+0x38
    class SkinBuilder * skinBuilder; // r0
    int animBoundDataCount; // r27
    float maxWorldScale; // f0
    class Vector worldCenter; // r1+0x28
    float worldRad; // f0

    {
        // Range: 0x803097FC -> 0x8030981C
        // Local variables
        int i; // r26
    }
}
// Range: 0x80309A60 -> 0x80309AFC
void Graphics::SkinGeometry::RenderAttach() {
    // Local variables
    class SkinBuilder * builder; // r0

    {
        // Range: 0x80309A74 -> 0x80309A80
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x80309AAC -> 0x80309AE0
        // Local variables
        int i; // r9
    }
}
// Range: 0x80309AFC -> 0x80309B00
void Graphics::SkinGeometry::RenderDetach() {
}
// signature: Graphics::SkinBuilder::AsyncBuild(Graphics::Renderable *, Graphics::Geometry *) const
// Range: 0x80309B00 -> 0x80309B04
void Graphics::SkinBuilder::AsyncBuild() const {
}
// signature: Graphics::WiiSkinCalcVBone(Math::Matrix43 *, const World::SkeletonBlobAsset::WiiSkinVBone *, int, int)
// Range: 0x80309B04 -> 0x80309BD0
static void Graphics::WiiSkinCalcVBone() {
    // Local variables
    class WiiSkinVBone * vbonePtr; // r4
    class Matrix43 * outPtr; // r7

    {
        // Range: 0x80309B28 -> 0x80309B50
        // Local variables
        int i; // r0

        {
            // Range: 0x80309B28 -> 0x80309B50
            // Local variables
            class Matrix43 * matBPtr; // r8
            class Matrix43 * matAPtr; // r5
            float matB2; // f6
            float matB1; // f5
            float matB0; // f4
            float matA2; // f3
            float matA1; // f2
            float matA0; // f1
            float lerp; // f0
        }
    }
}
// signature: Graphics::WiiMTXConcatArray33(Math::Matrix33 *, const Math::Matrix33 *, const Math::Matrix33 &, int)
// Range: 0x80309BD0 -> 0x80309DD0
void Graphics::WiiMTXConcatArray33() {
    // Local variables
    float b0; // f0
    float b1; // f1
    float b2; // f2
    float b4; // f3
    float b5; // f4
    float b6; // f5
    float b8; // f6
    float b9; // f7
    float bA; // f8
    float zero; // f9
    class Matrix33 * outreg; // r3
    class Matrix33 * areg; // r4
    float a0; // f9
    float a1; // f10
    float a2; // f11
    float t0; // f12
    float t1; // f13
    float t2; // f31
}
// Range: 0x80309DD0 -> 0x8030A554
void Graphics::SkinGeometry::WiiSkinRenderGPU(class SkinGeometry * this /* r25 */, class Renderable3D * rend /* r26 */, class Viewport * viewp /* r20 */, class StateOpTable & shaderOps /* r19 */) {
    // Local variables
    class ThreadStackMarkSentry sentry; // r1+0x8
    class Matrix43 * outMatList; // r31
    class Matrix43 objectMat; // r1+0x160
    class Matrix43 invCameraMat; // r1+0x130
    class Matrix43 * texMatList; // r30
    class Matrix43 * nrmMatList; // r29
    class Wii_ShaderStateOp * wsop; // r28
    class IndexBuffer & idxBuf; // r0
    unsigned char * displayList; // r27

    {
        // Range: 0x80309E74 -> 0x80309F40
        // Local variables
        class Bucket * bucket; // r0

        {
            // Range: 0x80309EFC -> 0x80309F40
            // Local variables
            int maxJoint; // r22

            {
                // Range: 0x80309F18 -> 0x80309F34
                // Local variables
                int i; // r24
            }
        }
    }
    {
        // Range: 0x80309F44 -> 0x8030A1AC
        // Local variables
        class Matrix43 projectMat; // r1+0x100
        class Bucket * bucket; // r0

        {
            // Range: 0x80309F84 -> 0x8030A134
            // Local variables
            class Vector & recipScale; // r22

            {
                // Range: 0x8030A068 -> 0x8030A134
                // Local variables
                class Matrix43 itObjectMat; // r1+0xD0
            }
        }
        {
            // Range: 0x8030A134 -> 0x8030A1AC
            // Local variables
            int maxJoint; // r22
            class Matrix43 itObjectMat; // r1+0xA0

            {
                // Range: 0x8030A164 -> 0x8030A1A0
                // Local variables
                int i; // r26
            }
        }
    }
    {
        // Range: 0x8030A1C0 -> 0x8030A340
        // Local variables
        class Vector & recipScale; // r22

        {
            // Range: 0x8030A294 -> 0x8030A340
            // Local variables
            class Matrix43 itObjectMat; // r1+0x70
        }
    }
    {
        // Range: 0x8030A340 -> 0x8030A410
        // Local variables
        class Matrix43 normalMat; // r1+0x10
        int maxJoint; // r22
        class Matrix43 itObjectMat; // r1+0x40

        {
            // Range: 0x8030A3C8 -> 0x8030A404
            // Local variables
            int i; // r26
        }
    }
    {
        // Range: 0x8030A42C -> 0x8030A4FC
        // Local variables
        int pal; // r26

        {
            // Range: 0x8030A42C -> 0x8030A4FC
            // Local variables
            unsigned int dispSize; // r19
            class WiiSkinMatrix * matList; // r3
            int matCount; // r21

            {
                // Range: 0x8030A45C -> 0x8030A47C
                // Local variables
                int i; // r22
            }
            {
                // Range: 0x8030A490 -> 0x8030A4D0
                // Local variables
                int i; // r20

                {
                    // Range: 0x8030A490 -> 0x8030A4D0
                    // Local variables
                    int offset; // r19
                    int index; // r0
                }
            }
        }
    }
}
