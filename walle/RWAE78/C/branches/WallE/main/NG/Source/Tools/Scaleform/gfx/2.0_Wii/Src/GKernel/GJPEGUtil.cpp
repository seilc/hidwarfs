/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GJPEGUtil.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805D1000 -> 0x805D1A38
*/
// total size: 0x1D0
class jpeg_decompress_struct {
    // Members
    class jpeg_error_mgr * err; // offset 0x0, size 0x4
    class jpeg_memory_mgr * mem; // offset 0x4, size 0x4
    class jpeg_progress_mgr * progress; // offset 0x8, size 0x4
    void * client_data; // offset 0xC, size 0x4
    int is_decompressor; // offset 0x10, size 0x4
    int global_state; // offset 0x14, size 0x4
    class jpeg_source_mgr * src; // offset 0x18, size 0x4
    unsigned int image_width; // offset 0x1C, size 0x4
    unsigned int image_height; // offset 0x20, size 0x4
    int num_components; // offset 0x24, size 0x4
    enum J_COLOR_SPACE jpeg_color_space; // offset 0x28, size 0x4
    enum J_COLOR_SPACE out_color_space; // offset 0x2C, size 0x4
    unsigned int scale_num; // offset 0x30, size 0x4
    unsigned int scale_denom; // offset 0x34, size 0x4
    double output_gamma; // offset 0x38, size 0x8
    int buffered_image; // offset 0x40, size 0x4
    int raw_data_out; // offset 0x44, size 0x4
    enum J_DCT_METHOD dct_method; // offset 0x48, size 0x4
    int do_fancy_upsampling; // offset 0x4C, size 0x4
    int do_block_smoothing; // offset 0x50, size 0x4
    int quantize_colors; // offset 0x54, size 0x4
    enum J_DITHER_MODE dither_mode; // offset 0x58, size 0x4
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
    class JQUANT_TBL * quant_tbl_ptrs[4]; // offset 0xA4, size 0x10
    class JHUFF_TBL * dc_huff_tbl_ptrs[4]; // offset 0xB4, size 0x10
    class JHUFF_TBL * ac_huff_tbl_ptrs[4]; // offset 0xC4, size 0x10
    int data_precision; // offset 0xD4, size 0x4
    class jpeg_component_info * comp_info; // offset 0xD8, size 0x4
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
    class jpeg_marker_struct * marker_list; // offset 0x130, size 0x4
    int max_h_samp_factor; // offset 0x134, size 0x4
    int max_v_samp_factor; // offset 0x138, size 0x4
    int min_DCT_scaled_size; // offset 0x13C, size 0x4
    unsigned int total_iMCU_rows; // offset 0x140, size 0x4
    unsigned char * sample_range_limit; // offset 0x144, size 0x4
    int comps_in_scan; // offset 0x148, size 0x4
    class jpeg_component_info * cur_comp_info[4]; // offset 0x14C, size 0x10
    unsigned int MCUs_per_row; // offset 0x15C, size 0x4
    unsigned int MCU_rows_in_scan; // offset 0x160, size 0x4
    int blocks_in_MCU; // offset 0x164, size 0x4
    int MCU_membership[10]; // offset 0x168, size 0x28
    int Ss; // offset 0x190, size 0x4
    int Se; // offset 0x194, size 0x4
    int Ah; // offset 0x198, size 0x4
    int Al; // offset 0x19C, size 0x4
    int unread_marker; // offset 0x1A0, size 0x4
    class jpeg_decomp_master * master; // offset 0x1A4, size 0x4
    class jpeg_d_main_controller * main; // offset 0x1A8, size 0x4
    class jpeg_d_coef_controller * coef; // offset 0x1AC, size 0x4
    class jpeg_d_post_controller * post; // offset 0x1B0, size 0x4
    class jpeg_input_controller * inputctl; // offset 0x1B4, size 0x4
    class jpeg_marker_reader * marker; // offset 0x1B8, size 0x4
    class jpeg_entropy_decoder * entropy; // offset 0x1BC, size 0x4
    class jpeg_inverse_dct * idct; // offset 0x1C0, size 0x4
    class jpeg_upsampler * upsample; // offset 0x1C4, size 0x4
    class jpeg_color_deconverter * cconvert; // offset 0x1C8, size 0x4
    class jpeg_color_quantizer * cquantize; // offset 0x1CC, size 0x4
};
// total size: 0x84
class jpeg_error_mgr {
    // Members
    void (* error_exit)(class jpeg_common_struct * cinfo); // offset 0x0, size 0x4
    void (* emit_message)(class jpeg_common_struct * cinfo, int msg_level); // offset 0x4, size 0x4
    void (* output_message)(class jpeg_common_struct * cinfo); // offset 0x8, size 0x4
    void (* format_message)(class jpeg_common_struct * cinfo, char * buffer); // offset 0xC, size 0x4
    void (* reset_error_mgr)(class jpeg_common_struct * cinfo); // offset 0x10, size 0x4
    int msg_code; // offset 0x14, size 0x4
    class @class msg_parm; // offset 0x18, size 0x50
    int trace_level; // offset 0x68, size 0x4
    long num_warnings; // offset 0x6C, size 0x4
    char * * jpeg_message_table; // offset 0x70, size 0x4
    int last_jpeg_message; // offset 0x74, size 0x4
    char * * addon_message_table; // offset 0x78, size 0x4
    int first_addon_message; // offset 0x7C, size 0x4
    int last_addon_message; // offset 0x80, size 0x4
};
// total size: 0x18
class jpeg_common_struct {
    // Members
    class jpeg_error_mgr * err; // offset 0x0, size 0x4
    class jpeg_memory_mgr * mem; // offset 0x4, size 0x4
    class jpeg_progress_mgr * progress; // offset 0x8, size 0x4
    void * client_data; // offset 0xC, size 0x4
    int is_decompressor; // offset 0x10, size 0x4
    int global_state; // offset 0x14, size 0x4
};
// total size: 0x34
class jpeg_memory_mgr {
    // Members
    void * (* alloc_small)(class jpeg_common_struct * cinfo, int pool_id, unsigned long sizeofobject); // offset 0x0, size 0x4
    void * (* alloc_large)(class jpeg_common_struct * cinfo, int pool_id, unsigned long sizeofobject); // offset 0x4, size 0x4
    unsigned char * * (* alloc_sarray)(class jpeg_common_struct * cinfo, int pool_id, unsigned int samplesperrow, unsigned int numrows); // offset 0x8, size 0x4
    short (* * (* alloc_barray)(class jpeg_common_struct * cinfo, int pool_id, unsigned int blocksperrow, unsigned int numrows))[64]; // offset 0xC, size 0x4
    class jvirt_sarray_control * (* request_virt_sarray)(class jpeg_common_struct * cinfo, int pool_id, int pre_zero, unsigned int samplesperrow, unsigned int numrows, unsigned int maxaccess); // offset 0x10, size 0x4
    class jvirt_barray_control * (* request_virt_barray)(class jpeg_common_struct * cinfo, int pool_id, int pre_zero, unsigned int blocksperrow, unsigned int numrows, unsigned int maxaccess); // offset 0x14, size 0x4
    void (* realize_virt_arrays)(class jpeg_common_struct * cinfo); // offset 0x18, size 0x4
    unsigned char * * (* access_virt_sarray)(class jpeg_common_struct * cinfo, class jvirt_sarray_control * ptr, unsigned int start_row, unsigned int num_rows, int writable); // offset 0x1C, size 0x4
    short (* * (* access_virt_barray)(class jpeg_common_struct * cinfo, class jvirt_barray_control * ptr, unsigned int start_row, unsigned int num_rows, int writable))[64]; // offset 0x20, size 0x4
    void (* free_pool)(class jpeg_common_struct * cinfo, int pool_id); // offset 0x24, size 0x4
    void (* self_destruct)(class jpeg_common_struct * cinfo); // offset 0x28, size 0x4
    long max_memory_to_use; // offset 0x2C, size 0x4
    long max_alloc_chunk; // offset 0x30, size 0x4
};
// total size: 0x0
class jvirt_sarray_control {};
// total size: 0x0
class jvirt_barray_control {};
// total size: 0x14
class jpeg_progress_mgr {
    // Members
    void (* progress_monitor)(class jpeg_common_struct * cinfo); // offset 0x0, size 0x4
    long pass_counter; // offset 0x4, size 0x4
    long pass_limit; // offset 0x8, size 0x4
    int completed_passes; // offset 0xC, size 0x4
    int total_passes; // offset 0x10, size 0x4
};
// total size: 0x50
class @class {
    // Members
    int i[8]; // offset 0x0, size 0x20
    char s[80]; // offset 0x0, size 0x50
};
// total size: 0x1C
class jpeg_source_mgr {
    // Members
    unsigned char * next_input_byte; // offset 0x0, size 0x4
    unsigned long bytes_in_buffer; // offset 0x4, size 0x4
    void (* init_source)(class jpeg_decompress_struct * cinfo); // offset 0x8, size 0x4
    int (* fill_input_buffer)(class jpeg_decompress_struct * cinfo); // offset 0xC, size 0x4
    void (* skip_input_data)(class jpeg_decompress_struct * cinfo, long num_bytes); // offset 0x10, size 0x4
    int (* resync_to_restart)(class jpeg_decompress_struct * cinfo, int desired); // offset 0x14, size 0x4
    void (* term_source)(class jpeg_decompress_struct * cinfo); // offset 0x18, size 0x4
};
enum J_COLOR_SPACE {
    JCS_UNKNOWN = 0,
    JCS_GRAYSCALE = 1,
    JCS_RGB = 2,
    JCS_YCbCr = 3,
    JCS_CMYK = 4,
    JCS_YCCK = 5,
};
enum J_DCT_METHOD {
    JDCT_ISLOW = 0,
    JDCT_IFAST = 1,
    JDCT_FLOAT = 2,
};
enum J_DITHER_MODE {
    JDITHER_NONE = 0,
    JDITHER_ORDERED = 1,
    JDITHER_FS = 2,
};
// total size: 0x84
class JQUANT_TBL {
    // Members
    unsigned short quantval[64]; // offset 0x0, size 0x80
    int sent_table; // offset 0x80, size 0x4
};
// total size: 0x118
class JHUFF_TBL {
    // Members
    unsigned char bits[17]; // offset 0x0, size 0x11
    unsigned char huffval[256]; // offset 0x11, size 0x100
    int sent_table; // offset 0x114, size 0x4
};
// total size: 0x54
class jpeg_component_info {
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
    class JQUANT_TBL * quant_table; // offset 0x4C, size 0x4
    void * dct_table; // offset 0x50, size 0x4
};
// total size: 0x14
class jpeg_marker_struct {
    // Members
    class jpeg_marker_struct * next; // offset 0x0, size 0x4
    unsigned char marker; // offset 0x4, size 0x1
    unsigned int original_length; // offset 0x8, size 0x4
    unsigned int data_length; // offset 0xC, size 0x4
    unsigned char * data; // offset 0x10, size 0x4
};
// total size: 0x0
class jpeg_decomp_master {};
// total size: 0x0
class jpeg_d_main_controller {};
// total size: 0x0
class jpeg_d_coef_controller {};
// total size: 0x0
class jpeg_d_post_controller {};
// total size: 0x0
class jpeg_input_controller {};
// total size: 0x0
class jpeg_marker_reader {};
// total size: 0x0
class jpeg_entropy_decoder {};
// total size: 0x0
class jpeg_inverse_dct {};
// total size: 0x0
class jpeg_upsampler {};
// total size: 0x0
class jpeg_color_deconverter {};
// total size: 0x0
class jpeg_color_quantizer {};
// total size: 0x1024
class GJPEGRwSource : public GNewOverrideBase {
    // Members
    class jpeg_source_mgr SMgr; // offset 0x0, size 0x1C
    class GPtr pInStream; // offset 0x1C, size 0x4
    bool StartOfFile; // offset 0x20, size 0x1
    unsigned char Buffer[4096]; // offset 0x21, size 0x1000
};
// total size: 0x150
class GFxJpegErrorHandler {
    // Members
    class jpeg_error_mgr pub; // offset 0x0, size 0x84
    char errorMessage[200]; // offset 0x84, size 0xC8
    long (* psetjmp_buffer)[100]; // offset 0x14C, size 0x4
};
// total size: 0x330
class GJPEGInputImpl : public GJPEGInput {
    // Members
    class jpeg_decompress_struct CInfo; // offset 0x8, size 0x1D0
    class GFxJpegErrorHandler JErr; // offset 0x1D8, size 0x150
    bool CompressorOpened; // offset 0x328, size 0x1
    bool ErrorOccurred; // offset 0x329, size 0x1
};
struct {} __vt__14GJPEGInputImpl; // size: 0x34, address: 0x8073FA78
// signature: GJPEGRwSource::InitSource(jpeg_decompress_struct *)
// Range: 0x805D1220 -> 0x805D1230
void GJPEGRwSource::InitSource() {
}
// signature: GJPEGRwSource::FillInputBuffer(jpeg_decompress_struct *)
// Range: 0x805D1130 -> 0x805D1214
int GJPEGRwSource::FillInputBuffer() {
    // Local variables
    class GJPEGRwSource * psrc; // r31
    unsigned long bytesRead; // r4
}
// Range: 0x805D1010 -> 0x805D1128
void GJPEGRwSource::SkipInputData(class jpeg_decompress_struct * cinfo /* r24 */, long numBytes /* r30 */) {
    // Local variables
    class GJPEGRwSource * psrc; // r31
}
// signature: GJPEGRwSource::TermSource(jpeg_decompress_struct *)
// Range: 0x805D1000 -> 0x805D1004
void GJPEGRwSource::TermSource() {
}
// signature: JpegErrorExit(jpeg_common_struct *)
// Range: 0x805D1230 -> 0x805D1280
static void JpegErrorExit() {
    // Local variables
    class GFxJpegErrorHandler * myerr; // r0
    char buffer[200]; // r1+0x8
}
// Range: 0x805D16D0 -> 0x805D179C
void * GJPEGInputImpl::~GJPEGInputImpl(class GJPEGInputImpl * this /* r29 */) {
    // Local variables
    class GJPEGRwSource * psrc; // r31

    // References
    // -> struct {} __vt__14GJPEGInputImpl;
}
// Range: 0x805D17A0 -> 0x805D17A8
bool GJPEGInputImpl::IsErrorOccurred() const {
}
// Range: 0x805D17B0 -> 0x805D17CC
void GJPEGInputImpl::DiscardPartialBuffer() {
    // Local variables
    class GJPEGRwSource * psrc; // r3
}
// Range: 0x805D1450 -> 0x805D14E8
int GJPEGInputImpl::StartImage(class GJPEGInputImpl * this /* r31 */) {
}
// Range: 0x805D17D0 -> 0x805D1860
int GJPEGInputImpl::StartRawImage(class GJPEGInputImpl * this /* r31 */) {
}
// Range: 0x805D1860 -> 0x805D18EC
int GJPEGInputImpl::FinishImage(class GJPEGInputImpl * this /* r31 */) {
}
// Range: 0x805D18F0 -> 0x805D18F8
unsigned int GJPEGInputImpl::GetHeight() const {
}
// Range: 0x805D1900 -> 0x805D1908
unsigned int GJPEGInputImpl::GetWidth() const {
}
// Range: 0x805D1910 -> 0x805D1994
int GJPEGInputImpl::ReadScanline(class GJPEGInputImpl * this /* r31 */, unsigned char * prgbData /* r1+0x8 */) {
}
// Range: 0x805D19A0 -> 0x805D1A2C
int GJPEGInputImpl::ReadRawData(class GJPEGInputImpl * this /* r30 */, void * * pprawData /* r31 */) {
    // Local variables
    class jvirt_barray_control * * src_coef_arrays; // r0
}
// Range: 0x805D1A30 -> 0x805D1A38
void * GJPEGInputImpl::GetCInfo() {
}
// Range: 0x805D1280 -> 0x805D1444
class GJPEGInput * GJPEGInput::Create(class GFile * pin /* r29 */) {
    // References
    // -> struct {} __vt__14GJPEGInputImpl;
}
// Range: 0x805D14F0 -> 0x805D16C8
class GJPEGInput * GJPEGInput::CreateSwfJpeg2HeaderOnly(class GFile * pin /* r29 */) {
    // References
    // -> struct {} __vt__14GJPEGInputImpl;
}
