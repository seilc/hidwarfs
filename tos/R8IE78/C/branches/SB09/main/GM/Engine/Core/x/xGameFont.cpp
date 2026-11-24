/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xGameFont.cpp
*/
static int FontCacheTotal; // size: 0x4, address: 0x8075B2C8
static class SimpleFontCache FontCache[16]; // size: 0x100, address: 0x8075B2D0
static class jot_block jot_blocks[64]; // size: 0xE200, address: 0x8075B3D0
static class jot_line_block jot_line_blocks[64]; // size: 0x2200, address: 0x807695D0
static class context_buffer_block context_buffer_blocks[64]; // size: 0x1300, address: 0x8076B7D0
static class layout * gCurrentLayout; // size: 0x4, address: 0x8076CAD0
static class model_cache_entry model_cache[8]; // size: 0x80, address: 0x8076CAD8
unsigned int next_order; // size: 0x4, address: 0x80773EC0
static class EntityHandle * DefaultFont; // size: 0x4, address: 0x8076CB58
static class EntityHandle * CurrentFont; // size: 0x4, address: 0x8076CB5C
static unsigned long long CurrentFontUID; // size: 0x8, address: 0x8076CB60
class Referrer CNGTReferrer; // size: 0x1, address: 0x80773EC8
static class substr text_delims; // size: 0x8, address: 0x80691580
static class tex_args def_tex_args; // size: 0x38, address: 0x8076CB68
static class model_args def_model_args; // size: 0x2C, address: 0x8076CBA0
static class tl_cache_entry tl_cache[16]; // size: 0x1300, address: 0x8076CBD0
static class Time decay_time; // size: 0x8, address: 0x8076DED0
bool japanese_word_breaking; // size: 0x1, address: 0x8076DED8
class callback text_cb; // size: 0xC, address: 0x806915A0
bool disable_text_stats; // size: 0x1, address: 0x8076DED9
class substr arg_buffer[32]; // size: 0x100, address: 0x80773ED0
class tag_entry entry_buffer[16]; // size: 0x140, address: 0x80773FD0
class callback cb; // size: 0xC, address: 0x806915DC
class callback cb; // size: 0xC, address: 0x806915EC
class callback cb; // size: 0xC, address: 0x806915F8
class callback cb; // size: 0xC, address: 0x80691604
class callback cb; // size: 0xC, address: 0x80691610
class callback cb; // size: 0xC, address: 0x8069161C
class callback cb; // size: 0xC, address: 0x80691628
class callback cb; // size: 0xC, address: 0x80691634
class callback cb; // size: 0xC, address: 0x80691640
class callback cb; // size: 0xC, address: 0x8069164C
class callback cb; // size: 0xC, address: 0x80691658
class callback cb; // size: 0xC, address: 0x80691664
class callback cb; // size: 0xC, address: 0x80691670
class callback cb; // size: 0xC, address: 0x8069167C
class callback cb; // size: 0xC, address: 0x80691688
class callback cb; // size: 0xC, address: 0x80691694
class callback cb; // size: 0xC, address: 0x806916A0
class callback cb; // size: 0xC, address: 0x806916AC
class callback cb; // size: 0xC, address: 0x806916B8
class callback cb; // size: 0xC, address: 0x806916C4
class callback cb; // size: 0xC, address: 0x806916D0
class callback cb; // size: 0xC, address: 0x806916DC
class callback cb; // size: 0xC, address: 0x806916E8
class callback cb; // size: 0xC, address: 0x806916F4
class callback cb; // size: 0xC, address: 0x80691700
class callback cb; // size: 0xC, address: 0x8069170C
class callback cb; // size: 0xC, address: 0x80691718
class callback cb; // size: 0xC, address: 0x80691724
class callback cb; // size: 0xC, address: 0x80691730
class callback cb; // size: 0xC, address: 0x8069173C
class callback cb; // size: 0xC, address: 0x80691748
class callback cb; // size: 0xC, address: 0x80691754
class callback cb; // size: 0xC, address: 0x80691760
class callback cb; // size: 0xC, address: 0x8069176C
class callback cb; // size: 0xC, address: 0x80691778
class callback cb; // size: 0xC, address: 0x80691784
class callback cb; // size: 0xC, address: 0x80691790
class callback cb; // size: 0xC, address: 0x8069179C
class callback cb; // size: 0xC, address: 0x806917A8
class callback cb; // size: 0xC, address: 0x806917B4
class callback cb; // size: 0xC, address: 0x806917C0
class callback cb; // size: 0xC, address: 0x806917CC
class callback cb; // size: 0xC, address: 0x806917F0
static class tag_type format_tags_buffer[2][128]; // size: 0x1400, address: 0x806C6FE0
static class tag_type * format_tags; // size: 0x4, address: 0x806C83E0
static unsigned long format_tags_size; // size: 0x4, address: 0x806C83E4
static char * TXT_WIP; // size: 0x4, address: 0x8076DEDC
static float wipTimer; // size: 0x4, address: 0x8076DEE0
static class xtextbox tb; // size: 0x88, address: 0x8076DEE8
// Range: 0x80189B50 -> 0x80189B60
void xGameFontCache::ResetCache() {
    // References
    // -> static int FontCacheTotal;
}
// signature: xGameFontCache::GetFromCache(unsigned long long)
// Range: 0x80189B60 -> 0x80189BB4
class EntityHandle * xGameFontCache::GetFromCache() {
    {
        // Range: 0x80189B64 -> 0x80189BAC
        // Local variables
        int i; // r0
    }

