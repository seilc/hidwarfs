/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zAvoidanceDetection.cpp
*/
// signature: MyCollisionCollector::MyCollisionCollector(const hkpCollidable *)
// Range: 0x8009A260 -> 0x8009A29C
void * MyCollisionCollector::MyCollisionCollector() {
    // References
    // -> struct {} __vt__20MyCollisionCollector;
}
// signature: MyCollisionCollector::addCdPoint(const hkpCdPoint &)
// Range: 0x80156950 -> 0x80156B58
void MyCollisionCollector::addCdPoint() {
    // Local variables
    class xBase * baseA; // r7
    class hkpRigidBody * rigidA; // r0
    class hkpPhantom * phantomA; // r0
    class xBase * baseB; // r7
    class hkpRigidBody * rigidB; // r0
    class hkpPhantom * phantomB; // r0
    class hkVector4 normal; // r1+0x10
}
// signature: DetectAvoidance(const hkpCharacterProxy *, const xVec3 &, const xVec3 &, float, float, float, xVec3 &, xVec3 &, xBase *&)
// Range: 0x80099CB0 -> 0x8009A184
bool DetectAvoidance(class hkpCharacterProxy * proxy /* r24 */, class xVec3 & start /* r28 */, class xVec3 & testDir /* r29 */, float testDist /* f30 */, class xVec3 & closestContact /* r23 */, class xVec3 & avoidDir /* r30 */, class xBase * & collidedObj /* r31 */) {
    // Local variables
    class xVec3 halfExtents; // r1+0xDC
    class xMat4x3 transform; // r1+0x140
    class xVec3 end; // r1+0xD0
    class hkVector4 to; // r1+0xC0
    class xQuat quat; // r1+0xB0
    class hkpBoxShape shape; // r1+0x110
    class hkMotionState motionState; // r1+0x1D0
    class hkpCollidable collidable; // r1+0x180
    class hkpLinearCastInput input; // r1+0xF0
    class hkpWorld * world; // r26
    class MyCollisionCollector collector; // r1+0x280
    class hkVector4 contactPoint; // r1+0xA0
    class hkpCollidable * collidableA; // reg65535
    class hkpCollidable * collidableB; // r25
    class hkpRigidBody * rigidA; // r0
    class hkpPhantom * phantomA; // r0
    class hkpRigidBody * rigidB; // r24
    class hkpPhantom * phantomB; // r0
    class hkpCollidable * hitCollidable; // r23
    class hkVector4 objCenter; // r1+0x90
    class xVec3 center; // r1+0x78
    class xVec3 toCenter; // r1+0x6C
    class xVec3 projected; // r1+0x60

    // References
    // -> float hkConvexShapeDefaultRadius;
    // -> class xVec3 m_UnitAxisY;
}
