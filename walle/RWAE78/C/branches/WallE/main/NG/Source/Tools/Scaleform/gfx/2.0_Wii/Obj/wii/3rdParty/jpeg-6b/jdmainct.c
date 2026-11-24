/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdmainct.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805DD128 -> 0x805DD92C
*/
// Range: 0x805DD128 -> 0x805DD20C
static void alloc_funny_pointers(struct jpeg_decompress_struct * cinfo /* r27 */) {
    // Local variables
    my_main_controller * main; // r31
    int ci; // r30
    int rgroup; // r25
    int M; // r29
    jpeg_component_info * compptr; // r28
    unsigned char * * xbuf; // r5
}
// Range: 0x805DD20C -> 0x805DD314
static void make_funny_pointers() {
    // Local variables
    my_main_controller * main; // r4
    int ci; // r5
    int i; // r12
    int rgroup; // r0
    int M; // r6
    jpeg_component_info * compptr; // r7
    unsigned char * * buf; // r31
    unsigned char * * xbuf0; // r8
    unsigned char * * xbuf1; // r30
}
// Range: 0x805DD314 -> 0x805DD3D8
static void set_wraparound_pointers() {
    // Local variables
    my_main_controller * main; // r4
    int ci; // r5
    int i; // r10
    int rgroup; // r11
    int M; // r6
    jpeg_component_info * compptr; // r7
    unsigned char * * xbuf0; // r12
    unsigned char * * xbuf1; // r31
}
// Range: 0x805DD3D8 -> 0x805DD48C
static void set_bottom_pointers() {
    // Local variables
    my_main_controller * main; // r6
    int ci; // r7
    int i; // r8
    int rgroup; // r9
    int iMCUheight; // r8
    int rows_left; // r10
    jpeg_component_info * compptr; // r4
    unsigned char * * xbuf; // r11
}
// Range: 0x805DD48C -> 0x805DD544
static void start_pass_main() {
    // Local variables
    my_main_controller * main; // r31
}
// Range: 0x805DD544 -> 0x805DD5FC
static void process_data_simple_main(struct jpeg_decompress_struct * cinfo /* r26 */, unsigned char * * output_buf /* r27 */, unsigned int * out_row_ctr /* r28 */, unsigned int out_rows_avail /* r29 */) {
    // Local variables
    my_main_controller * main; // r31
    unsigned int rowgroups_avail; // r30
}
// Range: 0x805DD5FC -> 0x805DD7C4
static void process_data_context_main(struct jpeg_decompress_struct * cinfo /* r27 */, unsigned char * * output_buf /* r28 */, unsigned int * out_row_ctr /* r29 */, unsigned int out_rows_avail /* r30 */) {
    // Local variables
    my_main_controller * main; // r31
}
// Range: 0x805DD7C4 -> 0x805DD7EC
static void process_data_crank_post() {
}
// Range: 0x805DD7EC -> 0x805DD92C
void jIDMainC(struct jpeg_decompress_struct * cinfo /* r30 */, int need_full_buffer /* r27 */) {
    // Local variables
    my_main_controller * main; // r0
    int ci; // r29
    int ngroups; // r28
    jpeg_component_info * compptr; // r27
}
