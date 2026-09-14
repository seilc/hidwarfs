/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\init\__start.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803D8060 -> 0x803D8060
*/
static unsigned char Debug_BBA; // size: 0x1, address: 0x80D6C158
// total size: 0xC
struct __rom_copy_info {
    // Members
    char * rom; // offset 0x0, size 0x4
    char * addr; // offset 0x4, size 0x4
    unsigned int size; // offset 0x8, size 0x4
};
struct __rom_copy_info _rom_copy_info[]; // size: 0x0, address: 0x8000559C
// total size: 0x8
struct __bss_init_info {
    // Members
    char * addr; // offset 0x0, size 0x4
    unsigned int size; // offset 0x4, size 0x4
};
struct __bss_init_info _bss_init_info[]; // size: 0x0, address: 0x80005620

/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\os\src\init\__start.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x800051EC -> 0x80005544
*/
// Range: 0x800051EC -> 0x8000522C
static void __check_pad3() {}

// Range: 0x8000522C -> 0x80005238
static void __set_debug_bba() {
    // References
    // -> static unsigned char Debug_BBA;
}

// Range: 0x80005238 -> 0x80005240
static unsigned char __get_debug_bba() {
    // References
    // -> static unsigned char Debug_BBA;
}

// Range: 0x80005240 -> 0x8000539C
void __start() {}

// Range: 0x8000539C -> 0x800053F8
static void __copy_rom_section(void * dst /* r30 */, void * src /* r29 */, unsigned long size /* r31 */) {}

// Range: 0x800053F8 -> 0x8000543C
static void __init_bss_section(void * dst /* r1+0x8 */, unsigned long size /* r31 */) {}

// Range: 0x8000543C -> 0x800054CC
static void __init_registers() {}

// Range: 0x800054CC -> 0x80005544
static void __init_data() {
    // Local variables
    struct __rom_copy_info * dci; // r31
    struct __bss_init_info * bii; // r30

    // References
    // -> struct __bss_init_info _bss_init_info[];
    // -> struct __rom_copy_info _rom_copy_info[];
}


