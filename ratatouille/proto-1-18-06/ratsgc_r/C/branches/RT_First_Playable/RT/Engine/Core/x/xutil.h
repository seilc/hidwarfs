/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8002EFB0 -> 0x8002F050
*/
// Range: 0x8002EFB0 -> 0x8002F050
char * * binary_find(const char * * first /* r26 */, const char * * last /* r27 */, const char * const & value /* r28 */, int (* cmp)(char *, char *) /* r29 */) {
    // Local variables
    const char * * const notfound; // r31
    const char * * const mid; // r30
    int c; // r0
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006BAE4 -> 0x8006BB80
*/
// Range: 0x8006BAE4 -> 0x8006BB80
struct raster_pair * binary_find(struct raster_pair * first /* r26 */, struct raster_pair * last /* r27 */, struct RwRaster * const & value /* r28 */, struct compare_raster & cmp /* r29 */) {
    // Local variables
    struct raster_pair * const notfound; // r31
    struct raster_pair * const mid; // r30
    int c; // r0
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8008A88C -> 0x8008AB68
*/
// Range: 0x8008A88C -> 0x8008AB68
void quicksort(void * base /* r3 */, unsigned long num /* r0 */, unsigned long width /* r26 */, class CmpAlphaBucket & cmp /* r27 */) {
    // Local variables
    unsigned long thresh; // r31
    unsigned char * stack[40]; // r1+0x8
    unsigned char * * sp; // r30
    unsigned char * pivot; // r29
    unsigned char * tail; // r28
    unsigned char * v; // r24
    unsigned char * next; // r23
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned long half; // r3
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * left; // r23
    unsigned char * right; // r24
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800D322C -> 0x800D3EEC
*/
// Range: 0x800D322C -> 0x800D337C
void isort(void * base /* r29 */, unsigned long num /* r25 */, unsigned long width /* r30 */, struct sort_float_functor & cmp /* r31 */) {
    // Local variables
    unsigned char * v; // r27
    unsigned char * next; // r26
    unsigned char * end; // r25
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5

    // References
    // -> static char __FUNCTION__[6];
}

// Range: 0x800D337C -> 0x800D3658
void quicksort(void * base /* r3 */, unsigned long num /* r0 */, unsigned long width /* r26 */, struct sort_istr_functor & cmp /* r27 */) {
    // Local variables
    unsigned long thresh; // r31
    unsigned char * stack[40]; // r1+0x8
    unsigned char * * sp; // r30
    unsigned char * pivot; // r29
    unsigned char * tail; // r28
    unsigned char * v; // r24
    unsigned char * next; // r23
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned long half; // r3
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * left; // r23
    unsigned char * right; // r24
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
}

// Range: 0x800D3658 -> 0x800D3934
void quicksort(void * base /* r3 */, unsigned long num /* r0 */, unsigned long width /* r26 */, struct sort_float_functor & cmp /* r27 */) {
    // Local variables
    unsigned long thresh; // r31
    unsigned char * stack[40]; // r1+0x8
    unsigned char * * sp; // r30
    unsigned char * pivot; // r29
    unsigned char * tail; // r28
    unsigned char * v; // r24
    unsigned char * next; // r23
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned long half; // r3
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * left; // r23
    unsigned char * right; // r24
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
}

// Range: 0x800D3934 -> 0x800D3C10
void quicksort(void * base /* r3 */, unsigned long num /* r0 */, unsigned long width /* r26 */, struct sort_uint_functor & cmp /* r27 */) {
    // Local variables
    unsigned long thresh; // r31
    unsigned char * stack[40]; // r1+0x8
    unsigned char * * sp; // r30
    unsigned char * pivot; // r29
    unsigned char * tail; // r28
    unsigned char * v; // r24
    unsigned char * next; // r23
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned long half; // r3
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * left; // r23
    unsigned char * right; // r24
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
}

// Range: 0x800D3C10 -> 0x800D3EEC
void quicksort(void * base /* r3 */, unsigned long num /* r0 */, unsigned long width /* r26 */, struct sort_int_functor & cmp /* r27 */) {
    // Local variables
    unsigned long thresh; // r31
    unsigned char * stack[40]; // r1+0x8
    unsigned char * * sp; // r30
    unsigned char * pivot; // r29
    unsigned char * tail; // r28
    unsigned char * v; // r24
    unsigned char * next; // r23
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned long half; // r3
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * left; // r23
    unsigned char * right; // r24
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80102EFC -> 0x80102F60
*/
// Range: 0x80102EFC -> 0x80102F30
float xClampAnglePI_PI(float angle /* f1 */) {}

// Range: 0x80102F30 -> 0x80102F60
float xClampAngle0_2PI(float angle /* f1 */) {}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012DA78 -> 0x8012DDE0
*/
// Range: 0x8012DA78 -> 0x8012DC2C
static char * xUtil_select(char * * list /* r28 */, int cnt /* r29 */, const float * wts /* r30 */) {
    // Local variables
    int idx; // r31
    int i; // r4
    float lo; // f2
    float hi; // f3
    float pt; // f0

    // References
    // -> static char __FUNCTION__[13];
}

// Range: 0x8012DC2C -> 0x8012DDE0
static int xUtil_choose(const int * list /* r28 */, int cnt /* r29 */, const float * wts /* r30 */) {
    // Local variables
    int idx; // r31
    float pt; // f0
    float hi; // f2
    int i; // r4
    float lo; // f3

    // References
    // -> static char __FUNCTION__[13];
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012EF34 -> 0x8012F0E8
*/
// Range: 0x8012EF34 -> 0x8012F0E8
static unsigned int xUtil_choose(const unsigned int * list /* r28 */, int cnt /* r29 */, const float * wts /* r30 */) {
    // Local variables
    int idx; // r31
    float pt; // f0
    float hi; // f2
    int i; // r4
    float lo; // f3

    // References
    // -> static char __FUNCTION__[13];
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80154810 -> 0x80154810
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80165298 -> 0x801653E0
*/
// Range: 0x80165298 -> 0x80165334
struct raster_pair * binary_find(struct raster_pair * first /* r26 */, struct raster_pair * last /* r27 */, struct RwRaster * const & value /* r28 */, struct compare_raster & cmp /* r29 */) {
    // Local variables
    struct raster_pair * const notfound; // r31
    struct raster_pair * const mid; // r30
    int c; // r0
}

// Range: 0x80165334 -> 0x801653E0
struct asset_type_tweak_map * binary_find(struct asset_type_tweak_map * first /* r25 */, struct asset_type_tweak_map * last /* r26 */, const struct asset_type_tweak_map & value /* r27 */, struct compare_asset_type_tweak_map & cmp /* r28 */) {
    // Local variables
    struct asset_type_tweak_map * const notfound; // r30
    struct asset_type_tweak_map * const mid; // r29
    int c; // r0
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017B110 -> 0x8017B3EC
*/
// Range: 0x8017B110 -> 0x8017B3EC
void quicksort(void * base /* r3 */, unsigned long num /* r0 */, unsigned long width /* r26 */, class ElementCompare & cmp /* r27 */) {
    // Local variables
    unsigned long thresh; // r31
    unsigned char * stack[40]; // r1+0x8
    unsigned char * * sp; // r30
    unsigned char * pivot; // r29
    unsigned char * tail; // r28
    unsigned char * v; // r24
    unsigned char * next; // r23
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned long half; // r3
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * left; // r23
    unsigned char * right; // r24
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801868D8 -> 0x80186CF0
*/
// Range: 0x801868D8 -> 0x80186BB4
void quicksort(void * base /* r3 */, unsigned long num /* r0 */, unsigned long width /* r26 */, struct compare_buckets & cmp /* r27 */) {
    // Local variables
    unsigned long thresh; // r31
    unsigned char * stack[40]; // r1+0x8
    unsigned char * * sp; // r30
    unsigned char * pivot; // r29
    unsigned char * tail; // r28
    unsigned char * v; // r24
    unsigned char * next; // r23
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned long half; // r3
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * left; // r23
    unsigned char * right; // r24
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r5
    unsigned int _temp; // r6
    unsigned char * _b0; // r3
    unsigned char * _b1; // r4
    unsigned char * _endb0; // r0
    unsigned int _temp; // r5
}

// Range: 0x80186BB4 -> 0x80186C44
unsigned char * binary_find(const unsigned char * first /* r26 */, const unsigned char * last /* r27 */, const struct xParticleBatchSystem & value /* r28 */, struct compare_group_systems_functor & cmp /* r29 */) {
    // Local variables
    const unsigned char * const notfound; // r31
    const unsigned char * const mid; // r30
    int c; // r0
}

// Range: 0x80186C44 -> 0x80186CF0
struct system_bucket * binary_find(struct system_bucket * first /* r25 */, struct system_bucket * last /* r26 */, const struct system_bucket & value /* r27 */, struct compare_buckets & cmp /* r28 */) {
    // Local variables
    struct system_bucket * const notfound; // r30
    struct system_bucket * const mid; // r29
    int c; // r0
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8018ED1C -> 0x8018EE54
*/
// Range: 0x8018ED1C -> 0x8018EDB8
struct type_mapping * binary_find(struct type_mapping * first /* r26 */, struct type_mapping * last /* r27 */, const char * const & value /* r28 */, struct compare_type_mapping & cmp /* r29 */) {
    // Local variables
    struct type_mapping * const notfound; // r31
    struct type_mapping * const mid; // r30
    int c; // r0
}

// Range: 0x8018EDB8 -> 0x8018EE54
struct xIniValue * binary_find(const struct xIniValue * first /* r26 */, const struct xIniValue * last /* r27 */, const char * const & value /* r28 */, struct compare_ini_values & cmp /* r29 */) {
    // Local variables
    const struct xIniValue * const notfound; // r31
    const struct xIniValue * const mid; // r30
    int c; // r0
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80195F14 -> 0x80195F14
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C3244 -> 0x801C32F0
*/
// Range: 0x801C3244 -> 0x801C32F0
struct ThrowableModelMap * binary_find(struct ThrowableModelMap * first /* r25 */, struct ThrowableModelMap * last /* r26 */, const unsigned int & value /* r27 */, class BinaryMapCompare & cmp /* r28 */) {
    // Local variables
    struct ThrowableModelMap * const notfound; // r30
    struct ThrowableModelMap * const mid; // r29
    int c; // r0
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801E465C -> 0x801E46F4
*/
// Range: 0x801E465C -> 0x801E46F4
struct zFrozoneIceRecordEntry * binary_find_partial(const struct zFrozoneIceRecordEntry * first /* r27 */, const struct zFrozoneIceRecordEntry * last /* r28 */, const float & value /* r29 */, struct cb_compare_records & cmp /* r30 */) {
    // Local variables
    const struct zFrozoneIceRecordEntry * const mid; // r31
    int c; // r0
}


/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8020B984 -> 0x8020B984
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802224B4 -> 0x802224B4
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80239A28 -> 0x80239A28
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802456D0 -> 0x80245708
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80262F9C -> 0x80262F9C
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80280FDC -> 0x80280FDC
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80293D54 -> 0x80293D54
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B12D8 -> 0x802B12D8
*/

/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xutil.h
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x802B5AB0 -> 0x802B5AB0
*/

