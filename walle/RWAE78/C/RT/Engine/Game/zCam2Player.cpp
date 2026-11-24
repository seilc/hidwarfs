/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCam2Player.cpp
*/
static float enable; // size: 0x4, address: 0x806CBA3C
// Range: 0x8008DD60 -> 0x8008E550
void zCam2Player::update_springs(class zCam2Player * this /* r30 */, float dt /* f29 */) {
}
// Range: 0x8008E7C0 -> 0x8008EA28
void zCam2Player::reset_basis(class zCam2Player * this /* r30 */) {
    // Local variables
    float yaw; // f0

    {
        // Range: 0x8008E800 -> 0x8008E884
        // Local variables
        class xVec3 * center; // r0
    }
}
// Range: 0x8008EA50 -> 0x8008EE30
void zCam2Player::inherit_basis(class zCam2Player * this /* r30 */) {
    // Local variables
    class zCam2Player * srcCam; // r0
}
// signature: zCam2Player::clamp_secondary(float)
// Range: 0x8008F160 -> 0x8008F4FC
void zCam2Player::clamp_secondary(class zCam2Player * this /* r30 */) {
    // Local variables
    class xEnt * ent; // r4
    class xVec3 * center; // r0
    float radius; // f31
    class xVec3 camToTarget; // r1+0x8
    float xzDistanceCam; // f2
    float arc; // f31
    float dist2; // f1

    {
        // Range: 0x8008F2B0 -> 0x8008F4BC
        // Local variables
        float theta; // f0

        {
            // Range: 0x8008F3A4 -> 0x8008F4B8
            // Local variables
            float endYaw; // f5
            float deltaYaw; // f1
            float startYaw; // r31
            float deltaMax; // f3
            float yawFromOrigin; // f0
        }
    }
}
// Range: 0x8008F5A0 -> 0x8008F638
void zCam2Player::update_target_info(class zCam2Player * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x8008F660 -> 0x8008F720
void zCam2Player::reset_target_info(class zCam2Player * this /* r30 */) {
}
// Range: 0x8008F720 -> 0x8008FC5C
int zCam2Player::yaw_past_limit(class zCam2Player * this /* r30 */, float * pastLimit /* r31 */, float guardBandYaw /* f27 */) {
    // Local variables
    class xVec3 camPos; // r1+0x68
    float camGoalYaw; // f0
    class xVec3 player0Pos; // r1+0x5C
    class xVec3 camGoalToPlayer0; // r1+0x50
    float player0Arc; // f30
    float toPlayer0Yaw; // f0
    float dYawFromPlayer0; // f29
    class xVec3 player1Pos; // r1+0x44
    class xVec3 camGoalToPlayer1; // r1+0x38
    float player1Arc; // f28
    float toPlayer1Yaw; // f0
    float dYawFromPlayer1; // f6
    float dYawMax; // f4
    float dAbsYawFromPlayer0; // f0
    float dAbsYawFromPlayer1; // f0

    {
        // Range: 0x8008FB1C -> 0x8008FC00
        // Local variables
        float dYawPastLimit; // f1
        float radiusArcOfMostOut; // f0
        float dYawMostOut; // f0

        {
            // Range: 0x8008FB58 -> 0x8008FBA8
            // Local variables
            float adjustedDYawP1; // f1
            float adjustedDYawP0; // f0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8008FC60 -> 0x80090004
void zCam2Player::clamp_players_nearwall(class zCam2Player * this /* r31 */) {
    // Local variables
    float camGoalYaw; // f27
    class xVec3 camPos; // r1+0x38
    class xVec3 atXZ; // r1+0x2C
    float planarDistance; // f0
    float deltaD; // f31

    {
        // Range: 0x8008FE48 -> 0x8008FFC0
        // Local variables
        float dot; // f0
        class xVec3 camGoalToOriginN; // r1+0x20

        {
            // Range: 0x8008FEFC -> 0x8008FFB4
            // Local variables
            float finalDist; // f2
            float cosPhi; // f0
            float xzDDistToOrigin; // f27

            {
                // Range: 0x8008FF44 -> 0x8008FF94
                // Local variables
                float finalDDist; // f1
            }
        }
    }

    // References
    // -> float sNearWall;
    // -> float sFarWall;
    // -> class xGlobals * xglobals;
}
// Range: 0x80090020 -> 0x80090340
void zCam2Player::apply_basis(class zCam2Player * this /* r31 */) {
    // References
    // -> static float enable;
}
// signature: zCam2Player::GetTargets(xVec3 *, xVec3 *) const
// Range: 0x80090360 -> 0x8009038C
void zCam2Player::GetTargets() const {
    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80090390 -> 0x800903E4
void zCam2Player::create(class zCam2Player * this /* r31 */) {
}
// Range: 0x800903F0 -> 0x800905E4
void zCam2Player::reset(class zCam2Player * this /* r30 */) {
    // References
    // -> class config cfg;
}
// Range: 0x800905F0 -> 0x80090658
void zCam2Player::start(class zCam2Player * this /* r30 */) {
    // Local variables
    class rest_config cfg; // r1+0x8
}
// Range: 0x80090660 -> 0x80090664
void zCam2Player::stop() {
}
// signature: zCam2Player::update_camera_goals(float)
// Range: 0x80090670 -> 0x80090B4C
void zCam2Player::update_camera_goals(class zCam2Player * this /* r29 */) {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zCam2Player::update(xScene &, float)
// Range: 0x80090B50 -> 0x80090E8C
void zCam2Player::update(class zCam2Player * this /* r28 */, float dt /* f26 */) {
    // Local variables
    float pastLimit; // r1+0x8

    {
        // Range: 0x80090BD0 -> 0x80090C30
        // Local variables
        float pastLimit; // r1+0xC
    }
    {
        // Range: 0x80090C40 -> 0x80090E10
        // Local variables
        float lockIntensity; // f0

        {
            // Range: 0x80090C5C -> 0x80090E08
            // Local variables
            float rangeLen2; // f1
            class xVec3 range; // r1+0x1C
            class xVec3 hiLoc; // r1+0x28
            float hi; // f28
            class xVec3 loLoc; // r1+0x34
            float lo; // f29
            class xVec3 diffOrigin; // r1+0x40
            class basis_traits last_good; // r1+0x58
            class basis_traits end; // r1+0x134
            class basis_traits * start; // r29
            class xVec3 origin; // r1+0x4C

            {
                // Range: 0x80090D30 -> 0x80090D30
                // Local variables
                int i; // r31

                {
                    // Range: 0x80090D30 -> 0x80090D30
                    // Local variables
                    class xVec3 newOrigin; // r1+0x10
                    float test; // f27
                }
            }
        }
    }
}
// Range: 0x800911A0 -> 0x800911A4
void zCam2Player::debug_render() {
}
