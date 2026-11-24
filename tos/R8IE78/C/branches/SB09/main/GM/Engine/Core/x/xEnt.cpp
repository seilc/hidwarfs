/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xEnt.cpp
*/
// Range: 0x80027900 -> 0x800279C8
void xEntInit(class xEnt * ent /* r30 */, class xEntAsset * asset /* r31 */) {
}
// Range: 0x800279D0 -> 0x80027B98
void xEntGetCenterFromAABB(class xEnt * ent /* r31 */, class xVec3 & center /* r30 */) {
    {
        // Range: 0x800279F0 -> 0x80027A80
        // Local variables
        class hkVector4 aabbCenter; // r1+0x40
        class hkpRigidBody * body; // r0
        class hkAabb aabb; // r1+0x70
        class hkTransform xform; // r1+0xD0
    }
    {
        // Range: 0x80027A84 -> 0x80027B14
        // Local variables
        class hkVector4 aabbCenter; // r1+0x30
        class hkAabb aabb; // r1+0x50
        class hkTransform xform; // r1+0x90
        class zNPCEntity * npcEnt; // r0
    }
}
// signature: xEntInitForType(xEnt *, xMat4x3 &)
// Range: 0x80027BE0 -> 0x80027D30
void xEntInitForType(class xEnt * ent /* r31 */) {
    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80027D30 -> 0x80027DB4
void * xEnt::~xEnt(class xEnt * this /* r30 */) {
    // References
    // -> struct {} __vt__4xEnt;
}
// Range: 0x80027DC0 -> 0x80027E48
void xEntSetup(class xEnt * ent /* r29 */) {
}
// Range: 0x80027EE0 -> 0x80027F58
void xEntSave(class xEnt * ent /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x80027F60 -> 0x80027FD4
void xEntLoad(class xEnt * ent /* r30 */, class xSerial * s /* r31 */) {
    // Local variables
    int b; // r1+0x8
}
// signature: xEntReset(xEnt *)
// Range: 0x80027FE0 -> 0x80027FF0
void xEntReset() {
}
// Range: 0x80027FF0 -> 0x80028230
void xEntReset(class xEnt * ent /* r31 */, class xVec3 & pos /* r30 */, class xVec3 & ang /* r29 */) {
    // Local variables
    class xMat4x3 newFrame; // r1+0x8

    {
        // Range: 0x800280B8 -> 0x800280F0
        // Local variables
        unsigned short old_flags; // r30
    }

    // References
    // -> class xVec3 g_O3;
}
// Range: 0x80028250 -> 0x8002861C
void xEntDebugReset(class xEnt * ent /* r31 */) {
    // Local variables
    class xVec3 & pos; // r0
    class xVec3 & ang; // r0
    class xMat4x3 tempMat; // r1+0x8

    {
        // Range: 0x800284B0 -> 0x8002851C
        // Local variables
        unsigned short old_flags; // r30
        class xOGModel * model; // r29
        class EntityHandleBase * lkHandle; // r0

        {
            // Range: 0x800284D0 -> 0x800284E8
            // Local variables
            class LightKitEntity * lkEnt; // r0
        }
    }
    {
        // Range: 0x8002851C -> 0x8002851C
        // Local variables
        int a; // r0
    }

    // References
    // -> class xVec3 g_O3;
}
// signature: xEntGetAnimFlags(const xEnt *)
// Range: 0x80028620 -> 0x80028638
unsigned int xEntGetAnimFlags() {
}
// Range: 0x80028680 -> 0x800288FC
void xEntUpdate(class xEnt * ent /* r29 */, class xScene * sc /* r30 */, float dt /* f31 */) {
    // Local variables
    enum MotionType motionType; // r31
    class hkpRigidBody * body; // r25

    {
        // Range: 0x800286D8 -> 0x80028878
        {
            // Range: 0x80028798 -> 0x800287E4
            // Local variables
            class Matrix43 rootRenderableTrans; // r1+0x8
        }
    }
}
// signature: xEntBeginUpdate(xEnt *, xScene *, float)
// Range: 0x80028970 -> 0x80028AC4
void xEntBeginUpdate(class xEnt * ent /* r30 */) {
    {
        // Range: 0x800289A8 -> 0x80028A70
        // Local variables
        class hkpRigidBody * body; // r0
    }
}
// signature: xEntEndUpdate(xEnt *, xScene *, float)
// Range: 0x80028AD0 -> 0x80028B98
void xEntEndUpdate(class xEnt * ent /* r31 */, float dt /* f31 */) {
}
// Range: 0x80028BA0 -> 0x80028C88
void xEntDefaultTranslate(class xEnt * ent /* r29 */, class xVec3 * dpos /* r31 */, class xMat4x3 * dmat /* r30 */) {
}
// Range: 0x80028C90 -> 0x80028D2C
static void xEntRotationToMatrix(class xEntFrame * frame /* r30 */, class xMat4x3 * mat /* r31 */) {
}
// Range: 0x80028D30 -> 0x80028E2C
void xEntMotionToMatrix(class xEnt * ent /* r29 */, class xEntFrame * frame /* r30 */, class xMat4x3 * mat /* r31 */) {
}
// Range: 0x80028E30 -> 0x80028EF0
void xEntMove(class xEnt * ent /* r29 */, class xScene * sc /* r30 */, float dt /* f31 */) {
    // Local variables
    class hkpRigidBody * entHKBody; // r31
}
// Range: 0x80028EF0 -> 0x80028EF8
class xOGModelRef * xEnt::GetAttachModel() {
}
// Range: 0x80028F00 -> 0x80028F08
class xMat4x3 * xEnt::GetAttachMat() {
}
// Range: 0x80028F10 -> 0x80028F1C
class xVec3 * xEnt::GetSoundPosition() const {
}
// signature: xEnt::DriveAttach(World::xOGEntity *, unsigned int, int)
// Range: 0x80028F20 -> 0x80028FCC
void xEnt::DriveAttach(class xEnt * this /* r29 */, class xOGEntity * passenger /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0xC
    class xMat3x3 a_descaled; // r1+0x18
    float dummy; // r1+0x8
}
// Range: 0x80028FD0 -> 0x80028FD4
void xEnt::DriveDetach() {
}
// signature: xEnt::DriveDetach(World::xOGEntity *)
// Range: 0x80028FE0 -> 0x80028FE8
void xEnt::DriveDetach() {
}
// Range: 0x80028FF0 -> 0x80028FF8
class zNeoDrivenLink * xEnt::DriveGetDriver() {
}
// signature: xEnt::DriveSetDriver(zNeoDrivenLink *)
// Range: 0x80029000 -> 0x80029008
void xEnt::DriveSetDriver() {
}
// Range: 0x80029010 -> 0x80029090
enum E_HAVOK_COLLIDE_FILTER_LAYER xEnt::GetSceneInitCollisionFilter() {
    {
        // Range: 0x80029010 -> 0x80029078
        // Local variables
        enum E_HAVOK_COLLIDE_FILTER_LAYER filter; // r0

        {
            // Range: 0x80029044 -> 0x80029070
            // Local variables
            enum E_HAVOK_COLLIDE_FILTER_LAYER packedFilterLayer; // r3
        }
    }
}
// Range: 0x80029090 -> 0x800291D4
void xEntRedoTranslate(class xEnt * ent /* r28 */, class xVec3 * dpos /* r31 */, class xMat4x3 * originalmat /* r29 */, class xMat4x3 * relmat /* r30 */) {
    {
        // Range: 0x800290F8 -> 0x80029180
        // Local variables
        class xMat4x3 tempModelMat; // r1+0x20
    }
}
// signature: xEnt::DrivePrep(World::xOGEntity *)
// Range: 0x800291F0 -> 0x8002922C
bool xEnt::DrivePrep() {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x80029230 -> 0x80029918
void xEnt::DriveCauseMove(class xEnt * this /* r30 */, class xMat4x3 * parent /* r21 */, class xMat4x3 * relMat /* r22 */, class xMat4x3 * lastMat /* r23 */, class xMat4x3 * oldMat /* r24 */, bool rotate /* r25 */, bool yaw /* r31 */, float givenYaw /* f30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 scale; // r1+0xB8
    class xVec3 newEuler; // r1+0xAC
    class xVec3 lastEuler; // r1+0xA0
    class xMat4x3 InvRel; // r1+0x2A8
    class xMat4x3 baseMat; // r1+0x238
    class xMat4x3 nullMat; // r1+0x1F8
    class hkpRigidBody * body; // r26

    {
        // Range: 0x80029290 -> 0x80029310
        // Local variables
        float dummy; // r1+0x10
        class xMat3x3 a_descaled; // r1+0x278
    }
    {
        // Range: 0x80029310 -> 0x800297A0
        // Local variables
        class hkpRigidBody * body; // r0

        {
            // Range: 0x80029428 -> 0x800294A4
            // Local variables
            class xMat3x3 rot; // r1+0x1C8

            {
                // Range: 0x80029438 -> 0x80029458
                // Local variables
                float yawDiff; // f1
            }
        }
        {
            // Range: 0x800294F4 -> 0x80029578
            // Local variables
            class xMat3x3 rot; // r1+0x198

            {
                // Range: 0x80029504 -> 0x8002951C
                // Local variables
                float yawDiff; // f1
            }
        }
        {
            // Range: 0x800295E4 -> 0x80029660
            // Local variables
            class xMat3x3 rot; // r1+0x168

            {
                // Range: 0x800295F4 -> 0x80029614
                // Local variables
                float yawDiff; // f1
            }
        }
        {
            // Range: 0x800296B0 -> 0x80029750
            // Local variables
            class xMat3x3 rot; // r1+0x138

            {
                // Range: 0x800296C0 -> 0x800296D8
                // Local variables
                float yawDiff; // f1
            }
        }
        {
            // Range: 0x80029750 -> 0x800297A0
            // Local variables
            class xMat4x3 tempOldMat; // r1+0xF8
        }
    }
    {
        // Range: 0x800297EC -> 0x800298EC
        // Local variables
        class xQuat quat; // r1+0x90
        class xMat3x3 tempMat; // r1+0xC8
        class xMat4x3 * pMat; // r27

        {
            // Range: 0x80029850 -> 0x80029890
            // Local variables
            class hkpPropertyValue val; // r1+0x20
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: xEntApplyPhysics(xEnt *, xScene *, float)
// Range: 0x800299B0 -> 0x80029A08
void xEntApplyPhysics(class xEnt * ent /* r31 */) {
    // Local variables
    class xVec3 dposvel; // r1+0x8
}
// Range: 0x80029A10 -> 0x80029B88
bool xEntTurnToFace(class xEnt * ent /* r30 */, class xVec3 * target /* r31 */, float speedLimit /* f29 */, float dt /* f30 */) {
    // Local variables
    class xVec3 currentFacing; // r1+0x1C
    float bias; // f31
    float dot; // f31

    {
        // Range: 0x80029A8C -> 0x80029B54
        // Local variables
        float maxAngle; // f0
        float angle; // f31
        bool done; // r31
        class xVec3 axis; // r1+0x10
    }
}
// Range: 0x80029B90 -> 0x80029CC8
class SurfaceGamePlay * xGetSurface(class hkpRigidBody * pRigidBody /* r27 */, unsigned int shapeKey /* r28 */, bool * usingSurfaceFromTriangles /* r31 */) {
    // Local variables
    void * userData; // r30
    class xEnt * pEnt; // r0
    class CollisionMeshBlobEntity * refModelCollMesh; // reg65535
    class SurfaceGamePlay * surface; // r4

    {
        // Range: 0x80029C18 -> 0x80029CB0
        // Local variables
        class CollisionMeshBlobEntity * collMesh; // r29
        class EntityHandleBase * * pSurfaceTable; // r6
        class TriangleInfo * pTriInfo; // r5
    }
}
// Range: 0x80029D30 -> 0x80029F5C
class SurfaceGamePlay * xGetSurface(class hkpRigidBody * pRigidBody /* r25 */, unsigned int shapeKey /* r26 */, class xVec3 & normal /* r28 */, class xVec3 & velocity /* r29 */) {
    // Local variables
    class SurfaceGamePlay * surface; // r31
    bool usingSurfaceFromTriangles; // r1+0x8

    {
        // Range: 0x80029D78 -> 0x80029F40
        // Local variables
        class xEnt * pEnt; // r30

        {
            // Range: 0x80029D90 -> 0x80029EE0
            // Local variables
            class xVec3 materialModifier; // r1+0x24
            class xVec3 binormal; // r1+0x30
            class xVec3 forward; // r1+0x3C
            class TriangleInfo * pTriInfo; // r3
            class CollisionMeshBlobEntity * refModelCollMesh; // r27
        }
    }
}
// signature: xEnt::SetInRagdoll(float, RagdollCallbackListener *)
// Range: 0x80029F60 -> 0x80029F9C
void xEnt::SetInRagdoll() {
}
// signature: xEnt::SetOutOfRagdoll(float)
// Range: 0x80029FA0 -> 0x80029FD4
void xEnt::SetOutOfRagdoll() {
}
// signature: xEnt::SetInRagdollForDuration(float, float, float, RagdollCallbackListener *)
// Range: 0x80029FE0 -> 0x8002A038
void xEnt::SetInRagdollForDuration(class xEnt * this /* r31 */, float blendOutTime /* f30 */, float timeInRagdoll /* f31 */) {
}
// Range: 0x8002A040 -> 0x8002A3CC
void xEnt::UpdateRagdoll(class xEnt * this /* r28 */, float dt /* f31 */, enum JointTransformSpace jointSpace /* r29 */, bool applyInvBindMat /* r30 */) {
    // Local variables
    enum RagdollState currentRagdollState; // r31
    float animRagdollBlendAmount; // r1+0x10

    {
        // Range: 0x8002A084 -> 0x8002A2AC
        // Local variables
        float * totalBlendTime; // r27

        {
            // Range: 0x8002A194 -> 0x8002A264
            // Local variables
            class hkVector4 zeroVel; // r1+0x30
        }
    }
}
