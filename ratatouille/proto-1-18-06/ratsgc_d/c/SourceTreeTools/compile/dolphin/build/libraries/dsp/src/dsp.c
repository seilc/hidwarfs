/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\dsp\src\dsp.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A3138 -> 0x803A349C
*/
const char * __DSPVersion; // size: 0x4, address: 0x80D68020
static int __DSP_init_flag; // size: 0x4, address: 0x80D6BE50
// Range: 0x803A3138 -> 0x803A3148
unsigned long DSPCheckMailToDSP() {}

// Range: 0x803A3148 -> 0x803A315C
unsigned long DSPCheckMailFromDSP() {}

// Range: 0x803A315C -> 0x803A3178
unsigned long DSPReadMailFromDSP() {}

// Range: 0x803A3178 -> 0x803A3190
void DSPSendMailToDSP(unsigned long mail /* r3 */) {}

// Range: 0x803A3190 -> 0x803A31E0
void DSPAssertInt() {
    // Local variables
    int old; // r30
    unsigned short tmp; // r31
}

// total size: 0x50
struct STRUCT_DSP_TASK {
    // Members
    unsigned long state; // offset 0x0, size 0x4
    unsigned long priority; // offset 0x4, size 0x4
    unsigned long flags; // offset 0x8, size 0x4
    unsigned short * iram_mmem_addr; // offset 0xC, size 0x4
    unsigned long iram_length; // offset 0x10, size 0x4
    unsigned long iram_addr; // offset 0x14, size 0x4
    unsigned short * dram_mmem_addr; // offset 0x18, size 0x4
    unsigned long dram_length; // offset 0x1C, size 0x4
    unsigned long dram_addr; // offset 0x20, size 0x4
    unsigned short dsp_init_vector; // offset 0x24, size 0x2
    unsigned short dsp_resume_vector; // offset 0x26, size 0x2
    void (* init_cb)(void *); // offset 0x28, size 0x4
    void (* res_cb)(void *); // offset 0x2C, size 0x4
    void (* done_cb)(void *); // offset 0x30, size 0x4
    void (* req_cb)(void *); // offset 0x34, size 0x4
    struct STRUCT_DSP_TASK * next; // offset 0x38, size 0x4
    struct STRUCT_DSP_TASK * prev; // offset 0x3C, size 0x4
    long long t_context; // offset 0x40, size 0x8
    long long t_task; // offset 0x48, size 0x8
};
struct STRUCT_DSP_TASK * __DSP_first_task; // size: 0x4, address: 0x80D6BE68
struct STRUCT_DSP_TASK * __DSP_last_task; // size: 0x4, address: 0x80D6BE64
struct STRUCT_DSP_TASK * __DSP_curr_task; // size: 0x4, address: 0x80D6BE6C
struct STRUCT_DSP_TASK * __DSP_tmp_task; // size: 0x4, address: 0x80D6BE60
// Range: 0x803A31E0 -> 0x803A32AC
void DSPInit() {
    // Local variables
    int old; // r29
    unsigned short tmp; // r31

    // References
    // -> static int __DSP_init_flag;
    // -> struct STRUCT_DSP_TASK * __DSP_tmp_task;
    // -> struct STRUCT_DSP_TASK * __DSP_curr_task;
    // -> struct STRUCT_DSP_TASK * __DSP_last_task;
    // -> struct STRUCT_DSP_TASK * __DSP_first_task;
    // -> const char * __DSPVersion;
}

// Range: 0x803A32AC -> 0x803A32B4
int DSPCheckInit() {
    // References
    // -> static int __DSP_init_flag;
}

// Range: 0x803A32B4 -> 0x803A3340
struct STRUCT_DSP_TASK * DSPAddTask(struct STRUCT_DSP_TASK * task /* r31 */) {
    // Local variables
    int old; // r30

    // References
    // -> struct STRUCT_DSP_TASK * __DSP_first_task;
    // -> static int __DSP_init_flag;
}

// Range: 0x803A3340 -> 0x803A33AC
struct STRUCT_DSP_TASK * DSPCancelTask(struct STRUCT_DSP_TASK * task /* r30 */) {
    // Local variables
    int old; // r31

    // References
    // -> static int __DSP_init_flag;
}

struct STRUCT_DSP_TASK * __DSP_rude_task; // size: 0x4, address: 0x80D6BE5C
int __DSP_rude_task_pending; // size: 0x4, address: 0x80D6BE58
// Range: 0x803A33AC -> 0x803A349C
struct STRUCT_DSP_TASK * DSPAssertTask(struct STRUCT_DSP_TASK * task /* r31 */) {
    // Local variables
    int old; // r30

    // References
    // -> struct STRUCT_DSP_TASK * __DSP_curr_task;
    // -> int __DSP_rude_task_pending;
    // -> struct STRUCT_DSP_TASK * __DSP_rude_task;
    // -> static int __DSP_init_flag;
}


