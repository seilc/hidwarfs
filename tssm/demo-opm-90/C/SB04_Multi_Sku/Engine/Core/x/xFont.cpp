/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DE860 -> 0x003DE8E4
*/
// Range: 0x3DE860 -> 0x3DE8E4
void xFontInitModelCache() {
    /* anonymous block */ {
        // Range: 0x3DE860 -> 0x3DE8E4
        class model_cache_entry & e; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DE8F0 -> 0x003DEDD8
*/
// Range: 0x3DE8F0 -> 0x3DEDD8
void xFontPrintTopText() {
    /* anonymous block */ {
        // Range: 0x3DE8F0 -> 0x3DEDD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DEDE0 -> 0x003DF4A4
*/
// Range: 0x3DEDE0 -> 0x3DF4A4
static void PrintWIPText() {
    /* anonymous block */ {
        // Range: 0x3DEDE0 -> 0x3DF4A4
        float fadePer; // r3
        class basic_rect bounds; // r29+0x1D0
        class xtextbox tb; // @ 0x006CB860
        signed char @17822; // @ 0x00637F90
        float wipTimer; // @ 0x00637F8C
        char * TXT_WIP; // @ 0x00637F88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DF4B0 -> 0x003DFA64
*/
// Range: 0x3DF4B0 -> 0x3DFA64
void render_fill_rect(class basic_rect & bounds /* r19 */, class xColor_tag color /* r29+0x6C */) {
    /* anonymous block */ {
        // Range: 0x3DF4B0 -> 0x3DFA64
        float rcz; // r21
        float nsz; // r20
        class RwSky2DVertex vert[4]; // r29+0x80
        class basic_rect r; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DFA70 -> 0x003DFB44
*/
// Range: 0x3DFA70 -> 0x3DFB44
class tag_type * find_format_tag(class substr & s /* r19 */, signed int & index /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3DFA70 -> 0x3DFB44
        signed int start; // r17
        signed int end; // r16
        class tag_type & t; // r20
        signed int c; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DFB50 -> 0x003DFD58
*/
// Range: 0x3DFB50 -> 0x3DFD58
void register_tags(class tag_type * t /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3DFB50 -> 0x3DFD58
        class tag_type * s1; // r20
        class tag_type * s2; // r19
        class tag_type * end1; // r2
        class tag_type * end2; // r2
        class tag_type * d; // r18
        signed int c; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DFD60 -> 0x003DFE3C
*/
// Range: 0x3DFD60 -> 0x3DFE3C
static void parse_tag_counter(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3DFD60 -> 0x3DFE3C
        unsigned int id; // r2
        class _xCounter * counter; // r2
        char * buffer; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DFE40 -> 0x003DFFE4
*/
// Range: 0x3DFE40 -> 0x3DFFE4
static void parse_tag_timer(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3DFE40 -> 0x3DFFE4
        unsigned int id; // r2
        class xTimer * ta; // r2
        char buffer[64]; // r29+0x20
        unsigned int sec; // r2
        unsigned int mn; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DFFF0 -> 0x003E0020
*/
// Range: 0x3DFFF0 -> 0x3E0020
static void parse_tag_pop(class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3DFFF0 -> 0x3E0020
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E0020 -> 0x003E0100
*/
// Range: 0x3E0020 -> 0x3E0100
static void parse_tag_insert_hash(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E0020 -> 0x3E0100
        unsigned int len; // r29+0x2C
        char * text; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E0100 -> 0x003E01DC
*/
// Range: 0x3E0100 -> 0x3E01DC
static void parse_tag_insert(class jot & j /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E0100 -> 0x3E01DC
        unsigned int id; // r2
        unsigned int len; // r29+0x2C
        char * text; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E01E0 -> 0x003E0288
*/
// Range: 0x3E01E0 -> 0x3E0288
static void reset_tag_tex() {
    /* anonymous block */ {
        // Range: 0x3E01E0 -> 0x3E0288
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E0290 -> 0x003E06A0
*/
// Range: 0x3E0290 -> 0x3E06A0
static void parse_tag_tex(class jot & a /* r17 */, class xtextbox & tb /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E0290 -> 0x3E06A0
        class tex_tag_context & ttc; // r2
        class callback cb; // @ 0x0062BEB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E06A0 -> 0x003E078C
*/
// Range: 0x3E06A0 -> 0x3E078C
static void render_tag_tex(class jot & j /* r2 */, class xtextbox & tb /* r18 */, float x /* r21 */, float y /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3E06A0 -> 0x3E078C
        class tex_tag_context & ttc; // r2
        class basic_rect dst; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E0790 -> 0x003E0828
*/
// Range: 0x3E0790 -> 0x3E0828
static void reset_tag_model() {
    /* anonymous block */ {
        // Range: 0x3E0790 -> 0x3E0828
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E0830 -> 0x003E0AB4
*/
// Range: 0x3E0830 -> 0x3E0AB4
static void parse_tag_model(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E0830 -> 0x3E0AB4
        class model_tag_context & mtc; // r2
        class callback cb; // @ 0x0062BEA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E0AC0 -> 0x003E0D54
*/
// Range: 0x3E0AC0 -> 0x3E0D54
static void render_tag_model(class jot & j /* r2 */, class xtextbox & tb /* r16 */, float x /* r29+0xA0 */, float y /* r29+0xA0 */) {
    /* anonymous block */ {
        // Range: 0x3E0AC0 -> 0x3E0D54
        class model_tag_context & mtc; // r2
        class basic_rect dst; // r29+0x70
        class xVec3 from; // r29+0x90
        class xVec3 to; // r29+0x80
        class xMat4x3 frame; // r29+0x30
        float ir; // r29+0xA0
        float scale; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E0D60 -> 0x003E0D7C
*/
// Range: 0x3E0D60 -> 0x3E0D7C
static void parse_tag_page_break(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E0D60 -> 0x3E0D7C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E0D80 -> 0x003E0D9C
*/
// Range: 0x3E0D80 -> 0x3E0D9C
static void parse_tag_word_break(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E0D80 -> 0x3E0D9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E0DA0 -> 0x003E0DBC
*/
// Range: 0x3E0DA0 -> 0x3E0DBC
static void parse_tag_tab(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E0DA0 -> 0x3E0DBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E0DC0 -> 0x003E0F1C
*/
// Range: 0x3E0DC0 -> 0x3E0F1C
static void parse_tag_nbsp(class jot & a /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E0DC0 -> 0x3E0F1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E0F20 -> 0x003E1028
*/
// Range: 0x3E0F20 -> 0x3E1028
static void parse_tag_newline(class jot & a /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E0F20 -> 0x3E1028
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1030 -> 0x003E1130
*/
// Range: 0x3E1030 -> 0x3E1130
static void parse_tag_open_curly(class jot & a /* r2 */, class xtextbox & tb /* r2 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1030 -> 0x3E1130
        char c; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1130 -> 0x003E1140
*/
// Range: 0x3E1130 -> 0x3E1140
static void reset_tag_yjustify(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1130 -> 0x3E1140
        class callback cb; // @ 0x0062BE98
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1140 -> 0x003E12D4
*/
// Range: 0x3E1140 -> 0x3E12D4
static void parse_tag_yjustify(class jot & a /* r18 */, class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3E1140 -> 0x3E12D4
        unsigned int & flags; // r2
        class callback cb; // @ 0x0062BE88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E12E0 -> 0x003E1300
*/
// Range: 0x3E12E0 -> 0x3E1300
static void update_tag_reset_yjustify(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E12E0 -> 0x3E1300
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1300 -> 0x003E1320
*/
// Range: 0x3E1300 -> 0x3E1320
static void update_tag_yjustify(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1300 -> 0x3E1320
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1320 -> 0x003E1330
*/
// Range: 0x3E1320 -> 0x3E1330
static void reset_tag_xjustify(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1320 -> 0x3E1330
        class callback cb; // @ 0x0062BE78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1330 -> 0x003E14C4
*/
// Range: 0x3E1330 -> 0x3E14C4
static void parse_tag_xjustify(class jot & a /* r18 */, class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3E1330 -> 0x3E14C4
        unsigned int & flags; // r2
        class callback cb; // @ 0x0062BE68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E14D0 -> 0x003E14F0
*/
// Range: 0x3E14D0 -> 0x3E14F0
static void update_tag_reset_xjustify(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E14D0 -> 0x3E14F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E14F0 -> 0x003E1510
*/
// Range: 0x3E14F0 -> 0x3E1510
static void update_tag_xjustify(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E14F0 -> 0x3E1510
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1510 -> 0x003E1520
*/
// Range: 0x3E1510 -> 0x3E1520
static void reset_tag_wrap(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1510 -> 0x3E1520
        class callback cb; // @ 0x0062BE58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1520 -> 0x003E1600
*/
// Range: 0x3E1520 -> 0x3E1600
static void parse_tag_wrap(class jot & a /* r17 */, class split_tag & ti /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3E1520 -> 0x3E1600
        unsigned int & flags; // r2
        class callback cb; // @ 0x0062BE48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1600 -> 0x003E1620
*/
// Range: 0x3E1600 -> 0x3E1620
static void update_tag_reset_wrap(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1600 -> 0x3E1620
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1620 -> 0x003E1640
*/
// Range: 0x3E1620 -> 0x3E1640
static void update_tag_wrap(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1620 -> 0x3E1640
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1640 -> 0x003E1650
*/
// Range: 0x3E1640 -> 0x3E1650
static void reset_tag_font(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1640 -> 0x3E1650
        class callback cb; // @ 0x0062BE38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1650 -> 0x003E16D8
*/
// Range: 0x3E1650 -> 0x3E16D8
static void parse_tag_font(class jot & a /* r16 */, class split_tag & ti /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1650 -> 0x3E16D8
        unsigned int & id; // r2
        class callback cb; // @ 0x0062BE28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E16E0 -> 0x003E16EC
*/
// Range: 0x3E16E0 -> 0x3E16EC
static void update_tag_reset_font(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E16E0 -> 0x3E16EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E16F0 -> 0x003E16FC
*/
// Range: 0x3E16F0 -> 0x3E16FC
static void update_tag_font(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E16F0 -> 0x3E16FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1700 -> 0x003E1710
*/
// Range: 0x3E1700 -> 0x3E1710
static void reset_tag_color(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1700 -> 0x3E1710
        class callback cb; // @ 0x0062BE18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1710 -> 0x003E190C
*/
// Range: 0x3E1710 -> 0x3E190C
static void parse_tag_color(class jot & a /* r19 */, class xtextbox & tb /* r18 */, class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3E1710 -> 0x3E190C
        class xColor_tag & color; // r2
        unsigned int v; // r3
        unsigned int temp; // r2
        class callback cb; // @ 0x0062BE08
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1910 -> 0x003E1934
*/
// Range: 0x3E1910 -> 0x3E1934
static void update_tag_reset_color(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1910 -> 0x3E1934
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1940 -> 0x003E195C
*/
// Range: 0x3E1940 -> 0x3E195C
static void update_tag_color(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1940 -> 0x3E195C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1960 -> 0x003E1970
*/
// Range: 0x3E1960 -> 0x3E1970
static void reset_tag_all(class jot & j /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1960 -> 0x3E1970
        class callback cb; // @ 0x0062BDF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1970 -> 0x003E1A5C
*/
// Range: 0x3E1970 -> 0x3E1A5C
static void update_tag_reset_all(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1970 -> 0x3E1A5C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1A60 -> 0x003E1A70
*/
// Range: 0x3E1A60 -> 0x3E1A70
static void reset_tag_yspace(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1A60 -> 0x3E1A70
        class callback cb; // @ 0x0062BDE8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1A70 -> 0x003E1B88
*/
// Range: 0x3E1A70 -> 0x3E1B88
static void parse_tag_yspace(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E1A70 -> 0x3E1B88
        float & v; // r2
        class callback cb; // @ 0x0062BDD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1B90 -> 0x003E1B9C
*/
// Range: 0x3E1B90 -> 0x3E1B9C
static void update_tag_reset_yspace(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1B90 -> 0x3E1B9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1BA0 -> 0x003E1BAC
*/
// Range: 0x3E1BA0 -> 0x3E1BAC
static void update_tag_yspace(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1BA0 -> 0x3E1BAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1BB0 -> 0x003E1BC0
*/
// Range: 0x3E1BB0 -> 0x3E1BC0
static void reset_tag_xspace(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1BB0 -> 0x3E1BC0
        class callback cb; // @ 0x0062BDC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1BC0 -> 0x003E1CD8
*/
// Range: 0x3E1BC0 -> 0x3E1CD8
static void parse_tag_xspace(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E1BC0 -> 0x3E1CD8
        float & v; // r2
        class callback cb; // @ 0x0062BDB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1CE0 -> 0x003E1CEC
*/
// Range: 0x3E1CE0 -> 0x3E1CEC
static void update_tag_reset_xspace(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1CE0 -> 0x3E1CEC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1CF0 -> 0x003E1CFC
*/
// Range: 0x3E1CF0 -> 0x3E1CFC
static void update_tag_xspace(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1CF0 -> 0x3E1CFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1D00 -> 0x003E1D10
*/
// Range: 0x3E1D00 -> 0x3E1D10
static void reset_tag_tab_stop(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1D00 -> 0x3E1D10
        class callback cb; // @ 0x0062BDA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1D10 -> 0x003E1E24
*/
// Range: 0x3E1D10 -> 0x3E1E24
static void parse_tag_tab_stop(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E1D10 -> 0x3E1E24
        float & v; // r2
        class callback cb; // @ 0x0062BD98
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1E30 -> 0x003E1E3C
*/
// Range: 0x3E1E30 -> 0x3E1E3C
static void update_tag_reset_tab_stop(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1E30 -> 0x3E1E3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1E40 -> 0x003E1E4C
*/
// Range: 0x3E1E40 -> 0x3E1E4C
static void update_tag_tab_stop(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1E40 -> 0x3E1E4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1E50 -> 0x003E1E60
*/
// Range: 0x3E1E50 -> 0x3E1E60
static void reset_tag_right_indent(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1E50 -> 0x3E1E60
        class callback cb; // @ 0x0062BD88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1E60 -> 0x003E1F78
*/
// Range: 0x3E1E60 -> 0x3E1F78
static void parse_tag_right_indent(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E1E60 -> 0x3E1F78
        float & v; // r2
        class callback cb; // @ 0x0062BD78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1F80 -> 0x003E1F8C
*/
// Range: 0x3E1F80 -> 0x3E1F8C
static void update_tag_reset_right_indent(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1F80 -> 0x3E1F8C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1F90 -> 0x003E1F9C
*/
// Range: 0x3E1F90 -> 0x3E1F9C
static void update_tag_right_indent(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1F90 -> 0x3E1F9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1FA0 -> 0x003E1FB0
*/
// Range: 0x3E1FA0 -> 0x3E1FB0
static void reset_tag_left_indent(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E1FA0 -> 0x3E1FB0
        class callback cb; // @ 0x0062BD68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E1FB0 -> 0x003E20C8
*/
// Range: 0x3E1FB0 -> 0x3E20C8
static void parse_tag_left_indent(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E1FB0 -> 0x3E20C8
        float & v; // r2
        class callback cb; // @ 0x0062BD58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E20D0 -> 0x003E20DC
*/
// Range: 0x3E20D0 -> 0x3E20DC
static void update_tag_reset_left_indent(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E20D0 -> 0x3E20DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E20E0 -> 0x003E20EC
*/
// Range: 0x3E20E0 -> 0x3E20EC
static void update_tag_left_indent(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E20E0 -> 0x3E20EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E20F0 -> 0x003E2100
*/
// Range: 0x3E20F0 -> 0x3E2100
static void reset_tag_height(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E20F0 -> 0x3E2100
        class callback cb; // @ 0x0062BD48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2100 -> 0x003E2214
*/
// Range: 0x3E2100 -> 0x3E2214
static void parse_tag_height(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E2100 -> 0x3E2214
        float & v; // r2
        class callback cb; // @ 0x0062BD38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2220 -> 0x003E222C
*/
// Range: 0x3E2220 -> 0x3E222C
static void update_tag_reset_height(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2220 -> 0x3E222C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2230 -> 0x003E223C
*/
// Range: 0x3E2230 -> 0x3E223C
static void update_tag_height(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2230 -> 0x3E223C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2240 -> 0x003E2250
*/
// Range: 0x3E2240 -> 0x3E2250
static void reset_tag_width(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2240 -> 0x3E2250
        class callback cb; // @ 0x0062BD28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2250 -> 0x003E2364
*/
// Range: 0x3E2250 -> 0x3E2364
static void parse_tag_width(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E2250 -> 0x3E2364
        float & v; // r2
        class callback cb; // @ 0x0062BD18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2370 -> 0x003E237C
*/
// Range: 0x3E2370 -> 0x3E237C
static void update_tag_reset_width(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2370 -> 0x3E237C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2380 -> 0x003E238C
*/
// Range: 0x3E2380 -> 0x3E238C
static void update_tag_width(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2380 -> 0x3E238C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2390 -> 0x003E23A0
*/
// Range: 0x3E2390 -> 0x3E23A0
static void reset_tag_sblue(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2390 -> 0x3E23A0
        class callback cb; // @ 0x0062BD08
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E23A0 -> 0x003E2538
*/
// Range: 0x3E23A0 -> 0x3E2538
static void parse_tag_sblue(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E23A0 -> 0x3E2538
        float & v; // r2
        class callback cb; // @ 0x0062BCF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2540 -> 0x003E254C
*/
// Range: 0x3E2540 -> 0x3E254C
static void update_tag_reset_sblue(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2540 -> 0x3E254C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2550 -> 0x003E25BC
*/
// Range: 0x3E2550 -> 0x3E25BC
static void update_tag_sblue(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2550 -> 0x3E25BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E25C0 -> 0x003E25D0
*/
// Range: 0x3E25C0 -> 0x3E25D0
static void reset_tag_sgreen(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E25C0 -> 0x3E25D0
        class callback cb; // @ 0x0062BCE8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E25D0 -> 0x003E2768
*/
// Range: 0x3E25D0 -> 0x3E2768
static void parse_tag_sgreen(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E25D0 -> 0x3E2768
        float & v; // r2
        class callback cb; // @ 0x0062BCD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2770 -> 0x003E277C
*/
// Range: 0x3E2770 -> 0x3E277C
static void update_tag_reset_sgreen(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2770 -> 0x3E277C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2780 -> 0x003E27EC
*/
// Range: 0x3E2780 -> 0x3E27EC
static void update_tag_sgreen(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2780 -> 0x3E27EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E27F0 -> 0x003E2800
*/
// Range: 0x3E27F0 -> 0x3E2800
static void reset_tag_sred(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E27F0 -> 0x3E2800
        class callback cb; // @ 0x0062BCC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2800 -> 0x003E2998
*/
// Range: 0x3E2800 -> 0x3E2998
static void parse_tag_sred(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E2800 -> 0x3E2998
        float & v; // r2
        class callback cb; // @ 0x0062BCB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E29A0 -> 0x003E29AC
*/
// Range: 0x3E29A0 -> 0x3E29AC
static void update_tag_reset_sred(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E29A0 -> 0x3E29AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E29B0 -> 0x003E2A1C
*/
// Range: 0x3E29B0 -> 0x3E2A1C
static void update_tag_sred(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E29B0 -> 0x3E2A1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2A20 -> 0x003E2A30
*/
// Range: 0x3E2A20 -> 0x3E2A30
static void reset_tag_salpha(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2A20 -> 0x3E2A30
        class callback cb; // @ 0x0062BCA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2A30 -> 0x003E2BC8
*/
// Range: 0x3E2A30 -> 0x3E2BC8
static void parse_tag_salpha(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E2A30 -> 0x3E2BC8
        float & v; // r2
        class callback cb; // @ 0x0062BC98
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2BD0 -> 0x003E2BDC
*/
// Range: 0x3E2BD0 -> 0x3E2BDC
static void update_tag_reset_salpha(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2BD0 -> 0x3E2BDC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2BE0 -> 0x003E2C4C
*/
// Range: 0x3E2BE0 -> 0x3E2C4C
static void update_tag_salpha(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2BE0 -> 0x3E2C4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2C50 -> 0x003E2C60
*/
// Range: 0x3E2C50 -> 0x3E2C60
static void reset_tag_blue(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2C50 -> 0x3E2C60
        class callback cb; // @ 0x0062BC88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2C60 -> 0x003E2DF8
*/
// Range: 0x3E2C60 -> 0x3E2DF8
static void parse_tag_blue(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E2C60 -> 0x3E2DF8
        float & v; // r2
        class callback cb; // @ 0x0062BC78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2E00 -> 0x003E2E0C
*/
// Range: 0x3E2E00 -> 0x3E2E0C
static void update_tag_reset_blue(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2E00 -> 0x3E2E0C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2E10 -> 0x003E2E7C
*/
// Range: 0x3E2E10 -> 0x3E2E7C
static void update_tag_blue(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2E10 -> 0x3E2E7C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2E80 -> 0x003E2E90
*/
// Range: 0x3E2E80 -> 0x3E2E90
static void reset_tag_green(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E2E80 -> 0x3E2E90
        class callback cb; // @ 0x0062BC68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E2E90 -> 0x003E3028
*/
// Range: 0x3E2E90 -> 0x3E3028
static void parse_tag_green(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E2E90 -> 0x3E3028
        float & v; // r2
        class callback cb; // @ 0x0062BC58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E3030 -> 0x003E303C
*/
// Range: 0x3E3030 -> 0x3E303C
static void update_tag_reset_green(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E3030 -> 0x3E303C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E3040 -> 0x003E30AC
*/
// Range: 0x3E3040 -> 0x3E30AC
static void update_tag_green(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E3040 -> 0x3E30AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E30B0 -> 0x003E30C0
*/
// Range: 0x3E30B0 -> 0x3E30C0
static void reset_tag_red(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E30B0 -> 0x3E30C0
        class callback cb; // @ 0x0062BC48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E30C0 -> 0x003E3258
*/
// Range: 0x3E30C0 -> 0x3E3258
static void parse_tag_red(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E30C0 -> 0x3E3258
        float & v; // r2
        class callback cb; // @ 0x0062BC38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E3260 -> 0x003E326C
*/
// Range: 0x3E3260 -> 0x3E326C
static void update_tag_reset_red(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E3260 -> 0x3E326C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E3270 -> 0x003E32DC
*/
// Range: 0x3E3270 -> 0x3E32DC
static void update_tag_red(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E3270 -> 0x3E32DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E32E0 -> 0x003E32F0
*/
// Range: 0x3E32E0 -> 0x3E32F0
static void reset_tag_alpha(class jot & a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E32E0 -> 0x3E32F0
        class callback cb; // @ 0x0062BC28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E32F0 -> 0x003E3488
*/
// Range: 0x3E32F0 -> 0x3E3488
static void parse_tag_alpha(class jot & a /* r18 */, class xtextbox & tb /* r17 */, class split_tag & ti /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3E32F0 -> 0x3E3488
        float & v; // r2
        class callback cb; // @ 0x0062BC18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E3490 -> 0x003E349C
*/
// Range: 0x3E3490 -> 0x3E349C
static void update_tag_reset_alpha(class xtextbox & tb /* r2 */, class xtextbox & ctb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E3490 -> 0x3E349C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E34A0 -> 0x003E350C
*/
// Range: 0x3E34A0 -> 0x3E350C
static void update_tag_alpha(class jot & j /* r2 */, class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E34A0 -> 0x3E350C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E3510 -> 0x003E3720
*/
// Range: 0x3E3510 -> 0x3E3720
// this: r21
unsigned char layout::changed(class xtextbox & ctb /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3E3510 -> 0x3E3720
        unsigned int flags1; // r2
        unsigned int flags2; // r2
        signed int i; // r19
        class jot & j; // r18
        unsigned int oldval; // r2
        unsigned int val; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E3720 -> 0x003E3850
*/
// Range: 0x3E3720 -> 0x3E3850
// this: r2
float layout::yextent(float max /* r29 */, signed int & size /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E3720 -> 0x3E3850
        signed int begin_line; // r11
        float top; // r2
        signed int i; // r10
        class jot_line & line; // r2
        class jot_line & line; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E3850 -> 0x003E3F6C
*/
// Range: 0x3E3850 -> 0x3E3F6C
// this: r20
void layout::render(class xtextbox & ctb /* r19 */, signed int begin_jot /* r18 */, signed int end_jot /* r23 */) {
    /* anonymous block */ {
        // Range: 0x3E3850 -> 0x3E3F6C
        signed int begin_line; // r17
        signed int i; // r21
        class jot & j; // r2
        float top; // r22
        unsigned int li; // r17
        signed int line_last; // r22
        float x; // r21
        float y; // r20
        signed int i; // r2
        class jot_line & line; // r2
        unsigned int xj; // r2
        unsigned int yj; // r2
        class jot & j; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E3F70 -> 0x003E46C8
*/
// Range: 0x3E3F70 -> 0x3E46C8
// this: r21
void layout::calc(class xtextbox & ctb /* r20 */, unsigned int start_text /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E3F70 -> 0x3E46C8
        class jot_line & first_line; // r2
        // total size: 0x8
        class /* @class */ {
            // Members
        public:
            char * s; // offset 0x0, size 0x4
            char * end; // offset 0x4, size 0x4
        } text_stack[16]; // r29+0xB0
        unsigned int text_stack_size; // r22
        unsigned int text_index; // r30
        char * s; // r19
        char * end; // r18
        class jot & a; // r17
        class jot_line & line; // r2
        class jot_line & last_line; // r2
        unsigned int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E46D0 -> 0x003E4894
*/
// Range: 0x3E46D0 -> 0x3E4894
// this: r18
unsigned char layout::fit_line(unsigned char isLastLine /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3E46D0 -> 0x3E4894
        class jot_line & line; // r16
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E48A0 -> 0x003E49D0
*/
// Range: 0x3E48A0 -> 0x3E49D0
// this: r2
void layout::bound_line(class jot_line & line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E48A0 -> 0x3E49D0
        unsigned int i; // r8
        class jot & a; // r2
        unsigned int i; // r8
        class jot & a; // r2
        float total_height; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E49D0 -> 0x003E4CA4
*/
// Range: 0x3E49D0 -> 0x3E4CA4
// this: r2
void layout::merge_line(class jot_line & line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E49D0 -> 0x3E4CA4
        unsigned int d; // r10
        unsigned int i; // r9
        class jot & a1; // r2
        class jot & a2; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E4CB0 -> 0x003E4F20
*/
// Range: 0x3E4CB0 -> 0x3E4F20
// this: r2
void layout::trim_line(class jot_line & line /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E4CB0 -> 0x3E4F20
        signed int i; // r3
        class jot & a; // r2
        unsigned int i; // r3
        class jot & a; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E4F20 -> 0x003E5030
*/
// Range: 0x3E4F20 -> 0x3E5030
// this: r2
void layout::refresh_end(class xtextbox & tb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E4F20 -> 0x3E5030
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E5030 -> 0x003E533C
*/
// Range: 0x3E5030 -> 0x3E533C
// this: r2
void layout::clear() {
    /* anonymous block */ {
        // Range: 0x3E5030 -> 0x3E533C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E5340 -> 0x003E5478
*/
// Range: 0x3E5340 -> 0x3E5478
// this: r17
void layout::refresh(class xtextbox & tb /* r16 */, unsigned char force /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E5340 -> 0x3E5478
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E5480 -> 0x003E58F4
*/
// Range: 0x3E5480 -> 0x3E58F4
void clear_layout_cache() {
    /* anonymous block */ {
        // Range: 0x3E5480 -> 0x3E58F4
        unsigned int index; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E5900 -> 0x003E599C
*/
// Range: 0x3E5900 -> 0x3E599C
unsigned int read_list(class tag_entry & e /* r20 */, signed int * v /* r2 */, unsigned int vsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E5900 -> 0x3E599C
        unsigned int total; // r2
        unsigned int i; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E59A0 -> 0x003E5A3C
*/
// Range: 0x3E59A0 -> 0x3E5A3C
unsigned int read_list(class tag_entry & e /* r20 */, float * v /* r2 */, unsigned int vsize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E59A0 -> 0x3E5A3C
        unsigned int total; // r2
        unsigned int i; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E5A40 -> 0x003E5AE0
*/
// Range: 0x3E5A40 -> 0x3E5AE0
class tag_entry * find_entry(class tag_entry_list & el /* r19 */, class substr & name /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3E5A40 -> 0x3E5AE0
        unsigned int i; // r17
        class tag_entry & e; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E5AE0 -> 0x003E5F44
*/
// Range: 0x3E5AE0 -> 0x3E5F44
class tag_entry_list read_tag(class substr & s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E5AE0 -> 0x3E5F44
        unsigned int entries_used; // r21
        class substr it; // r29+0x88
        class substr delims; // r29+0x80
        class substr sub_delims; // r29+0x78
        class tag_entry & entry; // r19
        char * d; // r2
        class substr & arg; // r18
        char * d; // r2
        class tag_entry_list ret; // r29+0x70
        class substr arg_buffer[32]; // @ 0x006CB620
        class tag_entry entry_buffer[16]; // @ 0x006CB720
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E5F50 -> 0x003E5F60
*/
// Range: 0x3E5F50 -> 0x3E5F60
float yextent(float max /* r29 */, signed int & size /* r2 */, class layout & l /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E5F50 -> 0x3E5F60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E5F60 -> 0x003E5F70
*/
// Range: 0x3E5F60 -> 0x3E5F70
// this: r2
void xtextbox::render(class layout & l /* r2 */, signed int begin_jot /* r2 */, signed int end_jot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E5F60 -> 0x3E5F70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E5F70 -> 0x003E62E0
*/
// Range: 0x3E5F70 -> 0x3E62E0
// this: r18
class layout & xtextbox::temp_layout(unsigned char cache /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3E5F70 -> 0x3E62E0
        signed long cur_time; // r2
        unsigned char refresh; // r16
        unsigned int index; // r21
        signed int min_used; // r6
        unsigned int i; // r5
        signed int used; // r4
        class tl_cache_entry & e; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E62E0 -> 0x003E63E4
*/
// Range: 0x3E62E0 -> 0x3E63E4
// this: r17
void xtextbox::set_text(char * * texts /* r2 */, unsigned int * text_sizes /* r2 */, unsigned int size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3E62E0 -> 0x3E63E4
        unsigned int i; // r19
        unsigned int i; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E63F0 -> 0x003E63FC
*/
// Range: 0x3E63F0 -> 0x3E63FC
// this: r2
void xtextbox::set_text(char * * texts /* r2 */, unsigned int size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E63F0 -> 0x3E63FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E6400 -> 0x003E6444
*/
// Range: 0x3E6400 -> 0x3E6444
// this: r2
void xtextbox::set_text(char * text /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E6400 -> 0x3E6444
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E6450 -> 0x003E6464
*/
// Range: 0x3E6450 -> 0x3E6464
void text_render(class jot & j /* r2 */, class xtextbox & tb /* r2 */, float x /* r29 */, float y /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3E6450 -> 0x3E6464
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E6470 -> 0x003E69B4
*/
// Range: 0x3E6470 -> 0x3E69B4
static void load_model_args(class model_args & ma /* r22 */, class substr & s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E6470 -> 0x3E69B4
        class tag_entry_list el; // r29+0xE8
        class tag_entry * e; // r2
        class substr & name; // r2
        unsigned int id; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E69C0 -> 0x003E7344
*/
// Range: 0x3E69C0 -> 0x3E7344
static void load_tex_args(class tex_args & ta /* r22 */, class substr & s /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E69C0 -> 0x3E7344
        class tag_entry_list el; // r29+0x170
        class tag_entry * e; // r2
        class substr & name; // r2
        unsigned int id; // r2
        class RwTexture * texture; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E7350 -> 0x003E77E0
*/
// Range: 0x3E7350 -> 0x3E77E0
static char * parse_next_text_jot(class jot & a /* r17 */, class xtextbox & tb /* r2 */, char * text /* r2 */, unsigned int text_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E7350 -> 0x3E77E0
        unsigned char hasSpaceChar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E77E0 -> 0x003E79F8
*/
// Range: 0x3E77E0 -> 0x3E79F8
static char * parse_next_tag_jot(class jot & a /* r21 */, class xtextbox & tb /* r20 */, class xtextbox & ctb /* r19 */, char * text /* r18 */, unsigned int text_size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E77E0 -> 0x3E79F8
        class split_tag ti; // r29+0x70
        unsigned int size; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E7A00 -> 0x003E7DB8
*/
// Range: 0x3E7A00 -> 0x3E7DB8
static unsigned int parse_split_tag(class split_tag & ti /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3E7A00 -> 0x3E7DB8
        class substr s; // r29+0x38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E7DC0 -> 0x003E85AC
*/
// Range: 0x3E7DC0 -> 0x3E85AC
// this: r20
void xfont::irender(char * text /* r29+0xDC */, unsigned int text_size /* r29+0xD8 */, float x /* r20 */, float y /* r29+0x150 */) {
    /* anonymous block */ {
        // Range: 0x3E7DC0 -> 0x3E85AC
        class font_data & fd; // r2
        class basic_rect bounds; // r29+0x120
        unsigned char pageCompleted[16]; // r29+0x110
        unsigned int cpItr; // r29+0xC0
        signed int whichCodePage; // r21
        char * s; // r19
        unsigned int codePage; // r2
        unsigned int charIndex; // r2
        char * s; // r19
        unsigned int charIndex; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E85B0 -> 0x003E85B8
*/
// Range: 0x3E85B0 -> 0x3E85B8
// this: r2
void xfont::irender(char * text /* r2 */, float x /* r29 */, float y /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3E85B0 -> 0x3E85B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E85C0 -> 0x003E86C0
*/
// Range: 0x3E85C0 -> 0x3E86C0
void stop_render() {
    /* anonymous block */ {
        // Range: 0x3E85C0 -> 0x3E86C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E86C0 -> 0x003E870C
*/
// Range: 0x3E86C0 -> 0x3E870C
// this: r2
void xfont::start_render() {
    /* anonymous block */ {
        // Range: 0x3E86C0 -> 0x3E870C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E8710 -> 0x003E88B4
*/
// Range: 0x3E8710 -> 0x3E88B4
// this: r2
class basic_rect xfont::bounds(char * text /* r2 */, unsigned int text_size /* r2 */, float max_width /* r29+0x10 */, unsigned int & size /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E8710 -> 0x3E88B4
        class font_data & fd; // r2
        class basic_rect r; // r29
        char * s; // r10
        float dx; // r4
        unsigned int charIndex; // r2
        class font_data & fd; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E88C0 -> 0x003E88EC
*/
// Range: 0x3E88C0 -> 0x3E88EC
// this: r2
class basic_rect xfont::bounds(char * text /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3E88C0 -> 0x3E88EC
        unsigned int size; // r29+0x1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E88F0 -> 0x003E89C4
*/
// Range: 0x3E88F0 -> 0x3E89C4
void restore_render_state() {
    /* anonymous block */ {
        // Range: 0x3E88F0 -> 0x3E89C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E89D0 -> 0x003E8B38
*/
// Range: 0x3E89D0 -> 0x3E8B38
void set_render_state(class RwRaster * raster /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3E89D0 -> 0x3E8B38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E8B40 -> 0x003E8CD4
*/
// Range: 0x3E8B40 -> 0x3E8CD4
void init() {
    /* anonymous block */ {
        // Range: 0x3E8B40 -> 0x3E8CD4
        unsigned int i; // r17
        class font_data & fd; // r2
        char filename[20]; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E8CE0 -> 0x003E8E48
*/
// Range: 0x3E8CE0 -> 0x3E8E48
static class xModelInstance * load_model(unsigned int id /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3E8CE0 -> 0x3E8E48
        unsigned int next_order'86; // r2
        unsigned int oldest; // r16
        unsigned int i; // r7
        class model_cache_entry & e; // r2
        class RpAtomic * mf; // r2
        class model_cache_entry & e; // r2
        class xModelInstance & model; // r16
        unsigned int next_order; // @ 0x00637F80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E8E50 -> 0x003E9004
*/
// Range: 0x3E8E50 -> 0x3E9004
static void init_model_cache() {
    /* anonymous block */ {
        // Range: 0x3E8E50 -> 0x3E9004
        void * data; // r2
        class model_pool & pool; // r16
        class xModelInstance & model; // r2
        class model_cache_entry & e; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E9010 -> 0x003E9A44
*/
// Range: 0x3E9010 -> 0x3E9A44
static void tex_render_shadowed(class basic_rect & src /* r2 */, class basic_rect & dst /* r2 */, class basic_rect & clip /* r2 */, class xColor_tag color /* r29+0xB8 */, class xColor_tag shadowcolor /* r29+0xBC */, float shadowOffsetX /* r22 */, float shadowOffsetY /* r21 */, float fshear /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3E9010 -> 0x3E9A44
        class basic_rect r; // r29+0xD0
        class basic_rect rt; // r29+0xC0
        class RwSky2DVertex * vert; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003E9A50 -> 0x003EA1AC
*/
// Range: 0x3E9A50 -> 0x3EA1AC
static void tex_render(class basic_rect & src /* r2 */, class basic_rect & dst /* r2 */, class basic_rect & clip /* r2 */, class xColor_tag color /* r29+0x9C */) {
    /* anonymous block */ {
        // Range: 0x3E9A50 -> 0x3EA1AC
        class basic_rect r; // r29+0xB0
        class basic_rect rt; // r29+0xA0
        class RwSky2DVertex * vert; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EA1B0 -> 0x003EA92C
*/
// Range: 0x3EA1B0 -> 0x3EA92C
static unsigned char init_font_data(class font_data & fd /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3EA1B0 -> 0x3EA92C
        class font_asset & a; // r2
        signed int height; // r2
        unsigned char i; // r2
        unsigned char c; // r2
        unsigned int tail_index; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EA930 -> 0x003EABD0
*/
// Range: 0x3EA930 -> 0x3EABD0
static unsigned char reset_font_spacing(class font_asset & a /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3EA930 -> 0x3EABD0
        class RwTexture * tex; // r2
        class basic_rect char_bounds; // r29+0x1C0
        unsigned char baseline_count[256]; // r29+0xC0
        signed int width; // r20
        class RwImage * image; // r19
        class xColor_tag * bits; // r2
        signed int i; // r18
        class basic_rect r; // r29+0xB0
        signed int baseline; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFont.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003EABD0 -> 0x003EAD48
*/
// Range: 0x3EABD0 -> 0x3EAD48
static class basic_rect find_bounds(class xColor_tag * bits /* r2 */, class basic_rect & r /* r2 */, signed int pitch /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3EABD0 -> 0x3EAD48
        signed int diff; // r2
        class xColor_tag * endp; // r2
        class xColor_tag * p; // r2
        signed int pmode; // r2
        signed int minx; // r3
        signed int maxx; // r16
        signed int miny; // r25
        signed int maxy; // r14
        signed int y; // r24
        class xColor_tag * endline; // r2
        signed int x; // r12
        class basic_rect b; // r29+0x10
    }
}


