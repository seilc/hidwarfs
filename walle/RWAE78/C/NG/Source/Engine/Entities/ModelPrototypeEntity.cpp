/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Entities\ModelPrototypeEntity.cpp
*/
class ModelPrototypeSchema schema; // size: 0x18, address: 0x807FEA60
class SchemaRegistrator schemaReg; // size: 0x8, address: 0x807FEA78
class Schema * modelPrototypeSchema; // size: 0x4, address: 0x80707B10
// signature: World::ModelPrototypeSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80243D44 -> 0x80243D90
class EntityStub * World::ModelPrototypeSchema::CreateStub(class ModelPrototypeSchema * this /* r31 */) {
}
// signature: World::ModelPrototypeSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80243D90 -> 0x80243DA8
void World::ModelPrototypeSchema::DestroyStub() {
}
// signature: World::ModelPrototypeSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80243DA8 -> 0x80243DC0
class Entity * World::ModelPrototypeSchema::ActivateEntity() {
}
// signature: World::ModelPrototypeSchema::Fix(World::Asset *, long, int)
// Range: 0x80243DC0 -> 0x80243DC4
void World::ModelPrototypeSchema::Fix() {
}
// signature: World::ModelPrototypeEntity::ModelPrototypeEntity(World::EntityHandleBase *)
// Range: 0x80243DC4 -> 0x80243E14
void * World::ModelPrototypeEntity::ModelPrototypeEntity() {
    // References
    // -> struct {} __vt__Q28Graphics15LightSectorData;
    // -> struct {} __vt__Q25World20ModelPrototypeEntity;
}
// signature: World::ModelPrototypeEntity::Create(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80243E54 -> 0x8024493C
class ModelPrototypeEntity * World::ModelPrototypeEntity::Create(class EntityHandleBase * handle /* r23 */) {
    // Local variables
    class ModelPrototypeAsset * asset; // r30
    class Goodie * goodie; // r1+0xA8
    int geomCount; // r0
    int rendCount; // r0
    int childTransformCount; // r0
    int refModelCount; // r29
    unsigned long long * geomIDs; // r1+0x70
    unsigned long long * refModelIDs; // r1+0x6C
    class Matrix43 * ichildTransforms; // r1+0x68
    unsigned short * irendGeomMap; // r1+0x64
    unsigned short * ichildTransformParents; // r1+0x60
    unsigned short * irendTransformMap; // r1+0x5C
    unsigned short * refModelTransformMap; // r1+0x58
    unsigned short * pRefCollFilters; // r1+0x54
    class Vector4 * sectorPointBound; // r1+0x50
    class Vector4 * sectorSpotBound; // r1+0x4C
    unsigned long long * instanceParamKey; // r1+0x48
    class ModelInstanceParamData * instanceParamData; // r1+0x44
    class ModelPartDefinition * modelPartDefinitions; // r1+0x40
    unsigned char * refModelCollOnly; // r1+0x3C
    class EntityHandle * refeeHandle; // r16
    class ModelPrototypeEntity * refee; // r16
    unsigned long long lastRefID; // r17:r18
    int refModelActivated; // r19
    int addedGeom; // r20
    int addedTransform; // r21
    int addedRenderable; // r1+0xA4
    bool geomCounted; // r22
    int memSize; // r14
    unsigned char * mem; // r0
    class StackAllocator allocator; // r1+0x74
    class EntityHandle * * geoment; // r1+0xA0
    class EntityHandle * * refModelEnt; // r0
    class Builder * * builders; // r1+0x9C
    class Matrix43 * childTransforms; // r1+0x98
    unsigned short * rendGeomMap; // r1+0x94
    unsigned short * childTransformParents; // r1+0x90
    unsigned short * rendTransformMap; // r1+0x8C
    unsigned long long * outInstanceParamKey; // r1+0x88
    class ModelInstanceParamData * outInstanceParamData; // r1+0x84
    class ModelPartDefinition * outModelPartDefinitions; // r1+0x80
    int geomCurr; // r28
    int rendCurr; // r27
    int transformCurr; // r26
    int nextGeomCurr; // r25

    {
        // Range: 0x80243EE0 -> 0x80243FCC
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x802441A8 -> 0x802441F4
        // Local variables
        class EntityHandle * skelHandle; // r14
    }
    {
        // Range: 0x80244204 -> 0x80244248
        // Local variables
        class EntityHandle * collmeshHandle; // r14
    }
    {
        // Range: 0x80244248 -> 0x802442E0
        // Local variables
        int i; // r18

        {
            // Range: 0x80244248 -> 0x802442E0
            // Local variables
            class Goodie * goodie; // r0
        }
    }
    {
        // Range: 0x80244390 -> 0x8024449C
        // Local variables
        class Vector4 * spotBound; // r20
        class Vector4 * pointBound; // r18
        unsigned char * sceneIndex; // r17
        unsigned int spotCount; // r16
        unsigned int pointCount; // r15

        {
            // Range: 0x80244430 -> 0x8024445C
            // Local variables
            int i; // r22
        }
    }
    {
        // Range: 0x80244554 -> 0x80244890
        // Local variables
        int i; // r24

        {
            // Range: 0x80244554 -> 0x80244554
            // Local variables
            int index; // r15
        }
        {
            // Range: 0x80244554 -> 0x80244890
            // Local variables
            unsigned short * refeeChildTransformParents; // r0
            class Matrix43 * refeeChildTransforms; // r15

            {
                // Range: 0x80244554 -> 0x80244760
                // Local variables
                class EntityHandle * * refeeGeoment; // r0

                {
                    // Range: 0x80244554 -> 0x8024474C
                    // Local variables
                    int j; // r15
                }
            }
            {
                // Range: 0x802447A0 -> 0x802447D8
                // Local variables
                int j; // r17
            }
            {
                // Range: 0x802447F4 -> 0x80244858
                // Local variables
                int j; // r15
            }
        }
    }
}
// Range: 0x8024535C -> 0x802456C0
void World::ModelPrototypeEntity::Deactivate(class ModelPrototypeEntity * this /* r31 */) {
    // Local variables
    class EntityHandle * * geoment; // r25
    int geomCount; // r0
    class EntityHandle * * refModelEnt; // r0

    {
        // Range: 0x80245374 -> 0x80245384
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x80245438 -> 0x80245444
        // Local variables
        int i; // r24
    }
}
// Range: 0x802456C0 -> 0x80245710
void World::ModelPrototypeEntity::Destroy(class ModelPrototypeEntity * this /* r31 */) {
}
