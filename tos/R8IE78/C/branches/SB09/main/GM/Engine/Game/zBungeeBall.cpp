/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zBungeeBall.cpp
*/
static float cordStartOffset; // size: 0x4, address: 0x80689634
class RubberCylinder renderableBungeeBallCord; // size: 0xC, address: 0x80731268
unsigned int bungeeBallCount; // size: 0x4, address: 0x80731274
// Range: 0x80085710 -> 0x80085770
class Entity * Sext::zBungeeBallAsset::Create(class EntityHandleBase * handle /* r30 */, class zBungeeBallAsset * asset /* r31 */) {
}
// signature: zBungeeBall_HandleEvent(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80085770 -> 0x80085780
void zBungeeBall_HandleEvent(class xBase * from /* r0 */) {
}
// signature: zBungeeBall::zBungeeBall(World::EntityHandleBase *, Sext::zBungeeBallAsset *)
// Range: 0x80085780 -> 0x80085868
void * zBungeeBall::zBungeeBall(class zBungeeBall * this /* r30 */, class zBungeeBallAsset * inAsset /* r31 */) {
    // References
    // -> class RubberCylinder renderableBungeeBallCord;
    // -> unsigned int bungeeBallCount;
    // -> struct {} __vt__11zBungeeBall;
}
// Range: 0x80085870 -> 0x800858D0
void * zBungeeBall::~zBungeeBall(class zBungeeBall * this /* r30 */) {
    // References
    // -> unsigned int bungeeBallCount;
}
// signature: zBungeeBall::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800858D0 -> 0x80085A18
void zBungeeBall::HandleEvent(class zBungeeBall * this /* r31 */) {
}
// signature: zBungeeBall::SetBSPVisible(bool)
// Range: 0x80085A20 -> 0x80085A28
void zBungeeBall::SetBSPVisible() {
}
// Range: 0x80085A30 -> 0x80085A64
void zBungeeBall::UpdateVisibility() {
}
// Range: 0x80085A70 -> 0x80085B0C
void zBungeeBall::UpdateModelMat(class zBungeeBall * this /* r31 */) {
    // Local variables
    float scale; // f31
}
// Range: 0x80085B10 -> 0x80085C10
void zBungeeBall::Setup(class zBungeeBall * this /* r30 */) {
    // Local variables
    class xMat4x3 mat; // r1+0x8
}
// Range: 0x80085C10 -> 0x80085C6C
void zBungeeBall::DebugReset(class zBungeeBall * this /* r29 */) {
}
// Range: 0x80085C70 -> 0x80085CB0
void zBungeeBall::SceneExit(class zBungeeBall * this /* r31 */) {
}
// Range: 0x80085CB0 -> 0x80085FB4
void zBungeeBall::Update(class zBungeeBall * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class zSBPlayer * player; // r0

    {
        // Range: 0x80085D8C -> 0x80085E10
        // Local variables
        class xVec3 displacement; // r1+0x14
    }
}
// Range: 0x80085FC0 -> 0x800862E0
void zBungeeBall::DrawCords(class zBungeeBall * this /* r28 */) {
    // Local variables
    class zSBPlayer * player; // r0
    float cordMinRadius; // f0
    float cordMaxRadius; // f0
    float fallOffDistance; // f30

    {
        // Range: 0x80085FEC -> 0x800862B8
        // Local variables
        class xVec3 basePos; // r1+0xC8
        class xVec3 cordEnd; // r1+0xD4
        class xVec3 cordBegin; // r1+0xE0
        class xVec3 offset; // r1+0xEC
        class xMat4x3 boneMat; // r1+0xF8
    }

    // References
    // -> class RubberCylinder renderableBungeeBallCord;
    // -> static float cordStartOffset;
}
// Range: 0x800862E0 -> 0x8008630C
float zBungeeBall::GetYaw() {
    // Local variables
    class xVec3 euler; // r1+0x8
}
// signature: zBungeeBall::ClampYaw(float, float &)
// Range: 0x80086310 -> 0x800863D0
bool zBungeeBall::ClampYaw(float & out /* r31 */) {
    // Local variables
    float yaw; // f0
    float range; // f31
    float diff; // f0
}
// Range: 0x800863D0 -> 0x80086418
class xVec3 zBungeeBall::GetPlayerPosition() {
    // Local variables
    class xVec3 pos; // r1+0x8
}
// signature: zBungeeBall::SetPlayerYaw(float)
// Range: 0x80086420 -> 0x80086434
void zBungeeBall::SetPlayerYaw() {
}
// Range: 0x80086440 -> 0x8008673C
class xVec3 zBungeeBall::GetFlingDirection(class zBungeeBall * this /* r27 */, float yaw /* r1+0x8 */) {
    // Local variables
    float lowerYaw; // f29
    float upperYaw; // f28
    class xVec3 lowerDir; // r1+0x54
    class xVec3 upperDir; // r1+0x48
    bool targetFound; // r29

