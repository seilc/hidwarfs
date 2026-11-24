/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xAnim.cpp
*/
static class xMemPool sxAnimTempTranPool; // size: 0x1C, address: 0x8071C9D8
static class xMemPool sxAnimTempStatePool; // size: 0x1C, address: 0x8071C9F4
unsigned int gxAnimUseGrowAlloc; // size: 0x4, address: 0x8071CA10
// signature: _xCharIn(const char, const char *)
// Range: 0x8000D7F0 -> 0x8000D824
static bool _xCharIn() {
    {
        // Range: 0x8000D7F0 -> 0x8000D81C
        // Local variables
        int i; // r0
    }
}
// Range: 0x8000D830 -> 0x8000DE30
static bool _xCheckAnimNameInner(char * name /* r25 */, char * pattern /* r26 */, int patternSize /* r27 */, char * extra /* r28 */, int * nameOut /* r29 */, int * extraOut /* r30 */) {
    // Local variables
    char * startExtra; // r21
    char * initialExtra; // r14
    int patternCurrent; // r20
    int nameCurrent; // r19

    {
        // Range: 0x8000D844 -> 0x8000DDFC
        {
            // Range: 0x8000D844 -> 0x8000D870
            // Local variables
            char nextPattern[128]; // r1+0x18
            int check; // r18

            {
                // Range: 0x8000D844 -> 0x8000D870
                // Local variables
                int parenCount; // r15
                bool first; // r16
                int nextPatternCount; // r17

                {
                    // Range: 0x8000D844 -> 0x8000D870
                    // Local variables
                    char * IGNORE_PATTERNS; // r31
                }
            }
        }
        {
            // Range: 0x8000D870 -> 0x8000D870
            // Local variables
            int length; // r15
        }
        {
            // Range: 0x8000D870 -> 0x8000DCB0
            // Local variables
            char * current; // r17
            bool done; // r16

            {
                // Range: 0x8000D870 -> 0x8000DC94
                // Local variables
                char * startPattern; // r0

                {
                    // Range: 0x8000D870 -> 0x8000D870
                    // Local variables
                    int pc; // r5
                }
                {
                    // Range: 0x8000D870 -> 0x8000DC68
                    // Local variables
                    int extraOut; // r1+0x10
                    int nameOut; // r1+0x14
                }
            }
        }
        {
            // Range: 0x8000DCB0 -> 0x8000DDC8
            // Local variables
            bool matched; // r18
            int extraOut; // r1+0x8
            int nameOut; // r1+0xC
            char * negativeEnd; // r17
            char * negative; // r16
            char * positiveEnd; // r5
            char * current; // r15
        }
    }
}
// Range: 0x8000DE30 -> 0x8000DEA8
void xAnimTempTransitionInit(unsigned int count /* r29 */) {
    // References
    // -> static class xMemPool sxAnimTempTranPool;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8000DEB0 -> 0x8000DF28
class xAnimTransition * xAnimTempTransitionAlloc(class xAnimTransition * source /* r30 */) {
    // Local variables
    class xAnimTransition * tran; // r31

    // References
    // -> static class xMemPool sxAnimTempTranPool;
}
// Range: 0x8000DF30 -> 0x8000DFA8
void xAnimTempStateInit(unsigned int count /* r29 */) {
    // References
    // -> static class xMemPool sxAnimTempStatePool;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8000DFB0 -> 0x8000E028
class xAnimState * xAnimTempStateAlloc(class xAnimState * source /* r30 */) {
    // Local variables
    class xAnimState * state; // r31

    // References
    // -> static class xMemPool sxAnimTempStatePool;
}
// signature: CalcRecipBlendMax(unsigned short *)
// Range: 0x8000E030 -> 0x8000E0E0
static float CalcRecipBlendMax() {
    // Local variables
    float test; // f0
    float max; // f5
}
// signature: _xAnimTransitionListInsert(xAnimTransitionList **, xAnimTransitionList *)
// Range: 0x8000E0E0 -> 0x8000E1FC
static void _xAnimTransitionListInsert() {
    {
        // Range: 0x8000E140 -> 0x8000E1F8
        // Local variables
        class xAnimTransitionList * curr; // r8
    }
}
// Range: 0x80010900 -> 0x80010960
static void SetTransition(class xAnimTransition * & dest /* r30 */, class xAnimTransition * tran /* r31 */) {
    // References
    // -> static class xMemPool sxAnimTempTranPool;
}
// Range: 0x80010880 -> 0x800108FC
static void SetState(class xAnimState * & dest /* r30 */, class xAnimState * state /* r31 */) {
    // References
    // -> static class xMemPool sxAnimTempStatePool;
}
// signature: TransitionTimeInit(xAnimSingle *, xAnimTransition *)
// Range: 0x8000E200 -> 0x8000E38C
static void TransitionTimeInit(class xAnimSingle * single /* r31 */) {
    {
        // Range: 0x8000E238 -> 0x8000E26C
        // Local variables
        class xAnimFile * dest; // r5
    }
    {
        // Range: 0x8000E270 -> 0x8000E2B8
        // Local variables
        class xAnimFile * dest; // r6
        class xAnimFile * src; // r5
    }
    {
        // Range: 0x8000E2BC -> 0x8000E2F0
        // Local variables
        float played; // f2
    }
}
// signature: xAnimFileNewBilinearPrealloc(xAnimFile *, void **, const char *, unsigned int, unsigned int, xAnimFile **, unsigned int, unsigned int, unsigned int, const char *)
// Range: 0x8000E390 -> 0x8000E510
void xAnimFileNewBilinearPrealloc(class xAnimFile * preallocFile /* r26 */, void * * rawData /* r27 */, unsigned int flags /* r28 */, unsigned int numX /* r29 */, unsigned int numY /* r30 */, unsigned int numZ /* r31 */) {
    {
        // Range: 0x8000E41C -> 0x8000E440
        // Local variables
        int i; // r0
    }
}
// Range: 0x8000E510 -> 0x8000E5BC
class xAnimFile * xAnimFileNewBilinear(void * * rawData /* r21 */, char * name /* r22 */, unsigned int hashed_name_id /* r23 */, unsigned int flags /* r24 */, class xAnimFile * * linkedList /* r25 */, unsigned int numX /* r26 */, unsigned int numY /* r27 */, unsigned int numZ /* r28 */, char * subName /* r29 */) {
    // Local variables
    class xAnimFile * afile; // r0

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8000E5C0 -> 0x8000E65C
class xAnimFile * xAnimFileNew(void * rawData /* r1+0x10 */, char * name /* r26 */, unsigned int flags /* r27 */, class xAnimFile * * linkedList /* r28 */, char * subName /* r29 */) {
    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xAnimFileEval(xAnimFile *, float, float *, xVec3 *, xVec3 *, xQuat *, float *, float *, xModelInstance::ModelVisibility *)
// Range: 0x8000E660 -> 0x8000F924
void xAnimFileEval(class xAnimFile * data /* r17 */, float * bilinear /* r28 */, class xVec3 * tran /* r18 */, class xVec3 * scale /* r19 */, class xQuat * quat /* r20 */, float * morphs /* r21 */, class ModelVisibility * vis /* r22 */) {
    // Local variables
    int i; // r27
    unsigned int numBones; // r24
    unsigned int numMorphs; // r23
    float evalTime; // f31

    {
        // Range: 0x8000E778 -> 0x8000F8AC
        // Local variables
        class xAnimWorkBlock work0; // r31-0xAFE8
        unsigned int biplus[3]; // r31+0x8
        unsigned int biindex[3]; // r31+0x14
        float tmpf; // f0
        float lerp; // f0
        float bilerp[3]; // r31+0x20

        {
            // Range: 0x8000E864 -> 0x8000ED80
            // Local variables
            class xAnimWorkBlock work2; // r31-0x57F0
            class xAnimWorkBlock work1; // r31-0x83EC
        }
        {
            // Range: 0x8000ED84 -> 0x8000F008
            // Local variables
            class xAnimWorkBlock work1; // r31-0x2BF4
        }
        {
            // Range: 0x8000F00C -> 0x8000F28C
            // Local variables
            class xAnimWorkBlock work1; // r31+0x2C28
        }
        {
            // Range: 0x8000F290 -> 0x8000F514
            // Local variables
            class xAnimWorkBlock work1; // r31+0x2C
        }
    }
}
// Range: 0x8000F930 -> 0x8000F9C8
class xAnimTable * xAnimTableNew(char * name /* r27 */, unsigned int userFlags /* r28 */, void * userContext /* r29 */, class xAnimTable * * list /* r30 */) {
    // Local variables
    class xAnimTable * table; // r31

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xAnimDefaultBeforeEnter(xAnimPlay *, xAnimState *, void *)
// Range: 0x8000F9D0 -> 0x8000FA28
void xAnimDefaultBeforeEnter(class xAnimState * state /* r30 */) {
    {
        // Range: 0x8000F9E8 -> 0x8000FA14
        // Local variables
        unsigned int entry; // r0
    }
}
// Range: 0x8000FA30 -> 0x8000FB80
class xAnimState * xAnimTableNewState(class xAnimTable * table /* r16 */, char * name /* r17 */, unsigned int flags /* r18 */, unsigned int userFlags /* r19 */, float speed /* f30 */, float * boneBlend /* r20 */, float * timeSnap /* r21 */, float fadeRecip /* f31 */, unsigned short * fadeOffset /* r22 */, void * callbackData /* r23 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r24 */, void (* beforeEnd)(class xAnimPlay * play, class xAnimState * state, void * object) /* r25 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r26 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r27 */, unsigned long long UID /* r29:r28 */, unsigned int userData /* r30 */) {
    // Local variables
    class xAnimState * state; // r31

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8000FB80 -> 0x8000FD08
void xAnimTableNewStateMany(class xAnimTable * table /* r31 */, char * name /* r27 */, int howMany /* r15 */, unsigned int flags /* r16 */, unsigned int userFlags /* r17 */, float speed /* f30 */, float * boneBlend /* r18 */, float * timeSnap /* r19 */, float fadeRecip /* f31 */, unsigned short * fadeOffset /* r20 */, void * callbackData /* r21 */, void (* beforeEnter)(class xAnimPlay * play, class xAnimState * state, void * object) /* r22 */, void (* beforeEnd)(class xAnimPlay * play, class xAnimState * state, void * object) /* r23 */, void (* stateCallback)(class xAnimState * state, class xAnimSingle * anim, void * object) /* r24 */, void (* beforeAnimMatrices)(class xAnimPlay * play, class xQuat * quat, class xVec3 * scale, class xVec3 * tran, int boneCount) /* r25 */, unsigned int userData /* r26 */) {
    // Local variables
    unsigned long state_name_len; // r0
    unsigned long alignedLength; // r30

    {
        // Range: 0x8000FBEC -> 0x8000FCEC
        // Local variables
        int i; // r29

        {
            // Range: 0x8000FBEC -> 0x8000FCEC
            // Local variables
            char * digit; // r27
            char * duplicate; // r28
        }
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: _xAnimTableAddTransitionHelper(xAnimState *, xAnimTransition *, unsigned int &, unsigned int &, xAnimState **)
// Range: 0x8000FD50 -> 0x8000FDE0
static void _xAnimTableAddTransitionHelper() {
}
// Range: 0x8000FDE0 -> 0x80010210
static void _xAnimTableAddTransition(class xAnimTable * table /* r15 */, class xAnimTransition * tran /* r16 */, char * source /* r18 */, char * dest /* r17 */) {
    // Local variables
    unsigned char * buffer; // r28
    class xAnimState * * stateList; // r27
    unsigned int i; // r17
    unsigned int stateCount; // r1+0x10
    unsigned int allocCount; // r1+0xC
    char * stateName; // r26
    class xAnimTransitionList * tlist; // r25
    class xAnimTransition * substTransitionList[700]; // r1+0x118
    unsigned int substTransitionCount; // r24
    bool hasSubst; // r23

    {
        // Range: 0x8000FE50 -> 0x8000FE7C
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8000FE9C -> 0x80010108
        // Local variables
        bool isComplex; // r18

        {
            // Range: 0x8000FEA4 -> 0x8000FEE0
            // Local variables
            char * COMPLEX_PATTERNS; // r19

            {
                // Range: 0x8000FEA8 -> 0x8000FEE0
                // Local variables
                char * search; // r20
            }
        }
        {
            // Range: 0x8000FEE0 -> 0x80010098
            // Local variables
            class xAnimState * state; // r22

            {
                // Range: 0x8000FEEC -> 0x80010098
                // Local variables
                char extra[128]; // r1+0x98

                {
                    // Range: 0x8000FEEC -> 0x80010058
                    // Local variables
                    bool allowMissingState; // r19
                    char * extraIterator; // r20
                    char * tempIterator; // r21
                    char tempName[128]; // r1+0x18

                    {
                        // Range: 0x8000FEEC -> 0x8000FEEC
                        // Local variables
                        int i; // r18

                        {
                            // Range: 0x8000FEEC -> 0x8000FEEC
                            // Local variables
                            unsigned long extraIteratorLength; // r0
                        }
                    }
                    {
                        // Range: 0x8000FEEC -> 0x8000FEEC
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
// Range: 0x80010210 -> 0x800103F0
class xAnimTransition * xAnimTableNewTransition(class xAnimTable * table /* r19 */, char * source /* r20 */, char * dest /* r21 */, unsigned int (* entryCond)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r22 */, unsigned int (* exitCond)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r23 */, unsigned int (* callback)(class xAnimTransition * tran, class xAnimSingle * anim, void * object) /* r24 */, unsigned int flags /* r25 */, unsigned int userFlags /* r26 */, float srcTime /* f28 */, float destTime /* f29 */, unsigned short priority /* r27 */, unsigned short queuePriority /* r28 */, float fBlendTime /* f30 */, unsigned short * blendOffset /* r29 */) {
    // Local variables
    class xAnimTransition * tran; // r31
    float fOOBlendTime; // f31
    bool isComplex; // r30

    {
        // Range: 0x800102F8 -> 0x80010324
        // Local variables
        int i; // r0
    }

    // References
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x800103F0 -> 0x800104A8
void xAnimTableAddFile(class xAnimTable * table /* r27 */, class xAnimFile * file /* r28 */, char * states /* r29 */) {
    // Local variables
    unsigned char * buffer; // r30
    char * stateName; // r3
}
// signature: xAnimTableAddFileID(xAnimTable *, xAnimFile *, unsigned int, unsigned int, unsigned int)
// Range: 0x800104B0 -> 0x800105D0
class xAnimState * xAnimTableAddFileID(class xAnimTable * table /* r29 */, class xAnimFile * file /* r30 */, unsigned int subStateID /* r26 */, unsigned int subStateCount /* r27 */) {
    // Local variables
    class xAnimState * state; // r31

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xAnimTableGetStateID(xAnimTable *, unsigned int)
// Range: 0x800105D0 -> 0x80010608
class xAnimState * xAnimTableGetStateID() {
    // Local variables
    class xAnimState * curr; // r3
}
// signature: xAnimTableGetState(xAnimTable *, const char *)
// Range: 0x80010610 -> 0x8001064C
class xAnimState * xAnimTableGetState(class xAnimTable * table /* r31 */) {
}
// signature: StopUpdate(xAnimSingle *)
// Range: 0x80010650 -> 0x80010698
static void StopUpdate() {
    // Local variables
    float duration; // f1
}
// Range: 0x800106A0 -> 0x80010720
static void LoopUpdate(class xAnimSingle * single /* r31 */) {
    // Local variables
    float duration; // f1
    float remainDelta; // f0

    {
        // Range: 0x800106C0 -> 0x80010704
        // Local variables
        float playCount; // f1
    }
}
// Range: 0x80010720 -> 0x80010878
void xAnimPlaySetState(class xAnimSingle * single /* r29 */, class xAnimState * state /* r30 */, float startTime /* f31 */) {
}
// Range: 0x80010960 -> 0x80010B0C
void xAnimHandleSoundFXMandDialog(class xAnimSingle * single /* r31 */) {
    {
        // Range: 0x80010974 -> 0x80010A5C
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x8001098C -> 0x80010A5C
            // Local variables
            class zSoundFXMultiple * sfxm; // r0

            {
                // Range: 0x80010998 -> 0x80010A5C
                // Local variables
                class xEffectAttachIntf * intf; // r27
            }
        }
    }
    {
        // Range: 0x80010A5C -> 0x80010AF8
        // Local variables
        class zHintSphere * hintsphere; // r0

        {
            // Range: 0x80010A64 -> 0x80010AE0
            // Local variables
            unsigned long long sbIdleDialogID; // r0:r0
        }
    }

    // References
    // -> class zGlobals globals;
}
// Range: 0x80010B10 -> 0x80010C4C
static void SingleEval(class xAnimSingle * single /* r26 */, class xVec3 * tran /* r27 */, class xVec3 * scale /* r28 */, class xQuat * quat /* r29 */, float * morphs /* r30 */, class ModelVisibility * vis /* r31 */) {
    {
        // Range: 0x80010B74 -> 0x80010C34
        // Local variables
        class xAnimWorkBlock blend; // r1+0x18
    }
}
// Range: 0x80010C50 -> 0x80010D58
void xAnimPlaySetup(class xAnimPlay * play /* r28 */, void * object /* r25 */, class xAnimTable * table /* r29 */, class xOGModel * modelInst /* r24 */) {
    // Local variables
    int i; // r30
}
// Range: 0x80010D60 -> 0x80010EE8
void xAnimPlayChooseTransition(class xAnimPlay * play /* r28 */) {
    // Local variables
    unsigned int i; // r30
    void * object; // r29
    class xAnimTransition * * found; // r0

    {
        // Range: 0x80010D94 -> 0x80010EA8
        // Local variables
        class xAnimTransitionList * curr; // r26

        {
            // Range: 0x80010DCC -> 0x80010EA8
            // Local variables
            bool condPassed; // r25
        }
    }
}
// Range: 0x80010EF0 -> 0x8001119C
void xAnimPlayStartTransition(class xAnimPlay * play /* r30 */, class xAnimTransition * transition /* r1+0x8 */) {
    // Local variables
    class xAnimSingle * single; // r31
    class xAnimSingle * bl; // r29
    bool transferredState; // r28
    bool tookOwnership; // r27
}
// Range: 0x800111A0 -> 0x80011938
void xAnimPlayUpdate(class xAnimPlay * play /* r19 */, float timeDelta /* f23 */, bool checkTransitions /* r20 */) {
    // Local variables
    unsigned int i; // r22

    {
        // Range: 0x8001120C -> 0x800118C8
        // Local variables
        class xAnimSingle * single; // r21
    }
}
// Range: 0x80011940 -> 0x800119E8
void xAnimPlayUpdateRefModels(class xOGModel * parentModel /* r31 */, float timeDelta /* f31 */) {
    {
        // Range: 0x80011968 -> 0x800119CC
        // Local variables
        class RefInstanceAnimation * animInst; // r3

        {
            // Range: 0x80011970 -> 0x800119CC
            // Local variables
            unsigned int animCount; // r4

            {
                // Range: 0x80011970 -> 0x800119CC
                // Local variables
                class xAnimFile * animFile; // r5

                {
                    // Range: 0x8001197C -> 0x800119B8
                    // Local variables
                    float newTime; // f1
                }
            }
        }
    }
}
// Range: 0x800119F0 -> 0x80011BA8
void xAnimPlayEvalRefModels(class xOGModel * parentModel /* r25 */) {
    // Local variables
    class xAnimWorkBlock result; // r1+0x1A8
    unsigned int numInstancesAnimated; // r30
    class ModelPrototype * modelProto; // r29
    class RefInstanceAnimation * animInst; // r28

    {
        // Range: 0x80011A10 -> 0x80011B7C
        // Local variables
        class ReferenceModelEntry * curRefModelEntry; // r1+0xC
        unsigned short curRefModelInstance; // r1+0x8

        {
            // Range: 0x80011A10 -> 0x80011B6C
            // Local variables
            int numRefChildTransforms; // r27

            {
                // Range: 0x80011A10 -> 0x80011B68
                // Local variables
                int refInstanceChildTransformOffset; // r19

                {
                    // Range: 0x80011A10 -> 0x80011AA4
                    // Local variables
                    class xAnimSingle tempSingle; // r1+0x80
                    class xAnimState tempState; // r1+0xD8
                }
                {
                    // Range: 0x80011AA4 -> 0x80011B68
                    // Local variables
                    int i; // r26

                    {
                        // Range: 0x80011AA4 -> 0x80011B68
                        // Local variables
                        class Quaternion tempQuat; // r1+0x10
                        class Matrix43 mat; // r1+0x50
                    }
                }
            }
        }
    }
}
// signature: xAnimPlayEval(xAnimPlay *, xModelInstance::ModelVisibility *)
// Range: 0x800124E0 -> 0x80012EEC
void xAnimPlayEval(class xAnimPlay * play /* r31 */) {
    // Local variables
    unsigned int i; // r19
    unsigned int bone; // r26
    class xAnimWorkBlock result; // r1+0x2CBC
    class ComboAnimBlobAssetV2 * comboAnimV2; // r6
    class xOGModel * morphModel; // r8
    class xAnimWorkBlock blend; // r1+0xC0

    {
        // Range: 0x8001260C -> 0x80012840
        // Local variables
        class xAnimSingle * si; // r20

        {
            // Range: 0x8001260C -> 0x80012840
            // Local variables
            unsigned short * blendO; // r22
            float blendR; // f29
            float blendF; // f30
        }
    }
    {
        // Range: 0x80012894 -> 0x80012BAC
        // Local variables
        int sectionCount; // r14
        int jointOffset; // r21
        class Matrix43 * skinMat; // r22
        bool bufferSwap; // r1+0x18

        {
            // Range: 0x800128E0 -> 0x80012AA0
            // Local variables
            int j; // r20

            {
                // Range: 0x800128E0 -> 0x80012AA0
                // Local variables
                class xVec3 * scaleStart; // r16
                class xVec3 * tranPtr; // r17
                class xQuat * quatPtr; // r18
                int sectionSize; // r19
                int sectionStart; // r0
                class EvaluatorSkinSection & section; // r3

                {
                    // Range: 0x800128E0 -> 0x800128E0
                    // Local variables
                    int i; // r15

                    {
                        // Range: 0x800128E0 -> 0x800128E0
                        // Local variables
                        int parent; // r25

                        {
                            // Range: 0x800128E0 -> 0x800128E0
                            // Local variables
                            class Vector tmpTran; // r1+0x50
                        }
                    }
                }
                {
                    // Range: 0x800128E0 -> 0x80012A88
                    // Local variables
                    int i; // r7
                }
            }
        }
        {
            // Range: 0x80012AD8 -> 0x80012BAC
            {
                // Range: 0x80012B50 -> 0x80012B7C
                // Local variables
                int i; // r0
            }
        }
    }
    {
        // Range: 0x80012BB0 -> 0x80012C88
        {
            // Range: 0x80012BBC -> 0x80012C7C
            // Local variables
            int i; // r20

            {
                // Range: 0x80012BBC -> 0x80012C7C
                // Local variables
                class Quaternion tempQuat; // r1+0x40
                class Matrix43 mat; // r1+0x90
            }
        }
    }
    {
        // Range: 0x80012C88 -> 0x80012EB0
        // Local variables
        float blendFactor; // f1
    }

    // References
    // -> unsigned int updateFrameNumber;
}
// signature: xAnimBlend(float, float, unsigned short *, float *, unsigned int, xVec3 *, xVec3 *, xQuat *, xVec3 *, xVec3 *, xQuat *, xVec3 *, xVec3 *, xQuat *)
// Range: 0x80013040 -> 0x800134F0
void xAnimBlend(float BlendFactor /* f25 */, unsigned short * BlendTimeOffset /* r15 */, float * BoneTable /* r16 */, unsigned int BoneCount /* r17 */, class xVec3 * Tran1 /* r18 */, class xVec3 * Scale1 /* r19 */, class xQuat * Quat1 /* r20 */, class xQuat * Quat2 /* r21 */, class xVec3 * TranDest /* r22 */, class xVec3 * ScaleDest /* r23 */, class xQuat * QuatDest /* r24 */) {
    // Local variables
    unsigned int i; // r14
    unsigned int invert; // r28
    class xQuat * q2; // r27
    class xQuat ident; // r1+0x8
    class xVec3 * t2; // r26
    class xVec3 * s2; // r25

    {
        // Range: 0x80013124 -> 0x8001328C
        // Local variables
        float lerp; // f28
    }
    {
        // Range: 0x8001328C -> 0x800134A0
        // Local variables
        float lerp; // f26
        float baselerp; // f27
    }

    // References
    // -> class xVec3 m_Ones;
}
// signature: xAnimBlendMorphs(float, unsigned int, float *, float *, float *)
// Range: 0x800134F0 -> 0x80013520
void xAnimBlendMorphs() {
    // Local variables
    float lerp; // f0

    {
        // Range: 0x800134F0 -> 0x8001351C
        // Local variables
        unsigned int i; // r0
    }
}
// signature: xAnimPoolCB(xMemPool *, void *)
// Range: 0x80013520 -> 0x800135B8
void xAnimPoolCB() {
    // Local variables
    int i; // r9
    class xAnimPlay * clone; // r10
    class xAnimPlay * play; // r0
    class xAnimSingle * currsingle; // r11
}
// signature: xAnimPoolInit(xMemPool *, unsigned int, unsigned int, unsigned int, unsigned int)
// Range: 0x800135C0 -> 0x80013768
void xAnimPoolInit(class xMemPool * pool /* r26 */, unsigned int count /* r27 */, unsigned int singles /* r28 */, unsigned int blendFlags /* r29 */) {
    // Local variables
    unsigned int size; // r30
    unsigned int i; // r7
    class xAnimPlay * play; // r0
    class xAnimSingle * currsingle; // r8

    // References
    // -> static class xMemWatermark memWatermark;
}
// signature: xAnimPoolAlloc(xMemPool *, void *, xAnimTable *, World::xOGModel *)
// Range: 0x80013770 -> 0x800137C0
class xAnimPlay * xAnimPoolAlloc(void * object /* r28 */, class xAnimTable * table /* r29 */, class xOGModel * modelInst /* r30 */) {
    // Local variables
    class xAnimPlay * play; // r31
}
// Range: 0x800137C0 -> 0x8001385C
void xAnimPoolFree(class xAnimPlay * play /* r29 */) {
    // Local variables
    unsigned int i; // r30
}
// signature: xAnimSetRawData(xAnimState *, void *, int)
// Range: 0x80013860 -> 0x80013938
void xAnimSetRawData(void * rawData /* r30 */) {
    // Local variables
    class xAnimFile * afile; // r31
}
// signature: xAnimSetSound(xAnimState *, xAnimSoundEffect *)
// Range: 0x80013940 -> 0x80013950
void xAnimSetSound() {
}
// signature: xAnimSetVFX(xAnimState *, xAnimVFX_Effect *, unsigned int)
// Range: 0x80013950 -> 0x80013964
void xAnimSetVFX() {
}
