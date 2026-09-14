/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80014E90 -> 0x8001605C
*/
// Range: 0x80014E90 -> 0x80014ED0
void xCam::orient_to_world(struct xMat3x3 & mat /* r1+0x8 */, const struct xCamOrientEuler & o /* r31 */) {}

// Range: 0x80014ED0 -> 0x80014F00
void xCam::orient_to_world(struct xMat3x3 & mat /* r1+0x8 */, const struct xQuat & o /* r1+0xC */) {}

// Range: 0x80014F00 -> 0x80014F30
void xCam::coord_to_world(struct xVec3 & loc /* r1+0x8 */, const struct xCamCoordSphere & c /* r1+0xC */) {}

// Range: 0x80014F30 -> 0x80014FB0
struct xVec3 & xCam::convert(struct xVec3 & o /* r30 */, const struct xCamCoordSphere & i /* r31 */) {
    // Local variables
    struct xVec3 dir; // r1+0x8
}

// Range: 0x80014FB0 -> 0x80014FE0
void xCam::coord_to_world(struct xVec3 & loc /* r1+0x8 */, const struct xCamCoordCylinder & c /* r1+0xC */) {}

// Range: 0x80014FE0 -> 0x80015058
struct xVec3 & xCam::convert(struct xVec3 & o /* r30 */, const struct xCamCoordCylinder & i /* r31 */) {}

// Range: 0x80015058 -> 0x80015088
void xCam::coord_to_world(struct xVec3 & loc /* r1+0x8 */, const struct xVec3 & c /* r1+0xC */) {}

// Range: 0x80015088 -> 0x8001509C
// this: r3
unsigned char xCam::blending() const {}

// Range: 0x8001509C -> 0x800150A4
struct xCamConfigFollow * xCam::config_follow() {}

// Range: 0x800150A4 -> 0x800150F8
void xCamGroup::stop(struct xCam & cam /* r31 */) {}

// Range: 0x800150F8 -> 0x80015104
// this: r3
unsigned char xCam::started() const {}

// Range: 0x80015104 -> 0x8001510C
float xCam::getCameraPlayerAudioBias() {}

// Range: 0x8001510C -> 0x80015188
// this: r30
void xCam::do_update(struct xScene & scene /* r31 */, float dt /* r1+0x8 */) {}

// Range: 0x80015188 -> 0x8001518C
void xCam::post_update() {}

// Range: 0x8001518C -> 0x80015190
void xCam::pre_update() {}

// Range: 0x800151C4 -> 0x800151F4
// this: r3
struct xCam * xCam::get_next() {}

// Range: 0x800151F4 -> 0x8001520C
// this: r3
xCamBias::xCamBias() {
    // References
    // -> struct [anonymous] xCamBias::__vtable;
}

// Range: 0x8001521C -> 0x80015234
void xCam::blend(float & o /* r3 */, float a /* f1 */, float b /* f2 */, float s /* f3 */) {}

// Range: 0x80015234 -> 0x80015264
// this: r3
struct xCam * xCam::find_camera(unsigned int ownerID /* r4 */) {}

// Range: 0x80015264 -> 0x80015328
struct xCamCoordSphere & xCamBlend::coll_convert(const struct xCam & cam /* r31 */, struct xCamCoordSphere & c /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$coll_convert__9xCamBlendCFRC4xCamR15xCamCoordSphere[13];
}

// Range: 0x80015328 -> 0x800153F4
struct xCamCoordSphere & xCam::convert(struct xCamCoordSphere & o /* r30 */, const struct xCamCoordCylinder & i /* r31 */) {
    // Local variables
    struct xMat3x3 mat; // r1+0x20
    struct xVec3 offset; // r1+0x10
}

// Range: 0x800153F4 -> 0x80015474
void xCam::blend(struct xCamCoordSphere & o /* r29 */, const struct xCamCoordSphere & a /* r30 */, const struct xCamCoordSphere & b /* r31 */, float s /* f31 */) {}

// Range: 0x80015474 -> 0x80015538
struct xCamCoordSphere & xCamBlend::convert(const struct xCam & cam /* r31 */, struct xCamCoordSphere & c /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$convert__9xCamBlendCFRC4xCamR15xCamCoordSphere[8];
}

// Range: 0x80015538 -> 0x800155FC
struct xCamCoordCylinder & xCamBlend::coll_convert(const struct xCam & cam /* r31 */, struct xCamCoordCylinder & c /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$coll_convert__9xCamBlendCFRC4xCamR17xCamCoordCylinder[13];
}

// Range: 0x800155FC -> 0x80015688
struct xCamCoordCylinder & xCam::convert(struct xCamCoordCylinder & o /* r31 */, const struct xCamCoordSphere & i /* r30 */) {
    // Local variables
    struct xVec3 offset; // r1+0x8
}

// Range: 0x80015688 -> 0x8001571C
void xCam::blend(struct xCamCoordCylinder & o /* r29 */, const struct xCamCoordCylinder & a /* r30 */, const struct xCamCoordCylinder & b /* r31 */, float s /* f31 */) {}

