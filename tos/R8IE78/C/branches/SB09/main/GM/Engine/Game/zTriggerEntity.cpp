/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zTriggerEntity.cpp
*/
// Range: 0x8017D9E0 -> 0x8017DA2C
void zTriggerEntity_SceneUpdate() {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8017DA30 -> 0x8017DAAC
class Entity * Sext::TriggerEntityAsset::Create(class EntityHandleBase * handle /* r29 */, class TriggerEntityAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__14zTriggerEntity;
}
// Range: 0x8017DAB0 -> 0x8017DB0C
void zTriggerEntity::Init(class zTriggerEntity * this /* r30 */, class TriggerEntityAsset * asset /* r31 */) {
}
// Range: 0x8017DB10 -> 0x8017DB5C
void zTriggerEntity::DebugReset(class zTriggerEntity * this /* r31 */) {
}
// Range: 0x8017DB60 -> 0x8017DBD8
void zTriggerEntity::EventHandler(class xBase * from /* r28 */, class xBase * to /* r29 */, unsigned int toEvent /* r30 */, class EventAny * params /* r31 */) {
    // Local variables
    class zTriggerEntity * trig; // reg65535
}
// Range: 0x8017DBE0 -> 0x8017DE0C
void zTriggerEntity::DoSetup(class zTriggerEntity * this /* r31 */) {
    // Local variables
    class zTriggerEntityStatus * curBaseCheck; // r28

    {
        // Range: 0x8017DBF8 -> 0x8017DC60
        // Local variables
        unsigned int i; // r29
    }
    {
        // Range: 0x8017DC84 -> 0x8017DD14
        // Local variables
        unsigned int i; // r27
    }
    {
        // Range: 0x8017DD3C -> 0x8017DDF8
        // Local variables
        unsigned int i; // r6
    }
}
// Range: 0x8017DE80 -> 0x8017DEFC
int zTriggerEntity::FindMaxNumberOfChildrenRecursive(class zTriggerEntity * this /* r27 */, class xBase * base /* r28 */) {
    // Local variables
    int numberOfChildren; // r0
    int totalChildren; // r30

    {
        // Range: 0x8017DEA8 -> 0x8017DEE4
        // Local variables
        int i; // r29

        {
            // Range: 0x8017DEA8 -> 0x8017DEE4
            // Local variables
            class xBase * child; // r4
        }
    }
}
// signature: zTriggerEntity::FillBaseCheckRecursive(const xBase *, zTriggerEntityStatus *, bool)
// Range: 0x8017DF00 -> 0x8017DFB0
class zTriggerEntityStatus * zTriggerEntity::FillBaseCheckRecursive(class zTriggerEntity * this /* r26 */, class xBase * base /* r27 */, class zTriggerEntityStatus * nextBaseCheck /* r28 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x8017DF28 -> 0x8017DF98
        // Local variables
        int i; // r30

        {
            // Range: 0x8017DF28 -> 0x8017DF98
            // Local variables
            bool childIsDynamicGroup; // r6
            class xBase * child; // r29
        }
    }
}
// Range: 0x8017DFB0 -> 0x8017E1A8
void zTriggerEntity::UpdateDynamicCollections(class zTriggerEntity * this /* r23 */) {
    {
        // Range: 0x8017DFC4 -> 0x8017E194
        // Local variables
        int i; // r29

        {
            // Range: 0x8017DFD8 -> 0x8017E194
            // Local variables
            int numGroupItems; // r0
            bool triggerHasIt; // r27
            int firstChild; // reg65535
            int capacity; // r0
            class xGroup * group; // r28

            {
                // Range: 0x8017E010 -> 0x8017E100
                // Local variables
                int j; // r26

                {
                    // Range: 0x8017E010 -> 0x8017E100
                    // Local variables
                    class xBase * groupMember; // r25

                    {
                        // Range: 0x8017E028 -> 0x8017E070
                        // Local variables
                        int k; // r6
                    }
                    {
                        // Range: 0x8017E08C -> 0x8017E100
                        // Local variables
                        int k; // r4
                    }
                }
            }
            {
                // Range: 0x8017E100 -> 0x8017E194
                // Local variables
                int k; // r24
            }
        }
    }
}
// Range: 0x8017E1D0 -> 0x8017E574
void zTriggerEntity::Update(class zTriggerEntity * this /* r26 */) {
    // Local variables
    int numberOfEntitiesInside; // r29

    {
        // Range: 0x8017E200 -> 0x8017E420
        // Local variables
        int i; // r28

        {
            // Range: 0x8017E200 -> 0x8017E420
            // Local variables
            class xBase * base; // r27

            {
                // Range: 0x8017E200 -> 0x8017E320
                // Local variables
                enum eProjectileType projType; // r30
                class ProjectileAsset * projAsset; // r27

                {
                    // Range: 0x8017E200 -> 0x8017E320
                    {
                        // Range: 0x8017E200 -> 0x8017E320
                        // Local variables
                        class xVec3 chkPos; // r1+0x2C
                    }
                }
            }
            {
                // Range: 0x8017E320 -> 0x8017E3F4
                // Local variables
                class xVec3 boundCenter; // r1+0x20
                class xVec3 * chkPos; // r30

                {
                    // Range: 0x8017E324 -> 0x8017E364
                    // Local variables
                    class zNPCBase * npcBase; // r0
                }
            }
        }
    }
    {
        // Range: 0x8017E420 -> 0x8017E4AC
        // Local variables
        int diffInsideEntities; // r25

        {
            // Range: 0x8017E43C -> 0x8017E470
            // Local variables
            int i; // r27
        }
        {
            // Range: 0x8017E478 -> 0x8017E4AC
            // Local variables
            int i; // r27
        }
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
}
// signature: zTriggerEntity::SendReplyEvent(int)
// Range: 0x8017E5A0 -> 0x8017E714
void zTriggerEntity::SendReplyEvent(class zTriggerEntity * this /* r30 */) {
    {
        // Range: 0x8017E5FC -> 0x8017E65C
        // Local variables
        unsigned int j; // r27
    }
    {
        // Range: 0x8017E6A0 -> 0x8017E700
        // Local variables
        unsigned int j; // r27
    }
}
