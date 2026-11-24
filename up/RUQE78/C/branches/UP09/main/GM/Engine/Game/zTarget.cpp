/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zTarget.cpp
*/
static float WAIT_BEFORE_RETURN; // size: 0x4, address: 0x807BBC8C
static float MAX_RAY_DISTANCE; // size: 0x4, address: 0x807BBC90
static float volume; // size: 0x4, address: 0x807BBC94
// signature: zTarget::zTarget(int, zPlayerInput *, zUIImage *, zUIImage *, zUIImage *, zUIImage *, zUIImage *, zUIImage *)
// Range: 0x802AE370 -> 0x802AE3DC
void * zTarget::zTarget(class zTarget * this /* r31 */, class zUIImage * newView /* r12 */) {
}
// Range: 0x802AE3E0 -> 0x802AF024
bool zTarget::GetTargetLocation(class zTarget * this /* r23 */, class xVec3 & queryStartLocation /* r24 */, class xVec3 & queryEndLocation /* r25 */, class xVec3 & targetLocation /* r26 */, float & toHitDistance /* r27 */, class hkpCollidable * shape /* r28 */, class hkBaseObject * * entitiesFilter /* r29 */, int numEntitiesFilter /* r30 */) {
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
    float txmax; // f4
    float tymin; // r31
    float tymax; // f5
    float tzmin; // r31
    float tzmax; // r31
    float tx; // f6
    float ty; // f7
    float tz; // f8
    float t; // f9
    class hkAabb fromAabb; // r1+0x100
    class hkAabb toAabb; // r1+0xE0

    {
        // Range: 0x802AE7E8 -> 0x802AEC38
        // Local variables
        class xVec3 threeNormalizedDirection; // r1+0x70
    }
    {
        // Range: 0x802AEC38 -> 0x802AEF24
        // Local variables
        bool rayCollided; // r0

        {
            // Range: 0x802AEC38 -> 0x802AEC38
            // Local variables
            class hkMonitorStream & mStream; // r0

            {
                // Range: 0x802AEC38 -> 0x802AEC38
                // Local variables
                class TimerCommand * h; // r0
            }
        }
        {
            // Range: 0x802AECB0 -> 0x802AEDE4
            // Local variables
            bool linearCastCollided; // r0
            class hkVector4 newPos; // r1+0x60
            void * newOutputOwner; // r1+0x10
            float newToHitDistance; // r1+0x14

            {
                // Range: 0x802AED18 -> 0x802AED18
                // Local variables
                class hkMonitorStream & mStream; // r0

                {
                    // Range: 0x802AED18 -> 0x802AED18
                    // Local variables
                    class TimerCommand * h; // r0
                }
            }
        }
        {
            // Range: 0x802AEDE4 -> 0x802AEDE4
            // Local variables
            class hkMonitorStream & mStream; // r0

            {
                // Range: 0x802AEDE4 -> 0x802AEDE4
                // Local variables
                class TimerCommand * h; // r0
            }
        }
        {
            // Range: 0x802AEE38 -> 0x802AEF24
            // Local variables
            class xBase * base; // r0
        }
    }

    // References
    // -> unsigned int g_rttidParentTable[246];
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
}
// Range: 0x802AF030 -> 0x802AF1D8
void zTarget::EnableMarker(class zTarget * this /* r29 */, class zUIImage * newMarker /* r30 */) {
}
// Range: 0x802AF1E0 -> 0x802AF510
void zTarget::Reset(class zTarget * this /* r31 */) {
    // Local variables
    float aspectRatio; // f1

    // References
    // -> static float WAIT_BEFORE_RETURN;
}
// signature: zTarget::Update(float)
// Range: 0x802AF510 -> 0x802AF944
void zTarget::Update(class zTarget * this /* r30 */) {
    {
        // Range: 0x802AF664 -> 0x802AF824
        // Local variables
        class xVec2 IR; // r1+0x8
    }
}
// Range: 0x802AF950 -> 0x802AFBC8
void zTarget::MarkerStatusUpdate(class zTarget * this /* r31 */) {
    // Local variables
    bool showOnScreen; // r5

    // References
    // -> class zViewport viewports[4];
    // -> class xGlobals * xglobals;
    // -> unsigned int g_rttidParentTable[246];
}
// Range: 0x802AFBD0 -> 0x802AFC18
bool zTarget::IsAutoReturning() {
    // References
    // -> class zViewport viewports[4];
}
// Range: 0x802AFC20 -> 0x802B043C
bool zTarget::GetDirection(class zTarget * this /* r26 */, class xVec3 & direction /* r27 */, float & toHitDistance /* r28 */, class hkpCollidable * shape /* r29 */, class hkBaseObject * * entitiesFilter /* r30 */, int numEntitiesFilter /* r31 */) {
    {
        // Range: 0x802AFC54 -> 0x802AFF3C
        // Local variables
        class xVec3 queryEndLocation; // r1+0x8C
    }
    {
        // Range: 0x802AFF64 -> 0x802B0404
        // Local variables
        class xVec3 toLocation; // r1+0x80
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
// signature: zTarget::SetHitDetected(bool)
// Range: 0x802B0440 -> 0x802B0450
void zTarget::SetHitDetected() {
}
// signature: zTarget::ToggleMarkers(bool)
// Range: 0x802B0450 -> 0x802B0554
void zTarget::ToggleMarkers(class zTarget * this /* r31 */) {
}
// signature: zTarget::SetViewport(int)
// Range: 0x802B0560 -> 0x802B0678
void zTarget::SetViewport() {
}
