/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zGrass.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FB67C -> 0x801FC274
*/
// Range: 0x801FB67C -> 0x801FB68C
char * asset_type::type_name() {}

// Range: 0x801FB68C -> 0x801FB698
void zGrass::hide_knoll(struct knoll_type & knoll /* r4 */) {}

// Range: 0x801FB698 -> 0x801FB6A4
void zGrass::show_knoll(struct knoll_type & knoll /* r4 */) {}

// ERROR: Failed to emit tag 144DF1A (GlobalSubroutine)
// Range: 0x801FBBAC -> 0x801FBCF8
// this: r29
void zGrass::setup_clone_animation(struct clone_node & clone /* r31 */, float animate /* f30 */) {
    // Local variables
    float x; // f29
    float z; // f28
    int i; // r30
    float d; // f27
    float t; // f31
}

// Range: 0x801FBCF8 -> 0x801FBD44
void zGrass::set_color(struct clone_node & clone /* r4 */, float r /* f1 */, float g /* f2 */, float b /* f3 */, float a /* f4 */) {}

// Range: 0x801FBD44 -> 0x801FBD48
void zGrass::setup_clone() {}

// Range: 0x801FBD48 -> 0x801FBDB0
void zGrass::random_tri_point(float & s /* r31 */, float & t /* r30 */) {}

// Range: 0x801FBDB0 -> 0x801FBDCC
void zGrass::set_alpha(struct clone_node & clone /* r4 */, float alpha /* f1 */) {}

// ERROR: Failed to emit tag 144E64C (GlobalSubroutine)
// ERROR: Failed to emit tag 144E742 (GlobalSubroutine)
// Range: 0x801FC088 -> 0x801FC26C
// this: r30
struct xMat4x3 * zGrass::animate_clone(struct clone_node & clone /* r31 */, struct xMat4x3 & mat /* r29 */) {
    // Local variables
    float nx; // f30
    float nz; // f29
    float amp; // f31
    float imag; // f28
}

// Range: 0x801FC26C -> 0x801FC274
struct clone_node * zGrass::prepare_render(struct clone_node & clone /* r4 */) {}


