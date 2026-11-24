/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xAnim.cpp
*/
static class xMemPool sxAnimTempTranPool; // size: 0x1C, address: 0x80805DF0
static class xMemPool sxAnimTempStatePool; // size: 0x1C, address: 0x80805E0C
unsigned int gxAnimUseGrowAlloc; // size: 0x4, address: 0x80805E28
// Range: 0x80012250 -> 0x800128A4
static bool _xCheckAnimNameInner(char * name /* r15 */, char * pattern /* r16 */, int patternSize /* r17 */, char * extra /* r18 */, int * nameOut /* r1+0x8 */, int * extraOut /* r1+0xC */) {
    // Local variables
    char * startExtra; // r26
    char * initialExtra; // r1+0xA0
    int patternCurrent; // r25
    int nameCurrent; // r24

    {
        // Range: 0x80012264 -> 0x80012854
        {
            // Range: 0x80012264 -> 0x80012294
            // Local variables
            char nextPattern[128]; // r1+0x20
            int check; // r3

            {
                // Range: 0x80012264 -> 0x80012294
                // Local variables
                int parenCount; // r19
                bool first; // r12
                int nextPatternCount; // r11

                {
                    // Range: 0x80012264 -> 0x80012280
                    // Local variables
                    char * IGNORE_PATTERNS; // r23
                }
            }
        }
        {
            // Range: 0x80012294 -> 0x80012294
            // Local variables
            int length; // r19
        }
        {
            // Range: 0x80012294 -> 0x8001270C
            // Local variables
            char * current; // r21
            bool done; // r20

            {
                // Range: 0x80012294 -> 0x800126D8
                // Local variables
                char * startPattern; // r0

                {
                    // Range: 0x80012294 -> 0x80012294
                    // Local variables
                    int pc; // r5
                }
                {
                    // Range: 0x80012294 -> 0x800126C4
                    // Local variables
                    int extraOut; // r1+0x18
                    int nameOut; // r1+0x1C
                }
            }
        }
        {
            // Range: 0x8001270C -> 0x80012828
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
// Range: 0x800128B0 -> 0x80012ACC
void xAnimTempTransitionInit(unsigned int count /* r29 */) {
    // References
    // -> static class xMemPool sxAnimTempTranPool;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80012AD0 -> 0x80012D38
class xAnimTransition * xAnimTempTransitionAlloc(class xAnimTransition * source /* r27 */) {
    // Local variables
    class xAnimTransition * tran; // r26

    // References
    // -> static class xMemWatermark memWatermark;
    // -> static class xMemPool sxAnimTempTranPool;
}
// Range: 0x80012D40 -> 0x80012F5C
void xAnimTempStateInit(unsigned int count /* r29 */) {
    // References
    // -> static class xMemPool sxAnimTempStatePool;
    // -> static class xMemWatermark memWatermark;
}
// signature: _xAnimTransitionListInsert(xAnimTransitionList **, xAnimTransitionList *)
// Range: 0x80012F60 -> 0x80013080
static void _xAnimTransitionListInsert() {
    {
        // Range: 0x80012FC0 -> 0x8001307C
        // Local variables
        class xAnimTransitionList * curr; // r8
    }
}
// signature: TransitionTimeInit(xAnimSingle *, xAnimTransition *)
// Range: 0x80013080 -> 0x80013324
static void TransitionTimeInit() {
    {
        // Range: 0x800130B0 -> 0x800130E4
        // Local variables
        class xAnimFile * dest; // r5
    }
    {
        // Range: 0x800130E8 -> 0x80013130
        // Local variables
        class xAnimFile * dest; // r6
        class xAnimFile * src; // r5
    }
    {
        // Range: 0x80013134 -> 0x80013164
        // Local variables
        float played; // f2
    }

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
}
// signature: xAnimFileNewBilinearPrealloc(xAnimFile *, void **, const char *, unsigned int, unsigned int, xAnimFile **, unsigned int, unsigned int, unsigned int, const char *)
// Range: 0x80013330 -> 0x80013628
void xAnimFileNewBilinearPrealloc(unsigned int numZ /* r0 */) {
    {
        // Range: 0x800133A4 -> 0x800133AC
        // Local variables
        int i; // r31
    }
}
// Range: 0x80013630 -> 0x80013850
class xAnimFile * xAnimFileNewBilinear(void * * rawData /* r20 */, char * name /* r21 */, unsigned int hashed_name_id /* r22 */, unsigned int flags /* r23 */, class xAnimFile * * linkedList /* r24 */, unsigned int numX /* r25 */, unsigned int numY /* r26 */, unsigned int numZ /* r27 */, char * subName /* r28 */) {
    // Local variables
    class xAnimFile * afile; // r0

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80013850 -> 0x80013A90
class xAnimFile * xAnimFileNew(void * rawData /* r1+0x10 */, char * name /* r25 */, unsigned int flags /* r26 */, class xAnimFile * * linkedList /* r27 */, char * subName /* r28 */) {
    // Local variables
    void * * temp; // r29

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xAnimFileEval(xAnimFile *, float, float *, xVec3 *, xVec3 *, xQuat *, float *, float *, xModelInstance::ModelVisibility *)
// Range: 0x80013A90 -> 0x80016218
void xAnimFileEval(class xAnimFile * data /* r23 */, class xVec3 * tran /* r24 */, class xVec3 * scale /* r25 */, class xQuat * quat /* r26 */, float * morphs /* r27 */, class ModelVisibility * vis /* r28 */) {
    // Local variables
    int i; // r16
    unsigned int numBones; // r30
    unsigned int numMorphs; // r29
    float evalTime; // f31

    {
        // Range: 0x80013BA4 -> 0x800161A0
        // Local variables
        class xAnimWorkBlock work0; // r31-0xAFE8
        unsigned int biplus[3]; // r31+0x8
        unsigned int biindex[3]; // r31+0x14
        float tmpf; // f0
        float lerp; // f0
        float bilerp[3]; // r31+0x20

        {
            // Range: 0x80013C98 -> 0x80014988
            // Local variables
            class xAnimWorkBlock work2; // r31-0x57F0
            class xAnimWorkBlock work1; // r31-0x83EC
        }
        {
            // Range: 0x8001498C -> 0x80014F54
            // Local variables
            class xAnimWorkBlock work1; // r31-0x2BF4
        }
        {
            // Range: 0x80014F58 -> 0x80015518
            // Local variables
            class xAnimWorkBlock work1; // r31+0x2C28
        }
        {
            // Range: 0x8001551C -> 0x80015ADC
            // Local variables
            class xAnimWorkBlock work1; // r31+0x2C
        }
    }
}
// Range: 0x80016220 -> 0x8001642C
class xAnimTable * xAnimTableNew(char * name /* r27 */, unsigned int userFlags /* r28 */, void * userContext /* r29 */, class xAnimTable * * list /* r30 */) {
    // Local variables
    class xAnimTable * table; // r31

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xAnimDefaultBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x80016430 -> 0x80016490
void xAnimDefaultBeforeEnter(class xAnimState * state /* r30 */) {
    {
        // Range: 0x8001644C -> 0x80016478
        // Local variables
        unsigned int entry; // r0
    }
}
// Range: 0x80016490 -> 0x80016828
class xAnimState * xAnimTableNewState(class xAnimTable * table /* r16 */, char * name /* r17 */, unsigned int flags /* r18 */, unsigned int userFlags /* r19 */, float speed /* f30 */, float * boneBlend /* r20 */, float * timeSnap /* r21 */, float fadeRecip /* f31 */, unsigned short * fadeOffset /* r22 */, void * callbackData /* r23 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r24 */, void (* beforeEnd)(class xAnimPlay * play, class xAnimState * state, void * object) /* r25 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r26 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r27 */, unsigned long long UID /* r29:r28 */, unsigned int userData /* r14 */) {
    // Local variables
    class xAnimState * state; // r30

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80016830 -> 0x80016B74
void xAnimTableNewStateMany(class xAnimTable * table /* r15 */, char * name /* r16 */, int howMany /* r17 */, unsigned int flags /* r18 */, unsigned int userFlags /* r19 */, float speed /* f30 */, float * boneBlend /* r20 */, float * timeSnap /* r21 */, float fadeRecip /* f31 */, unsigned short * fadeOffset /* r22 */, void * callbackData /* r23 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r24 */, void (* beforeEnd)(class xAnimPlay * play, class xAnimState * state, void * object) /* r14 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r1+0xA4 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r1+0xA8 */, unsigned int userData /* r1+0xAC */) {
    // Local variables
    unsigned long state_name_len; // r0
    unsigned long alignedLength; // r27

    {
        // Range: 0x80016894 -> 0x80016B4C
        // Local variables
        int i; // r26

        {
            // Range: 0x80016894 -> 0x80016B4C
            // Local variables
            char * digit; // r3
            char * duplicate; // r25
        }
    }

    // References
    // -> class __locale _current_locale;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80016B80 -> 0x80017444
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
        // Range: 0x80016C00 -> 0x80016C20
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x80016C48 -> 0x800171A8
        // Local variables
        bool isComplex; // r7

        {
            // Range: 0x80016C4C -> 0x80016C4C
            // Local variables
            char * COMPLEX_PATTERNS; // r0

            {
                // Range: 0x80016C4C -> 0x80016C4C
                // Local variables
                char * search; // r8
            }
        }
        {
            // Range: 0x80016C4C -> 0x80017088
            // Local variables
            class xAnimState * state; // r20

            {
                // Range: 0x80016C4C -> 0x80017080
                // Local variables
                char extra[128]; // r1+0x90

                {
                    // Range: 0x80016C4C -> 0x80016CF0
                    // Local variables
                    bool allowMissingState; // r17
                    char * extraIterator; // r18
                    char * tempIterator; // r19
                    char tempName[128]; // r1+0x10

                    {
                        // Range: 0x80016C4C -> 0x80016C4C
                        // Local variables
                        int i; // r16

                        {
                            // Range: 0x80016C4C -> 0x80016C4C
                            // Local variables
                            unsigned long extraIteratorLength; // r0
                        }
                    }
                    {
                        // Range: 0x80016C4C -> 0x80016CF0
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
// Range: 0x80017450 -> 0x8001787C
class xAnimTransition * xAnimTableNewTransition(class xAnimTable * table /* r18 */, char * source /* r19 */, char * dest /* r20 */, unsigned int (* entryCond)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r21 */, unsigned int (* exitCond)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r22 */, unsigned int (* callback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r23 */, unsigned int flags /* r24 */, unsigned int userFlags /* r25 */, float srcTime /* f29 */, float destTime /* f30 */, unsigned short priority /* r26 */, unsigned short queuePriority /* r27 */, float fBlendTime /* f31 */, unsigned short * blendOffset /* r28 */) {
    // Local variables
    class xAnimTransition * tran; // r29
    float fOOBlendTime; // f0
    bool isComplex; // r0

    {
        // Range: 0x800176A8 -> 0x800176C4
        // Local variables
        int i; // r0
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80017880 -> 0x80017960
void xAnimTableAddFile(class xAnimTable * table /* r27 */, class xAnimFile * file /* r28 */, char * states /* r29 */) {
    // Local variables
    unsigned char * buffer; // r30
    char * stateName; // r3
}
// signature: xAnimTableAddFileID(xAnimTable *, xAnimFile *, unsigned int, unsigned int, unsigned int)
// Range: 0x80017960 -> 0x80017C20
class xAnimState * xAnimTableAddFileID(class xAnimTable * table /* r26 */, class xAnimFile * file /* r27 */, unsigned int subStateID /* r28 */) {
    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xAnimTableGetStateID(xAnimTable *, unsigned int)
// Range: 0x80017C20 -> 0x80017C58
class xAnimState * xAnimTableGetStateID() {
    // Local variables
    class xAnimState * curr; // r3
}
// signature: xAnimTableGetState(xAnimTable *, const char *)
// Range: 0x80017C60 -> 0x80017CD0
class xAnimState * xAnimTableGetState() {
}
// Range: 0x80017CD0 -> 0x8001823C
void xAnimPlaySetState(class xAnimSingle * single /* r25 */, class xAnimState * state /* r26 */, float startTime /* f31 */) {
    // References
    // -> static class xMemPool sxAnimTempTranPool;
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
    // -> static class xMemWatermark memWatermark;
    // -> static class xMemPool sxAnimTempStatePool;
}
// Range: 0x80018240 -> 0x80018E38
static void SingleUpdate(class xAnimSingle * single /* r15 */, float timeDelta /* f26 */) {
    // Local variables
    unsigned int foundBlendstop; // r19
    unsigned int firstStep; // r16
    class xAnimTransition * foundTransition; // r18
    class xAnimSingle * bl; // r17
    float tranDelta; // f29
    float blendDelta; // f28
    float singleTime; // f24
    void * object; // r14
    float duration; // f27

    {
        // Range: 0x80018368 -> 0x8001840C
        // Local variables
        float timeCmp; // f1
    }
    {
        // Range: 0x80018430 -> 0x80018530
        // Local variables
        float timeCmp; // f25

        {
            // Range: 0x80018464 -> 0x80018530
            // Local variables
            class xAnimTransitionList * curr; // r20
        }
    }
    {
        // Range: 0x80018530 -> 0x800185A4
        // Local variables
        float recip; // f3
    }
    {
        // Range: 0x800185A4 -> 0x80018B04
        // Local variables
        bool transferredState; // r16
    }

    // References
    // -> class zGlobals globals;
    // -> static class xMemPool sxAnimTempTranPool;
    // -> static class xMemPool sxAnimTempStatePool;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x80018E40 -> 0x80019090
static void SingleEval(class xAnimSingle * single /* r30 */, class xVec3 * tran /* r26 */, class xVec3 * scale /* r27 */, class xQuat * quat /* r28 */, float * morphs /* r31 */, class ModelVisibility * vis /* r29 */) {
    {
        // Range: 0x80018EA4 -> 0x80019078
        // Local variables
        class xAnimWorkBlock blend; // r1+0x18
    }
}
// signature: xAnimPlaySetup(xAnimPlay *, void *, xAnimTable *, World::xOGModel *)
// Range: 0x80019090 -> 0x800191F8
void xAnimPlaySetup(class xAnimPlay * play /* r26 */, class xAnimTable * table /* r27 */) {
    // Local variables
    int i; // r28

    // References
    // -> static class xMemPool sxAnimTempStatePool;
}
// Range: 0x80019200 -> 0x800193A4
void xAnimPlayChooseTransition(class xAnimPlay * play /* r27 */) {
    // Local variables
    unsigned int i; // r30
    void * object; // r29
    class xAnimTransition * trans; // r1+0x8
    class xAnimTransition * * found; // r28

    {
        // Range: 0x8001923C -> 0x80019350
        // Local variables
        class xAnimTransitionList * curr; // r26

        {
            // Range: 0x80019274 -> 0x8001931C
            // Local variables
            bool condPassed; // r25
        }
    }
}
// Range: 0x800193B0 -> 0x800199B4
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
// Range: 0x800199C0 -> 0x80019A68
void xAnimPlayUpdate(class xAnimPlay * play /* r28 */, float timeDelta /* f31 */) {
    // Local variables
    unsigned int i; // r30

    {
        // Range: 0x800199E0 -> 0x80019A34
        // Local variables
        class xAnimSingle * single; // r29
    }
}
// Range: 0x80019A70 -> 0x80019B18
void xAnimPlayUpdateRefModels(class xOGModel * parentModel /* r31 */, float timeDelta /* f31 */) {
    {
        // Range: 0x80019A98 -> 0x80019AFC
        // Local variables
        class RefInstanceAnimation * animInst; // r3

        {
            // Range: 0x80019AA0 -> 0x80019AEC
            // Local variables
            unsigned int animCount; // r4

            {
                // Range: 0x80019AA0 -> 0x80019AEC
                // Local variables
                class xAnimFile * animFile; // r5

                {
                    // Range: 0x80019AAC -> 0x80019AE8
                    // Local variables
                    float newTime; // f1
                }
            }
        }
    }
}
// Range: 0x80019B20 -> 0x8001A8CC
void xAnimPlayEvalRefModels(class xOGModel * parentModel /* r17 */) {
    // Local variables
    class xAnimWorkBlock result; // r1+0x1A8
    unsigned int numInstancesAnimated; // r1+0x2DB0
    class ModelPrototype * modelProto; // r23
    class RefInstanceAnimation * animInst; // r22

    {
        // Range: 0x80019B50 -> 0x80019F74
        // Local variables
        class ReferenceModelEntry * curRefModelEntry; // r15
        unsigned short curRefModelInstance; // r21

        {
            // Range: 0x80019B50 -> 0x80019F70
            // Local variables
            int numRefChildTransforms; // r20

            {
                // Range: 0x80019B50 -> 0x80019F64
                // Local variables
                int refInstanceChildTransformOffset; // r19

                {
                    // Range: 0x80019B50 -> 0x80019B50
                    // Local variables
                    class xAnimSingle tempSingle; // r1+0xC0
                    class xAnimState tempState; // r1+0x118
                }
                {
                    // Range: 0x80019B50 -> 0x80019C78
                    // Local variables
                    int i; // r18

                    {
                        // Range: 0x80019B50 -> 0x80019C78
                        // Local variables
                        class Quaternion tempQuat; // r1+0x50
                        class Matrix43 mat; // r1+0x90
                    }
                }
            }
        }
    }

    // References
    // -> class Renderable3DTransform g_identity;
    // -> class Vector4 vec4Zero;
    // -> class Vector4 vec4OneZ;
    // -> class Vector4 vec4OneY;
    // -> class Vector4 vec4OneX;
}
// signature: xAnimPlayEval(xAnimPlay *, xModelInstance::ModelVisibility *)
// Range: 0x8001B8F0 -> 0x8001C150
void xAnimPlayEval(class xAnimPlay * play /* r31 */) {
    // Local variables
    unsigned int i; // r28
    unsigned int bone; // r29
    class xAnimWorkBlock result; // r1+0x2C6C
    class xAnimWorkBlock blend; // r1+0x70
    class ModelInstanceArticle * ngModelArt; // r17

    {
        // Range: 0x8001B964 -> 0x8001BB78
        // Local variables
        class xAnimSingle * si; // r23

        {
            // Range: 0x8001B964 -> 0x8001BB78
            // Local variables
            unsigned short * blendO; // r24
            float blendR; // f29
            float blendF; // f30
        }
    }
    {
        // Range: 0x8001BBE8 -> 0x8001BFDC
        // Local variables
        int numMorphWeights; // r15
        int sectionCount; // r21
        int jointOffset; // r22
        class Matrix43 * skinMat; // r23
        bool bufferSwap; // r1+0x18
        class SkinCluster * skin; // r0
        class Skeleton * skel; // r24
        class Model & ngModel; // r14

        {
            // Range: 0x8001BC54 -> 0x8001BDA0
            // Local variables
            int j; // r20

            {
                // Range: 0x8001BC54 -> 0x8001BDA0
                // Local variables
                class xVec3 * scaleStart; // r16
                class xVec3 * tranPtr; // r17
                class xQuat * quatPtr; // r18
                int sectionSize; // r19
                int sectionStart; // r4
                class EvaluatorSkinSection & section; // r3

                {
                    // Range: 0x8001BC88 -> 0x8001BD4C
                    // Local variables
                    int i; // r15

                    {
                        // Range: 0x8001BC88 -> 0x8001BD4C
                        // Local variables
                        int parent; // r27

                        {
                            // Range: 0x8001BCD4 -> 0x8001BD40
                            // Local variables
                            class Vector tmpTran; // r1+0x30
                        }
                    }
                }
                {
                    // Range: 0x8001BD5C -> 0x8001BD8C
                    // Local variables
                    int i; // r17
                }
            }
        }
        {
            // Range: 0x8001BDEC -> 0x8001BFDC
            // Local variables
            float * morphWeights; // r16

            {
                // Range: 0x8001BE3C -> 0x8001BE3C
                // Local variables
                int i; // r4
            }
        }
    }
    {
        // Range: 0x8001BFE0 -> 0x8001C098
        // Local variables
        int numChildren; // r0

        {
            // Range: 0x8001C000 -> 0x8001C080
            // Local variables
            int i; // r18

            {
                // Range: 0x8001C000 -> 0x8001C080
                // Local variables
                class Quaternion tempQuat; // r1+0x20
                class Matrix43 mat; // r1+0x40
            }
        }
    }
    {
        // Range: 0x8001C098 -> 0x8001C114
        // Local variables
        float blendFactor; // f1
    }
}
// signature: xAnimBlend(float, float, unsigned short *, float *, unsigned int, xVec3 *, xVec3 *, xQuat *, xVec3 *, xVec3 *, xQuat *, xVec3 *, xVec3 *, xQuat *)
// Range: 0x8001C5A0 -> 0x8001CA38
void xAnimBlend(float BlendFactor /* f25 */, unsigned short * BlendTimeOffset /* r15 */, float * BoneTable /* r14 */, unsigned int BoneCount /* r16 */, class xVec3 * Tran1 /* r17 */, class xVec3 * Scale1 /* r18 */, class xQuat * Quat1 /* r19 */, class xQuat * Quat2 /* r20 */, class xVec3 * TranDest /* r21 */, class xVec3 * ScaleDest /* r22 */, class xQuat * QuatDest /* r23 */) {
    // Local variables
    unsigned int i; // r14
    unsigned int invert; // r27
    class xQuat * q2; // r26
    class xQuat ident; // r1+0x8
    class xVec3 * t2; // r25
    class xVec3 * s2; // r24

    {
        // Range: 0x8001C688 -> 0x8001C7E4
        // Local variables
        float lerp; // f28
    }
    {
        // Range: 0x8001C7E4 -> 0x8001C9E8
        // Local variables
        float lerp; // f26
        float baselerp; // f27
    }

    // References
    // -> class xVec3 m_Ones;
}
// signature: xAnimPoolCB(xMemPool *, void *)
// Range: 0x8001CA40 -> 0x8001CAD4
void xAnimPoolCB() {
    // Local variables
    int i; // r8
    class xAnimPlay * clone; // r9
    class xAnimPlay * play; // r0
    class xAnimSingle * currsingle; // r10
}
// signature: xAnimPoolInit(xMemPool *, unsigned int, unsigned int, unsigned int, unsigned int)
// Range: 0x8001CAE0 -> 0x8001CE1C
void xAnimPoolInit(class xMemPool * pool /* r25 */, unsigned int count /* r26 */, unsigned int singles /* r27 */, unsigned int blendFlags /* r28 */) {
    // Local variables
    unsigned int size; // r29
    unsigned int i; // r7
    class xAnimPlay * play; // r0
    class xAnimSingle * currsingle; // r8

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8001CE20 -> 0x8001D054
class xAnimPlay * xAnimPoolAlloc(class xMemPool * pool /* r24 */, void * object /* r25 */, class xAnimTable * table /* r26 */, class xOGModel * modelInst /* r27 */) {
    // Local variables
    class xAnimPlay * play; // r0

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8001D060 -> 0x8001D124
void xAnimPoolFree(class xAnimPlay * play /* r29 */) {
    // Local variables
    unsigned int i; // r30

    // References
    // -> static class xMemPool sxAnimTempTranPool;
}
// signature: xAnimSetRawData(xAnimState *, void *, int)
// Range: 0x8001D130 -> 0x8001D21C
void xAnimSetRawData() {
    // Local variables
    class xAnimFile * afile; // r7
}
