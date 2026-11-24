/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Physics\Havok\HavokShapeBuilder.cpp
*/
static bool hasAttemptedToHaveBeenCreated; // size: 0x1, address: 0x8084DCE4
class CHavokShapeBuilder * s_instance; // size: 0x4, address: 0x8084DCE8
static class hkSingletonInitNode hkSingletonRegisterCHavokShapeBuilder; // size: 0xC, address: 0x8084DCEC
// Range: 0x803311CC -> 0x80331274
static class hkReferencedObject * hkCreateCHavokShapeBuilder() {
    // References
    // -> struct {} __vt__18CHavokShapeBuilder;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> static bool hasAttemptedToHaveBeenCreated;
}
// Range: 0x80331448 -> 0x803317FC
void * CHavokShapeBuilder::~CHavokShapeBuilder(class CHavokShapeBuilder * this /* r30 */) {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__18CHavokShapeBuilder;
}
// Range: 0x803317FC -> 0x8033183C
void CHavokShapeBuilder::Release(class CHavokShapeBuilder * this /* r31 */) {
}
// Range: 0x8033183C -> 0x80332150
class hkpShape * CHavokShapeBuilder::scaleShape(class hkpShape * masterShape /* r30 */, class hkVector4 & scale /* r28 */) {
    // Local variables
    class hkpShape * shape; // r29

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> struct {} __vt__23hkpConvexTranslateShape;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::getShape(const hkpShape *, const hkVector4 &)
// Range: 0x80332150 -> 0x80332810
class hkpShape * CHavokShapeBuilder::getShape(class CHavokShapeBuilder * this /* r28 */, class hkpShape * masterShape /* r30 */) {
    // Local variables
    class hkVector4 scale; // r1+0x70
    class hkArray * group; // r29
    class ScaledShape & scaledShape; // r0
    class hkStopwatch shrinkShapeStopwatch; // r1+0x80
    class hkpShape * shrunkenShape; // r0

    {
        // Range: 0x8033240C -> 0x80332520
        // Local variables
        int i; // r11

        {
            // Range: 0x8033240C -> 0x80332520
            // Local variables
            class hkpShape * shape; // r0
        }
    }

    // References
    // -> float gShapeShrinkingTime;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::collectGarbage(unsigned int)
// Range: 0x80332810 -> 0x80332B4C
void CHavokShapeBuilder::collectGarbage(class CHavokShapeBuilder * this /* r22 */) {
    // Local variables
    class Dummy * it; // r25

    {
        // Range: 0x8033285C -> 0x80332B08
        // Local variables
        class hkArray * group; // r24
        class hkpShape * masterShape; // r0

        {
            // Range: 0x8033285C -> 0x80332864
            // Local variables
            int i; // r23

            {
                // Range: 0x80332864 -> 0x80332864
                // Local variables
                int ref_count; // r0

                {
                    // Range: 0x80332864 -> 0x80332864
                    // Local variables
                    int j; // r0
                }
            }
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::scaleMoppShape(const hkpMoppBvTreeShape *, const hkVector4 &)
// Range: 0x80332B4C -> 0x80332DCC
class hkpShape * CHavokShapeBuilder::scaleMoppShape(class hkVector4 & scale /* r26 */) {
    // Local variables
    class hkpStorageExtendedMeshShape * pMeshShape; // r0
    float shapeRadius; // f31
    class hkpExtendedMeshShape * pScaledMeshShape; // r31
    int numSubParts; // r28
    class hkStopwatch moppBuildWatch; // r1+0x40
    class hkpMoppCompilerInput mft; // r1+0x10
    class hkpMoppCode * pCode; // r27

    {
        // Range: 0x80332BE0 -> 0x80332C0C
        // Local variables
        int i; // r27
    }

    // References
    // -> float gMoppBuildingTime;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::scaleConvexVerticesShape(const hkpConvexVerticesShape *, const hkVector4 &)
// Range: 0x80332DE0 -> 0x8033371C
class hkpShape * CHavokShapeBuilder::scaleConvexVerticesShape(class hkVector4 & scale /* r30 */) {
    // Local variables
    class hkArray planeEquations; // r1+0x20
    class hkGeometry geom; // r1+0x30
    class hkStridedVertices stridedVerts; // r1+0x14
    class hkArray verts; // r1+0x8

    {
        // Range: 0x80332E40 -> 0x80332E50
        // Local variables
        int i; // r4
    }

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
