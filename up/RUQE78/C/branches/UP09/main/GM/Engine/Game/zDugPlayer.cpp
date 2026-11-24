/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zDugPlayer.cpp
*/
// signature: zDugPlayer::Init(Sext::xEntAsset *)
// Range: 0x8014BE70 -> 0x8014C13C
void zDugPlayer::Init(class zDugPlayer * this /* r31 */) {
    // Local variables
    class zDugPlayerMelee * melee; // r0
}
// Range: 0x8014C140 -> 0x8014CD6C
void zDugPlayer::InitActions(class zDugPlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__12zPlayerCheat;
    // -> struct {} __vt__20zPlayerRagdollFallUP;
    // -> struct {} __vt__18zDugPlayerUnsummon;
    // -> struct {} __vt__13zPlayerStepUp;
    // -> struct {} __vt__20zPlayerLeverLaunchUP;
    // -> struct {} __vt__17zPlayerHouseFloat;
    // -> struct {} __vt__25zPlayerHouseBalloonBounce;
    // -> struct {} __vt__15zPlayerCaveWorm;
    // -> struct {} __vt__27zCommonPlayerSinkingSurface;
    // -> struct {} __vt__12zPlayerCrank;
    // -> struct {} __vt__13zPlayerSummon;
    // -> struct {} __vt__11zPlayerSwim;
    // -> struct {} __vt__15zDugPlayerLever;
    // -> struct {} __vt__12zPlayerSlide;
    // -> struct {} __vt__13zPlayerHidden;
    // -> struct {} __vt__15zDugPlayerSniff;
    // -> struct {} __vt__15zDugPlayerCrawl;
    // -> struct {} __vt__12zPlayerUntie;
    // -> struct {} __vt__15zDugPlayerPlant;
    // -> struct {} __vt__12zPlayerPlant;
    // -> struct {} __vt__14zPlayerTrapped;
    // -> struct {} __vt__17zPlayerCustomAnim;
    // -> struct {} __vt__13zPlayerMGLose;
    // -> struct {} __vt__12zPlayerMGWin;
    // -> struct {} __vt__18zPlayerWalkStartUP;
    // -> struct {} __vt__17zCommonPlayerDash;
    // -> struct {} __vt__15zPlayerPushPull;
    // -> struct {} __vt__11zDugFainted;
    // -> struct {} __vt__15zPlayerDefeated;
    // -> struct {} __vt__18zUPPlayerHitLaunch;
    // -> struct {} __vt__12zUPPlayerHit;
    // -> struct {} __vt__15zDugPlayerMelee;
    // -> struct {} __vt__15zDugPlayerLedge;
    // -> struct {} __vt__16zPlayerTriggered;
    // -> struct {} __vt__14zDugPlayerLand;
    // -> struct {} __vt__18zPlayerFallToDeath;
    // -> struct {} __vt__14zDugPlayerFall;
    // -> struct {} __vt__23zPlayerKevinSpringboard;
    // -> struct {} __vt__13zPlayerAIJump;
    // -> struct {} __vt__14zDugPlayerJump;
    // -> struct {} __vt__11zPlayerSlip;
    // -> struct {} __vt__13zDugPlayerRun;
    // -> struct {} __vt__14zDugPlayerWalk;
    // -> struct {} __vt__15zPlayerSkidStop;
    // -> struct {} __vt__14zDugPlayerIdle;
}
// Range: 0x8014CD90 -> 0x8014CFD8
void zDugPlayer::ParseIni(class zDugPlayer * this /* r30 */) {
    // Local variables
    float DEFAULT_SPEED_NORMAL[6]; // r1+0x38
    float DEFAULT_SPEED_JUMP[6]; // r1+0x20
    float DEFAULT_ANIM_WALK[3]; // r1+0x14
    float DEFAULT_ANIM_RUN[3]; // r1+0x8
}
// Range: 0x8014CFE0 -> 0x8014D458
void zDugPlayer::SceneSetup(class zDugPlayer * this /* r29 */) {
    // References
    // -> static class IconCache cache[16];
    // -> static int total;
    // -> bool messageBoxCreationOK;
    // -> static class BadgePoint * bagePointAsset;
}
// Range: 0x8014D460 -> 0x8014D50C
void zDugPlayer::Reset(class zDugPlayer * this /* r31 */) {
    {
        // Range: 0x8014D484 -> 0x8014D4F4
        // Local variables
        class hkVector4 hk_pos; // r1+0x10
    }
}
// signature: zDugPlayer::DefaultUpdate(float)
// Range: 0x8014D520 -> 0x8014D7C4
void zDugPlayer::DefaultUpdate(class zDugPlayer * this /* r30 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8014D7E0 -> 0x8014D960
void zDugPlayer::AbsControl(class zDugPlayer * this /* r31 */, float x /* f29 */, float z /* f30 */, float dt /* f31 */) {
    {
        // Range: 0x8014D818 -> 0x8014D8F8
        // Local variables
        class xVec3 camRelativeInput; // r1+0x8
    }
}
// Range: 0x8014D960 -> 0x8014D9FC
void zDugPlayer::Exit(class zDugPlayer * this /* r31 */) {
    // References
    // -> unsigned int numAutotargetObjects;
}
// Range: 0x8014DA00 -> 0x8014DEC0
void zDugPlayer::CollisionShapeUpdate(class zDugPlayer * this /* r31 */) {
    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8014DED0 -> 0x8014DEDC
float zDugPlayer::GetCapsuleHeight() {
}
// Range: 0x8014DEE0 -> 0x8014DF24
void zDugPlayer::UpdateCharacterProxy(class zDugPlayer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8014DF30 -> 0x8014E34C
void zDugPlayer::RotateCharacterProxy(class zDugPlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8014DF58 -> 0x8014E328
        // Local variables
        class hkVector4 * hitPos; // r0
        class ClosestNonTriggerCheckNoShrapnel collector; // r1+0x80
        class hkVector4 playerRight; // r1+0x70
        class hkVector4 & col2; // r11
        class hkVector4 & col1; // r10
        class hkVector4 & col0; // r27
        class hkRotation rotation; // r1+0xC0

        {
            // Range: 0x8014E0E4 -> 0x8014E328
            // Local variables
            class xVec3 awayVel; // r1+0x58
        }
    }

    // References
    // -> struct {} __vt__Q29zUPPlayer32ClosestNonTriggerCheckNoShrapnel;
}
// Range: 0x8014EB00 -> 0x8014EF58
void zDugPlayer::HavokSetup(class zDugPlayer * this /* r30 */) {
    {
        // Range: 0x8014EB48 -> 0x8014EF14
        // Local variables
        class hkVector4 hk_pos; // r1+0x40
        class xVec3 & pos; // r0
        class hkVector4 gravity; // r1+0x50
        class hkpCharacterProxyCinfo cpci; // r1+0x80
        class hkpPropertyValue onVal; // r1+0x30
        class hkVector4 v1; // r1+0x60
        class hkVector4 v0; // r1+0x70
        float len_2; // f6
    }

    // References
    // -> double secondsPerTick;
    // -> struct {} __vt__40zUPPlayerCharacterProxyCollisionListener;
    // -> class hkTransform hkTransformIdentity;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zDugPlayer::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8014EF60 -> 0x8014EF98
void zDugPlayer::HandleEvent() {
}
// Range: 0x8014EFA0 -> 0x8014EFB0
unsigned int zDugPlayer::GetBehaviorSetRefHash() const {
}
// Range: 0x8014EFB0 -> 0x8014EFE4
bool zDugPlayer::CanJump() const {
    // Local variables
    unsigned int currAction; // r0
}
// Range: 0x8014EFF0 -> 0x8014F050
bool zDugPlayer::InstanceIsVisible() {
    {
        // Range: 0x8014EFF4 -> 0x8014EFFC
        // Local variables
        int i; // r6
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8014F050 -> 0x8014F0A4
class zDugPlayer * zDugPlayer::GetInstance() {
    {
        // Range: 0x8014F054 -> 0x8014F05C
        // Local variables
        int i; // r6
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8014F0B0 -> 0x8014F4E8
void zDugPlayer::SniffControl(class zDugPlayer * this /* r31 */, float x /* f30 */, float z /* f29 */, float dt /* f31 */) {
    // Local variables
    class xVec2 dir; // r1+0x8
    class xVec3 dir3; // r1+0x28
    float camAng; // f30
    class xVec3 playerAtXZ; // r1+0x1C
    class xVec3 playerRightXZ; // r1+0x10
    float friction; // f1

    {
        // Range: 0x8014F370 -> 0x8014F470
        // Local variables
        float rightProject; // f30
        float atProject; // f0
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisX;
}
