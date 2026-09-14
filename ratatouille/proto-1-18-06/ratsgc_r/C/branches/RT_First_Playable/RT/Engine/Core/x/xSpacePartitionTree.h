/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8004458C -> 0x8004458C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800507B8 -> 0x800507B8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800539A4 -> 0x800539A4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8009B858 -> 0x8009B858
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800AE9A4 -> 0x800AE9A4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800C60AC -> 0x800C79D0
*/
// Range: 0x800C60AC -> 0x800C60F0
int xSpacePartitionTree2D::get_grid_shift(float size /* f0 */, float max_width /* f0 */) {
    // Local variables
    int gsize; // r0
    int shift; // r3
}

// ERROR: Failed to emit tag 6CFBE1 (GlobalSubroutine)
// Range: 0x800C6198 -> 0x800C61B4
// this: r0
union cell & xSpacePartitionTree2D::grid_cell(int gx /* r0 */, int gy /* r0 */) {}

// ERROR: Failed to emit tag 6CFD58 (GlobalSubroutine)
// Range: 0x800C6244 -> 0x800C6254
// this: r0
void xSpacePartitionTree2D::free_node(union entry_node * e /* r0 */) {}

// ERROR: Failed to emit tag 6CFEC8 (GlobalSubroutine)
// Range: 0x800C6314 -> 0x800C6330
// this: r0
union cell & xSpacePartitionTree2D::grid_cell(int gx /* r0 */, int gy /* r0 */) const {}

