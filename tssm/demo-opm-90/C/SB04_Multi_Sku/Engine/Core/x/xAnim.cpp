/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043F460 -> 0x0043F540
*/
// Range: 0x43F460 -> 0x43F540
void xAnimPoolFree(class xAnimPlay * play /* r18 */) {
    /* anonymous block */ {
        // Range: 0x43F460 -> 0x43F540
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043F540 -> 0x0043F5A0
*/
// Range: 0x43F540 -> 0x43F5A0
class xAnimPlay * xAnimPoolAlloc(class xMemPool * pool /* r2 */, void * object /* r19 */, class xAnimTable * table /* r18 */, class xModelInstance * modelInst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x43F540 -> 0x43F5A0
        class xAnimPlay * play; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043F5A0 -> 0x0043F818
*/
// Range: 0x43F5A0 -> 0x43F818
void xAnimPoolInit(class xMemPool * pool /* r18 */, unsigned int count /* r17 */, unsigned int singles /* r16 */, unsigned int blendFlags /* r22 */, unsigned int effectMax /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43F5A0 -> 0x43F818
        unsigned int size; // r21
        unsigned int i; // r7
        void * buffer; // r2
        class xAnimPlay * play; // r2
        class xAnimSingle * currsingle; // r2
        class xAnimActiveEffect * curract; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043F820 -> 0x0043F950
*/
// Range: 0x43F820 -> 0x43F950
void xAnimPoolCB(class xMemPool * pool /* r2 */, void * data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x43F820 -> 0x43F950
        signed int i; // r7
        class xAnimPlay * clone; // r2
        class xAnimPlay * play; // r2
        class xAnimSingle * clonesingle; // r11
        class xAnimSingle * currsingle; // r6
        class xAnimActiveEffect * curract; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043F950 -> 0x0043FE10
*/
// Range: 0x43F950 -> 0x43FE10
void xAnimPlayEval(class xAnimPlay * play /* r20 */) {
    /* anonymous block */ {
        // Range: 0x43F950 -> 0x43FE10
        unsigned int i; // r29+0xF0
        unsigned int bone; // r19
        class xQuat * quatresult; // r29+0xE0
        class xVec3 * tranresult; // r29+0xD0
        class xQuat * quatblend; // r2
        class xVec3 * tranblend; // r2
        class xAnimSingle * si; // r2
        float blendF; // r21
        float blendR; // r20
        unsigned short * blendO; // r17
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043FE10 -> 0x0043FEC0
*/
// Range: 0x43FE10 -> 0x43FEC0
void xAnimPlayUpdate(class xAnimPlay * play /* r18 */, float timeDelta /* r20 */) {
    /* anonymous block */ {
        // Range: 0x43FE10 -> 0x43FEC0
        unsigned int i; // r17
        class xAnimSingle * single; // r19
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0043FEC0 -> 0x004402C0
*/
// Range: 0x43FEC0 -> 0x4402C0
void xAnimPlayStartTransition(class xAnimPlay * play /* r21 */, class xAnimTransition * transition /* r20 */) {
    /* anonymous block */ {
        // Range: 0x43FEC0 -> 0x4402C0
        class xAnimSingle * single; // r19
        class xAnimSingle * bl; // r16
        unsigned char transferredState; // r18
        unsigned char tookOwnership; // r22
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004402C0 -> 0x00440464
*/
// Range: 0x4402C0 -> 0x440464
void xAnimPlayChooseTransition(class xAnimPlay * play /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4402C0 -> 0x440464
        unsigned int i; // r21
        void * object; // r20
        class xAnimTransition * * found; // r19
        class xAnimTransitionList * curr; // r18
        signed char @6040; // @ 0x0063812C
        unsigned char * tmpBuffer; // @ 0x00638128
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00440470 -> 0x004405B0
*/
// Range: 0x440470 -> 0x4405B0
void xAnimPlaySetup(class xAnimPlay * play /* r20 */, void * object /* r2 */, class xAnimTable * table /* r19 */, class xModelInstance * modelInst /* r2 */) {
    /* anonymous block */ {
        // Range: 0x440470 -> 0x4405B0
        signed int i; // r18
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004405B0 -> 0x00441408
*/
// Range: 0x4405B0 -> 0x441408
static void SingleUpdate(class xAnimSingle * single /* r21 */, float timeDelta /* r26 */) {
    /* anonymous block */ {
        // Range: 0x4405B0 -> 0x441408
        unsigned int foundBlendstop; // r22
        unsigned int firstStep; // r17
        class xAnimTransition * foundTransition; // r20
        class xAnimSingle * bl; // r19
        float tranDelta; // r25
        float blendDelta; // r24
        float singleTime; // r20
        void * object; // r18
        float duration; // r23
        float timeCmp; // r2
        float timeCmp; // r21
        class xAnimTransitionList * curr; // r16
        float recip; // r29+0x1D0
        unsigned char transferredState; // r18
        class xVec3 disp; // r29+0x1B0
        float yaw; // r29+0x1CC
        class xMat3x3 rot; // r29+0x150
        class xVec3 disp; // r29+0x1A0
        float yaw; // r29+0x1C8
        class xMat3x3 rot; // r29+0x120
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00441410 -> 0x0044166C
*/
// Range: 0x441410 -> 0x44166C
void xAnimPlaySetState(class xAnimSingle * single /* r18 */, class xAnimState * state /* r17 */, float startTime /* r20 */) {
    /* anonymous block */ {
        // Range: 0x441410 -> 0x44166C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00441670 -> 0x00441804
*/
// Range: 0x441670 -> 0x441804
void xAnimPhysicsEval(class xAnimPhysicsData * phys /* r2 */, float time /* r29 */, class xVec3 * disp /* r2 */, float * yaw /* r2 */) {
    /* anonymous block */ {
        // Range: 0x441670 -> 0x441804
        float interp; // r29
        signed int index; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00441810 -> 0x00441970
*/
// Range: 0x441810 -> 0x441970
static void EffectSingleStop(class xAnimSingle * single /* r18 */) {
    /* anonymous block */ {
        // Range: 0x441810 -> 0x441970
        unsigned int i; // r17
        class xAnimEffect * effect; // r17
        class xAnimActiveEffect tempActive; // r29+0x48
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00441970 -> 0x00441AA8
*/
// Range: 0x441970 -> 0x441AA8
static void EffectSingleLoop(class xAnimSingle * single /* r19 */) {
    /* anonymous block */ {
        // Range: 0x441970 -> 0x441AA8
        class xAnimActiveEffect * alist; // r18
        unsigned int index; // r17
        unsigned int count; // r2
        class xAnimEffect * effect; // r4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00441AB0 -> 0x00441CE0
*/
// Range: 0x441AB0 -> 0x441CE0
static void EffectSingleRun(class xAnimSingle * single /* r20 */) {
    /* anonymous block */ {
        // Range: 0x441AB0 -> 0x441CE0
        class xAnimEffect * effect; // r19
        class xAnimActiveEffect tempActive; // r29+0x78
        float time; // r20
        unsigned int flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00441CE0 -> 0x00441E10
*/
// Range: 0x441CE0 -> 0x441E10
static void EffectSingleDuration(class xAnimSingle * single /* r19 */) {
    /* anonymous block */ {
        // Range: 0x441CE0 -> 0x441E10
        float time; // r20
        class xAnimActiveEffect * alist; // r18
        unsigned int index; // r17
        unsigned int count; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00441E10 -> 0x00442068
*/
// Range: 0x441E10 -> 0x442068
static void EffectSingleStart(class xAnimSingle * single /* r18 */) {
    /* anonymous block */ {
        // Range: 0x441E10 -> 0x442068
        class xAnimEffect * effect; // r17
        class xAnimActiveEffect tempActive; // r29+0x58
        float time; // r20
        unsigned int flags; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00442070 -> 0x004420D0
*/
// Range: 0x442070 -> 0x4420D0
class xAnimState * xAnimTableGetState(class xAnimTable * table /* r16 */, char * name /* r2 */) {
    /* anonymous block */ {
        // Range: 0x442070 -> 0x4420D0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004420D0 -> 0x0044210C
*/
// Range: 0x4420D0 -> 0x44210C
class xAnimState * xAnimTableGetStateID(class xAnimTable * table /* r2 */, unsigned int ID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4420D0 -> 0x44210C
        class xAnimState * curr; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00442110 -> 0x00442264
*/
// Range: 0x442110 -> 0x442264
class xAnimState * xAnimTableAddFileID(class xAnimTable * table /* r19 */, class xAnimFile * file /* r18 */, unsigned int stateID /* r2 */, unsigned int subStateID /* r17 */, unsigned int subStateCount /* r2 */) {
    /* anonymous block */ {
        // Range: 0x442110 -> 0x442264
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00442270 -> 0x00442318
*/
// Range: 0x442270 -> 0x442318
void xAnimTableAddFile(class xAnimTable * table /* r18 */, class xAnimFile * file /* r17 */, char * states /* r16 */) {
    /* anonymous block */ {
        // Range: 0x442270 -> 0x442318
        unsigned char * buffer; // r16
        char * stateName; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00442320 -> 0x00442654
*/
// Range: 0x442320 -> 0x442654
class xAnimTransition * xAnimTableNewTransition(class xAnimTable * table /* r19 */, char * source /* r18 */, char * dest /* r17 */, unsigned int (* conditional)(class xAnimTransition *, class xAnimSingle *, void *) /* r16 */, unsigned int (* callback)(class xAnimTransition *, class xAnimSingle *, void *) /* r22 */, unsigned int flags /* r23 */, unsigned int userFlags /* r30 */, float srcTime /* r23 */, float destTime /* r22 */, unsigned short priority /* r29+0xBE */, unsigned short queuePriority /* r29+0xC0 */, float fBlendTime /* r21 */, unsigned short * blendOffset /* r29+0xC8 */) {
    /* anonymous block */ {
        // Range: 0x442320 -> 0x442654
        class xAnimTransition * tran; // r21
        unsigned char isComplex; // r20
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00442660 -> 0x00442668
*/
// Range: 0x442660 -> 0x442668
void xAnimTableAddTransition(class xAnimTable * table /* r2 */, class xAnimTransition * tran /* r2 */, char * source /* r2 */) {
    /* anonymous block */ {
        // Range: 0x442660 -> 0x442668
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00442670 -> 0x00442DF4
*/
// Range: 0x442670 -> 0x442DF4
static void _xAnimTableAddTransition(class xAnimTable * table /* r29+0x11C */, class xAnimTransition * tran /* r20 */, char * source /* r16 */, char * dest /* r19 */) {
    /* anonymous block */ {
        // Range: 0x442670 -> 0x442DF4
        unsigned char * buffer; // r29+0x118
        class xAnimState * * stateList; // r29+0x100
        unsigned int i; // r17
        unsigned int stateCount; // r29+0xF0
        unsigned int allocCount; // r18
        char * stateName; // r29+0xEC
        class xAnimTransitionList * tlist; // r22
        class xAnimTransition * substTransitionList[32]; // r29+0x220
        unsigned int substTransitionCount; // r29+0xD0
        unsigned char hasSubst; // r29+0xC0
        signed int i; // r5
        unsigned char isComplex; // r9
        char * COMPLEX_PATTERNS; // r2
        char * search; // r8
        class xAnimState * state; // r30
        char extra[128]; // r29+0x1A0
        char tempName[128]; // r29+0x120
        char * tempIterator; // r17
        char * extraIterator; // r16
        unsigned char allowMissingState; // r29+0xB0
        signed int i; // r21
        unsigned int extraIteratorLength; // r2
        class xAnimTransition * duplicatedTransition; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00442E00 -> 0x00443060
*/
// Range: 0x442E00 -> 0x443060
class xAnimState * xAnimTableNewState(class xAnimTable * table /* r20 */, char * name /* r19 */, unsigned int flags /* r18 */, unsigned int userFlags /* r17 */, float speed /* r21 */, float * boneBlend /* r22 */, float * timeSnap /* r23 */, float fadeRecip /* r20 */, unsigned short * fadeOffset /* r16 */, void * callbackData /* r30 */, void (* beforeEnter)(class xAnimPlay *, class xAnimState *, void *) /* r29+0xB0 */, void (* stateCallback)(class xAnimState *, class xAnimSingle *, void *) /* r29+0xB8 */, void (* beforeAnimMatrices)(class xAnimPlay *, class xQuat *, class xVec3 *, signed int) /* r29+0xC0 */) {
    /* anonymous block */ {
        // Range: 0x442E00 -> 0x443060
        class xAnimState * state; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00443060 -> 0x004430B4
*/
// Range: 0x443060 -> 0x4430B4
void xAnimDefaultBeforeEnter(class xAnimState * state /* r16 */) {
    /* anonymous block */ {
        // Range: 0x443060 -> 0x4430B4
        unsigned int entry; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004430C0 -> 0x00443114
*/
// Range: 0x4430C0 -> 0x443114
class xAnimTable * xAnimTableNew(char * name /* r17 */, unsigned int userFlags /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4430C0 -> 0x443114
        class xAnimTable * table; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00443120 -> 0x004431FC
*/
// Range: 0x443120 -> 0x4431FC
class xAnimEffect * xAnimStateNewEffect(class xAnimState * state /* r16 */, unsigned short flags /* r19 */, unsigned short probability /* r18 */, float startTime /* r21 */, float endTime /* r20 */, unsigned int (* callback)(unsigned int, class xAnimActiveEffect *, class xAnimSingle *, void *) /* r17 */, unsigned int userDataSize /* r2 */) {
    /* anonymous block */ {
        // Range: 0x443120 -> 0x4431FC
        class xAnimEffect * curr; // r5
        class xAnimEffect * * prev; // r4
        class xAnimEffect * effect; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00443200 -> 0x00443850
*/
// Range: 0x443200 -> 0x443850
void xAnimFileEval(class xAnimFile * data /* r19 */, float time /* r29+0x100 */, float * bilinear /* r2 */, unsigned int flags /* r18 */, class xVec3 * tran /* r17 */, class xQuat * quat /* r16 */) {
    /* anonymous block */ {
        // Range: 0x443200 -> 0x443850
        signed int i; // r20
        unsigned int numBones; // r22
        float bilerp[2]; // r29+0xF8
        unsigned int biindex[2]; // r29+0xF0
        unsigned int biplus[2]; // r29+0xE8
        class xQuat * q0; // r21
        class xVec3 * t0; // r20
        class xQuat * q1; // r23
        class xVec3 * t1; // r30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00443850 -> 0x0044390C
*/
// Range: 0x443850 -> 0x44390C
void xAnimFileSetTime(class xAnimFile * data /* r16 */, float duration /* r21 */, float timeOffset /* r20 */) {
    /* anonymous block */ {
        // Range: 0x443850 -> 0x44390C
        float rawDuration; // r29+0x30
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00443910 -> 0x00443974
*/
// Range: 0x443910 -> 0x443974
class xAnimFile * xAnimFileNew(void * rawData /* r29+0x4C */, char * name /* r18 */, unsigned int flags /* r17 */, class xAnimFile * * linkedList /* r16 */) {
    /* anonymous block */ {
        // Range: 0x443910 -> 0x443974
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00443980 -> 0x00443C68
*/
// Range: 0x443980 -> 0x443C68
class xAnimFile * xAnimFileNewBilinear(void * * rawData /* r19 */, char * name /* r23 */, unsigned int hashed_name_id /* r30 */, unsigned int flags /* r18 */, class xAnimFile * * linkedList /* r22 */, unsigned int numX /* r17 */, unsigned int numY /* r16 */) {
    /* anonymous block */ {
        // Range: 0x443980 -> 0x443C68
        signed int i; // r5
        class xAnimFile * afile; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00443C70 -> 0x00444498
*/
// Range: 0x443C70 -> 0x444498
void xAnimCalcPhysicsData(class xAnimFile * afile /* r17 */, class xAnimFile * endPose /* r30 */) {
    /* anonymous block */ {
        // Range: 0x443C70 -> 0x444498
        signed int numAnims; // r2
        unsigned char axis[3]; // r29+0xEBC
        signed int tranCount; // r16
        unsigned int size; // r2
        class xAnimPhysicsData * physDat; // r2
        class xVec3 * tranTable; // r21
        float * yawTable; // r20
        class xVec3 tranStart[64]; // r29+0xBB0
        class xQuat quatStart[64]; // r29+0x7B0
        class xVec3 tranEnd[64]; // r29+0x4B0
        class xQuat quatEnd[64]; // r29+0xB0
        class xVec3 * tempTable; // r30
        signed int i; // r22
        signed int i; // r11
        signed int i; // r22
        float yawStart; // r21
        float yawEnd; // r20
        float * tempYaw; // r23
        signed int i; // r21
        signed int i; // r3
        float subOff; // r29+0xEC0
        signed int i; // r20
        signed int i; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004444A0 -> 0x00444658
*/
// Range: 0x4444A0 -> 0x444658
static void TransitionTimeInit(class xAnimSingle * single /* r16 */, class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4444A0 -> 0x444658
        class xAnimFile * dest; // r2
        class xAnimFile * src; // r2
        class xAnimFile * dest; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00444660 -> 0x00444710
*/
// Range: 0x444660 -> 0x444710
static unsigned int DefaultOverride(class xAnimState * state /* r2 */, class xAnimTransition * tran /* r2 */) {
    /* anonymous block */ {
        // Range: 0x444660 -> 0x444710
        class xAnimTransitionList * curr; // r10
        class xAnimTransitionList * prev; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00444710 -> 0x004447DC
*/
// Range: 0x444710 -> 0x4447DC
static void _xAnimTransitionListInsert(class xAnimTransitionList * * list /* r2 */, class xAnimTransitionList * toInsert /* r2 */) {
    /* anonymous block */ {
        // Range: 0x444710 -> 0x4447DC
        class xAnimTransitionList * curr; // r9
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004447E0 -> 0x00444848
*/
// Range: 0x4447E0 -> 0x444848
void xAnimTempStateInit(unsigned int count /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4447E0 -> 0x444848
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00444850 -> 0x004448CC
*/
// Range: 0x444850 -> 0x4448CC
class xAnimTransition * xAnimTempTransitionAlloc(class xAnimTransition * source /* r17 */) {
    /* anonymous block */ {
        // Range: 0x444850 -> 0x4448CC
        class xAnimTransition * tran; // r16
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004448D0 -> 0x00444938
*/
// Range: 0x4448D0 -> 0x444938
void xAnimTempTransitionInit(unsigned int count /* r16 */) {
    /* anonymous block */ {
        // Range: 0x4448D0 -> 0x444938
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00444940 -> 0x00444984
*/
// Range: 0x444940 -> 0x444984
void xAnimInit() {
    /* anonymous block */ {
        // Range: 0x444940 -> 0x444984
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xAnim.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00444990 -> 0x004450C4
*/
// Range: 0x444990 -> 0x4450C4
static unsigned char _xCheckAnimNameInner(char * name /* r22 */, char * pattern /* r21 */, signed int patternSize /* r29+0xDC */, char * extra /* r20 */, signed int * nameOut /* r29+0xD8 */, signed int * extraOut /* r29+0xD4 */) {
    /* anonymous block */ {
        // Range: 0x444990 -> 0x4450C4
        char * startExtra; // r23
        char * initialExtra; // r29+0xD0
        signed int patternCurrent; // r16
        signed int nameCurrent; // r19
        signed int check; // r13
        char nextPattern[128]; // r29+0xE0
        signed int nextPatternCount; // r12
        unsigned char first; // r11
        signed int parenCount; // r10
        char * IGNORE_PATTERNS; // r2
        signed int length; // r2
        unsigned char done; // r17
        char * current; // r16
        char * startPattern; // r2
        signed int pc; // r8
        signed int nameOut; // r29+0x16C
        signed int extraOut; // r29+0x168
        char * current; // r18
        char * positiveEnd; // r5
        char * negative; // r29+0xCC
        char * negativeEnd; // r30
        signed int nameOut; // r29+0x164
        signed int extraOut; // r29+0x160
        unsigned char matched; // r29+0xB0
    }
}


