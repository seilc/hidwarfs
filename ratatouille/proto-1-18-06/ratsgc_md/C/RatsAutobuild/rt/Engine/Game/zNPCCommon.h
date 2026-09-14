/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004F424 -> 0x8004F42C
*/
// Range: 0x8004F424 -> 0x8004F42C
int zNPCCommon::GetNPCType() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80096C38 -> 0x80096C44
*/
// Range: 0x80096C38 -> 0x80096C44
// this: r0
unsigned char zNPCCommon::carried() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C2260 -> 0x800C2288
*/
// Range: 0x800C2260 -> 0x800C2264
void zNPCCommon::InitCombatAttacks() {}

// Range: 0x800C2264 -> 0x800C2288
// this: r3
unsigned char zNPCCommon::CanBeInterruptedForIncidental() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C2DF4 -> 0x800C2DFC
*/
// Range: 0x800C2DF4 -> 0x800C2DFC
float zNPCCommon::GetMeshCircleRadius() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D8F20 -> 0x800D8F24
*/
// Range: 0x800D8F20 -> 0x800D8F24
void zNPCCommon::culling_changed() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F9D9C -> 0x800F9E44
*/
// Range: 0x800F9D9C -> 0x800F9DC0
// this: r3
void zNPCCommon::SetCurrentCombatInfo(struct zCombatDamageInfo * info /* r0 */) {}

// Range: 0x800F9E34 -> 0x800F9E3C
// this: r3
unsigned char zNPCCommon::HasJumpAbility() {}

// Range: 0x800F9E3C -> 0x800F9E44
// this: r3
unsigned char zNPCCommon::HasDodgeAbility() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80118468 -> 0x801184A4
*/
// Range: 0x80118468 -> 0x80118470
// this: r3
struct xBound * zNPCCommon::GetOldBound() {}

// Range: 0x80118470 -> 0x80118478
unsigned char zNPCCommon::destroy_throwable() {}

// Range: 0x80118478 -> 0x80118480
unsigned char zNPCCommon::get_target_priority() {}

// Range: 0x80118480 -> 0x801184A4
// this: r3
unsigned char zNPCCommon::CanBeTargeted() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801369E4 -> 0x80136A08
*/
// Range: 0x801369E4 -> 0x80136A08
// this: r3
class behavior * zNPCCommon::get_current_behavior() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801658AC -> 0x801658B4
*/
// Range: 0x801658AC -> 0x801658B4
unsigned char zNPCCommon::player_orient_carry() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801741C8 -> 0x801745DC
*/
// Range: 0x801741C8 -> 0x801741CC
void zNPCCommon::move() {}

// Range: 0x801741CC -> 0x801741F0
// this: r3
unsigned char zNPCCommon::IsFrozen() {}

// Range: 0x801741F0 -> 0x801741F8
unsigned int zNPCCommon::GetShadowBoneIndex() {}

// Range: 0x801741F8 -> 0x80174200
float zNPCCommon::GetFunkyCheatScale() {}

// Range: 0x80174200 -> 0x80174208
unsigned char zNPCCommon::FunkyCheatEffective() {}

// Range: 0x80174208 -> 0x8017421C
// this: r0
void zNPCCommon::ResetHitBy() {}

// Range: 0x8017421C -> 0x80174220
void zNPCCommon::UpdateBlurs() {}

// Range: 0x80174220 -> 0x80174224
void zNPCCommon::BehaviorUpdate() {}

// Range: 0x80174224 -> 0x8017422C
// this: r0
void zNPCCommon::SetKiller(struct xEnt * killer /* r0 */) {}

// Range: 0x8017422C -> 0x8017428C
// this: r30
float zNPCCommon::GetFreezeTime() {
    // References
    // -> float zNPCFreezeTimeTable[3][2];
}

// Range: 0x8017428C -> 0x80174294
unsigned int zNPCCommon::GetVariant() {}

// Range: 0x80174294 -> 0x801742C4
void zNPCCommon::GetNukeBoneOffset(struct xVec3 * offset /* r4 */) {}

// Range: 0x801742C4 -> 0x801742CC
int zNPCCommon::GetNukeBoneIndex() {}

// Range: 0x801742CC -> 0x801742FC
void zNPCCommon::GetStunIconBoneOffset(struct xVec3 * offset /* r4 */) {}

// Range: 0x801742FC -> 0x8017432C
void zNPCCommon::GetShieldGeneratorBoneOffset(struct xVec3 * offset /* r4 */) {}

// Range: 0x8017432C -> 0x80174334
float zNPCCommon::GetShieldGeneratorBoneRotation() {}

// Range: 0x80174334 -> 0x8017433C
int zNPCCommon::GetShieldGeneratorBoneIndex() {}

