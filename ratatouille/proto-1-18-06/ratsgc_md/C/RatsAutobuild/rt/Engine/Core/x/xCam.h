/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000E108 -> 0x8000ECAC
*/
// Range: 0x8000E108 -> 0x8000E134
void xCam::orient_to_world(struct xMat3x3 & mat /* r0 */, const struct xCamOrientEuler & o /* r0 */) {}

// Range: 0x8000E134 -> 0x8000E160
void xCam::orient_to_world(struct xMat3x3 & mat /* r0 */, const struct xQuat & o /* r4 */) {}

// Range: 0x8000E160 -> 0x8000E180
void xCam::coord_to_world(struct xVec3 & loc /* r0 */, const struct xCamCoordSphere & c /* r0 */) {}

// Range: 0x8000E180 -> 0x8000E1F0
struct xVec3 & xCam::convert(struct xVec3 & o /* r30 */, const struct xCamCoordSphere & i /* r31 */) {
    // Local variables
    struct xVec3 dir; // r1+0x8
}

// Range: 0x8000E1F0 -> 0x8000E210
void xCam::coord_to_world(struct xVec3 & loc /* r0 */, const struct xCamCoordCylinder & c /* r0 */) {}

// Range: 0x8000E210 -> 0x8000E280
struct xVec3 & xCam::convert(struct xVec3 & o /* r30 */, const struct xCamCoordCylinder & i /* r31 */) {}

// Range: 0x8000E280 -> 0x8000E2A0
void xCam::coord_to_world(struct xVec3 & loc /* r0 */, const struct xVec3 & c /* r0 */) {}

// Range: 0x8000E2A0 -> 0x8000E2A4
void xCam::debug_init() {}

// Range: 0x8000E2A4 -> 0x8000E2B4
// this: r0
unsigned char xCam::blending() const {}

// Range: 0x8000E2B4 -> 0x8000E308
void xCamGroup::stop(struct xCam & cam /* r31 */) {}

// Range: 0x8000E308 -> 0x8000E314
// this: r0
unsigned char xCam::started() const {}

// Range: 0x8000E314 -> 0x8000E31C
float xCam::getCameraPlayerAudioBias() {}

// Range: 0x8000E31C -> 0x8000E398
// this: r30
void xCam::do_update(struct xScene & scene /* r31 */, float dt /* f31 */) {}

// Range: 0x8000E398 -> 0x8000E39C
void xCam::post_update() {}

// Range: 0x8000E39C -> 0x8000E3A0
void xCam::pre_update() {}

// Range: 0x8000E3D4 -> 0x8000E3E8
// this: r0
struct xCam * xCam::get_next() {}

// Range: 0x8000E3E8 -> 0x8000E3FC
// this: r0
xCamBias::xCamBias() {
    // References
    // -> struct [anonymous] xCamBias::__vtable;
}

// Range: 0x8000E408 -> 0x8000E420
void xCam::blend(float & o /* r0 */, float a /* f0 */, float b /* f0 */, float s /* f0 */) {}

// Range: 0x8000E420 -> 0x8000E434
// this: r0
struct xCam * xCam::find_camera(unsigned int ownerID /* r0 */) {}

// Range: 0x8000E434 -> 0x8000E488
struct xCamCoordSphere & xCamBlend::coll_convert(const struct xCam & cam /* r4 */, struct xCamCoordSphere & c /* r5 */) {}

// Range: 0x8000E488 -> 0x8000E53C
struct xCamCoordSphere & xCam::convert(struct xCamCoordSphere & o /* r30 */, const struct xCamCoordCylinder & i /* r31 */) {
    // Local variables
    struct xMat3x3 mat; // r1+0x20
    struct xVec3 offset; // r1+0x10
}

// Range: 0x8000E53C -> 0x8000E5AC
void xCam::blend(struct xCamCoordSphere & o /* r29 */, const struct xCamCoordSphere & a /* r30 */, const struct xCamCoordSphere & b /* r31 */, float s /* f31 */) {}

// Range: 0x8000E5AC -> 0x8000E600
struct xCamCoordSphere & xCamBlend::convert(const struct xCam & cam /* r4 */, struct xCamCoordSphere & c /* r5 */) {}

// Range: 0x8000E600 -> 0x8000E654
struct xCamCoordCylinder & xCamBlend::coll_convert(const struct xCam & cam /* r4 */, struct xCamCoordCylinder & c /* r5 */) {}

// Range: 0x8000E654 -> 0x8000E6D4
struct xCamCoordCylinder & xCam::convert(struct xCamCoordCylinder & o /* r30 */, const struct xCamCoordSphere & i /* r31 */) {
    // Local variables
    struct xVec3 offset; // r1+0x8
}

