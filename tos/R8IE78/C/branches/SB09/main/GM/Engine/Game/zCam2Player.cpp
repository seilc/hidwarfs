/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCam2Player.cpp
*/
static float pitch_offset; // size: 0x4, address: 0x8068965C
static float yaw_offset; // size: 0x4, address: 0x80689660
static float roll_offset; // size: 0x4, address: 0x80689664
static float enable; // size: 0x4, address: 0x80689668
// signature: zCam2PlayerNS::CurveCameraCollision::zRayHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x800ADAF0 -> 0x800ADBD0
void zCam2PlayerNS::CurveCameraCollision::zRayHitCollector::addRayHit(class zRayHitCollector * this /* r29 */, class hkpShapeRayCastCollectorOutput & hitInfo /* r30 */) {
    // Local variables
    bool ignore; // r31
    class hkpRigidBody * tmprb; // r0

    {
        // Range: 0x800ADB1C -> 0x800ADB90
        // Local variables
        class xBase * obj; // r3
    }
}
// Range: 0x8008BEA0 -> 0x8008BEBC
void zCam2PlayerNS::CurveCameraCollision::zRayHitCollector::reset() {
}
// signature: zCam2Player::get_rest_default(zCam2Player::rest_config &) const
// Range: 0x80089270 -> 0x800892B0
void zCam2Player::get_rest_default() const {
    // References
    // -> static float roll_offset;
    // -> static float yaw_offset;
    // -> static float pitch_offset;
}
// signature: zCam2Player::set_secondary_target(const xVec3 &, float, float)
// Range: 0x800892B0 -> 0x80089310
void zCam2Player::set_secondary_target(class zCam2Player * this /* r31 */, float radius /* f30 */, float marginAngle /* f31 */) {
}
// signature: zCam2Player::set_secondary_target(const xEnt &, float, float)
// Range: 0x80089310 -> 0x80089328
void zCam2Player::set_secondary_target() {
}
// Range: 0x800893A0 -> 0x80089404
void zCam2Player::reset_springs(class zCam2Player * this /* r31 */) {
}
// Range: 0x80089410 -> 0x800894D0
void zCam2Player::update_springs(class zCam2Player * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80089710 -> 0x80089880
void zCam2Player::reset_basis(class zCam2Player * this /* r30 */) {
    // Local variables
    float yaw; // f0

    {
        // Range: 0x80089730 -> 0x80089784
        // Local variables
        class xVec3 * center; // r31
    }
}
// Range: 0x80089980 -> 0x80089A04
void zCam2Player::inherit_basis(class zCam2Player * this /* r31 */) {
    // Local variables
    class zCam2Player * srcCam; // r0
}
// signature: zCam2Player::clamp_secondary(float)
// Range: 0x80089C20 -> 0x80089E90
void zCam2Player::clamp_secondary(class zCam2Player * this /* r30 */) {
    // Local variables
    class xEnt * ent; // r4
    class xVec3 * center; // r31
    float radius; // f28
    class xVec3 camToTarget; // r1+0x14
    float xzDistanceCam; // f2
    float arc; // f28
    float dist2; // f1

    {
        // Range: 0x80089D28 -> 0x80089E50
        // Local variables
        float theta; // f0

        {
            // Range: 0x80089DB0 -> 0x80089E4C
            // Local variables
            float endYaw; // f29
            float deltaYaw; // f1
            float startYaw; // r31
            float deltaMax; // f28
            float yawFromOrigin; // f0
        }
    }
}
// Range: 0x80089EB0 -> 0x80089F3C
void zCam2Player::update_target_info(class zCam2Player * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80089F50 -> 0x80089FD4
void zCam2Player::reset_target_info(class zCam2Player * this /* r31 */) {
}
// Range: 0x80089FE0 -> 0x8008A458
int zCam2Player::yaw_past_limit(class zCam2Player * this /* r25 */, float & pastLimit /* r26 */, float guardBandYaw /* f28 */) {
    // Local variables
    class xVec3 camPos; // r1+0x68
    float camGoalYaw; // f0
    class zPlayer * player0; // r24
    class zPlayer * player1; // r27
    class xVec3 player0Pos; // r1+0x44
    class xVec3 camGoalToPlayer0; // r1+0x38
    float player0Arc; // f31
    float toPlayer0Yaw; // f0
    float dYawFromPlayer0; // f30
    class xVec3 player1Pos; // r1+0x2C
    class xVec3 camGoalToPlayer1; // r1+0x20
    float player1Arc; // f29
    float toPlayer1Yaw; // f0
    float dYawFromPlayer1; // f1
    float dYawMax; // f5
    float dAbsYawFromPlayer0; // f0
    float dAbsYawFromPlayer1; // f0

    {
        // Range: 0x8008A054 -> 0x8008A1D4
        // Local variables
        class xVec3 unitVecj; // r1+0x50
        class xVec3 unitVeci; // r1+0x5C
        float mincos; // f29
        float tmpdot; // f1
        int tmp2; // r29
        int tmp1; // r30

        {
            // Range: 0x8008A068 -> 0x8008A1C4
            // Local variables
            int i; // r28

            {
                // Range: 0x8008A0EC -> 0x8008A1C4
                // Local variables
                int j; // r27
            }
        }
    }
    {
        // Range: 0x8008A314 -> 0x8008A408
        // Local variables
        float dYawPastLimit; // f1
        float radiusArcOfMostOut; // f0
        float dYawMostOut; // f0

        {
            // Range: 0x8008A354 -> 0x8008A3AC
            // Local variables
            float adjustedDYawP1; // f1
            float adjustedDYawP0; // f0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8008A460 -> 0x8008A53C
void zCam2Player::clamp_players_yawoffset(class zCam2Player * this /* r31 */) {
    // Local variables
    float overLimit; // r1+0x8

    {
        // Range: 0x8008A468 -> 0x8008A4E4
        // Local variables
        float overLimit; // r1+0xC

        {
            // Range: 0x8008A4A0 -> 0x8008A4E4
            // Local variables
            float newTheta; // f0
        }
    }
    {
        // Range: 0x8008A4E8 -> 0x8008A520
        // Local variables
        float newYaw; // f0
    }
}
// signature: MinPlanarDistanceXZ(float &, int, const xVec3 &, const xVec3 &)
// Range: 0x8008A720 -> 0x8008A7E0
static void MinPlanarDistanceXZ(float & minDistance /* r27 */, class xVec3 & camPos /* r28 */, class xVec3 & atXZ /* r29 */) {
    {
        // Range: 0x8008A748 -> 0x8008A7C8
        // Local variables
        float distance; // f0
        class xVec3 camToPlayer; // r1+0x8
        class xVec3 & playerPos; // r0
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8008A540 -> 0x8008A718
void zCam2Player::clamp_players_nearwall(class zCam2Player * this /* r30 */) {
    // Local variables
    float camGoalYaw; // f31
    class xVec3 camPos; // r1+0x24
    class xVec3 atXZ; // r1+0x18
    float planarDistance; // f0
    float deltaD; // f31

    {
        // Range: 0x8008A5D8 -> 0x8008A6F8
        // Local variables
        float dot; // f0
        class xVec3 camGoalToOriginN; // r1+0xC

        {
            // Range: 0x8008A63C -> 0x8008A6E8
            // Local variables
            float finalDist; // f1
            float cosPhi; // f0
            float xzDDistToOrigin; // f31

            {
                // Range: 0x8008A66C -> 0x8008A6C0
                // Local variables
                float finalDDist; // f1
            }
        }
    }

    // References
    // -> class xVec3 g_X3;
    // -> float sNearWall;
    // -> float sFarWall;
}
// Range: 0x8008A7E0 -> 0x8008A840
void zCam2Player::post_collide_adjust_yaw(class zCam2Player * this /* r31 */) {
    // Local variables
    float overLimit; // r1+0x8

    {
        // Range: 0x8008A7EC -> 0x8008A82C
        // Local variables
        float newYaw; // f0
    }
}
// signature: zCam2Player::clamp_players(float)
// Range: 0x8008A840 -> 0x8008A8C8
void zCam2Player::clamp_players(class zCam2Player * this /* r30 */) {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zCam2Player::update_precollide(float)
// Range: 0x8008A8D0 -> 0x8008A914
void zCam2Player::update_precollide(class zCam2Player * this /* r31 */) {
}
// signature: zCam2Player::update_pivot(float)
// Range: 0x8008A920 -> 0x8008A98C
void zCam2Player::update_pivot(class zCam2Player * this /* r31 */) {
}
// Range: 0x8008A990 -> 0x8008AA88
void zCam2Player::apply_basis(class zCam2Player * this /* r31 */) {
    // References
    // -> static float enable;
}
// signature: zCam2Player::GetTargets(xVec3 *, xVec3 *) const
// Range: 0x8008AB00 -> 0x8008ACFC
void zCam2Player::GetTargets(class zCam2Player * this /* r30 */, class xVec3 * Pos0 /* r31 */) const {
    // Local variables
    float sum_x; // f31
    float sum_y; // f30
    float sum_z; // f29
    bool allDead; // r27

    {
        // Range: 0x8008AB40 -> 0x8008ABF4
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x8008ABF4 -> 0x8008AC44
        // Local variables
        class xVec3 tmp; // r1+0x2C
    }
    {
        // Range: 0x8008AC58 -> 0x8008ACCC
        // Local variables
        class xVec3 projPos; // r1+0x20
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x8008AD00 -> 0x8008AD54
void zCam2Player::create(class zCam2Player * this /* r31 */) {
}
// Range: 0x8008AD60 -> 0x8008AE0C
void zCam2Player::reset(class zCam2Player * this /* r31 */) {
    // References
    // -> class config cfg;
}
// Range: 0x8008AE10 -> 0x8008AE78
void zCam2Player::start(class zCam2Player * this /* r31 */) {
    // Local variables
    class rest_config cfg; // r1+0x8
}
// Range: 0x8008AEB0 -> 0x8008AEB4
void zCam2Player::stop() {
}
// Range: 0x8008AEC0 -> 0x8008AF58
void zCam2Player::update_camera_goals(class zCam2Player * this /* r31 */, float dt /* f31 */) {
}
// signature: zCam2Player::update(xScene &, float)
// Range: 0x8008AF60 -> 0x8008BE98
void zCam2Player::update(class zCam2Player * this /* r31 */, float dt /* f28 */) {
    // Local variables
    float pastLimit; // r1+0x10
    float phi_next_frame; // f31
    float theta_next_frame; // f30
    float dist_next_frame; // f29
    class hkVector4 rayFrom; // r1+0xF0
    class hkVector4 rayTo; // r1+0xE0
    class xVec3 temp_rayTo; // r1+0xD0
    class zRayHitCollector hit_collector; // r1+0xC0

    {
        // Range: 0x8008AFE0 -> 0x8008B054
        // Local variables
        float pastLimit; // r1+0x14
    }
    {
        // Range: 0x8008B064 -> 0x8008B21C
        // Local variables
        float lockIntensity; // f0

        {
            // Range: 0x8008B088 -> 0x8008B214
            // Local variables
            float rangeLen2; // f1
            class xVec3 range; // r1+0x10C
            class xVec3 hiLoc; // r1+0x118
            float hi; // f27
            class xVec3 loLoc; // r1+0x124
            float lo; // f31
            class xVec3 diffOrigin; // r1+0x130
            class basis_traits last_good; // r1+0x148
            class basis_traits end; // r1+0x224
            class basis_traits & start; // r28
            class xVec3 origin; // r1+0x13C

            {
                // Range: 0x8008B13C -> 0x8008B208
                // Local variables
                int i; // r29

                {
                    // Range: 0x8008B13C -> 0x8008B208
                    // Local variables
                    class xVec3 newOrigin; // r1+0x100
                    float test; // f26
                }
            }
        }
    }
    {
        // Range: 0x8008B25C -> 0x8008B25C
        {
            // Range: 0x8008B25C -> 0x8008B25C
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B25C -> 0x8008B25C
        {
            // Range: 0x8008B25C -> 0x8008B25C
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B35C -> 0x8008B35C
        {
            // Range: 0x8008B35C -> 0x8008B35C
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B35C -> 0x8008B35C
        {
            // Range: 0x8008B35C -> 0x8008B35C
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B470 -> 0x8008B470
        {
            // Range: 0x8008B470 -> 0x8008B470
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B470 -> 0x8008B470
        {
            // Range: 0x8008B470 -> 0x8008B470
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B584 -> 0x8008B584
        {
            // Range: 0x8008B584 -> 0x8008B584
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B584 -> 0x8008B584
        {
            // Range: 0x8008B584 -> 0x8008B584
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B6BC -> 0x8008B6BC
        {
            // Range: 0x8008B6BC -> 0x8008B6BC
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B6BC -> 0x8008B6BC
        {
            // Range: 0x8008B6BC -> 0x8008B6BC
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B7E4 -> 0x8008B7E4
        {
            // Range: 0x8008B7E4 -> 0x8008B7E4
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B7E4 -> 0x8008B7E4
        {
            // Range: 0x8008B7E4 -> 0x8008B7E4
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B908 -> 0x8008B908
        {
            // Range: 0x8008B908 -> 0x8008B908
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008B908 -> 0x8008B908
        {
            // Range: 0x8008B908 -> 0x8008B908
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008BA34 -> 0x8008BA34
        {
            // Range: 0x8008BA34 -> 0x8008BA34
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008BA34 -> 0x8008BA34
        {
            // Range: 0x8008BA34 -> 0x8008BA34
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008BB5C -> 0x8008BB5C
        {
            // Range: 0x8008BB5C -> 0x8008BB5C
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008BB5C -> 0x8008BB5C
        {
            // Range: 0x8008BB5C -> 0x8008BB5C
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008BCCC -> 0x8008BCCC
        {
            // Range: 0x8008BCCC -> 0x8008BCCC
            // Local variables
            class TimerCommand * h; // r4
        }
    }
    {
        // Range: 0x8008BCCC -> 0x8008BCCC
        {
            // Range: 0x8008BCCC -> 0x8008BCCC
            // Local variables
            class TimerCommand * h; // r4
        }
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> struct {} __vt__Q313zCam2PlayerNS20CurveCameraCollision16zRayHitCollector;
}
// signature: zCam2Player::FinalAdjust(float)
// Range: 0x8008C010 -> 0x8008C054
void zCam2Player::FinalAdjust(class zCam2Player * this /* r31 */) {
}
