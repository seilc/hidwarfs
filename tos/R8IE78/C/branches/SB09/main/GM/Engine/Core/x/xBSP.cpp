/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xBSP.cpp
*/
// signature: xBSPEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8001C050 -> 0x8001C1E8
void xBSPEventCB() {
    // Local variables
    class xBSP * bsp; // r31
    int oldVisibilityCount; // r30
}
// Range: 0x8001C5A0 -> 0x8001C6D0
void xBSPUpdateVisibility(class xBSP * bsp /* r30 */) {
    // Local variables
    bool shouldTurnOn; // r31
}
// Range: 0x8001C6D0 -> 0x8001C79C
void xBSPUpdateVisibilityRefGroup(class xBSP * bsp /* r24 */, class xGroup * group /* r25 */, bool turnOnGroup /* r26 */) {
    // Local variables
    unsigned int numItems; // r29

    {
        // Range: 0x8001C704 -> 0x8001C788
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x8001C704 -> 0x8001C788
            // Local variables
            class xBase * item; // r27
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8001C8A0 -> 0x8001C948
void xBSPUpdateVisibilityRefGroup_ForTemplateMembers(class xOGEntity * * memberList /* r24 */, unsigned int memberCount /* r25 */, bool turnOnGroup /* r26 */) {
    {
        // Range: 0x8001C8D4 -> 0x8001C934
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x8001C8D4 -> 0x8001C934
            // Local variables
            class xOGEntity * item; // r27
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8001C950 -> 0x8001CF44
class Entity * Sext::BSP::Create(class EntityHandleBase * handle /* r20 */, class BSP * bspAsset /* r19 */) {
    // Local variables
    class hkArray collisionShapes; // r1+0x11C
    class hkArray shapeScales; // r1+0x110
    class hkArray worldTransforms; // r1+0x104
    class hkArray collisionFilters; // r1+0xF8
    class hkArray motionTypes; // r1+0xEC
    class hkArray masses; // r1+0xE0
    class hkArray frictions; // r1+0xD4
    class hkArray elasticities; // r1+0xC8
    class hkArray qualities; // r1+0xBC
    class hkpShape * mainModelShape; // r1+0x30
    class ReferenceModelEntry * refEntry; // r29

    {
        // Range: 0x8001CA24 -> 0x8001CA34
        // Local variables
        class xBase * refgrp; // r0
    }
    {
        // Range: 0x8001CAE4 -> 0x8001CB9C
        // Local variables
        class hkTransform trans; // r1+0x1E0
    }
    {
        // Range: 0x8001CBB0 -> 0x8001CDE8
        // Local variables
        unsigned short refIndex; // r28

        {
            // Range: 0x8001CBB0 -> 0x8001CDE8
            // Local variables
            class hkpShape * shape; // r1+0x2C
            class CollisionMeshBlobEntity * refCollMesh; // r27

            {
                // Range: 0x8001CBB4 -> 0x8001CDE8
                // Local variables
                unsigned short instance; // r26

                {
                    // Range: 0x8001CBB4 -> 0x8001CDE8
                    // Local variables
                    class xMat4x3 mat; // r1+0x128
                    class hkTransform xform; // r1+0x170
                    class xVec3 scale; // r1+0xB0
                    class Matrix43 refModelInstanceMat; // r1+0x1B0
                    enum E_HAVOK_COLLIDE_FILTER_LAYER refCollLayer; // r19
                }
            }
        }
    }
    {
        // Range: 0x8001CE30 -> 0x8001CEB0
        {
            // Range: 0x8001CE34 -> 0x8001CEB0
            // Local variables
            int rbCount; // r19

            {
                // Range: 0x8001CE34 -> 0x8001CEB0
                // Local variables
                class ReferenceModelEntry * curRefModelEntry; // r1+0x28
                unsigned short refInstanceNum; // r1+0x20
                class hkpRigidBody * body; // r21
            }
        }
    }

    // References
    // -> struct {} __vt__4xBSP;
}
// Range: 0x8001D7E0 -> 0x8001D864
void * xBSP::~xBSP(class xBSP * this /* r30 */) {
    // References
    // -> struct {} __vt__4xBSP;
}
// signature: xBSPTurnCollisionOnOff(xBSP *, const unsigned int)
// Range: 0x8001D870 -> 0x8001D8D4
void xBSPTurnCollisionOnOff(class xBSP * current /* r31 */) {
}
// Range: 0x8001D8E0 -> 0x8001DA50
void xBSPRestoreCollisionLayers(class xBSP * bsp /* r26 */) {
    // Local variables
    class hkArray collisionFilters; // r1+0xC
    class ReferenceModelEntry * refEntry; // r31
    class hkArray & bodies; // r0

    {
        // Range: 0x8001D94C -> 0x8001D9F0
        // Local variables
        unsigned short refIndex; // r29

        {
            // Range: 0x8001D94C -> 0x8001D9F0
            // Local variables
            class hkpShape * shape; // r0
            class CollisionMeshBlobEntity * refCollMesh; // r28

            {
                // Range: 0x8001D974 -> 0x8001D9F0
                // Local variables
                unsigned short instance; // r27

                {
                    // Range: 0x8001D974 -> 0x8001D9F0
                    // Local variables
                    enum E_HAVOK_COLLIDE_FILTER_LAYER refCollLayer; // r3
                }
            }
        }
    }
    {
        // Range: 0x8001D9F4 -> 0x8001DA30
        // Local variables
        int i; // r27

        {
            // Range: 0x8001D9F4 -> 0x8001DA30
            // Local variables
            class hkpRigidBody * body; // r3
        }
    }
}
// Range: 0x8001DA50 -> 0x8001DBA4
bool xBSPUpdateVisibilityRefGroup_ForEntities(class xBase * item /* r30 */, bool turnOnGroup /* r28 */) {
    // Local variables
    bool processedItem; // r31

    {
        // Range: 0x8001DA6C -> 0x8001DB8C
        // Local variables
        class xEnt * pXEnt; // reg65535

        {
            // Range: 0x8001DAC8 -> 0x8001DAFC
            // Local variables
            bool wasVisible; // r0
        }
    }

    // References
    // -> class zPlayerInventory inventory;
}
// signature: xBSPUpdateVisibilityRefGroup_ForGroups(xBase *, xBSP *, bool)
// Range: 0x8001DBB0 -> 0x8001DBF4
bool xBSPUpdateVisibilityRefGroup_ForGroups(class xBase * item /* r6 */) {
}
// Range: 0x8001DC00 -> 0x8001DD64
bool xBSPUpdateVisibilityRefGroup_ForEverythingElse(class xBase * item /* r29 */, bool turnOnGroup /* r30 */) {
    // Local variables
    bool processedItem; // r31

    {
        // Range: 0x8001DC48 -> 0x8001DC58
        // Local variables
        class zBreakawayPlatform * breakawayPlat; // reg65535
    }
    {
        // Range: 0x8001DC5C -> 0x8001DC70
        // Local variables
        class zFloatingCollectible * floatingCollectible; // r0
    }
    {
        // Range: 0x8001DC7C -> 0x8001DCD8
        // Local variables
        class xLightEnt * light; // r0

        {
            // Range: 0x8001DCA0 -> 0x8001DCD8
            // Local variables
            unsigned int wasVisible; // r30
        }
    }
}
