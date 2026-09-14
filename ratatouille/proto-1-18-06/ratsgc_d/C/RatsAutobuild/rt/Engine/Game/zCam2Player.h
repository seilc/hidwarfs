/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028C0F4 -> 0x8028C6F4
*/
// Range: 0x8028C0F4 -> 0x8028C15C
// this: r31
void basis_traits::snap_springs() {}

// Range: 0x8028C15C -> 0x8028C1EC
// this: r31
void basis_traits::update_springs(float dt /* f31 */) {}

// Range: 0x8028C1EC -> 0x8028C274
void zCam2Player::calc_goal_position(struct xVec3 & position /* r1+0x8 */, const struct basis_traits & polar_basis /* r31 */) {}

// Range: 0x8028C274 -> 0x8028C348
void zCam2Player::polar_to_cart(struct xVec3 & loc /* r30 */, const struct xVec3 & origin /* r31 */, float theta /* f28 */, float phi /* f29 */, float dist /* f30 */) {
    // Local variables
    float cp; // f31
}

// Range: 0x8028C348 -> 0x8028C38C
// this: r1+0x8
float zCam2Player::yaw_to_theta_goal(float yaw /* r1+0xC */) {}

// Range: 0x8028C38C -> 0x8028C3C8
// this: r31
void basis_traits::sync_polar_goals() {}

// Range: 0x8028C3C8 -> 0x8028C450
// this: r31
void basis_traits::sync_polar_goals(const struct xVec3 & thisOrigin /* r1+0x8 */) {
    // Local variables
    float lTheta; // r1+0x14
    float lPhi; // r1+0x10
    float lDist; // r1+0xC
}

// Range: 0x8028C450 -> 0x8028C51C
void zCam2Player::cart_to_polar(const struct xVec3 & loc /* r29 */, const struct xVec3 & origin /* r30 */, float & theta /* r27 */, float & phi /* r28 */, float & dist /* r31 */) {
    // Local variables
    float dx; // f31
    float dy; // f30
    float dz; // f29
}

// Range: 0x8028C5CC -> 0x8028C610
// this: r1+0x8
float zCam2Player::theta_to_yaw_goal(float basisTheta /* r1+0xC */) {}

// Range: 0x8028C610 -> 0x8028C698
void zCam2Player::calc_sprung_position(struct xVec3 & position /* r1+0x8 */, const struct basis_traits & polar_basis /* r31 */) {}

// Range: 0x8028C698 -> 0x8028C6CC
// this: r1+0x8
void zCam2Player::set_rest(const struct rest_config & cfg /* r1+0xC */) {}

// Range: 0x8028C6F0 -> 0x8028C6F4
// this: r3
class zCam2Player * zCam2Player::get_zCam2Player() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802ACEBC -> 0x802ACEBC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B4A40 -> 0x802B4A40
*/

