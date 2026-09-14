/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C2E54 -> 0x800C2E88
*/
// Range: 0x800C2E54 -> 0x800C2E58
void behavior::NoEnterCollision() {}

// Range: 0x800C2E58 -> 0x800C2E60
unsigned char behavior::TreatNoEnterAsCollision() {}

// Range: 0x800C2E60 -> 0x800C2E88
// this: r3
class behavior * zBehaviorManager::getCurrentBehavior() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F9BC0 -> 0x800F9D94
*/
// Range: 0x800F9BC0 -> 0x800F9BC8
unsigned char behavior::systemEvent() {}

// Range: 0x800F9BC8 -> 0x800F9BCC
void behavior::beforeAnimMatrices() {}

// Range: 0x800F9BCC -> 0x800F9BD4
unsigned char behavior::collisionResponse() {}

// Range: 0x800F9BD4 -> 0x800F9BD8
void behavior::registerCollision() {}

// Range: 0x800F9BD8 -> 0x800F9BDC
void behavior::add_states() {}

// Range: 0x800F9BDC -> 0x800F9BE0
void behavior::add_transitions() {}

// Range: 0x800F9BE0 -> 0x800F9BEC
char * behavior::getName() {}

// Range: 0x800F9BEC -> 0x800F9BF4
unsigned char behavior::CanBeTargeted() {}

// Range: 0x800F9BF4 -> 0x800F9BFC
unsigned char behavior::CanBeInterruptedForIncidental() {}

// Range: 0x800F9BFC -> 0x800F9C04
// this: r3
class behavior * zBehaviorManager::getFrozenBehavior() {}

// Range: 0x800F9C04 -> 0x800F9C0C
// this: r3
class behavior * zBehaviorManager::getFrozenCarryBehavior() {}

// Range: 0x800F9C0C -> 0x800F9C14
// this: r3
class behavior * zBehaviorManager::getCarryBehavior() {}

// Range: 0x800F9C14 -> 0x800F9C1C
// this: r3
unsigned int behavior::getFlags() {}

// Range: 0x800F9C1C -> 0x800F9C24
// this: r3
struct xEnt * behavior::getOwner() {}

// Range: 0x800F9C24 -> 0x800F9C54
// this: r3
struct xEnt * zBehaviorManager::getOwner() {}

// Range: 0x800F9C54 -> 0x800F9C5C
unsigned char behavior::damage() {}

// Range: 0x800F9C5C -> 0x800F9C64
unsigned char behavior::DamageTransitionAllowable() {}

// Range: 0x800F9C64 -> 0x800F9C6C
// this: r3
class behavior * zBehaviorManager::getFrozenDamageBehavior() {}

// Range: 0x800F9C6C -> 0x800F9C74
// this: r3
class behavior * zBehaviorManager::getProjectileBehavior() {}

// Range: 0x800F9C74 -> 0x800F9C7C
// this: r3
class behavior * zBehaviorManager::getDamageBehavior() {}

// Range: 0x800F9C7C -> 0x800F9C84
// this: r3
class behavior * zBehaviorManager::getShieldBehavior() {}

// Range: 0x800F9C84 -> 0x800F9C8C
// this: r3
class behavior * zBehaviorManager::getBlockHitBehavior() {}

// Range: 0x800F9C8C -> 0x800F9C94
// this: r3
class behavior * zBehaviorManager::getBlockBehavior() {}

// Range: 0x800F9C94 -> 0x800F9C9C
// this: r3
class behavior * zBehaviorManager::getJumpBehavior() {}

// Range: 0x800F9C9C -> 0x800F9CA4
// this: r3
class behavior * zBehaviorManager::getThrowBehavior() {}

// Range: 0x800F9CA4 -> 0x800F9CAC
// this: r3
class behavior * zBehaviorManager::getEscapeNoEnterBehavior() {}

// Range: 0x800F9CAC -> 0x800F9CB4
unsigned char behavior::EscapeNoEnterTransitionAllowable() {}

// Range: 0x800F9CB4 -> 0x800F9CBC
unsigned char behavior::isTransientComplete() {}

// Range: 0x800F9CBC -> 0x800F9CC0
void behavior::updateBehavior() {}

// Range: 0x800F9CC0 -> 0x800F9CCC
// this: r0
void zBehaviorManager::ResetTimeInState() {}

// Range: 0x800F9CCC -> 0x800F9CD0
void behavior::exitBehavior() {}

// Range: 0x800F9CD0 -> 0x800F9CD4
void behavior::preRender() {}

