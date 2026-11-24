/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xGameFont.cpp
*/
static int FontCacheTotal; // size: 0x4, address: 0x8082CED8
static class SimpleFontCache FontCache[16]; // size: 0x100, address: 0x8082CEE0
static class jot_block jot_blocks[64]; // size: 0xE200, address: 0x8082CFE0
static class jot_line_block jot_line_blocks[64]; // size: 0x2200, address: 0x8083B1E0
static class context_buffer_block context_buffer_blocks[64]; // size: 0x1300, address: 0x8083D3E0
static class layout * gCurrentLayout; // size: 0x4, address: 0x8083E6E0
static class model_cache_entry model_cache[8]; // size: 0x80, address: 0x8083E6E8
static unsigned int next_order; // size: 0x4, address: 0x8083E768
static class EntityHandle * DefaultFont; // size: 0x4, address: 0x8083E76C
static class EntityHandle * CurrentFont; // size: 0x4, address: 0x8083E770
static unsigned long long CurrentFontUID; // size: 0x8, address: 0x8083E778
static class Referrer CNGTReferrer; // size: 0x1, address: 0x8083E784
static class substr text_delims; // size: 0x8, address: 0x80785708
static class tex_args def_tex_args; // size: 0x38, address: 0x8083E788
static class model_args def_model_args; // size: 0x2C, address: 0x8083E7C0
static class tl_cache_entry tl_cache[16]; // size: 0x1300, address: 0x8083E7F0
static class Time decay_time; // size: 0x8, address: 0x8083FAF0
bool japanese_word_breaking; // size: 0x1, address: 0x8083FAF8
class callback text_cb; // size: 0xC, address: 0x80785710
bool disable_text_stats; // size: 0x1, address: 0x8083FAF9
static class substr arg_buffer[32]; // size: 0x100, address: 0x8083FB00
static class tag_entry entry_buffer[16]; // size: 0x140, address: 0x8083FC00
static class callback cb; // size: 0xC, address: 0x8078574C
static class callback cb; // size: 0xC, address: 0x8078575C
static class callback cb; // size: 0xC, address: 0x80785768
static class callback cb; // size: 0xC, address: 0x80785774
static class callback cb; // size: 0xC, address: 0x80785780
static class callback cb; // size: 0xC, address: 0x8078578C
static class callback cb; // size: 0xC, address: 0x80785798
static class callback cb; // size: 0xC, address: 0x807857A4
static class callback cb; // size: 0xC, address: 0x807857B0
static class callback cb; // size: 0xC, address: 0x807857BC
static class callback cb; // size: 0xC, address: 0x807857C8
static class callback cb; // size: 0xC, address: 0x807857D4
static class callback cb; // size: 0xC, address: 0x807857E0
static class callback cb; // size: 0xC, address: 0x807857EC
static class callback cb; // size: 0xC, address: 0x807857F8
static class callback cb; // size: 0xC, address: 0x80785804
static class callback cb; // size: 0xC, address: 0x80785810
static class callback cb; // size: 0xC, address: 0x8078581C
static class callback cb; // size: 0xC, address: 0x80785828
static class callback cb; // size: 0xC, address: 0x80785834
static class callback cb; // size: 0xC, address: 0x80785840
static class callback cb; // size: 0xC, address: 0x8078584C
static class callback cb; // size: 0xC, address: 0x80785858
static class callback cb; // size: 0xC, address: 0x80785864
static class callback cb; // size: 0xC, address: 0x80785870
static class callback cb; // size: 0xC, address: 0x8078587C
static class callback cb; // size: 0xC, address: 0x80785888
static class callback cb; // size: 0xC, address: 0x80785894
static class callback cb; // size: 0xC, address: 0x807858A0
static class callback cb; // size: 0xC, address: 0x807858AC
static class callback cb; // size: 0xC, address: 0x807858B8
static class callback cb; // size: 0xC, address: 0x807858C4
static class callback cb; // size: 0xC, address: 0x807858D0
static class callback cb; // size: 0xC, address: 0x807858DC
static class callback cb; // size: 0xC, address: 0x807858E8
static class callback cb; // size: 0xC, address: 0x807858F4
static class callback cb; // size: 0xC, address: 0x80785900
static class callback cb; // size: 0xC, address: 0x8078590C
static class callback cb; // size: 0xC, address: 0x80785918
static class callback cb; // size: 0xC, address: 0x80785924
static class callback cb; // size: 0xC, address: 0x80785930
static class callback cb; // size: 0xC, address: 0x8078593C
static class callback cb; // size: 0xC, address: 0x80785964
static class tag_type format_tags_buffer[2][128]; // size: 0x1400, address: 0x807BA3C8
static class tag_type * format_tags; // size: 0x4, address: 0x807BB7C8
static unsigned long format_tags_size; // size: 0x4, address: 0x807BB7CC
static char * TXT_WIP; // size: 0x4, address: 0x8083FD40
static float wipTimer; // size: 0x4, address: 0x8083FD44
static class xtextbox tb; // size: 0x88, address: 0x8083FD48
// Range: 0x80292120 -> 0x80292130
void xGameFontCache::ResetCache() {
    // References
    // -> static int FontCacheTotal;
}
// signature: @unnamed@WAD04_cpp@::load_model(unsigned long long)
// Range: 0x80292130 -> 0x80292324
static class xModelInstance * @unnamed@WAD04_cpp@::load_model() {
    // Local variables
    unsigned long oldest; // r10
    class model_cache_entry & e; // r7
    class xModelInstance & model; // r3

