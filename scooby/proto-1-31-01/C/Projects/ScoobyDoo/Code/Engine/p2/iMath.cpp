/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
float g_PI; // size: 0x4, address: 0x485A40
float g_2_PI; // size: 0x4, address: 0x485A48
float g_PI_DIV_2; // size: 0x4, address: 0x485A50
float g_PI_DIV_4; // size: 0x4, address: 0x0
float g_INV_PI; // size: 0x4, address: 0x0
float g_DEGTORAD; // size: 0x4, address: 0x485A58
float g_RADTODEG; // size: 0x4, address: 0x485A60
float g_HUGE; // size: 0x4, address: 0x0
float g_EPSILON; // size: 0x4, address: 0x485A68
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x24
class xLine2D {
    // Members
public:
    class _RwV2d m_p[2]; // offset 0x0, size 0x10
    class _RwV2d m_i[2]; // offset 0x10, size 0x10
    signed int m_iCount; // offset 0x20, size 0x4
};
// total size: 0x8
class _RwV2d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x40
class tagMATRIX {
    // Members
public:
    float _11; // offset 0x0, size 0x4
    float _12; // offset 0x4, size 0x4
    float _13; // offset 0x8, size 0x4
    float _14; // offset 0xC, size 0x4
    float _21; // offset 0x10, size 0x4
    float _22; // offset 0x14, size 0x4
    float _23; // offset 0x18, size 0x4
    float _24; // offset 0x1C, size 0x4
    float _31; // offset 0x20, size 0x4
    float _32; // offset 0x24, size 0x4
    float _33; // offset 0x28, size 0x4
    float _34; // offset 0x2C, size 0x4
    float _41; // offset 0x30, size 0x4
    float _42; // offset 0x34, size 0x4
    float _43; // offset 0x38, size 0x4
    float _44; // offset 0x3C, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382030 -> 0x003820D8
*/
// Range: 0x382030 -> 0x3820D8
void iMathFindPlane(float * plane /* r2 */, class Vector3D * p0 /* r2 */, class Vector3D * p1 /* r2 */, class Vector3D * p2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x382030 -> 0x3820D8
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003820E0 -> 0x003825B4
*/
// Range: 0x3820E0 -> 0x3825B4
signed int iMathPointInArc(class Vector3D * p /* r2 */, class Vector3D * arcpos /* r2 */, float arclength /* r25 */, float arcrad1 /* r24 */, float arcrad2 /* r23 */) {
    /* anonymous block */ {
        // Range: 0x3820E0 -> 0x3825B4
        float distance; // r29+0x50
        signed int thetaGood; // r16
        float theta; // r29+0x50
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003825C0 -> 0x00382650
*/
// Range: 0x3825C0 -> 0x382650
float iMathAngleOfVectorXZ(class Vector3D * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3825C0 -> 0x382650
        float angle; // r29+0x30
        float ydiff; // r29+0x30
        float xdiff; // r20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382650 -> 0x003826F8
*/
// Range: 0x382650 -> 0x3826F8
void iMathRotateXYZVectorRIGHT(class Vector3D * rot /* r18 */, class Vector3D * v /* r17 */, class Vector3D * result /* r16 */) {
    /* anonymous block */ {
        // Range: 0x382650 -> 0x3826F8
        class tagMATRIX m2; // r29+0x140
        class tagMATRIX m1; // r29+0x100
        class tagMATRIX mz; // r29+0xC0
        class tagMATRIX my; // r29+0x80
        class tagMATRIX mx; // r29+0x40
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382700 -> 0x003827A8
*/
// Range: 0x382700 -> 0x3827A8
void iMathRotateXYZVector(class Vector3D * rot /* r18 */, class Vector3D * v /* r17 */, class Vector3D * result /* r16 */) {
    /* anonymous block */ {
        // Range: 0x382700 -> 0x3827A8
        class tagMATRIX m2; // r29+0x140
        class tagMATRIX m1; // r29+0x100
        class tagMATRIX mz; // r29+0xC0
        class tagMATRIX my; // r29+0x80
        class tagMATRIX mx; // r29+0x40
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003827B0 -> 0x003829F0
*/
// Range: 0x3827B0 -> 0x3829F0
signed int iMathIntersectLine2DLine2D(class xLine2D * a /* r2 */, class xLine2D * b /* r16 */, class _RwV2d * i /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3827B0 -> 0x3829F0
        float denom; // r28
        float s; // r24
        float num2; // r29+0x60
        float r; // r26
        float num; // r29+0x60
        float YD; // r27
        float XD; // r26
        float YC; // r25
        float XC; // r24
        float YB; // r23
        float XB; // r22
        float YA; // r21
        float XA; // r20
        float ib; // r29+0x60
        float ia; // r1
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003829F0 -> 0x00382BCC
*/
// Range: 0x3829F0 -> 0x382BCC
float iMathIntersectVector2DCircle(class _RwV2d ray /* r29+0x48 */, class _RwV2d ray_dir /* r29+0x50 */, class _RwV2d center /* r29+0x58 */, float r /* r29+0x60 */, float * rt1 /* r17 */, float * rt2 /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3829F0 -> 0x382BCC
        float t2; // r29+0x60
        float t1; // r3
        float oo_2a; // r2
        float sd; // r29+0x60
        float discriminant; // r29+0x60
        float c; // r1
        float b; // r21
        float a; // r20
        float m; // r29+0x60
        float l; // r29+0x60
        float j; // r29+0x60
        float i; // r29+0x60
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382BD0 -> 0x0038314C
*/
// Range: 0x382BD0 -> 0x38314C
signed int iMathPointIn2DPoly4(class Vector3D * point /* r2 */, class Vector3D * v1 /* r2 */, class Vector3D * v2 /* r2 */, class Vector3D * v3 /* r2 */, class Vector3D * v4 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x382BD0 -> 0x38314C
        class Vector3D tmpVec; // r29+0xD0
        float d; // r1
        class Vector3D up; // r29+0xC0
        class Vector3D p[4]; // r29+0x90
        class Vector3D n[4]; // r29+0x60
        class Vector3D u[4]; // r29+0x30
        class Vector3D vec[4]; // r29
        float tmpY; // r29+0xE0
        signed int i; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383150 -> 0x00383354
*/
// Range: 0x383150 -> 0x383354
signed int iMathPointIn2DRect(class Vector3D * point /* r2 */, class Vector3D * v1 /* r2 */, class Vector3D * v2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x383150 -> 0x383354
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383360 -> 0x00383830
*/
// Range: 0x383360 -> 0x383830
signed int iMathPointIn2DTri(class Vector3D * point /* r2 */, class Vector3D * v1 /* r2 */, class Vector3D * v2 /* r2 */, class Vector3D * v3 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x383360 -> 0x383830
        float tmpY; // r1
        class Vector3D tmpVec; // r29+0x80
        signed int i; // r2
        float d; // r29+0x90
        class Vector3D up; // r29+0x70
        class Vector3D p[3]; // r29+0x40
        class Vector3D n[3]; // r29+0x10
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383830 -> 0x0038385C
*/
// Range: 0x383830 -> 0x38385C
class _RwV2d * iMathVector2DSub(class _RwV2d * a /* r2 */, class _RwV2d * b /* r2 */, class _RwV2d * result /* r2 */) {
    /* anonymous block */ {
        // Range: 0x383830 -> 0x38385C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383860 -> 0x003838DC
*/
// Range: 0x383860 -> 0x3838DC
float iMathVector2DMagnitude(class _RwV2d * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x383860 -> 0x3838DC
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003838E0 -> 0x0038391C
*/
// Range: 0x3838E0 -> 0x38391C
class Vector3D * iMathVectorMul(class Vector3D * a /* r2 */, class Vector3D * b /* r2 */, class Vector3D * result /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3838E0 -> 0x38391C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383920 -> 0x0038394C
*/
// Range: 0x383920 -> 0x38394C
class Vector3D * iMathVectorSubXZ(class Vector3D * a /* r2 */, class Vector3D * b /* r2 */, class Vector3D * r /* r2 */) {
    /* anonymous block */ {
        // Range: 0x383920 -> 0x38394C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383950 -> 0x0038398C
*/
// Range: 0x383950 -> 0x38398C
class Vector3D * iMathVectorSub(class Vector3D * a /* r2 */, class Vector3D * b /* r2 */, class Vector3D * result /* r2 */) {
    /* anonymous block */ {
        // Range: 0x383950 -> 0x38398C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383990 -> 0x00383A1C
*/
// Range: 0x383990 -> 0x383A1C
float iMathVectorMagnitude(class Vector3D * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x383990 -> 0x383A1C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383A20 -> 0x00383AFC
*/
// Range: 0x383A20 -> 0x383AFC
class Vector3D * iMathVectorNormalize(class Vector3D * v /* r17 */, class Vector3D * retVal /* r16 */) {
    /* anonymous block */ {
        // Range: 0x383A20 -> 0x383AFC
        float oodiv; // r1
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383B00 -> 0x00383B48
*/
// Range: 0x383B00 -> 0x383B48
class Vector3D * iMathVectorInv(class Vector3D * a /* r2 */) {
    /* anonymous block */ {
        // Range: 0x383B00 -> 0x383B48
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383B50 -> 0x00383BB0
*/
// Range: 0x383B50 -> 0x383BB0
class Vector3D * iMathCrossProduct(class Vector3D * a /* r2 */, class Vector3D * b /* r2 */, class Vector3D * c /* r2 */) {
    /* anonymous block */ {
        // Range: 0x383B50 -> 0x383BB0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383BB0 -> 0x00383BE0
*/
// Range: 0x383BB0 -> 0x383BE0
float iMathDotProduct(class Vector3D * a /* r2 */, class Vector3D * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x383BB0 -> 0x383BE0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383BE0 -> 0x00383C10
*/
// Range: 0x383BE0 -> 0x383C10
float iMathVectorSquareMagnitude(class Vector3D * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x383BE0 -> 0x383C10
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383C10 -> 0x00383C74
*/
// Range: 0x383C10 -> 0x383C74
float iMathSquareRoot(float val /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x383C10 -> 0x383C74
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383C80 -> 0x00383D80
*/
// Range: 0x383C80 -> 0x383D80
float iMathAngleAdd(float a /* r29 */, float b /* r29 */) {
    /* anonymous block */ {
        // Range: 0x383C80 -> 0x383D80
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383D80 -> 0x00383E7C
*/
// Range: 0x383D80 -> 0x383E7C
float iMathAngleClamp(float a /* r29 */) {
    /* anonymous block */ {
        // Range: 0x383D80 -> 0x383E7C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\p2\iMath.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383E80 -> 0x00383E88
*/
// Range: 0x383E80 -> 0x383E88
void iMathInit() {
    /* anonymous block */ {
        // Range: 0x383E80 -> 0x383E88
    }
}


