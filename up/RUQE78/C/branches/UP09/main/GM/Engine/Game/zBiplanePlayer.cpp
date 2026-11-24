/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zBiplanePlayer.cpp
*/
static class xGroup * biplaneDialogGroup[9]; // size: 0x24, address: 0x8081843C
static float multiplier; // size: 0x4, address: 0x80818460
// signature: zBiplanePlayer::Init(Sext::xEntAsset *)
// Range: 0x8009AC80 -> 0x8009B2E0
void zBiplanePlayer::Init(class zBiplanePlayer * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x8009B2E0 -> 0x8009B444
void zBiplanePlayer::SetupFlapPhysicsModel(class zBiplanePlayer * this /* r28 */, class RenderedPhysicsModel & model /* r29 */, char * uidRefName /* r31 */, enum E_HAVOK_COLLIDE_FILTER_LAYER filter /* r30 */) {
    // Local variables
    class Vector3 modelPos; // r1+0x1C
    class Vector3 modelRot; // r1+0x10
    class ModelInstanceAsset * flapModelRef; // r31
    class hkpRigidBodyCinfo cinfo; // r1+0x30
}
// Range: 0x8009B450 -> 0x8009BA0C
void zBiplanePlayer::InitActions(class zBiplanePlayer * this /* r31 */) {
    // References
    // -> struct {} __vt__25zBiplanePlayerFallToDeath;
    // -> struct {} __vt__25zBiplanePlayerFlyAndShoot;
    // -> struct {} __vt__19zBiplanePlayerCheat;
    // -> struct {} __vt__24zBiplanePlayerCustomAnim;
    // -> struct {} __vt__13zPlayerMGLose;
    // -> struct {} __vt__12zPlayerMGWin;
    // -> struct {} __vt__16zPlayerWalkStart;
    // -> struct {} __vt__17zCommonPlayerDash;
    // -> struct {} __vt__15zPlayerDefeated;
    // -> struct {} __vt__16zPlayerHitLaunch;
    // -> struct {} __vt__10zPlayerHit;
    // -> struct {} __vt__19zBiplanePlayerLedge;
    // -> struct {} __vt__16zPlayerTriggered;
    // -> struct {} __vt__18zBiplanePlayerLand;
    // -> struct {} __vt__18zPlayerFallToDeath;
    // -> struct {} __vt__18zBiplanePlayerFall;
    // -> struct {} __vt__18zBiplanePlayerJump;
    // -> struct {} __vt__11zPlayerSlip;
    // -> struct {} __vt__17zBiplanePlayerRun;
    // -> struct {} __vt__18zBiplanePlayerWalk;
    // -> struct {} __vt__15zPlayerSkidStop;
    // -> struct {} __vt__18zBiplanePlayerIdle;
}
// Range: 0x8009BDD0 -> 0x8009C018
void zBiplanePlayer::ParseIni(class zBiplanePlayer * this /* r30 */) {
    // Local variables
    float DEFAULT_SPEED_NORMAL[6]; // r1+0x38
    float DEFAULT_SPEED_JUMP[6]; // r1+0x20
    float DEFAULT_ANIM_WALK[3]; // r1+0x14
    float DEFAULT_ANIM_RUN[3]; // r1+0x8
}
// Range: 0x8009C020 -> 0x8009C4A8
void zBiplanePlayer::swapModels(class zBiplanePlayer * this /* r31 */) {
    // Local variables
    char biplaneType[64]; // r1+0x48
    char biplaneHeader[64]; // r1+0x8
    char biplaneName[96]; // r1+0x88

    {
        // Range: 0x8009C058 -> 0x8009C084
        // Local variables
        class ModelInstanceAsset * pilotModelRef; // r0
    }
    {
        // Range: 0x8009C088 -> 0x8009C0B4
        // Local variables
        class ModelInstanceAsset * pilotModelRef; // r0
    }
    {
        // Range: 0x8009C0B8 -> 0x8009C0E4
        // Local variables
        class ModelInstanceAsset * pilotModelRef; // r0
    }
    {
        // Range: 0x8009C0E8 -> 0x8009C114
        // Local variables
        class ModelInstanceAsset * pilotModelRef; // r0
    }
    {
        // Range: 0x8009C118 -> 0x8009C144
        // Local variables
        class ModelInstanceAsset * pilotModelRef; // r0
    }
    {
        // Range: 0x8009C148 -> 0x8009C174
        // Local variables
        class ModelInstanceAsset * pilotModelRef; // r0
    }
    {
        // Range: 0x8009C178 -> 0x8009C1A4
        // Local variables
        class ModelInstanceAsset * pilotModelRef; // r0
    }
    {
        // Range: 0x8009C1A8 -> 0x8009C1D4
        // Local variables
        class ModelInstanceAsset * pilotModelRef; // r0
    }
    {
        // Range: 0x8009C1D8 -> 0x8009C204
        // Local variables
        class ModelInstanceAsset * pilotModelRef; // r0
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x8009D960 -> 0x8009DA7C
void zBiplanePlayer::SceneSetup(class zBiplanePlayer * this /* r31 */) {
    // References
    // -> static class xGroup * biplaneDialogGroup[9];
    // -> static class BadgePoint * bagePointAsset;
}
// Range: 0x8009DA80 -> 0x8009DB10
void zBiplanePlayer::swapDialog() {
}
// Range: 0x8009DB30 -> 0x8009DF8C
void zBiplanePlayer::Reset(class zBiplanePlayer * this /* r31 */) {
    // Local variables
    class hkVector4 hk_pos; // r1+0x10

    {
        // Range: 0x8009DB54 -> 0x8009DBC8
        // Local variables
        class EventActionSetPlayerPosition eventParams; // r1+0x20
    }
    {
        // Range: 0x8009DE20 -> 0x8009DE54
        // Local variables
        int i; // r0
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x8009DFB0 -> 0x8009E058
void zBiplanePlayer::HidePlaneBody(class zBiplanePlayer * this /* r31 */) {
}
// Range: 0x8009E060 -> 0x8009E624
void zBiplanePlayer::UpdatePlaneBody(class zBiplanePlayer * this /* r31 */) {
    // Local variables
    class xMat4x3 playerMat; // r1+0x370
    class xVec3 flapPos; // r1+0xE8
    class xQuat flapOrient; // r1+0xD8
    class xVec3 flapOffset; // r1+0xCC
    class xVec3 finalFlapPos; // r1+0xC0
    float planeRoll; // f0
    class xQuat ailQuat; // r1+0xB0
    class hkVector4 hkFlapPos; // r1+0xA0
    class hkQuaternion hklAilOrient; // r1+0x90
    class hkRotation hkAilRot; // r1+0x340
    class hkTransform hklAilTrans; // r1+0x300
    class hkQuaternion hkrAilOrient; // r1+0x80
    class hkTransform hkrAilTrans; // r1+0x2C0
    float planePitch; // f0
    class xQuat elQuat; // r1+0x70
    class hkQuaternion hkElOrient; // r1+0x60
    class hkRotation hkElRot; // r1+0x290
    class hkTransform hkElTrans; // r1+0x250
    class xQuat rudderQuat; // r1+0x50
    class hkQuaternion hkRudderOrient; // r1+0x40
    class hkRotation hkRudderRot; // r1+0x220
    class hkTransform hkRudderTrans; // r1+0x1E0
    class xQuat propQuat; // r1+0x30
    class hkQuaternion hkPropOrient; // r1+0x20
    class hkRotation hkPropRot; // r1+0x1B0
    class hkTransform hkPropTrans; // r1+0x170
    class hkQuaternion hkFlapOrient; // r1+0x10
    class hkRotation hkFlapRot; // r1+0x140
    class hkTransform hkFlapTrans; // r1+0x100
}
// Range: 0x8009E6F0 -> 0x8009E784
void zBiplanePlayer::DefaultBeginUpdate(class zBiplanePlayer * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8009E790 -> 0x8009EC84
void zBiplanePlayer::DefaultUpdate(class zBiplanePlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class hkVector4 hk_pos; // r1+0x50
    class hkRotation hkNewRot; // r1+0x60

    {
        // Range: 0x8009EBC0 -> 0x8009EC4C
        // Local variables
        class EventActionOneInt params; // r1+0x1C
    }

    // References
    // -> class zGlobals globals;
    // -> static class xGroup * biplaneDialogGroup[9];
}
// Range: 0x8009EC90 -> 0x8009EDC4
void zBiplanePlayer::DefaultMove(class zBiplanePlayer * this /* r29 */, class xScene * s /* r30 */, float dt /* f30 */, class xEntFrame * frame /* r31 */) {
}
// signature: zBiplanePlayer::DefaultEndUpdate(float)
// Range: 0x8009EDD0 -> 0x8009EDD4
void zBiplanePlayer::DefaultEndUpdate() {
}
// signature: zBiplanePlayer::AbsControl(float, float, float)
// Range: 0x8009EDE0 -> 0x8009EDE4
void zBiplanePlayer::AbsControl() {
}
// Range: 0x8009EDF0 -> 0x8009EF24
void zBiplanePlayer::Exit(class zBiplanePlayer * this /* r30 */) {
}
// signature: zBiplanePlayer::GetInteractionTestPos(unsigned int, xVec3 &)
// Range: 0x8009EF30 -> 0x8009EF50
void zBiplanePlayer::GetInteractionTestPos() {
}
// Range: 0x8009EF60 -> 0x8009EF64
void zBiplanePlayer::SetupFirstPersonCam() {
}
// Range: 0x8009EF70 -> 0x8009EF7C
float zBiplanePlayer::GetCapsuleHeight() {
}
// signature: zBiplanePlayer::UpdateCharacterProxy(float)
// Range: 0x8009EF80 -> 0x8009EF84
void zBiplanePlayer::UpdateCharacterProxy() {
}
// signature: zBiplanePlayer::SetCurrentHitPoints(float)
// Range: 0x8009EF90 -> 0x8009F088
void zBiplanePlayer::SetCurrentHitPoints(class zBiplanePlayer * this /* r31 */) {
    // Local variables
    class EventActionOneFloat params; // r1+0x8
}
// signature: zBiplanePlayer::SetMaximumHitPoints(float)
// Range: 0x8009F090 -> 0x8009F148
void zBiplanePlayer::SetMaximumHitPoints(class zBiplanePlayer * this /* r31 */) {
    // Local variables
    class EventActionOneInt params; // r1+0x8
}
// Range: 0x8009F150 -> 0x8009F158
float zBiplanePlayer::GetCurrentHitPoints() const {
}
// Range: 0x8009F160 -> 0x8009F168
float zBiplanePlayer::GetMaximumHitPoints() const {
}
// Range: 0x8009F170 -> 0x8009F860
void zBiplanePlayer::HavokSetup(class zBiplanePlayer * this /* r30 */) {
    {
        // Range: 0x8009F1C4 -> 0x8009F674
        // Local variables
        class hkVector4 hk_pos; // r1+0x20
        class xVec3 & pos; // r0
        class hkVector4 gravity; // r1+0x30
        class hkpCharacterProxyCinfo cpci; // r1+0x90
        class hkpPropertyValue onVal; // r1+0x18
        class hkVector4 v3; // r1+0x40
        class hkVector4 v2; // r1+0x50
        float width; // f2
        class hkVector4 v1; // r1+0x60
        class hkVector4 v0; // r1+0x70
        float len; // f5
        class hkArray shapeArray; // r1+0x80
    }

    // References
    // -> struct {} __vt__45zBiplanePlayerCharacterProxyCollisionListener;
    // -> class hkTransform hkTransformIdentity;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8009F8A0 -> 0x800A02AC
void zBiplanePlayer::HandleEvent(class zBiplanePlayer * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x8009FB68 -> 0x8009FCD4
        // Local variables
        class zBiplaneCurveAsset * moveWidget; // r0
    }
    {
        // Range: 0x8009FCD8 -> 0x8009FDB0
        // Local variables
        class EventActionSpecWeapHit * swParams; // r0
    }
    {
        // Range: 0x800A0048 -> 0x800A0184
        // Local variables
        class EventActionLegacy killedByParams; // r1+0x38
    }
    {
        // Range: 0x800A0188 -> 0x800A01A8
        // Local variables
        class EventActionVector * turnTowardsParams; // r0
    }
    {
        // Range: 0x800A01AC -> 0x800A0244
        // Local variables
        class EventActionVector * collisionParams; // r0
    }

    // References
    // -> class zPlayerInventory inventory;
    // -> class zGlobals globals;
    // -> static class xGroup * biplaneDialogGroup[9];
    // -> class xVec3 m_Null;
}
// Range: 0x800A02B0 -> 0x800A0EC4
bool zBiplanePlayer::Damage(class zBiplanePlayer * this /* r27 */, class zCombatDamageInfo & damageInfo /* r28 */) {
    // Local variables
    enum eHitSource hitSource; // r30
    bool force_knockback; // r0
    float damage; // f31
    float newHitPoints; // f30
    unsigned int quarterLife; // r0
    int damageResponse; // r29
    class xVec3 knockback; // r1+0x40
    bool playerDamage; // r0

    {
        // Range: 0x800A0A8C -> 0x800A0B98
        // Local variables
        class xVec3 * entPos; // r0
        class xEnt * ent; // r0
    }
    {
        // Range: 0x800A0BC0 -> 0x800A0C18
        // Local variables
        class hkVector4 hkDamageDir; // r1+0x30
    }
    {
        // Range: 0x800A0C1C -> 0x800A0C94
        // Local variables
        class xVec3 impartVelocityVec; // r1+0x1C
    }
    {
        // Range: 0x800A0C98 -> 0x800A0E20
        // Local variables
        class xVec3 knockBackDir; // r1+0x10

        {
            // Range: 0x800A0D08 -> 0x800A0E08
            // Local variables
            float horiz; // f0
        }
    }

    // References
    // -> class xVec3 g_Y3;
    // -> static class xGroup * biplaneDialogGroup[9];
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x800A0F20 -> 0x800A126C
void zBiplanePlayer::Repair(class zBiplanePlayer * this /* r31 */, float percentage /* f30 */) {
    // Local variables
    float newHitpoints; // f31
    float quarterLife; // f30

    // References
    // -> static class xGroup * biplaneDialogGroup[9];
}
// Range: 0x800A1270 -> 0x800A1280
unsigned int zBiplanePlayer::GetBehaviorSetRefHash() const {
}
// Range: 0x800A1280 -> 0x800A1314
void zBiplanePlayer::TurnedOffCheatMode(class zBiplanePlayer * this /* r30 */) {
}
// signature: zBiplanePlayer::SwitchedToHuman(bool)
// Range: 0x800A1320 -> 0x800A1374
void zBiplanePlayer::SwitchedToHuman(class zBiplanePlayer * this /* r31 */) {
}
// signature: zBiplanePlayer::SwitchedToAI(bool)
// Range: 0x800A1380 -> 0x800A13CC
void zBiplanePlayer::SwitchedToAI(class zBiplanePlayer * this /* r31 */) {
}
// Range: 0x800A13D0 -> 0x800A15C0
int zBiplanePlayer::GetEnemyPositions(class zBiplanePlayer * this /* r30 */, class xVec3 * posArray /* r31 */) {
    // Local variables
    int numActive; // r26

    {
        // Range: 0x800A13EC -> 0x800A14A0
        // Local variables
        class zNPCBiplaneActiveArray * activeArray; // r27

        {
            // Range: 0x800A1420 -> 0x800A1464
            // Local variables
            int i; // r29
        }
    }
    {
        // Range: 0x800A14A4 -> 0x800A1580
        // Local variables
        int i; // r25
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class zGlobals globals;
}
// Range: 0x800A15E0 -> 0x800A1ED0
int zBiplanePlayer::GetEnemyScreenPositions(class zBiplanePlayer * this /* r23 */, class BiplaneTargetTypePosition * posArray /* r24 */) {
    // Local variables
    int numActive; // r27

    {
        // Range: 0x800A1618 -> 0x800A1A28
        // Local variables
        class zNPCBiplaneActiveArray * activeArray; // r26

        {
            // Range: 0x800A1648 -> 0x800A1A04
            // Local variables
            int i; // r25

            {
                // Range: 0x800A1648 -> 0x800A1A04
                // Local variables
                float distance2; // f6
                class xVec2 screenPoint; // r1+0x18
                class hkVector4 hkPlayerVec; // r1+0xA0
                class hkVector4 hkTargetVec; // r1+0xB0
                class zRayHitCollector hitCollector; // r1+0xF0
                class xMat4x3 & to; // r0
                class xVec3 fromLoc; // r1+0xC0
                class xMat3x3 from; // r1+0x2F0
                class xCamSpatialInfo fromCam; // r1+0x320

                {
                    // Range: 0x800A1654 -> 0x800A1654
                    // Local variables
                    class hkMonitorStream & mStream; // r0

                    {
                        // Range: 0x800A1654 -> 0x800A1654
                        // Local variables
                        class TimerCommand * h; // r0
                    }
                }
                {
                    // Range: 0x800A1654 -> 0x800A1654
                    // Local variables
                    class hkMonitorStream & mStream; // r0

                    {
                        // Range: 0x800A1654 -> 0x800A1654
                        // Local variables
                        class TimerCommand * h; // r0
                    }
                }
            }
        }
    }
    {
        // Range: 0x800A1A2C -> 0x800A1A64
        // Local variables
        int i; // r18

        {
            // Range: 0x800A1A2C -> 0x800A1A64
            // Local variables
            float distance2; // f6
            class xVec2 screenPoint; // r1+0x10
            class hkVector4 hkPlayerVec; // r1+0x70
            class hkVector4 hkTargetVec; // r1+0x80
            class zRayHitCollector hitCollector; // r1+0xD0
            class xMat4x3 & to; // r0
            class xVec3 fromLoc; // r1+0x90
            class xMat3x3 from; // r1+0x290
            class xCamSpatialInfo fromCam; // r1+0x2C0

            {
                // Range: 0x800A1A34 -> 0x800A1A34
                // Local variables
                class hkMonitorStream & mStream; // r0

                {
                    // Range: 0x800A1A34 -> 0x800A1A34
                    // Local variables
                    class TimerCommand * h; // r0
                }
            }
            {
                // Range: 0x800A1A34 -> 0x800A1A34
                // Local variables
                class hkMonitorStream & mStream; // r0

                {
                    // Range: 0x800A1A34 -> 0x800A1A34
                    // Local variables
                    class TimerCommand * h; // r0
                }
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__Q225zBiplanePlayerFlyAndShoot16zRayHitCollector;
    // -> class zGlobals globals;
}
// Range: 0x800A1F70 -> 0x800A23E8
void zBiplanePlayer::GetObjectScreenPositions(class zBiplanePlayer * this /* r23 */, class BiplaneTargetTypePosition * posArray /* r24 */, class xEnt * * targetArray /* r25 */, unsigned int numTargets /* r26 */) {
    {
        // Range: 0x800A1FB0 -> 0x800A2398
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x800A1FB0 -> 0x800A2398
            // Local variables
            float distance2; // f6
            class xVec2 screenPoint; // r1+0x10
            class hkVector4 hkPlayerVec; // r1+0x40
            class hkVector4 hkTargetVec; // r1+0x50
            class zRayHitCollector hitCollector; // r1+0x70
            class xMat4x3 & to; // r0
            class xVec3 fromLoc; // r1+0x60
            class xMat3x3 from; // r1+0x150
            class xCamSpatialInfo fromCam; // r1+0x180

            {
                // Range: 0x800A1FB8 -> 0x800A1FB8
                // Local variables
                class hkMonitorStream & mStream; // r0

                {
                    // Range: 0x800A1FB8 -> 0x800A1FB8
                    // Local variables
                    class TimerCommand * h; // r0
                }
            }
            {
                // Range: 0x800A1FB8 -> 0x800A1FB8
                // Local variables
                class hkMonitorStream & mStream; // r0

                {
                    // Range: 0x800A1FB8 -> 0x800A1FB8
                    // Local variables
                    class TimerCommand * h; // r0
                }
            }
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__Q225zBiplanePlayerFlyAndShoot16zRayHitCollector;
}
// signature: zBiplanePlayer::SetSpecWeapType(SpecialWeaponType)
// Range: 0x800A23F0 -> 0x800A2570
void zBiplanePlayer::SetSpecWeapType(class zBiplanePlayer * this /* r31 */) {
    {
        // Range: 0x800A2474 -> 0x800A24A8
        // Local variables
        class EventActionOneInt params; // r1+0x10
    }
    {
        // Range: 0x800A24A8 -> 0x800A24D4
        // Local variables
        class EventActionOneInt params; // r1+0xC
    }

    // References
    // -> static class xGroup * biplaneDialogGroup[9];
}
// Range: 0x800A2570 -> 0x800A2950
void zBiplanePlayer::FireSpecialWeapon(class zBiplanePlayer * this /* r31 */) {
    // Local variables
    class Vector3 modelPos; // r1+0x3C
    class Vector3 modelRot; // r1+0x30

    {
        // Range: 0x800A25F4 -> 0x800A26EC
        // Local variables
        class hkpRigidBodyCinfo cinfo; // r1+0x110
        class ModelInstanceAsset * tbModelRef; // r30
    }
    {
        // Range: 0x800A26F0 -> 0x800A2810
        // Local variables
        class hkVector4 balloonVel; // r1+0x20
        class hkpRigidBodyCinfo cinfo; // r1+0x50
        class ModelInstanceAsset * tbModelRef; // r29
    }

    // References
    // -> static class xGroup * biplaneDialogGroup[9];
}
// signature: zBiplanePlayer::SetModelType(eBiplaneModelType)
// Range: 0x800A2950 -> 0x800A2958
void zBiplanePlayer::SetModelType() {
}
// signature: zBiplanePlayer::SetJoined(bool)
// Range: 0x800A2960 -> 0x800A29F8
void zBiplanePlayer::SetJoined(class zBiplanePlayer * this /* r31 */) {
    {
        // Range: 0x800A2968 -> 0x800A29B4
        // Local variables
        class EventActionOneInt params; // r1+0x8
    }
}
// Range: 0x800A2B10 -> 0x800A2B74
void BiplaneEngineSound::Play(class BiplaneEngineSound * this /* r31 */, float value /* f31 */) {
}
// Range: 0x800A2B80 -> 0x800A2BC4
void BiplaneEngineSound::Stop(class BiplaneEngineSound * this /* r31 */) {
}
