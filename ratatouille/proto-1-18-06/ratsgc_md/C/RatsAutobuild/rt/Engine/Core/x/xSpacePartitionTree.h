/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800241D0 -> 0x800241D0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80028C5C -> 0x80028C5C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002B6C8 -> 0x8002B6C8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80055B98 -> 0x80055B98
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005FF4C -> 0x8005FF4C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006F180 -> 0x8006FC30
*/
// Range: 0x8006F180 -> 0x8006F1C4
int xSpacePartitionTree2D::get_grid_shift(float size /* f0 */, float max_width /* f0 */) {
    // Local variables
    int gsize; // r0
    int shift; // r3
}

// Range: 0x8006F1C4 -> 0x8006F1E4
// this: r0
union cell * xSpacePartitionTree2D::alloc_children() {
    // Local variables
    union cell * c; // r5
}

// Range: 0x8006F1E4 -> 0x8006F200
// this: r0
union cell & xSpacePartitionTree2D::grid_cell(int gx /* r0 */, int gy /* r0 */) {}

// Range: 0x8006F200 -> 0x8006F214
// this: r0
union entry_node * xSpacePartitionTree2D::alloc_node() {
    // Local variables
    union entry_node * e; // r4
}

// Range: 0x8006F214 -> 0x8006F224
// this: r0
void xSpacePartitionTree2D::free_node(union entry_node * e /* r0 */) {}

// Range: 0x8006F224 -> 0x8006F240
// this: r0
void xSpacePartitionTree2D::free_children(union cell * c /* r0 */) {}

// Range: 0x8006F240 -> 0x8006F4E4
// this: r27
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_accum_wrapper & cb /* r28 */) {
    // Local variables
    float scale; // f4
    int gy; // r25
    int gx; // r24
}

// Range: 0x8006F4E4 -> 0x8006F788
// this: r27
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_fp_wrapper & cb /* r28 */) {
    // Local variables
    float scale; // f4
    int gy; // r25
    int gx; // r24
}

// Range: 0x8006F788 -> 0x8006F9DC
// this: r19
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r20 */, float x0 /* f0 */, float y0 /* f0 */, float x1 /* f0 */, float y1 /* f0 */, struct cb_fp_wrapper & cb /* r21 */) {
    // Local variables
    float code_scale; // f0
    int xcode0; // r31
    int ycode0; // r30
    int xcode1; // r29
    int ycode1; // r28
    union cell * const cell_list; // r27
    union entry_node * const node_list; // r26
    union entry_data * const entry_list; // r25
    int diff; // r24
    int level; // r23
    int bit; // r22
    unsigned short _i; // r3
    union entry_node * const _n; // r18
    unsigned short searchid; // r22
    union cell * topc; // r23
    int index; // r24
    unsigned short _i; // r3
    union entry_node * _n; // r18
    union entry_data * const _e; // r4
    union cell * cc; // r6
    int code_width; // r0
    int left; // r7
    int right; // r7
    int top; // r8
    int bottom; // r0
}

