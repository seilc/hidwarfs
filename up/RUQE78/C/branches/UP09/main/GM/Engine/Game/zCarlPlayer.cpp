/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCarlPlayer.cpp
*/
// signature: zCarlPlayer::Init(Sext::xEntAsset *)
// Range: 0x801203C0 -> 0x80120654
void zCarlPlayer::Init(class zCarlPlayer * this /* r31 */) {
    // Local variables
    class zCarlPlayerMelee * melee; // r0
    class zCarlPlayerCaneBug * caneBug; // r0

    // References
    // -> float HP_START;
}
// Range: 0x80120660 -> 0x80120A70
void zCarlPlayer::ShowPlayer(class zCarlPlayer * this /* r31 */) {
}
// Range: 0x80120A70 -> 0x8012153C
void zCarlPlayer::InitActions(class zCarlPlayer * this /* r31 */) {
}
// Range: 0x80122220 -> 0x80122468
void zCarlPlayer::ParseIni(class zCarlPlayer * this /* r30 */) {
    // Local variables
    float DEFAULT_SPEED_NORMAL[6]; // r1+0x38
    float DEFAULT_SPEED_JUMP[6]; // r1+0x20
    float DEFAULT_ANIM_WALK[3]; // r1+0x14
    float DEFAULT_ANIM_RUN[3]; // r1+0x8
}
// Range: 0x80122470 -> 0x80122600
void zCarlPlayer::SceneSetup(class zCarlPlayer * this /* r31 */) {
    {
        // Range: 0x8012248C -> 0x801224FC
        // Local variables
        int x; // r27
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80122620 -> 0x8012279C
void zCarlPlayer::Reset(class zCarlPlayer * this /* r31 */) {
    {
        // Range: 0x80122660 -> 0x801226A0
        // Local variables
        class hkVector4 hk_pos; // r1+0x10
    }
    {
        // Range: 0x801226DC -> 0x80122740
        // Local variables
        int x; // r8
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801227A0 -> 0x80122A08
void zCarlPlayer::DefaultUpdate(class zCarlPlayer * this /* r31 */, float dt /* f31 */) {
    // References
    // -> static class IconCache cache[16];
    // -> static int total;
}
// Range: 0x80122A10 -> 0x80122BC8
void zCarlPlayer::DefaultEndUpdate(class zCarlPlayer * this /* r30 */, float dt /* f31 */) {
    // References
    // -> unsigned int updateFrameNumber;
    // -> class AutotargetObject autotargetObjects[150];
}
// Range: 0x80122BD0 -> 0x80122D7C
void zCarlPlayer::AbsControl(class zCarlPlayer * this /* r31 */, float x /* f29 */, float z /* f30 */, float dt /* f31 */) {
    // References
    // -> class xVec3 m_UnitAxisZ;
}
// Range: 0x80122D80 -> 0x80122E1C
void zCarlPlayer::Exit(class zCarlPlayer * this /* r31 */) {
    // References
    // -> unsigned int numAutotargetObjects;
}
// signature: zCarlPlayer::GetInteractionTestPos(unsigned int, xVec3 &)
// Range: 0x80122E20 -> 0x80122F54
void zCarlPlayer::GetInteractionTestPos() {
}
// Range: 0x80122F60 -> 0x80122FD8
void zCarlPlayer::SetupFirstPersonCam() {
}
// Range: 0x80122FE0 -> 0x80122FEC
float zCarlPlayer::GetCapsuleHeight() {
}
// Range: 0x80122FF0 -> 0x80122FFC
float zCarlPlayer::GetCapsuleRadius() {
}
// signature: zCarlPlayer::SetHearingAidOn(bool)
// Range: 0x80123000 -> 0x801230C8
void zCarlPlayer::SetHearingAidOn(class zCarlPlayer * this /* r31 */) {
}
// signature: zCarlPlayer::InHearingAidRangeXZ(const xEnt *) const
// Range: 0x801230D0 -> 0x8012313C
bool zCarlPlayer::InHearingAidRangeXZ() const {
    // Local variables
    float dist2; // f0
}
// Range: 0x80123140 -> 0x80123684
void zCarlPlayer::HavokSetup(class zCarlPlayer * this /* r30 */) {
    {
        // Range: 0x80123188 -> 0x80123554
        // Local variables
        class hkVector4 hk_pos; // r1+0x70
        class xVec3 & pos; // r0
        class hkVector4 gravity; // r1+0x80
        class hkpCharacterProxyCinfo cpci; // r1+0xF0
        class hkVector4 v1; // r1+0x90
        class hkVector4 v0; // r1+0xA0
        float len; // f3
    }
    {
        // Range: 0x80123554 -> 0x80123640
        // Local variables
        class ModelPrototypeEntity * modelProto; // r0

        {
            // Range: 0x80123568 -> 0x80123640
            // Local variables
            class Model & model; // r29
            class CollisionMeshBlobEntity * packedPhysicsData; // r27

            {
                // Range: 0x80123578 -> 0x80123640
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
// Range: 0x80123690 -> 0x801239C8
void zCarlPlayer::HandleEvent(class zCarlPlayer * this /* r28 */, class xBase * from /* r29 */, unsigned int toEvent /* r30 */, class EventAny * genericParams /* r31 */) {
    {
        // Range: 0x8012369C -> 0x80123994
        // Local variables
        class zCarlPlayerIdle * idle; // r3
    }
}
// Range: 0x801239D0 -> 0x801239E0
unsigned int zCarlPlayer::GetBehaviorSetRefHash() const {
}
// signature: zCarlPlayer::SummonEventFired(bool, zDirection *)
// Range: 0x801239E0 -> 0x80123A20
void zCarlPlayer::SummonEventFired() {
}
// Range: 0x80123A20 -> 0x80123A80
bool zCarlPlayer::InstanceIsVisible() {
    {
        // Range: 0x80123A24 -> 0x80123A2C
        // Local variables
        int i; // r6
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80123A80 -> 0x80123AD4
class zCarlPlayer * zCarlPlayer::GetInstance() {
    {
        // Range: 0x80123A84 -> 0x80123A8C
        // Local variables
        int i; // r6
    }

    // References
    // -> class xGlobals * xglobals;
}
// signature: zCarlPlayer::GetVineAttachOffset(xVec3 &)
// Range: 0x80123AE0 -> 0x80123B08
void zCarlPlayer::GetVineAttachOffset() {
}
// Range: 0x80123B10 -> 0x80124D5C
void zCarlPlayer::GoToActionCarl(class zCarlPlayer * this /* r22 */) {
    // Local variables
    class ModelInstanceAsset * actionCarlModelRef; // r17

    // References
    // -> class Renderable3DTransform g_identity;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class xMat4x3 g_I3;
    // -> class WiiFastHeap wiiFastHeap;
}
