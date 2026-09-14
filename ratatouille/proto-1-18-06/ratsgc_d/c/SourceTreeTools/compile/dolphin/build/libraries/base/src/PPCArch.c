/*
    Compile unit: c:\SourceTreeTools\compile\dolphin\build\libraries\base\src\PPCArch.c
    Producer: MW EABI PPC C-Compiler
    Language: C89
    Code range: 0x803946E0 -> 0x803947F4
*/
// Range: 0x803946E0 -> 0x803946E8
unsigned long PPCMfmsr() {}

// Range: 0x803946E8 -> 0x803946F0
void PPCMtmsr(unsigned long newMSR /* r3 */) {}

// Range: 0x803946F0 -> 0x803946F8
unsigned long PPCMfhid0() {}

// Range: 0x803946F8 -> 0x80394700
void PPCMthid0(unsigned long newHID0 /* r3 */) {}

// Range: 0x80394700 -> 0x80394708
unsigned long PPCMfl2cr() {}

// Range: 0x80394708 -> 0x80394710
void PPCMtl2cr(unsigned long newL2cr /* r3 */) {}

// Range: 0x80394710 -> 0x80394718
void PPCMtdec(unsigned long newDec /* r3 */) {}

// Range: 0x80394718 -> 0x80394720
void PPCSync() {}

// Range: 0x80394720 -> 0x80394734
void PPCHalt() {}

// Range: 0x80394734 -> 0x8039473C
void PPCMtmmcr0(unsigned long newMmcr0 /* r3 */) {}

// Range: 0x8039473C -> 0x80394744
void PPCMtmmcr1(unsigned long newMmcr1 /* r3 */) {}

// Range: 0x80394744 -> 0x8039474C
void PPCMtpmc1(unsigned long newPmc1 /* r3 */) {}

// Range: 0x8039474C -> 0x80394754
void PPCMtpmc2(unsigned long newPmc2 /* r3 */) {}

// Range: 0x80394754 -> 0x8039475C
void PPCMtpmc3(unsigned long newPmc3 /* r3 */) {}

// Range: 0x8039475C -> 0x80394764
void PPCMtpmc4(unsigned long newPmc4 /* r3 */) {}

union FpscrUnion {
    double f; // offset 0x0, size 0x8
    // total size: 0x8
    struct {
        // Members
        unsigned long fpscr_pad; // offset 0x0, size 0x4
        unsigned long fpscr; // offset 0x4, size 0x4
    } u; // offset 0x0, size 0x8
};
// Range: 0x80394764 -> 0x80394784
unsigned long PPCMffpscr() {
    // Local variables
    union FpscrUnion m; // r1+0x8
}

// Range: 0x80394784 -> 0x803947AC
void PPCMtfpscr(unsigned long newFPSCR /* r3 */) {
    // Local variables
    union FpscrUnion m; // r1+0x10
}

// Range: 0x803947AC -> 0x803947B4
unsigned long PPCMfhid2() {}

// Range: 0x803947B4 -> 0x803947BC
void PPCMthid2(unsigned long newhid2 /* r3 */) {}

// Range: 0x803947BC -> 0x803947C4
void PPCMtwpar(unsigned long newwpar /* r3 */) {}

// Range: 0x803947C4 -> 0x803947EC
void PPCDisableSpeculation() {}

// Range: 0x803947EC -> 0x803947F4
void PPCSetFpNonIEEEMode() {}


