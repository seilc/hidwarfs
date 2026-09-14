/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80037494 -> 0x80037538
*/
// Range: 0x80037494 -> 0x80037538
char * * binary_find(const char * * first /* r29 */, const char * * last /* r30 */, const char * const & value /* r26 */, int (* cmp)(char *, char *) /* r1+0x8 */) {
    // Local variables
    const char * * const notfound; // r27
    const char * * const mid; // r31
    int c; // r28
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8007E9B4 -> 0x8007EA54
*/
// Range: 0x8007E9B4 -> 0x8007EA54
struct raster_pair * binary_find(struct raster_pair * first /* r29 */, struct raster_pair * last /* r30 */, struct RwRaster * const & value /* r26 */, struct compare_raster & cmp /* r1+0x8 */) {
    // Local variables
    struct raster_pair * const notfound; // r27
    struct raster_pair * const mid; // r31
    int c; // r28
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800A5FB8 -> 0x800A63C0
*/
// Range: 0x800A5FB8 -> 0x800A63C0
void quicksort(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r30 */, class CmpAlphaBucket & cmp /* r1+0x10 */) {
    // Local variables
    unsigned long thresh; // r1+0x8C
    unsigned char * stack[40]; // r1+0x90
    unsigned char * * sp; // r29
    unsigned char * pivot; // r31
    unsigned char * tail; // r25
    unsigned char * v; // r26
    unsigned char * next; // r1+0x88
    unsigned char * _b0; // r24
    unsigned char * _b1; // r1+0x84
    unsigned char * _endb0; // r1+0x80
    unsigned int _temp; // r1+0x7C
    unsigned long half; // r23
    unsigned char * _b0; // r22
    unsigned char * _b1; // r1+0x78
    unsigned char * _endb0; // r1+0x74
    unsigned int _temp; // r1+0x70
    unsigned char * left; // r28
    unsigned char * right; // r27
    unsigned char * _b0; // r21
    unsigned char * _b1; // r1+0x6C
    unsigned char * _endb0; // r1+0x68
    unsigned int _temp; // r1+0x64
    unsigned char * _b0; // r20
    unsigned char * _b1; // r1+0x60
    unsigned char * _endb0; // r1+0x5C
    unsigned int _temp; // r1+0x58
    unsigned char * _b0; // r19
    unsigned char * _b1; // r1+0x54
    unsigned char * _endb0; // r1+0x50
    unsigned int _temp; // r1+0x4C
    unsigned char * _b0; // r18
    unsigned char * _b1; // r1+0x48
    unsigned char * _endb0; // r1+0x44
    unsigned int _temp; // r1+0x40
    unsigned char * _b0; // r17
    unsigned char * _b1; // r1+0x3C
    unsigned char * _endb0; // r1+0x38
    unsigned int _temp; // r1+0x34
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80103918 -> 0x80104AA4
*/
// Range: 0x80103918 -> 0x80103A84
void isort(void * base /* r20 */, unsigned long num /* r21 */, unsigned long width /* r30 */, struct sort_float_functor & cmp /* r1+0x8 */) {
    // Local variables
    unsigned char * v; // r31
    unsigned char * next; // r28
    unsigned char * end; // r26
    unsigned char * _b0; // r29
    unsigned char * _b1; // r27
    unsigned char * _endb0; // r25
    unsigned int _temp; // r24

    // References
    // -> static char __FUNCTION__[6];
}

// Range: 0x80103A84 -> 0x80103E8C
void quicksort(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r30 */, struct sort_istr_functor & cmp /* r1+0x10 */) {
    // Local variables
    unsigned long thresh; // r1+0x8C
    unsigned char * stack[40]; // r1+0x90
    unsigned char * * sp; // r29
    unsigned char * pivot; // r31
    unsigned char * tail; // r25
    unsigned char * v; // r26
    unsigned char * next; // r1+0x88
    unsigned char * _b0; // r24
    unsigned char * _b1; // r1+0x84
    unsigned char * _endb0; // r1+0x80
    unsigned int _temp; // r1+0x7C
    unsigned long half; // r23
    unsigned char * _b0; // r22
    unsigned char * _b1; // r1+0x78
    unsigned char * _endb0; // r1+0x74
    unsigned int _temp; // r1+0x70
    unsigned char * left; // r28
    unsigned char * right; // r27
    unsigned char * _b0; // r21
    unsigned char * _b1; // r1+0x6C
    unsigned char * _endb0; // r1+0x68
    unsigned int _temp; // r1+0x64
    unsigned char * _b0; // r20
    unsigned char * _b1; // r1+0x60
    unsigned char * _endb0; // r1+0x5C
    unsigned int _temp; // r1+0x58
    unsigned char * _b0; // r19
    unsigned char * _b1; // r1+0x54
    unsigned char * _endb0; // r1+0x50
    unsigned int _temp; // r1+0x4C
    unsigned char * _b0; // r18
    unsigned char * _b1; // r1+0x48
    unsigned char * _endb0; // r1+0x44
    unsigned int _temp; // r1+0x40
    unsigned char * _b0; // r17
    unsigned char * _b1; // r1+0x3C
    unsigned char * _endb0; // r1+0x38
    unsigned int _temp; // r1+0x34
}

// Range: 0x80103E8C -> 0x80104294
void quicksort(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r30 */, struct sort_float_functor & cmp /* r1+0x10 */) {
    // Local variables
    unsigned long thresh; // r1+0x8C
    unsigned char * stack[40]; // r1+0x90
    unsigned char * * sp; // r29
    unsigned char * pivot; // r31
    unsigned char * tail; // r25
    unsigned char * v; // r26
    unsigned char * next; // r1+0x88
    unsigned char * _b0; // r24
    unsigned char * _b1; // r1+0x84
    unsigned char * _endb0; // r1+0x80
    unsigned int _temp; // r1+0x7C
    unsigned long half; // r23
    unsigned char * _b0; // r22
    unsigned char * _b1; // r1+0x78
    unsigned char * _endb0; // r1+0x74
    unsigned int _temp; // r1+0x70
    unsigned char * left; // r28
    unsigned char * right; // r27
    unsigned char * _b0; // r21
    unsigned char * _b1; // r1+0x6C
    unsigned char * _endb0; // r1+0x68
    unsigned int _temp; // r1+0x64
    unsigned char * _b0; // r20
    unsigned char * _b1; // r1+0x60
    unsigned char * _endb0; // r1+0x5C
    unsigned int _temp; // r1+0x58
    unsigned char * _b0; // r19
    unsigned char * _b1; // r1+0x54
    unsigned char * _endb0; // r1+0x50
    unsigned int _temp; // r1+0x4C
    unsigned char * _b0; // r18
    unsigned char * _b1; // r1+0x48
    unsigned char * _endb0; // r1+0x44
    unsigned int _temp; // r1+0x40
    unsigned char * _b0; // r17
    unsigned char * _b1; // r1+0x3C
    unsigned char * _endb0; // r1+0x38
    unsigned int _temp; // r1+0x34
}

// Range: 0x80104294 -> 0x8010469C
void quicksort(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r30 */, struct sort_uint_functor & cmp /* r1+0x10 */) {
    // Local variables
    unsigned long thresh; // r1+0x8C
    unsigned char * stack[40]; // r1+0x90
    unsigned char * * sp; // r29
    unsigned char * pivot; // r31
    unsigned char * tail; // r25
    unsigned char * v; // r26
    unsigned char * next; // r1+0x88
    unsigned char * _b0; // r24
    unsigned char * _b1; // r1+0x84
    unsigned char * _endb0; // r1+0x80
    unsigned int _temp; // r1+0x7C
    unsigned long half; // r23
    unsigned char * _b0; // r22
    unsigned char * _b1; // r1+0x78
    unsigned char * _endb0; // r1+0x74
    unsigned int _temp; // r1+0x70
    unsigned char * left; // r28
    unsigned char * right; // r27
    unsigned char * _b0; // r21
    unsigned char * _b1; // r1+0x6C
    unsigned char * _endb0; // r1+0x68
    unsigned int _temp; // r1+0x64
    unsigned char * _b0; // r20
    unsigned char * _b1; // r1+0x60
    unsigned char * _endb0; // r1+0x5C
    unsigned int _temp; // r1+0x58
    unsigned char * _b0; // r19
    unsigned char * _b1; // r1+0x54
    unsigned char * _endb0; // r1+0x50
    unsigned int _temp; // r1+0x4C
    unsigned char * _b0; // r18
    unsigned char * _b1; // r1+0x48
    unsigned char * _endb0; // r1+0x44
    unsigned int _temp; // r1+0x40
    unsigned char * _b0; // r17
    unsigned char * _b1; // r1+0x3C
    unsigned char * _endb0; // r1+0x38
    unsigned int _temp; // r1+0x34
}

// Range: 0x8010469C -> 0x80104AA4
void quicksort(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r30 */, struct sort_int_functor & cmp /* r1+0x10 */) {
    // Local variables
    unsigned long thresh; // r1+0x8C
    unsigned char * stack[40]; // r1+0x90
    unsigned char * * sp; // r29
    unsigned char * pivot; // r31
    unsigned char * tail; // r25
    unsigned char * v; // r26
    unsigned char * next; // r1+0x88
    unsigned char * _b0; // r24
    unsigned char * _b1; // r1+0x84
    unsigned char * _endb0; // r1+0x80
    unsigned int _temp; // r1+0x7C
    unsigned long half; // r23
    unsigned char * _b0; // r22
    unsigned char * _b1; // r1+0x78
    unsigned char * _endb0; // r1+0x74
    unsigned int _temp; // r1+0x70
    unsigned char * left; // r28
    unsigned char * right; // r27
    unsigned char * _b0; // r21
    unsigned char * _b1; // r1+0x6C
    unsigned char * _endb0; // r1+0x68
    unsigned int _temp; // r1+0x64
    unsigned char * _b0; // r20
    unsigned char * _b1; // r1+0x60
    unsigned char * _endb0; // r1+0x5C
    unsigned int _temp; // r1+0x58
    unsigned char * _b0; // r19
    unsigned char * _b1; // r1+0x54
    unsigned char * _endb0; // r1+0x50
    unsigned int _temp; // r1+0x4C
    unsigned char * _b0; // r18
    unsigned char * _b1; // r1+0x48
    unsigned char * _endb0; // r1+0x44
    unsigned int _temp; // r1+0x40
    unsigned char * _b0; // r17
    unsigned char * _b1; // r1+0x3C
    unsigned char * _endb0; // r1+0x38
    unsigned int _temp; // r1+0x34
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013F820 -> 0x8013F8F8
*/
// Range: 0x8013F820 -> 0x8013F88C
float xClampAnglePI_PI(float angle /* f1 */) {}

// Range: 0x8013F88C -> 0x8013F8F8
float xClampAngle0_2PI(float angle /* f1 */) {}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801719F8 -> 0x80171E78
*/
// Range: 0x801719F8 -> 0x80171C38
static char * xUtil_select(char * * list /* r27 */, int cnt /* r29 */, const float * wts /* r28 */) {
    // Local variables
    int idx; // r31
    int i; // r30
    float lo; // f29
    float hi; // f31
    float pt; // f30

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[13];
}

// Range: 0x80171C38 -> 0x80171E78
static int xUtil_choose(const int * list /* r27 */, int cnt /* r29 */, const float * wts /* r28 */) {
    // Local variables
    int idx; // r31
    float pt; // f30
    float hi; // f31
    int i; // r30
    float lo; // f29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[13];
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80173074 -> 0x801732B4
*/
// Range: 0x80173074 -> 0x801732B4
static unsigned int xUtil_choose(const unsigned int * list /* r27 */, int cnt /* r29 */, const float * wts /* r28 */) {
    // Local variables
    int idx; // r31
    float pt; // f30
    float hi; // f31
    int i; // r30
    float lo; // f29

    // References
    // -> static int been_here;
    // -> static char __FUNCTION__[13];
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8019EA60 -> 0x8019EA60
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801B34B4 -> 0x801B3604
*/
// Range: 0x801B34B4 -> 0x801B3554
struct raster_pair * binary_find(struct raster_pair * first /* r29 */, struct raster_pair * last /* r30 */, struct RwRaster * const & value /* r26 */, struct compare_raster & cmp /* r1+0x8 */) {
    // Local variables
    struct raster_pair * const notfound; // r27
    struct raster_pair * const mid; // r31
    int c; // r28
}

// Range: 0x801B3554 -> 0x801B3604
struct asset_type_tweak_map * binary_find(struct asset_type_tweak_map * first /* r29 */, struct asset_type_tweak_map * last /* r30 */, const struct asset_type_tweak_map & value /* r1+0x8 */, struct compare_asset_type_tweak_map & cmp /* r1+0xC */) {
    // Local variables
    struct asset_type_tweak_map * const notfound; // r27
    struct asset_type_tweak_map * const mid; // r31
    int c; // r28
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801CD138 -> 0x801CD540
*/
// Range: 0x801CD138 -> 0x801CD540
void quicksort(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r30 */, class ElementCompare & cmp /* r1+0x10 */) {
    // Local variables
    unsigned long thresh; // r1+0x8C
    unsigned char * stack[40]; // r1+0x90
    unsigned char * * sp; // r29
    unsigned char * pivot; // r31
    unsigned char * tail; // r25
    unsigned char * v; // r26
    unsigned char * next; // r1+0x88
    unsigned char * _b0; // r24
    unsigned char * _b1; // r1+0x84
    unsigned char * _endb0; // r1+0x80
    unsigned int _temp; // r1+0x7C
    unsigned long half; // r23
    unsigned char * _b0; // r22
    unsigned char * _b1; // r1+0x78
    unsigned char * _endb0; // r1+0x74
    unsigned int _temp; // r1+0x70
    unsigned char * left; // r28
    unsigned char * right; // r27
    unsigned char * _b0; // r21
    unsigned char * _b1; // r1+0x6C
    unsigned char * _endb0; // r1+0x68
    unsigned int _temp; // r1+0x64
    unsigned char * _b0; // r20
    unsigned char * _b1; // r1+0x60
    unsigned char * _endb0; // r1+0x5C
    unsigned int _temp; // r1+0x58
    unsigned char * _b0; // r19
    unsigned char * _b1; // r1+0x54
    unsigned char * _endb0; // r1+0x50
    unsigned int _temp; // r1+0x4C
    unsigned char * _b0; // r18
    unsigned char * _b1; // r1+0x48
    unsigned char * _endb0; // r1+0x44
    unsigned int _temp; // r1+0x40
    unsigned char * _b0; // r17
    unsigned char * _b1; // r1+0x3C
    unsigned char * _endb0; // r1+0x38
    unsigned int _temp; // r1+0x34
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801DA878 -> 0x801DADC4
*/
// Range: 0x801DA878 -> 0x801DAC80
void quicksort(void * base /* r1+0x8 */, unsigned long num /* r1+0xC */, unsigned long width /* r30 */, struct compare_buckets & cmp /* r1+0x10 */) {
    // Local variables
    unsigned long thresh; // r1+0x8C
    unsigned char * stack[40]; // r1+0x90
    unsigned char * * sp; // r29
    unsigned char * pivot; // r31
    unsigned char * tail; // r25
    unsigned char * v; // r26
    unsigned char * next; // r1+0x88
    unsigned char * _b0; // r24
    unsigned char * _b1; // r1+0x84
    unsigned char * _endb0; // r1+0x80
    unsigned int _temp; // r1+0x7C
    unsigned long half; // r23
    unsigned char * _b0; // r22
    unsigned char * _b1; // r1+0x78
    unsigned char * _endb0; // r1+0x74
    unsigned int _temp; // r1+0x70
    unsigned char * left; // r28
    unsigned char * right; // r27
    unsigned char * _b0; // r21
    unsigned char * _b1; // r1+0x6C
    unsigned char * _endb0; // r1+0x68
    unsigned int _temp; // r1+0x64
    unsigned char * _b0; // r20
    unsigned char * _b1; // r1+0x60
    unsigned char * _endb0; // r1+0x5C
    unsigned int _temp; // r1+0x58
    unsigned char * _b0; // r19
    unsigned char * _b1; // r1+0x54
    unsigned char * _endb0; // r1+0x50
    unsigned int _temp; // r1+0x4C
    unsigned char * _b0; // r18
    unsigned char * _b1; // r1+0x48
    unsigned char * _endb0; // r1+0x44
    unsigned int _temp; // r1+0x40
    unsigned char * _b0; // r17
    unsigned char * _b1; // r1+0x3C
    unsigned char * _endb0; // r1+0x38
    unsigned int _temp; // r1+0x34
}

// Range: 0x801DAC80 -> 0x801DAD14
unsigned char * binary_find(const unsigned char * first /* r29 */, const unsigned char * last /* r30 */, const struct xParticleBatchSystem & value /* r1+0x8 */, struct compare_group_systems_functor & cmp /* r1+0xC */) {
    // Local variables
    const unsigned char * const notfound; // r27
    const unsigned char * const mid; // r31
    int c; // r28
}

// Range: 0x801DAD14 -> 0x801DADC4
struct system_bucket * binary_find(struct system_bucket * first /* r29 */, struct system_bucket * last /* r30 */, const struct system_bucket & value /* r1+0x8 */, struct compare_buckets & cmp /* r1+0xC */) {
    // Local variables
    struct system_bucket * const notfound; // r27
    struct system_bucket * const mid; // r31
    int c; // r28
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E3BC8 -> 0x801E3D08
*/
// Range: 0x801E3BC8 -> 0x801E3C68
struct type_mapping * binary_find(struct type_mapping * first /* r29 */, struct type_mapping * last /* r30 */, const char * const & value /* r26 */, struct compare_type_mapping & cmp /* r1+0x8 */) {
    // Local variables
    struct type_mapping * const notfound; // r27
    struct type_mapping * const mid; // r31
    int c; // r28
}

// Range: 0x801E3C68 -> 0x801E3D08
struct xIniValue * binary_find(const struct xIniValue * first /* r29 */, const struct xIniValue * last /* r30 */, const char * const & value /* r26 */, struct compare_ini_values & cmp /* r1+0x8 */) {
    // Local variables
    const struct xIniValue * const notfound; // r27
    const struct xIniValue * const mid; // r31
    int c; // r28
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801EBDDC -> 0x801EBDDC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80220E40 -> 0x80220EF0
*/
// Range: 0x80220E40 -> 0x80220EF0
struct ThrowableModelMap * binary_find(struct ThrowableModelMap * first /* r29 */, struct ThrowableModelMap * last /* r30 */, const unsigned int & value /* r26 */, class BinaryMapCompare & cmp /* r1+0x8 */) {
    // Local variables
    struct ThrowableModelMap * const notfound; // r27
    struct ThrowableModelMap * const mid; // r31
    int c; // r28
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80247208 -> 0x802472A4
*/
// Range: 0x80247208 -> 0x802472A4
struct zFrozoneIceRecordEntry * binary_find_partial(const struct zFrozoneIceRecordEntry * first /* r30 */, const struct zFrozoneIceRecordEntry * last /* r28 */, const float & value /* r27 */, struct cb_compare_records & cmp /* r1+0x8 */) {
    // Local variables
    const struct zFrozoneIceRecordEntry * const mid; // r31
    int c; // r29
}


/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80273CAC -> 0x80273CAC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8028C8E0 -> 0x8028C8E0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802A6B78 -> 0x802A6B78
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B40F0 -> 0x802B4128
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802D5920 -> 0x802D5920
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802F7C18 -> 0x802F7C18
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8030D5FC -> 0x8030D5FC
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8032EEA0 -> 0x8032EEA0
*/

/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80334048 -> 0x80334048
*/

