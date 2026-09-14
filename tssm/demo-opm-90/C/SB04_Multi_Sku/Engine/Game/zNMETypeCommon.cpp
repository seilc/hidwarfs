/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A7F0 -> 0x0023A910
*/
// Range: 0x23A7F0 -> 0x23A910
// this: r16
void zNMECommon::PoofOfBubbles() {
    /* anonymous block */ {
        // Range: 0x23A7F0 -> 0x23A910
        class xSphere emitSphere; // r29+0x50
        signed int i; // r16
        class xVec3 pos_emit; // r29+0x70
        signed int num_vert; // r2
        signed int i; // r19
        class xVec3 pos_emit; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A910 -> 0x0023A930
*/
// Range: 0x23A910 -> 0x23A930
signed int DmgAmtForPlayerAttack(enum en_plyratak plyratak /* r2 */, enum en_plyrpup pup /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23A910 -> 0x23A930
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023A930 -> 0x0023AAAC
*/
// Range: 0x23A930 -> 0x23AAAC
signed int NMEC_DmgAmtForAttack(enum en_npcdmg dmgtyp /* r2 */, enum en_plyrpup * pup_level /* r17 */) {
    /* anonymous block */ {
        // Range: 0x23A930 -> 0x23AAAC
        enum en_plyratak plyratak; // r16
        signed int notPlayerAttack; // r5
        enum en_plyrpup pup; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023AAB0 -> 0x0023AB1C
*/
// Range: 0x23AAB0 -> 0x23AB1C
enum en_nmevar NMEVariantIdx(enum en_npctyp ntyp /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23AAB0 -> 0x23AB1C
        enum en_nmevar nvar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023AB20 -> 0x0023B0DC
*/
// Range: 0x23AB20 -> 0x23B0DC
// this: r19
signed int zNMECommon::LaunchProjectile(enum en_haztyp haztyp /* r16 */, float spd_proj /* r23 */, float dst_minRange /* r22 */, class xVec3 * pos_launch /* r18 */, float tym_predictMax /* r21 */, float hyt_offset /* r20 */, float rad_min /* r25 */, float rad_max /* r24 */) {
    /* anonymous block */ {
        // Range: 0x23AB20 -> 0x23B0DC
        class zNMEHazard * haz; // r17
        class xVec3 dir; // r29+0xC0
        class xVec3 pos_tgt; // r29+0xB0
        float tym_predict; // r29+0xD0
        float dst_tgt; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B0E0 -> 0x0023B0F4
*/
// Range: 0x23B0E0 -> 0x23B0F4
// this: r4
void zNMECommon::GiveReward() {
    /* anonymous block */ {
        // Range: 0x23B0E0 -> 0x23B0F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B100 -> 0x0023B368
*/
// Range: 0x23B100 -> 0x23B368
// this: r17
void zNMECommon::DeathFXKick() {
    /* anonymous block */ {
        // Range: 0x23B100 -> 0x23B368
        class zShrapnelAsset * shrp; // r16
        class xVec3 vel; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B370 -> 0x0023B39C
*/
// Range: 0x23B370 -> 0x23B39C
void zNMEFragCB(class zFrag * frag /* r2 */, class zFragAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23B370 -> 0x23B39C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B3A0 -> 0x0023B3B0
*/
// Range: 0x23B3A0 -> 0x23B3B0
// this: r2
void zNMECommon::DieTheGoodDeath() {
    /* anonymous block */ {
        // Range: 0x23B3A0 -> 0x23B3B0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B3B0 -> 0x0023B4AC
*/
// Range: 0x23B3B0 -> 0x23B4AC
// this: r2
float zNMECommon::ThrottleAdjust(float dt /* r29 */, float spd_want /* r29 */, float accel /* r29 */) {
    /* anonymous block */ {
        // Range: 0x23B3B0 -> 0x23B4AC
        float acc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B4B0 -> 0x0023B53C
*/
// Range: 0x23B4B0 -> 0x23B53C
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x23B4B0 -> 0x23B53C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B540 -> 0x0023B548
*/
// Range: 0x23B540 -> 0x23B548
void NMEC_BuildStandardAnimTran() {
    /* anonymous block */ {
        // Range: 0x23B540 -> 0x23B548
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B550 -> 0x0023B5E0
*/
// Range: 0x23B550 -> 0x23B5E0
// this: r2
class xAnimTransition * zNMECommon::AnimMakeSmackTran(unsigned int animID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23B550 -> 0x23B5E0
        class xAnimTransition * atran; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B5E0 -> 0x0023B7F0
*/
// Range: 0x23B5E0 -> 0x23B7F0
// this: r16
signed int zNMECommon::AnimStart(unsigned int animID /* r2 */, signed int forceRestart /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23B5E0 -> 0x23B7F0
        class xAnimTransition * da_tran; // r18
        signed int dumptable; // @ 0x00637428
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023B7F0 -> 0x0023BAA0
*/
// Range: 0x23B7F0 -> 0x23BAA0
// this: r16
signed int zNMECommon::MatMoveToPos(class xVec3 * pos_tobe /* r2 */, float dt /* r29+0xC0 */, float spd /* r29+0xC0 */, signed int doTurn /* r2 */, float spd_turnrate /* r29+0xC0 */) {
    /* anonymous block */ {
        // Range: 0x23B7F0 -> 0x23BAA0
        class xVec3 pos_dest; // r29+0xB0
        class xVec3 dir_dest; // r29+0xA0
        class xVec3 delta; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023BAA0 -> 0x0023BD18
*/
// Range: 0x23BAA0 -> 0x23BD18
// this: r16
float zNMECommon::MatQRotTowards(float dt /* r22 */, class xVec3 * dir_face /* r2 */, float spd_turnrate /* r21 */) {
    /* anonymous block */ {
        // Range: 0x23BAA0 -> 0x23BD18
        class xMat3x3 tmpmat; // r29+0x50
        class xVec3 dir; // r29+0x90
        class xQuat quat; // r29+0x40
        class xQuat qold; // r29+0x30
        float qdot; // r20
        float rotang; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023BD20 -> 0x0023BD78
*/
// Range: 0x23BD20 -> 0x23BD78
// this: r2
class xModelInstance * zNMECommon::ModelAtomicFind(signed int index /* r2 */, signed int idx_prev /* r2 */, class xModelInstance * mdl_prev /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23BD20 -> 0x23BD78
        class xModelInstance * da_atomic; // r2
        class xModelInstance * minst; // r2
        signed int midx; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023BD80 -> 0x0023C008
*/
// Range: 0x23BD80 -> 0x23C008
// this: r21
signed int zNMECommon::HaveLOSToPos(class xVec3 * pos /* r20 */, float dist /* r20 */, class xScene * xscn /* r19 */, class xBase * tgt /* r18 */, class xCollis * colCallers /* r2 */) {
    /* anonymous block */ {
        // Range: 0x23BD80 -> 0x23C008
        signed int result; // r2
        class xRay3 ray; // r29+0x90
        class xVec3 mypos; // r29+0xC0
        class xCollis * colrec; // r17
        class xCollis localCollis; // @ 0x005FA5D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023C010 -> 0x0023C310
*/
// Range: 0x23C010 -> 0x23C310
signed int ReviewCollBounce(class xEntCollis * npccol /* r17 */, class xVec3 * vel /* r16 */, float fac_elastic /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23C010 -> 0x23C310
        class xVec3 vec_depen; // r29+0xE0
        signed int i; // r12
        class xCollis * colrec; // r2
        class xVec3 dir_effnorm; // r29+0xD0
        class xVec3 vel_perp; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023C310 -> 0x0023C430
*/
// Range: 0x23C310 -> 0x23C430
signed int ReviewCollSurfs(class xEntCollis * npccol /* r21 */, class zNMECommon * npc /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23C310 -> 0x23C430
        signed int badsurf; // r19
        signed int i; // r18
        class xCollis * colrec; // r2
        float goodep; // r29+0x7C
        class xSurface * surf; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023C440 -> 0x0023C540
*/
// Range: 0x23C440 -> 0x23C540
// this: r16
void zNMECommon::RunCollision(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23C440 -> 0x23C540
        class xEntCollis collisData; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023C540 -> 0x0023CB6C
*/
// Range: 0x23C540 -> 0x23CB6C
// this: r2
enum en_nmesimp zNMECommon::Common_SimpStat() {
    /* anonymous block */ {
        // Range: 0x23C540 -> 0x23CB6C
        signed int gid_curr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023CB70 -> 0x0023CB78
*/
// Range: 0x23CB70 -> 0x23CB78
void ApplyGlowDamp() {
    /* anonymous block */ {
        // Range: 0x23CB70 -> 0x23CB78
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023CB80 -> 0x0023D230
*/
// Range: 0x23CB80 -> 0x23D230
// this: r17
void zNMECommon::ShadStufUpdate() {
    /* anonymous block */ {
        // Range: 0x23CB80 -> 0x23D230
        class xVec3 vec_toCam; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D230 -> 0x0023D3F8
*/
// Range: 0x23D230 -> 0x23D3F8
// this: r16
void zNMECommon::FullShadAcquire() {
    /* anonymous block */ {
        // Range: 0x23D230 -> 0x23D3F8
        class xEntShadow * es; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D400 -> 0x0023D5B8
*/
// Range: 0x23D400 -> 0x23D5B8
// this: r16
void zNMECommon::ShadowPrep() {
    /* anonymous block */ {
        // Range: 0x23D400 -> 0x23D5B8
        signed int useCachePools; // r2
        class xEntShadow * es; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D5D0 -> 0x0023D624
*/
// Range: 0x23D5D0 -> 0x23D624
void TellMeVisOnOff(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x23D5D0 -> 0x23D624
        class zNMECommon * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D630 -> 0x0023D734
*/
// Range: 0x23D630 -> 0x23D734
// this: r19
signed int zNMECommon::Respawn(class xVec3 * pos /* r18 */, class zMovePoint * mvptFirst /* r17 */, class zMovePoint * mvptSpawnRef /* r16 */) {
    /* anonymous block */ {
        // Range: 0x23D630 -> 0x23D734
        class NMEMsg msg; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D740 -> 0x0023D9A0
*/
// Range: 0x23D740 -> 0x23D9A0
// this: r21
void zNMECommon::Damage(enum en_npcdmg dmgtype /* r20 */, class xBase * who /* r19 */, class xVec3 * vec_hit /* r18 */, signed int amt_dmgCaller /* r17 */, enum en_plyrpup pup_fromCaller /* r22 */) {
    /* anonymous block */ {
        // Range: 0x23D740 -> 0x23D9A0
        signed int doAlways; // r4
        class NMEDamageInfo * dmg; // r2
        class NMEMsg msg; // @ 0x006684E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023D9A0 -> 0x0023DEFC
*/
// Range: 0x23D9A0 -> 0x23DEFC
// this: r17
void zNMECommon::ConvertHitEvent(class NMESysEvent * sysmail /* r16 */) {
    /* anonymous block */ {
        // Range: 0x23D9A0 -> 0x23DEFC
        unsigned int mvinf; // r2
        enum en_npcdmg what; // r2
        class xVec3 vec_hit; // r29+0xE0
        class xVec3 pos_cruiser; // r29+0xD0
        class xVec3 vec_hit; // r29+0xC0
        class xEntBoulder * bould; // r2
        enum en_npcdmg what; // r2
        class xVec3 vec_hit; // r29+0xB0
        class xVec3 vec_hit; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023DF00 -> 0x0023E878
*/
// Range: 0x23DF00 -> 0x23E878
// this: r18
signed int zNMECommon::DfltSysEventMail(class NMESysEvent * sysmail /* r5 */) {
    /* anonymous block */ {
        // Range: 0x23DF00 -> 0x23E878
        signed int handled; // r17
        class xPsyche * psy; // r2
        class xVec3 vec_hit; // r29+0x80
        class FloatAndVoid dist; // r29+0x8C
        enum en_npctyp ntyp; // r2
        class xVec3 currVel; // r29+0x70
        class NMEMsg msg; // @ 0x00655720
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023E880 -> 0x0023E9B8
*/
// Range: 0x23E880 -> 0x23E9B8
// this: r21
signed int zNMECommon::SysEvent(class xBase * from /* r20 */, class xBase * to /* r19 */, unsigned int toEvent /* r18 */, float * toParam /* r17 */, class xBase * toParamWidget /* r16 */, unsigned int toParamWidgetID /* r22 */, signed int * handled /* r23 */) {
    /* anonymous block */ {
        // Range: 0x23E880 -> 0x23E9B8
        class zNMECommon * npc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023E9C0 -> 0x0023EA68
*/
// Range: 0x23E9C0 -> 0x23EA68
// this: r17
signed int zNMECommon::NMEMessage(class NMEMsg * mail /* r16 */) {
    /* anonymous block */ {
        // Range: 0x23E9C0 -> 0x23EA68
        signed int handled; // r2
        class xPsyche * psy; // r2
        class zNMEGoalCommon * curgoal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023EA90 -> 0x0023EAAC
*/
// Range: 0x23EA90 -> 0x23EAAC
// this: r2
void zNMECommon::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x23EA90 -> 0x23EAAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023EAB0 -> 0x0023EB0C
*/
// Range: 0x23EAB0 -> 0x23EB0C
// this: r16
void zNMECommon::Setup() {
    /* anonymous block */ {
        // Range: 0x23EAB0 -> 0x23EB0C
        char * shrapnelName; // r29+0x2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023EB10 -> 0x0023EE04
*/
// Range: 0x23EB10 -> 0x23EE04
// this: r16
void zNMECommon::Common_Init() {
    /* anonymous block */ {
        // Range: 0x23EB10 -> 0x23EE04
        unsigned int bufsize; // r29+0x2C
        void * info; // r2
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023EE10 -> 0x0023EEFC
*/
// Range: 0x23EE10 -> 0x23EEFC
signed int zNMECommon_MaxShadowNeededLater() {
    /* anonymous block */ {
        // Range: 0x23EE10 -> 0x23EEFC
        signed int cnt_shadPool; // r21
        signed int cnt_shadFixed; // r20
        class st_XORDEREDARRAY * reallist; // r2
        signed int num_nme; // r2
        signed int i; // r19
        class zNMECommon * nme; // r2
        signed int flg_shadpool; // r2
        signed int num_shadTotal; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023EF00 -> 0x0023EF0C
*/
// Range: 0x23EF00 -> 0x23EF0C
unsigned char zNMECommon_IsConversation() {
    /* anonymous block */ {
        // Range: 0x23EF00 -> 0x23EF0C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023EF10 -> 0x0023EFC8
*/
// Range: 0x23EF10 -> 0x23EFC8
void SomethingWonderfulUpdate() {
    /* anonymous block */ {
        // Range: 0x23EF10 -> 0x23EFC8
        signed int flg_wonder; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023EFD0 -> 0x0023F0EC
*/
// Range: 0x23EFD0 -> 0x23F0EC
// this: r19
void zMODEnemy::HudRender() {
    /* anonymous block */ {
        // Range: 0x23EFD0 -> 0x23F0EC
        signed int num_nme; // r2
        signed int i; // r18
        class zNMECommon * nme; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023F0F0 -> 0x0023F20C
*/
// Range: 0x23F0F0 -> 0x23F20C
// this: r19
void zMODEnemy::PostRender() {
    /* anonymous block */ {
        // Range: 0x23F0F0 -> 0x23F20C
        signed int num_nme; // r2
        signed int i; // r18
        class zNMECommon * nme; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023F210 -> 0x0023F2EC
*/
// Range: 0x23F210 -> 0x23F2EC
// this: r19
void zMODEnemy::RenderToBuckets() {
    /* anonymous block */ {
        // Range: 0x23F210 -> 0x23F2EC
        signed int num_nme; // r2
        signed int i; // r18
        class zNMECommon * nme; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023F330 -> 0x0023F658
*/
// Range: 0x23F330 -> 0x23F658
// this: r19
void zMODEnemy::PostTimestep(float dt /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x23F330 -> 0x23F658
        signed int num_nme; // r2
        signed int i; // r18
        class zNMECommon * nme; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023F660 -> 0x0023FAFC
*/
// Range: 0x23F660 -> 0x23FAFC
// this: r16
void zMODEnemy::Timestep(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x23F660 -> 0x23FAFC
        signed int num_nme; // r2
        signed int i; // r20
        class zNMECommon * nme; // r19
        enum en_npctyp nt; // r2
        float tmr_lifecycle; // @ 0x00637424
        signed char @33486; // @ 0x00637420
        float frank; // @ 0x00000000
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023FB00 -> 0x0023FBC0
*/
// Range: 0x23FB00 -> 0x23FBC0
// this: r19
void zMODEnemy::SceneReset() {
    /* anonymous block */ {
        // Range: 0x23FB00 -> 0x23FBC0
        signed int num_nme; // r2
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023FBC0 -> 0x0023FC44
*/
// Range: 0x23FBC0 -> 0x23FC44
// this: r18
void zMODEnemy::ScenePostSetup() {
    /* anonymous block */ {
        // Range: 0x23FBC0 -> 0x23FC44
        signed int num_nme; // r2
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023FC50 -> 0x0023FDE4
*/
// Range: 0x23FC50 -> 0x23FDE4
// this: r16
void zMODEnemy::SceneSetup() {
    /* anonymous block */ {
        // Range: 0x23FC50 -> 0x23FDE4
        signed int num_nme; // r2
        signed int i; // r19
        signed int i; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0023FDF0 -> 0x00240064
*/
// Range: 0x23FDF0 -> 0x240064
// this: r16
void zMODEnemy::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x23FDF0 -> 0x240064
        class st_XORDEREDARRAY * reallist; // r17
        enum en_npctyp typeNeedsHUD[5]; // r29+0x60
        signed int num_nme; // r2
        signed int i; // r19
        class zNMECommon * nme; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240070 -> 0x00240080
*/
// Range: 0x240070 -> 0x240080
static signed int NME_OrdComp_byType(void * vkey /* r2 */, void * vitem /* r2 */) {
    /* anonymous block */ {
        // Range: 0x240070 -> 0x240080
        enum en_npctyp nt_key; // r2
        enum en_npctyp nt_item; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240080 -> 0x002400B8
*/
// Range: 0x240080 -> 0x2400B8
// this: r16
void zMODEnemy::SceneFinish() {
    /* anonymous block */ {
        // Range: 0x240080 -> 0x2400B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002400C0 -> 0x0024012C
*/
// Range: 0x2400C0 -> 0x24012C
// this: r16
void zMODEnemy::ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x2400C0 -> 0x24012C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240130 -> 0x00240140
*/
// Range: 0x240130 -> 0x240140
// this: r2
void zMODEnemy::ModulePrepUse() {
    /* anonymous block */ {
        // Range: 0x240130 -> 0x240140
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeCommon.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00240200 -> 0x002403BC
*/
// Range: 0x240200 -> 0x2403BC
static void AddTweaks(char * prefix_root /* r2 */) {
    /* anonymous block */ {
        // Range: 0x240200 -> 0x2403BC
        char prefix[128]; // r29+0x120
        char prefix_base[128]; // r29+0xA0
        char strbuf[128]; // r29+0x20
        signed int i; // r16
    }
}


