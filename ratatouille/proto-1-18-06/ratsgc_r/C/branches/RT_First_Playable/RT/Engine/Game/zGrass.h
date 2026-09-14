/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zGrass.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A3040 -> 0x801A3A08
*/
// Range: 0x801A3040 -> 0x801A3050
char * asset_type::type_name() {}

// Range: 0x801A3050 -> 0x801A305C
void zGrass::hide_knoll(struct knoll_type & knoll /* r0 */) {}

// Range: 0x801A305C -> 0x801A3068
void zGrass::show_knoll(struct knoll_type & knoll /* r0 */) {}

// ERROR: Failed to emit tag 13B6ED3 (GlobalSubroutine)
// Range: 0x801A343C -> 0x801A3550
// this: r3
void zGrass::setup_clone_animation(struct clone_node & clone /* r4 */, float animate /* f27 */) {
    // Local variables
    float x; // f30
    float z; // f29
    int i; // r29
    float t; // f28
}

// Range: 0x801A3550 -> 0x801A359C
void zGrass::set_color(struct clone_node & clone /* r0 */, float r /* f0 */, float g /* f0 */, float b /* f0 */, float a /* f0 */) {}

// Range: 0x801A359C -> 0x801A35A0
void zGrass::setup_clone() {}

// Range: 0x801A35A0 -> 0x801A3608
void zGrass::random_tri_point(float & s /* r30 */, float & t /* r31 */) {}

// Range: 0x801A3608 -> 0x801A3624
void zGrass::set_alpha(struct clone_node & clone /* r0 */, float alpha /* f0 */) {}

// ERROR: Failed to emit tag 13B75C6 (GlobalSubroutine)
// ERROR: Failed to emit tag 13B7692 (GlobalSubroutine)
// Range: 0x801A3874 -> 0x801A3A00
// this: r0
struct xMat4x3 * zGrass::animate_clone(struct clone_node & clone /* r30 */, struct xMat4x3 & mat /* r31 */) {
    // Local variables
    float nx; // f31
    float nz; // f30
    float amp; // f8
    float imag; // f0
}

// Range: 0x801A3A00 -> 0x801A3A08
struct clone_node * zGrass::prepare_render(struct clone_node & clone /* r4 */) {}


