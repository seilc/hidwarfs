/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jcapimin.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805D7188 -> 0x805D7188
*/
// total size: 0x178
struct jpeg_compress_struct {
    // Members
    struct jpeg_error_mgr * err; // offset 0x0, size 0x4
    struct jpeg_memory_mgr * mem; // offset 0x4, size 0x4
    struct jpeg_progress_mgr * progress; // offset 0x8, size 0x4
    void * client_data; // offset 0xC, size 0x4
    int is_decompressor; // offset 0x10, size 0x4
    int global_state; // offset 0x14, size 0x4
    struct jpeg_destination_mgr * dest; // offset 0x18, size 0x4
    unsigned int image_width; // offset 0x1C, size 0x4
    unsigned int image_height; // offset 0x20, size 0x4
    int input_components; // offset 0x24, size 0x4
    enum @enum in_color_space; // offset 0x28, size 0x4
    double input_gamma; // offset 0x30, size 0x8
    int data_precision; // offset 0x38, size 0x4
    int num_components; // offset 0x3C, size 0x4
    enum @enum jpeg_color_space; // offset 0x40, size 0x4
    jpeg_component_info * comp_info; // offset 0x44, size 0x4
    JQUANT_TBL * quant_tbl_ptrs[4]; // offset 0x48, size 0x10
    JHUFF_TBL * dc_huff_tbl_ptrs[4]; // offset 0x58, size 0x10
    JHUFF_TBL * ac_huff_tbl_ptrs[4]; // offset 0x68, size 0x10
    unsigned char arith_dc_L[16]; // offset 0x78, size 0x10
    unsigned char arith_dc_U[16]; // offset 0x88, size 0x10
    unsigned char arith_ac_K[16]; // offset 0x98, size 0x10
    int num_scans; // offset 0xA8, size 0x4
    jpeg_scan_info * scan_info; // offset 0xAC, size 0x4
    int raw_data_in; // offset 0xB0, size 0x4
    int arith_code; // offset 0xB4, size 0x4
    int optimize_coding; // offset 0xB8, size 0x4
    int CCIR601_sampling; // offset 0xBC, size 0x4
    int smoothing_factor; // offset 0xC0, size 0x4
    enum @enum dct_method; // offset 0xC4, size 0x4
    unsigned int restart_interval; // offset 0xC8, size 0x4
    int restart_in_rows; // offset 0xCC, size 0x4
    int write_JFIF_header; // offset 0xD0, size 0x4
    unsigned char JFIF_major_version; // offset 0xD4, size 0x1
    unsigned char JFIF_minor_version; // offset 0xD5, size 0x1
    unsigned char density_unit; // offset 0xD6, size 0x1
    unsigned short X_density; // offset 0xD8, size 0x2
    unsigned short Y_density; // offset 0xDA, size 0x2
    int write_Adobe_marker; // offset 0xDC, size 0x4
    unsigned int next_scanline; // offset 0xE0, size 0x4
    int progressive_mode; // offset 0xE4, size 0x4
    int max_h_samp_factor; // offset 0xE8, size 0x4
    int max_v_samp_factor; // offset 0xEC, size 0x4
    unsigned int total_iMCU_rows; // offset 0xF0, size 0x4
    int comps_in_scan; // offset 0xF4, size 0x4
    jpeg_component_info * cur_comp_info[4]; // offset 0xF8, size 0x10
    unsigned int MCUs_per_row; // offset 0x108, size 0x4
    unsigned int MCU_rows_in_scan; // offset 0x10C, size 0x4
    int blocks_in_MCU; // offset 0x110, size 0x4
    int MCU_membership[10]; // offset 0x114, size 0x28
    int Ss; // offset 0x13C, size 0x4
    int Se; // offset 0x140, size 0x4
    int Ah; // offset 0x144, size 0x4
    int Al; // offset 0x148, size 0x4
    struct jpeg_comp_master * master; // offset 0x14C, size 0x4
    struct jpeg_c_main_controller * main; // offset 0x150, size 0x4
    struct jpeg_c_prep_controller * prep; // offset 0x154, size 0x4
    struct jpeg_c_coef_controller * coef; // offset 0x158, size 0x4
    struct jpeg_marker_writer * marker; // offset 0x15C, size 0x4
    struct jpeg_color_converter * cconvert; // offset 0x160, size 0x4
    struct jpeg_downsampler * downsample; // offset 0x164, size 0x4
    struct jpeg_forward_dct * fdct; // offset 0x168, size 0x4
    struct jpeg_entropy_encoder * entropy; // offset 0x16C, size 0x4
    jpeg_scan_info * script_space; // offset 0x170, size 0x4
    int script_space_size; // offset 0x174, size 0x4
};
// total size: 0x84
struct jpeg_error_mgr {
    // Members
    void (* error_exit)(struct jpeg_common_struct * cinfo); // offset 0x0, size 0x4
    void (* emit_message)(struct jpeg_common_struct * cinfo, int msg_level); // offset 0x4, size 0x4
    void (* output_message)(struct jpeg_common_struct * cinfo); // offset 0x8, size 0x4
    void (* format_message)(struct jpeg_common_struct * cinfo, char * buffer); // offset 0xC, size 0x4
    void (* reset_error_mgr)(struct jpeg_common_struct * cinfo); // offset 0x10, size 0x4
    int msg_code; // offset 0x14, size 0x4
    union {
        // Members
        int i[8]; // offset 0x0, size 0x20
        char s[80]; // offset 0x0, size 0x50
    } msg_parm; // offset 0x18, size 0x50
    int trace_level; // offset 0x68, size 0x4
    long num_warnings; // offset 0x6C, size 0x4
    char * * jpeg_message_table; // offset 0x70, size 0x4
    int last_jpeg_message; // offset 0x74, size 0x4
    char * * addon_message_table; // offset 0x78, size 0x4
    int first_addon_message; // offset 0x7C, size 0x4
    int last_addon_message; // offset 0x80, size 0x4
};
// total size: 0x18
struct jpeg_common_struct {
    // Members
    struct jpeg_error_mgr * err; // offset 0x0, size 0x4
    struct jpeg_memory_mgr * mem; // offset 0x4, size 0x4
    struct jpeg_progress_mgr * progress; // offset 0x8, size 0x4
    void * client_data; // offset 0xC, size 0x4
    int is_decompressor; // offset 0x10, size 0x4
    int global_state; // offset 0x14, size 0x4
};
// total size: 0x34
struct jpeg_memory_mgr {
    // Members
    void * (* alloc_small)(struct jpeg_common_struct * cinfo, int pool_id, unsigned long sizeofobject); // offset 0x0, size 0x4
    void * (* alloc_large)(struct jpeg_common_struct * cinfo, int pool_id, unsigned long sizeofobject); // offset 0x4, size 0x4
    unsigned char * * (* alloc_sarray)(struct jpeg_common_struct * cinfo, int pool_id, unsigned int samplesperrow, unsigned int numrows); // offset 0x8, size 0x4
    short (* * (* alloc_barray)(struct jpeg_common_struct * cinfo, int pool_id, unsigned int blocksperrow, unsigned int numrows))[64]; // offset 0xC, size 0x4
    struct jvirt_sarray_control * (* request_virt_sarray)(struct jpeg_common_struct * cinfo, int pool_id, int pre_zero, unsigned int samplesperrow, unsigned int numrows, unsigned int maxaccess); // offset 0x10, size 0x4
    struct jvirt_barray_control * (* request_virt_barray)(struct jpeg_common_struct * cinfo, int pool_id, int pre_zero, unsigned int blocksperrow, unsigned int numrows, unsigned int maxaccess); // offset 0x14, size 0x4
    void (* realize_virt_arrays)(struct jpeg_common_struct * cinfo); // offset 0x18, size 0x4
    unsigned char * * (* access_virt_sarray)(struct jpeg_common_struct * cinfo, struct jvirt_sarray_control * ptr, unsigned int start_row, unsigned int num_rows, int writable); // offset 0x1C, size 0x4
    short (* * (* access_virt_barray)(struct jpeg_common_struct * cinfo, struct jvirt_barray_control * ptr, unsigned int start_row, unsigned int num_rows, int writable))[64]; // offset 0x20, size 0x4
    void (* free_pool)(struct jpeg_common_struct * cinfo, int pool_id); // offset 0x24, size 0x4
    void (* self_destruct)(struct jpeg_common_struct * cinfo); // offset 0x28, size 0x4
    long max_memory_to_use; // offset 0x2C, size 0x4
    long max_alloc_chunk; // offset 0x30, size 0x4
};
// total size: 0x14
struct jpeg_progress_mgr {
    // Members
    void (* progress_monitor)(struct jpeg_common_struct * cinfo); // offset 0x0, size 0x4
    long pass_counter; // offset 0x4, size 0x4
    long pass_limit; // offset 0x8, size 0x4
    int completed_passes; // offset 0xC, size 0x4
    int total_passes; // offset 0x10, size 0x4
};
// total size: 0x14
struct jpeg_destination_mgr {
    // Members
    unsigned char * next_output_byte; // offset 0x0, size 0x4
    unsigned long free_in_buffer; // offset 0x4, size 0x4
    void (* init_destination)(struct jpeg_compress_struct * cinfo); // offset 0x8, size 0x4
    int (* empty_output_buffer)(struct jpeg_compress_struct * cinfo); // offset 0xC, size 0x4
    void (* term_destination)(struct jpeg_compress_struct * cinfo); // offset 0x10, size 0x4
};
enum @enum {
    JCS_UNKNOWN = 0,
    JCS_GRAYSCALE = 1,
    JCS_RGB = 2,
    JCS_YCbCr = 3,
    JCS_CMYK = 4,
    JCS_YCCK = 5,
};
typedef struct {
    // Members
    int component_id; // offset 0x0, size 0x4
    int component_index; // offset 0x4, size 0x4
    int h_samp_factor; // offset 0x8, size 0x4
    int v_samp_factor; // offset 0xC, size 0x4
    int quant_tbl_no; // offset 0x10, size 0x4
    int dc_tbl_no; // offset 0x14, size 0x4
    int ac_tbl_no; // offset 0x18, size 0x4
    unsigned int width_in_blocks; // offset 0x1C, size 0x4
    unsigned int height_in_blocks; // offset 0x20, size 0x4
    int DCT_scaled_size; // offset 0x24, size 0x4
    unsigned int downsampled_width; // offset 0x28, size 0x4
    unsigned int downsampled_height; // offset 0x2C, size 0x4
    int component_needed; // offset 0x30, size 0x4
    int MCU_width; // offset 0x34, size 0x4
    int MCU_height; // offset 0x38, size 0x4
    int MCU_blocks; // offset 0x3C, size 0x4
    int MCU_sample_width; // offset 0x40, size 0x4
    int last_col_width; // offset 0x44, size 0x4
    int last_row_height; // offset 0x48, size 0x4
    JQUANT_TBL * quant_table; // offset 0x4C, size 0x4
    void * dct_table; // offset 0x50, size 0x4
} jpeg_component_info;
typedef struct {
    // Members
    unsigned short quantval[64]; // offset 0x0, size 0x80
    int sent_table; // offset 0x80, size 0x4
} JQUANT_TBL;
typedef struct {
    // Members
    unsigned char bits[17]; // offset 0x0, size 0x11
    unsigned char huffval[256]; // offset 0x11, size 0x100
    int sent_table; // offset 0x114, size 0x4
} JHUFF_TBL;
typedef struct {
    // Members
    int comps_in_scan; // offset 0x0, size 0x4
    int component_index[4]; // offset 0x4, size 0x10
    int Ss; // offset 0x14, size 0x4
    int Se; // offset 0x18, size 0x4
    int Ah; // offset 0x1C, size 0x4
    int Al; // offset 0x20, size 0x4
} jpeg_scan_info;
enum @enum {
    JDCT_ISLOW = 0,
    JDCT_IFAST = 1,
    JDCT_FLOAT = 2,
};
// total size: 0x14
struct jpeg_comp_master {
    // Members
    void (* prepare_for_pass)(struct jpeg_compress_struct * cinfo); // offset 0x0, size 0x4
    void (* pass_startup)(struct jpeg_compress_struct * cinfo); // offset 0x4, size 0x4
    void (* finish_pass)(struct jpeg_compress_struct * cinfo); // offset 0x8, size 0x4
    int call_pass_startup; // offset 0xC, size 0x4
    int is_last_pass; // offset 0x10, size 0x4
};
// total size: 0x8
struct jpeg_c_main_controller {
    // Members
    void (* start_pass)(struct jpeg_compress_struct * cinfo, enum @enum pass_mode); // offset 0x0, size 0x4
    void (* process_data)(struct jpeg_compress_struct * cinfo, unsigned char * * input_buf, unsigned int * in_row_ctr, unsigned int in_rows_avail); // offset 0x4, size 0x4
};
enum @enum {
    JBUF_PASS_THRU = 0,
    JBUF_SAVE_SOURCE = 1,
    JBUF_CRANK_DEST = 2,
    JBUF_SAVE_AND_PASS = 3,
};
// total size: 0x8
struct jpeg_c_prep_controller {
    // Members
    void (* start_pass)(struct jpeg_compress_struct * cinfo, enum @enum pass_mode); // offset 0x0, size 0x4
    void (* pre_process_data)(struct jpeg_compress_struct * cinfo, unsigned char * * input_buf, unsigned int * in_row_ctr, unsigned int in_rows_avail, unsigned char * * * output_buf, unsigned int * out_row_group_ctr, unsigned int out_row_groups_avail); // offset 0x4, size 0x4
};
// total size: 0x8
struct jpeg_c_coef_controller {
    // Members
    void (* start_pass)(struct jpeg_compress_struct * cinfo, enum @enum pass_mode); // offset 0x0, size 0x4
    int (* compress_data)(struct jpeg_compress_struct * cinfo, unsigned char * * * input_buf); // offset 0x4, size 0x4
};
// total size: 0x1C
struct jpeg_marker_writer {
    // Members
    void (* write_file_header)(struct jpeg_compress_struct * cinfo); // offset 0x0, size 0x4
    void (* write_frame_header)(struct jpeg_compress_struct * cinfo); // offset 0x4, size 0x4
    void (* write_scan_header)(struct jpeg_compress_struct * cinfo); // offset 0x8, size 0x4
    void (* write_file_trailer)(struct jpeg_compress_struct * cinfo); // offset 0xC, size 0x4
    void (* write_tables_only)(struct jpeg_compress_struct * cinfo); // offset 0x10, size 0x4
    void (* write_marker_header)(struct jpeg_compress_struct * cinfo, int marker, unsigned int datalen); // offset 0x14, size 0x4
    void (* write_marker_byte)(struct jpeg_compress_struct * cinfo, int val); // offset 0x18, size 0x4
};
// total size: 0x8
struct jpeg_color_converter {
    // Members
    void (* start_pass)(struct jpeg_compress_struct * cinfo); // offset 0x0, size 0x4
    void (* color_convert)(struct jpeg_compress_struct * cinfo, unsigned char * * input_buf, unsigned char * * * output_buf, unsigned int output_row, int num_rows); // offset 0x4, size 0x4
};
// total size: 0xC
struct jpeg_downsampler {
    // Members
    void (* start_pass)(struct jpeg_compress_struct * cinfo); // offset 0x0, size 0x4
    void (* downsample)(struct jpeg_compress_struct * cinfo, unsigned char * * * input_buf, unsigned int in_row_index, unsigned char * * * output_buf, unsigned int out_row_group_index); // offset 0x4, size 0x4
    int need_context_rows; // offset 0x8, size 0x4
};
// total size: 0x8
struct jpeg_forward_dct {
    // Members
    void (* start_pass)(struct jpeg_compress_struct * cinfo); // offset 0x0, size 0x4
    void (* forward_DCT)(struct jpeg_compress_struct * cinfo, jpeg_component_info * compptr, unsigned char * * sample_data, short (* coef_blocks)[64], unsigned int start_row, unsigned int start_col, unsigned int num_blocks); // offset 0x4, size 0x4
};
// total size: 0xC
struct jpeg_entropy_encoder {
    // Members
    void (* start_pass)(struct jpeg_compress_struct * cinfo, int gather_statistics); // offset 0x0, size 0x4
    int (* encode_mcu)(struct jpeg_compress_struct * cinfo, short (* * MCU_data)[64]); // offset 0x4, size 0x4
    void (* finish_pass)(struct jpeg_compress_struct * cinfo); // offset 0x8, size 0x4
};
