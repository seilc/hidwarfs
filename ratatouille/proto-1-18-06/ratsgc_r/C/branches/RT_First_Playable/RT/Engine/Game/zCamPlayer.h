/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCamPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801031F4 -> 0x80103214
*/
// Range: 0x801031F4 -> 0x80103204
// this: r0
void zCamPlayer::track_ground() {}

// Range: 0x80103204 -> 0x80103214
// this: r0
void zCamPlayer::track_target() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCamPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020B970 -> 0x8020B984
*/
// Range: 0x8020B970 -> 0x8020B984
// this: r0
void zCamPlayer::set_start_theta(float theta /* f0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCamPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80239A28 -> 0x80239A28
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCamPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80243964 -> 0x80243B50
*/
// Range: 0x80243964 -> 0x80243978
// this: r0
void zCamPlayer::set_start_yaw_offset(float yaw_offset /* f0 */) {}

// Range: 0x80243978 -> 0x8024398C
// this: r0
void zCamPlayer::set_start_pitch_offset(float pitch_offset /* f0 */) {}

// Range: 0x8024398C -> 0x802439A0
// this: r0
void zCamPlayer::set_start_phi(float phi /* f0 */) {}

// Range: 0x802439A0 -> 0x802439B4
// this: r0
void zCamPlayer::set_start_dist(float dist /* f0 */) {}

// Range: 0x802439B4 -> 0x80243A88
void zCamPlayer::cart_to_polar(const struct xVec3 & loc /* r0 */, const struct xVec3 & origin /* r0 */, float & theta /* r29 */, float & phi /* r30 */, float & dist /* r31 */) {
    // Local variables
    float dx; // f31
    float dy; // f30
    float dz; // f29
}

// Range: 0x80243A88 -> 0x80243B50
void zCamPlayer::polar_to_cart(struct xVec3 & loc /* r30 */, const struct xVec3 & origin /* r31 */, float theta /* f28 */, float phi /* f29 */, float dist /* f30 */) {
    // Local variables
    float cp; // f31
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCamPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8026A96C -> 0x8026A97C
*/
// Range: 0x8026A96C -> 0x8026A97C
// this: r0
void zCamPlayer::reset_secondary_target() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCamPlayer.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80280FCC -> 0x80280FDC
*/
// Range: 0x80280FCC -> 0x80280FD4
// this: r0
void zCamPlayer::set_blend_speed_collide_dist(float collide_dist /* f0 */) {}

// Range: 0x80280FD4 -> 0x80280FDC
// this: r0
void zCamPlayer::set_blend_speed_rest_dist(float rest_dist /* f0 */) {}


