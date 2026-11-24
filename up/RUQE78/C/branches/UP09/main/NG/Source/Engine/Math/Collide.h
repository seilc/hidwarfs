/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Math\Collide.h
*/
// signature: Math::CollKDTree::GETCOORD(const Math::Vector &, unsigned int)
// Range: 0x802F38A8 -> 0x802F38B0
float Math::CollKDTree::GETCOORD() {
}
// signature: Math::CollKDTree::Branch::IsLeaf(unsigned int)
// Range: 0x802F3288 -> 0x802F3290
unsigned int Math::CollKDTree::Branch::IsLeaf() {
}
// Range: 0x802F38B0 -> 0x802F38BC
unsigned int Math::CollKDTree::Branch::GetAxis() {
}
// signature: Math::CollKDTree::GetTrianglePtr(unsigned int) const
// Range: 0x802F3290 -> 0x802F32A0
class Triangle * Math::CollKDTree::GetTrianglePtr() const {
}
// signature: Math::CollKDTree::GetBranchPtr(unsigned int) const
// Range: 0x802F3898 -> 0x802F38A8
class Branch * Math::CollKDTree::GetBranchPtr() const {
}
// signature: Math::CollKDTree::LineGradient::LineGradient(const Math::Vector &, const Math::Vector &)
// Range: 0x802F2B88 -> 0x802F2C34
void * Math::CollKDTree::LineGradient::LineGradient() {
    // Local variables
    float dx; // f5
    float dy; // f6
    float dz; // f7
    float recip; // f0
}
// signature: Math::CollKDTree::LineGradient::PlaneIntersectCapsule(Math::Vector &, const Math::Vector &, const Math::Vector &, unsigned int, float) const
// Range: 0x802F38BC -> 0x802F39C8
void Math::CollKDTree::LineGradient::PlaneIntersectCapsule() const {
    // Local variables
    float lineMin; // f0
    float lineMax; // f0
    float delta; // f3
}
// signature: Math::CollKDTree_CollideBox<Graphics::ProjectShadowView::ShadowCache, Graphics::Renderable3D>(const Math::CollKDTree &, const Math::Vector &, const Math::Vector &, Graphics::ProjectShadowView::ShadowCache &, Graphics::Renderable3D *)
// Range: 0x802F39C8 -> 0x802F409C
class CollKDTree * Math::CollKDTree_CollideBox<Graphics::ProjectShadowView::ShadowCache, Graphics::Renderable3D>(class CollKDTree & tree /* r23 */, class Vector & lower /* r24 */, class Vector & upper /* r25 */, class ShadowCache & cb /* r26 */) {
    // Local variables
    int nStack; // r27
    unsigned int nodeStack[32]; // r1+0x90
    unsigned int node; // r4
}
// signature: Math::CollKDTree_CollideLine<Graphics::ShadowSimpleCache, Graphics::Renderable3D>(const Math::CollKDTree &, const Math::Vector &, const Math::Vector &, const Math::CollKDTree::LineGradient &, Graphics::ShadowSimpleCache &, Graphics::Renderable3D *)
// Range: 0x802FFA3C -> 0x80300900
class CollKDTree * Math::CollKDTree_CollideLine<Graphics::ShadowSimpleCache, Graphics::Renderable3D>(class CollKDTree & tree /* r19 */, class LineGradient & grad /* r20 */, class ShadowSimpleCache & cb /* r21 */, class Renderable3D * data /* r22 */) {
    // Local variables
    int nStack; // r25
    unsigned int nodeStack[32]; // r1+0x158
    unsigned int node; // r6
    class DataType startStackHack[32]; // r1+0x3D8
    class DataType endStackHack[32]; // r1+0x1D8
    class Vector * startStack; // r24
    class Vector * endStack; // r23
    class Vector currStart; // r1+0x148
    class Vector currEnd; // r1+0x138
    class Vector vtmp; // r1+0x128
    class Vector vleft; // r1+0x118
    class Vector vright; // r1+0x108

    {
        // Range: 0x802FFAD8 -> 0x803008A4
        // Local variables
        class FloatOrInt rEnd; // r1+0x8
        class FloatOrInt rStart; // r1+0xC
        class FloatOrInt lEnd; // r1+0x10
        class FloatOrInt lStart; // r1+0x14
    }
}
// Range: 0x802F2D64 -> 0x802F3288
class CollKDTree * Math::CollKDTree_CollideCapsule<Graphics::ProjectShadowView::ShadowCache, Graphics::Renderable3D>(class CollKDTree & tree /* r23 */, class Vector4 & start /* r30 */, class Vector & end /* r27 */, class LineGradient & grad /* r24 */, class ShadowCache & cb /* r25 */, class Renderable3D * data /* r26 */) {
    // Local variables
    int nStack; // r30
    unsigned int nodeStack[32]; // r1+0x68
    unsigned int node; // r22
    class DataType startStackHack[32]; // r1+0x2E8
    class DataType endStackHack[32]; // r1+0xE8
    class Vector * startStack; // r29
    class Vector * endStack; // r28
    class Vector currStart; // r1+0x58
    class Vector currEnd; // r1+0x48
    class Vector vtmp; // r1+0x38
    class Vector vleft; // r1+0x28
    class Vector vright; // r1+0x18
    float radius; // f0

    {
        // Range: 0x802F2E14 -> 0x802F2E80
        // Local variables
        class Triangle * tris; // r0
    }
    {
        // Range: 0x802F2E80 -> 0x802F324C
        // Local variables
        float rightValue; // f29
        float leftValue; // f30
        class Branch * branch; // r27
        class FloatOrInt rEnd; // r1+0x8
        class FloatOrInt rStart; // r1+0xC
        class FloatOrInt lEnd; // r1+0x10
        class FloatOrInt lStart; // r1+0x14
    }
}
// Range: 0x802F409C -> 0x802F45C0
class CollKDTree * Math::CollKDTree_CollideCapsule<@unnamed@WAD01_cpp@::StaticReceiverRayCaster, Graphics::Renderable3D>(class CollKDTree & tree /* r23 */, class Vector4 & start /* r30 */, class Vector & end /* r27 */, class LineGradient & grad /* r24 */, class StaticReceiverRayCaster & cb /* r25 */, class Renderable3D * data /* r26 */) {
    // Local variables
    int nStack; // r30
    unsigned int nodeStack[32]; // r1+0x68
    unsigned int node; // r22
    class DataType startStackHack[32]; // r1+0x2E8
    class DataType endStackHack[32]; // r1+0xE8
    class Vector * startStack; // r29
    class Vector * endStack; // r28
    class Vector currStart; // r1+0x58
    class Vector currEnd; // r1+0x48
    class Vector vtmp; // r1+0x38
    class Vector vleft; // r1+0x28
    class Vector vright; // r1+0x18
    float radius; // f0

    {
        // Range: 0x802F414C -> 0x802F41B8
        // Local variables
        class Triangle * tris; // r0
    }
    {
        // Range: 0x802F41B8 -> 0x802F4584
        // Local variables
        float rightValue; // f29
        float leftValue; // f30
        class Branch * branch; // r27
        class FloatOrInt rEnd; // r1+0x8
        class FloatOrInt rStart; // r1+0xC
        class FloatOrInt lEnd; // r1+0x10
        class FloatOrInt lStart; // r1+0x14
    }
}
