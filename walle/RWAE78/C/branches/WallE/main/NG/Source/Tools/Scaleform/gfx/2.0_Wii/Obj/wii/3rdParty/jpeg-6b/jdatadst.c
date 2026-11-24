/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jdatadst.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805D7188 -> 0x805D7188
*/
// total size: 0x50
struct _FILE {
    // Members
    unsigned long handle; // offset 0x0, size 0x4
    __file_modes mode; // offset 0x4, size 0x4
    __file_state state; // offset 0x8, size 0x4
    unsigned char is_dynamically_allocated; // offset 0xC, size 0x1
    unsigned char char_buffer; // offset 0xD, size 0x1
    unsigned char char_buffer_overflow; // offset 0xE, size 0x1
    unsigned char ungetc_buffer[2]; // offset 0xF, size 0x2
    unsigned short ungetwc_buffer[2]; // offset 0x12, size 0x4
    unsigned long position; // offset 0x18, size 0x4
    unsigned char * buffer; // offset 0x1C, size 0x4
    unsigned long buffer_size; // offset 0x20, size 0x4
    unsigned char * buffer_ptr; // offset 0x24, size 0x4
    unsigned long buffer_len; // offset 0x28, size 0x4
    unsigned long buffer_alignment; // offset 0x2C, size 0x4
    unsigned long saved_buffer_len; // offset 0x30, size 0x4
    unsigned long buffer_pos; // offset 0x34, size 0x4
    int (* position_proc)(unsigned long file, unsigned long * position, int mode, void * ref_con); // offset 0x38, size 0x4
    int (* read_proc)(unsigned long file, unsigned char * buff, unsigned long * count, void * ref_con); // offset 0x3C, size 0x4
    int (* write_proc)(unsigned long file, unsigned char * buff, unsigned long * count, void * ref_con); // offset 0x40, size 0x4
    int (* close_proc)(unsigned long file); // offset 0x44, size 0x4
    void * ref_con; // offset 0x48, size 0x4
    struct _FILE * next_file_struct; // offset 0x4C, size 0x4
};
typedef struct {
    // Members
    unsigned int open_mode : 2; // offset 0x0, size 0x4, bit offset 0
    unsigned int io_mode : 3; // offset 0x0, size 0x4, bit offset 2
    unsigned int buffer_mode : 2; // offset 0x0, size 0x4, bit offset 5
    unsigned int file_kind : 3; // offset 0x0, size 0x4, bit offset 7
    unsigned int file_orientation : 2; // offset 0x0, size 0x4, bit offset 10
    unsigned int binary_io : 1; // offset 0x0, size 0x4, bit offset 12
} __file_modes;
typedef struct {
    // Members
    unsigned int io_state : 3; // offset 0x0, size 0x4, bit offset 0
    unsigned int free_buffer : 1; // offset 0x0, size 0x4, bit offset 3
    unsigned char eof; // offset 0x1, size 0x1
    unsigned char error; // offset 0x2, size 0x1
} __file_state;
