/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCSteering.cpp
*/
// signature: zNPCSteeringCollisionHandler::AddEdgeToSimplexInput(xVec3 &, float, float, hkpSimplexSolverInput &)
// Range: 0x801DFCB0 -> 0x801DFE9C
void zNPCSteeringCollisionHandler::AddEdgeToSimplexInput() {
    // Local variables
    class hkpSurfaceConstraintInfo * pConstraints; // r6
    int numConstraints; // r0

    {
        // Range: 0x801DFD48 -> 0x801DFE94
        // Local variables
        class zNPCEntity * npcEnt; // r0

        {
            // Range: 0x801DFD70 -> 0x801DFE94
            // Local variables
            class xVec3 npcVelXZ; // r1+0x8
        }
    }

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x801DFEA0 -> 0x801E02E8
void zNPCSteeringCollisionHandler::HandleWallnetEdges(class zNPCSteeringCollisionHandler * this /* r23 */, class hkpSimplexSolverInput & input /* r24 */) {
    // Local variables
    class zWallNetPositionXZ * wallNetPos; // r16
    float boundR; // f31
    class xVec3 npcPos; // r1+0x2C
    float npcSpeed; // f0
    float dt; // f0
    float sweepDist; // f29
    class xVec3 sweepDir; // r1+0x20
    class zWallNet * wallNet; // r27
    int searchTriangles[256]; // r1+0x4B8
    int searchTrianglesFront; // r1+0x8B8
    int searchTrianglesBack; // r26
    int isInSearchTriangles[256]; // r1+0xB8
    class zSweptCircle swc; // r1+0x78

    {
        // Range: 0x801E0098 -> 0x801E02A0
        // Local variables
        int curSearchTriangle; // r0

        {
            // Range: 0x801E0098 -> 0x801E0278
            // Local variables
            int i; // r25

            {
                // Range: 0x801E0098 -> 0x801E0278
                // Local variables
                class zSweptCircle curSwc; // r1+0x38

                {
                    // Range: 0x801E0098 -> 0x801E0278
                    {
                        // Range: 0x801E0098 -> 0x801E0250
                        // Local variables
                        float edgeDistance; // f1
                        class xVec3 edgeNormal; // r1+0x14
                    }
                }
            }
        }
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zNPCSteeringCollisionHandler::processConstraintsCallback(const hkArray<hkpRootCdPoint> &, hkpSimplexSolverInput &)
// Range: 0x801E02F0 -> 0x801E05FC
void zNPCSteeringCollisionHandler::processConstraintsCallback(class zNPCSteeringCollisionHandler * this /* r29 */, class hkpSimplexSolverInput & input /* r30 */) {
    // Local variables
    class hkpSurfaceConstraintInfo * pConstraints; // r7
    float floorNormalUp; // f1
    int floorIndex; // r8
    class xVec3 surfaceVelocity; // r1+0x2C

    {
        // Range: 0x801E0308 -> 0x801E0350
        // Local variables
        int i; // r6

        {
            // Range: 0x801E0308 -> 0x801E0350
            // Local variables
            float normalUp; // f0
        }
    }
    {
        // Range: 0x801E0364 -> 0x801E05A8
        // Local variables
        class SurfaceGamePlay * surface; // r5
        class hkpRigidBody * pRigidBody; // r3
        class xEnt * pEnt; // r9
        unsigned int shapeKey; // r4
        class xBase * baseB; // r6
        class xBase * baseA; // r8
        class xVec3 normal; // r1+0x20
        class hkVector4 & hkNormal; // r4

        {
            // Range: 0x801E051C -> 0x801E05A8
            // Local variables
            class zCombatDamageInfo info; // r1+0x38
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteering::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801E0600 -> 0x801E06D0
bool zNPCSteering::SystemEvent(class zNPCSteering * this /* r29 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x801E062C -> 0x801E06B0
        // Local variables
        class xBase * to_param_widget; // r5
        class EventActionSwitchWallNet * params; // r0
    }
}
// signature: zNPCSteering::ApplyExternalForce(const xVec3 *)
// Range: 0x801E06D0 -> 0x801E0718
void zNPCSteering::ApplyExternalForce() {
    // Local variables
    float npcMass; // f1
}
// signature: zNPCSteering::ApplyExternalImpulse(const xVec3 *)
// Range: 0x801E0720 -> 0x801E0768
void zNPCSteering::ApplyExternalImpulse() {
    // Local variables
    float npcMass; // f1
}
// signature: zNPCSteering::SwitchWallNet(zWallNet *)
// Range: 0x801E0770 -> 0x801E0778
void zNPCSteering::SwitchWallNet() {
}
// Range: 0x801E0780 -> 0x801E08B0
void zNPCSingleSteering::AllAttached(class zNPCSingleSteering * this /* r31 */) {
    {
        // Range: 0x801E07A8 -> 0x801E07EC
        // Local variables
        class xBase * b; // r3
    }

    // References
    // -> struct {} __vt__28zNPCSteeringCollisionHandler;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zNPCSingleSteering::Detached(zNPCStatus *)
// Range: 0x801E08B0 -> 0x801E097C
void zNPCSingleSteering::Detached() {
}
// Range: 0x801E0980 -> 0x801E0A50
void zNPCSingleSteering::SetControl(class zNPCSingleSteering * this /* r30 */, class zNPCSteeringControl * control /* r31 */) {
    // Local variables
    class zNPCSteeringControl * oldControl; // r0
}
// signature: zNPCSingleSteering::RemoveControl(zNPCSteeringControl *)
// Range: 0x801E0A50 -> 0x801E0ABC
void zNPCSingleSteering::RemoveControl(class zNPCSingleSteering * this /* r31 */) {
}
// Range: 0x801E0AC0 -> 0x801E0FCC
void zNPCSingleSteering::ApplySteering(class zNPCSingleSteering * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 acc; // r1+0x48
    class xVec3 internalAcc; // r1+0x3C
    class xVec3 constrainedVel; // r1+0x30

    {
        // Range: 0x801E0E84 -> 0x801E0EC8
        // Local variables
        class xVec3 & pos; // r0
    }
    {
        // Range: 0x801E0EEC -> 0x801E0F48
        // Local variables
        class zNPCSteeringDest closestPos; // r1+0x20
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSingleSteering::ApplyHeadingToNPC(const xVec3 &, zNPCEntity *, float, bool)
// Range: 0x801E0FE0 -> 0x801E1418
void zNPCSingleSteering::ApplyHeadingToNPC(class zNPCSingleSteering * this /* r30 */, class zNPCEntity * npcEnt /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 headingCopy; // r1+0x14
    float headingLength2; // f0

    {
        // Range: 0x801E1104 -> 0x801E12F4
        // Local variables
        float currentYaw; // f29
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801E1420 -> 0x801E1598
void zNPCSingleSteering::PostUpdate(class zNPCSingleSteering * this /* r30 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801E15A0 -> 0x801E1604
void zNPCSingleSteering::SnapTurnSpring(class zNPCSingleSteering * this /* r31 */) {
}
// signature: zNPCSingleSteering::SwitchWallNet(zWallNet *)
// Range: 0x801E1610 -> 0x801E161C
void zNPCSingleSteering::SwitchWallNet() {
}
// Range: 0x801E1620 -> 0x801E1794
void zNPCSwarmSteering::AllAttached(class zNPCSwarmSteering * this /* r28 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x801E1670 -> 0x801E16E0
        // Local variables
        class xBase * b; // r0

        {
            // Range: 0x801E169C -> 0x801E16D4
            // Local variables
            int i; // r29

            {
                // Range: 0x801E169C -> 0x801E16D4
                // Local variables
                class xEnt * ent; // r0
            }
        }
    }
    {
        // Range: 0x801E16E8 -> 0x801E16FC
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x801E1708 -> 0x801E1754
        // Local variables
        int i; // r29

        {
            // Range: 0x801E1708 -> 0x801E1754
            // Local variables
            class xEnt * ent; // r0
        }
    }
}
// signature: zNPCSwarmSteering::Detached(zNPCStatus *)
// Range: 0x801E17A0 -> 0x801E18EC
void zNPCSwarmSteering::Detached(class zNPCSwarmSteering * this /* r28 */) {
    {
        // Range: 0x801E17C0 -> 0x801E18CC
        // Local variables
        int numberOfChildren; // r0

        {
            // Range: 0x801E17E4 -> 0x801E18C0
            // Local variables
            int i; // r29

            {
                // Range: 0x801E17E4 -> 0x801E18C0
                // Local variables
                class zNPCEntity * npcEntity; // r0
            }
        }
    }
}
// signature: zNPCSwarmSteering::SetControls(zNPCSteeringControl **, int)
// Range: 0x801E18F0 -> 0x801E1A00
void zNPCSwarmSteering::SetControls(class zNPCSwarmSteering * this /* r26 */, int controlNum /* r27 */) {
    {
        // Range: 0x801E1914 -> 0x801E19E0
        // Local variables
        int i; // r28

        {
            // Range: 0x801E1914 -> 0x801E19E0
            // Local variables
            class zNPCEntity * npcEntity; // r0
            class zNPCSteeringControl * oldControl; // r24
        }
    }
}
// signature: zNPCSwarmSteering::RemoveControls(zNPCSteeringControl **, int)
// Range: 0x801E1A00 -> 0x801E1A8C
void zNPCSwarmSteering::RemoveControls(int controlNum /* r27 */) {
    {
        // Range: 0x801E1A1C -> 0x801E1A6C
        // Local variables
        int i; // r28
    }
}
// Range: 0x801E1A90 -> 0x801E204C
void zNPCSwarmSteering::ApplySteering(class zNPCSwarmSteering * this /* r21 */, float dt /* f27 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x801E1B0C -> 0x801E1FBC
        // Local variables
        int i; // r23

        {
            // Range: 0x801E1B0C -> 0x801E1FBC
            // Local variables
            class xVec3 constrainedVel; // r1+0x30
            class xVec3 internalAcc; // r1+0x3C
            class xVec3 acc; // r1+0x48
            class zNPCEntity * npcEnt; // r0
            class zNPCSteeringControl * curControl; // r22

            {
                // Range: 0x801E1B60 -> 0x801E1B60
                // Local variables
                class xVec3 & pos; // r0
            }
            {
                // Range: 0x801E1B60 -> 0x801E1B60
                // Local variables
                class zNPCSteeringDest closestPos; // r1+0x20
            }
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSwarmSteering::ApplyHeadingToNPC(const xVec3 &, zNPCEntity *, int, float, bool)
// Range: 0x801E2050 -> 0x801E24BC
void zNPCSwarmSteering::ApplyHeadingToNPC(class zNPCSwarmSteering * this /* r29 */, class zNPCEntity * npcEnt /* r30 */, int memberIndex /* r26 */, float dt /* f31 */) {
    // Local variables
    class xVec3 headingCopy; // r1+0x14
    float headingLength2; // f0

    {
        // Range: 0x801E2180 -> 0x801E238C
        // Local variables
        float currentYaw; // f29
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x801E24C0 -> 0x801E26AC
void zNPCSwarmSteering::PostUpdate(class zNPCSwarmSteering * this /* r31 */, float dt /* f31 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x801E251C -> 0x801E2660
        // Local variables
        int i; // r26

        {
            // Range: 0x801E251C -> 0x801E2660
            // Local variables
            class zNPCEntity * npcEnt; // r25
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801E26B0 -> 0x801E2778
void zNPCSwarmSteering::SnapTurnSpring(class zNPCSwarmSteering * this /* r27 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x801E26E4 -> 0x801E2738
        // Local variables
        int i; // r28

        {
            // Range: 0x801E26E4 -> 0x801E2738
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// Range: 0x801E2780 -> 0x801E27E0
void zNPCSwarmSteering::SwitchWallNet(class zWallNet * newWallNet /* r29 */) {
    {
        // Range: 0x801E2798 -> 0x801E27B4
        // Local variables
        int i; // r30
    }
}
