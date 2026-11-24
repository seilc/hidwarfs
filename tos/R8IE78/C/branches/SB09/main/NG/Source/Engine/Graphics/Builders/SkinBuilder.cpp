/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Builders\SkinBuilder.cpp
*/
static int s_dynConfigSizeTable[4]; // size: 0x10, address: 0x806932B8
int align; // size: 0x4, address: 0x806932C8
// Range: 0x801D7DB0 -> 0x801D8014
void Graphics::SkinBuilder::Create(class SkinBuilder * this /* r15 */, class Effect * effect /* r16 */, class Material * material /* r17 */, class ParamData * paramData /* r18 */, class GeometryContext * * shaderContextList /* r19 */, enum PrimitiveType primType /* r20 */, int vertexCount /* r21 */, int vertexBufferCount /* r22 */, class BoundAABB & bbound /* r23 */, class Vector4 & boundSphere /* r24 */, class RenderAttrib & viewAttrib /* r25 */, float offDist /* f30 */, float vertLodDist /* f31 */, class ParamData * rendParamData /* r26 */, class FixedVertexBuffer * staticVertexBuffers /* r12 */, int * staticVertexBufferSizes /* r11 */, int staticVertexBufferCount /* r0 */, class IndexLOD * indexLods /* r27 */, int * indexBufferSizes /* r14 */, int indexLodCount /* r28 */, int jointCount /* r1+0xB0 */, void * posInput /* r1+0xB4 */, int posInputSize /* r1+0xB8 */, signed char dynConfig /* r1+0xBF */, unsigned char * bufferMap /* r1+0xC0 */, class SkinSection * sections /* r1+0xC4 */, int sectionCount /* r1+0xC8 */, class MorphData * morphData /* r1+0xCC */, unsigned int morphCount /* r1+0xD0 */, class Vector4 * animBoundSphereData /* r1+0xD4 */, unsigned char * animBoundBoneIndexData /* r1+0xD8 */, unsigned char animBoundDataCount /* r1+0xDF */, unsigned int geomFlags /* r1+0xE0 */, unsigned short wiiPaletteCount /* r1+0xE6 */, class WiiSkinPalette * wiiPaletteList /* r1+0xE8 */, unsigned char wiiIndexStride /* r1+0xEF */, unsigned char wiiIndexSkin /* r1+0xF3 */) {
    {
        // Range: 0x801D7E18 -> 0x801D7EC4
        // Local variables
        int i; // r29
    }
}
// Range: 0x801D8040 -> 0x801D8054
void Graphics::SkinBuilder::RenderDetach() {
}
// Range: 0x801D8060 -> 0x801D8120
void Graphics::SkinBuilder::SetStaticBuffers(class SkinBuilder * this /* r26 */, unsigned short * * indexLists /* r27 */, void * * staticVertexLists /* r28 */) {
    {
        // Range: 0x801D808C -> 0x801D80CC
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x801D80CC -> 0x801D810C
        // Local variables
        int i; // r29
    }
}
// Range: 0x801D8160 -> 0x801D81E0
void Graphics::SkinBuilder::UnbindBuffers(class SkinBuilder * this /* r29 */) {
    {
        // Range: 0x801D8174 -> 0x801D81A0
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x801D81A0 -> 0x801D81CC
        // Local variables
        int i; // r30
    }
}
// signature: Graphics::SkinBuilder::CreateBuffers(Graphics::SkinGeometry *, Graphics::SkinBuilder::CPUSkinTemp &) const
// Range: 0x801D8280 -> 0x801D82EC
void Graphics::SkinBuilder::CreateBuffers(class CPUSkinTemp & skinTemp /* r31 */) const {
    // References
    // -> static int s_dynConfigSizeTable[4];
}
// signature: Graphics::ApplyMorphRun(unsigned char *, int, void *&, int, float, float)
// Range: 0x801D82F0 -> 0x801D8400
void Graphics::ApplyMorphRun(unsigned char * base /* r26 */, int format /* r27 */, void * & morphData /* r28 */, int length /* r29 */, float weight /* r1+0x8 */) {
    // Local variables
    class WII_PN * mv; // r31
    float * wPtr; // r30
    float xx; // f0
    float yy; // f1
    float zz; // f2
    float dX; // f3
    float dY; // f4
    float dZ; // f5
    float w; // f6
    int stride; // r0
    short * srcPtr; // reg65535
    int dStride; // r0
    short * dPtr; // r3
    signed char * dNPtr; // r4
    float nxx; // f7
    float nyy; // f8
    float nzz; // f9
    float dNX; // f10
    float dNY; // f11
    float dNZ; // f12

    {
        // Range: 0x801D8360 -> 0x801D83DC
        // Local variables
        int j; // r0
    }
}
// Range: 0x801D8440 -> 0x801D84CC
void Graphics::ApplyMorphRuns(class MorphRun * morphRuns /* r27 */, unsigned int runCount /* r28 */, unsigned char * baseData /* r29 */, void * morphData /* r1+0x8 */, float weight /* f30 */, float posScale /* f31 */) {
    {
        // Range: 0x801D846C -> 0x801D84B0
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x801D846C -> 0x801D84B0
            // Local variables
            class MorphRun & morphRun; // r3
        }
    }
}
// signature: Graphics::WiiMorphMemcpy(void *, const void *, unsigned int)
// Range: 0x801D84D0 -> 0x801D851C
void Graphics::WiiMorphMemcpy() {
    // Local variables
    unsigned char * dest; // r3
    unsigned char * src; // r4
    int rzero; // r6

    {
        // Range: 0x801D84E4 -> 0x801D8518
        // Local variables
        double tmpD; // f3
        double tmpC; // f2
        double tmpB; // f1
        double tmpA; // f0
        unsigned char * rsrc; // r0
        unsigned char * rdest; // r0
    }
}
// signature: Graphics::SkinBuilder::Build(Graphics::Geometry *) const
// Range: 0x801D8520 -> 0x801D8798
void Graphics::SkinBuilder::Build(class SkinBuilder * this /* r28 */) const {
    // Local variables
    class SkinGeometry * geom; // r30
    class CPUSkinTemp skinTemp; // r1+0xC
    void * input; // reg65535
    class ThreadStackMarkSentry sentry; // r1+0x8
    class Matrix43 * skinMat; // r5

    {
        // Range: 0x801D8574 -> 0x801D8634
        // Local variables
        void * morphedInput; // r29

        {
            // Range: 0x801D85B0 -> 0x801D8634
            // Local variables
            int k; // r25

            {
                // Range: 0x801D85B0 -> 0x801D8634
                // Local variables
                unsigned char * out; // r0
                void * morphData; // r6
                class MorphData & morph; // r5
                float weight; // f1
            }
        }
    }

    // References
    // -> static int s_dynConfigSizeTable[4];
}
// signature: Graphics::SkinBuilder::GetCreateGeometrySize(int &) const
// Range: 0x801D87A0 -> 0x801D87B8
int Graphics::SkinBuilder::GetCreateGeometrySize() const {
}
// signature: Graphics::SkinBuilder::CreateGeometry(void *, int) const
// Range: 0x801D87C0 -> 0x801D8808
class Geometry * Graphics::SkinBuilder::CreateGeometry(class SkinBuilder * this /* r31 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// Range: 0x801D8810 -> 0x801D89CC
class Geometry * Graphics::SkinBuilder::CreateGeometry(class SkinBuilder * this /* r30 */, class StackAllocator & allocator /* r24 */) const {
    // Local variables
    class SkinGeometry * geom; // r0
    class VertexBuffer * vertexBuffers; // r0