    // References
    // -> static class SimpleFontCache FontCache[16];
    // -> static int FontCacheTotal;
}
// signature: xGameFontCache::AddToCache(unsigned long long, World::EntityHandle<UI::Font> *)
// Range: 0x80189BC0 -> 0x80189BF0
void xGameFontCache::AddToCache() {
    // References
    // -> static class SimpleFontCache FontCache[16];
    // -> static int FontCacheTotal;
}
// Range: 0x8018B2E0 -> 0x8018B390
static class context_buffer_block * @unnamed@WAD04_cpp@::allocate_context_buffer_block() {
    {
        // Range: 0x8018B2EC -> 0x8018B330
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8018B344 -> 0x8018B37C
        // Local variables
        int i; // r0
    }

    // References
    // -> static class context_buffer_block context_buffer_blocks[64];
}
// Range: 0x8018AF00 -> 0x8018AFA8
static class jot_block * @unnamed@WAD04_cpp@::allocate_jot_block() {
    {
        // Range: 0x8018AF0C -> 0x8018AF4C
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8018AF60 -> 0x8018AF94
        // Local variables
        int i; // r0
    }

    // References
    // -> static class jot_block jot_blocks[64];
}
// Range: 0x8018B070 -> 0x8018B118
static class jot_line_block * @unnamed@WAD04_cpp@::allocate_jot_line_block() {
    {
        // Range: 0x8018B07C -> 0x8018B0BC
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8018B0D0 -> 0x8018B104
        // Local variables
        int i; // r0
    }

    // References
    // -> static class jot_line_block jot_line_blocks[64];
}
// signature: @unnamed@WAD04_cpp@::nextCharacter(const char *&)
// Range: 0x80189F10 -> 0x80189FD0
static unsigned int @unnamed@WAD04_cpp@::nextCharacter() {
    // Local variables
    unsigned char ch1; // r0

    {
        // Range: 0x80189F30 -> 0x80189F54
        // Local variables
        unsigned char ch2; // r0
    }
    {
        // Range: 0x80189F54 -> 0x80189F8C
        // Local variables
        unsigned char ch3; // r0
        unsigned char ch2; // r0
    }
    {
        // Range: 0x80189F8C -> 0x80189FCC
        // Local variables
        unsigned char ch4; // r0
        unsigned char ch3; // r0
        unsigned char ch2; // r0
    }
}
// Range: 0x80189C90 -> 0x80189EAC
static class Font * @unnamed@WAD04_cpp@::CNGTGetFont(unsigned long long fontUID /* r31:r30 */) {
    {
        // Range: 0x80189CC8 -> 0x80189D5C
        // Local variables
        unsigned int defaultFontHash; // r0

        {
            // Range: 0x80189CE4 -> 0x80189D5C
            // Local variables
            unsigned long long defaultFontUID; // reg65535:reg65535
        }
    }

    // References
    // -> class Referrer CNGTReferrer;
    // -> static unsigned long long CurrentFontUID;
    // -> static class EntityHandle * CurrentFont;
    // -> static class EntityHandle * DefaultFont;
}
// Range: 0x8018A020 -> 0x8018A114
static class basic_rect @unnamed@WAD04_cpp@::CNGTGetBound(class xfont & font /* r29 */, unsigned int character /* r30 */) {
    // Local variables
    class Font * currentFont; // r31
    class basic_rect toReturn; // r1+0x8
    unsigned short glyphIndex; // r0

