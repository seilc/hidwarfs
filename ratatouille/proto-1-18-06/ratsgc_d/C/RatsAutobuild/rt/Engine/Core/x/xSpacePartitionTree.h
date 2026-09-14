/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80050534 -> 0x80050534
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8005EFC8 -> 0x8005EFC8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800630E0 -> 0x800630E0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800B9B40 -> 0x800B9B40
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D5978 -> 0x800D5978
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F2D9C -> 0x800F4E28
*/
// Range: 0x800F2D9C -> 0x800F2DF4
int xSpacePartitionTree2D::get_grid_shift(float size /* f1 */, float max_width /* f2 */) {
    // Local variables
    int gsize; // r31
    int shift; // r30
}

// ERROR: Failed to emit tag 6E534C (GlobalSubroutine)
// Range: 0x800F2EC0 -> 0x800F2EDC
// this: r3
union cell & xSpacePartitionTree2D::grid_cell(int gx /* r4 */, int gy /* r5 */) {}

// ERROR: Failed to emit tag 6E54E9 (GlobalSubroutine)
// Range: 0x800F2F7C -> 0x800F2F8C
// this: r3
void xSpacePartitionTree2D::free_node(union entry_node * e /* r4 */) {}

// ERROR: Failed to emit tag 6E5659 (GlobalSubroutine)
// Range: 0x800F305C -> 0x800F3078
// this: r3
union cell & xSpacePartitionTree2D::grid_cell(int gx /* r4 */, int gy /* r5 */) const {}

