/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00418CE0 -> 0x00418E38
*/
// Range: 0x418CE0 -> 0x418E38
signed int xSweptSphereToNPC(class xSweptSphere * sws /* r2 */, class xScene * sc /* r2 */, class xEnt * mover /* r2 */, unsigned char collType /* r2 */, signed int penby /* r2 */) {
    /* anonymous block */ {
        // Range: 0x418CE0 -> 0x418E38
        class xRay3 ray; // r29+0x10
        float one_len; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00418E40 -> 0x00418FD8
*/
// Range: 0x418E40 -> 0x418FD8
signed int xSweptSphereToStatDyn(class xSweptSphere * sws /* r17 */, class xScene * sc /* r16 */, class xEnt * mover /* r2 */, unsigned char collType /* r2 */, signed int penby /* r2 */) {
    /* anonymous block */ {
        // Range: 0x418E40 -> 0x418FD8
        class xRay3 ray; // r29+0x30
        float one_len; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00418FE0 -> 0x004191F0
*/
// Range: 0x418FE0 -> 0x4191F0
signed int xSweptSphereToNonMoving(class xSweptSphere * sws /* r18 */, class xScene * sc /* r17 */, class xEnt * mover /* r2 */, unsigned char collType /* r2 */, signed int penby /* r2 */) {
    /* anonymous block */ {
        // Range: 0x418FE0 -> 0x4191F0
        signed int envcollfound; // r2
        class xRay3 ray; // r29+0x40
        float one_len; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004191F0 -> 0x0041937C
*/
// Range: 0x4191F0 -> 0x41937C
signed int xSweptSphereToScene(class xSweptSphere * sws /* r18 */, class xScene * sc /* r17 */, class xEnt * mover /* r2 */, unsigned char collType /* r2 */, signed int penby /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4191F0 -> 0x41937C
        signed int envcollfound; // r2
        class xRay3 ray; // r29+0x40
        float one_len; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00419380 -> 0x00419900
*/
// Range: 0x419380 -> 0x419900
signed int xSweptSphereToEnt(class xSweptSphere * sws /* r19 */, class xEnt * ent /* r18 */, class xRay3 * ray /* r16 */) {
    /* anonymous block */ {
        // Range: 0x419380 -> 0x419900
        unsigned int result; // r4
        float oldrad; // r8
        class xBox tmpbox; // r29+0x140
        class xBox tmpbox; // r29+0x120
        class xRay3 lr; // r29+0xF0
        class xMat3x3 mn; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00419900 -> 0x00419ABC
*/
// Range: 0x419900 -> 0x419ABC
static void SweptSphereHitsEntCB(class xRay3 * ray /* r18 */, class xQCData * qcd /* r2 */, class xEnt * ent /* r17 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x419900 -> 0x419ABC
        class xSweptSphere * sws; // r16
        class xMat4x3 * m1; // r2
        class xMat4x3 * m2; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00419AC0 -> 0x00419B2C
*/
// Range: 0x419AC0 -> 0x419B2C
signed int xSweptSphereToTriangle(class xSweptSphere & sws /* r16 */, class xVec3 & v0 /* r2 */, class xVec3 & v1 /* r2 */, class xVec3 & v2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x419AC0 -> 0x419B2C
        class xPlane surface; // r29+0x40
        class xCollideSphereToPolygonResults results; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00419B30 -> 0x00419BA4
*/
// Range: 0x419B30 -> 0x419BA4
signed int xSweptSphereToBound(class xSweptSphere * sws /* r2 */, class xBound * bound /* r6 */) {
    /* anonymous block */ {
        // Range: 0x419B30 -> 0x419BA4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00419BB0 -> 0x00419DF4
*/
// Range: 0x419BB0 -> 0x419DF4
signed int xSweptSphereToSphere(class xSweptSphere & sws /* r2 */, class xVec3 & center /* r2 */, float radius /* r29 */) {
    /* anonymous block */ {
        // Range: 0x419BB0 -> 0x419DF4
        float combined_raidus; // r14
        float combined_radius_squ; // r29
        float dist_to_collide; // r29
        float ratio; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00419E00 -> 0x0041A5EC
*/
// Range: 0x419E00 -> 0x41A5EC
signed int xSweptSphereToModel(class xSweptSphere * sws /* r20 */, class RpAtomic * model /* r19 */, class RwMatrixTag * mat /* r18 */) {
    /* anonymous block */ {
        // Range: 0x419E00 -> 0x41A5EC
        class xVec3 old_start; // r29+0x130
        class xVec3 old_end; // r29+0x120
        class xVec3 old_dir; // r29+0x110
        float old_radius; // r24
        class xBox old_box; // r29+0xF0
        float old_dist; // r23
        float model_scale; // r22
        float old_curdist; // r21
        float start_curdist; // r20
        class RpGeometry * geom; // r16
        class RpCollisionData * colldata; // r2
        class RwLine line; // r29+0xD0
        class SweptSphereCollParam isData; // r29+0x108
        class RpTriangle * tri; // r19
        class RwV3d * vert; // r2
        signed int i; // r18
        class xVec3 * p0; // r2
        class xVec3 * p1; // r2
        class xVec3 * p2; // r2
        class xCollideSphereToPolygonResults tri_collide; // r29+0xB0
        class xPlane surface; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041A5F0 -> 0x0041AE1C
*/
// Range: 0x41A5F0 -> 0x41AE1C
void RpCollTreeForAllCapsuleIntsec(class RpCollTree * tree /* r2 */, class RwLine * line /* r2 */, float radius /* r29+0x260 */, signed int (* callBack)(signed int, signed int, void *) /* r21 */, void * data /* r20 */) {
    /* anonymous block */ {
        // Range: 0x41A5F0 -> 0x41AE1C
        class RpCollSectorCapsuleIt it; // r29+0x90
        float pa; // r1
        float pb; // r29+0x260
        signed int result; // r6
        float recip; // r29+0x260
        float p0; // r6
        float p1; // r3
        float recip; // r29+0x260
        float p0; // r6
        float p1; // r3
        float recip; // r29+0x260
        float p0; // r6
        float p1; // r3
        class RpCollSplit * split; // r2
        float del; // r29+0x260
        float sta; // r6
        float end; // r29+0x260
        float rec; // r4
        float rad; // r29+0x260
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041AE20 -> 0x0041B0D4
*/
// Range: 0x41AE20 -> 0x41B0D4
static signed int SweptSphereModelCB(signed int numTriangles /* r20 */, signed int triOffset /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x41AE20 -> 0x41B0D4
        class SweptSphereCollParam * isData; // r2
        class RpGeometry * geometry; // r2
        class xSweptSphere * sws; // r19
        class RwV3d * vertices; // r2
        class RpTriangle * triangles; // r2
        signed int triSlot; // r18
        unsigned short * triIndex; // r17
        class RpTriangle * tri; // r2
        class RwV3d * v0; // r21
        class RwV3d * v1; // r22
        class RwV3d * v2; // r23
        class xBox tri_box; // r29+0xD0
        class xCollideSphereToPolygonResults tri_collide; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041B0E0 -> 0x0041BA4C
*/
// Range: 0x41B0E0 -> 0x41BA4C
signed int xSweptSphereToEnv(class xSweptSphere * sws /* r20 */, class xEnv * env /* r19 */) {
    /* anonymous block */ {
        // Range: 0x41B0E0 -> 0x41BA4C
        class xCollis coll; // r29+0x1D0
        class xSphere s; // r29+0x1C0
        class RwLine line; // r29+0x1A0
        class xClumpCollV3dGradient grad; // r29+0x180
        signed int i; // r18
        float testdist; // r29+0x250
        class xSweptSphere newsws; // r29+0xB0
        float testdist; // r29+0x250
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041BA50 -> 0x0041BCEC
*/
// Range: 0x41BA50 -> 0x41BCEC
static signed int SweptSphereLeafNodeCB(class xClumpCollBSPTriangle * triangles /* r20 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x41BA50 -> 0x41BCEC
        class xSweptSphere * sws; // r19
        class xCollideSphereToPolygonResults tri_collide; // r29+0xD0
        class xPlane surface; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041BCF0 -> 0x0041BF7C
*/
// Range: 0x41BCF0 -> 0x41BF7C
void xSweptSphereGetResults(class xSweptSphere * sws /* r16 */) {
    /* anonymous block */ {
        // Range: 0x41BCF0 -> 0x41BF7C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCollideSweptSphere.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0041BF80 -> 0x0041C118
*/
// Range: 0x41BF80 -> 0x41C118
void xSweptSpherePrepare(class xSweptSphere * sws /* r16 */, class xVec3 * start /* r2 */, class xVec3 * end /* r2 */, float radius /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x41BF80 -> 0x41C118
        class xCapsule tmpC; // r29+0x20
    }
}


