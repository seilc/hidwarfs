/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xSpacePartitionTree.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8006E2D8 -> 0x8006F180
*/
// Range: 0x8006E2D8 -> 0x8006E2DC
static void add_tweaks() {}

union entry_data {
    union entry_data * next_free_entry; // offset 0x0, size 0x4
    void * value; // offset 0x0, size 0x4
    int type; // offset 0x4, size 0x4
    unsigned short searchid; // offset 0x8, size 0x2
    unsigned short owner_size; // offset 0xA, size 0x2
    unsigned short owner[4]; // offset 0xC, size 0x8
};
union entry_node {
    union entry_node * next_free_node; // offset 0x0, size 0x4
    unsigned short next; // offset 0x0, size 0x2
    unsigned short entry; // offset 0x2, size 0x2
};
union cell {
    union cell * next_free_cell; // offset 0x0, size 0x4
    unsigned short parent; // offset 0x0, size 0x2
    unsigned short children; // offset 0x2, size 0x2
    unsigned short entries; // offset 0x4, size 0x2
    unsigned char cid; // offset 0x6, size 0x1
    unsigned char level; // offset 0x7, size 0x1
    unsigned short xcode; // offset 0x8, size 0x2
    unsigned short ycode; // offset 0xA, size 0x2
};
// total size: 0xD0
class xSpacePartitionTree2D {
    // Functions
    void create(float minx, float miny, float maxx, float maxy, float min_width, float max_width, int max_entries);

    void clear();

    void create_cell(union cell & c, unsigned short parent, int cid);

    void create_children(union cell & c);

    void reset_searchid();

    void intersect_rect(float x0, float y0, float x1, float y1, unsigned char (* cb)(union entry_data *, void *), void * context);

    int intersect_rect(union entry_data * * results, int max_results, float x0, float y0, float x1, float y1);

    void insert_internal(union entry_data * e, float x0, float y0, float x1, float y1, float width);

    void insert_internal(union entry_data * e, union cell * c, int end_depth, float x0, float y0, float x1, float y1);

    void erase_internal(union entry_data * e);

    void remove_empty(union cell * c);

    // Members
    struct xVec2 origin; // offset 0x0, size 0x8
    struct xVec2 size; // offset 0x8, size 0x8
    float cell_size[9]; // offset 0x10, size 0x24
    float cell_isize[9]; // offset 0x34, size 0x24
    float cell_frac[9]; // offset 0x58, size 0x24
    int max_depth; // offset 0x7C, size 0x4
    float ilogdepth; // offset 0x80, size 0x4
    int grid_size_x; // offset 0x84, size 0x4
    int grid_shift_x; // offset 0x88, size 0x4
    int grid_mask_x; // offset 0x8C, size 0x4
    int grid_size_y; // offset 0x90, size 0x4
    int grid_shift_y; // offset 0x94, size 0x4
    int grid_mask_y; // offset 0x98, size 0x4
    unsigned short current_searchid; // offset 0x9C, size 0x2
    union entry_data * free_entries; // offset 0xA0, size 0x4
    union entry_node * free_nodes; // offset 0xA4, size 0x4
    union cell * free_cells; // offset 0xA8, size 0x4
    int free_cells_size; // offset 0xAC, size 0x4
    int safety_free_cells_size; // offset 0xB0, size 0x4
    union cell * grid; // offset 0xB4, size 0x4
    union entry_data * entry_buffer; // offset 0xB8, size 0x4
    int entry_buffer_size; // offset 0xBC, size 0x4
    union entry_node * node_buffer; // offset 0xC0, size 0x4
    int node_buffer_size; // offset 0xC4, size 0x4
    union cell * cell_buffer; // offset 0xC8, size 0x4
    int cell_buffer_size; // offset 0xCC, size 0x4
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x8
struct xVec2 {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// Range: 0x8006E2DC -> 0x8006E654
// this: r30
void xSpacePartitionTree2D::create(float minx /* f26 */, float miny /* f27 */, float maxx /* f28 */, float maxy /* f29 */, float min_width /* f31 */, float max_width /* f30 */, int max_entries /* r31 */) {
    // Local variables
    struct xVec2 gsize; // r1+0x8
    float * cs; // r3
    float * end_cs; // r0
    float * ics; // r4
    float * cf; // r5
}

// Range: 0x8006E654 -> 0x8006E7B0
// this: r31
void xSpacePartitionTree2D::clear() {
    // Local variables
    union cell * gc; // r29
    union cell * end_gc; // r28
    union entry_data * fe; // r4
    union entry_data * end_fe; // r3
    union entry_node * fn; // r4
    union entry_node * end_fn; // r3
    int grid_size; // r4
    union cell * fc; // r5
    union cell * end_fc; // r6
}

// Range: 0x8006E7B0 -> 0x8006E840
// this: r0
void xSpacePartitionTree2D::create_cell(union cell & c /* r0 */, unsigned short parent /* r0 */, int cid /* r0 */) {
    // Local variables
    union cell * const pc; // r7
}

// Range: 0x8006E840 -> 0x8006E8C8
// this: r25
void xSpacePartitionTree2D::create_children(union cell & c /* r26 */) {
    // Local variables
    union cell * const cell_list; // r30
    union cell * cc; // r29
    union cell * end_cc; // r28
    unsigned short parent; // r27
}

// Range: 0x8006E8C8 -> 0x8006E8FC
// this: r0
void xSpacePartitionTree2D::reset_searchid() {
    // Local variables
    union entry_data * e; // r5
    union entry_data * end; // r3
}

// total size: 0x8
struct cb_fp_wrapper {
    // Functions
    static cb_fp_wrapper(unsigned char (* cb)(union entry_data *, void *), void * context);

