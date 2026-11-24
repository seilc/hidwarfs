/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zLaserTurret.cpp
*/
static unsigned int TURRET_LOCKON_PLAYER; // size: 0x4, address: 0x8081ABB0
// Range: 0x800FA550 -> 0x800FA95C
bool zLaserTurretAIActionLockon::isInsideRotationBoundary(class zLaserTurretAIActionLockon * this /* r31 */, class xVec3 & playerVec /* r26 */) {
    // Local variables
    float vULimit; // f0
    float vLLimit; // f0
    float hLimit; // f0
    class xVec3 localPlayerVec; // r1+0x20
    class xVec3 localAt; // r1+0x14
    class xVec3 tmp; // r1+0x8
    float tmpDot; // f0
}
// Range: 0x800FA960 -> 0x800FADBC
void zLaserTurretAIActionLockon::Begin(class zLaserTurretAIActionLockon * this /* r27 */) {
    // Local variables
    class xMat4x3 * mat; // r0
    float closestDis2; // f29
    int closestIdx; // r29
    class xVec3 playerVec; // r1+0x20
    float playerDist2; // f28

    {
        // Range: 0x800FA9D0 -> 0x800FABBC
        // Local variables
        int i; // r28
    }

    // References
    // -> static unsigned int TURRET_LOCKON_PLAYER;
    // -> class xGlobals * xglobals;
}
// Range: 0x800FADC0 -> 0x800FB59C
enum eTaskState zLaserTurretAIActionLockon::Update(class zLaserTurretAIActionLockon * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class zPlayer * lockonPlayer; // r31
    class xMat4x3 * matTurret; // r0
    class xMat4x3 * matPlayer; // r5
    class xVec3 playerVec; // r1+0x74

    {
        // Range: 0x800FB008 -> 0x800FB564
        // Local variables
        class xMat4x3 worldMat; // r1+0x80
        class xMat3x3 localMat; // r1+0xC0
        class xVec3 localLookVec; // r1+0x50
        class xVec3 lookVec; // r1+0x5C
        class xVec3 playerVecOriginal; // r1+0x68
    }

    // References
    // -> static unsigned int TURRET_LOCKON_PLAYER;
}
// Range: 0x800FB5A0 -> 0x800FB5D0
void zLaserTurretAIActionLockon::End() {
}
// Range: 0x800FB5D0 -> 0x800FBA24
void zLaserTurretAIActionFire::Begin(class zLaserTurretAIActionFire * this /* r30 */) {
    {
        // Range: 0x800FB600 -> 0x800FB9EC
        // Local variables
        class zFXSpawn * fxSpawn; // r31

        {
            // Range: 0x800FB61C -> 0x800FB9EC
            // Local variables
            class zPlayer * lockonPlayer; // r29
            class xVec3 pos; // r1+0xB8
            class xMat4x3 * mat; // r0

            {
                // Range: 0x800FB6E8 -> 0x800FB9BC
                // Local variables
                class xVec3 playerVec; // r1+0xAC
            }
        }
    }

    // References
    // -> static unsigned int TURRET_LOCKON_PLAYER;
}
// signature: zLaserTurretAIActionFire::Update(float)
// Range: 0x800FBA30 -> 0x800FBA94
enum eTaskState zLaserTurretAIActionFire::Update() {
}
// Range: 0x800FBAA0 -> 0x800FBAA4
void zLaserTurretAIActionFire::End() {
}
// Range: 0x800FBAB0 -> 0x800FBD78
void zLaserTurretAIActionHit::Begin(class zLaserTurretAIActionHit * this /* r30 */) {
    // Local variables
    class zPlayer * lockonPlayer; // r31

    {
        // Range: 0x800FBB60 -> 0x800FBD60
        // Local variables
        float hit; // f1

        {
            // Range: 0x800FBBDC -> 0x800FBC64
            // Local variables
            class zCombatDamageInfo info; // r1+0x38
        }
        {
            // Range: 0x800FBC68 -> 0x800FBCF8
            // Local variables
            class EventActionHit hitParams; // r1+0x20
        }
        {
            // Range: 0x800FBD0C -> 0x800FBD60
            // Local variables
            class zFXSpawn * fxSpawn; // r0

            {
                // Range: 0x800FBD28 -> 0x800FBD60
                // Local variables
                class xMat4x3 * mat; // r4
            }
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> static unsigned int TURRET_LOCKON_PLAYER;
}
// signature: zLaserTurretAIActionHit::Update(float)
// Range: 0x800FBD80 -> 0x800FBD88
enum eTaskState zLaserTurretAIActionHit::Update() {
}
// Range: 0x800FBD90 -> 0x800FBD94
void zLaserTurretAIActionHit::End() {
}
// Range: 0x800FBDA0 -> 0x800FBDB8
bool zLaserTurretAIBTConditionHasDartRemain::Evaluate() const {
}
// signature: zLaserTurretAIBTActionBuilder::Build(int, Sext::ActionBase *) const
// Range: 0x800FBDC0 -> 0x800FBE34
class zBTAction * zLaserTurretAIBTActionBuilder::Build(class zLaserTurretAIBTActionBuilder * this /* r30 */) const {
    // Local variables
    class zBTAction * action; // r31
}
// signature: zLaserTurretAIBTConditionBuilder::Build(int, Sext::ConditionBase *) const
// Range: 0x800FBE50 -> 0x800FBEBC
class zBTCondition * zLaserTurretAIBTConditionBuilder::Build(class zLaserTurretAIBTConditionBuilder * this /* r30 */) const {
    // Local variables
    class zBTCondition * condition; // r31
}
// Range: 0x800FBEE0 -> 0x800FBFF8
void zLaserTurretAI::Reset(class zLaserTurretAI * this /* r29 */) {
}
// Range: 0x800FC000 -> 0x800FC0EC
void zLaserTurretAI::RegisterVariables() {
    // References
    // -> struct {} __vt__20zVariable<P7zPlayer>;
    // -> static unsigned int TURRET_LOCKON_PLAYER;
}
// Range: 0x800FC0F0 -> 0x800FC18C
float zLaserTurretAI::CalcDistanceSquareFromPos(class xVec3 & pos /* r31 */) const {
    // Local variables
    class xVec3 disp; // r1+0x14
}
// signature: zLaserTurretEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800FC190 -> 0x800FC1AC
static void zLaserTurretEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800FC1B0 -> 0x800FC51C
void zLaserTurret::Setup(class zLaserTurret * this /* r30 */) {
    // Local variables
    class hkpRigidBodyCinfo cinfo; // r1+0x20

    {
        // Range: 0x800FC31C -> 0x800FC338
        // Local variables
        float tmp; // f0
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__32zLaserTurretAIBTConditionBuilder;
    // -> struct {} __vt__29zLaserTurretAIBTActionBuilder;
}
// signature: zLaserTurret::SetBSPVisible(bool)
// Range: 0x800FC520 -> 0x800FC538
void zLaserTurret::SetBSPVisible() {
}
// signature: zLaserTurret::SetBSPCollision(bool)
// Range: 0x800FC540 -> 0x800FC558
void zLaserTurret::SetBSPCollision() {
}
// Range: 0x800FC560 -> 0x800FC5EC
void * zLaserTurret::~zLaserTurret(class zLaserTurret * this /* r30 */) {
    // References
    // -> struct {} __vt__12zLaserTurret;
}
// Range: 0x800FC5F0 -> 0x800FC71C
void zLaserTurret::Update(class zLaserTurret * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class xQuat quat; // r1+0x30
    class hkQuaternion havokQuat; // r1+0x20
    class hkpRigidBody * rb; // r30
    class hkVector4 pos; // r1+0x10
}
// signature: zLaserTurret::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800FC720 -> 0x800FCC7C
void zLaserTurret::HandleEvent(class zLaserTurret * this /* r30 */, class EventAny * params /* r28 */) {
    {
        // Range: 0x800FCAFC -> 0x800FCBB4
        // Local variables
        class xOGEntity * possibleDriver; // r4
        unsigned int flags; // r26
        class EventActionDrivenBy * paramst; // r0
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x800FCC80 -> 0x800FD1E8
void zLaserTurret::DriveAttach(class zLaserTurret * this /* r29 */, class xOGEntity * driver /* r30 */, unsigned int flags /* r31 */) {
    // Local variables
    class xMat4x3 D; // r1+0x48
    class xVec3 euler; // r1+0x8
    class xMat3x3 a_descaled; // r1+0x18
}
// signature: zLaserTurret::DriveCauseMove(xMat4x3 *, xMat4x3 *, xMat4x3 *, xMat4x3 *, bool, bool, float, float)
// Range: 0x800FD200 -> 0x800FD2A8
void zLaserTurret::DriveCauseMove(class zLaserTurret * this /* r28 */, class xMat4x3 * parent /* r29 */, class xMat4x3 * relMat /* r30 */, class xMat4x3 * oldMat /* r31 */) {
    // Local variables
    class xMat4x3 baseMat; // r1+0x8
}
// Range: 0x800FD2B0 -> 0x800FD970
class Entity * Sext::zLaserTurretAsset::Create(class EntityHandleBase * handle /* r24 */, class zLaserTurretAsset * asset /* r26 */) {
    // Local variables
    class zLaserTurret * ent; // r27

    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
    // -> struct {} __vt__14zLaserTurretAI;
    // -> struct {} __vt__9zBTClient;
    // -> struct {} __vt__12zLaserTurret;
    // -> struct {} __vt__4xEnt;
    // -> struct {} __vt__17xEffectAttachIntf;
    // -> struct {} __vt__Q25World9xOGEntity;
}
