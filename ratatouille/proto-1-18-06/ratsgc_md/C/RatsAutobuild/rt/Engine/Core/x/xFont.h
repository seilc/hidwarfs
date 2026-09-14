/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80014E9C -> 0x800150E8
*/
// Range: 0x80014E9C -> 0x80014EA8
float NSCREENY(float v /* f1 */) {}

// Range: 0x80014EA8 -> 0x80014EB4
float NSCREENX(float v /* f1 */) {}

// Range: 0x80014EB4 -> 0x80014EF4
// this: r31
void xtextbox::render(unsigned char cache /* r0 */) const {}

// Range: 0x80014EF4 -> 0x80014FAC
class xtextbox xtextbox::create(const class xfont & font /* r0 */, const struct basic_rect & bounds /* r30 */, unsigned int flags /* r31 */, float line_space /* f28 */, float tab_stop /* f29 */, float left_indent /* f30 */, float right_indent /* f31 */) {
    // Local variables
    class xtextbox r; // r1+0x8

    // References
    // -> struct callback text_cb;
}

// Range: 0x80015034 -> 0x800150DC
class xfont xfont::create(unsigned int id /* r0 */, float width /* f0 */, float height /* f0 */, float space /* f0 */, struct xColor_tag & color /* r5 */, const struct basic_rect & clip /* r30 */, struct xColor_tag & shadowColor /* r31 */, float shadowOffsetX /* f30 */, float shadowOffsetY /* f31 */) {
    // Local variables
    class xfont r; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001BB8C -> 0x8001BB98
*/
// Range: 0x8001BB8C -> 0x8001BB98
// this: r0
void jot::reset_flags() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001DEF8 -> 0x8001DEF8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80038A10 -> 0x80038B38
*/
// Range: 0x80038A10 -> 0x80038A34
struct tag_type * xtextbox::find_format_tag(const struct substr & s /* r0 */) {
    // Local variables
    int index; // r1+0x8
}

// Range: 0x80038A34 -> 0x80038A3C
unsigned char xtextbox::get_japanese_word_breaking() {
    // References
    // -> unsigned char japanese_word_breaking;
}

// Range: 0x80038A3C -> 0x80038A70
// this: r0
unsigned char layout::has_data() {}

// Range: 0x80038A70 -> 0x80038AC4
class xtextbox xtextbox::create() {
    // References
    // -> static struct basic_rect screen_bounds;
}

// Range: 0x80038AC4 -> 0x80038B24
class xfont xfont::create() {
    // References
    // -> static struct basic_rect screen_bounds;
    // -> struct xColor_tag g_WHITE;
    // -> struct xColor_tag g_BLACK;
}

// Range: 0x80038B24 -> 0x80038B38
// this: r0
void jot::intersect_flags(const struct jot & a /* r0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003EB84 -> 0x8003EB84
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003F250 -> 0x8003F2B4
*/
// Range: 0x8003F250 -> 0x8003F2B4
// this: r30
void xfont::render(const char * text /* r31 */, float x /* f30 */, float y /* f31 */) const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80040170 -> 0x80040170
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80074950 -> 0x80074950
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80076CC0 -> 0x80076D38
*/
// Range: 0x80076CC0 -> 0x80076D00
// this: r31
float xtextbox::yextent(unsigned char cache /* r0 */) const {}

// Range: 0x80076D00 -> 0x80076D38
// this: r0
float xtextbox::yextent(const class layout & l /* r4 */, int begin_jot /* r0 */, int end_jot /* r7 */) const {
    // Local variables
    int size; // r1+0x8
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B3290 -> 0x800B3290
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BDECC -> 0x800BDED4
*/
// Range: 0x800BDECC -> 0x800BDED4
void xtextbox::set_japanese_word_breaking(unsigned char enabled /* r0 */) {
    // References
    // -> unsigned char japanese_word_breaking;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BEE20 -> 0x800BEE20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E1270 -> 0x800E1278
*/
// Range: 0x800E1270 -> 0x800E1278
// this: r3
unsigned long layout::jots_size() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E2BDC -> 0x800E2C38
*/
// Range: 0x800E2BDC -> 0x800E2C38
// this: r30
float xtextbox::yextent(float max /* f31 */, int & size /* r31 */, unsigned char cache /* r5 */) const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E9068 -> 0x800E9068
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010ABAC -> 0x8010ABAC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80110534 -> 0x8011054C
*/
// Range: 0x80110534 -> 0x80110540
float INSCREENY(float v /* f1 */) {}

// Range: 0x80110540 -> 0x8011054C
float INSCREENX(float v /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80119E50 -> 0x80119E50
*/

