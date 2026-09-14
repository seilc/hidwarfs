/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E14C0 -> 0x002E151C
*/
// Range: 0x2E14C0 -> 0x2E151C
signed int zThrown_IsStacked(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E14C0 -> 0x2E151C
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1520 -> 0x002E15A8
*/
// Range: 0x2E1520 -> 0x2E15A8
signed int zThrown_IsFruit(class xEnt * ent /* r2 */, float * stackHeight /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E1520 -> 0x2E15A8
        class ThrowableStats * stats; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E15B0 -> 0x002E17F4
*/
// Range: 0x2E15B0 -> 0x2E17F4
static void zThrownCollide_StoneTiki(class zThrownStruct * thrown /* r19 */, class xEntCollis * collis /* r18 */, float * bounce /* r17 */, float * friction /* r22 */) {
    /* anonymous block */ {
        // Range: 0x2E15B0 -> 0x2E17F4
        unsigned int collidx; // r16
        class xEnt * hitent; // r20
        enum en_npctyp type; // r2
        unsigned int collfound; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1800 -> 0x002E1874
*/
// Range: 0x2E1800 -> 0x2E1874
static void zThrownCollide_Tiki(class zThrownStruct * thrown /* r18 */, class xEntCollis * collis /* r2 */, float * bounce /* r17 */, float * friction /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2E1800 -> 0x2E1874
        signed int didDamage; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1880 -> 0x002E1910
*/
// Range: 0x2E1880 -> 0x2E1910
static void zThrownCollide_DestructObj(class zThrownStruct * thrown /* r16 */, class xEntCollis * collis /* r2 */, float * bounce /* r18 */, float * friction /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2E1880 -> 0x2E1910
        signed int didDamage; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1910 -> 0x002E1934
*/
// Range: 0x2E1910 -> 0x2E1934
static void zThrownCollide_ThrowFreeze(class zThrownStruct * thrown /* r2 */, class xEntCollis * collis /* r2 */, float * bounce /* r2 */, float * friction /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E1910 -> 0x2E1934
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1940 -> 0x002E1EAC
*/
// Range: 0x2E1940 -> 0x2E1EAC
static void zThrownCollide_ThrowFruit(class zThrownStruct * thrown /* r19 */, class xEntCollis * collis /* r18 */, float * bounce /* r17 */, float * friction /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2E1940 -> 0x2E1EAC
        unsigned int collfound; // r5
        float stackHeight; // r29+0x5C
        class xEnt * landEnt; // r2
        unsigned int i; // r7
        float killTimer; // r6
        float dx; // r29+0x60
        float dz; // r29+0x60
        float lerp; // r29+0x60
        float stackHeight; // r29+0x58
        class xEnt * landEnt; // r2
        unsigned int i; // r8
        float killTimer; // r8
        float dx; // r29+0x60
        float dy; // r29+0x60
        float dz; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E1EB0 -> 0x002E2258
*/
// Range: 0x2E1EB0 -> 0x2E2258
static signed int zThrownCollide_CauseDamage(class zThrownStruct * thrown /* r20 */, class xEntCollis * collis /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E1EB0 -> 0x2E2258
        signed int damageInflicted; // r19
        unsigned int collidx; // r21
        class xCollis * currcoll; // r2
        class xEnt * hitent; // r18
        float dummy; // r29+0xBC
        class xVec3 pos; // r29+0xB0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2260 -> 0x002E22F4
*/
// Range: 0x2E2260 -> 0x2E22F4
signed int zThrown_KillFruit(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E2260 -> 0x2E22F4
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2300 -> 0x002E267C
*/
// Range: 0x2E2300 -> 0x2E267C
void zThrown_Remove(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2E2300 -> 0x2E267C
        unsigned int i; // r6
        class xModelInstance * mod; // r2
        void (* thisCollCB)(class zThrownStruct *, class xEntCollis *, float *, float *); // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2680 -> 0x002E293C
*/
// Range: 0x2E2680 -> 0x2E293C
void zThrown_AddFruit(class xEnt * ent /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2E2680 -> 0x2E293C
        unsigned int i; // r6
        class ThrowableStats * stats; // r7
        class zThrownStruct * newThrown; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2940 -> 0x002E29A0
*/
// Range: 0x2E2940 -> 0x2E29A0
void zThrown_PatrickLauncher(class xEnt * ent /* r2 */, class xEnt * launcher /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E2940 -> 0x2E29A0
        unsigned int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E29A0 -> 0x002E2B30
*/
// Range: 0x2E29A0 -> 0x2E2B30
void zThrown_LaunchStack(class xEnt * ent /* r17 */, class xEnt * stackTgt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2E29A0 -> 0x2E2B30
        class xVec3 stackPos; // r29+0x60
        class xVec3 stackDir; // r29+0x50
        class xBox tmpbox; // r29+0x30
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2B30 -> 0x002E2D98
*/
// Range: 0x2E2B30 -> 0x2E2D98
signed int zThrown_LaunchPos(class xEnt * ent /* r2 */, class xVec3 * pos /* r2 */, class xVec3 * dir /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E2B30 -> 0x2E2D98
        signed int retval; // r16
        class ThrowableStats * stats; // r8
        float throwHeight; // r8
        float throwDistance; // r7
        float throwHeightFudge; // r9
        float throwSpeedY; // r3
        float throwSpeedXZ; // r12
        float tpeak; // r11
        float hpeak; // r5
        class xVec3 tempVel; // r29+0x20
        float speed; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2DA0 -> 0x002E2E8C
*/
// Range: 0x2E2DA0 -> 0x2E2E8C
void zThrown_LaunchDir(class xEnt * ent /* r2 */, class xVec3 * dir /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2E2DA0 -> 0x2E2E8C
        class ThrowableStats * stats; // r6
        float throwSpeedXZ; // r29+0x20
        class xVec3 tempVel; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E2E90 -> 0x002E3128
*/
// Range: 0x2E2E90 -> 0x2E3128
void zThrown_LaunchVel(class xEnt * ent /* r19 */, class xVec3 * vel /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2E2E90 -> 0x2E3128
        class ThrowableStats * stats; // r17
        class zThrownStruct * newThrown; // r16
        unsigned int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E3130 -> 0x002E31B4
*/
// Range: 0x2E3130 -> 0x2E31B4
void zThrown_NMEUpdate(class xEnt * ent /* r2 */, class xScene * sc /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x2E3130 -> 0x2E31B4
        unsigned int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E31C0 -> 0x002E4998
*/
// Range: 0x2E31C0 -> 0x2E4998
static void zThrown_Update(class xEnt * ent /* r20 */, class xScene * sc /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2E31C0 -> 0x2E4998
        unsigned int i; // r5
        unsigned int removethis; // r29+0xC0
        class zThrownStruct * thrown; // r19
        float dist2; // r29+0x8C0
        class xVec3 stackDelta; // r29+0x8A8
        class xEntCollis collis; // r29+0x260
        class xEntCollis * oldcollis; // r2
        class xBound oldbound; // r29+0x210
        unsigned char oldpflags; // r2
        unsigned char oldcollType; // r2
        void (* old_bupdateFunc)(class xEnt *, class xVec3 *); // r2
        float oldgrav; // r8
        class xVec3 dposvel; // r29+0x898
        float posdot; // r29+0x8C0
        class xVec3 velunit; // r29+0x888
        class xSweptSphere sws; // r29+0x140
        class xVec3 start; // r29+0x878
        float lerp; // r29+0x8C0
        float lerpdist; // r29+0x8C0
        class xCollis * coll; // r18
        class xCollis * cend; // r2
        class zSurfaceProps * prop; // r2
        float bounce; // r29+0x8BC
        float friction; // r29+0x8B8
        float dothdng; // r29+0x8C0
        float boxX; // r29+0x8C0
        float boxYupper; // r29+0x8C0
        float boxZ; // r29+0x8C0
        class xVec3 boxCenter; // r29+0x868
        class zShrapnelAsset * shrap; // r2
        class xCollis * fcoll; // r2
        float fruitPattern[18]; // @ 0x005FE310
        class xEntFrame tmpNPCframe; // @ 0x0067FEE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E49A0 -> 0x002E5118
*/
// Range: 0x2E49A0 -> 0x2E5118
static void Recurse_TranslateStack(class xEnt * ent /* r29+0x1CC */, class xVec3 * delta /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2E49A0 -> 0x2E5118
        unsigned int i; // r29+0x1B0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E5120 -> 0x002E55F4
*/
// Range: 0x2E5120 -> 0x2E55F4
static void zFruit_Update(class xEnt * ent /* r18 */, class xScene * sc /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2E5120 -> 0x2E55F4
        unsigned int i; // r5
        class zThrownStruct * thrown; // r16
        class zShrapnelAsset * shrap; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zThrown.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E5600 -> 0x002E57DC
*/
// Range: 0x2E5600 -> 0x2E57DC
void zThrown_Setup(class zScene * sc /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2E5600 -> 0x2E57DC
        class ThrowableStats * stats; // r16
        char tmpstr[256]; // r29+0x30
        signed int i; // r4
        class xEnt * myent; // r2
    }
}