// Range: 0x8000E6D4 -> 0x8000E758
void xCam::blend(struct xCamCoordCylinder & o /* r29 */, const struct xCamCoordCylinder & a /* r30 */, const struct xCamCoordCylinder & b /* r31 */, float s /* f31 */) {}

// Range: 0x8000E758 -> 0x8000E7CC
void xCam::blend_radian(float & o /* r31 */, float a /* f30 */, float b /* f0 */, float s /* f31 */) {
    // Local variables
    float diff; // f0
}

// Range: 0x8000E7CC -> 0x8000E820
struct xCamCoordCylinder & xCamBlend::convert(const struct xCam & cam /* r4 */, struct xCamCoordCylinder & c /* r5 */) {}

// Range: 0x8000E820 -> 0x8000E890
struct xVec3 & xCamBlend::coll_convert(const struct xCam & cam /* r4 */, struct xVec3 & c /* r5 */) {}

// Range: 0x8000E890 -> 0x8000E90C
void xCam::blend(struct xVec3 & o /* r29 */, const struct xVec3 & a /* r30 */, const struct xVec3 & b /* r31 */, float s /* f31 */) {}

// Range: 0x8000E90C -> 0x8000E97C
struct xVec3 & xCamBlend::convert(const struct xCam & cam /* r4 */, struct xVec3 & c /* r5 */) {}

// Range: 0x8000E97C -> 0x8000E9D0
struct xCamOrientEuler & xCamBlend::coll_convert(const struct xCam & cam /* r4 */, struct xCamOrientEuler & c /* r5 */) {}

// Range: 0x8000E9D0 -> 0x8000EA24
struct xCamOrientEuler & xCam::convert(struct xCamOrientEuler & o /* r31 */, const struct xQuat & i /* r4 */) {
    // Local variables
    struct xMat3x3 mat; // r1+0x10
}

// Range: 0x8000EA24 -> 0x8000EAA0
void xCam::blend(struct xCamOrientEuler & o /* r29 */, const struct xCamOrientEuler & a /* r30 */, const struct xCamOrientEuler & b /* r31 */, float s /* f31 */) {}

// Range: 0x8000EAA0 -> 0x8000EAF4
struct xCamOrientEuler & xCamBlend::convert(const struct xCam & cam /* r4 */, struct xCamOrientEuler & c /* r5 */) {}

// Range: 0x8000EAF4 -> 0x8000EB48
struct xQuat & xCamBlend::coll_convert(const struct xCam & cam /* r4 */, struct xQuat & c /* r5 */) {}

// Range: 0x8000EB48 -> 0x8000EB98
struct xQuat & xCam::convert(struct xQuat & o /* r31 */, const struct xCamOrientEuler & i /* r0 */) {
    // Local variables
    struct xMat3x3 mat; // r1+0x10
}

// Range: 0x8000EB98 -> 0x8000EBB8
void xCam::blend(struct xQuat & o /* r0 */, const struct xQuat & a /* r0 */, const struct xQuat & b /* r0 */, float s /* f0 */) {}

// Range: 0x8000EBB8 -> 0x8000EC0C
struct xQuat & xCamBlend::convert(const struct xCam & cam /* r4 */, struct xQuat & c /* r5 */) {}

// Range: 0x8000EC0C -> 0x8000EC2C
void xCam::coord_to_local(struct xVec3 & c /* r0 */, const struct xVec3 & loc /* r0 */) {}

// Range: 0x8000EC2C -> 0x8000EC30
// this: r0
struct xCam * xCam::get_final_dest() {}

// Range: 0x8000EC30 -> 0x8000EC38
class zCamSplineCommonMix * xCam::get_common_mix() {}

// Range: 0x8000EC38 -> 0x8000EC3C
void xCam::destroy() {}

// Range: 0x8000EC3C -> 0x8000EC44
class zCam2Player * xCam::get_zCam2Player() {}

// Range: 0x8000EC44 -> 0x8000EC4C
struct xCamConfigFollow * xCam::config_follow() {}

// Range: 0x8000EC4C -> 0x8000EC7C
// this: r3
class zCam2Player * xCamBlend::get_zCam2Player() const {}

// Range: 0x8000EC7C -> 0x8000ECAC
// this: r3
struct xCam * xCamBlend::get_final_dest() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8000F014 -> 0x8000F124
*/
// Range: 0x8000F014 -> 0x8000F03C
void xCam::blend3(float & o /* r0 */, float i0 /* f0 */, float i1 /* f0 */, float i2 /* f0 */, float s /* f0 */) {}

// Range: 0x8000F03C -> 0x8000F0A0
void xCam::spring_interp(float & s /* r31 */, float & v /* r0 */, float s0 /* f0 */, float s1 /* f31 */, float dt /* f3 */, float speed /* f4 */, float e /* f5 */) {
    // Local variables
    float ds; // r1+0x8
}

