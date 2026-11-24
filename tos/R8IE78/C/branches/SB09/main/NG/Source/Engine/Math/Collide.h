/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Math\Collide.h
*/
// Range: 0x8020BFE0 -> 0x8020C42C
class CollKDTree * Math::CollKDTree_CollideBox<Graphics::ProjectFXLight::FXLightCache, Graphics::Renderable3D>(class CollKDTree & tree /* r25 */, class Vector & lower /* r26 */, class Vector & upper /* r27 */, class FXLightCache & cb /* r28 */, class Renderable3D * data /* r29 */) {
    // Local variables
    int nStack; // r30
    unsigned int nodeStack[32]; // r1+0x38
    unsigned int node; // r4

    {
        // Range: 0x8020C01C -> 0x8020C410
        // Local variables
        class Branch * branch; // r3
    }
}
// signature: Math::CollKDTree_CollideBox<Graphics::ProjectShadowView::ShadowCache, Graphics::Renderable3D>(const Math::CollKDTree &, const Math::Vector &, const Math::Vector &, Graphics::ProjectShadowView::ShadowCache &, Graphics::Renderable3D *)
// Range: 0x80212A80 -> 0x80213020
class CollKDTree * Math::CollKDTree_CollideBox<Graphics::ProjectShadowView::ShadowCache, Graphics::Renderable3D>(class CollKDTree & tree /* r23 */, class Vector & lower /* r24 */, class Vector & upper /* r25 */, class ShadowCache & cb /* r26 */) {
    // Local variables
    int nStack; // r27
    unsigned int nodeStack[32]; // r1+0x40
    unsigned int node; // r6

    {
        // Range: 0x80212B20 -> 0x80212FC4
        // Local variables
        class Branch * branch; // r3
    }
}
// Range: 0x80217AD0 -> 0x80218000
class CollKDTree * Math::CollKDTree_CollideBox<Graphics::ShadowSimpleCache, Graphics::Renderable3D>(class CollKDTree & tree /* r24 */, class Vector & lower /* r25 */, class Vector & upper /* r26 */, class ShadowSimpleCache & cb /* r27 */, class Renderable3D * data /* r28 */) {
    // Local variables
    int nStack; // r29
    unsigned int nodeStack[32]; // r1+0xB0
    unsigned int node; // r8

    {
        // Range: 0x80217B50 -> 0x80217FBC
        // Local variables
        class Branch * branch; // r3
    }
}
// signature: Math::CollKDTree_CollideLine<Graphics::ShadowSimpleCache, Graphics::Renderable3D>(const Math::CollKDTree &, const Math::Vector &, const Math::Vector &, const Math::CollKDTree::LineGradient &, Graphics::ShadowSimpleCache &, Graphics::Renderable3D *)
// Range: 0x80217070 -> 0x80217AD0
class CollKDTree * Math::CollKDTree_CollideLine<Graphics::ShadowSimpleCache, Graphics::Renderable3D>(class CollKDTree & tree /* r26 */, class LineGradient & grad /* r27 */, class ShadowSimpleCache & cb /* r28 */, class Renderable3D * data /* r29 */) {
    // Local variables
    int nStack; // r17
    unsigned int nodeStack[32]; // r1+0x110
    unsigned int node; // r3
    class DataType startStackHack[32]; // r1+0x390
    class DataType endStackHack[32]; // r1+0x190
    class Vector * startStack; // r31
    class Vector * endStack; // r30
    class Vector currStart; // r1+0x100
    class Vector currEnd; // r1+0xF0
    class Vector vtmp; // r1+0xE0
    class Vector vleft; // r1+0xD0
    class Vector vright; // r1+0xC0

    {
        // Range: 0x8021712C -> 0x80217A8C
        // Local variables
        class Branch * branch; // r4
        class FloatOrInt rEnd; // r1+0xC
        class FloatOrInt rStart; // r1+0x10
        class FloatOrInt lEnd; // r1+0x14
        class FloatOrInt lStart; // r1+0x18

