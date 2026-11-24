/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPlayer.cpp
*/
class zPlayerInventory inventory; // size: 0x1F, address: 0x80754058
static class ImmediatePrototypeEntity * sActiveEntity; // size: 0x4, address: 0x80754078
int delays; // size: 0x4, address: 0x8075AF98
int oldNumHumans; // size: 0x4, address: 0x8075AF9C
static float reactiveAnimSpeed; // size: 0x4, address: 0x8075407C
unsigned int comboExperiencePoints[9]; // size: 0x24, address: 0x806C1CB4
// signature: Sext::xEntPlayerAsset::Create(World::EntityHandleBase *, Sext::xEntPlayerAsset *)
// Range: 0x80114600 -> 0x80114754
class Entity * Sext::xEntPlayerAsset::Create(class xEntPlayerAsset * asset /* r31 */) {
    // Local variables
    int index; // r30
    class zPlayer * player; // r29
    unsigned long long assetID; // r28:r27
    class zCharacterAsset * characterAsset; // r26
    class PlayerTemplate * playerTemplate; // r0

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80114760 -> 0x80114768
void zPlayer::Deactivate() {
}
// Range: 0x80114770 -> 0x80114978
void zPlayer::Init(class zPlayer * this /* r30 */, class xEntAsset * asset /* r31 */) {
    // Local variables
    class xEntPlayerAsset * playerAsset; // r0
    unsigned long long lightkitUID; // r3:r4

    {
        // Range: 0x80114844 -> 0x80114868
        // Local variables
        class EntityHandleBase * lkHandle; // r0

        {
            // Range: 0x80114850 -> 0x80114868
            // Local variables
            class LightKitEntity * lkEnt; // r0
        }
    }

    // References
    // -> float SECS_PER_VBLANK;
    // -> class zGlobals globals;
}
// Range: 0x80114980 -> 0x80114B64
void zPlayer::GetPadConnected(class zPlayer * this /* r31 */) {
    {
        // Range: 0x80114998 -> 0x801149E8
        // Local variables
        class EventActionHudSetPlayer params; // r1+0x28
    }
    {
        // Range: 0x801149F4 -> 0x80114A90
        // Local variables
        class EventActionOneInt params2; // r1+0xC
        class EventActionHudSetPlayer params; // r1+0x20
    }
    {
        // Range: 0x80114A90 -> 0x80114B04
        // Local variables
        class EventActionOneInt params2; // r1+0x8
        class EventActionHudSetPlayer params; // r1+0x18
    }
    {
        // Range: 0x80114B04 -> 0x80114B50
        // Local variables
        class EventActionHudSetPlayer params; // r1+0x10
    }

    // References
    // -> class zGlobals globals;
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80114B70 -> 0x80114BB4
void zPlayer::DisConnectPad(class zPlayer * this /* r31 */) {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x80114BC0 -> 0x80114C1C
void zPlayer::SceneSetup() {
    {
        // Range: 0x80114BD0 -> 0x80114C08
        // Local variables
        class EntityHandleBase * goodie; // r0
    }

    // References
    // -> static class ImmediatePrototypeEntity * sActiveEntity;
}
// signature: zPlayer::SceneExit(zScene *)
// Range: 0x80114C20 -> 0x80114C3C
void zPlayer::SceneExit() {
}
// signature: zPlayer::zPlayerEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80114C40 -> 0x80114C5C
void zPlayer::zPlayerEventCB(class xBase * from /* r0 */) {
}
// Range: 0x80114C60 -> 0x80114D18
bool zPlayer::Damage(class zPlayer * this /* r30 */, class zCombatDamageInfo & damageInfo /* r31 */) {
}
// Range: 0x80114D20 -> 0x80114D28
class zCombat * zPlayer::GetCombat() {
}
// Range: 0x80114D30 -> 0x80114D50
float zPlayer::GetCurrentHitPoints() const {
}
// Range: 0x80114D50 -> 0x80114D6C
float * zPlayer::GetCurrentHitPointsPointer() {
}
// signature: zPlayer::SetCurrentHitPoints(float)
// Range: 0x80114D70 -> 0x80114D84
void zPlayer::SetCurrentHitPoints() {
}
// signature: zPlayer::SetMaximumHitPoints(float)
// Range: 0x80114D90 -> 0x80114DA4
void zPlayer::SetMaximumHitPoints() {
}
// Range: 0x80114DB0 -> 0x80114E14
bool zPlayer::CanTakeHit(float damage /* f30 */, float minimum /* f31 */) {
}
// Range: 0x80114E20 -> 0x80114E40
float zPlayer::GetMaximumHitPoints() const {
}
// signature: zPlayer::CollideTrigger(xScene *)
// Range: 0x80114E40 -> 0x80115E74
void zPlayer::CollideTrigger(class zPlayer * this /* r14 */) {
    // Local variables
    class zPlayer_CollideTrigger_CB cb; // r1+0x5C

    {
        // Range: 0x80114FBC -> 0x80115E40
        // Local variables
        int i; // r15
    }

    // References
    // -> unsigned long long gThisPlayer;
    // -> int gTriggerListSize;
    // -> class zTriggerListEntry * gTriggerList;
    // -> class xGlobals * xglobals;
}
// Range: 0x80115E80 -> 0x80115F30
void zPlayer::LoadCheckPoint(class zPlayer * this /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zPlayer::SetFloorPosition(xVec3 *)
// Range: 0x80115F30 -> 0x80115F44
void zPlayer::SetFloorPosition() {
}
// signature: zPlayer::LoadCheckPointB(xVec3, float)
// Range: 0x80115F50 -> 0x8011604C
void zPlayer::LoadCheckPointB(class zPlayer * this /* r30 */, float ang /* f31 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zPlayer::StoreCheckPoint(const zPlayerCheckPoint &)
// Range: 0x80116050 -> 0x80116074
void zPlayer::StoreCheckPoint() {
}
// signature: zPlayer::zPlayer(World::EntityHandleBase *)
// Range: 0x80116080 -> 0x80116108
void * zPlayer::zPlayer(class zPlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__7zPlayer;
}
// signature: zPlayer::GetParameter(const char *, bool *, bool)
// Range: 0x80116110 -> 0x80116160
void zPlayer::GetParameter(class zPlayer * this /* r7 */, bool * value /* r31 */) {
}
// signature: zPlayer::GetParameter(const char *, float *, float)
// Range: 0x80116160 -> 0x801161AC
void zPlayer::GetParameter(class zPlayer * this /* r6 */, char * name /* r0 */, float * value /* r31 */) {
}
// signature: zPlayer::GetParameterList(const char *, float *, int, const float *)
// Range: 0x801161B0 -> 0x80116234
void zPlayer::GetParameterList(class zPlayer * this /* r9 */, float * value /* r30 */, int count /* r31 */) {
    // Local variables
    char * strValue; // r4

    {
        // Range: 0x801161BC -> 0x801161F0
        // Local variables
        int i; // r0
    }
}
// Range: 0x80116240 -> 0x80116264
void zPlayer::Render() {
}
// Range: 0x80116270 -> 0x801164E0
void zPlayer::Reset(class zPlayer * this /* r31 */) {
    {
        // Range: 0x801162F0 -> 0x8011631C
        // Local variables
        int i; // r30
    }

    // References
    // -> class xVec3 m_Null;
    // -> class zGlobals globals;
    // -> class xVec3 g_Y3;
}
// Range: 0x80116560 -> 0x801165B8
bool zPlayer::IsDead() const {
}
// Range: 0x801165C0 -> 0x80116684
void zPlayer::BeginUpdate(class zPlayer * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class hkpCharacterRigidBody * charRigidBody; // r31
}
// Range: 0x80116690 -> 0x8011671C
void zPlayer::DefaultBeginUpdate(class zPlayer * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80116720 -> 0x80116B90
void zPlayer::UpdatePlayerDrive(class zPlayer * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class zPlatform * oplat; // r0
    class zPlatform * platform; // r30

    {
        // Range: 0x8011683C -> 0x80116870
        // Local variables
        class zPlatform * oldFloorPlatform; // r0
    }
    {
        // Range: 0x80116A9C -> 0x80116AF0
        // Local variables
        class xOGEntity * floor_OGEntity; // r0
    }
}
// signature: zPlayer::EndUpdate(float)
// Range: 0x80116BC0 -> 0x80116BD4
void zPlayer::EndUpdate() {
}
// Range: 0x80116BE0 -> 0x80116CEC
void zPlayer::DefaultEndUpdate(class zPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class zEnt * ent; // r0

    {
        // Range: 0x80116C84 -> 0x80116CB8
        // Local variables
        class zPlayerInput * newInput; // r0
    }

    // References
    // -> class zPlayerInputPadMgr padManager;
    // -> int delays;
}
// signature: zPlayer::MountCheck(World::xOGEntity *)
// Range: 0x80116CF0 -> 0x80116D18
bool zPlayer::MountCheck() {
}
// Range: 0x80116D20 -> 0x80116D8C
void zPlayer::MountPlayer(class zPlayer * this /* r30 */, class xOGEntity * object /* r31 */) {
}
// signature: zPlayer::Move(xScene *, float, xEntFrame *)
// Range: 0x80116D90 -> 0x80116DA4
void zPlayer::Move() {
}
// signature: zPlayer::Update_BaseTimers(float)
// Range: 0x80116DB0 -> 0x80116DDC
void zPlayer::Update_BaseTimers() {
}
// signature: zPlayer::Update_PlaySoundInIdleAnim(float)
// Range: 0x80116DE0 -> 0x80116F44
void zPlayer::Update_PlaySoundInIdleAnim(class zPlayer * this /* r31 */) {
    {
        // Range: 0x80116E08 -> 0x80116EEC
        {
            // Range: 0x80116E30 -> 0x80116EEC
            // Local variables
            char idle_sound_name[10]; // r1+0x8
            char idle_sound_number; // r26
        }
    }
}
// signature: zPlayer::SetViewport(int)
// Range: 0x80116F50 -> 0x80116F58
void zPlayer::SetViewport() {
}
// Range: 0x80116F60 -> 0x80116FE4
class xVec3 zPlayer::GetEffectiveVelocityForAI(class zPlayer * this /* r31 */) {
    // References
    // -> unsigned int gFrameCount;
}
// Range: 0x80116FF0 -> 0x80117290
void zPlayer::Update_Prediction(class zPlayer * this /* r31 */, float dt /* f30 */) {
    // Local variables
    class zEnt * ent; // r0
    class xVec3 lastDir; // r1+0x14
    float newVel; // f0
    float newAngV; // f29
    float pow; // f31
    float velDiff; // f1

    {
        // Range: 0x80117110 -> 0x801171CC
        // Local variables
        float angDiff; // f0
        float velDot; // f0
        class xVec3 cross; // r1+0x8
    }
    {
        // Range: 0x801171F4 -> 0x80117260
        // Local variables
        float r; // f29
    }

    // References
    // -> unsigned int gFrameCount;
}
// signature: zPlayer::PredictY(float) const
// Range: 0x80117290 -> 0x801172E0
float zPlayer::PredictY() const {
    // Local variables
    float y; // f3

    // References
    // -> class zGlobals globals;
}
// signature: zPlayer::Update_Fall(float)
// Range: 0x801172E0 -> 0x801172F4
void zPlayer::Update_Fall() {
}
// signature: zPlayer::DefaultUpdateFall(float)
// Range: 0x80117300 -> 0x8011732C
void zPlayer::DefaultUpdateFall() {
}
// Range: 0x80117330 -> 0x801173C0
void zPlayer::Exit(class zPlayer * this /* r30 */) {
    // Local variables
    class hkpCharacterProxy * proxy; // r31
    class hkpCharacterRigidBody * characterRigidBody; // r0
}
// Range: 0x801173C0 -> 0x801173C4
void zPlayer::ShowPlayer() {
}
// signature: zPlayer::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801173D0 -> 0x801179EC
void zPlayer::HandleEvent(class zPlayer * this /* r29 */, class xBase * from /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x801174FC -> 0x801175E0
        // Local variables
        int gamestate; // r0
        bool disablePause; // r5
        class EventActionControlOff * params; // r0
    }
    {
        // Range: 0x801175E0 -> 0x80117604
        // Local variables
        class EntityHandleBase * lkHandle; // r0
    }
    {
        // Range: 0x8011762C -> 0x801176F0
        // Local variables
        class EventActionKill * params; // r0

        {
            // Range: 0x8011762C -> 0x801176F0
            // Local variables
            enum eHitSource source; // r28
        }
    }
    {
        // Range: 0x801176F4 -> 0x80117838
        // Local variables
        class xVec3 direction; // r1+0x28
        float damage; // f31
        class EventActionHit * params; // r0
    }
    {
        // Range: 0x8011783C -> 0x80117940
        // Local variables
        class xVec3 direction; // r1+0x1C
        bool spread; // r27
        enum eHitSource source; // r28
        float amount; // f31
        class EventActionDamagePlayer * params; // r0

        {
            // Range: 0x80117884 -> 0x801178F0
            // Local variables
            class EventActionDamagePlayer spreadParams; // r1+0x10

            {
                // Range: 0x8011789C -> 0x801178F0
                // Local variables
                int x; // r27
            }
        }
    }
    {
        // Range: 0x80117980 -> 0x801179A4
        // Local variables
        class EventActionSetTextureBlend * params; // r0
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_Null;
    // -> bool AllowHintspherePlay;
    // -> class zGlobals globals;
}
// Range: 0x801179F0 -> 0x80117A34
void zPlayer::Update_Control(class zPlayer * this /* r31 */) {
}
// signature: zPlayer::Update(float)
// Range: 0x80117A40 -> 0x80117A48
void zPlayer::Update() {
}
// Range: 0x80117A50 -> 0x80117B88
void zPlayer::DefaultUpdate(class zPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 dpos; // r1+0x8

    // References
    // -> static float reactiveAnimSpeed;
}
// Range: 0x80117B90 -> 0x80117C54
void zPlayer::InitHitSoundsMap(class zPlayer * this /* r29 */) {
    // Local variables
    unsigned long long assetID; // r31:r30
    unsigned short size; // r1+0x8
    class xModelAssetParam * param; // r30

    {
        // Range: 0x80117BCC -> 0x80117BE8
        // Local variables
        int i; // r5
    }
    {
        // Range: 0x80117C00 -> 0x80117C40
        // Local variables
        int idx; // r0
    }
}
// Range: 0x80117C60 -> 0x80117CD4
class xAnimTable * zPlayer::CreateAnimTable(class zPlayer * this /* r30 */) {
    // Local variables
    class xAnimTable * table; // r31
}
// Range: 0x80117CE0 -> 0x80117DA8
bool zPlayer::IsNearLedgeNow(class zPlayer * this /* r31 */) const {
    // Local variables
    class xVec3 pos; // r1+0x14
    class xVec3 dir; // r1+0x8
}
// signature: zPlayer::GetClosest(const xVec3 &, float)
// Range: 0x80117DB0 -> 0x80117E7C
class zPlayer * zPlayer::GetClosest(class xVec3 & pos /* r26 */) {
    // Local variables
    int psize; // r29
    float closestDist2; // f31
    class zPlayer * closest; // r28

    {
        // Range: 0x80117DD4 -> 0x80117E60
        // Local variables
        int i; // r27

        {
            // Range: 0x80117DE8 -> 0x80117E60
            // Local variables
            float distance2; // f1
            class xVec3 displacement; // r1+0x8
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlayer::EnemyKilled(zNPCBase *)
// Range: 0x80117E80 -> 0x80117EC8
void zPlayer::EnemyKilled() {
}
// signature: zPlayer::EnemyKilledComboUpdate(float)
// Range: 0x80117ED0 -> 0x80117F00
void zPlayer::EnemyKilledComboUpdate() {
}
// Range: 0x80117F00 -> 0x80117FEC
void zPlayer::KillAllPlayers(enum eHitSource source /* r25 */) {
    // Local variables
    int psize; // r27

    {
        // Range: 0x80117F18 -> 0x80117FD8
        // Local variables
        int i; // r26

        {
            // Range: 0x80117F20 -> 0x80117FD8
            // Local variables
            class zCombatDamageInfo damageInfo; // r1+0x10
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xGlobals * xglobals;
}
// Range: 0x80117FF0 -> 0x80118084
bool zPlayer::AllControlOff() {
    {
        // Range: 0x80118000 -> 0x8011806C
        // Local variables
        int i; // r28
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80118090 -> 0x801180F4
void zPlayer::TurnAllControlsOff(enum zControlOwner owner /* r28 */) {
    {
        // Range: 0x801180A4 -> 0x801180E0
        // Local variables
        int i; // r29
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80118100 -> 0x80118160
void zPlayer::TurnAllControlsOn(enum zControlOwner owner /* r28 */) {
    {
        // Range: 0x80118114 -> 0x8011814C
        // Local variables
        int i; // r29
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80118160 -> 0x80118180
int zPlayer::IsCameraFocus() {
}
// Range: 0x80118180 -> 0x801181A0
class xVec3 zPlayer::GetPositionToTarget() {
}
// Range: 0x801181A0 -> 0x801182E8
void zPlayer::UpdateCharacterProxyFloorCollision(class zPlayer * this /* r31 */) {
    // Local variables
    class xVec3 normal; // r1+0x1C
    class TriggerIdentifyingPointCollectorNoShrapnel startCollector; // r1+0x30
}
// Range: 0x801183D0 -> 0x801185D4
void zPlayer::UpdateCharacterProxy(class zPlayer * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class xVec3 & oldpos; // r0
    class xVec3 & pos; // r0
    class hkVector4 vel; // r1+0x40
    class hkVector4 hk_pos; // r1+0x30
    class hkpCharacterProxy * charProxy; // r30

    {
        // Range: 0x801184C4 -> 0x80118544
        // Local variables
        class hkVector4 playerVelocity; // r1+0x20
        class TriggerIdentifyingPointCollectorNoShrapnel startCollector; // r1+0x50
        class TriggerIdentifyingPointCollectorNoShrapnel castCollector; // r1+0x220
    }
}
// Range: 0x80118690 -> 0x80118698
bool zPlayer::SkipCharacterProxyHavokUpdate() {
}
// signature: zPlayer::SwitchedToHuman(bool)
// Range: 0x801186A0 -> 0x801186F0
void zPlayer::SwitchedToHuman(class zPlayer * this /* r31 */) {
}
// signature: zPlayer::SwitchedToAI(bool)
// Range: 0x801186F0 -> 0x80118740
void zPlayer::SwitchedToAI(class zPlayer * this /* r31 */) {
}
// signature: zPlayer::ImpartForce(const xVec3 &)
// Range: 0x80118740 -> 0x80118758
void zPlayer::ImpartForce() {
}
// signature: zPlayer::ImpartAcceleration(const xVec3 &)
// Range: 0x80118760 -> 0x80118768
void zPlayer::ImpartAcceleration() {
}
// signature: zPlayer::ImpartImpulse(const xVec3 &)
// Range: 0x80118770 -> 0x80118788
void zPlayer::ImpartImpulse() {
}
// Range: 0x80118790 -> 0x80118808
void zPlayer::GetCharacterProxyLinearVel(class zPlayer * this /* r29 */, class xVec3 & vel /* r30 */) {
    // Local variables
    class hkVector4 velocity; // r1+0x10
}
// Range: 0x80118810 -> 0x80118858
void zPlayer::ApplyAccumulatedExternalVelocity(class zPlayer * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zPlayer::ApplyAccumulatedExternalAcceleration(float)
// Range: 0x80118860 -> 0x801188C8
void zPlayer::ApplyAccumulatedExternalAcceleration(class zPlayer * this /* r31 */) {
    // Local variables
    class xVec3 diffVel; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801188D0 -> 0x801188E0
void zPlayer::ApplyAccumulatedExternalMomentumlessVelocity() {
}
// Range: 0x801188E0 -> 0x801188E8
class xVec3 * zPlayer::GetAttachDPos() {
}
// Range: 0x801188F0 -> 0x801188F8
class SurfaceGamePlay * zPlayer::GetSurface() const {
}
// Range: 0x80118900 -> 0x8011896C
bool zPlayer::CheckGroundSupport(class zPlayer * this /* r31 */) {
}
// signature: zPlayer::SetPlayerActivationState(ePlayerActivationState)
// Range: 0x801189B0 -> 0x801189B8
void zPlayer::SetPlayerActivationState() {
}
// Range: 0x801189C0 -> 0x80118A1C
void zPlayer::EnablePlayer(class zPlayer * this /* r31 */) {
}
// Range: 0x80118A20 -> 0x80118A70
void zPlayer::DisablePlayer(class zPlayer * this /* r31 */) {
}
// signature: zPlayer::AddPerceivedByNPC(const zNPCBase *)
// Range: 0x80118A70 -> 0x80118ADC
void zPlayer::AddPerceivedByNPC() {
    {
        // Range: 0x80118A74 -> 0x80118A9C
        // Local variables
        int i; // r0
    }
}
// signature: zPlayer::RemovePerceivedByNPC(const zNPCBase *)
// Range: 0x80118AE0 -> 0x80118B68
void zPlayer::RemovePerceivedByNPC() {
    {
        // Range: 0x80118AE4 -> 0x80118B64
        // Local variables
        int i; // r0
    }
}
// Range: 0x80118B70 -> 0x80118C50
void TriggerIdentifyingPointCollectorNoShrapnel::addCdPoint(class TriggerIdentifyingPointCollectorNoShrapnel * this /* r30 */, class hkpCdPoint & event /* r31 */) {
    // Local variables
    class hkpCollidable * rootCollidable; // r0
    class hkpRigidBody * body; // r0

    {
        // Range: 0x80118BA0 -> 0x80118C2C
        // Local variables
        class xBase * bodyOwner; // r4
    }
}
// Range: 0x80118C50 -> 0x80118C70
void TriggerIdentifyingPointCollectorNoShrapnel::reset() {
}
// Range: 0x80118C70 -> 0x80119194
void TriggerIdentifyingPointCollectorNoShrapnel::applyForces(class TriggerIdentifyingPointCollectorNoShrapnel * this /* r29 */, float dt /* f31 */, class hkVector4 & playerVelocity /* r30 */) {
    // Local variables
    class hkpCharacterObjectInteractionEvent input; // r1+0x170

    {
        // Range: 0x80118CD0 -> 0x80118F04
        // Local variables
        int c; // r31

        {
            // Range: 0x80118CD0 -> 0x80118F04
            // Local variables
            class hkpCharacterObjectInteractionResult output; // r1+0xF0
            float deltaVelocity; // f24

            {
                // Range: 0x80118CD0 -> 0x80118CD4
                // Local variables
                class hkVector4 pointVel; // r1+0xC0
            }
            {
                // Range: 0x80118CD4 -> 0x80118CE0
                // Local variables
                float maxPushImpulse; // f2

                {
                    // Range: 0x80118CD4 -> 0x80118CD4
                    // Local variables
                    class hkVector4 rc; // r1+0x90
                    class hkVector4 jacAng; // r1+0xA0
                    class hkVector4 r; // r1+0xB0
                    class hkMatrix3 inertiaInv; // r1+0x140
                }
            }
            {
                // Range: 0x80118CE0 -> 0x80118EC8
                // Local variables
                float relVel; // f1
                class hkVector4 charVelDown; // r1+0x80
            }
        }
    }
    {
        // Range: 0x80118F04 -> 0x80119130
        // Local variables
        int c; // r31

        {
            // Range: 0x80118F04 -> 0x80119130
            // Local variables
            class hkpCharacterObjectInteractionResult output; // r1+0xD0
            float deltaVelocity; // f24

            {
                // Range: 0x80118F04 -> 0x80118F08
                // Local variables
                class hkVector4 pointVel; // r1+0x70
            }
            {
                // Range: 0x80118F08 -> 0x80118F14
                // Local variables
                float maxPushImpulse; // f2

                {
                    // Range: 0x80118F08 -> 0x80118F08
                    // Local variables
                    class hkVector4 rc; // r1+0x40
                    class hkVector4 jacAng; // r1+0x50
                    class hkVector4 r; // r1+0x60
                    class hkMatrix3 inertiaInv; // r1+0x110
                }
            }
            {
                // Range: 0x80118F14 -> 0x801190F4
                // Local variables
                float relVel; // f1
                class hkVector4 charVelDown; // r1+0x30
            }
        }
    }
}
