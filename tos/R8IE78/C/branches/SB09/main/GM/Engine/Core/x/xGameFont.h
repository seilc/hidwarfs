/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xGameFont.h
*/
static class basic_rect screen_bounds; // size: 0x10, address: 0x8067D428
static class basic_rect screen_bounds; // size: 0x10, address: 0x80689398
static class basic_rect screen_bounds; // size: 0x10, address: 0x80691550
static class basic_rect screen_safe_bounds; // size: 0x10, address: 0x806893A8
// signature: xfont::create(unsigned int, float, float, float, xColor, const basic_rect<float> &, xColor, float, float)
// Range: 0x800227F0 -> 0x80022894
class xfont xfont::create(class xColor & shadowColor /* r31 */, float shadowOffsetX /* f30 */, float shadowOffsetY /* f31 */) {
    // Local variables
    class xfont r; // r1+0x8
}
// signature: xtextbox::create(const xfont &, const basic_rect<float> &, unsigned int, float, float, float, float, float, unsigned char)
// Range: 0x80022690 -> 0x800227EC
class xtextbox xtextbox::create(class basic_rect & bounds /* r30 */, unsigned int flags /* r31 */, float line_space /* f27 */, float tab_stop /* f28 */, float left_indent /* f29 */, float right_indent /* f30 */, float draw_depth /* f31 */) {
    // Local variables
    class xtextbox r; // r1+0x8

    // References
    // -> class callback text_cb;
}
// Range: 0x8018AAF0 -> 0x8018AB24
bool xtextbox::layout::has_data() {
}
