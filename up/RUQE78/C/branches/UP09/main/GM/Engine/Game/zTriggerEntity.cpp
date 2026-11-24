/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zTriggerEntity.cpp
*/
// Range: 0x80268610 -> 0x802687CC
class Entity * Sext::TriggerEntityAsset::Create(class EntityHandleBase * handle /* r30 */, class TriggerEntityAsset * asset /* r29 */) {
    // References
    // -> struct {} __vt__14zTriggerEntity;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x802687E0 -> 0x8026888C
void zTriggerEntity::EventHandler(class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int toEvent /* r30 */, class EventAny * params /* r31 */) {
    // Local variables
    class zTriggerEntity * trig; // reg65535
}
// Range: 0x80268890 -> 0x80268CF4
void zTriggerEntity::DoSetup(class zTriggerEntity * this /* r15 */) {
    // Local variables
    class zTriggerEntityStatus * curBaseCheck; // r16

    {
        // Range: 0x802688AC -> 0x80268A1C
        // Local variables
        unsigned int i; // r14
    }
    {
        // Range: 0x80268A58 -> 0x80268BEC
        // Local variables
        unsigned int i; // r29
    }
    {
        // Range: 0x80268C2C -> 0x80268CCC
        // Local variables
        unsigned int i; // r5
    }
}
// Range: 0x80268D20 -> 0x80268E5C
int zTriggerEntity::FindNumberOfChildrenRecursive(class zTriggerEntity * this /* r27 */, class xBase * base /* r28 */) {
    // Local variables
    int numberOfChildren; // r0
    int totalChildren; // r31

    {
        // Range: 0x80268D48 -> 0x80268E38
        // Local variables
        int i; // r30

        {
            // Range: 0x80268D48 -> 0x80268E38
            // Local variables
            class xBase * child; // r29
        }
    }
}
// Range: 0x80268E60 -> 0x80268FD0
class zTriggerEntityStatus * zTriggerEntity::FillBaseCheckRecursive(class zTriggerEntity * this /* r28 */, class xBase * base /* r29 */, class zTriggerEntityStatus * nextBaseCheck /* r17 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x80268E88 -> 0x80268FAC
        // Local variables
        int i; // r31

        {
            // Range: 0x80268E88 -> 0x80268FAC
            // Local variables
            class xBase * child; // r30
        }
    }
}
// Range: 0x80268FD0 -> 0x802694E0
void zTriggerEntity::Update(class zTriggerEntity * this /* r23 */) {
    // Local variables
    int numberOfEntitiesInside; // r25

    {
        // Range: 0x80269008 -> 0x802693AC
        // Local variables
        int i; // r24

        {
            // Range: 0x80269008 -> 0x802693AC
            // Local variables
            class xVec3 pos; // r1+0x14

            {
                // Range: 0x80269008 -> 0x80269008
                // Local variables
                class zProjectileSpawner * projSpawner; // r0
            }
            {
                // Range: 0x80269008 -> 0x8026901C
                // Local variables
                class xVec3 * chkPos; // r4

                {
                    // Range: 0x80269008 -> 0x8026901C
                    // Local variables
                    class zNPCBase * npcBase; // r0
                }
            }
            {
                // Range: 0x8026901C -> 0x8026901C
                // Local variables
                unsigned int j; // r27
            }
            {
                // Range: 0x8026901C -> 0x80269394
                // Local variables
                unsigned int j; // r27
            }
        }
    }
    {
        // Range: 0x802693BC -> 0x80269448
        // Local variables
        int diffInsideEntities; // r19

        {
            // Range: 0x802693D8 -> 0x80269400
            // Local variables
            int i; // r20
        }
        {
            // Range: 0x80269410 -> 0x80269410
            // Local variables
            int i; // r19
        }
    }

    // References
    // -> class xSphere sphere;
    // -> static class zProjectileManager gProjectileManager;
    // -> unsigned int g_rttidParentTable[246];
    // -> class zGlobals globals;
}