// Range: 0x8006F9DC -> 0x8006FC30
// this: r19
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r20 */, float x0 /* f0 */, float y0 /* f0 */, float x1 /* f0 */, float y1 /* f0 */, struct cb_accum_wrapper & cb /* r21 */) {
    // Local variables
    float code_scale; // f0
    int xcode0; // r31
    int ycode0; // r30
    int xcode1; // r29
    int ycode1; // r28
    union cell * const cell_list; // r27
    union entry_node * const node_list; // r26
    union entry_data * const entry_list; // r25
    int diff; // r24
    int level; // r23
    int bit; // r22
    unsigned short _i; // r3
    union entry_node * const _n; // r18
    unsigned short searchid; // r22
    union cell * topc; // r23
    int index; // r24
    unsigned short _i; // r3
    union entry_node * _n; // r18
    union entry_data * const _e; // r4
    union cell * cc; // r6
    int code_width; // r0
    int left; // r7
    int right; // r7
    int top; // r8
    int bottom; // r0
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80075C24 -> 0x80075C24
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008F2F8 -> 0x8008F2F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008FA0C -> 0x8008FA0C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80096C38 -> 0x80096C38
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009ADB8 -> 0x8009ADB8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009D18C -> 0x8009D18C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009F894 -> 0x8009F894
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A16A0 -> 0x800A16A0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A39A4 -> 0x800A3ABC
*/
// Range: 0x800A39A4 -> 0x800A3A6C
// this: r28
union entry_data * xSpacePartitionTree2D::insert(void * value /* r29 */, int type /* r30 */, float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */) {
    // Local variables
    union entry_data * e; // r31
    float dx; // f5
    float dy; // f0
}

// Range: 0x800A3A6C -> 0x800A3A80
// this: r0
union entry_data * xSpacePartitionTree2D::alloc_entry() {
    // Local variables
    union entry_data * e; // r4
}

// Range: 0x800A3A80 -> 0x800A3ABC
// this: r0
int xSpacePartitionTree2D::intersect_circle(union entry_data * * results /* r0 */, int max_results /* r0 */, float x /* f5 */, float y /* f4 */, float r /* f0 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A8F70 -> 0x800A911C
*/
// Range: 0x800A8F70 -> 0x800A8FAC
// this: r30
void xSpacePartitionTree2D::erase(union entry_data * e /* r31 */) {}

// Range: 0x800A8FAC -> 0x800A8FBC
// this: r0
void xSpacePartitionTree2D::free_entry(union entry_data * e /* r0 */) {}

// Range: 0x800A8FBC -> 0x800A9060
// this: r28
union entry_data * xSpacePartitionTree2D::insert(void * value /* r29 */, int type /* r30 */, float x /* f29 */, float y /* f30 */, float r /* f31 */) {
    // Local variables
    union entry_data * e; // r31
}

// Range: 0x800A9060 -> 0x800A908C
// this: r0
unsigned char xSpacePartitionTree2D::full() const {}

// Range: 0x800A908C -> 0x800A911C
// this: r30
void xSpacePartitionTree2D::move(union entry_data * e /* r31 */, float x /* f29 */, float y /* f30 */, float r /* f31 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800ACC58 -> 0x800AD6C0
*/
// Range: 0x800ACC58 -> 0x800ACC94
// this: r0
void xSpacePartitionTree2D::intersect_circle(float x /* f5 */, float y /* f4 */, float r /* f0 */, struct cb_flame_circle_check & cb /* r0 */) {}

// Range: 0x800ACC94 -> 0x800ACCD0
// this: r0
void xSpacePartitionTree2D::intersect_circle(float x /* f5 */, float y /* f4 */, float r /* f0 */, struct cb_flame_sphere_check & cb /* r0 */) {}

// Range: 0x800ACCD0 -> 0x800ACF74
// this: r27
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_flame_sphere_check & cb /* r28 */) {
    // Local variables
    float scale; // f4
    int gy; // r25
    int gx; // r24
}

// Range: 0x800ACF74 -> 0x800AD218
// this: r27
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_flame_circle_check & cb /* r28 */) {
    // Local variables
    float scale; // f4
    int gy; // r25
    int gx; // r24
}

// Range: 0x800AD218 -> 0x800AD46C
// this: r19
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r20 */, float x0 /* f0 */, float y0 /* f0 */, float x1 /* f0 */, float y1 /* f0 */, struct cb_flame_circle_check & cb /* r21 */) {
    // Local variables
    float code_scale; // f0
    int xcode0; // r31
    int ycode0; // r30
    int xcode1; // r29
    int ycode1; // r28
    union cell * const cell_list; // r27
    union entry_node * const node_list; // r26
    union entry_data * const entry_list; // r25
    int diff; // r24
    int level; // r23
    int bit; // r22
    unsigned short _i; // r3
    union entry_node * const _n; // r18
    unsigned short searchid; // r22
    union cell * topc; // r23
    int index; // r24
    unsigned short _i; // r3
    union entry_node * _n; // r18
    union entry_data * const _e; // r4
    union cell * cc; // r6
    int code_width; // r0
    int left; // r7
    int right; // r7
    int top; // r8
    int bottom; // r0
}

