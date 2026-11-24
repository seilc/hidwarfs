/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xAnim.cpp
*/
static class xMemPool sxAnimTempTranPool; // size: 0x1C, address: 0x80750A8C
static class xMemPool sxAnimTempStatePool; // size: 0x1C, address: 0x80750AA8
unsigned int gxAnimUseGrowAlloc; // size: 0x4, address: 0x80750AC4
// Range: 0x8000C410 -> 0x8000CA64
static bool _xCheckAnimNameInner(char * name /* r15 */, char * pattern /* r16 */, int patternSize /* r17 */, char * extra /* r18 */, int * nameOut /* r1+0x8 */, int * extraOut /* r1+0xC */) {
    // Local variables
    char * startExtra; // r26
    char * initialExtra; // r1+0xA0
    int patternCurrent; // r25
    int nameCurrent; // r24

    {
        // Range: 0x8000C424 -> 0x8000CA14
        {
            // Range: 0x8000C424 -> 0x8000C454
            // Local variables
            char nextPattern[128]; // r1+0x20
            int check; // r3

            {
                // Range: 0x8000C424 -> 0x8000C454
                // Local variables
                int parenCount; // r19
                bool first; // r12
                int nextPatternCount; // r11

                {
                    // Range: 0x8000C424 -> 0x8000C440
                    // Local variables
                    char * IGNORE_PATTERNS; // r23
                }
            }
        }
        {
            // Range: 0x8000C454 -> 0x8000C454
            // Local variables
            int length; // r19
        }
        {
            // Range: 0x8000C454 -> 0x8000C8CC
            // Local variables
            char * current; // r21
            bool done; // r20

            {
                // Range: 0x8000C454 -> 0x8000C898
                // Local variables
                char * startPattern; // r0

                {
                    // Range: 0x8000C454 -> 0x8000C454
                    // Local variables
                    int pc; // r5
                }
                {
                    // Range: 0x8000C454 -> 0x8000C884
                    // Local variables
                    int extraOut; // r1+0x18
                    int nameOut; // r1+0x1C
                }
            }
        }
        {
            // Range: 0x8000C8CC -> 0x8000C9E8
            // Local variables
            bool matched; // r19
            int extraOut; // r1+0x10
            int nameOut; // r1+0x14
            char * negativeEnd; // r20
            char * negative; // r21
            char * positiveEnd; // r5
            char * current; // r22
        }
    }
}
// Range: 0x8000CA70 -> 0x8000CC8C
void xAnimTempTransitionInit(unsigned int count /* r29 */) {
    // References
    // -> static class xMemPool sxAnimTempTranPool;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8000CC90 -> 0x8000CEF8
class xAnimTransition * xAnimTempTransitionAlloc(class xAnimTransition * source /* r27 */) {
    // Local variables
    class xAnimTransition * tran; // r26

    // References
    // -> static class xMemWatermark memWatermark;
    // -> static class xMemPool sxAnimTempTranPool;
}
// Range: 0x8000CF00 -> 0x8000D11C
void xAnimTempStateInit(unsigned int count /* r29 */) {
    // References
    // -> static class xMemPool sxAnimTempStatePool;
    // -> static class xMemWatermark memWatermark;
}
// signature: _xAnimTransitionListInsert(xAnimTransitionList **, xAnimTransitionList *)
// Range: 0x8000D120 -> 0x8000D240
static void _xAnimTransitionListInsert() {
    {
        // Range: 0x8000D180 -> 0x8000D23C
        // Local variables
        class xAnimTransitionList * curr; // r8
    }
}
// signature: TransitionTimeInit(xAnimSingle *, xAnimTransition *)
// Range: 0x8000D240 -> 0x8000D4E4
static void TransitionTimeInit() {
    {
        // Range: 0x8000D270 -> 0x8000D2A4
        // Local variables
        class xAnimFile * dest; // r5
    }
    {
        // Range: 0x8000D2A8 -> 0x8000D2F0
        // Local variables
        class xAnimFile * dest; // r6
        class xAnimFile * src; // r5
    }
    {
        // Range: 0x8000D2F4 -> 0x8000D324
        // Local variables
        float played; // f2
    }

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// Range: 0x8000D670 -> 0x8000DAD8
class xAnimFile * xAnimFileNewBilinear(void * * rawData /* r19 */, char * name /* r20 */, unsigned int hashed_name_id /* r21 */, unsigned int flags /* r22 */, class xAnimFile * * linkedList /* r23 */, unsigned int numX /* r24 */, unsigned int numY /* r25 */, unsigned int numZ /* r26 */) {
    // Local variables
    int i; // r5
    class xAnimFile * afile; // r27

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xAnimFileNew(void *, const char *, unsigned int, xAnimFile **)
// Range: 0x8000DAE0 -> 0x8000DB5C
class xAnimFile * xAnimFileNew(void * rawData /* r1+0x8 */, unsigned int flags /* r10 */) {
    // Local variables
    void * * temp; // r3
}
// signature: xAnimFileEval(xAnimFile *, float, float *, unsigned int, xVec3 *, xVec3 *, xQuat *, float *)
// Range: 0x8000DB60 -> 0x800107AC
void xAnimFileEval(class xAnimFile * data /* r25 */, unsigned int flags /* r26 */, class xVec3 * tran /* r27 */, class xVec3 * scale /* r28 */, class xQuat * quat /* r29 */) {
    // Local variables
    int i; // r18
    unsigned int numBones; // r30
    float evalTime; // f0

    {
        // Range: 0x8000DC84 -> 0x80010644
        // Local variables
        class xAnimWorkBlock work0; // r31-0x77F8
        unsigned int biplus[3]; // r31+0x8
        unsigned int biindex[3]; // r31+0x14
        float tmpf; // f0
        float lerp; // f0
        float bilerp[3]; // r31+0x20

        {
            // Range: 0x8000DD74 -> 0x8000E9EC
            // Local variables
            class xAnimWorkBlock work2; // r31-0x27F8
            class xAnimWorkBlock work1; // r31-0x4FF8
        }
        {
            // Range: 0x8000E9F0 -> 0x8000F010
            // Local variables
            class xAnimWorkBlock work1; // r31+0x5040
        }
        {
            // Range: 0x8000F014 -> 0x8000F628
            // Local variables
            class xAnimWorkBlock work1; // r31+0x2830
        }
        {
            // Range: 0x8000F62C -> 0x8000FC40
            // Local variables
            class xAnimWorkBlock work1; // r31+0x30
        }
    }
}
// Range: 0x800107B0 -> 0x800109BC
class xAnimTable * xAnimTableNew(char * name /* r27 */, unsigned int userFlags /* r28 */, void * userContext /* r29 */, class xAnimTable * * list /* r30 */) {
    // Local variables
    class xAnimTable * table; // r31

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xAnimDefaultBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x800109C0 -> 0x80010A20
void xAnimDefaultBeforeEnter(class xAnimState * state /* r30 */) {
    {
        // Range: 0x800109DC -> 0x80010A08
        // Local variables
        unsigned int entry; // r0
    }
}
// Range: 0x80010A20 -> 0x80010DAC
class xAnimState * xAnimTableNewState(class xAnimTable * table /* r16 */, char * name /* r17 */, unsigned int flags /* r18 */, unsigned int userFlags /* r19 */, float speed /* f30 */, float * boneBlend /* r20 */, float * timeSnap /* r21 */, float fadeRecip /* f31 */, unsigned short * fadeOffset /* r22 */, void * callbackData /* r23 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r24 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r25 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r26 */, unsigned long long UID /* r28:r27 */, void * userData /* r29 */) {
    // Local variables
    class xAnimState * state; // r30

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80010DB0 -> 0x800110E8
void xAnimTableNewStateMany(class xAnimTable * table /* r15 */, char * name /* r16 */, int howMany /* r17 */, unsigned int flags /* r18 */, unsigned int userFlags /* r19 */, float speed /* f30 */, float * boneBlend /* r20 */, float * timeSnap /* r21 */, float fadeRecip /* f31 */, unsigned short * fadeOffset /* r22 */, void * callbackData /* r23 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r24 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r14 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r1+0xA4 */, void * userData /* r1+0xA8 */) {
    // Local variables
    unsigned long state_name_len; // r0
    unsigned long alignedLength; // r27

    {
        // Range: 0x80010E10 -> 0x800110C0
        // Local variables
        int i; // r26

        {
            // Range: 0x80010E10 -> 0x800110C0
            // Local variables
            char * digit; // r3
            char * duplicate; // r25
        }
    }

    // References
    // -> class __locale _current_locale;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x800110F0 -> 0x800119B4
static void _xAnimTableAddTransition(class xAnimTable * table /* r14 */, class xAnimTransition * tran /* r15 */, char * source /* r16 */, char * dest /* r1+0x8 */) {
    // Local variables
    unsigned char * buffer; // r1+0xC08
    class xAnimState * * stateList; // r25
    unsigned int i; // r16
    unsigned int stateCount; // r24
    unsigned int allocCount; // r23
    char * stateName; // r22
    class xAnimTransitionList * tlist; // r1+0xC04
    class xAnimTransition * substTransitionList[700]; // r1+0x110
    unsigned int substTransitionCount; // r21
    bool hasSubst; // r1+0xC00

    {
        // Range: 0x80011170 -> 0x80011190
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x800111B8 -> 0x80011718
        // Local variables
        bool isComplex; // r7

        {
            // Range: 0x800111BC -> 0x800111BC
            // Local variables
            char * COMPLEX_PATTERNS; // r0

            {
                // Range: 0x800111BC -> 0x800111BC
                // Local variables
                char * search; // r8
            }
        }
        {
            // Range: 0x800111BC -> 0x800115F8
            // Local variables
            class xAnimState * state; // r20

            {
                // Range: 0x800111BC -> 0x800115F0
                // Local variables
                char extra[128]; // r1+0x90

                {
                    // Range: 0x800111BC -> 0x80011260
                    // Local variables
                    bool allowMissingState; // r17
                    char * extraIterator; // r18
                    char * tempIterator; // r19
                    char tempName[128]; // r1+0x10

                    {
                        // Range: 0x800111BC -> 0x800111BC
                        // Local variables
                        int i; // r16

                        {
                            // Range: 0x800111BC -> 0x800111BC
                            // Local variables
                            unsigned long extraIteratorLength; // r0
                        }
                    }
                    {
                        // Range: 0x800111BC -> 0x80011260
                        // Local variables
                        class xAnimTransition * duplicatedTransition; // r0
                    }
                }
            }
        }
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x800119C0 -> 0x80011DEC
class xAnimTransition * xAnimTableNewTransition(class xAnimTable * table /* r18 */, char * source /* r19 */, char * dest /* r20 */, unsigned int (* entryCond)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r21 */, unsigned int (* exitCond)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r22 */, unsigned int (* callback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r23 */, unsigned int flags /* r24 */, unsigned int userFlags /* r25 */, float srcTime /* f29 */, float destTime /* f30 */, unsigned short priority /* r26 */, unsigned short queuePriority /* r27 */, float fBlendTime /* f31 */, unsigned short * blendOffset /* r28 */) {
    // Local variables
    class xAnimTransition * tran; // r29
    float fOOBlendTime; // f0
    bool isComplex; // r0

    {
        // Range: 0x80011C18 -> 0x80011C34
        // Local variables
        int i; // r0
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80011DF0 -> 0x80011ED0
void xAnimTableAddFile(class xAnimTable * table /* r27 */, class xAnimFile * file /* r28 */, char * states /* r29 */) {
    // Local variables
    unsigned char * buffer; // r30
    char * stateName; // r3
}
// signature: xAnimTableAddFileID(xAnimTable *, xAnimFile *, unsigned int, unsigned int, unsigned int)
// Range: 0x80011ED0 -> 0x80012190
class xAnimState * xAnimTableAddFileID(class xAnimTable * table /* r26 */, class xAnimFile * file /* r27 */, unsigned int subStateID /* r28 */) {
    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xAnimTableGetStateID(xAnimTable *, unsigned int)
// Range: 0x80012190 -> 0x800121C8
class xAnimState * xAnimTableGetStateID() {
    // Local variables
    class xAnimState * curr; // r3
}
// signature: xAnimTableGetState(xAnimTable *, const char *)
// Range: 0x800121D0 -> 0x80012240
class xAnimState * xAnimTableGetState() {
}
// Range: 0x80012240 -> 0x80012788
void xAnimPlaySetState(class xAnimSingle * single /* r25 */, class xAnimState * state /* r26 */, float startTime /* f31 */) {
    // References
    // -> static class xMemPool sxAnimTempTranPool;
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
    // -> static class xMemWatermark memWatermark;
    // -> static class xMemPool sxAnimTempStatePool;
}
// Range: 0x80012790 -> 0x800131D8
static void SingleUpdate(class xAnimSingle * single /* r15 */, float timeDelta /* f27 */) {
    // Local variables
    unsigned int foundBlendstop; // r19
    unsigned int firstStep; // r16
    class xAnimTransition * foundTransition; // r18
    class xAnimSingle * bl; // r17
    float tranDelta; // f30
    float blendDelta; // f29
    float singleTime; // f26
    void * object; // r14
    float duration; // f28

    {
        // Range: 0x800128A8 -> 0x8001294C
        // Local variables
        float timeCmp; // f1
    }
    {
        // Range: 0x80012970 -> 0x80012A70
        // Local variables
        float timeCmp; // f31

        {
            // Range: 0x800129A4 -> 0x80012A70
            // Local variables
            class xAnimTransitionList * curr; // r20
        }
    }
    {
        // Range: 0x80012A70 -> 0x80012AE4
        // Local variables
        float recip; // f3
    }
    {
        // Range: 0x80012AE4 -> 0x80013018
        // Local variables
        bool transferredState; // r16
    }

    // References
    // -> static class xMemPool sxAnimTempTranPool;
    // -> static class xMemPool sxAnimTempStatePool;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x800131F0 -> 0x800132EC
static void SingleEval(class xAnimSingle * single /* r28 */, class xVec3 * tran /* r29 */, class xVec3 * scale /* r30 */, class xQuat * quat /* r31 */) {
    {
        // Range: 0x80013250 -> 0x800132CC
        // Local variables
        class xAnimWorkBlock blend; // r1+0x18
    }
}
// signature: xAnimPlaySetup(xAnimPlay *, void *, xAnimTable *, xModelInstance *)
// Range: 0x800132F0 -> 0x80013444
void xAnimPlaySetup(class xAnimPlay * play /* r26 */, class xAnimTable * table /* r27 */) {
    // Local variables
    int i; // r28

    // References
    // -> static class xMemPool sxAnimTempStatePool;
}
// Range: 0x80013450 -> 0x800135F4
void xAnimPlayChooseTransition(class xAnimPlay * play /* r27 */) {
    // Local variables
    unsigned int i; // r30
    void * object; // r29
    class xAnimTransition * trans; // r1+0x8
    class xAnimTransition * * found; // r28

    {
        // Range: 0x8001348C -> 0x800135A0
        // Local variables
        class xAnimTransitionList * curr; // r26

        {
            // Range: 0x800134C4 -> 0x8001356C
            // Local variables
            bool condPassed; // r25
        }
    }
}
// Range: 0x80013600 -> 0x80013BA0
void xAnimPlayStartTransition(class xAnimPlay * play /* r21 */, class xAnimTransition * transition /* r22 */) {
    // Local variables
    class xAnimSingle * single; // r25
    class xAnimSingle * bl; // r26
    bool transferredState; // r24
    bool tookOwnership; // r23

    // References
    // -> static class xMemWatermark memWatermark;
    // -> static class xMemPool sxAnimTempStatePool;
    // -> static class xMemPool sxAnimTempTranPool;
}
// Range: 0x80013BA0 -> 0x80013C48
void xAnimPlayUpdate(class xAnimPlay * play /* r28 */, float timeDelta /* f31 */) {
    // Local variables
    unsigned int i; // r30

    {
        // Range: 0x80013BC0 -> 0x80013C14
        // Local variables
        class xAnimSingle * single; // r29
    }
}
// signature: QuatToMat(xQuat *, xVec3 *, xVec3 *, xMat4x3 *)
// Range: 0x80013C50 -> 0x80013D40
void QuatToMat(class xVec3 * scale /* r29 */, class xVec3 * tran /* r30 */, class xMat4x3 * mat /* r31 */) {
}
// Range: 0x80013D40 -> 0x800146D4
void xAnimPlayEval(class xAnimPlay * play /* r21 */) {
    // Local variables
    unsigned int i; // r29
    unsigned int bone; // r30
    class xAnimWorkBlock result; // r1+0x2938
    class xAnimWorkBlock blend; // r1+0x138
    class ModelInstanceArticle * ngModelArt; // r5

    {
        // Range: 0x80013E14 -> 0x80014158
        // Local variables
        class xAnimSingle * si; // r24

        {
            // Range: 0x80013E14 -> 0x80014158
            // Local variables
            unsigned short * blendO; // r25
            float blendR; // f22
            float blendF; // f23
        }
    }
    {
        // Range: 0x800141C8 -> 0x80014644
        // Local variables
        int sectionCount; // r1+0x5140
        int jointOffset; // r1+0x5144
        class xMat4x3 ogMatrix; // r1+0xF8
        bool bufferSwap; // r0

        {
            // Range: 0x80014240 -> 0x800145F0
            // Local variables
            int j; // r1+0x513C

            {
                // Range: 0x80014240 -> 0x800145F0
                // Local variables
                class xVec3 * scalePtr; // r23
                class xVec3 * tranPtr; // r24
                class xQuat * quatPtr; // r25
                int sectionSize; // r1+0x5138
                int sectionStart; // r6
                class EvaluatorSkinSection * section; // r3

                {
                    // Range: 0x80014240 -> 0x800145C8
                    // Local variables
                    int end; // r14
                    int i; // r22

                    {
                        // Range: 0x80014240 -> 0x800145C8
                        // Local variables
                        int parent; // r16

                        {
                            // Range: 0x80014240 -> 0x800145B8
                            // Local variables
                            class Vector parentScale; // r1+0x78
                            class Matrix43 parentMatrixNoScale; // r1+0xC8
                            class Vector outTran; // r1+0x88
                        }
                    }
                }
            }
        }
    }

    // References
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
    // -> unsigned int updateFrameNumber;
    // -> class xQuat g_IQ;
}
// signature: xAnimBlend(float, float, unsigned short *, float *, unsigned int, xVec3 *, xVec3 *, xQuat *, xVec3 *, xVec3 *, xQuat *, xVec3 *, xVec3 *, xQuat *)
// Range: 0x80014750 -> 0x80014BE8
void xAnimBlend(float BlendFactor /* f25 */, unsigned short * BlendTimeOffset /* r15 */, float * BoneTable /* r14 */, unsigned int BoneCount /* r16 */, class xVec3 * Tran1 /* r17 */, class xVec3 * Scale1 /* r18 */, class xQuat * Quat1 /* r19 */, class xQuat * Quat2 /* r20 */, class xVec3 * TranDest /* r21 */, class xVec3 * ScaleDest /* r22 */, class xQuat * QuatDest /* r23 */) {
    // Local variables
    unsigned int i; // r14
    unsigned int invert; // r27
    class xQuat * q2; // r26
    class xQuat ident; // r1+0x8
    class xVec3 * t2; // r25
    class xVec3 * s2; // r24

    {
        // Range: 0x80014838 -> 0x80014994
        // Local variables
        float lerp; // f28
    }
    {
        // Range: 0x80014994 -> 0x80014B98
        // Local variables
        float lerp; // f26
        float baselerp; // f27
    }

    // References
    // -> class xVec3 m_Ones;
}
// signature: xAnimPoolCB(xMemPool *, void *)
// Range: 0x80014BF0 -> 0x80014C84
void xAnimPoolCB() {
    // Local variables
    int i; // r8
    class xAnimPlay * clone; // r9
    class xAnimPlay * play; // r0
    class xAnimSingle * currsingle; // r10
}
// signature: xAnimPoolInit(xMemPool *, unsigned int, unsigned int, unsigned int, unsigned int)
// Range: 0x80014C90 -> 0x80014FCC
void xAnimPoolInit(class xMemPool * pool /* r25 */, unsigned int count /* r26 */, unsigned int singles /* r27 */, unsigned int blendFlags /* r28 */) {
    // Local variables
    unsigned int size; // r29
    unsigned int i; // r7
    class xAnimPlay * play; // r0
    class xAnimSingle * currsingle; // r8

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80014FD0 -> 0x80015204
class xAnimPlay * xAnimPoolAlloc(class xMemPool * pool /* r24 */, void * object /* r25 */, class xAnimTable * table /* r26 */, class xModelInstance * modelInst /* r27 */) {
    // Local variables
    class xAnimPlay * play; // r0

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xAnimSetMultifileFromCode(xAnimPlay *, xAnimState *, unsigned int)
// Range: 0x80015210 -> 0x8001526C
void xAnimSetMultifileFromCode() {
    {
        // Range: 0x80015220 -> 0x80015260
        // Local variables
        unsigned int i; // r8
    }
}
