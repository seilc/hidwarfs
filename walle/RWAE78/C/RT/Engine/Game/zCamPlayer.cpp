/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamPlayer.cpp
*/
static float sCamPlayerTweakMountMinOffset; // size: 0x4, address: 0x8076BED0
bool lock_behind_on; // size: 0x1, address: 0x8076BED4
float lock_behind_degrees; // size: 0x4, address: 0x8076BED8
float tim_dist; // size: 0x4, address: 0x8076BEDC
bool tim_scarer; // size: 0x1, address: 0x8076BEE0
float tim_scare_val; // size: 0x4, address: 0x806F4160
float tim_zoomOut_Dist; // size: 0x4, address: 0x806F4164
float tim_zoomOut_Dist_XZ_AmbientHuman; // size: 0x4, address: 0x806F4168
float tim_zoomOut_Dist_YUp_AmbientHuman; // size: 0x4, address: 0x806F416C
float tim_zoomOut_Dist_YDown_AmbientHuman; // size: 0x4, address: 0x806F4170
float tim_zoomOut_Dist_XZ_OtherNPCs; // size: 0x4, address: 0x806F4174
float tim_zoomOut_Dist_YUp_OtherNPCs; // size: 0x4, address: 0x806F4178
float tim_zoomOut_Dist_YDown_OtherNPCs; // size: 0x4, address: 0x806F417C
// Range: 0x800A3D10 -> 0x800A3E30
void zCamPlayer::create(class zCamPlayer * this /* r30 */) {
    // Local variables
    class xEnvAsset * easset; // r3

    // References
    // -> class zGlobals globals;
    // -> class config cfg;
}
// Range: 0x800A3E30 -> 0x800A3E90
void zCamPlayer::start(class zCamPlayer * this /* r31 */) {
}
// signature: zCamPlayer::update(xScene &, float)
// Range: 0x800A3E90 -> 0x800A4924
void zCamPlayer::update(class zCamPlayer * this /* r30 */, float dt /* f29 */) {
    // Local variables
    class xVec2 stick2; // r1+0x10
    float stickMag2; // f2
    float targetBlend; // f5
    float newCamBlend; // f2

    // References
    // -> static float sCamTweakFOVCur;
    // -> static float sCamTweakPivotHeightCur;
    // -> float camCollisionBlend;
    // -> class xGlobals * xglobals;
}
// signature: zCamPlayer::set_rest(const zCamPlayer::rest_config &, bool, float, int)
// Range: 0x800A4930 -> 0x800A4A1C
void zCamPlayer::set_rest() {
}
// Range: 0x800A4A20 -> 0x800A4EB4
void zCamPlayer::snap_reset(class zCamPlayer * this /* r29 */, class xMat4x3 * mat /* r30 */) {
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
// Range: 0x800A4EC0 -> 0x800A51A8
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
// Range: 0x800A51B0 -> 0x800A53BC
void zCamPlayer::reset_basis(class zCamPlayer * this /* r31 */) {
    // Local variables
    class xVec3 mount_origin; // r1+0x8

    // References
    // -> static float sCamTweakPivotHeightCur;
}
// Range: 0x800A53C0 -> 0x800A5AA0
void zCamPlayer::update_target(class zCamPlayer * this /* r30 */, float dt /* f28 */) {
    // Local variables
    class xVec3 player_loc; // r1+0x5C
    class xVec3 old_target_loc; // r1+0x50

    {
        // Range: 0x800A55F0 -> 0x800A572C
        // Local variables
        float xzvel2; // f24

        {
            // Range: 0x800A567C -> 0x800A572C
            // Local variables
            float xzscale; // f7
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800A5AA0 -> 0x800A5C68
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
// Range: 0x800A5C70 -> 0x800A60A8
void zCamPlayer::update_drift(class zCamPlayer * this /* r30 */) {
    // Local variables
    class xVec3 origin; // r1+0x18
    class xVec3 drift_loc; // r1+0xC
    float phi; // r1+0x8
    float ddist; // f3
    float max_dphi; // f3
    float dphi; // f4

    {
        // Range: 0x800A5E80 -> 0x800A5ED8
        // Local variables
        float max_ddist; // f4
    }

    // References
    // -> static float sCamTweakPivotHeightCur;
}
// signature: zCamPlayer::update_zone_dist(float)
// Range: 0x800A60B0 -> 0x800A62F8
void zCamPlayer::update_zone_dist(class zCamPlayer * this /* r30 */) {
    // Local variables
    float dist_away; // f31
    float ddist; // f30
    float dxz; // f0
    float rest_to_goal; // f2
}
// Range: 0x800A6300 -> 0x800A65B0
void zCamPlayer::update_input_theta(class zCamPlayer * this /* r30 */, float dt /* f31 */) {
    // Local variables
    class xVec3 mount_origin; // r1+0x28

    {
        // Range: 0x800A632C -> 0x800A64E0
        // Local variables
        float dtheta; // f2
        float max_vel_theta; // f5
        float stickx; // f2
        class xVec2 stick2; // r1+0x8
    }

    // References
    // -> static float sCamTweakPivotHeightCur;
    // -> class xVec3 tim_vect;
    // -> float tim_maxBleedOut;
    // -> float tim_BleedOut;
    // -> class xGlobals * xglobals;
}
// Range: 0x800A65B0 -> 0x800A6BCC
void zCamPlayer::update_secondary_clamping(class zCamPlayer * this /* r30 */, float dt /* f31 */) {
    // Local variables
    bool have_secondary; // r0
    class xEnt * ent; // r3
    class xVec3 * center; // r0
    float radius; // f26
    float margin_angle; // f25
    float Ax; // f24
    float Az; // f23
    float Bx; // f22
    float Bz; // f21
    float Cx; // f20
    float Cz; // f19
    float CAx; // f27
    float CAz; // f28
    float CAmag; // f0
    float Vscale; // f4
    float Vx; // f18
    float Vz; // f17
    float yaw_start; // f16
    float yaw_end; // f0

    {
        // Range: 0x800A6728 -> 0x800A69CC
        // Local variables
        float max_dyaw; // f0
        float dyaw2; // f2
        float dyaw1; // f17
        float yaw_Q; // f0
        float yaw_P; // f0
    }
    {
        // Range: 0x800A69EC -> 0x800A6B34
        // Local variables
        float CBmag; // f0
        float CBz; // f4
        float CBx; // f3
        float dtheta; // f16

        {
            // Range: 0x800A6AC0 -> 0x800A6AEC
            // Local variables
            float scale; // f0
        }
    }
}
// Range: 0x800A6BD0 -> 0x800A6F14
void zCamPlayer::update_aggression(class zCamPlayer * this /* r30 */, float dt /* f31 */) {
    // Local variables
    float min_dtheta; // f31
    float dtheta; // f1
    class xVec3 mount_origin; // r1+0x8

    {
        // Range: 0x800A6C68 -> 0x800A6D08
        // Local variables
        float opt_dtheta; // f0
    }

    // References
    // -> static float sCamTweakPivotHeightCur;
}
// Range: 0x800A6F20 -> 0x800A726C
void zCamPlayer::update_restoration(class zCamPlayer * this /* r30 */, float dt /* f31 */) {
    // Local variables
    float drest_phi; // f5
    class xVec2 stick2; // r1+0x8
    class xVec3 mount_origin; // r1+0x18

    {
        // Range: 0x800A7044 -> 0x800A7120
        // Local variables
        class xVec2 stick2; // r1+0x10
    }

    // References
    // -> static float sCamTweakPivotHeightCur;
    // -> class xGlobals * xglobals;
}
// Range: 0x800A7270 -> 0x800A758C
void zCamPlayer::update_dist_restoration(class zCamPlayer * this /* r31 */, float dt /* f31 */) {
    // Local variables
    float dist_away; // f5
    class xVec3 * playerPos; // r25
    class xVec3 mount_origin; // r1+0x8

    // References
    // -> static float sCamTweakPivotHeightCur;
    // -> float tim_scare_val;
    // -> float tim_dist;
    // -> bool tim_scarer;
    // -> float tim_zoomOut_Dist_XZ_OtherNPCs;
    // -> float tim_zoomOut_Dist_YUp_OtherNPCs;
    // -> float tim_zoomOut_Dist_YDown_OtherNPCs;
    // -> float tim_zoomOut_Dist_XZ_AmbientHuman;
    // -> float tim_zoomOut_Dist_YUp_AmbientHuman;
    // -> float tim_zoomOut_Dist_YDown_AmbientHuman;
    // -> class xGlobals * xglobals;
}
// Range: 0x800A7590 -> 0x800A7A00
void zCamPlayer::update_pitch(class zCamPlayer * this /* r30 */, float dt /* f27 */) {
    // Local variables
    float goal_pitch_rest; // f31
    float goal_pitch_clamp0; // r31
    float goal_pitch_clamp1; // f2
    float goal_pitch_clamp; // f28

    {
        // Range: 0x800A75F8 -> 0x800A7748
        // Local variables
        float clamped_pitch; // f10
        float look_diff; // f0
        float look_height; // f0
        float target_height; // f25
        float xzdist; // f24
        float dz; // f6
        float dx; // f5
    }
    {
        // Range: 0x800A7748 -> 0x800A78B4
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
