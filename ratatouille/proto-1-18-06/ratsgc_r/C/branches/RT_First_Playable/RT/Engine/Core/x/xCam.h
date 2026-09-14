/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800121DC -> 0x80013188
*/
// Range: 0x800121DC -> 0x80012208
void xCam::orient_to_world(struct xMat3x3 & mat /* r0 */, const struct xCamOrientEuler & o /* r0 */) {}

// Range: 0x80012208 -> 0x80012234
void xCam::orient_to_world(struct xMat3x3 & mat /* r0 */, const struct xQuat & o /* r4 */) {}

// Range: 0x80012234 -> 0x80012254
void xCam::coord_to_world(struct xVec3 & loc /* r0 */, const struct xCamCoordSphere & c /* r0 */) {}

// Range: 0x80012254 -> 0x800122CC
struct xVec3 & xCam::convert(struct xVec3 & o /* r30 */, const struct xCamCoordSphere & i /* r31 */) {
    // Local variables
    struct xVec3 dir; // r1+0x8
}

// Range: 0x800122CC -> 0x800122EC
void xCam::coord_to_world(struct xVec3 & loc /* r0 */, const struct xCamCoordCylinder & c /* r0 */) {}

// Range: 0x800122EC -> 0x80012364
struct xVec3 & xCam::convert(struct xVec3 & o /* r30 */, const struct xCamCoordCylinder & i /* r31 */) {}

// Range: 0x80012364 -> 0x80012384
void xCam::coord_to_world(struct xVec3 & loc /* r0 */, const struct xVec3 & c /* r0 */) {}

// Range: 0x80012384 -> 0x80012398
// this: r0
unsigned char xCam::blending() const {}

// Range: 0x80012398 -> 0x800123A0
struct xCamConfigFollow * xCam::config_follow() {}

// Range: 0x800123A0 -> 0x800123F4
void xCamGroup::stop(struct xCam & cam /* r31 */) {}

// Range: 0x800123F4 -> 0x80012400
// this: r0
unsigned char xCam::started() const {}

// Range: 0x80012400 -> 0x80012408
float xCam::getCameraPlayerAudioBias() {}

// Range: 0x80012408 -> 0x8001248C
// this: r30
void xCam::do_update(struct xScene & scene /* r31 */, float dt /* f31 */) {}

// Range: 0x8001248C -> 0x80012490
void xCam::post_update() {}

// Range: 0x80012490 -> 0x80012494
void xCam::pre_update() {}

// Range: 0x800124C8 -> 0x800124DC
// this: r0
struct xCam * xCam::get_next() {}

// Range: 0x800124DC -> 0x800124F4
// this: r0
xCamBias::xCamBias() {
    // References
    // -> struct [anonymous] xCamBias::__vtable;
}

// Range: 0x80012504 -> 0x8001251C
void xCam::blend(float & o /* r0 */, float a /* f0 */, float b /* f0 */, float s /* f0 */) {}

// Range: 0x8001251C -> 0x80012530
// this: r0
struct xCam * xCam::find_camera(unsigned int ownerID /* r0 */) {}

// Range: 0x80012530 -> 0x800125D8
struct xCamCoordSphere & xCamBlend::coll_convert(const struct xCam & cam /* r4 */, struct xCamCoordSphere & c /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$coll_convert__9xCamBlendCFRC4xCamR15xCamCoordSphere[13];
}

// Range: 0x800125D8 -> 0x80012694
struct xCamCoordSphere & xCam::convert(struct xCamCoordSphere & o /* r30 */, const struct xCamCoordCylinder & i /* r31 */) {
    // Local variables
    struct xMat3x3 mat; // r1+0x20
    struct xVec3 offset; // r1+0x10
}

// Range: 0x80012694 -> 0x80012714
void xCam::blend(struct xCamCoordSphere & o /* r29 */, const struct xCamCoordSphere & a /* r30 */, const struct xCamCoordSphere & b /* r31 */, float s /* f31 */) {}

// Range: 0x80012714 -> 0x800127BC
struct xCamCoordSphere & xCamBlend::convert(const struct xCam & cam /* r4 */, struct xCamCoordSphere & c /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$convert__9xCamBlendCFRC4xCamR15xCamCoordSphere[8];
}

// Range: 0x800127BC -> 0x80012864
struct xCamCoordCylinder & xCamBlend::coll_convert(const struct xCam & cam /* r4 */, struct xCamCoordCylinder & c /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$coll_convert__9xCamBlendCFRC4xCamR17xCamCoordCylinder[13];
}

// Range: 0x80012864 -> 0x800128EC
struct xCamCoordCylinder & xCam::convert(struct xCamCoordCylinder & o /* r30 */, const struct xCamCoordSphere & i /* r31 */) {
    // Local variables
    struct xVec3 offset; // r1+0x8
}

