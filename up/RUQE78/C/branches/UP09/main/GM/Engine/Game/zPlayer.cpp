/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPlayer.cpp
*/
float TERMINAL_VELOCITY_FACTOR; // size: 0x4, address: 0x807B4D94
class zPlayerInventory inventory; // size: 0x10B8, address: 0x80823AE8
static class ImmediatePrototypeEntity * sActiveEntity; // size: 0x4, address: 0x80824BA0
static int delays; // size: 0x4, address: 0x80824BA4
static int oldNumHumans; // size: 0x4, address: 0x80824BA8
static float reactiveAnimSpeed; // size: 0x4, address: 0x80824BAC
unsigned int comboExperiencePoints[9]; // size: 0x24, address: 0x807B4DA4
// signature: Sext::xEntPlayerAsset::Create(World::EntityHandleBase *, Sext::xEntPlayerAsset *)
// Range: 0x801FDF30 -> 0x801FE514
class Entity * Sext::xEntPlayerAsset::Create(class xEntPlayerAsset * asset /* r26 */) {
    // Local variables
    int index; // r0
    class zPlayer * player; // r28
    unsigned long long assetID; // r0:r0
    class zCharacterAsset * characterAsset; // r27

    // References
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
    // -> static unsigned int ePLYMPlayerTypeHashes[17];
    // -> static int gPlayerCharacterAssetMap[6][4];
    // -> static unsigned int gPlayerTags[6];
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
    // -> class zGlobals globals;
    // -> static unsigned int gNextSceneID;
    // -> class xGlobals * xglobals;
}
// Range: 0x801FE520 -> 0x801FE564
void zPlayer::Deactivate(class zPlayer * this /* r31 */) {
}
// signature: @unnamed@WAD03_cpp@::ScaleHeadAnimMatrices(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x801FE570 -> 0x801FE58C
static void @unnamed@WAD03_cpp@::ScaleHeadAnimMatrices() {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801FE590 -> 0x801FE93C
void zPlayer::Init(class zPlayer * this /* r30 */, class xEntAsset * asset /* r31 */) {
    // Local variables
    class xEntPlayerAsset * playerAsset; // r0
    unsigned long long lightkitUID; // r3:r4

    {
        // Range: 0x801FE6D0 -> 0x801FE6F4
        // Local variables
        class EntityHandleBase * lkHandle; // r0

        {
            // Range: 0x801FE6DC -> 0x801FE6F4
            // Local variables
            class LightKitEntity * lkEnt; // r0
        }
    }

    // References
    // -> float SECS_PER_VBLANK;
    // -> class zGlobals globals;
}
// Range: 0x801FE940 -> 0x801FEB24
void zPlayer::GetPadConnected(class zPlayer * this /* r31 */) {
    {
        // Range: 0x801FE958 -> 0x801FE9A8
        // Local variables
        class EventActionHudSetPlayer params; // r1+0x28
    }
    {
        // Range: 0x801FE9B4 -> 0x801FEA50
        // Local variables
        class EventActionOneInt params2; // r1+0xC
        class EventActionHudSetPlayer params; // r1+0x20
    }
    {
        // Range: 0x801FEA50 -> 0x801FEAC4
        // Local variables
        class EventActionOneInt params2; // r1+0x8
        class EventActionHudSetPlayer params; // r1+0x18
    }
    {
        // Range: 0x801FEAC4 -> 0x801FEB10
        // Local variables
        class EventActionHudSetPlayer params; // r1+0x10
    }

    // References
    // -> class zGlobals globals;
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x801FEB30 -> 0x801FEBCC
void zPlayer::DisConnectPad() {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x801FEBD0 -> 0x801FEC2C
void zPlayer::SceneSetup() {
    {
        // Range: 0x801FEBE0 -> 0x801FEC18
        // Local variables
        class EntityHandleBase * goodie; // r0
    }

    // References
    // -> static class ImmediatePrototypeEntity * sActiveEntity;
}
// signature: zPlayer::SceneEnter(zScene *)
// Range: 0x801FEC30 -> 0x801FEC34
void zPlayer::SceneEnter() {
}
// signature: zPlayer::SceneExit(zScene *)
// Range: 0x801FEC40 -> 0x801FEC5C
void zPlayer::SceneExit() {
}
// Range: 0x801FEC60 -> 0x801FECBC
void zPlayer::ShowInAllViewports(class zPlayer * this /* r30 */) {
}
// signature: zPlayer::HideInViewport(int)
// Range: 0x801FECC0 -> 0x801FED38
void zPlayer::HideInViewport(class zPlayer * this /* r29 */) {
}
// signature: zPlayer::zPlayerEventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801FED40 -> 0x801FED5C
void zPlayer::zPlayerEventCB(class xBase * from /* r0 */) {
}
// signature: zPlayer::Damage(const zCombatDamageInfo &)
// Range: 0x801FED60 -> 0x801FEDD4
bool zPlayer::Damage(class zPlayer * this /* r31 */) {
}
// Range: 0x801FEDE0 -> 0x801FEDE8
class zCombat * zPlayer::GetCombat() {
}
// Range: 0x801FEDF0 -> 0x801FEE10
float zPlayer::GetCurrentHitPoints() const {
}
// Range: 0x801FEE10 -> 0x801FEE2C
float * zPlayer::GetCurrentHitPointsPointer() {
}
// signature: zPlayer::SetCurrentHitPoints(float)
// Range: 0x801FEE30 -> 0x801FEE44
void zPlayer::SetCurrentHitPoints() {
}
// signature: zPlayer::SetMaximumHitPoints(float)
// Range: 0x801FEE50 -> 0x801FEE64
void zPlayer::SetMaximumHitPoints() {
}
// Range: 0x801FEE70 -> 0x801FEED4
bool zPlayer::CanTakeHit(float damage /* f30 */, float minimum /* f31 */) {
}
// Range: 0x801FEEE0 -> 0x801FEF00
float zPlayer::GetMaximumHitPoints() const {
}
// signature: zPlayer::CollideTrigger(xScene *)
// Range: 0x801FEF00 -> 0x801FFE24
void zPlayer::CollideTrigger(class zPlayer * this /* r14 */) {
    {
        // Range: 0x801FEF54 -> 0x801FEF54
        // Local variables
        class zPlayer_CollideTrigger_CB _tempCB; // r1+0x70
    }

    // References
    // -> unsigned long long gThisPlayer;
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x801FFE30 -> 0x801FFFF0
void zPlayer::LoadCheckPoint(class zPlayer * this /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zPlayer::SetFloorPosition(xVec3 *)
// Range: 0x801FFFF0 -> 0x8020000C
void zPlayer::SetFloorPosition() {
}
// signature: zPlayer::LoadCheckPointB(xVec3, float)
// Range: 0x80200010 -> 0x80200210
void zPlayer::LoadCheckPointB(class zPlayer * this /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zPlayer::StoreCheckPoint(const zPlayerCheckPoint &)
// Range: 0x80200210 -> 0x80200234
void zPlayer::StoreCheckPoint() {
}
// signature: zPlayer::zPlayer(World::EntityHandleBase *)
// Range: 0x80200240 -> 0x802002D4
void * zPlayer::zPlayer() {
    // References
    // -> struct {} __vt__15zCamFirstPerson;
    // -> struct {} __vt__7zPlayer;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zPlayer::GetParameter(const char *, bool *, bool)
// Range: 0x802002E0 -> 0x80200334
void zPlayer::GetParameter(class zPlayer * this /* r7 */, bool * value /* r31 */) {
}
// signature: zPlayer::GetParameter(const char *, float *, float)
// Range: 0x80200340 -> 0x8020038C
void zPlayer::GetParameter(class zPlayer * this /* r6 */, char * name /* r0 */, float * value /* r31 */) {
}
// signature: zPlayer::GetParameterList(const char *, float *, int, const float *)
// Range: 0x80200390 -> 0x802004CC
void zPlayer::GetParameterList(class zPlayer * this /* r12 */, float * value /* r30 */, int count /* r31 */) {
    // Local variables
    char * strValue; // r4

    {
        // Range: 0x80200398 -> 0x80200398
        // Local variables
        int i; // r11
    }
}
// Range: 0x802004D0 -> 0x802004F4
void zPlayer::Render() {
}
// Range: 0x80200500 -> 0x8020082C
void zPlayer::Reset(class zPlayer * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
    // -> class zGlobals globals;
    // -> class xVec3 g_Y3;
}
// Range: 0x80200840 -> 0x80200898
bool zPlayer::IsDead() const {
}
// Range: 0x802008A0 -> 0x802008A4
void zPlayer::ParseIni() {
}
// signature: zPlayer::BeginUpdate(float)
// Range: 0x802008B0 -> 0x802008B8
void zPlayer::BeginUpdate() {
}
// Range: 0x802008C0 -> 0x80200BC8
void zPlayer::DefaultBeginUpdate(class zPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class zEnt * ent; // reg65535

    // References
    // -> class zGlobals globals;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80200BD0 -> 0x802010A0
void zPlayer::UpdatePlayerDrive(class zPlayer * this /* r29 */, float dt /* f31 */) {
    // Local variables
    class zPlatform * oplat; // r0
    class xOGEntity * floor_entity; // reg65535
    class zPlatform * platform; // r30
}
// signature: zPlayer::EndUpdate(float)
// Range: 0x802010A0 -> 0x802010B4
void zPlayer::EndUpdate() {
}
// Range: 0x802010C0 -> 0x80201414
void zPlayer::DefaultEndUpdate(class zPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class zEnt * ent; // r0

    {
        // Range: 0x80201254 -> 0x80201254
        // Local variables
        int y; // r0

        {
            // Range: 0x80201254 -> 0x80201254
            // Local variables
            int numHumans; // r29

            {
                // Range: 0x80201254 -> 0x80201254
                // Local variables
                int z; // r28
            }
        }
    }

    // References
    // -> static int oldNumHumans;
    // -> class xGlobals * xglobals;
    // -> class zPlayerInputPadMgr padManager;
    // -> class zGlobals globals;
    // -> static int delays;
}
// signature: zPlayer::MountCheck(World::xOGEntity *)
// Range: 0x80201420 -> 0x80201448
bool zPlayer::MountCheck() {
}
// Range: 0x80201450 -> 0x802014B8
void zPlayer::MountPlayer(class zPlayer * this /* r30 */, class xOGEntity * object /* r31 */) {
}
// signature: zPlayer::Move(xScene *, float, xEntFrame *)
// Range: 0x802014C0 -> 0x802014D4
void zPlayer::Move() {
}
// Range: 0x802014E0 -> 0x802015A4
class xVec3 zPlayer::GetEffectiveVelocityForAI() {
    // References
    // -> unsigned int gFrameCount;
}
// Range: 0x802015B0 -> 0x8020192C
void zPlayer::Update_Prediction(class zPlayer * this /* r31 */, float dt /* f30 */) {
    // Local variables
    class zEnt * ent; // r0
    class xVec3 lastDir; // r1+0x14
    float newVel; // f0
    float newAngV; // f5
    float pow; // f31
    float velDiff; // f1

    {
        // Range: 0x80201758 -> 0x80201854
        // Local variables
        float angDiff; // f0
        float velDot; // f0
        class xVec3 cross; // r1+0x8
    }
    {
        // Range: 0x80201880 -> 0x80201908
        // Local variables
        float r; // f5
    }

    // References
    // -> unsigned int gFrameCount;
}
// signature: zPlayer::PredictY(float) const
// Range: 0x802019A0 -> 0x802019EC
float zPlayer::PredictY() const {
    // Local variables
    float y; // f3

    // References
    // -> class zGlobals globals;
}
// signature: zPlayer::Update_Fall(float)
// Range: 0x802019F0 -> 0x80201A04
void zPlayer::Update_Fall() {
}
// signature: zPlayer::DefaultUpdateFall(float)
// Range: 0x80201A10 -> 0x80201A3C
void zPlayer::DefaultUpdateFall() {
}
// Range: 0x80201A40 -> 0x80201AA4
void zPlayer::Exit(class zPlayer * this /* r31 */) {
}
// signature: zPlayer::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80201AC0 -> 0x80202498
void zPlayer::HandleEvent(class zPlayer * this /* r29 */, class xBase * from /* r28 */, class EventAny * genericParams /* r22 */) {
    {
        // Range: 0x80201BE8 -> 0x80201C84
        // Local variables
        int gamestate; // r0
    }
    {
        // Range: 0x80201C84 -> 0x80201CA8
        // Local variables
        class EntityHandleBase * lkHandle; // r0
    }
    {
        // Range: 0x80201CBC -> 0x80201E34
        // Local variables
        class EventActionKill * params; // r0

        {
            // Range: 0x80201CBC -> 0x80201E34
            // Local variables
            enum eHitSource source; // r27
        }
    }
    {
        // Range: 0x80201E38 -> 0x80201FB0
        // Local variables
        class xVec3 direction; // r1+0x74
        float damage; // f0
        class EventActionHit * params; // r0
    }
    {
        // Range: 0x80201FB4 -> 0x80202108
        // Local variables
        class xVec3 direction; // r1+0x68
        bool spread; // r0
        enum eHitSource source; // r11
        float amount; // f3
        class EventActionDamagePlayer * params; // r0

        {
            // Range: 0x80201FDC -> 0x80202088
            // Local variables
            class EventActionDamagePlayer spreadParams; // r1+0x5C

            {
                // Range: 0x80202030 -> 0x8020203C
                // Local variables
                int x; // r23
            }
        }
    }
    {
        // Range: 0x80202248 -> 0x80202480
        // Local variables
        class EventActionSetTextureBlend * params; // r0
    }

    // References
    // -> class Scene * primaryScene;
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_Null;
}
// Range: 0x802024A0 -> 0x8020250C
void zPlayer::Update_Control(class zPlayer * this /* r31 */) {
}
// signature: zPlayer::Update(float)
// Range: 0x80202510 -> 0x80202564
void zPlayer::Update(class zPlayer * this /* r31 */) {
}
// Range: 0x80202570 -> 0x8020276C
void zPlayer::DefaultUpdate(class zPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 dpos; // r1+0x8

    // References
    // -> static float reactiveAnimSpeed;
}
// signature: zPlayer::CalcAnimSpeed(float, float *)
// Range: 0x80202770 -> 0x802027CC
void zPlayer::CalcAnimSpeed(float mag /* f1 */) {
}
// signature: zPlayer::AnimationSoundCB(void *)
// Range: 0x802027D0 -> 0x802027D8
void zPlayer::AnimationSoundCB() {
}
// Range: 0x802027E0 -> 0x80202854
bool zPlayer::StayOnGround(class zPlayer * this /* r30 */) {
}
// Range: 0x80202860 -> 0x80202958
bool zPlayer::IsNearLedgeNow(class zPlayer * this /* r31 */) const {
    // Local variables
    class xVec3 pos; // r1+0x14
    class xVec3 dir; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// signature: zPlayer::GetClosest(const xVec3 &, float)
// Range: 0x80202960 -> 0x80202A58
class zPlayer * zPlayer::GetClosest(class xVec3 & pos /* r26 */) {
    // Local variables
    int psize; // r29
    float closestDist2; // f31
    class zPlayer * closest; // r28

    {
        // Range: 0x80202990 -> 0x80202A28
        // Local variables
        int i; // r27

        {
            // Range: 0x802029A0 -> 0x80202A28
            // Local variables
            float distance2; // f0
            class xVec3 displacement; // r1+0x8
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlayer::EnemyKilled(zNPCBase *)
// Range: 0x80202A60 -> 0x80202AA8
void zPlayer::EnemyKilled() {
}
// Range: 0x80202AB0 -> 0x80202BC8
void zPlayer::KillAllPlayers(enum eHitSource source /* r27 */) {
    // Local variables
    int psize; // r29

    {
        // Range: 0x80202ADC -> 0x80202BA8
        // Local variables
        int i; // r28

        {
            // Range: 0x80202AE4 -> 0x80202BA8
            // Local variables
            class zCombatDamageInfo damageInfo; // r1+0x18
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class xVec3 m_Null;
}
// Range: 0x80202BD0 -> 0x80202C7C
bool zPlayer::AllControlOff() {
    {
        // Range: 0x80202BF4 -> 0x80202C44
        // Local variables
        int i; // r28
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80202C80 -> 0x80202D1C
void zPlayer::TurnAllControlsOff(enum zControlOwner owner /* r28 */) {
    {
        // Range: 0x80202CA0 -> 0x80202CE8
        // Local variables
        int i; // r29
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zPlayer::TurnAllControlsOn(zControlOwner)
// Range: 0x80202D20 -> 0x80202DC0
void zPlayer::TurnAllControlsOn() {
    {
        // Range: 0x80202D48 -> 0x80202D8C
        // Local variables
        int i; // r28
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80202DC0 -> 0x80202DE0
int zPlayer::IsCameraFocus() {
}
// Range: 0x80202DE0 -> 0x80202E70
void zPlayer::AddStates(class zPlayer * this /* r28 */, class xAnimTable * table /* r29 */) {
}
// Range: 0x80202E70 -> 0x80202E90
class xVec3 zPlayer::GetPositionToTarget() {
}
// Range: 0x80202E90 -> 0x8020301C
void zPlayer::UpdateCharacterProxy(class zPlayer * this /* r27 */, float dt /* f31 */) {
    // Local variables
    class xVec3 & oldpos; // r0
    class xVec3 & pos; // r0
    class hkVector4 vel; // r1+0x20
    class hkVector4 hk_pos; // r1+0x10
}
// Range: 0x80203020 -> 0x80203028
bool zPlayer::SkipCharacterProxyHavokUpdate() {
}
// Range: 0x80203030 -> 0x80203034
void zPlayer::DrawActive() {
}
// signature: zPlayer::SwitchedToHuman(bool)
// Range: 0x80203040 -> 0x802032C4
void zPlayer::SwitchedToHuman(class zPlayer * this /* r26 */) {
    {
        // Range: 0x8020306C -> 0x80203288
        // Local variables
        int numHumans; // r29

        {
            // Range: 0x802030AC -> 0x802030E4
            // Local variables
            int z; // r27
        }
        {
            // Range: 0x80203100 -> 0x80203190
            // Local variables
            int i; // r29

            {
                // Range: 0x80203100 -> 0x80203190
                // Local variables
                class zCam * playerCam; // r28
            }
        }
        {
            // Range: 0x802031A4 -> 0x80203288
            // Local variables
            int curPlayerIndex; // r28

            {
                // Range: 0x802031AC -> 0x8020326C
                // Local variables
                int i; // r27

                {
                    // Range: 0x802031B4 -> 0x802031B8
                    // Local variables
                    class zCam * playerCam; // r23
                }
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// signature: zPlayer::SwitchedToAI(bool)
// Range: 0x802032D0 -> 0x80203368
void zPlayer::SwitchedToAI(class zPlayer * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// signature: zPlayer::ImpartForce(const xVec3 &)
// Range: 0x80203370 -> 0x802033B4
void zPlayer::ImpartForce() {
}
// signature: zPlayer::ImpartAcceleration(const xVec3 &)
// Range: 0x802033C0 -> 0x802033F4
void zPlayer::ImpartAcceleration() {
}
// signature: zPlayer::ImpartImpulse(const xVec3 &)
// Range: 0x80203400 -> 0x80203444
void zPlayer::ImpartImpulse() {
}
// Range: 0x80203450 -> 0x802034D4
void zPlayer::GetCharacterProxyLinearVel(class xVec3 & vel /* r31 */) {
    {
        // Range: 0x80203484 -> 0x802034BC
        // Local variables
        class hkVector4 hkVel; // r1+0x10
    }
}
// Range: 0x802034E0 -> 0x80203538
void zPlayer::ApplyAccumulatedExternalVelocity() {
    // References
    // -> class xVec3 m_Null;
}
// signature: zPlayer::ApplyAccumulatedExternalAcceleration(float)
// Range: 0x80203540 -> 0x802035D0
void zPlayer::ApplyAccumulatedExternalAcceleration() {
    // Local variables
    class xVec3 diffVel; // r1+0x8

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x802035D0 -> 0x80203608
void zPlayer::ApplyAccumulatedExternalMomentumlessVelocity() {
}
// Range: 0x80203610 -> 0x80203618
class xVec3 * zPlayer::GetAttachDPos() {
}
// Range: 0x80203620 -> 0x80203628
class SurfaceGamePlay * zPlayer::GetSurface() const {
}
