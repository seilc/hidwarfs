/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801437BC -> 0x801437F4
*/
// Range: 0x801437BC -> 0x801437E4
// this: r3
class behavior * zBehaviorManager::getCurrentBehavior() {}

// Range: 0x801437E4 -> 0x801437F4
char * behavior::getName() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801442AC -> 0x801442B8
*/
// Range: 0x801442AC -> 0x801442B0
void behavior::NoEnterCollision() {}

// Range: 0x801442B0 -> 0x801442B8
unsigned char behavior::TreatNoEnterAsCollision() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80195908 -> 0x80195B0C
*/
// Range: 0x80195908 -> 0x80195910
// this: r3
struct xEnt * behavior::getOwner() {}

// Range: 0x80195910 -> 0x80195918
unsigned char behavior::systemEvent() {}

// Range: 0x80195918 -> 0x8019591C
void behavior::beforeAnimMatrices() {}

// Range: 0x8019591C -> 0x80195924
unsigned char behavior::collisionResponse() {}

// Range: 0x80195924 -> 0x80195928
void behavior::registerCollision() {}

// Range: 0x80195928 -> 0x8019592C
void behavior::add_states() {}

// Range: 0x8019592C -> 0x80195930
void behavior::add_transitions() {}

// Range: 0x80195930 -> 0x80195934
void behavior::addStaticTweaks() {}

// Range: 0x80195934 -> 0x80195938
void behavior::debugDisplay() {}

// Range: 0x80195938 -> 0x8019593C
void behavior::debugRender() {}

// Range: 0x8019593C -> 0x80195944
unsigned char behavior::CanBeTargeted() {}

// Range: 0x80195944 -> 0x8019594C
unsigned char behavior::CanBeInterruptedForIncidental() {}

// Range: 0x8019594C -> 0x80195954
// this: r3
class behavior * zBehaviorManager::getFrozenBehavior() {}

// Range: 0x80195954 -> 0x8019595C
// this: r3
class behavior * zBehaviorManager::getFrozenCarryBehavior() {}

// Range: 0x8019595C -> 0x80195964
// this: r3
class behavior * zBehaviorManager::getCarryBehavior() {}

// Range: 0x80195964 -> 0x8019596C
// this: r3
unsigned int behavior::getFlags() {}

// Range: 0x8019596C -> 0x8019599C
// this: r3
struct xEnt * zBehaviorManager::getOwner() {}

// Range: 0x8019599C -> 0x801959A4
unsigned char behavior::damage() {}

// Range: 0x801959A4 -> 0x801959AC
unsigned char behavior::DamageTransitionAllowable() {}

// Range: 0x801959AC -> 0x801959B4
// this: r3
class behavior * zBehaviorManager::getFrozenDamageBehavior() {}

// Range: 0x801959B4 -> 0x801959BC
// this: r3
class behavior * zBehaviorManager::getProjectileBehavior() {}

// Range: 0x801959BC -> 0x801959C4
// this: r3
class behavior * zBehaviorManager::getDamageBehavior() {}

// Range: 0x801959C4 -> 0x801959CC
// this: r3
class behavior * zBehaviorManager::getShieldBehavior() {}

// Range: 0x801959CC -> 0x801959D4
// this: r3
class behavior * zBehaviorManager::getBlockHitBehavior() {}

// Range: 0x801959D4 -> 0x801959DC
// this: r3
class behavior * zBehaviorManager::getBlockBehavior() {}

// Range: 0x801959DC -> 0x801959E4
// this: r3
class behavior * zBehaviorManager::getJumpBehavior() {}

// Range: 0x801959E4 -> 0x801959EC
// this: r3
class behavior * zBehaviorManager::getThrowBehavior() {}

// Range: 0x801959EC -> 0x801959F4
// this: r3
class behavior * zBehaviorManager::getEscapeNoEnterBehavior() {}

// Range: 0x801959F4 -> 0x801959FC
unsigned char behavior::EscapeNoEnterTransitionAllowable() {}

// Range: 0x801959FC -> 0x80195A04
unsigned char behavior::isTransientComplete() {}

// Range: 0x80195A04 -> 0x80195A08
void behavior::updateBehavior() {}

// Range: 0x80195A08 -> 0x80195A14
// this: r0
void zBehaviorManager::ResetTimeInState() {}

// Range: 0x80195A14 -> 0x80195A18
void behavior::exitBehavior() {}

// Range: 0x80195A18 -> 0x80195A1C
void behavior::preRender() {}

// Range: 0x80195A1C -> 0x80195A20
void behavior::render() {}

