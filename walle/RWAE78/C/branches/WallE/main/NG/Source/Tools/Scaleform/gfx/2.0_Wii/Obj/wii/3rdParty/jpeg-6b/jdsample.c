/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdsample.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805E03F0 -> 0x805E0C24
*/
typedef struct {
    // Members
    struct jpeg_upsampler pub; // offset 0x0, size 0xC
    unsigned char * * color_buf[10]; // offset 0xC, size 0x28
    void (* methods[10])(struct jpeg_decompress_struct * cinfo, jpeg_component_info * compptr, unsigned char * * input_data, unsigned char * * * output_data_ptr); // offset 0x34, size 0x28
    int next_row_out; // offset 0x5C, size 0x4
    unsigned int rows_to_go; // offset 0x60, size 0x4
    int rowgroup_height[10]; // offset 0x64, size 0x28
    unsigned char h_expand[10]; // offset 0x8C, size 0xA
    unsigned char v_expand[10]; // offset 0x96, size 0xA
} my_upsampler;
// Range: 0x805E03F0 -> 0x805E0408
static void start_pass_upsample() {
    // Local variables
    my_upsampler * upsample; // r4
}
// Range: 0x805E0408 -> 0x805E0550
static void sep_upsample(struct jpeg_decompress_struct * cinfo /* r25 */, unsigned char * * * input_buf /* r26 */, unsigned int * in_row_group_ctr /* r27 */, unsigned char * * output_buf /* r28 */, unsigned int * out_row_ctr /* r29 */, unsigned int out_rows_avail /* r30 */) {
    // Local variables
    my_upsampler * upsample; // r31
    int ci; // r24
    jpeg_component_info * compptr; // r23
    unsigned int num_rows; // r23
}
// Range: 0x805E0550 -> 0x805E0558
static void fullsize_upsample() {
}
// Range: 0x805E0558 -> 0x805E0564
static void noop_upsample() {
}
// Range: 0x805E0564 -> 0x805E063C
static void int_upsample(struct jpeg_decompress_struct * cinfo /* r30 */, unsigned char * * input_data /* r31 */) {
    // Local variables
    my_upsampler * upsample; // r3
    unsigned char * * output_data; // r29
    unsigned char * inptr; // r3
    unsigned char * outptr; // r4
    unsigned char invalue; // r0
    int h; // r5
    unsigned char * outend; // r6
    int h_expand; // r28
    int v_expand; // r27
    int inrow; // r26
    int outrow; // r25
}
// Range: 0x805E063C -> 0x805E0690
static void h2v1_upsample() {
    // Local variables
    unsigned char * * output_data; // r4
    unsigned char * inptr; // r6
    unsigned char * outptr; // r7
    unsigned char invalue; // r0
    unsigned char * outend; // r8
    int inrow; // r9
}
// Range: 0x805E0690 -> 0x805E073C
static void h2v2_upsample(struct jpeg_decompress_struct * cinfo /* r27 */, unsigned char * * input_data /* r28 */) {
    // Local variables
    unsigned char * * output_data; // r31
    unsigned char * inptr; // r3
    unsigned char * outptr; // r4
    unsigned char invalue; // r0
    unsigned char * outend; // r5
    int inrow; // r30
    int outrow; // r29
}
// Range: 0x805E073C -> 0x805E0804
static void h2v1_fancy_upsample() {
    // Local variables
    unsigned char * * output_data; // r6
    unsigned char * inptr; // r11
    unsigned char * outptr; // r7
    int invalue; // r10
    unsigned int colctr; // r12
    int inrow; // r8
}
// Range: 0x805E0804 -> 0x805E0988
static void h2v2_fancy_upsample() {
    // Local variables
    unsigned char * * output_data; // r6
    unsigned char * inptr0; // r7
    unsigned char * inptr1; // r8
    unsigned char * outptr; // r9
    int thiscolsum; // r0
    int lastcolsum; // r28
    int nextcolsum; // r27
    unsigned int colctr; // r26
    int inrow; // r10
    int outrow; // r11
    int v; // r12
}
// Range: 0x805E0988 -> 0x805E0C24
void jIUpsampler(struct jpeg_decompress_struct * cinfo /* r25 */) {
    // Local variables
    my_upsampler * upsample; // r0
    int ci; // r28
    jpeg_component_info * compptr; // r27
    int need_buffer; // r26
    int do_fancy; // r0
    int h_in_group; // r5
    int v_in_group; // r3
    int h_out_group; // r7
    int v_out_group; // r8
}
