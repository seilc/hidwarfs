/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Obj\wii\3rdParty\jpeg-6b\jquant2.c
    Producer: MW EABI PPC C-Compiler
    Language: C
    Code range: 0x805E20E8 -> 0x805E3710
*/
typedef struct {
    // Members
    int c0min; // offset 0x0, size 0x4
    int c0max; // offset 0x4, size 0x4
    int c1min; // offset 0x8, size 0x4
    int c1max; // offset 0xC, size 0x4
    int c2min; // offset 0x10, size 0x4
    int c2max; // offset 0x14, size 0x4
    long volume; // offset 0x18, size 0x4
    long colorcount; // offset 0x1C, size 0x4
} box;
// Range: 0x805E20E8 -> 0x805E2174
static void prescan_quantize() {
    // Local variables
    unsigned char * ptr; // r8
    unsigned short * histp; // r0
    unsigned short (* * histogram)[32]; // r9
    int row; // r10
    unsigned int col; // r11
    unsigned int width; // r12
}
// Range: 0x805E2174 -> 0x805E21BC
static box * find_biggest_color_pop() {
    // Local variables
    box * boxp; // r3
    int i; // r6
    long maxc; // r7
    box * which; // r8
}
// Range: 0x805E21BC -> 0x805E21F8
static box * find_biggest_volume() {
    // Local variables
    box * boxp; // r3
    int i; // r5
    long maxv; // r6
    box * which; // r7
}
// Range: 0x805E21F8 -> 0x805E25B4
static void update_box() {
    // Local variables
    unsigned short (* * histogram)[32]; // r3
    unsigned short * histp; // r29
    int c0; // r5
    int c1; // r6
    int c2; // r7
    int c0min; // r0
    int c0max; // r8
    int c1min; // r9
    int c1max; // r10
    int c2min; // r11
    int c2max; // r12
    long dist0; // r29
    long dist1; // r6
    long dist2; // r5
    long ccount; // r30
}
// Range: 0x805E25B4 -> 0x805E2754
static int median_cut(struct jpeg_decompress_struct * cinfo /* r27 */, box * boxlist /* r28 */, int numboxes /* r29 */, int desired_colors /* r30 */) {
    // Local variables
    int n; // r0
    int lb; // r5
    int c0; // r11
    int c1; // reg65535
    int c2; // r12
    int cmax; // r26
    box * b1; // r4
    box * b2; // r31
}
// Range: 0x805E2754 -> 0x805E2884
static void compute_color() {
    // Local variables
    unsigned short (* * histogram)[32]; // r6
    unsigned short * histp; // r26
    int c0; // r4
    int c1; // r7
    int c2; // r25
    int c0max; // r0
    int c1min; // r8
    int c1max; // r9
    int c2min; // r10
    int c2max; // r11
    long count; // r0
    long total; // r12
    long c0total; // r31
    long c1total; // r30
    long c2total; // r29
}
// Range: 0x805E2884 -> 0x805E2984
static void select_colors(struct jpeg_decompress_struct * cinfo /* r28 */, int desired_colors /* r29 */) {
    // Local variables
    box * boxlist; // r30
    int numboxes; // r0
    int i; // r29
}
// Range: 0x805E2984 -> 0x805E2BD4
static int find_nearby_colors() {
    // Local variables
    int numcolors; // r0
    int maxc0; // r9
    int maxc1; // r10
    int maxc2; // r11
    int centerc0; // r12
    int centerc1; // r31
    int centerc2; // r30
    int i; // r29
    int x; // r23
    int ncolors; // r3
    long minmaxdist; // r28
    long min_dist; // r27
    long max_dist; // r26
    long tdist; // r24
    long mindist[256]; // r1+0x8
}
// Range: 0x805E2BD4 -> 0x805E2D28
static void find_best_colors() {
    // Local variables
    int ic0; // r29
    int ic1; // r30
    int ic2; // r28
    int i; // r10
    int icolor; // r0
    long * bptr; // r27
    unsigned char * cptr; // r26
    long dist0; // r11
    long dist1; // r25
    long dist2; // r24
    long xx0; // r23
    long xx1; // r22
    long xx2; // r21
    long inc0; // r11
    long inc1; // r12
    long inc2; // r20
    long bestdist[128]; // r1+0x8
}
// Range: 0x805E2D28 -> 0x805E2E38
static void fill_inverse_cmap(struct jpeg_decompress_struct * cinfo /* r24 */, int c0 /* r29 */, int c1 /* r30 */, int c2 /* r31 */) {
    // Local variables
    unsigned short (* * histogram)[32]; // r28
    int minc0; // r27
    int minc1; // r26
    int minc2; // r25
    int ic0; // r5
    int ic1; // r6
    int ic2; // r4
    unsigned char * cptr; // r7
    unsigned short * cachep; // r8
    unsigned char colorlist[256]; // r1+0x88
    int numcolors; // r0
    unsigned char bestcolor[128]; // r1+0x8
}
// Range: 0x805E2E38 -> 0x805E2F08
static void pass2_no_dither(struct jpeg_decompress_struct * cinfo /* r22 */, unsigned char * * input_buf /* r23 */, unsigned char * * output_buf /* r24 */, int num_rows /* r25 */) {
    // Local variables
    unsigned short (* * histogram)[32]; // r31
    unsigned char * inptr; // r30
    unsigned char * outptr; // r29
    unsigned short * cachep; // r0
    int c0; // r4
    int c1; // r5
    int c2; // r6
    int row; // r28
    unsigned int col; // r27
    unsigned int width; // r26
}
// Range: 0x805E2F08 -> 0x805E31F4
static void pass2_fs_dither(struct jpeg_decompress_struct * cinfo /* r1+0x8 */, unsigned char * * input_buf /* r1+0xC */, unsigned char * * output_buf /* r1+0x10 */, int num_rows /* r1+0x14 */) {
    // Local variables
    my_cquantizer * cquantize; // r1+0x38
    unsigned short (* * histogram)[32]; // r1+0x34
    int cur0; // r28
    int cur1; // r27
    int cur2; // r26
    int belowerr0; // r1+0x30
    int belowerr1; // r14
    int belowerr2; // r25
    int bpreverr0; // r24
    int bpreverr1; // r23
    int bpreverr2; // r22
    short * errorptr; // r21
    unsigned char * inptr; // r20
    unsigned char * outptr; // r19
    unsigned short * cachep; // r0
    int dir; // r1+0x2C
    int dir3; // r18
    int row; // r1+0x28
    unsigned int col; // r17
    unsigned int width; // r1+0x24
    unsigned char * range_limit; // r16
    int * error_limit; // r15
    unsigned char * colormap0; // r1+0x20
    unsigned char * colormap1; // r1+0x1C
    unsigned char * colormap2; // r1+0x18

    {
        // Range: 0x805E30F8 -> 0x805E3128
        // Local variables
        int pixcode; // r4
    }
    {
        // Range: 0x805E3128 -> 0x805E3198
        // Local variables
        int delta; // r4
        int bnexterr; // r3
    }
}
// Range: 0x805E31F4 -> 0x805E32E8
static void init_error_limit() {
    // Local variables
    my_cquantizer * cquantize; // r31
    int * table; // r0
    int in; // r6
    int out; // r7
}
// Range: 0x805E32E8 -> 0x805E3328
static void finish_pass1() {
    // Local variables
    my_cquantizer * cquantize; // r31
}
// Range: 0x805E3328 -> 0x805E332C
static void finish_pass2() {
}
// Range: 0x805E332C -> 0x805E34F8
static void start_pass_2_quant(struct jpeg_decompress_struct * cinfo /* r29 */) {
    // Local variables
    my_cquantizer * cquantize; // r31
    unsigned short (* * histogram)[32]; // r30
    int i; // r28

    {
        // Range: 0x805E3434 -> 0x805E34A0
        // Local variables
        unsigned long arraysize; // r28
    }
}
// Range: 0x805E34F8 -> 0x805E3508
static void new_color_map_2_quant() {
}
// Range: 0x805E3508 -> 0x805E3710
void jI2Quant(struct jpeg_decompress_struct * cinfo /* r30 */) {
    // Local variables
    my_cquantizer * cquantize; // r0
    int i; // r29

    {
        // Range: 0x805E35F8 -> 0x805E3698
        // Local variables
        int desired; // r29
    }
}
