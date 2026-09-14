/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\rtintsec.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\rtintsec.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001D8F10 -> 0x001DA054
*/
// Range: 0x1D8F10 -> 0x1DA054
signed int RtIntersectionBBoxTriangle(class RwBBox * bbox /* r2 */, class RwV3d * v0 /* r2 */, class RwV3d * v1 /* r2 */, class RwV3d * v2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1D8F10 -> 0x1DA054
        signed int v0Test; // r2
        signed int v1Test; // r2
        signed int v2Test; // r2
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        float tmp; // r29+0x20
        class RwV3d norm; // r29+0x10
        float det; // r29+0x20
        float dist; // r29+0x20
        float u; // r29+0x20
        float v; // r29+0x20
        float u; // r29+0x20
        float v; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\rtintsec.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001DA060 -> 0x001DA5DC
*/
// Range: 0x1DA060 -> 0x1DA5DC
signed int RtIntersectionSphereTriangle(class RwSphere * sphere /* r2 */, class RwV3d * v0 /* r2 */, class RwV3d * v1 /* r2 */, class RwV3d * v2 /* r2 */, class RwV3d * normal /* r2 */, float * distance /* r2 */) {
    /* anonymous block */ {
        // Range: 0x1DA060 -> 0x1DA5DC
        float nDotN; // r29+0x10
        float distToPlane; // r29+0x10
        float sphereRadiusSquared; // r10
        float factor; // r29+0x10
        float x0; // r9
        float x1; // r8
        float x2; // r7
        float y0; // r6
        float y1; // r5
        float y2; // r4
        float z0; // r3
        float z1; // r2
        float z2; // r1
        float rad; // r29+0x10
    }
}


