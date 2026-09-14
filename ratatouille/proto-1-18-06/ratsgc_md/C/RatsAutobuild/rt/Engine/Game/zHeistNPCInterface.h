/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zHeistNPCInterface.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801948AC -> 0x80194A10
*/
// Range: 0x801948AC -> 0x801948B8
// this: r0
unsigned char zHeistGangMemberInterface::GetOn() {}

// Range: 0x801948B8 -> 0x801948F4
// this: r0
class zHeistGangMemberInterface * zHeistGangMemberInterfaceManager::GetInterface(int idx /* r0 */) {}

// Range: 0x801948F4 -> 0x801948FC
// this: r3
int zHeistGangMemberInterfaceManager::GetInterfaceCount() {}

// Range: 0x801948FC -> 0x80194924
// this: r0
unsigned char zHeistNPCDetectorEnemyInterface::CanDetect() {}

// Range: 0x80194924 -> 0x80194960
// this: r0
class zHeistNPCDetectorEnemyInterface * zHeistNPCDetectorEnemyInterfaceManager::GetInterface(int idx /* r0 */) {}

// Range: 0x80194960 -> 0x80194968
// this: r3
int zHeistNPCDetectorEnemyInterfaceManager::GetInterfaceCount() {}

// Range: 0x80194968 -> 0x8019498C
// this: r3
struct xVec3 * zHeistNPCDetectorViewBlocker::GetLocation() {}

// Range: 0x8019498C -> 0x80194994
void zHeistNPCDetectorViewBlocker::SetDetectorEnemyInterfaceManager(class zHeistNPCDetectorEnemyInterfaceManager * inMgr /* r0 */) {
    // References
    // -> class zHeistNPCDetectorEnemyInterfaceManager * detectorEnemyInterfaceManager;
}

// Range: 0x80194994 -> 0x8019499C
void zHeistNPCDetectorEnemyInterface::SetDetectorEnemyInterfaceManager(class zHeistNPCDetectorEnemyInterfaceManager * inMgr /* r0 */) {
    // References
    // -> class zHeistNPCDetectorEnemyInterfaceManager * detectorEnemyInterfaceManager;
}

// Range: 0x8019499C -> 0x801949A8
// this: r0
unsigned char zHeistNPCDetectorEnemyInterface::DetectionEnabled() {}

// Range: 0x801949A8 -> 0x801949B0
// this: r3
int zHeistNPCDetectorEnemyInterface::GetInterfaceArrayIdx() {}

// Range: 0x801949B0 -> 0x801949B8
// this: r3
int zHeistNPCDetectorViewBlocker::GetViewBlockerArrayIdx() {}

// Range: 0x801949B8 -> 0x801949C4
// this: r0
float zHeistNPCDetectorViewBlocker::GetSafeAreaHeight() {}

// Range: 0x801949C4 -> 0x801949D0
// this: r0
float zHeistNPCDetectorViewBlocker::GetSafeAreaLength() {}

// Range: 0x801949D0 -> 0x801949DC
// this: r0
float zHeistNPCDetectorViewBlocker::GetBlockerRadius() {}

// Range: 0x801949DC -> 0x801949E4
void zHeistGangMemberInterface::SetGangMemberInterfaceManager(class zHeistGangMemberInterfaceManager * inMgr /* r0 */) {
    // References
    // -> class zHeistGangMemberInterfaceManager * gangMemberInterfaceManager;
}

// Range: 0x801949E4 -> 0x801949F0
// this: r0
unsigned char zHeistGangMemberInterface::GetAtStart() {}

// Range: 0x801949F0 -> 0x801949F8
// this: r3
int zHeistGangMemberInterface::GetCurrentPathIdx() {}

// Range: 0x801949F8 -> 0x80194A00
// this: r3
int zHeistGangMemberInterface::GetInterfaceArrayIdx() {}

// Range: 0x80194A00 -> 0x80194A08
// this: r3
int zHeistGangMemberInterface::GetCurrentAction() {}

// Range: 0x80194A08 -> 0x80194A10
// this: r3
int zHeistGangMemberPrototypeNavData::GetCurrentIdx() {}