// Range: 0x800F3078 -> 0x800F34A0
// this: r31
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_accum_wrapper & cb /* r1+0x8 */) {
    // Local variables
    float scale; // f27
    int gx0; // r1+0x18
    int gy0; // r1+0x14
    int gx1; // r1+0x10
    int gy1; // r1+0xC
    int gy; // r30
    int gx; // r29

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x800F34A0 -> 0x800F38C8
// this: r31
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_fp_wrapper & cb /* r1+0x8 */) {
    // Local variables
    float scale; // f27
    int gx0; // r1+0x18
    int gy0; // r1+0x14
    int gx1; // r1+0x10
    int gy1; // r1+0xC
    int gy; // r30
    int gx; // r29

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x800F38C8 -> 0x800F3944
// this: r1+0x8
void xSpacePartitionTree2D::intersect_circle(float x /* f29 */, float y /* f30 */, float r /* f31 */, struct cb_test_intersect & cb /* r1+0xC */) {}

// Range: 0x800F3944 -> 0x800F3B4C
// this: r31
void xSpacePartitionTree2D::intersect_point(float x /* f30 */, float y /* f31 */, struct cb_test_intersect & cb /* r1+0x8 */) {
    // Local variables
    int ix; // r28
    int iy; // r27
    union cell * c; // r30
    float code_scale; // f29
    int xcode; // r23
    int ycode; // r22
    union cell * const cell_list; // r21
    union entry_node * const node_list; // r20
    union entry_data * const entry_list; // r19
    int level; // r29
    unsigned short _i; // r25
    union entry_node * const _n; // r26
    union entry_data * const _e; // r18
    int bit; // r24
    int index; // r17
}

// Range: 0x800F3B4C -> 0x800F3D54
// this: r31
void xSpacePartitionTree2D::intersect_line(float x0 /* r1+0x20 */, float y0 /* r1+0x24 */, float x1 /* r1+0x28 */, float y1 /* r1+0x2C */, struct cb_test_intersect & cb /* r1+0x30 */) {
    // Local variables
    int ix; // r1+0x64
    int iy; // r1+0x60
    int dix; // r1+0x5C
    int diy; // r1+0x58
    int end_ix; // r1+0x54
    int end_iy; // r1+0x50
    int a; // r1+0x4C
    float tx0; // r1+0x48
    float ty0; // r1+0x44
    float tx1; // r1+0x40
    float ty1; // r1+0x3C
    float dtx; // r1+0x38
    float dty; // r1+0x34

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x800F3D54 -> 0x800F40AC
// this: r27
static unsigned char xSpacePartitionTree2D::intersect_line_recur(union cell * c /* r28 */, int a /* r1+0x8 */, float tx0 /* f30 */, float ty0 /* f31 */, float tx1 /* f26 */, float ty1 /* f27 */, struct cb_test_intersect & cb /* r1+0xC */) {
    // Local variables
    int index; // r31
    int depth; // r26
    struct rstack_node rstack[8]; // r1+0x20
    float txm; // f29
    float tym; // f28
    union cell * const cell_list; // r21
    union entry_node * const node_list; // r1+0x1C
    union entry_data * const entry_list; // r1+0x18
    unsigned short searchid; // r20
    float mx; // r1+0x14
    float my; // r1+0x10
    float txmin; // f23
    float txmax; // f25
    float tymin; // f22
    float tymax; // f24
    float tmaxdiff; // f21
    int next_index; // r25
    struct rstack_node & node; // r30
    unsigned short _i; // r22
    union entry_node * _n; // r23
    union entry_data * const _e; // r24
    struct rstack_node & node; // r29
}

// Range: 0x800F40AC -> 0x800F43C8
// this: r30
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r31 */, float x0 /* r1+0x8 */, float y0 /* r1+0xC */, float x1 /* r1+0x10 */, float y1 /* r1+0x14 */, struct cb_fp_wrapper & cb /* r1+0x18 */) {
    // Local variables
    float code_scale; // f31
    int xcode0; // r23
    int ycode0; // r22
    int xcode1; // r17
    int ycode1; // r1+0x4C
    union cell * const cell_list; // r21
    union entry_node * const node_list; // r1+0x48
    union entry_data * const entry_list; // r1+0x44
    int diff; // r1+0x40
    int level; // r27
    int bit; // r20
    unsigned short _i; // r19
    union entry_node * const _n; // r25
    union entry_data * const _e; // r1+0x3C
    int index; // r1+0x38
    unsigned short searchid; // r1+0x1C
    union cell * topc; // r1+0x34
    int index; // r28
    unsigned short _i; // r18
    union entry_node * _n; // r24
    union entry_data * const _e; // r26
    union cell * cc; // r29
    int code_width; // r1+0x30
    int left; // r1+0x2C
    int right; // r1+0x28
    int top; // r1+0x24
    int bottom; // r1+0x20
}

// Range: 0x800F43C8 -> 0x800F46E4
// this: r30
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r31 */, float x0 /* r1+0x8 */, float y0 /* r1+0xC */, float x1 /* r1+0x10 */, float y1 /* r1+0x14 */, struct cb_accum_wrapper & cb /* r1+0x18 */) {
    // Local variables
    float code_scale; // f31
    int xcode0; // r23
    int ycode0; // r22
    int xcode1; // r17
    int ycode1; // r1+0x4C
    union cell * const cell_list; // r21
    union entry_node * const node_list; // r1+0x48
    union entry_data * const entry_list; // r1+0x44
    int diff; // r1+0x40
    int level; // r27
    int bit; // r20
    unsigned short _i; // r19
    union entry_node * const _n; // r25
    union entry_data * const _e; // r1+0x3C
    int index; // r1+0x38
    unsigned short searchid; // r1+0x1C
    union cell * topc; // r1+0x34
    int index; // r28
    unsigned short _i; // r18
    union entry_node * _n; // r24
    union entry_data * const _e; // r26
    union cell * cc; // r29
    int code_width; // r1+0x30
    int left; // r1+0x2C
    int right; // r1+0x28
    int top; // r1+0x24
    int bottom; // r1+0x20
}

