/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zHeistNPCInterface.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F2A30 -> 0x802F2BE8
*/
// Range: 0x802F2A30 -> 0x802F2A3C
// this: r3
unsigned char zHeistGangMemberInterface::GetOn() {}

// Range: 0x802F2A3C -> 0x802F2A94
// this: r3
class zHeistGangMemberInterface * zHeistGangMemberInterfaceManager::GetInterface(int idx /* r4 */) {}

// Range: 0x802F2A94 -> 0x802F2A9C
// this: r3
int zHeistGangMemberInterfaceManager::GetInterfaceCount() {}

// Range: 0x802F2A9C -> 0x802F2AD4
// this: r3
unsigned char zHeistNPCDetectorEnemyInterface::CanDetect() {}

// Range: 0x802F2AD4 -> 0x802F2B2C
// this: r3
class zHeistNPCDetectorEnemyInterface * zHeistNPCDetectorEnemyInterfaceManager::GetInterface(int idx /* r4 */) {}

// Range: 0x802F2B2C -> 0x802F2B34
// this: r3
int zHeistNPCDetectorEnemyInterfaceManager::GetInterfaceCount() {}

// Range: 0x802F2B34 -> 0x802F2B64
// this: r31
struct xVec3 * zHeistNPCDetectorViewBlocker::GetLocation() {}

// Range: 0x802F2B64 -> 0x802F2B6C
void zHeistNPCDetectorViewBlocker::SetDetectorEnemyInterfaceManager(class zHeistNPCDetectorEnemyInterfaceManager * inMgr /* r3 */) {
    // References
    // -> class zHeistNPCDetectorEnemyInterfaceManager * detectorEnemyInterfaceManager;
}

// Range: 0x802F2B6C -> 0x802F2B74
void zHeistNPCDetectorEnemyInterface::SetDetectorEnemyInterfaceManager(class zHeistNPCDetectorEnemyInterfaceManager * inMgr /* r3 */) {
    // References
    // -> class zHeistNPCDetectorEnemyInterfaceManager * detectorEnemyInterfaceManager;
}

// Range: 0x802F2B74 -> 0x802F2B80
// this: r3
unsigned char zHeistNPCDetectorEnemyInterface::DetectionEnabled() {}

// Range: 0x802F2B80 -> 0x802F2B88
// this: r3
int zHeistNPCDetectorEnemyInterface::GetInterfaceArrayIdx() {}

// Range: 0x802F2B88 -> 0x802F2B90
// this: r3
int zHeistNPCDetectorViewBlocker::GetViewBlockerArrayIdx() {}

// Range: 0x802F2B90 -> 0x802F2B9C
// this: r3
float zHeistNPCDetectorViewBlocker::GetSafeAreaHeight() {}

// Range: 0x802F2B9C -> 0x802F2BA8
// this: r3
float zHeistNPCDetectorViewBlocker::GetSafeAreaLength() {}

// Range: 0x802F2BA8 -> 0x802F2BB4
// this: r3
float zHeistNPCDetectorViewBlocker::GetBlockerRadius() {}

// Range: 0x802F2BB4 -> 0x802F2BBC
void zHeistGangMemberInterface::SetGangMemberInterfaceManager(class zHeistGangMemberInterfaceManager * inMgr /* r3 */) {
    // References
    // -> class zHeistGangMemberInterfaceManager * gangMemberInterfaceManager;
}

// Range: 0x802F2BBC -> 0x802F2BC8
// this: r3
unsigned char zHeistGangMemberInterface::GetAtStart() {}

// Range: 0x802F2BC8 -> 0x802F2BD0
// this: r3
int zHeistGangMemberInterface::GetCurrentPathIdx() {}

// Range: 0x802F2BD0 -> 0x802F2BD8
// this: r3
int zHeistGangMemberInterface::GetInterfaceArrayIdx() {}

// Range: 0x802F2BD8 -> 0x802F2BE0
// this: r3
int zHeistGangMemberInterface::GetCurrentAction() {}

// Range: 0x802F2BE0 -> 0x802F2BE8
// this: r3
int zHeistGangMemberPrototypeNavData::GetCurrentIdx() {}


