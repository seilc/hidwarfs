/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPOWGroup.cpp
*/
static class xBox sPOWUnitBox; // size: 0x18, address: 0x80754A38
// Range: 0x801244A0 -> 0x8012453C
class Entity * Sext::zPOWGroupAsset::Create(class EntityHandleBase * handle /* r29 */, class zPOWGroupAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__9zPOWGroup;
}
// Range: 0x80124540 -> 0x80124648
void zPOWGroup::Init(class zPOWGroup * this /* r31 */, class zPOWGroupAsset * inAsset /* r28 */) {
    {
        // Range: 0x801245E0 -> 0x80124628
        // Local variables
        unsigned int i; // r28
    }
}
// signature: zPOWGroup::InitPositions(dxTriMeshData *)
// Range: 0x80124650 -> 0x801246C4
void zPOWGroup::InitPositions(class zPOWGroup * this /* r29 */) {
    {
        // Range: 0x80124678 -> 0x801246B0
        // Local variables
        int i; // r30
    }
}
// signature: zPOWGroup::SetMatrix(dxTriMeshData *)
// Range: 0x801246D0 -> 0x80124880
void zPOWGroup::SetMatrix(class zPOWGroup * this /* r31 */) {
    {
        // Range: 0x801246F8 -> 0x8012477C
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
// Range: 0x801248C0 -> 0x801251A4
void zPOWGroup::UpdatePositions(class zPOWGroup * this /* r30 */, enum positionDestination dest /* r31 */) {
    {
        // Range: 0x80124954 -> 0x80124C6C
        // Local variables
        float ival; // f30
        float kdelta; // f0
        float jdelta; // f0
        float idelta; // f0
        class xVec3 startpos; // r1+0x14
        int numk; // r25
        int numj; // r26
        int numi; // r27
        int objIndex; // r28

        {
            // Range: 0x80124B1C -> 0x80124C6C
            // Local variables
            int i; // r24

            {
                // Range: 0x80124B1C -> 0x80124C6C
                // Local variables
                float jval; // f31

                {
                    // Range: 0x80124B2C -> 0x80124C50
                    // Local variables
                    int j; // r23

                    {
                        // Range: 0x80124B2C -> 0x80124C50
                        // Local variables
                        float kval; // f26

                        {
                            // Range: 0x80124B38 -> 0x80124C34
                            // Local variables
                            int k; // r22
                        }
                    }
                }
            }
        }
    }
    {
        // Range: 0x80124C70 -> 0x801250BC
        // Local variables
        float ival; // f24
        float kdelta; // f25
        float jdelta; // f31
        float idelta; // f26
        class xVec3 startpos; // r1+0x8
        int numk; // r24
        int numj; // r23
        int numi; // r22
        int objIndex; // reg65535
        float radius; // f27

        {
            // Range: 0x80124D58 -> 0x80124F04
            // Local variables
            int i; // r25

            {
                // Range: 0x80124D58 -> 0x80124F04
                // Local variables
                float jval; // f23

                {
                    // Range: 0x80124D58 -> 0x80124EE8
                    // Local variables
                    int j; // r26

                    {
                        // Range: 0x80124D58 -> 0x80124EE8
                        // Local variables
                        float kval; // f22

                        {
                            // Range: 0x80124D58 -> 0x80124ECC
                            // Local variables
                            int k; // r27

                            {
                                // Range: 0x80124D58 -> 0x80124ECC
                                // Local variables
                                float z; // f0
                                float y; // f0
                                float x; // f21
                            }
                        }
                    }
                }
            }
        }
        {
            // Range: 0x80124F2C -> 0x801250BC
            // Local variables
            int m; // r28
        }
    }
    {
        // Range: 0x801250C8 -> 0x80125134
        // Local variables
        int m; // r21
    }
}
// Range: 0x801251B0 -> 0x8012525C
void zPOWGroup::Setup(class zPOWGroup * this /* r29 */) {
    // Local variables
    class UIDModelReference * MIAsset; // r0
    unsigned int destructibleAssetID; // r4

    {
        // Range: 0x80125218 -> 0x80125234
        // Local variables
        class xEnt * ent; // r0
    }
}
// Range: 0x80125260 -> 0x80125488
void zPOWGroup::Activate(class zPOWGroup * this /* r30 */) {
    // Local variables
    class UIDModelReference * MIAsset; // r0
    class ModelInstanceAsset * modelInstanceAsset; // r31
    class ModelPrototypeEntity * proto; // r0

    {
        // Range: 0x80125304 -> 0x8012538C
        // Local variables
        int i; // r24
    }
    {
        // Range: 0x801253A0 -> 0x80125460
        // Local variables
        int i; // r24

        {
            // Range: 0x801253A0 -> 0x80125460
            // Local variables
            bool success; // r0

            {
                // Range: 0x801253B0 -> 0x80125460
                // Local variables
                class zPhysicsObject * curObj; // r25
            }
        }
    }

    // References
    // -> class Factory factory;
}
// Range: 0x80125490 -> 0x801254D4
void zPOWGroup::Reset(class zPOWGroup * this /* r31 */) {
}
// Range: 0x801254E0 -> 0x801255B4
void zPOWGroup::DebugReset(class zPOWGroup * this /* r29 */) {
    // Local variables
    int oldNumObjs; // r4
}
// Range: 0x801255C0 -> 0x80125740
void zPOWGroup::ResetPhysObj(class zPOWGroup * this /* r30 */) {
    // Local variables
    class UIDModelReference * MIAsset; // r0
    class ModelInstanceAsset * modelInstanceAsset; // r31
    class ModelPrototypeEntity * proto; // r0

    {
        // Range: 0x80125668 -> 0x80125720
        // Local variables
        int i; // r26

        {
            // Range: 0x80125668 -> 0x80125720
            // Local variables
            bool success; // r0

            {
                // Range: 0x80125674 -> 0x80125720
                // Local variables
                class zPhysicsObject * curObj; // r25
            }
        }
    }

    // References
    // -> class Factory factory;
}
// Range: 0x80125740 -> 0x801258BC
void zPOWGroup::Combat(class zPOWGroup * this /* r30 */, class xVec3 * center /* r31 */, float radiusSq /* f29 */) {
    // Local variables
    class xVec3 delta; // r1+0x2C

    {
        // Range: 0x80125790 -> 0x80125888
        // Local variables
        int i; // r24

        {
            // Range: 0x80125790 -> 0x80125888
            // Local variables
            class zPhysicsObject * curObj; // r23

            {
                // Range: 0x80125790 -> 0x80125888
                // Local variables
                class hkVector4 impulse; // r1+0x10
                class xVec3 playerDelta; // r1+0x20
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801258C0 -> 0x80125A3C
void zPOWGroup::GetBoundSphere(class zPOWGroup * this /* r29 */, class xVec3 & center /* r30 */, float & radius /* r31 */) {
    {
        // Range: 0x801258E8 -> 0x801259CC
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
// Range: 0x80125A40 -> 0x80125F10
void zPOWGroup::Update(class zPOWGroup * this /* r21 */, float dt /* f25 */) {
    {
        // Range: 0x80125B00 -> 0x80125B8C
        // Local variables
        float radius; // r1+0x10
        class xVec3 center; // r1+0x40

        {
            // Range: 0x80125B28 -> 0x80125B68
            // Local variables
            int i; // r19

            {
                // Range: 0x80125B28 -> 0x80125B68
                // Local variables
                class zPhysicsObject * curObj; // r20
            }
        }
    }
    {
        // Range: 0x80125BC0 -> 0x80125E90
        // Local variables
        int i; // r25

        {
            // Range: 0x80125BC0 -> 0x80125E90
            // Local variables
            class zPhysicsObject * curObj; // r24

            {
                // Range: 0x80125BC0 -> 0x80125E90
                {
                    // Range: 0x80125BC0 -> 0x80125E90
                    // Local variables
                    class xVec3 * newPos; // r23

                    {
                        // Range: 0x80125BC0 -> 0x80125BC0
                        // Local variables
                        unsigned int i; // r22

                        {
                            // Range: 0x80125BC0 -> 0x80125BC0
                            // Local variables
                            bool newInside; // r0
                            bool oldInside; // r0
                        }
                    }
                    {
                        // Range: 0x80125BC0 -> 0x80125BD4
                        // Local variables
                        float lifetime; // f0
                    }
                }
            }
        }
    }
}
// Range: 0x80125F10 -> 0x80125F74
void zPOWGroup::RemoveFromSimWorld(class zPOWGroup * this /* r29 */) {
    {
        // Range: 0x80125F24 -> 0x80125F58
        // Local variables
        int i; // r30

        {
            // Range: 0x80125F24 -> 0x80125F58
            // Local variables
            class zPhysicsObject * curObj; // r3
        }
    }
}
// Range: 0x80125F80 -> 0x80126004
void zPOWGroup::Unactivate(class zPOWGroup * this /* r26 */) {
    {
        // Range: 0x80125F90 -> 0x80125FF0
        // Local variables
        int i; // r28

        {
            // Range: 0x80125F90 -> 0x80125FF0
            // Local variables
            class zPhysicsObject * curObj; // r27
        }
    }

    // References
    // -> class Factory factory;
}
// signature: zPOWGroup::Remove(zPhysicsObject *)
// Range: 0x80126010 -> 0x8012604C
void zPOWGroup::Remove() {
    {
        // Range: 0x80126014 -> 0x80126048
        // Local variables
        int i; // r0
    }
}
// Range: 0x80126050 -> 0x80126054
void zPOWGroup::SceneExit() {
}
// signature: zPOWGroup::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80126060 -> 0x801261B4
void zPOWGroup::HandleEvent(class zPOWGroup * this /* r31 */) {
    {
        // Range: 0x80126118 -> 0x80126198
        // Local variables
        int i; // r28
    }
}
// Range: 0x801261C0 -> 0x80126268
void zPOWGroup::Settle(class zPOWGroup * this /* r28 */) {
    {
        // Range: 0x801261D4 -> 0x80126254
        // Local variables
        int i; // r29
    }
}
// Range: 0x80126270 -> 0x8012635C
void zPOWGroup::SetupDrivenBy(class zPOWGroup * this /* r28 */) {
    {
        // Range: 0x801262AC -> 0x80126348
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x801262AC -> 0x80126348
            {
                // Range: 0x801262C0 -> 0x80126348
                // Local variables
                class xEnt * dent; // r3

                {
                    // Range: 0x801262E8 -> 0x80126348
                    // Local variables
                    class xMat4x3 invMat; // r1+0x8
                }
            }
        }
    }

    // References
    // -> class xMat4x3 g_I3;
}
