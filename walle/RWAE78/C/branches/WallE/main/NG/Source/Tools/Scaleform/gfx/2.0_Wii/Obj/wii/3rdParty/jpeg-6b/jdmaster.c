/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdmaster.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805D7E8C -> 0x805D891C
*/
typedef struct {
    // Members
    struct jpeg_decomp_master pub; // offset 0x0, size 0xC
    int pass_number; // offset 0xC, size 0x4
    int using_merged_upsample; // offset 0x10, size 0x4
    struct jpeg_color_quantizer * quantizer_1pass; // offset 0x14, size 0x4
    struct jpeg_color_quantizer * quantizer_2pass; // offset 0x18, size 0x4
} my_decomp_master;
// Range: 0x805D7E8C -> 0x805D7F70
static int use_merged_upsample() {
}
// Range: 0x805D7F70 -> 0x805D8214
void jCalcDimensions(struct jpeg_decompress_struct * cinfo /* r29 */) {
    // Local variables
    int ci; // r31
    jpeg_component_info * compptr; // r30

    {
        // Range: 0x805D8088 -> 0x805D80E8
        // Local variables
        int ssize; // r5
    }
}
// Range: 0x805D8214 -> 0x805D82D0
static void prepare_range_limit_table(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    unsigned char * table; // r31
    int i; // r4
}
// Range: 0x805D82D0 -> 0x805D8608
static void master_selection(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_decomp_master * master; // r31
    long samplesperrow; // r0

    {
        // Range: 0x805D8558 -> 0x805D85EC
        // Local variables
        int nscans; // r3
    }
}
// Range: 0x805D8608 -> 0x805D8860
static void prepare_for_output_pass(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_decomp_master * master; // r31
}
// Range: 0x805D8860 -> 0x805D88B0
static void finish_output_pass() {
    // Local variables
    my_decomp_master * master; // r31
}
// Range: 0x805D88B0 -> 0x805D891C
void jIDMaster(struct jpeg_decompress_struct * cinfo /* r31 */) {
    // Local variables
    my_decomp_master * master; // r0
}
