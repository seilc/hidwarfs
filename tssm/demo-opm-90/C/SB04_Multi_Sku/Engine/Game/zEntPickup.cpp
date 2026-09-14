/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00351CC0 -> 0x00351EEC
*/
// Range: 0x351CC0 -> 0x351EEC
void GGRibbonLoop(class zEntPickup * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x351CC0 -> 0x351EEC
        class RibData * ribhelp; // r2
        class xVec3 pos1; // r29+0x50
        class xVec3 pos2; // r29+0x40
        class xMat4x3 * mat_root; // r2
        class xVec3 dir_emit; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00351EF0 -> 0x00351F68
*/
// Range: 0x351EF0 -> 0x351F68
void zEntPickup_SceneUpdate(float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x351EF0 -> 0x351F68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00351F70 -> 0x003528CC
*/
// Range: 0x351F70 -> 0x3528CC
void zEntPickup_RenderList(class zEntPickup * plist /* r16 */, unsigned int pcount /* r22 */) {
    /* anonymous block */ {
        // Range: 0x351F70 -> 0x3528CC
        unsigned int i; // r21
        class RpAtomic * imodel; // r2
        class xVec3 * campos; // r2
        float dist2; // r31
        signed int shadowResult; // r29+0x16C
        class xVec3 shadVec; // r29+0x160
        class xSphere bound; // r29+0x110
        float auraRadius; // r29+0x170
        float prescale; // r29+0x170
        class xModelInstance * minst; // r20
        signed int alpha; // r3
        float radius; // r1
        class xVec3 currOffset; // r29+0x150
        class xVec3 pos; // r29+0x140
        class xVec3 currOffset; // r29+0x130
        float ang; // r31
        class xVec3 pos; // r29+0x120
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003528D0 -> 0x00352BA8
*/
// Range: 0x3528D0 -> 0x352BA8
void zEntPickup_Drop(class zEntPickup * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3528D0 -> 0x352BA8
        float c; // r29+0x40
        float sol[2]; // r29+0x38
        unsigned int solcnt; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00352BB0 -> 0x00353054
*/
// Range: 0x352BB0 -> 0x353054
void zEntPickup_Load(class zEntPickup * ent /* r17 */, class xSerial * s /* r18 */) {
    /* anonymous block */ {
        // Range: 0x352BB0 -> 0x353054
        signed int is_a_dropper; // r16
        unsigned int temp; // r29+0x7C
        unsigned int temp2; // r29+0x78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00353060 -> 0x003530CC
*/
// Range: 0x353060 -> 0x3530CC
void zEntPickup_Save(class zEntPickup * ent /* r17 */, class xSerial * s /* r16 */) {
    /* anonymous block */ {
        // Range: 0x353060 -> 0x3530CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003530D0 -> 0x0035321C
*/
// Range: 0x3530D0 -> 0x35321C
void zEntPickup_Reset(class zEntPickup * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3530D0 -> 0x35321C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00353220 -> 0x003532DC
*/
// Range: 0x353220 -> 0x3532DC
void zEntPickup_UpdateAll(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x353220 -> 0x3532DC
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003532E0 -> 0x003533E8
*/
// Range: 0x3532E0 -> 0x3533E8
void zEntPickup_UpdateReset() {
    /* anonymous block */ {
        // Range: 0x3532E0 -> 0x3533E8
        unsigned int sPickupUpdateCount'73; // r5
        unsigned int i; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003533F0 -> 0x00353708
*/
// Range: 0x3533F0 -> 0x353708
void zEntPickup_UpdateInit(class zEntPickup * plist /* r22 */, unsigned int pcount /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3533F0 -> 0x353708
        unsigned int sPickupUpdateCount'159; // r5
        unsigned int i; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00353710 -> 0x0035385C
*/
// Range: 0x353710 -> 0x35385C
void zEntPickup_SetState(class zEntPickup * ent /* r2 */, unsigned int state /* r2 */) {
    /* anonymous block */ {
        // Range: 0x353710 -> 0x35385C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00353860 -> 0x00354A24
*/
// Range: 0x353860 -> 0x354A24
void zEntPickup_Update(class zEntPickup * ent /* r20 */, class xScene * sc /* r29+0xBC */, float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x353860 -> 0x354A24
        class xEntFrame frame; // r29+0x150
        float duration; // r29+0x270
        class xQuat * q0; // r2
        class xVec3 * t0; // r17
        class xVec3 * player; // r2
        float chkdist; // r6
        class zEnt * plent; // r2
        float distsqr; // r1
        float dx__; // r29+0x270
        float dy__; // r29+0x270
        float dz__; // r29+0x270
        class xVec3 * dest; // r2
        class xVec3 vec; // r29+0x260
        float mult; // r3
        float dx__; // r29+0x270
        float dy__; // r29+0x270
        float dz__; // r29+0x270
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00354A30 -> 0x0035507C
*/
// Range: 0x354A30 -> 0x35507C
void zEntPickup_GivePickup(class zEntPickup * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x354A30 -> 0x35507C
        class xMat4x3 mat; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355080 -> 0x003555A4
*/
// Range: 0x355080 -> 0x3555A4
void zEntPickup_DoPickup(class zEntPickup * ent /* r19 */, unsigned char instant /* r2 */) {
    /* anonymous block */ {
        // Range: 0x355080 -> 0x3555A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003555B0 -> 0x00355CEC
*/
// Range: 0x3555B0 -> 0x355CEC
static signed int CheckPickupAgainstPlayer(class xEnt * cbent /* r2 */, void * cbdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3555B0 -> 0x355CEC
        class zEntPickup * ent; // r16
        float dt; // r29+0x60
        class zEnt * plent; // r17
        float distsqr; // r20
        float dx__; // r29+0x60
        float dy__; // r29+0x60
        float dz__; // r29+0x60
        float distance; // r29+0x60
        float chkdist; // r22
        float dist2_1; // r29+0x60
        float dist2_2; // r29+0x60
        float dx__; // r29+0x60
        float dy__; // r29+0x60
        float dz__; // r29+0x60
        float dx__; // r29+0x60
        float dy__; // r29+0x60
        float dz__; // r29+0x60
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00355CF0 -> 0x003562C8
*/
// Range: 0x355CF0 -> 0x3562C8
void zEntPickupEventCB(class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */) {
    /* anonymous block */ {
        // Range: 0x355CF0 -> 0x3562C8
        class zEntPickup * p; // r16
        class xEntFrame frame; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003562D0 -> 0x00356604
*/
// Range: 0x3562D0 -> 0x356604
void zEntPickup_Setup() {
    /* anonymous block */ {
        // Range: 0x3562D0 -> 0x356604
        class zScene * zsc; // r2
        signed int i; // r20
        class xBase * base; // r2
        unsigned int j; // r19
        class zEntPickup * p; // r18
        class xVec3 * srcPos; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356610 -> 0x00356740
*/
// Range: 0x356610 -> 0x356740
void zEntPickup_Setup(class zEntPickup * p /* r17 */) {
    /* anonymous block */ {
        // Range: 0x356610 -> 0x356740
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356740 -> 0x00356BB4
*/
// Range: 0x356740 -> 0x356BB4
void zEntPickupInit(class zEntPickup * ent /* r20 */, class xEntAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x356740 -> 0x356BB4
        class xEntPickupAsset * pickupAsset; // r2
        unsigned int i; // r6
        unsigned int tmpsize; // r29+0x9C
        class zAssetPickup * ptbl; // r19
        class RpAtomic * modelData; // r21
        void * animData; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356BC0 -> 0x00356BC8
*/
// Range: 0x356BC0 -> 0x356BC8
void zEntPickupInit(void * ent /* r2 */, void * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x356BC0 -> 0x356BC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00356BD0 -> 0x003570C0
*/
// Range: 0x356BD0 -> 0x3570C0
static void PickupFallPhysics(class zEntPickup * ent /* r16 */, class xScene * sc /* r2 */, float dt /* r29+0x100 */) {
    /* anonymous block */ {
        // Range: 0x356BD0 -> 0x3570C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPickup.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003570C0 -> 0x00357170
*/
// Range: 0x3570C0 -> 0x357170
void zEntPickupSceneInit(unsigned int sceneID /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3570C0 -> 0x357170
        unsigned int hudLightKitID; // r2
        signed int i; // r5
    }
}


