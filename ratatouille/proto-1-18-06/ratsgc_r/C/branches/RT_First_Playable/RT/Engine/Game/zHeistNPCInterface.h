/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zHeistNPCInterface.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027C93C -> 0x8027CAA0
*/
// Range: 0x8027C93C -> 0x8027C948
// this: r0
unsigned char zHeistGangMemberInterface::GetOn() {}

// Range: 0x8027C948 -> 0x8027C984
// this: r0
class zHeistGangMemberInterface * zHeistGangMemberInterfaceManager::GetInterface(int idx /* r0 */) {}

// Range: 0x8027C984 -> 0x8027C98C
// this: r3
int zHeistGangMemberInterfaceManager::GetInterfaceCount() {}

// Range: 0x8027C98C -> 0x8027C9B4
// this: r0
unsigned char zHeistNPCDetectorEnemyInterface::CanDetect() {}

// Range: 0x8027C9B4 -> 0x8027C9F0
// this: r0
class zHeistNPCDetectorEnemyInterface * zHeistNPCDetectorEnemyInterfaceManager::GetInterface(int idx /* r0 */) {}

// Range: 0x8027C9F0 -> 0x8027C9F8
// this: r3
int zHeistNPCDetectorEnemyInterfaceManager::GetInterfaceCount() {}

// Range: 0x8027C9F8 -> 0x8027CA1C
// this: r3
struct xVec3 * zHeistNPCDetectorViewBlocker::GetLocation() {}

// Range: 0x8027CA1C -> 0x8027CA24
void zHeistNPCDetectorViewBlocker::SetDetectorEnemyInterfaceManager(class zHeistNPCDetectorEnemyInterfaceManager * inMgr /* r0 */) {
    // References
    // -> class zHeistNPCDetectorEnemyInterfaceManager * detectorEnemyInterfaceManager;
}

// Range: 0x8027CA24 -> 0x8027CA2C
void zHeistNPCDetectorEnemyInterface::SetDetectorEnemyInterfaceManager(class zHeistNPCDetectorEnemyInterfaceManager * inMgr /* r0 */) {
    // References
    // -> class zHeistNPCDetectorEnemyInterfaceManager * detectorEnemyInterfaceManager;
}

// Range: 0x8027CA2C -> 0x8027CA38
// this: r0
unsigned char zHeistNPCDetectorEnemyInterface::DetectionEnabled() {}

// Range: 0x8027CA38 -> 0x8027CA40
// this: r3
int zHeistNPCDetectorEnemyInterface::GetInterfaceArrayIdx() {}

// Range: 0x8027CA40 -> 0x8027CA48
// this: r3
int zHeistNPCDetectorViewBlocker::GetViewBlockerArrayIdx() {}

// Range: 0x8027CA48 -> 0x8027CA54
// this: r0
float zHeistNPCDetectorViewBlocker::GetSafeAreaHeight() {}

// Range: 0x8027CA54 -> 0x8027CA60
// this: r0
float zHeistNPCDetectorViewBlocker::GetSafeAreaLength() {}

// Range: 0x8027CA60 -> 0x8027CA6C
// this: r0
float zHeistNPCDetectorViewBlocker::GetBlockerRadius() {}

// Range: 0x8027CA6C -> 0x8027CA74
void zHeistGangMemberInterface::SetGangMemberInterfaceManager(class zHeistGangMemberInterfaceManager * inMgr /* r0 */) {
    // References
    // -> class zHeistGangMemberInterfaceManager * gangMemberInterfaceManager;
}

// Range: 0x8027CA74 -> 0x8027CA80
// this: r0
unsigned char zHeistGangMemberInterface::GetAtStart() {}

// Range: 0x8027CA80 -> 0x8027CA88
// this: r3
int zHeistGangMemberInterface::GetCurrentPathIdx() {}

// Range: 0x8027CA88 -> 0x8027CA90
// this: r3
int zHeistGangMemberInterface::GetInterfaceArrayIdx() {}

// Range: 0x8027CA90 -> 0x8027CA98
// this: r3
int zHeistGangMemberInterface::GetCurrentAction() {}

// Range: 0x8027CA98 -> 0x8027CAA0
// this: r3
int zHeistGangMemberPrototypeNavData::GetCurrentIdx() {}


