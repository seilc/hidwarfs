/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xString.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800387C0 -> 0x80038A10
*/
// Range: 0x800387C0 -> 0x800387E4
struct substr substr::create(const char * text /* r0 */, unsigned long size /* r0 */) {
    // Local variables
    struct substr s; // r1+0x8
}

// Range: 0x800387E4 -> 0x80038808
unsigned long rskip_ws(struct substr & s /* r0 */) {}

// Range: 0x80038808 -> 0x8003886C
unsigned long rskip_ws(const char * & text /* r30 */, unsigned long & size /* r31 */) {}

// Range: 0x8003886C -> 0x80038894
unsigned char is_ws(char c /* r0 */) {}

// Range: 0x80038894 -> 0x800388E8
char * find_char(const struct substr & s /* r0 */, char c /* r0 */) {
    // Local variables
    const char * p; // r3
    int i; // r6
}

// Range: 0x800388E8 -> 0x8003890C
char * skip_ws(struct substr & s /* r0 */) {}

// Range: 0x8003890C -> 0x8003898C
char * skip_ws(const char * & text /* r29 */, unsigned long & size /* r30 */) {
    // Local variables
    unsigned long i; // r31
}

// Range: 0x8003898C -> 0x800389B0
unsigned int atox(const struct substr & s /* r0 */) {
    // Local variables
    unsigned long read_size; // r1+0x8
}

// Range: 0x800389B0 -> 0x800389D4
void trim_ws(struct substr & s /* r0 */) {}

// Range: 0x800389D4 -> 0x80038A10
void trim_ws(const char * & text /* r30 */, unsigned long & size /* r31 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xString.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E10B8 -> 0x800E10B8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xString.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F5388 -> 0x800F5400
*/
// Range: 0x800F5388 -> 0x800F5400
char * trim_ws(char * text /* r29 */) {
    // Local variables
    char * tail; // r31
    char * s; // r30
}


