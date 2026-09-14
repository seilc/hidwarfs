/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A8974 -> 0x800A897C
*/
// Range: 0x800A8974 -> 0x800A897C
int zNPCCommon::GetNPCType() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013E9B0 -> 0x8013E9BC
*/
// Range: 0x8013E9B0 -> 0x8013E9BC
// this: r3
unsigned char zNPCCommon::carried() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018AA04 -> 0x8018AA48
*/
// Range: 0x8018AA04 -> 0x8018AA08
void zNPCCommon::AddStaticTweaks() {}

// Range: 0x8018AA08 -> 0x8018AA0C
void zNPCCommon::InitCombatAttacks() {}

// Range: 0x8018AA0C -> 0x8018AA1C
char * zNPCCommon::get_type_name() {}

// Range: 0x8018AA1C -> 0x8018AA48
// this: r1+0x8
unsigned char zNPCCommon::CanBeInterruptedForIncidental() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018B980 -> 0x8018B988
*/
// Range: 0x8018B980 -> 0x8018B988
float zNPCCommon::GetMeshCircleRadius() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B3464 -> 0x801B3468
*/
// Range: 0x801B3464 -> 0x801B3468
void zNPCCommon::culling_changed() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EB96C -> 0x801EBA24
*/
// Range: 0x801EB96C -> 0x801EB9A0
// this: r1+0x8
void zNPCCommon::SetCurrentCombatInfo(struct zCombatDamageInfo * info /* r1+0xC */) {}

// Range: 0x801EBA14 -> 0x801EBA1C
// this: r3
unsigned char zNPCCommon::HasJumpAbility() {}

// Range: 0x801EBA1C -> 0x801EBA24
// this: r3
unsigned char zNPCCommon::HasDodgeAbility() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80220DFC -> 0x80220E40
*/
// Range: 0x80220DFC -> 0x80220E04
// this: r3
struct xBound * zNPCCommon::GetOldBound() {}

// Range: 0x80220E04 -> 0x80220E0C
unsigned char zNPCCommon::destroy_throwable() {}

// Range: 0x80220E0C -> 0x80220E14
unsigned char zNPCCommon::get_target_priority() {}

// Range: 0x80220E14 -> 0x80220E40
// this: r1+0x8
unsigned char zNPCCommon::CanBeTargeted() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025C104 -> 0x8025C130
*/
// Range: 0x8025C104 -> 0x8025C130
// this: r1+0x8
class behavior * zNPCCommon::get_current_behavior() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A4660 -> 0x802A4668
*/
// Range: 0x802A4660 -> 0x802A4668
unsigned char zNPCCommon::player_orient_carry() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BD944 -> 0x802BDEC8
*/
// Range: 0x802BD944 -> 0x802BD970
// this: r1+0x8
unsigned char zNPCCommon::CanAttack() {}

// Range: 0x802BD970 -> 0x802BD99C
// this: r1+0x8
unsigned char zNPCCommon::CanChase() {}

// Range: 0x802BD99C -> 0x802BD9C8
// this: r1+0x8
unsigned char zNPCCommon::CanDetect() {}

// Range: 0x802BD9C8 -> 0x802BD9CC
void zNPCCommon::move() {}

// Range: 0x802BD9CC -> 0x802BD9F8
// this: r1+0x8
unsigned char zNPCCommon::IsFrozen() {}

// Range: 0x802BD9F8 -> 0x802BDA00
unsigned int zNPCCommon::GetShadowBoneIndex() {}

// Range: 0x802BDA00 -> 0x802BDA08
float zNPCCommon::GetFunkyCheatScale() {}

// Range: 0x802BDA08 -> 0x802BDA10
unsigned char zNPCCommon::FunkyCheatEffective() {}

// Range: 0x802BDA10 -> 0x802BDA24
// this: r3
void zNPCCommon::ResetHitBy() {}

// Range: 0x802BDA24 -> 0x802BDA28
void zNPCCommon::UpdateBlurs() {}

// Range: 0x802BDA28 -> 0x802BDA2C
void zNPCCommon::BehaviorUpdate() {}

// Range: 0x802BDA2C -> 0x802BDA34
// this: r3
void zNPCCommon::SetKiller(struct xEnt * killer /* r4 */) {}

// Range: 0x802BDA34 -> 0x802BDAA8
// this: r31
float zNPCCommon::GetFreezeTime() {
    // References
    // -> float zNPCFreezeTimeTable[3][2];
}

// Range: 0x802BDAA8 -> 0x802BDAB0
unsigned int zNPCCommon::GetVariant() {}

// Range: 0x802BDAB0 -> 0x802BDAE4
void zNPCCommon::GetNukeBoneOffset(struct xVec3 * offset /* r1+0x8 */) {}

// Range: 0x802BDAE4 -> 0x802BDAEC
int zNPCCommon::GetNukeBoneIndex() {}

// Range: 0x802BDAEC -> 0x802BDB20
void zNPCCommon::GetStunIconBoneOffset(struct xVec3 * offset /* r1+0x8 */) {}

// Range: 0x802BDB20 -> 0x802BDB54
void zNPCCommon::GetShieldGeneratorBoneOffset(struct xVec3 * offset /* r1+0x8 */) {}

