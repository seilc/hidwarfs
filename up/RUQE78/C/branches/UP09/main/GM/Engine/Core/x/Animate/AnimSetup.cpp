/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\Animate\AnimSetup.cpp
*/
static class zQueue sSAQueue; // size: 0x2008, address: 0x80815E78
// Range: 0x80094400 -> 0x80094470
void World::xOGAnimationSetEntity::Deactivate(class xOGAnimationSetEntity * this /* r31 */) {
}
// Range: 0x80094480 -> 0x8009454C
class Entity * Sext::AnimationSet::Create(class EntityHandleBase * handle /* r29 */, class AnimationSet * asset /* r30 */) {
    // References
    // -> struct {} __vt__Q25World21xOGAnimationSetEntity;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80094550 -> 0x8009460C
void AnimationSoundsSceneExit() {
    // Local variables
    int count; // r27

    {
        // Range: 0x8009458C -> 0x800945EC
        // Local variables
        int i; // r26
    }

    // References
    // -> static class zQueue sSAQueue;
    // -> bool gSoundReadyToExit;
}
// Range: 0x80094610 -> 0x80095E14
void AnimationSetRead(unsigned long long assetID /* r1+0x28 */, void * assetData /* r15 */, class EntityHandleBase * handle /* r1+0x30 */) {
    // Local variables
    class AnimationSet * animationSet; // r0
    unsigned int i; // r0
    unsigned int j; // r29
    void * * rawAnimData; // r20
    unsigned int row; // r6
    unsigned int col; // r0
    unsigned int slice; // r4
    unsigned int maxFiles; // r16
    class xAnimFile * * animFileList; // r1+0x4C
    enum eAnimSetType animSetType; // r14
    class xAnimTable * tables[4]; // r1+0x38
    int tableCount; // r1+0x48
    class xAnimState * astate; // r19

    {
        // Range: 0x80094754 -> 0x8009546C
        {
            // Range: 0x800951D8 -> 0x80095464
            // Local variables
            bool AnimLoadSuccessful; // r30
        }
    }
    {
        // Range: 0x800955D4 -> 0x80095CC0
        // Local variables
        int k; // r14

        {
            // Range: 0x800955D4 -> 0x80095CC0
            // Local variables
            int effectsCount; // r18

            {
                // Range: 0x800955D4 -> 0x800955D4
                // Local variables
                unsigned int subStateID; // r0
            }
            {
                // Range: 0x800955D4 -> 0x800955D4
                // Local variables
                unsigned int userFlags; // r0
                enum exAnimStateFlags flags; // r0
            }
            {
                // Range: 0x800955D4 -> 0x800955D4
                // Local variables
                unsigned int vfxIdx; // r6

                {
                    // Range: 0x800955D4 -> 0x800955D4
                    // Local variables
                    class xAnimVFX_Effect * effect; // r7
                }
            }
            {
                // Range: 0x800955D4 -> 0x80095C78
                // Local variables
                int j; // r17

                {
                    // Range: 0x800955D4 -> 0x80095C78
                    // Local variables
                    class zSoundAsset * sasset; // r16
                }
            }
        }
    }
    {
        // Range: 0x80095D6C -> 0x80095DE8
        // Local variables
        int k; // r0

        {
            // Range: 0x80095D6C -> 0x80095DE8
            // Local variables
            class xAnimFile * foundFile; // r6
        }
    }

    // References
    // -> static class zQueue sSAQueue;
    // -> class zGlobals globals;
    // -> static class xMemWatermark memWatermark;
    // -> unsigned int gxAnimUseGrowAlloc;
}
// Range: 0x80095E20 -> 0x800960B4
void AnimationSetUnload(unsigned long long assetID /* r25:r24 */, void * assetData /* r26 */) {
    // Local variables
    class AnimationSet * animationSet; // r0
    enum eAnimSetType animSetType; // r23

    // References
    // -> static class zQueue sSAQueue;
    // -> bool gSoundReadyToExit;
}
