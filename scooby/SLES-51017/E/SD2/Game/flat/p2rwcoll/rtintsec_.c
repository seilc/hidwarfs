/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rtintsec_.c
    Producer: MW MIPS C Compiler
    Language: C++
*/
static char rcsid[62]; // size: 0x3E, address: 0x0
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x10
class RwSphere {
    // Members
public:
    class RwV3d center; // offset 0x0, size 0xC
    float radius; // offset 0xC, size 0x4
};
// total size: 0x18
class RwBBox {
    // Members
public:
    class RwV3d sup; // offset 0x0, size 0xC
    class RwV3d inf; // offset 0xC, size 0xC
};

/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rtintsec_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002762A0 -> 0x00277618
*/
// Range: 0x2762A0 -> 0x277618
signed int RtIntersectionBBoxTriangle(class RwBBox * bbox /* r2 */, class RwV3d * v0 /* r2 */, class RwV3d * v1 /* r2 */, class RwV3d * v2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2762A0 -> 0x277618
        float v; // r29+0x20
        float u; // r5
        float v; // r29+0x20
        float u; // r5
        float dist; // r3
        float det; // r6
        class RwV3d norm; // r29+0x10
        float tmp; // r17
        float tmp; // r19
        float tmp; // r19
        float tmp; // r19
        float tmp; // r19
        float tmp; // r19
        float tmp; // r18
        float tmp; // r22
        float tmp; // r22
        float tmp; // r22
        float tmp; // r22
        float tmp; // r22
        float tmp; // r18
        float tmp; // r22
        float tmp; // r22
        float tmp; // r22
        float tmp; // r22
        float tmp; // r22
        signed int v2Test; // r7
        signed int v1Test; // r6
        signed int v0Test; // r3
    }
}


/*
    Compile unit: E:\SD2\Game\flat\p2rwcoll\rtintsec_.c
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00277620 -> 0x00277C24
*/
// Range: 0x277620 -> 0x277C24
signed int RtIntersectionSphereTriangle(class RwSphere * sphere /* r2 */, class RwV3d * v0 /* r2 */, class RwV3d * v1 /* r2 */, class RwV3d * v2 /* r2 */, class RwV3d * normal /* r2 */, float * distance /* r2 */) {
    /* anonymous block */ {
        // Range: 0x277620 -> 0x277C24
        float _result; // r29+0x30
        float factor; // r10
        float length2; // r29+0x30
        float sphereRadiusSquared; // r29+0x30
        float distToPlane; // r1
        float nDotN; // r12
        class RwV3d vc[3]; // r29
    }
}


