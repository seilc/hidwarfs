/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\zlib-1.2.3\deflate.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805E5EF8 -> 0x805E5EF8
*/
// total size: 0x16C0
struct internal_state {
    // Members
    struct z_stream_s * strm; // offset 0x0, size 0x4
    int status; // offset 0x4, size 0x4
    unsigned char * pending_buf; // offset 0x8, size 0x4
    unsigned long pending_buf_size; // offset 0xC, size 0x4
    unsigned char * pending_out; // offset 0x10, size 0x4
    unsigned int pending; // offset 0x14, size 0x4
    int wrap; // offset 0x18, size 0x4
    struct gz_header_s * gzhead; // offset 0x1C, size 0x4
    unsigned int gzindex; // offset 0x20, size 0x4
    unsigned char method; // offset 0x24, size 0x1
    int last_flush; // offset 0x28, size 0x4
    unsigned int w_size; // offset 0x2C, size 0x4
    unsigned int w_bits; // offset 0x30, size 0x4
    unsigned int w_mask; // offset 0x34, size 0x4
    unsigned char * window; // offset 0x38, size 0x4
    unsigned long window_size; // offset 0x3C, size 0x4
    unsigned short * prev; // offset 0x40, size 0x4
    unsigned short * head; // offset 0x44, size 0x4
    unsigned int ins_h; // offset 0x48, size 0x4
    unsigned int hash_size; // offset 0x4C, size 0x4
    unsigned int hash_bits; // offset 0x50, size 0x4
    unsigned int hash_mask; // offset 0x54, size 0x4
    unsigned int hash_shift; // offset 0x58, size 0x4
    long block_start; // offset 0x5C, size 0x4
    unsigned int match_length; // offset 0x60, size 0x4
    unsigned int prev_match; // offset 0x64, size 0x4
    int match_available; // offset 0x68, size 0x4
    unsigned int strstart; // offset 0x6C, size 0x4
    unsigned int match_start; // offset 0x70, size 0x4
    unsigned int lookahead; // offset 0x74, size 0x4
    unsigned int prev_length; // offset 0x78, size 0x4
    unsigned int max_chain_length; // offset 0x7C, size 0x4
    unsigned int max_lazy_match; // offset 0x80, size 0x4
    int level; // offset 0x84, size 0x4
    int strategy; // offset 0x88, size 0x4
    unsigned int good_match; // offset 0x8C, size 0x4
    int nice_match; // offset 0x90, size 0x4
    struct ct_data_s dyn_ltree[573]; // offset 0x94, size 0x8F4
    struct ct_data_s dyn_dtree[61]; // offset 0x988, size 0xF4
    struct ct_data_s bl_tree[39]; // offset 0xA7C, size 0x9C
    struct tree_desc_s l_desc; // offset 0xB18, size 0xC
    struct tree_desc_s d_desc; // offset 0xB24, size 0xC
    struct tree_desc_s bl_desc; // offset 0xB30, size 0xC
    unsigned short bl_count[16]; // offset 0xB3C, size 0x20
    int heap[573]; // offset 0xB5C, size 0x8F4
    int heap_len; // offset 0x1450, size 0x4
    int heap_max; // offset 0x1454, size 0x4
    unsigned char depth[573]; // offset 0x1458, size 0x23D
    unsigned char * l_buf; // offset 0x1698, size 0x4
    unsigned int lit_bufsize; // offset 0x169C, size 0x4
    unsigned int last_lit; // offset 0x16A0, size 0x4
    unsigned short * d_buf; // offset 0x16A4, size 0x4
    unsigned long opt_len; // offset 0x16A8, size 0x4
    unsigned long static_len; // offset 0x16AC, size 0x4
    unsigned int matches; // offset 0x16B0, size 0x4
    int last_eob_len; // offset 0x16B4, size 0x4
    unsigned short bi_buf; // offset 0x16B8, size 0x2
    int bi_valid; // offset 0x16BC, size 0x4
};
// total size: 0x34
struct gz_header_s {
    // Members
    int text; // offset 0x0, size 0x4
    unsigned long time; // offset 0x4, size 0x4
    int xflags; // offset 0x8, size 0x4
    int os; // offset 0xC, size 0x4
    unsigned char * extra; // offset 0x10, size 0x4
    unsigned int extra_len; // offset 0x14, size 0x4
    unsigned int extra_max; // offset 0x18, size 0x4
    unsigned char * name; // offset 0x1C, size 0x4
    unsigned int name_max; // offset 0x20, size 0x4
    unsigned char * comment; // offset 0x24, size 0x4
    unsigned int comm_max; // offset 0x28, size 0x4
    int hcrc; // offset 0x2C, size 0x4
    int done; // offset 0x30, size 0x4
};
// total size: 0x4
struct ct_data_s {
    // Members
    union {
        // Members
        unsigned short freq; // offset 0x0, size 0x2
        unsigned short code; // offset 0x0, size 0x2
    } fc; // offset 0x0, size 0x2
    union {
        // Members
        unsigned short dad; // offset 0x0, size 0x2
        unsigned short len; // offset 0x0, size 0x2
    } dl; // offset 0x2, size 0x2
};
// total size: 0xC
struct tree_desc_s {
    // Members
    struct ct_data_s * dyn_tree; // offset 0x0, size 0x4
    int max_code; // offset 0x4, size 0x4
    struct static_tree_desc_s * stat_desc; // offset 0x8, size 0x4
};
