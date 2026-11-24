/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xEnt.cpp
*/
// Range: 0x8004CCD0 -> 0x8004CDE0
void xEntInit(class xEnt * ent /* r30 */, class xEntAsset * asset /* r31 */) {
}
// signature: xEntGetCenterFromAABB(const xEnt *, xVec3 &)
// Range: 0x8004CDE0 -> 0x8004D15C
void xEntGetCenterFromAABB(class xVec3 & center /* r30 */) {
    {
        // Range: 0x8004CDF4 -> 0x8004CF28
        // Local variables
        class hkVector4 aabbCenter; // r1+0x40
        class hkpRigidBody * body; // r0
        class hkAabb aabb; // r1+0x90
        class hkTransform xform; // r1+0xF0
    }
    {
        // Range: 0x8004CF2C -> 0x8004D000
        // Local variables
        class hkVector4 aabbCenter; // r1+0x30
        class hkAabb aabb; // r1+0x70
        class hkTransform xform; // r1+0xB0
        class zNPCEntity * npcEnt; // r0
    }

    // References
    // -> float hkInfinity;
    // -> class xSphere sphere;
}
// Range: 0x8004D160 -> 0x8004D5D4
void xEntInitForType(class xEnt * ent /* r30 */) {
    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8004D5E0 -> 0x8004D684
void * xEnt::~xEnt(class xEnt * this /* r30 */) {
    // References
    // -> struct {} __vt__4xEnt;
}
// Range: 0x8004D690 -> 0x8004D728
void xEntSetup(class xEnt * ent /* r29 */) {
}
// Range: 0x8004D7C0 -> 0x8004D884
void xEntSave(class xEnt * ent /* r30 */, class xSerial * s /* r31 */) {
}
// Range: 0x8004D890 -> 0x8004DA84
void xEntLoad(class xEnt * ent /* r29 */, class xSerial * s /* r26 */) {
    // Local variables
    int b; // r1+0xC

    // References
    // -> class Scene * primaryScene;
}
// signature: xEntReset(xEnt *)
// Range: 0x8004DA90 -> 0x8004DAA0
void xEntReset() {
}
// Range: 0x8004DAA0 -> 0x8004DFF8
void xEntReset(class xEnt * ent /* r30 */, class xVec3 & pos /* r26 */, class xVec3 & ang /* r25 */) {
    // Local variables
    class xMat4x3 frame; // r1+0x18

    {
        // Range: 0x8004DBE0 -> 0x8004DCAC
        // Local variables
        unsigned short old_flags; // r25
    }

    // References
    // -> class xVec3 g_O3;
    // -> class Scene * primaryScene;
}
// Range: 0x8004E010 -> 0x8004E6FC
void xEntDebugReset(class xEnt * ent /* r26 */) {
    // Local variables
    class xVec3 & pos; // r0
    class xVec3 & ang; // r0
    class xMat4x3 frame; // r1+0x18

    {
        // Range: 0x8004E440 -> 0x8004E510
        // Local variables
        unsigned short old_flags; // r25
    }

    // References
    // -> class xVec3 g_O3;
    // -> class Scene * primaryScene;
}
// signature: xEntGetAnimFlags(const xEnt *)
// Range: 0x8004E700 -> 0x8004E718
unsigned int xEntGetAnimFlags() {
}
// Range: 0x8004E720 -> 0x8004F0F0
void xEntUpdate(class xEnt * ent /* r27 */, class xScene * sc /* r28 */, float dt /* f31 */) {
    // Local variables
    enum MotionType motionType; // r29

    {
        // Range: 0x8004E798 -> 0x8004ED50
        {
            // Range: 0x8004E808 -> 0x8004EB40
            // Local variables
            class Matrix43 rootRenderableTrans; // r1+0x28
        }
    }
}
// signature: xEntBeginUpdate(xEnt *, xScene *, float)
// Range: 0x8004F0F0 -> 0x8004F424
void xEntBeginUpdate(class xEnt * ent /* r31 */, float dt /* f31 */) {
}
// signature: xEntEndUpdate(xEnt *, xScene *, float)
// Range: 0x8004F430 -> 0x8004F588
void xEntEndUpdate(class xEnt * ent /* r31 */, float dt /* f31 */) {
}
// signature: xEntDefaultTranslate(xEnt *, xVec3 *, xMat4x3 *)
// Range: 0x8004F590 -> 0x8004F78C
void xEntDefaultTranslate(class xEnt * ent /* r29 */, class xMat4x3 * dmat /* r30 */) {
}
// Range: 0x8004F790 -> 0x8004FA98
void xEntMotionToMatrix(class xEnt * ent /* r29 */, class xEntFrame * frame /* r31 */) {
}
// signature: xEntMove(xEnt *, xScene *, float)
// Range: 0x8004FAA0 -> 0x8004FBD0
void xEntMove(class xEnt * ent /* r31 */) {
    // Local variables
    class hkpRigidBody * entHKBody; // r0
}
// Range: 0x8004FBD0 -> 0x8004FBD8
class xOGModel * xEnt::GetAttachModel() {
}
// Range: 0x8004FBE0 -> 0x8004FBF0
class xMat4x3 * xEnt::GetAttachMat() {
}
// Range: 0x8004FC00 -> 0x8004FC28
class xVec3 * xEnt::GetAttachDPos() {
}
// Range: 0x8004FC40 -> 0x8004FC4C
class xVec3 * xEnt::GetSoundPosition() const {
}
// Range: 0x8004FC60 -> 0x800502D8
void xEnt::DriveAttach(class xEnt * this /* r28 */, class xOGEntity * passenger /* r29 */, unsigned int flags /* r30 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0x8
    class xMat3x3 a_descaled; // r1+0x18
}
// Range: 0x800502E0 -> 0x800502E4
void xEnt::DriveDetach() {
}
// signature: xEnt::DriveDetach(World::xOGEntity *)
// Range: 0x800502F0 -> 0x800502F8
void xEnt::DriveDetach() {
}
// Range: 0x80050300 -> 0x80050308
class zNeoDrivenLink * xEnt::DriveGetDriver() {
}
// signature: xEnt::DriveSetDriver(zNeoDrivenLink *)
// Range: 0x80050310 -> 0x80050318
void xEnt::DriveSetDriver() {
}
// Range: 0x80050320 -> 0x80050328
class xMat4x3 * xEnt::DriveGetCurMat() {
}
// Range: 0x80050330 -> 0x800503B0
enum E_HAVOK_COLLIDE_FILTER_LAYER xEnt::GetSceneInitCollisionFilter() {
    {
        // Range: 0x80050330 -> 0x80050398
        // Local variables
        enum E_HAVOK_COLLIDE_FILTER_LAYER filter; // r0

        {
            // Range: 0x80050364 -> 0x80050390
            // Local variables
            enum E_HAVOK_COLLIDE_FILTER_LAYER packedFilterLayer; // r3
        }
    }
}
// signature: xEntRedoTranslate(xEnt *, xVec3 *, xMat4x3 *, xMat4x3 *)
// Range: 0x800503B0 -> 0x80050594
void xEntRedoTranslate(class xEnt * ent /* r28 */, class xMat4x3 * originalmat /* r29 */, class xMat4x3 * relmat /* r30 */) {
}
// signature: xEnt::DrivePrep(World::xOGEntity *)
// Range: 0x800505A0 -> 0x8005063C
bool xEnt::DrivePrep() {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x80050640 -> 0x80050CA0
void xEnt::DriveCauseMove(class xEnt * this /* r30 */, class xMat4x3 * parent /* r24 */, class xMat4x3 * relMat /* r25 */, class xMat4x3 * lastMat /* r26 */, class xMat4x3 * oldMat /* r27 */, bool rotate /* r28 */, bool yaw /* r31 */, float givenYaw /* f30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 scale; // r1+0x78
    class xVec3 newEuler; // r1+0x6C
    class xVec3 lastEuler; // r1+0x60
    class xMat4x3 InvRel; // r1+0x268
    class xMat4x3 baseMat; // r1+0x1F8
    class xMat4x3 nullMat; // r1+0x1B8
    class hkpRigidBody * body; // r29

    {
        // Range: 0x800506A0 -> 0x80050720
        // Local variables
        float dummy; // r1+0x14
        class xMat3x3 a_descaled; // r1+0x238
    }
    {
        // Range: 0x80050720 -> 0x80050AC8
        // Local variables
        class hkpRigidBody * body; // r29

        {
            // Range: 0x800507BC -> 0x80050844
            // Local variables
            class xMat3x3 rot; // r1+0x188

            {
                // Range: 0x800507CC -> 0x800507EC
                // Local variables
                float yawDiff; // f1
            }
        }
        {
            // Range: 0x80050874 -> 0x80050904
            // Local variables
            class xMat3x3 rot; // r1+0x158

            {
                // Range: 0x80050884 -> 0x8005089C
                // Local variables
                float yawDiff; // f1
            }
        }
        {
            // Range: 0x80050950 -> 0x800509D8
            // Local variables
            class xMat3x3 rot; // r1+0x128

            {
                // Range: 0x80050960 -> 0x80050980
                // Local variables
                float yawDiff; // f1
            }
        }
        {
            // Range: 0x80050A08 -> 0x80050A9C
            // Local variables
            class xMat3x3 rot; // r1+0xF8

            {
                // Range: 0x80050A18 -> 0x80050A34
                // Local variables
                float yawDiff; // f1
            }
        }
        {
            // Range: 0x80050A9C -> 0x80050AC8
            // Local variables
            class xMat4x3 tempOldMat; // r1+0xB8
        }
    }
    {
        // Range: 0x80050B14 -> 0x80050C74
        // Local variables
        class xQuat quat; // r1+0x50
        class xMat3x3 tempMat; // r1+0x88
        class xMat4x3 * pMat; // r0

        {
            // Range: 0x80050BC0 -> 0x80050C18
            // Local variables
            class hkpPropertyValue val; // r1+0x20
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: xEntApplyPhysics(xEnt *, xScene *, float)
// Range: 0x80050F10 -> 0x80050F78
void xEntApplyPhysics() {
    // Local variables
    class xVec3 dposvel; // r1+0x8
}
// signature: xEntTurnToFace(xEnt *, const xVec3 *, float, float)
// Range: 0x80050F80 -> 0x800512C0
bool xEntTurnToFace(class xEnt * ent /* r29 */, float speedLimit /* f30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 currentFacing; // r1+0x14
    float bias; // f11
    float dot; // f1

    {
        // Range: 0x800510CC -> 0x80051290
        // Local variables
        float maxAngle; // f0
        float angle; // f5
        bool done; // r30
        class xVec3 axis; // r1+0x8
    }
}
// signature: xEntReposition(xEnt &, const xMat4x3 &)
// Range: 0x800512C0 -> 0x800513A4
void xEntReposition() {
}
// signature: xGetSurface(hkpRigidBody *, unsigned int, bool *)
// Range: 0x800513B0 -> 0x80051550
class SurfaceGamePlay * xGetSurface(bool * usingSurfaceFromTriangles /* r31 */) {
    // Local variables
    void * userData; // r10
    class xEnt * pEnt; // r0
    class CollisionMeshBlobEntity * refModelCollMesh; // reg65535
    class SurfaceGamePlay * surface; // r6

    {
        // Range: 0x800514B0 -> 0x80051538
        // Local variables
        class CollisionMeshBlobEntity * collMesh; // r8
        class EntityHandleBase * * pSurfaceTable; // r7
        class TriangleInfo * pTriInfo; // r5
    }
}
// Range: 0x80051550 -> 0x80051914
class SurfaceGamePlay * xGetSurface(class hkpRigidBody * pRigidBody /* r27 */, unsigned int shapeKey /* r28 */, class xVec3 & normal /* r29 */, class xVec3 & velocity /* r30 */) {
    // Local variables
    class SurfaceGamePlay * surface; // r3
    bool usingSurfaceFromTriangles; // r1+0x8

    {
        // Range: 0x80051588 -> 0x800518FC
        // Local variables
        class xEnt * pEnt; // r4

        {
            // Range: 0x800515A8 -> 0x8005176C
            // Local variables
            class xVec3 materialModifier; // r1+0x40
            class xVec3 binormal; // r1+0x4C
            class xVec3 forward; // r1+0x58
            class TriangleInfo * pTriInfo; // r5
            class CollisionMeshBlobEntity * refModelCollMesh; // r7
        }
    }
}
// signature: xEnt::SetInRagdoll(float, RagdollCallbackListener *)
// Range: 0x80051920 -> 0x8005195C
void xEnt::SetInRagdoll() {
}
// signature: xEnt::SetOutOfRagdoll(float)
// Range: 0x80051960 -> 0x80051994
void xEnt::SetOutOfRagdoll() {
}
// signature: xEnt::SetInRagdollForDuration(float, float, float, RagdollCallbackListener *)
// Range: 0x800519A0 -> 0x800519F8
void xEnt::SetInRagdollForDuration(class xEnt * this /* r31 */, float blendOutTime /* f30 */, float timeInRagdoll /* f31 */) {
}
// Range: 0x80051A00 -> 0x80051DC4
void xEnt::UpdateRagdoll(class xEnt * this /* r27 */, float dt /* f31 */, enum JointTransformSpace jointSpace /* r28 */, bool applyInvBindMat /* r29 */) {
    // Local variables
    enum RagdollState currentRagdollState; // r30
    float animRagdollBlendAmount; // r1+0x10

    {
        // Range: 0x80051A50 -> 0x80051CAC
        // Local variables
        float * totalBlendTime; // r26

        {
            // Range: 0x80051A6C -> 0x80051AE8
            // Local variables
            class Model & renderableModel; // r26
        }
        {
            // Range: 0x80051B78 -> 0x80051C68
            // Local variables
            class hkVector4 zeroVel; // r1+0x50
        }
    }
    {
        // Range: 0x80051D14 -> 0x80051DA0
        // Local variables
        class Model & renderableModel; // r0
    }
}
// signature: RagdollCallbackListener::RagdollPreRenderableUpdate(xEnt *, float &)
// Range: 0x80051E10 -> 0x80052058
void RagdollCallbackListener::RagdollPreRenderableUpdate(class xEnt * ent /* r30 */) {
    {
        // Range: 0x80051E38 -> 0x80051FEC
        // Local variables
        class xVec3 crossTemp2; // r1+0x78
        class xVec3 crossTemp1; // r1+0x84
        class Matrix43 newRenderableRootTransform; // r1+0xC0
        class Matrix43 ragdollRootTransform; // r1+0xF0
        class Model & renderableModel; // r31
    }
    {
        // Range: 0x80051FEC -> 0x80052030
        // Local variables
        class Matrix43 modelRootTransform; // r1+0x90
    }
}