    {
        // Range: 0x801D891C -> 0x801D89A0
        // Local variables
        int i; // r7
    }

    // References
    // -> struct {} __vt__Q28Graphics12SkinGeometry;
}
// signature: Graphics::SkinBuilder::AttachGeometry(Graphics::Geometry *) const
// Range: 0x801D89D0 -> 0x801D89D8
void Graphics::SkinBuilder::AttachGeometry() const {
}
// signature: Graphics::SkinBuilder::AttachTemporaryGeometry(Graphics::Geometry *, void (*)(Graphics::Node *)) const
// Range: 0x801D89E0 -> 0x801D89EC
void Graphics::SkinBuilder::AttachTemporaryGeometry() const {
}
// signature: Graphics::SkinBuilder::DetachGeometry(Graphics::Geometry *) const
// Range: 0x801D89F0 -> 0x801D89F8
void Graphics::SkinBuilder::DetachGeometry() const {
}
// signature: Graphics::SkinBuilder::DestroyGeometry(Graphics::Geometry *) const
// Range: 0x801D8A00 -> 0x801D8A18
void Graphics::SkinBuilder::DestroyGeometry() const {
}
// signature: Graphics::SkinBuilder::GetCreateRenderableSize(int &) const
// Range: 0x801D8A20 -> 0x801D8A50
int Graphics::SkinBuilder::GetCreateRenderableSize() const {
}
// signature: Graphics::SkinBuilder::CreateRenderable(void *, int, Graphics::Geometry *, const Graphics::Effect::ParamData *) const
// Range: 0x801D8A50 -> 0x801D8AA8
class Renderable * Graphics::SkinBuilder::CreateRenderable(class SkinBuilder * this /* r29 */, class Geometry * geom /* r30 */, class ParamData * rendParamData /* r31 */) const {
    // Local variables
    class StackAllocator allocator; // r1+0x8
}
// Range: 0x801D8AB0 -> 0x801D8B7C
class Renderable * Graphics::SkinBuilder::CreateRenderable(class SkinBuilder * this /* r25 */, class StackAllocator & allocator /* r26 */, class Geometry * geom /* r27 */, class ParamData * rendParamData /* r28 */) const {
}
// signature: Graphics::WiiFastBoundMaxScale(const Math::Matrix33 &)
// Range: 0x801D8B80 -> 0x801D8BF8
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
// Range: 0x801D8C00 -> 0x801D8E04
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
        // Range: 0x801D8C90 -> 0x801D8DA4
        // Local variables
        int i; // r0

        {
            // Range: 0x801D8C90 -> 0x801D8DA4
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
// Range: 0x801D8E10 -> 0x801D8E94
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
        // Range: 0x801D8E3C -> 0x801D8E8C
        // Local variables
        int i; // r0
    }
}
// signature: Graphics::SkinGeometry::ComputeBounds(Math::Vector4 &, Graphics::BroadBound &, const Math::Matrix43 &, Math::Vector4 *, int)
// Range: 0x801D8EA0 -> 0x801D90A0
void Graphics::SkinGeometry::ComputeBounds(class SkinGeometry * this /* r29 */, class Vector4 & worldSphere /* r30 */, class BroadBound & worldBound /* r31 */, class Matrix43 & worldMatrix /* r20 */, class Vector4 * workArea /* r21 */) {
    // Local variables
    class Vector worldUpper; // r1+0x48
    class Vector worldLower; // r1+0x38
    class SkinBuilder * skinBuilder; // r4
    class Vector4 * animBoundSphereData; // r0
    int animBoundDataCount; // r24
    class Vector4 * workWorld; // r0
    float maxWorldScale; // f0
    class Vector worldCenter; // r1+0x28
    float worldRad; // f0

    {
        // Range: 0x801D8F2C -> 0x801D8FCC
        // Local variables
        int i; // r23

        {
            // Range: 0x801D8F2C -> 0x801D8FCC
            // Local variables
            class Vector4 & boneBoundSphere; // r22
        }
    }
}
// Range: 0x801D90A0 -> 0x801D9140
void Graphics::SkinGeometry::RenderAttach(class SkinGeometry * this /* r28 */) {
    // Local variables
    class SkinBuilder * builder; // r30

    {
        // Range: 0x801D90B4 -> 0x801D90EC
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x801D90EC -> 0x801D912C
        // Local variables
        int i; // r29
    }
}
// Range: 0x801D9190 -> 0x801D929C
static void Graphics::WiiSkinCalcVBone(class Matrix43 * mat /* r28 */, class WiiSkinVBone * vbones /* r29 */, int vboneCount /* r30 */, int jointCount /* r31 */) {
    // Local variables
    class WiiSkinVBone * vbonePtr; // r6
    class Matrix43 * outPtr; // r7

    {
        // Range: 0x801D91C8 -> 0x801D9284
        // Local variables
        int i; // r0

        {
            // Range: 0x801D91C8 -> 0x801D9284
            // Local variables
            class Matrix43 * matBPtr; // r5
            class Matrix43 * matAPtr; // r4
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
// Range: 0x801D92A0 -> 0x801D9444
void Graphics::WiiMTXConcatArray33(class Matrix33 * out /* r29 */, class Matrix33 * a /* r30 */, int count /* r31 */) {
    // Local variables
    float b0; // f31
    float b1; // f30
    float b2; // f29
    float b4; // f28
    float b5; // f27
    float b6; // f26
    float b8; // f25
    float b9; // f24
    float bA; // f23
    float zero; // f0
    class Matrix33 testMat; // r1+0x8
    class Matrix33 * outreg; // reg65535
    class Matrix33 * areg; // reg65535
    float a0; // f0
    float a1; // f1
    float a2; // f2
    float t0; // f3
    float t1; // f4
    float t2; // f5
}
// Range: 0x801D9450 -> 0x801D9B38
void Graphics::SkinGeometry::WiiSkinRenderGPU(class SkinGeometry * this /* r24 */, class Renderable3D * rend /* r25 */, class Viewport * viewp /* r19 */, class StateOpTable & shaderOps /* r18 */) {
    // Local variables
    class ThreadStackMarkSentry sentry; // r1+0x8
    class Matrix43 * outMatList; // r31
    class Matrix43 objectMat; // r1+0x160
    class Matrix43 invCameraMat; // r1+0x130
    class Matrix43 * texMatList; // r30
    class Matrix43 * nrmMatList; // r29
    class Wii_ShaderStateOp * wsop; // r28
    unsigned char * displayList; // r27

    {
        // Range: 0x801D94E4 -> 0x801D95A0
        {
            // Range: 0x801D9564 -> 0x801D95A0
            // Local variables
            int maxJoint; // r20

            {
                // Range: 0x801D9580 -> 0x801D95A0
                // Local variables
                int i; // r21
            }
        }
    }
    {
        // Range: 0x801D95A4 -> 0x801D97DC
        // Local variables
        class Matrix43 projectMat; // r1+0x100
        class Bucket * bucket; // r20

        {
            // Range: 0x801D95DC -> 0x801D9768
            {
                // Range: 0x801D969C -> 0x801D9768
                // Local variables
                class Matrix43 itObjectMat; // r1+0xD0
            }
        }
        {
            // Range: 0x801D9768 -> 0x801D97DC
            // Local variables
            int maxJoint; // r20
            class Matrix43 itObjectMat; // r1+0xA0

            {
                // Range: 0x801D9798 -> 0x801D97DC
                // Local variables
                int i; // r21
            }
        }
    }
    {
        // Range: 0x801D97E0 -> 0x801D995C
        {
            // Range: 0x801D98A0 -> 0x801D995C
            // Local variables
            class Matrix43 itObjectMat; // r1+0x70
        }
    }
    {
        // Range: 0x801D995C -> 0x801D9A0C
        // Local variables
        int maxJoint; // r20
        class Matrix43 normalMat; // r1+0x10
        class Matrix43 itObjectMat; // r1+0x40

        {
            // Range: 0x801D99C8 -> 0x801D9A0C
            // Local variables
            int i; // r21
        }
    }
    {
        // Range: 0x801D9A1C -> 0x801D9B00
        // Local variables
        int pal; // r26

        {
            // Range: 0x801D9A1C -> 0x801D9B00
            // Local variables
            unsigned int dispSize; // r18
            int matCount; // r25

            {
                // Range: 0x801D9A44 -> 0x801D9A78
                // Local variables
                int i; // r20
            }
            {
                // Range: 0x801D9A7C -> 0x801D9AD0
                // Local variables
                int i; // r19

                {
                    // Range: 0x801D9A7C -> 0x801D9AD0
                    // Local variables
                    int offset; // r18
                }
            }
        }
    }
}
