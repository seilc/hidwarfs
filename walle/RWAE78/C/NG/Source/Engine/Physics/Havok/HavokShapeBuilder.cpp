/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Physics\Havok\HavokShapeBuilder.cpp
*/
class CHavokShapeBuilder * s_instance; // size: 0x4, address: 0x8080686C
static class hkSingletonInitNode hkSingletonRegisterCHavokShapeBuilder; // size: 0xC, address: 0x80806870
// Range: 0x80297C08 -> 0x80297C84
static class hkReferencedObject * CHavokShapeBuildercreate() {
    // References
    // -> struct {} __vt__18CHavokShapeBuilder;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80297E54 -> 0x80298200
void * CHavokShapeBuilder::~CHavokShapeBuilder(class CHavokShapeBuilder * this /* r30 */) {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__18CHavokShapeBuilder;
}
// Range: 0x80298200 -> 0x80298240
void CHavokShapeBuilder::Release(class CHavokShapeBuilder * this /* r31 */) {
}
// signature: CHavokShapeBuilder::getShape(const hkpShape *, const hkVector4 &)
// Range: 0x80298240 -> 0x80298D54
class hkpShape * CHavokShapeBuilder::getShape(class CHavokShapeBuilder * this /* r28 */, class hkpShape * masterShape /* r30 */) {
    // Local variables
    class hkVector4 scale; // r1+0xD0
    class hkArray * group; // r29
    class ScaledShape * scaledShape; // r0
    int masterShapeType; // r0
    float scaleCompareEpsilon; // f0
    class hkStopwatch shrinkShapeStopwatch; // r1+0xE0
    class hkpShape * shrunkenShape; // r0

    {
        // Range: 0x802984F8 -> 0x8029863C
        // Local variables
        int i; // r26

        {
            // Range: 0x802984F8 -> 0x8029863C
            // Local variables
            class hkpShape * shape; // r3
        }
    }
    {
        // Range: 0x802987D0 -> 0x80298BC8
        // Local variables
        int we_have_a_shape; // r0
    }

    // References
    // -> float gShapeShrinkingTime;
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::collectGarbage(unsigned int)
// Range: 0x80298D54 -> 0x802990C0
void CHavokShapeBuilder::collectGarbage(class CHavokShapeBuilder * this /* r22 */) {
    // Local variables
    class Dummy * it; // r25

    {
        // Range: 0x80298DA0 -> 0x8029907C
        // Local variables
        class hkArray * group; // r24
        class hkpShape * masterShape; // r0

        {
            // Range: 0x80298DA0 -> 0x80298DA8
            // Local variables
            int i; // r23

            {
                // Range: 0x80298DA8 -> 0x80298DA8
                // Local variables
                int ref_count; // r0

                {
                    // Range: 0x80298DA8 -> 0x80298DA8
                    // Local variables
                    int j; // r0
                }
            }
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::processMoppShape(const hkpMoppBvTreeShape *, const hkVector4 &)
// Range: 0x802990C0 -> 0x802993B4
class hkpMoppBvTreeShape * CHavokShapeBuilder::processMoppShape(class hkVector4 * scale /* r26 */) {
    // Local variables
    class hkpStorageExtendedMeshShape * pMeshShape; // r0
    float shapeRadius; // f31
    class hkpExtendedMeshShape * pScaledMeshShape; // r30
    int numSubParts; // r28
    class hkStopwatch moppBuildWatch; // r1+0x40
    class hkpMoppCompilerInput mft; // r1+0x10
    class hkpMoppCode * pCode; // r27

    {
        // Range: 0x80299154 -> 0x80299180
        // Local variables
        int i; // r27
    }

    // References
    // -> float gMoppBuildingTime;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::processConvexVerticesShape(const hkpConvexVerticesShape *, const hkVector4 &)
// Range: 0x802993C8 -> 0x80299CF0
class hkpConvexVerticesShape * CHavokShapeBuilder::processConvexVerticesShape(class hkVector4 * scale /* r30 */) {
    // Local variables
    class hkArray planeEquations; // r1+0x20
    class hkGeometry geom; // r1+0x30
    class hkStridedVertices stridedVerts; // r1+0x14
    class hkArray verts; // r1+0x8

    {
        // Range: 0x80299428 -> 0x8029945C
        // Local variables
        int i; // r4
    }

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x80299CF0 -> 0x8029A338
class hkpMoppBvTreeShape * CHavokShapeBuilder::processListOfConvexShapes(class hkArray * convexShapes /* r22 */, class hkArray * convexTransforms /* r23 */, class hkArray * convexFilters /* r24 */) {
    // Local variables
    int shapeIt; // r25
    class hkArray theShapes; // r1+0x10
    class hkpListShape * theListShape; // r26
    unsigned int filter_count; // r21
    class hkStopwatch moppBuildWatch; // r1+0x50
    class hkpMoppCompilerInput mft; // r1+0x20
    class hkpMoppCode * pCode; // r21
    class hkpMoppBvTreeShape * pMoppShape; // r25

    {
        // Range: 0x80299D48 -> 0x80299E4C
        // Local variables
        class hkpConvexTransformShape * theTransformShape; // r0
    }

    // References
    // -> float gMoppBuildingTime;
    // -> float hkTransformIdentity[65536];
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