// Range: 0x800AD46C -> 0x800AD6C0
// this: r19
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r20 */, float x0 /* f0 */, float y0 /* f0 */, float x1 /* f0 */, float y1 /* f0 */, struct cb_flame_sphere_check & cb /* r21 */) {
    // Local variables
    float code_scale; // f0
    int xcode0; // r31
    int ycode0; // r30
    int xcode1; // r29
    int ycode1; // r28
    union cell * const cell_list; // r27
    union entry_node * const node_list; // r26
    union entry_data * const entry_list; // r25
    int diff; // r24
    int level; // r23
    int bit; // r22
    unsigned short _i; // r3
    union entry_node * const _n; // r18
    unsigned short searchid; // r22
    union cell * topc; // r23
    int index; // r24
    unsigned short _i; // r3
    union entry_node * _n; // r18
    union entry_data * const _e; // r4
    union cell * cc; // r6
    int code_width; // r0
    int left; // r7
    int right; // r7
    int top; // r8
    int bottom; // r0
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AE8DC -> 0x800AE8DC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B2EF8 -> 0x800B2EF8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B87DC -> 0x800B87DC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BB974 -> 0x800BB974
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BDECC -> 0x800BDECC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C2DA8 -> 0x800C2DA8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C40C4 -> 0x800C40C4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C8370 -> 0x800C8370
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CDED8 -> 0x800CDED8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D8E9C -> 0x800D8E9C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800DCDD4 -> 0x800DCDD4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E2C38 -> 0x800E2C38
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800E30A0 -> 0x800E30A0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F1D10 -> 0x800F1D10
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F9BC0 -> 0x800F9BC0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80109ED4 -> 0x80109ED4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010A458 -> 0x8010A458
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010D248 -> 0x8010D248
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80111FB8 -> 0x80111FB8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801183D4 -> 0x801183D4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011E454 -> 0x8011E454
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801204DC -> 0x801204DC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80129334 -> 0x80129334
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801298F0 -> 0x801298F0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DC20 -> 0x8012DC20
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012F56C -> 0x8012F56C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80131068 -> 0x80131068
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80133200 -> 0x80133200
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80133610 -> 0x80133610
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80134B64 -> 0x80134B64
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801369E4 -> 0x801369E4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013BB6C -> 0x8013BB6C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013C060 -> 0x8013C060
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801470F8 -> 0x801470F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801478B4 -> 0x801478B4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801489C0 -> 0x801489C0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801498F4 -> 0x801498F4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80149F58 -> 0x80149F58
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014DDC4 -> 0x8014DDC4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014F400 -> 0x8014F400
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014FE14 -> 0x8014FE14
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80151F18 -> 0x80151F18
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80153568 -> 0x80153568
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015877C -> 0x8015877C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015CD00 -> 0x8015CD00
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015FC3C -> 0x8015FC3C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801651C4 -> 0x801651C4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80167104 -> 0x80167104
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801740EC -> 0x801740EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801771C0 -> 0x801771C0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80178238 -> 0x80178238
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017B3C4 -> 0x8017B3C4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017C3E0 -> 0x8017C3E0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017DF2C -> 0x8017DF2C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80180878 -> 0x80180878
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80183114 -> 0x80183114
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018C058 -> 0x8018C058
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801900A8 -> 0x801900A8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80191454 -> 0x80191454
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801948AC -> 0x801948AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801957F8 -> 0x801957F8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80197B68 -> 0x80197B68
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A4324 -> 0x801A4324
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A6150 -> 0x801A6150
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801A7F84 -> 0x801A7F84
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AB288 -> 0x801AB288
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AF194 -> 0x801AF194
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B1148 -> 0x801B1148
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B6A2C -> 0x801B6A2C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B7A10 -> 0x801B7A10
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C28FC -> 0x801C28FC
*/

