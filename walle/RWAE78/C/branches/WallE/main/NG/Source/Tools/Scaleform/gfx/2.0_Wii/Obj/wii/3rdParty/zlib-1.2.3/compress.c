/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\zlib-1.2.3\compress.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805E5858 -> 0x805E5858
*/
// total size: 0x38
struct z_stream_s {
    // Members
    unsigned char * next_in; // offset 0x0, size 0x4
    unsigned int avail_in; // offset 0x4, size 0x4
    unsigned long total_in; // offset 0x8, size 0x4
    unsigned char * next_out; // offset 0xC, size 0x4
    unsigned int avail_out; // offset 0x10, size 0x4
    unsigned long total_out; // offset 0x14, size 0x4
    char * msg; // offset 0x18, size 0x4
    struct internal_state * state; // offset 0x1C, size 0x4
    void * (* zalloc)(void * opaque, unsigned int items, unsigned int size); // offset 0x20, size 0x4
    void (* zfree)(void * opaque, void * address); // offset 0x24, size 0x4
    void * opaque; // offset 0x28, size 0x4
    int data_type; // offset 0x2C, size 0x4
    unsigned long adler; // offset 0x30, size 0x4
    unsigned long reserved; // offset 0x34, size 0x4
};
