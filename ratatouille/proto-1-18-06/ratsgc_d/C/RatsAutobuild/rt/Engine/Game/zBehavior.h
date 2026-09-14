/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018ADBC -> 0x8018ADF8
*/
// Range: 0x8018ADBC -> 0x8018ADE8
// this: r3
class behavior * zBehaviorManager::getCurrentBehavior() {}

// Range: 0x8018ADE8 -> 0x8018ADF8
char * behavior::getName() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018B9F8 -> 0x8018BA04
*/
// Range: 0x8018B9F8 -> 0x8018B9FC
void behavior::NoEnterCollision() {}

// Range: 0x8018B9FC -> 0x8018BA04
unsigned char behavior::TreatNoEnterAsCollision() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EB73C -> 0x801EB95C
*/
// Range: 0x801EB73C -> 0x801EB744
// this: r3
struct xEnt * behavior::getOwner() {}

// Range: 0x801EB744 -> 0x801EB74C
unsigned char behavior::systemEvent() {}

// Range: 0x801EB74C -> 0x801EB750
void behavior::beforeAnimMatrices() {}

// Range: 0x801EB750 -> 0x801EB758
unsigned char behavior::collisionResponse() {}

// Range: 0x801EB758 -> 0x801EB75C
void behavior::registerCollision() {}

// Range: 0x801EB75C -> 0x801EB760
void behavior::add_states() {}

// Range: 0x801EB760 -> 0x801EB764
void behavior::add_transitions() {}

// Range: 0x801EB764 -> 0x801EB768
void behavior::addStaticTweaks() {}

// Range: 0x801EB768 -> 0x801EB76C
void behavior::debugDisplay() {}

// Range: 0x801EB76C -> 0x801EB770
void behavior::debugRender() {}

// Range: 0x801EB770 -> 0x801EB778
unsigned char behavior::CanBeTargeted() {}

// Range: 0x801EB778 -> 0x801EB780
unsigned char behavior::CanBeInterruptedForIncidental() {}

// Range: 0x801EB780 -> 0x801EB788
// this: r3
class behavior * zBehaviorManager::getFrozenBehavior() {}

// Range: 0x801EB788 -> 0x801EB790
// this: r3
class behavior * zBehaviorManager::getFrozenCarryBehavior() {}

// Range: 0x801EB790 -> 0x801EB798
// this: r3
class behavior * zBehaviorManager::getCarryBehavior() {}

// Range: 0x801EB798 -> 0x801EB7A0
// this: r3
unsigned int behavior::getFlags() {}

// Range: 0x801EB7A0 -> 0x801EB7DC
// this: r31
struct xEnt * zBehaviorManager::getOwner() {}

// Range: 0x801EB7DC -> 0x801EB7E4
unsigned char behavior::damage() {}

// Range: 0x801EB7E4 -> 0x801EB7EC
unsigned char behavior::DamageTransitionAllowable() {}

// Range: 0x801EB7EC -> 0x801EB7F4
// this: r3
class behavior * zBehaviorManager::getFrozenDamageBehavior() {}

// Range: 0x801EB7F4 -> 0x801EB7FC
// this: r3
class behavior * zBehaviorManager::getProjectileBehavior() {}

// Range: 0x801EB7FC -> 0x801EB804
// this: r3
class behavior * zBehaviorManager::getDamageBehavior() {}

// Range: 0x801EB804 -> 0x801EB80C
// this: r3
class behavior * zBehaviorManager::getShieldBehavior() {}

// Range: 0x801EB80C -> 0x801EB814
// this: r3
class behavior * zBehaviorManager::getBlockHitBehavior() {}

// Range: 0x801EB814 -> 0x801EB81C
// this: r3
class behavior * zBehaviorManager::getBlockBehavior() {}

// Range: 0x801EB81C -> 0x801EB824
// this: r3
class behavior * zBehaviorManager::getJumpBehavior() {}

// Range: 0x801EB824 -> 0x801EB82C
// this: r3
class behavior * zBehaviorManager::getThrowBehavior() {}

// Range: 0x801EB82C -> 0x801EB834
// this: r3
class behavior * zBehaviorManager::getEscapeNoEnterBehavior() {}

// Range: 0x801EB834 -> 0x801EB83C
unsigned char behavior::EscapeNoEnterTransitionAllowable() {}

// Range: 0x801EB83C -> 0x801EB844
unsigned char behavior::isTransientComplete() {}

// Range: 0x801EB844 -> 0x801EB848
void behavior::updateBehavior() {}

// Range: 0x801EB848 -> 0x801EB854
// this: r3
void zBehaviorManager::ResetTimeInState() {}

// Range: 0x801EB854 -> 0x801EB858
void behavior::exitBehavior() {}

// Range: 0x801EB858 -> 0x801EB85C
void behavior::preRender() {}