// Range: 0x800128EC -> 0x80012980
void xCam::blend(struct xCamCoordCylinder & o /* r29 */, const struct xCamCoordCylinder & a /* r30 */, const struct xCamCoordCylinder & b /* r31 */, float s /* f31 */) {}

// Range: 0x80012980 -> 0x800129F4
void xCam::blend_radian(float & o /* r31 */, float a /* f30 */, float b /* f0 */, float s /* f31 */) {
    // Local variables
    float diff; // f0
}

// Range: 0x800129F4 -> 0x80012A9C
struct xCamCoordCylinder & xCamBlend::convert(const struct xCam & cam /* r4 */, struct xCamCoordCylinder & c /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$convert__9xCamBlendCFRC4xCamR17xCamCoordCylinder[8];
}

// Range: 0x80012A9C -> 0x80012B60
struct xVec3 & xCamBlend::coll_convert(const struct xCam & cam /* r4 */, struct xVec3 & c /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$coll_convert__9xCamBlendCFRC4xCamR5xVec3[13];
}

// Range: 0x80012B60 -> 0x80012BEC
void xCam::blend(struct xVec3 & o /* r29 */, const struct xVec3 & a /* r30 */, const struct xVec3 & b /* r31 */, float s /* f31 */) {}

// Range: 0x80012BEC -> 0x80012CB0
struct xVec3 & xCamBlend::convert(const struct xCam & cam /* r4 */, struct xVec3 & c /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$convert__9xCamBlendCFRC4xCamR5xVec3[8];
}

// Range: 0x80012CB0 -> 0x80012D58
struct xCamOrientEuler & xCamBlend::coll_convert(const struct xCam & cam /* r4 */, struct xCamOrientEuler & c /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$coll_convert__9xCamBlendCFRC4xCamR15xCamOrientEuler[13];
}

// Range: 0x80012D58 -> 0x80012DAC
struct xCamOrientEuler & xCam::convert(struct xCamOrientEuler & o /* r31 */, const struct xQuat & i /* r4 */) {
    // Local variables
    struct xMat3x3 mat; // r1+0x10
}

// Range: 0x80012DAC -> 0x80012E38
void xCam::blend(struct xCamOrientEuler & o /* r29 */, const struct xCamOrientEuler & a /* r30 */, const struct xCamOrientEuler & b /* r31 */, float s /* f31 */) {}

// Range: 0x80012E38 -> 0x80012EE0
struct xCamOrientEuler & xCamBlend::convert(const struct xCam & cam /* r4 */, struct xCamOrientEuler & c /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$convert__9xCamBlendCFRC4xCamR15xCamOrientEuler[8];
}

// Range: 0x80012EE0 -> 0x80012F88
struct xQuat & xCamBlend::coll_convert(const struct xCam & cam /* r4 */, struct xQuat & c /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$coll_convert__9xCamBlendCFRC4xCamR5xQuat[13];
}

// Range: 0x80012F88 -> 0x80012FD8
struct xQuat & xCam::convert(struct xQuat & o /* r31 */, const struct xCamOrientEuler & i /* r0 */) {
    // Local variables
    struct xMat3x3 mat; // r1+0x10
}

// Range: 0x80012FD8 -> 0x80012FF8
void xCam::blend(struct xQuat & o /* r0 */, const struct xQuat & a /* r0 */, const struct xQuat & b /* r0 */, float s /* f0 */) {}

// Range: 0x80012FF8 -> 0x800130A0
struct xQuat & xCamBlend::convert(const struct xCam & cam /* r4 */, struct xQuat & c /* r31 */) {
    // References
    // -> char __FUNCTION__$localstatic1$convert__9xCamBlendCFRC4xCamR5xQuat[8];
}

// Range: 0x800130A0 -> 0x800130C0
// this: r0
void xCam::add_tweaks(const char * prefix /* r0 */) {}

// Range: 0x800130C0 -> 0x800130EC
void xCam::orient_to_local(struct xCamOrientEuler & o /* r0 */, const struct xMat3x3 & mat /* r4 */) {}

// Range: 0x800130EC -> 0x8001310C
void xCam::coord_to_local(struct xVec3 & c /* r0 */, const struct xVec3 & loc /* r0 */) {}

// Range: 0x8001310C -> 0x80013110
// this: r0
struct xCam * xCam::get_final_dest() {}

// Range: 0x80013110 -> 0x80013118
class zCamSplineCommonMix * xCam::get_common_mix() {}

// Range: 0x80013118 -> 0x8001311C
void xCam::destroy() {}

// Range: 0x8001311C -> 0x80013124
class zCam2Player * xCam::get_zCam2Player() {}

// Range: 0x80013124 -> 0x80013128
void xCam::debug_mode_draw() {}

// Range: 0x80013128 -> 0x80013158
// this: r3
class zCam2Player * xCamBlend::get_zCam2Player() const {}

