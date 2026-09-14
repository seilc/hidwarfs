/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F9A18 -> 0x800F9AC0
*/
// Range: 0x800F9A18 -> 0x800F9A3C
// this: r3
void zNPCCommon::SetCurrentCombatInfo(struct zCombatDamageInfo * info /* r0 */) {}

// Range: 0x800F9AB0 -> 0x800F9AB8
// this: r3
unsigned char zNPCCommon::HasJumpAbility() {}

// Range: 0x800F9AB8 -> 0x800F9AC0
// this: r3
unsigned char zNPCCommon::HasDodgeAbility() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801180E4 -> 0x80118120
*/
// Range: 0x801180E4 -> 0x801180EC
// this: r3
struct xBound * zNPCCommon::GetOldBound() {}

// Range: 0x801180EC -> 0x801180F4
unsigned char zNPCCommon::destroy_throwable() {}

// Range: 0x801180F4 -> 0x801180FC
unsigned char zNPCCommon::get_target_priority() {}

// Range: 0x801180FC -> 0x80118120
// this: r3
unsigned char zNPCCommon::CanBeTargeted() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80136660 -> 0x80136684
*/
// Range: 0x80136660 -> 0x80136684
// this: r3
class behavior * zNPCCommon::get_current_behavior() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80165528 -> 0x80165530
*/
// Range: 0x80165528 -> 0x80165530
unsigned char zNPCCommon::player_orient_carry() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80173E44 -> 0x80174258
*/
// Range: 0x80173E44 -> 0x80173E48
void zNPCCommon::move() {}

// Range: 0x80173E48 -> 0x80173E6C
// this: r3
unsigned char zNPCCommon::IsFrozen() {}

// Range: 0x80173E6C -> 0x80173E74
unsigned int zNPCCommon::GetShadowBoneIndex() {}

// Range: 0x80173E74 -> 0x80173E7C
float zNPCCommon::GetFunkyCheatScale() {}

// Range: 0x80173E7C -> 0x80173E84
unsigned char zNPCCommon::FunkyCheatEffective() {}

// Range: 0x80173E84 -> 0x80173E98
// this: r0
void zNPCCommon::ResetHitBy() {}

// Range: 0x80173E98 -> 0x80173E9C
void zNPCCommon::UpdateBlurs() {}

// Range: 0x80173E9C -> 0x80173EA0
void zNPCCommon::BehaviorUpdate() {}

// Range: 0x80173EA0 -> 0x80173EA8
// this: r0
void zNPCCommon::SetKiller(struct xEnt * killer /* r0 */) {}

// Range: 0x80173EA8 -> 0x80173F08
// this: r30
float zNPCCommon::GetFreezeTime() {
    // References
    // -> float zNPCFreezeTimeTable[3][2];
}

// Range: 0x80173F08 -> 0x80173F10
unsigned int zNPCCommon::GetVariant() {}

// Range: 0x80173F10 -> 0x80173F40
void zNPCCommon::GetNukeBoneOffset(struct xVec3 * offset /* r4 */) {}

// Range: 0x80173F40 -> 0x80173F48
int zNPCCommon::GetNukeBoneIndex() {}

// Range: 0x80173F48 -> 0x80173F78
void zNPCCommon::GetStunIconBoneOffset(struct xVec3 * offset /* r4 */) {}

// Range: 0x80173F78 -> 0x80173FA8
void zNPCCommon::GetShieldGeneratorBoneOffset(struct xVec3 * offset /* r4 */) {}

// Range: 0x80173FA8 -> 0x80173FB0
float zNPCCommon::GetShieldGeneratorBoneRotation() {}

// Range: 0x80173FB0 -> 0x80173FB8
int zNPCCommon::GetShieldGeneratorBoneIndex() {}

// Range: 0x80173FB8 -> 0x80173FC0
float zNPCCommon::GetMaxShieldValue() {}

// Range: 0x80173FC0 -> 0x80173FE4
// this: r0
unsigned char zNPCCommon::HasNuke() {}

// Range: 0x80173FE4 -> 0x80173FE8
void zNPCCommon::NPCFXRender() {}

// Range: 0x80173FE8 -> 0x80174018
// this: r3
static void zNPCCommon::addBehavior(class zBehaviorImplementation * new_behavior /* r0 */, signed char priority /* r0 */) {}

