/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00424B70 -> 0x00424CDC
*/
// Range: 0x424B70 -> 0x424CDC
unsigned int xSphereHitsEnv(class xSphere * b /* r21 */, class xEnv * env /* r20 */, class xCollis * coll /* r19 */) {
    /* anonymous block */ {
        // Range: 0x424B70 -> 0x424CDC
        class RpIntersection isx; // r29+0x70
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00424CE0 -> 0x00425064
*/
// Range: 0x424CE0 -> 0x425064
signed int xSphereHitsEnv3(class xSphere * b /* r30 */, class xEnv * env /* r20 */, class xCollis * colls /* r23 */, unsigned char ncolls /* r16 */, float sth /* r20 */) {
    /* anonymous block */ {
        // Range: 0x424CE0 -> 0x425064
        class RpIntersection isx; // r29+0xC0
        unsigned char idx; // r6
        signed int i; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00425070 -> 0x004253B0
*/
// Range: 0x425070 -> 0x4253B0
signed int xSphereHitsEnv4(class xSphere * b /* r23 */, class xEnv * env /* r20 */, class xMat3x3 * mat /* r16 */, class xCollis * colls /* r21 */) {
    /* anonymous block */ {
        // Range: 0x425070 -> 0x4253B0
        class RpIntersection isx; // r29+0xA0
        class xCollis * c; // r4
        class xCollis * cend; // r2
        signed int i; // r19
        signed int numcs; // r2
        float s; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004253B0 -> 0x004255DC
*/
// Range: 0x4253B0 -> 0x4255DC
static class RpCollisionTriangle * sphereHitsEnv4CB(class RpIntersection * isx /* r2 */, class RpWorldSector * sector /* r18 */, class RpCollisionTriangle * tri /* r17 */, float dist /* r29+0x5C */, void * data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4253B0 -> 0x4255DC
        class xCollis * colls; // r2
        float radius; // r29+0xD0
        class xVec3 tohit; // r29+0xC0
        class xCollis temp; // r29+0x60
        unsigned char idx; // r2
        class xCollis * c; // r2
        float ddist; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004255E0 -> 0x00425AEC
*/
// Range: 0x4255E0 -> 0x425AEC
signed int xSphereHitsModel3(class xSphere * b /* r20 */, class xModelInstance * m /* r19 */, class xCollis * colls /* r18 */, unsigned char ncolls /* r21 */, float sth /* r21 */) {
    /* anonymous block */ {
        // Range: 0x4255E0 -> 0x425AEC
        class RpIntersection isx; // r29+0xB0
        unsigned char idx; // r6
        unsigned char i; // r5
        class xMat4x3 * mat; // r17
        class RwFrame * frame; // r2
        float mscale; // r20
        class xMat3x3 mnormal; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00425AF0 -> 0x00425B08
*/
// Range: 0x425AF0 -> 0x425B08
static class RpCollisionTriangle * sphereHitsModel3CB(class RpCollisionTriangle * tri /* r5 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x425AF0 -> 0x425B08
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00425B10 -> 0x00426180
*/
// Range: 0x425B10 -> 0x426180
static class RpCollisionTriangle * sphereHitsEnv3CB(class RpIntersection * isx /* r2 */, class RpWorldSector * sector /* r18 */, class RpCollisionTriangle * tri /* r17 */, float dist /* r29+0x5C */, void * data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x425B10 -> 0x426180
        unsigned char NEXT2'247; // r2
        class xCollis * colls; // r2
        float radius; // r20
        class xVec3 tohit; // r29+0x60
        unsigned char idx; // r5
        float scale; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00426180 -> 0x004264F8
*/
// Range: 0x426180 -> 0x4264F8
unsigned int xRayHitsEnv(class xRay3 * r /* r20 */, class xEnv * env /* r19 */, class xCollis * coll /* r18 */) {
    /* anonymous block */ {
        // Range: 0x426180 -> 0x4264F8
        class RpIntersection isx; // r29+0xB0
        float len; // r29+0xD0
        signed int i; // r17
        class xIsect iBoxIsect; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00426500 -> 0x0042697C
*/
// Range: 0x426500 -> 0x42697C
unsigned int xRayHitsModel(class xRay3 * r /* r19 */, class xModelInstance * m /* r18 */, class xCollis * coll /* r17 */) {
    /* anonymous block */ {
        // Range: 0x426500 -> 0x42697C
        class RpIntersection isx; // r29+0x60
        float len; // r29+0xA0
        class xMat4x3 * mat; // r2
        class xVec3 center; // r29+0x90
        class xVec3 heading; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00426980 -> 0x00426994
*/
// Range: 0x426980 -> 0x426994
static class RpCollisionTriangle * rayHitsModelCB(class RpIntersection * isx /* r2 */, class RpCollisionTriangle * tri /* r2 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x426980 -> 0x426994
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004269A0 -> 0x00426AC4
*/
// Range: 0x4269A0 -> 0x426AC4
static class RpCollisionTriangle * rayHitsEnvCB(class RpWorldSector * sector /* r2 */, class RpCollisionTriangle * tri /* r2 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4269A0 -> 0x426AC4
        class xCollis * coll; // r2
        unsigned char flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00426AD0 -> 0x00426AE4
*/
// Range: 0x426AD0 -> 0x426AE4
static class RpCollisionTriangle * rayHitsModelBackwardCB(class RpIntersection * isx /* r2 */, class RpCollisionTriangle * tri /* r2 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x426AD0 -> 0x426AE4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00426AF0 -> 0x00426B90
*/
// Range: 0x426AF0 -> 0x426B90
static class RpCollisionTriangle * rayHitsEnvBackwardCB(class RpWorldSector * sector /* r2 */, class RpCollisionTriangle * tri /* r2 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x426AF0 -> 0x426B90
        class xCollis * coll; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00426B90 -> 0x00426D38
*/
// Range: 0x426B90 -> 0x426D38
void xSphereForModel(class xSphere & o /* r21 */, class xModelInstance * model /* r22 */, unsigned char childModels /* r2 */) {
    /* anonymous block */ {
        // Range: 0x426B90 -> 0x426D38
        class RpAtomic * imodel; // r2
        class RpGeometry * geom; // r2
        class RpMorphTarget * mtgt; // r2
        unsigned short idx; // r20
        class xModelInstance * cur_model; // r19
        class xSphere s; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00426D40 -> 0x00426FE8
*/
// Range: 0x426D40 -> 0x426FE8
void xBoxForModelLocal(class xBox & o /* r21 */, class xModelInstance * m /* r22 */, unsigned char childModels /* r23 */) {
    /* anonymous block */ {
        // Range: 0x426D40 -> 0x426FE8
        class RpAtomic * imodel; // r2
        class RpGeometry * geom; // r20
        class RpMorphTarget * mtgt; // r2
        unsigned short idx; // r19
        class xModelInstance * curModel; // r18
        class xVec3 lower; // r29+0xB0
        class xVec3 upper; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00426FF0 -> 0x00427084
*/
// Range: 0x426FF0 -> 0x427084
void xBoxForModel(class xBox & o /* r17 */, class xModelInstance * m /* r16 */, unsigned char childModels /* r2 */) {
    /* anonymous block */ {
        // Range: 0x426FF0 -> 0x427084
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00427090 -> 0x004271C0
*/
// Range: 0x427090 -> 0x4271C0
void xBoxForTriangle(class xBox & box /* r2 */, class xVec3 & p0 /* r2 */, class xVec3 & p1 /* r2 */, class xVec3 & p2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x427090 -> 0x4271C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004271C0 -> 0x00427530
*/
// Range: 0x4271C0 -> 0x427530
unsigned char xSphereHitsCone(class xVec3 & center /* r2 */, float radius /* r23 */, class xVec3 & kv0 /* r2 */, float kr0 /* r22 */, class xVec3 & kv1 /* r2 */, float kr1 /* r21 */) {
    /* anonymous block */ {
        // Range: 0x4271C0 -> 0x427530
        class xMat4x3 mat; // r29+0x30
        class xVec3 C; // r29+0x70
        float Cx; // r29+0x80
        float Cy; // r29+0x80
        float Dx; // r29+0x80
        float Ex; // r29+0x80
        float Ey; // r29+0x80
        float a; // r29+0x80
        float b; // r29+0x80
        float i2a; // r29+0x80
        float t0; // r3
        float t1; // r1
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00427530 -> 0x0042764C
*/
// Range: 0x427530 -> 0x42764C
unsigned char xSphereHitsVCircle(class xVec3 & sc /* r2 */, float sr /* r29+0x20 */, class xVec3 & cc /* r2 */, float cr /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x427530 -> 0x42764C
        float ydist; // r29+0x20
        class xVec2 xzloc1; // r29+0x18
        class xVec2 xzloc2; // r29+0x10
        float max_xzdist; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00427650 -> 0x00427A00
*/
// Range: 0x427650 -> 0x427A00
unsigned int xCylinderHitsSphere(class xCylinder * cyl /* r2 */, class xSphere * sph /* r2 */, class xCollis * coll /* r2 */) {
    /* anonymous block */ {
        // Range: 0x427650 -> 0x427A00
        float sr; // r6
        float ydist; // r1
        class xVec2 xzloc1; // r29+0x78
        class xVec2 xzloc2; // r29+0x70
        float max_xzdist; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00427A00 -> 0x00427DAC
*/
// Range: 0x427A00 -> 0x427DAC
unsigned int xSphereHitsVCylinder(class xSphere * sph /* r2 */, class xCylinder * cyl /* r2 */, class xCollis * coll /* r2 */) {
    /* anonymous block */ {
        // Range: 0x427A00 -> 0x427DAC
        float sr; // r2
        float ydist; // r1
        class xVec2 xzloc1; // r29+0x78
        class xVec2 xzloc2; // r29+0x70
        float max_xzdist; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00427DB0 -> 0x00427F1C
*/
// Range: 0x427DB0 -> 0x427F1C
unsigned char xSphereHitsVCylinder(class xVec3 & sc /* r2 */, float sr /* r29+0x20 */, class xVec3 & cc /* r2 */, float cr /* r29+0x20 */, float ch /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x427DB0 -> 0x427F1C
        float ydist; // r29+0x20
        class xVec2 xzloc1; // r29+0x18
        class xVec2 xzloc2; // r29+0x10
        float max_xzdist; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00427F20 -> 0x00427F40
*/
// Range: 0x427F20 -> 0x427F40
unsigned char xOBBHitsOBB(class xBox & a /* r2 */, class xMat4x3 & amat /* r2 */, class xBox & b /* r2 */, class xMat4x3 & bmat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x427F20 -> 0x427F40
        float ax; // r29+0xB0
        float ay; // r29+0xB0
        float az; // r29+0xB0
        float bx; // r29+0xB0
        float by; // r29+0xB0
        float bz; // r29+0xB0
        class xVec3 acenter; // r29+0xA0
        class xVec3 bcenter; // r29+0x90
        class xVec3 offset; // r29+0x80
        class xVec3 aoffset; // r29+0x70
        class xMat3x3 xmat; // r29+0x40
        class xMat3x3 axmat; // r29+0x10
        float ar; // r29+0xB0
        float br; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00427F40 -> 0x004280E8
*/
// Range: 0x427F40 -> 0x4280E8
unsigned char xSphereHitsBox(class xVec3 & c /* r2 */, float r /* r29 */, class xBox & b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x427F40 -> 0x4280E8
        float ex; // r29
        float ey; // r29
        float ez; // r29
        float dx; // r29
        float dy; // r29
        float dz; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004280F0 -> 0x00428AF8
*/
// Range: 0x4280F0 -> 0x428AF8
class xVec3 xCollisTriHit(class tri_data & tri /* r2 */, class xModelInstance & model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4280F0 -> 0x428AF8
        class xMat4x3 & m; // r2
        class xVec3 v[3]; // r29+0xB0
        class RpGeometry * geom; // r2
        class xVec3 * verts; // r7
        class RpMorphTarget * mt; // r2
        class RpTriangle & t; // r2
        signed int i; // r6
        class xVec3 r[2]; // r29+0x90
        class xVec3 d; // r29+0x340
        class xVec3 A; // r29+0x330
        class xVec3 B; // r29+0x320
        class xVec3 C; // r29+0x310
        class xVec3 AxB; // r29+0x300
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00428B00 -> 0x00429910
*/
// Range: 0x428B00 -> 0x429910
void xCollideCalcTri(class tri_data & tri /* r2 */, class xModelInstance & model /* r2 */, class xVec3 & center /* r2 */, class xVec3 & heading /* r2 */) {
    /* anonymous block */ {
        // Range: 0x428B00 -> 0x429910
        class xVec3 v[3]; // r29+0xA0
        class RpGeometry * geom; // r2
        class xVec3 * verts; // r5
        class RpTriangle & t; // r2
        class xVec3 p; // r29+0x370
        float num; // r18
        class xVec3 b; // r29+0x360
        class xVec3 A; // r29+0x350
        class xVec3 d; // r29+0x340
        class xVec3 ad; // r29+0x330
        class xVec3 d; // r29+0x320
        class xVec3 ad; // r29+0x310
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00429910 -> 0x00429978
*/
// Range: 0x429910 -> 0x429978
unsigned int xBoxHitsObb(class xBox * a /* r2 */, class xBox * b /* r5 */, class xMat4x3 * mat /* r2 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x429910 -> 0x429978
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00429980 -> 0x0042A620
*/
// Range: 0x429980 -> 0x42A620
static unsigned int Mgc_BoxBoxTest(class xBox * a /* r2 */, class xMat4x3 * matA /* r2 */, class xBox * b /* r2 */, class xMat4x3 * matB /* r2 */) {
    /* anonymous block */ {
        // Range: 0x429980 -> 0x42A620
        class xVec3 akA[3]; // r29+0x130
        class xVec3 akB[3]; // r29+0x100
        float afEA[3]; // r29+0x190
        float afEB[3]; // r29+0x180
        float _mag; // r29+0x1A0
        float _mag; // r29+0x1A0
        float _mag; // r29+0x1A0
        float _mag; // r29+0x1A0
        float _mag; // r29+0x1A0
        float _mag; // r29+0x1A0
        class xVec3 centA; // r29+0x170
        class xVec3 centB; // r29+0x160
        float fR0; // r29+0x1A0
        float fR1; // r29+0x1A0
        float fR01; // r29+0x1A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042A620 -> 0x0042A7B8
*/
// Range: 0x42A620 -> 0x42A7B8
unsigned int xBoxHitsSphere(class xBox * a /* r2 */, class xSphere * b /* r2 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x42A620 -> 0x42A7B8
        class xIsect isx; // r29+0x20
        float scale; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042A7C0 -> 0x0042AB98
*/
// Range: 0x42A7C0 -> 0x42AB98
signed int xParabolaHitsEnv(class xParabola * p /* r2 */, class xEnv * env /* r20 */, class xCollis * colls /* r19 */) {
    /* anonymous block */ {
        // Range: 0x42A7C0 -> 0x42AB98
        class RwBBox xb; // r29+0x80
        float extremumT; // r29+0xA0
        float extremum; // r29+0xA0
        class ParabolaCBData data; // r29+0x60
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042ABA0 -> 0x0042B228
*/
// Range: 0x42ABA0 -> 0x42B228
static signed int xParabolaEnvCB(class xClumpCollBSPTriangle * triangles /* r20 */, void * data /* r19 */) {
    /* anonymous block */ {
        // Range: 0x42ABA0 -> 0x42B228
        class ParabolaCBData * pd; // r2
        class xParabola * p; // r18
        class xCollis * colls; // r2
        class xVec3 * v0; // r2
        class xVec3 * v1; // r4
        class xVec3 * v2; // r3
        unsigned char tester; // r2
        float a; // r7
        float b; // r6
        float c; // r1
        float det; // r29+0xB0
        class xVec3 N; // r29+0xA0
        float t1; // r27
        float t2; // r26
        float c1; // r29+0xB0
        float c2; // r29+0xB0
        float c0; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042B230 -> 0x0042B2BC
*/
// Range: 0x42B230 -> 0x42B2BC
void xParabolaRecenter(class xParabola * p /* r2 */, float newZeroT /* r29 */) {
    /* anonymous block */ {
        // Range: 0x42B230 -> 0x42B2BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042B2C0 -> 0x0042B690
*/
// Range: 0x42B2C0 -> 0x42B690
unsigned int xSphereHitsModel(class xSphere * b /* r20 */, class xModelInstance * m /* r19 */, class xCollis * coll /* r18 */) {
    /* anonymous block */ {
        // Range: 0x42B2C0 -> 0x42B690
        class RpIntersection isx; // r29+0x90
        class xSphereHitsModel_context context; // r29+0x70
        class xMat4x3 * mat; // r17
        class RwFrame * frame; // r2
        float mscale; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042B690 -> 0x0042B6AC
*/
// Range: 0x42B690 -> 0x42B6AC
static class RpCollisionTriangle * sphereHitsModelCB(class RpCollisionTriangle * tri /* r3 */, float dist /* r29 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x42B690 -> 0x42B6AC
        class xSphereHitsModel_context * context; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042B6B0 -> 0x0042B8E4
*/
// Range: 0x42B6B0 -> 0x42B8E4
static class RpCollisionTriangle * sphereHitsEnvCB(class RpIntersection * isx /* r2 */, class RpWorldSector * sector /* r18 */, class RpCollisionTriangle * tri /* r17 */, float dist /* r29+0x5C */, void * data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x42B6B0 -> 0x42B8E4
        class xCollis * coll; // r2
        float radius; // r20
        class xVec3 * center; // r2
        class xVec3 tohit; // r29+0x60
        float scale; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042B8F0 -> 0x0042BB04
*/
// Range: 0x42B8F0 -> 0x42BB04
static void properSphereIsectTri(class xVec3 * center /* r21 */, float radius /* r22 */, class xVec3 * tohit /* r20 */, float * dist_ptr /* r23 */, class RpCollisionTriangle * tri /* r19 */) {
    /* anonymous block */ {
        // Range: 0x42B8F0 -> 0x42BB04
        class xVec3 projPoint; // r29+0xB0
        float dist2plane; // r21
        float dist; // r29+0xC0
        float dist2; // r20
        float radius2; // r21
        unsigned int i; // r18
        class xVec3 vertClosestPoint; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042BB10 -> 0x0042BBE4
*/
// Range: 0x42BB10 -> 0x42BBE4
static void FindNearestPointOnLine(class xVec3 * result /* r2 */, class xVec3 * point /* r2 */, class xVec3 * start /* r2 */, class xVec3 * end /* r2 */) {
    /* anonymous block */ {
        // Range: 0x42BB10 -> 0x42BBE4
        float mu; // r29
        float lineLength2; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042BBF0 -> 0x0042BED8
*/
// Range: 0x42BBF0 -> 0x42BED8
static signed int PointWithinTriangle(class xVec3 * _pt /* r2 */, class xVec3 * * _tri /* r2 */, class xVec3 * _normal /* r2 */) {
    /* anonymous block */ {
        // Range: 0x42BBF0 -> 0x42BED8
        class RwV3d * pt; // r2
        class RwV3d * * tri; // r2
        class RwV3d * normal; // r2
        enum Dimension dimension; // r2
        signed int inside; // r2
        signed int i; // r10
        signed int j; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042BEE0 -> 0x0042C35C
*/
// Range: 0x42BEE0 -> 0x42C35C
unsigned int xSphereHitsOBB_nu(class xSphere * s /* r17 */, class xBox * b /* r2 */, class xMat4x3 * m /* r2 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x42BEE0 -> 0x42C35C
        class xSphere xfs; // r29+0x90
        class xVec3 scale; // r29+0xA0
        class xMat4x3 mnormal; // r29+0x50
        float len2; // r29+0xB0
        float len_inv; // r29+0xB0
        float len2; // r29+0xB0
        float len_inv; // r29+0xB0
        float len2; // r29+0xB0
        float len_inv; // r29+0xB0
        class xBox sbox; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C360 -> 0x0042C504
*/
// Range: 0x42C360 -> 0x42C504
unsigned int xSphereHitsBox(class xSphere * a /* r2 */, class xBox * b /* r2 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x42C360 -> 0x42C504
        class xIsect isx; // r29+0x20
        float scale; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C510 -> 0x0042C714
*/
// Range: 0x42C510 -> 0x42C714
unsigned int xSphereHitsSphere(class xSphere * a /* r17 */, class xSphere * b /* r2 */, class xCollis * coll /* r16 */) {
    /* anonymous block */ {
        // Range: 0x42C510 -> 0x42C714
        class xIsect isx; // r29+0x30
        float scale; // r29+0x60
        float scale; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C720 -> 0x0042C8D0
*/
// Range: 0x42C720 -> 0x42C8D0
static enum _xCollsIdx xCollideGetCollsIdxWithNormal(class xCollis * coll /* r2 */, class xVec3 * tohit /* r18 */, class xVec3 * normal /* r17 */, class xMat3x3 * mat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x42C720 -> 0x42C8D0
        float local_x; // r29+0x40
        float local_z; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollide.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0042C8D0 -> 0x0042CA48
*/
// Range: 0x42C8D0 -> 0x42CA48
enum _xCollsIdx xCollideGetCollsIdx(class xCollis * coll /* r2 */, class xVec3 * tohit /* r17 */, class xMat3x3 * mat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x42C8D0 -> 0x42CA48
        float local_x; // r29+0x30
        float local_z; // r29+0x30
    }
}


