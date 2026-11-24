/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xGameFont.cpp
*/
static int FontCacheTotal; // size: 0x4, address: 0x807E5668
static class SimpleFontCache FontCache[16]; // size: 0x100, address: 0x807E5670
static class jot_block jot_blocks[64]; // size: 0xE200, address: 0x807E5770
static class jot_line_block jot_line_blocks[64]; // size: 0x2200, address: 0x807F3970
static class context_buffer_block context_buffer_blocks[64]; // size: 0x1300, address: 0x807F5B70
static class layout * gCurrentLayout; // size: 0x4, address: 0x807F6E70
static class model_cache_entry model_cache[8]; // size: 0x80, address: 0x807F6E78
static unsigned int next_order; // size: 0x4, address: 0x807F6EF8
static class EntityHandle * DefaultFont; // size: 0x4, address: 0x807F6EFC
static class EntityHandle * CurrentFont; // size: 0x4, address: 0x807F6F00
static unsigned long long CurrentFontUID; // size: 0x8, address: 0x807F6F08
static class Referrer CNGTReferrer; // size: 0x1, address: 0x807F6F14
static class substr text_delims; // size: 0x8, address: 0x806D2630
static class tex_args def_tex_args; // size: 0x38, address: 0x807F6F18
static class model_args def_model_args; // size: 0x2C, address: 0x807F6F50
static class tl_cache_entry tl_cache[16]; // size: 0x1300, address: 0x807F6F80
static class Time decay_time; // size: 0x8, address: 0x807F8280
bool japanese_word_breaking; // size: 0x1, address: 0x807F8288
class callback text_cb; // size: 0xC, address: 0x806D2638
bool disable_text_stats; // size: 0x1, address: 0x807F8289
static class substr arg_buffer[32]; // size: 0x100, address: 0x807F8290
static class tag_entry entry_buffer[16]; // size: 0x140, address: 0x807F8390
static class callback cb; // size: 0xC, address: 0x806D2674
static class callback cb; // size: 0xC, address: 0x806D2684
static class callback cb; // size: 0xC, address: 0x806D2690
static class callback cb; // size: 0xC, address: 0x806D269C
static class callback cb; // size: 0xC, address: 0x806D26A8
static class callback cb; // size: 0xC, address: 0x806D26B4
static class callback cb; // size: 0xC, address: 0x806D26C0
static class callback cb; // size: 0xC, address: 0x806D26CC
static class callback cb; // size: 0xC, address: 0x806D26D8
static class callback cb; // size: 0xC, address: 0x806D26E4
static class callback cb; // size: 0xC, address: 0x806D26F0
static class callback cb; // size: 0xC, address: 0x806D26FC
static class callback cb; // size: 0xC, address: 0x806D2708
static class callback cb; // size: 0xC, address: 0x806D2714
static class callback cb; // size: 0xC, address: 0x806D2720
static class callback cb; // size: 0xC, address: 0x806D272C
static class callback cb; // size: 0xC, address: 0x806D2738
static class callback cb; // size: 0xC, address: 0x806D2744
static class callback cb; // size: 0xC, address: 0x806D2750
static class callback cb; // size: 0xC, address: 0x806D275C
static class callback cb; // size: 0xC, address: 0x806D2768
static class callback cb; // size: 0xC, address: 0x806D2774
static class callback cb; // size: 0xC, address: 0x806D2780
static class callback cb; // size: 0xC, address: 0x806D278C
static class callback cb; // size: 0xC, address: 0x806D2798
static class callback cb; // size: 0xC, address: 0x806D27A4
static class callback cb; // size: 0xC, address: 0x806D27B0
static class callback cb; // size: 0xC, address: 0x806D27BC
static class callback cb; // size: 0xC, address: 0x806D27C8
static class callback cb; // size: 0xC, address: 0x806D27D4
static class callback cb; // size: 0xC, address: 0x806D27E0
static class callback cb; // size: 0xC, address: 0x806D27EC
static class callback cb; // size: 0xC, address: 0x806D27F8
static class callback cb; // size: 0xC, address: 0x806D2804
static class callback cb; // size: 0xC, address: 0x806D2810
static class callback cb; // size: 0xC, address: 0x806D281C
static class callback cb; // size: 0xC, address: 0x806D2828
static class callback cb; // size: 0xC, address: 0x806D2834
static class callback cb; // size: 0xC, address: 0x806D2840
static class callback cb; // size: 0xC, address: 0x806D284C
static class callback cb; // size: 0xC, address: 0x806D2858
static class callback cb; // size: 0xC, address: 0x806D2864
static class callback cb; // size: 0xC, address: 0x806D2888
static class tag_type format_tags_buffer[2][128]; // size: 0x1400, address: 0x807034A8
static class tag_type * format_tags; // size: 0x4, address: 0x807048A8
static unsigned long format_tags_size; // size: 0x4, address: 0x807048AC
static char * TXT_WIP; // size: 0x4, address: 0x807F84D0
static float wipTimer; // size: 0x4, address: 0x807F84D4
static class xtextbox tb; // size: 0x88, address: 0x807F84D8
// Range: 0x801E06E0 -> 0x801E06F0
void xGameFontCache::ResetCache() {
    // References
    // -> static int FontCacheTotal;
}
// signature: @unnamed@WAD04_cpp@::load_model(unsigned long long)
// Range: 0x801E06F0 -> 0x801E08E4
static class xModelInstance * @unnamed@WAD04_cpp@::load_model() {
    // Local variables
    unsigned long oldest; // r10
    class model_cache_entry * e; // r7
    class xModelInstance * model; // r3