// Range: 0x80013158 -> 0x80013188
// this: r3
struct xCam * xCamBlend::get_final_dest() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80013694 -> 0x800137BC
*/
// Range: 0x80013694 -> 0x800136BC
void xCam::blend3(float & o /* r0 */, float i0 /* f0 */, float i1 /* f0 */, float i2 /* f0 */, float s /* f0 */) {}

// Range: 0x800136BC -> 0x80013720
void xCam::spring_interp(float & s /* r31 */, float & v /* r0 */, float s0 /* f0 */, float s1 /* f31 */, float dt /* f3 */, float speed /* f4 */, float e /* f5 */) {
    // Local variables
    float ds; // r1+0x8
}

// Range: 0x80013720 -> 0x800137BC
void xCam::spring_interp(float & s /* r28 */, float & v /* r29 */, const float & s0 /* r30 */, const float & s1 /* r31 */, float dt /* f30 */, float speed /* f31 */) {
    // Local variables
    float e; // f5
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80017750 -> 0x800177E8
*/
// Range: 0x80017750 -> 0x800177E8
struct xVec3 & xCam::convert(struct xVec3 & o /* r30 */, const struct xCamCoordPolar & i /* r31 */) {
    // Local variables
    float cp; // f31
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80027FE0 -> 0x80028000
*/
// Range: 0x80027FE0 -> 0x80028000
void xCam::orient_to_local(struct xQuat & o /* r0 */, const struct xMat3x3 & mat /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800593C4 -> 0x800597E0
*/
// Range: 0x800593C4 -> 0x80059450
void xCam::spring_interp(struct xVec3 & s /* r28 */, float & v /* r29 */, const struct xVec3 & s0 /* r30 */, const struct xVec3 & s1 /* r31 */, float dt /* f30 */, float speed /* f31 */) {
    // Local variables
    float e; // f3
}

// Range: 0x80059450 -> 0x800595E4
void xCam::spring_interp(struct xVec3 & s /* r29 */, float & v /* r30 */, const struct xVec3 & s0 /* r0 */, const struct xVec3 & s1 /* r31 */, float dt /* f25 */, float speed /* f26 */, float e /* f27 */) {
    // Local variables
    float dx; // f30
    float dy; // f29
    float dz; // f28
    float sdist; // f0
    float dist; // r1+0x8
    float u; // f3
}

// Range: 0x800595E4 -> 0x80059670
void xCam::spring_interp(struct xQuat & s /* r28 */, float & v /* r29 */, const struct xQuat & s0 /* r30 */, const struct xQuat & s1 /* r31 */, float dt /* f30 */, float speed /* f31 */) {
    // Local variables
    float e; // f3
}

// Range: 0x80059670 -> 0x800597BC
void xCam::spring_interp(struct xQuat & s /* r28 */, float & v /* r29 */, const struct xQuat & s0 /* r30 */, const struct xQuat & s1 /* r31 */, float dt /* f28 */, float speed /* f29 */, float e /* f30 */) {
    // Local variables
    float sa; // f31
    float a; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80181E88 -> 0x80181E88
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B02E4 -> 0x801B02E4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D8EE4 -> 0x801D8EE4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F78C0 -> 0x801F78C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020B984 -> 0x8020B984
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80222564 -> 0x8022256C
*/
// Range: 0x80222564 -> 0x8022256C
// this: r3
struct xCamBlend * xCam::get_blender() const {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023B718 -> 0x8023B718
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023C650 -> 0x8023C6B4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023EEB4 -> 0x8023EF08
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802436C8 -> 0x80243964
*/
// Range: 0x802436C8 -> 0x80243754
void xCam::spring_interp_xz(struct xVec3 & s /* r28 */, float & v /* r29 */, const struct xVec3 & s0 /* r30 */, const struct xVec3 & s1 /* r31 */, float dt /* f30 */, float speed /* f31 */) {
    // Local variables
    float e; // f3
}

// Range: 0x80243754 -> 0x802438C0
void xCam::spring_interp_xz(struct xVec3 & s /* r29 */, float & v /* r30 */, const struct xVec3 & s0 /* r0 */, const struct xVec3 & s1 /* r31 */, float dt /* f26 */, float speed /* f27 */, float e /* f28 */) {
    // Local variables
    float dx; // f30
    float dz; // f29
    float sdist; // f0
    float dist; // r1+0x8
    float u; // f2
}

// Range: 0x802438C0 -> 0x80243964
void xCam::coord_to_local(struct xCamCoordSphere & c /* r31 */, const struct xVec3 & loc /* r0 */, const struct xVec3 & origin /* r5 */) {
    // Local variables
    struct xVec3 offset; // r1+0x10
    struct xMat3x3 dir_mat; // r1+0x20
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80243E00 -> 0x80243E00
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802456D0 -> 0x802456D0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80245F30 -> 0x80245F30
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80246480 -> 0x80246480
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802745C4 -> 0x802745C4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802757C4 -> 0x802757C4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xCam.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B5A40 -> 0x802B5A40
*/

