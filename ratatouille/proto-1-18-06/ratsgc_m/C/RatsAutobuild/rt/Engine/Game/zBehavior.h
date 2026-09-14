/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F983C -> 0x800F9A10
*/
// Range: 0x800F983C -> 0x800F9844
unsigned char behavior::systemEvent() {}

// Range: 0x800F9844 -> 0x800F9848
void behavior::beforeAnimMatrices() {}

// Range: 0x800F9848 -> 0x800F9850
unsigned char behavior::collisionResponse() {}

// Range: 0x800F9850 -> 0x800F9854
void behavior::registerCollision() {}

// Range: 0x800F9854 -> 0x800F9858
void behavior::add_states() {}

// Range: 0x800F9858 -> 0x800F985C
void behavior::add_transitions() {}

// Range: 0x800F985C -> 0x800F9868
char * behavior::getName() {}

// Range: 0x800F9868 -> 0x800F9870
unsigned char behavior::CanBeTargeted() {}

// Range: 0x800F9870 -> 0x800F9878
unsigned char behavior::CanBeInterruptedForIncidental() {}

// Range: 0x800F9878 -> 0x800F9880
// this: r3
class behavior * zBehaviorManager::getFrozenBehavior() {}

// Range: 0x800F9880 -> 0x800F9888
// this: r3
class behavior * zBehaviorManager::getFrozenCarryBehavior() {}

// Range: 0x800F9888 -> 0x800F9890
// this: r3
class behavior * zBehaviorManager::getCarryBehavior() {}

// Range: 0x800F9890 -> 0x800F9898
// this: r3
unsigned int behavior::getFlags() {}

// Range: 0x800F9898 -> 0x800F98A0
// this: r3
struct xEnt * behavior::getOwner() {}

// Range: 0x800F98A0 -> 0x800F98D0
// this: r3
struct xEnt * zBehaviorManager::getOwner() {}

// Range: 0x800F98D0 -> 0x800F98D8
unsigned char behavior::damage() {}

// Range: 0x800F98D8 -> 0x800F98E0
unsigned char behavior::DamageTransitionAllowable() {}

// Range: 0x800F98E0 -> 0x800F98E8
// this: r3
class behavior * zBehaviorManager::getFrozenDamageBehavior() {}

// Range: 0x800F98E8 -> 0x800F98F0
// this: r3
class behavior * zBehaviorManager::getProjectileBehavior() {}

// Range: 0x800F98F0 -> 0x800F98F8
// this: r3
class behavior * zBehaviorManager::getDamageBehavior() {}

// Range: 0x800F98F8 -> 0x800F9900
// this: r3
class behavior * zBehaviorManager::getShieldBehavior() {}

// Range: 0x800F9900 -> 0x800F9908
// this: r3
class behavior * zBehaviorManager::getBlockHitBehavior() {}

// Range: 0x800F9908 -> 0x800F9910
// this: r3
class behavior * zBehaviorManager::getBlockBehavior() {}

// Range: 0x800F9910 -> 0x800F9918
// this: r3
class behavior * zBehaviorManager::getJumpBehavior() {}

// Range: 0x800F9918 -> 0x800F9920
// this: r3
class behavior * zBehaviorManager::getThrowBehavior() {}

// Range: 0x800F9920 -> 0x800F9928
// this: r3
class behavior * zBehaviorManager::getEscapeNoEnterBehavior() {}

// Range: 0x800F9928 -> 0x800F9930
unsigned char behavior::EscapeNoEnterTransitionAllowable() {}

// Range: 0x800F9930 -> 0x800F9938
unsigned char behavior::isTransientComplete() {}

// Range: 0x800F9938 -> 0x800F993C
void behavior::updateBehavior() {}

// Range: 0x800F993C -> 0x800F9948
// this: r0
void zBehaviorManager::ResetTimeInState() {}

// Range: 0x800F9948 -> 0x800F994C
void behavior::exitBehavior() {}

// Range: 0x800F994C -> 0x800F9950
void behavior::preRender() {}

// Range: 0x800F9950 -> 0x800F9954
void behavior::render() {}

// Range: 0x800F9954 -> 0x800F9958
void behavior::reset() {}

// Range: 0x800F9958 -> 0x800F995C
void behavior::setup() {}