    {
        // Range: 0x8008647C -> 0x800865EC
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x8008647C -> 0x800865EC
            // Local variables
            bool valid; // r0
            class xVec3 pos; // r1+0x3C
            class xBase * object; // r0

            {
                // Range: 0x8008647C -> 0x800865EC
                // Local variables
                float yawDiff; // f27
                float targetYaw; // f0
                class xVec3 dir; // r1+0x30
            }
        }
    }
    {
        // Range: 0x800865EC -> 0x80086624
        // Local variables
        class xVec3 dir; // r1+0x24
    }
    {
        // Range: 0x80086624 -> 0x800866FC
        // Local variables
        float interp; // f2
        float lowerY; // f30
        float upperY; // f27
        float length; // f0
        class xVec3 dir; // r1+0x18
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
}
// signature: zBungeeBall::IsWithinBall(xVec3 &)
// Range: 0x800867D0 -> 0x80086838
bool zBungeeBall::IsWithinBall(class zBungeeBall * this /* r6 */) {
    // Local variables
    class xVec3 displacement; // r1+0x14
    float distanceSquared; // f0
}
// Range: 0x80086840 -> 0x800868D8
bool zBungeeBall::IsWithinMovementTolerance(class xVec3 & v /* r31 */) {
    // Local variables
    class xVec3 displacement; // r1+0x20
    float distance; // f0
}
// Range: 0x800868E0 -> 0x80086978
bool zBungeeBall::IsWithinHoldTolerance(class xVec3 & v /* r31 */) {
    // Local variables
    class xVec3 displacement; // r1+0x20
    float distance; // f0
}
// Range: 0x80086980 -> 0x800869A8
bool zBungeeBall::IsReadyForFling() {
}
// Range: 0x800869B0 -> 0x800869D0
bool zBungeeBall::IsPerformingFling() {
}
// Range: 0x800869D0 -> 0x800869E4
bool zBungeeBall::IsReturning() {
}
// Range: 0x800869F0 -> 0x80086A18
bool zBungeeBall::IsFlattened() {
}
// Range: 0x80086A20 -> 0x80086AD4
void zBungeeBall::BallFling(class zBungeeBall * this /* r30 */, class xVec3 & dir /* r31 */) {
}
// Range: 0x80086AE0 -> 0x80086AF8
void zBungeeBall::BallReturn() {
}
// signature: zBungeeBall::BallReturn(float)
// Range: 0x80086B00 -> 0x80086B38
void zBungeeBall::BallReturn(class zBungeeBall * this /* r31 */) {
}
// Range: 0x80086B40 -> 0x80086B7C
void zBungeeBall::BallRelease(class zBungeeBall * this /* r31 */) {
}
// signature: zBungeeBall::MoveTowardsFlingTarget(float)
// Range: 0x80086B80 -> 0x80086C50
bool zBungeeBall::MoveTowardsFlingTarget(class zBungeeBall * this /* r30 */) {
    // Local variables
    bool finished; // r31
    float totalTime; // f2
    class xVec3 newPos; // r1+0x2C
}
// signature: zBungeeBall::MoveTowardsBase(float)
// Range: 0x80086C50 -> 0x80086D28
bool zBungeeBall::MoveTowardsBase(class zBungeeBall * this /* r30 */) {
    // Local variables
    bool finished; // r31
    float totalTime; // f2
    class xVec3 newPos; // r1+0x2C
}
// signature: zBungeeBall::CalcTargetPosition(xBase *, xVec3 &)
// Range: 0x80086D30 -> 0x80086DE0
bool zBungeeBall::CalcTargetPosition(class zBungeeBall * this /* r30 */, class xVec3 & pos /* r31 */) {
    // Local variables
    class xOGEntity * ogEnt; // r3
}
// Range: 0x80086DE0 -> 0x80086E84
void zBungeeBall::PopBall(class zBungeeBall * this /* r30 */) {
    {
        // Range: 0x80086E10 -> 0x80086E60
        // Local variables
        class zFXSpawn * PopfxSpawn; // r0
    }
}
// Range: 0x80086E90 -> 0x80086F00
void zBungeeBall::ReinflateBall(class zBungeeBall * this /* r31 */) {
}
// signature: zBungeeBall::DriveGetCurMat(int)
// Range: 0x80086F00 -> 0x80086F08
class xMat4x3 * zBungeeBall::DriveGetCurMat() {
}
// signature: zBungeeBall::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x80086F10 -> 0x80086FC8
void zBungeeBall::DriveCauseMove(class zBungeeBall * this /* r28 */, class xMat4x3 * driverCurMat /* r29 */, class xMat4x3 * drvInvPrevMat /* r30 */, class xMat4x3 * psgPrevMat /* r31 */) {
    // Local variables
    class xMat4x3 newMat; // r1+0x38

    {
        // Range: 0x80086F5C -> 0x80086FB4
        // Local variables
        class xMat3x3 rot; // r1+0x8
    }
}
// Range: 0x80086FD0 -> 0x80087014
void RubberCylinder::RubberCylinderCreate(class RubberCylinder * this /* r31 */) {
    // Local variables
    class ElectricCylinder * cg; // r0
}
// signature: RubberCylinder::CalcCylinderRadius(float, float, float, float, float, float &)
// Range: 0x80087020 -> 0x80087068
float RubberCylinder::CalcCylinderRadius(float d /* f1 */) {
}
// Range: 0x80087070 -> 0x80087A28
void RubberCylinder::RubberCylinderRender(class RubberCylinder * this /* r29 */, class xVec3 * start /* r30 */, class xVec3 * dirVec /* r31 */, float initialSlope /* f30 */, float cordMaxRadius /* f29 */, float cordMinRadius /* f28 */, float fallOffDistance /* f27 */, float wobble /* f26 */, class ImmediatePrototypeEntity * im /* r20 */) {
    // Local variables
    class xMat3x3 m; // r1+0xB0
    class ImmediateContext immCtxt; // r1+0x80
    float Radii[32]; // r1+0x1E0
    float dRadii[32]; // r1+0x160
    float WobbleInfluence[32]; // r1+0xE0
    float cylinderLength; // f0
    float tx; // f28
    float ty; // f0

    {
        // Range: 0x80087400 -> 0x800874BC
        // Local variables
        int i; // r22

        {
            // Range: 0x80087400 -> 0x800874BC
            // Local variables
            float delta2; // f21
            float delta; // r31
        }
    }
    {
        // Range: 0x800874C0 -> 0x800876A0
        // Local variables
        int i; // r19

        {
            // Range: 0x800874C0 -> 0x800874D0
            // Local variables
            int j; // r21

            {
                // Range: 0x800874C0 -> 0x800874D0
                // Local variables
                float ty; // f7
                class xVec3 n; // r1+0x44
                float deriv; // f3
                class xVec3 v; // r1+0x50
                float delta; // f27
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
}
