/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D64E0 -> 0x002D6644
*/
// Range: 0x2D64E0 -> 0x2D6644
void zFX_SpawnBubblesOnSphere(signed int numBubbles /* r21 */, class xSphere * genSphere /* r20 */, float velocity /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2D64E0 -> 0x2D6644
        class xVec3 * posbuf; // r19
        class xVec3 * velbuf; // r18
        class xVec3 * pp; // r17
        class xVec3 * vp; // r16
        float velocityScale; // r20
        signed int j; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6650 -> 0x002D68F0
*/
// Range: 0x2D6650 -> 0x2D68F0
static void setup_entrails(class zScene & s /* r30 */) {
    /* anonymous block */ {
        // Range: 0x2D6650 -> 0x2D68F0
        unsigned int entrails_size'137; // r4
        unsigned int hash[7]; // r29+0xE0
        unsigned int hash_dff[7]; // r29+0xC0
        unsigned int hash_minf[7]; // r29+0xA0
        unsigned int i; // r20
        class xBase * * it; // r3
        class xBase * * end; // r2
        class xEnt * ent; // r2
        unsigned int model; // r2
        unsigned int i; // r11
        unsigned int index; // r16
        class xBase * * it; // r11
        class xBase * * end; // r2
        class xEnt * ent; // r2
        unsigned int model; // r2
        unsigned int i; // r10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D68F0 -> 0x002D69B4
*/
// Range: 0x2D68F0 -> 0x2D69B4
void zFXPopOnOffAtomic(class xModelInstance * model /* r17 */, float rate /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2D68F0 -> 0x2D69B4
        class xModelInstance * nextModel; // r2
        class xEnt dummyEnt; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D69C0 -> 0x002D6AEC
*/
// Range: 0x2D69C0 -> 0x2D6AEC
void zFXBubbleSpawnStop(class xEnt & ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D69C0 -> 0x2D6AEC
        class popper_data * pPopper; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6AF0 -> 0x002D6DE8
*/
// Range: 0x2D6AF0 -> 0x2D6DE8
void zFXBubbleSpawnStart(class xEnt & ent /* r17 */, float rate /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2D6AF0 -> 0x2D6DE8
        class xSphere o; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D6DF0 -> 0x002D720C
*/
// Range: 0x2D6DF0 -> 0x2D720C
void zFXPopOff(class xEnt & ent /* r17 */, float rate /* r21 */, float time /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2D6DF0 -> 0x2D720C
        class xSphere o; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7210 -> 0x002D762C
*/
// Range: 0x2D7210 -> 0x2D762C
void zFXPopOn(class xEnt & ent /* r17 */, float rate /* r21 */, float time /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2D7210 -> 0x2D762C
        class xSphere o; // r29+0x40
        class xVec3 tiny; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7630 -> 0x002D794C
*/
// Range: 0x2D7630 -> 0x2D794C
static void update_popper(class popper_data & popper /* r16 */, float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x2D7630 -> 0x2D794C
        float rate; // r22
        float scale; // r29+0x70
        float vel_add; // r21
        float area; // r20
        float s; // r29+0x70
        float ss; // r3
        class xVec3 model_scale; // r29+0x60
        signed int emit; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7950 -> 0x002D7F00
*/
// Range: 0x2D7950 -> 0x2D7F00
static void emit_popper_bubbles(class popper_data & popper /* r21 */, signed int emit /* r20 */, float scale /* r23 */, float vel_add /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2D7950 -> 0x2D7F00
        signed int max_emit; // r2
        class xVec3 * buffer; // r22
        class xVec3 * loc; // r19
        class xVec3 * end_loc; // r2
        class xVec3 * vel; // r18
        class xModelInstance * model; // r2
        class xMat3x3 oldmat; // r29+0x90
        class xMat3x3 & mat; // r2
        float svel; // r22
        float rloc; // r21
        float rvel; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D7F00 -> 0x002D8254
*/
// Range: 0x2D7F00 -> 0x2D8254
static void random_surface_point(class xVec3 & loc /* r19 */, class xVec3 & norm /* r18 */, class popper_data & popper /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2D7F00 -> 0x2D8254
        class xMat4x3 * mat; // r16
        signed int which; // r6
        class RpGeometry * geom; // r2
        class RpAtomic * * atomic; // r5
        class RpAtomic * * end; // r2
        signed int size; // r2
        class xVec3 v[3]; // r29+0x90
        class xVec3 n[3]; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8260 -> 0x002D8C6C
*/
// Range: 0x2D8260 -> 0x2D8C6C
static void eval_tri(class xVec3 * vert /* r29+0x170 */, class xVec3 * norm /* r29+0x160 */, class xMat4x3 * mat /* r29+0x150 */, class RpGeometry * geom /* r16 */, class RpTriangle * tri /* r29+0x140 */) {
    /* anonymous block */ {
        // Range: 0x2D8260 -> 0x2D8C6C
        class RpSkin * skin; // r16
        class RpMorphTarget * mt; // r2
        class xVec3 * in_vert; // r2
        class xVec3 * in_norm; // r2
        class xMat4x3 * skinmat; // r2
        float * vert_bone_weight; // r2
        unsigned int * vert_bone_index; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8C70 -> 0x002D8F18
*/
// Range: 0x2D8C70 -> 0x2D8F18
static unsigned char setup_popper_emitter(class popper_data & popper /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2D8C70 -> 0x2D8F18
        float * weight; // r14
        class xModelInstance * model; // r13
        class RpGeometry * geom; // r2
        class xVec3 * vert; // r2
        class RpTriangle * tri; // r12
        float * end; // r2
        class xVec3 & a; // r2
        class xVec3 & b; // r2
        class xVec3 & c; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D8F20 -> 0x002D93BC
*/
// Range: 0x2D8F20 -> 0x2D93BC
void zFX_SpawnBubbleBlast(class xVec3 * pos /* r21 */, unsigned int num /* r29+0xDC */, float radius /* r23 */, float blast_vel /* r22 */, float rand_vel /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2D8F20 -> 0x2D93BC
        class xVec3 * buffer; // r29+0xC0
        class xVec3 * itl; // r20
        class xVec3 * itv; // r19
        class xVec3 * end; // r2
        float ang; // r20
        float uz; // r25
        class xVec3 rvel; // r29+0x140
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D93C0 -> 0x002D9770
*/
// Range: 0x2D93C0 -> 0x2D9770
void zFX_SpawnBubbleRing(class xVec3 * pos /* r21 */, unsigned int num /* r20 */, float rang /* r28 */, float bvel /* r27 */, float rvel /* r26 */, class xVec3 * norm /* r23 */) {
    /* anonymous block */ {
        // Range: 0x2D93C0 -> 0x2D9770
        class xVec3 * posbuf; // r19
        class xVec3 * velbuf; // r22
        class xVec3 * pp; // r18
        class xVec3 * vp; // r17
        unsigned int j; // r16
        float ang; // r25
        class xMat3x3 upMat; // r29+0xF0
        class xMat3x3 normMat; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9770 -> 0x002D9AD8
*/
// Range: 0x2D9770 -> 0x2D9AD8
void zFX_SpawnBubbleSlam(class xVec3 * pos /* r21 */, unsigned int num /* r20 */, float rang /* r24 */, float bvel /* r23 */, float rvel /* r22 */) {
    /* anonymous block */ {
        // Range: 0x2D9770 -> 0x2D9AD8
        class xVec3 * posbuf; // r19
        class xVec3 * velbuf; // r22
        class xVec3 * pp; // r18
        class xVec3 * vp; // r17
        unsigned int j; // r16
        float ang; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9AE0 -> 0x002D9F70
*/
// Range: 0x2D9AE0 -> 0x2D9F70
void zFX_SpawnBubbleWall() {
    /* anonymous block */ {
        // Range: 0x2D9AE0 -> 0x2D9F70
        class RwCamera * camera; // r2
        class RwMatrixTag * mat; // r20
        class xVec3 * posbuf; // r23
        class xVec3 * velbuf; // r30
        class xVec3 * pp; // r19
        class xVec3 * vp; // r18
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002D9F70 -> 0x002DA2C4
*/
// Range: 0x2D9F70 -> 0x2DA2C4
void zFX_SpawnBubbleMenuTrail(class xVec3 * pos /* r21 */, unsigned int num /* r22 */, class xVec3 * pos_rnd /* r20 */, class xVec3 * vel_rnd /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2D9F70 -> 0x2DA2C4
        class xVec3 * posbuf; // r23
        class xVec3 * velbuf; // r30
        class xVec3 * pp; // r18
        class xVec3 * vp; // r17
        signed int j; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA2D0 -> 0x002DA928
*/
// Range: 0x2DA2D0 -> 0x2DA928
void zFX_SpawnBubbleTrail(class xVec3 * p1 /* r21 */, class xVec3 * p2 /* r16 */, class xVec3 * vel1 /* r20 */, class xVec3 * vel2 /* r30 */, unsigned int num /* r23 */, class xVec3 * pos_rnd /* r19 */, class xVec3 * vel_rnd /* r18 */, float scale /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DA2D0 -> 0x2DA928
        class xVec3 * posbuf; // r29+0xC0
        class xVec3 * velbuf; // r29+0xB0
        class xVec3 offset; // r29+0x1A0
        class xVec3 vel_offset; // r29+0x190
        class xVec3 * pp; // r17
        class xVec3 * vp; // r16
        signed int j; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DA930 -> 0x002DAE04
*/
// Range: 0x2DA930 -> 0x2DAE04
void zFX_SpawnBubbleTrail(class xVec3 * p1 /* r21 */, class xVec3 * p2 /* r16 */, unsigned int num /* r22 */, class xVec3 * pos_rnd /* r20 */, class xVec3 * vel_rnd /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2DA930 -> 0x2DAE04
        class xVec3 * posbuf; // r29+0xB0
        class xVec3 * velbuf; // r29+0xA0
        class xVec3 offset; // r29+0x120
        class xVec3 * pp; // r18
        class xVec3 * vp; // r17
        signed int j; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DAE10 -> 0x002DB174
*/
// Range: 0x2DAE10 -> 0x2DB174
void zFX_SpawnBubbleTrail(class xVec3 * pos /* r21 */, unsigned int num /* r22 */, class xVec3 * pos_rnd /* r20 */, class xVec3 * vel_rnd /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2DAE10 -> 0x2DB174
        class xVec3 * posbuf; // r23
        class xVec3 * velbuf; // r30
        class xVec3 * pp; // r18
        class xVec3 * vp; // r17
        signed int j; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB180 -> 0x002DB194
*/
// Range: 0x2DB180 -> 0x2DB194
void zFX_SpawnBubbleTrail(class xVec3 * pos /* r2 */, unsigned int num /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DB180 -> 0x2DB194
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB1A0 -> 0x002DB664
*/
// Range: 0x2DB1A0 -> 0x2DB664
void zFX_SpawnBubbleHit(class xVec3 * pos /* r21 */, unsigned int num /* r22 */, class xVec3 * pos_rnd /* r20 */, class xVec3 * vel_rnd /* r19 */, float vel_scale /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DB1A0 -> 0x2DB664
        class xVec3 * posbuf; // r23
        class xVec3 * velbuf; // r30
        class xVec3 * pp; // r18
        class xVec3 * vp; // r17
        signed int j; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB670 -> 0x002DB688
*/
// Range: 0x2DB670 -> 0x2DB688
void zFX_SpawnBubbleHit(class xVec3 * pos /* r2 */, unsigned int num /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DB670 -> 0x2DB688
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB690 -> 0x002DB738
*/
// Range: 0x2DB690 -> 0x2DB738
void zFXGooEventMelt(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DB690 -> 0x2DB738
        signed int i; // r9
        class zFXGooInstance * goo; // r8
        signed int freezeGroup; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB740 -> 0x002DB7E8
*/
// Range: 0x2DB740 -> 0x2DB7E8
void zFXGooEventSetFreezeDuration(class xEnt * ent /* r2 */, float duration /* r29 */) {
    /* anonymous block */ {
        // Range: 0x2DB740 -> 0x2DB7E8
        signed int i; // r9
        class zFXGooInstance * goo; // r8
        signed int freezeGroup; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB7F0 -> 0x002DB874
*/
// Range: 0x2DB7F0 -> 0x2DB874
void zFXGooEventSetWarb(class xEnt * ent /* r2 */, float * warb /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DB7F0 -> 0x2DB874
        signed int i; // r8
        class zFXGooInstance * goo; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB880 -> 0x002DB988
*/
// Range: 0x2DB880 -> 0x2DB988
signed int zFXGooIs(class xEnt * obj /* r2 */, float & depth /* r2 */, unsigned int playerCheck /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DB880 -> 0x2DB988
        signed int i; // r9
        class zFXGooInstance * goo; // r8
        class xVec3 * pos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DB990 -> 0x002DBC04
*/
// Range: 0x2DB990 -> 0x2DBC04
void zFXGooFreeze(class RpAtomic * atomic /* r2 */, class xVec3 * center /* r20 */, class xVec3 * ref_parPosVec /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2DB990 -> 0x2DBC04
        signed int i; // r6
        class zFXGooInstance * goo; // r5
        signed int freezeGroup; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DBC10 -> 0x002DC0E4
*/
// Range: 0x2DBC10 -> 0x2DC0E4
void zFXUpdate(float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x2DBC10 -> 0x2DC0E4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DC0F0 -> 0x002DC1B8
*/
// Range: 0x2DC0F0 -> 0x2DC1B8
class RpAtomic * zFXGooRenderAtomic(class RpAtomic * atomic /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2DC0F0 -> 0x2DC1B8
        signed int i; // r4
        class zFXGooInstance * goo; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DC1C0 -> 0x002DC780
*/
// Range: 0x2DC1C0 -> 0x2DC780
void zFXGooUpdateInstance(class zFXGooInstance * goo /* r20 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2DC1C0 -> 0x2DC780
        enum zFXGooState old_state; // r2
        signed int s; // r2
        char counter_text[6]; // @ 0x00636A78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DC780 -> 0x002DC918
*/
// Range: 0x2DC780 -> 0x2DC918
void zFXGooEnable(class xModelInstance * gooModel /* r19 */, signed int freezeGroup /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DC780 -> 0x2DC918
        signed int i; // r6
        class RpAtomic * atomic; // r2
        class zFXGooInstance * goo; // r18
        signed int numverts; // r2
        class xVec3 * orig_verts; // r2
        class RwRGBA * orig_colors; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DC920 -> 0x002DC974
*/
// Range: 0x2DC920 -> 0x2DC974
float zFXGooGetIceAlpha(class xSurface * surf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DC920 -> 0x2DC974
        class zFXGooInstance * goo; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DC980 -> 0x002DC9E4
*/
// Range: 0x2DC980 -> 0x2DC9E4
void zFXGooAssocWithEnt(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DC980 -> 0x2DC9E4
        class RpAtomic * atomic; // r2
        class zFXGooInstance * goo; // r7
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DC9F0 -> 0x002DCA60
*/
// Range: 0x2DC9F0 -> 0x2DCA60
class zFXGooInstance * FindGooForSurface(class xSurface * surf /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DC9F0 -> 0x2DCA60
        signed int i; // r5
        class xEnt * ent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DCA60 -> 0x002DCAAC
*/
// Range: 0x2DCA60 -> 0x2DCAAC
void zFXPatrickStun(class xVec3 * pos /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2DCA60 -> 0x2DCAAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DCAB0 -> 0x002DCB70
*/
// Range: 0x2DCAB0 -> 0x2DCB70
void zFX_SceneReset() {
    /* anonymous block */ {
        // Range: 0x2DCAB0 -> 0x2DCB70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DCB70 -> 0x002DCC74
*/
// Range: 0x2DCB70 -> 0x2DCC74
void zFX_SceneExit(class RpWorld * world /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2DCB70 -> 0x2DCC74
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DCC80 -> 0x002DCD1C
*/
// Range: 0x2DCC80 -> 0x2DCD1C
void zFX_GameInit() {
    /* anonymous block */ {
        // Range: 0x2DCC80 -> 0x2DCD1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zFX.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002DCD20 -> 0x002DCD28
*/
// Range: 0x2DCD20 -> 0x2DCD28
static void on_spawn_bubble_wall() {
    /* anonymous block */ {
        // Range: 0x2DCD20 -> 0x2DCD28
    }
}


