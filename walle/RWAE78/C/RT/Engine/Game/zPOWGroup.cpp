/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPOWGroup.cpp
*/
static class xBox sPOWUnitBox; // size: 0x18, address: 0x80798F50
class _OGPOWGroupSchema _OGPOWGroupschema; // size: 0x18, address: 0x80798F68
class SchemaRegistrator _OGPOWGroupschemaReg; // size: 0x8, address: 0x80798F80
// Range: 0x8017E2E0 -> 0x8017E2F0
void World::_OGPOWGroupEntity::Deactivate() {
}
// Range: 0x8017E2F0 -> 0x8017E340
void World::_OGPOWGroupEntity::Destroy(class _OGPOWGroupEntity * this /* r31 */) {
}
// signature: World::_OGPOWGroupSchema::Fix(World::Asset *, long, int)
// Range: 0x8017E3A0 -> 0x8017E3A8
void World::_OGPOWGroupSchema::Fix() {
}
// signature: World::_OGPOWGroupSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8017E3B0 -> 0x8017E3FC
class EntityStub * World::_OGPOWGroupSchema::CreateStub(class _OGPOWGroupSchema * this /* r31 */) {
}
// signature: World::_OGPOWGroupSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8017E400 -> 0x8017E418
void World::_OGPOWGroupSchema::DestroyStub() {
}
// signature: World::_OGPOWGroupSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8017E420 -> 0x8017E484
class Entity * World::_OGPOWGroupSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World17_OGPOWGroupEntity;
}
// signature: zPOWGroup_Init(void *, void *)
// Range: 0x8017E4D0 -> 0x8017E508
void zPOWGroup_Init() {
    // References
    // -> struct {} __vt__9zPOWGroup;
}
// signature: POWGroupEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017E510 -> 0x8017E52C
static void POWGroupEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x8017E530 -> 0x8017E6B8
void zPOWGroup::Init(class zPOWGroup * this /* r31 */, class zPOWGroupAsset * inAsset /* r29 */) {
    {
        // Range: 0x8017E5D8 -> 0x8017E674
        // Local variables
        unsigned int i; // r29
    }

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// signature: zPOWGroup::SetMatrix(dxTriMeshData *)
// Range: 0x8017E6C0 -> 0x8017E880
void zPOWGroup::SetMatrix() {
    {
        // Range: 0x8017E6D8 -> 0x8017E770
        // Local variables
        class Vector4 row_3; // r1+0x8
        class Vector4 row_2; // r1+0x18
        class Vector4 row_1; // r1+0x28
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// signature: zPOWGroup::UpdatePositions(zPOWGroup::positionDestination, xMat4x3 *)
// Range: 0x8017E880 -> 0x8017F3A8
void zPOWGroup::UpdatePositions(class zPOWGroup * this /* r29 */, enum positionDestination dest /* r30 */) {
    {
        // Range: 0x8017E960 -> 0x8017ED78
        // Local variables
        float ival; // f3
        float kdelta; // f0
        float jdelta; // f0
        float idelta; // f0
        class xVec3 startpos; // r1+0x14
        int numk; // r9
        int numj; // r8
        int numi; // r7
        int objIndex; // r6

        {
            // Range: 0x8017EB68 -> 0x8017ED60
            // Local variables
            int i; // r10

            {
                // Range: 0x8017EB68 -> 0x8017ED60
                // Local variables
                float jval; // f4

                {
                    // Range: 0x8017EB7C -> 0x8017ED44
                    // Local variables
                    int j; // r11

                    {
                        // Range: 0x8017EB7C -> 0x8017ED44
                        // Local variables
                        float kval; // f5

                        {
                            // Range: 0x8017EB8C -> 0x8017ED20
                            // Local variables
                            int k; // r12
                        }
                    }
                }
            }
        }
    }
    {
        // Range: 0x8017ED7C -> 0x8017F2D0
        // Local variables
        float ival; // f6
        float kdelta; // f5
        float jdelta; // f4
        float idelta; // f3
        class xVec3 startpos; // r1+0x8
        int numk; // r8
        int numj; // r7
        int numi; // r6
        int objIndex; // reg65535
        float radius; // f27

        {
            // Range: 0x8017EE4C -> 0x8017F0F4
            // Local variables
            int i; // r9

            {
                // Range: 0x8017EE4C -> 0x8017F0F4
                // Local variables
                float jval; // f7

                {
                    // Range: 0x8017EE4C -> 0x8017F0D8
                    // Local variables
                    int j; // r10

                    {
                        // Range: 0x8017EE4C -> 0x8017F0D8
                        // Local variables
                        float kval; // f8

                        {
                            // Range: 0x8017EE4C -> 0x8017F0BC
                            // Local variables
                            int k; // r11

                            {
                                // Range: 0x8017EE4C -> 0x8017F0BC
                                // Local variables
                                float z; // f10
                                float y; // f1
                                float x; // f9
                            }
                        }
                    }
                }
            }
        }
        {
            // Range: 0x8017F140 -> 0x8017F2C0
            // Local variables
            int m; // r31
        }
    }
    {
        // Range: 0x8017F2DC -> 0x8017F34C
        // Local variables
        int m; // r7
    }
}
// Range: 0x8017F3B0 -> 0x8017F4B4
void zPOWGroup::Setup(class zPOWGroup * this /* r31 */) {
    // Local variables
    class UIDModelReference * MIAsset; // r0
    unsigned int destructibleAssetID; // r8

    {
        // Range: 0x8017F40C -> 0x8017F48C
        // Local variables
        class xEnt * ent; // r0
    }

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x8017F4C0 -> 0x8017FA04
void zPOWGroup::Activate(class zPOWGroup * this /* r30 */) {
    // Local variables
    class UIDModelReference * MIAsset; // r0
    class ModelInstanceAsset * modelInstanceAsset; // r31
    class ModelPrototypeEntity * proto; // r0

    {
        // Range: 0x8017F564 -> 0x8017F6B8
        // Local variables
        int i; // r21
    }
    {
        // Range: 0x8017F734 -> 0x8017F9BC
        // Local variables
        int i; // r21
    }

    // References
    // -> static class zQueue sPhysQueue;
    // -> class zFactory factory;
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__14zPhysicsObject;
}
// Range: 0x8017FA10 -> 0x8017FA94
void zPOWGroup::Reset(class zPOWGroup * this /* r27 */) {
}
// Range: 0x8017FAA0 -> 0x8017FC5C
void zPOWGroup::ResetPhysObj(class zPOWGroup * this /* r30 */) {
    // Local variables
    class UIDModelReference * MIAsset; // r0
    class ModelInstanceAsset * modelInstanceAsset; // r31
    class ModelPrototypeEntity * proto; // r0

    {
        // Range: 0x8017FB94 -> 0x8017FC2C
        // Local variables
        int i; // r26
    }
}
// signature: zPOWGroup::FindClosest(xVec3 *, int *, int)
// Range: 0x8017FC60 -> 0x8017FD8C
void zPOWGroup::FindClosest() {
    // Local variables
    int found; // r31
    float distances[16]; // r1+0x18

    {
        // Range: 0x8017FC6C -> 0x8017FD68
        // Local variables
        int i; // r30

        {
            // Range: 0x8017FC6C -> 0x8017FD68
            // Local variables
            class zPhysicsObject * curObj; // r10

            {
                // Range: 0x8017FC6C -> 0x8017FD68
                // Local variables
                float curDistSqr; // f0

                {
                    // Range: 0x8017FC6C -> 0x8017FD68
                    // Local variables
                    int longestDistIdx; // r0
                    float longestDist; // f2

                    {
                        // Range: 0x8017FC80 -> 0x8017FC80
                        // Local variables
                        int j; // r29
                    }
                }
            }
        }
    }
}
// Range: 0x8017FD90 -> 0x80180840
void zPOWGroup::MoveTo(class zPOWGroup * this /* r17 */, class xVec3 * pos /* r18 */, int * indices /* r19 */, int count /* r20 */, float dt /* f31 */) {
    // Local variables
    bool alreadyDriven; // r23

    {
        // Range: 0x8017FE8C -> 0x8018073C
        // Local variables
        int i; // r22

        {
            // Range: 0x8017FE8C -> 0x8018073C
            // Local variables
            class zPhysicsObject * curObj; // r21

            {
                // Range: 0x8017FE8C -> 0x8018073C
                // Local variables
                class xVec3 newPos; // r1+0x9C
                class xVec3 * cPos; // r0

                {
                    // Range: 0x8017FE8C -> 0x8017FE8C
                    // Local variables
                    float len; // f0
                }
                {
                    // Range: 0x8017FE8C -> 0x8017FEB4
                    // Local variables
                    class xMat4x3 mat; // r1+0xD8
                }
            }
        }
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x80180840 -> 0x80180AC4
void zPOWGroup::Combat(class zPOWGroup * this /* r29 */, class xVec3 * center /* r30 */, float radiusSq /* f29 */) {
    // Local variables
    class xVec3 delta; // r1+0x2C

    {
        // Range: 0x801808B0 -> 0x80180A40
        // Local variables
        int i; // r31

        {
            // Range: 0x801808B0 -> 0x80180A40
            // Local variables
            class zPhysicsObject * curObj; // r23

            {
                // Range: 0x801808B0 -> 0x80180A40
                // Local variables
                class hkVector4 impulse; // r1+0x10
                class xVec3 playerDelta; // r1+0x20
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPOWGroup::GetBoundSphere(xVec3 &, float &)
// Range: 0x80180AD0 -> 0x80180D98
void zPOWGroup::GetBoundSphere(float * radius /* r31 */) {
    {
        // Range: 0x80180B04 -> 0x80180D0C
        // Local variables
        float atLen; // f0
        float upLen; // f0
        class Vector4 row_3; // r1+0x8
        class Vector4 row_2; // r1+0x18
        class Vector4 row_1; // r1+0x28
        class xVec3 right; // r1+0x38
        class xVec3 at; // r1+0x44
        class xVec3 up; // r1+0x50
    }
}
// Range: 0x80180DA0 -> 0x80181868
void zPOWGroup::Update(class zPOWGroup * this /* r15 */, float dt /* f22 */) {
    {
        // Range: 0x80180F7C -> 0x80181018
        // Local variables
        float radius; // r1+0x10
        class xVec3 center; // r1+0x90

        {
            // Range: 0x80180FA8 -> 0x80180FE0
            // Local variables
            int i; // r17

            {
                // Range: 0x80180FA8 -> 0x80180FE0
                // Local variables
                class zPhysicsObject * curObj; // r18
            }
        }
    }
    {
        // Range: 0x80181018 -> 0x8018177C
        // Local variables
        int i; // r20

        {
            // Range: 0x80181018 -> 0x8018177C
            // Local variables
            class zPhysicsObject * curObj; // r19

            {
                // Range: 0x80181018 -> 0x8018177C
                // Local variables
                class xVec3 * oldPos; // r18

                {
                    // Range: 0x80181018 -> 0x8018177C
                    // Local variables
                    class xVec3 * newPos; // r17

                    {
                        // Range: 0x80181018 -> 0x80181018
                        // Local variables
                        unsigned int i; // r16

                        {
                            // Range: 0x80181018 -> 0x80181018
                            // Local variables
                            bool newInside; // r0
                            bool oldInside; // r0
                        }
                    }
                    {
                        // Range: 0x80181018 -> 0x80181018
                        // Local variables
                        float lifetime; // f0
                    }
                }
            }
        }
    }

    // References
    // -> class zFactory factory;
    // -> bool gSysForceExit;
}
// Range: 0x80181870 -> 0x80181998
void zPOWGroup::SceneExit(class zPOWGroup * this /* r23 */) {
    // References
    // -> class zFactory factory;
    // -> bool gSysForceExit;
}
// signature: zPOWGroup::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801819A0 -> 0x80181C5C
void zPOWGroup::HandleEvent(class zPOWGroup * this /* r31 */) {
    {
        // Range: 0x80181B44 -> 0x80181BA0
        // Local variables
        int i; // r23
    }
    {
        // Range: 0x80181BC8 -> 0x80181C24
        // Local variables
        int i; // r23
    }

    // References
    // -> class zFactory factory;
    // -> bool gSysForceExit;
}
// Range: 0x80181C60 -> 0x80181FEC
void zPOWGroup::SetupDrivenBy(class zPOWGroup * this /* r29 */) {
    {
        // Range: 0x80181D2C -> 0x80181FA8
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x80181D2C -> 0x80181FA8
            {
                // Range: 0x80181D2C -> 0x80181FA8
                // Local variables
                class xEnt * dent; // r0

                {
                    // Range: 0x80181D2C -> 0x80181FA8
                    // Local variables
                    class xMat4x3 invMat; // r1+0x8
                }
            }
        }
    }

    // References
    // -> class zGlobals globals;
    // -> class xMat4x3 g_I3;
}
