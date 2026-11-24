/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jmemmgr.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805E42F8 -> 0x805E5508
*/
// total size: 0x80
struct jvirt_sarray_control {
    // Members
    unsigned char * * mem_buffer; // offset 0x0, size 0x4
    unsigned int rows_in_array; // offset 0x4, size 0x4
    unsigned int samplesperrow; // offset 0x8, size 0x4
    unsigned int maxaccess; // offset 0xC, size 0x4
    unsigned int rows_in_mem; // offset 0x10, size 0x4
    unsigned int rowsperchunk; // offset 0x14, size 0x4
    unsigned int cur_start_row; // offset 0x18, size 0x4
    unsigned int first_undef_row; // offset 0x1C, size 0x4
    int pre_zero; // offset 0x20, size 0x4
    int dirty; // offset 0x24, size 0x4
    int b_s_open; // offset 0x28, size 0x4
    struct jvirt_sarray_control * next; // offset 0x2C, size 0x4
    struct backing_store_struct b_s_info; // offset 0x30, size 0x50
};
// total size: 0x50
struct backing_store_struct {
    // Members
    void (* read_backing_store)(struct jpeg_common_struct * cinfo, struct backing_store_struct * info, void * buffer_address, long file_offset, long byte_count); // offset 0x0, size 0x4
    void (* write_backing_store)(struct jpeg_common_struct * cinfo, struct backing_store_struct * info, void * buffer_address, long file_offset, long byte_count); // offset 0x4, size 0x4
    void (* close_backing_store)(struct jpeg_common_struct * cinfo, struct backing_store_struct * info); // offset 0x8, size 0x4
    struct _FILE * temp_file; // offset 0xC, size 0x4
    char temp_name[64]; // offset 0x10, size 0x40
};
// total size: 0x80
struct jvirt_barray_control {
    // Members
    short (* * mem_buffer)[64]; // offset 0x0, size 0x4
    unsigned int rows_in_array; // offset 0x4, size 0x4
    unsigned int blocksperrow; // offset 0x8, size 0x4
    unsigned int maxaccess; // offset 0xC, size 0x4
    unsigned int rows_in_mem; // offset 0x10, size 0x4
    unsigned int rowsperchunk; // offset 0x14, size 0x4
    unsigned int cur_start_row; // offset 0x18, size 0x4
    unsigned int first_undef_row; // offset 0x1C, size 0x4
    int pre_zero; // offset 0x20, size 0x4
    int dirty; // offset 0x24, size 0x4
    int b_s_open; // offset 0x28, size 0x4
    struct jvirt_barray_control * next; // offset 0x2C, size 0x4
    struct backing_store_struct b_s_info; // offset 0x30, size 0x50
};
typedef struct {
    // Members
    struct jpeg_memory_mgr pub; // offset 0x0, size 0x34
    union small_pool_struct * small_list[2]; // offset 0x34, size 0x8
    union large_pool_struct * large_list[2]; // offset 0x3C, size 0x8
    struct jvirt_sarray_control * virt_sarray_list; // offset 0x44, size 0x4
    struct jvirt_barray_control * virt_barray_list; // offset 0x48, size 0x4
    long total_space_allocated; // offset 0x4C, size 0x4
    unsigned int last_rowsperchunk; // offset 0x50, size 0x4
} my_memory_mgr;
// total size: 0x10
union small_pool_struct {
    // Members
    struct {
        // Members
        union small_pool_struct * next; // offset 0x0, size 0x4
        unsigned long bytes_used; // offset 0x4, size 0x4
        unsigned long bytes_left; // offset 0x8, size 0x4
    } hdr; // offset 0x0, size 0xC
    double dummy; // offset 0x0, size 0x8
};
// total size: 0x10
union large_pool_struct {
    // Members
    struct {
        // Members
        union large_pool_struct * next; // offset 0x0, size 0x4
        unsigned long bytes_used; // offset 0x4, size 0x4
        unsigned long bytes_left; // offset 0x8, size 0x4
    } hdr; // offset 0x0, size 0xC
    double dummy; // offset 0x0, size 0x8
};
static unsigned long first_pool_slop[2]; // size: 0x8, address: 0x808DFD70
static unsigned long extra_pool_slop[2]; // size: 0x8, address: 0x808DFD78
// Range: 0x805E42F8 -> 0x805E431C
static void out_of_memory() {
}
// Range: 0x805E431C -> 0x805E44AC
static void * alloc_small(struct jpeg_common_struct * cinfo /* r28 */, int pool_id /* r24 */, unsigned long sizeofobject /* r29 */) {
    // Local variables
    my_memory_mgr * mem; // r31
    union small_pool_struct * hdr_ptr; // r5
    union small_pool_struct * prev_hdr_ptr; // r30
    char * data_ptr; // r3
    unsigned long odd_bytes; // r0
    unsigned long min_request; // r25
    unsigned long slop; // r24

    // References
    // -> static unsigned long extra_pool_slop[2];
    // -> static unsigned long first_pool_slop[2];
}
// Range: 0x805E44AC -> 0x805E4598
static void * alloc_large(struct jpeg_common_struct * cinfo /* r27 */, int pool_id /* r28 */, unsigned long sizeofobject /* r29 */) {
    // Local variables
    my_memory_mgr * mem; // r30
    union large_pool_struct * hdr_ptr; // r0
    unsigned long odd_bytes; // r0
}
// Range: 0x805E4598 -> 0x805E4684
static unsigned char * * alloc_sarray(struct jpeg_common_struct * cinfo /* r24 */, int pool_id /* r25 */, unsigned int samplesperrow /* r26 */, unsigned int numrows /* r27 */) {
    // Local variables
    my_memory_mgr * mem; // r31
    unsigned char * * result; // r31
    unsigned char * workspace; // r3
    unsigned int rowsperchunk; // r30
    unsigned int currow; // r29
    unsigned int i; // r28
    long ltemp; // r28
}
// Range: 0x805E4684 -> 0x805E477C
static short (* * alloc_barray(struct jpeg_common_struct * cinfo /* r28 */, int pool_id /* r29 */, unsigned int blocksperrow /* r30 */, unsigned int numrows /* r31 */))[64] {
    // Local variables
    my_memory_mgr * mem; // r27
    short (* * result)[64]; // r27
    short (* workspace)[64]; // r3
    unsigned int rowsperchunk; // r26
    unsigned int currow; // r25
    unsigned int i; // r24
    long ltemp; // r24
}
// Range: 0x805E477C -> 0x805E4828
static struct jvirt_sarray_control * request_virt_sarray(struct jpeg_common_struct * cinfo /* r25 */, int pool_id /* r26 */, int pre_zero /* r27 */, unsigned int samplesperrow /* r28 */, unsigned int numrows /* r29 */, unsigned int maxaccess /* r30 */) {
    // Local variables
    my_memory_mgr * mem; // r31
    struct jvirt_sarray_control * result; // r0
}
// Range: 0x805E4828 -> 0x805E48D4
static struct jvirt_barray_control * request_virt_barray(struct jpeg_common_struct * cinfo /* r25 */, int pool_id /* r26 */, int pre_zero /* r27 */, unsigned int blocksperrow /* r28 */, unsigned int numrows /* r29 */, unsigned int maxaccess /* r30 */) {
    // Local variables
    my_memory_mgr * mem; // r31
    struct jvirt_barray_control * result; // r0
}
// Range: 0x805E48D4 -> 0x805E4B08
static void realize_virt_arrays(struct jpeg_common_struct * cinfo /* r27 */) {
    // Local variables
    my_memory_mgr * mem; // r31
    long space_per_minheight; // r30
    long maximum_space; // r29
    long avail_mem; // r0
    long minheights; // r0
    long max_minheights; // r29
    struct jvirt_sarray_control * sptr; // r28
    struct jvirt_barray_control * bptr; // r28
}
// Range: 0x805E4B08 -> 0x805E4C18
static void do_sarray_io(struct jpeg_common_struct * cinfo /* r26 */, struct jvirt_sarray_control * ptr /* r27 */, int writing /* r28 */) {
    // Local variables
    long bytesperrow; // r31
    long file_offset; // r30
    long byte_count; // r25
    long thisrow; // r4
    long i; // r29
}
// Range: 0x805E4C18 -> 0x805E4D2C
static void do_barray_io(struct jpeg_common_struct * cinfo /* r26 */, struct jvirt_barray_control * ptr /* r27 */, int writing /* r28 */) {
    // Local variables
    long bytesperrow; // r31
    long file_offset; // r30
    long byte_count; // r25
    long thisrow; // r4
    long i; // r29
}
// Range: 0x805E4D2C -> 0x805E4F30
static unsigned char * * access_virt_sarray(struct jpeg_common_struct * cinfo /* r27 */, struct jvirt_sarray_control * ptr /* r28 */, unsigned int start_row /* r29 */, int writable /* r30 */) {
    // Local variables
    unsigned int end_row; // r31
    unsigned int undef_row; // r26

    {
        // Range: 0x805E4E14 -> 0x805E4E2C
        // Local variables
        long ltemp; // r0
    }
    {
        // Range: 0x805E4E88 -> 0x805E4EC8
        // Local variables
        unsigned long bytesperrow; // r27
    }
}
// Range: 0x805E4F30 -> 0x805E5138
static short (* * access_virt_barray(struct jpeg_common_struct * cinfo /* r27 */, struct jvirt_barray_control * ptr /* r28 */, unsigned int start_row /* r29 */, int writable /* r30 */))[64] {
    // Local variables
    unsigned int end_row; // r31
    unsigned int undef_row; // r26

    {
        // Range: 0x805E5018 -> 0x805E5030
        // Local variables
        long ltemp; // r0
    }
    {
        // Range: 0x805E508C -> 0x805E50D0
        // Local variables
        unsigned long bytesperrow; // r27
    }
}
// Range: 0x805E5138 -> 0x805E52CC
static void free_pool(struct jpeg_common_struct * cinfo /* r29 */, int pool_id /* r30 */) {
    // Local variables
    my_memory_mgr * mem; // r31
    union small_pool_struct * shdr_ptr; // r4
    union large_pool_struct * lhdr_ptr; // r4
    unsigned long space_freed; // r28

    {
        // Range: 0x805E5184 -> 0x805E521C
        // Local variables
        struct jvirt_barray_control * bptr; // r28
        struct jvirt_sarray_control * sptr; // r28
    }
    {
        // Range: 0x805E5228 -> 0x805E525C
        // Local variables
        union large_pool_struct * next_lhdr_ptr; // r27
    }
    {
        // Range: 0x805E5278 -> 0x805E52AC
        // Local variables
        union small_pool_struct * next_shdr_ptr; // r27
    }
}
// Range: 0x805E52CC -> 0x805E533C
static void self_destruct(struct jpeg_common_struct * cinfo /* r30 */) {
    // Local variables
    int pool; // r31
}
// Range: 0x805E533C -> 0x805E5508
void jIMemMgr(struct jpeg_common_struct * cinfo /* r30 */) {
    // Local variables
    my_memory_mgr * mem; // r0
    long max_to_use; // r1+0xC
    int pool; // r4

    {
        // Range: 0x805E5488 -> 0x805E54EC
        // Local variables
        char * memenv; // r0

        {
            // Range: 0x805E5488 -> 0x805E54EC
            // Local variables
            char ch; // r1+0x8
        }
    }
}
