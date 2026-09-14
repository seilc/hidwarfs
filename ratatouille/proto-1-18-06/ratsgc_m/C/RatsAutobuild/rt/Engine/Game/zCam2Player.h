/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80154F3C -> 0x80155450
*/
// Range: 0x80154F3C -> 0x80154FA4
// this: r31
void basis_traits::snap_springs() {}

// Range: 0x80154FA4 -> 0x80155034
// this: r31
void basis_traits::update_springs(float dt /* f31 */) {}

// Range: 0x80155034 -> 0x801550B4
void zCam2Player::calc_goal_position(struct xVec3 & position /* r30 */, const struct basis_traits & polar_basis /* r31 */) {}

// Range: 0x801550B4 -> 0x80155174
void zCam2Player::polar_to_cart(struct xVec3 & loc /* r30 */, const struct xVec3 & origin /* r31 */, float theta /* f28 */, float phi /* f29 */, float dist /* f30 */) {
    // Local variables
    float cp; // f31
}

// Range: 0x80155174 -> 0x801551BC
// this: r3
float zCam2Player::yaw_to_theta_goal(float yaw /* f31 */) {}

// Range: 0x801551BC -> 0x801551F8
// this: r31
void basis_traits::sync_polar_goals() {}

// Range: 0x801551F8 -> 0x80155278
// this: r31
void basis_traits::sync_polar_goals(const struct xVec3 & thisOrigin /* r0 */) {
    // Local variables
    float lTheta; // r1+0x10
    float lPhi; // r1+0xC
    float lDist; // r1+0x8
}

// Range: 0x80155278 -> 0x8015533C
void zCam2Player::cart_to_polar(const struct xVec3 & loc /* r0 */, const struct xVec3 & origin /* r0 */, float & theta /* r29 */, float & phi /* r30 */, float & dist /* r31 */) {
    // Local variables
    float dx; // f31
    float dy; // f30
    float dz; // f29
}

// Range: 0x8015533C -> 0x80155384
// this: r3
float zCam2Player::theta_to_yaw_goal(float basisTheta /* f31 */) {}

// Range: 0x80155384 -> 0x80155404
void zCam2Player::calc_sprung_position(struct xVec3 & position /* r30 */, const struct basis_traits & polar_basis /* r31 */) {}

// Range: 0x80155404 -> 0x80155428
// this: r3
void zCam2Player::set_rest(const struct rest_config & cfg /* r0 */) {}

// Range: 0x8015544C -> 0x80155450
// this: r0
class zCam2Player * zCam2Player::get_zCam2Player() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016994C -> 0x8016994C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016DF8C -> 0x8016DF8C
*/

