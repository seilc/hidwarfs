/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Physics\Havok\HavokShapeBuilder.cpp
*/
static bool hasAttemptedToHaveBeenCreated; // size: 0x1, address: 0x8077CF14
class CHavokShapeBuilder * s_instance; // size: 0x4, address: 0x8077CF18
static class hkSingletonInitNode hkSingletonRegisterCHavokShapeBuilder; // size: 0xC, address: 0x8077CF1C
// Range: 0x801EF5F0 -> 0x801EF688
static class hkReferencedObject * hkCreateCHavokShapeBuilder() {
    // References
    // -> struct {} __vt__18CHavokShapeBuilder;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> static bool hasAttemptedToHaveBeenCreated;
}
// Range: 0x801EF720 -> 0x801EF7B8
void * CHavokShapeBuilder::~CHavokShapeBuilder(class CHavokShapeBuilder * this /* r30 */) {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__18CHavokShapeBuilder;
}
// Range: 0x801EF7C0 -> 0x801EF800
void CHavokShapeBuilder::Release(class CHavokShapeBuilder * this /* r31 */) {
}
// signature: CHavokShapeBuilder::scaleShape(const hkpShape *, const hkVector4 &)
// Range: 0x801EF800 -> 0x801EF8B0
class hkpShape * CHavokShapeBuilder::scaleShape() {
    // Local variables
    class hkpShape * shape; // r7
}
// Range: 0x801EF8B0 -> 0x801EFBDC
class hkpShape * CHavokShapeBuilder::getShape(class CHavokShapeBuilder * this /* r30 */, class hkpShape * masterShape /* r31 */, class hkVector4 & scaleIn /* r26 */) {
    // Local variables
    class hkVector4 scale; // r1+0x30
    class hkArray * group; // r27
    class hkStopwatch shrinkShapeStopwatch; // r1+0x40
    class hkpShape * shrunkenShape; // r0

    {
        // Range: 0x801EFA58 -> 0x801EFAA8
        // Local variables
        int i; // r26
    }

    // References
    // -> float gShapeShrinkingTime;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::collectGarbage(unsigned int)
// Range: 0x801EFD70 -> 0x801EFEB0
void CHavokShapeBuilder::collectGarbage(class CHavokShapeBuilder * this /* r29 */) {
    // Local variables
    class Dummy * it; // r31

    {
        // Range: 0x801EFD90 -> 0x801EFE9C
        // Local variables
        class hkArray * group; // r30

        {
            // Range: 0x801EFD90 -> 0x801EFD90
            // Local variables
            int i; // r25
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: _maxElement(const hkVector4 &)
// Range: 0x801F0600 -> 0x801F0628
static float _maxElement() {
    // Local variables
    float max; // f1
}
// Range: 0x801EFF90 -> 0x801F007C
class hkpShape * CHavokShapeBuilder::scaleTranslateShape(class hkpConvexTranslateShape * pShape /* r29 */, class hkVector4 & scale /* r31 */) {
    // Local variables
    class hkpShape * pScaledChildShape; // r30
    class hkVector4 scaledTranslation; // r1+0x20
    class hkpConvexTranslateShape * pNewShape; // r0

    // References
    // -> struct {} __vt__23hkpConvexTranslateShape;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x801F0150 -> 0x801F0208
class hkpShape * CHavokShapeBuilder::scaleConvexTransformShape(class hkpConvexTransformShape * pShape /* r29 */, class hkVector4 & scale /* r31 */) {
    // Local variables
    class hkpConvexShape * pScaledChildShape; // r30
    class hkVector4 scaledTranslation; // r1+0x10
    class hkTransform transform; // r1+0x20

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::scaleMoppShape(const hkpMoppBvTreeShape *, const hkVector4 &)
// Range: 0x801F0210 -> 0x801F03C8
class hkpShape * CHavokShapeBuilder::scaleMoppShape(class hkVector4 & scale /* r26 */) {
    // Local variables
    class hkpStorageExtendedMeshShape * pMeshShape; // r0
    float shapeRadius; // f31
    class hkpExtendedMeshShape * pScaledMeshShape; // r29
    int numSubParts; // r28
    class hkStopwatch moppBuildWatch; // r1+0x40
    class hkpMoppCompilerInput mft; // r1+0x10
    class hkpMoppCode * pCode; // r27

    {
        // Range: 0x801F02A4 -> 0x801F02DC
        // Local variables
        int i; // r27
    }

    // References
    // -> float gMoppBuildingTime;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x801F03F0 -> 0x801F052C
class hkpShape * CHavokShapeBuilder::scaleConvexVerticesShape(class hkpConvexVerticesShape * pShape /* r30 */, class hkVector4 & scale /* r29 */) {
    // Local variables
    class hkArray planeEquations; // r1+0x20
    class hkGeometry geom; // r1+0x30
    class hkStridedVertices stridedVerts; // r1+0x14
    class hkArray verts; // r1+0x8

    {
        // Range: 0x801F0430 -> 0x801F0460
        // Local variables
        int i; // r30
    }

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x801F0530 -> 0x801F05F8
class hkpShape * CHavokShapeBuilder::scaleCylinderShape(class hkpCylinderShape * pShape /* r30 */, class hkVector4 & scale /* r31 */) {
    // Local variables
    float r; // f31
    class hkVector4 pt0; // r1+0x20
    class hkVector4 pt1; // r1+0x10

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::scaleBoxShape(const hkpBoxShape *, const hkVector4 &)
// Range: 0x801F0630 -> 0x801F06B4
class hkpShape * CHavokShapeBuilder::scaleBoxShape(class hkVector4 & scale /* r31 */) {
    // Local variables
    class hkVector4 newHalfExtents; // r1+0x10

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x801F06C0 -> 0x801F0778
class hkpShape * CHavokShapeBuilder::scaleCapsuleShape(class hkpCapsuleShape * pShape /* r30 */, class hkVector4 & scale /* r31 */) {
    // Local variables
    float r; // f31
    class hkVector4 pt0; // r1+0x20
    class hkVector4 pt1; // r1+0x10

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::scaleSphereShape(const hkpSphereShape *, const hkVector4 &)
// Range: 0x801F0780 -> 0x801F07E8
class hkpShape * CHavokShapeBuilder::scaleSphereShape() {
    // Local variables
    float r; // f31

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x801F07F0 -> 0x801F0964
class hkpShape * CHavokShapeBuilder::scaleListShape(class CHavokShapeBuilder * this /* r28 */, class hkpListShape * shape /* r29 */, class hkVector4 & scale /* r30 */) {
    // Local variables
    class hkLocalArray newChildShapes; // r1+0x18
    char buf[512]; // r1+0x30
    class hkpShape * origChildShape; // r0

    {
        // Range: 0x801F087C -> 0x801F0900
        // Local variables
        unsigned int key; // r31
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: CHavokShapeBuilder::getUncachedShape(const hkpShape *, const hkVector4 &)
// Range: 0x801F0A10 -> 0x801F0A60
class hkpShape * CHavokShapeBuilder::getUncachedShape() {
    // Local variables
    class hkpShape * shape; // r31
    class hkpShape * shrunkenShape; // r30
}
