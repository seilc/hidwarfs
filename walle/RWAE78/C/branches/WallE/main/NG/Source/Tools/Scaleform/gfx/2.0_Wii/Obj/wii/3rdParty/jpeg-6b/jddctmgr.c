/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jddctmgr.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805DEEBC -> 0x805DF23C
*/
typedef struct {
    // Members
    struct jpeg_inverse_dct pub; // offset 0x0, size 0x2C
    int cur_method[10]; // offset 0x2C, size 0x28
} my_idct_controller;
static short aanscales[64]; // size: 0x80, address: 0x806E9140
static double aanscalefactor[8]; // size: 0x40, address: 0x806E91C0
// Range: 0x805DEEBC -> 0x805DF174
static void start_pass(struct jpeg_decompress_struct * cinfo /* r26 */) {
    // Local variables
    my_idct_controller * idct; // r31
    int ci; // r30
    int i; // r5
    jpeg_component_info * compptr; // r29
    int method; // r28
    void (* method_ptr)(struct jpeg_decompress_struct * cinfo, jpeg_component_info * compptr, short * coef_block, unsigned char * * output_buf, unsigned int output_col); // r27
    JQUANT_TBL * qtbl; // r6

    {
        // Range: 0x805DF034 -> 0x805DF05C
        // Local variables
        int * ismtbl; // r4
    }
    {
        // Range: 0x805DF060 -> 0x805DF0A0
        // Local variables
        int * ifmtbl; // r7
    }
    {
        // Range: 0x805DF0A4 -> 0x805DF124
        // Local variables
        int col; // r9
        int row; // r8
        float * fmtbl; // r7
    }

    // References
    // -> static double aanscalefactor[8];
    // -> static short aanscales[64];
}
// Range: 0x805DF174 -> 0x805DF23C
void jIIDCT(struct jpeg_decompress_struct * cinfo /* r28 */) {
    // Local variables
    my_idct_controller * idct; // r0
    int ci; // r30
    jpeg_component_info * compptr; // r29
}
