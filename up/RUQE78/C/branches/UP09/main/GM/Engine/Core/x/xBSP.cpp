/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xBSP.cpp
*/
// signature: xBSPEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80039090 -> 0x800393A0
void xBSPEventCB() {
    // Local variables
    class xBSP * bsp; // r27
    int oldVisibilityCount; // r26

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8003A700 -> 0x8003AD2C
void xBSPUpdateVisibility(class xBSP * bsp /* r15 */) {
    // Local variables
    bool shouldTurnOn; // r16

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8003AD30 -> 0x8003AFC0
void xBSPUpdateVisibilityRefGroup(class xBSP * bsp /* r15 */, class xGroup * group /* r16 */, bool turnOnGroup /* r17 */) {
    {
        // Range: 0x8003AD90 -> 0x8003AF9C
        // Local variables
        unsigned int i; // r18
    }
}
// Range: 0x8003AFE0 -> 0x8003B5C0
class Entity * Sext::BSP::Create(class EntityHandleBase * handle /* r17 */, class BSP * bspAsset /* r16 */) {
    // Local variables
    class ModelPrototypeEntity * modelProto; // r17
    class CollisionMeshBlobEntity * collMesh; // r18
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
    class ModelPrototype & model; // r30
    class ReferenceModelEntry * refEntry; // r29

    {
        // Range: 0x8003B070 -> 0x8003B0BC
        // Local variables
        class xBase * refgrp; // r0
    }
    {
        // Range: 0x8003B160 -> 0x8003B220
        // Local variables
        class hkTransform trans; // r1+0x1E0
    }
    {
        // Range: 0x8003B238 -> 0x8003B428
        // Local variables
        unsigned short refIndex; // r28

        {
            // Range: 0x8003B238 -> 0x8003B428
            // Local variables
            class hkpShape * shape; // r1+0x2C
            class CollisionMeshBlobEntity * refCollMesh; // r27

            {
                // Range: 0x8003B23C -> 0x8003B414
                // Local variables
                unsigned short instance; // r26

                {
                    // Range: 0x8003B23C -> 0x8003B414
                    // Local variables
                    class xMat4x3 mat; // r1+0x128
                    class hkTransform xform; // r1+0x170
                    class xVec3 scale; // r1+0xB0
                    class Matrix43 refModelInstanceMat; // r1+0x1B0
                    enum E_HAVOK_COLLIDE_FILTER_LAYER refCollLayer; // r16
                }
            }
        }
    }
    {
        // Range: 0x8003B48C -> 0x8003B528
        // Local variables
        class hkArray & bodies; // r16

        {
            // Range: 0x8003B4AC -> 0x8003B514
            // Local variables
            int rbCount; // r18

            {
                // Range: 0x8003B4AC -> 0x8003B514
                // Local variables
                class ReferenceModelEntry * curRefModelEntry; // r1+0x28
                unsigned short refInstanceNum; // r1+0x20
                class hkpRigidBody * body; // r19
            }
        }
    }
}
// Range: 0x8003C2F0 -> 0x8003C3C4
void * xBSP::~xBSP(class xBSP * this /* r30 */) {
    // References
    // -> struct {} __vt__4xEnt;
    // -> struct {} __vt__4xBSP;
}
// Range: 0x8003C3D0 -> 0x8003C70C
bool xBSPUpdateVisibilityRefGroup_ForEntities(class xBase * item /* r24 */, bool turnOnGroup /* r25 */) {
    // Local variables
    bool processedItem; // r26

    {
        // Range: 0x8003C3EC -> 0x8003C6F4
        // Local variables
        class xEnt * pXEnt; // r0

        {
            // Range: 0x8003C46C -> 0x8003C58C
            // Local variables
            bool wasVisible; // r0
        }
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8003C720 -> 0x8003C840
bool xBSPUpdateVisibilityRefGroup_ForGroups(class xBase * item /* r24 */, class xBSP * bsp /* r25 */, bool turnOnGroup /* r26 */) {
}
// Range: 0x8003C840 -> 0x8003C9E4
bool xBSPUpdateVisibilityRefGroup_ForEverythingElse(class xBase * item /* r29 */, bool turnOnGroup /* r30 */) {
    // Local variables
    bool processedItem; // r31

    {
        // Range: 0x8003C88C -> 0x8003C89C
        // Local variables
        class zGeyser * geyser; // reg65535
    }
    {
        // Range: 0x8003C8A0 -> 0x8003C8B0
        // Local variables
        class zLaserTurret * turret; // reg65535
    }
    {
        // Range: 0x8003C8B4 -> 0x8003C8C4
        // Local variables
        class zLever * lever; // reg65535
    }
    {
        // Range: 0x8003C8C8 -> 0x8003C8D8
        // Local variables
        class zHouse * house; // reg65535
    }
    {
        // Range: 0x8003C8DC -> 0x8003C8EC
        // Local variables
        class zBranchSwitch * branchSwitch; // reg65535
    }
    {
        // Range: 0x8003C8F0 -> 0x8003C900
        // Local variables
        class zBreakawayPlatform * breakawayPlat; // reg65535
    }
    {
        // Range: 0x8003C904 -> 0x8003C918
        // Local variables
        class zFloatingCollectible * floatingCollectible; // r0
    }
    {
        // Range: 0x8003C924 -> 0x8003C980
        // Local variables
        class xLightEnt * light; // r0

        {
            // Range: 0x8003C948 -> 0x8003C980
            // Local variables
            unsigned int wasVisible; // r30
        }
    }
}