    {
        // Range: 0x8018A074 -> 0x8018A0C0
        // Local variables
        class Glyph & glyph; // r0
    }
}
// Range: 0x8018A270 -> 0x8018A7E0
static char * @unnamed@WAD04_cpp@::parse_next_jot(class jot & a /* r27 */, class xtextbox & tb /* r28 */, class xtextbox & ctb /* r30 */, char * text /* r29 */, unsigned long text_size /* r31 */) {
    // Local variables
    char * next; // r3

    // References
    // -> class callback text_cb;
    // -> bool japanese_word_breaking;
    // -> static class substr text_delims;
}
// Range: 0x8018A7E0 -> 0x8018A85C
static void @unnamed@WAD04_cpp@::reset_tex_args(class tex_args & ta /* r29 */) {
    // References
    // -> class basic_rect m_Unit;
}
// Range: 0x8018A860 -> 0x8018A8CC
static void @unnamed@WAD04_cpp@::reset_model_args(class model_args & ma /* r30 */) {
    // References
    // -> class basic_rect m_Unit;
    // -> class xVec3 m_Null;
}
// Range: 0x8018A8D0 -> 0x8018AAEC
static unsigned int @unnamed@WAD04_cpp@::clear_oldest_layout(bool withData /* r21 */) {
    // Local variables
    unsigned int index; // r23

    {
        // Range: 0x8018A93C -> 0x8018AABC
        // Local variables
        unsigned long i; // r22

        {
            // Range: 0x8018A93C -> 0x8018AABC
            // Local variables
            class tl_cache_entry & e; // r19

            {
                // Range: 0x8018A9DC -> 0x8018AA80
                // Local variables
                class tl_cache_entry & e2; // r24
            }
        }
    }

    // References
    // -> static class Time decay_time;
    // -> static class layout * gCurrentLayout;
    // -> static class tl_cache_entry tl_cache[16];
}
// signature: xtextbox::text_render(const xtextbox::jot &, const xtextbox &, float, float)
// Range: 0x8018AB30 -> 0x8018AD20
void xtextbox::text_render(class xtextbox & tb /* r30 */, float x /* f29 */, float y /* f30 */) {
    // References
    // -> class Scene * primaryScene;
}
// signature: xtextbox::set_text(const char *)
// Range: 0x8018AD20 -> 0x8018AD28
void xtextbox::set_text() {
}
// signature: xtextbox::set_text(const char *, unsigned long)
// Range: 0x8018AD30 -> 0x8018AD6C
void xtextbox::set_text() {
}
// Range: 0x8018AD70 -> 0x8018AE34
void xtextbox::set_text(class xtextbox * this /* r26 */, char * * texts /* r27 */, unsigned long * text_sizes /* r28 */, unsigned long size /* r29 */) {
    {
        // Range: 0x8018ADB4 -> 0x8018ADE4
        // Local variables
        unsigned long i; // r30
    }
    {
        // Range: 0x8018ADE8 -> 0x8018AE20
        // Local variables
        unsigned long i; // r30
    }
}
// signature: xtextbox::layout::get_jot(unsigned long) const
// Range: 0x8018AE40 -> 0x8018AE7C
class jot & xtextbox::layout::get_jot() const {
    // Local variables
    class jot_block * block; // r3
}
// Range: 0x8018AE80 -> 0x8018AEF4
class jot & xtextbox::layout::get_new_jot(class layout * this /* r30 */) {
    // Local variables
    class jot_block * block; // r31
    unsigned long index; // r30
}
// signature: xtextbox::layout::get_jot_line(unsigned long) const
// Range: 0x8018AFB0 -> 0x8018AFEC
class jot_line & xtextbox::layout::get_jot_line() const {
    // Local variables
    class jot_line_block * block; // r3
}
// Range: 0x8018AFF0 -> 0x8018B064
class jot_line & xtextbox::layout::get_new_jot_line(class layout * this /* r30 */) {
    // Local variables
    class jot_line_block * block; // r31
    unsigned long index; // r30
}
// Range: 0x8018B120 -> 0x8018B148
void xtextbox::layout::clear_jots() {
}
// Range: 0x8018B150 -> 0x8018B178
void xtextbox::layout::clear_jot_lines() {
}
// Range: 0x8018B180 -> 0x8018B1A8
void xtextbox::layout::clear_context_buffers() {
}
// Range: 0x8018B1B0 -> 0x8018B23C
void xtextbox::layout::free_unused_blocks() {
    // Local variables
    unsigned long i; // r4
    class jot_block * j; // r5
    class jot_line_block * jl; // r5
}
// Range: 0x8018B240 -> 0x8018B2DC
void * xtextbox::layout::add_context_data(class layout * this /* r30 */, void * data /* r28 */, unsigned long size /* r29 */) {
    // Local variables
    class context_buffer_block * block; // r31

    {
        // Range: 0x8018B278 -> 0x8018B2AC
        // Local variables
        void * destination; // r30
    }
}
// Range: 0x8018B390 -> 0x8018B424
void xtextbox::layout::get_max_bounds(class layout * this /* r28 */, float & maxWidth /* r29 */, float & maxHeight /* r30 */) const {
    {
        // Range: 0x8018B3BC -> 0x8018B40C
        // Local variables
        unsigned long i; // r31

        {
            // Range: 0x8018B3BC -> 0x8018B40C
            // Local variables
            class jot_line & line; // r0
        }
    }
}
// Range: 0x8018B430 -> 0x8018B53C
class layout & xtextbox::temp_layout(class xtextbox * this /* r26 */, bool cache /* r27 */) const {
    // Local variables
    bool refresh; // r29
    unsigned long index; // r28
    class tl_cache_entry & e; // r28

