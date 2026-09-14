/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00281270 -> 0x00281D18
*/
// Range: 0x281270 -> 0x281D18
void HAZ_RegisterTypes() {
    /* anonymous block */ {
        // Range: 0x281270 -> 0x281D18
        class HAZTypeRecord hazard_types[73]; // r29
        class HAZTypeRecord * rec; // r7
        signed char @19276; // @ 0x006373AC
        class HAZMachoBowlExplosion machoBowlExplosionV1; // @ 0x006556A0
        signed char @19273; // @ 0x006373A8
        class HAZPlyrBang plyrbang_v1; // @ 0x00655670
        signed char @19270; // @ 0x006373A4
        class HAZReflect reflect_v1; // @ 0x00655640
        signed char @19267; // @ 0x006373A0
        class HAZWaveRing vistoxic; // @ 0x00655610
        signed char @19264; // @ 0x0063739C
        class HAZWaveRing vissauce; // @ 0x006555E0
        signed char @19261; // @ 0x00637398
        class HAZWaveRing visoil; // @ 0x006555B0
        signed char @19258; // @ 0x00637394
        class HAZWaveRing visbile; // @ 0x00655580
        signed char @19255; // @ 0x00637390
        class HAZWaveRing vislava; // @ 0x00655550
        signed char @19252; // @ 0x0063738C
        class HAZWaveRing vischoc; // @ 0x00655520
        signed char @19249; // @ 0x00637388
        class HAZWaveRing viswater; // @ 0x006554F0
        signed char @19246; // @ 0x00637384
        class HAZDroplet visdrop; // @ 0x006554C0
        signed char @19243; // @ 0x00637380
        class HAZDroplet splish; // @ 0x00655490
        signed char @19240; // @ 0x0063737C
        class HAZWaveRing viswave; // @ 0x00655460
        signed char @19237; // @ 0x00637378
        class HAZWaveRing splash; // @ 0x00655430
        signed char @19234; // @ 0x00637374
        class HAZBowWave bowwave; // @ 0x00655400
        signed char @19231; // @ 0x00637370
        class HAZBowWave swimwake; // @ 0x006553D0
        signed char @19228; // @ 0x0063736C
        class HAZTuneFlyt tuneflyt; // @ 0x006553A0
        signed char @19225; // @ 0x00637368
        class HAZTuneBoom tuneboom; // @ 0x00655370
        signed char @19222; // @ 0x00637364
        class HAZTuneBang tunebang; // @ 0x00655340
        signed char @19219; // @ 0x00637360
        class HAZTuneBorn tuneborn; // @ 0x00655310
        signed char @19216; // @ 0x0063735C
        class HAZNyphBoom nyphboom; // @ 0x006552E0
        signed char @19213; // @ 0x00637358
        class HAZNyphToss denknife; // @ 0x006552B0
        signed char @19210; // @ 0x00637354
        class HAZGolfJunk golfjunk_e; // @ 0x00655280
        signed char @19207; // @ 0x00637350
        class HAZGolfJunk golfjunk_d; // @ 0x00655250
        signed char @19204; // @ 0x0063734C
        class HAZGolfJunk golfjunk_c; // @ 0x00655220
        signed char @19201; // @ 0x00637348
        class HAZGolfJunk golfjunk_b; // @ 0x006551F0
        signed char @19198; // @ 0x00637344
        class HAZGolfJunk golfjunk_a; // @ 0x006551C0
        signed char @19195; // @ 0x00637340
        class HAZGolfBoom golfboom; // @ 0x00655190
        signed char @19192; // @ 0x0063733C
        class HAZGolfBall golfball; // @ 0x00655160
        signed char @19189; // @ 0x00637338
        class HAZZapBoom zapboom_mervyn; // @ 0x00655130
        signed char @19186; // @ 0x00637334
        class HAZZapBoom zapboom_zapper; // @ 0x00655100
        signed char @19183; // @ 0x00637330
        class HAZZapBall zapball_mervyn; // @ 0x006550D0
        signed char @19180; // @ 0x0063732C
        class HAZZapBall zapball_zapper; // @ 0x006550A0
        signed char @19177; // @ 0x00637328
        class HAZMervlet mervlet_v3; // @ 0x00655070
        signed char @19174; // @ 0x00637324
        class HAZMervlet mervlet_v2; // @ 0x00655040
        signed char @19171; // @ 0x00637320
        class HAZMervlet mervlet_v1; // @ 0x00655010
        signed char @19168; // @ 0x0063731C
        class HAZMervBomb mervbomb_v3; // @ 0x00654FE0
        signed char @19165; // @ 0x00637318
        class HAZMervBomb mervbomb_v2; // @ 0x00654FB0
        signed char @19162; // @ 0x00637314
        class HAZMervBomb mervbomb_v1; // @ 0x00654F80
        signed char @19159; // @ 0x00637310
        class HAZPopRock popper_v3; // @ 0x00654F50
        signed char @19156; // @ 0x0063730C
        class HAZPopRock popper_v2; // @ 0x00654F20
        signed char @19153; // @ 0x00637308
        class HAZPopRock popper_v1; // @ 0x00654EF0
        signed char @19150; // @ 0x00637304
        class HAZExist spitsplash; // @ 0x00654EC0
        signed char @19147; // @ 0x00637300
        class HAZExist spitsteam; // @ 0x00654E90
        signed char @19144; // @ 0x006372FC
        class HAZIceCreamSplat icecreamsplat; // @ 0x00654E60
        signed char @19141; // @ 0x006372F8
        class HAZPuddle puddle_v3; // @ 0x00654E30
        signed char @19138; // @ 0x006372F4
        class HAZPuddle puddle_v2; // @ 0x00654E00
        signed char @19135; // @ 0x006372F0
        class HAZPuddle puddle_v1; // @ 0x00654DD0
        signed char @19132; // @ 0x006372EC
        class HAZFrogFishBlob fling_ff; // @ 0x00654DA0
        signed char @19129; // @ 0x006372E8
        class HAZFlingBlob fling_v3; // @ 0x00654D70
        signed char @19126; // @ 0x006372E4
        class HAZFlingBlob fling_v2; // @ 0x00654D40
        signed char @19123; // @ 0x006372E0
        class HAZFlingBlob fling_v1; // @ 0x00654D10
        signed char @19120; // @ 0x006372DC
        class HAZTurBoom turboom; // @ 0x00654CE0
        signed char @19117; // @ 0x006372D8
        class HAZTurBall turret_v3; // @ 0x00654CB0
        signed char @19114; // @ 0x006372D4
        class HAZTurBall turret_v2; // @ 0x00654C80
        signed char @19111; // @ 0x006372D0
        class HAZTurBall turret_v1; // @ 0x00654C50
        signed char @19108; // @ 0x006372CC
        class HAZSlamWaveLG slamwave_v3; // @ 0x00654C20
        signed char @19105; // @ 0x006372C8
        class HAZSlamWaveMD slamwave_v2; // @ 0x00654BF0
        signed char @19102; // @ 0x006372C4
        class HAZSlamWaveSM slamwave_v1; // @ 0x00654BC0
        signed char @19099; // @ 0x006372C0
        class HAZTikiBoom tikiboom; // @ 0x00654B90
        signed char @19096; // @ 0x006372BC
        class HAZBuckOBoom buckoboom; // @ 0x00654B60
        signed char @19093; // @ 0x006372B8
        class HAZSpawnGrow spawngrow; // @ 0x00654B30
        signed char @19090; // @ 0x006372B4
        class HAZSpawnBall spawnball_pt; // @ 0x00654B00
        signed char @19087; // @ 0x006372B0
        class HAZSpawnBall spawnball_tr; // @ 0x00654AD0
        signed char @19084; // @ 0x006372AC
        class HAZSpawnBall spawnball_gg; // @ 0x00654AA0
        signed char @19081; // @ 0x006372A8
        class HAZSpawnBall spawnball_xx; // @ 0x00654A70
        signed char @19078; // @ 0x006372A4
        class HAZImpact impactboom; // @ 0x00654A40
        signed char @19075; // @ 0x006372A0
        class HAZImpact impactwet; // @ 0x00654A10
        signed char @19072; // @ 0x0063729C
        class HAZImpact impact; // @ 0x006549E0
        signed char @19069; // @ 0x00637298
        class HAZExplode explode; // @ 0x006549B0
        signed char @19066; // @ 0x00637294
        class HAZExist dazed; // @ 0x00654980
        signed char @19063; // @ 0x00637290
        class HAZGeneric generic; // @ 0x00654950
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00281D20 -> 0x00281D34
*/
// Range: 0x281D20 -> 0x281D34
// this: r2
void HAZPlyrBang::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x281D20 -> 0x281D34
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00281D40 -> 0x0028248C
*/
// Range: 0x281D40 -> 0x28248C
void Update(class zNMEHazard * haz /* r19 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x281D40 -> 0x28248C
        class HAZBang * hazbang; // r16
        class xVec3 pos; // r29+0xE0
        class xMat3x3 tmp_descaled; // r29+0x90
        float dummy; // r29+0xF0
        float len2; // r29+0xF0
        float len_inv; // r29+0xF0
        float len2; // r29+0xF0
        float len_inv; // r29+0xF0
        float len2; // r29+0xF0
        float len_inv; // r29+0xF0
        class xVec3 targetEuler; // r29+0xD0
        class xVec3 ypr; // r29+0xC0
        class xMat3x3 rotMat; // r29+0x60
        float factor; // r29+0xF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282490 -> 0x00282728
*/
// Range: 0x282490 -> 0x282728
// this: r18
enum en_hazrc HAZPlyrBang::Configure(class zNMEHazard * haz /* r19 */) {
    /* anonymous block */ {
        // Range: 0x282490 -> 0x282728
        signed int rc; // r2
        class HAZBang * hazbang; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282730 -> 0x002828CC
*/
// Range: 0x282730 -> 0x2828CC
// this: r17
void HAZPlyrBang::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x282730 -> 0x2828CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002828D0 -> 0x00282A40
*/
// Range: 0x2828D0 -> 0x282A40
void RibbonUpdate(class zNMEHazard * haz /* r19 */, class HAZFXRibbon * ribdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2828D0 -> 0x282A40
        class xFXRibbon * rib; // r18
        class RibData * ribhelp; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282A40 -> 0x00282B7C
*/
// Range: 0x282A40 -> 0x282B7C
// this: r2
void HAZReflect::CollideResponse(class zNMEHazard * haz /* r17 */, signed int flg_hazcolf /* r18 */, class xSweptSphere * swdata /* r16 */, float tym_inFuture /* r29+0x60 */) {
    /* anonymous block */ {
        // Range: 0x282A40 -> 0x282B7C
        class xEnt * ent_hit; // r2
        float hitArgs[4]; // r29+0x40
        class zNMECommon * npc; // r2
        class xVec3 dir; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282B80 -> 0x00282DB4
*/
// Range: 0x282B80 -> 0x282DB4
void BoomRings(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x282B80 -> 0x282DB4
        class xVec3 pos_emit; // r29+0x50
        class xVec3 dir_emit; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282DC0 -> 0x00282DC8
*/
// Range: 0x282DC0 -> 0x282DC8
void Render() {
    /* anonymous block */ {
        // Range: 0x282DC0 -> 0x282DC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00282DD0 -> 0x002831D4
*/
// Range: 0x282DD0 -> 0x2831D4
void Upd_OwnerHoming(class zNMEHazard * haz /* r19 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x282DD0 -> 0x2831D4
        class HAZLob * hazlob; // r2
        class zNMECommon * npc_tgt; // r2
        class xVec3 dir_tgt; // r29+0x100
        float dst_travThisStep; // r4
        class xVec3 vec_dpos; // r29+0xF0
        class xVec3 pos_haz; // r29+0xE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002831E0 -> 0x0028340C
*/
// Range: 0x2831E0 -> 0x28340C
void Upd_Ballistic(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2831E0 -> 0x28340C
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r2
        float keepFlightTime; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00283410 -> 0x00283874
*/
// Range: 0x283410 -> 0x283874
// this: r19
void HAZReflect::Update(class zNMEHazard * haz /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x283410 -> 0x283874
        signed int weAreHoming; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00283880 -> 0x00283B04
*/
// Range: 0x283880 -> 0x283B04
// this: r6
enum en_hazrc HAZReflect::Configure(class zNMEHazard * haz /* r19 */) {
    /* anonymous block */ {
        // Range: 0x283880 -> 0x283B04
        signed int rc; // r2
        class HAZLob * hazlob; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00283B10 -> 0x00283D3C
*/
// Range: 0x283B10 -> 0x283D3C
// this: r17
void HAZReflect::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x283B10 -> 0x283D3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00283D40 -> 0x00283DF4
*/
// Range: 0x283D40 -> 0x283DF4
// this: r2
void HAZDroplet::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x283D40 -> 0x283DF4
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00283E00 -> 0x00283F0C
*/
// Range: 0x283E00 -> 0x283F0C
void Update(class zNMEHazard * haz /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x283E00 -> 0x283F0C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00283F10 -> 0x00284040
*/
// Range: 0x283F10 -> 0x284040
// this: r6
enum en_hazrc HAZDroplet::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x283F10 -> 0x284040
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00284040 -> 0x002841BC
*/
// Range: 0x284040 -> 0x2841BC
// this: r17
void HAZDroplet::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x284040 -> 0x2841BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002841C0 -> 0x002842F0
*/
// Range: 0x2841C0 -> 0x2842F0
void LaunchDroplets(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2841C0 -> 0x2842F0
        enum en_hazfrag typ_frag; // r6
        class zShrapnelAsset * shrap; // r2
        float spd_emit; // r29+0x40
        class xVec3 vel_emit; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002842F0 -> 0x0028455C
*/
// Range: 0x2842F0 -> 0x28455C
// this: r19
void HAZWaveRing::Render(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2842F0 -> 0x28455C
        class HAZTypical * typical; // r2
        float rad; // r21
        class xVec3 scale; // r29+0xA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00284560 -> 0x002845D8
*/
// Range: 0x284560 -> 0x2845D8
// this: r2
void HAZWaveRing::Update(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x284560 -> 0x2845D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002845E0 -> 0x00284710
*/
// Range: 0x2845E0 -> 0x284710
// this: r6
enum en_hazrc HAZWaveRing::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2845E0 -> 0x284710
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00284710 -> 0x0028488C
*/
// Range: 0x284710 -> 0x28488C
// this: r17
void HAZWaveRing::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x284710 -> 0x28488C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00284890 -> 0x00284944
*/
// Range: 0x284890 -> 0x284944
// this: r2
void HAZBowWave::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x284890 -> 0x284944
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00284950 -> 0x00284A5C
*/
// Range: 0x284950 -> 0x284A5C
void Update(class zNMEHazard * haz /* r2 */, float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x284950 -> 0x284A5C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00284A60 -> 0x00284B90
*/
// Range: 0x284A60 -> 0x284B90
// this: r6
enum en_hazrc HAZBowWave::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x284A60 -> 0x284B90
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00284B90 -> 0x00284D0C
*/
// Range: 0x284B90 -> 0x284D0C
// this: r17
void HAZBowWave::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x284B90 -> 0x284D0C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00284D10 -> 0x00285260
*/
// Range: 0x284D10 -> 0x285260
void BubbleBlast(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x284D10 -> 0x285260
        class xVec3 * buffer; // r21
        class xVec3 pos_base; // r29+0x1A0
        class xVec3 * buf_vel; // r20
        enum en_plyrpup pup; // r2
        signed int seg; // r29+0xB0
        float ang_wedge; // r29+0x1B0
        signed int i; // r19
        float ang_curr; // r29+0x1B0
        float spd_y; // r29+0x1B0
        float pythag; // r29+0x1B0
        class xVec3 dir_dest; // r29+0x190
        class xVec3 & pos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00285260 -> 0x00285320
*/
// Range: 0x285260 -> 0x285320
// this: r2
void HAZTuneBoom::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x285260 -> 0x285320
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00285320 -> 0x00285518
*/
// Range: 0x285320 -> 0x285518
// this: r18
void HAZTuneBoom::Update(class zNMEHazard * haz /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x285320 -> 0x285518
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00285520 -> 0x002855B4
*/
// Range: 0x285520 -> 0x2855B4
// this: r3
enum en_hazrc HAZTuneBoom::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x285520 -> 0x2855B4
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002855C0 -> 0x0028573C
*/
// Range: 0x2855C0 -> 0x28573C
// this: r17
void HAZTuneBoom::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x2855C0 -> 0x28573C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00285740 -> 0x0028581C
*/
// Range: 0x285740 -> 0x28581C
// this: r2
void HAZTuneFlyt::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x285740 -> 0x28581C
        class HAZTypical * typical; // r2
        float alfa; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00285820 -> 0x00285B1C
*/
// Range: 0x285820 -> 0x285B1C
void Update(class zNMEHazard * haz /* r2 */, float dt /* r29+0xB0 */) {
    /* anonymous block */ {
        // Range: 0x285820 -> 0x285B1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00285B20 -> 0x00285BB0
*/
// Range: 0x285B20 -> 0x285BB0
// this: r3
enum en_hazrc HAZTuneFlyt::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x285B20 -> 0x285BB0
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00285BB0 -> 0x00285D2C
*/
// Range: 0x285BB0 -> 0x285D2C
// this: r17
void HAZTuneFlyt::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x285BB0 -> 0x285D2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00285D30 -> 0x00286398
*/
// Range: 0x285D30 -> 0x286398
void BubbleCannon(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x285D30 -> 0x286398
        class xVec3 * buffer; // r29+0xC0
        class xVec3 pos_base; // r29+0x210
        class xVec3 dir_axis; // r29+0x200
        class xVec3 dir_perp; // r29+0x1F0
        class xVec3 dir_orth; // r29+0x1E0
        class xVec3 * buf_vel; // r29+0xB0
        signed int i; // r21
        float ang_curr; // r29+0x220
        float rad_jitr; // r29+0x220
        float rad_curr; // r29+0x220
        class xVec3 dir_dest; // r29+0x1D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002863A0 -> 0x0028647C
*/
// Range: 0x2863A0 -> 0x28647C
// this: r2
void HAZTuneBang::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2863A0 -> 0x28647C
        class HAZTypical * typical; // r2
        float alfa; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00286480 -> 0x002864D8
*/
// Range: 0x286480 -> 0x2864D8
// this: r2
void HAZTuneBang::Update(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x286480 -> 0x2864D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002864E0 -> 0x00286570
*/
// Range: 0x2864E0 -> 0x286570
// this: r3
enum en_hazrc HAZTuneBang::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2864E0 -> 0x286570
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00286570 -> 0x00286624
*/
// Range: 0x286570 -> 0x286624
// this: r2
void HAZTuneBorn::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x286570 -> 0x286624
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00286630 -> 0x00287060
*/
// Range: 0x286630 -> 0x287060
void Update(class zNMEHazard * haz /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x286630 -> 0x287060
        enum en_plyrpup pup; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00287060 -> 0x002870EC
*/
// Range: 0x287060 -> 0x2870EC
// this: r3
enum en_hazrc HAZTuneBorn::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x287060 -> 0x2870EC
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002870F0 -> 0x0028735C
*/
// Range: 0x2870F0 -> 0x28735C
// this: r17
void HAZTuneBorn::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x2870F0 -> 0x28735C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00287360 -> 0x00287494
*/
// Range: 0x287360 -> 0x287494
void ViciousFlames(class zNMEHazard * haz /* r2 */, float dt /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x287360 -> 0x287494
        class xVec3 dir_emit; // r29+0x20
        class xVec3 pos_emit; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002874A0 -> 0x0028756C
*/
// Range: 0x2874A0 -> 0x28756C
// this: r2
void HAZNyphBoom::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2874A0 -> 0x28756C
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00287570 -> 0x002877DC
*/
// Range: 0x287570 -> 0x2877DC
// this: r18
void HAZNyphBoom::Update(class zNMEHazard * haz /* r17 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x287570 -> 0x2877DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002877E0 -> 0x00287878
*/
// Range: 0x2877E0 -> 0x287878
// this: r6
enum en_hazrc HAZNyphBoom::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2877E0 -> 0x287878
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00287880 -> 0x002879FC
*/
// Range: 0x287880 -> 0x2879FC
// this: r17
void HAZNyphBoom::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x287880 -> 0x2879FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00287A00 -> 0x00287D84
*/
// Range: 0x287A00 -> 0x287D84
void Recon_Vicious(class zNMEHazard * haz /* r21 */, signed int doStick /* r20 */) {
    /* anonymous block */ {
        // Range: 0x287A00 -> 0x287D84
        class HAZLob * hazlob; // r2
        float rad_old; // r20
        class xVec3 dir_norm; // r29+0xD0
        class xMat4x3 mat_impact; // r29+0x80
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00287D90 -> 0x0028804C
*/
// Range: 0x287D90 -> 0x28804C
// this: r19
void HAZNyphToss::EndOfLifespan(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x287D90 -> 0x28804C
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r2
        class xVec3 whence; // r29+0x60
        class xVec3 whence; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00288050 -> 0x00288190
*/
// Range: 0x288050 -> 0x288190
// this: r2
void HAZNyphToss::CollideResponse(class zNMEHazard * haz /* r16 */, signed int flg_hazcolf /* r2 */, class xSweptSphere * swdata /* r2 */, float tym_inFuture /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x288050 -> 0x288190
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r8
        float tym_alive; // r29+0x20
        float tym_endPtEval; // r7
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00288190 -> 0x00288244
*/
// Range: 0x288190 -> 0x288244
// this: r2
void HAZNyphToss::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x288190 -> 0x288244
        class HAZLob * hazlob; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00288250 -> 0x00288738
*/
// Range: 0x288250 -> 0x288738
// this: r16
void HAZNyphToss::Update(class zNMEHazard * haz /* r19 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x288250 -> 0x288738
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r2
        float tym; // r29+0x130
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00288740 -> 0x00288AD4
*/
// Range: 0x288740 -> 0x288AD4
// this: r17
enum en_hazrc HAZNyphToss::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x288740 -> 0x288AD4
        signed int rc; // r2
        class HAZCollide * hazcol; // r2
        class HAZLob * hazlob; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00288AE0 -> 0x00288CAC
*/
// Range: 0x288AE0 -> 0x288CAC
// this: r17
void HAZNyphToss::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x288AE0 -> 0x288CAC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00288CB0 -> 0x00288D28
*/
// Range: 0x288CB0 -> 0x288D28
// this: r16
void HAZNyphToss::ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x288CB0 -> 0x288D28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00288D30 -> 0x00288DF0
*/
// Range: 0x288D30 -> 0x288DF0
// this: r2
void HAZGolfJunk::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x288D30 -> 0x288DF0
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00288DF0 -> 0x002891D0
*/
// Range: 0x288DF0 -> 0x2891D0
void Update(class zNMEHazard * haz /* r17 */, float dt /* r29+0x130 */) {
    /* anonymous block */ {
        // Range: 0x288DF0 -> 0x2891D0
        class HAZTypical * typical; // r2
        enum en_denstage okStages[4]; // r29+0x100
        class HAZTypical * typdat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002891D0 -> 0x002892A0
*/
// Range: 0x2891D0 -> 0x2892A0
// this: r6
enum en_hazrc HAZGolfJunk::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2891D0 -> 0x2892A0
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002892A0 -> 0x002892B4
*/
// Range: 0x2892A0 -> 0x2892B4
// this: r2
void HAZGolfBoom::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2892A0 -> 0x2892B4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002892C0 -> 0x002896EC
*/
// Range: 0x2892C0 -> 0x2896EC
// this: r16
void HAZGolfBoom::Update(class zNMEHazard * haz /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2892C0 -> 0x2896EC
        class HAZTypical * typical; // r2
        enum en_denstage okStages[4]; // r29+0x50
        float spd; // r29+0xE0
        class xVec3 vel; // r29+0xD0
        class xVec3 pos; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002896F0 -> 0x00289788
*/
// Range: 0x2896F0 -> 0x289788
// this: r3
enum en_hazrc HAZGolfBoom::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2896F0 -> 0x289788
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00289790 -> 0x0028990C
*/
// Range: 0x289790 -> 0x28990C
// this: r17
void HAZGolfBoom::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x289790 -> 0x28990C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00289910 -> 0x0028A220
*/
// Range: 0x289910 -> 0x28A220
void EndOfLifespan(class zNMEHazard * haz /* r21 */) {
    /* anonymous block */ {
        // Range: 0x289910 -> 0x28A220
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r2
        class xVec3 whence; // r29+0x170
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028A220 -> 0x0028A228
*/
// Range: 0x28A220 -> 0x28A228
void GolfCollision(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28A220 -> 0x28A228
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028A230 -> 0x0028A2DC
*/
// Range: 0x28A230 -> 0x28A2DC
// this: r2
void HAZGolfBall::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28A230 -> 0x28A2DC
        class HAZLob * hazlob; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028A2E0 -> 0x0028AA18
*/
// Range: 0x28A2E0 -> 0x28AA18
// this: r20
void HAZGolfBall::Update(class zNMEHazard * haz /* r19 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x28A2E0 -> 0x28AA18
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r2
        class zNMEDennis * dennis; // r2
        enum en_denstage okStages[4]; // r29+0x130
        signed int rc; // r2
        float tym; // r29+0x1F0
        class xVec3 pos_emit; // r29+0x1E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028AA20 -> 0x0028AC1C
*/
// Range: 0x28AA20 -> 0x28AC1C
// this: r19
enum en_hazrc HAZGolfBall::Configure(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x28AA20 -> 0x28AC1C
        signed int rc; // r2
        class HAZLob * hazlob; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028AC20 -> 0x0028AD9C
*/
// Range: 0x28AC20 -> 0x28AD9C
// this: r17
void HAZGolfBall::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x28AC20 -> 0x28AD9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028ADA0 -> 0x0028AE18
*/
// Range: 0x28ADA0 -> 0x28AE18
// this: r16
void HAZGolfBall::ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x28ADA0 -> 0x28AE18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028AE20 -> 0x0028AEC0
*/
// Range: 0x28AE20 -> 0x28AEC0
// this: r2
void HAZZapBoom::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28AE20 -> 0x28AEC0
        class HAZLob * hazlob; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028AEC0 -> 0x0028B5A0
*/
// Range: 0x28AEC0 -> 0x28B5A0
void Update(class zNMEHazard * haz /* r20 */, float dt /* r25 */) {
    /* anonymous block */ {
        // Range: 0x28AEC0 -> 0x28B5A0
        class HAZTypical * typdat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028B5A0 -> 0x0028B8A4
*/
// Range: 0x28B5A0 -> 0x28B8A4
// this: r6
enum en_hazrc HAZZapBoom::Configure(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x28B5A0 -> 0x28B8A4
        signed int rc; // r2
        class xVec3 spin; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028B8B0 -> 0x0028B9F4
*/
// Range: 0x28B8B0 -> 0x28B9F4
// this: r17
void HAZZapBoom::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x28B8B0 -> 0x28B9F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028BA00 -> 0x0028BB30
*/
// Range: 0x28BA00 -> 0x28BB30
void RibbonUpdate(class zNMEHazard * haz /* r17 */, class HAZFXRibbon * ribdata /* r16 */) {
    /* anonymous block */ {
        // Range: 0x28BA00 -> 0x28BB30
        float scale; // r21
        float alpha; // r29+0x70
        class xVec3 pos_emit; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028BB30 -> 0x0028BE20
*/
// Range: 0x28BB30 -> 0x28BE20
// this: r2
void HAZZapBall::ReconToZapBoom(class zNMEHazard * haz /* r17 */, class xVec3 * dir_norm /* r16 */) {
    /* anonymous block */ {
        // Range: 0x28BB30 -> 0x28BE20
        enum en_haztyp htyp; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028BE20 -> 0x0028BFD4
*/
// Range: 0x28BE20 -> 0x28BFD4
// this: r18
void HAZZapBall::ZapBallCollision(class zNMEHazard * haz /* r17 */, float dt /* r29+0x50 */) {
    /* anonymous block */ {
        // Range: 0x28BE20 -> 0x28BFD4
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r2
        class xVec3 whence; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028BFE0 -> 0x0028C080
*/
// Range: 0x28BFE0 -> 0x28C080
// this: r2
void HAZZapBall::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28BFE0 -> 0x28C080
        class HAZLob * hazlob; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028C080 -> 0x0028C678
*/
// Range: 0x28C080 -> 0x28C678
// this: r19
void HAZZapBall::Update(class zNMEHazard * haz /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x28C080 -> 0x28C678
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r2
        float keepFlightTime; // r21
        float tym; // r29+0x170
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028C680 -> 0x0028CAC4
*/
// Range: 0x28C680 -> 0x28CAC4
// this: r19
enum en_hazrc HAZZapBall::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x28C680 -> 0x28CAC4
        signed int rc; // r2
        class HAZLob * hazlob; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028CAD0 -> 0x0028CC9C
*/
// Range: 0x28CAD0 -> 0x28CC9C
// this: r17
void HAZZapBall::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x28CAD0 -> 0x28CC9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028CCA0 -> 0x0028D22C
*/
// Range: 0x28CCA0 -> 0x28D22C
void EndOfLifespan(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x28CCA0 -> 0x28D22C
        class xParabola * parab; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028D230 -> 0x0028D2D8
*/
// Range: 0x28D230 -> 0x28D2D8
// this: r2
void HAZMervlet::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28D230 -> 0x28D2D8
        class HAZLob * hazlob; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028D2E0 -> 0x0028DB84
*/
// Range: 0x28D2E0 -> 0x28DB84
// this: r20
void HAZMervlet::Update(class zNMEHazard * haz /* r19 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x28D2E0 -> 0x28DB84
        class HAZLob * hazlob; // r18
        class xParabola * parab; // r17
        float tym; // r29+0x1D0
        class xVec3 vel; // r29+0x1C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028DB90 -> 0x0028DDAC
*/
// Range: 0x28DB90 -> 0x28DDAC
// this: r19
enum en_hazrc HAZMervlet::Configure(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x28DB90 -> 0x28DDAC
        signed int rc; // r2
        class HAZLob * hazlob; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028DDB0 -> 0x0028DF2C
*/
// Range: 0x28DDB0 -> 0x28DF2C
// this: r17
void HAZMervlet::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x28DDB0 -> 0x28DF2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028DF30 -> 0x0028DFA8
*/
// Range: 0x28DF30 -> 0x28DFA8
// this: r16
void HAZMervlet::ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x28DF30 -> 0x28DFA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028DFB0 -> 0x0028E800
*/
// Range: 0x28DFB0 -> 0x28E800
// this: r2
signed int HAZMervBomb::KickBomblets(class zNMEHazard * parent /* r20 */) {
    /* anonymous block */ {
        // Range: 0x28DFB0 -> 0x28E800
        signed int counted; // r19
        enum en_haztyp ht_child; // r21
        signed int surround; // r22
        class xVec3 pos_a; // r29+0x1A0
        class xVec3 pos_b; // r29+0x190
        class xVec3 delta; // r29+0x180
        float ang_curr; // r20
        signed int i; // r18
        class zNMEHazard * haz; // r17
        float tym_flight; // r3
        class xVec3 delta; // r29+0x170
        class xVec3 pos_tgt; // r29+0x160
        class xVec3 pos_tgt; // r29+0x150
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028E800 -> 0x0028E8B4
*/
// Range: 0x28E800 -> 0x28E8B4
// this: r2
void HAZMervBomb::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28E800 -> 0x28E8B4
        class HAZLob * hazlob; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028E8C0 -> 0x0028F5EC
*/
// Range: 0x28E8C0 -> 0x28F5EC
// this: r20
void HAZMervBomb::Update(class zNMEHazard * haz /* r19 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x28E8C0 -> 0x28F5EC
        class HAZLob * hazlob; // r18
        class xParabola * parab; // r17
        signed int kickit; // r2
        float keepFlightTime; // r29+0x210
        float tym; // r29+0x210
        class xVec3 vel; // r29+0x200
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F5F0 -> 0x0028F814
*/
// Range: 0x28F5F0 -> 0x28F814
// this: r19
enum en_hazrc HAZMervBomb::Configure(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x28F5F0 -> 0x28F814
        signed int rc; // r2
        class HAZLob * hazlob; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F820 -> 0x0028F99C
*/
// Range: 0x28F820 -> 0x28F99C
// this: r17
void HAZMervBomb::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x28F820 -> 0x28F99C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028F9A0 -> 0x0028FA18
*/
// Range: 0x28F9A0 -> 0x28FA18
// this: r16
void HAZMervBomb::ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x28F9A0 -> 0x28FA18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028FA20 -> 0x0028FDDC
*/
// Range: 0x28FA20 -> 0x28FDDC
void RockShatter(class zNMEHazard * haz /* r17 */, class xVec3 * dir_emit /* r16 */) {
    /* anonymous block */ {
        // Range: 0x28FA20 -> 0x28FDDC
        class xVec3 vol_region; // r29+0xA0
        class xVec3 pos_home; // r29+0x90
        class xVec3 pos_emit; // r29+0x80
        signed int i; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028FDE0 -> 0x0028FF90
*/
// Range: 0x28FDE0 -> 0x28FF90
// this: r2
void HAZPopRock::EndOfLifespan(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x28FDE0 -> 0x28FF90
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r2
        class xVec3 whence; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0028FF90 -> 0x00290040
*/
// Range: 0x28FF90 -> 0x290040
// this: r2
void HAZPopRock::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x28FF90 -> 0x290040
        class HAZLob * hazlob; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00290040 -> 0x00290640
*/
// Range: 0x290040 -> 0x290640
// this: r17
void HAZPopRock::Update(class zNMEHazard * haz /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x290040 -> 0x290640
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r2
        float tym; // r29+0x180
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00290640 -> 0x00290864
*/
// Range: 0x290640 -> 0x290864
// this: r19
enum en_hazrc HAZPopRock::Configure(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x290640 -> 0x290864
        signed int rc; // r2
        class HAZLob * hazlob; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00290870 -> 0x002909EC
*/
// Range: 0x290870 -> 0x2909EC
// this: r17
void HAZPopRock::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x290870 -> 0x2909EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002909F0 -> 0x00290B60
*/
// Range: 0x2909F0 -> 0x290B60
// this: r2
void HAZIceCreamSplat::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2909F0 -> 0x290B60
        class HAZTypical * typical; // r2
        float alfa; // r29+0x30
        float pct; // r1
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00290B60 -> 0x00290FA4
*/
// Range: 0x290B60 -> 0x290FA4
// this: r16
void HAZIceCreamSplat::Update(class zNMEHazard * haz /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x290B60 -> 0x290FA4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00290FB0 -> 0x00291024
*/
// Range: 0x290FB0 -> 0x291024
// this: r3
enum en_hazrc HAZIceCreamSplat::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x290FB0 -> 0x291024
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00291030 -> 0x002911AC
*/
// Range: 0x291030 -> 0x2911AC
// this: r17
void HAZIceCreamSplat::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x291030 -> 0x2911AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002911B0 -> 0x00291458
*/
// Range: 0x2911B0 -> 0x291458
// this: r2
void HAZFrogFishBlob::ReconBlob(class zNMEHazard * haz /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2911B0 -> 0x291458
        class xVec3 dir_norm; // r29+0x70
        enum en_haztyp ht; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00291460 -> 0x002916E8
*/
// Range: 0x291460 -> 0x2916E8
// this: r17
void HAZFrogFishBlob::EndOfLifespan(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x291460 -> 0x2916E8
        class xParabola * parab; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002916F0 -> 0x002917A0
*/
// Range: 0x2916F0 -> 0x2917A0
// this: r2
void HAZFrogFishBlob::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2916F0 -> 0x2917A0
        class HAZLob * hazlob; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002917A0 -> 0x00291CF0
*/
// Range: 0x2917A0 -> 0x291CF0
// this: r2
void HAZFrogFishBlob::Update(class zNMEHazard * haz /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2917A0 -> 0x291CF0
        class HAZLob * hazlob; // r17
        class xParabola * parab; // r16
        float tym; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00291CF0 -> 0x00291F14
*/
// Range: 0x291CF0 -> 0x291F14
// this: r19
enum en_hazrc HAZFrogFishBlob::Configure(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x291CF0 -> 0x291F14
        signed int rc; // r2
        class HAZLob * hazlob; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00291F20 -> 0x0029209C
*/
// Range: 0x291F20 -> 0x29209C
// this: r17
void HAZFrogFishBlob::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x291F20 -> 0x29209C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002920A0 -> 0x002922C8
*/
// Range: 0x2920A0 -> 0x2922C8
float UpdRadius(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2920A0 -> 0x2922C8
        class HAZTypical * typical; // r4
        float rad_mid; // r4
        float rat; // r29
        float pct; // r1
        float pct; // r1
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002922D0 -> 0x002924B8
*/
// Range: 0x2922D0 -> 0x2924B8
// this: r2
void HAZPuddle::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2922D0 -> 0x2924B8
        class HAZTypical * typical; // r2
        float alfa; // r4
        float pct; // r1
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002924C0 -> 0x00292AF8
*/
// Range: 0x2924C0 -> 0x292AF8
// this: r18
void HAZPuddle::Update(class zNMEHazard * haz /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2924C0 -> 0x292AF8
        class HAZTypical * typdat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00292B00 -> 0x00292C18
*/
// Range: 0x292B00 -> 0x292C18
// this: r6
enum en_hazrc HAZPuddle::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x292B00 -> 0x292C18
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00292C20 -> 0x00292DFC
*/
// Range: 0x292C20 -> 0x292DFC
// this: r17
void HAZPuddle::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x292C20 -> 0x292DFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00292E00 -> 0x002931C0
*/
// Range: 0x292E00 -> 0x2931C0
// this: r2
void HAZFlingBlob::ReconBlob(class zNMEHazard * haz /* r17 */, signed int forceItAnyway /* r16 */) {
    /* anonymous block */ {
        // Range: 0x292E00 -> 0x2931C0
        class xVec3 dir_norm; // r29+0x80
        enum en_haztyp ht; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002931C0 -> 0x00293408
*/
// Range: 0x2931C0 -> 0x293408
void ShrapSplatter(class zNMEHazard * haz /* r2 */, class xVec3 * dir_up /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2931C0 -> 0x293408
        enum en_hazfrag ftyp; // r7
        class zShrapnelAsset * shrap; // r2
        class xParabola * parab; // r2
        class xVec3 vel_push; // r29+0x70
        class xVec3 vec_tmp; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00293410 -> 0x00293708
*/
// Range: 0x293410 -> 0x293708
// this: r17
void HAZFlingBlob::EndOfLifespan(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x293410 -> 0x293708
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r2
        class xVec3 whence; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00293710 -> 0x002937F4
*/
// Range: 0x293710 -> 0x2937F4
// this: r2
void HAZFlingBlob::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x293710 -> 0x2937F4
        class HAZLob * hazlob; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00293800 -> 0x002941A4
*/
// Range: 0x293800 -> 0x2941A4
// this: r20
void HAZFlingBlob::Update(class zNMEHazard * haz /* r19 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x293800 -> 0x2941A4
        class HAZLob * hazlob; // r2
        class xParabola * parab; // r2
        signed int byebye; // r2
        float tym; // r29+0x160
        class xVec3 pos_emit; // r29+0x148
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002941B0 -> 0x00294478
*/
// Range: 0x2941B0 -> 0x294478
// this: r19
enum en_hazrc HAZFlingBlob::Configure(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x2941B0 -> 0x294478
        signed int rc; // r2
        class HAZLob * hazlob; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00294480 -> 0x0029465C
*/
// Range: 0x294480 -> 0x29465C
// this: r17
void HAZFlingBlob::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x294480 -> 0x29465C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00294660 -> 0x002946D8
*/
// Range: 0x294660 -> 0x2946D8
// this: r16
void HAZFlingBlob::ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x294660 -> 0x2946D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002946E0 -> 0x00294B6C
*/
// Range: 0x2946E0 -> 0x294B6C
// this: r16
void HAZSlamWaveLG::Update(class zNMEHazard * haz /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2946E0 -> 0x294B6C
        class HAZTypical * typical; // r2
        class xVec3 pos; // r29+0x110
        float spd; // r29+0x120
        class xVec3 vel; // r29+0x100
        class xVec3 pos; // r29+0xF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00294B70 -> 0x00294C04
*/
// Range: 0x294B70 -> 0x294C04
// this: r3
enum en_hazrc HAZSlamWaveLG::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x294B70 -> 0x294C04
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00294C10 -> 0x00294D8C
*/
// Range: 0x294C10 -> 0x294D8C
// this: r17
void HAZSlamWaveLG::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x294C10 -> 0x294D8C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00294D90 -> 0x0029521C
*/
// Range: 0x294D90 -> 0x29521C
// this: r16
void HAZSlamWaveMD::Update(class zNMEHazard * haz /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x294D90 -> 0x29521C
        class HAZTypical * typical; // r2
        class xVec3 pos; // r29+0x110
        float spd; // r29+0x120
        class xVec3 vel; // r29+0x100
        class xVec3 pos; // r29+0xF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00295220 -> 0x002952B4
*/
// Range: 0x295220 -> 0x2952B4
// this: r3
enum en_hazrc HAZSlamWaveMD::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x295220 -> 0x2952B4
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002952C0 -> 0x0029543C
*/
// Range: 0x2952C0 -> 0x29543C
// this: r17
void HAZSlamWaveMD::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x2952C0 -> 0x29543C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00295440 -> 0x002958CC
*/
// Range: 0x295440 -> 0x2958CC
// this: r16
void HAZSlamWaveSM::Update(class zNMEHazard * haz /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x295440 -> 0x2958CC
        class HAZTypical * typical; // r2
        class xVec3 pos; // r29+0x110
        float spd; // r29+0x120
        class xVec3 vel; // r29+0x100
        class xVec3 pos; // r29+0xF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002958D0 -> 0x0029596C
*/
// Range: 0x2958D0 -> 0x29596C
// this: r3
enum en_hazrc HAZSlamWaveSM::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2958D0 -> 0x29596C
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00295970 -> 0x00295AEC
*/
// Range: 0x295970 -> 0x295AEC
// this: r17
void HAZSlamWaveSM::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x295970 -> 0x295AEC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00295AF0 -> 0x00295BD8
*/
// Range: 0x295AF0 -> 0x295BD8
// this: r2
void HAZTurBoom::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x295AF0 -> 0x295BD8
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00295BE0 -> 0x00296030
*/
// Range: 0x295BE0 -> 0x296030
// this: r16
void HAZTurBoom::Update(class zNMEHazard * haz /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x295BE0 -> 0x296030
        class HAZTypical * typdat; // r2
        float radius; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00296030 -> 0x002960AC
*/
// Range: 0x296030 -> 0x2960AC
// this: r6
enum en_hazrc HAZTurBoom::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x296030 -> 0x2960AC
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002960B0 -> 0x0029625C
*/
// Range: 0x2960B0 -> 0x29625C
// this: r17
void HAZTurBoom::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x2960B0 -> 0x29625C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00296260 -> 0x002967EC
*/
// Range: 0x296260 -> 0x2967EC
void EndOfLifespan(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x296260 -> 0x2967EC
        class xParabola * parab; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002967F0 -> 0x00296898
*/
// Range: 0x2967F0 -> 0x296898
// this: r2
void HAZTurBall::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2967F0 -> 0x296898
        class HAZLob * hazlob; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002968A0 -> 0x00297144
*/
// Range: 0x2968A0 -> 0x297144
// this: r16
void HAZTurBall::Update(class zNMEHazard * haz /* r20 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2968A0 -> 0x297144
        class HAZLob * hazlob; // r19
        class xParabola * parab; // r17
        float keepFlightTime; // r29+0x1E0
        float tym; // r29+0x1E0
        class xVec3 pos_here; // r29+0x1D0
        class xVec3 pos_past; // r29+0x1C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297150 -> 0x00297374
*/
// Range: 0x297150 -> 0x297374
// this: r19
enum en_hazrc HAZTurBall::Configure(class zNMEHazard * haz /* r18 */) {
    /* anonymous block */ {
        // Range: 0x297150 -> 0x297374
        signed int rc; // r2
        class HAZLob * hazlob; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297380 -> 0x002973F8
*/
// Range: 0x297380 -> 0x2973F8
// this: r16
void HAZTurBall::ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x297380 -> 0x2973F8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297400 -> 0x002974B4
*/
// Range: 0x297400 -> 0x2974B4
// this: r2
void HAZSpawnGrow::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x297400 -> 0x2974B4
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002974C0 -> 0x00297EF0
*/
// Range: 0x2974C0 -> 0x297EF0
void Update(class zNMEHazard * haz /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2974C0 -> 0x297EF0
        enum en_plyrpup pup; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297EF0 -> 0x00297F7C
*/
// Range: 0x297EF0 -> 0x297F7C
// this: r3
enum en_hazrc HAZSpawnGrow::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x297EF0 -> 0x297F7C
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00297F80 -> 0x002981EC
*/
// Range: 0x297F80 -> 0x2981EC
// this: r17
void HAZSpawnGrow::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x297F80 -> 0x2981EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002981F0 -> 0x002984D4
*/
// Range: 0x2981F0 -> 0x2984D4
void RibbonUpdate(class zNMEHazard * haz /* r19 */, class HAZFXRibbon * ribdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2981F0 -> 0x2984D4
        class xFXRibbon * rib; // r18
        class RibData * ribhelp; // r2
        float scale; // r22
        float alpha; // r29+0xD0
        float ang; // r20
        class xVec3 orient; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002984E0 -> 0x00298594
*/
// Range: 0x2984E0 -> 0x298594
// this: r2
void HAZSpawnBall::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2984E0 -> 0x298594
        class HAZLob * hazlob; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002985A0 -> 0x002989F8
*/
// Range: 0x2985A0 -> 0x2989F8
// this: r19
void HAZSpawnBall::Update(class zNMEHazard * haz /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x2985A0 -> 0x2989F8
        class HAZLob * hazlob; // r17
        class xParabola * parab; // r16
        float rat; // r29+0x130
        float keepFlightTime; // r29+0x130
        float tym; // r29+0x130
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00298A00 -> 0x00298D4C
*/
// Range: 0x298A00 -> 0x298D4C
// this: r18
enum en_hazrc HAZSpawnBall::Configure(class zNMEHazard * haz /* r19 */) {
    /* anonymous block */ {
        // Range: 0x298A00 -> 0x298D4C
        signed int rc; // r2
        class HAZLob * hazlob; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00298D50 -> 0x00298EEC
*/
// Range: 0x298D50 -> 0x298EEC
// this: r17
void HAZSpawnBall::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x298D50 -> 0x298EEC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00298EF0 -> 0x00298FFC
*/
// Range: 0x298EF0 -> 0x298FFC
// this: r16
void HAZImpact::Update(class zNMEHazard * haz /* r17 */) {
    /* anonymous block */ {
        // Range: 0x298EF0 -> 0x298FFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299000 -> 0x00299098
*/
// Range: 0x299000 -> 0x299098
// this: r3
enum en_hazrc HAZImpact::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x299000 -> 0x299098
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002990A0 -> 0x00299250
*/
// Range: 0x2990A0 -> 0x299250
// this: r17
unsigned char ExplodeCollChkData::operator()(class xEnt & ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2990A0 -> 0x299250
        class xCollis colrec; // r29+0x40
        class zNMECommon * npc_hit; // r2
        enum en_npcdmg typ_dmg; // r2
        enum en_npctyp ntyp_hit; // r2
        float hitArgs[4]; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299250 -> 0x00299338
*/
// Range: 0x299250 -> 0x299338
// this: r2
void HAZTikiBoom::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x299250 -> 0x299338
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299340 -> 0x00299A04
*/
// Range: 0x299340 -> 0x299A04
// this: r17
void HAZTikiBoom::Update(class zNMEHazard * haz /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x299340 -> 0x299A04
        float rad_collide; // r21
        float rad_collide; // r21
        float parms[4]; // r29+0x210
        float hitArgs[4]; // r29+0x200
        float radius; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299A10 -> 0x00299A8C
*/
// Range: 0x299A10 -> 0x299A8C
// this: r6
enum en_hazrc HAZTikiBoom::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x299A10 -> 0x299A8C
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299A90 -> 0x00299C3C
*/
// Range: 0x299A90 -> 0x299C3C
// this: r17
void HAZTikiBoom::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x299A90 -> 0x299C3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299C40 -> 0x00299D28
*/
// Range: 0x299C40 -> 0x299D28
// this: r2
void HAZMachoBowlExplosion::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x299C40 -> 0x299D28
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00299D30 -> 0x0029A184
*/
// Range: 0x299D30 -> 0x29A184
// this: r16
void HAZMachoBowlExplosion::Update(class zNMEHazard * haz /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x299D30 -> 0x29A184
        class HAZTypical * typdat; // r2
        float radius; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A190 -> 0x0029A208
*/
// Range: 0x29A190 -> 0x29A208
// this: r6
enum en_hazrc HAZMachoBowlExplosion::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29A190 -> 0x29A208
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A210 -> 0x0029A3BC
*/
// Range: 0x29A210 -> 0x29A3BC
// this: r17
void HAZMachoBowlExplosion::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x29A210 -> 0x29A3BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A3C0 -> 0x0029A4A8
*/
// Range: 0x29A3C0 -> 0x29A4A8
// this: r2
void HAZBuckOBoom::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29A3C0 -> 0x29A4A8
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A4B0 -> 0x0029A930
*/
// Range: 0x29A4B0 -> 0x29A930
// this: r16
void HAZBuckOBoom::Update(class zNMEHazard * haz /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x29A4B0 -> 0x29A930
        float rad_collide; // r21
        float radius; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A930 -> 0x0029A9AC
*/
// Range: 0x29A930 -> 0x29A9AC
// this: r6
enum en_hazrc HAZBuckOBoom::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29A930 -> 0x29A9AC
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029A9B0 -> 0x0029AB5C
*/
// Range: 0x29A9B0 -> 0x29AB5C
// this: r17
void HAZBuckOBoom::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x29A9B0 -> 0x29AB5C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029AB60 -> 0x0029AC38
*/
// Range: 0x29AB60 -> 0x29AC38
// this: r2
void HAZExplode::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29AB60 -> 0x29AC38
        class HAZTypical * typical; // r2
        float rad; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029AC40 -> 0x0029B0B4
*/
// Range: 0x29AC40 -> 0x29B0B4
// this: r16
void HAZExplode::Update(class zNMEHazard * haz /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x29AC40 -> 0x29B0B4
        class HAZTypical * typical; // r2
        class HAZTypical * typdat; // r2
        float radius; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B0C0 -> 0x0029B194
*/
// Range: 0x29B0C0 -> 0x29B194
// this: r6
enum en_hazrc HAZExplode::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29B0C0 -> 0x29B194
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B1A0 -> 0x0029B34C
*/
// Range: 0x29B1A0 -> 0x29B34C
// this: r17
void HAZExplode::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x29B1A0 -> 0x29B34C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B350 -> 0x0029B40C
*/
// Range: 0x29B350 -> 0x29B40C
void Update(class zNMEHazard * haz /* r2 */, float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x29B350 -> 0x29B40C
        class HAZTypical * typical; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B410 -> 0x0029B4E4
*/
// Range: 0x29B410 -> 0x29B4E4
// this: r6
enum en_hazrc HAZGeneric::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29B410 -> 0x29B4E4
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B4F0 -> 0x0029B510
*/
// Range: 0x29B4F0 -> 0x29B510
// this: r2
void HAZExist::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29B4F0 -> 0x29B510
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B510 -> 0x0029B534
*/
// Range: 0x29B510 -> 0x29B534
void Update(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29B510 -> 0x29B534
        class HAZTypical * typical; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B540 -> 0x0029B5F0
*/
// Range: 0x29B540 -> 0x29B5F0
// this: r4
enum en_hazrc HAZExist::Configure(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29B540 -> 0x29B5F0
        signed int rc; // r2
        class HAZTypical * typical; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B5F0 -> 0x0029B844
*/
// Range: 0x29B5F0 -> 0x29B844
// this: r2
void HAZBasic::RenderShadowSimple(class zNMEHazard * haz /* r18 */, float custRadius /* r29+0x50 */) {
    /* anonymous block */ {
        // Range: 0x29B5F0 -> 0x29B844
        class HAZShadowProps * props; // r2
        float val; // r1
        float alf_shadow; // r1
        signed int doRefill; // r2
        float radius; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B850 -> 0x0029BA60
*/
// Range: 0x29B850 -> 0x29BA60
// this: r2
void HAZBasic::RenderShadowComplex(class zNMEHazard * haz /* r17 */, float custRadius /* r29+0x90 */) {
    /* anonymous block */ {
        // Range: 0x29B850 -> 0x29BA60
        class HAZShadowProps * props; // r2
        float val; // r1
        float alf_shadow; // r6
        class xMat4x3 mat_fake; // r29+0x40
        float radius; // r29+0x90
        signed int doRefill; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029BA60 -> 0x0029BF2C
*/
// Range: 0x29BA60 -> 0x29BF2C
void DisperseBubWake(class zNMEHazard * haz /* r18 */, float rad /* r29+0x150 */, class xVec3 * vel /* r17 */, unsigned int num_bub /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29BA60 -> 0x29BF2C
        float dst_disperse; // r21
        float dst_behind; // r20
        class xVec3 pos_disperse; // r29+0x140
        class xVec3 vel_disperse; // r29+0x130
        class xVec3 dir_backward; // r29+0x120
        class xVec3 pos_emit; // r29+0x110
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029BF30 -> 0x0029C048
*/
// Range: 0x29BF30 -> 0x29C048
void Stuff_CollRespDflt(class zNMEHazard * haz /* r2 */, class xSweptSphere * swdata /* r2 */, float tym_inFuture /* r29 */) {
    /* anonymous block */ {
        // Range: 0x29BF30 -> 0x29C048
        class HAZCollide * hazcol; // r2
        class xParabola * parab; // r8
        float tym_alive; // r29
        class xEnt * ent_hit; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029C050 -> 0x0029C298
*/
// Range: 0x29C050 -> 0x29C298
// this: r2
void HAZBasic::CollideResponse(class zNMEHazard * haz /* r18 */, signed int flg_hazcolf /* r16 */, class xSweptSphere * swdata /* r17 */, float tymInFuture /* r20 */) {
    /* anonymous block */ {
        // Range: 0x29C050 -> 0x29C298
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029C2A0 -> 0x0029C3E8
*/
// Range: 0x29C2A0 -> 0x29C3E8
// this: r18
void HAZBasic::Stuff_Render(class zNMEHazard * haz /* r17 */, float customShadowRadius /* r20 */) {
    /* anonymous block */ {
        // Range: 0x29C2A0 -> 0x29C3E8
        class HAZShadowProps * props; // r2
        signed int cullShadowToo; // r29+0x5C
        class xVec3 shadVec; // r29+0x50
        class xSphere * sph; // r2
        signed int cull; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029C3F0 -> 0x0029C5D8
*/
// Range: 0x29C3F0 -> 0x29C5D8
// this: r2
void HAZBasic::Stuff_Cleanup(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29C3F0 -> 0x29C5D8
        signed int i; // r18
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A46A0 -> 0x002A470C
*/
// Range: 0x2A46A0 -> 0x2A470C
// this: r16
void HAZBasic::ScenePrepare() {
    /* anonymous block */ {
        // Range: 0x2A46A0 -> 0x2A470C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4710 -> 0x002A472C
*/
// Range: 0x2A4710 -> 0x2A472C
// this: r2
void HAZBasic::SceneFinish() {
    /* anonymous block */ {
        // Range: 0x2A4710 -> 0x2A472C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4730 -> 0x002A4874
*/
// Range: 0x2A4730 -> 0x2A4874
// this: r17
void HAZBasic::ScenePostInit() {
    /* anonymous block */ {
        // Range: 0x2A4730 -> 0x2A4874
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4880 -> 0x002A4888
*/
// Range: 0x2A4880 -> 0x2A4888
// this: r2
void HAZBasic::Cleanup(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A4880 -> 0x2A4888
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A4890 -> 0x002A48A4
*/
// Range: 0x2A4890 -> 0x2A48A4
// this: r2
void HAZBasic::Render(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A4890 -> 0x2A48A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMEHazardTypes.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A6E30 -> 0x002A6E38
*/
// Range: 0x2A6E30 -> 0x2A6E38
// this: r2
void HAZTuneFlyt::Cleanup(class zNMEHazard * haz /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A6E30 -> 0x2A6E38
    }
}


