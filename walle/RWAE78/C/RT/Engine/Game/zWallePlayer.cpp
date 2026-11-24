/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zWallePlayer.cpp
*/
class compositeEffect rumbleEffects[1]; // size: 0x70, address: 0x80799830
float MOVE_SPEED; // size: 0x4, address: 0x80700620
static float MAX_SLOPE_CLAMP; // size: 0x4, address: 0x807998A0
static float MIN_SLOPE_CLAMP; // size: 0x4, address: 0x807998A4
float laserDamage; // size: 0x4, address: 0x80700624
float laserSpeed; // size: 0x4, address: 0x80700628
float laserPressTimer; // size: 0x4, address: 0x8070062C
float laserHoldTimer; // size: 0x4, address: 0x80700630
char * reticleRedList[4]; // size: 0x10, address: 0x80700638
char * reticleGreenList[4]; // size: 0x10, address: 0x80700648
char * reticleIRWarningList[4]; // size: 0x10, address: 0x80700658
char * reticleIRErrorList[4]; // size: 0x10, address: 0x80700668
char * healthMeterList[4]; // size: 0x10, address: 0x80700678
char * targetViewList[4]; // size: 0x10, address: 0x80700688
static class xHierarchyBoundInitData bounds[4]; // size: 0x30, address: 0x807006B0
// Range: 0x801908F0 -> 0x80190C9C
void zWallePlayer::ParseIni(class zWallePlayer * this /* r31 */) {
    // Local variables
    float DEFAULT_SPEED_NORMAL[6]; // r1+0x38
    float DEFAULT_SPEED_JUMP[6]; // r1+0x20
    float DEFAULT_ANIM_WALK[3]; // r1+0x14
    float DEFAULT_ANIM_RUN[3]; // r1+0x8
}
// Range: 0x80190CA0 -> 0x801925F0
void zWallePlayer::Init(class zWallePlayer * this /* r28 */, class xEntAsset * asset /* r29 */) {
    // Local variables
    unsigned int mySize; // r1+0x10
    unsigned long long characterAssetID; // r0:r0
    class zCharacterAsset * pCharacterAsset; // r0
    class zCombat * combat; // r0

    {
        // Range: 0x80191838 -> 0x8019190C
        // Local variables
        int i; // r30
    }
    {
        // Range: 0x80191954 -> 0x80191954
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801919EC -> 0x80191A00
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x80191F04 -> 0x80191F2C
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x80192058 -> 0x8019207C
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x80192184 -> 0x801921A4
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x8019255C -> 0x80192564
        // Local variables
        int i; // r26
    }

    // References
    // -> class zWalleCheats gWalleCheats;
    // -> float laserDamage;
    // -> float laserHoldTimer;
    // -> float laserPressTimer;
    // -> float laserSpeed;
    // -> float MOVE_SPEED;
    // -> class xVec3 m_UnitAxisY;
    // -> class xMat4x3 g_I3;
    // -> char * targetViewList[4];
    // -> char * healthMeterList[4];
    // -> char * reticleIRErrorList[4];
    // -> char * reticleIRWarningList[4];
    // -> char * reticleRedList[4];
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
    // -> char * reticleGreenList[4];
    // -> float HP_START;
    // -> class zPlayerInputPadMgr padManager;
    // -> static class zQueue sPhysQueue;
    // -> static unsigned int ePLYMPlayerTypeHashes[17];
    // -> static unsigned int ePLYVPlayerTypeHashes[12];
    // -> static int gPlayerCharacterAssetMap[4][4];
    // -> static unsigned int gPlayerTags[4];
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappingDefault;
    // -> static class zPlayerResourcesSceneEntry gScenePlayerMappings[80];
    // -> class zGlobals globals;
    // -> static unsigned int gNextSceneID;
    // -> class xVec3 m_Null;
}
// Range: 0x801925F0 -> 0x801932E0
void zWallePlayer::InitActions(class zWallePlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__17zWallePlayerCheat;
    // -> struct {} __vt__22zWallePlayerRegenerate;
    // -> struct {} __vt__25zWallePlayerZeroPointLand;
    // -> struct {} __vt__27zWallePlayerZeroPointLaunch;
    // -> struct {} __vt__24zWallePlayerZeroPointHit;
    // -> struct {} __vt__22zWallePlayerSwitchCube;
    // -> struct {} __vt__20zWallePlayerShootGun;
    // -> struct {} __vt__21zWallePlayerThrowCube;
    // -> struct {} __vt__29zWallePlayerContextPickUpCube;
    // -> struct {} __vt__31zWallePlayerContextOverHeadGrab;
    // -> struct {} __vt__36zWallePlayerContextFixVendingMachine;
    // -> struct {} __vt__30zWallePlayerContextSwitchLever;
    // -> struct {} __vt__21zWallePlayerStorkJump;
    // -> struct {} __vt__19zWallePlayerReverse;
    // -> struct {} __vt__24zWallePlayerCompactTrash;
    // -> struct {} __vt__20zWallePlayerIntoCube;
    // -> struct {} __vt__18zWallePlayerMGLose;
    // -> struct {} __vt__12zPlayerMGWin;
    // -> struct {} __vt__21zWallePlayerWalkStart;
    // -> struct {} __vt__16zWallePlayerDash;
    // -> struct {} __vt__18zPlayerSwitchLever;
    // -> struct {} __vt__27zCommonPlayerActionPushPull;
    // -> struct {} __vt__19zPlayerActionLaunch;
    // -> struct {} __vt__18zPlayerChargeboard;
    // -> struct {} __vt__18zPlayerBoardLaunch;
    // -> struct {} __vt__20zWallePlayerDefeated;
    // -> struct {} __vt__21zWallePlayerHitLaunch;
    // -> struct {} __vt__16zPlayerTriggered;
    // -> struct {} __vt__16zWallePlayerLand;
    // -> struct {} __vt__18zPlayerFallToDeath;
    // -> struct {} __vt__16zWallePlayerFall;
    // -> struct {} __vt__16zWallePlayerSlip;
    // -> struct {} __vt__15zWallePlayerRun;
    // -> struct {} __vt__16zWallePlayerWalk;
    // -> struct {} __vt__20zWallePlayerSkidStop;
    // -> struct {} __vt__16zWallePlayerIdle;
}
// Range: 0x801932E0 -> 0x80193384
void zWallePlayer::SceneSetup(class zWallePlayer * this /* r28 */) {
    // References
    // -> static class ImmediatePrototypeEntity * sActiveEntity;
}
// Range: 0x80193390 -> 0x80193F5C
void zWallePlayer::Reset(class zWallePlayer * this /* r31 */) {
    // Local variables
    class zNPCBase * slaveNPC; // r0

    {
        // Range: 0x801933C0 -> 0x80193448
        // Local variables
        class hkVector4 hk_pos; // r1+0x1A0
    }
    {
        // Range: 0x801934BC -> 0x80193C84
        // Local variables
        class hkVector4 hk_pos; // r1+0x160
        class hkpPropertyValue prop; // r1+0xA8
        class xVec3 * pos; // r0
        class hkVector4 gravity; // r1+0x170
        class hkpCharacterProxyCinfo cpci; // r1+0x1D0
        class hkpShape * temp_shape; // r24
        class hkpShape * temp_shape_ball; // r24
        class hkpRigidBodyCinfo cinfo; // r1+0x250
        class hkVector4 v1; // r1+0x180
        class hkVector4 v0; // r1+0x190
        float len; // f31
        float capHeight; // f5

        {
            // Range: 0x80193C60 -> 0x80193C64
            // Local variables
            int i; // r25
        }
    }
    {
        // Range: 0x80193F18 -> 0x80193F1C
        // Local variables
        int i; // r25
    }

    // References
    // -> class zWalleCheats gWalleCheats;
    // -> class xVec3 g_Y3;
    // -> float hkConvexShapeDefaultRadius;
    // -> class zGlobals globals;
}
// Range: 0x80194100 -> 0x80194164
void zWallePlayer::ResetEve(class zWallePlayer * this /* r31 */) {
}
// Range: 0x80194170 -> 0x80194454
void zWallePlayer::LoadCheckPoint(class zWallePlayer * this /* r30 */) {
    // Local variables
    class zNPCBase * slaveNPC; // r0

    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisY;
}
// signature: zWallePlayer::LoadCheckPointB(xVec3, float)
// Range: 0x80194460 -> 0x80194788
void zWallePlayer::LoadCheckPointB(class zWallePlayer * this /* r30 */) {
    // Local variables
    class zNPCBase * slaveNPC; // r0

    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x80194790 -> 0x80194984
void zWallePlayer::Exit(class zWallePlayer * this /* r31 */) {
    // References
    // -> class zPlayerInputPadMgr padManager;
}
// Range: 0x801949D0 -> 0x8019553C
void zWallePlayer::DefaultBeginUpdate(class zWallePlayer * this /* r31 */, float dt /* f29 */) {
    // Local variables
    class xVec3 * oldpos; // r0
    class xVec3 dir; // r1+0x110
    class hkVector4 pos; // r1+0x100
    class hkQuaternion quat; // r1+0xF0
    class xVec3 waleHeadLoc; // r1+0xDC
    class xVec3 waleAnchorLoc; // r1+0xD0
    class hkVector4 newDir; // r1+0xC0
    float positiveCosine; // f0
    float slopDot; // f0

    {
        // Range: 0x80194A20 -> 0x80194A24
        // Local variables
        int i; // r25
    }
    {
        // Range: 0x80194E44 -> 0x801951CC
        // Local variables
        float tempVecLength; // f0
        class hkVector4 tempVec; // r1+0xB0
    }
    {
        // Range: 0x801952D0 -> 0x80195320
        // Local variables
        float friction; // f0
    }
    {
        // Range: 0x80195324 -> 0x801954E8
        // Local variables
        class xVec3 addedVelocity; // r1+0x90
        class xVec3 surfaceTestVec; // r1+0x9C
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> float hkInfinity;
    // -> class hkError * s_instance;
}
// Range: 0x80195540 -> 0x8019673C
void zWallePlayer::DefaultUpdate(class zWallePlayer * this /* r27 */, float dt /* f31 */) {
    // Local variables
    float combinedTreadTravel; // f1
    bool bEngineOn; // r0
    float treadTravelSpeed; // f0
    class xMat4x3 jointJMatrix; // r1+0xD0
    bool autoTargetUpdated; // r31
    bool autoTargetLaserUpdated; // r30
    bool cubeTargetUpdated; // r29
    bool headTrackingEntUpdated; // r28

    {
        // Range: 0x80195580 -> 0x801955FC
        // Local variables
        class hkpRigidBodyCinfo tempInfo; // r1+0x150
    }
    {
        // Range: 0x8019561C -> 0x8019566C
        // Local variables
        float offsetY; // f2
        class xVec3 moveTo; // r1+0x80
        class zPOWGroup * pGroup; // r0
    }
    {
        // Range: 0x80195750 -> 0x801957D4
        // Local variables
        class zCombatDamageInfo info; // r1+0x110
    }
    {
        // Range: 0x801957E4 -> 0x80195A18
        // Local variables
        class xVec3 distDT; // r1+0x74
    }
    {
        // Range: 0x80195BE8 -> 0x80196164
        // Local variables
        class xVec3 zOffset; // r1+0x50
        class xVec3 yOffset; // r1+0x5C
        class xVec3 xOffset; // r1+0x68
        class xMat4x3 camMat; // r1+0x90
    }

    // References
    // -> static class zProjectileManager gProjectileManager;
    // -> class zGlobals globals;
}
// signature: zWallePlayer::DefaultMove(xScene *, float, xEntFrame *)
// Range: 0x80196750 -> 0x80196754
void zWallePlayer::DefaultMove() {
}
// Range: 0x80196760 -> 0x80197524
void zWallePlayer::DefaultEndUpdate(class zWallePlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 * oldpos; // r0
    class xVec3 * pos; // r0
    class hkVector4 vel; // r1+0x250
    class hkVector4 hk_pos; // r1+0x240
    class hkVector4 drivenByVel; // r1+0x230

    {
        // Range: 0x80196798 -> 0x801968FC
        // Local variables
        class xVec3 tmpDPOS; // r1+0x260
        class xVec3 tmpVel; // r1+0x26C
        class xVec3 curPos; // r1+0x278
    }
    {
        // Range: 0x80196988 -> 0x80196B58
        // Local variables
        float rot; // f30
        float tempCos; // f0
        class xVec3 tempXZTarget; // r1+0x208
        class xVec3 tempUpProjection; // r1+0x214
        class xVec3 tempTarget; // r1+0x220

        {
            // Range: 0x80196A38 -> 0x80196AD8
            // Local variables
            class xVec3 newup; // r1+0x1FC
        }
    }
    {
        // Range: 0x80196B58 -> 0x80196C4C
        // Local variables
        class xVec3 rotOffset; // r1+0x1F0
        class hkTransform tempXform; // r1+0x290
    }
    {
        // Range: 0x80196C4C -> 0x80196D00
        // Local variables
        class hkVector4 cheatPos; // r1+0x1E0
    }
    {
        // Range: 0x80196D00 -> 0x80196D3C
        // Local variables
        class WalleProxyStartCollector startCollector; // r1+0x470
        class TriggerIdentifyingPointCollector castCollector; // r1+0x640
    }
    {
        // Range: 0x80196D54 -> 0x80197000
        // Local variables
        class xQuat quat; // r1+0x190
        class xVec3 rotOffset; // r1+0x1A0
        class xVec3 tmpVel; // r1+0x1AC
        class xVec3 curPos; // r1+0x1B8

        {
            // Range: 0x80196D88 -> 0x80196E5C
            // Local variables
            class xVec3 impactVelocity; // r1+0x1C4
            float projectImparted; // f0
            class xVec3 currentImparted; // r1+0x1D0
        }
    }
    {
        // Range: 0x80197004 -> 0x801971BC
        // Local variables
        class hkpAllCdPointCollector collector; // r1+0x2D0
        int floorCollision; // r27
        class hkpWorld * world; // r28

        {
            // Range: 0x8019707C -> 0x80197128
            // Local variables
            int i; // r28

            {
                // Range: 0x8019707C -> 0x80197128
                // Local variables
                class hkBaseObject * owner; // r0

                {
                    // Range: 0x8019707C -> 0x80197128
                    // Local variables
                    float dotProduct; // f0
                    class hkVector4 Yaxis; // r1+0x170
                    class hkVector4 normal; // r1+0x180
                }
            }
        }
    }
    {
        // Range: 0x801971BC -> 0x801972BC
        // Local variables
        class xQuat quat; // r1+0x148
        class xVec3 rotOffset; // r1+0x158
    }
    {
        // Range: 0x801972D8 -> 0x801972DC
        // Local variables
        int i; // r27
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zWallePlayer::AutoTargetBaseToEnt(xBase *)
// Range: 0x80199450 -> 0x8019951C
class xEnt * zWallePlayer::AutoTargetBaseToEnt() {
    // Local variables
    class xEnt * ent; // r31

    {
        // Range: 0x80199478 -> 0x801994B0
        // Local variables
        class zNPCEntity * npcEnt; // r30
    }
}
// signature: zWallePlayer::AutoTargetUpdate(float)
// Range: 0x80199520 -> 0x80199B18
void zWallePlayer::AutoTargetUpdate(class zWallePlayer * this /* r31 */) {
    // Local variables
    class xVec3 start; // r1+0x6C
    class xVec3 end; // r1+0x60
    class hkVector4 fromPos; // r1+0x50
    class hkVector4 toPos; // r1+0x40
    class hkpAllRayHitCollector hitCollector; // r1+0xC0
    class xMat4x3 matrixJ; // r1+0x78
    class xVec3 startPos; // r1+0x28

    {
        // Range: 0x801996F8 -> 0x801997B4
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x801996F8 -> 0x801997B4
            // Local variables
            class xVec3 targetPos; // r1+0x1C
            class xEnt * ent; // r28
            class xBase * base; // r0
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__21hkpAllRayHitCollector;
    // -> static float AUTOTARGET_DIST_THRESHOLD;
}
// signature: zWallePlayer::LaserAutoTargetUpdate(float)
// Range: 0x80199B20 -> 0x8019A10C
void zWallePlayer::LaserAutoTargetUpdate(class zWallePlayer * this /* r31 */) {
    // Local variables
    class xVec3 start; // r1+0x5C
    class xVec3 end; // r1+0x50
    class hkVector4 fromPos; // r1+0x40
    class hkVector4 toPos; // r1+0x30
    class hkpAllRayHitCollector hitCollector; // r1+0x70

    {
        // Range: 0x80199CC8 -> 0x80199DB0
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x80199CC8 -> 0x80199DB0
            // Local variables
            int j; // r25
            class xVec3 targetPos; // r1+0x1C
            class xEnt * ent; // r26
            class xBase * base; // r0
        }
    }

    // References
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__21hkpAllRayHitCollector;
    // -> static float AUTOTARGET_DIST_THRESHOLD;
}
// signature: zWallePlayer::HeadTrackingEntUpdate(float)
// Range: 0x8019A110 -> 0x8019A38C
void zWallePlayer::HeadTrackingEntUpdate(class zWallePlayer * this /* r31 */) {
    // Local variables
    class xMat4x3 matrixJ; // r1+0x30
    class xVec3 startPos; // r1+0x20
    int numNPCs; // r27
    float bestMatch; // f29

    {
        // Range: 0x8019A1D0 -> 0x8019A328
        // Local variables
        int i; // r26

        {
            // Range: 0x8019A1D0 -> 0x8019A328
            // Local variables
            float dist; // f0
            class xVec3 vecToTarget; // r1+0x8
            class xVec3 targetPos; // r1+0x14
            class xEnt * ent; // r29
            class zNPCBase * base; // r4

            {
                // Range: 0x8019A1D8 -> 0x8019A328
                // Local variables
                float facing; // f0

                {
                    // Range: 0x8019A1D8 -> 0x8019A328
                    // Local variables
                    float myVal; // f24
                }
            }
        }
    }
}
// Range: 0x8019A410 -> 0x8019A534
void zWallePlayer::HeadTrackingLookAtUpdate(class zWallePlayer * this /* r30 */) {
    {
        // Range: 0x8019A45C -> 0x8019A51C
        // Local variables
        class xVec3 pos; // r1+0x14
        bool blendToNewLookAt; // r31
    }
}
// signature: zWallePlayer::SetPlayerTransform(const xMat4x3 *, const xVec3 *, const float *)
// Range: 0x8019A540 -> 0x8019A91C
void zWallePlayer::SetPlayerTransform(class zWallePlayer * this /* r30 */, class xMat4x3 * newTransform /* r31 */) {
    // Local variables
    class hkVector4 zeroVel; // r1+0x50

    {
        // Range: 0x8019A850 -> 0x8019A900
        // Local variables
        class hkQuaternion hk_orientation; // r1+0x20
        class hkVector4 hk_pos_rigidBody; // r1+0x30
        class xQuat quat; // r1+0x40
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8019A920 -> 0x8019AB74
void zWallePlayer::AimingControl(class zWallePlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec2 stick0; // r1+0x38
}
// Range: 0x8019AB80 -> 0x8019B47C
void zWallePlayer::AimingControl(class zWallePlayer * this /* r30 */, float x /* f27 */, float z /* f28 */, float dt /* f29 */) {
    // Local variables
    float stickMagnitude; // f31
    float moveAimWeight; // f30
    float camAngle; // r1+0x8
    class xVec3 camRelInputVec; // r1+0x3C
    float diffangle; // f10
    float playerNormXZ; // f0
    class xVec3 playerForwardXZ; // r1+0x24
    class xVec3 playerRightXZ; // r1+0x18
    float moveDotForward; // f0
    float moveDotRight; // f0
    float stickAngle; // f10
    float twistAngleGoal; // f3
    float * AimBlends; // r0
    float turnDelta; // f1
    class xMat4x3 camMat; // r1+0x88

    {
        // Range: 0x8019AFD0 -> 0x8019B058
        // Local variables
        class xVec3 moveDelta; // r1+0x30
    }
}
// Range: 0x8019B480 -> 0x8019B944
void zWallePlayer::CheatControl(class zWallePlayer * this /* r31 */, float x /* f29 */, float z /* f30 */, float dt /* f31 */) {
    // Local variables
    class xMat4x3 camMat; // r1+0x50
    class xVec3 forwardV; // r1+0x14
    float len; // f0
    unsigned int turbo; // r0
    float cheatBoost; // f6
    class xVec3 velDir; // r1+0x8
    float mag; // f0

    {
        // Range: 0x8019B848 -> 0x8019B8FC
        // Local variables
        class xMat3x3 goalMat; // r1+0x20
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
}
// signature: zWallePlayer::BoxformControl(const float, const float, const xVec3, float)
// Range: 0x8019B950 -> 0x8019C464
void zWallePlayer::BoxformControl(class zWallePlayer * this /* r28 */, float stickNormMag /* f27 */, class xVec3 * camRelInputVec /* r24 */, float dt /* f26 */) {
    {
        // Range: 0x8019B9C0 -> 0x8019C304
        // Local variables
        class hkVector4 hkAt; // r1+0x70
        class hkVector4 hkUp; // r1+0x80
        class hkVector4 hkRight; // r1+0x90
        float dotProduct; // f0
        class xVec3 desiredVelXZ; // r1+0xD8
        float maxRunSpeed; // f27
        class xVec3 currentVelXZ; // r1+0xE4
        class hkVector4 hkdesiredDir; // r1+0xF0
        class xVec3 right; // r1+0x100
        int boxFormTumbleIsColliding; // r30
        class xVec3 up; // r1+0x130
        class xVec3 floorNormal; // r1+0x13C
        int numConstraints; // r0
        class xVec3 desiredDir; // r1+0x148
        class hkpRigidBodyCinfo tempInfo; // r1+0x160

        {
            // Range: 0x8019BA30 -> 0x8019BB9C
            // Local variables
            int c; // r29

            {
                // Range: 0x8019BA30 -> 0x8019BB9C
                // Local variables
                class hkpConstraintInstance * constraint; // r0

                {
                    // Range: 0x8019BA30 -> 0x8019BB9C
                    // Local variables
                    class hkpSimpleContactConstraintData * contactData; // r0

                    {
                        // Range: 0x8019BA30 -> 0x8019BB78
                        // Local variables
                        int i; // r6

                        {
                            // Range: 0x8019BA30 -> 0x8019BB78
                            // Local variables
                            class xVec3 pointNormal; // r1+0x10C
                            class hkVector4 hkNormal; // r1+0x120
                        }
                    }
                }
            }
        }
        {
            // Range: 0x8019BC58 -> 0x8019BCB4
            // Local variables
            float newControlMultiplier; // f0
        }
        {
            // Range: 0x8019BD80 -> 0x8019BFC4
            // Local variables
            class hkVector4 hkAppliedForce; // r1+0xB0
            class xVec3 newDesiredVelXZ; // r1+0xC0
            class xVec3 currentVelRight; // r1+0xCC
        }
        {
            // Range: 0x8019BFC4 -> 0x8019C020
            // Local variables
            class hkVector4 hkAppliedForce; // r1+0xA0
        }
        {
            // Range: 0x8019C240 -> 0x8019C304
            // Local variables
            class xVec3 angVelocityDirection; // r1+0x60
        }
    }
    {
        // Range: 0x8019C308 -> 0x8019C3A8
        // Local variables
        float originalYVelocity; // f0
        class hkVector4 tempVelocity; // r1+0x50
    }

    // References
    // -> static float BOXJUMP_XZDAMPING;
    // -> class xVec3 g_Y3;
    // -> class xVec3 m_UnitAxisY;
}
// signature: zWallePlayer::UpdateLean(float, float, float)
// Range: 0x8019C470 -> 0x8019C5D4
void zWallePlayer::UpdateLean() {
    // Local variables
    float blendDiff; // f5
}
// signature: zWallePlayer::StorkJumpControl(float)
// Range: 0x8019C5E0 -> 0x8019C764
void zWallePlayer::StorkJumpControl() {
}
// Range: 0x8019C770 -> 0x8019CDFC
void zWallePlayer::StorkJumpControl(class zWallePlayer * this /* r31 */, float x /* f27 */, float z /* f29 */, float dt /* f28 */) {
    // Local variables
    float stickMag; // f30
    float stickNormMag; // f0
    class xVec3 camRelInputVec; // r1+0x74
    float playerNormXZ; // f0
    class xVec3 playerForwardXZ; // r1+0x68
    class xVec3 playerRightXZ; // r1+0x5C

    {
        // Range: 0x8019CB6C -> 0x8019CD88
        // Local variables
        float leanAmount; // f6
        float rightProject; // f29
        float forwardProject; // f0
    }
}
// Range: 0x8019CE00 -> 0x8019D808
void zWallePlayer::TreadFormControl(class zWallePlayer * this /* r29 */, float stickMag /* f24 */, float stickNormMag /* f25 */, class xVec3 * camRelInputVec /* r27 */, float dt /* f26 */) {
    // Local variables
    float playerNormXZ; // f0
    class xVec3 playerForwardXZ; // r1+0xA4
    class xVec3 playerRightXZ; // r1+0x98

    {
        // Range: 0x8019CEFC -> 0x8019D6EC
        // Local variables
        float rightProject; // f28
        float forwardProject; // f29

        {
            // Range: 0x8019CFD0 -> 0x8019D634
            // Local variables
            float upHillMovementComponent; // f0
            float blendDist; // f0
            class xVec3 blendVec; // r1+0x5C
            class xVec3 pOldUpHill; // r1+0x68
            class xVec3 upHillVec; // r1+0x80
            float slopeControlDampDest; // f0
            float slopeDot; // f27
            class xVec3 moveDelta; // r1+0x8C

            {
                // Range: 0x8019D118 -> 0x8019D314
                // Local variables
                class xVec3 sideSurfaceTempVec; // r1+0x74
            }
        }
        {
            // Range: 0x8019D65C -> 0x8019D6D4
            // Local variables
            float blendTo; // f0
            float targetVal; // f23
        }
    }
    {
        // Range: 0x8019D718 -> 0x8019D790
        // Local variables
        float blendTo; // f0
        float targetVal; // f23
    }

    // References
    // -> float MOVE_SPEED;
    // -> static float MIN_SLOPE_CLAMP;
    // -> static float MAX_SLOPE_CLAMP;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x8019D810 -> 0x8019DB88
void zWallePlayer::UpdateAimLeans(class zWallePlayer * this /* r30 */, float dt /* f29 */) {
    // Local variables
    float * AimBlends; // r0
    class xVec3 vectorToTarget; // r1+0x14
    class xVec3 projectedVectorToTarget; // r1+0x8
    float projectTargetUp; // f0
    float projectTargetAt; // f0
    float projectTargetRight; // f0
    float targetVal; // f26
    float blendTo; // f0
}
// Range: 0x8019DB90 -> 0x8019DECC
void zWallePlayer::FirstPersonControl(class zWallePlayer * this /* r31 */, float x /* f30 */, float z /* f1 */, float dt /* f31 */) {
    // Local variables
    class zCamFirstPerson * cfps; // r6
    float c; // f0
    float xRot; // f1
    float stickMag; // f0
    float stickNormMag; // f0
}
// signature: zWallePlayer::ChevronBoostControl(const float, const float, const xVec3, float)
// Range: 0x8019DED0 -> 0x8019E308
void zWallePlayer::ChevronBoostControl(class zWallePlayer * this /* r30 */, class xVec3 * camRelInputVec /* r31 */, float dt /* f30 */) {
    // Local variables
    class xVec3 curVelNorm; // r1+0x80
    float curSpeed; // f0

    {
        // Range: 0x8019E060 -> 0x8019E2C0
        // Local variables
        class xVec3 curVel; // r1+0x68
        float rightProject; // f0
        class xVec3 turnForce; // r1+0x74
    }

    // References
    // -> float MOVE_SPEED;
}
// Range: 0x8019E310 -> 0x8019E850
void zWallePlayer::RelativeControl(class zWallePlayer * this /* r31 */, float x /* f27 */, float z /* f28 */, float dt /* f29 */) {
    // Local variables
    float stickMag; // f31
    float stickNormMag; // f30
    class xVec3 camRelInputVec; // r1+0x38
}
// signature: zWallePlayer::AbsControl(float, float, float)
// Range: 0x8019E850 -> 0x8019E860
void zWallePlayer::AbsControl() {
}
// signature: zWallePlayer::SetUpgrade(zCommonPlayerUpgradeType, zCommonPlayerUpgradeLevel)
// Range: 0x8019E860 -> 0x8019E864
void zWallePlayer::SetUpgrade() {
}
// Range: 0x8019E870 -> 0x8019F5AC
void zWallePlayer::HandleEvent(class zWallePlayer * this /* r27 */, class xBase * from /* r28 */, unsigned int toEvent /* r29 */, class EventAny * genericParams /* r30 */) {
    {
        // Range: 0x8019EAE4 -> 0x8019EBB8
        // Local variables
        class xBase * toParamWidgetPtr; // r3
        class EventActionCompactTrashStart * params; // r0
    }
    {
        // Range: 0x8019EBC8 -> 0x8019EF04
        // Local variables
        class xVec3 chevronDir; // r1+0xF0
        class zDirection * dir; // r31
        class xBase * dirWidgetPtr; // r3
        class EventActionDirectedChevronBoost * params; // r0

        {
            // Range: 0x8019EC78 -> 0x8019EDB4
            // Local variables
            class hkVector4 speed; // r1+0xD0
            class hkVector4 heading; // r1+0xE0
        }
    }
    {
        // Range: 0x8019EF04 -> 0x8019EF3C
        // Local variables
        class EventActionSetPlayerAsPhysicsObject * params; // r0
    }
    {
        // Range: 0x8019EF3C -> 0x8019EF78
        // Local variables
        class EventActionUnSetPlayerAsPhysicsObject * params; // r0
    }
    {
        // Range: 0x8019EF84 -> 0x8019EFA8
        // Local variables
        class EventActionContextSwitchLever * params; // r0
    }
    {
        // Range: 0x8019F198 -> 0x8019F324
        // Local variables
        class zPlayerFall * fall; // r0
        int isStaticCamera; // r0
        int disableCamReset; // r24
        class zDirection * direction; // r31
        class xBase * toParamWidgetPtr; // reg65535
        class EventActionSetPlayerPosition * params; // r0

        {
            // Range: 0x8019F258 -> 0x8019F30C
            // Local variables
            float angle; // r1+0x10
            class xVec3 upVec; // r1+0xBC
            class xMat4x3 newMat; // r1+0x100
        }
    }
    {
        // Range: 0x8019F328 -> 0x8019F34C
        // Local variables
        class EventActionGiveHealthOverTime * params; // r0
    }
    {
        // Range: 0x8019F524 -> 0x8019F52C
        // Local variables
        int i; // r24
    }

    // References
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_Null;
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x8019F5B0 -> 0x8019F624
void zWallePlayer::Rumble(class zWallePlayer * this /* r30 */, unsigned int rumbleType /* r31 */) {
    // References
    // -> class compositeEffect rumbleEffects[1];
}
// Range: 0x8019F630 -> 0x8019F698
void zWallePlayer::TurnedOnCheatMode(class zWallePlayer * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// Range: 0x8019F6A0 -> 0x8019F718
void zWallePlayer::SetupFirstPersonCam() {
}
// Range: 0x8019F720 -> 0x8019F8BC
void zWallePlayer::SetInCube(class zWallePlayer * this /* r31 */) {
}
// Range: 0x8019F8C0 -> 0x8019FC78
void zWallePlayer::SetJumpLinearVelocity(class zWallePlayer * this /* r31 */) {
    // Local variables
    class hkVector4 tempVec; // r1+0x40
    float tempVecLength; // f0
    float height; // f1
    int tryingToMove; // r0
    class xVec3 tempVec3; // r1+0x30
    float tempVecLengthXZ; // f0
    float velocity; // f28
}
// Range: 0x8019FC80 -> 0x8019FE4C
void zWallePlayer::SetAngularVelocity(class zWallePlayer * this /* r26 */) {
    // Local variables
    float magAngVel; // f8
    class xVec3 rightVec; // r1+0x20

    // References
    // -> float hkInfinity;
}
// Range: 0x8019FE50 -> 0x801A016C
void zWallePlayer::SetOutofCube(class zWallePlayer * this /* r31 */) {
    // Local variables
    class xVec3 impartedVel; // r1+0x34
    float length; // f0

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zWallePlayer::SetEveGasTank(float)
// Range: 0x801A0170 -> 0x801A01B8
void zWallePlayer::SetEveGasTank(class zWallePlayer * this /* r31 */) {
}
// Range: 0x801A01C0 -> 0x801A01F8
void zWallePlayer::ResetEveGasTank(class zWallePlayer * this /* r31 */) {
}
// Range: 0x801A0200 -> 0x801A026C
bool zWallePlayer::ShouldGiveThrust(class zWallePlayer * this /* r30 */) {
}
// signature: zWallePlayer::SetCarryingGun(bool)
// Range: 0x801A0270 -> 0x801A02AC
void zWallePlayer::SetCarryingGun() {
}
// signature: zWallePlayer::ShowGun(bool)
// Range: 0x801A02B0 -> 0x801A02F8
void zWallePlayer::ShowGun() {
}
// Range: 0x801A0300 -> 0x801A0308
bool zWallePlayer::CarryingGun() {
}
// Range: 0x801A0310 -> 0x801A039C
bool zWallePlayer::UpgradedGun() {
    {
        // Range: 0x801A031C -> 0x801A0380
        // Local variables
        int i; // r6
    }
}
// Range: 0x801A03A0 -> 0x801A0460
void zWallePlayer::SetNPCEve(class zNPCEve * e /* r30 */) {
    {
        // Range: 0x801A042C -> 0x801A0430
        // Local variables
        int j; // r30
    }

    // References
    // -> class zWalleCheats gWalleCheats;
}
// signature: zWallePlayer::SetOverheadHammer(bool)
// Range: 0x801A0460 -> 0x801A049C
void zWallePlayer::SetOverheadHammer() {
}
// signature: zWallePlayer::ShowOverheadHammer(bool)
// Range: 0x801A04A0 -> 0x801A04E8
void zWallePlayer::ShowOverheadHammer() {
}
// Range: 0x801A04F0 -> 0x801A0598
void zWallePlayer::ResetOverheadHammerMatrix() {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x801A05A0 -> 0x801A07EC
void zWallePlayer::UpdateOverheadHammerMatrix(class zWallePlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x801A05C0 -> 0x801A0738
        // Local variables
        class xQuat rotation; // r1+0x8
        float limit; // f2
        float angle; // f0
        class xQuat newQuat; // r1+0x18
        class xQuat oldQuat; // r1+0x28
        class xVec3 angles; // r1+0x38
        class xMat4x3 mat; // r1+0x48
        class hkRotation * rot; // r0
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zWallePlayer::SetFlameThrower(bool)
// Range: 0x801A07F0 -> 0x801A082C
void zWallePlayer::SetFlameThrower() {
}
// signature: zWallePlayer::SetShield(bool)
// Range: 0x801A0830 -> 0x801A086C
void zWallePlayer::SetShield() {
}
// Range: 0x801A0870 -> 0x801A087C
class xHierarchyBoundInitData * zWallePlayer::GetHierarchyBoundInitData() const {
    // References
    // -> static class xHierarchyBoundInitData bounds[4];
}
// Range: 0x801A0880 -> 0x801A088C
float zWallePlayer::GetHierarchyMasterRadius() const {
}
// Range: 0x801A0890 -> 0x801A0894
void zWallePlayer::LoadUpgrades() {
}
// Range: 0x801A08A0 -> 0x801A08A4
void zWallePlayer::LoadSetupUpgrades() {
}
// Range: 0x801A08B0 -> 0x801A08B4
void zWallePlayer::SetupRumbles() {
}
// Range: 0x801A08C0 -> 0x801A0944
void zWallePlayer::UpgradeWeapon(class zWallePlayer * this /* r29 */) {
    // Local variables
    class zNPCBase * slaveNPC; // r0

    {
        // Range: 0x801A08D8 -> 0x801A08E4
        // Local variables
        int i; // r30
    }
}
// Range: 0x801A0950 -> 0x801A0EA0
void zWallePlayer::ShootGun(class zWallePlayer * this /* r29 */) {
    // Local variables
    class zLaser * l; // r31
    class xVec3 * targetDir; // r30

    {
        // Range: 0x801A09B8 -> 0x801A0A00
        // Local variables
        int i; // r6
    }
    {
        // Range: 0x801A0B14 -> 0x801A0C08
        // Local variables
        class xVec3 autoTargetCubeDir; // r1+0x24
    }
    {
        // Range: 0x801A0C1C -> 0x801A0E5C
        // Local variables
        bool targetObtained; // r0
        class xVec3 targetDirection; // r1+0x18
        float toHitDistance; // r1+0x8

        {
            // Range: 0x801A0C98 -> 0x801A0E5C
            // Local variables
            float angleCurrentMax; // f29
            float speed; // f0
            float dAngle; // f0

            {
                // Range: 0x801A0DD8 -> 0x801A0E5C
                // Local variables
                float arbitraryMaxSpeed; // f0
            }
        }
    }

    // References
    // -> class zGlobals globals;
    // -> static float angleStopped;
    // -> static float angleFullSpeed;
    // -> static class zProjectileManager gProjectileManager;
    // -> float laserHoldTimer;
    // -> float laserPressTimer;
}
// signature: zWallePlayer::Damage(const zCombatDamageInfo &)
// Range: 0x801A0EA0 -> 0x801A1064
bool zWallePlayer::Damage(class zWallePlayer * this /* r31 */) {
    // Local variables
    bool damaged; // r3
}
// Range: 0x801A1070 -> 0x801A10CC
void zWallePlayer::StunValueReset() {
}
// Range: 0x801A10D0 -> 0x801A11B0
void zWallePlayer::GatherJunkPieces(class zWallePlayer * this /* r27 */) {
    {
        // Range: 0x801A10EC -> 0x801A1198
        // Local variables
        class zPOWGroup * pGroup; // r0
    }
}
// signature: zWallePlayer::TreadFXUpdateSurface(float)
// Range: 0x801A11B0 -> 0x801A187C
void zWallePlayer::TreadFXUpdateSurface(class zWallePlayer * this /* r30 */) {
    // Local variables
    unsigned int cur; // r5

    {
        // Range: 0x801A11E0 -> 0x801A17E8
        // Local variables
        class xMat4x3 mat; // r1+0x198
    }
}
// Range: 0x801A1880 -> 0x801A1C94
void zWallePlayer::BeforeAnimMatrices(class zWallePlayer * this /* r29 */, class xAnimPlay * play /* r21 */, class xQuat * quat /* r30 */, class xVec3 * scale /* r22 */, class xVec3 * tran /* r31 */, int boneCount /* r23 */) {
    {
        // Range: 0x801A1914 -> 0x801A19D8
        // Local variables
        class xQuat mulQuat; // r1+0x48
        float fracRemain; // f31
    }
    {
        // Range: 0x801A1AC8 -> 0x801A1BB8
        // Local variables
        class xMat3x3 rotation; // r1+0x58
        class xVec3 offset; // r1+0x28
        class xQuat rot; // r1+0x38
    }
    {
        // Range: 0x801A1BB8 -> 0x801A1BF4
        // Local variables
        class xQuat shieldRot; // r1+0x18
    }
    {
        // Range: 0x801A1BF8 -> 0x801A1C40
        // Local variables
        class xQuat hammerRot; // r1+0x8
    }

    // References
    // -> class zGlobals globals;
}
// signature: TreadPointCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x801A1CA0 -> 0x801A1D14
void TreadPointCollector::addRayHit() {
}
// Range: 0x801A1D20 -> 0x801A2CB0
void zWallePlayer::Update_TreadOrientation(class zWallePlayer * this /* r15 */, float dt /* f23 */) {
    // Local variables
    class xMat4x3 * playerFrame; // r0
    class xVec3 * pos; // r0
    class xVec3 treadRayOffsets[2][4]; // r1+0x320
    float castLength; // f4
    class TreadPointCollector collector; // r1+0x2B0
    class hkpWorldRayCastInput input; // r1+0x280
    class xVec3 results[4]; // r1+0x250
    float heights[4]; // r1+0x198

    {
        // Range: 0x801A1EB4 -> 0x801A2B90
        // Local variables
        int treadIndex; // r19

        {
            // Range: 0x801A1EB4 -> 0x801A2B90
            // Local variables
            float deltaPos; // f1
            float castDistance; // f3
            class xVec3 backLineProject; // r1+0x170
            class xVec3 frontLineProject; // r1+0x17C
            float shallowestSlope; // f24
            float highestHeight; // f14
            int highestYIndex; // r18

            {
                // Range: 0x801A1F64 -> 0x801A1F64
                // Local variables
                int castIndex; // r17

                {
                    // Range: 0x801A1F64 -> 0x801A1F64
                    // Local variables
                    class xVec3 to; // r1+0x188
                    class xVec3 * point; // r16
                }
            }
            {
                // Range: 0x801A1F64 -> 0x801A1F70
                // Local variables
                float blendAmount; // f0
                float diffBlendAngle; // f0
                class Quaternion targetQuat; // r1+0x140
                class Quaternion fromQuat; // r1+0x150
                class Quaternion toQuat; // r1+0x160
            }
            {
                // Range: 0x801A1F70 -> 0x801A1F98
                // Local variables
                class xMat4x3 offsetUp; // r1+0x210
                float currentAngle; // f14
            }
            {
                // Range: 0x801A1FD0 -> 0x801A2B80
                // Local variables
                class xMat4x3 tmpMat; // r1+0x1D0
            }
        }
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisX;
    // -> struct {} __vt__19TreadPointCollector;
}
// Range: 0x801A2D00 -> 0x801A2EAC
void zWallePlayer::AfterAnimMatrices(class zWallePlayer * this /* r23 */, class xAnimPlay * play /* r24 */, class Matrix43 * skinMat /* r25 */, class xQuat * quatresult /* r26 */, class xVec3 * scaleresult /* r27 */, class xVec3 * tranresult /* r28 */, int boneCount /* r29 */) {
    {
        // Range: 0x801A2D4C -> 0x801A2DC0
        // Local variables
        int i; // r30

        {
            // Range: 0x801A2D4C -> 0x801A2DC0
            // Local variables
            class Matrix43 transformMat; // r1+0x38
        }
    }
    {
        // Range: 0x801A2DD4 -> 0x801A2E48
        // Local variables
        int i; // r30

        {
            // Range: 0x801A2DD4 -> 0x801A2E48
            // Local variables
            class Matrix43 transformMat; // r1+0x8
        }
    }
}
// signature: zWallePlayer::ProceduralTreadsUpdateGears(xAnimPlay *, xQuat *, xVec3 *, xVec3 *, int)
// Range: 0x801A2EB0 -> 0x801A31AC
void zWallePlayer::ProceduralTreadsUpdateGears(class zWallePlayer * this /* r28 */, class xQuat * quat /* r29 */) {
    // Local variables
    class xQuat tQuat; // r1+0x8

    {
        // Range: 0x801A2EC4 -> 0x801A2FAC
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801A2FC0 -> 0x801A3084
        // Local variables
        int i; // r0
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_NegUnitAxisZ;
}
// Range: 0x801A31B0 -> 0x801A33A0
void zWallePlayer::ProceduralTreadsUpdateTrack(class Matrix43 * skinMat /* r27 */, int startBone /* r28 */, int numTreadBones /* r29 */, float blendValue /* f31 */) {
    // Local variables
    class Quaternion quatResult; // r1+0xD8
    class Quaternion quatFrom; // r1+0xC8
    class Quaternion quatTo; // r1+0xB8
    class Vector posResult; // r1+0xA8
    class Vector posFrom; // r1+0x98
    class Vector posTo; // r1+0x88
    class Matrix43 firstMat; // r1+0xE8
    int treadID; // reg65535
}
// Range: 0x801A38E0 -> 0x801A39EC
void zWallePlayer::ProceduralTreadsAfterAnimMatrices(class zWallePlayer * this /* r30 */, class Matrix43 * skinMat /* r31 */) {
    // Local variables
    float leftIncrease; // f1
    float rightIncrease; // f1
}
// signature: zWallePlayer::Update_FX(float)
// Range: 0x801A39F0 -> 0x801A3C5C
void zWallePlayer::Update_FX(class zWallePlayer * this /* r31 */) {
    // Local variables
    unsigned int curDecal; // r7

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801A3C60 -> 0x801A3C6C
float zWallePlayer::GetCapsuleHeight() {
}
// Range: 0x801A3C70 -> 0x801A3C84
float zWallePlayer::GetRigidBodyHeight() {
}
// Range: 0x801A3C90 -> 0x801A3CA8
void zWallePlayer::HitLaunchOnGround() {
}
// Range: 0x801A3CB0 -> 0x801A3D64
class xVec3 zWallePlayer::GetPositionToTarget() {
    {
        // Range: 0x801A3CC0 -> 0x801A3D18
        // Local variables
        class xVec3 positionVec3; // r1+0x1C
        class hkVector4 position; // r1+0x30
    }
    {
        // Range: 0x801A3D18 -> 0x801A3D58
        // Local variables
        class xVec3 temp; // r1+0x10
    }
}
// Range: 0x801A3D70 -> 0x801A3EB0
void zWallePlayer::SetRigidBodyCollision(class zWallePlayer * this /* r28 */, class hkpRigidBody * newRigidBody /* r29 */) {
}
// Range: 0x801A3EB0 -> 0x801A3EB8
bool zWallePlayer::IsJumping() const {
}
// signature: zWallePlayer::SetBoxBouncesRequired(int, bool)
// Range: 0x801A3EC0 -> 0x801A3EDC
void zWallePlayer::SetBoxBouncesRequired() {
}
// Range: 0x801A3EE0 -> 0x801A46EC
class xVec3 zWallePlayer::GetAutoTargetCubeDir() {
    // Local variables
    class xVec3 targetDir; // r1+0x134
    class zProjectile * targetedProjectile; // r0
    int i; // r7
    class zLaser * l; // r30
    class xVec3 laserStartPos; // r1+0x128

    {
        // Range: 0x801A40D0 -> 0x801A4634
        // Local variables
        void * tempVoid; // r1+0x10
        float hkContactDistance; // r1+0x14
        class hkVector4 hkContactPos; // r1+0x80
        class hkVector4 hkAimedPos; // r1+0x90
        class hkVector4 hkCurrentPos; // r1+0xA0
        class xVec3 predTargetPos; // r1+0xD4
        class xVec3 down_2; // r1+0xE0
        float timeToImpact; // f6
        float distance2; // f0
        class xVec3 aimedPos; // r1+0xEC
        class xVec3 deltaPos; // r1+0xF8
        int iter; // r29
        float gravity; // f5
        class xVec3 currentTargetedObjectPos; // r1+0x104
        class xVec3 rbVel; // r1+0x110
        class xVec3 rbPos; // r1+0x11C

        {
            // Range: 0x801A4170 -> 0x801A4180
            // Local variables
            class xVec3 scaledDown_2; // r1+0xB0
            class xVec3 scaledVel; // r1+0xBC
            class xVec3 laserToAimed; // r1+0xC8
        }
        {
            // Range: 0x801A445C -> 0x801A445C
            // Local variables
            class hkMonitorStream * mStream; // r0

            {
                // Range: 0x801A445C -> 0x801A445C
                // Local variables
                class TimerCommand * h; // r0
            }
        }
        {
            // Range: 0x801A44DC -> 0x801A44DC
            // Local variables
            class hkMonitorStream * mStream; // r0

            {
                // Range: 0x801A44DC -> 0x801A44DC
                // Local variables
                class TimerCommand * h; // r0
            }
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> static class zProjectileManager gProjectileManager;
}
// signature: zWalleCubeLOSChecker::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x801D9CB0 -> 0x801D9D9C
void zWalleCubeLOSChecker::addRayHit() {
    // Local variables
    class hkpWorldObject * worldObject; // r0
    class xBase * base; // r8
}
// signature: zWallePlayer::CheckTargetLOS(const xVec3 &, const xBase *, const xVec3 &)
// Range: 0x801A46F0 -> 0x801A4850
bool zWallePlayer::CheckTargetLOS() {
    // Local variables
    class zWalleCubeLOSChecker losChecker; // r1+0x30

    {
        // Range: 0x801A4718 -> 0x801A4718
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x801A4718 -> 0x801A4718
            // Local variables
            class TimerCommand * h; // r0
        }
    }
    {
        // Range: 0x801A47DC -> 0x801A47DC
        // Local variables
        class hkMonitorStream * mStream; // r0

        {
            // Range: 0x801A47DC -> 0x801A47DC
            // Local variables
            class TimerCommand * h; // r0
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__20zWalleCubeLOSChecker;
}
// signature: zWallePlayer::NotifyExitedPhantomTrig(TriggerPhantom *)
// Range: 0x801A4890 -> 0x801A48A0
void zWallePlayer::NotifyExitedPhantomTrig() {
}
