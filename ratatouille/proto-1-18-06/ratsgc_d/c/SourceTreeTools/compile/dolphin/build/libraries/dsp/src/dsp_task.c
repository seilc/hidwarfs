/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\dsp\src\dsp_task.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803A34EC -> 0x803A3F20
*/
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
struct STRUCT_DSP_TASK * __DSP_curr_task; // size: 0x4, address: 0x80D6BE6C
int __DSP_rude_task_pending; // size: 0x4, address: 0x80D6BE58
struct STRUCT_DSP_TASK * __DSP_rude_task; // size: 0x4, address: 0x80D6BE5C
struct STRUCT_DSP_TASK * __DSP_first_task; // size: 0x4, address: 0x80D6BE68
struct STRUCT_DSP_TASK * __DSP_last_task; // size: 0x4, address: 0x80D6BE64
// total size: 0x2C8
struct OSContext {
    // Members
    unsigned long gpr[32]; // offset 0x0, size 0x80
    unsigned long cr; // offset 0x80, size 0x4
    unsigned long lr; // offset 0x84, size 0x4
    unsigned long ctr; // offset 0x88, size 0x4
    unsigned long xer; // offset 0x8C, size 0x4
    double fpr[32]; // offset 0x90, size 0x100
    unsigned long fpscr_pad; // offset 0x190, size 0x4
    unsigned long fpscr; // offset 0x194, size 0x4
    unsigned long srr0; // offset 0x198, size 0x4
    unsigned long srr1; // offset 0x19C, size 0x4
    unsigned short mode; // offset 0x1A0, size 0x2
    unsigned short state; // offset 0x1A2, size 0x2
    unsigned long gqr[8]; // offset 0x1A4, size 0x20
    unsigned long psf_pad; // offset 0x1C4, size 0x4
    double psf[32]; // offset 0x1C8, size 0x100
};
// Range: 0x803A34EC -> 0x803A39F8
void __DSPHandler(struct OSContext * context /* r1+0xC */) {
    // Local variables
    struct OSContext exceptionContext; // r1+0x10
    unsigned short tmp; // r29
    unsigned long mail; // r30

    // References
    // -> struct STRUCT_DSP_TASK * __DSP_curr_task;
    // -> struct STRUCT_DSP_TASK * __DSP_last_task;
    // -> struct STRUCT_DSP_TASK * __DSP_first_task;
    // -> int __DSP_rude_task_pending;
    // -> struct STRUCT_DSP_TASK * __DSP_rude_task;
}

// Range: 0x803A39F8 -> 0x803A3BB8
void __DSP_exec_task(struct STRUCT_DSP_TASK * curr /* r30 */, struct STRUCT_DSP_TASK * next /* r31 */) {}

// Range: 0x803A3BB8 -> 0x803A3D80
void __DSP_boot_task(struct STRUCT_DSP_TASK * task /* r31 */) {
    // Local variables
    unsigned long mail; // r1+0xC
}

// Range: 0x803A3D80 -> 0x803A3E34
void __DSP_insert_task(struct STRUCT_DSP_TASK * task /* r3 */) {
    // Local variables
    struct STRUCT_DSP_TASK * temp; // r31

    // References
    // -> struct STRUCT_DSP_TASK * __DSP_last_task;
    // -> struct STRUCT_DSP_TASK * __DSP_first_task;
    // -> struct STRUCT_DSP_TASK * __DSP_curr_task;
}

// Range: 0x803A3E34 -> 0x803A3F20
void __DSP_remove_task(struct STRUCT_DSP_TASK * task /* r31 */) {
    // References
    // -> struct STRUCT_DSP_TASK * __DSP_curr_task;
    // -> struct STRUCT_DSP_TASK * __DSP_first_task;
    // -> struct STRUCT_DSP_TASK * __DSP_last_task;
}

struct STRUCT_DSP_TASK * __DSP_tmp_task; // size: 0x4, address: 0x80D6BE60

