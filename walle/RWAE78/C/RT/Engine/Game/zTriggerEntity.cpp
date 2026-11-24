/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zTriggerEntity.cpp
*/
class _OGTriggerEntSchema _OGTriggerEntschema; // size: 0x18, address: 0x807E4B20
class SchemaRegistrator _OGTriggerEntschemaReg; // size: 0x8, address: 0x807E4B38
static class zTriggerEntityMgr gTriggerEntityMgr; // size: 0xC, address: 0x807E4B40
// Range: 0x801C63D0 -> 0x801C63E0
void World::_OGTriggerEntEntity::Deactivate() {
}
// Range: 0x801C63E0 -> 0x801C6430
void World::_OGTriggerEntEntity::Destroy(class _OGTriggerEntEntity * this /* r31 */) {
}
// signature: World::_OGTriggerEntSchema::Fix(World::Asset *, long, int)
// Range: 0x801C6490 -> 0x801C6498
void World::_OGTriggerEntSchema::Fix() {
}
// signature: World::_OGTriggerEntSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C64A0 -> 0x801C64EC
class EntityStub * World::_OGTriggerEntSchema::CreateStub(class _OGTriggerEntSchema * this /* r31 */) {
}
// signature: World::_OGTriggerEntSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801C64F0 -> 0x801C6508
void World::_OGTriggerEntSchema::DestroyStub() {
}
// signature: World::_OGTriggerEntSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801C6510 -> 0x801C6574
class Entity * World::_OGTriggerEntSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World19_OGTriggerEntEntity;
}
// signature: zTriggerEntity::Init(void *, void *)
// Range: 0x801C65C0 -> 0x801C6634
void zTriggerEntity::Init(void * asset /* r30 */) {
    // Local variables
    class zTriggerEntity * trig; // r31

    // References
    // -> static class zTriggerEntityMgr gTriggerEntityMgr;
}
// signature: zTriggerEntity::EventHandler(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801C6640 -> 0x801C6664
void zTriggerEntity::EventHandler() {
    // Local variables
    class zTriggerEntity * trig; // r0
}
// Range: 0x801C6670 -> 0x801C6BB4
void zTriggerEntity::Setup(class zTriggerEntity * this /* r15 */) {
    // Local variables
    class zTriggerEntityStatus * curBaseCheck; // r9

    {
        // Range: 0x801C668C -> 0x801C685C
        // Local variables
        unsigned int i; // r14
    }
    {
        // Range: 0x801C6898 -> 0x801C6A8C
        // Local variables
        unsigned int i; // r30
    }
    {
        // Range: 0x801C6ACC -> 0x801C6B6C
        // Local variables
        unsigned int i; // r5
    }

    // References
    // -> static class zTriggerEntityMgr gTriggerEntityMgr;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801C6BE0 -> 0x801C6D1C
int zTriggerEntity::FindNumberOfChildrenRecursive(class zTriggerEntity * this /* r27 */, class xBase * base /* r28 */) {
    // Local variables
    int numberOfChildren; // r0
    int totalChildren; // r31

    {
        // Range: 0x801C6C08 -> 0x801C6CF8
        // Local variables
        int i; // r30

        {
            // Range: 0x801C6C08 -> 0x801C6CF8
            // Local variables
            class xBase * child; // r29
        }
    }
}
// Range: 0x801C6D20 -> 0x801C6E90
class zTriggerEntityStatus * zTriggerEntity::FillBaseCheckRecursive(class zTriggerEntity * this /* r28 */, class xBase * base /* r29 */, class zTriggerEntityStatus * nextBaseCheck /* r17 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x801C6D48 -> 0x801C6E6C
        // Local variables
        int i; // r31

        {
            // Range: 0x801C6D48 -> 0x801C6E6C
            // Local variables
            class xBase * child; // r30
        }
    }
}
// Range: 0x801C6E90 -> 0x801C7274
void zTriggerEntity::Update(class zTriggerEntity * this /* r27 */) {
    // Local variables
    int numberOfEntitiesInside; // r29

    {
        // Range: 0x801C6F0C -> 0x801C713C
        // Local variables
        int i; // r28

        {
            // Range: 0x801C6F0C -> 0x801C713C
            // Local variables
            class xEnt * toCheck; // r6

            {
                // Range: 0x801C6F14 -> 0x801C6F14
                // Local variables
                class zNPCBase * npcBase; // r0
            }
            {
                // Range: 0x801C6F14 -> 0x801C6F14
                // Local variables
                unsigned int j; // r24
            }
            {
                // Range: 0x801C6F14 -> 0x801C7124
                // Local variables
                unsigned int j; // r24
            }
        }
    }
    {
        // Range: 0x801C714C -> 0x801C71DC
        // Local variables
        int diffInsideEntities; // r24

        {
            // Range: 0x801C7168 -> 0x801C7190
            // Local variables
            int i; // r25
        }
        {
            // Range: 0x801C71A4 -> 0x801C71D0
            // Local variables
            int i; // r25
        }
    }

    // References
    // -> class zGlobals globals;
}
