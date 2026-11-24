/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdmarker.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805D914C -> 0x805DB474
*/
typedef struct {
    // Members
    struct jpeg_marker_reader pub; // offset 0x0, size 0x1C
    int (* process_COM)(struct jpeg_decompress_struct * cinfo); // offset 0x1C, size 0x4
    int (* process_APPn[16])(struct jpeg_decompress_struct * cinfo); // offset 0x20, size 0x40
    unsigned int length_limit_COM; // offset 0x60, size 0x4
    unsigned int length_limit_APPn[16]; // offset 0x64, size 0x40
    struct jpeg_marker_struct * cur_marker; // offset 0xA4, size 0x4
    unsigned int bytes_read; // offset 0xA8, size 0x4
} my_marker_reader;
// Range: 0x805D914C -> 0x805D9234
static int get_soi(struct jpeg_decompress_struct * cinfo /* r31 */) {
    // Local variables
    int i; // r4
}
// Range: 0x805D9234 -> 0x805D96DC
static int get_sof(struct jpeg_decompress_struct * cinfo /* r26 */) {
    // Local variables
    long length; // r31
    int c; // r0
    int ci; // r31
    jpeg_component_info * compptr; // r30
    struct jpeg_source_mgr * datasrc; // r29
    unsigned char * next_input_byte; // r28
    unsigned long bytes_in_buffer; // r27

    {
        // Range: 0x805D9450 -> 0x805D9450
        // Local variables
        int * _mp; // r0
    }
    {
        // Range: 0x805D9648 -> 0x805D9648
        // Local variables
        int * _mp; // r0
    }
}
// Range: 0x805D96DC -> 0x805D9AC8
static int get_sos(struct jpeg_decompress_struct * cinfo /* r23 */) {
    // Local variables
    long length; // r27
    int i; // r28
    int ci; // r3
    int n; // r0
    int c; // r0
    int cc; // r0
    jpeg_component_info * compptr; // r27
    struct jpeg_source_mgr * datasrc; // r26
    unsigned char * next_input_byte; // r25
    unsigned long bytes_in_buffer; // r24

    {
        // Range: 0x805D9938 -> 0x805D9938
        // Local variables
        int * _mp; // r0
    }
    {
        // Range: 0x805D9A3C -> 0x805D9A3C
        // Local variables
        int * _mp; // r0
    }
}
// Range: 0x805D9AC8 -> 0x805D9E80
static int get_dht(struct jpeg_decompress_struct * cinfo /* r24 */) {
    // Local variables
    long length; // r30
    unsigned char bits[17]; // r1+0x8
    unsigned char huffval[256]; // r1+0x20
    int i; // r31
    int index; // r29
    int count; // r28
    JHUFF_TBL * * htblptr; // r28
    struct jpeg_source_mgr * datasrc; // r27
    unsigned char * next_input_byte; // r26
    unsigned long bytes_in_buffer; // r25

    {
        // Range: 0x805D9C3C -> 0x805D9C3C
        // Local variables
        int * _mp; // r0
    }
    {
        // Range: 0x805D9CA8 -> 0x805D9CA8
        // Local variables
        int * _mp; // r0
    }
}
// Range: 0x805D9E80 -> 0x805DA208
static int get_dqt(struct jpeg_decompress_struct * cinfo /* r24 */) {
    // Local variables
    long length; // r31
    int n; // r28
    int i; // r30
    int prec; // r29
    unsigned int tmp; // r23
    JQUANT_TBL * quant_ptr; // r28
    struct jpeg_source_mgr * datasrc; // r27
    unsigned char * next_input_byte; // r26
    unsigned long bytes_in_buffer; // r25

    {
        // Range: 0x805DA0F8 -> 0x805DA0F8
        // Local variables
        int * _mp; // r0
    }

    // References
    // -> int jZAGTable[80];
}
// Range: 0x805DA208 -> 0x805DA39C
static int get_dri(struct jpeg_decompress_struct * cinfo /* r27 */) {
    // Local variables
    long length; // r31
    unsigned int tmp; // r31
    struct jpeg_source_mgr * datasrc; // r30
    unsigned char * next_input_byte; // r29
    unsigned long bytes_in_buffer; // r28
}
// Range: 0x805DA39C -> 0x805DA6F4
static void examine_app0(struct jpeg_decompress_struct * cinfo /* r29 */, unsigned char * data /* r30 */) {
    // Local variables
    long totallen; // r31

    {
        // Range: 0x805DA48C -> 0x805DA48C
        // Local variables
        int * _mp; // r0
    }
}
// Range: 0x805DA6F4 -> 0x805DA810
static void examine_app14(struct jpeg_decompress_struct * cinfo /* r31 */) {
    // Local variables
    unsigned int flags0; // r7
    unsigned int flags1; // r8
    unsigned int transform; // r30

    {
        // Range: 0x805DA774 -> 0x805DA774
        // Local variables
        int * _mp; // r0
    }
}
// Range: 0x805DA810 -> 0x805DA9E4
static int get_interesting_appn(struct jpeg_decompress_struct * cinfo /* r28 */) {
    // Local variables
    long length; // r27
    unsigned char b[14]; // r1+0x8
    unsigned int i; // r26
    unsigned int numtoread; // r25
    struct jpeg_source_mgr * datasrc; // r31
    unsigned char * next_input_byte; // r30
    unsigned long bytes_in_buffer; // r29
}
// Range: 0x805DA9E4 -> 0x805DAAFC
static int skip_variable(struct jpeg_decompress_struct * cinfo /* r27 */) {
    // Local variables
    long length; // r31
    struct jpeg_source_mgr * datasrc; // r30
    unsigned char * next_input_byte; // r29
    unsigned long bytes_in_buffer; // r28
}
// Range: 0x805DAAFC -> 0x805DACA4
static int next_marker(struct jpeg_decompress_struct * cinfo /* r28 */) {
    // Local variables
    int c; // r0
    struct jpeg_source_mgr * datasrc; // r31
    unsigned char * next_input_byte; // r30
    unsigned long bytes_in_buffer; // r29
}
// Range: 0x805DACA4 -> 0x805DADA0
static int first_marker(struct jpeg_decompress_struct * cinfo /* r26 */) {
    // Local variables
    int c; // r0
    int c2; // r0
    struct jpeg_source_mgr * datasrc; // r29
    unsigned char * next_input_byte; // r28
    unsigned long bytes_in_buffer; // r27
}
// Range: 0x805DADA0 -> 0x805DB128
static int read_markers(struct jpeg_decompress_struct * cinfo /* r31 */) {
}
// Range: 0x805DB128 -> 0x805DB204
static int read_restart_marker(struct jpeg_decompress_struct * cinfo /* r31 */) {
}
// Range: 0x805DB204 -> 0x805DB388
int jResyncRestart(struct jpeg_decompress_struct * cinfo /* r29 */, int desired /* r30 */) {
    // Local variables
    int marker; // r31
    int action; // r28
}
// Range: 0x805DB388 -> 0x805DB3B0
static void reset_marker_reader() {
    // Local variables
    my_marker_reader * marker; // r4
}
// Range: 0x805DB3B0 -> 0x805DB474
void jIMReader(struct jpeg_decompress_struct * cinfo /* r31 */) {
    // Local variables
    my_marker_reader * marker; // r0
    int i; // r6
}
