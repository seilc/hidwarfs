/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static signed int reflect_alpha; // size: 0x4, address: 0x636A58
unsigned char skyTransType; // size: 0x1, address: 0x636890
__int128 * _rwDMAPktPtr; // size: 0x4, address: 0x637100
__int128 vu1DataOffset3D; // size: 0x10, address: 0x5ECFA0
__int128 vu1DataXYZShift; // size: 0x10, address: 0x5ECF90
__int128 vu1DataXYZScale; // size: 0x10, address: 0x5ECF80
__int128 xMaxYMax128; // size: 0x10, address: 0x5ECF70
signed long skyFogcol; // size: 0x4, address: 0x636818
signed long skyClamp_1; // size: 0x4, address: 0x636820
signed long skyTex1_1; // size: 0x4, address: 0x636828
signed long skyZbuf_1; // size: 0x4, address: 0x6367F8
__int128 gifTag128; // size: 0x10, address: 0x5ECE90
signed long skyPrim_State; // size: 0x4, address: 0x636840
unsigned int skyUserSwitch1; // size: 0x4, address: 0x636898
unsigned int skyUserSwitch2; // size: 0x4, address: 0x63689C
__int128 skyClipVect2; // size: 0x10, address: 0x5ECF20
__int128 skyClipVect1; // size: 0x10, address: 0x5ECF10
__int128 skyCClipVect2; // size: 0x10, address: 0x5ECF40
__int128 skyCClipVect1; // size: 0x10, address: 0x5ECF30
signed int skyTSClipperMode; // size: 0x4, address: 0x6368A0
void * skyUploadedCode; // size: 0x4, address: 0x636894
unsigned long VCL_HIWaterTilePER; // size: 0x4, address: 0x51FF50
class RwRaster * skyTextureRaster; // size: 0x4, address: 0x6371A0
signed long skyTest_1; // size: 0x4, address: 0x636808
signed int skyRasterExt; // size: 0x4, address: 0x637198
signed int skyAlphaTex; // size: 0x4, address: 0x6371A4
// total size: 0x34
class RwRaster {
    // Members
public:
    class RwRaster * parent; // offset 0x0, size 0x4
    unsigned char * cpPixels; // offset 0x4, size 0x4
    unsigned char * palette; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
    signed int height; // offset 0x10, size 0x4
    signed int depth; // offset 0x14, size 0x4
    signed int stride; // offset 0x18, size 0x4
    signed short nOffsetX; // offset 0x1C, size 0x2
    signed short nOffsetY; // offset 0x1E, size 0x2
    unsigned char cType; // offset 0x20, size 0x1
    unsigned char cFlags; // offset 0x21, size 0x1
    unsigned char privateFlags; // offset 0x22, size 0x1
    unsigned char cFormat; // offset 0x23, size 0x1
    unsigned char * originalPixels; // offset 0x24, size 0x4
    signed int originalWidth; // offset 0x28, size 0x4
    signed int originalHeight; // offset 0x2C, size 0x4
    signed int originalStride; // offset 0x30, size 0x4
};
// total size: 0x10
class quadword_data {
    // Members
public:
    union { // inferred
        float f32[4]; // offset 0x0, size 0x10
        signed int i32[4]; // offset 0x0, size 0x10
        unsigned long u64[2]; // offset 0x0, size 0x8
        __int128 u128; // offset 0x0, size 0x10
    };
};
// total size: 0x40
class RwMatrixTag {
    // Members
public:
    class RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x10
class iWaterTile {
    // Members
public:
    float x; // offset 0x0, size 0x4
    signed int flags; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    signed int width; // offset 0xC, size 0x4
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
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B1240 -> 0x002B13F0
*/
// Range: 0x2B1240 -> 0x2B13F0
void rwPDS_VCL_HIWaterTile_RenderTiles(class RwMatrixTag & view_mat /* r4 */, class RwMatrixTag & shade_cam_mat /* r19 */, class RwMatrixTag & shade_view_mat /* r18 */, class iWaterTile * tiles /* r17 */, signed int tiles_size /* r16 */, float y /* r29+0x140 */, float dxz /* r22 */, float lod_blend_dist_min /* r21 */, float lod_blend_dist_max /* r20 */, signed int min_alpha_write /* r22 */, class RwRaster * raster_refract /* r23 */, class RwRaster * raster_reflect /* r30 */) {
    /* anonymous block */ {
        // Range: 0x2B1240 -> 0x2B13F0
        class RwV3d loc; // r29+0x130
        class RwMatrixTag screen_mat; // r29+0xF0
        class RwMatrixTag trans_mat; // r29+0xB0
        unsigned char transType; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B13F0 -> 0x002B1554
*/
// Range: 0x2B13F0 -> 0x2B1554
static signed int myopenVU1SetupPktNew(class RwMatrixTag * matrix /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2B13F0 -> 0x2B1554
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
        unsigned int * matVector; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B1560 -> 0x002B1788
*/
// Range: 0x2B1560 -> 0x2B1788
static signed int myRpPDS_G3_DupUva_PS2AllMatBridgeCallBack(class RwRaster * raster_refract /* r2 */, class RwRaster * raster_reflect /* r2 */, unsigned char transType /* r18 */, signed int min_alpha_write /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2B1560 -> 0x2B1788
        unsigned long clamp_2; // r29+0x68
        unsigned long fogcol_2; // r2
        unsigned long tex1_2; // r29+0x60
        unsigned long zbuf_2; // r2
        unsigned long rastex1; // r29+0x58
        unsigned long rastex2; // r29+0x50
        unsigned long tmp; // r5
        unsigned long tmp1; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B1790 -> 0x002B1834
*/
// Range: 0x2B1790 -> 0x2B1834
static void myRpMeshPS2AllGIFTagUpload() {
    /* anonymous block */ {
        // Range: 0x2B1790 -> 0x2B1834
        unsigned long __tmp1; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B1840 -> 0x002B1908
*/
// Range: 0x2B1840 -> 0x2B1908
static void myRpMeshPS2AllClipInfoUpload(unsigned char transType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2B1840 -> 0x2B1908
        __int128 * _rwDMAPktPtr'73; // r4
        unsigned long __tmp1; // r2
        unsigned int __skySwitchFlag; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B1910 -> 0x002B198C
*/
// Range: 0x2B1910 -> 0x2B198C
static void myRpMeshPS2AllTextureStateUpload() {
    /* anonymous block */ {
        // Range: 0x2B1910 -> 0x2B198C
        unsigned long __tmp; // r2
        unsigned long __tmp1; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B1990 -> 0x002B19F0
*/
// Range: 0x2B1990 -> 0x2B19F0
static void myRpMeshPS2AllVU1CodeUpload() {
    /* anonymous block */ {
        // Range: 0x2B1990 -> 0x2B19F0
        void * _kohd; // r2
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B19F0 -> 0x002B1C38
*/
// Range: 0x2B19F0 -> 0x2B1C38
static void my_rpMatFXSkyUploadTextures(class RwRaster * raster_1 /* r20 */, class RwRaster * raster_2 /* r19 */, unsigned long & _tex0_1 /* r18 */, unsigned long & _tex0_2 /* r17 */, signed long & _tex1_1 /* r16 */, unsigned long & _tex1_2 /* r21 */, signed long & _clamp_1 /* r22 */, unsigned long & _clamp_2 /* r23 */) {
    /* anonymous block */ {
        // Range: 0x2B19F0 -> 0x2B1C38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B1C40 -> 0x002B1CC8
*/
// Range: 0x2B1C40 -> 0x2B1CC8
static void my_rpMatFXSkySetDefaultBlendModes() {
    /* anonymous block */ {
        // Range: 0x2B1C40 -> 0x2B1CC8
        unsigned long tmp; // r2
        unsigned long tmp1; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B1CD0 -> 0x002B1F64
*/
// Range: 0x2B1CD0 -> 0x2B1F64
void rwPDS_VCL_HIWaterTile_SetupShading(float color_mul_red /* r26 */, float color_mul_green /* r25 */, float color_mul_blue /* r24 */, class RwV3d & light_dir /* r16 */, float light_ambient /* r23 */, float light_diffuse /* r22 */, float light_transmissive /* r21 */, float reflectance_min /* r20 */, float reflect_intensity /* r29+0x70 */, float reflect_magnitude /* r29+0x70 */, float refract_min /* r29+0x78 */) {
    /* anonymous block */ {
        // Range: 0x2B1CD0 -> 0x2B1F64
        class quadword_data qdata; // r29+0x60
        float fresnel_scale; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B1F70 -> 0x002B21B4
*/
// Range: 0x2B1F70 -> 0x2B21B4
static signed int RpPDS_HIWaterTile_PS2AllMatBridgeCallBack(class RwV3d & loc /* r20 */, class RwRaster * raster_refract /* r19 */, class RwRaster * raster_reflect /* r18 */, unsigned char transType /* r17 */, class RwMatrixTag & shade_cam_mat /* r16 */, class RwMatrixTag & shade_view_mat /* r2 */, signed int batch_length /* r21 */, float dxz /* r23 */, float lod_blend_dist_min /* r22 */, float lod_blend_dist_max /* r21 */, signed int min_alpha_write /* r22 */) {
    /* anonymous block */ {
        // Range: 0x2B1F70 -> 0x2B21B4
        class quadword_data qdata; // r29+0x120
        class RwMatrixTag mat; // r29+0xE0
        class RwMatrixTag water_mat; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B21C0 -> 0x002B2278
*/
// Range: 0x2B21C0 -> 0x2B2278
static void upload_tiles(class iWaterTile * tiles /* r17 */, signed int tiles_size /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2B21C0 -> 0x2B2278
        class quadword_data qdata; // r29+0x30
        __int128 * _rwDMA_local_rwDMAPktPtr; // r6
        __int128 * data; // r2
        __int128 * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\p2\hiwater_tile\VCL_HIWaterTile_Node.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002B2280 -> 0x002B24D8
*/
// Range: 0x2B2280 -> 0x2B24D8
void rwPDS_VCL_HIWaterTile_UploadMesh(float * Ay /* r20 */, float * By /* r19 */, float * Nx /* r18 */, float * Ny /* r17 */, float * Nz /* r16 */, signed int subdiv_level /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2B2280 -> 0x2B24D8
        signed int qstride; // r2
        class quadword_data qdata; // r29+0x70
        __int128 * _rwDMA_local_rwDMAPktPtr; // r5
        __int128 * data; // r2
        __int128 * end; // r2
    }
}


