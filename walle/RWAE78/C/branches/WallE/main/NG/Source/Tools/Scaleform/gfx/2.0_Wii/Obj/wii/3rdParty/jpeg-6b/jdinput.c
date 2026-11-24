/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdinput.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805D891C -> 0x805D914C
*/
typedef struct {
    // Members
    struct jpeg_input_controller pub; // offset 0x0, size 0x18
    int inheaders; // offset 0x18, size 0x4
} my_input_controller;
// Range: 0x805D891C -> 0x805D8BB8
static void initial_setup(struct jpeg_decompress_struct * cinfo /* r29 */) {
    // Local variables
    int ci; // r31
    jpeg_component_info * compptr; // r30
}
// Range: 0x805D8BB8 -> 0x805D8DB8
static void per_scan_setup(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    int ci; // r31
    int mcublks; // r29
    int tmp; // r0
    jpeg_component_info * compptr; // r6
}
// Range: 0x805D8DB8 -> 0x805D8E98
static void latch_quant_tables(struct jpeg_decompress_struct * cinfo /* r31 */) {
    // Local variables
    int ci; // r30
    int qtblno; // r29
    jpeg_component_info * compptr; // r28
    JQUANT_TBL * qtbl; // r27
}
// Range: 0x805D8E98 -> 0x805D8F04
static void start_input_pass(struct jpeg_decompress_struct * cinfo /* r31 */) {
}
// Range: 0x805D8F04 -> 0x805D8F18
static void finish_input_pass() {
}
// Range: 0x805D8F18 -> 0x805D9048
static int consume_markers(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_input_controller * inputctl; // r29
    int val; // r31
}
// Range: 0x805D9048 -> 0x805D90C4
static void reset_input_controller(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_input_controller * inputctl; // r5
}
// Range: 0x805D90C4 -> 0x805D914C
void jIInCtlr(struct jpeg_decompress_struct * cinfo /* r31 */) {
    // Local variables
    my_input_controller * inputctl; // r0
}
