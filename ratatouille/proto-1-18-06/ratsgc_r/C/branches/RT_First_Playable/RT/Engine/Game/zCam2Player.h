/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80221DAC -> 0x802222F8
*/
// Range: 0x80221DAC -> 0x80221E14
// this: r31
void basis_traits::snap_springs() {}

// Range: 0x80221E14 -> 0x80221EA4
// this: r31
void basis_traits::update_springs(float dt /* f31 */) {}

// Range: 0x80221EA4 -> 0x80221F34
void zCam2Player::calc_goal_position(struct xVec3 & position /* r30 */, const struct basis_traits & polar_basis /* r31 */) {}

// Range: 0x80221F34 -> 0x80221FFC
void zCam2Player::polar_to_cart(struct xVec3 & loc /* r30 */, const struct xVec3 & origin /* r31 */, float theta /* f28 */, float phi /* f29 */, float dist /* f30 */) {
    // Local variables
    float cp; // f31
}

// Range: 0x80221FFC -> 0x80222044
// this: r3
float zCam2Player::yaw_to_theta_goal(float yaw /* f31 */) {}

// Range: 0x80222044 -> 0x80222080
// this: r31
void basis_traits::sync_polar_goals() {}

// Range: 0x80222080 -> 0x80222100
// this: r31
void basis_traits::sync_polar_goals(const struct xVec3 & thisOrigin /* r0 */) {
    // Local variables
    float lTheta; // r1+0x10
    float lPhi; // r1+0xC
    float lDist; // r1+0x8
}

// Range: 0x80222100 -> 0x802221D4
void zCam2Player::cart_to_polar(const struct xVec3 & loc /* r0 */, const struct xVec3 & origin /* r0 */, float & theta /* r29 */, float & phi /* r30 */, float & dist /* r31 */) {
    // Local variables
    float dx; // f31
    float dy; // f30
    float dz; // f29
}

// Range: 0x802221D4 -> 0x8022221C
// this: r3
float zCam2Player::theta_to_yaw_goal(float basisTheta /* f31 */) {}

// Range: 0x8022221C -> 0x802222AC
void zCam2Player::calc_sprung_position(struct xVec3 & position /* r30 */, const struct basis_traits & polar_basis /* r31 */) {}

// Range: 0x802222AC -> 0x802222D0
// this: r3
void zCam2Player::set_rest(const struct rest_config & cfg /* r0 */) {}

// Range: 0x802222F4 -> 0x802222F8
// this: r0
class zCam2Player * zCam2Player::get_zCam2Player() const {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023F114 -> 0x8023F114
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80245F30 -> 0x80245F30
*/

