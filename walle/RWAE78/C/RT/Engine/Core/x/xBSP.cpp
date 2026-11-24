/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xBSP.cpp
*/
static class xOGSchema BSPSchema; // size: 0x18, address: 0x807538A0
static class SchemaRegistrator BSPSchemaReg; // size: 0x8, address: 0x807538B8
// signature: xBSPEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80019560 -> 0x80019864
void xBSPEventCB() {
    // Local variables
    class xBSP * bsp; // r31
    int oldVisibilityCount; // r30

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80019A50 -> 0x80019D9C
void xBSPUpdateVisibility(class xBSP * bsp /* r30 */) {
    // Local variables
    bool shouldTurnOn; // r31

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80019DC0 -> 0x8001A200
void xBSPUpdateVisibilityRefGroup(class xBSP * bsp /* r15 */, class xGroup * group /* r16 */, bool turnOnGroup /* r17 */) {
    // Local variables
    void (* baseUpdatesEventHandler)(class xBase *); // r21
    unsigned int numItems; // r20

    {
        // Range: 0x80019E10 -> 0x8001A1DC
        // Local variables
        unsigned int i; // r19

        {
            // Range: 0x80019E10 -> 0x8001A1DC
            {
                // Range: 0x80019E10 -> 0x80019E30
                // Local variables
                class xEnt * pXEnt; // r0

                {
                    // Range: 0x80019E10 -> 0x80019E30
                    // Local variables
                    bool wasVisible; // r0
                }
            }
            {
                // Range: 0x80019E30 -> 0x80019E30
                // Local variables
                class zBreakawayPlatform * breakawayPlat; // r0
            }
            {
                // Range: 0x80019E30 -> 0x80019E30
                // Local variables
                class zFloatingCollectible * floatingCollectible; // r0
            }
            {
                // Range: 0x80019E30 -> 0x8001A1DC
                // Local variables
                class xLight * light; // r18

                {
                    // Range: 0x8001A1A4 -> 0x8001A1DC
                    // Local variables
                    unsigned int wasVisible; // r22
                }
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
}
// signature: xBSPInit(void *, void *)
// Range: 0x8001A230 -> 0x8001AA90
void xBSPInit(void * asset /* r20 */) {
    // Local variables
    class xBSP * bsp; // r30
    class BSP * bspAsset; // r0
    class xEntAsset * bspEntAsset; // r0
    class xOGEntityModelContext context; // r1+0x2C
    class BSPEntity * entity; // r26
    class ModelPrototypeEntity * modelProto; // r25
    class CollisionMeshBlobEntity * collMesh; // r1+0x28
    class dxTriMeshData * triMeshData; // r0
    class hkArray convexShapes; // r1+0xFC
    class hkArray convexTransforms; // r1+0xF0
    class hkArray convexFilters; // r1+0xE4
    class hkArray nonConvexShapes; // r1+0xD8
    class hkArray nonConvexTransforms; // r1+0xCC
    class hkArray nonConvexBlobEntities; // r1+0xC0
    class hkArray nonConvexFilters; // r1+0xB4
    class hkArray nonConvexMatrices; // r1+0xA8
    class hkArray constructedBodies; // r1+0x9C
    class hkpShape * tempShape; // r1+0x24
    enum hkpShapeType theType; // r24
    class hkpRigidBody * newBody; // r1+0x20
    class hkpRigidBodyCinfo cinfo; // r1+0x190
    int startBodyIndex; // r20
    int bodyIt; // r21

    {
        // Range: 0x8001A29C -> 0x8001A2BC
        // Local variables
        class xBase * refgrp; // r0
    }
    {
        // Range: 0x8001A324 -> 0x8001A39C
        // Local variables
        class xVec3 * upper; // r26
        class xVec3 * lower; // r4
    }
    {
        // Range: 0x8001A538 -> 0x8001A70C
        // Local variables
        int i; // r23

        {
            // Range: 0x8001A538 -> 0x8001A70C
            // Local variables
            class xMat4x3 mat; // r1+0x108
            class hkTransform xform; // r1+0x150
            class xVec3 scale; // r1+0x90
            class hkpShape * pOrigShape; // r20
            enum E_HAVOK_COLLIDE_FILTER_LAYER refCollLayer; // r21
            class RefColl * pRefColl; // r22
        }
    }
    {
        // Range: 0x8001A770 -> 0x8001A784
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x8001A958 -> 0x8001A9F0
        // Local variables
        int bodyIt; // r22
        int infoIt; // r21

        {
            // Range: 0x8001A958 -> 0x8001A9F0
            // Local variables
            int coll_count; // r0
        }
    }

    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x8001BF50 -> 0x8001C0C8
void xBSPSceneExit() {
    // Local variables
    class xBSP * current; // r28
    class xBSP * last; // r27

    {
        // Range: 0x8001BFDC -> 0x8001BFDC
        // Local variables
        int i; // r26

        {
            // Range: 0x8001BFDC -> 0x8001BFDC
            // Local variables
            class xCollisionEnt * pEnt; // r25
        }
    }

    // References
    // -> class zGlobals globals;
    // -> static class xAssetTypeIDEntry typeList[248];
}
// Range: 0x8001C0D0 -> 0x8001C198
void xBSPTurnCollisionOnOff(class xBSP * current /* r27 */, unsigned int TurnOff /* r28 */) {
    {
        // Range: 0x8001C124 -> 0x8001C174
        // Local variables
        int i; // r30

        {
            // Range: 0x8001C124 -> 0x8001C174
            // Local variables
            class xCollisionEnt * pEnt; // r29
        }
    }
}
