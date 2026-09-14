/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zGrass.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80103058 -> 0x801034F8
*/
// Range: 0x80103058 -> 0x8010305C
void zGrass::debug_render() {}

// Range: 0x8010305C -> 0x80103068
void zGrass::hide_knoll(struct knoll_type & knoll /* r0 */) {}

// Range: 0x80103068 -> 0x80103074
void zGrass::show_knoll(struct knoll_type & knoll /* r0 */) {}

// Range: 0x80103074 -> 0x80103078
void zGrass::add_knoll_tweaks() {}

// Range: 0x80103078 -> 0x80103084
char * asset_type::type_name() {}

// Range: 0x80103084 -> 0x80103134
// this: r30
int zGrass::get_grid_index(const struct xVec3 & p0 /* r0 */, const struct xVec3 & p1 /* r0 */, const struct xVec3 & p2 /* r0 */) {
    // Local variables
    float zsum; // f31
    int ix; // r31
    int iz; // r5
}

// Range: 0x80103134 -> 0x80103248
// this: r27
void zGrass::setup_clone_animation(struct clone_node & clone /* r28 */, float animate /* f27 */) {
    // Local variables
    float x; // f30
    float z; // f29
    int i; // r29
    float t; // f28
}

// Range: 0x80103248 -> 0x80103294
void zGrass::set_color(struct clone_node & clone /* r0 */, float r /* f0 */, float g /* f0 */, float b /* f0 */, float a /* f0 */) {}

// Range: 0x80103294 -> 0x80103298
void zGrass::setup_clone() {}

// Range: 0x80103298 -> 0x801032F8
void zGrass::random_tri_point(float & s /* r30 */, float & t /* r31 */) {}

// Range: 0x801032F8 -> 0x80103314
void zGrass::set_alpha(struct clone_node & clone /* r0 */, float alpha /* f0 */) {}

// Range: 0x80103314 -> 0x80103344
// this: r0
struct xBox & zGrass::get_grid_box(int grid_index /* r0 */) {}

// Range: 0x80103344 -> 0x80103368
// this: r0
int zGrass::get_grid_index(int ix /* r0 */, int iz /* r0 */) {}

// Range: 0x80103368 -> 0x801034EC
// this: r0
struct xMat4x3 * zGrass::animate_clone(struct clone_node & clone /* r30 */, struct xMat4x3 & mat /* r31 */) {
    // Local variables
    float nx; // f31
    float nz; // f30
    float amp; // f8
    float imag; // f0
}

// Range: 0x801034EC -> 0x801034F4
struct clone_node * zGrass::prepare_render(struct clone_node & clone /* r4 */) {}

// Range: 0x801034F4 -> 0x801034F8
void zGrass::add_wave_tweaks() {}