// Range: 0x8000F0A0 -> 0x8000F124
void xCam::spring_interp(float & s /* r28 */, float & v /* r29 */, const float & s0 /* r30 */, const float & s1 /* r31 */, float dt /* f30 */, float speed /* f31 */) {
    // Local variables
    float e; // f5
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80011CE4 -> 0x80011D74
*/
// Range: 0x80011CE4 -> 0x80011D74
struct xVec3 & xCam::convert(struct xVec3 & o /* r30 */, const struct xCamCoordPolar & i /* r31 */) {
    // Local variables
    float cp; // f31
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001DD84 -> 0x8001DDA4
*/
// Range: 0x8001DD84 -> 0x8001DDA4
void xCam::orient_to_local(struct xQuat & o /* r0 */, const struct xMat3x3 & mat /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002F188 -> 0x8002F54C
*/
// Range: 0x8002F188 -> 0x8002F1FC
void xCam::spring_interp(struct xVec3 & s /* r28 */, float & v /* r29 */, const struct xVec3 & s0 /* r30 */, const struct xVec3 & s1 /* r31 */, float dt /* f30 */, float speed /* f31 */) {
    // Local variables
    float e; // f3
}

// Range: 0x8002F1FC -> 0x8002F380
void xCam::spring_interp(struct xVec3 & s /* r29 */, float & v /* r30 */, const struct xVec3 & s0 /* r0 */, const struct xVec3 & s1 /* r31 */, float dt /* f25 */, float speed /* f26 */, float e /* f27 */) {
    // Local variables
    float dx; // f30
    float dy; // f29
    float dz; // f28
    float sdist; // f0
    float dist; // r1+0x8
    float u; // f3
}

// Range: 0x8002F380 -> 0x8002F3F4
void xCam::spring_interp(struct xQuat & s /* r28 */, float & v /* r29 */, const struct xQuat & s0 /* r30 */, const struct xQuat & s1 /* r31 */, float dt /* f30 */, float speed /* f31 */) {
    // Local variables
    float e; // f3
}

// Range: 0x8002F3F4 -> 0x8002F528
void xCam::spring_interp(struct xQuat & s /* r28 */, float & v /* r29 */, const struct xQuat & s0 /* r30 */, const struct xQuat & s1 /* r31 */, float dt /* f28 */, float speed /* f29 */, float e /* f30 */) {
    // Local variables
    float sa; // f31
    float a; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008D5EC -> 0x8008D5EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010CC60 -> 0x8010CC60
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80126A98 -> 0x80126A98
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80137988 -> 0x80137988
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801472E4 -> 0x801472E4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80155A30 -> 0x80155A38
*/
// Range: 0x80155A30 -> 0x80155A38
// this: r3
struct xCamBlend * xCam::get_blender() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80167D74 -> 0x80167D74
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016857C -> 0x801685DC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80168778 -> 0x801687B4
*/
// Range: 0x80168778 -> 0x8016877C
void xCam::add_tweaks() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80169BA4 -> 0x80169BF8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016CB60 -> 0x8016CDD4
*/
// Range: 0x8016CB60 -> 0x8016CBD4
void xCam::spring_interp_xz(struct xVec3 & s /* r28 */, float & v /* r29 */, const struct xVec3 & s0 /* r30 */, const struct xVec3 & s1 /* r31 */, float dt /* f30 */, float speed /* f31 */) {
    // Local variables
    float e; // f3
}

// Range: 0x8016CBD4 -> 0x8016CD30
void xCam::spring_interp_xz(struct xVec3 & s /* r29 */, float & v /* r30 */, const struct xVec3 & s0 /* r0 */, const struct xVec3 & s1 /* r31 */, float dt /* f26 */, float speed /* f27 */, float e /* f28 */) {
    // Local variables
    float dx; // f30
    float dz; // f29
    float sdist; // f0
    float dist; // r1+0x8
    float u; // f2
}

// Range: 0x8016CD30 -> 0x8016CDD4
void xCam::coord_to_local(struct xCamCoordSphere & c /* r31 */, const struct xVec3 & loc /* r0 */, const struct xVec3 & origin /* r5 */) {
    // Local variables
    struct xVec3 offset; // r1+0x10
    struct xMat3x3 dir_mat; // r1+0x20
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016CF54 -> 0x8016CF54
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016DEA8 -> 0x8016DEA8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016E320 -> 0x8016E320
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016E6D8 -> 0x8016E6D8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018F384 -> 0x8018F384
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801900EC -> 0x801900EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801BF2A8 -> 0x801BF2A8
*/

