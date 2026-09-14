/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CAE00 -> 0x002CB3E4
*/
// Range: 0x2CAE00 -> 0x2CB3E4
void zPatTongue_PopOff() {
    /* anonymous block */ {
        // Range: 0x2CAE00 -> 0x2CB3E4
        float totalLen; // r20
        float actualDensity; // r22
        signed int i; // r6
        signed int max_emit; // r20
        class xVec3 * buffer; // r22
        class xVec3 * loc; // r19
        class xVec3 * vel; // r18
        signed int emitted; // r17
        float segEmit; // r21
        float rightRand; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CB3F0 -> 0x002CCA50
*/
// Range: 0x2CB3F0 -> 0x2CCA50
static void zPatTongue_Render(class zLasso * lasso /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2CB3F0 -> 0x2CCA50
        class RxObjSpace3DVertex * currvert; // r20
        class IMLightKit imlkit; // r29+0x930
        signed int i; // r5
        class xVec3 tippos; // r29+0xB80
        class xVec3 tiptag; // r29+0xB70
        class xVec3 teethtag; // r29+0xB60
        class xVec3 mouthtag; // r29+0xB50
        class xVec3 ignoreNorm; // r29+0xB40
        class xVec3 tonguevec; // r29+0xB30
        class xVec3 mouthvec; // r29+0xB20
        float totaldist; // r29+0xB90
        float tipsin; // r29+0xB90
        float tipangle; // r29+0xB90
        class xMat4x3 * tipmat; // r2
        class xVec3 hitchpos; // r29+0xB10
        class xVec3 mouthToTeeth; // r29+0xB00
        class xMat3x3 rotmat; // r29+0x900
        float distLerp; // r21
        signed int numsegments; // r23
        class xVec3 seglinear[13]; // r29+0x860
        float seglerp[13]; // r29+0x820
        float segscale[13]; // r29+0x7E0
        float invdistsqr; // r21
        float tongueScale; // r4
        float slope; // r20
        float normadjust; // r29+0xB90
        class xVec3 inside_normvec; // r29+0xAF0
        class xVec3 tangent_vec; // r29+0xAE0
        signed int currsegidx; // r29+0x100
        class xVec3 start_xsect[24]; // r29+0x6C0
        class xVec3 end_xsect[24]; // r29+0x5A0
        signed int seg; // r30
        class xVec3 xsectbuf[4][24]; // r29+0x120
        class xVec3 * curr_xsect[4]; // r29+0x110
        class RxObjSpace3DVertex * xsectStartVert; // r19
        class xVec3 * xsectA; // r18
        class xVec3 * xsectB; // r17
        unsigned char color[4]; // r29+0xB8C
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class xVec3 * tmpxsect; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CCA50 -> 0x002CCE50
*/
// Range: 0x2CCA50 -> 0x2CCE50
static void IMLightKitLight(class IMLightKit * imlkit /* r2 */, class xVec3 * norm /* r2 */, unsigned char * r /* r2 */, unsigned char * g /* r2 */, unsigned char * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2CCA50 -> 0x2CCE50
        float red; // r8
        float grn; // r7
        float blu; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CCE50 -> 0x002CD030
*/
// Range: 0x2CCE50 -> 0x2CD030
static void IMLightKitSetup(class IMLightKit * imlkit /* r17 */, class xLightKit * lkit /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2CCE50 -> 0x2CD030
        unsigned int i; // r6
        unsigned int numdir; // r18
        float * lightdir; // r5
        float * extraLightdir; // r4
        class xLightKitLight * light; // r2
        class RwMatrixTag * mat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CD030 -> 0x002CD484
*/
// Range: 0x2CD030 -> 0x2CD484
static void CalcSegNormals(class xVec3 * segA /* r29+0xCC */, class xVec3 * segB /* r22 */, class xVec3 * segC /* r29+0xC8 */) {
    /* anonymous block */ {
        // Range: 0x2CD030 -> 0x2CD484
        signed int i; // r21
        class xVec3 normsum; // r29+0x110
        class xVec3 * vright; // r20
        class xVec3 * vleft; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CD490 -> 0x002CD79C
*/
// Range: 0x2CD490 -> 0x2CD79C
static void CalcSegLerp(class xVec3 * segOut /* r2 */, class xVec3 * segA /* r2 */, class xVec3 * segB /* r2 */, float lerp /* r29+0x30 */, class xVec3 * translate /* r2 */, float scale /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x2CD490 -> 0x2CD79C
        signed int i; // r11
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CD7A0 -> 0x002CD994
*/
// Range: 0x2CD7A0 -> 0x2CD994
void zPatTongue_Init(class zLasso * lasso /* r17 */, class xModelInstance * patmodel /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2CD7A0 -> 0x2CD994
        signed int i; // r18
        class RwV3d * verts; // r2
        unsigned int index; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CD9A0 -> 0x002CDA24
*/
// Range: 0x2CD9A0 -> 0x2CDA24
void zLasso_ResetTimer(class zLasso * lasso /* r2 */, float interpTime /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2CD9A0 -> 0x2CDA24
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CDA30 -> 0x002CDBBC
*/
// Range: 0x2CDA30 -> 0x2CDBBC
void zLasso_InitTimer(class zLasso * lasso /* r16 */, float interpTime /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x2CDA30 -> 0x2CDBBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CDBC0 -> 0x002CECF4
*/
// Range: 0x2CDBC0 -> 0x2CECF4
void zLasso_Update(class zLasso * lasso /* r16 */, class xEnt * ent /* r17 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2CDBC0 -> 0x2CECF4
        signed int i; // r6
        class xVec3 newPoint; // r29+0x40
        float interp; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002CED00 -> 0x002D0AD8
*/
// Range: 0x2CED00 -> 0x2D0AD8
void zLasso_Render(class zLasso * lasso /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2CED00 -> 0x2D0AD8
        signed int i; // r6
        class xVec3 loop[16]; // r29+0x280
        signed int numVerts; // r20
        float closestDistSqr; // r29+0x580
        float arc_length; // r29
        unsigned char shouldUseGuide; // r2
        float time; // r29+0x580
        class RpGeometry * geom; // r2
        signed int numMorphs; // r2
        signed int mIndx1; // r2
        float interp; // r7
        signed int mIndx2; // r2
        class RpMorphTarget * m1; // r2
        class RpMorphTarget * m2; // r2
        class RwV3d * m1V; // r2
        class RwV3d * m2V; // r2
        class xVec3 temp; // r29+0x570
        class xVec3 dif; // r29+0x560
        class xVec3 currClose; // r29+0x550
        class xVec3 closestPoint; // r29+0x540
        class xVec3 hand; // r29+0x530
        float closestDistSqr; // r26
        float len; // r29+0x580
        class RxObjSpace3DVertex * tmp_pt; // r19
        class xVec3 b1; // r29+0x520
        class xVec3 b2; // r29+0x510
        class xVec3 b3; // r29+0x500
        float s[3]; // r29+0x4F0
        float c[3]; // r29+0x4E0
        float a; // r29+0x580
        float astep; // r29+0x580
        class xVec3 worldHonda; // r29+0x4D0
        class xVec3 incr; // r29+0x4C0
        class xVec3 disp; // r29+0x4B0
        class xVec3 crossSection[3]; // r29+0x250
        class xVec3 sections[6]; // r29+0x200
        signed int currSection; // r17
        signed int lastSection; // r21
        signed int numSections; // r22
        float distSoFar; // r28
        float distTotal; // r27
        float spokeDistIncr; // r26
        unsigned int numVertsSoFar; // r18
        float u; // r29+0x580
        float v; // r7
        float ustep; // r25
        float vstep; // r29+0x580
        class xVec3 sectionCenter; // r29+0x4A0
        float xDisp; // r31
        float yDisp; // r29+0x580
        class RwV3d _packed; // r29+0x490
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x480
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x470
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x460
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x450
        class RwRGBA * _col; // r2
        signed int shouldRepeat; // r21
        class xMat4x3 rotMatrix; // r29+0x1C0
        class xVec3 addTo; // r29+0x440
        class xVec3 temp; // r29+0x430
        signed int k; // r3
        class RwV3d _packed; // r29+0x420
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x410
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x400
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x3F0
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x3E0
        class RwRGBA * _col; // r2
        class xMat4x3 rotMatrix; // r29+0x180
        class xVec3 norm; // r29+0x3D0
        class xVec3 oldNorm; // r29+0x3C0
        signed int k; // r17
        signed int k1; // r2
        signed int k2; // r2
        signed int k3; // r2
        class RwV3d _packed; // r29+0x3B0
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x3A0
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x390
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x380
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x370
        class RwRGBA * _col; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zLasso.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D0AE0 -> 0x002D0B9C
*/
// Range: 0x2D0AE0 -> 0x2D0B9C
void zLasso_Init(class zLasso * lasso /* r17 */, class xModelInstance * model /* r16 */, float x /* r22 */, float y /* r21 */, float z /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2D0AE0 -> 0x2D0B9C
        class RwTexture * tempTexture; // r2
    }
}


