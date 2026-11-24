/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\ModelPrototypeEntity.cpp
*/
// Range: 0x802DFFD0 -> 0x802E0B34
class Entity * World::ModelPrototypeAsset::Create(class EntityHandleBase * handle /* r1+0x30 */, class ModelPrototypeAsset * asset /* r15 */) {
    // Local variables
    int geomCount; // r0
    int rendCount; // r0
    int childTransformCount; // r1+0x88
    int refModelInstanceCount; // r1+0x84
    unsigned long long * geomIDs; // r17
    unsigned long long * refModelIDs; // r23
    class Matrix43 * ichildTransforms; // r1+0x80
    unsigned short * irendGeomMap; // r1+0x7C
    unsigned short * ichildTransformParents; // r1+0x78
    unsigned short * irendTransformMap; // r1+0x74
    unsigned short * refModelTransformMap; // r22
    unsigned short * pRefCollFilters; // r21
    class Vector4 * sectorPointBound; // r1+0x70
    class Vector4 * sectorSpotBound; // r1+0x6C
    unsigned long long * instanceParamKey; // r1+0x68
    class ModelInstanceParamData * instanceParamData; // r1+0x64
    class ModelPartDefinition * modelPartDefinitions; // r1+0x60
    unsigned char * refModelCollOnly; // r0
    class ModelPrototypeEntity * refee; // r5
    unsigned long long lastRefID; // r18:r24
    int refModelActivated; // r25
    int addedGeom; // r26
    int addedTransform; // r27
    int addedRenderable; // r28
    bool geomCounted; // r29
    int memSize; // r26
    class StackAllocator allocator; // r1+0x48
    unsigned long long * outInstanceParamKey; // r1+0x5C
    class ModelInstanceParamData * outInstanceParamData; // r1+0x58
    class ModelPartDefinition * outModelPartDefinitions; // r1+0x54
    int geomCurr; // r20
    int rendCurr; // r19
    int transformCurr; // r18
    int nextGeomCurr; // r14
    int curRefModel; // r0

    {
        // Range: 0x802E0120 -> 0x802E01B8
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x802E0498 -> 0x802E04E4
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x802E05AC -> 0x802E06BC
        // Local variables
        class Vector4 * spotBound; // r24
        class Vector4 * pointBound; // r18
        unsigned char * sceneIndex; // r17
        unsigned int spotCount; // r0
        unsigned int pointCount; // r0

        {
            // Range: 0x802E064C -> 0x802E0664
            // Local variables
            int i; // r0
        }
    }
    {
        // Range: 0x802E0774 -> 0x802E0A6C
        // Local variables
        int i; // r17

        {
            // Range: 0x802E08D0 -> 0x802E0A6C
            // Local variables
            unsigned short * refeeChildTransformParents; // r0

            {
                // Range: 0x802E08DC -> 0x802E0964
                // Local variables
                class EntityHandle * * refeeGeoment; // r0

                {
                    // Range: 0x802E0908 -> 0x802E0944
                    // Local variables
                    int j; // r16
                }
            }
            {
                // Range: 0x802E0994 -> 0x802E09C8
                // Local variables
                int j; // r6
            }
            {
                // Range: 0x802E09E8 -> 0x802E0A38
                // Local variables
                int j; // r7
            }
        }
    }

    // References
    // -> struct {} __vt__Q28Graphics15LightSectorData;
    // -> struct {} __vt__Q25World20ModelPrototypeEntity;
}
// Range: 0x802E0B34 -> 0x802E0CB8
void World::ModelPrototypeEntity::Deactivate(class ModelPrototypeEntity * this /* r31 */) {
    // Local variables
    class EntityHandle * * geoment; // r26
    int geomCount; // r0
    class EntityHandle * * refModelEnt; // r0

    {
        // Range: 0x802E0B4C -> 0x802E0B54
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x802E0B98 -> 0x802E0BA0
        // Local variables
        int i; // r25
    }
}
