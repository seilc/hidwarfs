/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A6460 -> 0x004A67A0
*/
// Range: 0x4A6460 -> 0x4A67A0
void iParMgrRenderParSys_Flat(void * data /* r2 */, class xParGroup * ps /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4A6460 -> 0x4A67A0
        class xPar * idx; // r16
        class RwTexture * texture; // r2
        class RwRaster * raster; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A67A0 -> 0x004A73E4
*/
// Range: 0x4A67A0 -> 0x4A73E4
void iParMgrRenderParSys_Ground(void * data /* r2 */, class xParGroup * ps /* r29+0xFC */) {
    /* anonymous block */ {
        // Range: 0x4A67A0 -> 0x4A73E4
        class xPar * idx; // r21
        class zParSys * s; // r2
        class RwTexture * texture; // r2
        class RwRaster * raster; // r2
        class xParCmdTex * tex; // r2
        class xPar * p; // r2
        void * vertices; // r20
        unsigned short * indices; // r19
        signed int vertexCount; // r2
        signed int indexCount; // r2
        float size; // r3
        class xVec3 vert[4]; // r29+0x130
        unsigned char r; // r2
        unsigned char g; // r2
        unsigned char b; // r2
        unsigned char a; // r2
        class xMat3x3 groundmat; // r29+0x100
        float angx; // r4
        float angy; // r2
        float angz; // r1
        class xVec3 zdir; // r29+0x1C0
        class xVec3 xdir; // r29+0x1B0
        class xVec3 centre; // r29+0x1A0
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwV3d _packed; // r29+0x190
        class RwV3d _packed; // r29+0x180
        class RwV3d _packed; // r29+0x170
        class RwV3d _packed; // r29+0x160
        float u1; // r2
        float u2; // r29+0x1D0
        float v1; // r29+0x1D0
        float v2; // r29+0x1D0
        unsigned short * src; // r2
        unsigned short * dst; // r4
        signed int i; // r3
        class RxObjSpace3DVertex v3d[4]; // @ 0x007BFC70
        unsigned short i3d[6]; // @ 0x00605750
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A73F0 -> 0x004A73F8
*/
// Range: 0x4A73F0 -> 0x4A73F8
void iParMgrRenderParSys_Static() {
    /* anonymous block */ {
        // Range: 0x4A73F0 -> 0x4A73F8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A7400 -> 0x004A7760
*/
// Range: 0x4A7400 -> 0x4A7760
void iParMgrRenderParSys_QuadStreak(void * data /* r2 */, class xParGroup * ps /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4A7400 -> 0x4A7760
        class xPar * idx; // r16
        class RwTexture * texture; // r2
        class RwRaster * raster; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A7760 -> 0x004A7C90
*/
// Range: 0x4A7760 -> 0x4A7C90
void iParMgrRenderParSys_InvStreak(void * data /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A7760 -> 0x4A7C90
        unsigned int transformFlags; // r2
        class xPar * idx; // r16
        class zParSys * s; // r2
        class RwTexture * texture; // r2
        class RwRaster * raster; // r2
        class RxObjSpace3DVertex * v3d; // r7
        signed int vertexCount; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A7C90 -> 0x004A81C0
*/
// Range: 0x4A7C90 -> 0x4A81C0
void iParMgrRenderParSys_Streak(void * data /* r2 */, class xParGroup * ps /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4A7C90 -> 0x4A81C0
        unsigned int transformFlags; // r2
        class xPar * idx; // r16
        class zParSys * s; // r2
        class RwTexture * texture; // r2
        class RwRaster * raster; // r2
        class RxObjSpace3DVertex * v3d; // r7
        signed int vertexCount; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A81C0 -> 0x004A8720
*/
// Range: 0x4A81C0 -> 0x4A8720
static void iRenderPushFlat(class xPar * p /* r21 */, class xParCmdTex * tex /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4A81C0 -> 0x4A8720
        void * vertices; // r23
        unsigned short * indices; // r2
        unsigned char r; // r2
        unsigned char g; // r2
        unsigned char b; // r2
        unsigned char a; // r2
        float size; // r20
        class xMat3x3 groundmat; // r29+0xA0
        float yaw; // r29+0xD0
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        float u1; // r2
        float u2; // r29+0xD0
        float v1; // r29+0xD0
        float v2; // r29+0xD0
        unsigned short * dst; // r2
        class RxObjSpace3DVertex v3d[4]; // @ 0x007BFBE0
        unsigned short i3d[6]; // @ 0x00605740
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A8720 -> 0x004A8C30
*/
// Range: 0x4A8720 -> 0x4A8C30
void iRenderPushQuadStreak(class xPar * p /* r18 */, class xParCmdTex * tex /* r17 */) {
    /* anonymous block */ {
        // Range: 0x4A8720 -> 0x4A8C30
        void * vertices; // r23
        unsigned short * indices; // r2
        unsigned char r; // r2
        unsigned char g; // r2
        unsigned char b; // r2
        unsigned char a; // r2
        float size; // r29+0x90
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        float u1; // r2
        float u2; // r29+0x90
        float v1; // r29+0x90
        float v2; // r29+0x90
        unsigned short * dst; // r2
        class RxObjSpace3DVertex v3d[4]; // @ 0x007BFB50
        unsigned short i3d[6]; // @ 0x00605730
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A8C30 -> 0x004A9634
*/
// Range: 0x4A8C30 -> 0x4A9634
void iParMgrRenderParSys_Sprite(void * data /* r17 */, class xParGroup * ps /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4A8C30 -> 0x4A9634
        class xPar * idx; // r21
        class zParSys * s; // r2
        class RwTexture * texture; // r2
        class RwRaster * raster; // r2
        signed int indexCount; // r20
        signed int vertexCount; // r3
        unsigned short * i3d; // r19
        class RxObjSpace3DVertex * v3d; // r18
        class xParCmdTex * tex; // r2
        unsigned int pivot; // r2
        class xVec3 offset; // r29+0x160
        class xVec3 temp_offset; // r29+0x150
        class xPar * p; // r17
        float u1; // r8
        float u2; // r29+0x170
        float v1; // r29+0x170
        float v2; // r29+0x170
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A9640 -> 0x004A9648
*/
// Range: 0x4A9640 -> 0x4A9648
void iParMgrRender() {
    /* anonymous block */ {
        // Range: 0x4A9640 -> 0x4A9648
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A9650 -> 0x004A9658
*/
// Range: 0x4A9650 -> 0x4A9658
void iParMgrUpdate() {
    /* anonymous block */ {
        // Range: 0x4A9650 -> 0x4A9658
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\iParMgr.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004A9660 -> 0x004A9748
*/
// Range: 0x4A9660 -> 0x4A9748
void iParMgrInit() {
    /* anonymous block */ {
        // Range: 0x4A9660 -> 0x4A9748
        signed int i; // r11
    }
}


