/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00453340 -> 0x004533E0
*/
// Range: 0x453340 -> 0x4533E0
// this: r2
void xSpacePartitionTree2D::remove_empty(class cell * c /* r2 */) {
    /* anonymous block */ {
        // Range: 0x453340 -> 0x4533E0
        class cell * cell_list; // r2
        unsigned short parent; // r11
        class cell * pc; // r2
        class cell * bro; // r10
        class cell * end_bro; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004533E0 -> 0x00453504
*/
// Range: 0x4533E0 -> 0x453504
// this: r21
void xSpacePartitionTree2D::erase_internal(class entry_data * e /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4533E0 -> 0x453504
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00453510 -> 0x004538E0
*/
// Range: 0x453510 -> 0x4538E0
// this: r21
void xSpacePartitionTree2D::insert_internal(class entry_data * e /* r22 */, class cell * c /* r20 */, signed int end_depth /* r29+0x10C */, float x0 /* r31 */, float y0 /* r30 */, float x1 /* r29 */, float y1 /* r28 */) {
    /* anonymous block */ {
        // Range: 0x453510 -> 0x4538E0
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004538E0 -> 0x00453BB4
*/
// Range: 0x4538E0 -> 0x453BB4
// this: r18
void xSpacePartitionTree2D::insert_internal(class entry_data * e /* r17 */, float x0 /* r23 */, float y0 /* r22 */, float x1 /* r21 */, float y1 /* r20 */, float width /* r29+0xB0 */) {
    /* anonymous block */ {
        // Range: 0x4538E0 -> 0x453BB4
        float scale; // r29+0xB0
        signed int gx1; // r2
        signed int gy1; // r2
        signed int end_depth; // r23
        signed int gy; // r16
        signed int gx; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00453BC0 -> 0x00453C10
*/
// Range: 0x453BC0 -> 0x453C10
// this: r2
void xSpacePartitionTree2D::reset_searchid() {
    /* anonymous block */ {
        // Range: 0x453BC0 -> 0x453C10
        class entry_data * e; // r5
        class entry_data * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00453C10 -> 0x00453CAC
*/
// Range: 0x453C10 -> 0x453CAC
// this: r2
void xSpacePartitionTree2D::create_cell(class cell & c /* r2 */, unsigned short parent /* r2 */, signed int cid /* r2 */) {
    /* anonymous block */ {
        // Range: 0x453C10 -> 0x453CAC
        class cell * pc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00453CB0 -> 0x00453E90
*/
// Range: 0x453CB0 -> 0x453E90
// this: r17
void xSpacePartitionTree2D::clear() {
    /* anonymous block */ {
        // Range: 0x453CB0 -> 0x453E90
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00453E90 -> 0x00454238
*/
// Range: 0x453E90 -> 0x454238
// this: r17
void xSpacePartitionTree2D::create(float minx /* r29+0x50 */, float miny /* r29+0x50 */, float maxx /* r29+0x50 */, float maxy /* r29+0x50 */, float min_width /* r20 */, float max_width /* r29+0x50 */, signed int max_entries /* r16 */) {
    /* anonymous block */ {
        // Range: 0x453E90 -> 0x454238
        class xVec2 gsize; // r29+0x48
        float * cs; // r7
        float * end_cs; // r2
        float * ics; // r6
        float * cf; // r5
    }
}


