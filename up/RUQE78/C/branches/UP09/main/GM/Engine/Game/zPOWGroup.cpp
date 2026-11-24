/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPOWGroup.cpp
*/
static class xBox sPOWUnitBox; // size: 0x18, address: 0x80825578
// Range: 0x80215600 -> 0x802156E8
class Entity * Sext::zPOWGroupAsset::Create(class EntityHandleBase * handle /* r29 */, class zPOWGroupAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__9zPOWGroup;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80215700 -> 0x80215834
void zPOWGroup::Init(class zPOWGroup * this /* r31 */, class zPOWGroupAsset * inAsset /* r28 */) {
    {
        // Range: 0x802157AC -> 0x802157EC
        // Local variables
        unsigned int i; // r28
    }
}
// signature: zPOWGroup::SetMatrix(dxTriMeshData *)
// Range: 0x80215840 -> 0x80215A00
void zPOWGroup::SetMatrix() {
    {
        // Range: 0x80215858 -> 0x802158F0
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
// Range: 0x80215A00 -> 0x80216510
void zPOWGroup::UpdatePositions(class zPOWGroup * this /* r29 */, enum positionDestination dest /* r30 */) {
    {
        // Range: 0x80215AE0 -> 0x80215EE8
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
            // Range: 0x80215CDC -> 0x80215ED0
            // Local variables
            int i; // r10

            {
                // Range: 0x80215CDC -> 0x80215ED0
                // Local variables
                float jval; // f4

                {
                    // Range: 0x80215CEC -> 0x80215EB4
                    // Local variables
                    int j; // r11

                    {
                        // Range: 0x80215CEC -> 0x80215EB4
                        // Local variables
                        float kval; // f5

                        {
                            // Range: 0x80215CFC -> 0x80215E90
                            // Local variables
                            int k; // r12
                        }
                    }
                }
            }
        }
    }
    {
        // Range: 0x80215EEC -> 0x80216438
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
            // Range: 0x80215FB8 -> 0x8021625C
            // Local variables
            int i; // r9

            {
                // Range: 0x80215FB8 -> 0x8021625C
                // Local variables
                float jval; // f7

                {
                    // Range: 0x80215FB8 -> 0x80216240
                    // Local variables
                    int j; // r10

                    {
                        // Range: 0x80215FB8 -> 0x80216240
                        // Local variables
                        float kval; // f8

                        {
                            // Range: 0x80215FB8 -> 0x80216224
                            // Local variables
                            int k; // r11

                            {
                                // Range: 0x80215FB8 -> 0x80216224
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
            // Range: 0x802162A8 -> 0x80216428
            // Local variables
            int m; // r31
        }
    }
    {
        // Range: 0x80216444 -> 0x802164B4
        // Local variables
        int m; // r7
    }
}
// Range: 0x80216510 -> 0x802165E0
void zPOWGroup::Setup(class zPOWGroup * this /* r29 */) {
    // Local variables
    class UIDModelReference * MIAsset; // r0
    unsigned int destructibleAssetID; // r4

    {
        // Range: 0x80216580 -> 0x802165B0
        // Local variables
        class xEnt * ent; // r0
    }
}
// Range: 0x802165E0 -> 0x80216BBC
void zPOWGroup::Activate(class zPOWGroup * this /* r30 */) {
    // Local variables
    class UIDModelReference * MIAsset; // r0
    class ModelInstanceAsset * modelInstanceAsset; // r31
    class ModelPrototypeEntity * proto; // r0

    {
        // Range: 0x802166AC -> 0x80216820
        // Local variables
        int i; // r19
    }
    {
        // Range: 0x80216898 -> 0x80216B5C
        // Local variables
        int i; // r18
    }

    // References
    // -> static class zQueue sPhysQueue;
    // -> class zFactory factory;
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__14zPhysicsObject;
}
// Range: 0x80216BC0 -> 0x80216C58
void zPOWGroup::Reset(class zPOWGroup * this /* r27 */) {
}
// Range: 0x80216C60 -> 0x80216E60
void zPOWGroup::DebugReset(class zPOWGroup * this /* r31 */) {
    // References
    // -> class zFactory factory;
    // -> bool gSoundReadyToExit;
    // -> bool gSysForceExit;
}
// Range: 0x80216E60 -> 0x80217044
void zPOWGroup::ResetPhysObj(class zPOWGroup * this /* r30 */) {
    // Local variables
    class UIDModelReference * MIAsset; // r0
    class ModelInstanceAsset * modelInstanceAsset; // r31
    class ModelPrototypeEntity * proto; // r0

    {
        // Range: 0x80216F64 -> 0x8021700C
        // Local variables
        int i; // r26
    }
}
// Range: 0x80217050 -> 0x802172A0
void zPOWGroup::Combat(class zPOWGroup * this /* r29 */, class xVec3 * center /* r30 */, float radiusSq /* f30 */) {
    // Local variables
    class xVec3 delta; // r1+0x2C

    {
        // Range: 0x802170B8 -> 0x80217240
        // Local variables
        int i; // r31

        {
            // Range: 0x802170B8 -> 0x80217240
            // Local variables
            class zPhysicsObject * curObj; // r23

            {
                // Range: 0x802170B8 -> 0x80217240
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
// Range: 0x802172A0 -> 0x80217504
void zPOWGroup::GetBoundSphere() {
    {
        // Range: 0x802172AC -> 0x8021749C
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
// Range: 0x80217510 -> 0x80217948
void zPOWGroup::Update(class zPOWGroup * this /* r21 */, float dt /* f28 */) {
    {
        // Range: 0x802175C0 -> 0x80217664
        // Local variables
        float radius; // r1+0x10
        class xVec3 center; // r1+0x40

        {
            // Range: 0x802175E8 -> 0x80217630
            // Local variables
            int i; // r19

            {
                // Range: 0x802175E8 -> 0x80217630
                // Local variables
                class zPhysicsObject * curObj; // r20
            }
        }
    }
    {
        // Range: 0x80217698 -> 0x802178CC
        // Local variables
        int i; // r26

        {
            // Range: 0x80217698 -> 0x802178CC
            // Local variables
            class zPhysicsObject * curObj; // r25

            {
                // Range: 0x80217698 -> 0x802178CC
                // Local variables
                class xVec3 * oldPos; // r24

                {
                    // Range: 0x80217698 -> 0x802178CC
                    // Local variables
                    class xVec3 * newPos; // r23

                    {
                        // Range: 0x80217698 -> 0x80217698
                        // Local variables
                        unsigned int i; // r22

                        {
                            // Range: 0x80217698 -> 0x80217698
                            // Local variables
                            bool newInside; // r0
                            bool oldInside; // r0
                        }
                    }
                    {
                        // Range: 0x80217698 -> 0x802176C4
                        // Local variables
                        float lifetime; // f1
                    }
                }
            }
        }
    }
}
// Range: 0x802179B0 -> 0x80217B10
void zPOWGroup::Unactivate(class zPOWGroup * this /* r30 */) {
    {
        // Range: 0x802179CC -> 0x80217AE0
        // Local variables
        int i; // r31

        {
            // Range: 0x802179CC -> 0x80217AE0
            // Local variables
            class zPhysicsObject * curObj; // r22
        }
    }

    // References
    // -> class zFactory factory;
    // -> bool gSoundReadyToExit;
    // -> bool gSysForceExit;
}
// Range: 0x80217B10 -> 0x80217C70
void zPOWGroup::SceneExit(class zPOWGroup * this /* r29 */) {
    // References
    // -> class zFactory factory;
    // -> bool gSoundReadyToExit;
    // -> bool gSysForceExit;
}
// signature: zPOWGroup::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80217C70 -> 0x80217F74
void zPOWGroup::HandleEvent(class zPOWGroup * this /* r29 */) {
    {
        // Range: 0x80217E50 -> 0x80217EAC
        // Local variables
        int i; // r24
    }

    // References
    // -> class zFactory factory;
    // -> bool gSoundReadyToExit;
    // -> bool gSysForceExit;
}
// Range: 0x80217F80 -> 0x80218040
void zPOWGroup::Settle(class zPOWGroup * this /* r28 */) {
    {
        // Range: 0x80217F9C -> 0x80217FFC
        // Local variables
        int i; // r29
    }
}
// Range: 0x80218040 -> 0x802183D4
void zPOWGroup::SetupDrivenBy(class zPOWGroup * this /* r30 */) {
    {
        // Range: 0x8021810C -> 0x80218390
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x8021810C -> 0x80218390
            {
                // Range: 0x8021810C -> 0x80218390
                // Local variables
                class xEnt * dent; // r4

                {
                    // Range: 0x8021810C -> 0x80218390
                    // Local variables
                    class xMat4x3 invMat; // r1+0x8
                }
            }
        }
    }

    // References
    // -> class xMat4x3 g_I3;
}
