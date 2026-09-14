/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zHeistNPCInterface.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80194528 -> 0x8019468C
*/
// Range: 0x80194528 -> 0x80194534
// this: r0
unsigned char zHeistGangMemberInterface::GetOn() {}

// Range: 0x80194534 -> 0x80194570
// this: r0
class zHeistGangMemberInterface * zHeistGangMemberInterfaceManager::GetInterface(int idx /* r0 */) {}

// Range: 0x80194570 -> 0x80194578
// this: r3
int zHeistGangMemberInterfaceManager::GetInterfaceCount() {}

// Range: 0x80194578 -> 0x801945A0
// this: r0
unsigned char zHeistNPCDetectorEnemyInterface::CanDetect() {}

// Range: 0x801945A0 -> 0x801945DC
// this: r0
class zHeistNPCDetectorEnemyInterface * zHeistNPCDetectorEnemyInterfaceManager::GetInterface(int idx /* r0 */) {}

// Range: 0x801945DC -> 0x801945E4
// this: r3
int zHeistNPCDetectorEnemyInterfaceManager::GetInterfaceCount() {}

// Range: 0x801945E4 -> 0x80194608
// this: r3
struct xVec3 * zHeistNPCDetectorViewBlocker::GetLocation() {}

// Range: 0x80194608 -> 0x80194610
void zHeistNPCDetectorViewBlocker::SetDetectorEnemyInterfaceManager(class zHeistNPCDetectorEnemyInterfaceManager * inMgr /* r0 */) {
    // References
    // -> class zHeistNPCDetectorEnemyInterfaceManager * detectorEnemyInterfaceManager;
}

// Range: 0x80194610 -> 0x80194618
void zHeistNPCDetectorEnemyInterface::SetDetectorEnemyInterfaceManager(class zHeistNPCDetectorEnemyInterfaceManager * inMgr /* r0 */) {
    // References
    // -> class zHeistNPCDetectorEnemyInterfaceManager * detectorEnemyInterfaceManager;
}

// Range: 0x80194618 -> 0x80194624
// this: r0
unsigned char zHeistNPCDetectorEnemyInterface::DetectionEnabled() {}

// Range: 0x80194624 -> 0x8019462C
// this: r3
int zHeistNPCDetectorEnemyInterface::GetInterfaceArrayIdx() {}

// Range: 0x8019462C -> 0x80194634
// this: r3
int zHeistNPCDetectorViewBlocker::GetViewBlockerArrayIdx() {}

// Range: 0x80194634 -> 0x80194640
// this: r0
float zHeistNPCDetectorViewBlocker::GetSafeAreaHeight() {}

// Range: 0x80194640 -> 0x8019464C
// this: r0
float zHeistNPCDetectorViewBlocker::GetSafeAreaLength() {}

// Range: 0x8019464C -> 0x80194658
// this: r0
float zHeistNPCDetectorViewBlocker::GetBlockerRadius() {}

// Range: 0x80194658 -> 0x80194660
void zHeistGangMemberInterface::SetGangMemberInterfaceManager(class zHeistGangMemberInterfaceManager * inMgr /* r0 */) {
    // References
    // -> class zHeistGangMemberInterfaceManager * gangMemberInterfaceManager;
}

// Range: 0x80194660 -> 0x8019466C
// this: r0
unsigned char zHeistGangMemberInterface::GetAtStart() {}

// Range: 0x8019466C -> 0x80194674
// this: r3
int zHeistGangMemberInterface::GetCurrentPathIdx() {}

// Range: 0x80194674 -> 0x8019467C
// this: r3
int zHeistGangMemberInterface::GetInterfaceArrayIdx() {}

// Range: 0x8019467C -> 0x80194684
// this: r3
int zHeistGangMemberInterface::GetCurrentAction() {}

// Range: 0x80194684 -> 0x8019468C
// this: r3
int zHeistGangMemberPrototypeNavData::GetCurrentIdx() {}


