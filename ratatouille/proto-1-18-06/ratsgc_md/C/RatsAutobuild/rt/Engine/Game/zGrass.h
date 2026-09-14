/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zGrass.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801033DC -> 0x8010387C
*/
// Range: 0x801033DC -> 0x801033E0
void zGrass::debug_render() {}

// Range: 0x801033E0 -> 0x801033EC
void zGrass::hide_knoll(struct knoll_type & knoll /* r0 */) {}

// Range: 0x801033EC -> 0x801033F8
void zGrass::show_knoll(struct knoll_type & knoll /* r0 */) {}

// Range: 0x801033F8 -> 0x801033FC
void zGrass::add_knoll_tweaks() {}

// Range: 0x801033FC -> 0x80103408
char * asset_type::type_name() {}

// Range: 0x80103408 -> 0x801034B8
// this: r30
int zGrass::get_grid_index(const struct xVec3 & p0 /* r0 */, const struct xVec3 & p1 /* r0 */, const struct xVec3 & p2 /* r0 */) {
    // Local variables
    float zsum; // f31
    int ix; // r31
    int iz; // r5
}

// Range: 0x801034B8 -> 0x801035CC
// this: r27
void zGrass::setup_clone_animation(struct clone_node & clone /* r28 */, float animate /* f27 */) {
    // Local variables
    float x; // f30
    float z; // f29
    int i; // r29
    float t; // f28
}

// Range: 0x801035CC -> 0x80103618
void zGrass::set_color(struct clone_node & clone /* r0 */, float r /* f0 */, float g /* f0 */, float b /* f0 */, float a /* f0 */) {}

// Range: 0x80103618 -> 0x8010361C
void zGrass::setup_clone() {}

// Range: 0x8010361C -> 0x8010367C
void zGrass::random_tri_point(float & s /* r30 */, float & t /* r31 */) {}

// Range: 0x8010367C -> 0x80103698
void zGrass::set_alpha(struct clone_node & clone /* r0 */, float alpha /* f0 */) {}

// Range: 0x80103698 -> 0x801036C8
// this: r0
struct xBox & zGrass::get_grid_box(int grid_index /* r0 */) {}

// Range: 0x801036C8 -> 0x801036EC
// this: r0
int zGrass::get_grid_index(int ix /* r0 */, int iz /* r0 */) {}

// Range: 0x801036EC -> 0x80103870
// this: r0
struct xMat4x3 * zGrass::animate_clone(struct clone_node & clone /* r30 */, struct xMat4x3 & mat /* r31 */) {
    // Local variables
    float nx; // f31
    float nz; // f30
    float amp; // f8
    float imag; // f0
}

// Range: 0x80103870 -> 0x80103878
struct clone_node * zGrass::prepare_render(struct clone_node & clone /* r4 */) {}

// Range: 0x80103878 -> 0x8010387C
void zGrass::add_wave_tweaks() {}


