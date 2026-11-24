/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdcoefct.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805DD92C -> 0x805DE9A8
*/
// Range: 0x805DD92C -> 0x805DD988
static void start_iMCU_row() {
    // Local variables
    my_coef_controller * coef; // r6
}
// Range: 0x805DD988 -> 0x805DD994
static void start_input_pass() {
}
// Range: 0x805DD994 -> 0x805DDA10
static void start_output_pass(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_coef_controller * coef; // r31
}
// Range: 0x805DDA10 -> 0x805DDC2C
static int decompress_onepass(struct jpeg_decompress_struct * cinfo /* r15 */, unsigned char * * * output_buf /* r16 */) {
    // Local variables
    my_coef_controller * coef; // r31
    unsigned int MCU_col_num; // r30
    unsigned int last_MCU_col; // r29
    unsigned int last_iMCU_row; // r28
    int blkn; // r27
    int ci; // r26
    int xindex; // r25
    int yindex; // r24
    int yoffset; // r23
    int useful_width; // r22
    unsigned char * * output_ptr; // r21
    unsigned int start_col; // r20
    unsigned int output_col; // r19
    jpeg_component_info * compptr; // r18
    void (* inverse_DCT)(struct jpeg_decompress_struct * cinfo, jpeg_component_info * compptr, short * coef_block, unsigned char * * output_buf, unsigned int output_col); // r17
}
// Range: 0x805DDC2C -> 0x805DDC34
static int dummy_consume_data() {
}
// Range: 0x805DDC34 -> 0x805DDE00
static int consume_data(struct jpeg_decompress_struct * cinfo /* r27 */) {
    // Local variables
    my_coef_controller * coef; // r31
    unsigned int MCU_col_num; // r30
    int blkn; // r5
    int ci; // r29
    int xindex; // r6
    int yindex; // r7
    int yoffset; // r28
    unsigned int start_col; // r8
    short (* * buffer[4])[64]; // r1+0x8
    short (* buffer_ptr)[64]; // r9
    jpeg_component_info * compptr; // r10
}
// Range: 0x805DDE00 -> 0x805DDFC0
static int decompress_data(struct jpeg_decompress_struct * cinfo /* r22 */, unsigned char * * * output_buf /* r23 */) {
    // Local variables
    my_coef_controller * coef; // r30
    unsigned int last_iMCU_row; // r29
    unsigned int block_num; // r21
    int ci; // r28
    int block_row; // r20
    int block_rows; // r27
    short (* * buffer)[64]; // r0
    short (* buffer_ptr)[64]; // r19
    unsigned char * * output_ptr; // r26
    unsigned int output_col; // r18
    jpeg_component_info * compptr; // r25
    void (* inverse_DCT)(struct jpeg_decompress_struct * cinfo, jpeg_component_info * compptr, short * coef_block, unsigned char * * output_buf, unsigned int output_col); // r24
}
// Range: 0x805DDFC0 -> 0x805DE12C
static int smoothing_ok(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_coef_controller * coef; // r29
    int smoothing_useful; // r31
    int ci; // r4
    int coefi; // r5
    jpeg_component_info * compptr; // r6
    JQUANT_TBL * qtable; // r3
    int * coef_bits; // r7
    int * coef_bits_latch; // r8
}
// Range: 0x805DE12C -> 0x805DE81C
static int decompress_smooth_data(struct jpeg_decompress_struct * cinfo /* r1+0x8 */, unsigned char * * * output_buf /* r1+0xC */) {
    // Local variables
    my_coef_controller * coef; // r1+0xC8
    unsigned int last_iMCU_row; // r1+0xC4
    unsigned int block_num; // r31
    unsigned int last_block_column; // r1+0xC0
    int ci; // r1+0xBC
    int block_row; // r1+0xB8
    int block_rows; // r1+0xB4
    int access_rows; // r0
    short (* * buffer)[64]; // r1+0xB0
    short (* buffer_ptr)[64]; // r30
    short (* prev_block_row)[64]; // r29
    short (* next_block_row)[64]; // r28
    unsigned char * * output_ptr; // r1+0xAC
    unsigned int output_col; // r1+0xA8
    jpeg_component_info * compptr; // r1+0xA4
    void (* inverse_DCT)(struct jpeg_decompress_struct * cinfo, jpeg_component_info * compptr, short * coef_block, unsigned char * * output_buf, unsigned int output_col); // r1+0xA0
    int first_row; // r1+0x9C
    int last_row; // r1+0x98
    short workspace[64]; // r1+0x10
    int * coef_bits; // r27
    JQUANT_TBL * quanttbl; // r3
    long Q00; // r26
    long Q01; // r25
    long Q02; // r24
    long Q10; // r23
    long Q11; // r22
    long Q20; // r21
    long num; // r0
    int DC1; // r1+0x94
    int DC2; // r20
    int DC3; // r19
    int DC4; // r14
    int DC5; // r18
    int DC6; // r17
    int DC7; // r1+0x90
    int DC8; // r16
    int DC9; // r15
    int Al; // r3
    int pred; // r0
}
// Range: 0x805DE81C -> 0x805DE9A8
void jIDCoefC(struct jpeg_decompress_struct * cinfo /* r26 */, int need_full_buffer /* r27 */) {
    // Local variables
    my_coef_controller * coef; // r0

    {
        // Range: 0x805DE878 -> 0x805DE928
        // Local variables
        jpeg_component_info * compptr; // r27
        int access_rows; // r28
        int ci; // r29
    }
    {
        // Range: 0x805DE928 -> 0x805DE990
        // Local variables
        int i; // r6
        short (* buffer)[64]; // r0
    }
}
