/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00387920 -> 0x00387F8C
*/
// Range: 0x387920 -> 0x387F8C
// this: r18
void zCar::SoundUpdate() {
    /* anonymous block */ {
        // Range: 0x387920 -> 0x387F8C
        enum eDamage carDamage; // r2
        unsigned char wasPlaying; // r2
        float maxFreq; // r7
        float freq; // r1
        float freq; // r1
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00387F90 -> 0x00388198
*/
// Range: 0x387F90 -> 0x388198
// this: r17
void zCar::SoundPlayCollision(enum eCollisionType type /* r2 */, float strength /* r20 */) {
    /* anonymous block */ {
        // Range: 0x387F90 -> 0x388198
        class effect * rumble; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003881A0 -> 0x0038829C
*/
// Range: 0x3881A0 -> 0x38829C
// this: r16
void zCar::SoundPlayHorn() {
    /* anonymous block */ {
        // Range: 0x3881A0 -> 0x38829C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003882A0 -> 0x00388728
*/
// Range: 0x3882A0 -> 0x388728
void SoundInitAssetTable() {
    /* anonymous block */ {
        // Range: 0x3882A0 -> 0x388728
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00388730 -> 0x003889E4
*/
// Range: 0x388730 -> 0x3889E4
// this: r21
void zCar::ModelSwap(enum eDamage newDamageLevel /* r2 */, unsigned char swapEffects /* r2 */) {
    /* anonymous block */ {
        // Range: 0x388730 -> 0x3889E4
        class xModelInstance * oldModelInstance; // r2
        class xVec3 * posbuf; // r20
        class xVec3 * velbuf; // r19
        class xVec3 * pp; // r18
        class xVec3 * vp; // r17
        class xSphere unitSphere; // r29+0x80
        signed int j; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003889F0 -> 0x003891A0
*/
// Range: 0x3889F0 -> 0x3891A0
// this: r20
void zCar::StreakFX(class xEnt * ent /* r22 */, float dt /* r24 */) {
    /* anonymous block */ {
        // Range: 0x3889F0 -> 0x3891A0
        class xMat4x3 * pMat; // r19
        signed int i; // r18
        class xMat4x3 * pBoneMat; // r2
        class xVec3 width; // r29+0x460
        class xParEmitterCustomSettings ketchupInfo; // r29+0x250
        class xVec3 velStartPt; // r29+0x450
        class xVec3 velEndPt; // r29+0x440
        class xVec3 ketchupVel; // r29+0x430
        class xVec3 ketchupPos; // r29+0x420
        class xParEmitterCustomSettings seedsInfo; // r29+0xC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003891A0 -> 0x00389C5C
*/
// Range: 0x3891A0 -> 0x389C5C
// this: r16
void zCar::DriveSurfaceFXInternal(class xModelInstance * pModel /* r29+0xBC */, float dt /* r21 */, enum zDrivingSurf collisionType /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3891A0 -> 0x389C5C
        float intensityFactor; // r20
        class zParEmitter * pEmit; // r23
        class xParEmitterCustomSettings parEmitInfo; // r29+0xC0
        float deathSize; // r29+0x370
        float rate; // r2
        class xMat4x3 * pMat; // r21
        class xVec3 parVelStartPt; // r29+0x360
        class xVec3 parVelEndPt; // r29+0x350
        class xVec3 parVel; // r29+0x340
        class xVec3 carVelocity; // r29+0x330
        class xVec3 carVelocity; // r29+0x320
        class xVec3 carVelocity; // r29+0x310
        class xVec3 carVelocity; // r29+0x300
        signed int i; // r20
        class xVec3 parPos; // r29+0x2F0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00389C60 -> 0x00389D20
*/
// Range: 0x389C60 -> 0x389D20
// this: r2
void zCar::RenderBrakeLights(class xModelInstance * pModel /* r16 */) {
    /* anonymous block */ {
        // Range: 0x389C60 -> 0x389D20
        class xMat4x3 brakeLightMatL; // r29+0x60
        class xMat4x3 brakeLightMatR; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00389D20 -> 0x0038A050
*/
// Range: 0x389D20 -> 0x38A050
static void zCarRenderOneBrakeLight(class xMat4x3 * pMat /* r2 */) {
    /* anonymous block */ {
        // Range: 0x389D20 -> 0x38A050
        class xVec3 w; // r29+0x140
        class xVec3 h; // r29+0x130
        class xVec3 d; // r29+0x120
        class xVec3 pos; // r29+0x110
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RwRGBA * _col; // r2
        class RxObjSpace3DVertex sStripVert[4]; // @ 0x00686890
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A050 -> 0x0038A3F0
*/
// Range: 0x38A050 -> 0x38A3F0
// this: r17
void zCar::UpdateEffects(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x38A050 -> 0x38A3F0
        float rightSpeed; // r29+0x70
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A3F0 -> 0x0038A9D4
*/
// Range: 0x38A3F0 -> 0x38A9D4
// this: r16
void zCar::UpdateVirtualBunTop(float dt /* r29+0x190 */) {
    /* anonymous block */ {
        // Range: 0x38A3F0 -> 0x38A9D4
        class xVec3 idealBunPos; // r29+0x180
        class xVec3 delta; // r29+0x170
        class xVec3 newDelta; // r29+0x160
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038A9E0 -> 0x0038B874
*/
// Range: 0x38A9E0 -> 0x38B874
class xAnimTable * CreateAnimTable() {
    /* anonymous block */ {
        // Range: 0x38A9E0 -> 0x38B874
        class xAnimTable * table; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B880 -> 0x0038B8A4
*/
// Range: 0x38B880 -> 0x38B8A4
unsigned int JumpEndedCB() {
    /* anonymous block */ {
        // Range: 0x38B880 -> 0x38B8A4
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B8B0 -> 0x0038B8D8
*/
// Range: 0x38B8B0 -> 0x38B8D8
unsigned int JumpStartedCB() {
    /* anonymous block */ {
        // Range: 0x38B8B0 -> 0x38B8D8
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B8E0 -> 0x0038B910
*/
// Range: 0x38B8E0 -> 0x38B910
unsigned int AnimDefaultCB(class xAnimSingle * anim /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38B8E0 -> 0x38B910
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B910 -> 0x0038B944
*/
// Range: 0x38B910 -> 0x38B944
unsigned int DamageSpinCompleteCB(class xAnimSingle * anim /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38B910 -> 0x38B944
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B950 -> 0x0038B978
*/
// Range: 0x38B950 -> 0x38B978
unsigned int DeathCheck() {
    /* anonymous block */ {
        // Range: 0x38B950 -> 0x38B978
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B980 -> 0x0038B9A8
*/
// Range: 0x38B980 -> 0x38B9A8
unsigned int FailedCheck() {
    /* anonymous block */ {
        // Range: 0x38B980 -> 0x38B9A8
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B9B0 -> 0x0038B9D8
*/
// Range: 0x38B9B0 -> 0x38B9D8
unsigned int SuccessCheck() {
    /* anonymous block */ {
        // Range: 0x38B9B0 -> 0x38B9D8
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038B9E0 -> 0x0038BA08
*/
// Range: 0x38B9E0 -> 0x38BA08
unsigned int SpinRightCheck() {
    /* anonymous block */ {
        // Range: 0x38B9E0 -> 0x38BA08
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BA10 -> 0x0038BA38
*/
// Range: 0x38BA10 -> 0x38BA38
unsigned int SpinLeftCheck() {
    /* anonymous block */ {
        // Range: 0x38BA10 -> 0x38BA38
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BA40 -> 0x0038BA68
*/
// Range: 0x38BA40 -> 0x38BA68
unsigned int CrashCheck() {
    /* anonymous block */ {
        // Range: 0x38BA40 -> 0x38BA68
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BA70 -> 0x0038BA98
*/
// Range: 0x38BA70 -> 0x38BA98
unsigned int JumpEndCheck() {
    /* anonymous block */ {
        // Range: 0x38BA70 -> 0x38BA98
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BAA0 -> 0x0038BAC8
*/
// Range: 0x38BAA0 -> 0x38BAC8
unsigned int JumpCheck() {
    /* anonymous block */ {
        // Range: 0x38BAA0 -> 0x38BAC8
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BAD0 -> 0x0038BAF8
*/
// Range: 0x38BAD0 -> 0x38BAF8
unsigned int ReverseCheck() {
    /* anonymous block */ {
        // Range: 0x38BAD0 -> 0x38BAF8
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BB00 -> 0x0038BB28
*/
// Range: 0x38BB00 -> 0x38BB28
unsigned int StartBoostingCheck() {
    /* anonymous block */ {
        // Range: 0x38BB00 -> 0x38BB28
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BB30 -> 0x0038BB58
*/
// Range: 0x38BB30 -> 0x38BB58
unsigned int StartDrivingSlippyCheck() {
    /* anonymous block */ {
        // Range: 0x38BB30 -> 0x38BB58
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BB60 -> 0x0038BB88
*/
// Range: 0x38BB60 -> 0x38BB88
unsigned int StartDrivingCheck() {
    /* anonymous block */ {
        // Range: 0x38BB60 -> 0x38BB88
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BB90 -> 0x0038BBB8
*/
// Range: 0x38BB90 -> 0x38BBB8
unsigned int IdleCheck() {
    /* anonymous block */ {
        // Range: 0x38BB90 -> 0x38BBB8
        class zCar * pCar; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BBC0 -> 0x0038BDE0
*/
// Range: 0x38BBC0 -> 0x38BDE0
// this: r2
void zCar::UpdateAnimState(class xEnt * pEnt /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38BBC0 -> 0x38BDE0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038BDE0 -> 0x0038C2DC
*/
// Range: 0x38BDE0 -> 0x38C2DC
// this: r21
void zCar::ApplyCollisionRebounds(class xVec3 * pVelocity /* r20 */) {
    /* anonymous block */ {
        // Range: 0x38BDE0 -> 0x38C2DC
        signed int i; // r19
        float oldVertSpeed; // r20
        class xVec3 initialVel; // r29+0x110
        class xVec3 forwardVel; // r29+0x100
        class xVec3 velocityDelta; // r29+0xF0
        float volumeFactor; // r1
        float volumeFactor; // r1
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038C2E0 -> 0x0038C410
*/
// Range: 0x38C2E0 -> 0x38C410
// this: r2
void zCar::DepenetrateCollisionList(class xVec3 * pPosition /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38C2E0 -> 0x38C410
        signed int i; // r11
        float innerBound; // r29+0x10
        class xVec3 depen; // r29
        float depenScale; // r29+0x10
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038C410 -> 0x0038C5BC
*/
// Range: 0x38C410 -> 0x38C5BC
void PreventPoppingThroughWorld(class xVec3 * pStartPosition /* r2 */, class xVec3 * pEndPosition /* r17 */, class xVec3 * pVelocity /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38C410 -> 0x38C5BC
        class xVec3 startPos; // r29+0xF0
        class xVec3 endPos; // r29+0xE0
        class xVec3 direction; // r29+0xD0
        float rayLength; // r29+0x100
        class xRay3 ray; // r29+0x90
        class xCollis collision; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038C5C0 -> 0x0038D0F0
*/
// Range: 0x38C5C0 -> 0x38D0F0
// this: r20
void zCar::SphereCollision(class xVec3 * pNewCarPosition /* r2 */, class xVec3 * pVelocity /* r21 */, unsigned char * pInGroundContact /* r29+0xDC */, float * pShockExtension /* r29+0xD8 */, class xVec3 * pGroundNormal /* r22 */) {
    /* anonymous block */ {
        // Range: 0x38C5C0 -> 0x38D0F0
        signed int i; // r4
        class xSphere collisionSphere; // r29+0x110
        unsigned int i; // r6
        unsigned int numGroundCollisions; // r19
        float averageShockPos; // r29
        class xVec3 averageGroundNormal; // r29+0x190
        signed int i; // r23
        class xSurface * pSurface; // r2
        unsigned char isWallSurfaceType; // r30
        enum zDrivingSurf surfaceType; // r2
        class xEnt * pEntity; // r2
        class xEntBoulder * pBoulder; // r18
        float dot; // r29+0x1A0
        class xVec3 newVel; // r29+0x180
        float hitParams[4]; // r29+0x100
        class zNMECommon * pNME; // r2
        enum en_npctyp type; // r2
        float hitParams[4]; // r29+0xF0
        float hitParams[4]; // r29+0xE0
        unsigned char isSteepSurface; // r2
        float distFromMidShockPos; // r29+0x1A0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D0F0 -> 0x0038D37C
*/
// Range: 0x38D0F0 -> 0x38D37C
// this: r19
unsigned char zCar::operator()(class xEnt & ent /* r18 */) {
    /* anonymous block */ {
        // Range: 0x38D0F0 -> 0x38D37C
        class xCollis * pCollis; // r17
        signed int collisionsDetected; // r16
        signed int maxCollisions; // r2
        signed int f; // r4
        signed int f; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D380 -> 0x0038D474
*/
// Range: 0x38D380 -> 0x38D474
// this: r16
void zCar::UpdateGroundCharacteristics() {
    /* anonymous block */ {
        // Range: 0x38D380 -> 0x38D474
        signed int i; // r6
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D480 -> 0x0038D888
*/
// Range: 0x38D480 -> 0x38D888
// this: r17
void zCar::CalculateIdealOrientation(float yaw /* r29+0x110 */, class xMat3x3 * pIdealOrientation /* r18 */, class xVec3 * pGroundNormal /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38D480 -> 0x38D888
        class xMat3x3 yawMatrix; // r29+0xB0
        class xVec3 inclineRotAxis; // r29+0x100
        class xMat3x3 inclineMatrix; // r29+0x80
        class xVec3 flightArcDirection; // r29+0xF0
        class xVec3 flightArcRightVec; // r29+0xE0
        float tilt; // r29+0x110
        class xMat3x3 inclineMatrix; // r29+0x50
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038D890 -> 0x0038EC04
*/
// Range: 0x38D890 -> 0x38EC04
// this: r16
void zCar::CarUpdate(float dt /* r26 */, float steer /* r29+0x400 */, unsigned char accelOn /* r19 */, unsigned char brakeOn /* r18 */, unsigned char boostOn /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38D890 -> 0x38EC04
        float speedPercentage; // r12
        float steerFactor; // r1
        float steerAngle; // r2
        float accelerationFactor; // r25
        float boostAccelFactor; // r1
        class xVec3 newVelocity; // r29+0x3F0
        class xVec3 acceleration; // r29+0x3E0
        class xVec3 forwardVelocity; // r29+0x3D0
        class xVec3 rightVelocity; // r29+0x3C0
        class xVec3 downHill; // r29+0x3B0
        class xVec3 oldPos; // r29+0x3A0
        class xVec3 newPos; // r29+0x390
        class xVec3 groundNormal; // r29+0x380
        class xMat3x3 idealOrientation; // r29+0x100
        class xQuat currentQuat; // r29+0xF0
        class xQuat idealQuat; // r29+0xE0
        class xQuat slerped; // r29+0xD0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038EC10 -> 0x0038EE58
*/
// Range: 0x38EC10 -> 0x38EE58
// this: r16
void zCar::StartBoost() {
    /* anonymous block */ {
        // Range: 0x38EC10 -> 0x38EE58
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038EE60 -> 0x0038EE68
*/
// Range: 0x38EE60 -> 0x38EE68
// this: r2
unsigned int * zCar::GetVarNitros() {
    /* anonymous block */ {
        // Range: 0x38EE60 -> 0x38EE68
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038EE70 -> 0x0038EE80
*/
// Range: 0x38EE70 -> 0x38EE80
// this: r2
unsigned char zCar::CanPickupNitros() {
    /* anonymous block */ {
        // Range: 0x38EE70 -> 0x38EE80
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038EE80 -> 0x0038EEB4
*/
// Range: 0x38EE80 -> 0x38EEB4
// this: r8
void zCar::AddNitros(signed int nitros /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38EE80 -> 0x38EEB4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038EEC0 -> 0x0038EEC8
*/
// Range: 0x38EEC0 -> 0x38EEC8
// this: r2
class xMat4x3 * zCar::GetMatrix() {
    /* anonymous block */ {
        // Range: 0x38EEC0 -> 0x38EEC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038EED0 -> 0x0038EFD4
*/
// Range: 0x38EED0 -> 0x38EFD4
// this: r2
void zCar::SetMatrix(class xMat4x3 * pSource /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38EED0 -> 0x38EFD4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038EFE0 -> 0x0038F07C
*/
// Range: 0x38EFE0 -> 0x38F07C
// this: r17
void zCar::GiveHealth(signed int health /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38EFE0 -> 0x38F07C
        enum eDamage newDamageLevel; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F080 -> 0x0038F0C0
*/
// Range: 0x38F080 -> 0x38F0C0
// this: r16
void zCar::SetFullHealth() {
    /* anonymous block */ {
        // Range: 0x38F080 -> 0x38F0C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F0C0 -> 0x0038F1D8
*/
// Range: 0x38F0C0 -> 0x38F1D8
// this: r16
void zCar::TakeDamage(unsigned char spinClockwise /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38F0C0 -> 0x38F1D8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F1E0 -> 0x0038F3A8
*/
// Range: 0x38F1E0 -> 0x38F3A8
// this: r17
void zCar::HandleEvent(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */, unsigned int UNUSEDtoParamWidgetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x38F1E0 -> 0x38F3A8
        signed int param; // r16
        unsigned char spinClockwise; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F3B0 -> 0x0038F40C
*/
// Range: 0x38F3B0 -> 0x38F40C
void Exit() {
    /* anonymous block */ {
        // Range: 0x38F3B0 -> 0x38F40C
        signed int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F410 -> 0x0038F640
*/
// Range: 0x38F410 -> 0x38F640
// this: r17
void zCar::Reset(class xEnt * pCarEnt /* r2 */, float initialYaw /* r20 */, class xVec3 * pPosition /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38F410 -> 0x38F640
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F640 -> 0x0038F6AC
*/
// Range: 0x38F640 -> 0x38F6AC
// this: r17
void zCar::Initialize(class xEnt * pCarEnt /* r16 */) {
    /* anonymous block */ {
        // Range: 0x38F640 -> 0x38F6AC
        class xVec3 dummyPos; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCar.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0038F6B0 -> 0x0038F7D8
*/
// Range: 0x38F6B0 -> 0x38F7D8
// this: r16
void zCar::SceneInit() {
    /* anonymous block */ {
        // Range: 0x38F6B0 -> 0x38F7D8
        signed int i; // r18
        char modelName[256]; // r29+0x40
        class RpAtomic * imodel; // r2
    }
}