    {
        // Range: 0x8029214C -> 0x802921A4
        // Local variables
        unsigned long i; // r11
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> static class model_cache_entry model_cache[8];
    // -> static unsigned int next_order;
}
// Range: 0x80292330 -> 0x8029257C
static class Font * @unnamed@WAD04_cpp@::CNGTGetFont(unsigned long long fontUID /* r29:r28 */) {
    {
        // Range: 0x80292370 -> 0x802923E0
        // Local variables
        unsigned int defaultFontHash; // r0

        {
            // Range: 0x80292388 -> 0x802923E0
            // Local variables
            unsigned long long defaultFontUID; // r3:r4
        }
    }

    // References
    // -> static class SimpleFontCache FontCache[16];
    // -> static int FontCacheTotal;
    // -> static class Referrer CNGTReferrer;
    // -> static unsigned long long CurrentFontUID;
    // -> static class EntityHandle * CurrentFont;
    // -> static class EntityHandle * DefaultFont;
}
// signature: @unnamed@WAD04_cpp@::CNGTRenderString(const xfont &, const char *, unsigned long, float, float, float, const xColor &, unsigned char)
// Range: 0x80292580 -> 0x80292764
static void @unnamed@WAD04_cpp@::CNGTRenderString(class xfont & font /* r26 */, unsigned long length /* r27 */, float x /* f29 */, float y /* f30 */, float z /* f31 */, class xColor & color /* r28 */, unsigned char brightness /* r31 */) {
    // Local variables
    char toPrint[1024]; // r1+0x70
    class RenderTextArgs args; // r1+0x8

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80292770 -> 0x80292954
static class basic_rect @unnamed@WAD04_cpp@::CNGTGetBound(class xfont & font /* r29 */, char * string /* r30 */, unsigned long length /* r31 */) {
    // Local variables
    class Font * currentFont; // r0
    class basic_rect toReturn; // r1+0x8
    char * tempString; // r4
}
// Range: 0x80292960 -> 0x80292CC8
static unsigned long @unnamed@WAD04_cpp@::parse_split_tag(class split_tag & ti /* r31 */) {
    // Local variables
    class substr s; // r1+0x8
    char c; // r0

    // References
    // -> static class substr text_delims;
}
// signature: @unnamed@WAD04_cpp@::parse_next_tag_jot(xtextbox::jot &, const xtextbox &, const xtextbox &, const char *, unsigned long)
// Range: 0x80292CD0 -> 0x80292E48
static char * @unnamed@WAD04_cpp@::parse_next_tag_jot(class jot & a /* r25 */, class xtextbox & tb /* r26 */, class xtextbox & ctb /* r27 */, char * text /* r28 */) {
    // Local variables
    class split_tag ti; // r1+0x30
    unsigned long size; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_next_text_jot(xtextbox::jot &, const xtextbox &, const xtextbox &, const char *, unsigned long)
// Range: 0x80292E50 -> 0x80293224
static char * @unnamed@WAD04_cpp@::parse_next_text_jot(class jot & a /* r29 */, class xtextbox & tb /* r30 */) {
    // Local variables
    char * nextChar; // r5
    bool hasSpaceChar; // r0

    // References
    // -> class callback text_cb;
    // -> bool japanese_word_breaking;
}
// signature: @unnamed@WAD04_cpp@::load_tex_args(@unnamed@WAD04_cpp@::tex_args &, const substr &)
// Range: 0x80293230 -> 0x802937E0
static void @unnamed@WAD04_cpp@::load_tex_args(class tex_args & ta /* r29 */) {
    // Local variables
    class tag_entry_list el; // r1+0xE0

    {
        // Range: 0x8029325C -> 0x80293304
        // Local variables
        unsigned long long id; // r3:r4
        class substr & name; // r25
    }
}
// signature: @unnamed@WAD04_cpp@::load_model_args(@unnamed@WAD04_cpp@::model_args &, const substr &)
// Range: 0x802937E0 -> 0x80293B40
static void @unnamed@WAD04_cpp@::load_model_args(class model_args & ma /* r30 */) {
    // Local variables
    class tag_entry_list el; // r1+0x58

    {
        // Range: 0x8029380C -> 0x80293854
        // Local variables
        unsigned long long id; // r0:r0
        class substr & name; // r4
    }
}
// Range: 0x80293B40 -> 0x802944A4
static unsigned int @unnamed@WAD04_cpp@::clear_oldest_layout(bool withData /* r30 */) {
    // Local variables
    unsigned int index; // r31

    {
        // Range: 0x80293C68 -> 0x8029412C
        // Local variables
        unsigned long i; // r11
    }

    // References
    // -> class callback text_cb;
    // -> static class basic_rect screen_bounds;
    // -> class xColor g_WHITE;
    // -> class xColor g_BLACK;
    // -> static class Time decay_time;
    // -> long long startupTicks;
    // -> static class layout * gCurrentLayout;
    // -> static class tl_cache_entry tl_cache[16];
}
// signature: xtextbox::text_render(const xtextbox::jot &, const xtextbox &, float, float)
// Range: 0x80294510 -> 0x80294534
void xtextbox::text_render(class jot & j /* r5 */, class xtextbox & tb /* r7 */) {
}
// signature: xtextbox::set_text(const char *)
// Range: 0x80294540 -> 0x80294578
void xtextbox::set_text() {
}
// signature: xtextbox::set_text(const char **, const unsigned long *, unsigned long)
// Range: 0x80294580 -> 0x80294648
void xtextbox::set_text(class xtextbox * this /* r27 */, unsigned long size /* r28 */) {
    {
        // Range: 0x802945C0 -> 0x802945D8
        // Local variables
        unsigned long i; // r31
    }
    {
        // Range: 0x802945FC -> 0x80294604
        // Local variables
        unsigned long i; // r29
    }
}
// Range: 0x80294650 -> 0x80294804
void xtextbox::layout::free_unused_blocks() {
    // Local variables
    unsigned long i; // r8
    class jot_block * j; // r4
    class jot_line_block * jl; // r3
}
// Range: 0x80294810 -> 0x80294B54
class layout & xtextbox::temp_layout(class xtextbox * this /* r29 */, bool cache /* r30 */) const {
    // Local variables
    bool refresh; // r28
    unsigned long index; // r27
    class tl_cache_entry & e; // r31

    // References
    // -> static class tl_cache_entry tl_cache[16];
    // -> long long startupTicks;
}
// signature: xtextbox::render(xtextbox::layout &, bool, int, int) const
// Range: 0x80294B60 -> 0x80294B70
void xtextbox::render(class xtextbox * this /* r0 */) const {
}
// signature: xtextbox::read_tag(const substr &)
// Range: 0x80294B70 -> 0x80294F54
class tag_entry_list xtextbox::read_tag() {
    // Local variables
    unsigned long entries_used; // r28
    class substr it; // r1+0x20
    class substr delims; // r1+0x18
    class substr sub_delims; // r1+0x10
    class tag_entry_list ret; // r1+0x8

    {
        // Range: 0x80294C2C -> 0x80294F1C
        // Local variables
        char * d; // r0
        class tag_entry & entry; // r27

        {
            // Range: 0x80294C2C -> 0x80294F10
            // Local variables
            char * d; // r0
        }
    }

    // References
    // -> static class substr arg_buffer[32];
    // -> static class tag_entry entry_buffer[16];
}
// Range: 0x80294F60 -> 0x802952CC
void xtextbox::clear_layout_cache() {
    {
        // Range: 0x80294F7C -> 0x80294F7C
        // Local variables
        unsigned long index; // r7
    }

    // References
    // -> static class basic_rect screen_bounds;
    // -> class callback text_cb;
    // -> static class tl_cache_entry tl_cache[16];
    // -> class xColor g_WHITE;
    // -> class xColor g_BLACK;
}
// signature: xtextbox::layout::trim_line(xtextbox::jot_line &)
// Range: 0x802952D0 -> 0x80295634
void xtextbox::layout::trim_line() {
    {
        // Range: 0x802952D0 -> 0x80295480
        // Local variables
        unsigned long i; // r5
    }
    {
        // Range: 0x80295488 -> 0x80295628
        // Local variables
        unsigned long i; // r5
    }
}
// signature: xtextbox::layout::merge_line(xtextbox::jot_line &)
// Range: 0x80295640 -> 0x802959BC
void xtextbox::layout::merge_line() {
    // Local variables
    unsigned long d; // r5

    {
        // Range: 0x80295650 -> 0x80295870
        // Local variables
        unsigned long i; // r6
    }
}
// signature: xtextbox::layout::bound_line(xtextbox::jot_line &)
// Range: 0x802959C0 -> 0x80295B60
void xtextbox::layout::bound_line() {
    {
        // Range: 0x802959C4 -> 0x80295A44
        // Local variables
        unsigned long i; // r7
    }
    {
        // Range: 0x80295A54 -> 0x80295AE8
        // Local variables
        unsigned long i; // r7

        {
            // Range: 0x80295A54 -> 0x80295AE8
            // Local variables
            float total_height; // f1
        }
    }
}
// Range: 0x80295B60 -> 0x80295D78
bool xtextbox::layout::fit_line(class layout * this /* r29 */, bool isLastLine /* r30 */) {
    {
        // Range: 0x80295C2C -> 0x80295D2C
        // Local variables
        unsigned long i; // r7
    }
}
// Range: 0x80295D80 -> 0x80296C6C
void xtextbox::layout::calc(class layout * this /* r15 */, class xtextbox & ctb /* r1+0x8 */, unsigned long start_text /* r18 */) {
    // Local variables
    float initialWidth; // f30
    float initialHeight; // f29
    class @class text_stack[16]; // r1+0x60
    unsigned long text_stack_size; // r17
    unsigned long text_index; // r1+0xE0
    char * s; // r18
    char * end; // r16
    unsigned char temp_context_buffer[64]; // r1+0x20

    {
        // Range: 0x802960D4 -> 0x80296B34
        {
            // Range: 0x802960D4 -> 0x802960D4
            // Local variables
            unsigned long context_size; // r21
        }
    }
    {
        // Range: 0x80296BA4 -> 0x80296C14
        // Local variables
        unsigned long i; // r5
    }

    // References
    // -> static class context_buffer_block context_buffer_blocks[64];
    // -> static class jot_block jot_blocks[64];
    // -> static class jot_line_block jot_line_blocks[64];
    // -> static class layout * gCurrentLayout;
    // -> static class model_args def_model_args;
    // -> static class tex_args def_tex_args;
    // -> class xVec3 m_Null;
    // -> class basic_rect m_Unit;
}
// Range: 0x80296C70 -> 0x80296FF0
char * xtextbox::layout::RenderToString(class layout * this /* r23 */, class xtextbox & ctb /* r24 */, int begin_jot /* r25 */, int end_jot /* r26 */, char * dest /* r27 */, unsigned long destSize /* r28 */) {
    // Local variables
    char * itD; // r31
    unsigned long destLen; // r30
    unsigned long begin_line; // r29
    float top; // f0
    float x; // f0
    float y; // f0

    {
        // Range: 0x80296E54 -> 0x80296EC0
        // Local variables
        unsigned long i; // r21
    }
    {
        // Range: 0x80296EF4 -> 0x80296EF4
        // Local variables
        int i; // reg65535
    }
}
// signature: xtextbox::layout::render(const xtextbox &, bool, int, int)
// Range: 0x80296FF0 -> 0x80297518
void xtextbox::layout::render(class layout * this /* r26 */, class xtextbox & ctb /* r27 */, int begin_jot /* r28 */, int end_jot /* r29 */) {
    // Local variables
    unsigned long begin_line; // r31
    float top; // f29
    unsigned long li; // r31
    int line_last; // r30
    float x; // f28
    float y; // f27

    {
        // Range: 0x802971DC -> 0x80297248
        // Local variables
        unsigned long i; // r25
    }
    {
        // Range: 0x80297294 -> 0x802974CC
        // Local variables
        int i; // reg65535

        {
            // Range: 0x80297294 -> 0x802974CC
            {
                // Range: 0x80297294 -> 0x80297420
                // Local variables
                unsigned int yj; // r0
                unsigned int xj; // r4
            }
        }
    }
}
// Range: 0x80297520 -> 0x80297728
bool xtextbox::layout::changed(class layout * this /* r28 */, class xtextbox & ctb /* r29 */) {
    // Local variables
    unsigned int flags1; // r8
    unsigned int flags2; // r9

    {
        // Range: 0x80297608 -> 0x80297704
        // Local variables
        int i; // r30

        {
            // Range: 0x80297608 -> 0x80297704
            // Local variables
            unsigned int val; // r0
            unsigned int oldval; // r0
        }
    }
}
// signature: @unnamed@WAD04_cpp@::update_tag_alpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80297730 -> 0x80297768
static void @unnamed@WAD04_cpp@::update_tag_alpha() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_alpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80297770 -> 0x8029777C
static void @unnamed@WAD04_cpp@::update_tag_reset_alpha() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_alpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80297780 -> 0x802978C4
static void @unnamed@WAD04_cpp@::parse_tag_alpha(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_alpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x802978D0 -> 0x802978E0
static void @unnamed@WAD04_cpp@::reset_tag_alpha() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_red(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80297900 -> 0x80297A44
static void @unnamed@WAD04_cpp@::parse_tag_red(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_red(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80297A50 -> 0x80297A60
static void @unnamed@WAD04_cpp@::reset_tag_red() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_green(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80297A80 -> 0x80297BC4
static void @unnamed@WAD04_cpp@::parse_tag_green(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_green(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80297BD0 -> 0x80297BE0
static void @unnamed@WAD04_cpp@::reset_tag_green() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_blue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80297C00 -> 0x80297D44
static void @unnamed@WAD04_cpp@::parse_tag_blue(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_blue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80297D50 -> 0x80297D60
static void @unnamed@WAD04_cpp@::reset_tag_blue() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_salpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80297D60 -> 0x80297D98
static void @unnamed@WAD04_cpp@::update_tag_salpha() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_salpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80297DA0 -> 0x80297DAC
static void @unnamed@WAD04_cpp@::update_tag_reset_salpha() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_salpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80297DB0 -> 0x80297EF4
static void @unnamed@WAD04_cpp@::parse_tag_salpha(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_salpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80297F00 -> 0x80297F10
static void @unnamed@WAD04_cpp@::reset_tag_salpha() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_sred(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80297F30 -> 0x80298074
static void @unnamed@WAD04_cpp@::parse_tag_sred(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_sred(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298080 -> 0x80298090
static void @unnamed@WAD04_cpp@::reset_tag_sred() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_sgreen(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x802980B0 -> 0x802981F4
static void @unnamed@WAD04_cpp@::parse_tag_sgreen(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_sgreen(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298200 -> 0x80298210
static void @unnamed@WAD04_cpp@::reset_tag_sgreen() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_sblue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298230 -> 0x80298374
static void @unnamed@WAD04_cpp@::parse_tag_sblue(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_sblue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298380 -> 0x80298390
static void @unnamed@WAD04_cpp@::reset_tag_sblue() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_width(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298390 -> 0x8029839C
static void @unnamed@WAD04_cpp@::update_tag_width() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_width(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x802983A0 -> 0x802983AC
static void @unnamed@WAD04_cpp@::update_tag_reset_width() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_width(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x802983B0 -> 0x802984A8
static void @unnamed@WAD04_cpp@::parse_tag_width(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_width(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x802984B0 -> 0x802984C0
static void @unnamed@WAD04_cpp@::reset_tag_width() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_height(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x802984C0 -> 0x802984CC
static void @unnamed@WAD04_cpp@::update_tag_height() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_height(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x802984D0 -> 0x802984DC
static void @unnamed@WAD04_cpp@::update_tag_reset_height() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_height(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x802984E0 -> 0x802985D8
static void @unnamed@WAD04_cpp@::parse_tag_height(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_height(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x802985E0 -> 0x802985F0
static void @unnamed@WAD04_cpp@::reset_tag_height() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_left_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x802985F0 -> 0x802985FC
static void @unnamed@WAD04_cpp@::update_tag_left_indent() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_left_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298600 -> 0x8029860C
static void @unnamed@WAD04_cpp@::update_tag_reset_left_indent() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_left_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298610 -> 0x80298708
static void @unnamed@WAD04_cpp@::parse_tag_left_indent(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_left_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298710 -> 0x80298720
static void @unnamed@WAD04_cpp@::reset_tag_left_indent() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_right_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298720 -> 0x8029872C
static void @unnamed@WAD04_cpp@::update_tag_right_indent() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_right_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298730 -> 0x8029873C
static void @unnamed@WAD04_cpp@::update_tag_reset_right_indent() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_right_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298740 -> 0x80298838
static void @unnamed@WAD04_cpp@::parse_tag_right_indent(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_right_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298840 -> 0x80298850
static void @unnamed@WAD04_cpp@::reset_tag_right_indent() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_tab_stop(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298850 -> 0x8029885C
static void @unnamed@WAD04_cpp@::update_tag_tab_stop() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_tab_stop(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298860 -> 0x8029886C
static void @unnamed@WAD04_cpp@::update_tag_reset_tab_stop() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_tab_stop(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298870 -> 0x80298968
static void @unnamed@WAD04_cpp@::parse_tag_tab_stop(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_tab_stop(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298970 -> 0x80298980
static void @unnamed@WAD04_cpp@::reset_tag_tab_stop() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_xspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298980 -> 0x8029898C
static void @unnamed@WAD04_cpp@::update_tag_xspace() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_xspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298990 -> 0x8029899C
static void @unnamed@WAD04_cpp@::update_tag_reset_xspace() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_xspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x802989A0 -> 0x80298A98
static void @unnamed@WAD04_cpp@::parse_tag_xspace(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_xspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298AA0 -> 0x80298AB0
static void @unnamed@WAD04_cpp@::reset_tag_xspace() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_yspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298AB0 -> 0x80298ABC
static void @unnamed@WAD04_cpp@::update_tag_yspace() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_yspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298AC0 -> 0x80298ACC
static void @unnamed@WAD04_cpp@::update_tag_reset_yspace() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_yspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298AD0 -> 0x80298BC8
static void @unnamed@WAD04_cpp@::parse_tag_yspace(class jot & a /* r29 */, class xtextbox & tb /* r30 */, class split_tag & ti /* r31 */) {
    // Local variables
    float & v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_yspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298BD0 -> 0x80298BE0
static void @unnamed@WAD04_cpp@::reset_tag_yspace() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_all(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298BE0 -> 0x80298D5C
static void @unnamed@WAD04_cpp@::update_tag_reset_all() {
}
// signature: @unnamed@WAD04_cpp@::reset_tag_all(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298D60 -> 0x80298D70
static void @unnamed@WAD04_cpp@::reset_tag_all() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_color(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298D70 -> 0x80298D8C
static void @unnamed@WAD04_cpp@::update_tag_color() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_color(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298DA0 -> 0x80298F20
static void @unnamed@WAD04_cpp@::parse_tag_color(class jot & a /* r31 */, class xtextbox & tb /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    class xColor & color; // r0
    unsigned int v; // r3

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_color(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298F20 -> 0x80298F30
static void @unnamed@WAD04_cpp@::reset_tag_color() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_font(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298F30 -> 0x80298F44
static void @unnamed@WAD04_cpp@::update_tag_font() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_font(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80298F50 -> 0x80298F64
static void @unnamed@WAD04_cpp@::update_tag_reset_font() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_font(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298F70 -> 0x80298FE8
static void @unnamed@WAD04_cpp@::parse_tag_font(class jot & a /* r31 */) {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_font(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80298FF0 -> 0x80299000
static void @unnamed@WAD04_cpp@::reset_tag_font() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_wrap(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80299000 -> 0x80299018
static void @unnamed@WAD04_cpp@::update_tag_wrap() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_wrap(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80299020 -> 0x80299038
static void @unnamed@WAD04_cpp@::update_tag_reset_wrap() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_wrap(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299040 -> 0x8029912C
static void @unnamed@WAD04_cpp@::parse_tag_wrap(class jot & a /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    unsigned int & flags; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_wrap(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299130 -> 0x80299140
static void @unnamed@WAD04_cpp@::reset_tag_wrap() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_xjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80299140 -> 0x80299158
static void @unnamed@WAD04_cpp@::update_tag_xjustify() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_xjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x80299160 -> 0x80299178
static void @unnamed@WAD04_cpp@::update_tag_reset_xjustify() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_xjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299180 -> 0x8029929C
static void @unnamed@WAD04_cpp@::parse_tag_xjustify(class jot & a /* r29 */, class split_tag & ti /* r30 */) {
    // Local variables
    unsigned int & flags; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_xjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x802992A0 -> 0x802992B0
static void @unnamed@WAD04_cpp@::reset_tag_xjustify() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_yjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x802992B0 -> 0x802992C8
static void @unnamed@WAD04_cpp@::update_tag_yjustify() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_yjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x802992D0 -> 0x802992E8
static void @unnamed@WAD04_cpp@::update_tag_reset_yjustify() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_yjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x802992F0 -> 0x80299408
static void @unnamed@WAD04_cpp@::parse_tag_yjustify(class jot & a /* r28 */, class split_tag & ti /* r29 */) {
    // Local variables
    unsigned int & flags; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_yjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299410 -> 0x80299420
static void @unnamed@WAD04_cpp@::reset_tag_yjustify() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_open_curly(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299420 -> 0x80299584
static void @unnamed@WAD04_cpp@::parse_tag_open_curly(class jot & a /* r30 */, class xtextbox & tb /* r31 */) {
    // Local variables
    char c; // r29
}
// signature: @unnamed@WAD04_cpp@::parse_tag_newline(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299590 -> 0x802996C8
static void @unnamed@WAD04_cpp@::parse_tag_newline(class jot & a /* r30 */, class xtextbox & tb /* r31 */) {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_nbsp(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x802996D0 -> 0x8029984C
static void @unnamed@WAD04_cpp@::parse_tag_nbsp(class jot & a /* r30 */, class xtextbox & tb /* r31 */) {
    // References
    // -> class callback text_cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_tab(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299850 -> 0x80299860
static void @unnamed@WAD04_cpp@::parse_tag_tab() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_word_break(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299860 -> 0x80299870
static void @unnamed@WAD04_cpp@::parse_tag_word_break() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_page_break(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299870 -> 0x80299880
static void @unnamed@WAD04_cpp@::parse_tag_page_break() {
}
// signature: @unnamed@WAD04_cpp@::render_tag_model(const xtextbox::jot &, const xtextbox &, float, float)
// Range: 0x80299880 -> 0x80299884
static void @unnamed@WAD04_cpp@::render_tag_model() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_model(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299890 -> 0x80299A94
static void @unnamed@WAD04_cpp@::parse_tag_model(class jot & a /* r29 */, class xtextbox & tb /* r30 */) {
    // Local variables
    class model_tag_context & mtc; // r7

    // References
    // -> static class callback cb;
    // -> static class model_args def_model_args;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_model(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299AA0 -> 0x80299B10
static void @unnamed@WAD04_cpp@::reset_tag_model() {
    // References
    // -> static class model_args def_model_args;
    // -> class basic_rect m_Unit;
    // -> class xVec3 m_Null;
}
// signature: @unnamed@WAD04_cpp@::render_tag_tex(const xtextbox::jot &, const xtextbox &, float, float)
// Range: 0x80299B10 -> 0x80299D84
static void @unnamed@WAD04_cpp@::render_tag_tex(class xtextbox & tb /* r28 */, float x /* f30 */, float y /* f31 */) {
    // Local variables
    class tex_tag_context & ttc; // r30
    unsigned short paramHandle; // r0
    class Sampler samplerData; // r1+0x18
    class ImmediateGeometryEntity * immediateGeometry; // r31
    class ParamData * rendParamData; // r29
    class Effect * effect; // r0
    float w; // f9
    float h; // f10
    class Matrix43 transform; // r1+0x78
    class UICorners corners; // r1+0x48
    class ImmediateRenderUIImage image; // r1+0x24
    class Renderable3D * rend; // r29
}
// signature: @unnamed@WAD04_cpp@::parse_tag_tex(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x80299F30 -> 0x8029A3A4
static void @unnamed@WAD04_cpp@::parse_tag_tex(class jot & a /* r29 */, class xtextbox & tb /* r30 */) {
    // Local variables
    class tex_tag_context & ttc; // r31
    class Referrer referrer; // r1+0x8
    class xVec2 scale; // r1+0x10

    // References
    // -> static class callback cb;
    // -> static class tex_args def_tex_args;
    // -> class basic_rect m_Unit;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_tex(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8029A3B0 -> 0x8029A420
static void @unnamed@WAD04_cpp@::reset_tag_tex() {
    // References
    // -> static class tex_args def_tex_args;
    // -> class basic_rect m_Unit;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_depot(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8029A420 -> 0x8029A4C8
static void @unnamed@WAD04_cpp@::parse_tag_depot(class jot & j /* r31 */) {
    // Local variables
    unsigned int id; // r0
    char * text; // r0

    // References
    // -> class xTextDepot gTextDepot;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_insert(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8029A4D0 -> 0x8029A580
static void @unnamed@WAD04_cpp@::parse_tag_insert(class jot & j /* r30 */) {
    // Local variables
    unsigned int id; // r0
    unsigned int len; // r1+0x8
    char * text; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_tag_insert_hash(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8029A580 -> 0x8029A634
static void @unnamed@WAD04_cpp@::parse_tag_insert_hash(class jot & j /* r30 */) {
    // Local variables
    unsigned int len; // r1+0xC
    char * text; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_tag_pop(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8029A640 -> 0x8029A66C
static void @unnamed@WAD04_cpp@::parse_tag_pop() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_timer(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8029A670 -> 0x8029A768
static void @unnamed@WAD04_cpp@::parse_tag_timer(class jot & j /* r30 */) {
    // Local variables
    class xTimer * ta; // r0
    char buffer[64]; // r1+0x8
    unsigned int sec; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_tag_counter(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x8029A770 -> 0x8029A848
static void @unnamed@WAD04_cpp@::parse_tag_counter(class jot & j /* r30 */) {
    // Local variables
    unsigned long long id; // r0:r0
    class xCounter * counter; // r0
    char * buffer; // r31
}
// signature: xtextbox::register_tags(const xtextbox::tag_type *, unsigned long)
// Range: 0x8029A850 -> 0x8029ABB0
void xtextbox::register_tags() {
    // Local variables
    class tag_type * s1; // r30
    class tag_type * s2; // r29
    class tag_type * end1; // r28
    class tag_type * end2; // r27
    class tag_type * d; // r26

    {
        // Range: 0x8029A89C -> 0x8029A944
        // Local variables
        int c; // r0
    }

    // References
    // -> static class tag_type * format_tags;
    // -> static unsigned long format_tags_size;
    // -> static class tag_type format_tags_buffer[2][128];
}
// Range: 0x8029ABB0 -> 0x8029AC58
class tag_type * xtextbox::find_format_tag(class substr & s /* r26 */, int & index /* r27 */) {
    // Local variables
    int start; // r30
    int end; // r29

    {
        // Range: 0x8029ABD0 -> 0x8029AC30
        // Local variables
        int c; // r0
        class tag_type & t; // r28
    }

    // References
    // -> static class tag_type * format_tags;
    // -> static unsigned long format_tags_size;
}
// Range: 0x8029AC60 -> 0x8029B058
static void PrintWIPText() {
    {
        // Range: 0x8029AD00 -> 0x8029B040
        // Local variables
        class basic_rect bounds; // r1+0x8
        float fadePer; // f3
    }

    // References
    // -> class callback text_cb;
    // -> static class xtextbox tb;
    // -> class xColor g_WHITE;
    // -> class xColor g_BLACK;
    // -> static class basic_rect screen_bounds;
    // -> static float wipTimer;
    // -> float gRealTimeElapsed;
    // -> static char * TXT_WIP;
}
