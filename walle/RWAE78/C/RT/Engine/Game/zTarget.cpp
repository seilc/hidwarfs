/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zTarget.cpp
*/
static float WAIT_BEFORE_RETURN; // size: 0x4, address: 0x80704D6C
static float MAX_RAY_DISTANCE; // size: 0x4, address: 0x80704D70
static float volume; // size: 0x4, address: 0x80704D74
// signature: zTarget::zTarget(int, zPlayerInput *, zUIImage *, zUIImage *, zUIImage *, zUIImage *, zUIImage *, zUIImage *)
// Range: 0x8020C640 -> 0x8020C6A8
void * zTarget::zTarget(class zTarget * this /* r31 */, class zUIImage * newView /* r12 */) {
}
// Range: 0x8020C6B0 -> 0x8020D010
bool zTarget::GetTargetLocation(class zTarget * this /* r22 */, class xVec3 * queryStartLocation /* r23 */, class xVec3 * queryEndLocation /* r21 */, class xVec3 * targetLocation /* r24 */, float * toHitDistance /* r25 */, class hkpCollidable * shape /* r26 */, class hkBaseObject * * entitiesFilter /* r27 */, int numEntitiesFilter /* r28 */) {
    // Local variables
    class hkVector4 hkFrom; // r1+0xD0
    class hkVector4 pos; // r1+0xC0
    class hkpWorldCinfo info; // r1+0x120
    class hkVector4 hkTo; // r1+0xB0
    class xVec3 newTo; // r1+0xA0
    class xVec3 direction; // r1+0x94
    class xVec3 min; // r1+0x88
    class xVec3 max; // r1+0x7C
    float txmin; // r31
    float txmax; // f0
    float tymin; // r31
    float tymax; // f1
    float tzmin; // r31
    float tzmax; // r31
    float tx; // f2
    float ty; // f3
    float tz; // f4
    float t; // f5
    class hkAabb fromAabb; // r1+0x100
    class hkAabb toAabb; // r1+0xE0

    {
        // Range: 0x8020CA3C -> 0x8020CDFC
        // Local variables
        class xVec3 threeNormalizedDirection; // r1+0x70
    }
    {
        // Range: 0x8020CDFC -> 0x8020CFB8
        // Local variables
        bool rayCollided; // r0

        {
            // Range: 0x8020CDFC -> 0x8020CDFC
            // Local variables
            class hkMonitorStream * mStream; // r0

            {
                // Range: 0x8020CDFC -> 0x8020CDFC
                // Local variables
                class TimerCommand * h; // r0
            }
        }
        {
            // Range: 0x8020CE74 -> 0x8020CF30
            // Local variables
            bool linearCastCollided; // r0
            class hkVector4 newPos; // r1+0x60
            void * newOutputOwner; // r1+0x10
            float newToHitDistance; // r1+0x14

            {
                // Range: 0x8020CED4 -> 0x8020CED4
                // Local variables
                class hkMonitorStream * mStream; // r0

                {
                    // Range: 0x8020CED4 -> 0x8020CED4
                    // Local variables
                    class TimerCommand * h; // r0
                }
            }
        }
        {
            // Range: 0x8020CF30 -> 0x8020CF30
            // Local variables
            class hkMonitorStream * mStream; // r0

            {
                // Range: 0x8020CF30 -> 0x8020CF30
                // Local variables
                class TimerCommand * h; // r0
            }
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
}
// Range: 0x8020D010 -> 0x8020D318
void zTarget::Reset(class zTarget * this /* r29 */) {
    // Local variables
    float aspectRatio; // f1

    // References
    // -> static float WAIT_BEFORE_RETURN;
}
// signature: zTarget::Update(float)
// Range: 0x8020D320 -> 0x8020D6B8
void zTarget::Update(class zTarget * this /* r30 */) {
    {
        // Range: 0x8020D46C -> 0x8020D5A0
        // Local variables
        class xVec2 IR; // r1+0x8
    }
}
// Range: 0x8020D6C0 -> 0x8020D708
bool zTarget::IsAutoReturning() {
    // References
    // -> class zViewport viewports[4];
}
// Range: 0x8020D710 -> 0x8020D74C
bool zTarget::IsTargetDestructible() {
    {
        // Range: 0x8020D714 -> 0x8020D744
        // Local variables
        class zEntSimpleObj * pEntSimp; // r0
    }
}
// Range: 0x8020D750 -> 0x8020D808
bool zTarget::IsTargetPlayer(class zTarget * this /* r30 */) {
    // Local variables
    class hkpShapePhantom * slaveNPCPhantom; // r31
    class hkpShapePhantom * playerPhantom; // r3

    {
        // Range: 0x8020D798 -> 0x8020D7CC
        // Local variables
        class zNPCBase * slaveNPC; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8020D810 -> 0x8020DD38
float zTarget::GetXZAngleToTarget(class zTarget * this /* r30 */) {
    // Local variables
    class xVec3 targetDirection; // r1+0xA8
    float toHitDistance; // r1+0x8
    class xVec3 characterDirection; // r1+0x9C
    class xVec3 a1; // r1+0x90
    class xVec3 b1; // r1+0x84
    class xVec3 yN; // r1+0x78
    class xVec3 r; // r1+0x6C
    float ang; // f0

    // References
    // -> class zViewport viewports[4];
}
// Range: 0x8020DD40 -> 0x8020E594
bool zTarget::GetDirection(class zTarget * this /* r25 */, class xVec3 * direction /* r26 */, float * toHitDistance /* r27 */, class hkpCollidable * shape /* r28 */, class hkBaseObject * * entitiesFilter /* r29 */, int numEntitiesFilter /* r30 */) {
    {
        // Range: 0x8020DD74 -> 0x8020E088
        // Local variables
        class xVec3 queryEndLocation; // r1+0xA4
    }
    {
        // Range: 0x8020E0B0 -> 0x8020E55C
        // Local variables
        class xVec3 toLocation; // r1+0x98
        float camY; // f8
        float camX; // f7
        float aspectRatio; // f1
        float tanFOV; // f28
        float markerY; // f0
        float markerX; // f0
    }

    // References
    // -> class xVec3 m_Null;
    // -> class zViewport viewports[4];
    // -> static float MAX_RAY_DISTANCE;
}
// Range: 0x8020E5A0 -> 0x8020E8F4
class xVec3 zTarget::GetTargetDirection(class zTarget * this /* r20 */) {
    {
        // Range: 0x8020E628 -> 0x8020E8C4
        // Local variables
        class xVec3 direction; // r1+0x68
        class xVec2 screenPoint; // r1+0x10
        enum IRStatus pointerStatus; // r1+0x8
    }

    // References
    // -> class zViewport viewports[4];
}
// signature: zTarget::SetHitDetected(bool)
// Range: 0x8020E900 -> 0x8020E910
void zTarget::SetHitDetected() {
}
// signature: zTarget::ToggleMarkers(bool)
// Range: 0x8020E910 -> 0x8020EA14
void zTarget::ToggleMarkers(class zTarget * this /* r31 */) {
}
// Range: 0x8020EA20 -> 0x8020EB4C
void zTarget::SetMarkersXY(class zTarget * this /* r31 */, float X /* f30 */, float Y /* f31 */) {
}
// signature: zTarget::SetViewport(int)
// Range: 0x8020EB50 -> 0x8020EC68
void zTarget::SetViewport() {
}
