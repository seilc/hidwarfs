/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zRubberBand.cpp
*/
float dbtw_SB_CylRadius; // size: 0x4, address: 0x806C1D90
float sideLaunchDistance; // size: 0x4, address: 0x806C1D94
float sideOffset; // size: 0x4, address: 0x806C1DB0
// Range: 0x8012C760 -> 0x8012C7C0
class Entity * Sext::zRubberBandAsset::Create(class EntityHandleBase * handle /* r30 */, class zRubberBandAsset * asset /* r31 */) {
}
// Range: 0x8012C7C0 -> 0x8012C818
void zRubberBandSceneExit() {
    // References
    // -> class zGlobals globals;
}
// signature: zRubberBand::zRubberBand(World::EntityHandleBase *, Sext::zRubberBandAsset *)
// Range: 0x8012C820 -> 0x8012C8B8
void * zRubberBand::zRubberBand(class zRubberBand * this /* r29 */, class zRubberBandAsset * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__15zRubberCylinder;
    // -> struct {} __vt__11zRubberBand;
}
// Range: 0x8012C8C0 -> 0x8012C96C
void zRubberBand::Setup(class zRubberBand * this /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0
}
// Range: 0x8012C970 -> 0x8012CA28
void zRubberBand::Reset(class zRubberBand * this /* r31 */) {
    // Local variables
    class xVec3 start; // r1+0x14
    class xVec3 end; // r1+0x8
}
// Range: 0x8012CA30 -> 0x8012CAC4
void * zRubberBand::~zRubberBand(class zRubberBand * this /* r30 */) {
    // References
    // -> struct {} __vt__11zRubberBand;
}
// Range: 0x8012CAE0 -> 0x8012CB44
void zRubberBand::SceneExit(class zRubberBand * this /* r31 */) {
}
// signature: zRubberBand::Update(float)
// Range: 0x8012CB50 -> 0x8012CDB0
void zRubberBand::Update(class zRubberBand * this /* r30 */) {
    {
        // Range: 0x8012CB78 -> 0x8012CBE0
        // Local variables
        class xBase * obj; // r31
    }
    {
        // Range: 0x8012CBE4 -> 0x8012CD40
        // Local variables
        float maxStretchDist2; // f0
        float velDotLaunch; // f0
        class xVec3 objVel; // r1+0x8
        float distToAttachment2; // f0
        class xVec3 cylToAttachment; // r1+0x14
        class xVec3 attachPoint; // r1+0x20
        class xVec3 closestPoint; // r1+0x2C
    }
}
// Range: 0x8012CDB0 -> 0x8012CE5C
void zRubberBand::ChangeSoundState(class zRubberBand * this /* r30 */, enum SoundState newState /* r31 */) {
}
// Range: 0x8012CE60 -> 0x8012CF04
void zRubberBand::SoundUpdate(class zRubberBand * this /* r30 */) {
    // Local variables
    class FMOD_VECTOR * soundPos; // r31
}
// Range: 0x8012CF10 -> 0x8012CFCC
void zRubberBand::SoundSetup(class zRubberBand * this /* r31 */) {
}
// Range: 0x8012CFD0 -> 0x8012D040
void zRubberBand::SoundStopCurrent(class zRubberBand * this /* r31 */) {
}
// signature: zRubberBand::EventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8012D040 -> 0x8012D064
void zRubberBand::EventWrapper() {
}
// Range: 0x8012D070 -> 0x8012D17C
float zRubberBand::GetMaxDistForCurAttach(class zRubberBand * this /* r30 */) const {
    // Local variables
    class xVec3 attachPoint; // r1+0x8
    float x; // f1
    float slope; // f2

    // References
    // -> float sideLaunchDistance;
}
// signature: zRubberBand::WhichSide(xVec3 *)
// Range: 0x8012D180 -> 0x8012D240
enum CylSide zRubberBand::WhichSide(class zRubberBand * this /* r30 */) {
    // Local variables
    class xVec3 sideVec; // r1+0x38
    class xVec3 cylVec; // r1+0x2C
    class xVec3 crossVec; // r1+0x20
}
// Range: 0x8012D240 -> 0x8012D2E0
void zRubberCylinder::SetEnds(class zRubberCylinder * this /* r29 */, class xVec3 & start /* r30 */, class xVec3 & end /* r31 */) {
}
// signature: zRubberCylinder::SetPos(const xVec3 &, const xVec3 &)
// Range: 0x8012D2E0 -> 0x8012D360
void zRubberCylinder::SetPos(class zRubberCylinder * this /* r30 */, class xVec3 & start /* r31 */) {
}
// Range: 0x8012D360 -> 0x8012D468
float zRubberCylinder::GetDistanceSqToPoint(class zRubberCylinder * this /* r28 */, class xVec3 * toPoint /* r29 */, class xVec3 * oClosestPointOnCyl /* r30 */, class xVec3 * oDistVec /* r31 */) {
    // Local variables
    class xVec3 s2p; // r1+0x5C
    class xVec3 s2c; // r1+0x50
    class xVec3 closestPoint; // r1+0x44
    class xVec3 distVec; // r1+0x38
    float dist; // f0
}
// Range: 0x8012D470 -> 0x8012D4EC
void zRubberCylinder::SetCtrlSegment(class zRubberCylinder * this /* r31 */, float distFromStart /* f31 */) {
}
// signature: zRubberCylinder::SetCtrlSegment(xVec3 &)
// Range: 0x8012D530 -> 0x8012D590
void zRubberCylinder::SetCtrlSegment(class zRubberCylinder * this /* r31 */) {
    // Local variables
    class xVec3 v; // r1+0x14
}
// Range: 0x8012D590 -> 0x8012D5FC
void zRubberCylinder::GetTransform(class zRubberCylinder * this /* r30 */, class xMat4x3 * oMat /* r31 */) {
    // Local variables
    class xVec3 dir; // r1+0x14
}
// Range: 0x8012D600 -> 0x8012DD88
void zRubberCylinder::RenderUpdate(class zRubberCylinder * this /* r28 */) {
    // Local variables
    class ImmediatePrototypeEntity * drawWithThisIM; // r0
    class ImmediateContext immCtxt; // r1+0x1F8
    class xMat3x3 m; // r1+0x1C8
    class xVec3 stepVec; // r1+0xAC
    float segHeight; // f0
    class xVec3 s2c; // r1+0xA0
    class xVec3 c2e; // r1+0x94
    class xVec3 cPos; // r1+0x88
    class xMat3x3 m1; // r1+0x198
    class xMat3x3 m2; // r1+0x168
    float distance; // f27
    class BroadBound bounds; // r1+0xB8
    class Renderable3D * rend; // r29
    class Vector4 shadowColor; // r1+0x60
    unsigned int finalShadowColor; // r6

    {
        // Range: 0x8012D6E4 -> 0x8012D800
        // Local variables
        float stepLength; // f27
    }
    {
        // Range: 0x8012D800 -> 0x8012D850
        // Local variables
        class xVec3 d; // r1+0x7C
    }
    {
        // Range: 0x8012D850 -> 0x8012DB3C
        // Local variables
        int k; // r30

        {
            // Range: 0x8012D850 -> 0x8012DB3C
            // Local variables
            float tv; // f5
            float tu; // f4
            float uvs[2]; // r1+0x10
            class xVec3 v; // r1+0x70
            int i; // r0
            int col; // r0
            int row; // r29

            {
                // Range: 0x8012D850 -> 0x8012D850
                // Local variables
                float currentStretch; // f1

                {
                    // Range: 0x8012D850 -> 0x8012D850
                    // Local variables
                    class xMat3x3 mm; // r1+0x138
                    float scale; // f1
                }
                {
                    // Range: 0x8012D850 -> 0x8012D850
                    // Local variables
                    class xMat3x3 mm; // r1+0x108
                    float scale; // f1
                }
                {
                    // Range: 0x8012D850 -> 0x8012D850
                    // Local variables
                    class xMat3x3 mm; // r1+0xD8
                    float scale; // f0
                }
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8012DDF0 -> 0x8012DEF4
void zRubberCollision::CreateFromRender(class zRubberCollision * this /* r30 */) {
    // Local variables
    class zRubberCylinder & cyl; // r0
    class hkVector4 cylVec; // r1+0x10

    // References
    // -> class hkVector4 hkVector4Zero;
    // -> float hkConvexShapeDefaultRadius;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> float sideOffset;
}
// Range: 0x8012DF00 -> 0x8012DF84
void zRubberCollision::UpdateTransform(class zRubberCollision * this /* r31 */) {
    // Local variables
    class xMat4x3 mat; // r1+0x20
    class xVec3 offsetVec; // r1+0x14

    // References
    // -> float sideOffset;
}
// Range: 0x8012DF90 -> 0x8012E0C8
class xBase * zRubberCollision::CheckCollision(class zRubberCollision * this /* r28 */) {
    // Local variables
    class hkMotionState motionState; // r1+0x70
    class hkQuaternion quat; // r1+0x10
    class hkpWorld * havokWorld; // r30
    class hkpCollidable collA; // r1+0x20
    class hkpCollisionInput * input; // r31
    class hkpAllCdBodyPairCollector collector; // r1+0x120

    {
        // Range: 0x8012E010 -> 0x8012E0A0
        // Local variables
        int i; // r29

        {
            // Range: 0x8012E010 -> 0x8012E0A0
            // Local variables
            class xBase * hitObject; // r28
            class hkpRigidBody * hitRB; // r0
            class hkpPhantom * hitPhantom; // r0
        }
    }
}
// Range: 0x8012E0D0 -> 0x8012E264
bool zRubberCollision::ConfirmAttached(class zRubberCollision * this /* r31 */) {
    // Local variables
    class hkpSphereShape shape; // r1+0x30
    class hkMotionState motionState; // r1+0xA0
    class hkVector4 pos; // r1+0x20
    class hkpWorld * havokWorld; // r29
    class hkpCollidable collA; // r1+0x50
    class hkpCollisionInput * input; // r30
    class hkpAllCdBodyPairCollector collector; // r1+0x150

    {
        // Range: 0x8012E1A8 -> 0x8012E238
        // Local variables
        int i; // r28

        {
            // Range: 0x8012E1A8 -> 0x8012E238
            // Local variables
            class xBase * hitObject; // r4
            class hkpRigidBody * hitRB; // r0
            class hkpPhantom * hitPhantom; // r0
        }
    }
}
// signature: zRubberAttachedObject::Attach(xBase *)
// Range: 0x8012E270 -> 0x8012E39C
void zRubberAttachedObject::Attach(class zRubberAttachedObject * this /* r30 */) {
    // Local variables
    class xVec3 objPos; // r1+0x2C
    class xVec3 pointOnCyl; // r1+0x20
    class xVec3 distVec; // r1+0x14
    float dist; // f0
    float distFromStart; // f0
}
// Range: 0x8012E3A0 -> 0x8012E3CC
void zRubberAttachedObject::Detach() {
}
// Range: 0x8012E3D0 -> 0x8012E568
void zRubberAttachedObject::GetLaunchDir(class zRubberAttachedObject * this /* r29 */, class xVec3 * oLaunchDir /* r30 */) {
    // Local variables
    class xVec3 dirIn; // r1+0x1C
    class xVec3 predictedDir; // r1+0x10
    float dotAmt; // f1
    float angle; // f0
}
// Range: 0x8012E570 -> 0x8012E774
void zRubberAttachedObject::Launch(class zRubberAttachedObject * this /* r31 */) {
    // Local variables
    class xVec3 newVel; // r1+0x10

    {
        // Range: 0x8012E5B8 -> 0x8012E6CC
        // Local variables
        class zCombatDamageInfo damageInfo; // r1+0x1C

        {
            // Range: 0x8012E5FC -> 0x8012E694
            // Local variables
            class zCommonPlayer * player; // r29
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class hkVector4 hkVector4Zero;
}
// signature: zRubberAttachedObject::GetObjPosition(xVec3 *) const
// Range: 0x8012E780 -> 0x8012E7E8
void zRubberAttachedObject::GetObjPosition() const {
    {
        // Range: 0x8012E7C8 -> 0x8012E7E4
        // Local variables
        class hkVector4 & pos; // r0
        class zProjectileHavok * projPhysEntity; // r5
    }
}
// signature: zRubberAttachedObject::GetVelocity(xVec3 *) const
// Range: 0x8012E7F0 -> 0x8012E86C
void zRubberAttachedObject::GetVelocity() const {
    {
        // Range: 0x8012E824 -> 0x8012E838
        // Local variables
        class zCommonPlayer * player; // r0
    }
    {
        // Range: 0x8012E84C -> 0x8012E868
        // Local variables
        class hkVector4 & vel; // r0
        class zProjectileHavok * projPhysEntity; // r5
    }
}
// signature: zRubberAttachedObject::SetVelocity(const xVec3 *)
// Range: 0x8012E870 -> 0x8012E8E8
void zRubberAttachedObject::SetVelocity() {
    {
        // Range: 0x8012E8A8 -> 0x8012E8C4
        // Local variables
        class xEnt * obj; // r0
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zRubberAttachedObject::IsAttachable(xBase *)
// Range: 0x8012E8F0 -> 0x8012E934
bool zRubberAttachedObject::IsAttachable() {
}
// signature: zRubberBand::DriveGetCurMat(int)
// Range: 0x8012E940 -> 0x8012E978
class xMat4x3 * zRubberBand::DriveGetCurMat(class zRubberBand * this /* r31 */) {
}
// signature: zRubberBand::DrivePrep(World::xOGEntity *)
// Range: 0x8012E980 -> 0x8012E9E0
bool zRubberBand::DrivePrep(class zRubberBand * this /* r31 */) {
    // Local variables
    class xMat4x3 invDriverMat; // r1+0x8
}
// signature: zRubberBand::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x8012E9E0 -> 0x8012EA34
void zRubberBand::DriveCauseMove(class zRubberBand * this /* r31 */) {
    // Local variables
    class xMat4x3 newMat; // r1+0x8
}
