/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jquant1.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805E134C -> 0x805E20E8
*/
typedef struct {
    // Members
    struct jpeg_color_quantizer pub; // offset 0x0, size 0x10
    unsigned char * * sv_colormap; // offset 0x10, size 0x4
    int sv_actual; // offset 0x14, size 0x4
    unsigned char * * colorindex; // offset 0x18, size 0x4
    int is_padded; // offset 0x1C, size 0x4
    int Ncolors[4]; // offset 0x20, size 0x10
    int row_index; // offset 0x30, size 0x4
    int (* odither[4])[16]; // offset 0x34, size 0x10
    short * fserrors[4]; // offset 0x44, size 0x10
    int on_odd_row; // offset 0x54, size 0x4
} my_cquantizer;
static unsigned char base_dither_matrix[16][16]; // size: 0x100, address: 0x806E9200
static int RGB_order[3]; // size: 0xC, address: 0x806E9300
// Range: 0x805E134C -> 0x805E147C
static int select_ncolors(struct jpeg_decompress_struct * cinfo /* r28 */, int * Ncolors /* r29 */) {
    // Local variables
    int nc; // r31
    int max_colors; // r30
    int total_colors; // r3
    int iroot; // r27
    int i; // r6
    int changed; // r7
    long temp; // r8

    // References
    // -> static int RGB_order[3];
}
// Range: 0x805E147C -> 0x805E149C
static int output_value() {
}
// Range: 0x805E149C -> 0x805E14BC
static int largest_input_value() {
}
// Range: 0x805E14BC -> 0x805E1634
static void create_colormap(struct jpeg_decompress_struct * cinfo /* r29 */) {
    // Local variables
    my_cquantizer * cquantize; // r31
    unsigned char * * colormap; // r0
    int total_colors; // r30
    int i; // r26
    int j; // r25
    int k; // r5
    int nci; // r24
    int blksize; // r23
    int blkdist; // r22
    int ptr; // r6
    int val; // r0

    {
        // Range: 0x805E14F0 -> 0x805E14F0
        // Local variables
        int * _mp; // r0
    }
}
// Range: 0x805E1634 -> 0x805E1784
static void create_colorindex(struct jpeg_decompress_struct * cinfo /* r27 */) {
    // Local variables
    my_cquantizer * cquantize; // r31
    unsigned char * indexptr; // r26
    int i; // r30
    int j; // r25
    int k; // r3
    int nci; // r24
    int blksize; // r29
    int val; // r23
    int pad; // r28
}
// Range: 0x805E1784 -> 0x805E1840
static int (* make_odither_array(int ncolors /* r31 */))[16] {
    // Local variables
    int (* odither)[16]; // r3
    int j; // r6
    int k; // r7
    long num; // r0
    long den; // r8

    // References
    // -> static unsigned char base_dither_matrix[16][16];
}
// Range: 0x805E1840 -> 0x805E18F4
static void create_odither_tables(struct jpeg_decompress_struct * cinfo /* r28 */) {
    // Local variables
    my_cquantizer * cquantize; // r30
    int (* odither)[16]; // r3
    int i; // r29
    int j; // r6
    int nci; // r4
}
// Range: 0x805E18F4 -> 0x805E1994
static void color_quantize() {
    // Local variables
    unsigned char * * colorindex; // r7
    int pixcode; // r8
    int ci; // r9
    unsigned char * ptrin; // r10
    unsigned char * ptrout; // r11
    int row; // r12
    unsigned int col; // r31
    unsigned int width; // r30
    int nc; // r29
}
// Range: 0x805E1994 -> 0x805E1A28
static void color_quantize3() {
    // Local variables
    my_cquantizer * cquantize; // r7
    int pixcode; // r3
    unsigned char * ptrin; // r7
    unsigned char * ptrout; // r8
    unsigned char * colorindex0; // r9
    unsigned char * colorindex1; // r10
    unsigned char * colorindex2; // r11
    int row; // r12
    unsigned int col; // r31
    unsigned int width; // r30
}
// Range: 0x805E1A28 -> 0x805E1B28
static void quantize_ord_dither(unsigned char * * input_buf /* r24 */, unsigned char * * output_buf /* r25 */, int num_rows /* r26 */) {
    // Local variables
    my_cquantizer * cquantize; // r30
    unsigned char * input_ptr; // r8
    unsigned char * output_ptr; // r9
    unsigned char * colorindex_ci; // r10
    int * dither; // r11
    int row_index; // r3
    int col_index; // r12
    int nc; // r29
    int ci; // r4
    int row; // r28
    unsigned int col; // r23
    unsigned int width; // r27
}
// Range: 0x805E1B28 -> 0x805E1C20
static void quantize3_ord_dither() {
    // Local variables
    my_cquantizer * cquantize; // r7
    int pixcode; // r22
    unsigned char * input_ptr; // r3
    unsigned char * output_ptr; // r8
    unsigned char * colorindex0; // r0
    unsigned char * colorindex1; // r9
    unsigned char * colorindex2; // r10
    int * dither0; // r11
    int * dither1; // r12
    int * dither2; // r31
    int row_index; // r30
    int col_index; // r29
    int row; // r28
    unsigned int col; // r27
    unsigned int width; // r26
}
// Range: 0x805E1C20 -> 0x805E1DB8
static void quantize_fs_dither(unsigned char * * input_buf /* r26 */, unsigned char * * output_buf /* r27 */, int num_rows /* r28 */) {
    // Local variables
    my_cquantizer * cquantize; // r24
    int cur; // r20
    int belowerr; // r3
    int bpreverr; // r4
    int bnexterr; // r21
    int delta; // r19
    short * errorptr; // r5
    unsigned char * input_ptr; // r6
    unsigned char * output_ptr; // r7
    unsigned char * colorindex_ci; // r8
    unsigned char * colormap_ci; // r9
    int pixcode; // r19
    int nc; // r23
    int dir; // r10
    int dirnc; // r11
    int ci; // r12
    int row; // r31
    unsigned int col; // r22
    unsigned int width; // r30
    unsigned char * range_limit; // r29
}
// Range: 0x805E1DB8 -> 0x805E1E48
static void alloc_fs_workspace(struct jpeg_decompress_struct * cinfo /* r28 */) {
    // Local variables
    my_cquantizer * cquantize; // r31
    unsigned long arraysize; // r30
    int i; // r29
}
// Range: 0x805E1E48 -> 0x805E1FC0
static void start_pass_1_quant(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_cquantizer * cquantize; // r31
    unsigned long arraysize; // r29
    int i; // r28
}
// Range: 0x805E1FC0 -> 0x805E1FC4
static void finish_pass_1_quant() {
}
// Range: 0x805E1FC4 -> 0x805E1FE0
static void new_color_map_1_quant() {
}
// Range: 0x805E1FE0 -> 0x805E20E8
void jI1Quant(struct jpeg_decompress_struct * cinfo /* r31 */) {
    // Local variables
    my_cquantizer * cquantize; // r0
}
