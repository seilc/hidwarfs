/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F6630 -> 0x003F6638
*/
// Range: 0x3F6630 -> 0x3F6638
void xEntStoreCheckPoint() {
    /* anonymous block */ {
        // Range: 0x3F6630 -> 0x3F6638
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F6640 -> 0x003F6688
*/
// Range: 0x3F6640 -> 0x3F6688
void xEntInitShadow(class xEnt & ent /* r2 */, class xEntShadow & shadow /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F6640 -> 0x3F6688
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F6690 -> 0x003F67B8
*/
// Range: 0x3F6690 -> 0x3F67B8
void xEntOpacityUpdate(class xEntOpacity * opacity /* r2 */, class xEnt * ent /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3F6690 -> 0x3F67B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F67C0 -> 0x003F67CC
*/
// Range: 0x3F67C0 -> 0x3F67CC
void xEntOpacityInit(class xEntOpacity * opacity /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F67C0 -> 0x3F67CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F67D0 -> 0x003F683C
*/
// Range: 0x3F67D0 -> 0x3F683C
unsigned char xEntValidType(unsigned char type /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F67D0 -> 0x3F683C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F6840 -> 0x003F684C
*/
// Range: 0x3F6840 -> 0x3F684C
class xBox * xEntGetAllEntsBox() {
    /* anonymous block */ {
        // Range: 0x3F6840 -> 0x3F684C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F6850 -> 0x003F6858
*/
// Range: 0x3F6850 -> 0x3F6858
void xEntSetNostepNormAngle(float angle /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3F6850 -> 0x3F6858
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F6860 -> 0x003F6C98
*/
// Range: 0x3F6860 -> 0x3F6C98
void xEntCollideWalls(class xEnt * p /* r17 */, class xScene * sc /* r16 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3F6860 -> 0x3F6C98
        class xCollis * coll; // r21
        class xEnt * cent; // r2
        unsigned char sidx; // r2
        unsigned char eidx; // r2
        unsigned char idx; // r20
        float sbr; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F6CA0 -> 0x003F6F1C
*/
// Range: 0x3F6CA0 -> 0x3F6F1C
void xEntCollideCeiling(class xEnt * p /* r21 */, class xScene * sc /* r22 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3F6CA0 -> 0x3F6F1C
        class xCollis * coll; // r2
        unsigned char idx; // r20
        class xCollis * ml; // r19
        class xCollis * mf; // r18
        class xEnt * fent; // r2
        float ceil_dist; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F6F20 -> 0x003F7368
*/
// Range: 0x3F6F20 -> 0x3F7368
void xEntCollideFloor(class xEnt * p /* r20 */, class xScene * sc /* r22 */, float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x3F6F20 -> 0x3F7368
        class xCollis * coll; // r2
        unsigned char idx; // r19
        class xCollis * ml; // r18
        signed int stepping; // r23
        class xCollis * mf; // r17
        class xEnt * fent; // r2
        float flr_dist; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F7370 -> 0x003F7898
*/
// Range: 0x3F7370 -> 0x3F7898
class xEnt * xEntCollCheckOneEntNoDepen(class xEnt * ent /* r18 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F7370 -> 0x3F7898
        class xEnt * p; // r17
        class xCollis * coll; // r16
        unsigned int modl_coll; // r19
        class xBound tmp; // r29+0x50
        class xBound * bptr; // r2
        unsigned char ncolls; // r4
        class xVec3 * upper; // r2
        class xVec3 * lower; // r2
        unsigned char idx; // r5
        float rsum; // r29+0xA0
        float dx; // r29+0xA0
        float dy; // r29+0xA0
        float dz; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F78A0 -> 0x003F78E8
*/
// Range: 0x3F78A0 -> 0x3F78E8
void xEntCollCheckNPCs(class xEnt * p /* r16 */, class xScene * sc /* r2 */, class xEnt * (* hitIt)(class xEnt *, class xScene *, void *) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F78A0 -> 0x3F78E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F78F0 -> 0x003F7938
*/
// Range: 0x3F78F0 -> 0x3F7938
void xEntCollCheckDyns(class xEnt * p /* r16 */, class xScene * sc /* r2 */, class xEnt * (* hitIt)(class xEnt *, class xScene *, void *) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F78F0 -> 0x3F7938
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F7940 -> 0x003F7988
*/
// Range: 0x3F7940 -> 0x3F7988
void xEntCollCheckStats(class xEnt * p /* r16 */, class xScene * sc /* r2 */, class xEnt * (* hitIt)(class xEnt *, class xScene *, void *) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F7940 -> 0x3F7988
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F7990 -> 0x003F79D4
*/
// Range: 0x3F7990 -> 0x3F79D4
void xEntCollCheckNPCsByGrid(class xEnt * p /* r16 */, class xScene * sc /* r2 */, class xEnt * (* hitIt)(class xEnt *, class xScene *, void *) /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F7990 -> 0x3F79D4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F79E0 -> 0x003F7A6C
*/
// Range: 0x3F79E0 -> 0x3F7A6C
void xEntCollCheckByGrid(class xEnt * p /* r18 */, class xScene * sc /* r17 */, class xEnt * (* hitIt)(class xEnt *, class xScene *, void *) /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F79E0 -> 0x3F7A6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F7A70 -> 0x003F8038
*/
// Range: 0x3F7A70 -> 0x3F8038
static void xEntCollCheckOneGrid(class xEnt * p /* r21 */, class xScene * sc /* r23 */, class xEnt * (* hitIt)(class xEnt *, class xScene *, void *) /* r30 */, class xGrid * grid /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3F7A70 -> 0x3F8038
        class xGridIterator it; // r29+0xC0
        class xEnt * ent; // r2
        signed int px; // r2
        signed int pz; // r2
        class xGridBound * cell; // r16
        float clcenterx; // r29+0xD0
        float clcenterz; // r1
        signed int i; // r19
        signed int _x; // r2
        signed int _z; // r2
        signed int offs[4][3][2]; // @ 0x00602830
        signed int k; // @ 0x00637F38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F8040 -> 0x003F80E4
*/
// Range: 0x3F8040 -> 0x3F80E4
void xEntCollCheckEnv(class xEnt * p /* r16 */, class xScene * sc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F8040 -> 0x3F80E4
        class xCollis * coll; // r2
        unsigned char ncolls; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F80F0 -> 0x003F811C
*/
// Range: 0x3F80F0 -> 0x3F811C
void xEntEndCollide(class xEnt * ent /* r2 */, class xScene * sc /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x3F80F0 -> 0x3F811C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F8120 -> 0x003F8258
*/
// Range: 0x3F8120 -> 0x3F8258
void xEntBeginCollide(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F8120 -> 0x3F8258
        unsigned char idx; // r8
        class xCollis * coll; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F8260 -> 0x003F85F4
*/
// Range: 0x3F8260 -> 0x3F85F4
void xEntCollide(class xEnt * ent /* r17 */, class xScene * sc /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3F8260 -> 0x3F85F4
        class xCollis * coll; // r2
        float h_dot_n; // r2
        float depen_len; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F8600 -> 0x003F889C
*/
// Range: 0x3F8600 -> 0x3F889C
void xEntApplyPhysics(class xEnt * ent /* r2 */, class xScene * sc /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x3F8600 -> 0x3F889C
        class xVec3 dposvel; // r29
        float tfric; // r29+0x10
        float tdrag; // r29+0x10
        float scaleY; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F88A0 -> 0x003F8BF8
*/
// Range: 0x3F88A0 -> 0x3F8BF8
void xEntMove(class xEnt * ent /* r17 */, class xScene * sc /* r2 */, float dt /* r29+0xC0 */) {
    /* anonymous block */ {
        // Range: 0x3F88A0 -> 0x3F8BF8
        class xVec3 dpos; // r29+0xB0
        class xMat4x3 invOldmat; // r29+0x70
        class xMat4x3 deltaMat; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F8C00 -> 0x003F8EB8
*/
// Range: 0x3F8C00 -> 0x3F8EB8
void xEntMotionToMatrix(class xEnt * ent /* r17 */, class xEntFrame * frame /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F8C00 -> 0x3F8EB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F8EC0 -> 0x003F902C
*/
// Range: 0x3F8EC0 -> 0x3F902C
void xEntDefaultTranslate(class xEnt * ent /* r17 */, class xVec3 * dpos /* r2 */, class xMat4x3 * dmat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F8EC0 -> 0x3F902C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F9030 -> 0x003F90B0
*/
// Range: 0x3F9030 -> 0x3F90B0
void xEntDefaultBoundUpdate(class xEnt * ent /* r16 */, class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F9030 -> 0x3F90B0
        class xBound * bound; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F90B0 -> 0x003F9470
*/
// Range: 0x3F90B0 -> 0x3F9470
void xEntEndUpdate(class xEnt * ent /* r19 */, class xScene * sc /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3F90B0 -> 0x3F9470
        class xVec3 * mpos; // r2
        class xVec3 * upos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F9470 -> 0x003F95A4
*/
// Range: 0x3F9470 -> 0x3F95A4
void xEntBeginUpdate(class xEnt * ent /* r16 */, float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x3F9470 -> 0x3F95A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F95B0 -> 0x003F9884
*/
// Range: 0x3F95B0 -> 0x3F9884
void xEntUpdate(class xEnt * ent /* r17 */, class xScene * sc /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3F95B0 -> 0x3F9884
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F9890 -> 0x003F99F8
*/
// Range: 0x3F9890 -> 0x3F99F8
void xEntRender(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F9890 -> 0x3F99F8
        signed int shadowOutside; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F9A00 -> 0x003F9A34
*/
// Range: 0x3F9A00 -> 0x3F9A34
void xEntRestorePipeline(class RpAtomic * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F9A00 -> 0x3F9A34
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F9A40 -> 0x003F9A74
*/
// Range: 0x3F9A40 -> 0x3F9A74
void xEntRestorePipeline(class xModelInstance * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F9A40 -> 0x3F9A74
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F9A80 -> 0x003F9C70
*/
// Range: 0x3F9A80 -> 0x3F9C70
void xEntSetupPipeline(class xSurface * surf /* r2 */, class RpAtomic * model /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3F9A80 -> 0x3F9C70
        signed int setPipeline; // r17
        class zSurfaceProps * pp; // r2
        class RwTexture * texptr; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F9C70 -> 0x003F9C7C
*/
// Range: 0x3F9C70 -> 0x3F9C7C
void xEntSetupPipeline(class xModelInstance * model /* r4 */) {
    /* anonymous block */ {
        // Range: 0x3F9C70 -> 0x3F9C7C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F9C80 -> 0x003F9D2C
*/
// Range: 0x3F9C80 -> 0x3F9D2C
class xModelInstance * xEntLoadModel(class xEnt * ent /* r18 */, class RpAtomic * imodel /* r17 */, class xModelInstance * reuse_instance /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3F9C80 -> 0x3F9D2C
        class xModelInstance * model; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003F9D30 -> 0x003FA2A8
*/
// Range: 0x3F9D30 -> 0x3FA2A8
void xEntReset(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3F9D30 -> 0x3FA2A8
        class xMat4x3 frame; // r29+0x50
        class xModelInstance * minst; // r5
        class xBox * combinedAnimBound; // r19
        unsigned short old_flags; // r2
        unsigned int receive_models[15]; // @ 0x006027F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FA2B0 -> 0x003FA344
*/
// Range: 0x3FA2B0 -> 0x3FA344
void xEntLoad(class xEnt * ent /* r16 */, class xSerial * s /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3FA2B0 -> 0x3FA344
        signed int b; // r29+0x3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FA350 -> 0x003FA3AC
*/
// Range: 0x3FA350 -> 0x3FA3AC
void xEntSave(class xEnt * ent /* r17 */, class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3FA350 -> 0x3FA3AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FA3B0 -> 0x003FA6E0
*/
// Range: 0x3FA3B0 -> 0x3FA6E0
void xEntSetup(class xEnt * ent /* r20 */) {
    /* anonymous block */ {
        // Range: 0x3FA3B0 -> 0x3FA6E0
        class xSurface * surf; // r2
        class xModelInstance * minst; // r3
        signed int i; // r19
        class xLinkAsset * la; // r2
        class xEnt * dent; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FA6E0 -> 0x003FA6EC
*/
// Range: 0x3FA6E0 -> 0x3FA6EC
static void drop_stacked_entity(class xEnt & ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3FA6E0 -> 0x3FA6EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FA6F0 -> 0x003FA768
*/
// Range: 0x3FA6F0 -> 0x3FA768
static void dismount_stacked_entity(class xEnt & ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3FA6F0 -> 0x3FA768
        class zDestructible * durst; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FA770 -> 0x003FAA38
*/
// Range: 0x3FA770 -> 0x3FAA38
static void drop_driven_stacked_entity(class xEnt & ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3FA770 -> 0x3FAA38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FAA40 -> 0x003FAA48
*/
// Range: 0x3FAA40 -> 0x3FAA48
static void stacked_owner_destroyed(void * context /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3FAA40 -> 0x3FAA48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FAA50 -> 0x003FAC48
*/
// Range: 0x3FAA50 -> 0x3FAC48
static unsigned char collide_downward(class xVec3 & loc /* r20 */, class xEnt * & hit /* r19 */, class xScene & s /* r16 */, class xEnt & ent /* r18 */, float max_dist /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3FAA50 -> 0x3FAC48
        class xRay3 ray; // r29+0xF0
        unsigned char old_bound_type; // r2
        float old_bound_radius; // r29+0x120
        class xCollis coll; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FAC50 -> 0x003FAE58
*/
// Range: 0x3FAC50 -> 0x3FAE58
void xEntInitForType(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3FAC50 -> 0x3FAE58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FAE60 -> 0x003FAEAC
*/
// Range: 0x3FAE60 -> 0x3FAEAC
void xEntGrowGlobalBoundingBox(class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3FAE60 -> 0x3FAEAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FAEB0 -> 0x003FAFD8
*/
// Range: 0x3FAEB0 -> 0x3FAFD8
void xEntInit(class xEnt * ent /* r17 */, class xEntAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3FAEB0 -> 0x3FAFD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FAFE0 -> 0x003FB130
*/
// Range: 0x3FAFE0 -> 0x3FB130
static void xEntAddHittableFlag(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3FAFE0 -> 0x3FB130
        unsigned int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FB130 -> 0x003FB138
*/
// Range: 0x3FB130 -> 0x3FB138
void xEntSceneExit() {
    /* anonymous block */ {
        // Range: 0x3FB130 -> 0x3FB138
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FB140 -> 0x003FB14C
*/
// Range: 0x3FB140 -> 0x3FB14C
void xEntSceneInit() {
    /* anonymous block */ {
        // Range: 0x3FB140 -> 0x3FB14C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xEnt.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003FB150 -> 0x003FB5BC
*/
// Range: 0x3FB150 -> 0x3FB5BC
static void reset(class xEnt & ent /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3FB150 -> 0x3FB5BC
        class xModelInstance & model; // r2
        class xMat4x3 & mat; // r2
        class anim_coll_data & ac; // r2
        class xBox & box; // r2
        class xVec3 size; // r29+0x90
        float max_size; // r2
    }
}


