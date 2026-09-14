/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8001B8AC -> 0x8001BB48
*/
// Range: 0x8001B8AC -> 0x8001B8B8
float NSCREENY(float v /* f1 */) {}

// Range: 0x8001B8B8 -> 0x8001B8C4
float NSCREENX(float v /* f1 */) {}

// Range: 0x8001B8C4 -> 0x8001B904
// this: r31
void xtextbox::render(unsigned char cache /* r0 */) const {}

// Range: 0x8001B904 -> 0x8001B9CC
class xtextbox xtextbox::create(const class xfont & font /* r0 */, const struct basic_rect & bounds /* r30 */, unsigned int flags /* r31 */, float line_space /* f28 */, float tab_stop /* f29 */, float left_indent /* f30 */, float right_indent /* f31 */) {
    // Local variables
    class xtextbox r; // r1+0x8

    // References
    // -> struct callback text_cb;
}

// Range: 0x8001BA54 -> 0x8001BB48
class xfont xfont::create(unsigned int id /* r0 */, float width /* f0 */, float height /* f0 */, float space /* f0 */, struct xColor_tag & color /* r5 */, const struct basic_rect & clip /* r30 */, struct xColor_tag & shadowColor /* r31 */, float shadowOffsetX /* f30 */, float shadowOffsetY /* f31 */) {
    // Local variables
    class xfont r; // r1+0x8
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800251F0 -> 0x800251FC
*/
// Range: 0x800251F0 -> 0x800251FC
// this: r0
void jot::reset_flags() {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002DBF0 -> 0x8002DCE8
*/
// Range: 0x8002DBF0 -> 0x8002DC04
void xtextbox::log_layout_stats(unsigned char log /* r0 */) {
    // References
    // -> unsigned char disable_text_stats;
}

// Range: 0x8002DC04 -> 0x8002DC44
// this: r31
float xtextbox::yextent(unsigned char cache /* r0 */) const {}

// Range: 0x8002DC44 -> 0x8002DC7C
// this: r0
float xtextbox::yextent(const class layout & l /* r4 */, int begin_jot /* r0 */, int end_jot /* r7 */) const {
    // Local variables
    int size; // r1+0x8
}

// Range: 0x8002DC7C -> 0x8002DCE8
// this: r30
void xfont::render(const char * text /* r31 */, float x /* f30 */, float y /* f31 */) const {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8003A29C -> 0x8003A350
*/
// Range: 0x8003A29C -> 0x8003A2F0
class xtextbox xtextbox::create() {
    // References
    // -> static struct basic_rect screen_bounds;
}

// Range: 0x8003A2F0 -> 0x8003A350
class xfont xfont::create() {
    // References
    // -> static struct basic_rect screen_bounds;
    // -> struct xColor_tag g_WHITE;
    // -> struct xColor_tag g_BLACK;
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80066490 -> 0x80066504
*/
// Range: 0x80066490 -> 0x800664B4
struct tag_type * xtextbox::find_format_tag(const struct substr & s /* r0 */) {
    // Local variables
    int index; // r1+0x8
}

// Range: 0x800664B4 -> 0x800664BC
unsigned char xtextbox::get_japanese_word_breaking() {
    // References
    // -> unsigned char japanese_word_breaking;
}

// Range: 0x800664BC -> 0x800664F0
// this: r0
unsigned char layout::has_data() {}

// Range: 0x800664F0 -> 0x80066504
// this: r0
void jot::intersect_flags(const struct jot & a /* r0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80072120 -> 0x80072138
*/
// Range: 0x80072120 -> 0x8007212C
float INSCREENX(float v /* f1 */) {}

// Range: 0x8007212C -> 0x80072138
float INSCREENY(float v /* f1 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80072AFC -> 0x80072AFC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800740CC -> 0x800740CC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CE048 -> 0x800CE048
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D19A0 -> 0x800D19A0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DFC4 -> 0x8012DFC4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013D17C -> 0x8013D184
*/
// Range: 0x8013D17C -> 0x8013D184
void xtextbox::set_japanese_word_breaking(unsigned char enabled /* r0 */) {
    // References
    // -> unsigned char japanese_word_breaking;
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013E5D4 -> 0x8013E5D4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80171010 -> 0x80171018
*/
// Range: 0x80171010 -> 0x80171018
// this: r3
unsigned long layout::jots_size() const {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80173474 -> 0x801734D8
*/
// Range: 0x80173474 -> 0x801734D8
// this: r30
float xtextbox::yextent(float max /* f31 */, int & size /* r31 */, unsigned char cache /* r5 */) const {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017C6C0 -> 0x8017C6C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AD46C -> 0x801AD46C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B4B54 -> 0x801B4B54
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xFont.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C54F8 -> 0x801C54F8
*/

