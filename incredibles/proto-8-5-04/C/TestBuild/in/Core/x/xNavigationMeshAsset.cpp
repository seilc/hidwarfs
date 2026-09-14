/*
    Compile unit: C:\TestBuild\in\Core\x\xNavigationMeshAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
// total size: 0xC
class exit {
    // Members
public:
    signed int exit_triangle_index; // offset 0x0, size 0x4
    signed int dest_triangle_index; // offset 0x4, size 0x4
    signed int neighbor_mesh_index; // offset 0x8, size 0x4
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
// total size: 0x30
class sub_mesh {
    // Members
public:
    unsigned char * portal_lookup; // offset 0x0, size 0x4
    unsigned char * portal; // offset 0x4, size 0x4
    float * edge_shift; // offset 0x8, size 0x4
    class exit * exits; // offset 0xC, size 0x4
    signed int num_exits; // offset 0x10, size 0x4
    class xVec3 * vertices; // offset 0x14, size 0x4
    signed int num_vertices; // offset 0x18, size 0x4
    class triangle * triangles; // offset 0x1C, size 0x4
    signed int num_triangles; // offset 0x20, size 0x4
    unsigned int * objects; // offset 0x24, size 0x4
    signed int num_objects; // offset 0x28, size 0x4
    unsigned char * level_two_route_exits; // offset 0x2C, size 0x4
};
// total size: 0x4
class triangle {
    // Members
public:
    unsigned char a; // offset 0x0, size 0x1
    unsigned char b; // offset 0x1, size 0x1
    unsigned char c; // offset 0x2, size 0x1
    unsigned char flags; // offset 0x3, size 0x1
};
// total size: 0x10
class navigation_mesh : public xBaseAsset {
    // Members
public:
    signed int num_sub_meshes; // offset 0x8, size 0x4
    class sub_mesh * sub_meshes; // offset 0xC, size 0x4
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xNavigationMeshAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00225500 -> 0x002255C4
*/
// Range: 0x225500 -> 0x2255C4
// this: r21
void navigation_mesh::get_triangle(class xVec3 & position /* r20 */, signed int & sub_mesh_index /* r19 */, signed int & tri_index /* r18 */) {
    /* anonymous block */ {
        // Range: 0x225500 -> 0x2255C4
        signed int m; // r17
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xNavigationMeshAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002255D0 -> 0x00225600
*/
// Range: 0x2255D0 -> 0x225600
// this: r2
signed int sub_mesh::lookup_next(signed int source /* r2 */, signed int destination /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2255D0 -> 0x225600
        unsigned int bitIndex; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xNavigationMeshAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00225600 -> 0x00225810
*/
// Range: 0x225600 -> 0x225810
// this: r2
float sub_mesh::get_height(signed int triangle /* r2 */, class xVec2 & A /* r2 */) {
    /* anonymous block */ {
        // Range: 0x225600 -> 0x225810
        class xVec3 * a; // r2
        class xVec3 * b; // r2
        class xVec3 N; // r29+0x60
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xNavigationMeshAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00225810 -> 0x002263B4
*/
// Range: 0x225810 -> 0x2263B4
// this: r2
signed int sub_mesh::get_triangle(class xVec3 & point /* r2 */, signed int current_triangle /* r2 */) {
    /* anonymous block */ {
        // Range: 0x225810 -> 0x2263B4
        class xVec2 point_2d; // r29+0x1F8
        signed int i; // r17
        class xVec2 point_2d; // r29+0x1F0
        signed int i; // r2
        class xVec2 point_2d; // r29+0x1E8
    }
}


