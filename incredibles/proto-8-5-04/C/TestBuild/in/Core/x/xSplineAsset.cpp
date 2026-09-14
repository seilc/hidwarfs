/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class xVec3 m_Null; // size: 0xC, address: 0x5E7C40
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
// total size: 0x1C
class NURBS : public xBaseAsset {
    // Members
public:
    signed int p; // offset 0x8, size 0x4
    signed int m; // offset 0xC, size 0x4
    signed int n; // offset 0x10, size 0x4
    float * knot; // offset 0x14, size 0x4
    class xVec3 * control; // offset 0x18, size 0x4
};
// total size: 0x14
class search_end {
    // Members
public:
    float u; // offset 0x0, size 0x4
    class xVec3 pos; // offset 0x4, size 0xC
    float dist_to_circle; // offset 0x10, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
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

/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A650 -> 0x0029AD24
*/
// Range: 0x29A650 -> 0x29AD24
// this: r19
unsigned char NURBS::advance_u(float start_u /* r23 */, float distance /* r22 */, unsigned char forward /* r18 */, float & new_u /* r17 */) {
    /* anonymous block */ {
        // Range: 0x29A650 -> 0x29AD24
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029AD30 -> 0x0029B8B0
*/
// Range: 0x29AD30 -> 0x29B8B0
// this: r20
unsigned char NURBS::circle_intersect(float & intersect_u /* r30 */, class xVec3 & intersect_vec /* r19 */, float begin_u /* r29+0x230 */, float end_u /* r29+0x230 */, class xVec3 & circle_center /* r18 */, float circle_radius /* r23 */) {
    /* anonymous block */ {
        // Range: 0x29AD30 -> 0x29B8B0
        class search_end begin; // r29+0x170
        class search_end end; // r29+0x150
        float circle_radius_lower; // r21
        float circle_radius_upper; // r20
        class search_end * inside; // r17
        class search_end * outside; // r22
        class search_end third; // r29+0x130
        class search_end * guess; // r16
        signed int iterations; // r23
        class search_end * temp; // r2
        class search_end * temp; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B8B0 -> 0x0029B8DC
*/
// Range: 0x29B8B0 -> 0x29B8DC
// this: r2
NURBS::NURBS(signed int p /* r2 */, signed int knot_count /* r2 */, class xVec3 * control /* r2 */, float * knot /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29B8B0 -> 0x29B8DC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B8E0 -> 0x0029CAB4
*/
// Range: 0x29B8E0 -> 0x29CAB4
// this: r20
class xVec3 NURBS::project_point(class xVec3 & point /* r19 */, float * u /* r30 */, float * distance /* r29+0xCC */, float guess /* r21 */) {
    /* anonymous block */ {
        // Range: 0x29B8E0 -> 0x29CAB4
        float length2; // r20
        class xVec3 curve_point; // r29+0x410
        float u; // r25
        class xVec3 test_point; // r29+0x400
        signed int depth; // r16
        class xVec3 point_to_curve; // r29+0x3F0
        class xVec3 curve_tangent; // r29+0x3E0
        class xVec3 curve_2nd_derivative; // r29+0x3D0
        float last_guess; // r26
        float denom; // r29+0x420
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029CAC0 -> 0x0029CCE4
*/
// Range: 0x29CAC0 -> 0x29CCE4
// this: r19
void NURBS::evaluate(float u /* r29+0xE0 */, signed int d /* r18 */, class xVec3 & point /* r17 */) {
    /* anonymous block */ {
        // Range: 0x29CAC0 -> 0x29CCE4
        signed int span; // r2
        float ders[5][5]; // r29+0x50
        signed int j; // r11
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029CCF0 -> 0x0029D308
*/
// Range: 0x29CCF0 -> 0x29D308
// this: r20
class xVec3 NURBS::evaluate(float u /* r29+0x110 */, signed int d /* r19 */) {
    /* anonymous block */ {
        // Range: 0x29CCF0 -> 0x29D308
        class xVec3 point; // r29+0x100
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029D310 -> 0x0029D500
*/
// Range: 0x29D310 -> 0x29D500
// this: r18
void NURBS::evaluate(float u /* r29+0x80 */, class xVec3 & point /* r17 */) {
    /* anonymous block */ {
        // Range: 0x29D310 -> 0x29D500
        signed int span; // r2
        float N[5]; // r29+0x40
        signed int i; // r11
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029D500 -> 0x0029DACC
*/
// Range: 0x29D500 -> 0x29DACC
// this: r17
class xVec3 NURBS::evaluate(float u /* r29+0x90 */) {
    /* anonymous block */ {
        // Range: 0x29D500 -> 0x29DACC
        class xVec3 point; // r29+0x80
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029DAD0 -> 0x0029DAE8
*/
// Range: 0x29DAD0 -> 0x29DAE8
// this: r2
float NURBS::end() {
    /* anonymous block */ {
        // Range: 0x29DAD0 -> 0x29DAE8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029DAF0 -> 0x0029DB08
*/
// Range: 0x29DAF0 -> 0x29DB08
// this: r2
float NURBS::start() {
    /* anonymous block */ {
        // Range: 0x29DAF0 -> 0x29DB08
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029DB10 -> 0x0029E17C
*/
// Range: 0x29DB10 -> 0x29E17C
// this: r2
void NURBS::find_derivative_basis_functions(float u /* r29+0x170 */, signed int i /* r2 */, signed int order /* r2 */, float (* ders)[5] /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29DB10 -> 0x29E17C
        float ndu[5][5]; // r29+0x100
        float left[5]; // r29+0xE0
        float right[5]; // r29+0xC0
        signed int j; // r13
        float saved; // r3
        signed int r; // r5
        float temp; // r29+0x170
        float a[2][5]; // r29+0x90
        signed int r; // r21
        signed int s1; // r20
        signed int s2; // r19
        signed int k; // r18
        float d; // r1
        signed int rk; // r2
        signed int pk; // r2
        signed int j1; // r17
        signed int j2; // r2
        signed int j; // r2
        signed int temp; // r3
        signed int k; // r9
        signed int j; // r8
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xSplineAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029E180 -> 0x0029E498
*/
// Range: 0x29E180 -> 0x29E498
// this: r2
void NURBS::find_basis_functions(float u /* r29+0x60 */, signed int i /* r2 */, float * N /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29E180 -> 0x29E498
        float left[5]; // r29+0x40
        float right[5]; // r29+0x20
        signed int j; // r25
        float saved; // r29+0x60
        signed int r; // r24
        float temp; // r29+0x60
    }
}


