/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCam2Player.cpp
*/
static float pitch_offset; // size: 0x4, address: 0x8077DA6C
static float yaw_offset; // size: 0x4, address: 0x8077DA70
static float roll_offset; // size: 0x4, address: 0x8077DA74
static float enable; // size: 0x4, address: 0x8077DA78
// Range: 0x80106B60 -> 0x80106B88
void * zCam2PlayerNS::CurveCameraCollision::zRayHitCollector::zRayHitCollector() {
    // References
    // -> struct {} __vt__Q313zCam2PlayerNS20CurveCameraCollision16zRayHitCollector;
}
// signature: zCam2PlayerNS::CurveCameraCollision::zRayHitCollector::addRayHit(const hkpCdBody &, const hkpShapeRayCastCollectorOutput &)
// Range: 0x80155320 -> 0x801553C0
void zCam2PlayerNS::CurveCameraCollision::zRayHitCollector::addRayHit() {
    // Local variables
    bool ignore; // r6

    {
        // Range: 0x80155358 -> 0x80155394
        // Local variables
        class xBase * obj; // r4
    }
}
// Range: 0x80106B90 -> 0x80106BAC
void zCam2PlayerNS::CurveCameraCollision::zRayHitCollector::reset() {
}
// Range: 0x80106BB0 -> 0x80106BB8
float zCam2PlayerNS::CurveCameraCollision::zRayHitCollector::NearHitDistance() {
}
// Range: 0x801021F0 -> 0x80102CB8
void zCam2Player::update_springs(class zCam2Player * this /* r31 */, float dt /* f29 */) {
}
// Range: 0x80102E40 -> 0x80103114
void zCam2Player::reset_basis(class zCam2Player * this /* r31 */) {
    // Local variables
    float yaw; // f0

    {
        // Range: 0x80102E7C -> 0x80102F40
        // Local variables
        class xVec3 * center; // r0
    }

    // References
    // -> class xSphere sphere;
}
// Range: 0x80103210 -> 0x801035C0
void zCam2Player::inherit_basis(class zCam2Player * this /* r31 */) {
    // Local variables
    class zCam2Player * srcCam; // r0
}
// signature: zCam2Player::clamp_secondary(float)
// Range: 0x801038E0 -> 0x80103CFC
void zCam2Player::clamp_secondary(class zCam2Player * this /* r31 */) {
    // Local variables
    class xEnt * ent; // r29
    class xVec3 * center; // r0
    float radius; // f31
    class xVec3 camToTarget; // r1+0x8
    float xzDistanceCam; // f2
    float arc; // f31
    float dist2; // f1

    {
        // Range: 0x80103A48 -> 0x80103CC8
        // Local variables
        float theta; // f0

        {
            // Range: 0x80103B7C -> 0x80103CC4
            // Local variables
            float endYaw; // f5
            float deltaYaw; // f1
            float startYaw; // r31
            float deltaMax; // f3
            float yawFromOrigin; // f0
        }
    }

    // References
    // -> class xSphere sphere;
}
// Range: 0x80103E00 -> 0x80103E98
void zCam2Player::update_target_info(class zCam2Player * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80103EA0 -> 0x80103F60
void zCam2Player::reset_target_info(class zCam2Player * this /* r30 */) {
}
// Range: 0x80103F60 -> 0x801047B4
int zCam2Player::yaw_past_limit(class zCam2Player * this /* r23 */, float & pastLimit /* r24 */, float guardBandYaw /* f24 */) {
    // Local variables
    class xVec3 camPos; // r1+0xB0
    float camGoalYaw; // f0
    class zPlayer * player0; // r29
    class zPlayer * player1; // r30
    class xVec3 player0Pos; // r1+0x8C
    class xVec3 camGoalToPlayer0; // r1+0x80
    float player0Arc; // f25
    float toPlayer0Yaw; // f0
    float dYawFromPlayer0; // f27
    class xVec3 player1Pos; // r1+0x74
    class xVec3 camGoalToPlayer1; // r1+0x68
    float player1Arc; // f28
    float toPlayer1Yaw; // f0
    float dYawFromPlayer1; // f6
    float dYawMax; // f4
    float dAbsYawFromPlayer0; // f0
    float dAbsYawFromPlayer1; // f0

    {
        // Range: 0x80104044 -> 0x80104364
        // Local variables
        class xVec3 unitVecj; // r1+0x98
        class xVec3 unitVeci; // r1+0xA4
        float mincos; // f25
        float tmpdot; // f0
        int tmp2; // r27
        int tmp1; // r28

        {
            // Range: 0x80104048 -> 0x8010433C
            // Local variables
            int i; // r26

            {
                // Range: 0x80104048 -> 0x80104324
                // Local variables
                int j; // r25
            }
        }
    }
    {
        // Range: 0x80104658 -> 0x8010474C
        // Local variables
        float dYawPastLimit; // f1
        float radiusArcOfMostOut; // f0
        float dYawMostOut; // f0

        {
            // Range: 0x80104698 -> 0x801046F0
            // Local variables
            float adjustedDYawP1; // f1
            float adjustedDYawP0; // f0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801047D0 -> 0x80104BC8
void zCam2Player::clamp_players_nearwall(class zCam2Player * this /* r31 */) {
    // Local variables
    float camGoalYaw; // f27
    class xVec3 camPos; // r1+0x38
    class xVec3 atXZ; // r1+0x2C
    float planarDistance; // f0
    float deltaD; // f0

    {
        // Range: 0x801049AC -> 0x80104B88
        // Local variables
        float dot; // f0
        class xVec3 camGoalToOriginN; // r1+0x20

        {
            // Range: 0x80104AB0 -> 0x80104B78
            // Local variables
            float finalDist; // f2
            float cosPhi; // f0
            float xzDDistToOrigin; // f27

            {
                // Range: 0x80104AF0 -> 0x80104B44
                // Local variables
                float finalDDist; // f1
            }
        }
    }

    // References
    // -> class xVec3 g_X3;
    // -> float sNearWall;
    // -> float sFarWall;
    // -> class xGlobals * xglobals;
}
// Range: 0x80104BE0 -> 0x80104F00
void zCam2Player::apply_basis(class zCam2Player * this /* r31 */) {
    // References
    // -> static float enable;
}
// signature: zCam2Player::GetTargets(xVec3 *, xVec3 *) const
// Range: 0x80104F10 -> 0x80105158
void zCam2Player::GetTargets(class zCam2Player * this /* r30 */, class xVec3 * Pos0 /* r31 */) const {
    // Local variables
    float sum_x; // f31
    float sum_y; // f30
    float sum_z; // f29
    bool allDead; // r27

    {
        // Range: 0x80104F50 -> 0x80104FF0
        // Local variables
        int i; // r26
    }
    {
        // Range: 0x80105004 -> 0x80105058
        // Local variables
        class xVec3 tmp; // r1+0x3C
    }
    {
        // Range: 0x80105078 -> 0x80105128
        // Local variables
        class xVec3 projPos; // r1+0x30
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80105160 -> 0x801051B4
void zCam2Player::create(class zCam2Player * this /* r31 */) {
}
// Range: 0x801051C0 -> 0x801053D8
void zCam2Player::reset(class zCam2Player * this /* r30 */) {
    // References
    // -> class config cfg;
}
// Range: 0x801053E0 -> 0x80105474
void zCam2Player::start(class zCam2Player * this /* r31 */) {
    // Local variables
    class rest_config cfg; // r1+0x8

    // References
    // -> static float roll_offset;
    // -> static float yaw_offset;
    // -> static float pitch_offset;
}
// Range: 0x80105480 -> 0x80105484
void zCam2Player::stop() {
}
// signature: zCam2Player::update_camera_goals(float)
// Range: 0x80105490 -> 0x8010597C
void zCam2Player::update_camera_goals(class zCam2Player * this /* r31 */) {
    // References
    // -> class xGlobals * xglobals;
}
// signature: zCam2Player::update(xScene &, float)
// Range: 0x80105980 -> 0x80106B3C
void zCam2Player::update(class zCam2Player * this /* r31 */, float dt /* f28 */) {
    // Local variables
    float pastLimit; // r1+0x60
    float phi_next_frame; // f31
    float theta_next_frame; // f30
    float dist_next_frame; // f29
    class hkVector4 rayFrom; // r1+0x140
    class hkVector4 rayTo; // r1+0x130
    class xVec3 temp_rayTo; // r1+0x120
    class zRayHitCollector hit_collector; // r1+0x110

    {
        // Range: 0x80105A08 -> 0x80105A80
        // Local variables
        float pastLimit; // r1+0x64
    }
    {
        // Range: 0x80105A90 -> 0x80105C74
        // Local variables
        float lockIntensity; // f0

        {
            // Range: 0x80105AB4 -> 0x80105C6C
            // Local variables
            float rangeLen2; // f1
            class xVec3 range; // r1+0x15C
            class xVec3 hiLoc; // r1+0x168
            float hi; // f30
            class xVec3 loLoc; // r1+0x174
            float lo; // f29
            class xVec3 diffOrigin; // r1+0x180
            class basis_traits last_good; // r1+0x198
            class basis_traits end; // r1+0x274
            class basis_traits & start; // r27
            class xVec3 origin; // r1+0x18C

            {
                // Range: 0x80105B8C -> 0x80105B8C
                // Local variables
                int i; // r28

                {
                    // Range: 0x80105B8C -> 0x80105B8C
                    // Local variables
                    class xVec3 newOrigin; // r1+0x150
                    float test; // f31
                }
            }
        }
    }
    {
        // Range: 0x80105CD4 -> 0x80105CD4
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x80105CD4 -> 0x80105CD4
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x80105CD4 -> 0x80105CD4
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x80105CD4 -> 0x80105CD4
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x80105DFC -> 0x80105DFC
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x80105DFC -> 0x80105DFC
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x80105DFC -> 0x80105DFC
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x80105DFC -> 0x80105DFC
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x80105F44 -> 0x80105F44
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x80105F44 -> 0x80105F44
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x80105F44 -> 0x80105F44
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x80105F44 -> 0x80105F44
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x8010608C -> 0x8010608C
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x8010608C -> 0x8010608C
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x8010608C -> 0x8010608C
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x8010608C -> 0x8010608C
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x801061FC -> 0x801061FC
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x801061FC -> 0x801061FC
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x801061FC -> 0x801061FC
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x801061FC -> 0x801061FC
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x80106358 -> 0x80106358
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x80106358 -> 0x80106358
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x80106358 -> 0x80106358
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x80106358 -> 0x80106358
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x801064B0 -> 0x801064B0
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x801064B0 -> 0x801064B0
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x801064B0 -> 0x801064B0
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x801064B0 -> 0x801064B0
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x80106610 -> 0x80106610
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x80106610 -> 0x80106610
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x80106610 -> 0x80106610
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x80106610 -> 0x80106610
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x8010676C -> 0x8010676C
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x8010676C -> 0x8010676C
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x8010676C -> 0x8010676C
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x8010676C -> 0x8010676C
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x8010691C -> 0x8010691C
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x8010691C -> 0x8010691C
            // Local variables
            class TimerCommand * h; // r28
        }
    }
    {
        // Range: 0x8010691C -> 0x8010691C
        // Local variables
        class hkMonitorStream & mStream; // r27

        {
            // Range: 0x8010691C -> 0x8010691C
            // Local variables
            class TimerCommand * h; // r28
        }
    }
}
// signature: zCam2Player::FinalAdjust(float)
// Range: 0x80106EC0 -> 0x80106F04
void zCam2Player::FinalAdjust(class zCam2Player * this /* r31 */) {
}
// Range: 0x80106F10 -> 0x80106F14
void zCam2Player::debug_render() {
}
