/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801552C0 -> 0x801557D4
*/
// Range: 0x801552C0 -> 0x80155328
// this: r31
void basis_traits::snap_springs() {}

// Range: 0x80155328 -> 0x801553B8
// this: r31
void basis_traits::update_springs(float dt /* f31 */) {}

// Range: 0x801553B8 -> 0x80155438
void zCam2Player::calc_goal_position(struct xVec3 & position /* r30 */, const struct basis_traits & polar_basis /* r31 */) {}

// Range: 0x80155438 -> 0x801554F8
void zCam2Player::polar_to_cart(struct xVec3 & loc /* r30 */, const struct xVec3 & origin /* r31 */, float theta /* f28 */, float phi /* f29 */, float dist /* f30 */) {
    // Local variables
    float cp; // f31
}

// Range: 0x801554F8 -> 0x80155540
// this: r3
float zCam2Player::yaw_to_theta_goal(float yaw /* f31 */) {}

// Range: 0x80155540 -> 0x8015557C
// this: r31
void basis_traits::sync_polar_goals() {}

// Range: 0x8015557C -> 0x801555FC
// this: r31
void basis_traits::sync_polar_goals(const struct xVec3 & thisOrigin /* r0 */) {
    // Local variables
    float lTheta; // r1+0x10
    float lPhi; // r1+0xC
    float lDist; // r1+0x8
}

// Range: 0x801555FC -> 0x801556C0
void zCam2Player::cart_to_polar(const struct xVec3 & loc /* r0 */, const struct xVec3 & origin /* r0 */, float & theta /* r29 */, float & phi /* r30 */, float & dist /* r31 */) {
    // Local variables
    float dx; // f31
    float dy; // f30
    float dz; // f29
}

// Range: 0x801556C0 -> 0x80155708
// this: r3
float zCam2Player::theta_to_yaw_goal(float basisTheta /* f31 */) {}

// Range: 0x80155708 -> 0x80155788
void zCam2Player::calc_sprung_position(struct xVec3 & position /* r30 */, const struct basis_traits & polar_basis /* r31 */) {}

// Range: 0x80155788 -> 0x801557AC
// this: r3
void zCam2Player::set_rest(const struct rest_config & cfg /* r0 */) {}

// Range: 0x801557D0 -> 0x801557D4
// this: r0
class zCam2Player * zCam2Player::get_zCam2Player() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80169CD0 -> 0x80169CD0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCam2Player.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016E310 -> 0x8016E310
*/

