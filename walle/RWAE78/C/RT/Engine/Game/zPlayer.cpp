/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPlayer.cpp
*/
float TERMINAL_VELOCITY_FACTOR; // size: 0x4, address: 0x80700060
static class xOGSchema PlayerSchema; // size: 0x18, address: 0x80798500
static class SchemaRegistrator PlayerSchemaReg; // size: 0x8, address: 0x80798518
static class ImmediatePrototypeEntity * sActiveEntity; // size: 0x4, address: 0x80798520
static float reactiveAnimSpeed; // size: 0x4, address: 0x80798524
static float tim_smoothDT; // size: 0x4, address: 0x80700070
// Range: 0x8016D0C0 -> 0x8016D7D0
void World::PlayerEntityOG::UpdateRender(class PlayerEntityOG * this /* r30 */) {
    {
        // Range: 0x8016D0D4 -> 0x8016D7B8
        // Local variables
        class xMat4x3 camMat; // r1+0x88
        class Matrix43 camNGMat; // r1+0xC8
    }

    // References
    // -> class Viewport * shadowMapViewPorts[1];
    // -> class Renderable3DTransform g_identity;
}
// signature: @unnamed@WAD03_cpp@::bound_update_wrapper(xEnt *, xVec3 *)
// Range: 0x8016D860 -> 0x8016D870
static void @unnamed@WAD03_cpp@::bound_update_wrapper() {
}
// signature: @unnamed@WAD03_cpp@::ScaleHeadAnimMatrices(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x8016D870 -> 0x8016D88C
static void @unnamed@WAD03_cpp@::ScaleHeadAnimMatrices() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8016D890 -> 0x8016DD40
void zPlayer::Init(class zPlayer * this /* r29 */, class xEntAsset * asset /* r30 */) {
    // Local variables
    class xEntPlayerAsset * playerAsset; // r0
    class xOGEntityModelContext context; // r1+0xC
    unsigned long long lightkitUID; // r3:r4

    {
        // Range: 0x8016D990 -> 0x8016DA54
        // Local variables
        class LightKitAsset * lightkitAsset; // r4

        {
            // Range: 0x8016D9AC -> 0x8016DA4C
            // Local variables
            void * lightkitMem; // r0
        }
    }

    // References
    // -> float SECS_PER_VBLANK;
    // -> struct {} __vt__Q28Graphics8LightKit;
    // -> class zGlobals globals;
}
// Range: 0x8016DD40 -> 0x8016DD7C
void zPlayer::GetPadConnected(class zPlayer * this /* r31 */) {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x8016DD80 -> 0x8016DDE4
void zPlayer::DisConnectPad() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x8016DDF0 -> 0x8016DE74
void zPlayer::SceneSetup() {
    {
        // Range: 0x8016DE08 -> 0x8016DE58
        // Local variables
        class Goodie * goodie; // r0
    }

    // References
    // -> static class ImmediatePrototypeEntity * sActiveEntity;
}
// signature: zPlayer::SceneEnter(zScene *)
// Range: 0x8016DE80 -> 0x8016DE84
void zPlayer::SceneEnter() {
}
// signature: zPlayer::SceneExit(zScene *)
// Range: 0x8016DE90 -> 0x8016DEE8
void zPlayer::SceneExit(class zPlayer * this /* r31 */) {
}
// Range: 0x8016DEF0 -> 0x8016DF70
void zPlayer::ShowInAllViewports(class zPlayer * this /* r31 */) {
}
// signature: zPlayer::HideInViewport(int)
// Range: 0x8016DF70 -> 0x8016E00C
void zPlayer::HideInViewport(class zPlayer * this /* r31 */) {
}
// signature: zPlayer::SetEnemyIsNear(bool)
// Range: 0x8016E010 -> 0x8016E038
void zPlayer::SetEnemyIsNear() {
}
// signature: zPlayer::zPlayerEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8016E040 -> 0x8016E05C
void zPlayer::zPlayerEventCB(class xBase * from /* r0 */) {
}
// signature: zPlayer::Damage(const zCombatDamageInfo &)
// Range: 0x8016E060 -> 0x8016E11C
bool zPlayer::Damage(class zPlayer * this /* r31 */) {
    // References
    // -> class xVec3 g_O3;
}
// Range: 0x8016E140 -> 0x8016E164
class zCombat * zPlayer::GetCombat() const {
}
// Range: 0x8016E170 -> 0x8016E194
class zCombat * zPlayer::GetCombat() {
}
// Range: 0x8016E1A0 -> 0x8016E1DC
float zPlayer::GetCurrentHitPoints() const {
}
// Range: 0x8016E1E0 -> 0x8016EB14
void zPlayer::CollideTrigger(class zPlayer * this /* r15 */, class xScene * sc /* r14 */) {
    // Local variables
    class xVec3 end_pos; // r1+0x6C
    class xVec3 start_pos; // r1+0x60
    class xVec3 frame_disp; // r1+0x54
    class xVec3 frame_dir; // r1+0x48
    float frame_dist; // f0
    class xEnt * * triggers[1]; // r1+0xC
    int triggerTypes; // r0
    unsigned int playerMask; // r19

    {
        // Range: 0x8016E48C -> 0x8016E4A8
        // Local variables
        int i; // r18

        {
            // Range: 0x8016E48C -> 0x8016E4A8
            // Local variables
            bool collide; // r16
            bool end_inside; // r1+0x8
            class xRay3 ray; // r1+0x78
            class zTrigger * trig; // r17

            {
                // Range: 0x8016E4A8 -> 0x8016E4A8
                // Local variables
                class xSphere sphere; // r1+0x38
            }
            {
                // Range: 0x8016E4A8 -> 0x8016E4A8
                // Local variables
                unsigned int testMask; // r0

                {
                    // Range: 0x8016E4A8 -> 0x8016E4A8
                    // Local variables
                    int i; // r4
                }
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> unsigned long long gThisPlayer;
}
// Range: 0x8016EB20 -> 0x8016ED64
void zPlayer::LoadCheckPoint(class zPlayer * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisY;
}
// signature: zPlayer::LoadCheckPointB(xVec3, float)
// Range: 0x8016ED80 -> 0x8016F004
void zPlayer::LoadCheckPointB(class zPlayer * this /* r30 */) {
    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisY;
}
// signature: zPlayer::StoreCheckPoint(const zPlayerCheckPoint &)
// Range: 0x8016F010 -> 0x8016F034
void zPlayer::StoreCheckPoint() {
}
// Range: 0x8016F040 -> 0x8016F0C8
void * zPlayer::zPlayer(class zPlayer * this /* r30 */) {
    // References
    // -> struct {} __vt__15zCamFirstPerson;
    // -> struct {} __vt__7zPlayer;
}
// Range: 0x8016F0D0 -> 0x8016F150
void zPlayer::Render(class zPlayer * this /* r31 */) {
}
// Range: 0x8016F150 -> 0x8016F590
void zPlayer::Reset(class zPlayer * this /* r31 */) {
    {
        // Range: 0x8016F454 -> 0x8016F498
        // Local variables
        class xAnimSingle * single; // r28
        class xAnimState * firstState; // r29
    }

    // References
    // -> class zGlobals globals;
    // -> class xVec3 g_Y3;
    // -> static class xSurface * pDefaultSurface;
}
// Range: 0x8016F5B0 -> 0x8016F658
bool zPlayer::IsLaunchFlying(class zPlayer * this /* r30 */) {
    // Local variables
    bool result; // r31
}
// Range: 0x8016F660 -> 0x8016F6E8
bool zPlayer::IsDead() const {
}
// Range: 0x8016F6F0 -> 0x8016F6F4
void zPlayer::ParseIni() {
}
// Range: 0x8016F700 -> 0x8016F798
void zPlayer::BeginUpdate(class zPlayer * this /* r29 */, float dt /* f31 */) {
}
// Range: 0x8016F7A0 -> 0x8016F9DC
void zPlayer::DefaultBeginUpdate(class zPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class zEnt * ent; // reg65535

    // References
    // -> class zGlobals globals;
}
// Range: 0x8016F9E0 -> 0x8016FE58
void zPlayer::UpdatePlayerDrive(class zPlayer * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class zPlatform * oplat; // r0
    class zPlatform * platform; // r0

    {
        // Range: 0x8016FC5C -> 0x8016FC9C
        // Local variables
        class zSpringboard * springboard; // r0
    }
}
// signature: zPlayer::EndUpdate(float)
// Range: 0x8016FE60 -> 0x8016FE74
void zPlayer::EndUpdate() {
}
// signature: zPlayer::DefaultEndUpdate(float)
// Range: 0x8016FE80 -> 0x8016FF88
void zPlayer::DefaultEndUpdate(class zPlayer * this /* r31 */) {
    // Local variables
    class zEnt * ent; // r0
}
// signature: zPlayer::Move(xScene *, float, xEntFrame *)
// Range: 0x8016FF90 -> 0x8016FFA4
void zPlayer::Move() {
}
// Range: 0x8016FFB0 -> 0x80170074
class xVec3 zPlayer::GetEffectiveVelocityForAI() {
    // References
    // -> unsigned int gFrameCount;
}
// Range: 0x80170080 -> 0x80170434
void zPlayer::Update_Prediction(class zPlayer * this /* r31 */, float dt /* f30 */) {
    // Local variables
    class zEnt * ent; // r0
    class xVec3 lastDir; // r1+0x14
    float newVel; // f0
    float newAngV; // f5
    float pow; // f31
    float velDiff; // f1

    {
        // Range: 0x80170248 -> 0x80170344
        // Local variables
        float angDiff; // f0
        float velDot; // f0
        class xVec3 cross; // r1+0x8
    }
    {
        // Range: 0x80170370 -> 0x801703F8
        // Local variables
        float r; // f5
    }

    // References
    // -> unsigned int gFrameCount;
}
// signature: zPlayer::Predict(xVec3 *, float, float, bool, bool)
// Range: 0x80170440 -> 0x801705D4
void zPlayer::Predict(class zPlayer * this /* r29 */, class xVec3 * pos /* r30 */, bool useY /* r31 */) {
    // Local variables
    float useVel; // f5
    float useAngV; // f3
    float checkTime; // f31

    {
        // Range: 0x80170454 -> 0x80170534
        // Local variables
        class xMat3x3 rotMat; // r1+0x8
    }
}
// signature: zPlayer::PredictY(float) const
// Range: 0x801705E0 -> 0x8017062C
float zPlayer::PredictY() const {
    // Local variables
    float y; // f3

    // References
    // -> class zGlobals globals;
}
// signature: zPlayer::Update_Fall(float)
// Range: 0x80170630 -> 0x80170644
void zPlayer::Update_Fall() {
}
// signature: zPlayer::DefaultUpdateFall(float)
// Range: 0x80170650 -> 0x8017067C
void zPlayer::DefaultUpdateFall() {
}
// Range: 0x80170690 -> 0x8017069C
void zPlayer::Exit() {
}
// Range: 0x801706A0 -> 0x801706BC
class xVec3 zPlayer::get_target() {
}
// signature: zPlayer::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801706C0 -> 0x8017102C
void zPlayer::HandleEvent(class zPlayer * this /* r26 */, class xBase * from /* r28 */, class EventAny * genericParams /* r27 */) {
    {
        // Range: 0x801707E8 -> 0x80170880
        // Local variables
        int gamestate; // r0
    }
    {
        // Range: 0x80170880 -> 0x80170924
        {
            // Range: 0x80170880 -> 0x80170920
            // Local variables
            class LightKitAsset * lightkitAsset; // r27

            {
                // Range: 0x80170890 -> 0x801708FC
                // Local variables
                void * lightkitMem; // r0
            }
        }
    }
    {
        // Range: 0x80170930 -> 0x80170A48
        // Local variables
        class EventActionKill * params; // r0

        {
            // Range: 0x80170930 -> 0x80170A48
            // Local variables
            enum zHitSource source; // r10
        }
    }
    {
        // Range: 0x80170A4C -> 0x80170B88
        // Local variables
        class xVec3 direction; // r1+0x38
        float damage; // f0
        class EventActionHit * params; // r0
    }
    {
        // Range: 0x80170B8C -> 0x80170C80
        // Local variables
        class xVec3 direction; // r1+0x2C
        enum zHitSource source; // r11
        float amount; // f3
        class EventActionDamagePlayer * params; // r0
    }
    {
        // Range: 0x80170D28 -> 0x80171000
        // Local variables
        class EventActionLegacy * params; // r0

        {
            // Range: 0x80170D4C -> 0x80170D4C
            // Local variables
            int i; // r28
        }
    }

    // References
    // -> static unsigned int gWorldTags[6];
    // -> class ColonyItemRecord colonyRecords[6];
    // -> class zGlobals globals;
    // -> class xVec3 m_Null;
    // -> struct {} __vt__Q28Graphics8LightKit;
}
// Range: 0x80171030 -> 0x80171078
void zPlayer::Update_Control() {
}
// signature: zPlayer::Update(float)
// Range: 0x80171080 -> 0x80171094
void zPlayer::Update() {
}
// Range: 0x801710A0 -> 0x801714E4
void zPlayer::DefaultUpdate(class zPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 dpos; // r1+0x44
    class xVec3 * cameraPos; // r8
    class xVec3 * playerPos; // r0
    class xVec3 * playerPosOld; // r0
    class xVec3 * at; // r6
    class xVec3 up; // r1+0x38
    int listenerIndex; // r3
    class xVec3 pos; // r1+0x2C
    class xVec3 vel; // r1+0x20

    {
        // Range: 0x801713C4 -> 0x80171458
        // Local variables
        class xVec3 dir; // r1+0x14
    }

    // References
    // -> class zGlobals globals;
    // -> class xVec3 m_Null;
    // -> class xGlobals * xglobals;
    // -> static float reactiveAnimSpeed;
}
// signature: zPlayer::AnimationSoundCB(void *)
// Range: 0x801714F0 -> 0x801714F8
void zPlayer::AnimationSoundCB() {
}
// signature: zPlayer::AnimationVFXCB(void *)
// Range: 0x80171500 -> 0x80171508
void zPlayer::AnimationVFXCB() {
}
// Range: 0x80171510 -> 0x80171584
bool zPlayer::StayOnGround(class zPlayer * this /* r30 */) {
}
// Range: 0x80171590 -> 0x80171688
bool zPlayer::IsNearLedgeNow(class zPlayer * this /* r31 */) const {
    // Local variables
    class xVec3 pos; // r1+0x14
    class xVec3 dir; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// Range: 0x80171690 -> 0x801716A8
bool zPlayer::mblur_active() const {
}
// signature: zPlayer::mblur_activate(float, float)
// Range: 0x801716B0 -> 0x801716CC
bool zPlayer::mblur_activate() {
    // Local variables
    class xModelInstance * blur_model; // r5
}
// signature: zPlayer::mblur_set_lifetime(float, float)
// Range: 0x801716D0 -> 0x801716DC
void zPlayer::mblur_set_lifetime() {
}
// signature: zPlayer::mblur_set_alpha(float, float)
// Range: 0x801716E0 -> 0x801716EC
void zPlayer::mblur_set_alpha() {
}
// signature: zPlayer::GetClosest(const xVec3 &, float)
// Range: 0x801716F0 -> 0x801717E8
class zPlayer * zPlayer::GetClosest(class xVec3 * pos /* r26 */) {
    // Local variables
    int psize; // r29
    float closestDist2; // f31
    class zPlayer * closest; // r28

    {
        // Range: 0x80171720 -> 0x801717B8
        // Local variables
        int i; // r27

        {
            // Range: 0x80171730 -> 0x801717B8
            // Local variables
            float distance2; // f0
            class xVec3 displacement; // r1+0x8
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlayer::EnemyKilled(zNPCBase *)
// Range: 0x801717F0 -> 0x80171838
void zPlayer::EnemyKilled() {
}
// Range: 0x80171840 -> 0x801718B4
void zPlayer::RoundRobinAttacking() {
    // Local variables
    int foundIdx; // r7

    {
        // Range: 0x80171860 -> 0x80171888
        // Local variables
        int i; // r8
    }
}
// Range: 0x801718C0 -> 0x80171A00
void zPlayer::KillAllPlayers(enum zHitSource source /* r27 */) {
    // Local variables
    int psize; // r29

    {
        // Range: 0x801718E0 -> 0x801719DC
        // Local variables
        int i; // r28

        {
            // Range: 0x801718E0 -> 0x801719DC
            // Local variables
            class zCombatDamageInfo damageInfo; // r1+0x18
        }
    }

    // References
    // -> class xVec3 m_Null;
    // -> class xGlobals * xglobals;
}
// Range: 0x80171A00 -> 0x80171A40
bool zPlayer::AllControlOff() {
    {
        // Range: 0x80171A08 -> 0x80171A08
        // Local variables
        int i; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlayer::TurnAllControlsOff(zControlOwner)
// Range: 0x80171A40 -> 0x80171A94
void zPlayer::TurnAllControlsOff() {
    {
        // Range: 0x80171A40 -> 0x80171A7C
        // Local variables
        int i; // r8
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlayer::TurnAllControlsOn(zControlOwner)
// Range: 0x80171AA0 -> 0x80171B08
void zPlayer::TurnAllControlsOn() {
    {
        // Range: 0x80171AA4 -> 0x80171AF0
        // Local variables
        int i; // r8
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80171B10 -> 0x80171B30
int zPlayer::GetCameraFocus() {
}
// Range: 0x80171B30 -> 0x80171BC0
void zPlayer::AddStates(class zPlayer * this /* r28 */, class xAnimTable * table /* r29 */) {
}
// signature: zPlayer::CalculateBasicPhysicsDPOS(float)
// Range: 0x80171BC0 -> 0x80172260
class xVec3 zPlayer::CalculateBasicPhysicsDPOS(class zPlayer * this /* r31 */) {
    // Local variables
    float mass; // f2
    float invertedMass; // f8
    class xVec3 velocity; // r1+0x104
    float speed; // f0
    class xVec3 result; // r1+0xF8
    float dragRate; // f4
    float minDrag; // f5
    float targetSurfaceSpeed; // f0

    {
        // Range: 0x80172024 -> 0x80172154
        // Local variables
        float newTangentSpeed; // f0
        float friction; // f0
        float currentTangentSpeed; // f0
        class xVec3 targetSurfaceVelocityDirection; // r1+0xEC
    }

    // References
    // -> class xVec3 m_Null;
    // -> static float tim_smoothDT;
}
// signature: zPlayer::FeedbackMotion(xVec3, float)
// Range: 0x80172260 -> 0x80172480
void zPlayer::FeedbackMotion(class zPlayer * this /* r31 */) {
    // Local variables
    class xVec3 motionResisted; // r1+0x38
    float motionResistMag; // f0

    {
        // Range: 0x80172398 -> 0x80172454
        // Local variables
        float resistedDot; // f0
    }
}
// Range: 0x80172480 -> 0x801726EC
void zPlayer::ApplyCharacterGenVelocity(class zPlayer * this /* r31 */, class xVec3 * _vel /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x801724C4 -> 0x80172650
        // Local variables
        class xVec3 gravSurface; // r1+0x5C
        float frictionNormal; // f3
    }

    // References
    // -> class zGlobals globals;
}
// signature: zPlayer::UpdateMomentum(float)
// Range: 0x801726F0 -> 0x80172728
void zPlayer::UpdateMomentum() {
}
// signature: zPlayer::SetMomentum(float)
// Range: 0x80172730 -> 0x80172738
void zPlayer::SetMomentum() {
}
// Range: 0x80172740 -> 0x801727C8
void zPlayer::ClearAllBasicPhysics() {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x801727D0 -> 0x801727F0
class xVec3 zPlayer::GetPositionToTarget() {
}
