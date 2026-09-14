/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00382FE0 -> 0x00383014
*/
// Range: 0x382FE0 -> 0x383014
class zDestructible * zDestructibleGetFromEntity(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x382FE0 -> 0x383014
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383020 -> 0x003831EC
*/
// Range: 0x383020 -> 0x3831EC
void zDestructibleAsset_Update(class xEnt * ent /* r17 */, class zDestructible * dest /* r16 */, class xScene * sc /* r2 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x383020 -> 0x3831EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003831F0 -> 0x00383B08
*/
// Range: 0x3831F0 -> 0x383B08
void zDestructibleAsset_EventCB(class xBase * from /* r17 */, class xBase * root_base /* r2 */, class zDestructible * to /* r16 */, unsigned int toEvent /* r2 */, float * toParam /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3831F0 -> 0x383B08
        class xEnt * ent; // r2
        class xEnt * root_ent; // r2
        class zDestructible * dest; // r2
        class zDestructibleState * dstates; // r2
        class zDestructibleState * cstate; // r18
        signed int up; // r2
        signed int idx; // r2
        signed int idx; // r2
        class xVec3 dir; // r29+0xE0
        class xSurface * surf; // r2
        unsigned int hit_source_flag; // r5
        unsigned int damage; // r18
        class xVec3 kickback; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00383B10 -> 0x0038421C
*/
// Range: 0x383B10 -> 0x38421C
static void zDestructible_StateProcess(class xEnt * ent /* r21 */, class zDestructible * dest /* r20 */, unsigned int damage /* r19 */, unsigned int idx /* r2 */, float * toParam /* r18 */, class xVec3 & initial_velocity /* r17 */, unsigned char state_change /* r16 */) {
    /* anonymous block */ {
        // Range: 0x383B10 -> 0x38421C
        unsigned int _percent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00384220 -> 0x00384280
*/
// Range: 0x384220 -> 0x384280
void zDestructibleAsset_CopyLODDistances(class xEnt * ent /* r2 */, class zDestructible * destructible /* r2 */) {
    /* anonymous block */ {
        // Range: 0x384220 -> 0x384280
        unsigned int state; // r8
        class xModelInstance * model; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00384280 -> 0x003844F8
*/
// Range: 0x384280 -> 0x3844F8
void zDestructibleAsset_Init(unsigned int assetID /* r16 */, class zDestructible * & dest /* r20 */, class xEnt * ent /* r22 */) {
    /* anonymous block */ {
        // Range: 0x384280 -> 0x3844F8
        class xDestructibleAssetState * d_states; // r19
        unsigned int i; // r21
        unsigned int fx_count; // r7
        class xDestructibleAssetAttachedAnimList * ds_state_anim_list; // r2
        unsigned int modelID; // r18
        class RpAtomic * imodel; // r2
        void * tmp_ptr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00384500 -> 0x00384600
*/
// Range: 0x384500 -> 0x384600
void zDestructibleAsset_ReReset(class zDestructible * & dest /* r20 */) {
    /* anonymous block */ {
        // Range: 0x384500 -> 0x384600
        class xDestructibleAssetState * d_states; // r19
        unsigned int i; // r18
        class xDestructibleAssetAttachedAnimList * ds_state_anim_list; // r2
        void * tmp_ptr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00384600 -> 0x00384C18
*/
// Range: 0x384600 -> 0x384C18
void zDestructibleAsset_Reset(class zDestructible * & dest /* r21 */, class xEnt * ent /* r23 */) {
    /* anonymous block */ {
        // Range: 0x384600 -> 0x384C18
        class xDestructibleAssetState * d_states; // r20
        unsigned int i; // r30
        class RpAtomic * imodel; // r2
        unsigned int j; // r19
        class zDestructibleStateFXParams * fx_Param; // r2
        class xDestructibleAssetAttachedAnimList * ds_state_anim_list; // r2
        unsigned int * animListIDs; // r2
        unsigned int j; // r19
        void * tmp_ptr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00384C20 -> 0x00384CB8
*/
// Range: 0x384C20 -> 0x384CB8
static unsigned int BurnSinRateCallback(float time /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x384C20 -> 0x384CB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00384CC0 -> 0x00385204
*/
// Range: 0x384CC0 -> 0x385204
static void zDestructible_AffectAll(class xEnt * ent /* r20 */, class zDestructible * dest /* r19 */, class xScene * sc /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x384CC0 -> 0x385204
        void (* bak_bupdate)(class xEnt *, class xVec3 *); // r2
        class xEntCollis ent_collis_rec; // r29+0x110
        signed int i; // r18
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00385210 -> 0x003852D0
*/
// Range: 0x385210 -> 0x3852D0
static void DOBJ_alwaysUseSphere(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x385210 -> 0x3852D0
        class xVec3 bndcent; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zDestructible.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003852D0 -> 0x003859A0
*/
// Range: 0x3852D0 -> 0x3859A0
static void SwapModelThroughState(class xEnt * ent /* r16 */, class zDestructibleState * state /* r2 */, class zDestructible * dest /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3852D0 -> 0x3859A0
        class xModelInstance * curr; // r7
    }
}