// Range: 0x8017433C -> 0x80174344
float zNPCCommon::GetMaxShieldValue() {}

// Range: 0x80174344 -> 0x80174368
// this: r0
unsigned char zNPCCommon::HasNuke() {}

// Range: 0x80174368 -> 0x8017436C
void zNPCCommon::NPCFXRender() {}

// Range: 0x8017436C -> 0x8017439C
// this: r3
static void zNPCCommon::addBehavior(class zBehaviorImplementation * new_behavior /* r0 */, signed char priority /* r0 */) {}

// Range: 0x8017439C -> 0x801743A4
float zNPCCommon::GetScreenBlockTolerance() {}

// Range: 0x801743A4 -> 0x801743B4
char * zNPCCommon::get_type_name() {}

// Range: 0x801743B4 -> 0x801743BC
// this: r3
unsigned char zNPCCommon::HasBlockAbility() {}

// Range: 0x801743BC -> 0x801743C4
// this: r3
unsigned char zNPCCommon::CanTakeDamage() {}

// Range: 0x801743C4 -> 0x801743E8
// this: r3
float zNPCCommon::GetAIHelperHintSafeDistance() {}

// Range: 0x801743E8 -> 0x80174448
// this: r30
float zNPCCommon::GetThawTime() {
    // References
    // -> float zNPCThawTimeTable[3][2];
}

// Range: 0x80174448 -> 0x80174450
enum iSndGroupHandle zNPCCommon::GetOneLinerSoundHandle() {}

// Range: 0x80174450 -> 0x8017447C
unsigned int zNPCCommon::GetInterestingIdleAnimID() {}

// Range: 0x8017447C -> 0x801744A8
unsigned int zNPCCommon::GetInterestingMovementAnimID() {}

// Range: 0x801744A8 -> 0x801744B0
float zNPCCommon::GetInterestingIdleAnimTime() {}

// Range: 0x801744B0 -> 0x801744B4
void zNPCCommon::InterestingIdleFX() {}

// Range: 0x801744B4 -> 0x801744B8
void zNPCCommon::ResetInterestingIdleFX() {}

// Range: 0x801744B8 -> 0x801744C0
float zNPCCommon::GetShuffleAndTauntWaitTime() {}

// Range: 0x801744C0 -> 0x801744C4
void zNPCCommon::UpdateTauntFX() {}

// Range: 0x801744C4 -> 0x801744CC
struct zNPCCombatInitData * zNPCCommon::GetCombatData() {}

// Range: 0x801744CC -> 0x801744D0
void zNPCCommon::SetVariantFlags() {}

// Range: 0x801744D0 -> 0x801744D8
// this: r0
float zNPCCommon::get_shadow_strength() {}

// Range: 0x801744D8 -> 0x801744E0
// this: r3
struct xGroup * zNPCCommon::GetInterestPointerGroup() {}

// Range: 0x801744E0 -> 0x80174510
// this: r3
void zNPCCommon::preupdate(float dt /* f0 */) {}

// Range: 0x80174510 -> 0x80174518
float zNPCCommon::GetShieldMidHeight() {}

// Range: 0x80174518 -> 0x80174520
float zNPCCommon::GetShieldScale() {}

// Range: 0x80174520 -> 0x80174550
void zNPCCommon::GetShieldOffset(struct xVec3 & offset /* r4 */) {}

// Range: 0x80174550 -> 0x801745B0
// this: r29
unsigned char zNPCCommon::IsShielding() {}

// Range: 0x801745B0 -> 0x801745B8
unsigned char zNPCCommon::static_object_carry() {}

// Range: 0x801745B8 -> 0x801745C0
unsigned char zNPCCommon::ShouldEscapeGrab() {}

// Range: 0x801745C0 -> 0x801745C8
unsigned char zNPCCommon::giveBonus() {}

// Range: 0x801745C8 -> 0x801745D0
// this: r3
struct zCombatDamageInfo * zNPCCommon::GetCurrentCombatInfo() const {}

// Range: 0x801745D0 -> 0x801745D8
// this: r3
enum ezBlockDir zNPCCommon::GetBlockDirection() const {}

// Range: 0x801745D8 -> 0x801745DC
void zNPCCommon::SetProjectileExtControl() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801758AC -> 0x801758AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018C4D0 -> 0x8018C4D0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019C990 -> 0x8019C9C0
*/
// Range: 0x8019C990 -> 0x8019C9C0
// this: r3
static void zNPCCommon::addBehavior(class zBehaviorImplementation * new_behavior /* r0 */, signed char priority /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCCommon.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019CD6C -> 0x8019CD9C
*/
// Range: 0x8019CD6C -> 0x8019CD9C
// this: r3
static void zNPCCommon::addBehavior(class zBehaviorImplementation * new_behavior /* r0 */, signed char priority /* r0 */) {}