    // References
    // -> static class tl_cache_entry tl_cache[16];
}
// signature: xtextbox::render(xtextbox::layout &, bool, int, int) const
// Range: 0x8018B6A0 -> 0x8018B6B0
void xtextbox::render(class xtextbox * this /* r0 */) const {
}
// signature: xtextbox::read_tag(const substr &)
// Range: 0x8018B6B0 -> 0x8018B90C
class tag_entry_list xtextbox::read_tag() {
    // Local variables
    unsigned long args_used; // r26
    unsigned long entries_used; // r25
    class substr it; // r1+0x20
    char * d; // r0
    class substr delims; // r1+0x18
    class substr sub_delims; // r1+0x10
    class tag_entry_list ret; // r1+0x8

    {
        // Range: 0x8018B714 -> 0x8018B8E0
        // Local variables
        char * d; // r0
        class tag_entry & entry; // r24

        {
            // Range: 0x8018B714 -> 0x8018B8E0
            // Local variables
            char * d; // r0
            class substr & arg; // r23
        }
    }

    // References
    // -> class tag_entry entry_buffer[16];
    // -> class substr arg_buffer[32];
}
// Range: 0x8018B910 -> 0x8018B984
class tag_entry * xtextbox::find_entry(class tag_entry_list & el /* r27 */, class substr & name /* r28 */) {
    {
        // Range: 0x8018B928 -> 0x8018B96C
        // Local variables
        unsigned long i; // r30