// Range: 0x800C6330 -> 0x800C6634
// this: r27
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_accum_wrapper & cb /* r28 */) {
    // Local variables
    float scale; // f4
    int gy; // r25
    int gx; // r24

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x800C6634 -> 0x800C6938
// this: r27
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_fp_wrapper & cb /* r28 */) {
    // Local variables
    float scale; // f4
    int gy; // r25
    int gx; // r24

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x800C6938 -> 0x800C6974
// this: r0
void xSpacePartitionTree2D::intersect_circle(float x /* f5 */, float y /* f4 */, float r /* f0 */, struct cb_test_intersect & cb /* r0 */) {}

// Range: 0x800C6974 -> 0x800C6B44
// this: r23
void xSpacePartitionTree2D::intersect_point(float x /* f30 */, float y /* f31 */, struct cb_test_intersect & cb /* r24 */) {
    // Local variables
    int ix; // r25
    int iy; // r26
    union cell * c; // r31
    float code_scale; // f0
    int xcode; // r30
    int ycode; // r29
    union cell * const cell_list; // r28
    union entry_node * const node_list; // r27
    union entry_data * const entry_list; // r26
    int level; // r25
    unsigned short _i; // r3
    union entry_node * const _n; // r22
    int bit; // r5
}

// Range: 0x800C6B44 -> 0x800C6D04
// this: r30
void xSpacePartitionTree2D::intersect_line(float x0 /* f0 */, float y0 /* f0 */, float x1 /* f0 */, float y1 /* f0 */, struct cb_test_intersect & cb /* r31 */) {
    // Local variables
    int ix; // r1+0x50
    int iy; // r1+0x4C
    int dix; // r1+0x48
    int diy; // r1+0x44
    int end_ix; // r1+0x40
    int end_iy; // r1+0x3C
    int a; // r1+0x38
    float tx0; // r1+0x34
    float ty0; // r1+0x30
    float tx1; // r1+0x2C
    float ty1; // r1+0x28
    float dtx; // r1+0x24
    float dty; // r1+0x20

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x800C6D04 -> 0x800C6F88
// this: r23
static unsigned char xSpacePartitionTree2D::intersect_line_recur(union cell * c /* r24 */, int a /* r25 */, float tx0 /* f1 */, float ty0 /* f2 */, float tx1 /* f3 */, float ty1 /* f4 */, struct cb_test_intersect & cb /* r26 */) {
    // Local variables
    int index; // r7
    int depth; // r31
    struct rstack_node rstack[8]; // r1+0x10
    float txm; // f8
    float tym; // f9
    union cell * const cell_list; // r30
    union entry_node * const node_list; // r29
    union entry_data * const entry_list; // r28
    unsigned short searchid; // r27
    float mx; // r1+0xC
    float my; // r1+0x8
    float txmin; // f10
    float txmax; // f11
    float tymin; // f7
    float tymax; // f12
    int next_index; // r3
    struct rstack_node & node; // r6
    unsigned short _i; // r3
    union entry_node * _n; // r22
    union entry_data * const _e; // r4
    struct rstack_node & node; // r4
}

// Range: 0x800C6F88 -> 0x800C71F4
// this: r29
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r30 */, float x0 /* f0 */, float y0 /* f0 */, float x1 /* f0 */, float y1 /* f0 */, struct cb_fp_wrapper & cb /* r31 */) {
    // Local variables
    float code_scale; // f0
    int xcode0; // r28
    int ycode0; // r27
    int xcode1; // r26
    int ycode1; // r25
    union cell * const cell_list; // r24
    union entry_node * const node_list; // r23
    union entry_data * const entry_list; // r22
    int diff; // r21
    int level; // r20
    int bit; // r19
    unsigned short _i; // r3
    union entry_node * const _n; // r18
    unsigned short searchid; // r19
    union cell * topc; // r20
    int index; // r21
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

// Range: 0x800C71F4 -> 0x800C7460
// this: r29
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r30 */, float x0 /* f0 */, float y0 /* f0 */, float x1 /* f0 */, float y1 /* f0 */, struct cb_accum_wrapper & cb /* r31 */) {
    // Local variables
    float code_scale; // f0
    int xcode0; // r28
    int ycode0; // r27
    int xcode1; // r26
    int ycode1; // r25
    union cell * const cell_list; // r24
    union entry_node * const node_list; // r23
    union entry_data * const entry_list; // r22
    int diff; // r21
    int level; // r20
    int bit; // r19
    unsigned short _i; // r3
    union entry_node * const _n; // r18
    unsigned short searchid; // r19
    union cell * topc; // r20
    int index; // r21
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

// Range: 0x800C7460 -> 0x800C7764
// this: r27
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_test_intersect & cb /* r28 */) {
    // Local variables
    float scale; // f4
    int gy; // r25
    int gx; // r24

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x800C7764 -> 0x800C79D0
// this: r29
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r30 */, float x0 /* f0 */, float y0 /* f0 */, float x1 /* f0 */, float y1 /* f0 */, struct cb_test_intersect & cb /* r31 */) {
    // Local variables
    float code_scale; // f0
    int xcode0; // r28
    int ycode0; // r27
    int xcode1; // r26
    int ycode1; // r25
    union cell * const cell_list; // r24
    union entry_node * const node_list; // r23
    union entry_data * const entry_list; // r22
    int diff; // r21
    int level; // r20
    int bit; // r19
    unsigned short _i; // r3
    union entry_node * const _n; // r18
    unsigned short searchid; // r19
    union cell * topc; // r20
    int index; // r21
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
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800CFF0C -> 0x800CFF0C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F78E0 -> 0x800F78E0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800F80CC -> 0x800F80CC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010235C -> 0x8010235C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80109088 -> 0x80109088
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8010C360 -> 0x8010C360
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801101D4 -> 0x801101D4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011275C -> 0x8011275C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011665C -> 0x801169EC
*/
// ERROR: Failed to emit tag AC767D (GlobalSubroutine)
// ERROR: Failed to emit tag AC781E (GlobalSubroutine)
// Range: 0x801169B0 -> 0x801169EC
// this: r0
int xSpacePartitionTree2D::intersect_circle(union entry_data * * results /* r0 */, int max_results /* r0 */, float x /* f5 */, float y /* f4 */, float r /* f0 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8011E3A8 -> 0x8011E5FC
*/
// Range: 0x8011E3A8 -> 0x8011E3EC
// this: r30
void xSpacePartitionTree2D::erase(union entry_data * e /* r31 */) {}

// Range: 0x8011E3EC -> 0x8011E424
// this: r0
void xSpacePartitionTree2D::free_entry(union entry_data * e /* r0 */) {}

// ERROR: Failed to emit tag B2051F (GlobalSubroutine)
// Range: 0x8011E538 -> 0x8011E564
// this: r0
unsigned char xSpacePartitionTree2D::full() const {}

// Range: 0x8011E564 -> 0x8011E5FC
// this: r30
void xSpacePartitionTree2D::move(union entry_data * e /* r31 */, float x /* f29 */, float y /* f30 */, float r /* f31 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801243FC -> 0x80124F54
*/
// Range: 0x801243FC -> 0x80124438
// this: r0
void xSpacePartitionTree2D::intersect_circle(float x /* f5 */, float y /* f4 */, float r /* f0 */, struct cb_flame_circle_check & cb /* r0 */) {}

// Range: 0x80124438 -> 0x80124474
// this: r0
void xSpacePartitionTree2D::intersect_circle(float x /* f5 */, float y /* f4 */, float r /* f0 */, struct cb_flame_sphere_check & cb /* r0 */) {}

// Range: 0x80124474 -> 0x80124778
// this: r27
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_flame_sphere_check & cb /* r28 */) {
    // Local variables
    float scale; // f4
    int gy; // r25
    int gx; // r24

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x80124778 -> 0x80124A7C
// this: r27
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_flame_circle_check & cb /* r28 */) {
    // Local variables
    float scale; // f4
    int gy; // r25
    int gx; // r24

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x80124A7C -> 0x80124CE8
// this: r29
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r30 */, float x0 /* f0 */, float y0 /* f0 */, float x1 /* f0 */, float y1 /* f0 */, struct cb_flame_circle_check & cb /* r31 */) {
    // Local variables
    float code_scale; // f0
    int xcode0; // r28
    int ycode0; // r27
    int xcode1; // r26
    int ycode1; // r25
    union cell * const cell_list; // r24
    union entry_node * const node_list; // r23
    union entry_data * const entry_list; // r22
    int diff; // r21
    int level; // r20
    int bit; // r19
    unsigned short _i; // r3
    union entry_node * const _n; // r18
    unsigned short searchid; // r19
    union cell * topc; // r20
    int index; // r21
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

// Range: 0x80124CE8 -> 0x80124F54
// this: r29
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r30 */, float x0 /* f0 */, float y0 /* f0 */, float x1 /* f0 */, float y1 /* f0 */, struct cb_flame_sphere_check & cb /* r31 */) {
    // Local variables
    float code_scale; // f0
    int xcode0; // r28
    int ycode0; // r27
    int xcode1; // r26
    int ycode1; // r25
    union cell * const cell_list; // r24
    union entry_node * const node_list; // r23
    union entry_data * const entry_list; // r22
    int diff; // r21
    int level; // r20
    int bit; // r19
    unsigned short _i; // r3
    union entry_node * const _n; // r18
    unsigned short searchid; // r19
    union cell * topc; // r20
    int index; // r21
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
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80126EEC -> 0x80126EEC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DA70 -> 0x8012DA70
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80135ED8 -> 0x80135ED8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80139D2C -> 0x80139D2C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013D174 -> 0x8013D174
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801441F8 -> 0x801441F8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014605C -> 0x8014605C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8014B024 -> 0x8014B024
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8015402C -> 0x8015402C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80165180 -> 0x80165180
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8016AA1C -> 0x8016AA1C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801734D8 -> 0x801734D8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80173A68 -> 0x80173A68
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018934C -> 0x8018934C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80195908 -> 0x80195908
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801ABF74 -> 0x801ABF74
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801AC528 -> 0x801AC528
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B0B44 -> 0x801B0B44
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B7C50 -> 0x801B7C50
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C314C -> 0x801C314C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CD618 -> 0x801CD618
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801D07BC -> 0x801D07BC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DC870 -> 0x801DC870
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DD224 -> 0x801DD224
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E44CC -> 0x801E44CC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E6ADC -> 0x801E6ADC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E96FC -> 0x801E96FC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EC590 -> 0x801EC590
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EEAB4 -> 0x801EEAB4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F2C34 -> 0x801F31E0
*/
// Range: 0x801F2C34 -> 0x801F2C70
// this: r0
void xSpacePartitionTree2D::intersect_circle(float x /* f5 */, float y /* f4 */, float r /* f0 */, struct cb_check_overlap & cb /* r0 */) {}

// Range: 0x801F2C70 -> 0x801F2F74
// this: r27
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, struct cb_check_overlap & cb /* r28 */) {
    // Local variables
    float scale; // f4
    int gy; // r25
    int gx; // r24

    // References
    // -> static char __FUNCTION__[15];
}

// Range: 0x801F2F74 -> 0x801F31E0
// this: r29
unsigned char xSpacePartitionTree2D::intersect_rect(union cell * c /* r30 */, float x0 /* f0 */, float y0 /* f0 */, float x1 /* f0 */, float y1 /* f0 */, struct cb_check_overlap & cb /* r31 */) {
    // Local variables
    float code_scale; // f0
    int xcode0; // r28
    int ycode0; // r27
    int xcode1; // r26
    int ycode1; // r25
    union cell * const cell_list; // r24
    union entry_node * const node_list; // r23
    union entry_data * const entry_list; // r22
    int diff; // r21
    int level; // r20
    int bit; // r19
    unsigned short _i; // r3
    union entry_node * const _n; // r18
    unsigned short searchid; // r19
    union cell * topc; // r20
    int index; // r21
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
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801F66A0 -> 0x801F66A0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FC78C -> 0x801FC78C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FD4E4 -> 0x801FD4E4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020B8CC -> 0x8020B8CC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020C400 -> 0x8020C400
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020DC0C -> 0x8020DC0C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020F024 -> 0x8020F024
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020FAC8 -> 0x8020FAC8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802168E4 -> 0x802168E4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80218488 -> 0x80218488
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802193B4 -> 0x802193B4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021B8C0 -> 0x8021B8C0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021CEF8 -> 0x8021CEF8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8021F2F0 -> 0x8021F2F0
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80226E38 -> 0x80226E38
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8022CD54 -> 0x8022CD54
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80230F44 -> 0x80230F44
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8023708C -> 0x8023708C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802399CC -> 0x802399CC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8024DF78 -> 0x8024DF78
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80253630 -> 0x80253630
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80254A68 -> 0x80254A68
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025818C -> 0x8025818C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80259600 -> 0x80259600
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025BF30 -> 0x8025BF30
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8025F538 -> 0x8025F538
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80263D00 -> 0x80263D00
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80270574 -> 0x80270574
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80275770 -> 0x80275770
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80277AA4 -> 0x80277AA4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027C93C -> 0x8027C93C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8027DEB4 -> 0x8027DEB4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80280A7C -> 0x80280A7C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80291668 -> 0x80291668
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80293B78 -> 0x80293B78
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80296BD4 -> 0x80296BD4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8029BE94 -> 0x8029BE94
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A1374 -> 0x802A1374
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A394C -> 0x802A394C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AA798 -> 0x802AA798
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802AB888 -> 0x802AB888
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802BACA0 -> 0x802BACA0
*/

