/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdcolor.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805E0C24 -> 0x805E134C
*/
typedef struct {
    // Members
    struct jpeg_color_deconverter pub; // offset 0x0, size 0x8
    int * Cr_r_tab; // offset 0x8, size 0x4
    int * Cb_b_tab; // offset 0xC, size 0x4
    long * Cr_g_tab; // offset 0x10, size 0x4
    long * Cb_g_tab; // offset 0x14, size 0x4
} my_color_deconverter;
// Range: 0x805E0C24 -> 0x805E0D5C
static void build_ycc_rgb_table(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_color_deconverter * cconvert; // r31
    int i; // r5
    long x; // r6
}
// Range: 0x805E0D5C -> 0x805E0E38
static void ycc_rgb_convert() {
    // Local variables
    my_color_deconverter * cconvert; // r8
    int y; // r24
    int cb; // r23
    int cr; // r25
    unsigned char * outptr; // r3
    unsigned char * inptr0; // r8
    unsigned char * inptr1; // r9
    unsigned char * inptr2; // r10
    unsigned int col; // r11
    unsigned int num_cols; // r0
    unsigned char * range_limit; // r12
    int * Crrtab; // r31
    int * Cbbtab; // r30
    long * Crgtab; // r29
    long * Cbgtab; // r28
}
// Range: 0x805E0E38 -> 0x805E0EA8
static void null_convert() {
    // Local variables
    unsigned char * inptr; // r3
    unsigned char * outptr; // r8
    unsigned int count; // r9
    int num_components; // r10
    unsigned int num_cols; // r11
    int ci; // r12
}
// Range: 0x805E0EA8 -> 0x805E0EC8
static void grayscale_convert(struct jpeg_decompress_struct * cinfo /* r8 */, unsigned char * * * input_buf /* r3 */) {
}
// Range: 0x805E0EC8 -> 0x805E0F1C
static void gray_rgb_convert() {
    // Local variables
    unsigned char * inptr; // r3
    unsigned char * outptr; // r8
    unsigned int col; // r9
    unsigned int num_cols; // r10
}
// Range: 0x805E0F1C -> 0x805E101C
static void ycck_cmyk_convert() {
    // Local variables
    my_color_deconverter * cconvert; // r8
    int y; // r0
    int cb; // r23
    int cr; // r24
    unsigned char * outptr; // r3
    unsigned char * inptr0; // r8
    unsigned char * inptr1; // r9
    unsigned char * inptr2; // r10
    unsigned char * inptr3; // r11
    unsigned int col; // r12
    unsigned int num_cols; // r31
    unsigned char * range_limit; // r30
    int * Crrtab; // r29
    int * Cbbtab; // r28
    long * Crgtab; // r27
    long * Cbgtab; // r26
}
// Range: 0x805E101C -> 0x805E1020
static void start_pass_dcolor() {
}
// Range: 0x805E1020 -> 0x805E134C
void jIDColor(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_color_deconverter * cconvert; // r0
    int ci; // r5
}
