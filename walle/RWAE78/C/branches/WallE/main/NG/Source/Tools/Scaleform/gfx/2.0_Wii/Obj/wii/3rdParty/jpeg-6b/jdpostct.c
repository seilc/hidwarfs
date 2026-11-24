/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdpostct.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805DE9A8 -> 0x805DEEBC
*/
typedef struct {
    // Members
    struct jpeg_d_post_controller pub; // offset 0x0, size 0x8
    struct jvirt_sarray_control * whole_image; // offset 0x8, size 0x4
    unsigned char * * buffer; // offset 0xC, size 0x4
    unsigned int strip_height; // offset 0x10, size 0x4
    unsigned int starting_row; // offset 0x14, size 0x4
    unsigned int next_row; // offset 0x18, size 0x4
} my_post_controller;
// Range: 0x805DE9A8 -> 0x805DEAE0
static void start_pass_dpost() {
    // Local variables
    my_post_controller * post; // r31
}
// Range: 0x805DEAE0 -> 0x805DEBA0
static void post_process_1pass(struct jpeg_decompress_struct * cinfo /* r28 */, unsigned char * * output_buf /* r29 */, unsigned int * out_row_ctr /* r30 */) {
    // Local variables
    my_post_controller * post; // r31
    unsigned int num_rows; // r1+0x8
    unsigned int max_rows; // r9
}
// Range: 0x805DEBA0 -> 0x805DECAC
static void post_process_prepass(struct jpeg_decompress_struct * cinfo /* r25 */, unsigned char * * * input_buf /* r26 */, unsigned int * in_row_group_ctr /* r27 */, unsigned int in_row_groups_avail /* r29 */, unsigned int * out_row_ctr /* r28 */) {
    // Local variables
    my_post_controller * post; // r31
    unsigned int old_next_row; // r30
    unsigned int num_rows; // r29
}
// Range: 0x805DECAC -> 0x805DEDB8
static void post_process_2pass(struct jpeg_decompress_struct * cinfo /* r26 */, unsigned char * * output_buf /* r27 */, unsigned int * out_row_ctr /* r30 */, unsigned int out_rows_avail /* r28 */) {
    // Local variables
    my_post_controller * post; // r31
    unsigned int num_rows; // r29
    unsigned int max_rows; // r0
}
// Range: 0x805DEDB8 -> 0x805DEEBC
void jIDPostC(struct jpeg_decompress_struct * cinfo /* r29 */, int need_full_buffer /* r30 */) {
    // Local variables
    my_post_controller * post; // r0
}
