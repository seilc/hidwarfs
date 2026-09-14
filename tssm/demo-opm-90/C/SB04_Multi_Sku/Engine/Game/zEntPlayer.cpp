/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031D8D0 -> 0x0031D8D8
*/
// Range: 0x31D8D0 -> 0x31D8D8
float zEntPlayerGetBowlBlastRadius() {
    /* anonymous block */ {
        // Range: 0x31D8D0 -> 0x31D8D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031D8E0 -> 0x0031D908
*/
// Range: 0x31D8E0 -> 0x31D908
signed int zEntPlayerIsInSlidingMode() {
    /* anonymous block */ {
        // Range: 0x31D8E0 -> 0x31D908
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031D910 -> 0x0031D93C
*/
// Range: 0x31D910 -> 0x31D93C
class xEntBoulder * zEntPlayerGetBBowl() {
    /* anonymous block */ {
        // Range: 0x31D910 -> 0x31D93C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031D940 -> 0x0031E60C
*/
// Range: 0x31D940 -> 0x31E60C
void zEntPlayer_InitPlayerDefaultValues(class xIniFile * ini /* r16 */) {
    /* anonymous block */ {
        // Range: 0x31D940 -> 0x31E60C
        float fbuf[4]; // @ 0x00683FD0
        float fbuf[4]; // @ 0x00600810
        float fbuf[4]; // @ 0x00600800
        float fbuf[4]; // @ 0x006007F0
        float fbuf[4]; // @ 0x006007E0
        float fbuf[3]; // @ 0x006007C8
        float fbuf[3]; // @ 0x006007B8
        float fbuf[3]; // @ 0x006007A8
        float fbuf[6]; // @ 0x00600790
        float fbuf[4]; // @ 0x00683FC0
        float fbuf[4]; // @ 0x00600780
        float fbuf[4]; // @ 0x00600770
        float fbuf[4]; // @ 0x00600760
        float fbuf[4]; // @ 0x00600750
        float fbuf[3]; // @ 0x00600738
        float fbuf[3]; // @ 0x00600728
        float fbuf[3]; // @ 0x00600718
        float fbuf[6]; // @ 0x00600700
        float fbuf[4]; // @ 0x00683FB0
        float fbuf[4]; // @ 0x006006F0
        float fbuf[4]; // @ 0x006006E0
        float fbuf[4]; // @ 0x006006D0
        float fbuf[4]; // @ 0x006006C0
        float fbuf[3]; // @ 0x006006A8
        float fbuf[3]; // @ 0x00600698
        float fbuf[3]; // @ 0x00600688
        float fbuf[6]; // @ 0x00600670
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031E610 -> 0x0031E848
*/
// Range: 0x31E610 -> 0x31E848
void zEntPlayer_MinimalRender(class zEnt * ent /* r20 */) {
    /* anonymous block */ {
        // Range: 0x31E610 -> 0x31E848
        float reticle_order[2]; // r29+0x108
        unsigned int i; // r19
        class xVec3 & loc; // r2
        class xVec3 & reticle_loc; // r2
        class xVec3 cam_offset; // r29+0xF8
        class xVec3 reticle_offset; // r29+0xE8
        unsigned int i; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031E850 -> 0x0031F180
*/
// Range: 0x31E850 -> 0x31F180
unsigned char zEntPlayer_MinimalUpdate(class xEnt * ent /* r20 */, class xScene * sc /* r19 */, float dt /* r20 */, class xVec3 & drive_motion /* r21 */) {
    /* anonymous block */ {
        // Range: 0x31E850 -> 0x31F180
        unsigned char stop_the_madness; // r23
        class xBound bowlBound; // r29+0x170
        class xSphere * bowlSph; // r2
        class xBound gauntletBound; // r29+0x120
        class xSphere * gauntletSph; // r2
        class xVec3 suboldpos; // r29+0x208
        void (* old_move)(class xEnt *, class xScene *, float, class xEntFrame *); // r2
        class xVec3 req_motion; // r29+0x1F8
        class xVec3 predrive_loc; // r29+0x1E8
        unsigned char isDriverTiki; // r18
        class xEntFrame * dummyFrame; // r17
        unsigned char isOldDriverTiki; // r22
        class xEntFrame * dummyFrameOldDrv; // r16
        class zNMETiki * tiki; // r2
        class xVec3 & floor_norm; // r2
        float ndotm; // r1
        class xCollis * fcoll; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031F180 -> 0x0031F194
*/
// Range: 0x31F180 -> 0x31F194
static void dont_move(class xEnt * ent /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x31F180 -> 0x31F194
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031F1A0 -> 0x0031F344
*/
// Range: 0x31F1A0 -> 0x31F344
void zEntPlayer_SceneExit() {
    /* anonymous block */ {
        // Range: 0x31F1A0 -> 0x31F344
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0031F350 -> 0x0032016C
*/
// Range: 0x31F350 -> 0x32016C
static void PlayerLedgeUpdate(class xEnt * ent /* r18 */, class xScene * sc /* r17 */, float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x31F350 -> 0x32016C
        class zLedgeGrabParams * ledge; // r16
        float tnext; // r26
        float ttest; // r29+0x820
        float tcap; // r29+0x820
        float s; // r25
        class xMat4x3 tmpmat; // r29+0x7D0
        float animTime; // r29+0x820
        float timelerp; // r24
        float animDiffZ; // r23
        signed int sidx; // r4
        float sfactor; // r8
        float sscale; // r20
        class xNearFloorPoly nfpoly; // r29+0x750
        signed int chknum; // r21
        class xSurface * surface; // r2
        float neardx; // r22
        float neardz; // r21
        class xRay3 groundray; // r29+0x720
        class xCollis groundcoll; // r29+0x6C0
        class xVec3 bpos; // r29+0x810
        class xEntCollis collis; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320170 -> 0x00320388
*/
// Range: 0x320170 -> 0x320388
static void PlayerLedgeInit(class zLedgeGrabParams * ledge /* r18 */, class xModelInstance * model /* r2 */) {
    /* anonymous block */ {
        // Range: 0x320170 -> 0x320388
        signed int i; // r7
        class xAnimState * idle; // r2
        class xAnimState * grab; // r2
        class xVec3 tran[64]; // r29+0x440
        class xQuat quat[64]; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320390 -> 0x00320498
*/
// Range: 0x320390 -> 0x320498
static void PlayerBeginCollideNoBupdate(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x320390 -> 0x320498
        unsigned char idx; // r9
        class xCollis * coll; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003204A0 -> 0x00320588
*/
// Range: 0x3204A0 -> 0x320588
void zEntPlayer_TikiKilledBy(class zNMECommon * tiki /* r2 */, class xBase * killedBy /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3204A0 -> 0x320588
        class xEnt * ent; // r2
        enum en_npctyp typ; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320590 -> 0x003205E0
*/
// Range: 0x320590 -> 0x3205E0
unsigned char zEntPlayer_SoundsCurrentlyAllowed() {
    /* anonymous block */ {
        // Range: 0x320590 -> 0x3205E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003205E0 -> 0x003206CC
*/
// Range: 0x3205E0 -> 0x3206CC
void zEntPlayer_SNDStop(enum _tagePlayerSnd player_snd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3205E0 -> 0x3206CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003206D0 -> 0x00320754
*/
// Range: 0x3206D0 -> 0x320754
void zEntPlayer_SNDPlayStream(unsigned int lower /* r2 */, unsigned int upper /* r2 */, enum _tagePlayerStreamSnd player_snd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3206D0 -> 0x320754
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320760 -> 0x00320874
*/
// Range: 0x320760 -> 0x320874
void zEntPlayer_SNDPlayUpgradeVO(signed int powerupIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x320760 -> 0x320874
        enum iSndGroupHandle VOGroup; // r2
        enum eSNDCurrentPlayer player; // r2
        enum eSNDCurrentPlayer player; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320880 -> 0x003208E8
*/
// Range: 0x320880 -> 0x3208E8
void zEntPlayer_SNDPlayStream(enum _tagePlayerStreamSnd player_snd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x320880 -> 0x3208E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003208F0 -> 0x00320A68
*/
// Range: 0x3208F0 -> 0x320A68
void zEntPlayer_SNDPlay(enum _tagePlayerSnd player_snd /* r2 */, unsigned char playRumble /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3208F0 -> 0x320A68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320A70 -> 0x00321580
*/
// Range: 0x320A70 -> 0x321580
static void zEntPlayer_SNDInit() {
    /* anonymous block */ {
        // Range: 0x320A70 -> 0x321580
        signed int player; // r7
        signed int snd; // r6
        signed int snd; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00321580 -> 0x003215EC
*/
// Range: 0x321580 -> 0x3215EC
void TimeOutCB(class zTimerBase * theTimer /* r2 */) {
    /* anonymous block */ {
        // Range: 0x321580 -> 0x3215EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003215F0 -> 0x00321B70
*/
// Range: 0x3215F0 -> 0x321B70
static void PlayerRotMatchUpdateEnt(class xEnt * ent /* r17 */, float dt /* r22 */, void * fdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3215F0 -> 0x321B70
        class xFFXRotMatchState * rms; // r16
        class xCollis * coll; // r2
        signed int hit_it; // r2
        class xSurface * surf; // r2
        signed int grounded; // r2
        class xVec3 * fup; // r2
        class xVec3 * eup; // r20
        class xVec3 nfup; // r29+0x130
        class xVec3 neup; // r29+0x120
        float fup_len; // r29+0x140
        float eup_len; // r29+0x140
        float fdecl; // r29+0x140
        float edecl; // r29+0x140
        class xVec3 raxis; // r29+0x110
        float rang; // r29+0x140
        float dang; // r29+0x140
        class xMat4x3 rot; // r29+0xB0
        float s; // r29+0x140
        class xVec3 * eup; // r2
        class xVec3 neup; // r29+0x100
        float eup_len; // r29+0x140
        class xVec3 raxis; // r29+0xF0
        float rang; // r29+0x140
        float dang; // r29+0x140
        class xMat4x3 rot; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00321B70 -> 0x00321C40
*/
// Range: 0x321B70 -> 0x321C40
static void PlayerTeeterCheck(class xEnt * ent /* r2 */, float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x321B70 -> 0x321C40
        signed int i; // r7
        class xRay3 ray; // r29+0xFFFFFFD0
        class xCollis crec; // r29+0xFFFFFF70
        unsigned int i; // r2
        class xEnt * fent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00321C40 -> 0x0032253C
*/
// Range: 0x321C40 -> 0x32253C
static void PlayerSwingUpdate(class xEnt * ent /* r20 */, float mag /* r22 */, float angle /* r20 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x321C40 -> 0x32253C
        float hangDist; // r20
        class xVec3 pos; // r29+0x110
        class xVec3 unitHang; // r29+0x100
        class xVec3 accel; // r29+0xF0
        class xVec3 unitDefl; // r29+0xE0
        class xVec3 unitVel; // r29+0xD0
        signed int i; // r14
        class xVec3 unitAccel; // r29+0xC0
        float lerpDiff; // r29+0x120
        float newLerp; // r1
        float curFactor; // r29+0x120
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00322540 -> 0x00323974
*/
// Range: 0x322540 -> 0x323974
void zEntPlayerEventCB(class xBase * from /* r18 */, class xBase * to /* r16 */, unsigned int toEvent /* r2 */, float * toParam /* r17 */, class xBase * toParamWidget /* r2 */) {
    /* anonymous block */ {
        // Range: 0x322540 -> 0x323974
        enum eSNDCurrentPlayer gCurrentPlayer'558; // r3
        signed int iParam; // r16
        signed int num; // r2
        signed int s; // r5
        unsigned int p; // r2
        class zEnt * z; // r2
        char * astatename; // r2
        class zShrapnelAsset * shrap; // r2
        class xVec3 currVel; // r29+0x40
        enum eSNDCurrentPlayer oldPlayer; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323980 -> 0x00323C10
*/
// Range: 0x323980 -> 0x323C10
void zEntPlayerCollide(class xEnt * ent /* r19 */, class xScene * sc /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x323980 -> 0x323C10
        class xCollis * colls; // r2
        class xCollis * cend; // r2
        class xCollis * c; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00323C10 -> 0x00324AC4
*/
// Range: 0x323C10 -> 0x324AC4
static void PlayerCollsSelectDepen(class xEnt * p /* r21 */) {
    /* anonymous block */ {
        // Range: 0x323C10 -> 0x324AC4
        class xCollis * colls; // r20
        class xMat4x3 * mat; // r19
        class xCollis * c; // r18
        class xCollis * cend; // r2
        class xVec3 motion_delta; // r29+0xD0
        unsigned char idx; // r17
        class xSurface * surface; // r2
        class xVec3 vec; // r29+0xC0
        class xCollis * curr; // r2
        class xCollis * coll; // r2
        float h_dot_n; // r20
        float depen_len; // r2
        class xEnt * cent; // r2
        class xSurface * surf; // r18
        class xCollis * cceil; // r2
        class xSurface * sfloor; // r2
        signed int num_walls; // r9
        class xCollis * first_wall; // r8
        class xCollis * inside_wall; // r7
        class xCollis * cfront; // r2
        class xCollis * crear; // r2
        float dx; // r29+0xEC
        float dz; // r29+0xE8
        class xCollis * cleft; // r2
        class xCollis * cright; // r2
        float dx; // r29+0xE4
        float dz; // r29+0xE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00324AD0 -> 0x00324CF4
*/
// Range: 0x324AD0 -> 0x324CF4
static void CalcCombinedDepen(float & dx /* r2 */, float & dz /* r2 */, float ax /* r29 */, float az /* r29 */, float bx /* r29 */, float bz /* r29 */, float fudge /* r29 */) {
    /* anonymous block */ {
        // Range: 0x324AD0 -> 0x324CF4
        float normX; // r8
        float normZ; // r7
        float depenZ; // r29
        float nddot; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00324D00 -> 0x00324DE4
*/
// Range: 0x324D00 -> 0x324DE4
static void PlayerCollisTranslate(class xCollis * c /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    /* anonymous block */ {
        // Range: 0x324D00 -> 0x324DE4
        float dx; // r7
        float dy; // r6
        float dz; // r5
        float dist2; // r29
        float s; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00324DF0 -> 0x00325374
*/
// Range: 0x324DF0 -> 0x325374
static class xEnt * PlayerCollCheckOneVillain(class xEnt * ent /* r18 */, void * data /* r17 */) {
    /* anonymous block */ {
        // Range: 0x324DF0 -> 0x325374
        class xEnt * p; // r2
        class xCollis * coll; // r16
        float playerOldRad; // r29+0x60
        class xSphere tmpsph; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00325380 -> 0x00325864
*/
// Range: 0x325380 -> 0x325864
static unsigned int CollidePyramidBoxTop(class xCollis * coll /* r21 */, class xBox * box /* r20 */, float height /* r29+0x1B0 */, class xSphere * sph /* r19 */) {
    /* anonymous block */ {
        // Range: 0x325380 -> 0x325864
        float dx; // r6
        float dz; // r3
        class xVec3 point; // r29+0x1A0
        class xVec3 corner[2]; // r29+0x160
        class xSweptSphere sws; // r29+0x90
        class xVec3 start; // r29+0x190
        class xVec3 end; // r29+0x180
        float normX; // r23
        float normZ; // r22
        float normMag; // r29+0x1B0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00325870 -> 0x00325E38
*/
// Range: 0x325870 -> 0x325E38
static class xEnt * PlayerCollCheckOneEnt(class xEnt * ent /* r18 */, void * data /* r17 */) {
    /* anonymous block */ {
        // Range: 0x325870 -> 0x325E38
        class xEnt * p; // r2
        class xCollis * coll; // r16
        unsigned int modl_coll; // r19
        class xSphere tmpsph; // r29+0x50
        unsigned char ncolls; // r2
        unsigned char idx; // r5
        float rsum; // r29+0x60
        float dx; // r29+0x60
        float dy; // r29+0x60
        float dz; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00325E40 -> 0x00326C38
*/
// Range: 0x325E40 -> 0x326C38
void zEntPlayerReset(class xEnt * ent /* r18 */) {
    /* anonymous block */ {
        // Range: 0x325E40 -> 0x326C38
        signed int i; // r17
        class xAnimState * curr; // r7
        class xModelInstance * minst; // r4
        unsigned int index; // r3
        class xColor_tag black; // r29+0x5C
        class xColor_tag clear; // r29+0x58
        signed int i; // r17
        class xEnt * trackEnt; // r2
        signed int i; // r12
        class RwTexture * tex; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00326C40 -> 0x00326D14
*/
// Range: 0x326C40 -> 0x326D14
signed int zEntPlayer_ObjIDIsTrack(unsigned int id /* r2 */) {
    /* anonymous block */ {
        // Range: 0x326C40 -> 0x326D14
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00326D20 -> 0x00327848
*/
// Range: 0x326D20 -> 0x327848
static void zEntPlayerDriveUpdate(class xEnt * p /* r18 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x326D20 -> 0x327848
        class xCollis * coll; // r19
        class xEnt * floorEnt; // r17
        class zPlatform * plat; // r2
        class xEntDrive * drv; // r16
        class zPlatform * oplat; // r2
        class xEntFrame * dummyFrame; // r18
        class xEntFrame * * ppDummyFrameUser; // r17
        class xSurface * surf; // r2
        class xEntFrame dummyFrame; // r29+0x60
        float jmph; // r29+0x150
        unsigned int superbounce; // r19
        float * jmphs; // r2
        class xVec3 * jmpdir; // r2
        class xAnimPlay * aplay; // r2
        class xAnimState * spring_state; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00327850 -> 0x00327C40
*/
// Range: 0x327850 -> 0x327C40
static void zEntPlayerSurfDamageUpdate(class xEnt * p /* r19 */) {
    /* anonymous block */ {
        // Range: 0x327850 -> 0x327C40
        class xCollis * coll; // r18
        class xCollis * cend; // r2
        class xSurface * surf; // r2
        signed int damaged; // r3
        class zSurfaceProps * prop; // r17
        float dx; // r29+0x50
        float dz; // r29+0x50
        float mag; // r29+0x50
        class xEnt * cent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00327C40 -> 0x00327CDC
*/
// Range: 0x327C40 -> 0x327CDC
static void PlayerBoundUpdate(class xEnt * ent /* r16 */, class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x327C40 -> 0x327CDC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00327CE0 -> 0x00327D88
*/
// Range: 0x327CE0 -> 0x327D88
static unsigned int PlayerDepenQuery(class xCollis * coll /* r2 */) {
    /* anonymous block */ {
        // Range: 0x327CE0 -> 0x327D88
        class xSurface * surf; // r2
        class zSurfaceProps * prop; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00327D90 -> 0x00328C00
*/
// Range: 0x327D90 -> 0x328C00
static void zEntPlayerFloorUpdate(class xEnt * p /* r20 */, float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x327D90 -> 0x328C00
        class xCollis * fcoll; // r2
        class xSurface * fsurf; // r19
        class xVec3 * vel; // r2
        class xVec3 dvel; // r29+0x1F0
        float velmag; // r20
        float decelmag; // r29+0x200
        float slickLerp; // r29+0x200
        class xVec3 * fnorm; // r21
        class xRay3 ray; // r29+0x150
        class xCollis rcoll; // r29+0xF0
        class xEnt * fent; // r18
        signed int i; // r17
        float dave; // r22
        signed int safecount; // r16
        float dmin; // r3
        float dmax; // r2
        class xVec3 sa; // r29+0x1E0
        class xVec3 sb; // r29+0x1D0
        class xVec3 na; // r29+0x1C0
        class xVec3 nb; // r29+0x1B0
        class xVec3 * vel; // r2
        class xVec3 * N; // r2
        class xVec3 X; // r29+0x1A0
        class xVec3 D; // r29+0x190
        class xMat3x3 N_to_Up; // r29+0xC0
        class xVec3 D_flat; // r29+0x180
        float ddotm; // r29+0x200
        float s; // r29+0x200
        float s; // r29+0x200
        class xVec3 lorigins[4]; // @ 0x006005C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00328C00 -> 0x00328F30
*/
// Range: 0x328C00 -> 0x328F30
static void zEntPlayerTSlideUpdate(class xEnt * p /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x328C00 -> 0x328F30
        float t; // r29+0x30
        float s; // r29+0x30
        float t; // r29+0x30
        float s; // r29+0x30
        signed char @22373; // @ 0x00637B08
        float tmax; // @ 0x00637B04
        signed char @22361; // @ 0x00637B00
        float tmax; // @ 0x00637AFC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00328F30 -> 0x00329618
*/
// Range: 0x328F30 -> 0x329618
static void SlideTrackUpdate(class xEnt * p /* r21 */) {
    /* anonymous block */ {
        // Range: 0x328F30 -> 0x329618
        class xCollis colltmp; // r29+0x170
        class xSphere collsph; // r29+0x160
        class xQCData qcd; // r29+0x140
        class RpIntersection isect; // r29+0x120
        class xVec3 * center; // r2
        class TrackPolyData tpoly; // r29+0xC0
        signed int triIndex; // r20
        unsigned int i; // r19
        class xEnt * trackEnt; // r2
        class RwFrame * frame; // r2
        class RpGeometry * geom; // r2
        class RpTriangle * tri; // r2
        class RwTexCoords * tex; // r2
        class RwV3d * vert; // r2
        unsigned short * triidx; // r2
        class xVec3 transformedVert0; // r29+0x1F0
        class xVec3 transformedVert1; // r29+0x1E0
        class xVec3 transformedVert2; // r29+0x1D0
        float vcenter; // r29+0x200
        float dvdx; // r29+0x200
        float dvdz; // r29+0x200
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00329620 -> 0x00329AE0
*/
// Range: 0x329620 -> 0x329AE0
static class RpCollisionTriangle * nearestTrackCB(class RpCollisionTriangle * collTriangle /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x329620 -> 0x329AE0
        class TrackPolyData * tpoly; // r2
        float currnear; // r3
        class xVec3 currpt; // r29+0x60
        signed int currvert; // r4
        signed int curredge; // r3
        class xVec3 xformVert[4]; // r29
        class xVec3 xformNorm; // r29+0x50
        signed int i; // r14
        float pdx[3]; // r29+0x40
        float pdz[3]; // r29+0x30
        float numer; // r16
        float denom; // r15
        float t; // r29+0x70
        float testdist2; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00329AE0 -> 0x0032A12C
*/
// Range: 0x329AE0 -> 0x32A12C
static void zEntPlayerVelUpdate(class xEnt * ent /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x329AE0 -> 0x32A12C
        class xVec3 * v; // r16
        float min; // r29+0x40
        float interp; // r29+0x40
        float speedMult; // r29+0x40
        float s; // r29+0x40
        class xCollis * coll; // r2
        float rft; // r2
        float gft; // r29+0x40
        float s; // r29+0x40
        float aft; // r29+0x40
        float s; // r29+0x40
        float velen2; // r1
        class xCollis * colls; // r2
        class xCollis * coll; // r7
        signed int i; // r6
        float sft; // r29+0x40
        float s; // r29+0x40
        float s; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032A130 -> 0x0032A334
*/
// Range: 0x32A130 -> 0x32A334
static void zEntPlayerEGenUpdate(class xEnt * p /* r21 */, class xScene * sc /* r2 */) {
    /* anonymous block */ {
        // Range: 0x32A130 -> 0x32A334
        class xCollis * earc_coll; // r20
        signed int i; // r19
        class zEGenerator * eg; // r18
        class xIsect isx; // r29+0xB0
        float ra; // r29+0xE0
        class xBase * rumble; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032A340 -> 0x0032A948
*/
// Range: 0x32A340 -> 0x32A948
static void zEntPlayerJumpUpdate(class xEnt * ent /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x32A340 -> 0x32A948
        float lerp; // r29+0x30
        class xCollis * cfloor; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032A950 -> 0x0032AD18
*/
// Range: 0x32A950 -> 0x32AD18
static void zEntPlayerJumpLand(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32A950 -> 0x32AD18
        float volumeLandMax; // r2
        float volumeLandMin; // r1
        float vel; // r21
        float diff; // r3
        float vol; // r20
        class emitterBase * rumbleEffect; // r2
        class xSndGroupInfo * sndInfo; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032AD20 -> 0x0032AFA4
*/
// Range: 0x32AD20 -> 0x32AFA4
static float CalcJumpImpulse_Smooth(float g /* r29+0x50 */, float j /* r29+0x50 */, float h /* r29+0x50 */, float Tgc /* r29 */, float Tgs /* r29+0x50 */) {
    /* anonymous block */ {
        // Range: 0x32AD20 -> 0x32AFA4
        unsigned int i; // r5
        unsigned int solcnt; // r2
        float A; // r29+0x50
        float B; // r29+0x50
        float Kc; // r28
        float D; // r29+0x50
        float AF; // r27
        float Kbf; // r26
        float Tm[3]; // r29+0x40
        float Tmfound; // r3
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032AFB0 -> 0x0032B09C
*/
// Range: 0x32AFB0 -> 0x32B09C
void zEntPlayer_GivePatsSocksCurrentLevel(signed int quantity /* r17 */) {
    /* anonymous block */ {
        // Range: 0x32AFB0 -> 0x32B09C
        unsigned int level; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032B0A0 -> 0x0032B22C
*/
// Range: 0x32B0A0 -> 0x32B22C
unsigned int zEntPlayer_MoveInfo() {
    /* anonymous block */ {
        // Range: 0x32B0A0 -> 0x32B22C
        unsigned int animflags; // r2
        unsigned int infoflags; // r18
        char * nam_ast; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032B230 -> 0x0032B260
*/
// Range: 0x32B230 -> 0x32B260
enum en_plyrpup zEntPlayer_PowerupLevel(enum en_plyratak forThisAttack /* r2 */) {
    /* anonymous block */ {
        // Range: 0x32B230 -> 0x32B260
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032B260 -> 0x0032BF28
*/
// Range: 0x32B260 -> 0x32BF28
signed int zEntPlayer_Damage(class xBase * src /* r17 */, unsigned int damage /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32B260 -> 0x32BF28
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032BF30 -> 0x0032C130
*/
// Range: 0x32BF30 -> 0x32C130
signed int zEntPlayer_DamageNPCKnockBack(class xBase * src /* r18 */, unsigned int damage /* r2 */, class xVec3 * npcPos /* r17 */, enum ePlayerNMEDamage type /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32BF30 -> 0x32C130
        float dx; // r4
        float dz; // r3
        float mag; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032C130 -> 0x0032C1C4
*/
// Range: 0x32C130 -> 0x32C1C4
signed int zEntPlayer_Damage(class xBase * src /* r2 */, unsigned int damage /* r2 */, class xVec3 * knockback /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32C130 -> 0x32C1C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032C1D0 -> 0x0032C1F8
*/
// Range: 0x32C1D0 -> 0x32C1F8
void zEntPlayer_setBoulderMode(unsigned int mode /* r2 */) {
    /* anonymous block */ {
        // Range: 0x32C1D0 -> 0x32C1F8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032C200 -> 0x0032C7C8
*/
// Range: 0x32C200 -> 0x32C7C8
void zEntPlayer_Move(class xEnt * ent /* r17 */, float dt /* r20 */, class xEntFrame * frame /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32C200 -> 0x32C7C8
        signed int px; // r4
        signed int pz; // r6
        class xVec3 inverseNormal; // r29+0x80
        class xVec3 inverseNormal; // r29+0x70
        class zPlayerGlobals & p; // r2
        class xVec3 damp; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032C7D0 -> 0x0032C904
*/
// Range: 0x32C7D0 -> 0x32C904
void zEntPlayer_RenderEffects(class zEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32C7D0 -> 0x32C904
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032C910 -> 0x0032D2F4
*/
// Range: 0x32C910 -> 0x32D2F4
void zEntPlayer_Render(class zEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x32C910 -> 0x32D2F4
        float rootZadjust; // r20
        class RwMatrixTag rootOldMat; // r29+0x70
        class xAnimSingle * asingle; // r2
        class xAnimSingle * ablend; // r2
        class xVec3 rootZvec; // r29+0xE0
        class xModelInstance * minst; // r5
        float orderDot[2]; // r29+0xD8
        unsigned int i; // r20
        signed int oldBucketEnabled; // r2
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032D310 -> 0x0032D9E8
*/
// Range: 0x32D310 -> 0x32D9E8
static void zEntPlayerUpdateModelSB() {
    /* anonymous block */ {
        // Range: 0x32D310 -> 0x32D9E8
        class xEnt & ent; // r2
        class xModelInstance * * mlist; // r2
        class xModelInstance * m; // r2
        class xAnimSingle * asingle; // r2
        class xAnimState * tonguestate; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032D9F0 -> 0x0032DDF8
*/
// Range: 0x32D9F0 -> 0x32DDF8
static void zEntPlayer_ReticleRender() {
    /* anonymous block */ {
        // Range: 0x32D9F0 -> 0x32DDF8
        enum _SDRenderState old_RenderState; // r30
        signed int i; // r21
        unsigned int cheatAlternateTargettingMarker; // r2
        float size; // r20
        float bounce; // r29+0xB0
        float bound_radius; // r29+0xB0
        class xSphere * sphbnd; // r2
        signed int rc; // r2
        class xSphere * sphbnd; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032DE00 -> 0x0032E330
*/
// Range: 0x32DE00 -> 0x32E330
static void zEntPlayer_BubbleBowlLaneRender(class zEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x32DE00 -> 0x32E330
        class RwMatrixTag * Mat; // r17
        float factor; // r20
        class xRay3 ray; // r29+0xC0
        class xCollis coll; // r29+0x60
        class xEnt * ep; // r2
        unsigned char alpha; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        enum _SDRenderState old_rendstat; // r16
        unsigned char sRenderDecal; // @ 0x00636C7C
        signed int sCount; // @ 0x00636C78
        class RxObjSpace3DVertex vtxbuf[4]; // @ 0x00683F20
        class xVec3 off_corners[4]; // @ 0x00622950
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E330 -> 0x0032E5CC
*/
// Range: 0x32E330 -> 0x32E5CC
static void zEntPlayerDirectionDecalRender(class RwMatrixTag * Mat /* r2 */, class RwRaster * rwras /* r19 */, float factor /* r20 */, float distance /* r29+0x3140 */) {
    /* anonymous block */ {
        // Range: 0x32E330 -> 0x32E5CC
        class xVec3 center; // r29+0x3130
        class xMat4x3 matrix; // r29+0x30F0
        class xShadowCache cache; // r29+0x70
        signed int i; // r18
        class xEnt * ep; // r2
        signed int rc; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E5D0 -> 0x0032E638
*/
// Range: 0x32E5D0 -> 0x32E638
void zEntPlayer_ShadowModelDisable() {
    /* anonymous block */ {
        // Range: 0x32E5D0 -> 0x32E638
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E640 -> 0x0032E72C
*/
// Range: 0x32E640 -> 0x32E72C
void zEntPlayer_ShadowModelEnable() {
    /* anonymous block */ {
        // Range: 0x32E640 -> 0x32E72C
        class xModelInstance * modelInst; // r17
        class xBox * combinedAnimBound; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E730 -> 0x0032E73C
*/
// Range: 0x32E730 -> 0x32E73C
void zEntPlayer_PatrickLaunch(class xEnt * patLauncher /* r2 */) {
    /* anonymous block */ {
        // Range: 0x32E730 -> 0x32E73C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032E740 -> 0x0032EE30
*/
// Range: 0x32E740 -> 0x32EE30
void zEntPlayer_CheckCritterContact(class xEnt * player /* r20 */, float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x32E740 -> 0x32EE30
        signed int i; // r19
        class xEntCollis * plyrcol; // r21
        class xCollis * colrec; // r2
        class zNMECommon * npc; // r18
        enum en_npctyp ntyp; // r2
        unsigned int anid_player; // r2
        signed int found; // r3
        signed int k; // r7
        class xPsyche * psy; // r2
        float tym_inGoal; // r29+0x120
        unsigned int anid_player; // r2
        signed int found; // r3
        signed int k; // r7
        signed int k; // r7
        unsigned int mvinf; // r2
        class xVec3 dir_push; // r29+0x110
        class xVec3 vel_push; // r29+0x100
        unsigned int hashes_pa[6]; // @ 0x00683F00
        unsigned int hashes_ss[3]; // @ 0x00683EF0
        signed char @21072; // @ 0x00637AF8
        unsigned int hashes_cartwheel[2]; // @ 0x00637AF0
        signed char @21067; // @ 0x00637AE8
        signed char @21064; // @ 0x00637AE4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032EE30 -> 0x0032EE38
*/
// Range: 0x32EE30 -> 0x32EE38
void zEntPlayerGauntletBlastRadius(float radius /* r29 */) {
    /* anonymous block */ {
        // Range: 0x32EE30 -> 0x32EE38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0032EE40 -> 0x00337E2C
*/
// Range: 0x32EE40 -> 0x337E2C
void zEntPlayer_Update(class xEnt * ent /* r20 */, class xScene * sc /* r21 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x32EE40 -> 0x337E2C
        signed int sPlayerUpdateCount'5032; // r6
        class xModelInstance * modelInst; // r5
        signed int i; // r7
        class xAnimState * astate; // r2
        class xEntBoulder * bbowl; // r2
        class xVec3 * pos; // r16
        class xVec3 velocityNorm; // r29+0x1150
        class xBound bowlBound; // r29+0xDE0
        class xBound bowlBound; // r29+0xD90
        class xSphere * bowlSph; // r2
        class xBound thrownBound; // r29+0xD40
        class xSphere * bowlSph; // r2
        float mvelx; // r29+0x1170
        float mvelz; // r29+0x1170
        float s; // r29+0x1170
        unsigned int total; // r2
        class xEnt * oldTarget; // r2
        class xEnt * oldTarget; // r2
        class xVec3 pos; // r29+0x1140
        class xAnimSingle * single; // r2
        class xAnimState * astate; // r2
        class zScene * zsc; // r2
        class xParEmitterCustomSettings info; // r29+0xBB0
        class xVec3 vel; // r29+0x1130
        class xVec3 tmp; // r29+0x1120
        float rate; // r29+0x1170
        class xBound slideB; // r29+0xB60
        class xVec3 normvel; // r29+0x1110
        unsigned char * bonelist; // r19
        class xAnimSingle * single; // r2
        unsigned int num; // r18
        unsigned char * bp; // r3
        class xVec3 * posbuf; // r23
        class xVec3 * velbuf; // r29+0x150
        class xVec3 * pp; // r17
        class xVec3 * vp; // r16
        unsigned int j; // r22
        class xMat4x3 mat; // r29+0xB20
        class xAnimSingle * single; // r29+0x140
        class xAnimState * astate; // r29+0x130
        class xColor_tag black; // r29+0x116C
        class xColor_tag clear; // r29+0x1168
        signed int anim_done; // r2
        signed int moveCam; // r17
        signed int stopCam; // r16
        signed int anim; // r2
        unsigned int i; // r5
        float rad2; // r29+0x1170
        float radold2; // r29+0x1170
        float sdist2; // r29+0x1170
        float sdistold2; // r29+0x1170
        class xEnt * vill; // r2
        unsigned int stuckforce; // r2
        float playerVel; // r29+0x1170
        float actualVel; // r29+0x1170
        class xRay3 testRay; // r29+0xAF0
        class xCollis testColl; // r29+0xA90
        float old_yvel; // r29
        class xVec3 suboldpos; // r29+0x1100
        class xVec3 predrive_pos; // r29+0x10F0
        class xVec3 motion; // r29+0x10E0
        float ndotm; // r1
        float sft; // r29+0x1170
        float fg; // r29+0x1170
        float m; // r29+0x1170
        float m; // r29+0x1170
        unsigned char hitting_floor; // r2
        class xVec3 & player_loc; // r2
        class xVec3 driveDist; // r29+0x10D0
        class xCollis bbc; // r29+0xA30
        class xBox bbox; // r29+0xA10
        float dist; // r29+0x1170
        unsigned int redo_catchtunnel; // r18
        class xVec3 vstart; // r29+0x10C0
        class xVec3 vend; // r29+0x10B0
        class xSweptSphere sws; // r29+0x940
        unsigned int iter; // r19
        class xSweptSphere swsredo[3]; // r29+0x6E0
        class xSweptSphere * swscurr; // r2
        class xVec3 totalTan; // r29+0x10A0
        float distremain; // r29+0x1170
        class xVec3 deltaremain; // r29+0x1090
        class xCollis * wcoll; // r17
        class xCollis * gcoll; // r2
        float hdotm; // r29+0x1170
        class xSurface * wsurf; // r2
        class xCollis * fcoll; // r17
        class xBase * b; // r2
        float dummy; // r29+0x1164
        signed int isGoo; // r2
        signed int isBB; // r2
        signed int sliding; // r2
        class xVec3 pos_rnd; // r29+0x1080
        class xVec3 vel_rnd; // r29+0x1070
        float dposx; // r29+0x1170
        float dposy; // r29+0x1170
        float dposz; // r29+0x1170
        float animTimeStartDamage; // r1
        float boundRadius; // r25
        class xBound punchBound; // r29+0x690
        class xSphere * punchSph; // r16
        class xVec3 rhand; // r29+0x1060
        class xModelTag * rhandTag; // r2
        class Melee_cbData cbdata; // r29+0x670
        class xCollis * ceil; // r18
        class xEnt * destructent; // r17
        unsigned char destroyed; // r16
        class xVec3 bashRay; // r29+0x1050
        float hitParams[4]; // r29+0x660
        class xVec3 rhand; // r29+0x1040
        class xModelTag * rhandTag; // r2
        class xEntBoulder * boul; // r2
        class xVec3 f; // r29+0x1030
        class zNMECommon * npc; // r2
        class xCollis * ceil; // r2
        class xEnt * destructent; // r2
        class xVec3 rhand; // r29+0x1020
        class xModelTag * rhandTag; // r2
        class HAZBang * hazbang; // r2
        class xVec3 temp; // r29+0x1010
        class xVec3 * entPos; // r2
        signed int ignoreYOffset; // r6
        float yOffset; // r3
        float scaleFactor; // r6
        signed int isBashMech; // r13
        signed int i; // r12
        class xMat3x3 tmp_descaled; // r29+0x630
        float dummy; // r29+0x1170
        float len2; // r29+0x1170
        float len_inv; // r29+0x1170
        float len2; // r29+0x1170
        float len_inv; // r29+0x1170
        float len2; // r29+0x1170
        float len_inv; // r29+0x1170
        float len2; // r29+0x1170
        float len_inv; // r29+0x1170
        float len2; // r29+0x1170
        float len_inv; // r29+0x1170
        float len2; // r29+0x1170
        float len_inv; // r29+0x1170
        class xBound gauntletBound; // r29+0x5E0
        class xSphere * gauntletSph; // r2
        class xBound flopBound; // r29+0x590
        class xSphere * flopSph; // r7
        float scale; // r5
        float xVelScaled; // r29+0x1170
        float zVelScaled; // r29+0x1170
        float cMaxOffset; // r29+0x1170
        class xCollis * floor; // r2
        class xEnt * destructent; // r18
        unsigned char destroyed; // r17
        class xVec3 bounceRay; // r29+0x1000
        class zNMECommon * npc; // r2
        float hitParams[4]; // r29+0x580
        class xBound cartwheelBound; // r29+0x530
        class xSphere * cartwheelSph; // r2
        class xCollis * col; // r2
        class xEnt * destructent; // r18
        unsigned char destroyed; // r17
        signed int hit; // r19
        class zNMECommon * npc; // r2
        float hitParams[4]; // r29+0x520
        float stunlerp; // r29+0x1170
        float mag; // r29+0x1170
        float lerpspeed; // r3
        class xVec3 delta; // r29+0xFF0
        class xModelTag * rhtag; // r29+0x120
        class xModelTag * lhtag; // r29+0x110
        float radius; // r20
        enum en_plyratak attackType; // r29+0x100
        float reach; // r28
        class xVec3 rhand; // r29+0xFE0
        class xVec3 lhand; // r29+0xFD0
        class xBound rhandB; // r29+0x4D0
        class xBound lhandB; // r29+0x480
        class xSphere * rightSph; // r2
        class xSphere * leftSph; // r2
        float posRadius; // r25
        class xVec3 * playerPos; // r2
        float height; // r24
        class xVec3 leftRibbonPos; // r29+0xFC0
        class xVec3 rightRibbonPos; // r29+0xFB0
        class xVec3 toRhand; // r29+0xFA0
        class xVec3 toLhand; // r29+0xF90
        class xEntBoulder * boul; // r2
        char tmpStateName[256]; // r29+0x380
        class xAnimSingle * playerAnim; // r18
        class xAnimState * itemAnim; // r2
        class xVec3 tmptran; // r29+0xF80
        class xQuat tmpquat; // r29+0x370
        class xMat4x3 objMat; // r29+0x330
        class xVec3 rotatedLC; // r29+0xF70
        class xEntBoulder * boul; // r29+0xFC
        class xMat4x3 targetMat; // r29+0x2F0
        float lerp; // r29+0x1170
        float bottom; // r29+0x1170
        class zNMECommon * npc; // r2
        class zNMECommon * npc; // r2
        class zNMETiki * tiki; // r2
        class RwMatrixTag rootOldMat; // r29+0x2B0
        class xMat4x3 tmpMat; // r29+0x270
        class xVec3 ax; // r29+0xF60
        float rads; // r29+0x1170
        float crs; // r29+0x1170
        float dot; // r29+0x1170
        class xMat3x3 rotMat; // r29+0x240
        class xVec3 disp; // r29+0xF50
        float closestDist_sqr; // r8
        class xVec3 toTarget; // r29+0xF40
        class xEnt * closest; // r17
        signed int canSwing; // r2
        signed int i; // r5
        class xEnt * targent; // r11
        class xVec3 disp; // r29+0xF30
        unsigned int hash_puitem_puanim; // @ 0x00637AC4
        signed char @17852; // @ 0x00637AC8
        float aTime; // @ 0x00636C74
        class xEntCollis old_collis; // @ 0x006838F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00337E30 -> 0x003380AC
*/
// Range: 0x337E30 -> 0x3380AC
static void zEntPlayer_Update_HitchSpinAndFade(float dt /* r29+0xE0 */) {
    /* anonymous block */ {
        // Range: 0x337E30 -> 0x3380AC
        class xMat3x3 mat_rot; // r29+0x80
        signed int i; // r21
        class xEnt * hitch; // r2
        class xVec3 vec_camToHitch; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003380B0 -> 0x0033822C
*/
// Range: 0x3380B0 -> 0x33822C
void zEntPlayerExplodeBowl() {
    /* anonymous block */ {
        // Range: 0x3380B0 -> 0x33822C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338230 -> 0x00338318
*/
// Range: 0x338230 -> 0x338318
void zEntPlayerExplodeHammerThrow(class xVec3 * pos /* r16 */) {
    /* anonymous block */ {
        // Range: 0x338230 -> 0x338318
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338320 -> 0x003384B4
*/
// Range: 0x338320 -> 0x3384B4
void zEntPlayerBowlTargetUpdate(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x338320 -> 0x3384B4
        class zEntPlayerBowlTarget * curr; // r17
        class zEntPlayerBowlTarget * next; // r16
        class xVec3 * pos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003384C0 -> 0x00338564
*/
// Range: 0x3384C0 -> 0x338564
void zEntPlayerBowlTargetRemoveAll() {
    /* anonymous block */ {
        // Range: 0x3384C0 -> 0x338564
        class zEntPlayerBowlTarget * curr; // r17
        class zEntPlayerBowlTarget * next; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338570 -> 0x0033861C
*/
// Range: 0x338570 -> 0x33861C
void zEntPlayerBowlTarget_Remove(class zEntPlayerBowlTarget * target /* r16 */) {
    /* anonymous block */ {
        // Range: 0x338570 -> 0x33861C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338620 -> 0x00338804
*/
// Range: 0x338620 -> 0x338804
class zEntPlayerBowlTarget * zEntPlayerBowlTarget_Add(class xVec3 * target /* r17 */) {
    /* anonymous block */ {
        // Range: 0x338620 -> 0x338804
        class zEntPlayerBowlTarget * result; // r16
        signed int i; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338810 -> 0x00338BBC
*/
// Range: 0x338810 -> 0x338BBC
static void StartThrow() {
    /* anonymous block */ {
        // Range: 0x338810 -> 0x338BBC
        class zNMECommon * npc; // r2
        class xMat3x3 targetingMat; // r29+0x50
        class xVec3 tgtpos; // r29+0xA0
        class xVec3 tempPos; // r29+0x90
        class xMat4x3 * tgtmat; // r5
        float cDist; // r29+0xB0
        float min; // r4
        float max; // r3
        float cButtonOutTgtMult; // r29+0xB0
        class xVec3 dir; // r29+0x80
        class xMat3x3 targetingMat; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338BC0 -> 0x00338EA8
*/
// Range: 0x338BC0 -> 0x338EA8
static class xEnt * zEntPlayer_FindGrabEnt(class xEnt * ent /* r21 */, class zScene * zsc /* r20 */, signed int * failed /* r19 */) {
    /* anonymous block */ {
        // Range: 0x338BC0 -> 0x338EA8
        signed int i; // r18
        class xEnt * grabent; // r17
        float dx; // r6
        float dy; // r4
        float dz; // r5
        class xEntBoulder * boul; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00338EB0 -> 0x00339044
*/
// Range: 0x338EB0 -> 0x339044
static signed int zEntPlayerKnockToSafety(class xEnt * ent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x338EB0 -> 0x339044
        float diffX; // r9
        float diffY; // r29
        float diffZ; // r8
        float popheight; // r29
        float ttot; // r3
        float velXZ; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00339050 -> 0x003391E0
*/
// Range: 0x339050 -> 0x3391E0
void zEntPlayer_PredictPos(class xVec3 * pos /* r17 */, float timeIntoFuture /* r29+0x60 */, float leadFactor /* r29+0x60 */, signed int useTurn /* r2 */) {
    /* anonymous block */ {
        // Range: 0x339050 -> 0x3391E0
        class zPlayerGlobals * g; // r16
        float useVel; // r2
        float useAngV; // r1
        class xMat3x3 rotMat; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003391E0 -> 0x003394F0
*/
// Range: 0x3391E0 -> 0x3394F0
static void zEntPlayer_PredictionUpdate(class xEnt * ent /* r17 */, float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x3391E0 -> 0x3394F0
        class zPlayerGlobals * g; // r16
        float lastVel; // r29+0x40
        float newAngV; // r29+0x40
        float r; // r29+0x40
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003394F0 -> 0x0033A470
*/
// Range: 0x3394F0 -> 0x33A470
static void zEntPlayer_BoulderVehicleUpdate(class xEnt * ent /* r20 */, class xScene * sc /* r21 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3394F0 -> 0x33A470
        class xEntBoulder * shouldDamagePlayer; // r22
        unsigned char chkBackup; // r2
        unsigned char penBackup; // r2
        class xVec2 inputDefl; // r29+0x798
        class xMat4x3 * pCameraMat; // r2
        class xEntCollis collis; // r29+0x170
        unsigned char collisionWithPlat; // r19
        signed int i; // r18
        class xEnt * dyn; // r2
        class zPlatform * plat; // r17
        class xEntBoulder * boul; // r2
        float padDefl; // r20
        class xVec3 rotFudge; // r29+0x788
        float ang; // r29+0x7B0
        class xMat3x3 rotM; // r29+0x140
        class xVec3 heading; // r29+0x778
        float angle; // r29+0x7AC
        float mag; // r29+0x7A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033A470 -> 0x0033A47C
*/
// Range: 0x33A470 -> 0x33A47C
static void zEntPlayer_BoulderVehicleMove(class xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x33A470 -> 0x33A47C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033A480 -> 0x0033A488
*/
// Range: 0x33A480 -> 0x33A488
static void zEntPlayer_BoulderVehicleRender() {
    /* anonymous block */ {
        // Range: 0x33A480 -> 0x33A488
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033A490 -> 0x0033A498
*/
// Range: 0x33A490 -> 0x33A498
static void BoulderVEventCB() {
    /* anonymous block */ {
        // Range: 0x33A490 -> 0x33A498
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033A4A0 -> 0x0033A754
*/
// Range: 0x33A4A0 -> 0x33A754
static void getPadDefl(class _tagPadAnalog * stick /* r2 */, class xVec2 * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x33A4A0 -> 0x33A754
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033A760 -> 0x0033A950
*/
// Range: 0x33A760 -> 0x33A950
static void zEntPlayer_SpringboardFX(class xEnt * ent /* r2 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x33A760 -> 0x33A950
        class xParEmitterCustomSettings info; // r29+0x20
        float size; // r29+0x1B0
        float sLastSpringboardBubbleEmit; // @ 0x00637AD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033A950 -> 0x0033B388
*/
// Range: 0x33A950 -> 0x33B388
static void zEntPlayer_StreakFX(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x33A950 -> 0x33B388
        class xEnt * EntToTrack'476; // r2
        signed int i; // r20
        signed int p; // r5
        signed int cp; // r18
        class xVec3 rhand; // r29+0x130
        class xVec3 rhand; // r29+0x120
        class xVec3 lhand; // r29+0x110
        class xVec3 rhand; // r29+0x100
        class xVec3 lhand; // r29+0xF0
        class xVec3 rfoot; // r29+0xE0
        class xVec3 lfoot; // r29+0xD0
        class xVec3 head; // r29+0xC0
        class xVec3 rhand; // r29+0xB0
        class xVec3 lhand; // r29+0xA0
        class xVec3 rfoot; // r29+0x90
        class xVec3 lfoot; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033B390 -> 0x0033B3FC
*/
// Range: 0x33B390 -> 0x33B3FC
void zEntPlayer_SpongeBallInit(class xEnt * ent /* r2 */, class xEntAsset * asset /* r2 */) {
    /* anonymous block */ {
        // Range: 0x33B390 -> 0x33B3FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033B400 -> 0x0033B4F8
*/
// Range: 0x33B400 -> 0x33B4F8
void zEntPlayer_SpongePatInit(class xEnt * ent /* r17 */, class xEntAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x33B400 -> 0x33B4F8
        void * info; // r2
        unsigned int bufsize; // r29+0x4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033B500 -> 0x0033B62C
*/
// Range: 0x33B500 -> 0x33B62C
void zEntPlayer_CarInit(class xEnt * ent /* r17 */, class xEntAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x33B500 -> 0x33B62C
        void * info; // r2
        unsigned int bufsize; // r29+0x4C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033B630 -> 0x0033BBA0
*/
// Range: 0x33B630 -> 0x33BBA0
void zEntPlayer_PatrickInit(class xEnt * ent /* r17 */, class xEntAsset * asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x33B630 -> 0x33BBA0
        unsigned int bufsize; // r29+0x4C
        void * info; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033BBA0 -> 0x0033C4A8
*/
// Range: 0x33BBA0 -> 0x33C4A8
void zEntPlayer_SpongeBobInit(class xEnt * ent /* r17 */, class xEntAsset * asset /* r16 */, signed int costumeIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x33BBA0 -> 0x33C4A8
        void * sbInfo; // r2
        unsigned int sbMINFSize; // r29+0x4C
        unsigned char index; // r8
        class xModelInstance * m; // r7
        float bbncvtm; // r29+0x50
        signed int i; // r8
        unsigned int trailerHash; // r2
        signed int i; // r4
        class xEnt * hitch; // r2
        signed int drybob_anim_count; // @ 0x00637AD4
        float * drybob_chgTime[64]; // @ 0x006836F0
        float drybob_oldTime[64]; // @ 0x006837F0
        void * * drybob_chgData[64]; // @ 0x006834F0
        void * drybob_oldData[64]; // @ 0x006835F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033C4B0 -> 0x0033CB1C
*/
// Range: 0x33C4B0 -> 0x33CB1C
void zEntPlayerCommonInit(class xEnt * ent /* r20 */, class xEntAsset * asset /* r23 */) {
    /* anonymous block */ {
        // Range: 0x33C4B0 -> 0x33CB1C
        class xLightKit * pLightKit; // r2
        class xFFXRotMatchState * rms; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033CB20 -> 0x0033CD68
*/
// Range: 0x33CB20 -> 0x33CD68
static signed int load_talk_filter(unsigned char * filter /* r21 */, class xModelAssetParam * params /* r20 */, unsigned int params_size /* r19 */, signed int max_size /* r18 */) {
    /* anonymous block */ {
        // Range: 0x33CB20 -> 0x33CD68
        signed int size; // r17
        float * non_choices; // r16
        signed int i; // r8
        unsigned char skip; // r7
        signed int j; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00344B20 -> 0x00344CF4
*/
// Range: 0x344B20 -> 0x344CF4
static signed int CheckObjectAgainstGauntlet(class xEnt * cbent /* r17 */, void * cbdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x344B20 -> 0x344CF4
        class xBound * meleeB; // r16
        class xCollis meleeColl; // r29+0x30
        class zEntSimpleObj * simpleObj; // r2
        class xVec3 boundCenter; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00344D00 -> 0x00344F68
*/
// Range: 0x344D00 -> 0x344F68
static signed int CheckNMEAgainstBubbleBowl(class xEnt * cbent /* r19 */, void * cbdata /* r2 */) {
    /* anonymous block */ {
        // Range: 0x344D00 -> 0x344F68
        class zNMECommon * npc; // r2
        class xVec3 velocityNorm; // r29+0x80
        class xVec3 toTarget; // r29+0x70
        class xVec3 toTargetNorm; // r29+0x60
        float distsqr; // r29+0x90
        float dx__; // r29+0x90
        float dy__; // r29+0x90
        float dz__; // r29+0x90
        float chkdistSqu; // r29+0x90
        class zEntPlayerBowlTarget * t; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00344F70 -> 0x003451E4
*/
// Range: 0x344F70 -> 0x3451E4
static void ReturnTheFavor(class zNMEHazard * haz /* r16 */) {
    /* anonymous block */ {
        // Range: 0x344F70 -> 0x3451E4
        class xVec3 pos_src; // r29+0x90
        class xVec3 pos_tgt; // r29+0x80
        class xVec3 vec; // r29+0x70
        class xVec3 pos_tgt; // r29+0x60
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003451F0 -> 0x003452F0
*/
// Range: 0x3451F0 -> 0x3452F0
static unsigned char HazardCheck(class zNMEHazard & haz /* r2 */, void * context /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3451F0 -> 0x3452F0
        class Melee_cbData * cbdata; // r2
        class xBound * bnd; // r2
        class xVec3 vec_toHaz; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003452F0 -> 0x00345F28
*/
// Range: 0x3452F0 -> 0x345F28
static signed int CheckObjectAgainstBound(class xEnt * cbent /* r20 */, void * cbdata /* r30 */) {
    /* anonymous block */ {
        // Range: 0x3452F0 -> 0x345F28
        class Melee_cbData * data; // r2
        signed int hitsomething; // r21
        class xEnt * ent; // r2
        enum en_plyratak attack; // r2
        class xBound * meleeB; // r19
        class xCollis meleeColl; // r29+0x160
        class xBound tempBound; // r29+0x110
        class zEntSimpleObj * simpleObj; // r2
        enum en_xEventTags attackEvent; // r18
        enum en_npcdmg attackNMEDamageType; // r22
        unsigned int attackButtonActType; // r17
        float hitParams[4]; // r29+0x100
        class zNMECommon * npc; // r2
        class xEntBoulder * boul; // r2
        class xVec3 f; // r29+0x1C0
        unsigned int paddleFlags; // r2
        unsigned int worldSpaceNorm; // r18
        class xRay3 tempray; // r29+0xD0
        float hitParams[4]; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00345F30 -> 0x003461FC
*/
// Range: 0x345F30 -> 0x3461FC
static signed int AttackBoundCollide(class xEnt * ent /* r2 */, class zScene * zsc /* r2 */, class xBound * meleeB /* r18 */, enum en_plyratak attack /* r16 */) {
    /* anonymous block */ {
        // Range: 0x345F30 -> 0x3461FC
        class Melee_cbData cbdata; // r29+0x50
        class xVec3 pos; // r29+0x70
        signed int doHazChk; // r2
        enum en_plyrpup pup; // r2
        signed int hitSave; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00346200 -> 0x00346214
*/
// Range: 0x346200 -> 0x346214
void zEntPlayerKillGauntlet() {
    /* anonymous block */ {
        // Range: 0x346200 -> 0x346214
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00346220 -> 0x00346744
*/
// Range: 0x346220 -> 0x346744
static unsigned int StunRadiusCB() {
    /* anonymous block */ {
        // Range: 0x346220 -> 0x346744
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00346750 -> 0x0034675C
*/
// Range: 0x346750 -> 0x34675C
static unsigned int StunStartFallCB() {
    /* anonymous block */ {
        // Range: 0x346750 -> 0x34675C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00346760 -> 0x00346CF0
*/
// Range: 0x346760 -> 0x346CF0
static unsigned int LassoSwingReleaseCB() {
    /* anonymous block */ {
        // Range: 0x346760 -> 0x346CF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00346CF0 -> 0x00346DE4
*/
// Range: 0x346CF0 -> 0x346DE4
static unsigned int LassoSwingGroundedCB() {
    /* anonymous block */ {
        // Range: 0x346CF0 -> 0x346DE4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00346DF0 -> 0x00346E94
*/
// Range: 0x346DF0 -> 0x346E94
static unsigned int LassoSwingCB(class xAnimSingle * anim /* r16 */) {
    /* anonymous block */ {
        // Range: 0x346DF0 -> 0x346E94
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00346EA0 -> 0x003471DC
*/
// Range: 0x346EA0 -> 0x3471DC
static unsigned int LassoSwingTossCB() {
    /* anonymous block */ {
        // Range: 0x346EA0 -> 0x3471DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003471E0 -> 0x003476CC
*/
// Range: 0x3471E0 -> 0x3476CC
static unsigned int LassoSwingGroundedBeginCB(class xAnimTransition * tran /* r18 */, class xAnimSingle * anim /* r17 */, void * object /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3471E0 -> 0x3476CC
        class xEnt * ent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003476D0 -> 0x0034797C
*/
// Range: 0x3476D0 -> 0x34797C
static unsigned int LassoSwingBeginCB(void * object /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3476D0 -> 0x34797C
        class xEnt * ent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00347980 -> 0x00347A20
*/
// Range: 0x347980 -> 0x347A20
static unsigned int LassoSwingReleaseCheck() {
    /* anonymous block */ {
        // Range: 0x347980 -> 0x347A20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00347A20 -> 0x00347A48
*/
// Range: 0x347A20 -> 0x347A48
static unsigned int LassoSwingBeginCheck() {
    /* anonymous block */ {
        // Range: 0x347A20 -> 0x347A48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00347A50 -> 0x00347A7C
*/
// Range: 0x347A50 -> 0x347A7C
static unsigned int LassoSwingGroundedBeginCheck() {
    /* anonymous block */ {
        // Range: 0x347A50 -> 0x347A7C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00347A80 -> 0x00347D04
*/
// Range: 0x347A80 -> 0x347D04
static unsigned int PatrickHammerThrowCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x347A80 -> 0x347D04
        class zEnt * ent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00347D10 -> 0x00347D1C
*/
// Range: 0x347D10 -> 0x347D1C
static unsigned int PatrickHammerSpinCB() {
    /* anonymous block */ {
        // Range: 0x347D10 -> 0x347D1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00347D20 -> 0x00347F1C
*/
// Range: 0x347D20 -> 0x347F1C
static unsigned int PatrickHammerCB() {
    /* anonymous block */ {
        // Range: 0x347D20 -> 0x347F1C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00347F20 -> 0x00347F88
*/
// Range: 0x347F20 -> 0x347F88
static unsigned int PatrickGrabThrowStartCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x347F20 -> 0x347F88
        class zEnt * ent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00347F90 -> 0x003487C0
*/
// Range: 0x347F90 -> 0x3487C0
static class xEnt * GetPatrickTarget(class xEnt * ent /* r20 */) {
    /* anonymous block */ {
        // Range: 0x347F90 -> 0x3487C0
        class xEnt * result; // r18
        class xCollis * coll; // r2
        class xEnt * floorEnt; // r2
        class zPlatform * plat; // r2
        float dx; // r29+0x130
        float dz; // r29+0x130
        float ddot; // r29+0x130
        class xVec3 relpos; // r29+0x120
        class xVec3 tgtpos; // r29+0x110
        signed int i; // r19
        float bestTargetDot; // r30
        class xVec3 * bestTargetPos; // r21
        class zScene * zsc; // r2
        signed int grabbedIsFruit; // r2
        float maxHeight; // r27
        class xEnt * tgtent; // r18
        class _zEntButton * entButton; // r2
        class xMat3x3 targetingMat; // r29+0xD0
        float dx; // r29+0x130
        float dy; // r5
        float dz; // r29+0x130
        float ddot; // r29
        float maxdist2; // r28
        float mindist2; // r27
        class xVec3 toTarget; // r29+0x100
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003487C0 -> 0x003487C8
*/
// Range: 0x3487C0 -> 0x3487C8
static unsigned int PatCartwheelLoopCB() {
    /* anonymous block */ {
        // Range: 0x3487C0 -> 0x3487C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003487D0 -> 0x00348958
*/
// Range: 0x3487D0 -> 0x348958
static unsigned int PatNoCartwheelCB() {
    /* anonymous block */ {
        // Range: 0x3487D0 -> 0x348958
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00348960 -> 0x003489FC
*/
// Range: 0x348960 -> 0x3489FC
static unsigned int PatCartwheelNoCartwheelCheck() {
    /* anonymous block */ {
        // Range: 0x348960 -> 0x3489FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00348A00 -> 0x00348CD8
*/
// Range: 0x348A00 -> 0x348CD8
static unsigned int PatCartwheelCB() {
    /* anonymous block */ {
        // Range: 0x348A00 -> 0x348CD8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00348CE0 -> 0x00348D64
*/
// Range: 0x348CE0 -> 0x348D64
static unsigned int PatCartwheelCheck() {
    /* anonymous block */ {
        // Range: 0x348CE0 -> 0x348D64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00348D70 -> 0x00349234
*/
// Range: 0x348D70 -> 0x349234
static unsigned int PatrickGrabCB() {
    /* anonymous block */ {
        // Range: 0x348D70 -> 0x349234
        class xAnimState * stat; // r2
        class xVec3 tmptran; // r29+0xE0
        class xQuat tmpquat; // r29+0xD0
        class xMat4x3 objMat; // r29+0x90
        class xMat4x3 targetMat; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349240 -> 0x00349548
*/
// Range: 0x349240 -> 0x349548
static unsigned int PatrickMeleeCB(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x349240 -> 0x349548
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349550 -> 0x003495BC
*/
// Range: 0x349550 -> 0x3495BC
static unsigned int PatrickStunCheckHeadbutt() {
    /* anonymous block */ {
        // Range: 0x349550 -> 0x3495BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003495C0 -> 0x0034962C
*/
// Range: 0x3495C0 -> 0x34962C
static unsigned int PatrickStunCheckButtslam() {
    /* anonymous block */ {
        // Range: 0x3495C0 -> 0x34962C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349630 -> 0x003496B4
*/
// Range: 0x349630 -> 0x3496B4
static unsigned int PatrickAttackCheckMelee2() {
    /* anonymous block */ {
        // Range: 0x349630 -> 0x3496B4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003496C0 -> 0x00349744
*/
// Range: 0x3496C0 -> 0x349744
static unsigned int PatrickAttackCheckMelee1() {
    /* anonymous block */ {
        // Range: 0x3496C0 -> 0x349744
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349750 -> 0x00349758
*/
// Range: 0x349750 -> 0x349758
static unsigned int PatrickHammerThrowCheck() {
    /* anonymous block */ {
        // Range: 0x349750 -> 0x349758
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349760 -> 0x00349768
*/
// Range: 0x349760 -> 0x349768
static unsigned int PatrickHammerCheck() {
    /* anonymous block */ {
        // Range: 0x349760 -> 0x349768
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349770 -> 0x003497BC
*/
// Range: 0x349770 -> 0x3497BC
static unsigned int PatrickGrabThrowStart() {
    /* anonymous block */ {
        // Range: 0x349770 -> 0x3497BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003497C0 -> 0x003497D4
*/
// Range: 0x3497C0 -> 0x3497D4
static unsigned int PatrickGrabKill() {
    /* anonymous block */ {
        // Range: 0x3497C0 -> 0x3497D4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003497E0 -> 0x003497EC
*/
// Range: 0x3497E0 -> 0x3497EC
static unsigned int PatrickGrabFailed() {
    /* anonymous block */ {
        // Range: 0x3497E0 -> 0x3497EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003497F0 -> 0x003497FC
*/
// Range: 0x3497F0 -> 0x3497FC
static unsigned int PatrickGrabCheck() {
    /* anonymous block */ {
        // Range: 0x3497F0 -> 0x3497FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349800 -> 0x00349820
*/
// Range: 0x349800 -> 0x349820
static unsigned int LedgeFinishCB() {
    /* anonymous block */ {
        // Range: 0x349800 -> 0x349820
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349820 -> 0x003499F4
*/
// Range: 0x349820 -> 0x3499F4
static unsigned int LedgeGrabCB(void * object /* r16 */) {
    /* anonymous block */ {
        // Range: 0x349820 -> 0x3499F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349A00 -> 0x00349A30
*/
// Range: 0x349A00 -> 0x349A30
static unsigned int LedgeGrabCheck() {
    /* anonymous block */ {
        // Range: 0x349A00 -> 0x349A30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349A30 -> 0x00349AC8
*/
// Range: 0x349A30 -> 0x349AC8
static unsigned int TrackPrefallJumpCheck() {
    /* anonymous block */ {
        // Range: 0x349A30 -> 0x349AC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349AD0 -> 0x00349AF0
*/
// Range: 0x349AD0 -> 0x349AF0
static unsigned int TrackFallCB() {
    /* anonymous block */ {
        // Range: 0x349AD0 -> 0x349AF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349AF0 -> 0x00349B44
*/
// Range: 0x349AF0 -> 0x349B44
static unsigned int TrackFallCheck() {
    /* anonymous block */ {
        // Range: 0x349AF0 -> 0x349B44
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349B50 -> 0x00349B84
*/
// Range: 0x349B50 -> 0x349B84
static unsigned int NoslideTrackCheck() {
    /* anonymous block */ {
        // Range: 0x349B50 -> 0x349B84
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349B90 -> 0x00349B9C
*/
// Range: 0x349B90 -> 0x349B9C
static unsigned int NoslideTrackCB() {
    /* anonymous block */ {
        // Range: 0x349B90 -> 0x349B9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349BA0 -> 0x00349C84
*/
// Range: 0x349BA0 -> 0x349C84
static unsigned int SlideTrackCB() {
    /* anonymous block */ {
        // Range: 0x349BA0 -> 0x349C84
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349C90 -> 0x00349CA0
*/
// Range: 0x349C90 -> 0x349CA0
static unsigned int SlideTrackCheck() {
    /* anonymous block */ {
        // Range: 0x349C90 -> 0x349CA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00349CA0 -> 0x0034A098
*/
// Range: 0x349CA0 -> 0x34A098
static unsigned int BoulderRollDoneCB() {
    /* anonymous block */ {
        // Range: 0x349CA0 -> 0x34A098
        class xParEmitterCustomSettings info; // r29+0x80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A0A0 -> 0x0034A60C
*/
// Range: 0x34A0A0 -> 0x34A60C
static unsigned int BoulderRollCB() {
    /* anonymous block */ {
        // Range: 0x34A0A0 -> 0x34A60C
        class xParEmitterCustomSettings info; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A610 -> 0x0034A7FC
*/
// Range: 0x34A610 -> 0x34A7FC
static unsigned int BoulderRollWindupCB() {
    /* anonymous block */ {
        // Range: 0x34A610 -> 0x34A7FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A800 -> 0x0034A820
*/
// Range: 0x34A800 -> 0x34A820
unsigned int BoulderRollCheck() {
    /* anonymous block */ {
        // Range: 0x34A800 -> 0x34A820
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A820 -> 0x0034A854
*/
// Range: 0x34A820 -> 0x34A854
static unsigned int BoulderRollIdleCheck() {
    /* anonymous block */ {
        // Range: 0x34A820 -> 0x34A854
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A860 -> 0x0034A894
*/
// Range: 0x34A860 -> 0x34A894
static unsigned int BoulderRollMoveCheck() {
    /* anonymous block */ {
        // Range: 0x34A860 -> 0x34A894
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A8A0 -> 0x0034A8D0
*/
// Range: 0x34A8A0 -> 0x34A8D0
static unsigned int FallCheck() {
    /* anonymous block */ {
        // Range: 0x34A8A0 -> 0x34A8D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A8D0 -> 0x0034A8E8
*/
// Range: 0x34A8D0 -> 0x34A8E8
static unsigned int TongueDblSpinCB(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34A8D0 -> 0x34A8E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A8F0 -> 0x0034A960
*/
// Range: 0x34A8F0 -> 0x34A960
static unsigned int TongueDblJumpCB(class xAnimTransition * tran /* r2 */, class xAnimSingle * anim /* r16 */, void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34A8F0 -> 0x34A960
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034A960 -> 0x0034AB4C
*/
// Range: 0x34A960 -> 0x34AB4C
static unsigned int DblJumpCB() {
    /* anonymous block */ {
        // Range: 0x34A960 -> 0x34AB4C
        float dirx; // r7
        float dirz; // r6
        float speed; // r5
        float len2; // r29
        float len_inv; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AB50 -> 0x0034ACF0
*/
// Range: 0x34AB50 -> 0x34ACF0
static unsigned int DblJumpCheck() {
    /* anonymous block */ {
        // Range: 0x34AB50 -> 0x34ACF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034ACF0 -> 0x0034AD2C
*/
// Range: 0x34ACF0 -> 0x34AD2C
static unsigned int BounceCB() {
    /* anonymous block */ {
        // Range: 0x34ACF0 -> 0x34AD2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AD30 -> 0x0034AD44
*/
// Range: 0x34AD30 -> 0x34AD44
static unsigned int BounceCheck() {
    /* anonymous block */ {
        // Range: 0x34AD30 -> 0x34AD44
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AD50 -> 0x0034AD84
*/
// Range: 0x34AD50 -> 0x34AD84
static unsigned int JumpApexCheck() {
    /* anonymous block */ {
        // Range: 0x34AD50 -> 0x34AD84
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034AD90 -> 0x0034B23C
*/
// Range: 0x34AD90 -> 0x34B23C
static unsigned int JumpCB() {
    /* anonymous block */ {
        // Range: 0x34AD90 -> 0x34B23C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B240 -> 0x0034B28C
*/
// Range: 0x34B240 -> 0x34B28C
static unsigned int JumpCheck() {
    /* anonymous block */ {
        // Range: 0x34B240 -> 0x34B28C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B290 -> 0x0034B2A4
*/
// Range: 0x34B290 -> 0x34B2A4
static unsigned int WallJumpFallCB() {
    /* anonymous block */ {
        // Range: 0x34B290 -> 0x34B2A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B2B0 -> 0x0034B2CC
*/
// Range: 0x34B2B0 -> 0x34B2CC
static unsigned int WallJumpStickCB() {
    /* anonymous block */ {
        // Range: 0x34B2B0 -> 0x34B2CC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B2D0 -> 0x0034B2F4
*/
// Range: 0x34B2D0 -> 0x34B2F4
static unsigned int WallJumpFallCheck() {
    /* anonymous block */ {
        // Range: 0x34B2D0 -> 0x34B2F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B300 -> 0x0034B314
*/
// Range: 0x34B300 -> 0x34B314
static unsigned int WallJumpLandFlightCallback() {
    /* anonymous block */ {
        // Range: 0x34B300 -> 0x34B314
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B320 -> 0x0034B330
*/
// Range: 0x34B320 -> 0x34B330
static unsigned int WallJumpLandFlightCheck() {
    /* anonymous block */ {
        // Range: 0x34B320 -> 0x34B330
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B330 -> 0x0034B46C
*/
// Range: 0x34B330 -> 0x34B46C
static unsigned int WallJumpFlightLandCallback() {
    /* anonymous block */ {
        // Range: 0x34B330 -> 0x34B46C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B470 -> 0x0034B480
*/
// Range: 0x34B470 -> 0x34B480
static unsigned int WallJumpFlightLandCheck() {
    /* anonymous block */ {
        // Range: 0x34B470 -> 0x34B480
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B480 -> 0x0034B7E4
*/
// Range: 0x34B480 -> 0x34B7E4
static unsigned int WallJumpCallback() {
    /* anonymous block */ {
        // Range: 0x34B480 -> 0x34B7E4
        class zJumpParam wallParam; // r29+0x40
        class xEntFrame * frame; // r2
        class xVec3 * velocity; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B7F0 -> 0x0034B87C
*/
// Range: 0x34B7F0 -> 0x34B87C
static unsigned int WallJumpLaunchCallback() {
    /* anonymous block */ {
        // Range: 0x34B7F0 -> 0x34B87C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B880 -> 0x0034B8F0
*/
// Range: 0x34B880 -> 0x34B8F0
static unsigned int WallJumpLaunchCheck() {
    /* anonymous block */ {
        // Range: 0x34B880 -> 0x34B8F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034B8F0 -> 0x0034BAE0
*/
// Range: 0x34B8F0 -> 0x34BAE0
static void DoWallJumpCheck() {
    /* anonymous block */ {
        // Range: 0x34B8F0 -> 0x34BAE0
        class xEnt * ent; // r2
        class xVec3 start; // r29+0x100
        class xVec3 end; // r29+0xF0
        class xSweptSphere sws; // r29+0x20
        class xSurface * surf; // r3
        class zSurfaceProps * surfaceProperties; // r2
        float sVerticalCos; // @ 0x00636C6C
        float sSweptrad; // @ 0x00636C68
        float sAtdist; // @ 0x00636C64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BAE0 -> 0x0034BC2C
*/
// Range: 0x34BAE0 -> 0x34BC2C
static unsigned int SpatulaGrabStopCB() {
    /* anonymous block */ {
        // Range: 0x34BAE0 -> 0x34BC2C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BC30 -> 0x0034BCB4
*/
// Range: 0x34BC30 -> 0x34BCB4
static unsigned int SpatulaGrabCB(void * object /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34BC30 -> 0x34BCB4
        class xEnt * ent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BCC0 -> 0x0034BCC8
*/
// Range: 0x34BCC0 -> 0x34BCC8
static unsigned int SpatulaGrabCheck() {
    /* anonymous block */ {
        // Range: 0x34BCC0 -> 0x34BCC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BCD0 -> 0x0034BEC8
*/
// Range: 0x34BCD0 -> 0x34BEC8
static unsigned int DefeatedCB() {
    /* anonymous block */ {
        // Range: 0x34BCD0 -> 0x34BEC8
        class zShrapnelAsset * deathShrap; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BED0 -> 0x0034BF10
*/
// Range: 0x34BED0 -> 0x34BF10
static unsigned int Defeated03Check(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34BED0 -> 0x34BF10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BF10 -> 0x0034BF50
*/
// Range: 0x34BF10 -> 0x34BF50
static unsigned int Defeated02Check(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34BF10 -> 0x34BF50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BF50 -> 0x0034BF9C
*/
// Range: 0x34BF50 -> 0x34BF9C
static unsigned int Defeated01Check(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34BF50 -> 0x34BF9C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BFA0 -> 0x0034BFBC
*/
// Range: 0x34BFA0 -> 0x34BFBC
static unsigned int DefeatedCheck() {
    /* anonymous block */ {
        // Range: 0x34BFA0 -> 0x34BFBC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BFC0 -> 0x0034BFD4
*/
// Range: 0x34BFC0 -> 0x34BFD4
static unsigned int Hit05CB() {
    /* anonymous block */ {
        // Range: 0x34BFC0 -> 0x34BFD4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034BFE0 -> 0x0034C004
*/
// Range: 0x34BFE0 -> 0x34C004
static unsigned int Hit05Check() {
    /* anonymous block */ {
        // Range: 0x34BFE0 -> 0x34C004
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C010 -> 0x0034C024
*/
// Range: 0x34C010 -> 0x34C024
static unsigned int Hit04CB() {
    /* anonymous block */ {
        // Range: 0x34C010 -> 0x34C024
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C030 -> 0x0034C054
*/
// Range: 0x34C030 -> 0x34C054
static unsigned int Hit04Check() {
    /* anonymous block */ {
        // Range: 0x34C030 -> 0x34C054
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C060 -> 0x0034C074
*/
// Range: 0x34C060 -> 0x34C074
static unsigned int Hit03CB() {
    /* anonymous block */ {
        // Range: 0x34C060 -> 0x34C074
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C080 -> 0x0034C0A4
*/
// Range: 0x34C080 -> 0x34C0A4
static unsigned int Hit03Check() {
    /* anonymous block */ {
        // Range: 0x34C080 -> 0x34C0A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C0B0 -> 0x0034C0C4
*/
// Range: 0x34C0B0 -> 0x34C0C4
static unsigned int Hit02CB() {
    /* anonymous block */ {
        // Range: 0x34C0B0 -> 0x34C0C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C0D0 -> 0x0034C0F4
*/
// Range: 0x34C0D0 -> 0x34C0F4
static unsigned int Hit02Check() {
    /* anonymous block */ {
        // Range: 0x34C0D0 -> 0x34C0F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C100 -> 0x0034C114
*/
// Range: 0x34C100 -> 0x34C114
static unsigned int Hit01CB() {
    /* anonymous block */ {
        // Range: 0x34C100 -> 0x34C114
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C120 -> 0x0034C144
*/
// Range: 0x34C120 -> 0x34C144
static unsigned int Hit01Check() {
    /* anonymous block */ {
        // Range: 0x34C120 -> 0x34C144
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C150 -> 0x0034C15C
*/
// Range: 0x34C150 -> 0x34C15C
static unsigned int HitCB() {
    /* anonymous block */ {
        // Range: 0x34C150 -> 0x34C15C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C160 -> 0x0034C168
*/
// Range: 0x34C160 -> 0x34C168
static unsigned int HitCheck() {
    /* anonymous block */ {
        // Range: 0x34C160 -> 0x34C168
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C170 -> 0x0034C36C
*/
// Range: 0x34C170 -> 0x34C36C
static unsigned int GooDeathCB() {
    /* anonymous block */ {
        // Range: 0x34C170 -> 0x34C36C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C370 -> 0x0034C3D4
*/
// Range: 0x34C370 -> 0x34C3D4
static unsigned int GooCheck() {
    /* anonymous block */ {
        // Range: 0x34C370 -> 0x34C3D4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C3E0 -> 0x0034C48C
*/
// Range: 0x34C3E0 -> 0x34C48C
static unsigned int BbowlRecoverRunSlipCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34C3E0 -> 0x34C48C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C490 -> 0x0034C590
*/
// Range: 0x34C490 -> 0x34C590
static unsigned int BbowlRecoverRunOutOfWorldCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34C490 -> 0x34C590
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C590 -> 0x0034C68C
*/
// Range: 0x34C590 -> 0x34C68C
static unsigned int BbowlRecoverRunCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34C590 -> 0x34C68C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C690 -> 0x0034C78C
*/
// Range: 0x34C690 -> 0x34C78C
static unsigned int BbowlRecoverWalkCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34C690 -> 0x34C78C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034C790 -> 0x0034CA84
*/
// Range: 0x34C790 -> 0x34CA84
static unsigned int BbowlTossEndCB() {
    /* anonymous block */ {
        // Range: 0x34C790 -> 0x34CA84
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034CA90 -> 0x0034CAC8
*/
// Range: 0x34CA90 -> 0x34CAC8
static unsigned int BbowlWindupEndCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34CA90 -> 0x34CAC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034CAD0 -> 0x0034CE64
*/
// Range: 0x34CAD0 -> 0x34CE64
static unsigned int BbowlCB() {
    /* anonymous block */ {
        // Range: 0x34CAD0 -> 0x34CE64
        class xEntFrame * frame; // r2
        float x; // r29+0x20
        float z; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034CE70 -> 0x0034D054
*/
// Range: 0x34CE70 -> 0x34D054
static unsigned int BbowlCheck() {
    /* anonymous block */ {
        // Range: 0x34CE70 -> 0x34D054
        unsigned char doBowl; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034D060 -> 0x0034D138
*/
// Range: 0x34D060 -> 0x34D138
static unsigned int BBounceToJumpCB() {
    /* anonymous block */ {
        // Range: 0x34D060 -> 0x34D138
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034D140 -> 0x0034D148
*/
// Range: 0x34D140 -> 0x34D148
static unsigned int BBounceToJumpCheck() {
    /* anonymous block */ {
        // Range: 0x34D140 -> 0x34D148
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034D150 -> 0x0034D384
*/
// Range: 0x34D150 -> 0x34D384
static unsigned int BBounceStrikeCB() {
    /* anonymous block */ {
        // Range: 0x34D150 -> 0x34D384
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034D390 -> 0x0034D3B8
*/
// Range: 0x34D390 -> 0x34D3B8
static unsigned int BBounceStrikeCheck() {
    /* anonymous block */ {
        // Range: 0x34D390 -> 0x34D3B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034D3C0 -> 0x0034D3E4
*/
// Range: 0x34D3C0 -> 0x34D3E4
static unsigned int BBounceAttackCB() {
    /* anonymous block */ {
        // Range: 0x34D3C0 -> 0x34D3E4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034D3F0 -> 0x0034D458
*/
// Range: 0x34D3F0 -> 0x34D458
static unsigned int BubbleBounceCB() {
    /* anonymous block */ {
        // Range: 0x34D3F0 -> 0x34D458
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034D460 -> 0x0034D468
*/
// Range: 0x34D460 -> 0x34D468
static unsigned int BubbleBounceCheck() {
    /* anonymous block */ {
        // Range: 0x34D460 -> 0x34D468
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034D470 -> 0x0034D5A4
*/
// Range: 0x34D470 -> 0x34D5A4
static unsigned int BbashStart01EffectMissCB() {
    /* anonymous block */ {
        // Range: 0x34D470 -> 0x34D5A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034D5B0 -> 0x0034D87C
*/
// Range: 0x34D5B0 -> 0x34D87C
static unsigned int BBashStrikeCB() {
    /* anonymous block */ {
        // Range: 0x34D5B0 -> 0x34D87C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034D880 -> 0x0034D888
*/
// Range: 0x34D880 -> 0x34D888
static unsigned int BBashStrikeCheck() {
    /* anonymous block */ {
        // Range: 0x34D880 -> 0x34D888
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034D890 -> 0x0034DB24
*/
// Range: 0x34D890 -> 0x34DB24
static unsigned int BubbleBashCB() {
    /* anonymous block */ {
        // Range: 0x34D890 -> 0x34DB24
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034DB30 -> 0x0034DC18
*/
// Range: 0x34DB30 -> 0x34DC18
static unsigned int BubbleBashCheckGauntlet() {
    /* anonymous block */ {
        // Range: 0x34DB30 -> 0x34DC18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034DC20 -> 0x0034DCF8
*/
// Range: 0x34DC20 -> 0x34DCF8
static unsigned int BubbleBashCheckPunch() {
    /* anonymous block */ {
        // Range: 0x34DC20 -> 0x34DCF8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034DD00 -> 0x0034DF44
*/
// Range: 0x34DD00 -> 0x34DF44
static unsigned int BubbleSpinCB(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34DD00 -> 0x34DF44
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034DF50 -> 0x0034DFDC
*/
// Range: 0x34DF50 -> 0x34DFDC
static unsigned int BubbleSpinCheck2() {
    /* anonymous block */ {
        // Range: 0x34DF50 -> 0x34DFDC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034DFE0 -> 0x0034E06C
*/
// Range: 0x34DFE0 -> 0x34E06C
static unsigned int BubbleSpinCheck1() {
    /* anonymous block */ {
        // Range: 0x34DFE0 -> 0x34E06C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E070 -> 0x0034E1C8
*/
// Range: 0x34E070 -> 0x34E1C8
static unsigned int LandSlipRunCallback() {
    /* anonymous block */ {
        // Range: 0x34E070 -> 0x34E1C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E1D0 -> 0x0034E20C
*/
// Range: 0x34E1D0 -> 0x34E20C
static unsigned int LandCallback() {
    /* anonymous block */ {
        // Range: 0x34E1D0 -> 0x34E20C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E210 -> 0x0034E290
*/
// Range: 0x34E210 -> 0x34E290
static unsigned int LandNoTrackSlipIdleCheck() {
    /* anonymous block */ {
        // Range: 0x34E210 -> 0x34E290
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E290 -> 0x0034E310
*/
// Range: 0x34E290 -> 0x34E310
static unsigned int LandNoTrackSlipRunCheck() {
    /* anonymous block */ {
        // Range: 0x34E290 -> 0x34E310
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E310 -> 0x0034E36C
*/
// Range: 0x34E310 -> 0x34E36C
static unsigned int LandNoTrackFastCheck() {
    /* anonymous block */ {
        // Range: 0x34E310 -> 0x34E36C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E370 -> 0x0034E3C4
*/
// Range: 0x34E370 -> 0x34E3C4
static unsigned int LandSlipRunCheck() {
    /* anonymous block */ {
        // Range: 0x34E370 -> 0x34E3C4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E3D0 -> 0x0034E424
*/
// Range: 0x34E3D0 -> 0x34E424
static unsigned int LandSlipIdleCheck() {
    /* anonymous block */ {
        // Range: 0x34E3D0 -> 0x34E424
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E430 -> 0x0034E48C
*/
// Range: 0x34E430 -> 0x34E48C
static unsigned int LandNoTrackWalkCheck() {
    /* anonymous block */ {
        // Range: 0x34E430 -> 0x34E48C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E490 -> 0x0034E4C0
*/
// Range: 0x34E490 -> 0x34E4C0
static unsigned int LandRunCheck() {
    /* anonymous block */ {
        // Range: 0x34E490 -> 0x34E4C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E4C0 -> 0x0034E4EC
*/
// Range: 0x34E4C0 -> 0x34E4EC
static unsigned int LandHighCheck() {
    /* anonymous block */ {
        // Range: 0x34E4C0 -> 0x34E4EC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E4F0 -> 0x0034E534
*/
// Range: 0x34E4F0 -> 0x34E534
static unsigned int LandNoTrackCheck() {
    /* anonymous block */ {
        // Range: 0x34E4F0 -> 0x34E534
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E540 -> 0x0034E584
*/
// Range: 0x34E540 -> 0x34E584
static unsigned int LandTrackCheck() {
    /* anonymous block */ {
        // Range: 0x34E540 -> 0x34E584
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E590 -> 0x0034E5A4
*/
// Range: 0x34E590 -> 0x34E5A4
static unsigned int LandCheck() {
    /* anonymous block */ {
        // Range: 0x34E590 -> 0x34E5A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E5B0 -> 0x0034E5B8
*/
// Range: 0x34E5B0 -> 0x34E5B8
static unsigned int SlideDecelerateCB() {
    /* anonymous block */ {
        // Range: 0x34E5B0 -> 0x34E5B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E5C0 -> 0x0034E624
*/
// Range: 0x34E5C0 -> 0x34E624
static unsigned int SlideDecelerateCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34E5C0 -> 0x34E624
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E630 -> 0x0034E638
*/
// Range: 0x34E630 -> 0x34E638
static unsigned int SlideAccelerateCB() {
    /* anonymous block */ {
        // Range: 0x34E630 -> 0x34E638
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E640 -> 0x0034E6A8
*/
// Range: 0x34E640 -> 0x34E6A8
static unsigned int SlideAccelerateCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34E640 -> 0x34E6A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E6B0 -> 0x0034E6B8
*/
// Range: 0x34E6B0 -> 0x34E6B8
static unsigned int SlideCruisingCB() {
    /* anonymous block */ {
        // Range: 0x34E6B0 -> 0x34E6B8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E6C0 -> 0x0034E734
*/
// Range: 0x34E6C0 -> 0x34E734
static unsigned int SlideCruisingCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34E6C0 -> 0x34E734
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E740 -> 0x0034E75C
*/
// Range: 0x34E740 -> 0x34E75C
static unsigned int InactiveCB() {
    /* anonymous block */ {
        // Range: 0x34E740 -> 0x34E75C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E760 -> 0x0034E7AC
*/
// Range: 0x34E760 -> 0x34E7AC
static unsigned int InactiveCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x34E760 -> 0x34E7AC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E7B0 -> 0x0034E884
*/
// Range: 0x34E7B0 -> 0x34E884
static unsigned int IdleCB() {
    /* anonymous block */ {
        // Range: 0x34E7B0 -> 0x34E884
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E890 -> 0x0034E960
*/
// Range: 0x34E890 -> 0x34E960
static unsigned int NoSlipCB() {
    /* anonymous block */ {
        // Range: 0x34E890 -> 0x34E960
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034E960 -> 0x0034EA94
*/
// Range: 0x34E960 -> 0x34EA94
static unsigned int SlipRunCB() {
    /* anonymous block */ {
        // Range: 0x34E960 -> 0x34EA94
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034EAA0 -> 0x0034EAB4
*/
// Range: 0x34EAA0 -> 0x34EAB4
static unsigned int AnyStopCheck() {
    /* anonymous block */ {
        // Range: 0x34EAA0 -> 0x34EAB4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034EAC0 -> 0x0034EAD0
*/
// Range: 0x34EAC0 -> 0x34EAD0
static unsigned int AnyMoveCheck() {
    /* anonymous block */ {
        // Range: 0x34EAC0 -> 0x34EAD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034EAD0 -> 0x0034EB54
*/
// Range: 0x34EAD0 -> 0x34EB54
static unsigned int IdleSlipCheck() {
    /* anonymous block */ {
        // Range: 0x34EAD0 -> 0x34EB54
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034EB60 -> 0x0034EBF4
*/
// Range: 0x34EB60 -> 0x34EBF4
static unsigned int IdleStoicCheck() {
    /* anonymous block */ {
        // Range: 0x34EB60 -> 0x34EBF4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034EC00 -> 0x0034EC94
*/
// Range: 0x34EC00 -> 0x34EC94
static unsigned int IdleCheck() {
    /* anonymous block */ {
        // Range: 0x34EC00 -> 0x34EC94
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034ECA0 -> 0x0034ED6C
*/
// Range: 0x34ECA0 -> 0x34ED6C
static unsigned int WalkStoicCheck() {
    /* anonymous block */ {
        // Range: 0x34ECA0 -> 0x34ED6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034ED70 -> 0x0034EE3C
*/
// Range: 0x34ED70 -> 0x34EE3C
static unsigned int WalkCheck() {
    /* anonymous block */ {
        // Range: 0x34ED70 -> 0x34EE3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034EE40 -> 0x0034EF10
*/
// Range: 0x34EE40 -> 0x34EF10
static unsigned int RunOutOfWorldCheck() {
    /* anonymous block */ {
        // Range: 0x34EE40 -> 0x34EF10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034EF10 -> 0x0034EF94
*/
// Range: 0x34EF10 -> 0x34EF94
static unsigned int RunSlipCheck() {
    /* anonymous block */ {
        // Range: 0x34EF10 -> 0x34EF94
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034EFA0 -> 0x0034F06C
*/
// Range: 0x34EFA0 -> 0x34F06C
static unsigned int RunStoicCheck() {
    /* anonymous block */ {
        // Range: 0x34EFA0 -> 0x34F06C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034F070 -> 0x0034F13C
*/
// Range: 0x34F070 -> 0x34F13C
static unsigned int RunAnyCheck() {
    /* anonymous block */ {
        // Range: 0x34F070 -> 0x34F13C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034F140 -> 0x0034F170
*/
// Range: 0x34F140 -> 0x34F170
void zEntPlayerHealthResetAll() {
    /* anonymous block */ {
        // Range: 0x34F140 -> 0x34F170
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034F170 -> 0x0034F34C
*/
// Range: 0x34F170 -> 0x34F34C
static void InvReset() {
    /* anonymous block */ {
        // Range: 0x34F170 -> 0x34F34C
        unsigned int i; // r4
        signed int j; // r17
        signed int world; // r29+0x3C
        signed int task; // r29+0x38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0034F350 -> 0x003513E8
*/
// Range: 0x34F350 -> 0x3513E8
static void PlayerAbsControl(class xEnt * ent /* r19 */, float x /* r28 */, float z /* r27 */, float dt /* r26 */) {
    /* anonymous block */ {
        // Range: 0x34F350 -> 0x3513E8
        unsigned int animUserFlag; // r18
        unsigned int blendUserFlag; // r2
        float angle; // r29+0x15C
        float mag; // r29+0x158
        float scalemag; // r3
        float dir_dp; // r25
        float turnfactor; // r24
        float diffAngle; // r2
        float autodist2d; // r23
        float camAngle; // r29+0x160
        class xMat4x3 * m; // r2
        class xVec3 euler; // r29+0x148
        float dx; // r29+0x160
        float dz; // r29+0x160
        float atime; // r4
        float drot; // r29+0x160
        class xMat3x3 rotY; // r29+0xE0
        float m; // r4
        class xVec3 belly; // r29+0x138
        float curFactor; // r29+0x160
        class zPlayerGlobals * pg; // r17
        float slideAccel; // r29+0x160
        float accelX; // r20
        float accelZ; // r29+0x160
        float fwdComponent; // r1
        float sideComponent; // r29+0x160
        float veldown; // r29+0x160
        float targetLean; // r3
        unsigned int moveFlag; // r17
        class xMat3x3 rotY; // r29+0xB0
        float dampen; // r1
        float accelMag; // r20
        float peakLerp; // r29+0x160
        float slickLerp; // r29+0x160
        float s; // r29+0x160
        float s; // r29+0x160
        class xVec3 dposBeforeAnim; // r29+0x128
        float invUpdateCount; // r29+0x160
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003513F0 -> 0x0035158C
*/
// Range: 0x3513F0 -> 0x35158C
static void TurnToFace(class xEnt * ent /* r16 */, class xVec3 * target /* r17 */, float speedLimit /* r22 */, float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x3513F0 -> 0x35158C
        class xVec3 currentFacing; // r29+0x40
        float angle; // r29+0x50
        float maxAngle; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00351590 -> 0x00351788
*/
// Range: 0x351590 -> 0x351788
static void DampenControls(float * angle /* r17 */, float * mag /* r16 */, float x /* r21 */, float y /* r20 */) {
    /* anonymous block */ {
        // Range: 0x351590 -> 0x351788
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00351790 -> 0x0035183C
*/
// Range: 0x351790 -> 0x35183C
void SetPlayerKillsVillainTimer() {
    /* anonymous block */ {
        // Range: 0x351790 -> 0x35183C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00351840 -> 0x00351A0C
*/
// Range: 0x351840 -> 0x351A0C
void VillainNoticesPlayer(class zNMECommon * npc /* r17 */) {
    /* anonymous block */ {
        // Range: 0x351840 -> 0x351A0C
        enum en_npctyp ntyp; // r2
        enum _tagePlayerStreamSnd sound; // r16
        class xMat4x3 camMat; // r29+0x30
        class xVec3 vDirCamToEnemy; // r29+0x90
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00351A10 -> 0x00351A74
*/
// Range: 0x351A10 -> 0x351A74
void zEntPlayerControlOff(enum zControlOwner owner /* r2 */) {
    /* anonymous block */ {
        // Range: 0x351A10 -> 0x351A74
        unsigned int originalValue; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00351A80 -> 0x00351B8C
*/
// Range: 0x351A80 -> 0x351B8C
void zEntPlayerControlOn(enum zControlOwner owner /* r17 */) {
    /* anonymous block */ {
        // Range: 0x351A80 -> 0x351B8C
        unsigned int originalValue; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zEntPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00351B90 -> 0x00351CBC
*/
// Range: 0x351B90 -> 0x351CBC
static void zEntPlayerKillCarry() {
    /* anonymous block */ {
        // Range: 0x351B90 -> 0x351CBC
        class zNMECommon * npc; // r2
        class xMat3x3 targetingMat; // r29+0x10
    }
}


