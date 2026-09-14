/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xTransient.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80075BA0 -> 0x80075C24
*/
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
class xSpacePartitionTree2D space_tree; // size: 0xD0, address: 0x80337F20
// total size: 0x18
struct xBox {
    // Members
    struct xVec3 upper; // offset 0x0, size 0xC
    struct xVec3 lower; // offset 0xC, size 0xC
};
// Range: 0x80075BA0 -> 0x80075BF8
void scene_enter(const struct xBox & world_box /* r3 */) {
    // References
    // -> class xSpacePartitionTree2D space_tree;
}

// Range: 0x80075BF8 -> 0x80075BFC
void scene_exit() {}

// Range: 0x80075BFC -> 0x80075C24
void reset() {
    // References
    // -> class xSpacePartitionTree2D space_tree;
}


