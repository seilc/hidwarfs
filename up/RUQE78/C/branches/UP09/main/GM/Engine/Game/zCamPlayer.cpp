/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamPlayer.cpp
*/
static float sCamPlayerTweakMountMinOffset; // size: 0x4, address: 0x8081C2B8
bool lock_behind_on; // size: 0x1, address: 0x8081C2BC
float lock_behind_degrees; // size: 0x4, address: 0x8081C2C0
float tim_dist; // size: 0x4, address: 0x8081C2C4
bool tim_scarer; // size: 0x1, address: 0x8081C2C8
float tim_scare_val; // size: 0x4, address: 0x807A3394
float tim_zoomOut_Dist; // size: 0x4, address: 0x807A3398
float tim_zoomOut_Dist_XZ_AmbientHuman; // size: 0x4, address: 0x807A339C
float tim_zoomOut_Dist_YUp_AmbientHuman; // size: 0x4, address: 0x807A33A0
float tim_zoomOut_Dist_YDown_AmbientHuman; // size: 0x4, address: 0x807A33A4
float tim_zoomOut_Dist_XZ_OtherNPCs; // size: 0x4, address: 0x807A33A8
float tim_zoomOut_Dist_YUp_OtherNPCs; // size: 0x4, address: 0x807A33AC
float tim_zoomOut_Dist_YDown_OtherNPCs; // size: 0x4, address: 0x807A33B0
// Range: 0x801143D0 -> 0x8011450C
void zCamPlayer::create(class zCamPlayer * this /* r31 */) {
    // Local variables
    class xEnvAsset * easset; // r3

    // References
    // -> class config cfg;
    // -> class zGlobals globals;
}
// Range: 0x80114510 -> 0x80114570
void zCamPlayer::start(class zCamPlayer * this /* r31 */) {
}
// signature: zCamPlayer::update(xScene &, float)
// Range: 0x80114570 -> 0x80114FC4
void zCamPlayer::update(class zCamPlayer * this /* r31 */, float dt /* f29 */) {
    // Local variables
    class xVec2 stick2; // r1+0x10
    float stickMag2; // f2
    float targetBlend; // f4
    float newCamBlend; // f2

    // References
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> float camCollisionBlend;
    // -> class xGlobals * xglobals;
}
// signature: zCamPlayer::set_rest(const zCamPlayer::rest_config &, bool, float, int)
// Range: 0x80114FD0 -> 0x801150BC
void zCamPlayer::set_rest() {
}
// Range: 0x801150C0 -> 0x80115550
void zCamPlayer::snap_reset(class zCamPlayer * this /* r30 */, class xMat4x3 & mat /* r31 */) {
    // Local variables
    class rest_config restore_cfg; // r1+0x28
    class xVec3 mount_origin; // r1+0x18
    float start_phi; // r1+0x8
    class xVec3 start_euler; // r1+0xC
    float start_yaw_offset; // f3
    float start_pitch_offset; // f0

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80115550 -> 0x80115860
void zCamPlayer::reset(class zCamPlayer * this /* r29 */) {
    // Local variables
    class xVec3 origin; // r1+0x8

    // References
    // -> float tim_dist;
    // -> static float sCamPlayerTweakMountMinOffset;
    // -> static float sCamTweakPitchCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> class xGlobals * xglobals;
}
// Range: 0x80115860 -> 0x80115A6C
void zCamPlayer::reset_basis(class zCamPlayer * this /* r31 */) {
    // Local variables
    class xVec3 mount_origin; // r1+0x8

    // References
    // -> static float sCamTweakPivotHeightCur;
}
// Range: 0x80115A70 -> 0x8011613C
void zCamPlayer::update_target(class zCamPlayer * this /* r31 */, float dt /* f30 */) {
    // Local variables
    class xVec3 player_loc; // r1+0x5C
    class xVec3 old_target_loc; // r1+0x50

    {
        // Range: 0x80115C74 -> 0x80115DC4
        // Local variables
        float xzvel2; // f4

        {
            // Range: 0x80115D00 -> 0x80115DC4
            // Local variables
            float xzscale; // f7
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x80116140 -> 0x80116334
void zCamPlayer::update_mount(class zCamPlayer * this /* r30 */, float dt /* f30 */) {
    // Local variables
    float prev_mount_height; // f31
    float dmount; // f3
    float dfloor; // f2

    // References
    // -> static float sCamPlayerTweakMountMinOffset;
    // -> class xGlobals * xglobals;
}
// signature: zCamPlayer::update_drift(float)
// Range: 0x80116350 -> 0x80116794
void zCamPlayer::update_drift(class zCamPlayer * this /* r31 */) {
    // Local variables
    class xVec3 origin; // r1+0x18
    class xVec3 drift_loc; // r1+0xC
    float phi; // r1+0x8
    float ddist; // f3
    float max_dphi; // f3
    float dphi; // f4

    {
        // Range: 0x80116554 -> 0x801165B0
        // Local variables
        float max_ddist; // f4
    }

    // References
    // -> static float sCamTweakPivotHeightCur;
}
// Range: 0x801167A0 -> 0x80116944
void zCamPlayer::update_zone(class zCamPlayer * this /* r29 */, float dt /* f30 */) {
    // Local variables
    float goal_yaw_offset; // f29
    float goal_pitch_offset; // f31

    {
        // Range: 0x80116840 -> 0x80116888
        // Local variables
        float t; // f6
    }
}
// signature: zCamPlayer::update_zone_dist(float)
// Range: 0x80116950 -> 0x80116B2C
void zCamPlayer::update_zone_dist() {
    // Local variables
    float dist_away; // f6
    float ddist; // f7
    float dxz; // f0
    float rest_to_goal; // f2
}
// Range: 0x80116B30 -> 0x80116DF4
void zCamPlayer::update_input_theta(class zCamPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 mount_origin; // r1+0x28

    {
        // Range: 0x80116B38 -> 0x80116D28
        // Local variables
        float dtheta; // f2
        float max_vel_theta; // f4
        float stickx; // f8
        class xVec2 stick2; // r1+0x8
    }

    // References
    // -> static float sCamTweakPivotHeightCur;
    // -> class xVec3 tim_vect;
    // -> float tim_maxBleedOut;
    // -> float tim_BleedOut;
    // -> class xGlobals * xglobals;
}
// Range: 0x80116E00 -> 0x801174A0
void zCamPlayer::update_secondary_clamping(class zCamPlayer * this /* r31 */, float dt /* f22 */) {
    // Local variables
    bool have_secondary; // r29
    class xEnt * ent; // r28
    class xVec3 * center; // r0
    float radius; // f31
    float margin_angle; // f30
    float Ax; // f29
    float Az; // f28
    float Bx; // f27
    float Bz; // f26
    float Cx; // f25
    float Cz; // f24
    float CAx; // f5
    float CAz; // f6
    float CAmag; // f0
    float Vscale; // f4
    float Vx; // f7
    float Vz; // f8
    float yaw_start; // f23
    float yaw_end; // f0

    {
        // Range: 0x80116F9C -> 0x8011728C
        // Local variables
        float max_dyaw; // f0
        float dyaw2; // f4
        float dyaw1; // f28
        float yaw_Q; // f0
        float yaw_P; // f0
    }
    {
        // Range: 0x801172AC -> 0x80117420
        // Local variables
        float CBmag; // f0
        float CBz; // f0
        float CBx; // f4
        float dtheta; // f5

        {
            // Range: 0x801173A4 -> 0x801173D8
            // Local variables
            float scale; // f0
        }
    }

    // References
    // -> class xSphere sphere;
}
// Range: 0x801174A0 -> 0x80117820
void zCamPlayer::update_aggression(class zCamPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float min_dtheta; // f31
    float dtheta; // f1
    class xVec3 mount_origin; // r1+0x8

    {
        // Range: 0x80117538 -> 0x801175DC
        // Local variables
        float opt_dtheta; // f0
    }

    // References
    // -> static float sCamTweakPivotHeightCur;
}
// Range: 0x80117820 -> 0x80117BA4
void zCamPlayer::update_restoration(class zCamPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float drest_phi; // f1
    class xVec2 stick2; // r1+0x8
    class xVec3 mount_origin; // r1+0x18

    {
        // Range: 0x80117940 -> 0x80117A48
        // Local variables
        class xVec2 stick2; // r1+0x10
    }

    // References
    // -> static float sCamTweakPivotHeightCur;
    // -> class xGlobals * xglobals;
}
// Range: 0x80117BB0 -> 0x80117EB8
void zCamPlayer::update_dist_restoration(class zCamPlayer * this /* r29 */, float dt /* f31 */) {
    // Local variables
    float dist_away; // f5
    class xVec3 * playerPos; // r27
    class xVec3 mount_origin; // r1+0x8

    // References
    // -> static float sCamTweakPivotHeightCur;
    // -> float tim_scare_val;
    // -> float tim_dist;
    // -> bool tim_scarer;
    // -> float tim_zoomOut_Dist_XZ_OtherNPCs;
    // -> float tim_zoomOut_Dist_YUp_OtherNPCs;
    // -> float tim_zoomOut_Dist_YDown_OtherNPCs;
    // -> class xGlobals * xglobals;
}
// Range: 0x80117EC0 -> 0x80118358
void zCamPlayer::update_pitch(class zCamPlayer * this /* r31 */, float dt /* f27 */) {
    // Local variables
    float goal_pitch_rest; // f31
    float goal_pitch_clamp0; // r31
    float goal_pitch_clamp1; // f2
    float goal_pitch_clamp; // f28

    {
        // Range: 0x80117ECC -> 0x8011807C
        // Local variables
        float clamped_pitch; // f10
        float look_diff; // f0
        float look_height; // f0
        float target_height; // f29
        float xzdist; // f28
        float dz; // f6
        float dx; // f5
    }
    {
        // Range: 0x8011807C -> 0x8011820C
        // Local variables
        float pitch; // f0
        class xVec3 offset; // r1+0x8
        class xVec3 mount_origin; // r1+0x14
        float pitch_max; // f29
        float pitch_min; // f30
        float pitch_clamp_center; // f11
    }

    // References
    // -> static float sCamTweakPivotHeightCur;
    // -> static float sCamTweakPitchCur;
}
