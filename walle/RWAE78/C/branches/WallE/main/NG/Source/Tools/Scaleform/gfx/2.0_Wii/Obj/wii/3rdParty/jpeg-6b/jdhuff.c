/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdhuff.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805DB474 -> 0x805DC230
*/
typedef struct {
    // Members
    struct jpeg_entropy_decoder pub; // offset 0x0, size 0xC
    bitread_perm_state bitstate; // offset 0xC, size 0x8
    savable_state saved; // offset 0x14, size 0x18
    unsigned int restarts_to_go; // offset 0x24, size 0x4
    d_derived_tbl * dc_derived_tbls[4]; // offset 0x28, size 0x10
    d_derived_tbl * ac_derived_tbls[4]; // offset 0x38, size 0x10
    d_derived_tbl * dc_cur_tbls[10]; // offset 0x48, size 0x28
    d_derived_tbl * ac_cur_tbls[10]; // offset 0x70, size 0x28
    int dc_needed[10]; // offset 0x98, size 0x28
    int ac_needed[10]; // offset 0xC0, size 0x28
} huff_entropy_decoder;
typedef struct {
    // Members
    long get_buffer; // offset 0x0, size 0x4
    int bits_left; // offset 0x4, size 0x4
} bitread_perm_state;
typedef struct {
    // Members
    long maxcode[18]; // offset 0x0, size 0x48
    long valoffset[17]; // offset 0x48, size 0x44
    JHUFF_TBL * pub; // offset 0x8C, size 0x4
    int look_nbits[256]; // offset 0x90, size 0x400
    unsigned char look_sym[256]; // offset 0x490, size 0x100
} d_derived_tbl;
typedef struct {
    // Members
    unsigned char * next_input_byte; // offset 0x0, size 0x4
    unsigned long bytes_in_buffer; // offset 0x4, size 0x4
    long get_buffer; // offset 0x8, size 0x4
    int bits_left; // offset 0xC, size 0x4
    struct jpeg_decompress_struct * cinfo; // offset 0x10, size 0x4
} bitread_working_state;
static int extend_test[16]; // size: 0x40, address: 0x806E9040
static int extend_offset[16]; // size: 0x40, address: 0x806E9080
// Range: 0x805DB474 -> 0x805DB61C
static void start_pass_huff_decoder(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    huff_entropy_decoder * entropy; // r31
    int ci; // r28
    int blkn; // r6
    int dctbl; // r5
    int actbl; // r27
    jpeg_component_info * compptr; // r7
}
// Range: 0x805DB61C -> 0x805DB95C
void jMkDDerived(struct jpeg_decompress_struct * cinfo /* r24 */, int isDC /* r25 */, int tblno /* r27 */, d_derived_tbl * * pdtbl /* r26 */) {
    // Local variables
    d_derived_tbl * dtbl; // r30
    int p; // r29
    int i; // r28
    int l; // r27
    int si; // r27
    int numsymbols; // r26
    int lookbits; // r5
    int ctr; // r4
    char huffsize[257]; // r1+0x8
    unsigned int huffcode[257]; // r1+0x10C
    unsigned int code; // r28
}
// Range: 0x805DB95C -> 0x805DBAE4
int jFilBitBuf(bitread_working_state * state /* r27 */, long get_buffer /* r28 */, int bits_left /* r29 */, int nbits /* r25 */) {
    // Local variables
    unsigned char * next_input_byte; // r31
    unsigned long bytes_in_buffer; // r26
    struct jpeg_decompress_struct * cinfo; // r30

    {
        // Range: 0x805DB998 -> 0x805DBA58
        // Local variables
        int c; // r3
    }
}
// Range: 0x805DBAE4 -> 0x805DBC1C
int jHufDecode(bitread_working_state * state /* r28 */, d_derived_tbl * htbl /* r29 */, int min_bits /* r30 */) {
    // Local variables
    int l; // reg65535
    long code; // r31
}
// Range: 0x805DBC1C -> 0x805DBCDC
static int process_restart(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    huff_entropy_decoder * entropy; // r31
    int ci; // r5
}
// Range: 0x805DBCDC -> 0x805DC1AC
static int decode_mcu(struct jpeg_decompress_struct * cinfo /* r24 */, short (* * MCU_data)[64] /* r25 */) {
    // Local variables
    huff_entropy_decoder * entropy; // r30
    int blkn; // r29
    long get_buffer; // r4
    int bits_left; // r5
    bitread_working_state br_state; // r1+0x18
    savable_state state; // r1+0x8

    {
        // Range: 0x805DBD74 -> 0x805DC134
        // Local variables
        int r; // r7
        int k; // r31
        int s; // r26
        d_derived_tbl * actbl; // r27
        d_derived_tbl * dctbl; // r26
        short (* block)[64]; // r28

        {
            // Range: 0x805DBD90 -> 0x805DBD90
            // Local variables
            int look; // r6
            int nb; // r7
        }
        {
            // Range: 0x805DBEA4 -> 0x805DBED4
            // Local variables
            int ci; // r0
        }
        {
            // Range: 0x805DBEEC -> 0x805DBEEC
            // Local variables
            int look; // r6
            int nb; // r7
        }
        {
            // Range: 0x805DC040 -> 0x805DC040
            // Local variables
            int look; // r6
            int nb; // r7
        }
    }

    // References
    // -> int jZAGTable[80];
    // -> static int extend_offset[16];
    // -> static int extend_test[16];
}
// Range: 0x805DC1AC -> 0x805DC230
void jIHDecoder(struct jpeg_decompress_struct * cinfo /* r31 */) {
    // Local variables
    huff_entropy_decoder * entropy; // r0
    int i; // r5
}
