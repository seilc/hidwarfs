/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3200 -> 0x003D3268
*/
// Range: 0x3D3200 -> 0x3D3268
void xFX_SceneShutdown() {
    /* anonymous block */ {
        // Range: 0x3D3200 -> 0x3D3268
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3270 -> 0x003D32A4
*/
// Range: 0x3D3270 -> 0x3D32A4
void xFX_SceneSetup() {
    /* anonymous block */ {
        // Range: 0x3D3270 -> 0x3D32A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D32B0 -> 0x003D3344
*/
// Range: 0x3D32B0 -> 0x3D3344
void xFXAuraRender() {
    /* anonymous block */ {
        // Range: 0x3D32B0 -> 0x3D3344
        signed int fogstate; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3350 -> 0x003D3358
*/
// Range: 0x3D3350 -> 0x3D3358
void xFXAuraClearCount() {
    /* anonymous block */ {
        // Range: 0x3D3350 -> 0x3D3358
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3360 -> 0x003D3504
*/
// Range: 0x3D3360 -> 0x3D3504
void xFXAuraUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3D3360 -> 0x3D3504
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3510 -> 0x003D3678
*/
// Range: 0x3D3510 -> 0x3D3678
void xFXAuraAdd(class xVec3 * pos /* r2 */, class xColor_tag * color /* r2 */, float size /* r29+0x30 */, unsigned char doTrivialCull /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D3510 -> 0x3D3678
        class xMat4x3 * camMat; // r2
        class xVec3 camToAura; // r29+0x20
        class _xFXAura * ap; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3680 -> 0x003D3A88
*/
// Range: 0x3D3680 -> 0x3D3A88
static void xFXAuraPTankRender() {
    /* anonymous block */ {
        // Range: 0x3D3680 -> 0x3D3A88
        signed int activeCount; // r20
        class RpPTankLockStruct poslock; // r29+0xE8
        class RpPTankLockStruct sizelock; // r29+0xE0
        class RpPTankLockStruct rotlock; // r29+0xD8
        class RpPTankLockStruct collock; // r29+0xD0
        unsigned int i; // r19
        class _xFXAura * ap; // r18
        class xMat4x3 * cammat; // r2
        float nearclip; // r24
        float scaleX; // r23
        float scaleY; // r22
        float rotA; // r21
        float rotB; // r20
        float width; // r29+0xF0
        float height; // r29+0xF0
        class xVec3 myat; // r29+0xC0
        float depth; // r29+0xF0
        float camdist; // r1
        float at_offset; // r29+0xF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3A90 -> 0x003D3C44
*/
// Range: 0x3D3A90 -> 0x3D3C44
static void xFXAuraPTankInit() {
    /* anonymous block */ {
        // Range: 0x3D3A90 -> 0x3D3C44
        class RpAtomic * ptank; // r16
        class RwFrame * frame; // r2
        class RwTexCoords uv[2]; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3C50 -> 0x003D3E64
*/
// Range: 0x3D3C50 -> 0x3D3E64
void render_all() {
    /* anonymous block */ {
        // Range: 0x3D3C50 -> 0x3D3E64
        class RwRaster * raster; // r21
        unsigned int blend_src; // r20
        unsigned int blend_dst; // r19
        class activity_data * * act; // r18
        class activity_data * * end_act; // r2
        class xFXRibbon * ribbon; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D3E70 -> 0x003D47F0
*/
// Range: 0x3D3E70 -> 0x3D47F0
void scene_enter() {
    /* anonymous block */ {
        // Range: 0x3D3E70 -> 0x3D47F0
        class activity_data * * act; // r17
        class activity_data * * end_act; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D47F0 -> 0x003D48B4
*/
// Range: 0x3D47F0 -> 0x3D48B4
signed int compare_ribbons(void * e1 /* r2 */, void * e2 /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D47F0 -> 0x3D48B4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D48C0 -> 0x003D4DD4
*/
// Range: 0x3D48C0 -> 0x3D4DD4
// this: r20
void xFXRibbon::render_strip(class RxObjSpace3DVertex * verts /* r19 */, class iterator first /* r29+0xA8 */, unsigned int size /* r23 */) {
    /* anonymous block */ {
        // Range: 0x3D48C0 -> 0x3D4DD4
        class RxObjSpace3DVertex * v; // r18
        class iterator it; // r29+0xF0
        class iterator last; // r29+0xE8
        class xColor_tag color; // r29+0xFC
        float width; // r29+0xF8
        float off1; // r29+0x100
        float off2; // r29+0x100
        float cx; // r29+0x100
        float cy; // r29+0x100
        float cz; // r29+0x100
        float nx; // r29+0x100
        float ny; // r29+0x100
        float nz; // r29+0x100
        class RxObjSpace3DVertex * endv; // r2
        float ulookup[2]; // r29+0xE0
        signed int back; // r7
        float u; // r29+0x100
        float du; // r2
        float u; // r29+0x100
        signed int back; // r7
        float u; // r29+0x100
        float du; // r2
        float u; // r29+0x100
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D4DE0 -> 0x003D52C8
*/
// Range: 0x3D4DE0 -> 0x3D52C8
// this: r2
void xFXRibbon::eval_joint(class joint_data & joint /* r2 */, class xColor_tag & color /* r2 */, float & width /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D4DE0 -> 0x3D52C8
        float frac; // r4
        class curve_node * curve; // r2
        class curve_node & node0; // r2
        class curve_node & node1; // r4
        float subfrac; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D52D0 -> 0x003D55D4
*/
// Range: 0x3D52D0 -> 0x3D55D4
// this: r2
void xFXRibbon::refresh_joint(class joint_data & joint /* r16 */, class iterator & it /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D52D0 -> 0x3D55D4
        class xVec3 offset; // r29+0x90
        class xVec3 dir; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D55E0 -> 0x003D57E4
*/
// Range: 0x3D55E0 -> 0x3D57E4
void get_normal(class xVec3 & norm /* r17 */, class xVec3 & dir /* r16 */, float orient /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3D55E0 -> 0x3D57E4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D57F0 -> 0x003D59F0
*/
// Range: 0x3D57F0 -> 0x3D59F0
// this: r17
void xFXRibbon::render() {
    /* anonymous block */ {
        // Range: 0x3D57F0 -> 0x3D59F0
        class RxObjSpace3DVertex * verts; // r16
        signed int it; // r11
        signed int subsize; // r2
        signed int next_it; // r21
        signed int break_it; // r10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D59F0 -> 0x003D5EB0
*/
// Range: 0x3D59F0 -> 0x3D5EB0
// this: r2
void xFXRibbon::update(float dt /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x3D59F0 -> 0x3D5EB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D5EB0 -> 0x003D6388
*/
// Range: 0x3D5EB0 -> 0x3D6388
// this: r20
void xFXRibbon::insert(class xVec3 & loc /* r19 */, class xVec3 & norm /* r18 */, float scale /* r21 */, float alpha /* r20 */, signed int flags /* r22 */) {
    /* anonymous block */ {
        // Range: 0x3D5EB0 -> 0x3D6388
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D6390 -> 0x003D6414
*/
// Range: 0x3D6390 -> 0x3D6414
// this: r2
void xFXRibbon::set_config(class config_type * cfg /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D6390 -> 0x3D6414
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D6420 -> 0x003D64C0
*/
// Range: 0x3D6420 -> 0x3D64C0
void load_default_config(class config_type & cfg /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3D6420 -> 0x3D64C0
        class curve_node default_curve[2]; // @ 0x0062BF00
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D64C0 -> 0x003D65E8
*/
// Range: 0x3D64C0 -> 0x3D65E8
// this: r2
void xFXRibbon::clear() {
    /* anonymous block */ {
        // Range: 0x3D64C0 -> 0x3D65E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D65F0 -> 0x003D6608
*/
// Range: 0x3D65F0 -> 0x3D6608
// this: r2
void xFXRibbon::create() {
    /* anonymous block */ {
        // Range: 0x3D65F0 -> 0x3D6608
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D6610 -> 0x003D6F6C
*/
// Range: 0x3D6610 -> 0x3D6F6C
void xFXShineRender() {
    /* anonymous block */ {
        // Range: 0x3D6610 -> 0x3D6F6C
        class xFXShineElem * e; // r2
        signed int shine; // r22
        signed int j; // r21
        class RxObjSpace3DVertex * vert; // r2
        class RwFrame * frame; // r2
        class xVec3 v; // r29+0x170
        class xVec3 w; // r29+0x160
        float uoff; // r22
        class xMat3x3 mat; // r29+0x110
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RxObjSpace3DVertex blah[4]; // @ 0x006D22F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D6F70 -> 0x003D73BC
*/
// Range: 0x3D6F70 -> 0x3D73BC
void xFXShineUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3D6F70 -> 0x3D73BC
        signed int i; // r21
        signed int j; // r20
        class xFXShineElem * e; // r2
        signed int done; // r6
        signed int j; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D73C0 -> 0x003D7414
*/
// Range: 0x3D73C0 -> 0x3D7414
void xFXShineInit() {
    /* anonymous block */ {
        // Range: 0x3D73C0 -> 0x3D7414
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D7420 -> 0x003D74F0
*/
// Range: 0x3D7420 -> 0x3D74F0
void xFXStreakUpdate(unsigned int id /* r2 */, class xVec3 * a /* r2 */, class xVec3 * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D7420 -> 0x3D74F0
        class xFXStreak * s; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D74F0 -> 0x003D7550
*/
// Range: 0x3D74F0 -> 0x3D7550
void xFXStreakStop(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D74F0 -> 0x3D7550
        class xFXStreak * s; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D7550 -> 0x003D76E0
*/
// Range: 0x3D7550 -> 0x3D76E0
unsigned int xFXStreakStart(float frequency /* r29+0x30 */, float alphaFadeRate /* r29+0x30 */, float alphaStart /* r29+0x30 */, unsigned int textureID /* r2 */, class xColor_tag * edge_a /* r2 */, class xColor_tag * edge_b /* r2 */, signed int taper /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3D7550 -> 0x3D76E0
        unsigned int i; // r17
        signed int j; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D76E0 -> 0x003D7C00
*/
// Range: 0x3D76E0 -> 0x3D7C00
void xFXStreakRender() {
    /* anonymous block */ {
        // Range: 0x3D76E0 -> 0x3D7C00
        class xFXStreakElem * e1; // r2
        signed int streak; // r21
        signed int count; // r20
        signed int j; // r19
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RxObjSpace3DVertex sStripVert[4]; // @ 0x006CFF70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D7C00 -> 0x003D7E20
*/
// Range: 0x3D7C00 -> 0x3D7E20
void xFXStreakUpdate(float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x3D7C00 -> 0x3D7E20
        signed int i; // r10
        signed int j; // r15
        class xFXStreakElem * e; // r2
        class xVec3 diff; // r29+0x20
        signed int done; // r15
        signed int j; // r14
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D7E20 -> 0x003D7E78
*/
// Range: 0x3D7E20 -> 0x3D7E78
void xFXStreakInit() {
    /* anonymous block */ {
        // Range: 0x3D7E20 -> 0x3D7E78
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D7E80 -> 0x003D8690
*/
// Range: 0x3D7E80 -> 0x3D8690
void xFXFireworksUpdate(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3D7E80 -> 0x3D8690
        signed int i; // r23
        class xParEmitterCustomSettings trail_info; // r29+0x240
        class zParEmitter * femit; // r16
        class xParEmitterCustomSettings xplo_info; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D8690 -> 0x003D86F0
*/
// Range: 0x3D8690 -> 0x3D86F0
void xFXFireworksLaunch(float countdownTime /* r29 */, class xVec3 * pos /* r2 */, float fuelTime /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3D8690 -> 0x3D86F0
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D86F0 -> 0x003D87B0
*/
// Range: 0x3D86F0 -> 0x3D87B0
void xFXFireworksInit(char * fireworksTrailEmitter /* r2 */, char * fireworksEmitter1 /* r19 */, char * fireworksEmitter2 /* r18 */, char * fireworksSound /* r17 */, char * fireworksLaunchSound /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3D86F0 -> 0x3D87B0
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003D87B0 -> 0x003DC3C0
*/
// Range: 0x3D87B0 -> 0x3DC3C0
void xFXRenderProximityFade(class xModelInstance & model /* r20 */, float near_dist /* r22 */, float far_dist /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3D87B0 -> 0x3DC3C0
        signed int curtriindex; // r29+0x710
        class RpGeometry * geom; // r2
        class RwRaster * raster; // r2
        class RpTriangle * tri; // r29+0x700
        class RwFrame * frame; // r2
        class RwTexCoords * uv; // r2
        signed int vert_total; // r2
        class xVec3 * vert; // r29+0x6FC
        class xVec3 * normal; // r29+0x6F8
        unsigned char * alpha; // r29+0x6F4
        float * depth; // r30
        class xMat4x3 & cm; // r20
        class xVec3 ov; // r29+0xAE0
        signed int i; // r19
        float a; // r29+0xB10
        class RxObjSpace3DVertex * out_vert; // r21
        signed int tri_total; // r2
        unsigned short * alpha_tri_index; // r29+0x6F0
        class tri_data * alpha_tri; // r29+0x6EC
        unsigned int alpha_tri_total; // r20
        class tri_data tri_buffer[2][3]; // r29+0x800
        class tri_data cur_tri; // r29+0x780
        class RpTriangle * end; // r2
        unsigned short vi[3]; // r29+0xAD8
        float d0; // r29+0xB10
        float d1; // r3
        float d2; // r2
        unsigned int flags; // r3
        signed int i; // r15
        signed int j; // r14
        unsigned int i; // r23
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DC3C0 -> 0x003DC644
*/
// Range: 0x3DC3C0 -> 0x3DC644
class RpAtomic * xFXanimUVAtomicSetup(class RpAtomic * atomic /* r20 */, unsigned char dualPass /* r22 */) {
    /* anonymous block */ {
        // Range: 0x3DC3C0 -> 0x3DC644
        class RpGeometry * geom; // r2
        signed int numMaterials; // r2
        signed int i; // r19
        class RpMaterial * material; // r2
        float rx; // r29+0x80
        float ry; // r29+0x80
        float ux; // r29+0x80
        float uy; // r29+0x80
        float py; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DC650 -> 0x003DC658
*/
// Range: 0x3DC650 -> 0x3DC658
void xFXanimUV2PSetTexture(class RwTexture * texture /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3DC650 -> 0x3DC658
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DC660 -> 0x003DC71C
*/
// Range: 0x3DC660 -> 0x3DC71C
class RpAtomic * xFXAtomicEnvMapSetup(class RpAtomic * atomic /* r17 */, unsigned int envmapID /* r2 */, float shininess /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3DC660 -> 0x3DC71C
        class RwTexture * env; // r16
        float tmp; // r20
        class RpSkin * skin; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DC720 -> 0x003DC9B4
*/
// Range: 0x3DC720 -> 0x3DC9B4
class RpAtomic * xFXBubbleRender(class RpAtomic * atomic /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3DC720 -> 0x3DC9B4
        enum RwCullMode cmode; // r29+0x6C
        class xFXBubbleParams * bp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DC9C0 -> 0x003DCA60
*/
// Range: 0x3DC9C0 -> 0x3DCA60
class RpMaterial * MaterialSetEnvMap2(class RpMaterial * material /* r17 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3DC9C0 -> 0x3DCA60
        class RwTexture * texture; // r16
        class RwFrame * frame; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DCA60 -> 0x003DCB30
*/
// Range: 0x3DCA60 -> 0x3DCB30
static class RpMaterial * MaterialSetEnvMap(class RpMaterial * material /* r17 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3DCA60 -> 0x3DCB30
        class RwTexture * texture; // r16
        class RwFrame * frame; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DCB30 -> 0x003DCB80
*/
// Range: 0x3DCB30 -> 0x3DCB80
static class RpMaterial * MaterialSetShininess(class RpMaterial * material /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3DCB30 -> 0x3DCB80
        enum RpMatFXMaterialFlags flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DCB80 -> 0x003DCBC4
*/
// Range: 0x3DCB80 -> 0x3DCBC4
class RpAtomic * AtomicDisableMatFX(class RpAtomic * atomic /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3DCB80 -> 0x3DCBC4
        class RpGeometry * geometry; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DCBD0 -> 0x003DCBFC
*/
// Range: 0x3DCBD0 -> 0x3DCBFC
static class RpMaterial * MaterialDisableMatFX(class RpMaterial * material /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3DCBD0 -> 0x3DCBFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DCC00 -> 0x003DCC78
*/
// Range: 0x3DCC00 -> 0x3DCC78
void xFXUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3DCC00 -> 0x3DCC78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DCC80 -> 0x003DCC88
*/
// Range: 0x3DCC80 -> 0x3DCC88
void xFX_SceneExit() {
    /* anonymous block */ {
        // Range: 0x3DCC80 -> 0x3DCC88
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DCC90 -> 0x003DD0B4
*/
// Range: 0x3DCC90 -> 0x3DD0B4
void xFX_SceneEnter(class RpWorld * world /* r23 */) {
    /* anonymous block */ {
        // Range: 0x3DCC90 -> 0x3DD0B4
        signed int i; // r20
        signed int num; // r2
        class xSurface * sp; // r2
        class zSurfaceProps * pp; // r2
        class zSurfMatFX * fxp; // r2
        class RpMaterial * mp; // r19
        class RwTexture * env; // r2
        class RwTexture * bump; // r17
        class RwTexture * env; // r18
        class RwTexture * bump; // r17
        class xScene * sc; // r2
        class xEnt * ent; // r19
        class RpAtomic * (* tmp)(class RpAtomic *); // r2
        unsigned int bubble; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DD0C0 -> 0x003DD134
*/
// Range: 0x3DD0C0 -> 0x3DD134
void xFXRingRender() {
    /* anonymous block */ {
        // Range: 0x3DD0C0 -> 0x3DD134
        signed int i; // r17
        class xFXRing * ring; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DD140 -> 0x003DD1E8
*/
// Range: 0x3DD140 -> 0x3DD1E8
static void xFXRingUpdate(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3DD140 -> 0x3DD1E8
        class xFXRing * ring; // r5
        signed int i; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DD1F0 -> 0x003DD334
*/
// Range: 0x3DD1F0 -> 0x3DD334
class xFXRing * xFXRingCreate(class xVec3 * pos /* r17 */, class xFXRing * params /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3DD1F0 -> 0x3DD334
        class xFXRing * ring; // r16
        signed int i; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DD340 -> 0x003DE1F4
*/
// Range: 0x3DD340 -> 0x3DE1F4
static void DrawRing(class xFXRing * m /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3DD340 -> 0x3DE1F4
        float dt; // r30
        float radius; // r29
        float height; // r28
        float tilt; // r29+0x120
        float oradius; // r27
        class xVec3 * center; // r2
        class RxObjSpace3DVertex * Im3DBuffer; // r21
        class RxObjSpace3DVertex * imv; // r2
        enum _SDRenderState old_rendState; // r30
        float oour; // r26
        signed int i; // r22
        unsigned char red; // r2
        unsigned char green; // r2
        unsigned char blue; // r2
        unsigned char alpha; // r2
        float u; // r29+0x120
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003DE200 -> 0x003DE3B4
*/
// Range: 0x3DE200 -> 0x3DE3B4
void xFXInit() {
    /* anonymous block */ {
        // Range: 0x3DE200 -> 0x3DE3B4
        class RpLight * light; // r16
        class RwFrame * frame; // r2
    }
}


