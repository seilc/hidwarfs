/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jcmainct.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805D7188 -> 0x805D7188
*/
typedef struct {
    // Members
    struct jpeg_c_main_controller pub; // offset 0x0, size 0x8
    unsigned int cur_iMCU_row; // offset 0x8, size 0x4
    unsigned int rowgroup_ctr; // offset 0xC, size 0x4
    int suspended; // offset 0x10, size 0x4
    enum @enum pass_mode; // offset 0x14, size 0x4
    unsigned char * * buffer[10]; // offset 0x18, size 0x28
} my_main_controller;
enum @enum {
    JBUF_PASS_THRU = 0,
    JBUF_SAVE_SOURCE = 1,
    JBUF_CRANK_DEST = 2,
    JBUF_SAVE_AND_PASS = 3,
};