        {
            // Range: 0x8021712C -> 0x8021712C
            // Local variables
            float _delta; // f2
        }
        {
            // Range: 0x8021712C -> 0x8021712C
            // Local variables
            float _delta; // f2
        }
        {
            // Range: 0x8021712C -> 0x8021712C
            // Local variables
            float _delta; // f6
        }
        {
            // Range: 0x8021712C -> 0x8021712C
            // Local variables
            float _delta; // f9
        }
    }
}
// signature: Math::CollKDTree_CollideCapsule<Graphics::ProjectShadowView::ShadowCache_CapsuleNoRay, Graphics::Renderable3D>(const Math::CollKDTree &, const Math::Vector4 &, const Math::Vector &, const Math::CollKDTree::LineGradient &, Graphics::ProjectShadowView::ShadowCache_CapsuleNoRay &, Graphics::Renderable3D *)
// Range: 0x80211780 -> 0x80211F70
class CollKDTree * Math::CollKDTree_CollideCapsule<Graphics::ProjectShadowView::ShadowCache_CapsuleNoRay, Graphics::Renderable3D>(class CollKDTree & tree /* r19 */, class LineGradient & grad /* r20 */, class ShadowCache_CapsuleNoRay & cb /* r21 */, class Renderable3D * data /* r22 */) {
    // Local variables
    int nStack; // r25
    unsigned int nodeStack[32]; // r1+0x98
    unsigned int node; // r0
    class DataType startStackHack[32]; // r1+0x318
    class DataType endStackHack[32]; // r1+0x118
    class Vector * startStack; // r24
    class Vector * endStack; // r23
    class Vector currStart; // r1+0x88
    class Vector currEnd; // r1+0x78
    class Vector vtmp; // r1+0x68
    class Vector vleft; // r1+0x58
    class Vector vright; // r1+0x48
    float radius; // f0

    {
        // Range: 0x802117FC -> 0x80211F44
        // Local variables
        float rightValue; // f1
        float leftValue; // f0
        class Branch * branch; // r3
        class FloatOrInt rEnd; // r1+0x8
        class FloatOrInt rStart; // r1+0xC
        class FloatOrInt lEnd; // r1+0x10
        class FloatOrInt lStart; // r1+0x14

        {
            // Range: 0x802117FC -> 0x802117FC
            // Local variables
            float _clampval; // f0
            float _delta; // f0
            float _lineMax; // f0
            float _lineMin; // f0
        }
        {
            // Range: 0x802117FC -> 0x802117FC
            // Local variables
            float _clampval; // f0
            float _delta; // f1
            float _lineMax; // f0
            float _lineMin; // f0
        }
        {
            // Range: 0x802117FC -> 0x802117FC
            // Local variables
            float _clampval; // f0
            float _delta; // f1
            float _lineMax; // f0
            float _lineMin; // f0
        }
        {
            // Range: 0x802117FC -> 0x802117FC
            // Local variables
            float _clampval; // f0
            float _delta; // f10
            float _lineMax; // f0
            float _lineMin; // f0
        }
    }
}
// signature: Math::CollKDTree_CollideCapsule<Graphics::ProjectShadowView::ShadowCache, Graphics::Renderable3D>(const Math::CollKDTree &, const Math::Vector4 &, const Math::Vector &, const Math::CollKDTree::LineGradient &, Graphics::ProjectShadowView::ShadowCache &, Graphics::Renderable3D *)
// Range: 0x80211F70 -> 0x80212A74
class CollKDTree * Math::CollKDTree_CollideCapsule<Graphics::ProjectShadowView::ShadowCache, Graphics::Renderable3D>(class CollKDTree & tree /* r19 */, class LineGradient & grad /* r20 */, class ShadowCache & cb /* r21 */, class Renderable3D * data /* r22 */) {
    // Local variables
    int nStack; // r25
    unsigned int nodeStack[32]; // r1+0xA0
    unsigned int node; // r0
    class DataType startStackHack[32]; // r1+0x320
    class DataType endStackHack[32]; // r1+0x120
    class Vector * startStack; // r24
    class Vector * endStack; // r23
    class Vector currStart; // r1+0x90
    class Vector currEnd; // r1+0x80
    class Vector vtmp; // r1+0x70
    class Vector vleft; // r1+0x60
    class Vector vright; // r1+0x50
    float radius; // f0

