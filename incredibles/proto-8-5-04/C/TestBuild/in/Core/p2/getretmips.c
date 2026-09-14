/*
    Compile unit: C:\TestBuild\in\Core\p2\getretmips.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static class _returnCache returnCache[256]; // size: 0xC00, address: 0x6BF350
char _memtop; // size: 0x1, address: 0x2000000
char _start; // size: 0x1, address: 0x100008
// total size: 0xC
class _returnCache {
    // Members
public:
    unsigned int * returnAddress; // offset 0x0, size 0x4
    signed int raOffset; // offset 0x4, size 0x4
    signed int spAdjust; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\p2\getretmips.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004857B0 -> 0x00485C28
*/
// Range: 0x4857B0 -> 0x485C28
void getStackTraceDirect(unsigned int * results /* r29+0xA0 */, signed int max /* r29+0xB0 */, unsigned int * ra /* r29+0xC0 */, unsigned int * sp /* r29+0xD0 */) {
    /* anonymous block */ {
        // Range: 0x4857B0 -> 0x485C28
        unsigned int * ra_limit; // r30
        unsigned int * ra_minimum; // r29+0x9C
        unsigned int * ra_maximum; // r29+0x98
        unsigned int inst; // r16
        unsigned short const_upper; // r23
        unsigned short const_lower; // r19
        signed int ra_offset; // r18
        signed int sp_adjust; // r21
        signed int found_ra_offset; // r17
        signed int found_sp_adjust; // r20
        signed int found_const_upper; // r29+0x94
        signed int found_const_lower; // r22
        class _returnCache * rc; // r29+0x90
    }
}