    {
        // Range: 0x801E070C -> 0x801E0764
        // Local variables
        unsigned long i; // r11
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> static class model_cache_entry model_cache[8];
    // -> static unsigned int next_order;
}
// Range: 0x801E08F0 -> 0x801E0C04
static class Font * @unnamed@WAD04_cpp@::CNGTGetFont(unsigned long long fontUID /* r28:r27 */) {
    {
        // Range: 0x801E0930 -> 0x801E09F8
        // Local variables
        unsigned int defaultFontHash; // r25

        {
            // Range: 0x801E0948 -> 0x801E09F8
            // Local variables
            unsigned long long defaultFontUID; // r5:r4
            class ScadMgr * scadMgr; // r26
        }
    }
    {
        // Range: 0x801E0A50 -> 0x801E0BD0
        // Local variables
        class ScadMgr * scadMgr; // r29
    }

    // References
    // -> static class SimpleFontCache FontCache[16];
    // -> static int FontCacheTotal;
    // -> static unsigned long long CurrentFontUID;
    // -> static class EntityHandle * CurrentFont;
    // -> static class EntityHandle * DefaultFont;
}
// signature: @unnamed@WAD04_cpp@::CNGTRenderString(const xfont &, const char *, unsigned long, float, float, float, const xColor_tag &, unsigned char)
// Range: 0x801E0C10 -> 0x801E0DE4
static void @unnamed@WAD04_cpp@::CNGTRenderString(class xfont * font /* r25 */, unsigned long length /* r26 */, float x /* f29 */, float y /* f30 */, float z /* f31 */, class xColor_tag * color /* r27 */, unsigned char brightness /* r28 */) {
    // Local variables
    char toPrint[1024]; // r1+0x70
    class RenderTextArgs args; // r1+0x8

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x801E0DF0 -> 0x801E0FD4
static class basic_rect @unnamed@WAD04_cpp@::CNGTGetBound(class xfont * font /* r29 */, char * string /* r30 */, unsigned long length /* r31 */) {
    // Local variables
    class Font * currentFont; // r0
    class basic_rect toReturn; // r1+0x8
    char * tempString; // r4
}
// Range: 0x801E0FE0 -> 0x801E1348
static unsigned long @unnamed@WAD04_cpp@::parse_split_tag(class split_tag * ti /* r31 */) {
    // Local variables
    class substr s; // r1+0x8
    char c; // r0

    // References
    // -> static class substr text_delims;
}
// signature: @unnamed@WAD04_cpp@::parse_next_tag_jot(xtextbox::jot &, const xtextbox &, const xtextbox &, const char *, unsigned long)
// Range: 0x801E1350 -> 0x801E14C8
static char * @unnamed@WAD04_cpp@::parse_next_tag_jot(class jot * a /* r25 */, class xtextbox * tb /* r26 */, class xtextbox * ctb /* r27 */, char * text /* r28 */) {
    // Local variables
    class split_tag ti; // r1+0x30
    unsigned long size; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_next_text_jot(xtextbox::jot &, const xtextbox &, const xtextbox &, const char *, unsigned long)
// Range: 0x801E14D0 -> 0x801E18A4
static char * @unnamed@WAD04_cpp@::parse_next_text_jot(class jot * a /* r29 */, class xtextbox * tb /* r30 */) {
    // Local variables
    char * nextChar; // r5
    bool hasSpaceChar; // r0

    // References
    // -> class callback text_cb;
    // -> bool japanese_word_breaking;
}
// signature: @unnamed@WAD04_cpp@::load_tex_args(@unnamed@WAD04_cpp@::tex_args &, const substr &)
// Range: 0x801E18B0 -> 0x801E1E60
static void @unnamed@WAD04_cpp@::load_tex_args(class tex_args * ta /* r29 */) {
    // Local variables
    class tag_entry_list el; // r1+0xE0

    {
        // Range: 0x801E18DC -> 0x801E1984
        // Local variables
        unsigned long long id; // r3:r4
        class substr * name; // r25
    }
}
// signature: @unnamed@WAD04_cpp@::load_model_args(@unnamed@WAD04_cpp@::model_args &, const substr &)
// Range: 0x801E1E60 -> 0x801E21C0
static void @unnamed@WAD04_cpp@::load_model_args(class model_args * ma /* r30 */) {
    // Local variables
    class tag_entry_list el; // r1+0x58

    {
        // Range: 0x801E1E8C -> 0x801E1ED4
        // Local variables
        unsigned long long id; // r0:r0
        class substr * name; // r4
    }
}
// Range: 0x801E21C0 -> 0x801E2B24
static unsigned int @unnamed@WAD04_cpp@::clear_oldest_layout(bool withData /* r29 */) {
    // Local variables
    unsigned int index; // r30

    {
        // Range: 0x801E22EC -> 0x801E27B4
        // Local variables
        unsigned long i; // r10
    }

    // References
    // -> static class basic_rect screen_bounds;
    // -> class callback text_cb;
    // -> class xColor_tag g_WHITE;
    // -> class xColor_tag g_BLACK;
    // -> static class Time decay_time;
    // -> long long startupTicks;
    // -> static class layout * gCurrentLayout;
    // -> static class tl_cache_entry tl_cache[16];
}
// signature: xtextbox::text_render(const xtextbox::jot &, const xtextbox &, float, float)
// Range: 0x801E2BF0 -> 0x801E2C14
void xtextbox::text_render(class jot * j /* r5 */, class xtextbox * tb /* r7 */) {
}
// signature: xtextbox::set_text(const char *)
// Range: 0x801E2C20 -> 0x801E2C58
void xtextbox::set_text() {
}
// signature: xtextbox::set_text(const char **, const unsigned long *, unsigned long)
// Range: 0x801E2C60 -> 0x801E2D28
void xtextbox::set_text(class xtextbox * this /* r27 */, unsigned long size /* r28 */) {
    {
        // Range: 0x801E2CA0 -> 0x801E2CB8
        // Local variables
        unsigned long i; // r31
    }
    {
        // Range: 0x801E2CDC -> 0x801E2CE4
        // Local variables
        unsigned long i; // r29
    }
}
// Range: 0x801E2D30 -> 0x801E2EE4
void xtextbox::layout::free_unused_blocks() {
    // Local variables
    unsigned long i; // r8
    class jot_block * j; // r4
    class jot_line_block * jl; // r3
}
// Range: 0x801E2EF0 -> 0x801E3244
class layout * xtextbox::temp_layout(class xtextbox * this /* r29 */, bool cache /* r30 */) const {
    // Local variables
    bool refresh; // r28
    unsigned long index; // r27
    class tl_cache_entry * e; // r31

    // References
    // -> static class tl_cache_entry tl_cache[16];
    // -> long long startupTicks;
}
// signature: xtextbox::render(xtextbox::layout &, int, int) const
// Range: 0x801E3250 -> 0x801E3260
void xtextbox::render(class xtextbox * this /* r0 */) const {
}
// signature: xtextbox::yextent(float, int &, const xtextbox::layout &, int, int) const
// Range: 0x801E3260 -> 0x801E3270
float xtextbox::yextent() const {
}
// signature: xtextbox::read_tag(const substr &)
// Range: 0x801E3270 -> 0x801E3654
class tag_entry_list xtextbox::read_tag() {
    // Local variables
    unsigned long entries_used; // r27
    class substr it; // r1+0x20
    class substr delims; // r1+0x18
    class substr sub_delims; // r1+0x10
    class tag_entry_list ret; // r1+0x8

    {
        // Range: 0x801E3334 -> 0x801E3624
        // Local variables
        char * d; // r0
        class tag_entry * entry; // r26

        {
            // Range: 0x801E3334 -> 0x801E3618
            // Local variables
            char * d; // r0
        }
    }

    // References
    // -> static class substr arg_buffer[32];
    // -> static class tag_entry entry_buffer[16];
}
// Range: 0x801E3660 -> 0x801E39C4
void xtextbox::clear_layout_cache() {
    {
        // Range: 0x801E3680 -> 0x801E3680
        // Local variables
        unsigned long index; // r7
    }

    // References
    // -> class callback text_cb;
    // -> static class basic_rect screen_bounds;
    // -> static class tl_cache_entry tl_cache[16];
    // -> class xColor_tag g_WHITE;
    // -> class xColor_tag g_BLACK;
}
// signature: xtextbox::layout::trim_line(xtextbox::jot_line &)
// Range: 0x801E39D0 -> 0x801E3D34
void xtextbox::layout::trim_line() {
    {
        // Range: 0x801E39D0 -> 0x801E3B80
        // Local variables
        unsigned long i; // r5
    }
    {
        // Range: 0x801E3B88 -> 0x801E3D28
        // Local variables
        unsigned long i; // r5
    }
}
// signature: xtextbox::layout::merge_line(xtextbox::jot_line &)
// Range: 0x801E3D40 -> 0x801E40BC
void xtextbox::layout::merge_line() {
    // Local variables
    unsigned long d; // r5

    {
        // Range: 0x801E3D50 -> 0x801E3F70
        // Local variables
        unsigned long i; // r6
    }
}
// signature: xtextbox::layout::bound_line(xtextbox::jot_line &)
// Range: 0x801E40C0 -> 0x801E4260
void xtextbox::layout::bound_line() {
    {
        // Range: 0x801E40C4 -> 0x801E4144
        // Local variables
        unsigned long i; // r7
    }
    {
        // Range: 0x801E4154 -> 0x801E41E8
        // Local variables
        unsigned long i; // r7

        {
            // Range: 0x801E4154 -> 0x801E41E8
            // Local variables
            float total_height; // f1
        }
    }
}
// Range: 0x801E4260 -> 0x801E4478
bool xtextbox::layout::fit_line(class layout * this /* r29 */, bool isLastLine /* r30 */) {
    {
        // Range: 0x801E432C -> 0x801E442C
        // Local variables
        unsigned long i; // r7
    }
}
// Range: 0x801E4480 -> 0x801E536C
void xtextbox::layout::calc(class layout * this /* r15 */, class xtextbox * ctb /* r1+0x8 */, unsigned long start_text /* r18 */) {
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
        // Range: 0x801E47D4 -> 0x801E5234
        {
            // Range: 0x801E47D4 -> 0x801E47D4
            // Local variables
            unsigned long context_size; // r21
        }
    }
    {
        // Range: 0x801E52A4 -> 0x801E5314
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
// Range: 0x801E5370 -> 0x801E56F8
char * xtextbox::layout::RenderToString(class layout * this /* r23 */, class xtextbox * ctb /* r24 */, int begin_jot /* r25 */, int end_jot /* r26 */, char * dest /* r27 */, unsigned long destSize /* r28 */) {
    // Local variables
    char * itD; // r31
    unsigned long destLen; // r30
    unsigned long begin_line; // r29
    float top; // f0
    float x; // f0
    float y; // f0

    {
        // Range: 0x801E555C -> 0x801E55C8
        // Local variables
        unsigned long i; // r21
    }
    {
        // Range: 0x801E55FC -> 0x801E55FC
        // Local variables
        int i; // reg65535
    }
}
// Range: 0x801E5700 -> 0x801E5C30
void xtextbox::layout::render(class layout * this /* r26 */, class xtextbox * ctb /* r27 */, int begin_jot /* r28 */, int end_jot /* r29 */) {
    // Local variables
    unsigned long begin_line; // r31
    float top; // f29
    unsigned long li; // r31
    int line_last; // r30
    float x; // f28
    float y; // f27

    {
        // Range: 0x801E58F4 -> 0x801E5960
        // Local variables
        unsigned long i; // r25
    }
    {
        // Range: 0x801E59AC -> 0x801E5BE4
        // Local variables
        int i; // reg65535

        {
            // Range: 0x801E59AC -> 0x801E5BE4
            {
                // Range: 0x801E59AC -> 0x801E5B38
                // Local variables
                unsigned int yj; // r0
                unsigned int xj; // r4
            }
        }
    }
}
// signature: xtextbox::layout::yextent(float, int &, int, int) const
// Range: 0x801E5C30 -> 0x801E5E64
float xtextbox::layout::yextent(float max /* f2 */) const {
    // Local variables
    unsigned long begin_line; // r12
    float top; // f4
    unsigned long i; // r31
}
// Range: 0x801E5E70 -> 0x801E6078
bool xtextbox::layout::changed(class layout * this /* r28 */, class xtextbox * ctb /* r29 */) {
    // Local variables
    unsigned int flags1; // r8
    unsigned int flags2; // r9

    {
        // Range: 0x801E5F58 -> 0x801E6054
        // Local variables
        int i; // r30

        {
            // Range: 0x801E5F58 -> 0x801E6054
            // Local variables
            unsigned int val; // r0
            unsigned int oldval; // r0
        }
    }
}
// signature: @unnamed@WAD04_cpp@::update_tag_alpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6080 -> 0x801E60B8
static void @unnamed@WAD04_cpp@::update_tag_alpha() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_alpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E60C0 -> 0x801E60CC
static void @unnamed@WAD04_cpp@::update_tag_reset_alpha() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_alpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E60D0 -> 0x801E6208
static void @unnamed@WAD04_cpp@::parse_tag_alpha(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_alpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6210 -> 0x801E6220
static void @unnamed@WAD04_cpp@::reset_tag_alpha() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_red(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6220 -> 0x801E6258
static void @unnamed@WAD04_cpp@::update_tag_red() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_red(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6260 -> 0x801E626C
static void @unnamed@WAD04_cpp@::update_tag_reset_red() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_red(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6270 -> 0x801E63A8
static void @unnamed@WAD04_cpp@::parse_tag_red(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_red(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E63B0 -> 0x801E63C0
static void @unnamed@WAD04_cpp@::reset_tag_red() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_green(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E63C0 -> 0x801E63F8
static void @unnamed@WAD04_cpp@::update_tag_green() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_green(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6400 -> 0x801E640C
static void @unnamed@WAD04_cpp@::update_tag_reset_green() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_green(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6410 -> 0x801E6548
static void @unnamed@WAD04_cpp@::parse_tag_green(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_green(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6550 -> 0x801E6560
static void @unnamed@WAD04_cpp@::reset_tag_green() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_blue(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6560 -> 0x801E6598
static void @unnamed@WAD04_cpp@::update_tag_blue() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_blue(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E65A0 -> 0x801E65AC
static void @unnamed@WAD04_cpp@::update_tag_reset_blue() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_blue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E65B0 -> 0x801E66E8
static void @unnamed@WAD04_cpp@::parse_tag_blue(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_blue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E66F0 -> 0x801E6700
static void @unnamed@WAD04_cpp@::reset_tag_blue() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_salpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6700 -> 0x801E6738
static void @unnamed@WAD04_cpp@::update_tag_salpha() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_salpha(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6740 -> 0x801E674C
static void @unnamed@WAD04_cpp@::update_tag_reset_salpha() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_salpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6750 -> 0x801E6888
static void @unnamed@WAD04_cpp@::parse_tag_salpha(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_salpha(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6890 -> 0x801E68A0
static void @unnamed@WAD04_cpp@::reset_tag_salpha() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_sred(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E68A0 -> 0x801E68D8
static void @unnamed@WAD04_cpp@::update_tag_sred() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_sred(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E68E0 -> 0x801E68EC
static void @unnamed@WAD04_cpp@::update_tag_reset_sred() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_sred(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E68F0 -> 0x801E6A28
static void @unnamed@WAD04_cpp@::parse_tag_sred(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_sred(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6A30 -> 0x801E6A40
static void @unnamed@WAD04_cpp@::reset_tag_sred() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_sgreen(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6A40 -> 0x801E6A78
static void @unnamed@WAD04_cpp@::update_tag_sgreen() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_sgreen(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6A80 -> 0x801E6A8C
static void @unnamed@WAD04_cpp@::update_tag_reset_sgreen() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_sgreen(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6A90 -> 0x801E6BC8
static void @unnamed@WAD04_cpp@::parse_tag_sgreen(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_sgreen(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6BD0 -> 0x801E6BE0
static void @unnamed@WAD04_cpp@::reset_tag_sgreen() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_sblue(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6BE0 -> 0x801E6C18
static void @unnamed@WAD04_cpp@::update_tag_sblue() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_sblue(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6C20 -> 0x801E6C2C
static void @unnamed@WAD04_cpp@::update_tag_reset_sblue() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_sblue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6C30 -> 0x801E6D68
static void @unnamed@WAD04_cpp@::parse_tag_sblue(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_sblue(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6D70 -> 0x801E6D80
static void @unnamed@WAD04_cpp@::reset_tag_sblue() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_width(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6D80 -> 0x801E6D8C
static void @unnamed@WAD04_cpp@::update_tag_width() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_width(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6D90 -> 0x801E6D9C
static void @unnamed@WAD04_cpp@::update_tag_reset_width() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_width(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6DA0 -> 0x801E6E9C
static void @unnamed@WAD04_cpp@::parse_tag_width(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_width(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6EA0 -> 0x801E6EB0
static void @unnamed@WAD04_cpp@::reset_tag_width() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_height(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6EB0 -> 0x801E6EBC
static void @unnamed@WAD04_cpp@::update_tag_height() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_height(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6EC0 -> 0x801E6ECC
static void @unnamed@WAD04_cpp@::update_tag_reset_height() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_height(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6ED0 -> 0x801E6FCC
static void @unnamed@WAD04_cpp@::parse_tag_height(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_height(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E6FD0 -> 0x801E6FE0
static void @unnamed@WAD04_cpp@::reset_tag_height() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_left_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6FE0 -> 0x801E6FEC
static void @unnamed@WAD04_cpp@::update_tag_left_indent() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_left_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E6FF0 -> 0x801E6FFC
static void @unnamed@WAD04_cpp@::update_tag_reset_left_indent() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_left_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7000 -> 0x801E70FC
static void @unnamed@WAD04_cpp@::parse_tag_left_indent(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_left_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7100 -> 0x801E7110
static void @unnamed@WAD04_cpp@::reset_tag_left_indent() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_right_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7110 -> 0x801E711C
static void @unnamed@WAD04_cpp@::update_tag_right_indent() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_right_indent(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7120 -> 0x801E712C
static void @unnamed@WAD04_cpp@::update_tag_reset_right_indent() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_right_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7130 -> 0x801E722C
static void @unnamed@WAD04_cpp@::parse_tag_right_indent(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_right_indent(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7230 -> 0x801E7240
static void @unnamed@WAD04_cpp@::reset_tag_right_indent() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_tab_stop(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7240 -> 0x801E724C
static void @unnamed@WAD04_cpp@::update_tag_tab_stop() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_tab_stop(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7250 -> 0x801E725C
static void @unnamed@WAD04_cpp@::update_tag_reset_tab_stop() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_tab_stop(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7260 -> 0x801E735C
static void @unnamed@WAD04_cpp@::parse_tag_tab_stop(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_tab_stop(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7360 -> 0x801E7370
static void @unnamed@WAD04_cpp@::reset_tag_tab_stop() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_xspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7370 -> 0x801E737C
static void @unnamed@WAD04_cpp@::update_tag_xspace() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_xspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7380 -> 0x801E738C
static void @unnamed@WAD04_cpp@::update_tag_reset_xspace() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_xspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7390 -> 0x801E748C
static void @unnamed@WAD04_cpp@::parse_tag_xspace(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_xspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7490 -> 0x801E74A0
static void @unnamed@WAD04_cpp@::reset_tag_xspace() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_yspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E74A0 -> 0x801E74AC
static void @unnamed@WAD04_cpp@::update_tag_yspace() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_yspace(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E74B0 -> 0x801E74BC
static void @unnamed@WAD04_cpp@::update_tag_reset_yspace() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_yspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E74C0 -> 0x801E75BC
static void @unnamed@WAD04_cpp@::parse_tag_yspace(class jot * a /* r28 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    float * v; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_yspace(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E75C0 -> 0x801E75D0
static void @unnamed@WAD04_cpp@::reset_tag_yspace() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_all(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E75D0 -> 0x801E7754
static void @unnamed@WAD04_cpp@::update_tag_reset_all() {
}
// signature: @unnamed@WAD04_cpp@::reset_tag_all(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7760 -> 0x801E7770
static void @unnamed@WAD04_cpp@::reset_tag_all() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_color(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7770 -> 0x801E778C
static void @unnamed@WAD04_cpp@::update_tag_color() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_color(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7790 -> 0x801E779C
static void @unnamed@WAD04_cpp@::update_tag_reset_color() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_color(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E77A0 -> 0x801E7920
static void @unnamed@WAD04_cpp@::parse_tag_color(class jot * a /* r31 */, class xtextbox * tb /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    class xColor_tag * color; // r0
    unsigned int v; // r3

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_color(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7920 -> 0x801E7930
static void @unnamed@WAD04_cpp@::reset_tag_color() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_font(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7930 -> 0x801E7944
static void @unnamed@WAD04_cpp@::update_tag_font() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_font(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7950 -> 0x801E7964
static void @unnamed@WAD04_cpp@::update_tag_reset_font() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_font(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7970 -> 0x801E79E8
static void @unnamed@WAD04_cpp@::parse_tag_font(class jot * a /* r31 */) {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_font(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E79F0 -> 0x801E7A00
static void @unnamed@WAD04_cpp@::reset_tag_font() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_wrap(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7A00 -> 0x801E7A18
static void @unnamed@WAD04_cpp@::update_tag_wrap() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_wrap(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7A20 -> 0x801E7A38
static void @unnamed@WAD04_cpp@::update_tag_reset_wrap() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_wrap(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7A40 -> 0x801E7B2C
static void @unnamed@WAD04_cpp@::parse_tag_wrap(class jot * a /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    unsigned int * flags; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_wrap(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7B30 -> 0x801E7B40
static void @unnamed@WAD04_cpp@::reset_tag_wrap() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_xjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7B40 -> 0x801E7B58
static void @unnamed@WAD04_cpp@::update_tag_xjustify() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_xjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7B60 -> 0x801E7B78
static void @unnamed@WAD04_cpp@::update_tag_reset_xjustify() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_xjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7B80 -> 0x801E7C9C
static void @unnamed@WAD04_cpp@::parse_tag_xjustify(class jot * a /* r29 */, class split_tag * ti /* r30 */) {
    // Local variables
    unsigned int * flags; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_xjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7CA0 -> 0x801E7CB0
static void @unnamed@WAD04_cpp@::reset_tag_xjustify() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::update_tag_yjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7CB0 -> 0x801E7CC8
static void @unnamed@WAD04_cpp@::update_tag_yjustify() {
}
// signature: @unnamed@WAD04_cpp@::update_tag_reset_yjustify(const xtextbox::jot &, xtextbox &, const xtextbox &)
// Range: 0x801E7CD0 -> 0x801E7CE8
static void @unnamed@WAD04_cpp@::update_tag_reset_yjustify() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_yjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7CF0 -> 0x801E7E08
static void @unnamed@WAD04_cpp@::parse_tag_yjustify(class jot * a /* r28 */, class split_tag * ti /* r29 */) {
    // Local variables
    unsigned int * flags; // r0

    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_yjustify(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7E10 -> 0x801E7E20
static void @unnamed@WAD04_cpp@::reset_tag_yjustify() {
    // References
    // -> static class callback cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_open_curly(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7E20 -> 0x801E7F84
static void @unnamed@WAD04_cpp@::parse_tag_open_curly(class jot * a /* r30 */, class xtextbox * tb /* r31 */) {
    // Local variables
    char c; // r29
}
// signature: @unnamed@WAD04_cpp@::parse_tag_newline(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E7F90 -> 0x801E80C8
static void @unnamed@WAD04_cpp@::parse_tag_newline(class jot * a /* r30 */, class xtextbox * tb /* r31 */) {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_nbsp(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E80D0 -> 0x801E824C
static void @unnamed@WAD04_cpp@::parse_tag_nbsp(class jot * a /* r30 */, class xtextbox * tb /* r31 */) {
    // References
    // -> class callback text_cb;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_tab(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E8250 -> 0x801E8260
static void @unnamed@WAD04_cpp@::parse_tag_tab() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_word_break(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E8260 -> 0x801E8270
static void @unnamed@WAD04_cpp@::parse_tag_word_break() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_page_break(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E8270 -> 0x801E8280
static void @unnamed@WAD04_cpp@::parse_tag_page_break() {
}
// signature: @unnamed@WAD04_cpp@::render_tag_model(const xtextbox::jot &, const xtextbox &, float, float)
// Range: 0x801E8280 -> 0x801E8284
static void @unnamed@WAD04_cpp@::render_tag_model() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_model(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E8290 -> 0x801E84A0
static void @unnamed@WAD04_cpp@::parse_tag_model(class jot * a /* r28 */, class xtextbox * tb /* r29 */) {
    // Local variables
    class model_tag_context * mtc; // r5

    // References
    // -> static class callback cb;
    // -> static class model_args def_model_args;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_model(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E84A0 -> 0x801E8510
static void @unnamed@WAD04_cpp@::reset_tag_model() {
    // References
    // -> static class model_args def_model_args;
    // -> class basic_rect m_Unit;
    // -> class xVec3 m_Null;
}
// signature: @unnamed@WAD04_cpp@::render_tag_tex(const xtextbox::jot &, const xtextbox &, float, float)
// Range: 0x801E8510 -> 0x801E8764
static void @unnamed@WAD04_cpp@::render_tag_tex(class xtextbox * tb /* r27 */, float x /* f30 */, float y /* f31 */) {
    // Local variables
    class tex_tag_context * ttc; // r29
    unsigned short paramHandle; // r0
    class Sampler samplerData; // r1+0x18
    class ImmediateGeometryEntity * immediateGeometry; // r31
    class ParamData * rendParamData; // r28
    class Effect * effect; // r0
    float w; // f10
    float h; // f9
    class Matrix43 transform; // r1+0x78
    class UICorners corners; // r1+0x48
    class ImmediateRenderUIImage image; // r1+0x24
    class Renderable3D * rend; // r28
}
// signature: @unnamed@WAD04_cpp@::parse_tag_tex(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E8970 -> 0x801E8E18
static void @unnamed@WAD04_cpp@::parse_tag_tex(class jot * a /* r28 */, class xtextbox * tb /* r29 */) {
    // Local variables
    class tex_tag_context * ttc; // r30
    class ScadMgr * scadMgr; // r25
    class xVec2 scale; // r1+0x8

    // References
    // -> static class callback cb;
    // -> static class tex_args def_tex_args;
    // -> class basic_rect m_Unit;
}
// signature: @unnamed@WAD04_cpp@::reset_tag_tex(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E8E20 -> 0x801E8E90
static void @unnamed@WAD04_cpp@::reset_tag_tex() {
    // References
    // -> static class tex_args def_tex_args;
    // -> class basic_rect m_Unit;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_depot(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E8E90 -> 0x801E8F38
static void @unnamed@WAD04_cpp@::parse_tag_depot(class jot * j /* r31 */) {
    // Local variables
    unsigned int id; // r0
    char * text; // r0

    // References
    // -> class xTextDepot gTextDepot;
}
// signature: @unnamed@WAD04_cpp@::parse_tag_insert(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E8F40 -> 0x801E8FF0
static void @unnamed@WAD04_cpp@::parse_tag_insert(class jot * j /* r30 */) {
    // Local variables
    unsigned int id; // r0
    unsigned int len; // r1+0x8
    char * text; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_tag_insert_hash(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E8FF0 -> 0x801E90A4
static void @unnamed@WAD04_cpp@::parse_tag_insert_hash(class jot * j /* r30 */) {
    // Local variables
    unsigned int len; // r1+0xC
    char * text; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_tag_pop(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E90B0 -> 0x801E90DC
static void @unnamed@WAD04_cpp@::parse_tag_pop() {
}
// signature: @unnamed@WAD04_cpp@::parse_tag_timer(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E90E0 -> 0x801E91D8
static void @unnamed@WAD04_cpp@::parse_tag_timer(class jot * j /* r30 */) {
    // Local variables
    class xTimer * ta; // r0
    char buffer[64]; // r1+0x8
    unsigned int sec; // r0
}
// signature: @unnamed@WAD04_cpp@::parse_tag_counter(xtextbox::jot &, const xtextbox &, const xtextbox &, const xtextbox::split_tag &)
// Range: 0x801E91E0 -> 0x801E92BC
static void @unnamed@WAD04_cpp@::parse_tag_counter(class jot * j /* r30 */) {
    // Local variables
    unsigned long long id; // r0:r0
    class xCounter * counter; // r0
    char * buffer; // r31
}
// signature: xtextbox::register_tags(const xtextbox::tag_type *, unsigned long)
// Range: 0x801E92C0 -> 0x801E9620
void xtextbox::register_tags() {
    // Local variables
    class tag_type * s1; // r30
    class tag_type * s2; // r29
    class tag_type * end1; // r28
    class tag_type * end2; // r27
    class tag_type * d; // r26

    {
        // Range: 0x801E930C -> 0x801E93B4
        // Local variables
        int c; // r0
    }

    // References
    // -> static class tag_type * format_tags;
    // -> static unsigned long format_tags_size;
    // -> static class tag_type format_tags_buffer[2][128];
}
// Range: 0x801E9620 -> 0x801E96C8
class tag_type * xtextbox::find_format_tag(class substr * s /* r26 */, int * index /* r27 */) {
    // Local variables
    int start; // r30
    int end; // r29

    {
        // Range: 0x801E9640 -> 0x801E96A0
        // Local variables
        int c; // r0
        class tag_type * t; // r28
    }

    // References
    // -> static class tag_type * format_tags;
    // -> static unsigned long format_tags_size;
}
// Range: 0x801E96D0 -> 0x801E9A80
static void PrintWIPText() {
    {
        // Range: 0x801E9770 -> 0x801E9A68
        // Local variables
        class basic_rect bounds; // r1+0x8
        float fadePer; // f3
    }

    // References
    // -> class callback text_cb;
    // -> static class xtextbox tb;
    // -> class xColor_tag g_BLACK;
    // -> class xColor_tag g_WHITE;
    // -> static class basic_rect screen_bounds;
    // -> static float wipTimer;
    // -> float gRealTimeElapsed;
    // -> static char * TXT_WIP;
}