    static unsigned char operator()(union entry_data * e) const;

    // Members
    unsigned char (* cb)(union entry_data *, void *); // offset 0x0, size 0x4
    void * context; // offset 0x4, size 0x4
};
// Range: 0x8006E8FC -> 0x8006E908
// this: r0
static cb_fp_wrapper::cb_fp_wrapper(unsigned char (* cb)(union entry_data *, void *) /* r0 */, void * context /* r0 */) {}

// total size: 0x8
struct cb_accum_wrapper {
    // Functions
    static cb_accum_wrapper(union entry_data * * results, int max_results);

    static unsigned char operator()(union entry_data * e);

    // Members
    union entry_data * * results; // offset 0x0, size 0x4
    union entry_data * * end_results; // offset 0x4, size 0x4
};
// Range: 0x8006E908 -> 0x8006E91C
// this: r0
static cb_accum_wrapper::cb_accum_wrapper(union entry_data * * results /* r0 */, int max_results /* r0 */) {}

// Range: 0x8006E91C -> 0x8006E988
// this: r31
void xSpacePartitionTree2D::intersect_rect(float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, unsigned char (* cb)(union entry_data *, void *) /* r0 */, void * context /* r0 */) {
    // Local variables
    struct cb_fp_wrapper fp_wrapper; // r1+0x8
}

// Range: 0x8006E988 -> 0x8006EA08
// this: r30
int xSpacePartitionTree2D::intersect_rect(union entry_data * * results /* r31 */, int max_results /* r0 */, float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */) {
    // Local variables
    struct cb_accum_wrapper accum_wrapper; // r1+0x8
}

// Range: 0x8006EA08 -> 0x8006ECCC
// this: r27
void xSpacePartitionTree2D::insert_internal(union entry_data * e /* r28 */, float x0 /* f28 */, float y0 /* f29 */, float x1 /* f30 */, float y1 /* f31 */, float width /* f1 */) {
    // Local variables
    float scale; // f8
    int end_depth; // r25
    int gy; // r24
    int gx; // r23
}

// total size: 0x10
struct /* @class$1294xSpacePartitionTree_cpp */ {
    // Members
    float cx0; // offset 0x0, size 0x4
    float cy0; // offset 0x4, size 0x4
    float cx1; // offset 0x8, size 0x4
    float cy1; // offset 0xC, size 0x4
};
// Range: 0x8006ECCC -> 0x8006EFA0
// this: r23
void xSpacePartitionTree2D::insert_internal(union entry_data * e /* r24 */, union cell * c /* r25 */, int end_depth /* r26 */, float x0 /* f20 */, float y0 /* f21 */, float x1 /* f22 */, float y1 /* f23 */) {
    // Local variables
    int index; // r30
    float dxy; // f2
    float cx0; // f31
    float cy0; // f30
    float cx1; // f29
    float cy1; // f28
    int depth; // r29
    // total size: 0x10
    struct /* @class$1294xSpacePartitionTree_cpp */ {
        // Members
        float cx0; // offset 0x0, size 0x4
        float cy0; // offset 0x4, size 0x4
        float cx1; // offset 0x8, size 0x4
        float cy1; // offset 0xC, size 0x4
    } bound_stack[8]; // r1+0x8
    union cell * const cell_list; // r28
    union entry_node * const node_list; // r27
    union entry_data * const entry_list; // r3
    union entry_node * n; // r0
    float ccx0; // f27
    float ccy0; // f26
    float ccx1; // f25
    float ccy1; // f24
    union cell * cc; // r4
}

// Range: 0x8006EFA0 -> 0x8006F070
// this: r30
void xSpacePartitionTree2D::erase_internal(union entry_data * e /* r0 */) {
    // Local variables
    union cell * const cell_list; // r29
    union entry_node * const node_list; // r28
    unsigned short * owner; // r31
    unsigned short * end_owner; // r27
    union cell * c; // r26
    union entry_node * prev; // r3
    union entry_node * n; // r4
    unsigned short key; // r25
}

// Range: 0x8006F070 -> 0x8006F114
// this: r27
void xSpacePartitionTree2D::remove_empty(union cell * c /* r0 */) {
    // Local variables
    union cell * const cell_list; // r30
    unsigned short parent; // r29
    union cell * pc; // r28
    union cell * bro; // r3
    union cell * end_bro; // r5
}

// Range: 0x8006F114 -> 0x8006F148
// this: r5
static unsigned char cb_fp_wrapper::operator()(union entry_data * e /* r4 */) const {}

// Range: 0x8006F148 -> 0x8006F180
// this: r0
static unsigned char cb_accum_wrapper::operator()(union entry_data * e /* r0 */) {}

// total size: 0x14
struct rstack_node {
    // Members
    float tx0; // offset 0x0, size 0x4
    float ty0; // offset 0x4, size 0x4
    float tx1; // offset 0x8, size 0x4
    float ty1; // offset 0xC, size 0x4
    int next_index; // offset 0x10, size 0x4
};
// total size: 0x14
struct rstack_node {
    // Members
    float tx0; // offset 0x0, size 0x4
    float ty0; // offset 0x4, size 0x4
    float tx1; // offset 0x8, size 0x4
    float ty1; // offset 0xC, size 0x4
    int next_index; // offset 0x10, size 0x4
};

