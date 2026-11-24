/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zRussellPlayer.cpp
*/
// signature: zRussellPlayer::Init(Sext::xEntAsset *)
// Range: 0x8022AAD0 -> 0x8022ADCC
void zRussellPlayer::Init(class zRussellPlayer * this /* r31 */) {
    // References
    // -> float HP_START;
}
// Range: 0x8022ADD0 -> 0x8022BB40
void zRussellPlayer::InitActions(class zRussellPlayer * this /* r31 */) {
}
// Range: 0x8022C010 -> 0x8022C3BC
void zRussellPlayer::ParseIni(class zRussellPlayer * this /* r31 */) {
    // Local variables
    float DEFAULT_SPEED_NORMAL[6]; // r1+0x38
    float DEFAULT_SPEED_JUMP[6]; // r1+0x20
    float DEFAULT_ANIM_WALK[3]; // r1+0x14
    float DEFAULT_ANIM_RUN[3]; // r1+0x8
}
// Range: 0x8022C3C0 -> 0x8022C550
void zRussellPlayer::SceneSetup(class zRussellPlayer * this /* r31 */) {
    {
        // Range: 0x8022C3DC -> 0x8022C44C
        // Local variables
        int x; // r27
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8022C550 -> 0x8022C7B4
void zRussellPlayer::Reset(class zRussellPlayer * this /* r31 */) {
    {
        // Range: 0x8022C578 -> 0x8022C5B4
        // Local variables
        class hkVector4 hk_pos; // r1+0x30
    }
    {
        // Range: 0x8022C5D8 -> 0x8022C644
        // Local variables
        int x; // r8
    }

    // References
    // -> class Scene * primaryScene;
    // -> class xGlobals * xglobals;
}
// Range: 0x8022C7C0 -> 0x8022C8BC
void zRussellPlayer::ShowPlayer(class zRussellPlayer * this /* r30 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8022C8C0 -> 0x8022C8FC
void zRussellPlayer::ResetActionFlags(class zRussellPlayer * this /* r31 */) {
}
// signature: zRussellPlayer::DefaultBeginUpdate(float)
// Range: 0x8022C900 -> 0x8022C904
void zRussellPlayer::DefaultBeginUpdate() {
}
// Range: 0x8022C910 -> 0x8022CB60
void zRussellPlayer::BackpackUpdate(class zRussellPlayer * this /* r31 */, float dt /* f31 */) {
    {
        // Range: 0x8022C938 -> 0x8022CB3C
        // Local variables
        class Model & renderableModel; // r0
        class xQuat ourQuat; // r1+0x50
        class xMat4x3 boneMat; // r1+0x60

        {
            // Range: 0x8022C988 -> 0x8022CA98
            // Local variables
            class hkVector4 zeros; // r1+0x40

            {
                // Range: 0x8022C9E0 -> 0x8022CA8C
                // Local variables
                int i; // r27
            }
        }
    }
}
// Range: 0x8022CB60 -> 0x8022D054
void zRussellPlayer::DefaultUpdate(class zRussellPlayer * this /* r31 */, float dt /* f31 */) {
    // References
    // -> class zPlayerInventory inventory;
    // -> class zGlobals globals;
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
    // -> class zSoundWiimoteSpeaker * SoundList[18];
    // -> static class zUpWiimoteSoundHelper Instance;
    // -> class zGameCheats gGameCheats;
}
// signature: zRussellPlayer::DefaultMove(xScene *, float, xEntFrame *)
// Range: 0x8022D060 -> 0x8022D064
void zRussellPlayer::DefaultMove() {
}
// signature: zRussellPlayer::DefaultEndUpdate(float)
// Range: 0x8022D070 -> 0x8022D074
void zRussellPlayer::DefaultEndUpdate() {
}
// Range: 0x8022D080 -> 0x8022D14C
void zRussellPlayer::AbsControl(class zRussellPlayer * this /* r31 */, float x /* f29 */, float z /* f30 */, float dt /* f31 */) {
}
// Range: 0x8022D150 -> 0x8022D744
void zRussellPlayer::LedgeShimmyControl(class zRussellPlayer * this /* r31 */, float x /* f30 */, float y /* f29 */, float dt /* f31 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x8022D19C -> 0x8022D2F4
        // Local variables
        class xVec3 wallDir; // r1+0xEC
        class xVec3 ledgeDir; // r1+0xF8
        float distAway; // f0
        class xVec3 movementVec; // r1+0x104
        float u; // f29
        class xVec3 ledgeClosestPoint; // r1+0x110
        class xVec3 currentPos; // r1+0x11C
    }
    {
        // Range: 0x8022D2F8 -> 0x8022D38C
        // Local variables
        class xVec3 wallDir; // r1+0xC8
        class xVec3 ledgeDir; // r1+0xD4
        float u; // f29
        class xVec3 ledgeClosestPoint; // r1+0xE0
    }
    {
        // Range: 0x8022D390 -> 0x8022D6C8
        // Local variables
        float stickMag; // f0
        class xVec3 camRelativeInput; // r1+0xBC

        {
            // Range: 0x8022D3D0 -> 0x8022D6C8
            // Local variables
            class zRussellPlayerLedgeShimmy * shimmyAction; // r0
            class zRussellPlayerLedgeShimmy * shimmy; // r0
            float speedToMove; // f29
            float dotprod; // f0
            float u; // f0
            class xVec3 wallDir; // r1+0x98
            class xVec3 ledgeDir; // r1+0xA4
            class xVec3 closestPoint; // r1+0xB0

            {
                // Range: 0x8022D4F8 -> 0x8022D6A4
                // Local variables
                class hkpAllCdBodyPairCollector collector; // r1+0x270
                class hkpCollisionInput * input; // r28
                class hkpCollidable collA; // r1+0x170
                class hkMotionState motionState; // r1+0x1C0
                class hkpCapsuleShape shape; // r1+0x130
                class hkpWorld * havokWorld; // r26
                class xVec3 nextPos; // r1+0x8C

                {
                    // Range: 0x8022D640 -> 0x8022D6A4
                    // Local variables
                    float randNum; // f1
                    float probAtThisSpeed; // f29
                    float probDiff; // f1
                    float speedFraction; // f2
                    float speedAboveMin; // f0
                }
            }
        }
    }
    {
        // Range: 0x8022D6CC -> 0x8022D710
        // Local variables
        class zRussellPlayerLedgeShimmy * tempShimmyAction; // r0
    }
}
// Range: 0x8022D7C0 -> 0x8022DF8C
void zRussellPlayer::RussellRopeControl(class zRussellPlayer * this /* r31 */, float x /* f31 */, float y /* f29 */, float dt /* f30 */) {
    // Local variables
    class xVec3 dir; // r1+0x8C
    unsigned int animFlags; // r0
    class xVec3 camRelativeInput; // r1+0x80
    float stickMag; // f31
    class xVec3 moveDirection; // r1+0x74
    class xVec3 perpendicular; // r1+0x68
    float inputAccMag; // f6
    class xVec3 playerAtXZ; // r1+0x50
    class xVec3 playerRightXZ; // r1+0x44
    float atProject; // f0
    float rightProject; // f0

    {
        // Range: 0x8022DA44 -> 0x8022DC2C
        // Local variables
        class xVec3 velPerp; // r1+0x5C
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x8022DF90 -> 0x8022DFEC
void zRussellPlayer::Exit(class zRussellPlayer * this /* r31 */) {
}
// signature: zRussellPlayer::GetInteractionTestPos(unsigned int, xVec3 &)
// Range: 0x8022DFF0 -> 0x8022E098
void zRussellPlayer::GetInteractionTestPos() {
}
// Range: 0x8022E0A0 -> 0x8022E118
void zRussellPlayer::SetupFirstPersonCam() {
}
// Range: 0x8022E120 -> 0x8022E12C
float zRussellPlayer::GetCapsuleHeight() {
}
// Range: 0x8022E130 -> 0x8022E13C
float zRussellPlayer::GetCapsuleRadius() {
}
// Range: 0x8022E140 -> 0x8022E20C
bool zRussellPlayer::SkipCharacterProxyHavokUpdate(class zRussellPlayer * this /* r30 */) {
}
// Range: 0x8022E210 -> 0x8022E73C
void zRussellPlayer::HavokSetup(class zRussellPlayer * this /* r30 */) {
    {
        // Range: 0x8022E258 -> 0x8022E60C
        // Local variables
        class hkVector4 hk_pos; // r1+0x70
        class xVec3 & pos; // r0
        class hkVector4 gravity; // r1+0x80
        class hkpCharacterProxyCinfo cpci; // r1+0xF0
        class hkVector4 v1; // r1+0x90
        class hkVector4 v0; // r1+0xA0
        float len; // f5
    }
    {
        // Range: 0x8022E60C -> 0x8022E6F8
        // Local variables
        class ModelPrototypeEntity * modelProto; // r0

        {
            // Range: 0x8022E620 -> 0x8022E6F8
            // Local variables
            class Model & model; // r29
            class CollisionMeshBlobEntity * packedPhysicsData; // r27

            {
                // Range: 0x8022E630 -> 0x8022E6F8
                // Local variables
                float mass; // f1
                class hkTransform worldTransform; // r1+0xB0
                class hkQuaternion quat; // r1+0x40
                class hkVector4 pos; // r1+0x50
                class hkVector4 scale; // r1+0x60
            }
        }
    }

    // References
    // -> double secondsPerTick;
    // -> struct {} __vt__40zUPPlayerCharacterProxyCollisionListener;
    // -> class hkTransform hkTransformIdentity;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
}
// Range: 0x8022E740 -> 0x8022EA84
void zRussellPlayer::HandleEvent(class zRussellPlayer * this /* r24 */, class xBase * from /* r25 */, unsigned int toEvent /* r26 */, class EventAny * genericParams /* r27 */) {
    {
        // Range: 0x8022E74C -> 0x8022EA5C
        // Local variables
        class zRussellPlayerIdle * idle; // r28
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x8022EA90 -> 0x8022EAA0
unsigned int zRussellPlayer::GetBehaviorSetRefHash() const {
}
// Range: 0x8022EAA0 -> 0x8022EB00
bool zRussellPlayer::InstanceIsVisible() {
    {
        // Range: 0x8022EAA4 -> 0x8022EAAC
        // Local variables
        int i; // r6
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8022EB00 -> 0x8022EB54
class zRussellPlayer * zRussellPlayer::GetInstance() {
    {
        // Range: 0x8022EB04 -> 0x8022EB0C
        // Local variables
        int i; // r6
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zRussellPlayer::UnsummonEventFired(zDirection *)
// Range: 0x8022EB60 -> 0x8022EB94
void zRussellPlayer::UnsummonEventFired() {
}
// Range: 0x8022EBA0 -> 0x8022EC3C
bool zRussellPlayer::CanPushAway(class zRussellPlayer * this /* r31 */) const {
}
// Range: 0x8022EC40 -> 0x8022EC48
bool zRussellPlayer::ForceWalk() {
}
// signature: zRussellPlayer::InBugleRangeXZ(const xEnt *) const
// Range: 0x8022EC50 -> 0x8022EDE8
bool zRussellPlayer::InBugleRangeXZ() const {
    // Local variables
    class xVec3 toEnt; // r1+0x14

    {
        // Range: 0x8022EC84 -> 0x8022EDCC
        // Local variables
        float dot; // f0
    }
}
// signature: zRussellPlayer::InBugleRangeXZ(xVec3 *)
// Range: 0x8022EDF0 -> 0x8022EF84
bool zRussellPlayer::InBugleRangeXZ() {
    // Local variables
    class xVec3 toEnt; // r1+0x14

    {
        // Range: 0x8022EE2C -> 0x8022EF68
        // Local variables
        float dot; // f0
    }
}
// Range: 0x8022EF90 -> 0x8022F060
bool zRussellPlayer::CheckForBugs(class zRussellPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    bool nearBugs; // r3
}
// signature: zRussellPlayer::GetVineAttachOffset(xVec3 &)
// Range: 0x8022F060 -> 0x8022F088
void zRussellPlayer::GetVineAttachOffset() {
}
// Range: 0x8022F090 -> 0x802302F4
void zRussellPlayer::GoToActionRussell(class zRussellPlayer * this /* r22 */) {
    // Local variables
    class ModelInstanceAsset * actionRussellModelRef; // r17

    // References
    // -> class xQuat g_IQ;
    // -> class Renderable3DTransform g_identity;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
// Range: 0x80230300 -> 0x8023035C
bool zRussellPlayer::IsInBugleAction() const {
}
// Range: 0x80230360 -> 0x802303BC
bool zRussellPlayer::IsInBugNetAction() const {
}