// Range: 0x800F46E4 -> 0x800F4B0C
// this: r31
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_test_intersect & cb /* r1+0x8 */) {
    // Local variables
    float scale; // f27
    int gx0; // r1+0x18
    int gy0; // r1+0x14
    int gx1; // r1+0x10
    int gy1; // r1+0xC
    int gy; // r30
    int gx; // r29

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x800F4B0C -> 0x800F4E28
// this: r30
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r31 */, float x0 /* r1+0x8 */, float y0 /* r1+0xC */, float x1 /* r1+0x10 */, float y1 /* r1+0x14 */, struct cb_test_intersect & cb /* r1+0x18 */) {
    // Local variables
    float code_scale; // f31
    int xcode0; // r23
    int ycode0; // r22
    int xcode1; // r17
    int ycode1; // r1+0x4C
    union cell * const cell_list; // r21
    union entry_node * const node_list; // r1+0x48
    union entry_data * const entry_list; // r1+0x44
    int diff; // r1+0x40
    int level; // r27
    int bit; // r20
    unsigned short _i; // r19
    union entry_node * const _n; // r25
    union entry_data * const _e; // r1+0x3C
    int index; // r1+0x38
    unsigned short searchid; // r1+0x1C
    union cell * topc; // r1+0x34
    int index; // r28
    unsigned short _i; // r18
    union entry_node * _n; // r24
    union entry_data * const _e; // r26
    union cell * cc; // r29
    int code_width; // r1+0x30
    int left; // r1+0x2C
    int right; // r1+0x28
    int top; // r1+0x24
    int bottom; // r1+0x20
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800FEE40 -> 0x800FEE40
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80132700 -> 0x80132700
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801330A8 -> 0x801330A8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013E9B0 -> 0x8013E9B0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801466A8 -> 0x801466A8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014AE5C -> 0x8014AE5C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014F9B0 -> 0x8014F9B0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80152680 -> 0x80152680
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80156EF8 -> 0x80157364
*/
// ERROR: Failed to emit tag B152F8 (GlobalSubroutine)
// ERROR: Failed to emit tag B154A5 (GlobalSubroutine)
// Range: 0x801572E0 -> 0x80157364
// this: r1+0x8
int xSpacePartitionTree2D::intersect_circle(union entry_data * * results /* r1+0xC */, int max_results /* r1+0x10 */, float x /* f29 */, float y /* f30 */, float r /* f31 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015F848 -> 0x8015FAEC
*/
// Range: 0x8015F848 -> 0x8015F894
// this: r31
void xSpacePartitionTree2D::erase(union entry_data * e /* r30 */) {}

// Range: 0x8015F894 -> 0x8015F8EC
// this: r3
void xSpacePartitionTree2D::free_entry(union entry_data * e /* r4 */) {
    // Local variables
    int i; // r31
}

// ERROR: Failed to emit tag B6EA9F (GlobalSubroutine)
// Range: 0x8015FA10 -> 0x8015FA4C
// this: r3
unsigned char xSpacePartitionTree2D::full() const {}

// Range: 0x8015FA4C -> 0x8015FAEC
// this: r31
void xSpacePartitionTree2D::move(union entry_data * e /* r30 */, float x /* f29 */, float y /* f30 */, float r /* f31 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80166544 -> 0x801674C4
*/
// Range: 0x80166544 -> 0x801665C0
// this: r1+0x8
void xSpacePartitionTree2D::intersect_circle(float x /* f29 */, float y /* f30 */, float r /* f31 */, struct cb_flame_circle_check & cb /* r1+0xC */) {}

// Range: 0x801665C0 -> 0x8016663C
// this: r1+0x8
void xSpacePartitionTree2D::intersect_circle(float x /* f29 */, float y /* f30 */, float r /* f31 */, struct cb_flame_sphere_check & cb /* r1+0xC */) {}

// Range: 0x8016663C -> 0x80166A64
// this: r31
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_flame_sphere_check & cb /* r1+0x8 */) {
    // Local variables
    float scale; // f27
    int gx0; // r1+0x18
    int gy0; // r1+0x14
    int gx1; // r1+0x10
    int gy1; // r1+0xC
    int gy; // r30
    int gx; // r29

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x80166A64 -> 0x80166E8C
// this: r31
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_flame_circle_check & cb /* r1+0x8 */) {
    // Local variables
    float scale; // f27
    int gx0; // r1+0x18
    int gy0; // r1+0x14
    int gx1; // r1+0x10
    int gy1; // r1+0xC
    int gy; // r30
    int gx; // r29

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x80166E8C -> 0x801671A8
// this: r30
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r31 */, float x0 /* r1+0x8 */, float y0 /* r1+0xC */, float x1 /* r1+0x10 */, float y1 /* r1+0x14 */, struct cb_flame_circle_check & cb /* r1+0x18 */) {
    // Local variables
    float code_scale; // f31
    int xcode0; // r23
    int ycode0; // r22
    int xcode1; // r17
    int ycode1; // r1+0x4C
    union cell * const cell_list; // r21
    union entry_node * const node_list; // r1+0x48
    union entry_data * const entry_list; // r1+0x44
    int diff; // r1+0x40
    int level; // r27
    int bit; // r20
    unsigned short _i; // r19
    union entry_node * const _n; // r25
    union entry_data * const _e; // r1+0x3C
    int index; // r1+0x38
    unsigned short searchid; // r1+0x1C
    union cell * topc; // r1+0x34
    int index; // r28
    unsigned short _i; // r18
    union entry_node * _n; // r24
    union entry_data * const _e; // r26
    union cell * cc; // r29
    int code_width; // r1+0x30
    int left; // r1+0x2C
    int right; // r1+0x28
    int top; // r1+0x24
    int bottom; // r1+0x20
}

// Range: 0x801671A8 -> 0x801674C4
// this: r30
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r31 */, float x0 /* r1+0x8 */, float y0 /* r1+0xC */, float x1 /* r1+0x10 */, float y1 /* r1+0x14 */, struct cb_flame_sphere_check & cb /* r1+0x18 */) {
    // Local variables
    float code_scale; // f31
    int xcode0; // r23
    int ycode0; // r22
    int xcode1; // r17
    int ycode1; // r1+0x4C
    union cell * const cell_list; // r21
    union entry_node * const node_list; // r1+0x48
    union entry_data * const entry_list; // r1+0x44
    int diff; // r1+0x40
    int level; // r27
    int bit; // r20
    unsigned short _i; // r19
    union entry_node * const _n; // r25
    union entry_data * const _e; // r1+0x3C
    int index; // r1+0x38
    unsigned short searchid; // r1+0x1C
    union cell * topc; // r1+0x34
    int index; // r28
    unsigned short _i; // r18
    union entry_node * _n; // r24
    union entry_data * const _e; // r26
    union cell * cc; // r29
    int code_width; // r1+0x30
    int left; // r1+0x2C
    int right; // r1+0x28
    int top; // r1+0x24
    int bottom; // r1+0x20
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801698C0 -> 0x801698C0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801719F0 -> 0x801719F0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017AEFC -> 0x8017AEFC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017FB98 -> 0x8017FB98
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80183720 -> 0x80183720
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018B930 -> 0x8018B930
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018DBC8 -> 0x8018DBC8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80193B3C -> 0x80193B3C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019E068 -> 0x8019E068
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B333C -> 0x801B333C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B96FC -> 0x801B96FC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C42A4 -> 0x801C42A4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C4848 -> 0x801C4848
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DD98C -> 0x801DD98C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EB73C -> 0x801EB73C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802059AC -> 0x802059AC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80205F48 -> 0x80205F48
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020B07C -> 0x8020B07C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80213AD4 -> 0x80213AD4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80220C80 -> 0x80220C80
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022C87C -> 0x8022C87C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022FD84 -> 0x8022FD84
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023D964 -> 0x8023D964
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023E510 -> 0x8023E510
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80246EF8 -> 0x80246EF8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80249CF4 -> 0x80249CF4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024CF80 -> 0x8024CF80
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80250600 -> 0x80250600
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025302C -> 0x8025302C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80257B20 -> 0x802582E0
*/
// Range: 0x80257B20 -> 0x80257B9C
// this: r1+0x8
void xSpacePartitionTree2D::intersect_circle(float x /* f29 */, float y /* f30 */, float r /* f31 */, struct cb_check_overlap & cb /* r1+0xC */) {}

// Range: 0x80257B9C -> 0x80257FC4
// this: r31
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_check_overlap & cb /* r1+0x8 */) {
    // Local variables
    float scale; // f27
    int gx0; // r1+0x18
    int gy0; // r1+0x14
    int gx1; // r1+0x10
    int gy1; // r1+0xC
    int gy; // r30
    int gx; // r29

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x80257FC4 -> 0x802582E0
// this: r30
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r31 */, float x0 /* r1+0x8 */, float y0 /* r1+0xC */, float x1 /* r1+0x10 */, float y1 /* r1+0x14 */, struct cb_check_overlap & cb /* r1+0x18 */) {
    // Local variables
    float code_scale; // f31
    int xcode0; // r23
    int ycode0; // r22
    int xcode1; // r17
    int ycode1; // r1+0x4C
    union cell * const cell_list; // r21
    union entry_node * const node_list; // r1+0x48
    union entry_data * const entry_list; // r1+0x44
    int diff; // r1+0x40
    int level; // r27
    int bit; // r20
    unsigned short _i; // r19
    union entry_node * const _n; // r25
    union entry_data * const _e; // r1+0x3C
    int index; // r1+0x38
    unsigned short searchid; // r1+0x1C
    union cell * topc; // r1+0x34
    int index; // r28
    unsigned short _i; // r18
    union entry_node * _n; // r24
    union entry_data * const _e; // r26
    union cell * cc; // r29
    int code_width; // r1+0x30
    int left; // r1+0x2C
    int right; // r1+0x28
    int top; // r1+0x24
    int bottom; // r1+0x20
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025C0FC -> 0x8025C0FC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80263200 -> 0x80263200
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80264084 -> 0x80264084
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80273BD8 -> 0x80273BD8
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80274894 -> 0x80274894
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80276328 -> 0x80276328
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80277988 -> 0x80277988
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027853C -> 0x8027853C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027FB88 -> 0x8027FB88
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802817FC -> 0x802817FC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80282924 -> 0x80282924
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802852E0 -> 0x802852E0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80286A60 -> 0x80286A60
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802891B4 -> 0x802891B4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802917DC -> 0x802917DC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80298880 -> 0x80298880
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029CFC4 -> 0x8029CFC4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A3B84 -> 0x802A3B84
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A6AD4 -> 0x802A6AD4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BD854 -> 0x802BD854
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C3934 -> 0x802C3934
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C4F34 -> 0x802C4F34
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802C9150 -> 0x802C9150
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CA774 -> 0x802CA774
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802CD804 -> 0x802CD804
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D1454 -> 0x802D1454
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D6B38 -> 0x802D6B38
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802E4E80 -> 0x802E4E80
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802EAB14 -> 0x802EAB14
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802ED33C -> 0x802ED33C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F2A30 -> 0x802F2A30
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F4078 -> 0x802F4078
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F7620 -> 0x802F7620
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030A7EC -> 0x8030A7EC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030D368 -> 0x8030D368
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x803106E4 -> 0x803106E4
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031618C -> 0x8031618C
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031C388 -> 0x8031C388
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8031EE38 -> 0x8031EE38
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80327908 -> 0x80327908
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80328BE0 -> 0x80328BE0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80339A54 -> 0x80339A54
*/