// Range: 0x8001571C -> 0x8001579C
void xCam::blend_radian(float & o /* r31 */, float a /* f30 */, float b /* r1+0x8 */, float s /* r1+0xC */) {
    // Local variables
    float diff; // f31
}

// Range: 0x8001579C -> 0x80015860
struct xCamCoordCylinder & xCamBlend::convert(const struct xCam & cam /* r31 */, struct xCamCoordCylinder & c /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$convert__9xCamBlendCFRC4xCamR17xCamCoordCylinder[8];
}

// Range: 0x80015860 -> 0x80015940
struct xVec3 & xCamBlend::coll_convert(const struct xCam & cam /* r31 */, struct xVec3 & c /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$coll_convert__9xCamBlendCFRC4xCamR5xVec3[13];
}

// Range: 0x80015940 -> 0x800159CC
void xCam::blend(struct xVec3 & o /* r29 */, const struct xVec3 & a /* r30 */, const struct xVec3 & b /* r31 */, float s /* f31 */) {}

// Range: 0x800159CC -> 0x80015AAC
struct xVec3 & xCamBlend::convert(const struct xCam & cam /* r31 */, struct xVec3 & c /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$convert__9xCamBlendCFRC4xCamR5xVec3[8];
}

// Range: 0x80015AAC -> 0x80015B70
struct xCamOrientEuler & xCamBlend::coll_convert(const struct xCam & cam /* r31 */, struct xCamOrientEuler & c /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$coll_convert__9xCamBlendCFRC4xCamR15xCamOrientEuler[13];
}

// Range: 0x80015B70 -> 0x80015BC8
struct xCamOrientEuler & xCam::convert(struct xCamOrientEuler & o /* r31 */, const struct xQuat & i /* r1+0x10 */) {
    // Local variables
    struct xMat3x3 mat; // r1+0x20
}

// Range: 0x80015BC8 -> 0x80015C54
void xCam::blend(struct xCamOrientEuler & o /* r29 */, const struct xCamOrientEuler & a /* r30 */, const struct xCamOrientEuler & b /* r31 */, float s /* f31 */) {}

// Range: 0x80015C54 -> 0x80015D18
struct xCamOrientEuler & xCamBlend::convert(const struct xCam & cam /* r31 */, struct xCamOrientEuler & c /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$convert__9xCamBlendCFRC4xCamR15xCamOrientEuler[8];
}

// Range: 0x80015D18 -> 0x80015DDC
struct xQuat & xCamBlend::coll_convert(const struct xCam & cam /* r31 */, struct xQuat & c /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$coll_convert__9xCamBlendCFRC4xCamR5xQuat[13];
}

// Range: 0x80015DDC -> 0x80015E34
struct xQuat & xCam::convert(struct xQuat & o /* r31 */, const struct xCamOrientEuler & i /* r1+0x10 */) {
    // Local variables
    struct xMat3x3 mat; // r1+0x20
}

// Range: 0x80015E34 -> 0x80015E74
void xCam::blend(struct xQuat & o /* r1+0x8 */, const struct xQuat & a /* r1+0xC */, const struct xQuat & b /* r1+0x10 */, float s /* r1+0x14 */) {}

// Range: 0x80015E74 -> 0x80015F38
struct xQuat & xCamBlend::convert(const struct xCam & cam /* r31 */, struct xQuat & c /* r30 */) {
    // References
    // -> char __FUNCTION__$localstatic1$convert__9xCamBlendCFRC4xCamR5xQuat[8];
}

// Range: 0x80015F38 -> 0x80015F68
// this: r1+0x8
void xCam::add_tweaks(const char * prefix /* r1+0xC */) {}

// Range: 0x80015F68 -> 0x80015F98
void xCam::orient_to_local(struct xCamOrientEuler & o /* r1+0x8 */, const struct xMat3x3 & mat /* r1+0xC */) {}

// Range: 0x80015F98 -> 0x80015FC8
void xCam::coord_to_local(struct xVec3 & c /* r1+0x8 */, const struct xVec3 & loc /* r1+0xC */) {}

// Range: 0x80015FC8 -> 0x80015FCC
// this: r3
struct xCam * xCam::get_final_dest() {}

// Range: 0x80015FCC -> 0x80015FD4
class zCamSplineCommonMix * xCam::get_common_mix() {}

// Range: 0x80015FD4 -> 0x80015FD8
void xCam::destroy() {}

// Range: 0x80015FD8 -> 0x80015FE0
class zCam2Player * xCam::get_zCam2Player() {}

// Range: 0x80015FE0 -> 0x80015FE4
void xCam::debug_mode_draw() {}

// Range: 0x80015FE4 -> 0x80016020
// this: r31
class zCam2Player * xCamBlend::get_zCam2Player() const {}

// Range: 0x80016020 -> 0x8001605C
// this: r31
struct xCam * xCamBlend::get_final_dest() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80016704 -> 0x80016860
*/
// Range: 0x80016704 -> 0x80016744
void xCam::blend3(float & o /* r3 */, float i0 /* f1 */, float i1 /* f2 */, float i2 /* f3 */, float s /* f4 */) {}

