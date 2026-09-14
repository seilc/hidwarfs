/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00242640 -> 0x00242678
*/
// Range: 0x242640 -> 0x242678
// this: r2
signed int zNMENeptune::TypeHandleMail(class NMEMsg * mail /* r2 */) {
    /* anonymous block */ {
        // Range: 0x242640 -> 0x242678
        signed int handled; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00242680 -> 0x0024268C
*/
// Range: 0x242680 -> 0x24268C
void RenderHud() {
    /* anonymous block */ {
        // Range: 0x242680 -> 0x24268C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00242690 -> 0x002440C4
*/
// Range: 0x242690 -> 0x2440C4
// this: r20
void zNMENeptune::RenderExtra() {
    /* anonymous block */ {
        // Range: 0x242690 -> 0x2440C4
        float colorScale; // r29
        float alphaScale; // r28
        float faderad; // r21
        class RwMatrixTag matCopy; // r29+0x150
        class RpMaterial * mat; // r2
        class RwRGBA oldcolor; // r29+0x41C
        class RwTexture * oldtexture; // r2
        signed long oldSkyTest_1; // r2
        float uoffset; // r20
        class xVec3 beamtips[3]; // r29+0x120
        class xVec3 beamstart; // r29+0x408
        class xVec3 beamend; // r29+0x3F8
        class xVec3 beamdir; // r29+0x3E8
        unsigned int i; // r7
        class xColor_tag fadecolor; // r29+0x418
        class xVec3 prevReflect; // r29+0x3D8
        class xVec3 nextReflect; // r29+0x3C8
        float scopeBeamAdjust[3][2]; // @ 0x005FA500
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002440D0 -> 0x00244934
*/
// Range: 0x2440D0 -> 0x244934
// this: r16
void zNMENeptune::Render() {
    /* anonymous block */ {
        // Range: 0x2440D0 -> 0x244934
        class RpMaterialList * matlist; // r2
        class RpMaterial * scopeMaterial; // r2
        signed long oldSkyTest_1; // r2
        signed int i; // r9
        class xQuat blurQuat[6][4]; // r29+0x200
        class xVec3 blurTran[6][4]; // r29+0xE0
        signed int i; // r14
        signed int j; // r13
        signed int currIdx; // r12
        float blurTimeCurr; // r24
        signed int blurInt; // r2
        float blurFrac; // r23
        float blurLerp; // r29+0x390
        float lerpAlpha; // r22
        float lerpColor; // r21
        class xQuat lerpQuat; // r29+0xD0
        class xVec3 lerpTran; // r29+0x380
        class xMat4x3 adjustedScopeMat; // @ 0x006683F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00244940 -> 0x00245EB8
*/
// Range: 0x244940 -> 0x245EB8
// this: r16
void zNMENeptune::PostProcess(float dt /* r25 */) {
    /* anonymous block */ {
        // Range: 0x244940 -> 0x245EB8
        signed int i; // r19
        class xVec3 tempMidSect; // r29+0x370
        class RwMatrixTag oldPlyrMat; // r29+0x1A0
        float oldPos; // r24
        class xVec3 atvec; // r29+0x360
        class xVec3 old_aim_pos; // r29+0x350
        class xVec3 old_aim_dir; // r29+0x340
        class xQuat old_aim_momentum; // r29+0x190
        class xMat4x3 old_aim_mat; // r29+0x150
        class xVec3 target_aim_pos; // r29+0x330
        class xMat3x3 restMat; // r29+0x120
        float distPlayer2D; // r29+0x380
        class NMECfgNeptuneAttack * currAtk; // r2
        float finalTimer; // r29+0x380
        float lockonTimer; // r29+0x380
        float aim_directlerp; // r3
        float tooCloseTrackLerp; // r29+0x380
        class xVec3 target_aim_pos; // r29+0x320
        class xVec3 player_midsect; // r29+0x310
        class xVec3 target_dir; // r29+0x300
        class xQuat aimQuat; // r29+0x110
        class xMat3x3 aimMomentMat; // r29+0xE0
        class xMat3x3 directMat; // r29+0xB0
        class xVec3 scopeCamPos; // r29+0x2F0
        float checkDist; // r29+0x380
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00245EC0 -> 0x0024A7F8
*/
// Range: 0x245EC0 -> 0x24A7F8
// this: r16
void zNMENeptune::Process(float dt /* r23 */) {
    /* anonymous block */ {
        // Range: 0x245EC0 -> 0x24A7F8
        float safeDist; // r29+0x5C0
        float safeVel; // r29+0x5C0
        float velscale; // r29+0x5C0
        class xBase * base; // r2
        float tmpparam[4]; // r29+0x250
        float zeroParam[4]; // r29+0x240
        class xVec3 * playerpos; // r2
        class xVec3 * playeroldpos; // r2
        unsigned char inFireLoop; // r2
        signed int i; // r7
        class xVec3 triTipTags[3]; // r29+0x210
        signed int aimedAtKrabs; // r29+0x5BC
        float aimKrabsDist; // r29+0x5C0
        class NMECfgNeptuneAttack * currAtk; // r2
        float time_remaining; // r21
        unsigned char firstbeam; // r2
        class xIsect isx; // r29+0x1E0
        class xVec3 beamstart; // r29+0x538
        class xVec3 beamend; // r29+0x528
        class xVec3 beamdir; // r29+0x518
        unsigned char reflected; // r2
        class xRay3 beamray; // r29+0x1B0
        class xVec3 reflectnorm; // r29+0x508
        float reflDot; // r29+0x5C0
        class xVec3 tempPlayerMidsect; // r29+0x4F8
        signed int oldScorchCount; // r2
        float distPlayer2D; // r29+0x5C0
        float distLerp; // r4
        float kbvel; // r5
        float kbtime; // r29+0x5C0
        class xEnt * refl; // r2
        class xMat3x3 assetMat; // r29+0x180
        class xVec3 bucketSoundPos; // r29+0x4E8
        class NMECfgNeptuneAttack * currAtk; // r2
        class xVec3 triTipTags[4]; // r29+0x150
        class xMat4x3 * cruiseMat; // r2
        float cruiseDist; // r29+0x5C0
        class NMECfgNeptuneAttack * currAtk; // r2
        signed int i; // r19
        class NMECfgNeptuneAttack * currAtk; // r2
        class NMECfgNeptuneAttack * currAtk; // r2
        float distplayer2; // r29+0x5C0
        signed int i; // r19
        signed int i; // r8
        signed int lagidx; // r7
        class xVec3 laggedVel; // r29+0x4D8
        float tgtTime; // r29+0x5C0
        float launchSpeed; // r29+0x5C0
        unsigned char inFireLoop; // r2
        float playerDist; // r29+0x5C0
        float distLerp; // r3
        float timeLerp; // r29+0x5C0
        float frontLerp; // r29+0x5C0
        float frontDist; // r29+0x5C0
        class xVec3 facepos; // r29+0x4C8
        class xVec3 diffVec; // r29+0x4B8
        class xVec3 atvec; // r29+0x4A8
        float currAngle; // r20
        float targetAngle; // r29+0x5C0
        float diffAngle; // r3
        float absAngle; // r29+0x5C0
        float rightdot; // r29+0x5C0
        float xzdist2; // r29+0x5C0
        signed int turncount; // r21
        signed int i; // r20
        class xEnt * refl; // r2
        class xMat3x3 assetMat; // r29+0x120
        class xVec3 shooterVec; // @ 0x005FA4E8
        signed int kbpower; // @ 0x00637400
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024A800 -> 0x0024AB04
*/
// Range: 0x24A800 -> 0x24AB04
// this: r16
void zNMENeptune::Reset() {
    /* anonymous block */ {
        // Range: 0x24A800 -> 0x24AB04
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024AB10 -> 0x0024ABA0
*/
// Range: 0x24AB10 -> 0x24ABA0
// this: r16
void zNMENeptune::Destroy() {
    /* anonymous block */ {
        // Range: 0x24AB10 -> 0x24ABA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024ABB0 -> 0x0024B628
*/
// Range: 0x24ABB0 -> 0x24B628
// this: r21
void zNMENeptune::Setup() {
    /* anonymous block */ {
        // Range: 0x24ABB0 -> 0x24B628
        signed int i; // r17
        signed int currIndex; // r4
        class xModelInstance * minst; // r3
        signed int tagidx; // r18
        class RpAtomic * atomic; // r2
        signed int whichCollideBody; // r5
        signed int pitchIdx; // r22
        class xAnimState * astate; // r2
        class RwMatrixTag tempmat[64]; // r29+0x7B0
        class xQuat tempquat[64]; // r29+0x3B0
        class xVec3 temptran[64]; // r29+0xB0
        float bilinear[2]; // r29+0x1850
        class xVec3 butt; // r29+0x1840
        class xVec3 tip; // r29+0x1830
        signed int samp; // r20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024B630 -> 0x0024B8A4
*/
// Range: 0x24B630 -> 0x24B8A4
// this: r17
unsigned char zNMENeptune::BeamCollide(class xRay3 * beamray /* r16 */, signed int * aimedAtKrabs /* r18 */, class xVec3 * reflectnorm /* r20 */) {
    /* anonymous block */ {
        // Range: 0x24B630 -> 0x24B8A4
        class xIsect isx; // r29+0x130
        class xCollis beamcollis; // r29+0xD0
        class xCollis boundcollis; // r29+0x70
        class xSphere krabSph; // r29+0x60
        signed int i; // r19
        class xEnt * reflent; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024B8B0 -> 0x0024BA60
*/
// Range: 0x24B8B0 -> 0x24BA60
// this: r2
void zNMENeptune::BossCamSetTargets() {
    /* anonymous block */ {
        // Range: 0x24B8B0 -> 0x24BA60
        float dx; // r8
        float dz; // r9
        float outlerp; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024BA60 -> 0x0024BB1C
*/
// Range: 0x24BA60 -> 0x24BB1C
// this: r16
void zNMENeptune::PaintDecalOnPlayer() {
    /* anonymous block */ {
        // Range: 0x24BA60 -> 0x24BB1C
        class emit_context ec; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024BB20 -> 0x0024CE6C
*/
// Range: 0x24BB20 -> 0x24CE6C
// this: r21
void zNMENeptune::FireFXUpdate(float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x24BB20 -> 0x24CE6C
        signed int i; // r7
        unsigned char inFireLoop; // r2
        class xVec3 worldTipAvg; // r29+0x2F8
        class RwMatrixTag tmproot; // r29+0x1C0
        class xVec3 targetdir; // r29+0x2E8
        class xVec3 tridentdir; // r29+0x2D8
        class EmitContext emitctx; // r29+0x160
        float avgDot; // r29+0x310
        signed int oldParCount; // r2
        class NMECfgNeptuneAttack * currAtk; // r2
        class _tagLightningAdd ltadd; // r29+0xF0
        float beamlerp; // r1
        float feelAngle; // r20
        float feelerlerp; // r1
        class xMat4x3 rotmat; // r29+0xB0
        signed int j; // r8
        class xVec3 start; // r29+0x2C8
        class xVec3 end; // r29+0x2B8
        class zLightningRing * currLtRing; // r17
        class zLightningRing * currLtRing; // r3
        float poslerp; // r29+0x310
        class xVec3 tempEnd; // r29+0x2A8
        class xVec3 ringEnds[2]; // @ 0x005FA4D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024CE70 -> 0x0024D9C0
*/
// Range: 0x24CE70 -> 0x24D9C0
// this: r20
void zNMENeptune::TailSwipeUpdate() {
    /* anonymous block */ {
        // Range: 0x24CE70 -> 0x24D9C0
        signed int i; // r17
        float tailTimer; // r21
        signed int emitted; // r19
        class xVec3 posEmit[20]; // r29+0x180
        class xVec3 velEmit[20]; // r29+0x90
        float normrand; // r29+0x2E0
        class xVec3 tipCenter; // r29+0x2D0
        class xVec3 neckTop; // r29+0x2C0
        class xVec3 neckBottom; // r29+0x2B0
        class xVec3 perpVec; // r29+0x2A0
        class xVec3 ribpos; // r29+0x290
        class xFXRibbon * rib; // r22
        class RibData * ribhelp; // r2
        float * tailtable; // r6
        float tailframe; // r29+0x2E0
        float taillerp; // r29+0x2E0
        float tailangle; // r20
        float vecleftX; // r12
        float vecleftZ; // r11
        float dotAt; // r21
        float dotLeft; // r29+0x2E0
        float playerX; // r29+0x2E0
        float playerZ; // r29+0x2E0
        signed int tailidx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024D9C0 -> 0x0024DBC8
*/
// Range: 0x24D9C0 -> 0x24DBC8
// this: r2
void zNMENeptune::CollideLightning(class RxObjSpace3DVertex * verts /* r2 */, unsigned int numVerts /* r2 */) {
    /* anonymous block */ {
        // Range: 0x24D9C0 -> 0x24DBC8
        unsigned int i; // r9
        float playerX; // r7
        float playerY; // r6
        float playerZ; // r5
        float currX; // r15
        float currY; // r14
        float currZ; // r13
        float nextX; // r4
        float nextY; // r3
        float nextZ; // r2
        float checkDist2; // r1
        float ax; // r29
        float ay; // r29
        float az; // r29
        float bx; // r29
        float by; // r29
        float bz; // r29
        float dotAB; // r29
        float dotBB; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024DBD0 -> 0x0024E188
*/
// Range: 0x24DBD0 -> 0x24E188
// this: r16
void zNMENeptune::DefendCollideUpdate() {
    /* anonymous block */ {
        // Range: 0x24DBD0 -> 0x24E188
        class xVec3 butt; // r29+0x120
        class xVec3 tip; // r29+0x110
        class xVec3 defendCurrVec; // r29+0x100
        class xVec3 defendForward; // r29+0xF0
        class xVec3 defendRight; // r29+0xE0
        class xVec3 defendUp; // r29+0xD0
        class xMat4x3 * defendMat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024E190 -> 0x0024EB90
*/
// Range: 0x24E190 -> 0x24EB90
void RenderLightBeam(class xVec3 * start /* r21 */, class xVec3 * end /* r20 */, class xVec3 * dir /* r19 */, class xVec3 * startnorm /* r18 */, class xVec3 * endnorm /* r17 */, float radstart /* r26 */, float radend /* r25 */, class xColor_tag color /* r29+0xFC */, float texu_start /* r23 */, float texu_end /* r22 */, float texv_start /* r21 */, float texv_end /* r20 */, signed int numseg /* r23 */, signed int numradial /* r29+0x460 */) {
    /* anonymous block */ {
        // Range: 0x24E190 -> 0x24EB90
        signed int seg; // r12
        signed int i; // r22
        class xMat4x3 beamBasis; // r29+0x420
        class xVec3 xsect[2][16]; // r29+0x2A0
        class xVec3 xsectlerp[2][16]; // r29+0x120
        float anglescale; // r24
        float startPlaneD; // r3
        float endPlaneD; // r2
        class RxObjSpace3DVertex * currvert; // r11
        class RxObjSpace3DVertex * xsectStartVert; // r10
        float invradial; // r6
        float invseg; // r5
        float texuscale; // r29+0x460
        class xVec3 * xsectA; // r9
        class xVec3 * xsectB; // r16
        float seglerpA; // r15
        float seglerpB; // r14
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024EB90 -> 0x0024FC24
*/
// Range: 0x24EB90 -> 0x24FC24
// this: r20
void zNMENeptune::ParUpdate(float dt /* r31 */, unsigned char updatelast /* r19 */) {
    /* anonymous block */ {
        // Range: 0x24EB90 -> 0x24FC24
        class xMat4x3 * cammat; // r2
        float camAtX; // r30
        float camAtY; // r29
        float camAtZ; // r28
        float camD; // r27
        float playerX; // r26
        float playerY; // r25
        float playerZ; // r29+0xD8
        signed int i; // r18
        signed int sortcount; // r29+0xE0
        class zNeptuneSortParticle * sortpar; // r29+0xDC
        float spiral_radrate; // r1
        float spiral_radtarget; // r24
        float posX; // r23
        float posY; // r22
        float posZ; // r21
        class zNeptuneParticle * currpar; // r17
        float currLife; // r20
        class zNeptuneParticleBeamUser * beamuser; // r2
        float lerp; // r29+0x140
        class zNeptuneParticleSpiralUser * spuser; // r2
        float spiral_rad; // r29+0x140
        float cnew; // r29+0x140
        float snew; // r29+0x140
        float cold; // r29+0x140
        float sold; // r29+0x140
        float deltadt; // r29+0x140
        float bcx; // r29+0x140
        float bcy; // r29+0x140
        float bcz; // r29+0x140
        float bsx; // r29+0x140
        float bsy; // r29+0x140
        float bsz; // r29+0x140
        class zNeptuneParticleGravBounceUser * gbuser; // r2
        class zNeptuneParticleGravBounceUser * gbuser; // r2
        class zNeptuneParSize * npsize; // r2
        float size; // r29+0x140
        float fDepth; // r2
        unsigned int uLife; // r2
        class ptank_pool__pos_color_size_uv2 pool; // r29+0xF0
        float lifetime; // r2
        class zNeptuneParTex * ptex; // r2
        class zNeptuneParCol * pcol; // r2
        float collerp; // r1
        float invcollerp; // r29+0x140
        class zNeptuneParSize * psize; // r2
        float interpsize; // r29+0x140
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024FC30 -> 0x0024FD48
*/
// Range: 0x24FC30 -> 0x24FD48
// this: r2
void zNMENeptune::ScorchUpdate(float dt /* r29+0x10 */) {
    /* anonymous block */ {
        // Range: 0x24FC30 -> 0x24FD48
        signed int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024FD50 -> 0x0024FF00
*/
// Range: 0x24FD50 -> 0x24FF00
// this: r20
void zNMENeptune::ParEmitBunch(float * emitVar /* r19 */, float emitRate /* r29+0x70 */, float dt /* r29+0x70 */, unsigned int (* emitCB)(class zNeptuneParticle *, void *, float) /* r18 */, void * context /* r17 */) {
    /* anonymous block */ {
        // Range: 0x24FD50 -> 0x24FF00
        float invEmitRate; // r21
        float invDt; // r20
        class zNeptuneParticle * allocpar; // r2
        unsigned int emitType; // r2
        class zNeptuneParType * ptype; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0024FF00 -> 0x002501C0
*/
// Range: 0x24FF00 -> 0x2501C0
// this: r2
void zNMENeptune::ParArrayInit() {
    /* anonymous block */ {
        // Range: 0x24FF00 -> 0x2501C0
        signed int i; // r10
        signed int startNew; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002501C0 -> 0x002509C0
*/
// Range: 0x2501C0 -> 0x2509C0
// this: r16
void zNMENeptune::FirePitchUpdate() {
    /* anonymous block */ {
        // Range: 0x2501C0 -> 0x2509C0
        signed int i; // r3
        class xAnimSingle * fireSingle; // r4
        signed int lastResult; // r2
        float lastHitX; // r3
        float lastHitZ; // r2
        float lastDist; // r13
        float hitX; // r8
        float hitZ; // r7
        float testDist; // r4
        float distToTarget; // r1
        float fireLerp; // r5
        float closeDist; // r12
        signed int closeIdx; // r3
        class xMat4x3 targetMat; // r29+0x20
        class xVec3 mirrorVec; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002509C0 -> 0x00250CC0
*/
// Range: 0x2509C0 -> 0x250CC0
// this: r18
void zNMENeptune::CamStateChange(unsigned int newCamState /* r17 */, unsigned char force_cut /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2509C0 -> 0x250CC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00250CC0 -> 0x00250E44
*/
// Range: 0x250CC0 -> 0x250E44
// this: r2
class zLoopingSound * zNMENeptune::SndLoop3D(enum eSOUND soundEnum /* r2 */, class xVec3 * playpos /* r19 */, void * context /* r2 */) {
    /* anonymous block */ {
        // Range: 0x250CC0 -> 0x250E44
        signed int i; // r8
        unsigned int sndID; // r18
        unsigned int sndFlags; // r17
        class zLoopingSound * looper; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00250E50 -> 0x00251448
*/
// Range: 0x250E50 -> 0x251448
// this: r20
void zNMENeptune::CommonReset() {
    /* anonymous block */ {
        // Range: 0x250E50 -> 0x251448
        signed int i; // r19
        class zEntSimpleObj * simpList; // r18
        signed int simpCount; // r2
        signed int crowdCount; // r17
        class CrowdSortStruct crowdList[20]; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00251450 -> 0x00251AE8
*/
// Range: 0x251450 -> 0x251AE8
// this: r19
void zNMENeptune::Init(class xEntAsset * entasset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x251450 -> 0x251AE8
        signed int i; // r9
        class xAnimTable * table; // r2
        class xAnimState * currstate; // r8
        class iAnimSKBHeader * skb; // r2
        class RwRGBAReal tempColor; // r29+0x60
        class RpAtomic * trident_model; // r18
        class RpAtomic * bucket_model; // r2
        signed int matidx; // r20
        class RpGeometry * geom; // r2
        class RpMaterialList * matlist; // r2
        class RpMaterial * scopeMat; // r19
        signed int i; // r11
        signed int j; // r10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00251AF0 -> 0x0025221C
*/
// Range: 0x251AF0 -> 0x25221C
class xAnimTable * CreateAnimTable(class xAnimTable * table /* r16 */) {
    /* anonymous block */ {
        // Range: 0x251AF0 -> 0x25221C
        signed int i; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252220 -> 0x002522B4
*/
// Range: 0x252220 -> 0x2522B4
// this: r16
void zNMENeptune::CreateConfig() {
    /* anonymous block */ {
        // Range: 0x252220 -> 0x2522B4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002522C0 -> 0x002522C8
*/
// Range: 0x2522C0 -> 0x2522C8
void destroy() {
    /* anonymous block */ {
        // Range: 0x2522C0 -> 0x2522C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002522D0 -> 0x00252404
*/
// Range: 0x2522D0 -> 0x252404
// this: r16
void zCamNeptune::update() {
    /* anonymous block */ {
        // Range: 0x2522D0 -> 0x252404
        class xVec3 atvec; // r29+0x60
        class xMat4x3 atmat; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252410 -> 0x00252430
*/
// Range: 0x252410 -> 0x252430
// this: r2
void zCamNeptune::start() {
    /* anonymous block */ {
        // Range: 0x252410 -> 0x252430
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252430 -> 0x002524A0
*/
// Range: 0x252430 -> 0x2524A0
// this: r16
void zCamNeptune::create() {
    /* anonymous block */ {
        // Range: 0x252430 -> 0x2524A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002524A0 -> 0x002524B4
*/
// Range: 0x2524A0 -> 0x2524B4
// this: r2
zCamNeptune::zCamNeptune() {
    /* anonymous block */ {
        // Range: 0x2524A0 -> 0x2524B4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002524C0 -> 0x002524E8
*/
// Range: 0x2524C0 -> 0x2524E8
static unsigned int DamageExitCB() {
    /* anonymous block */ {
        // Range: 0x2524C0 -> 0x2524E8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002524F0 -> 0x0025255C
*/
// Range: 0x2524F0 -> 0x25255C
static unsigned int DamageCheck() {
    /* anonymous block */ {
        // Range: 0x2524F0 -> 0x25255C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252560 -> 0x00252600
*/
// Range: 0x252560 -> 0x252600
static unsigned int NoStunCheck() {
    /* anonymous block */ {
        // Range: 0x252560 -> 0x252600
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252600 -> 0x0025265C
*/
// Range: 0x252600 -> 0x25265C
static unsigned int ReflectStunCheck() {
    /* anonymous block */ {
        // Range: 0x252600 -> 0x25265C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252660 -> 0x002526A0
*/
// Range: 0x252660 -> 0x2526A0
static unsigned int StunCheck() {
    /* anonymous block */ {
        // Range: 0x252660 -> 0x2526A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002526A0 -> 0x002526B4
*/
// Range: 0x2526A0 -> 0x2526B4
static unsigned int OutrageEndCheck() {
    /* anonymous block */ {
        // Range: 0x2526A0 -> 0x2526B4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002526C0 -> 0x002526F4
*/
// Range: 0x2526C0 -> 0x2526F4
static unsigned int OutrageCheck(class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2526C0 -> 0x2526F4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252700 -> 0x00252718
*/
// Range: 0x252700 -> 0x252718
static unsigned int TauntCB() {
    /* anonymous block */ {
        // Range: 0x252700 -> 0x252718
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252720 -> 0x0025272C
*/
// Range: 0x252720 -> 0x25272C
static unsigned int TauntCheck() {
    /* anonymous block */ {
        // Range: 0x252720 -> 0x25272C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252730 -> 0x00252760
*/
// Range: 0x252730 -> 0x252760
static unsigned int ExitFireCheck() {
    /* anonymous block */ {
        // Range: 0x252730 -> 0x252760
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252760 -> 0x00252790
*/
// Range: 0x252760 -> 0x252790
static unsigned int ReflectCB(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x252760 -> 0x252790
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252790 -> 0x002527A4
*/
// Range: 0x252790 -> 0x2527A4
static unsigned int ReflectCheck() {
    /* anonymous block */ {
        // Range: 0x252790 -> 0x2527A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002527B0 -> 0x002527D0
*/
// Range: 0x2527B0 -> 0x2527D0
static unsigned int FireLoopCB() {
    /* anonymous block */ {
        // Range: 0x2527B0 -> 0x2527D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002527D0 -> 0x002527E0
*/
// Range: 0x2527D0 -> 0x2527E0
static unsigned int FireCB() {
    /* anonymous block */ {
        // Range: 0x2527D0 -> 0x2527E0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002527E0 -> 0x00252824
*/
// Range: 0x2527E0 -> 0x252824
static unsigned int FireLoopCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2527E0 -> 0x252824
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252830 -> 0x00252844
*/
// Range: 0x252830 -> 0x252844
static unsigned int FireCheck() {
    /* anonymous block */ {
        // Range: 0x252830 -> 0x252844
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252850 -> 0x0025288C
*/
// Range: 0x252850 -> 0x25288C
static unsigned int TailAttackCB() {
    /* anonymous block */ {
        // Range: 0x252850 -> 0x25288C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252890 -> 0x00252938
*/
// Range: 0x252890 -> 0x252938
static unsigned int TailAttackRightCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x252890 -> 0x252938
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252940 -> 0x002529F0
*/
// Range: 0x252940 -> 0x2529F0
static unsigned int TailAttackLeftCheck(class xAnimSingle * anim /* r2 */) {
    /* anonymous block */ {
        // Range: 0x252940 -> 0x2529F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002529F0 -> 0x00252A04
*/
// Range: 0x2529F0 -> 0x252A04
static unsigned int ExitDefendCheck() {
    /* anonymous block */ {
        // Range: 0x2529F0 -> 0x252A04
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252A10 -> 0x00252A24
*/
// Range: 0x252A10 -> 0x252A24
static unsigned int DefendCheck() {
    /* anonymous block */ {
        // Range: 0x252A10 -> 0x252A24
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252A30 -> 0x00252A38
*/
// Range: 0x252A30 -> 0x252A38
static void Crowd_RenderSlave() {
    /* anonymous block */ {
        // Range: 0x252A30 -> 0x252A38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252A40 -> 0x00252BBC
*/
// Range: 0x252A40 -> 0x252BBC
static void Crowd_RenderMaster(class xEnt * ent /* r16 */) {
    /* anonymous block */ {
        // Range: 0x252A40 -> 0x252BBC
        class xEnt * * crowdGroup; // r21
        class RpAtomic * atomic; // r20
        class RpHAnimHierarchy * pHierarchy; // r2
        class RwMatrixTag * pAnimOldMatrix; // r2
        class rwPDS_HICloneArray cloneList[20]; // r29+0x80
        unsigned int cloneCount; // r19
        enum RwFrustumTestResult frustRes; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252BC0 -> 0x00252C64
*/
// Range: 0x252BC0 -> 0x252C64
static void Crowd_UpdateSlave(class xEnt * ent /* r16 */, class xScene * sc /* r2 */, float dt /* r29+0x20 */) {
    /* anonymous block */ {
        // Range: 0x252BC0 -> 0x252C64
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252C70 -> 0x00252CA4
*/
// Range: 0x252C70 -> 0x252CA4
static signed int CmpCrowd(void * a /* r2 */, void * b /* r2 */) {
    /* anonymous block */ {
        // Range: 0x252C70 -> 0x252CA4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252CB0 -> 0x00252D40
*/
// Range: 0x252CB0 -> 0x252D40
static void DecalDestCB(class RpAtomic * atomic /* r2 */) {
    /* anonymous block */ {
        // Range: 0x252CB0 -> 0x252D40
        signed int i; // r8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252D40 -> 0x00252E94
*/
// Range: 0x252D40 -> 0x252E94
static void DecalEmitCB(class RpAtomic * atomic /* r2 */, class xMat4x3 * driver /* r2 */) {
    /* anonymous block */ {
        // Range: 0x252D40 -> 0x252E94
        float area; // r9
        signed int i; // r6
        signed int numTri; // r2
        class RpGeometry * geom; // r2
        class RwV3d * vert; // r2
        class RpTriangle * tri; // r3
        class xVec3 * va; // r2
        class xVec3 * vb; // r2
        class xVec3 * vc; // r2
        float dx0; // r29
        float dy0; // r29
        float dz0; // r29
        float dx1; // r29
        float dy1; // r29
        float dz1; // r29
        float crossx; // r29
        float crossy; // r29
        float crossz; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00252EA0 -> 0x00252FF4
*/
// Range: 0x252EA0 -> 0x252FF4
static void ReflectBeforeAnimMatrices(class xAnimPlay * play /* r2 */, class xQuat * quat /* r17 */, class xVec3 * tran /* r16 */) {
    /* anonymous block */ {
        // Range: 0x252EA0 -> 0x252FF4
        float fadeLerp; // r20
        class xQuat quatRot; // r29+0x40
        class xVec3 idleTipTranslate; // @ 0x005FA4A8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00253000 -> 0x00253430
*/
// Range: 0x253000 -> 0x253430
static void BucketCollideEventFunc(unsigned int toEvent /* r2 */) {
    /* anonymous block */ {
        // Range: 0x253000 -> 0x253430
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00253430 -> 0x00253480
*/
// Range: 0x253430 -> 0x253480
static void PovCollideBoundUpdateCB(class xEnt * ent /* r16 */, class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x253430 -> 0x253480
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00253480 -> 0x002534DC
*/
// Range: 0x253480 -> 0x2534DC
static void BodyCollideBoundUpdateCB(class xEnt * ent /* r16 */, class xVec3 * pos /* r2 */) {
    /* anonymous block */ {
        // Range: 0x253480 -> 0x2534DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002534E0 -> 0x00253720
*/
// Range: 0x2534E0 -> 0x253720
static signed int ExtractBoneInfluence(class RpAtomic * model /* r23 */, signed int * influence /* r21 */, class RwMatrixTag * skinmat /* r20 */, signed int maxcount /* r19 */) {
    /* anonymous block */ {
        // Range: 0x2534E0 -> 0x253720
        class RpSkin * skin; // r16
        unsigned int * boneidx; // r18
        class RwMatrixWeights * bonewt; // r22
        class RwMatrixTag * bonemat; // r2
        signed int i; // r7
        signed int j; // r6
        signed int numVert; // r2
        signed int influenceIdx; // r11
        signed int foundInfl; // r17
        float * currwt; // r5
        unsigned int curridx; // r4
        unsigned int matidx; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00253720 -> 0x00253F20
*/
// Range: 0x253720 -> 0x253F20
static void LightningRingRenderCB(class zLightning * ltng /* r2 */, class RxObjSpace3DVertex * vertA /* r29+0xBC */, class RxObjSpace3DVertex * vertB /* r2 */, unsigned int numVerts /* r20 */) {
    /* anonymous block */ {
        // Range: 0x253720 -> 0x253F20
        signed int vnum; // r4
        signed int j; // r13
        unsigned int i; // r12
        class RxObjSpace3DVertex * verts; // r3
        class RxObjSpace3DVertex * vlist[2]; // r29+0xE8
        class zLightningRing * currLtRing; // r2
        class NMECfgNeptuneAttack * currAtk; // r2
        float rad; // r22
        float lineDelta; // r21
        float rotDelta; // r20
        float deltaCos; // r20
        float deltaSin; // r29+0xF0
        float lineOffset; // r8
        float currCos; // r7
        float currSin; // r6
        class xVec3 * pos; // r2
        float px; // r29+0xF0
        float pz; // r29+0xF0
        float tempCos; // r29+0xF0
        class xVec3 * posStart; // r2
        class xVec3 * posEnd; // r2
        float centerY; // r3
        class RwV3d * pos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00253F20 -> 0x00254508
*/
// Range: 0x253F20 -> 0x254508
static void LightningFeelerRenderCB(class RxObjSpace3DVertex * vertA /* r23 */, class RxObjSpace3DVertex * vertB /* r2 */, unsigned int numVerts /* r20 */) {
    /* anonymous block */ {
        // Range: 0x253F20 -> 0x254508
        signed int vnum; // r22
        class RxObjSpace3DVertex * vlist[2]; // r29+0xB8
        unsigned int i; // r3
        class NMECfgNeptuneAttack * currAtk; // r8
        float centerY; // r29+0xC0
        class RwV3d * pos; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00254510 -> 0x00254988
*/
// Range: 0x254510 -> 0x254988
static void LightningBeamRenderCB(class RxObjSpace3DVertex * vertA /* r23 */, class RxObjSpace3DVertex * vertB /* r2 */, unsigned int numVerts /* r20 */) {
    /* anonymous block */ {
        // Range: 0x254510 -> 0x254988
        signed int vnum; // r21
        class RxObjSpace3DVertex * vlist[2]; // r29+0xB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00254990 -> 0x00254BBC
*/
// Range: 0x254990 -> 0x254BBC
static void BossPreRender() {
    /* anonymous block */ {
        // Range: 0x254990 -> 0x254BBC
        class RwV2d vw; // r29+0x38
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00254BC0 -> 0x002552DC
*/
// Range: 0x254BC0 -> 0x2552DC
static void HackScaleModel(class RpAtomic * model /* r18 */, float scale /* r20 */) {
    /* anonymous block */ {
        // Range: 0x254BC0 -> 0x2552DC
        signed int i; // r7
        signed int vertCount; // r2
        class RwV3d * verts; // r6
        signed int usrdatcount; // r2
        class RpUserDataArray * usrdat; // r2
        signed int * data; // r2
        signed int numbones; // r2
        class xSphere * bonesph; // r6
        class RpSkin * pSkin; // r16
        signed int numbones; // r2
        class RwMatrixTag * skinBoneMat; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002552E0 -> 0x002553C4
*/
// Range: 0x2552E0 -> 0x2553C4
static unsigned char SndBucketStun(class zLoopingSound * loopsnd /* r16 */) {
    /* anonymous block */ {
        // Range: 0x2552E0 -> 0x2553C4
        class NMECfgNeptune * cfg; // r2
        float vollerp; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002553D0 -> 0x00255418
*/
// Range: 0x2553D0 -> 0x255418
static unsigned char SndBeamStun(class zLoopingSound * loopsnd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2553D0 -> 0x255418
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00255420 -> 0x002556A4
*/
// Range: 0x255420 -> 0x2556A4
static unsigned char SndRing(class zLoopingSound * loopsnd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x255420 -> 0x2556A4
        class NMECfgNeptune * cfg; // r5
        class NMECfgNeptuneAttack * currAtk; // r2
        class zLightningRing * ltring; // r2
        float playerX; // r8
        float playerZ; // r5
        float invPlayerMag; // r29
        float dopplerp; // r1
        float distScale; // r29
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002556B0 -> 0x00255778
*/
// Range: 0x2556B0 -> 0x255778
static unsigned char SndLightning(class zLoopingSound * loopsnd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2556B0 -> 0x255778
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00255780 -> 0x0025593C
*/
// Range: 0x255780 -> 0x25593C
static unsigned char SndHose(class zLoopingSound * loopsnd /* r2 */) {
    /* anonymous block */ {
        // Range: 0x255780 -> 0x25593C
        class NMECfgNeptune * cfg; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00255940 -> 0x00255CD8
*/
// Range: 0x255940 -> 0x255CD8
static unsigned int EmitScorchCB(class zNeptuneParticle * par /* r20 */) {
    /* anonymous block */ {
        // Range: 0x255940 -> 0x255CD8
        signed int foundScorch; // r19
        unsigned int foundTriIdx; // r21
        unsigned int foundVertIdx; // r23
        float foundUV; // r20
        signed int i; // r18
        signed int whichScorch; // r17
        float areaSample; // r1
        class RpGeometry * geom; // r2
        unsigned int triVertIdx; // r2
        unsigned int triIdx; // r2
        unsigned int vertIdx; // r2
        float testUV; // r1
        class xVec3 evalVerts[3]; // r29+0xA0
        class RpGeometry * scorchGeom; // r2
        class zNeptuneParticleGravBounceUser * gbuser; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00255CE0 -> 0x00255F4C
*/
// Range: 0x255CE0 -> 0x255F4C
static unsigned int EmitSpiralCB(class zNeptuneParticle * par /* r18 */, void * context /* r17 */) {
    /* anonymous block */ {
        // Range: 0x255CE0 -> 0x255F4C
        class EmitContext * emitctx; // r2
        float xinit; // r29+0x60
        float yinit; // r29+0x60
        float invmag; // r29+0x60
        class zNeptuneParticleSpiralUser * spuser; // r2
        signed int sign; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zNMETypeBossNeptune.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00255F50 -> 0x002561B4
*/
// Range: 0x255F50 -> 0x2561B4
static unsigned int EmitBeamCB(class zNeptuneParticle * par /* r18 */, void * context /* r2 */, float timeoffs /* r29+0x70 */) {
    /* anonymous block */ {
        // Range: 0x255F50 -> 0x2561B4
        class EmitContext * emitctx; // r17
        class zNeptuneParticleBeamUser * bmuser; // r2
        float vo; // r29+0x70
        float spreadx; // r29+0x70
        float spready; // r29+0x70
        float randang; // r20
    }
}


