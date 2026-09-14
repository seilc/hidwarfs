/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80020234 -> 0x80020514
*/
// Range: 0x80020234 -> 0x80020240
float NSCREENY(float v /* f1 */) {}

// Range: 0x80020240 -> 0x8002024C
float NSCREENX(float v /* f1 */) {}

// Range: 0x8002024C -> 0x80020294
// this: r31
void xtextbox::render(unsigned char cache /* r1+0x8 */) const {}

// Range: 0x80020294 -> 0x8002035C
class xtextbox xtextbox::create(const class xfont & font /* r1+0x8 */, const struct basic_rect & bounds /* r1+0xC */, unsigned int flags /* r1+0x10 */, float line_space /* r1+0x14 */, float tab_stop /* r1+0x18 */, float left_indent /* r1+0x1C */, float right_indent /* r1+0x20 */) {
    // Local variables
    class xtextbox r; // r1+0x24

    // References
    // -> struct callback text_cb;
}

// Range: 0x80020414 -> 0x80020514
class xfont xfont::create(unsigned int id /* r1+0x8 */, float width /* r1+0xC */, float height /* r1+0x10 */, float space /* r1+0x14 */, struct xColor_tag & color /* r1+0x18 */, const struct basic_rect & clip /* r1+0x1C */, struct xColor_tag & shadowColor /* r1+0x20 */, float shadowOffsetX /* r1+0x24 */, float shadowOffsetY /* r1+0x28 */) {
    // Local variables
    class xfont r; // r1+0x2C
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002BD70 -> 0x8002BD7C
*/
// Range: 0x8002BD70 -> 0x8002BD7C
// this: r3
void jot::reset_flags() {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80035C60 -> 0x80035D58
*/
// Range: 0x80035C60 -> 0x80035C74
void xtextbox::log_layout_stats(unsigned char log /* r3 */) {
    // References
    // -> unsigned char disable_text_stats;
}

// Range: 0x80035C74 -> 0x80035CBC
// this: r31
float xtextbox::yextent(unsigned char cache /* r1+0x8 */) const {}

// Range: 0x80035CBC -> 0x80035D04
// this: r1+0x8
float xtextbox::yextent(const class layout & l /* r1+0xC */, int begin_jot /* r1+0x10 */, int end_jot /* r1+0x14 */) const {
    // Local variables
    int size; // r1+0x18
}

// Range: 0x80035D04 -> 0x80035D58
// this: r31
void xfont::render(const char * text /* r1+0x8 */, float x /* r1+0xC */, float y /* r1+0x10 */) const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80043ED8 -> 0x80043FD0
*/
// Range: 0x80043ED8 -> 0x80043F24
class xtextbox xtextbox::create() {
    // References
    // -> static struct basic_rect screen_bounds;
}

// Range: 0x80043F24 -> 0x80043FD0
class xfont xfont::create() {
    // References
    // -> static struct basic_rect screen_bounds;
    // -> struct xColor_tag g_WHITE;
    // -> struct xColor_tag g_BLACK;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80078710 -> 0x800787B4
*/
// Range: 0x80078710 -> 0x8007873C
struct tag_type * xtextbox::find_format_tag(const struct substr & s /* r1+0x8 */) {
    // Local variables
    int index; // r1+0xC
}

// Range: 0x8007873C -> 0x80078744
unsigned char xtextbox::get_japanese_word_breaking() {
    // References
    // -> unsigned char japanese_word_breaking;
}

// Range: 0x80078744 -> 0x800787A0
// this: r3
unsigned char layout::has_data() {}

// Range: 0x800787A0 -> 0x800787B4
// this: r3
void jot::intersect_flags(const struct jot & a /* r4 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80086E60 -> 0x80086E78
*/
// Range: 0x80086E60 -> 0x80086E6C
float INSCREENX(float v /* f1 */) {}

// Range: 0x80086E6C -> 0x80086E78
float INSCREENY(float v /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800879E8 -> 0x800879E8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80089230 -> 0x80089230
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800FCBD0 -> 0x800FCBD0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80101234 -> 0x80101234
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017209C -> 0x8017209C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80183728 -> 0x80183730
*/
// Range: 0x80183728 -> 0x80183730
void xtextbox::set_japanese_word_breaking(unsigned char enabled /* r3 */) {
    // References
    // -> unsigned char japanese_word_breaking;
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80184D84 -> 0x80184D84
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C137C -> 0x801C1384
*/
// Range: 0x801C137C -> 0x801C1384
// this: r3
unsigned long layout::jots_size() const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C402C -> 0x801C4084
*/
// Range: 0x801C402C -> 0x801C4084
// this: r31
float xtextbox::yextent(float max /* r1+0x8 */, int & size /* r1+0xC */, unsigned char cache /* r1+0x10 */) const {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CEA78 -> 0x801CEA78
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80207090 -> 0x80207090
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802103BC -> 0x802103BC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802233A0 -> 0x802233A0
*/