    {
        // Range: 0x8021203C -> 0x80212A10
        // Local variables
        float rightValue; // f1
        float leftValue; // f0
        class Branch * branch; // r3
        class FloatOrInt rEnd; // r1+0xC
        class FloatOrInt rStart; // r1+0x10
        class FloatOrInt lEnd; // r1+0x14
        class FloatOrInt lStart; // r1+0x18

        {
            // Range: 0x8021203C -> 0x8021203C
            // Local variables
            float _clampval; // f0
            float _delta; // f0
            float _lineMax; // f0
            float _lineMin; // f0
        }
        {
            // Range: 0x8021203C -> 0x8021203C
            // Local variables
            float _clampval; // f0
            float _delta; // f1
            float _lineMax; // f0
            float _lineMin; // f0
        }
        {
            // Range: 0x8021203C -> 0x8021203C
            // Local variables
            float _clampval; // f0
            float _delta; // f1
            float _lineMax; // f0
            float _lineMin; // f0
        }
        {
            // Range: 0x8021203C -> 0x8021203C
            // Local variables
            float _clampval; // f0
            float _delta; // f10
            float _lineMax; // f0
            float _lineMin; // f0
        }
    }
}
// signature: Math::CollKDTree_CollideCapsule<@unnamed@WADSpeed_cpp@::StaticReceiverRayCaster, Graphics::Renderable3D>(const Math::CollKDTree &, const Math::Vector4 &, const Math::Vector &, const Math::CollKDTree::LineGradient &, @unnamed@WADSpeed_cpp@::StaticReceiverRayCaster &, Graphics::Renderable3D *)
// Range: 0x80213020 -> 0x80213C40
class CollKDTree * Math::CollKDTree_CollideCapsule<@unnamed@WADSpeed_cpp@::StaticReceiverRayCaster, Graphics::Renderable3D>(class CollKDTree & tree /* r22 */, class LineGradient & grad /* r23 */, class StaticReceiverRayCaster & cb /* r24 */, class Renderable3D * data /* r25 */) {
    // Local variables
    int nStack; // r28
    unsigned int nodeStack[32]; // r1+0xE8
    unsigned int node; // r0
    class DataType startStackHack[32]; // r1+0x368
    class DataType endStackHack[32]; // r1+0x168
    class Vector * startStack; // r27
    class Vector * endStack; // r26
    class Vector currStart; // r1+0xD8
    class Vector currEnd; // r1+0xC8
    class Vector vtmp; // r1+0xB8
    class Vector vleft; // r1+0xA8
    class Vector vright; // r1+0x98
    float radius; // f0

    {
        // Range: 0x8021310C -> 0x80213BBC
        // Local variables
        float rightValue; // f1
        float leftValue; // f0
        class Branch * branch; // r3
        class FloatOrInt rEnd; // r1+0x8
        class FloatOrInt rStart; // r1+0xC
        class FloatOrInt lEnd; // r1+0x10
        class FloatOrInt lStart; // r1+0x14

        {
            // Range: 0x8021310C -> 0x8021310C
            // Local variables
            float _clampval; // f0
            float _delta; // f0
            float _lineMax; // f0
            float _lineMin; // f0
        }
        {
            // Range: 0x8021310C -> 0x8021310C
            // Local variables
            float _clampval; // f0
            float _delta; // f1
            float _lineMax; // f0
            float _lineMin; // f0
        }
        {
            // Range: 0x8021310C -> 0x8021310C
            // Local variables
            float _clampval; // f0
            float _delta; // f1
            float _lineMax; // f0
            float _lineMin; // f0
        }
        {
            // Range: 0x8021310C -> 0x8021310C
            // Local variables
            float _clampval; // f0
            float _delta; // f10
            float _lineMax; // f0
            float _lineMin; // f0
        }
    }
}