// Range: 0x802BDB54 -> 0x802BDB5C
float zNPCCommon::GetShieldGeneratorBoneRotation() {}

// Range: 0x802BDB5C -> 0x802BDB64
int zNPCCommon::GetShieldGeneratorBoneIndex() {}

// Range: 0x802BDB64 -> 0x802BDB6C
float zNPCCommon::GetMaxShieldValue() {}

// Range: 0x802BDB6C -> 0x802BDB98
// this: r1+0x8
unsigned char zNPCCommon::HasNuke() {}

// Range: 0x802BDB98 -> 0x802BDB9C
void zNPCCommon::NPCFXRender() {}

// Range: 0x802BDB9C -> 0x802BDBE4
// this: r31
static void zNPCCommon::addBehavior(class zBehaviorImplementation * new_behavior /* r1+0x8 */, signed char priority /* r1+0xC */) {}

// Range: 0x802BDBE4 -> 0x802BDBEC
float zNPCCommon::GetScreenBlockTolerance() {}

// Range: 0x802BDBEC -> 0x802BDBF4
// this: r3
unsigned char zNPCCommon::HasBlockAbility() {}

// Range: 0x802BDBF4 -> 0x802BDBFC
// this: r3
unsigned char zNPCCommon::CanTakeDamage() {}

// Range: 0x802BDBFC -> 0x802BDC28
// this: r1+0x8
float zNPCCommon::GetAIHelperHintSafeDistance() {}

// Range: 0x802BDC28 -> 0x802BDC9C
// this: r31
float zNPCCommon::GetThawTime() {
    // References
    // -> float zNPCThawTimeTable[3][2];
}

// Range: 0x802BDC9C -> 0x802BDCA4
enum iSndGroupHandle zNPCCommon::GetOneLinerSoundHandle() {}

// Range: 0x802BDCA4 -> 0x802BDCD0
unsigned int zNPCCommon::GetInterestingIdleAnimID() {}

// Range: 0x802BDCD0 -> 0x802BDCFC
unsigned int zNPCCommon::GetInterestingMovementAnimID() {}

// Range: 0x802BDCFC -> 0x802BDD04
float zNPCCommon::GetInterestingIdleAnimTime() {}

// Range: 0x802BDD04 -> 0x802BDD08
void zNPCCommon::InterestingIdleFX() {}

// Range: 0x802BDD08 -> 0x802BDD0C
void zNPCCommon::ResetInterestingIdleFX() {}

// Range: 0x802BDD0C -> 0x802BDD14
float zNPCCommon::GetShuffleAndTauntWaitTime() {}

// Range: 0x802BDD14 -> 0x802BDD18
void zNPCCommon::UpdateTauntFX() {}

// Range: 0x802BDD18 -> 0x802BDD20
struct zNPCCombatInitData * zNPCCommon::GetCombatData() {}

// Range: 0x802BDD20 -> 0x802BDD24
void zNPCCommon::SetVariantFlags() {}

// Range: 0x802BDD24 -> 0x802BDD2C
// this: r3
float zNPCCommon::get_shadow_strength() {}

// Range: 0x802BDD2C -> 0x802BDD34
// this: r3
struct xGroup * zNPCCommon::GetInterestPointerGroup() {}

// Range: 0x802BDD34 -> 0x802BDD74
// this: r1+0x8
void zNPCCommon::preupdate(float dt /* r1+0xC */) {}

// Range: 0x802BDD74 -> 0x802BDD7C
float zNPCCommon::GetShieldMidHeight() {}

// Range: 0x802BDD7C -> 0x802BDD84
float zNPCCommon::GetShieldScale() {}

// Range: 0x802BDD84 -> 0x802BDDB8
void zNPCCommon::GetShieldOffset(struct xVec3 & offset /* r1+0x8 */) {}

// Range: 0x802BDDB8 -> 0x802BDE28
// this: r30
unsigned char zNPCCommon::IsShielding() {}

// Range: 0x802BDE28 -> 0x802BDE30
unsigned char zNPCCommon::static_object_carry() {}

// ERROR: Failed to emit tag 24436DC (GlobalSubroutine)
// Range: 0x802BDEAC -> 0x802BDEB4
unsigned char zNPCCommon::giveBonus() {}

// Range: 0x802BDEB4 -> 0x802BDEBC
// this: r3
struct zCombatDamageInfo * zNPCCommon::GetCurrentCombatInfo() const {}

// Range: 0x802BDEBC -> 0x802BDEC4
// this: r3
enum ezBlockDir zNPCCommon::GetBlockDirection() const {}

// Range: 0x802BDEC4 -> 0x802BDEC8
void zNPCCommon::SetProjectileExtControl() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BFC34 -> 0x802BFC34
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E55CC -> 0x802E55CC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FF140 -> 0x802FF188
*/
// Range: 0x802FF140 -> 0x802FF188
// this: r31
static void zNPCCommon::addBehavior(class zBehaviorImplementation * new_behavior /* r1+0x8 */, signed char priority /* r1+0xC */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FF5A4 -> 0x802FF5EC
*/
// Range: 0x802FF5A4 -> 0x802FF5EC
// this: r31
static void zNPCCommon::addBehavior(class zBehaviorImplementation * new_behavior /* r1+0x8 */, signed char priority /* r1+0xC */) {}


