/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9A70 -> 0x002E9C14
*/
// Range: 0x2E9A70 -> 0x2E9C14
void zFrag_ProjectileRenderer() {
    /* anonymous block */ {
        // Range: 0x2E9A70 -> 0x2E9C14
        class zFrag * frag; // r16
        class zFragProjectile * proj; // r2
        class xMat4x3 & model_mat; // r2
        float scale; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9C20 -> 0x002E9C74
*/
// Range: 0x2E9C20 -> 0x2E9C74
void zFrag_DefaultShrapnelUpdate(class zFrag * frag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2E9C20 -> 0x2E9C74
        class zShrapnelAsset * sasset; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9C80 -> 0x002E9DB8
*/
// Range: 0x2E9C80 -> 0x2E9DB8
static void zFrag_DistortionManager(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2E9C80 -> 0x2E9DB8
        class zFrag * frag; // r19
        class zFrag * next; // r18
        class zFragDistortion * f; // r17
        class zFragDistortionAsset * a; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9DC0 -> 0x002E9EAC
*/
// Range: 0x2E9DC0 -> 0x2E9EAC
static void zFrag_DefaultFireUpdate(class zFrag * frag /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2E9DC0 -> 0x2E9EAC
        class zFragFireAsset * a; // r2
        class spawn_data spawn; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002E9EB0 -> 0x002EA000
*/
// Range: 0x2E9EB0 -> 0x2EA000
static void zFrag_DefaultDistortionUpdate(class zFrag * frag /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2E9EB0 -> 0x2EA000
        class zFragDistortion * f; // r2
        class zFragDistortionAsset * a; // r2
        signed int flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA000 -> 0x002EA0CC
*/
// Range: 0x2EA000 -> 0x2EA0CC
static void zFrag_ExplosionManager(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2EA000 -> 0x2EA0CC
        class zFrag * frag; // r18
        class zFrag * next; // r2
        class zFragExplosion * f; // r2
        class zFragExplosionAsset * a; // r2
        class xVec3 loc; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA0D0 -> 0x002EA22C
*/
// Range: 0x2EA0D0 -> 0x2EA22C
static void zFrag_DefaultExplosionUpdate(class zFrag * frag /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2EA0D0 -> 0x2EA22C
        class zFragExplosion * f; // r2
        class zFragExplosionAsset * a; // r2
        class xVec3 loc; // r29+0x40
        signed int type; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA230 -> 0x002EA304
*/
// Range: 0x2EA230 -> 0x2EA304
void zFrag_DefaultSoundUpdate(class zFrag * frag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2EA230 -> 0x2EA304
        class zFragSound * sound; // r2
        class zFragSoundAsset * sasset; // r2
        class xVec3 source; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA310 -> 0x002EA4A0
*/
// Range: 0x2EA310 -> 0x2EA4A0
void zFrag_LightningManager(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2EA310 -> 0x2EA4A0
        class zFrag * frag; // r21
        class zFragLightning * ligh; // r2
        class zFragLightningAsset * lasset; // r2
        class zLightning * inst; // r20
        class zFrag * next; // r19
        class xVec3 start; // r29+0xB0
        class xVec3 end; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA4A0 -> 0x002EA598
*/
// Range: 0x2EA4A0 -> 0x2EA598
void zFrag_DefaultLightningUpdate(class zFrag * frag /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2EA4A0 -> 0x2EA598
        class zFragLightningAsset * lasset; // r2
        class xVec3 start; // r29+0x40
        class xVec3 end; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EA5A0 -> 0x002EADD8
*/
// Range: 0x2EA5A0 -> 0x2EADD8
void zFrag_ProjectileManager(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x2EA5A0 -> 0x2EADD8
        class zFrag * frag; // r21
        class zFragProjectile * proj; // r20
        class zFrag * next; // r19
        signed int killed; // r18
        float percent; // r29+0x1D0
        float minScale; // r29+0x1D0
        float newScale; // r20
        class xVec3 back; // r29+0x1C0
        class xMat3x3 spin; // r29+0x170
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EADE0 -> 0x002EB998
*/
// Range: 0x2EADE0 -> 0x2EB998
void zFrag_DefaultProjectileUpdate(class zFrag * frag /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2EADE0 -> 0x2EB998
        class zFragProjectileAsset * passet; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EB9A0 -> 0x002EBAA4
*/
// Range: 0x2EB9A0 -> 0x2EBAA4
void zFrag_ParticleManager(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2EB9A0 -> 0x2EBAA4
        class zFrag * frag; // r18
        class zFrag * next; // r17
        class zFragParticleAsset * passet; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EBAB0 -> 0x002EBBE0
*/
// Range: 0x2EBAB0 -> 0x2EBBE0
void zFrag_DefaultParticleUpdate(class zFrag * frag /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2EBAB0 -> 0x2EBBE0
        class zFragParticleAsset * passet; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EBBE0 -> 0x002EC9E8
*/
// Range: 0x2EBBE0 -> 0x2EC9E8
unsigned char zFrag_DefaultInit(class zFrag * frag /* r18 */, class zFragAsset * fasset /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2EBBE0 -> 0x2EC9E8
        class zFragProjectileAsset * passet; // r2
        class RpAtomic * m; // r2
        class zFragProjectile * proj; // r16
        class zFragLightningAsset * lasset; // r2
        class zFragParticleAsset * prasset; // r2
        class zFragSoundAsset * sasset; // r2
        class zFragExplosionAsset * easset; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EC9F0 -> 0x002ECBC8
*/
// Range: 0x2EC9F0 -> 0x2ECBC8
void zFragLoc_InitDir(class zFragLocation * loc /* r17 */, class xVec3 * vec /* r16 */, class xModelInstance * parent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2EC9F0 -> 0x2ECBC8
        signed int index; // r4
        class xMat4x3 tmpMat; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ECBD0 -> 0x002ECFBC
*/
// Range: 0x2ECBD0 -> 0x2ECFBC
void zFragLoc_InitVec(class zFragLocation * loc /* r18 */, class xVec3 * vec /* r17 */, class xModelInstance * parent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2ECBD0 -> 0x2ECFBC
        class xMat4x3 tmpMat; // r29+0x60
        signed int index; // r4
        class xVec3 offset; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ECFC0 -> 0x002ED3B0
*/
// Range: 0x2ECFC0 -> 0x2ED3B0
void zFragLoc_InitMat(class zFragLocation * loc /* r18 */, class xMat4x3 * mat /* r17 */, class xModelInstance * parent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2ECFC0 -> 0x2ED3B0
        signed int index; // r4
        class xVec3 offset; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ED3B0 -> 0x002ED644
*/
// Range: 0x2ED3B0 -> 0x2ED644
void zShrapnel_CinematicInit(class zShrapnelAsset * shrap /* r20 */, class RpAtomic * cinModel /* r21 */, class RwMatrixTag * animMat /* r19 */, class xVec3 * initVel /* r18 */, void (* cb)(class zFrag *, class zFragAsset *) /* r17 */) {
    /* anonymous block */ {
        // Range: 0x2ED3B0 -> 0x2ED644
        signed int i; // r6
        class zFrag * frag; // r16
        class zFragProjectile * proj; // r2
        float spd; // r29+0x90
        class xModelInstance * model; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ED650 -> 0x002ED6B4
*/
// Range: 0x2ED650 -> 0x2ED6B4
static void CinFragCB(class zFrag * frag /* r2 */, class zFragAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2ED650 -> 0x2ED6B4
        float time; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ED6C0 -> 0x002ED928
*/
// Range: 0x2ED6C0 -> 0x2ED928
void zShrapnel_DefaultInit(class zShrapnelAsset * shrap /* r23 */, class xModelInstance * parent /* r20 */, class xVec3 * initVel /* r22 */, void (* cb)(class zFrag *, class zFragAsset *) /* r30 */) {
    /* anonymous block */ {
        // Range: 0x2ED6C0 -> 0x2ED928
        class zShrapnelParentList * plist; // r19
        class zFrag * frag; // r18
        class zFragAsset * fasset; // r17
        signed int i; // r16
        signed int j; // r8
        signed int k; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002ED930 -> 0x002EDAF0
*/
// Range: 0x2ED930 -> 0x2EDAF0
void zShrapnel_Update(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2ED930 -> 0x2EDAF0
        class zFrag * curr; // r2
        class zFrag * next; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EDAF0 -> 0x002EDFA8
*/
// Range: 0x2EDAF0 -> 0x2EDFA8
void zShrapnel_SceneInit() {
    /* anonymous block */ {
        // Range: 0x2EDAF0 -> 0x2EDFA8
        signed int i; // r6
        signed int numShrapnel; // r2
        signed int j; // r20
        class zShrapnelAsset * sa; // r2
        class zFragAsset * fa; // r19
        class zFragProjectileAsset * projAss; // r2
        class zFragParticleAsset * partAss; // r2
        class zFragShrapnelAsset * shrapAss; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EDFB0 -> 0x002EE1A0
*/
// Range: 0x2EDFB0 -> 0x2EE1A0
void zShrapnel_GameInit() {
    /* anonymous block */ {
        // Range: 0x2EDFB0 -> 0x2EE1A0
        class zShrapnelInitTable * curr; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EE1A0 -> 0x002EE240
*/
// Range: 0x2EE1A0 -> 0x2EE240
void zFrag_Free(class zFrag * frag /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2EE1A0 -> 0x2EE240
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zShrapnel.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002EE240 -> 0x002EE2D0
*/
// Range: 0x2EE240 -> 0x2EE2D0
class zFrag * zFrag_Alloc(enum zFragType type /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2EE240 -> 0x2EE2D0
        class zFrag * result; // r2
    }
}


