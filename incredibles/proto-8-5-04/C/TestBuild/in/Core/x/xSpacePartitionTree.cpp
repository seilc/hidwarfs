/*
    Compile unit: C:\TestBuild\in\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned int gActiveHeap; // size: 0x4, address: 0x608A5C
// total size: 0xC
class cell {
    // Members
public:
    union { // inferred
        class cell * next_free_cell; // offset 0x0, size 0x4
        struct { // inferred
            unsigned short parent; // offset 0x0, size 0x2
            unsigned short children; // offset 0x2, size 0x2
        };
    };
    unsigned short entries; // offset 0x4, size 0x2
    unsigned char cid; // offset 0x6, size 0x1
    unsigned char level; // offset 0x7, size 0x1
    unsigned short xcode; // offset 0x8, size 0x2
    unsigned short ycode; // offset 0xA, size 0x2
};
// total size: 0xD0
class xSpacePartitionTree2D {
    // Members
public:
    class xVec2 origin; // offset 0x0, size 0x8
    class xVec2 size; // offset 0x8, size 0x8
    float cell_size[9]; // offset 0x10, size 0x24
    float cell_isize[9]; // offset 0x34, size 0x24
    float cell_frac[9]; // offset 0x58, size 0x24
    signed int max_depth; // offset 0x7C, size 0x4
    float ilogdepth; // offset 0x80, size 0x4
    signed int grid_size_x; // offset 0x84, size 0x4
    signed int grid_shift_x; // offset 0x88, size 0x4
    signed int grid_mask_x; // offset 0x8C, size 0x4
    signed int grid_size_y; // offset 0x90, size 0x4
    signed int grid_shift_y; // offset 0x94, size 0x4
    signed int grid_mask_y; // offset 0x98, size 0x4
    unsigned short current_searchid; // offset 0x9C, size 0x2
    class entry_data * free_entries; // offset 0xA0, size 0x4
    class entry_node * free_nodes; // offset 0xA4, size 0x4
    class cell * free_cells; // offset 0xA8, size 0x4
    signed int free_cells_size; // offset 0xAC, size 0x4
    signed int safety_free_cells_size; // offset 0xB0, size 0x4
    class cell * grid; // offset 0xB4, size 0x4
    class entry_data * entry_buffer; // offset 0xB8, size 0x4
    signed int entry_buffer_size; // offset 0xBC, size 0x4
    class entry_node * node_buffer; // offset 0xC0, size 0x4
    signed int node_buffer_size; // offset 0xC4, size 0x4
    class cell * cell_buffer; // offset 0xC8, size 0x4
    signed int cell_buffer_size; // offset 0xCC, size 0x4
};
// total size: 0x14
class entry_data {
    // Members
public:
    union { // inferred
        class entry_data * next_free_entry; // offset 0x0, size 0x4
        void * value; // offset 0x0, size 0x4
    };
    signed int type; // offset 0x4, size 0x4
    unsigned short searchid; // offset 0x8, size 0x2
    unsigned short owner_size; // offset 0xA, size 0x2
    unsigned short owner[4]; // offset 0xC, size 0x8
};
// total size: 0x4
class entry_node {
    // Members
public:
    union { // inferred
        class entry_node * next_free_node; // offset 0x0, size 0x4
        struct { // inferred
            unsigned short next; // offset 0x0, size 0x2
            unsigned short entry; // offset 0x2, size 0x2
        };
    };
};
// total size: 0x8
class cb_fp_wrapper {
    // Members
public:
    unsigned char (* cb)(class entry_data *, void *); // offset 0x0, size 0x4
    void * context; // offset 0x4, size 0x4
};
// total size: 0x8
class cb_accum_wrapper {
    // Members
public:
    class entry_data * * results; // offset 0x0, size 0x4
    class entry_data * * end_results; // offset 0x4, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    float cx0; // offset 0x0, size 0x4
    float cy0; // offset 0x4, size 0x4
    float cx1; // offset 0x8, size 0x4
    float cy1; // offset 0xC, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2760 -> 0x002D2800
*/
// Range: 0x2D2760 -> 0x2D2800
// this: r2
void xSpacePartitionTree2D::remove_empty(class cell * c /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D2760 -> 0x2D2800
        class cell * cell_list; // r2
        unsigned short parent; // r11
        class cell * pc; // r2
        class cell * bro; // r10
        class cell * end_bro; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2800 -> 0x002D2924
*/
// Range: 0x2D2800 -> 0x2D2924
// this: r21
void xSpacePartitionTree2D::erase_internal(class entry_data * e /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D2800 -> 0x2D2924
        class cell * cell_list; // r2
        class entry_node * node_list; // r2
        class entry_data * entry_list; // r2
        unsigned short * owner; // r20
        unsigned short * end_owner; // r2
        class cell * c; // r2
        class entry_node * prev; // r4
        class entry_node * n; // r3
        unsigned short key; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2930 -> 0x002D2D00
*/
// Range: 0x2D2930 -> 0x2D2D00
// this: r21
void xSpacePartitionTree2D::insert_internal(class entry_data * e /* r22 */, class cell * c /* r20 */, signed int end_depth /* r29+0x10C */, float x0 /* r31 */, float y0 /* r30 */, float x1 /* r29 */, float y1 /* r28 */) {
    /* anonymous block */ {
        // Range: 0x2D2930 -> 0x2D2D00
        signed int index; // r19
        float dxy; // r2
        float cx0; // r27
        float cy0; // r26
        float cx1; // r25
        float cy1; // r24
        signed int depth; // r18
        // total size: 0x10
        class /* @class */ {
            // Members
        public:
            float cx0; // offset 0x0, size 0x4
            float cy0; // offset 0x4, size 0x4
            float cx1; // offset 0x8, size 0x4
            float cy1; // offset 0xC, size 0x4
        } bound_stack[8]; // r29+0x110
        class cell * cell_list; // r2
        class entry_node * node_list; // r2
        class entry_data * entry_list; // r2
        float ccx0; // r23
        float ccy0; // r22
        float ccx1; // r21
        float ccy1; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2D00 -> 0x002D2FD4
*/
// Range: 0x2D2D00 -> 0x2D2FD4
// this: r18
void xSpacePartitionTree2D::insert_internal(class entry_data * e /* r17 */, float x0 /* r23 */, float y0 /* r22 */, float x1 /* r21 */, float y1 /* r20 */, float width /* r29+0xB0 */) {
    /* anonymous block */ {
        // Range: 0x2D2D00 -> 0x2D2FD4
        float scale; // r29+0xB0
        signed int gx1; // r2
        signed int gy1; // r2
        signed int end_depth; // r23
        signed int gy; // r16
        signed int gx; // r22
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D2FE0 -> 0x002D3004
*/
// Range: 0x2D2FE0 -> 0x2D3004
// this: r2
void xSpacePartitionTree2D::intersect_rect(float x0 /* r29+0x20 */, float y0 /* r29+0x20 */, float x1 /* r29+0x20 */, float y1 /* r29+0x20 */, unsigned char (* cb)(class entry_data *, void *) /* r2 */, void * context /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D2FE0 -> 0x2D3004
        class cb_fp_wrapper fp_wrapper; // r29+0x18
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D3010 -> 0x002D3060
*/
// Range: 0x2D3010 -> 0x2D3060
// this: r2
void xSpacePartitionTree2D::reset_searchid() {
    /* anonymous block */ {
        // Range: 0x2D3010 -> 0x2D3060
        class entry_data * e; // r5
        class entry_data * end; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D3060 -> 0x002D30FC
*/
// Range: 0x2D3060 -> 0x2D30FC
// this: r2
void xSpacePartitionTree2D::create_cell(class cell & c /* r2 */, unsigned short parent /* r2 */, signed int cid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D3060 -> 0x2D30FC
        class cell * pc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D3100 -> 0x002D32E0
*/
// Range: 0x2D3100 -> 0x2D32E0
// this: r17
void xSpacePartitionTree2D::clear() {
    /* anonymous block */ {
        // Range: 0x2D3100 -> 0x2D32E0
        class cell * gc; // r16
        class cell * end_gc; // r2
        class entry_data * fe; // r5
        class entry_data * end_fe; // r2
        class entry_node * fn; // r5
        class entry_node * end_fn; // r2
        signed int grid_size; // r2
        class cell * fc; // r7
        class cell * end_fc; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D32E0 -> 0x002D3688
*/
// Range: 0x2D32E0 -> 0x2D3688
// this: r17
void xSpacePartitionTree2D::create(float minx /* r29+0x50 */, float miny /* r29+0x50 */, float maxx /* r29+0x50 */, float maxy /* r29+0x50 */, float min_width /* r20 */, float max_width /* r29+0x50 */, signed int max_entries /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2D32E0 -> 0x2D3688
        class xVec2 gsize; // r29+0x48
        float * cs; // r7
        float * end_cs; // r2
        float * ics; // r6
        float * cf; // r5
    }
}