// Range: 0x800F9CD4 -> 0x800F9CD8
void behavior::render() {}

// Range: 0x800F9CD8 -> 0x800F9CDC
void behavior::reset() {}

// Range: 0x800F9CDC -> 0x800F9CE0
void behavior::setup() {}

// Range: 0x800F9CE0 -> 0x800F9CE4
void behavior::SetAsNotCurrent() {}

// Range: 0x800F9CE4 -> 0x800F9CEC
// this: r0
void behavior::setupTransientDataPtr(struct zTransientNodeData * inData /* r0 */) {}

// Range: 0x800F9CEC -> 0x800F9CF8
unsigned int behavior::getThrowAnimCode() {}

// Range: 0x800F9CF8 -> 0x800F9D00
// this: r0
void behavior::setOwner(struct xEnt * new_owner /* r0 */) {}

// Range: 0x800F9D00 -> 0x800F9D04
void behavior::SetAsCurrent() {}

// Range: 0x800F9D04 -> 0x800F9D08
void behavior::exit() {}

// Range: 0x800F9D08 -> 0x800F9D10
// this: r0
void behavior::setFlags(unsigned int inFlags /* r0 */) {}

// Range: 0x800F9D10 -> 0x800F9D18
unsigned char behavior::runnable() {}

// Range: 0x800F9D18 -> 0x800F9D20
unsigned char behavior::disableTargetTest() {}

// Range: 0x800F9D20 -> 0x800F9D28
unsigned char behavior::grabbable() {}

// Range: 0x800F9D28 -> 0x800F9D30
unsigned char behavior::punchable() {}

// Range: 0x800F9D30 -> 0x800F9D5C
// this: r0
unsigned char behavior::DamageCanBeDealt() {}

// Range: 0x800F9D5C -> 0x800F9D64
unsigned char behavior::CoverTransitionAllowable() {}

// Range: 0x800F9D64 -> 0x800F9D6C
unsigned char behavior::CanBeFrozen() {}

// Range: 0x800F9D6C -> 0x800F9D74
unsigned int behavior::ThrowableDestroy() {}

// Range: 0x800F9D74 -> 0x800F9D7C
unsigned int behavior::ThrowableCollide() {}

// Range: 0x800F9D7C -> 0x800F9D84
float behavior::delay() {}

// Range: 0x800F9D84 -> 0x800F9D8C
float behavior::GetAIHelperHintSafeDistance() {}

// Range: 0x800F9D8C -> 0x800F9D94
// this: r0
void zBehaviorManager::setDefaultBehavior(class behavior * inDefault /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801184A4 -> 0x801184A4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80136A08 -> 0x80136A5C
*/
// Range: 0x80136A08 -> 0x80136A0C
void zBehaviorImplementation::enterBehavior() {}

// Range: 0x80136A0C -> 0x80136A38
// this: r0
void zBehaviorImplementation::enterBehavior(const class behavior * prev_behavior /* r0 */) {}

// Range: 0x80136A38 -> 0x80136A5C
// this: r0
void zBehaviorImplementation::setOwner(struct xEnt * new_owner /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80137988 -> 0x80137988
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013D060 -> 0x8013D060
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80149F7C -> 0x80149F7C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014D758 -> 0x8014D758
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015CD28 -> 0x8015CD28
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801740EC -> 0x801741C8
*/
// Range: 0x801740EC -> 0x801740F4
// this: r0
void zBehaviorManager::setNukeBehavior(class behavior * inNuke /* r0 */) {}

// Range: 0x801740F4 -> 0x801740FC
// this: r3
class behavior * zBehaviorManager::getFrozenThrowBehavior() {}

// Range: 0x801740FC -> 0x80174104
// this: r3
class behavior * zBehaviorManager::getDeathBehavior() {}

// Range: 0x80174104 -> 0x8017415C
// this: r29
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r30 */, class zNPCCommon * owner /* r5 */, int priority /* r31 */) {}

// Range: 0x80174198 -> 0x801741C8
// this: r0
float zBehaviorManager::GetAIHelperHintSafeDistance() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801758AC -> 0x801758AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019C9C0 -> 0x8019CAAC
*/
// Range: 0x8019C9C0 -> 0x8019CA18
// this: r29
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r30 */, class zNPCCommon * owner /* r5 */, int priority /* r31 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019CD9C -> 0x8019CE88
*/
// Range: 0x8019CD9C -> 0x8019CDF4
// this: r29
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r30 */, class zNPCCommon * owner /* r5 */, int priority /* r31 */) {}


