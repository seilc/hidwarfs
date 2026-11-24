/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zNPCSteering.cpp
*/
// Range: 0x80131CE0 -> 0x80132110
void zNPCSteeringCollisionHandler::HandleWallnetEdges(class zNPCSteeringCollisionHandler * this /* r15 */, class hkpSimplexSolverInput * input /* r16 */) {
    // Local variables
    class zNPCEntity * npcEnt; // r0
    class zNPCSteering * npcSteering; // r0
    class zWallNetPosition * wallNetPos; // r14
    float boundR; // f29
    class xVec3 * npcPos; // r22
    class xVec3 * npcVel; // r0
    float dt; // f0
    int searchStartTriId; // r0
    class zWallNet * wallNet; // r21
    int searchTriangles[256]; // r1+0x438
    int searchTrianglesFront; // r20
    int searchTrianglesBack; // r19
    int isInSearchTriangles[256]; // r1+0x38
    class xVec3 closestPoint; // r1+0x2C

    {
        // Range: 0x80131E28 -> 0x801320C0
        // Local variables
        int curSearchTriangle; // r18

        {
            // Range: 0x80131E28 -> 0x801320A8
            // Local variables
            int i; // r17

            {
                // Range: 0x80131E28 -> 0x801320A8
                // Local variables
                int connectedTriangle; // r0

                {
                    // Range: 0x80131E28 -> 0x80131E2C
                    // Local variables
                    float edgeDistance; // f3
                    class xVec3 edgeNormal; // r1+0x20
                }
            }
        }
    }
}
// signature: zNPCSteeringCollisionHandler::processConstraintsCallback(const hkArray<hkpRootCdPoint> &, hkpSimplexSolverInput &)
// Range: 0x80132110 -> 0x80132118
void zNPCSteeringCollisionHandler::processConstraintsCallback() {
}
// Range: 0x80132120 -> 0x80132214
void * zNPCSteering::zNPCSteering(class zNPCSteering * this /* r29 */) {
    // References
    // -> class xVec3 m_Null;
    // -> struct {} __vt__12zNPCSteering;
}
// Range: 0x80132240 -> 0x80132364
void zNPCSteering::AllAttached(class zNPCSteering * this /* r31 */) {
    {
        // Range: 0x80132268 -> 0x801322AC
        // Local variables
        class xBase * b; // r3
    }

    // References
    // -> struct {} __vt__28zNPCSteeringCollisionHandler;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zNPCSteering::Detached(zNPCStatus *)
// Range: 0x80132370 -> 0x8013243C
void zNPCSteering::Detached() {
}
// signature: zNPCSteering::SystemEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80132440 -> 0x801324F8
bool zNPCSteering::SystemEvent(class zNPCSteering * this /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x80132468 -> 0x801324DC
        // Local variables
        class xBase * to_param_widget; // r5
        class EventActionSwitchWallNet * params; // r0
    }
}
// signature: zNPCSteering::ApplyHeadingToNPC(const xVec3 &, zNPCEntity *, float, bool)
// Range: 0x80132500 -> 0x80132910
void zNPCSteering::ApplyHeadingToNPC(class zNPCSteering * this /* r28 */, class zNPCEntity * npcEnt /* r29 */, float dt /* f31 */, bool useTurnSpring /* r30 */) {
    // Local variables
    class xVec3 headingCopy; // r1+0x14
    float headingLength2; // f0

    {
        // Range: 0x80132630 -> 0x801327F8
        // Local variables
        float currentYaw; // f28
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80132910 -> 0x80132E30
void zNPCSteering::ApplySteering(class zNPCSteering * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class xVec3 acc; // r1+0x48
    class xVec3 internalAcc; // r1+0x3C
    class xVec3 constrainedVel; // r1+0x30

    {
        // Range: 0x80132CC4 -> 0x80132D08
        // Local variables
        class xVec3 * pos; // r0
    }
    {
        // Range: 0x80132D2C -> 0x80132D88
        // Local variables
        class zNPCSteeringDest closestPos; // r1+0x20
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80132E50 -> 0x80132FC8
void zNPCSteering::PostUpdate(class zNPCSteering * this /* r30 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zNPCSteering::ApplyExternalForce(const xVec3 *)
// Range: 0x80132FD0 -> 0x80133020
void zNPCSteering::ApplyExternalForce() {
    // Local variables
    float npcMass; // f0
}
// signature: zNPCSteering::ApplyExternalImpulse(const xVec3 *)
// Range: 0x80133020 -> 0x80133070
void zNPCSteering::ApplyExternalImpulse() {
    // Local variables
    float npcMass; // f0
}