// Range: 0x80174018 -> 0x80174020
float zNPCCommon::GetScreenBlockTolerance() {}

// Range: 0x80174020 -> 0x80174030
char * zNPCCommon::get_type_name() {}

// Range: 0x80174030 -> 0x80174038
// this: r3
unsigned char zNPCCommon::HasBlockAbility() {}

// Range: 0x80174038 -> 0x80174040
// this: r3
unsigned char zNPCCommon::CanTakeDamage() {}

// Range: 0x80174040 -> 0x80174064
// this: r3
float zNPCCommon::GetAIHelperHintSafeDistance() {}

// Range: 0x80174064 -> 0x801740C4
// this: r30
float zNPCCommon::GetThawTime() {
    // References
    // -> float zNPCThawTimeTable[3][2];
}

// Range: 0x801740C4 -> 0x801740CC
enum iSndGroupHandle zNPCCommon::GetOneLinerSoundHandle() {}

// Range: 0x801740CC -> 0x801740F8
unsigned int zNPCCommon::GetInterestingIdleAnimID() {}

// Range: 0x801740F8 -> 0x80174124
unsigned int zNPCCommon::GetInterestingMovementAnimID() {}

// Range: 0x80174124 -> 0x8017412C
float zNPCCommon::GetInterestingIdleAnimTime() {}

// Range: 0x8017412C -> 0x80174130
void zNPCCommon::InterestingIdleFX() {}

// Range: 0x80174130 -> 0x80174134
void zNPCCommon::ResetInterestingIdleFX() {}

// Range: 0x80174134 -> 0x8017413C
float zNPCCommon::GetShuffleAndTauntWaitTime() {}

// Range: 0x8017413C -> 0x80174140
void zNPCCommon::UpdateTauntFX() {}

// Range: 0x80174140 -> 0x80174148
struct zNPCCombatInitData * zNPCCommon::GetCombatData() {}

// Range: 0x80174148 -> 0x8017414C
void zNPCCommon::SetVariantFlags() {}

// Range: 0x8017414C -> 0x80174154
// this: r0
float zNPCCommon::get_shadow_strength() {}

// Range: 0x80174154 -> 0x8017415C
// this: r3
struct xGroup * zNPCCommon::GetInterestPointerGroup() {}

// Range: 0x8017415C -> 0x8017418C
// this: r3
void zNPCCommon::preupdate(float dt /* f0 */) {}

// Range: 0x8017418C -> 0x80174194
float zNPCCommon::GetShieldMidHeight() {}

// Range: 0x80174194 -> 0x8017419C
float zNPCCommon::GetShieldScale() {}

// Range: 0x8017419C -> 0x801741CC
void zNPCCommon::GetShieldOffset(struct xVec3 & offset /* r4 */) {}

// Range: 0x801741CC -> 0x8017422C
// this: r29
unsigned char zNPCCommon::IsShielding() {}

// Range: 0x8017422C -> 0x80174234
unsigned char zNPCCommon::static_object_carry() {}

// Range: 0x80174234 -> 0x8017423C
unsigned char zNPCCommon::ShouldEscapeGrab() {}

// Range: 0x8017423C -> 0x80174244
unsigned char zNPCCommon::giveBonus() {}

// Range: 0x80174244 -> 0x8017424C
// this: r3
struct zCombatDamageInfo * zNPCCommon::GetCurrentCombatInfo() const {}

// Range: 0x8017424C -> 0x80174254
// this: r3
enum ezBlockDir zNPCCommon::GetBlockDirection() const {}

// Range: 0x80174254 -> 0x80174258
void zNPCCommon::SetProjectileExtControl() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80175528 -> 0x80175528
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018C14C -> 0x8018C14C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019C60C -> 0x8019C63C
*/
// Range: 0x8019C60C -> 0x8019C63C
// this: r3
static void zNPCCommon::addBehavior(class zBehaviorImplementation * new_behavior /* r0 */, signed char priority /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019C9E8 -> 0x8019CA18
*/
// Range: 0x8019C9E8 -> 0x8019CA18
// this: r3
static void zNPCCommon::addBehavior(class zBehaviorImplementation * new_behavior /* r0 */, signed char priority /* r0 */) {}


