/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdmerge.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805E3710 -> 0x805E3E20
*/
// Range: 0x805E3710 -> 0x805E3848
static void build_ycc_rgb_table(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_upsampler * upsample; // r31
    int i; // r5
    long x; // r6
}
// Range: 0x805E3848 -> 0x805E3860
static void start_pass_merged_upsample() {
    // Local variables
    my_upsampler * upsample; // r4
}
// Range: 0x805E3860 -> 0x805E3990
static void merged_2v_upsample(unsigned int * in_row_group_ctr /* r28 */, unsigned int * out_row_ctr /* r29 */, unsigned int out_rows_avail /* r6 */) {
    // Local variables
    my_upsampler * upsample; // r31
    unsigned char * work_ptrs[2]; // r1+0x8
    unsigned int num_rows; // r30
}
// Range: 0x805E3990 -> 0x805E39FC
static void merged_1v_upsample(unsigned int * in_row_group_ctr /* r30 */, unsigned int * out_row_ctr /* r31 */) {
}
// Range: 0x805E39FC -> 0x805E3B58
static void h2v1_merged_upsample() {
    // Local variables
    my_upsampler * upsample; // r7
    int y; // r5
    int cred; // r30
    int cgreen; // r27
    int cblue; // r0
    int cb; // r3
    int cr; // r0
    unsigned char * outptr; // r4
    unsigned char * inptr0; // r5
    unsigned char * inptr1; // r7
    unsigned char * inptr2; // r8
    unsigned int col; // r6
    unsigned char * range_limit; // r9
    int * Crrtab; // r10
    int * Cbbtab; // r11
    long * Crgtab; // r12
    long * Cbgtab; // r31
}
// Range: 0x805E3B58 -> 0x805E3D40
static void h2v2_merged_upsample() {
    // Local variables
    my_upsampler * upsample; // r7
    int y; // r8
    int cred; // r0
    int cgreen; // r4
    int cblue; // r5
    int cb; // r4
    int cr; // r0
    unsigned char * outptr0; // r7
    unsigned char * outptr1; // r6
    unsigned char * inptr00; // r8
    unsigned char * inptr01; // r9
    unsigned char * inptr1; // r10
    unsigned char * inptr2; // r11
    unsigned int col; // r12
    unsigned char * range_limit; // r31
    int * Crrtab; // r30
    int * Cbbtab; // r29
    long * Crgtab; // r28
    long * Cbgtab; // r27
}
// Range: 0x805E3D40 -> 0x805E3E20
void jIMUpsampler(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_upsampler * upsample; // r0
}
