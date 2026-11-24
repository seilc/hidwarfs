/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\ModelPrototypeEntity.cpp
*/
// signature: World::ModelPrototypeEntity::ModelPrototypeEntity(World::EntityHandleBase *)
// Range: 0x801BB030 -> 0x801BB09C
void * World::ModelPrototypeEntity::ModelPrototypeEntity(class ModelPrototypeEntity * this /* r30 */) {
    // References
    // -> struct {} __vt__Q28Graphics15LightSectorData;
    // -> struct {} __vt__Q25World20ModelPrototypeEntity;
}
// Range: 0x801BB0A0 -> 0x801BBBE0
class Entity * World::ModelPrototypeAsset::Create(class EntityHandleBase * handle /* r31 */, class ModelPrototypeAsset * asset /* r19 */) {
    // Local variables
    int geomCount; // r0
    int rendCount; // r0
    int childTransformCount; // r26
    int refModelInstanceCount; // r25
    unsigned long long * geomIDs; // r14
    unsigned long long * refModelIDs; // r1+0x94
    class Matrix43 * ichildTransforms; // r1+0x90
    unsigned short * irendGeomMap; // r1+0x8C
    unsigned short * ichildTransformParents; // r1+0x88
    unsigned short * irendTransformMap; // r1+0x84
    unsigned short * refModelTransformMap; // r1+0x80
    unsigned short * pRefCollFilters; // r1+0x7C
    class Vector4 * sectorPointBound; // r1+0x78
    class Vector4 * sectorSpotBound; // r1+0x74
    unsigned long long * instanceParamKey; // r1+0x70
    class ModelInstanceParamData * instanceParamData; // r1+0x6C
    class ModelPartDefinition * modelPartDefinitions; // r1+0x68
    unsigned char * refModelCollOnly; // r0
    class ModelPrototypeEntity * refee; // r30
    unsigned long long lastRefID; // r15:r16
    int refModelActivated; // r17
    int addedGeom; // r18
    int addedTransform; // r20
    int addedRenderable; // r23
    bool geomCounted; // r24
    int memSize; // r24
    class StackAllocator allocator; // r1+0x44
    unsigned long long * outInstanceParamKey; // r14
    class ModelInstanceParamData * outInstanceParamData; // r24
    class ModelPartDefinition * outModelPartDefinitions; // r23
    int geomCurr; // r22
    int rendCurr; // r21
    int transformCurr; // r20
    int nextGeomCurr; // r1+0x64
    int curRefModel; // r0

    {
        // Range: 0x801BB1DC -> 0x801BB2A4
        // Local variables
        int i; // r27
    }
    {
        // Range: 0x801BB4FC -> 0x801BB560
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x801BB634 -> 0x801BB72C
        // Local variables
        class Vector4 * spotBound; // r20
        class Vector4 * pointBound; // r18
        unsigned char * sceneIndex; // r16
        unsigned int spotCount; // r0
        unsigned int pointCount; // r0

        {
            // Range: 0x801BB6CC -> 0x801BB6F8
            // Local variables
            int i; // r0
        }
    }
    {
        // Range: 0x801BB7DC -> 0x801BBB4C
        // Local variables
        int i; // r1+0x60

        {
            // Range: 0x801BB95C -> 0x801BBB4C
            // Local variables
            unsigned short * refeeChildTransformParents; // r1+0x54

            {
                // Range: 0x801BB968 -> 0x801BBA10
                // Local variables
                class EntityHandle * * refeeGeoment; // r1+0x5C

                {
                    // Range: 0x801BB998 -> 0x801BBA10
                    // Local variables
                    int j; // r1+0x58
                }
            }
            {
                // Range: 0x801BBA3C -> 0x801BBAB4
                // Local variables
                int j; // r1+0x50
            }
            {
                // Range: 0x801BBAB4 -> 0x801BBB10
                // Local variables
                int j; // r3
            }
        }
    }
}
// Range: 0x801BBC30 -> 0x801BBCF4
void World::ModelPrototypeEntity::Deactivate(class ModelPrototypeEntity * this /* r27 */) {
    // Local variables
    class EntityHandle * * geoment; // r29
    int geomCount; // r0
    class EntityHandle * * refModelEnt; // r28

    {
        // Range: 0x801BBC48 -> 0x801BBC74
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x801BBC78 -> 0x801BBCAC
        // Local variables
        int i; // r30
    }
}
// Range: 0x801BBD00 -> 0x801BBD54
void World::ModelPrototypeEntity::Destroy(class ModelPrototypeEntity * this /* r30 */) {
    // Local variables
    int memSize; // r31
}
// Range: 0x801BBDC0 -> 0x801BBE2C
void World::ModelPrototypeEntity::DeferDestroy(class ModelPrototypeEntity * this /* r31 */) {
}
