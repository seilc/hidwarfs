/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zRussellPlayerActions.cpp
*/
static class xVec3 FinisherBoneOffset; // size: 0xC, address: 0x80782F40
static class xVec3 CANEUP_CANE_BONE_OFFSET; // size: 0xC, address: 0x80782F60
static unsigned int VARIATION_BACKPACK; // size: 0x4, address: 0x8082631C
static unsigned int VARIATION_PANTS; // size: 0x4, address: 0x80826320
static class xVec3 NET_OFFSET; // size: 0xC, address: 0x80782FA8
// Range: 0x802303C0 -> 0x80230868
void zRussellPlayerInteractionTransitions(class zPlayerActionManager * manager /* r23 */, class xAnimTable * table /* r24 */, char * fromStates /* r25 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r26 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned short priority /* r28 */, float blend /* f31 */, unsigned int flags /* r29 */, unsigned int userFlags /* r30 */) {
}
// Range: 0x80230870 -> 0x80230A34
void zRussellPlayerIdle::AddActionTransitions(class zRussellPlayerIdle * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80230A40 -> 0x80230C8C
void zRussellPlayerIdle::Reset(class zRussellPlayerIdle * this /* r31 */) {
    // References
    // -> class zGlobals globals;
}
// Range: 0x80230C90 -> 0x80230D74
void zRussellPlayerIdle::Begin(class zRussellPlayerIdle * this /* r31 */) {
}
// Range: 0x80230D80 -> 0x80230E84
void zRussellPlayerJump::AddActionTransitions(class zRussellPlayerJump * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80230E90 -> 0x80230F94
void zRussellPlayerAIJump::AddActionTransitions(class zRussellPlayerAIJump * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80230FA0 -> 0x802310A4
void zRussellPlayerFall::AddActionTransitions(class zRussellPlayerFall * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x802310B0 -> 0x80231248
void zRussellPlayerWalk::AddActionTransitions(class zRussellPlayerWalk * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zRussellPlayerRunBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x802312E0 -> 0x802313D8
void zRussellPlayerRunBeforeEnter(class xAnimState * state /* r31 */, void * object /* r30 */) {
    {
        // Range: 0x802312FC -> 0x802313C0
        // Local variables
        bool found; // r7
        class zUPPlayer * player; // r0
        unsigned int entryID; // r3

        {
            // Range: 0x8023135C -> 0x802313A4
            // Local variables
            unsigned int i; // r8
        }
    }
}
// Range: 0x802313E0 -> 0x80231564
void zRussellPlayerRun::AddStates(class zRussellPlayerRun * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80231570 -> 0x80231708
void zRussellPlayerRun::AddActionTransitions(class zRussellPlayerRun * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// Range: 0x80231710 -> 0x8023182C
void zRussellPlayerLand::AddActionTransitions(class zRussellPlayerLand * this /* r26 */, class xAnimTable * table /* r24 */) {
}
// Range: 0x80231830 -> 0x802318B8
void zRussellPlayerLeverLaunch::AddActionTransitions(class xAnimTable * table /* r31 */) {
}
// Range: 0x80231950 -> 0x802319F8
void zRussellPlayerHit::Begin(class zRussellPlayerHit * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80231A00 -> 0x80231AA8
void zRussellPlayerHitLaunch::Begin(class zRussellPlayerHitLaunch * this /* r31 */) {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80231AC0 -> 0x80231C18
void zRussellPlayerMelee::PlayWiimoteSound() {
    // References
    // -> class zGlobals globals;
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zWiimoteSpeakerController Instance;
    // -> class zSoundWiimoteSpeaker * SoundList[18];
    // -> static class zUpWiimoteSoundHelper Instance;
}
// Range: 0x80231C20 -> 0x80231D10
void zRussellPlayerMelee::AddAttacks(class zCombatAttack * attackStates /* r20 */) {
    // Local variables
    class zCombatAttack * attack; // r0
}
// Range: 0x80231D10 -> 0x80232288
void zRussellPlayerCombatFinisher::Begin(class zRussellPlayerCombatFinisher * this /* r26 */) {
    // Local variables
    unsigned int toys[2]; // r1+0x10
    class EntityHandleBase * projectileHandle; // r27
    class EventActionOneUnsignedInt params; // r1+0x8

    {
        // Range: 0x80231D54 -> 0x80232230
        // Local variables
        class zProjectileUPPlayerThrowable * projectile; // r0
        class zProjectileLaunchData projectileLaunchData; // r1+0xD8
        class xMat4x3 rotHandMat; // r1+0x58
        class xMat4x3 handMat; // r1+0x98
    }

    // References
    // -> struct {} __vt__28zProjectileUPPlayerThrowable;
    // -> struct {} __vt__31zProjectileUPPlaygroundRollable;
    // -> struct {} __vt__33zProjectileUPPlaygroundLaunchable;
    // -> class zFactory factory;
    // -> static class zProjectileManager gProjectileManager;
    // -> static class xVec3 FinisherBoneOffset;
}
// signature: zRussellPlayerCombatFinisher::Update(float)
// Range: 0x80232290 -> 0x802325B8
void zRussellPlayerCombatFinisher::Update(class zRussellPlayerCombatFinisher * this /* r29 */) {
    // Local variables
    float prevAnimTime; // f1
    float animTime; // f2

    // References
    // -> class xVec3 m_Null;
    // -> class hkVector4 hkVector4Zero;
    // -> static class zProjectileManager gProjectileManager;
}
// Range: 0x802325C0 -> 0x802328BC
void zRussellPlayerCombatFinisher::End(class zRussellPlayerCombatFinisher * this /* r29 */) {
    // References
    // -> class xVec3 m_Null;
    // -> class hkVector4 hkVector4Zero;
    // -> static class zProjectileManager gProjectileManager;
}
// signature: zRussellPlayerCombatFinisher::Move(xScene *, float, xEntFrame *)
// Range: 0x802328C0 -> 0x80232A10
void zRussellPlayerCombatFinisher::Move(class zRussellPlayerCombatFinisher * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 targetPos; // r1+0x8
}
// signature: zRussellPlayerDangle::ReleaseCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80232A10 -> 0x80232C54
unsigned int zRussellPlayerDangle::ReleaseCB(class zRussellPlayerDangle * this /* r31 */) {
    // Local variables
    float peak; // f6
    float peakTime; // f0
    float fallTime; // f0
    float airTime; // f4

    // References
    // -> class zGlobals globals;
}
// Range: 0x80232C60 -> 0x80232EA4
void zRussellPlayerDangle::AddStates(class zRussellPlayerDangle * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// Range: 0x80232EB0 -> 0x80233030
void zRussellPlayerDangle::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80233130 -> 0x80233244
void zRussellPlayerDangle::AddActionTransitions(class zRussellPlayerDangle * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// signature: zRussellPlayerDangle::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80233250 -> 0x802332CC
void zRussellPlayerDangle::AddTransitionsFrom() {
}
// Range: 0x802332D0 -> 0x802332D4
void zRussellPlayerDangle::Setup() {
}
// Range: 0x802332E0 -> 0x8023342C
void zRussellPlayerDangle::Begin(class zRussellPlayerDangle * this /* r31 */) {
}
// signature: zRussellPlayerDangle::Move(xScene *, float, xEntFrame *)
// Range: 0x80233430 -> 0x80233568
void zRussellPlayerDangle::Move(class zRussellPlayerDangle * this /* r30 */, float dt /* f31 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x80233460 -> 0x80233548
        // Local variables
        class xVec3 playerPos; // r1+0x20
        class xVec3 dpos; // r1+0x2C
    }
}
// Range: 0x80233570 -> 0x802335CC
void zRussellPlayerDangle::End(class zRussellPlayerDangle * this /* r31 */) {
}
// signature: zRussellPlayerDangle::GetLandingPos(const zPlayer *, xVec3 &)
// Range: 0x802335E0 -> 0x8023366C
void zRussellPlayerDangle::GetLandingPos(class xVec3 & pos /* r31 */) {
}
// Range: 0x80233690 -> 0x802337AC
void zRussellPlayerCaneUp::GetAttachOffset(class zRussellPlayerCaneUp * this /* r29 */, class xVec3 & offset /* r30 */) {
    // Local variables
    unsigned int variation; // r31

    {
        // Range: 0x802336C0 -> 0x8023370C
        // Local variables
        class zAnimPackage * ap; // r0
        class zCommonPlayer * theOther; // r0
    }

    // References
    // -> static unsigned int VARIATION_PANTS;
    // -> static unsigned int VARIATION_BACKPACK;
}
// Range: 0x802337B0 -> 0x802338DC
void zRussellPlayerCaneUp::AddStates(class zRussellPlayerCaneUp * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x802338E0 -> 0x802339E0
void zRussellPlayerCaneUp::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x80233A50 -> 0x80233B30
void zRussellPlayerCaneUp::AddActionTransitions(class zRussellPlayerCaneUp * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zRussellPlayerCaneUp::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80233B30 -> 0x80233BAC
void zRussellPlayerCaneUp::AddTransitionsFrom() {
}
// Range: 0x80233ED0 -> 0x80233ED4
void zRussellPlayerCaneUp::Setup() {
}
// Range: 0x80233EE0 -> 0x80234500
void zRussellPlayerCaneUp::Move(class zRussellPlayerCaneUp * this /* r30 */, class xScene * s /* r29 */, float dt /* f30 */, class xEntFrame * frame /* r31 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x80233F20 -> 0x80234224
        // Local variables
        class xVec3 facing; // r1+0x98
        float len; // f0
        class xVec3 disp; // r1+0xA4
        class xVec3 ourTestPos; // r1+0xB0
        class xVec3 offset; // r1+0xBC
        class xVec3 targetPos; // r1+0xC8
        class xMat4x3 mat; // r1+0x118
        float moveDist; // f31
    }
    {
        // Range: 0x80234228 -> 0x8023441C
        // Local variables
        class xVec3 facing; // r1+0x68
        class xVec3 ourTestPos; // r1+0x74
        class xVec3 offset; // r1+0x80
        class xVec3 bonePos; // r1+0x8C
        class xMat4x3 mat; // r1+0xD8
    }

    // References
    // -> static class xVec3 CANEUP_CANE_BONE_OFFSET;
}
// Range: 0x80234500 -> 0x802345D4
void zRussellPlayerCaneUp::Begin(class zRussellPlayerCaneUp * this /* r30 */) {
}
// Range: 0x802345E0 -> 0x802345FC
void zRussellPlayerCaneUp::End() {
}
// signature: zRussellPlayerKevinSwing::ReleaseCB(xAnimTransition *, xAnimSingle *)
// Range: 0x80234600 -> 0x8023491C
unsigned int zRussellPlayerKevinSwing::ReleaseCB(class zRussellPlayerKevinSwing * this /* r31 */) {
    // Local variables
    class xVec3 dpos; // r1+0x38
    float peak; // f6
    float peakTime; // f0
    float fallTime; // f0
    float airTime; // f6
}
// Range: 0x80234940 -> 0x80234AFC
void zRussellPlayerKevinSwing::AddStates(class zRussellPlayerKevinSwing * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80234B00 -> 0x80234CC4
void zRussellPlayerKevinSwing::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80234E90 -> 0x80234F58
void zRussellPlayerKevinSwing::AddActionTransitions(class xAnimTable * table /* r25 */) {
}
// signature: zRussellPlayerKevinSwing::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80234F60 -> 0x80234FDC
void zRussellPlayerKevinSwing::AddTransitionsFrom() {
}
// Range: 0x80235350 -> 0x802354A0
void zRussellPlayerKevinSwing::Begin(class zRussellPlayerKevinSwing * this /* r31 */) {
}
// Range: 0x802354B0 -> 0x80235530
void zRussellPlayerKevinSwing::End(class zRussellPlayerKevinSwing * this /* r31 */) {
}
// Range: 0x80235530 -> 0x802359B8
void zRussellPlayerKevinSwing::Move(class zRussellPlayerKevinSwing * this /* r30 */, class xScene * s /* r31 */, float dt /* f30 */, class xEntFrame * frame /* r29 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x80235570 -> 0x80235828
        // Local variables
        class xVec3 turnTarget; // r1+0x44
        float len; // f0
        class xVec3 diff; // r1+0x50
        class xVec3 entryDir; // r1+0x5C
        class xVec3 entryPos; // r1+0x68
        float movedist; // f31
        bool rotDone; // r0
        bool posDone; // r31
    }
    {
        // Range: 0x802358A4 -> 0x8023598C
        // Local variables
        class xVec3 playerPos; // r1+0x2C
        class xVec3 dpos; // r1+0x38
    }
}
// signature: zRopeCutBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x802359D0 -> 0x80235A4C
void zRopeCutBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x80235A50 -> 0x80235BC0
void zRussellPlayerRopeCut::AddStates(class zRussellPlayerRopeCut * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80235BC0 -> 0x80235D10
void zRussellPlayerRopeCut::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x80235F80 -> 0x80236084
void zRussellPlayerRopeCut::AddActionTransitions(class zRussellPlayerRopeCut * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zRussellPlayerRopeCut::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80236090 -> 0x8023610C
void zRussellPlayerRopeCut::AddTransitionsFrom() {
}
// Range: 0x80236110 -> 0x80236190
void zRussellPlayerRopeCut::Begin(class zRussellPlayerRopeCut * this /* r31 */) {
}
// Range: 0x80236190 -> 0x802361DC
void zRussellPlayerRopeCut::End(class zRussellPlayerRopeCut * this /* r30 */) {
}
// Range: 0x802361F0 -> 0x802362D8
void zRussellPlayerRopeCut::Update(class zRussellPlayerRopeCut * this /* r31 */, float dt /* f31 */) {
    // Local variables
    bool showMasher; // r0
}
// Range: 0x802362E0 -> 0x80236450
void zRussellPlayerRussellRope::AddStates(class zRussellPlayerRussellRope * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x802364C0 -> 0x80236634
void zRussellPlayerRussellRope::AddActionTransitions(class zRussellPlayerRussellRope * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// Range: 0x802367A0 -> 0x802368EC
void zRussellPlayerRussellRope::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// signature: zRussellPlayerRussellRope::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80236A10 -> 0x80236A8C
void zRussellPlayerRussellRope::AddTransitionsFrom() {
}
// signature: zRussellPlayerRussellRope::CanStartCombo(unsigned int) const
// Range: 0x80236B10 -> 0x80236BA0
bool zRussellPlayerRussellRope::CanStartCombo() const {
}
// Range: 0x80236BA0 -> 0x80236C84
void zRussellPlayerRussellRope::Begin(class zRussellPlayerRussellRope * this /* r29 */) {
    // Local variables
    class zRussellPlayer * rPlayer; // r30
}
// Range: 0x80236C90 -> 0x80236DC0
void zRussellPlayerRussellRope::End(class zRussellPlayerRussellRope * this /* r31 */) {
    // Local variables
    class zRussellPlayer * rPlayer; // r28
}
// Range: 0x80236DC0 -> 0x80237054
void zRussellPlayerLedgeShimmy::AddStates(class zRussellPlayerLedgeShimmy * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80237060 -> 0x80237170
void zRussellPlayerLedgeShimmy::AddActionTransitions(class zRussellPlayerLedgeShimmy * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x80237170 -> 0x8023759C
void zRussellPlayerLedgeShimmy::AddInternalTransitions(class xAnimTable * table /* r21 */) {
}
// signature: zRussellPlayerLedgeShimmy::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x802377F0 -> 0x8023786C
void zRussellPlayerLedgeShimmy::AddTransitionsFrom() {
}
// signature: zLedgeShimmyBE(xAnimPlay *, xAnimState *, void *)
// Range: 0x80237950 -> 0x802379CC
void zLedgeShimmyBE(class xAnimState * state /* r30 */, void * object /* r31 */) {
    // Local variables
    class zUPPlayer * player; // r0
    class zAnimPackage * currentPackage; // r0
}
// Range: 0x802379D0 -> 0x80237A60
void zRussellPlayerLedgeShimmy::Begin(class zRussellPlayerLedgeShimmy * this /* r31 */) {
    // Local variables
    class zRussellPlayer * rPlayer; // r4
}
// Range: 0x80237A60 -> 0x80237AE4
void zRussellPlayerLedgeShimmy::End(class zRussellPlayerLedgeShimmy * this /* r30 */) {
    // Local variables
    class zRussellPlayer * rPlayer; // r4
}
// Range: 0x80237AF0 -> 0x80237B54
void zRussellPlayerLedgeShimmy::Update(class zRussellPlayerLedgeShimmy * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80237B60 -> 0x80237BD8
void zRussellPlayerLedgeShimmy::UpdateFall(class zRussellPlayerLedgeShimmy * this /* r31 */, float dt /* f31 */) {
    // Local variables
    unsigned int animFlags; // r0
}
// signature: zRussellPlayerBugleIn::AddStates(xAnimTable *)
// Range: 0x80237BE0 -> 0x80237C60
void zRussellPlayerBugleIn::AddStates() {
}
// Range: 0x80237C60 -> 0x80237D5C
void zRussellPlayerBugleIn::AddActionTransitions(class zRussellPlayerBugleIn * this /* r29 */, class xAnimTable * table /* r30 */) {
}
// signature: zRussellPlayerBugleIn::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80237D60 -> 0x80237DDC
void zRussellPlayerBugleIn::AddTransitionsFrom() {
}
// Range: 0x80237EC0 -> 0x80237F60
void zRussellPlayerBugleIn::Begin() {
    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80237F70 -> 0x80238084
void zRussellPlayerBugleIn::End(class zRussellPlayerBugleIn * this /* r31 */) {
    // References
    // -> class zPlayerInventory inventory;
    // -> class zGameCheats gGameCheats;
}
// Range: 0x80238090 -> 0x80238178
void zRussellPlayerBugleOut::AddStates(class zRussellPlayerBugleOut * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80238180 -> 0x80238248
void zRussellPlayerBugleOut::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80238250 -> 0x80238420
void zRussellPlayerBugleOut::AddActionTransitions(class zRussellPlayerBugleOut * this /* r25 */, class xAnimTable * table /* r30 */) {
}
// signature: zRussellPlayerBugleOut::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80238550 -> 0x802385CC
void zRussellPlayerBugleOut::AddTransitionsFrom() {
}
// Range: 0x80238660 -> 0x80238700
void zRussellPlayerBugleOut::End() {
    // References
    // -> class Scene * primaryScene;
}
// signature: zRussellPlayerBugleOut::Update(float)
// Range: 0x80238700 -> 0x8023885C
void zRussellPlayerBugleOut::Update(class zRussellPlayerBugleOut * this /* r31 */) {
    // Local variables
    unsigned int flags; // r0

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80238860 -> 0x80238940
void zRussellPlayerBugleIdle::AddStates(class zRussellPlayerBugleIdle * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zRussellPlayerBugleIdle::AddInternalTransitions(xAnimTable *)
// Range: 0x80238940 -> 0x802389B4
void zRussellPlayerBugleIdle::AddInternalTransitions() {
}
// Range: 0x802389C0 -> 0x80238BE8
void zRussellPlayerBugleIdle::AddActionTransitions(class zRussellPlayerBugleIdle * this /* r24 */, class xAnimTable * table /* r31 */) {
}
// signature: zRussellPlayerBugleIdle::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80238BF0 -> 0x80238C6C
void zRussellPlayerBugleIdle::AddTransitionsFrom() {
}
// Range: 0x80238D00 -> 0x80238E28
void zRussellPlayerBugleWalk::AddStates(class zRussellPlayerBugleWalk * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80238E30 -> 0x80238F34
void zRussellPlayerBugleWalk::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80238F40 -> 0x80239120
void zRussellPlayerBugleWalk::AddActionTransitions(class zRussellPlayerBugleWalk * this /* r27 */, class xAnimTable * table /* r24 */) {
}
// signature: zRussellPlayerBugleWalk::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x802391C0 -> 0x8023923C
void zRussellPlayerBugleWalk::AddTransitionsFrom() {
}
// Range: 0x80239240 -> 0x80239320
void zRussellPlayerBugleJump::AddStates(class zRussellPlayerBugleJump * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80239320 -> 0x80239500
void zRussellPlayerBugleJump::AddActionTransitions(class zRussellPlayerBugleJump * this /* r25 */, class xAnimTable * table /* r22 */) {
}
// signature: zRussellPlayerBugleJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80239600 -> 0x80239688
void zRussellPlayerBugleJump::AddTransitionsFrom() {
}
// Range: 0x80239690 -> 0x80239770
void zRussellPlayerBugleFall::AddStates(class zRussellPlayerBugleFall * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80239770 -> 0x802398D8
void zRussellPlayerBugleFall::AddActionTransitions(class zRussellPlayerBugleFall * this /* r27 */, class xAnimTable * table /* r24 */) {
}
// signature: zRussellPlayerBugleFall::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x802398E0 -> 0x8023995C
void zRussellPlayerBugleFall::AddTransitionsFrom() {
}
// Range: 0x80239960 -> 0x80239A40
void zRussellPlayerBugleLand::AddStates(class zRussellPlayerBugleLand * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80239A40 -> 0x80239CE8
void zRussellPlayerBugleLand::AddActionTransitions(class zRussellPlayerBugleLand * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zRussellPlayerBugleLand::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x80239CF0 -> 0x80239D6C
void zRussellPlayerBugleLand::AddTransitionsFrom() {
}
// Range: 0x80239D70 -> 0x80239E54
void zRussellPlayerNetIn::AddStates(class zRussellPlayerNetIn * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x80239E60 -> 0x80239F28
void zRussellPlayerNetIn::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x80239F30 -> 0x8023A2AC
void zRussellPlayerNetIn::AddActionTransitions(class zRussellPlayerNetIn * this /* r28 */, class xAnimTable * table /* r29 */) {
}
// signature: zRussellPlayerNetIn::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8023A430 -> 0x8023A4AC
void zRussellPlayerNetIn::AddTransitionsFrom() {
}
// Range: 0x8023A4C0 -> 0x8023A5A4
void zRussellPlayerNetOut::AddStates(class zRussellPlayerNetOut * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8023A5B0 -> 0x8023A678
void zRussellPlayerNetOut::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8023A680 -> 0x8023A928
void zRussellPlayerNetOut::AddActionTransitions(class zRussellPlayerNetOut * this /* r28 */, class xAnimTable * table /* r29 */) {
}
// signature: zRussellPlayerNetOut::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8023A930 -> 0x8023A9AC
void zRussellPlayerNetOut::AddTransitionsFrom() {
}
// Range: 0x8023AA90 -> 0x8023AB70
void zRussellPlayerNetIdle::AddStates(class zRussellPlayerNetIdle * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// signature: zRussellPlayerNetIdle::AddInternalTransitions(xAnimTable *)
// Range: 0x8023AB70 -> 0x8023ABE4
void zRussellPlayerNetIdle::AddInternalTransitions() {
}
// Range: 0x8023ABF0 -> 0x8023AEF0
void zRussellPlayerNetIdle::AddActionTransitions(class zRussellPlayerNetIdle * this /* r21 */, class xAnimTable * table /* r22 */) {
}
// signature: zRussellPlayerNetIdle::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8023AEF0 -> 0x8023AF6C
void zRussellPlayerNetIdle::AddTransitionsFrom() {
}
// Range: 0x8023AF70 -> 0x8023B0E4
void zRussellPlayerNetRun::AddStates(class zRussellPlayerNetRun * this /* r24 */, class xAnimTable * table /* r25 */) {
}
// Range: 0x8023B0F0 -> 0x8023B2B0
void zRussellPlayerNetRun::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x8023B2B0 -> 0x8023B60C
void zRussellPlayerNetRun::AddActionTransitions(class zRussellPlayerNetRun * this /* r28 */, class xAnimTable * table /* r29 */) {
}
// signature: zRussellPlayerNetRun::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8023B610 -> 0x8023B68C
void zRussellPlayerNetRun::AddTransitionsFrom() {
}
// Range: 0x8023B690 -> 0x8023B770
void zRussellPlayerNetJump::AddStates(class zRussellPlayerNetJump * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8023B770 -> 0x8023B9F4
void zRussellPlayerNetJump::AddActionTransitions(class zRussellPlayerNetJump * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// signature: zRussellPlayerNetJump::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8023BB00 -> 0x8023BB88
void zRussellPlayerNetJump::AddTransitionsFrom() {
}
// Range: 0x8023BB90 -> 0x8023BC70
void zRussellPlayerNetFall::AddStates(class zRussellPlayerNetFall * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8023BC70 -> 0x8023BE58
void zRussellPlayerNetFall::AddActionTransitions(class zRussellPlayerNetFall * this /* r23 */, class xAnimTable * table /* r24 */) {
}
// signature: zRussellPlayerNetFall::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8023BE60 -> 0x8023BEDC
void zRussellPlayerNetFall::AddTransitionsFrom() {
}
// Range: 0x8023BEE0 -> 0x8023BFC4
void zRussellPlayerNetLand::AddStates(class zRussellPlayerNetLand * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8023BFD0 -> 0x8023C47C
void zRussellPlayerNetLand::AddActionTransitions(class zRussellPlayerNetLand * this /* r26 */, class xAnimTable * table /* r27 */) {
}
// signature: zRussellPlayerNetLand::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8023C480 -> 0x8023C4FC
void zRussellPlayerNetLand::AddTransitionsFrom() {
}
// Range: 0x8023C500 -> 0x8023C6DC
void zRussellPlayerNetSwing::AddAttacks(class zCombatAttack * attackStates /* r17 */) {
    // Local variables
    class zCombatAttack * attack; // r0

    // References
    // -> static class xVec3 NET_OFFSET;
}
// Range: 0x8023C6E0 -> 0x8023CA10
void zRussellPlayerNetSwing::AddStates(class zRussellPlayerNetSwing * this /* r23 */, class xAnimTable * table /* r24 */) {
}
// Range: 0x8023CAA0 -> 0x8023CDC4
void zRussellPlayerNetSwing::AddInternalTransitions(class xAnimTable * table /* r25 */) {
}
// Range: 0x8023CDE0 -> 0x8023D380
void zRussellPlayerNetSwing::AddActionTransitions(class zRussellPlayerNetSwing * this /* r27 */, class xAnimTable * table /* r28 */) {
}
// signature: zRussellPlayerNetSwing::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8023D380 -> 0x8023D4A0
void zRussellPlayerNetSwing::AddTransitionsFrom(class xAnimTable * table /* r25 */, char * fromStates /* r26 */, unsigned int (* exitCondition)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r27 */, unsigned int (* exitCallback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r28 */, unsigned short priority /* r29 */, float blend /* f31 */, unsigned int flags /* r30 */, unsigned int userFlags /* r31 */) {
}
// signature: zRussellPlayerNetSwing::BeginUpdate(float)
// Range: 0x8023D4B0 -> 0x8023D54C
void zRussellPlayerNetSwing::BeginUpdate(class zRussellPlayerNetSwing * this /* r31 */) {
}
// signature: zRussellPlayerNetSwing::Update(float)
// Range: 0x8023D550 -> 0x8023DA60
void zRussellPlayerNetSwing::Update(class zRussellPlayerNetSwing * this /* r14 */) {
    // Local variables
    unsigned int animFlags; // r0

    {
        // Range: 0x8023D590 -> 0x8023DA40
        // Local variables
        float animFrame; // f2
        float catchEndTime; // f0
        float catchStartTime; // f0

        {
            // Range: 0x8023D624 -> 0x8023DA40
            // Local variables
            class zRussellPlayerNetSwing_CatchNPCWithinDistance_CB netCatchNPCCB; // r1+0x10
            class zRussellPlayerNetSwing_CatchWithinDistance_CB netCatchCB; // r1+0x1C
            float netSize; // f31
            class xVec3 netPos; // r1+0x28
        }
    }

    // References
    // -> class zPlayerInventory inventory;
    // -> void (* WiimoteSpeakerCB)(bool);
    // -> static class zUpWiimoteSoundHelper Instance;
    // -> class zSoundWiimoteSpeaker * SoundList[18];
    // -> static class zWiimoteSpeakerController Instance;
    // -> class zGlobals globals;
}
// Range: 0x8023DA60 -> 0x8023DB88
void zRussellPlayerCanteen::AddStates(class zRussellPlayerCanteen * this /* r25 */, class xAnimTable * table /* r26 */) {
}
// Range: 0x8023DB90 -> 0x8023DC50
void zRussellPlayerCanteen::AddInternalTransitions(class xAnimTable * table /* r26 */) {
}
// Range: 0x8023DC50 -> 0x8023DE54
void zRussellPlayerCanteen::AddActionTransitions(class zRussellPlayerCanteen * this /* r30 */, class xAnimTable * table /* r31 */) {
}
// signature: zRussellPlayerCanteen::AddTransitionsFrom(xAnimTable *, const char *, unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned int (*)(xAnimTransition *, xAnimSingle *, void *), unsigned short, float, unsigned int, unsigned int, zPlayerAction::SpecialActions)
// Range: 0x8023DE60 -> 0x8023DEDC
void zRussellPlayerCanteen::AddTransitionsFrom() {
}
// Range: 0x8023E290 -> 0x8023E304
void zRussellPlayerCanteen::Begin() {
}