// Range: 0x800F995C -> 0x800F9960
void behavior::SetAsNotCurrent() {}

// Range: 0x800F9960 -> 0x800F9968
// this: r0
void behavior::setupTransientDataPtr(struct zTransientNodeData * inData /* r0 */) {}

// Range: 0x800F9968 -> 0x800F9974
unsigned int behavior::getThrowAnimCode() {}

// Range: 0x800F9974 -> 0x800F997C
// this: r0
void behavior::setOwner(struct xEnt * new_owner /* r0 */) {}

// Range: 0x800F997C -> 0x800F9980
void behavior::SetAsCurrent() {}

// Range: 0x800F9980 -> 0x800F9984
void behavior::exit() {}

// Range: 0x800F9984 -> 0x800F998C
// this: r0
void behavior::setFlags(unsigned int inFlags /* r0 */) {}

// Range: 0x800F998C -> 0x800F9994
unsigned char behavior::runnable() {}

// Range: 0x800F9994 -> 0x800F999C
unsigned char behavior::disableTargetTest() {}

// Range: 0x800F999C -> 0x800F99A4
unsigned char behavior::grabbable() {}

// Range: 0x800F99A4 -> 0x800F99AC
unsigned char behavior::punchable() {}

// Range: 0x800F99AC -> 0x800F99D8
// this: r0
unsigned char behavior::DamageCanBeDealt() {}

// Range: 0x800F99D8 -> 0x800F99E0
unsigned char behavior::CoverTransitionAllowable() {}

// Range: 0x800F99E0 -> 0x800F99E8
unsigned char behavior::CanBeFrozen() {}

// Range: 0x800F99E8 -> 0x800F99F0
unsigned int behavior::ThrowableDestroy() {}

// Range: 0x800F99F0 -> 0x800F99F8
unsigned int behavior::ThrowableCollide() {}

// Range: 0x800F99F8 -> 0x800F9A00
float behavior::delay() {}

// Range: 0x800F9A00 -> 0x800F9A08
float behavior::GetAIHelperHintSafeDistance() {}

// Range: 0x800F9A08 -> 0x800F9A10
// this: r0
void zBehaviorManager::setDefaultBehavior(class behavior * inDefault /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80118120 -> 0x80118120
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80136684 -> 0x801366D8
*/
// Range: 0x80136684 -> 0x80136688
void zBehaviorImplementation::enterBehavior() {}

// Range: 0x80136688 -> 0x801366B4
// this: r0
void zBehaviorImplementation::enterBehavior(const class behavior * prev_behavior /* r0 */) {}

// Range: 0x801366B4 -> 0x801366D8
// this: r0
void zBehaviorImplementation::setOwner(struct xEnt * new_owner /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80137604 -> 0x80137604
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013CCDC -> 0x8013CCDC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80149BF8 -> 0x80149BF8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014D3D4 -> 0x8014D3D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015C9A4 -> 0x8015C9A4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80173D68 -> 0x80173E44
*/
// Range: 0x80173D68 -> 0x80173D70
// this: r0
void zBehaviorManager::setNukeBehavior(class behavior * inNuke /* r0 */) {}

// Range: 0x80173D70 -> 0x80173D78
// this: r3
class behavior * zBehaviorManager::getFrozenThrowBehavior() {}

// Range: 0x80173D78 -> 0x80173D80
// this: r3
class behavior * zBehaviorManager::getDeathBehavior() {}

// Range: 0x80173D80 -> 0x80173DD8
// this: r29
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r30 */, class zNPCCommon * owner /* r5 */, int priority /* r31 */) {}

// Range: 0x80173E14 -> 0x80173E44
// this: r0
float zBehaviorManager::GetAIHelperHintSafeDistance() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80175528 -> 0x80175528
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019C63C -> 0x8019C728
*/
// Range: 0x8019C63C -> 0x8019C694
// this: r29
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r30 */, class zNPCCommon * owner /* r5 */, int priority /* r31 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zBehavior.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019CA18 -> 0x8019CB04
*/
// Range: 0x8019CA18 -> 0x8019CA70
// this: r29
static void zBehaviorManager::addBehavior(class zBehaviorImplementation * new_behavior /* r30 */, class zNPCCommon * owner /* r5 */, int priority /* r31 */) {}


