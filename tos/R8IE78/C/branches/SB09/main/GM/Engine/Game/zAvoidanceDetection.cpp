/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zAvoidanceDetection.cpp
*/
// Range: 0x800AE400 -> 0x800AE54C
void MyCollisionCollector::addCdPoint(class MyCollisionCollector * this /* r28 */, class hkpCdPoint & event /* r29 */) {
    // Local variables
    class xBase * baseA; // r30
    class hkpRigidBody * rigidA; // r0
    class hkpPhantom * phantomA; // r0
    class xBase * baseB; // r30
    class hkpRigidBody * rigidB; // r0
    class hkpPhantom * phantomB; // r0
    class hkVector4 normal; // r1+0x10
}
// signature: DetectAvoidance(const xHavokCharacterController *, const xVec3 &, const xVec3 &, float, float, float, xVec3 &, xVec3 &, xBase *&)
// Range: 0x80052420 -> 0x800528F8
bool DetectAvoidance(class xHavokCharacterController * characterController /* r22 */, class xVec3 & start /* r27 */, class xVec3 & testDir /* r28 */, float testDist /* f31 */, class xVec3 & closestContact /* r31 */, class xVec3 & avoidDir /* r29 */, class xBase * & collidedObj /* r30 */) {
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
    class hkpCollidable * collidableA; // r23
    class hkpCollidable * collidableB; // r22
    class hkpRigidBody * rigidA; // r0
    class hkpPhantom * phantomA; // r0
    class hkpRigidBody * rigidB; // r0
    class hkpPhantom * phantomB; // r0
    class hkpCollidable * hitCollidable; // r31
    class hkVector4 objCenter; // r1+0x90
    class xVec3 center; // r1+0x78
    class xVec3 toCenter; // r1+0x6C
    class xVec3 projected; // r1+0x60

    // References
    // -> struct {} __vt__20MyCollisionCollector;
    // -> struct {} __vt__22hkpAllCdPointCollector;
    // -> struct {} __vt__19hkpCdPointCollector;
    // -> float hkConvexShapeDefaultRadius;
    // -> class xVec3 m_UnitAxisY;
}
