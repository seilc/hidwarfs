/*
    Compile unit: C:\TestBuild\in\Core\x\xTransient.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float scale; // size: 0x4, address: 0x0
class xSpacePartitionTree2D space_tree; // size: 0xD0, address: 0x688900
// total size: 0x18
class xBox {
    // Members
public:
    class xVec3 upper; // offset 0x0, size 0xC
    class xVec3 lower; // offset 0xC, size 0xC
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
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
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
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
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
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xTransient.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D3C70 -> 0x002D3C7C
*/
// Range: 0x2D3C70 -> 0x2D3C7C
void reset() {
    /* anonymous block */ {
        // Range: 0x2D3C70 -> 0x2D3C7C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTransient.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D3C80 -> 0x002D3C88
*/
// Range: 0x2D3C80 -> 0x2D3C88
void scene_exit() {
    /* anonymous block */ {
        // Range: 0x2D3C80 -> 0x2D3C88
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xTransient.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D3C90 -> 0x002D3CD8
*/
// Range: 0x2D3C90 -> 0x2D3CD8
void scene_enter(class xBox & world_box /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D3C90 -> 0x2D3CD8
    }
}