        {
            // Range: 0x8018B928 -> 0x8018B96C
            // Local variables
            class tag_entry & e; // r29
        }
    }
}
// signature: xtextbox::read_list(const xtextbox::tag_entry &, float *, unsigned long)
// Range: 0x8018B990 -> 0x8018BA04
unsigned long xtextbox::read_list(class tag_entry & e /* r26 */, float * v /* r27 */) {
    // Local variables
    unsigned long total; // r0

    {
        // Range: 0x8018B9B8 -> 0x8018B9EC
        // Local variables
        unsigned long i; // r28
    }
}
// Range: 0x8018BA10 -> 0x8018BA60
void xtextbox::clear_layout_cache() {
    {
        // Range: 0x8018BA20 -> 0x8018BA4C
        // Local variables
        unsigned long index; // r29
    }

    // References
    // -> static class tl_cache_entry tl_cache[16];
}
// Range: 0x8018BA60 -> 0x8018BB40
void xtextbox::layout::clear(class layout * this /* r29 */) {
    // References
    // -> static class basic_rect screen_bounds;
    // -> class xColor g_WHITE;
    // -> class xColor g_BLACK;
}
// Range: 0x8018BB40 -> 0x8018BC28
void xtextbox::layout::trim_line(class layout * this /* r29 */, class jot_line & line /* r30 */) {
    {
        // Range: 0x8018BB58 -> 0x8018BBBC
        // Local variables
        unsigned long i; // r31

        {
            // Range: 0x8018BB58 -> 0x8018BBBC
            // Local variables
            class jot & a; // r0
        }
    }
    {
        // Range: 0x8018BBBC -> 0x8018BC14
        // Local variables
        unsigned long i; // r31

        {
            // Range: 0x8018BBBC -> 0x8018BC14
            // Local variables
            class jot & a; // r0
        }
    }
}
// signature: xtextbox::layout::erase_jots(unsigned long, unsigned long)
// Range: 0x8018BC30 -> 0x8018BCB8
void xtextbox::layout::erase_jots(class layout * this /* r28 */) {
    // Local variables
    unsigned long offset; // r31

    {
        // Range: 0x8018BC5C -> 0x8018BCA4
        // Local variables
        unsigned long i; // r30

        {
            // Range: 0x8018BC5C -> 0x8018BCA4
            // Local variables
            class jot & a; // r29
        }
    }
}
// Range: 0x8018BD40 -> 0x8018BF00
void xtextbox::layout::merge_line(class layout * this /* r26 */, class jot_line & line /* r27 */) {
    // Local variables
    unsigned long d; // r30

    {
        // Range: 0x8018BD6C -> 0x8018BED4
        // Local variables
        unsigned long i; // r29

        {
            // Range: 0x8018BD6C -> 0x8018BED4
            // Local variables
            class jot & a2; // r28
            class jot & a1; // r0

            {
                // Range: 0x8018BEA8 -> 0x8018BED4
                // Local variables
                class jot & jot_d; // r0
            }
        }
    }
}
// Range: 0x8018BF30 -> 0x8018C05C
void xtextbox::layout::bound_line(class layout * this /* r29 */, class jot_line & line /* r30 */) {
    {
        // Range: 0x8018BF48 -> 0x8018BFA8
        // Local variables
        unsigned long i; // r31

        {
            // Range: 0x8018BF48 -> 0x8018BFA8
            // Local variables
            class jot & a; // r0
        }
    }
    {
        // Range: 0x8018BFA8 -> 0x8018C014
        // Local variables
        unsigned long i; // r31

        {
            // Range: 0x8018BFA8 -> 0x8018C014
            // Local variables
            float total_height; // f1
            class jot & a; // r0
        }
    }
}
// Range: 0x8018C060 -> 0x8018C1D8
bool xtextbox::layout::fit_line(class layout * this /* r29 */, bool isLastLine /* r30 */) {
    // Local variables
    class jot_line & line; // r31

    {
        // Range: 0x8018C0F4 -> 0x8018C190
        // Local variables
        unsigned long i; // r27

        {
            // Range: 0x8018C100 -> 0x8018C170
            // Local variables
            class jot & a; // r0
        }
    }
}
// Range: 0x8018C1E0 -> 0x8018C268
void xtextbox::layout::next_line(class layout * this /* r30 */) {
    // Local variables
    class jot_line & line; // r0
    class jot_line & nline; // r0
}
// Range: 0x8018C270 -> 0x8018C65C
void xtextbox::layout::calc(class layout * this /* r21 */, class xtextbox & ctb /* r22 */, unsigned long start_text /* r23 */) {
    // Local variables
    float initialWidth; // f31
    float initialHeight; // f30
    class jot_line & first_line; // r0
    class @class text_stack[16]; // r1+0x58
    unsigned long text_stack_size; // r28
    unsigned long text_index; // r27
    char * s; // r26
    char * end; // r25
    char * next; // r24
    unsigned char temp_context_buffer[64]; // r1+0x18
    class jot_line & last_line; // r0

    {
        // Range: 0x8018C360 -> 0x8018C598
        // Local variables
        class jot_line & line; // r0
        class jot & a; // r23
    }
    {
        // Range: 0x8018C5D0 -> 0x8018C618
        // Local variables
        unsigned long i; // r20
    }

    // References
    // -> static class layout * gCurrentLayout;
    // -> static class model_args def_model_args;
    // -> static class tex_args def_tex_args;
}
// Range: 0x8018C660 -> 0x8018C828
char * xtextbox::layout::RenderToString(class layout * this /* r23 */, class xtextbox & ctb /* r24 */, int begin_jot /* r25 */, int end_jot /* r26 */, char * dest /* r27 */, unsigned long destSize /* r28 */) {
    // Local variables
    char * itD; // r31
    unsigned long destLen; // r30
    unsigned long begin_line; // r21
    float top; // f0
    float x; // f0
    float y; // f0

    {
        // Range: 0x8018C708 -> 0x8018C750
        // Local variables
        unsigned long i; // r22

        {
            // Range: 0x8018C708 -> 0x8018C750
            // Local variables
            class jot & j; // r0
        }
    }
    {
        // Range: 0x8018C75C -> 0x8018C804
        // Local variables
        int i; // reg65535

        {
            // Range: 0x8018C75C -> 0x8018C804
            // Local variables
            class jot & j; // r29
        }
    }
}
// signature: xtextbox::layout::render(const xtextbox &, bool, int, int)
// Range: 0x8018C830 -> 0x8018CB58
void xtextbox::layout::render(class layout * this /* r28 */, class xtextbox & ctb /* r29 */, int begin_jot /* r30 */, int end_jot /* r31 */) {
    // Local variables
    unsigned long begin_line; // r27
    float top; // f29
    unsigned long li; // r26
    int line_last; // r27
    float x; // f28
    float y; // f27

    {
        // Range: 0x8018C8E4 -> 0x8018C92C
        // Local variables
        unsigned long i; // r26

        {
            // Range: 0x8018C8E4 -> 0x8018C92C
            // Local variables
            class jot & j; // r0
        }
    }
    {
        // Range: 0x8018C93C -> 0x8018CB18
        // Local variables
        int i; // reg65535

        {
            // Range: 0x8018C93C -> 0x8018CB18
            // Local variables
            class jot & j; // r25

            {
                // Range: 0x8018C93C -> 0x8018CA94
                // Local variables
                unsigned int yj; // r0
                unsigned int xj; // r4
                class jot_line & line; // r0
            }
        }
    }
}
// Range: 0x8018CB60 -> 0x8018CCD8
bool xtextbox::layout::changed(class layout * this /* r30 */, class xtextbox & ctb /* r31 */) {
    // Local variables
    unsigned int flags1; // r8
    unsigned int flags2; // r9

    {
        // Range: 0x8018CC48 -> 0x8018CCBC
        // Local variables
        int i; // r27

        {
            // Range: 0x8018CC48 -> 0x8018CCBC
            // Local variables
            unsigned int val; // r0
            unsigned int oldval; // r0
            class jot & j; // r26
        }
    }
}
// signature: @unnamed@WAD04_cpp@::update_tag_alpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018CCE0 -> 0x8018CD18
static void @unnamed@WAD04_cpp@::update_tag_alpha() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_alpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018CD20 -> 0x8018CD2C
static void @unnamed@WAD04_cpp@::update_tag_reset_alpha() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_alpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018CD30 -> 0x8018CE6C
static void @unnamed@WAD04_cpp@::parse_tag_alpha(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_alpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018CE70 -> 0x8018CE80
static void @unnamed@WAD04_cpp@::reset_tag_alpha() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_red(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018CE80 -> 0x8018CFBC
static void @unnamed@WAD04_cpp@::parse_tag_red(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_red(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018CFC0 -> 0x8018CFD0
static void @unnamed@WAD04_cpp@::reset_tag_red() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_green(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018CFD0 -> 0x8018D10C
static void @unnamed@WAD04_cpp@::parse_tag_green(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_green(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D110 -> 0x8018D120
static void @unnamed@WAD04_cpp@::reset_tag_green() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_blue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D120 -> 0x8018D25C
static void @unnamed@WAD04_cpp@::parse_tag_blue(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_blue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D260 -> 0x8018D270
static void @unnamed@WAD04_cpp@::reset_tag_blue() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_salpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018D270 -> 0x8018D2A8
static void @unnamed@WAD04_cpp@::update_tag_salpha() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_salpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018D2B0 -> 0x8018D2BC
static void @unnamed@WAD04_cpp@::update_tag_reset_salpha() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_salpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D2C0 -> 0x8018D3FC
static void @unnamed@WAD04_cpp@::parse_tag_salpha(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_salpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D400 -> 0x8018D410
static void @unnamed@WAD04_cpp@::reset_tag_salpha() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_sred(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D410 -> 0x8018D54C
static void @unnamed@WAD04_cpp@::parse_tag_sred(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_sred(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D550 -> 0x8018D560
static void @unnamed@WAD04_cpp@::reset_tag_sred() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_sgreen(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D560 -> 0x8018D69C
static void @unnamed@WAD04_cpp@::parse_tag_sgreen(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_sgreen(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D6A0 -> 0x8018D6B0
static void @unnamed@WAD04_cpp@::reset_tag_sgreen() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_sblue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D6B0 -> 0x8018D7EC
static void @unnamed@WAD04_cpp@::parse_tag_sblue(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_sblue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D7F0 -> 0x8018D800
static void @unnamed@WAD04_cpp@::reset_tag_sblue() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_width(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018D800 -> 0x8018D80C
static void @unnamed@WAD04_cpp@::update_tag_width() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_width(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018D810 -> 0x8018D81C
static void @unnamed@WAD04_cpp@::update_tag_reset_width() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_width(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D820 -> 0x8018D910
static void @unnamed@WAD04_cpp@::parse_tag_width(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_width(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D910 -> 0x8018D920
static void @unnamed@WAD04_cpp@::reset_tag_width() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_height(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018D920 -> 0x8018D92C
static void @unnamed@WAD04_cpp@::update_tag_height() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_height(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018D930 -> 0x8018D93C
static void @unnamed@WAD04_cpp@::update_tag_reset_height() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_height(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018D940 -> 0x8018DA30
static void @unnamed@WAD04_cpp@::parse_tag_height(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_height(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DA30 -> 0x8018DA40
static void @unnamed@WAD04_cpp@::reset_tag_height() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_left_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018DA40 -> 0x8018DA4C
static void @unnamed@WAD04_cpp@::update_tag_left_indent() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_left_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018DA50 -> 0x8018DA5C
static void @unnamed@WAD04_cpp@::update_tag_reset_left_indent() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_left_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DA60 -> 0x8018DB50
static void @unnamed@WAD04_cpp@::parse_tag_left_indent(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_left_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DB50 -> 0x8018DB60
static void @unnamed@WAD04_cpp@::reset_tag_left_indent() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_right_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018DB60 -> 0x8018DB6C
static void @unnamed@WAD04_cpp@::update_tag_right_indent() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_right_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018DB70 -> 0x8018DB7C
static void @unnamed@WAD04_cpp@::update_tag_reset_right_indent() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_right_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DB80 -> 0x8018DC70
static void @unnamed@WAD04_cpp@::parse_tag_right_indent(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_right_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DC70 -> 0x8018DC80
static void @unnamed@WAD04_cpp@::reset_tag_right_indent() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_tab_stop(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018DC80 -> 0x8018DC8C
static void @unnamed@WAD04_cpp@::update_tag_tab_stop() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_tab_stop(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018DC90 -> 0x8018DC9C
static void @unnamed@WAD04_cpp@::update_tag_reset_tab_stop() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_tab_stop(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DCA0 -> 0x8018DD90
static void @unnamed@WAD04_cpp@::parse_tag_tab_stop(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_tab_stop(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DD90 -> 0x8018DDA0
static void @unnamed@WAD04_cpp@::reset_tag_tab_stop() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_xspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018DDA0 -> 0x8018DDAC
static void @unnamed@WAD04_cpp@::update_tag_xspace() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_xspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018DDB0 -> 0x8018DDBC
static void @unnamed@WAD04_cpp@::update_tag_reset_xspace() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_xspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DDC0 -> 0x8018DEB0
static void @unnamed@WAD04_cpp@::parse_tag_xspace(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_xspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DEB0 -> 0x8018DEC0
static void @unnamed@WAD04_cpp@::reset_tag_xspace() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_yspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018DEC0 -> 0x8018DECC
static void @unnamed@WAD04_cpp@::update_tag_yspace() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_yspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018DED0 -> 0x8018DEDC
static void @unnamed@WAD04_cpp@::update_tag_reset_yspace() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_yspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DEE0 -> 0x8018DFD0
static void @unnamed@WAD04_cpp@::parse_tag_yspace(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_yspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DFD0 -> 0x8018DFE0
static void @unnamed@WAD04_cpp@::reset_tag_yspace() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_all(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018DFE0 -> 0x8018DFEC
static void @unnamed@WAD04_cpp@::update_tag_reset_all() {
}
// signature: @unnamed@WAD04_cpp@::reset_tag_all(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018DFF0 -> 0x8018E000
static void @unnamed@WAD04_cpp@::reset_tag_all() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_color(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018E000 -> 0x8018E048
static void @unnamed@WAD04_cpp@::update_tag_color(class xtextbox & tb /* r31 */) {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_color(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E050 -> 0x8018E1D0
static void @unnamed@WAD04_cpp@::parse_tag_color(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    class xColor & color; // r0
    unsigned int v; // r11

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_color(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E1D0 -> 0x8018E1E0
static void @unnamed@WAD04_cpp@::reset_tag_color() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_font(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018E1E0 -> 0x8018E1F4
static void @unnamed@WAD04_cpp@::update_tag_font() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_font(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018E200 -> 0x8018E214
static void @unnamed@WAD04_cpp@::update_tag_reset_font() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_font(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E220 -> 0x8018E298
static void @unnamed@WAD04_cpp@::parse_tag_font(class jot & a /* r31 */) {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_font(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E2A0 -> 0x8018E2B0
static void @unnamed@WAD04_cpp@::reset_tag_font() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_wrap(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018E2B0 -> 0x8018E2C8
static void @unnamed@WAD04_cpp@::update_tag_wrap() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_wrap(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018E2D0 -> 0x8018E2E8
static void @unnamed@WAD04_cpp@::update_tag_reset_wrap() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_wrap(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E2F0 -> 0x8018E3CC
static void @unnamed@WAD04_cpp@::parse_tag_wrap(class jot & a /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    unsigned int & flags; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_wrap(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E3D0 -> 0x8018E3E0
static void @unnamed@WAD04_cpp@::reset_tag_wrap() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_xjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018E3E0 -> 0x8018E3F8
static void @unnamed@WAD04_cpp@::update_tag_xjustify() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_xjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018E400 -> 0x8018E418
static void @unnamed@WAD04_cpp@::update_tag_reset_xjustify() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_xjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E420 -> 0x8018E52C
static void @unnamed@WAD04_cpp@::parse_tag_xjustify(class jot & a /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    unsigned int & flags; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_xjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E530 -> 0x8018E540
static void @unnamed@WAD04_cpp@::reset_tag_xjustify() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_yjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018E540 -> 0x8018E558
static void @unnamed@WAD04_cpp@::update_tag_yjustify() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_yjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x8018E560 -> 0x8018E578
static void @unnamed@WAD04_cpp@::update_tag_reset_yjustify() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_yjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E580 -> 0x8018E680
static void @unnamed@WAD04_cpp@::parse_tag_yjustify(class jot & a /* r28 */, class split_tag & ti /* r29 */) {
    // Local variables
    unsigned int & flags; // r0

    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_yjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E680 -> 0x8018E690
static void @unnamed@WAD04_cpp@::reset_tag_yjustify() {
    // References
    // -> class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_open_curly(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E690 -> 0x8018E6FC
static void @unnamed@WAD04_cpp@::parse_tag_open_curly(class jot & a /* r29 */, class xtextbox & tb /* r30 */) {
    // Local variables
    char c; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_tag_newline(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E700 -> 0x8018E750
static void @unnamed@WAD04_cpp@::parse_tag_newline(class jot & a /* r31 */) {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_nbsp(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E750 -> 0x8018E7E4
static void @unnamed@WAD04_cpp@::parse_tag_nbsp(class jot & a /* r31 */) {
    // References
    // -> class callback text_cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_tab(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E7F0 -> 0x8018E800
static void @unnamed@WAD04_cpp@::parse_tag_tab() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_word_break(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E800 -> 0x8018E810
static void @unnamed@WAD04_cpp@::parse_tag_word_break() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_page_break(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E810 -> 0x8018E820
static void @unnamed@WAD04_cpp@::parse_tag_page_break() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_model(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018E820 -> 0x8018EC40
static void @unnamed@WAD04_cpp@::parse_tag_model(class jot & a /* r30 */, class xtextbox & tb /* r31 */) {
    // Local variables
    class model_tag_context & mtc; // r28

    // References
    // -> class callback cb;
    // -> static class model_args def_model_args;
    // -> class xMat4x3 g_I3;
    // -> static class model_cache_entry model_cache[8];
    // -> unsigned int next_order;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_model(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018EC80 -> 0x8018EC8C
static void @unnamed@WAD04_cpp@::reset_tag_model() {
    // References
    // -> static class model_args def_model_args;
}
// signature: @unnamed@WAD04_cpp@::render_tag_tex(const xtextbox::jot &, const xtextbox &, float, float)
// Range: 0x8018EC90 -> 0x8018EF3C
static void @unnamed@WAD04_cpp@::render_tag_tex(class xtextbox & tb /* r30 */, float x /* f25 */, float y /* f26 */) {
    // Local variables
    class tex_tag_context & ttc; // r31
    unsigned short paramHandle; // r0
    class Sampler samplerData; // r1+0x8
    class ImmediateGeometryEntity * immediateGeometry; // r0
    class ParamData * rendParamData; // r0
    class Effect * effect; // r0
    float w; // f8
    float h; // f9
    class Matrix43 transform; // r1+0x78
    class UICorners corners; // r1+0x48
    class ImmediateRenderUIImage image; // r1+0x18
    class Renderable3D * rend; // r28

    // References
    // -> class Scene * primaryScene;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_tex(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8018F820 -> 0x8019003C
static void @unnamed@WAD04_cpp@::parse_tag_tex(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r25 */) {
    // Local variables
    class tex_tag_context & ttc; // r31
    class Referrer referrer; // r1+0x8
    class xVec2 scale; // r1+0xE8

    // References
    // -> class callback cb;
    // -> static class tex_args def_tex_args;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_tex(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80190040 -> 0x8019004C
static void @unnamed@WAD04_cpp@::reset_tag_tex() {
    // References
    // -> static class tex_args def_tex_args;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_depot(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80190050 -> 0x801900F8
static void @unnamed@WAD04_cpp@::parse_tag_depot(class jot & j /* r31 */) {
    // Local variables
    unsigned int id; // r0
    char * text; // r0

    // References
    // -> class xTextDepot gTextDepot;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_insert(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80190100 -> 0x8019019C
static void @unnamed@WAD04_cpp@::parse_tag_insert(class jot & j /* r31 */) {
    // Local variables
    unsigned int len; // r1+0x8
    char * text; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_tag_ivar(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801901A0 -> 0x80190320
static void @unnamed@WAD04_cpp@::parse_tag_ivar(class jot & j /* r31 */, class split_tag & ti /* r29 */) {
    // Local variables
    unsigned int len; // r1+0x8
    char * text; // r0

    {
        // Range: 0x8019023C -> 0x801902A4
        // Local variables
        char * text; // r0
        char keyMod[256]; // r1+0x10
    }
    {
        // Range: 0x801902A4 -> 0x801902D8
        // Local variables
        char * text; // r0
    }
}
// signature: @unnamed@WAD04_cpp@::parse_tag_insert_hash(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80190360 -> 0x8019040C
static void @unnamed@WAD04_cpp@::parse_tag_insert_hash(class jot & j /* r30 */) {
    // Local variables
    unsigned int len; // r1+0xC
    char * text; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_tag_pop(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80190410 -> 0x8019043C
static void @unnamed@WAD04_cpp@::parse_tag_pop() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_timer(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80190440 -> 0x80190530
static void @unnamed@WAD04_cpp@::parse_tag_timer(class jot & j /* r30 */) {
    // Local variables
    class xTimer * ta; // r0
    char buffer[64]; // r1+0x8
    unsigned int sec; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_tag_counter(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80190530 -> 0x80190600
static void @unnamed@WAD04_cpp@::parse_tag_counter(class jot & j /* r30 */) {
    // Local variables
    unsigned long long id; // r0:r0
    class xCounter * counter; // r0
    char * buffer; // r31
}
// signature: xtextbox::register_tags(const xtextbox::tag_type *, unsigned long)
// Range: 0x80190600 -> 0x8019071C
void xtextbox::register_tags() {
    // Local variables
    class tag_type * s1; // r30
    class tag_type * s2; // r29
    class tag_type * end1; // r28
    class tag_type * end2; // r27
    class tag_type * d; // r26

    {
        // Range: 0x8019064C -> 0x801906B8
        // Local variables
        int c; // r0
    }

    // References
    // -> static class tag_type * format_tags;
    // -> static unsigned long format_tags_size;
    // -> static class tag_type format_tags_buffer[2][128];
}
// Range: 0x80190750 -> 0x801907F4
class tag_type * xtextbox::find_format_tag(class substr & s /* r26 */, int & index /* r27 */) {
    // Local variables
    int start; // r30
    int end; // r29

    {
        // Range: 0x80190770 -> 0x801907D4
        // Local variables
        int c; // r0
        class tag_type & t; // r28
    }

    // References
    // -> static class tag_type * format_tags;
    // -> static unsigned long format_tags_size;
}
// Range: 0x80190800 -> 0x80190C68
void xFontPrintTopText() {
    // References
    // -> static class xtextbox tb;
    // -> static class basic_rect screen_bounds;
    // -> class xColor g_WHITE;
    // -> class xColor g_BLACK;
    // -> static float wipTimer;
    // -> float gRealTimeElapsed;
    // -> static char * TXT_WIP;
    // -> class xGlobals * xglobals;
}
