/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdphuff.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805DC230 -> 0x805DD128
*/
typedef struct {
    // Members
    struct jpeg_entropy_decoder pub; // offset 0x0, size 0xC
    bitread_perm_state bitstate; // offset 0xC, size 0x8
    savable_state saved; // offset 0x14, size 0x18
    unsigned int restarts_to_go; // offset 0x28, size 0x4
    d_derived_tbl * derived_tbls[4]; // offset 0x2C, size 0x10
    d_derived_tbl * ac_derived_tbl; // offset 0x3C, size 0x4
} phuff_entropy_decoder;
static int extend_test[16]; // size: 0x40, address: 0x806E90C0
static int extend_offset[16]; // size: 0x40, address: 0x806E9100
// Range: 0x805DC230 -> 0x805DC52C
static void start_pass_phuff_decoder(struct jpeg_decompress_struct * cinfo /* r25 */) {
    // Local variables
    phuff_entropy_decoder * entropy; // r31
    int is_DC_band; // r30
    int bad; // r6
    int ci; // r29
    int coefi; // r28
    int tbl; // r5
    int * coef_bit_ptr; // r27
    jpeg_component_info * compptr; // r3

    {
        // Range: 0x805DC324 -> 0x805DC404
        // Local variables
        int cindex; // r26
    }
}
// Range: 0x805DC52C -> 0x805DC5F0
static int process_restart(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    phuff_entropy_decoder * entropy; // r31
    int ci; // r5
}
// Range: 0x805DC5F0 -> 0x805DC878
static int decode_mcu_DC_first(struct jpeg_decompress_struct * cinfo /* r25 */, short (* * MCU_data)[64] /* r26 */) {
    // Local variables
    phuff_entropy_decoder * entropy; // r31
    int Al; // r30
    int s; // r24
    int r; // r7
    int blkn; // r29
    int ci; // r28
    short (* block)[64]; // r27
    long get_buffer; // r4
    int bits_left; // r5
    bitread_working_state br_state; // r1+0x1C
    savable_state state; // r1+0x8
    d_derived_tbl * tbl; // r24

    {
        // Range: 0x805DC6C8 -> 0x805DC6C8
        // Local variables
        int look; // r6
        int nb; // r7
    }

    // References
    // -> static int extend_offset[16];
    // -> static int extend_test[16];
}
// Range: 0x805DC878 -> 0x805DCB10
static int decode_mcu_AC_first(struct jpeg_decompress_struct * cinfo /* r24 */, short (* * MCU_data)[64] /* r22 */) {
    // Local variables
    phuff_entropy_decoder * entropy; // r31
    int Se; // r30
    int Al; // r29
    int s; // r23
    int k; // r28
    int r; // r22
    unsigned int EOBRUN; // r27
    short (* block)[64]; // r26
    long get_buffer; // r4
    int bits_left; // r5
    bitread_working_state br_state; // r1+0x8
    d_derived_tbl * tbl; // r25

    {
        // Range: 0x805DC91C -> 0x805DC91C
        // Local variables
        int look; // r6
        int nb; // r7
    }

    // References
    // -> int jZAGTable[80];
    // -> static int extend_offset[16];
    // -> static int extend_test[16];
}
// Range: 0x805DCB10 -> 0x805DCC38
static int decode_mcu_DC_refine(struct jpeg_decompress_struct * cinfo /* r29 */, short (* * MCU_data)[64] /* r30 */) {
    // Local variables
    phuff_entropy_decoder * entropy; // r31
    int p1; // r28
    int blkn; // r27
    short (* block)[64]; // r26
    long get_buffer; // r4
    int bits_left; // r5
    bitread_working_state br_state; // r1+0x8
}
// Range: 0x805DCC38 -> 0x805DD058
static int decode_mcu_AC_refine(struct jpeg_decompress_struct * cinfo /* r17 */, short (* * MCU_data)[64] /* r18 */) {
    // Local variables
    phuff_entropy_decoder * entropy; // r30
    int Se; // r29
    int p1; // r28
    int m1; // r27
    int s; // r26
    int k; // r25
    int r; // r24
    unsigned int EOBRUN; // r23
    short (* block)[64]; // r22
    short * thiscoef; // r0
    long get_buffer; // r21
    int bits_left; // r20
    bitread_working_state br_state; // r1+0x8
    d_derived_tbl * tbl; // r19
    int num_newnz; // r18
    int newnz_pos[64]; // r1+0x20

    {
        // Range: 0x805DCCE8 -> 0x805DCCE8
        // Local variables
        int look; // r4
        int nb; // r7
    }
    {
        // Range: 0x805DCF00 -> 0x805DCF30
        // Local variables
        int pos; // r4
    }

    // References
    // -> int jZAGTable[80];
}
// Range: 0x805DD058 -> 0x805DD128
void jIPHDecoder(struct jpeg_decompress_struct * cinfo /* r31 */) {
    // Local variables
    phuff_entropy_decoder * entropy; // r0
    int * coef_bit_ptr; // r3
    int ci; // r4
    int i; // r6
}
