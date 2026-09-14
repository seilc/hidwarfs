/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004890D0 -> 0x004890F0
*/
// Range: 0x4890D0 -> 0x4890F0
// this: r2
void xSpacePartitionTree2D::intersect_circle(float x /* r29 */, float y /* r29 */, float r /* r29 */, class cb_flame_circle_check & cb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4890D0 -> 0x4890F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004890F0 -> 0x00489110
*/
// Range: 0x4890F0 -> 0x489110
// this: r2
void xSpacePartitionTree2D::intersect_circle(float x /* r29 */, float y /* r29 */, float r /* r29 */, class cb_flame_sphere_check & cb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4890F0 -> 0x489110
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00489110 -> 0x004893B0
*/
// Range: 0x489110 -> 0x4893B0
// this: r21
void xSpacePartitionTree2D::intersect_rect(float x0 /* r23 */, float y0 /* r22 */, float x1 /* r21 */, float y1 /* r20 */, class cb_flame_sphere_check & cb /* r22 */) {
    /* anonymous block */ {
        // Range: 0x489110 -> 0x4893B0
        float scale; // r29+0xA0
        signed int gy; // r20
        signed int gx; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004893B0 -> 0x00489650
*/
// Range: 0x4893B0 -> 0x489650
// this: r21
void xSpacePartitionTree2D::intersect_rect(float x0 /* r23 */, float y0 /* r22 */, float x1 /* r21 */, float y1 /* r20 */, class cb_flame_circle_check & cb /* r22 */) {
    /* anonymous block */ {
        // Range: 0x4893B0 -> 0x489650
        float scale; // r29+0xA0
        signed int gy; // r20
        signed int gx; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00489650 -> 0x00489A1C
*/
// Range: 0x489650 -> 0x489A1C
// this: r2
unsigned char xSpacePartitionTree2D::intersect_rect(class cell * c /* r2 */, float x0 /* r29+0x40 */, float y0 /* r29+0x40 */, float x1 /* r29+0x40 */, float y1 /* r29+0x40 */, class cb_flame_circle_check & cb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x489650 -> 0x489A1C
        float code_scale; // r29+0x40
        signed int xcode0; // r2
        signed int ycode0; // r2
        signed int xcode1; // r2
        signed int ycode1; // r2
        class cell * cell_list; // r2
        class entry_node * node_list; // r2
        class entry_data * entry_list; // r2
        signed int diff; // r2
        signed int level; // r16
        signed int bit; // r2
        unsigned short _i; // r3
        class entry_node * _n; // r2
        class entry_data * _e; // r2
        unsigned short searchid; // r2
        class cell * topc; // r25
        signed int index; // r9
        unsigned short _i; // r4
        class entry_node * _n; // r2
        class entry_data * _e; // r2
        class cell * cc; // r2
        signed int code_width; // r2
        signed int left; // r2
        signed int right; // r2
        signed int top; // r2
        signed int bottom; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xSpacePartitionTree.h
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00489A20 -> 0x00489E5C
*/
// Range: 0x489A20 -> 0x489E5C
// this: r2
unsigned char xSpacePartitionTree2D::intersect_rect(class cell * c /* r2 */, float x0 /* r29+0x80 */, float y0 /* r29+0x80 */, float x1 /* r29+0x80 */, float y1 /* r29+0x80 */, class cb_flame_sphere_check & cb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x489A20 -> 0x489E5C
        float code_scale; // r29+0x80
        signed int xcode0; // r2
        signed int ycode0; // r2
        signed int xcode1; // r2
        signed int ycode1; // r2
        class cell * cell_list; // r2
        class entry_node * node_list; // r2
        class entry_data * entry_list; // r2
        signed int diff; // r2
        signed int level; // r20
        signed int bit; // r2
        unsigned short _i; // r12
        class entry_node * _n; // r2
        class entry_data * _e; // r2
        unsigned short searchid; // r2
        class cell * topc; // r25
        signed int index; // r19
        unsigned short _i; // r4
        class entry_node * _n; // r2
        class entry_data * _e; // r2
        class cell * cc; // r2
        signed int code_width; // r2
        signed int left; // r2
        signed int right; // r2
        signed int top; // r2
        signed int bottom; // r2
    }
}


