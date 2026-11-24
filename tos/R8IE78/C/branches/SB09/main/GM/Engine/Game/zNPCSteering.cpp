/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zNPCSteering.cpp
*/
// Range: 0x800F8640 -> 0x800F8990
void zNPCSteeringRigidBodyCollisionHandler::contactProcessCallback(class zNPCSteeringRigidBodyCollisionHandler * this /* r25 */, class hkpContactProcessEvent & event /* r24 */) {
    // Local variables
    class hkpRigidBody * pBodyA; // r31
    class hkpRigidBody * pBodyB; // reg65535
    class hkpProcessCollisionData * pCollisionData; // r22
    class zNPCEntity * entity; // r30
    int floorIndex; // r29
    float floorNormalUp; // f30
    class hkpRigidBody * otherBody; // r28
    class xBase * otherBase; // r27
    class xEnt * otherEnt; // r3

    {
        // Range: 0x800F8690 -> 0x800F872C
        // Local variables
        int i; // r21

        {
            // Range: 0x800F8690 -> 0x800F872C
            // Local variables
            float normalUp; // f0
            class hkVector4 separatingNormal; // r1+0x50
            class hkContactPoint & contactPoint; // r0
        }
    }
    {
        // Range: 0x800F8748 -> 0x800F8770
        // Local variables
        void * otherUserData; // r0
    }
    {
        // Range: 0x800F8770 -> 0x800F8944
        // Local variables
        class xVec3 surfaceVelocity; // r1+0x20
        class xVec3 normalEngine; // r1+0x2C
        class hkVector4 & normalHavok; // r0
        class SurfaceGamePlay * otherSurface; // r0
        int numDatas; // r25
        unsigned int otherShapeKey; // r26
        bool floorDoesDamage; // r31
        class xVec3 floorVelocity; // r1+0x38

        {
            // Range: 0x800F87D0 -> 0x800F8894
            // Local variables
            class hkInplaceArray data; // r1+0x60
        }
        {
            // Range: 0x800F88E8 -> 0x800F891C
            // Local variables
            class hkVector4 surfaceVelocityHavok; // r1+0x10
        }
    }
    {
        // Range: 0x800F894C -> 0x800F8964
        // Local variables
        class zSpinner * spinner; // r0
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteeringCollisionHandler::AddEdgeToSimplexInput(xVec3 &, float, float, hkpSimplexSolverInput &)
// Range: 0x800F8990 -> 0x800F8AEC
void zNPCSteeringCollisionHandler::AddEdgeToSimplexInput(class zNPCSteeringCollisionHandler * this /* r30 */, class xVec3 & edgeNormal /* r31 */, float speed /* f31 */, class hkpSimplexSolverInput & input /* r25 */) {
    // Local variables
    class hkpSurfaceConstraintInfo * pConstraints; // r26
    int numConstraints; // r0

    {
        // Range: 0x800F8A44 -> 0x800F8ACC
        {
            // Range: 0x800F8A6C -> 0x800F8ACC
            // Local variables
            class xVec3 npcVelXZ; // r1+0x8
        }
    }

    // References
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x800F8AF0 -> 0x800F8D9C
void zNPCSteeringCollisionHandler::HandleWallnetEdges(class zNPCSteeringCollisionHandler * this /* r21 */, class hkpSimplexSolverInput & input /* r22 */) {
    // Local variables
    class hkVector4 proxyPos; // r1+0x40
    class zWallNetPositionXZ * wallNetPos; // r18
    float boundR; // f30
    class xVec3 npcPos; // r1+0x28
    float npcSpeed; // f0
    float dt; // f0
    float sweepDist; // f31
    class xVec3 sweepDir; // r1+0x1C
    class zWallNet * wallNet; // r27
    int searchTriangles[256]; // r1+0x4D0
    int searchTrianglesFront; // r26
    int searchTrianglesBack; // r25
    int isInSearchTriangles[256]; // r1+0xD0
    class zSweptCircle swc; // r1+0x90

    {
        // Range: 0x800F8C88 -> 0x800F8D70
        // Local variables
        int curSearchTriangle; // r24

        {
            // Range: 0x800F8C88 -> 0x800F8D60
            // Local variables
            int i; // r23

            {
                // Range: 0x800F8C88 -> 0x800F8D60
                // Local variables
                class zSweptCircle curSwc; // r1+0x50

                {
                    // Range: 0x800F8C88 -> 0x800F8D60
                    // Local variables
                    int connectedTriangle; // r0

                    {
                        // Range: 0x800F8C88 -> 0x800F8C88
                        // Local variables
                        float edgeDistance; // f1
                        class xVec3 edgeNormal; // r1+0x10
                    }
                }
            }
        }
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x800F8DA0 -> 0x800F8FE0
void zNPCSteeringCollisionHandler::processConstraintsCallback(class zNPCSteeringCollisionHandler * this /* r28 */, class hkArray & manifold /* r29 */, class hkpSimplexSolverInput & input /* r30 */) {
    // Local variables
    class hkpSurfaceConstraintInfo * pConstraints; // r7
    float floorNormalUp; // f31
    int floorIndex; // r26
    class zNPCEntity * entity; // r0
    class xVec3 surfaceVelocity; // r1+0x14
    bool floorDoesDamage; // r31

    {
        // Range: 0x800F8DD8 -> 0x800F8E10
        // Local variables
        int i; // r6

        {
            // Range: 0x800F8DD8 -> 0x800F8E10
            // Local variables
            float normalUp; // f0
            class hkVector4 & hkNormal; // r8
        }
    }
    {
        // Range: 0x800F8E1C -> 0x800F8F8C
        // Local variables
        class SurfaceGamePlay * surface; // r3
        class hkpRigidBody * pRigidBody; // r24
        class xEnt * pEnt; // r6
        unsigned int shapeKey; // r4
        class xBase * baseB; // r0
        class xBase * baseA; // r5
        class hkpPhantom * phantomB; // r0
        class hkpPhantom * phantomA; // r0
        class hkpRigidBody * bodyB; // reg65535
        class hkpRigidBody * bodyA; // r25
        class hkpRootCdPoint & point; // r0
        class xVec3 normal; // r1+0x8
        class hkVector4 & hkNormal; // r4
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800F8FE0 -> 0x800F9080
void * zNPCSteering::zNPCSteering(class zNPCSteering * this /* r29 */) {
    // References
    // -> class xVec3 m_Null;
    // -> struct {} __vt__12zNPCSteering;
}
// signature: zNPCSteering::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800F9080 -> 0x800F9140
bool zNPCSteering::SystemEvent(class zNPCSteering * this /* r29 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x800F90A4 -> 0x800F9128
        // Local variables
        class xBase * to_param_widget; // r5
        class EventActionSwitchWallNet * params; // r0
    }
}
// signature: zNPCSteering::IntegrateAcc(const xVec3 &, const xVec3 &, float, float, xVec3 *, float)
// Range: 0x800F9140 -> 0x800F9228
void zNPCSteering::IntegrateAcc(class xVec3 & oldVel /* r30 */, float speedLimitXZ /* f29 */, float speedLimitY /* f30 */, class xVec3 * vel /* r31 */) {
    // Local variables
    class xVec3 dVel; // r1+0x8
    float speed2XZ; // f0

    {
        // Range: 0x800F91A0 -> 0x800F91D4
        // Local variables
        float scaleXZ; // f2
        float speedXZ; // f0
    }
}
// signature: zNPCSteering::ApplyExternalForce(const xVec3 *)
// Range: 0x800F9230 -> 0x800F924C
void zNPCSteering::ApplyExternalForce() {
    // Local variables
    float npcMass; // f1
}
// signature: zNPCSteering::ApplyExternalImpulse(const xVec3 *)
// Range: 0x800F9250 -> 0x800F926C
void zNPCSteering::ApplyExternalImpulse() {
    // Local variables
    float npcMass; // f1
}
// signature: zNPCSteering::SwitchWallNet(zWallNet *)
// Range: 0x800F9270 -> 0x800F9278
void zNPCSteering::SwitchWallNet() {
}
// signature: zNPCSteering::SetCheckForWallNetEdges(bool)
// Range: 0x800F9280 -> 0x800F92A8
void zNPCSteering::SetCheckForWallNetEdges() {
}
// Range: 0x800F92B0 -> 0x800F9310
void * zNPCSingleSteering::zNPCSingleSteering(class zNPCSingleSteering * this /* r31 */) {
    // References
    // -> struct {} __vt__18zNPCSingleSteering;
}
// Range: 0x800F9310 -> 0x800F94BC
void zNPCSingleSteering::AllAttached(class zNPCSingleSteering * this /* r31 */) {
    {
        // Range: 0x800F9334 -> 0x800F9378
        // Local variables
        class xBase * b; // r3
    }

    // References
    // -> struct {} __vt__37zNPCSteeringRigidBodyCollisionHandler;
    // -> struct {} __vt__28zNPCSteeringCollisionHandler;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zNPCSingleSteering::Detached(zNPCStatus *)
// Range: 0x800F94E0 -> 0x800F9588
void zNPCSingleSteering::Detached(class zNPCSingleSteering * this /* r31 */) {
}
// Range: 0x800F9670 -> 0x800F9738
void zNPCSingleSteering::SetControl(class zNPCSingleSteering * this /* r30 */, class zNPCSteeringControl * control /* r31 */) {
    // Local variables
    class zNPCSteeringControl * oldControl; // r0
}
// signature: zNPCSingleSteering::RemoveControl(zNPCSteeringControl *)
// Range: 0x800F9740 -> 0x800F97AC
void zNPCSingleSteering::RemoveControl(class zNPCSingleSteering * this /* r31 */) {
}
// Range: 0x800F97B0 -> 0x800F9F5C
void zNPCSingleSteering::ApplySteering(class zNPCSingleSteering * this /* r29 */, float dt /* f30 */) {
    // Local variables
    class xVec3 acc; // r1+0x6C
    class xVec3 internalAcc; // r1+0x60
    class xVec3 constrainedVel; // r1+0x30

    {
        // Range: 0x800F98BC -> 0x800F9D74
        // Local variables
        float currentHeight; // f1
        float goalHeight; // f0

        {
            // Range: 0x800F9904 -> 0x800F9D0C
            // Local variables
            float currentEstimatedHeight; // f29
            class zNPCRayHitCollector hitCollector; // r1+0x78
            class hkVector4 hkTargetPos; // r1+0x40
            class hkVector4 hkNPCPos; // r1+0x50
            class xVec3 & npcPos; // r0

            {
                // Range: 0x800F9998 -> 0x800F9998
                {
                    // Range: 0x800F9998 -> 0x800F9998
                    // Local variables
                    class TimerCommand * h; // r4
                }
            }
            {
                // Range: 0x800F99F0 -> 0x800F99F0
                {
                    // Range: 0x800F99F0 -> 0x800F99F0
                    // Local variables
                    class TimerCommand * h; // r4
                }
            }
            {
                // Range: 0x800F9A64 -> 0x800F9A64
                {
                    // Range: 0x800F9A64 -> 0x800F9A64
                    // Local variables
                    class TimerCommand * h; // r4
                }
            }
            {
                // Range: 0x800F9ACC -> 0x800F9ACC
                {
                    // Range: 0x800F9ACC -> 0x800F9ACC
                    // Local variables
                    class TimerCommand * h; // r4
                }
            }
            {
                // Range: 0x800F9B48 -> 0x800F9B48
                {
                    // Range: 0x800F9B48 -> 0x800F9B48
                    // Local variables
                    class TimerCommand * h; // r4
                }
            }
            {
                // Range: 0x800F9BB0 -> 0x800F9BB0
                {
                    // Range: 0x800F9BB0 -> 0x800F9BB0
                    // Local variables
                    class TimerCommand * h; // r4
                }
            }
            {
                // Range: 0x800F9C24 -> 0x800F9C24
                {
                    // Range: 0x800F9C24 -> 0x800F9C24
                    // Local variables
                    class TimerCommand * h; // r4
                }
            }
            {
                // Range: 0x800F9C8C -> 0x800F9C8C
                {
                    // Range: 0x800F9C8C -> 0x800F9C8C
                    // Local variables
                    class TimerCommand * h; // r4
                }
            }
        }
    }
    {
        // Range: 0x800F9ED0 -> 0x800F9EFC
        // Local variables
        class zNPCSteeringDest closestPos; // r1+0x20
        class xEnt * closestTarget; // r0
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> class xVec3 m_Null;
}
// signature: zNPCSingleSteering::ApplyHeadingToNPC(const xVec3 &, zNPCEntity *, float, bool)
// Range: 0x800F9F60 -> 0x800FA0D4
void zNPCSingleSteering::ApplyHeadingToNPC(class zNPCSingleSteering * this /* r29 */, class zNPCEntity * npcEnt /* r30 */, float dt /* f31 */, bool useTurnSpring /* r31 */) {
    // Local variables
    class xVec3 headingCopy; // r1+0x8
    float headingLength2; // f0

    {
        // Range: 0x800F9FF4 -> 0x800FA058
        // Local variables
        float currentYaw; // f0
    }
}
// Range: 0x800FA0E0 -> 0x800FA21C
void zNPCSingleSteering::PostUpdate(class zNPCSingleSteering * this /* r29 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800FA220 -> 0x800FA278
void zNPCSingleSteering::SnapTurnSpring(class zNPCSingleSteering * this /* r31 */) {
}
// signature: zNPCSingleSteering::SwitchWallNet(zWallNet *)
// Range: 0x800FA280 -> 0x800FA28C
void zNPCSingleSteering::SwitchWallNet() {
}
// Range: 0x800FA290 -> 0x800FA33C
void * zNPCSwarmSteering::zNPCSwarmSteering(class zNPCSwarmSteering * this /* r29 */) {
    {
        // Range: 0x800FA2F4 -> 0x800FA320
        // Local variables
        int i; // r5
    }

    // References
    // -> struct {} __vt__17zNPCSwarmSteering;
}
// Range: 0x800FA340 -> 0x800FA478
void zNPCSwarmSteering::AllAttached(class zNPCSwarmSteering * this /* r28 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x800FA37C -> 0x800FA3F0
        // Local variables
        class xBase * b; // r0

        {
            // Range: 0x800FA3A4 -> 0x800FA3F0
            // Local variables
            int i; // r29

            {
                // Range: 0x800FA3A4 -> 0x800FA3F0
                // Local variables
                class xEnt * ent; // r0
            }
        }
    }
    {
        // Range: 0x800FA3F4 -> 0x800FA41C
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x800FA41C -> 0x800FA464
        // Local variables
        int i; // r29

        {
            // Range: 0x800FA41C -> 0x800FA464
            // Local variables
            class xEnt * ent; // r0
        }
    }
}
// signature: zNPCSwarmSteering::Detached(zNPCStatus *)
// Range: 0x800FA480 -> 0x800FA50C
void zNPCSwarmSteering::Detached(class zNPCSwarmSteering * this /* r29 */) {
    {
        // Range: 0x800FA494 -> 0x800FA4F8
        // Local variables
        int numberOfChildren; // r0

        {
            // Range: 0x800FA4B8 -> 0x800FA4F8
            // Local variables
            int i; // r30

            {
                // Range: 0x800FA4B8 -> 0x800FA4F8
                // Local variables
                class zNPCEntity * npcEntity; // r3
            }
        }
    }
}
// Range: 0x800FA510 -> 0x800FA630
void zNPCSwarmSteering::SetControls(class zNPCSwarmSteering * this /* r27 */, class zNPCSteeringControl * * controls /* r28 */, int controlNum /* r29 */) {
    {
        // Range: 0x800FA520 -> 0x800FA61C
        // Local variables
        int i; // r30

        {
            // Range: 0x800FA520 -> 0x800FA61C
            // Local variables
            class zNPCEntity * npcEntity; // r0
            class zNPCSteeringControl * oldControl; // r23
        }
    }
}
// Range: 0x800FA630 -> 0x800FA6C0
void zNPCSwarmSteering::RemoveControls(class zNPCSwarmSteering * this /* r25 */, class zNPCSteeringControl * * controls /* r26 */, int controlNum /* r27 */) {
    {
        // Range: 0x800FA640 -> 0x800FA6AC
        // Local variables
        int i; // r28
    }
}
// Range: 0x800FA6C0 -> 0x800FAA10
void zNPCSwarmSteering::ApplySteering(class zNPCSwarmSteering * this /* r21 */, float dt /* f31 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x800FA70C -> 0x800FA9D4
        // Local variables
        int i; // r23

        {
            // Range: 0x800FA70C -> 0x800FA9D4
            // Local variables
            class xVec3 constrainedVel; // r1+0x28
            class xVec3 internalAcc; // r1+0x34
            class xVec3 acc; // r1+0x40
            class zNPCEntity * npcEnt; // r0
            class zNPCSteeringControl * curControl; // r22

            {
                // Range: 0x800FA968 -> 0x800FA990
                // Local variables
                class zNPCSteeringDest closestPos; // r1+0x18
                class xEnt * closestTarget; // r0
            }
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSwarmSteering::ApplyHeadingToNPC(const xVec3 &, zNPCEntity *, int, float, bool)
// Range: 0x800FAA10 -> 0x800FABAC
void zNPCSwarmSteering::ApplyHeadingToNPC(class zNPCSwarmSteering * this /* r30 */, class zNPCEntity * npcEnt /* r31 */, int memberIndex /* r28 */, float dt /* f31 */, bool useTurnSpring /* r27 */) {
    // Local variables
    class xVec3 headingCopy; // r1+0x8
    float headingLength2; // f0

    {
        // Range: 0x800FAAB0 -> 0x800FAB24
        // Local variables
        float currentYaw; // f0
    }
}
// Range: 0x800FABB0 -> 0x800FACFC
void zNPCSwarmSteering::PostUpdate(class zNPCSwarmSteering * this /* r31 */, float dt /* f31 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x800FABF8 -> 0x800FACD4
        // Local variables
        int i; // r25

        {
            // Range: 0x800FABF8 -> 0x800FACD4
            // Local variables
            class zNPCEntity * npcEnt; // r24
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800FAD00 -> 0x800FADC4
void zNPCSwarmSteering::SnapTurnSpring(class zNPCSwarmSteering * this /* r27 */) {
    // Local variables
    int numberOfChildren; // r0

    {
        // Range: 0x800FAD34 -> 0x800FADA4
        // Local variables
        int i; // r28

        {
            // Range: 0x800FAD34 -> 0x800FADA4
            // Local variables
            class zNPCEntity * npcEnt; // r0
        }
    }
}
// Range: 0x800FADD0 -> 0x800FAE28
void zNPCSwarmSteering::SwitchWallNet(class zNPCSwarmSteering * this /* r28 */, class zWallNet * newWallNet /* r29 */) {
    {
        // Range: 0x800FADE8 -> 0x800FAE14
        // Local variables
        int i; // r30
    }
}
