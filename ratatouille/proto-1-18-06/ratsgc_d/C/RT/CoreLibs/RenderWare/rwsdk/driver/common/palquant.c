/*
    Compile unit: C:\RT\CoreLibs\RenderWare\rwsdk\driver\common\palquant.c
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804505AC -> 0x80452DDC
*/
static unsigned int QuantDepth; // size: 0x4, address: 0x80D68A08
static char __dbFunctionName[13]; // size: 0xD, address: 0x804EE3F8
// Range: 0x804505AC -> 0x80450638
static void ToMatchSpace(struct RwRGBAReal * col /* r31 */) {
    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EE405
// Range: 0x80450638 -> 0x804506C4
static void FromMatchSpace(struct RwRGBAReal * ms /* r31 */) {
    // References
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EE414
// Range: 0x804506C4 -> 0x80450768
static struct _rwPalQuantLeafNode * InitLeaf(struct _rwPalQuantLeafNode * Leaf /* r31 */) {
    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EE41D
// Range: 0x80450768 -> 0x804508EC
static void LeafAddPixel(struct _rwPalQuantLeafNode * leaf /* r30 */, struct RwRGBA * color /* r31 */, float weight /* f31 */) {
    // Local variables
    struct RwRGBAReal rColor; // r1+0xC
    struct RwRGBA offset; // r1+0x8
    unsigned char mask; // r29

    // References
    // -> static unsigned int QuantDepth;
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EE42A
// Range: 0x804508EC -> 0x80450A18
static void LeafCalcStats(struct _rwPalQuantLeafNode * leaf /* r31 */, struct RwRGBA * origin /* r30 */) {
    // Local variables
    struct RwRGBAReal rColor; // r1+0x8

    // References
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EE438
// Range: 0x80450A18 -> 0x80450BE0
static void StatsAdd(struct _rwPalQuantLeafNode * combined /* r29 */, struct _rwPalQuantLeafNode * set1 /* r30 */, struct _rwPalQuantLeafNode * set2 /* r31 */) {
    // Local variables
    struct RwRGBAReal c1; // r1+0x18
    struct RwRGBAReal c2; // r1+0x8
    float recipWeight1; // f31
    float recipWeight2; // f30

    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EE441
// Range: 0x80450BE0 -> 0x80450DCC
static void StatsSub(struct _rwPalQuantLeafNode * remainder /* r31 */, struct _rwPalQuantLeafNode * whole /* r29 */, struct _rwPalQuantLeafNode * subset /* r30 */) {
    // Local variables
    struct RwRGBAReal c1; // r1+0x18
    struct RwRGBAReal c2; // r1+0x8
    float recipWeight1; // f31
    float recipWeight2; // f30

    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[20]; // size: 0x14, address: 0x804EE44A
// Range: 0x80450DCC -> 0x80450F5C
static void RepresentativeColor(struct RwRGBA * rgb /* r31 */, struct _rwPalQuantLeafNode * node /* r30 */) {
    // Local variables
    struct RwRGBAReal rColor; // r1+0x18
    int rgba[4]; // r1+0x8

    // References
    // -> static char __dbFunctionName[20];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804EE45E
// Range: 0x80450F5C -> 0x80450FF0
static struct _rwPalQuantBranchNode * InitBranch(struct _rwPalQuantBranchNode * Branch /* r30 */) {
    // Local variables
    int i; // r31

    // References
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[10]; // size: 0xA, address: 0x804EE469
static unsigned long splice[256]; // size: 0x400, address: 0x80D5D930
// Range: 0x80450FF0 -> 0x804510F0
static unsigned long GetOctAdr(struct RwRGBA * c /* r31 */) {
    // Local variables
    int ColShift; // r30

    // References
    // -> static unsigned long splice[256];
    // -> static char __dbFunctionName[10];
    // -> static unsigned int QuantDepth;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EE473
// Range: 0x804510F0 -> 0x80451224
static struct _rwPalQuantOctNode * AllocateToLeaf(struct RwPalQuant * pq /* r28 */, struct _rwPalQuantOctNode * root /* r31 */, unsigned long Octs /* r29 */, int depth /* r27 */) {
    // Local variables
    struct _rwPalQuantOctNode * node; // r30

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[19]; // size: 0x13, address: 0x804EE482
// Range: 0x80451224 -> 0x80451478
void RwPalQuantAddImage(struct RwPalQuant * pq /* r29 */, struct RwImage * img /* r31 */, float weight /* f31 */) {
    // Local variables
    int ColShift; // r1+0x8
    int width; // r28
    int height; // r27
    int stride; // r23
    unsigned char * pixels; // r30
    struct RwRGBA * palette; // r21
    unsigned char * linePixels; // r26
    struct RwRGBA * color; // r22
    struct _rwPalQuantOctNode * leaf; // r20
    unsigned long Octs; // r19
    struct RwRGBA * color; // r25
    struct _rwPalQuantOctNode * leaf; // r18
    unsigned long Octs; // r17

    // References
    // -> static unsigned int QuantDepth;
    // -> static char __dbFunctionName[19];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EE495
// Range: 0x80451478 -> 0x804516DC
static void assignindex(struct _rwPalQuantOctNode * root /* r27 */, int * origin /* r31 */, int depth /* r29 */, struct _rwPalQuantRGBABox * region /* r30 */, int palIndex /* r22 */) {
    // Local variables
    struct _rwPalQuantRGBABox testbox; // r1+0x18
    int i; // r28
    int dR; // r26
    int dG; // r25
    int dB; // r24
    int dA; // r23
    int suborigin[4]; // r1+0x8

    // References
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EE4A1
// Range: 0x804516DC -> 0x804517B4
static void AssignPalIndex(struct _rwPalQuantOctNode * root /* r30 */, struct _rwPalQuantRGBABox * cube /* r31 */, int palIndex /* r1+0x8 */) {
    // Local variables
    int origin[4]; // r1+0xC

    // References
    // -> static unsigned int QuantDepth;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[10]; // size: 0xA, address: 0x804EE4B0
// Range: 0x804517B4 -> 0x80451AC0
static void addvolume(struct _rwPalQuantOctNode * root /* r23 */, int * origin /* r30 */, int depth /* r29 */, struct _rwPalQuantRGBABox * region /* r31 */, struct _rwPalQuantLeafNode * volume /* r22 */) {
    // Local variables
    struct _rwPalQuantRGBABox testbox; // r1+0x18
    int i; // r28
    int dR; // r27
    int dG; // r26
    int dB; // r25
    int dA; // r24
    int suborigin[4]; // r1+0x8

    // References
    // -> static char __dbFunctionName[10];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EE4BA
// Range: 0x80451AC0 -> 0x80451BA4
static struct _rwPalQuantLeafNode * BoxStats(struct _rwPalQuantLeafNode * Vol /* r31 */, struct _rwPalQuantOctNode * root /* r29 */, struct _rwPalQuantRGBABox * cube /* r30 */) {
    // Local variables
    int origin[4]; // r1+0x8

    // References
    // -> static unsigned int QuantDepth;
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[12]; // size: 0xC, address: 0x804EE4C3
// Range: 0x80451BA4 -> 0x80451DC4
static float FindBestCut(struct _rwPalQuantOctNode * root /* r24 */, struct _rwPalQuantRGBABox * cube /* r31 */, int chn /* r27 */, int * cuts /* r25 */, struct _rwPalQuantLeafNode * whole /* r26 */) {
    // Local variables
    struct _rwPalQuantRGBABox leftcube; // r1+0x40
    struct _rwPalQuantLeafNode left; // r1+0x24
    struct _rwPalQuantLeafNode right; // r1+0x8
    float minsum; // f31
    float sumvar; // f30
    int i; // r30
    int min; // r29
    int max; // r28

    // References
    // -> static char __dbFunctionName[12];
}

static char __dbFunctionName[5]; // size: 0x5, address: 0x80D7206C
// Range: 0x80451DC4 -> 0x80451FA0
static int nCut(struct _rwPalQuantOctNode * root /* r26 */, struct _rwPalQuantLeafNode * whole /* r30 */, struct _rwPalQuantRGBABox * set1 /* r31 */, struct _rwPalQuantRGBABox * set2 /* r27 */) {
    // Local variables
    float minvar[4]; // r1+0x18
    int cuts[4]; // r1+0x8
    int i; // r28
    int best; // r29

    // References
    // -> static char __dbFunctionName[5];
}

static char __dbFunctionName[16]; // size: 0x10, address: 0x804EE4CF
// Range: 0x80451FA0 -> 0x804520DC
static struct _rwPalQuantLeafNode * CalcNodeWeights(struct _rwPalQuantOctNode * root /* r27 */, struct RwRGBA * origin /* r30 */, int depth /* r25 */) {
    // Local variables
    struct _rwPalQuantLeafNode * Leaf; // r29
    int i; // r31
    struct RwRGBA suborigin; // r1+0x8
    struct _rwPalQuantLeafNode * SubNode; // r26
    unsigned int shift; // r28

    // References
    // -> static unsigned int QuantDepth;
    // -> static char __dbFunctionName[16];
}

static char __dbFunctionName[11]; // size: 0xB, address: 0x804EE4DF
// Range: 0x804520DC -> 0x80452174
static int CountLeafs(struct _rwPalQuantOctNode * root /* r29 */, int depth /* r28 */) {
    // Local variables
    int i; // r31
    int n; // r30

    // References
    // -> static char __dbFunctionName[11];
}

static char __dbFunctionName[13]; // size: 0xD, address: 0x804EE4EA
// Range: 0x80452174 -> 0x80452230
static int ExtractNodes(struct _rwPalQuantOctNode * root /* r30 */, struct RwRGBA * palette /* r27 */, int nodeIndex /* r31 */, int depth /* r28 */) {
    // Local variables
    int i; // r29

    // References
    // -> static char __dbFunctionName[13];
}

static char __dbFunctionName[9]; // size: 0x9, address: 0x804EE4F7
// Range: 0x80452230 -> 0x804522DC
static unsigned char GetIndex(struct _rwPalQuantOctNode * root /* r31 */, unsigned long Octs /* r28 */, int depth /* r29 */) {
    // Local variables
    unsigned char result; // r30

    // References
    // -> static char __dbFunctionName[9];
}

static char __dbFunctionName[25]; // size: 0x19, address: 0x804EE500
// Range: 0x804522DC -> 0x80452634
int RwPalQuantResolvePalette(struct RwRGBA * palette /* r29 */, int maxcols /* r24 */, struct RwPalQuant * pq /* r31 */) {
    // Local variables
    int numcols; // r26
    int uniquecols; // r25
    int i; // r30
    struct RwRGBA origin; // r1+0x8
    int nextsplit; // r28
    int k; // r27
    float maxvar; // f31

    // References
    // -> static unsigned int QuantDepth;
    // -> static char __dbFunctionName[25];
}

static char __dbFunctionName[21]; // size: 0x15, address: 0x804EE519
// Range: 0x80452634 -> 0x80452B38
void RwPalQuantMatchImage(unsigned char * dstpixels /* r27 */, int dststride /* r18 */, int dstdepth /* r1+0x8 */, int dstPacked /* r1+0xC */, struct RwPalQuant * pq /* r22 */, struct RwImage * img /* r30 */) {
    // Local variables
    unsigned int width; // r25
    unsigned int x; // r24
    unsigned int height; // r26
    unsigned int stride; // r20
    unsigned int maxcol; // r19
    unsigned char * pixels; // r28
    unsigned char * dstLinePixels; // r31
    unsigned char nodeIndex; // r29
    unsigned long Octs; // r21
    struct RwRGBA * palette; // r1+0x30
    unsigned char * srcLinePixels; // r17
    struct RwRGBA * color; // r1+0x2C
    struct RwRGBA * srcLinePixels; // r1+0x28
    struct RwRGBA * color; // r1+0x24
    struct RwRGBA * palette; // r1+0x20
    unsigned char * srcLinePixels; // r1+0x1C
    struct RwRGBA * color; // r1+0x18
    struct RwRGBA * srcLinePixels; // r1+0x14
    struct RwRGBA * color; // r1+0x10

    // References
    // -> static char __dbFunctionName[21];
    // -> static unsigned int QuantDepth;
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EE52E
// Range: 0x80452B38 -> 0x80452C88
int RwPalQuantInit(struct RwPalQuant * pq /* r31 */) {
    // Local variables
    unsigned int i; // r30
    unsigned int j; // r29
    unsigned int maxval; // r26
    unsigned long mask; // r28

    // References
    // -> void * RwEngineInstance;
    // -> static unsigned long splice[256];
    // -> static unsigned int QuantDepth;
    // -> static char __dbFunctionName[15];
}

static char __dbFunctionName[14]; // size: 0xE, address: 0x804EE53D
// Range: 0x80452C88 -> 0x80452D54
static void DeleteOctTree(struct RwPalQuant * pq /* r29 */, struct _rwPalQuantOctNode * root /* r30 */, int depth /* r28 */) {
    // Local variables
    int i; // r31

    // References
    // -> void * RwEngineInstance;
    // -> static char __dbFunctionName[14];
}

static char __dbFunctionName[15]; // size: 0xF, address: 0x804EE54B
// Range: 0x80452D54 -> 0x80452DDC
void RwPalQuantTerm(struct RwPalQuant * pq /* r31 */) {
    // References
    // -> static unsigned int QuantDepth;
    // -> static char __dbFunctionName[15];
}