// Range: 0x80016744 -> 0x800167C4
void xCam::spring_interp(float & s /* r31 */, float & v /* r1+0x8 */, float s0 /* r1+0xC */, float s1 /* f31 */, float dt /* r1+0x10 */, float speed /* r1+0x14 */, float e /* r1+0x18 */) {
    // Local variables
    float ds; // r1+0x1C
}

// Range: 0x800167C4 -> 0x80016860
void xCam::spring_interp(float & s /* r1+0x8 */, float & v /* r1+0xC */, const float & s0 /* r30 */, const float & s1 /* r31 */, float dt /* f29 */, float speed /* f30 */) {
    // Local variables
    float e; // f31
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001B268 -> 0x8001B304
*/
// Range: 0x8001B268 -> 0x8001B304
struct xVec3 & xCam::convert(struct xVec3 & o /* r30 */, const struct xCamCoordPolar & i /* r31 */) {
    // Local variables
    float cp; // f31
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002F1DC -> 0x8002F20C
*/
// Range: 0x8002F1DC -> 0x8002F20C
void xCam::orient_to_local(struct xQuat & o /* r1+0x8 */, const struct xMat3x3 & mat /* r1+0xC */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80069A90 -> 0x80069E44
*/
// Range: 0x80069A90 -> 0x80069B04
void xCam::spring_interp(struct xVec3 & s /* r1+0x8 */, float & v /* r1+0xC */, const struct xVec3 & s0 /* r1+0x10 */, const struct xVec3 & s1 /* r1+0x14 */, float dt /* f29 */, float speed /* f30 */) {
    // Local variables
    float e; // f31
}

// Range: 0x80069B04 -> 0x80069C88
void xCam::spring_interp(struct xVec3 & s /* r30 */, float & v /* r29 */, const struct xVec3 & s0 /* r28 */, const struct xVec3 & s1 /* r31 */, float dt /* r1+0x8 */, float speed /* r1+0xC */, float e /* r1+0x10 */) {
    // Local variables
    float dx; // f31
    float dy; // f30
    float dz; // f29
    float sdist; // f28
    float dist; // r1+0x14
    float u; // f27
}

// Range: 0x80069C88 -> 0x80069CFC
void xCam::spring_interp(struct xQuat & s /* r1+0x8 */, float & v /* r1+0xC */, const struct xQuat & s0 /* r1+0x10 */, const struct xQuat & s1 /* r1+0x14 */, float dt /* f29 */, float speed /* f30 */) {
    // Local variables
    float e; // f31
}

// Range: 0x80069CFC -> 0x80069E20
void xCam::spring_interp(struct xQuat & s /* r29 */, float & v /* r31 */, const struct xQuat & s0 /* r28 */, const struct xQuat & s1 /* r30 */, float dt /* r1+0x8 */, float speed /* r1+0xC */, float e /* r1+0x10 */) {
    // Local variables
    float sa; // f31
    float a; // r1+0x14
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D5254 -> 0x801D5254
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020A7A8 -> 0x8020A7A8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80239890 -> 0x80239890
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025D5D4 -> 0x8025D5D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80273CAC -> 0x80273CAC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028C8E0 -> 0x8028C8E8
*/
// Range: 0x8028C8E0 -> 0x8028C8E8
// this: r3
struct xCamBlend * xCam::get_blender() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A8B9C -> 0x802A8B9C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A9D40 -> 0x802A9DA4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802ACB74 -> 0x802ACBCC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B1E48 -> 0x802B20E4
*/
// Range: 0x802B1E48 -> 0x802B1EBC
void xCam::spring_interp_xz(struct xVec3 & s /* r1+0x8 */, float & v /* r1+0xC */, const struct xVec3 & s0 /* r1+0x10 */, const struct xVec3 & s1 /* r1+0x14 */, float dt /* f29 */, float speed /* f30 */) {
    // Local variables
    float e; // f31
}

// Range: 0x802B1EBC -> 0x802B2018
void xCam::spring_interp_xz(struct xVec3 & s /* r30 */, float & v /* r29 */, const struct xVec3 & s0 /* r28 */, const struct xVec3 & s1 /* r31 */, float dt /* r1+0x8 */, float speed /* r1+0xC */, float e /* r1+0x10 */) {
    // Local variables
    float dx; // f31
    float dz; // f30
    float sdist; // f29
    float dist; // r1+0x14
    float u; // f28
}

// Range: 0x802B2018 -> 0x802B20E4
void xCam::coord_to_local(struct xCamCoordSphere & c /* r29 */, const struct xVec3 & loc /* r30 */, const struct xVec3 & origin /* r31 */) {
    // Local variables
    struct xVec3 offset; // r1+0x10
    struct xMat3x3 dir_mat; // r1+0x20
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B2580 -> 0x802B2580
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B40F0 -> 0x802B40F0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B4A40 -> 0x802B4A40
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B4FCC -> 0x802B4FCC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E97BC -> 0x802E97BC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802EAB78 -> 0x802EAB78
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80333FD8 -> 0x80333FD8
*/

