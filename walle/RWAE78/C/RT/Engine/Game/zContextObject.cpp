/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zContextObject.cpp
*/
static int typeIndexTightrope; // size: 0x4, address: 0x80704B1C
static int typeIndexPoleSwing; // size: 0x4, address: 0x80704B20
static int typeIndexClimbableRope; // size: 0x4, address: 0x80704B24
static int typeIndexBeam; // size: 0x4, address: 0x80704B28
static int typeIndexPipe; // size: 0x4, address: 0x80704B2C
static int typeIndexPointJump; // size: 0x4, address: 0x80704B30
static class zContextObjectPriority DEFAULT_LOW_PRIORITY; // size: 0x14, address: 0x806D2D54
// Range: 0x801F66C0 -> 0x801F699C
bool zContextObject::MoveTowardsMountPoint(class zEnt * ent /* r29 */, class xVec3 * mountPoint /* r30 */, float moveSpeed /* f28 */) {
    // Local variables
    float dr; // f31
    float minDr; // f0
    class xVec3 toMountPt; // r1+0x20
    class xVec3 mountToStart; // r1+0x14
    class xVec3 mountToEnd; // r1+0x8

    // References
    // -> class zGlobals globals;
}
// signature: zContextObject::MatchOrientation(xEntFrame *, float, float)
// Range: 0x801F69A0 -> 0x801F6A4C
bool zContextObject::MatchOrientation() {
    // Local variables
    float diffAngle; // f3
    float max; // f2
}
// signature: zContextObject::MatchOrientation(xEntFrame *, const xVec3 &, float, bool)
// Range: 0x801F6A50 -> 0x801F6B70
bool zContextObject::MatchOrientation(class xEntFrame * frame /* r29 */, float dt /* f31 */, bool forward /* r30 */) {
    // Local variables
    float targetAngle; // f1
}
// Range: 0x801F6B70 -> 0x801F7410
bool zContextObject::MatchOrientation(class xEntFrame * frame /* r28 */, class xVec3 * targetAt /* r27 */, float speedAt /* f29 */, class xVec3 * targetUp /* r26 */, float speedUp /* f31 */, float dt /* f30 */) {
    // Local variables
    bool atDone; // r30
    bool upDone; // r29
    class xVec3 newAt; // r1+0x8C
    class xVec3 differenceTotalVecAt; // r1+0x80
    class xVec3 differenceVecAt; // r1+0x74
    float differenceTotalVecLengthAt; // f0
    float speed; // f1
    float differenceVecLengthAt; // f0
    class xVec3 newUp; // r1+0x68
    class xVec3 differenceTotalVecUp; // r1+0x5C
    class xVec3 differenceVecUp; // r1+0x50
    float differenceVecLengthUp; // f0
    float differenceTotalVecLengthUp; // f0
    class xMat3x3 lookMat; // r1+0x98

    // References
    // -> class xMat4x3 g_I3;
}
// signature: zContextObject::ComparePriority(zContextObjectPriority, zContextObjectPriority, xVec3) const
// Range: 0x801F7410 -> 0x801F74D0
int zContextObject::ComparePriority() const {
    // Local variables
    float testDistance; // f2
    float currentDistance; // f5
}
// Range: 0x801F74D0 -> 0x801F7554
void zContextObject::MountEnd(class zCommonPlayer * player /* r31 */) {
}
// Range: 0x801F7560 -> 0x801F75E4
void zContextObjectManager::Init() {
    // References
    // -> static int typeIndexPointJump;
    // -> static int typeIndexPipe;
    // -> static int typeIndexBeam;
    // -> static int typeIndexClimbableRope;
    // -> static int typeIndexPoleSwing;
    // -> static int typeIndexTightrope;
}
// Range: 0x801F75F0 -> 0x801F76FC
void zContextObjectManager::Setup() {
    {
        // Range: 0x801F761C -> 0x801F761C
        // Local variables
        int count; // r30

        {
            // Range: 0x801F761C -> 0x801F761C
            // Local variables
            int i; // r29
        }
    }
    {
        // Range: 0x801F76A8 -> 0x801F76A8
        // Local variables
        int count; // r29

        {
            // Range: 0x801F76A8 -> 0x801F76A8
            // Local variables
            int i; // r30
        }
    }

    // References
    // -> static int typeIndexBeam;
    // -> static int typeIndexPoleSwing;
    // -> class zGlobals globals;
}
// Range: 0x801F7700 -> 0x801F77C0
void zContextObjectManager::Dismount(class zContextObjectManager * this /* r30 */, class zCommonPlayer * player /* r31 */) {
}
// signature: zContextObjectManager::BeginUpdate(zCommonPlayer *, float)
// Range: 0x801F77C0 -> 0x801F77E8
void zContextObjectManager::BeginUpdate() {
}
// Range: 0x801F77F0 -> 0x801F7804
void zContextObjectManager::Reset() {
}
// Range: 0x801F7810 -> 0x801F7C24
void zContextObjectManager::Update(class zContextObjectManager * this /* r29 */, class zCommonPlayer * player /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x801F79A4 -> 0x801F7C0C
        // Local variables
        class zContextObjectPriority priority; // r1+0x8
    }

    // References
    // -> static int typeIndexPipe;
    // -> static int typeIndexBeam;
    // -> static int typeIndexPointJump;
    // -> class zGlobals globals;
    // -> static class zContextObjectPriority DEFAULT_LOW_PRIORITY;
}
// Range: 0x801F7C40 -> 0x801F7CD8
bool zContextObjectManager::CheckObjectType(enum zContextObjectType objectType /* r30 */) {
}
