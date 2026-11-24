/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zKevinPlayer.cpp
*/
static class xVec3 SpringboardBody; // size: 0xC, address: 0x80780AD0
static class xVec3 SpringboardBodyOffset; // size: 0xC, address: 0x80780ADC
static class xVec3 NeckCapsuleTop; // size: 0xC, address: 0x80780AE8
static class xVec3 NeckCapsuleBottom; // size: 0xC, address: 0x80780AF4
static class xVec3 HeadCapsuleTop; // size: 0xC, address: 0x80780B00
static class xVec3 HeadCapsuleBottom; // size: 0xC, address: 0x80780B0C
static class SurfaceGamePlay * lastSurface; // size: 0x4, address: 0x8081FB60
// signature: zKevinPlayer::Init(Sext::xEntAsset *)
// Range: 0x80187E40 -> 0x80188020
void zKevinPlayer::Init(class zKevinPlayer * this /* r31 */) {
    // Local variables
    class zKevinPlayerMelee * melee; // r0

    // References
    // -> float HP_START;
}
// Range: 0x80188020 -> 0x80188B60
void zKevinPlayer::InitActions(class zKevinPlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__12zPlayerCheat;
    // -> struct {} __vt__20zPlayerRagdollFallUP;
    // -> struct {} __vt__13zPlayerStepUp;
    // -> struct {} __vt__23zPlayerKevinSpringboard;
    // -> struct {} __vt__13zPlayerSummon;
    // -> struct {} __vt__25zPlayerHouseBalloonBounce;
    // -> struct {} __vt__20zKevinPlayerUnsummon;
    // -> struct {} __vt__20zPlayerLeverLaunchUP;
    // -> struct {} __vt__17zPlayerHouseFloat;
    // -> struct {} __vt__15zPlayerCaveWorm;
    // -> struct {} __vt__27zCommonPlayerSinkingSurface;
    // -> struct {} __vt__12zPlayerCrank;
    // -> struct {} __vt__12zPlayerSlide;
    // -> struct {} __vt__18zKevinPlayerDangle;
    // -> struct {} __vt__13zPlayerHidden;
    // -> struct {} __vt__11zPlayerSwim;
    // -> struct {} __vt__23zKevinPlayerSpringboard;
    // -> struct {} __vt__12zPlayerUntie;
    // -> struct {} __vt__12zPlayerPlant;
    // -> struct {} __vt__14zPlayerTrapped;
    // -> struct {} __vt__17zPlayerCustomAnim;
    // -> struct {} __vt__13zPlayerMGLose;
    // -> struct {} __vt__12zPlayerMGWin;
    // -> struct {} __vt__18zPlayerWalkStartUP;
    // -> struct {} __vt__17zCommonPlayerDash;
    // -> struct {} __vt__15zPlayerPushPull;
    // -> struct {} __vt__14zPlayerFainted;
    // -> struct {} __vt__15zPlayerDefeated;
    // -> struct {} __vt__18zUPPlayerHitLaunch;
    // -> struct {} __vt__12zUPPlayerHit;
    // -> struct {} __vt__17zKevinPlayerMelee;
    // -> struct {} __vt__17zKevinPlayerLedge;
    // -> struct {} __vt__16zPlayerTriggered;
    // -> struct {} __vt__13zPlayerLandUP;
    // -> struct {} __vt__18zPlayerFallToDeath;
    // -> struct {} __vt__16zKevinPlayerFall;
    // -> struct {} __vt__18zKevinPlayerAIJump;
    // -> struct {} __vt__16zKevinPlayerJump;
    // -> struct {} __vt__11zPlayerSlip;
    // -> struct {} __vt__15zKevinPlayerRun;
    // -> struct {} __vt__16zKevinPlayerWalk;
    // -> struct {} __vt__15zPlayerSkidStop;
    // -> struct {} __vt__16zKevinPlayerIdle;
}
// Range: 0x80188B60 -> 0x80188DA8
void zKevinPlayer::ParseIni(class zKevinPlayer * this /* r30 */) {
    // Local variables
    float DEFAULT_SPEED_NORMAL[6]; // r1+0x38
    float DEFAULT_SPEED_JUMP[6]; // r1+0x20
    float DEFAULT_ANIM_WALK[3]; // r1+0x14
    float DEFAULT_ANIM_RUN[3]; // r1+0x8
}
// Range: 0x80188DB0 -> 0x80188DB4
void zKevinPlayer::SceneSetup() {
}
// Range: 0x80188DC0 -> 0x80188E90
void zKevinPlayer::Reset(class zKevinPlayer * this /* r31 */) {
    {
        // Range: 0x80188DE4 -> 0x80188E78
        // Local variables
        class hkVector4 hk_pos; // r1+0x10
    }
}
// signature: zKevinPlayer::DefaultBeginUpdate(float)
// Range: 0x80188E90 -> 0x80188E94
void zKevinPlayer::DefaultBeginUpdate() {
}
// signature: zKevinPlayer::DefaultUpdate(float)
// Range: 0x80188EA0 -> 0x80188EA4
void zKevinPlayer::DefaultUpdate() {
}
// Range: 0x80189050 -> 0x8018A03C
void zKevinPlayer::ChaseControl(class zKevinPlayer * this /* r29 */, float stickMag /* f27 */, class xVec3 & camRelativeInput /* r30 */, float dt /* f28 */, float moveTurnRate /* f29 */) {
    // Local variables
    unsigned int animUserFlag; // r0
    unsigned int blendUserFlag; // r0
    float friction; // f31
    class xVec3 playerAtXZ; // r1+0x60
    class xVec3 playerRightXZ; // r1+0x54
    float maxSpeed; // f30

    {
        // Range: 0x80189338 -> 0x801893A8
        // Local variables
        float maxSlipperySpeed; // f2
    }
    {
        // Range: 0x801893D4 -> 0x80189628
        // Local variables
        float inputAccMag; // f5
        class xVec3 moveDirection; // r1+0x3C

        {
            // Range: 0x801893D4 -> 0x801894C4
            // Local variables
            class xVec3 camRelativeForwardInput; // r1+0x48
        }
        {
            // Range: 0x801895A0 -> 0x801895E0
            // Local variables
            float acceleration; // f0
        }
    }
    {
        // Range: 0x801896EC -> 0x801899F0
        // Local variables
        int x; // r0
        class hkpAllCdBodyPairCollector collector; // r1+0x190
        class hkpCollisionInput * input; // r0
        class hkpCollidable collA; // r1+0x90
        class hkMotionState motionState; // r1+0xE0
        class hkpSphereShape shape; // r1+0x70
        class hkpWorld * havokWorld; // r30
        class xVec3 possiblePos; // r1+0x30

        {
            // Range: 0x8018984C -> 0x801899DC
            // Local variables
            int i; // r3

            {
                // Range: 0x8018984C -> 0x801899DC
                // Local variables
                class hkpRigidBody * hitRB; // r0

                {
                    // Range: 0x80189884 -> 0x801899DC
                    // Local variables
                    class xBase * hitObject; // r0

                    {
                        // Range: 0x8018990C -> 0x80189990
                        // Local variables
                        int x; // r0
                    }
                }
            }
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__25hkpAllCdBodyPairCollector;
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x8018A0B0 -> 0x8018A1F4
void zKevinPlayer::DefaultMove(class zKevinPlayer * this /* r29 */, class xScene * s /* r30 */, float dt /* f30 */, class xEntFrame * frame /* r31 */) {
}
// Range: 0x8018A200 -> 0x8018A530
void zKevinPlayer::ChaseRelativeControl(class zKevinPlayer * this /* r31 */, float x /* f28 */, float z /* f29 */, float dt /* f31 */) {
    // Local variables
    class xVec3 camRelativeInput; // r1+0x14
    float xSign; // f30
    float expval; // f1
    float stickMag; // f30
}
// signature: zKevinPlayer::AbsControl(float, float, float)
// Range: 0x8018A530 -> 0x8018A54C
void zKevinPlayer::AbsControl() {
}
// Range: 0x8018A550 -> 0x8018A5AC
void zKevinPlayer::Exit(class zKevinPlayer * this /* r31 */) {
}
// Range: 0x8018A5B0 -> 0x8018A770
void zKevinPlayer::SwapCapsule(class zKevinPlayer * this /* r29 */, bool toCrouch /* r27 */) {
    // Local variables
    class hkpWorld * worldPointer; // r30

    {
        // Range: 0x8018A5F8 -> 0x8018A73C
        // Local variables
        class hkpConvexTranslateShape * newShape; // r0
    }

    // References
    // -> struct {} __vt__23hkpConvexTranslateShape;
    // -> static class xVec3 SpringboardBodyOffset;
    // -> float hkConvexShapeDefaultRadius;
    // -> static class xVec3 SpringboardBody;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8018A860 -> 0x8018AE6C
void zKevinPlayer::ChangeCapsule(class zKevinPlayer * this /* r30 */) {
    {
        // Range: 0x8018A88C -> 0x8018A9D4
        // Local variables
        class hkpConvexTranslateShape * newShape; // r0
    }
    {
        // Range: 0x8018A9D8 -> 0x8018ACA8
        // Local variables
        class hkVector4 v1; // r1+0x40
        class hkVector4 v0; // r1+0x50
        class hkArray shapeArray; // r1+0x60
    }

    // References
    // -> static class xVec3 HeadCapsuleTop;
    // -> static class xVec3 HeadCapsuleBottom;
    // -> static class xVec3 NeckCapsuleTop;
    // -> static class xVec3 NeckCapsuleBottom;
    // -> struct {} __vt__23hkpConvexTranslateShape;
    // -> static class xVec3 SpringboardBodyOffset;
    // -> float hkConvexShapeDefaultRadius;
    // -> static class xVec3 SpringboardBody;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zKevinPlayer::GetInteractionTestPos(unsigned int, xVec3 &)
// Range: 0x8018AE70 -> 0x8018AF18
void zKevinPlayer::GetInteractionTestPos() {
}
// Range: 0x8018AF30 -> 0x8018AF8C
float zKevinPlayer::GetCapsuleHeight() {
    // References
    // -> static class xVec3 HeadCapsuleTop;
    // -> static class xVec3 SpringboardBodyOffset;
    // -> static class xVec3 SpringboardBody;
}
// Range: 0x8018AF90 -> 0x8018AFD4
void zKevinPlayer::UpdateCharacterProxy(class zKevinPlayer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8018AFE0 -> 0x8018B3F0
void zKevinPlayer::RotateCharacterProxy(class zKevinPlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8018B008 -> 0x8018B3CC
        // Local variables
        class hkVector4 * hitPos; // r0
        class ClosestNonTriggerCheckNoShrapnel collector; // r1+0x80
        class hkVector4 playerRight; // r1+0x70
        class hkVector4 & col2; // r11
        class hkVector4 & col1; // r10
        class hkVector4 & col0; // r27
        class hkRotation rotation; // r1+0xC0

        {
            // Range: 0x8018B188 -> 0x8018B3CC
            // Local variables
            class xVec3 awayVel; // r1+0x58
        }
    }

    // References
    // -> struct {} __vt__Q29zUPPlayer32ClosestNonTriggerCheckNoShrapnel;
}
// Range: 0x8018B3F0 -> 0x8018B45C
bool zKevinPlayer::SkipCharacterProxyHavokUpdate(class zKevinPlayer * this /* r31 */) {
}
// Range: 0x8018B460 -> 0x8018BC5C
void zKevinPlayer::HavokSetup(class zKevinPlayer * this /* r30 */) {
    {
        // Range: 0x8018B4A8 -> 0x8018BA78
        // Local variables
        class hkVector4 hk_pos; // r1+0x40
        class xVec3 & pos; // r0
        class hkVector4 gravity; // r1+0x50
        class hkpCharacterProxyCinfo cpci; // r1+0x90
        class hkpPropertyValue onVal; // r1+0x30
        class hkVector4 v1; // r1+0x60
        class hkVector4 v0; // r1+0x70
        class hkArray shapeArray; // r1+0x80
    }

    // References
    // -> double secondsPerTick;
    // -> struct {} __vt__40zUPPlayerCharacterProxyCollisionListener;
    // -> class hkTransform hkTransformIdentity;
    // -> static class xVec3 HeadCapsuleTop;
    // -> static class xVec3 HeadCapsuleBottom;
    // -> static class xVec3 NeckCapsuleTop;
    // -> static class xVec3 NeckCapsuleBottom;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// signature: zKevinPlayer::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8018BC60 -> 0x8018BD34
void zKevinPlayer::HandleEvent() {
    {
        // Range: 0x8018BCA0 -> 0x8018BCEC
        // Local variables
        int i; // r28
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8018BD40 -> 0x8018BD50
unsigned int zKevinPlayer::GetBehaviorSetRefHash() const {
}
// Range: 0x8018BD50 -> 0x8018BDB0
bool zKevinPlayer::InstanceIsVisible() {
    {
        // Range: 0x8018BD54 -> 0x8018BD5C
        // Local variables
        int i; // r6
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8018BDB0 -> 0x8018BE04
class zKevinPlayer * zKevinPlayer::GetInstance() {
    {
        // Range: 0x8018BDB4 -> 0x8018BDBC
        // Local variables
        int i; // r6
    }

    // References
    // -> class xGlobals * xglobals;
}