// Range: 0x801EB85C -> 0x801EB860
void behavior::render() {}

// Range: 0x801EB860 -> 0x801EB864
void behavior::reset() {}

// Range: 0x801EB864 -> 0x801EB868
void behavior::setup() {}

// Range: 0x801EB868 -> 0x801EB86C
void behavior::SetAsNotCurrent() {}

// Range: 0x801EB86C -> 0x801EB874
// this: r3
void behavior::setupTransientDataPtr(struct zTransientNodeData * inData /* r4 */) {}

// Range: 0x801EB874 -> 0x801EB880
unsigned int behavior::getThrowAnimCode() {}

// Range: 0x801EB880 -> 0x801EB888
// this: r3
void behavior::setOwner(struct xEnt * new_owner /* r4 */) {}

// Range: 0x801EB888 -> 0x801EB88C
void behavior::SetAsCurrent() {}

// Range: 0x801EB88C -> 0x801EB890
void behavior::exit() {}

// Range: 0x801EB890 -> 0x801EB898
// this: r3
void behavior::setFlags(unsigned int inFlags /* r4 */) {}

// Range: 0x801EB898 -> 0x801EB8A0
unsigned char behavior::runnable() {}

// Range: 0x801EB8A0 -> 0x801EB8A8
unsigned char behavior::disableTargetTest() {}

// Range: 0x801EB8A8 -> 0x801EB8B0
unsigned char behavior::grabbable() {}

// Range: 0x801EB8B0 -> 0x801EB8B8
unsigned char behavior::punchable() {}

// Range: 0x801EB8B8 -> 0x801EB8EC
// this: r1+0x8
unsigned char behavior::DamageCanBeDealt() {}

// Range: 0x801EB8EC -> 0x801EB8F4
unsigned char behavior::CoverTransitionAllowable() {}

// Range: 0x801EB8F4 -> 0x801EB8FC
unsigned char behavior::CanBeFrozen() {}

// Range: 0x801EB8FC -> 0x801EB904
unsigned int behavior::ThrowableDestroy() {}

// Range: 0x801EB904 -> 0x801EB90C
unsigned int behavior::ThrowableCollide() {}

// Range: 0x801EB90C -> 0x801EB914
float behavior::delay() {}

// Range: 0x801EB914 -> 0x801EB91C
float behavior::GetAIHelperHintSafeDistance() {}

// Range: 0x801EB91C -> 0x801EB920
void behavior::addTweaks() {}

// Range: 0x801EB920 -> 0x801EB954
// this: r1+0x8
char * behavior::getTweakName() {}

// Range: 0x801EB954 -> 0x801EB95C
// this: r3
void zBehaviorManager::setDefaultBehavior(class behavior * inDefault /* r4 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80220E40 -> 0x80220E40
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025C130 -> 0x8025C1AC
*/
// Range: 0x8025C130 -> 0x8025C134
void zBehaviorImplementation::enterBehavior() {}

// Range: 0x8025C134 -> 0x8025C170
// this: r1+0x8
void zBehaviorImplementation::enterBehavior(const class behavior * prev_behavior /* r1+0xC */) {}

// Range: 0x8025C170 -> 0x8025C1AC
// this: r31
void zBehaviorImplementation::setOwner(struct xEnt * new_owner /* r30 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025D5D4 -> 0x8025D5D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026546C -> 0x8026546C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80278560 -> 0x80278560
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027F34C -> 0x8027F34C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80298920 -> 0x80298920
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BD85C -> 0x802BD944
*/
// Range: 0x802BD85C -> 0x802BD864
// this: r3
void zBehaviorManager::setNukeBehavior(class behavior * inNuke /* r4 */) {}

// Range: 0x802BD864 -> 0x802BD86C
// this: r3
class behavior * zBehaviorManager::getDeathBehavior() {}

// Range: 0x802BD86C -> 0x802BD874
// this: r3
class behavior * zBehaviorManager::getFrozenThrowBehavior() {}

// Range: 0x802BD874 -> 0x802BD8D0
// this: r1+0x8
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r31 */, class zNPCCommon * owner /* r1+0xC */, int priority /* r1+0x10 */) {}

// Range: 0x802BD90C -> 0x802BD944
// this: r1+0x8
float zBehaviorManager::GetAIHelperHintSafeDistance() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BFC34 -> 0x802BFC34
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FF188 -> 0x802FF294
*/
// Range: 0x802FF188 -> 0x802FF1E4
// this: r1+0x8
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r31 */, class zNPCCommon * owner /* r1+0xC */, int priority /* r1+0x10 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802FF5EC -> 0x802FF6F8
*/
// Range: 0x802FF5EC -> 0x802FF648
// this: r1+0x8
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r31 */, class zNPCCommon * owner /* r1+0xC */, int priority /* r1+0x10 */) {}


