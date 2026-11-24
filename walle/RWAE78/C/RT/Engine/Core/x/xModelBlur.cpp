/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xModelBlur.cpp
*/
static bool sModelBlurEnabled; // size: 0x1, address: 0x806F2D14
class activity_data * activity_buffer; // size: 0x4, address: 0x80758A78
class activity_data * activities[6]; // size: 0x18, address: 0x80758A80
int activities_used; // size: 0x4, address: 0x80758A98
static class config_data cfg; // size: 0x24, address: 0x806C71F0
// Range: 0x8004EFA0 -> 0x8004EFA4
void xModelBlur::scene_enter() {
}
// Range: 0x8004EFB0 -> 0x8004EFB4
void xModelBlur::scene_exit() {
}
// Range: 0x8004EFC0 -> 0x8004EFC4
void xModelBlur::reset_all() {
}
// Range: 0x8004EFD0 -> 0x8004EFDC
void xModelBlur::create() {
}
// signature: xModelBlur::activate(float, float, const xModelBlur::config_data &, xModelInstance *)
// Range: 0x8004EFE0 -> 0x8004F0C4
bool xModelBlur::activate() {
    // References
    // -> class activity_data * activities[6];
    // -> int activities_used;
}
// Range: 0x8004F0D0 -> 0x8004F154
void xModelBlur::deactivate() {
    // References
    // -> class activity_data * activities[6];
    // -> int activities_used;
}
// signature: xModelBlur::move(const xVec3 &)
// Range: 0x8004F160 -> 0x8004F270
void xModelBlur::move() {
    // Local variables
    class path_node * p; // r0

    {
        // Range: 0x8004F164 -> 0x8004F1E8
        // Local variables
        float min_dist2; // f6
        float min_dist; // f0
        float dist2; // f0
        float ABz; // f1
        float ABy; // f5
        float ABx; // f2
        class xVec3 * B; // r5
        class xVec3 * A; // r5
        int second_index; // r10
    }
}
// signature: xModelBlur::set_config(const xModelBlur::config_data &)
// Range: 0x8004F270 -> 0x8004F27C
void xModelBlur::set_config() {
}
// Range: 0x8004F280 -> 0x8004F308
bool xModelBlur::visible() const {
}
// signature: xModelBlur::set_lifetime(float, float)
// Range: 0x8004F310 -> 0x8004F374
void xModelBlur::set_lifetime() {
}
// signature: xModelBlur::set_alpha(float, float)
// Range: 0x8004F380 -> 0x8004F3E4
void xModelBlur::set_alpha() {
}
