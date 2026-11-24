/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jctrans.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805D7188 -> 0x805D7188
*/
enum @enum {
    JCS_UNKNOWN = 0,
    JCS_GRAYSCALE = 1,
    JCS_RGB = 2,
    JCS_YCbCr = 3,
    JCS_CMYK = 4,
    JCS_YCCK = 5,
};
enum @enum {
    JDCT_ISLOW = 0,
    JDCT_IFAST = 1,
    JDCT_FLOAT = 2,
};
enum @enum {
    JBUF_PASS_THRU = 0,
    JBUF_SAVE_SOURCE = 1,
    JBUF_CRANK_DEST = 2,
    JBUF_SAVE_AND_PASS = 3,
};
// total size: 0x1D0
struct jpeg_decompress_struct {
    // Members
    struct jpeg_error_mgr * err; // offset 0x0, size 0x4
    struct jpeg_memory_mgr * mem; // offset 0x4, size 0x4
    struct jpeg_progress_mgr * progress; // offset 0x8, size 0x4
    void * client_data; // offset 0xC, size 0x4
    int is_decompressor; // offset 0x10, size 0x4
    int global_state; // offset 0x14, size 0x4
    struct jpeg_source_mgr * src; // offset 0x18, size 0x4
    unsigned int image_width; // offset 0x1C, size 0x4
    unsigned int image_height; // offset 0x20, size 0x4
    int num_components; // offset 0x24, size 0x4
    enum @enum jpeg_color_space; // offset 0x28, size 0x4
    enum @enum out_color_space; // offset 0x2C, size 0x4
    unsigned int scale_num; // offset 0x30, size 0x4
    unsigned int scale_denom; // offset 0x34, size 0x4
    double output_gamma; // offset 0x38, size 0x8
    int buffered_image; // offset 0x40, size 0x4
    int raw_data_out; // offset 0x44, size 0x4
    enum @enum dct_method; // offset 0x48, size 0x4
    int do_fancy_upsampling; // offset 0x4C, size 0x4
    int do_block_smoothing; // offset 0x50, size 0x4
    int quantize_colors; // offset 0x54, size 0x4
    enum @enum dither_mode; // offset 0x58, size 0x4
    int two_pass_quantize; // offset 0x5C, size 0x4
    int desired_number_of_colors; // offset 0x60, size 0x4
    int enable_1pass_quant; // offset 0x64, size 0x4
    int enable_external_quant; // offset 0x68, size 0x4
    int enable_2pass_quant; // offset 0x6C, size 0x4
    unsigned int output_width; // offset 0x70, size 0x4
    unsigned int output_height; // offset 0x74, size 0x4
    int out_color_components; // offset 0x78, size 0x4
    int output_components; // offset 0x7C, size 0x4
    int rec_outbuf_height; // offset 0x80, size 0x4
    int actual_number_of_colors; // offset 0x84, size 0x4
    unsigned char * * colormap; // offset 0x88, size 0x4
    unsigned int output_scanline; // offset 0x8C, size 0x4
    int input_scan_number; // offset 0x90, size 0x4
    unsigned int input_iMCU_row; // offset 0x94, size 0x4
    int output_scan_number; // offset 0x98, size 0x4
    unsigned int output_iMCU_row; // offset 0x9C, size 0x4
    int (* coef_bits)[64]; // offset 0xA0, size 0x4
    JQUANT_TBL * quant_tbl_ptrs[4]; // offset 0xA4, size 0x10
    JHUFF_TBL * dc_huff_tbl_ptrs[4]; // offset 0xB4, size 0x10
    JHUFF_TBL * ac_huff_tbl_ptrs[4]; // offset 0xC4, size 0x10
    int data_precision; // offset 0xD4, size 0x4
    jpeg_component_info * comp_info; // offset 0xD8, size 0x4
    int progressive_mode; // offset 0xDC, size 0x4
    int arith_code; // offset 0xE0, size 0x4
    unsigned char arith_dc_L[16]; // offset 0xE4, size 0x10
    unsigned char arith_dc_U[16]; // offset 0xF4, size 0x10
    unsigned char arith_ac_K[16]; // offset 0x104, size 0x10
    unsigned int restart_interval; // offset 0x114, size 0x4
    int saw_JFIF_marker; // offset 0x118, size 0x4
    unsigned char JFIF_major_version; // offset 0x11C, size 0x1
    unsigned char JFIF_minor_version; // offset 0x11D, size 0x1
    unsigned char density_unit; // offset 0x11E, size 0x1
    unsigned short X_density; // offset 0x120, size 0x2
    unsigned short Y_density; // offset 0x122, size 0x2
    int saw_Adobe_marker; // offset 0x124, size 0x4
    unsigned char Adobe_transform; // offset 0x128, size 0x1
    int CCIR601_sampling; // offset 0x12C, size 0x4
    struct jpeg_marker_struct * marker_list; // offset 0x130, size 0x4
    int max_h_samp_factor; // offset 0x134, size 0x4
    int max_v_samp_factor; // offset 0x138, size 0x4
    int min_DCT_scaled_size; // offset 0x13C, size 0x4
    unsigned int total_iMCU_rows; // offset 0x140, size 0x4
    unsigned char * sample_range_limit; // offset 0x144, size 0x4
    int comps_in_scan; // offset 0x148, size 0x4
    jpeg_component_info * cur_comp_info[4]; // offset 0x14C, size 0x10
    unsigned int MCUs_per_row; // offset 0x15C, size 0x4
    unsigned int MCU_rows_in_scan; // offset 0x160, size 0x4
    int blocks_in_MCU; // offset 0x164, size 0x4
    int MCU_membership[10]; // offset 0x168, size 0x28
    int Ss; // offset 0x190, size 0x4
    int Se; // offset 0x194, size 0x4
    int Ah; // offset 0x198, size 0x4
    int Al; // offset 0x19C, size 0x4
    int unread_marker; // offset 0x1A0, size 0x4
    struct jpeg_decomp_master * master; // offset 0x1A4, size 0x4
    struct jpeg_d_main_controller * main; // offset 0x1A8, size 0x4
    struct jpeg_d_coef_controller * coef; // offset 0x1AC, size 0x4
    struct jpeg_d_post_controller * post; // offset 0x1B0, size 0x4
    struct jpeg_input_controller * inputctl; // offset 0x1B4, size 0x4
    struct jpeg_marker_reader * marker; // offset 0x1B8, size 0x4
    struct jpeg_entropy_decoder * entropy; // offset 0x1BC, size 0x4
    struct jpeg_inverse_dct * idct; // offset 0x1C0, size 0x4
    struct jpeg_upsampler * upsample; // offset 0x1C4, size 0x4
    struct jpeg_color_deconverter * cconvert; // offset 0x1C8, size 0x4
    struct jpeg_color_quantizer * cquantize; // offset 0x1CC, size 0x4
};
// total size: 0x1C
struct jpeg_source_mgr {
    // Members
    unsigned char * next_input_byte; // offset 0x0, size 0x4
    unsigned long bytes_in_buffer; // offset 0x4, size 0x4
    void (* init_source)(struct jpeg_decompress_struct * cinfo); // offset 0x8, size 0x4
    int (* fill_input_buffer)(struct jpeg_decompress_struct * cinfo); // offset 0xC, size 0x4
    void (* skip_input_data)(struct jpeg_decompress_struct * cinfo, long num_bytes); // offset 0x10, size 0x4
    int (* resync_to_restart)(struct jpeg_decompress_struct * cinfo, int desired); // offset 0x14, size 0x4
    void (* term_source)(struct jpeg_decompress_struct * cinfo); // offset 0x18, size 0x4
};
enum @enum {
    JDITHER_NONE = 0,
    JDITHER_ORDERED = 1,
    JDITHER_FS = 2,
};
// total size: 0x14
struct jpeg_marker_struct {
    // Members
    struct jpeg_marker_struct * next; // offset 0x0, size 0x4
    unsigned char marker; // offset 0x4, size 0x1
    unsigned int original_length; // offset 0x8, size 0x4
    unsigned int data_length; // offset 0xC, size 0x4
    unsigned char * data; // offset 0x10, size 0x4
};
// total size: 0xC
struct jpeg_decomp_master {
    // Members
    void (* prepare_for_output_pass)(struct jpeg_decompress_struct * cinfo); // offset 0x0, size 0x4
    void (* finish_output_pass)(struct jpeg_decompress_struct * cinfo); // offset 0x4, size 0x4
    int is_dummy_pass; // offset 0x8, size 0x4
};
// total size: 0x8
struct jpeg_d_main_controller {
    // Members
    void (* start_pass)(struct jpeg_decompress_struct * cinfo, enum @enum pass_mode); // offset 0x0, size 0x4
    void (* process_data)(struct jpeg_decompress_struct * cinfo, unsigned char * * output_buf, unsigned int * out_row_ctr, unsigned int out_rows_avail); // offset 0x4, size 0x4
};
// total size: 0x14
struct jpeg_d_coef_controller {
    // Members
    void (* start_input_pass)(struct jpeg_decompress_struct * cinfo); // offset 0x0, size 0x4
    int (* consume_data)(struct jpeg_decompress_struct * cinfo); // offset 0x4, size 0x4
    void (* start_output_pass)(struct jpeg_decompress_struct * cinfo); // offset 0x8, size 0x4
    int (* decompress_data)(struct jpeg_decompress_struct * cinfo, unsigned char * * * output_buf); // offset 0xC, size 0x4
    struct jvirt_barray_control * * coef_arrays; // offset 0x10, size 0x4
};
// total size: 0x8
struct jpeg_d_post_controller {
    // Members
    void (* start_pass)(struct jpeg_decompress_struct * cinfo, enum @enum pass_mode); // offset 0x0, size 0x4
    void (* post_process_data)(struct jpeg_decompress_struct * cinfo, unsigned char * * * input_buf, unsigned int * in_row_group_ctr, unsigned int in_row_groups_avail, unsigned char * * output_buf, unsigned int * out_row_ctr, unsigned int out_rows_avail); // offset 0x4, size 0x4
};
// total size: 0x18
struct jpeg_input_controller {
    // Members
    int (* consume_input)(struct jpeg_decompress_struct * cinfo); // offset 0x0, size 0x4
    void (* reset_input_controller)(struct jpeg_decompress_struct * cinfo); // offset 0x4, size 0x4
    void (* start_input_pass)(struct jpeg_decompress_struct * cinfo); // offset 0x8, size 0x4
    void (* finish_input_pass)(struct jpeg_decompress_struct * cinfo); // offset 0xC, size 0x4
    int has_multiple_scans; // offset 0x10, size 0x4
    int eoi_reached; // offset 0x14, size 0x4
};
// total size: 0x1C
struct jpeg_marker_reader {
    // Members
    void (* reset_marker_reader)(struct jpeg_decompress_struct * cinfo); // offset 0x0, size 0x4
    int (* read_markers)(struct jpeg_decompress_struct * cinfo); // offset 0x4, size 0x4
    int (* read_restart_marker)(struct jpeg_decompress_struct * cinfo); // offset 0x8, size 0x4
    int saw_SOI; // offset 0xC, size 0x4
    int saw_SOF; // offset 0x10, size 0x4
    int next_restart_num; // offset 0x14, size 0x4
    unsigned int discarded_bytes; // offset 0x18, size 0x4
};
// total size: 0xC
struct jpeg_entropy_decoder {
    // Members
    void (* start_pass)(struct jpeg_decompress_struct * cinfo); // offset 0x0, size 0x4
    int (* decode_mcu)(struct jpeg_decompress_struct * cinfo, short (* * MCU_data)[64]); // offset 0x4, size 0x4
    int insufficient_data; // offset 0x8, size 0x4
};
// total size: 0x2C
struct jpeg_inverse_dct {
    // Members
    void (* start_pass)(struct jpeg_decompress_struct * cinfo); // offset 0x0, size 0x4
    void (* inverse_DCT[10])(struct jpeg_decompress_struct * cinfo, jpeg_component_info * compptr, short * coef_block, unsigned char * * output_buf, unsigned int output_col); // offset 0x4, size 0x28
};
// total size: 0xC
struct jpeg_upsampler {
    // Members
    void (* start_pass)(struct jpeg_decompress_struct * cinfo); // offset 0x0, size 0x4
    void (* upsample)(struct jpeg_decompress_struct * cinfo, unsigned char * * * input_buf, unsigned int * in_row_group_ctr, unsigned int in_row_groups_avail, unsigned char * * output_buf, unsigned int * out_row_ctr, unsigned int out_rows_avail); // offset 0x4, size 0x4
    int need_context_rows; // offset 0x8, size 0x4
};
// total size: 0x8
struct jpeg_color_deconverter {
    // Members
    void (* start_pass)(struct jpeg_decompress_struct * cinfo); // offset 0x0, size 0x4
    void (* color_convert)(struct jpeg_decompress_struct * cinfo, unsigned char * * * input_buf, unsigned int input_row, unsigned char * * output_buf, int num_rows); // offset 0x4, size 0x4
};
// total size: 0x10
struct jpeg_color_quantizer {
    // Members
    void (* start_pass)(struct jpeg_decompress_struct * cinfo, int is_pre_scan); // offset 0x0, size 0x4
    void (* color_quantize)(struct jpeg_decompress_struct * cinfo, unsigned char * * input_buf, unsigned char * * output_buf, int num_rows); // offset 0x4, size 0x4
    void (* finish_pass)(struct jpeg_decompress_struct * cinfo); // offset 0x8, size 0x4
    void (* new_color_map)(struct jpeg_decompress_struct * cinfo); // offset 0xC, size 0x4
};
typedef struct {
    // Members
    struct jpeg_c_coef_controller pub; // offset 0x0, size 0x8
    unsigned int iMCU_row_num; // offset 0x8, size 0x4
    unsigned int mcu_ctr; // offset 0xC, size 0x4
    int MCU_vert_offset; // offset 0x10, size 0x4
    int MCU_rows_per_iMCU_row; // offset 0x14, size 0x4
    struct jvirt_barray_control * * whole_image; // offset 0x18, size 0x4
    short (* dummy_buffer[10])[64]; // offset 0x1C, size 0x28
} my_coef_controller;