// Range: 0x80195A20 -> 0x80195A24
void behavior::reset() {}

// Range: 0x80195A24 -> 0x80195A28
void behavior::setup() {}

// Range: 0x80195A28 -> 0x80195A2C
void behavior::SetAsNotCurrent() {}

// Range: 0x80195A2C -> 0x80195A34
// this: r0
void behavior::setupTransientDataPtr(struct zTransientNodeData * inData /* r0 */) {}

// Range: 0x80195A34 -> 0x80195A40
unsigned int behavior::getThrowAnimCode() {}

// Range: 0x80195A40 -> 0x80195A48
// this: r0
void behavior::setOwner(struct xEnt * new_owner /* r0 */) {}

// Range: 0x80195A48 -> 0x80195A4C
void behavior::SetAsCurrent() {}

// Range: 0x80195A4C -> 0x80195A50
void behavior::exit() {}

// Range: 0x80195A50 -> 0x80195A58
// this: r0
void behavior::setFlags(unsigned int inFlags /* r0 */) {}

// Range: 0x80195A58 -> 0x80195A60
unsigned char behavior::runnable() {}

// Range: 0x80195A60 -> 0x80195A68
unsigned char behavior::disableTargetTest() {}

// Range: 0x80195A68 -> 0x80195A70
unsigned char behavior::grabbable() {}

// Range: 0x80195A70 -> 0x80195A78
unsigned char behavior::punchable() {}

// Range: 0x80195A78 -> 0x80195AA4
// this: r0
unsigned char behavior::DamageCanBeDealt() {}

// Range: 0x80195AA4 -> 0x80195AAC
unsigned char behavior::CoverTransitionAllowable() {}

// Range: 0x80195AAC -> 0x80195AB4
unsigned char behavior::CanBeFrozen() {}

// Range: 0x80195AB4 -> 0x80195ABC
unsigned int behavior::ThrowableDestroy() {}

// Range: 0x80195ABC -> 0x80195AC4
unsigned int behavior::ThrowableCollide() {}

// Range: 0x80195AC4 -> 0x80195ACC
float behavior::delay() {}

// Range: 0x80195ACC -> 0x80195AD4
float behavior::GetAIHelperHintSafeDistance() {}

// Range: 0x80195AD4 -> 0x80195AD8
void behavior::addTweaks() {}

// Range: 0x80195AD8 -> 0x80195B04
// this: r0
char * behavior::getTweakName() {}

// Range: 0x80195B04 -> 0x80195B0C
// this: r0
void zBehaviorManager::setDefaultBehavior(class behavior * inDefault /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C3244 -> 0x801C3244
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F66CC -> 0x801F6720
*/
// Range: 0x801F66CC -> 0x801F66D0
void zBehaviorImplementation::enterBehavior() {}

// Range: 0x801F66D0 -> 0x801F66FC
// this: r0
void zBehaviorImplementation::enterBehavior(const class behavior * prev_behavior /* r0 */) {}

// Range: 0x801F66FC -> 0x801F6720
// this: r0
void zBehaviorImplementation::setOwner(struct xEnt * new_owner /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F78C0 -> 0x801F78C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FE6FC -> 0x801FE6FC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020FAEC -> 0x8020FAEC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80216118 -> 0x80216118
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022CDE4 -> 0x8022CDE4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024DF80 -> 0x8024E06C
*/
// Range: 0x8024DF80 -> 0x8024DF88
// this: r0
void zBehaviorManager::setNukeBehavior(class behavior * inNuke /* r0 */) {}

// Range: 0x8024DF88 -> 0x8024DF90
// this: r3
class behavior * zBehaviorManager::getDeathBehavior() {}

// Range: 0x8024DF90 -> 0x8024DF98
// this: r3
class behavior * zBehaviorManager::getFrozenThrowBehavior() {}

// Range: 0x8024DF98 -> 0x8024E000
// this: r29
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r30 */, class zNPCCommon * owner /* r5 */, int priority /* r31 */) {}

// Range: 0x8024E03C -> 0x8024E06C
// this: r0
float zBehaviorManager::GetAIHelperHintSafeDistance() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024FFE4 -> 0x8024FFE4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802874BC -> 0x802875D0
*/
// Range: 0x802874BC -> 0x80287524
// this: r29
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r30 */, class zNPCCommon * owner /* r5 */, int priority /* r31 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802878C4 -> 0x802879D8
*/
// Range: 0x802878C4 -> 0x8028792C
// this: r29
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r30 */, class zNPCCommon * owner /* r5 */, int priority /* r31 */) {}


