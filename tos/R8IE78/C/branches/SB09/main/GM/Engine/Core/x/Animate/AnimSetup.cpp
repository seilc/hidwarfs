/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\Animate\AnimSetup.cpp
*/
// Range: 0x8004DD80 -> 0x8004DDF0
void World::xOGAnimationSetEntity::Deactivate(class xOGAnimationSetEntity * this /* r31 */) {
}
// Range: 0x8004DDF0 -> 0x8004DE70
class Entity * Sext::AnimationSet::Create(class EntityHandleBase * handle /* r29 */, class AnimationSet * asset /* r30 */) {
    // References
    // -> struct {} __vt__Q25World21xOGAnimationSetEntity;
}
// signature: AnimSetup::AddToSAQueue(AnimSetup::AnimSoundEntry &)
// Range: 0x8004DE70 -> 0x8004DF00
void AnimSetup::AddToSAQueue() {
    // References
    // -> static class zQueue sSAQueue;
}
// Range: 0x8004DF00 -> 0x8004DFA8
void AnimSetup::UnregisterAnimSounds(class AnimationSet * animset /* r28 */) {
    {
        // Range: 0x8004DF3C -> 0x8004DF94
        // Local variables
        int i; // r29

        {
            // Range: 0x8004DF3C -> 0x8004DF94
            // Local variables
            class AnimSoundEntry entry; // r1+0x8
        }
    }

    // References
    // -> static class zQueue sSAQueue;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8004E180 -> 0x8004E228
void AnimSetup::UnregisterAnimSounds(class AnimPackage * animPackage /* r28 */) {
    {
        // Range: 0x8004E1BC -> 0x8004E214
        // Local variables
        int i; // r29

        {
            // Range: 0x8004E1BC -> 0x8004E214
            // Local variables
            class AnimSoundEntry entry; // r1+0x8
        }
    }

    // References
    // -> static class zQueue sSAQueue;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8004E230 -> 0x8004E2D0
void AnimationSoundsSceneExit() {
    // Local variables
    int count; // r29

    {
        // Range: 0x8004E26C -> 0x8004E2BC
        // Local variables
        int i; // r28

        {
            // Range: 0x8004E26C -> 0x8004E2BC
            // Local variables
            class AnimSoundEntry entry; // r1+0x8
        }
    }

    // References
    // -> static class zQueue sSAQueue;
    // -> bool gSoundReadyToExit;
}
// signature: GetAnimationData(unsigned long long, const char *, const char *, unsigned long long, unsigned int *, unsigned int &, unsigned int *, unsigned int &)
// Range: 0x8004F130 -> 0x8004F17C
void * GetAnimationData(unsigned long long animID /* r31:r30 */) {
    {
        // Range: 0x8004F158 -> 0x8004F168
        // Local variables
        void * animData; // r0
    }
}
// Range: 0x8004E2D0 -> 0x8004F130
void AnimationSetRead(unsigned long long assetID /* r16:r15 */, void * assetData /* r17 */, class EntityHandleBase * handle /* r1+0x28 */) {
    // Local variables
    class AnimationSet * animationSet; // r0
    unsigned int i; // r0
    unsigned int j; // r20
    void * * rawAnimData; // r19
    unsigned int row; // r4
    unsigned int col; // r0
    unsigned int slice; // r3
    unsigned int histogramMax; // r1+0x30
    unsigned int histogram[255]; // r1+0x44C
    unsigned int morphHistogramMax; // r1+0x2C
    unsigned int morphHistogram[255]; // r1+0x50
    unsigned int maxFiles; // r19
    class xAnimFile * * animFileList; // r18
    enum eAnimSetType animSetType; // r14
    class xAnimTable * tables[4]; // r1+0x40
    int tableCount; // r25
    class xAnimState * astate; // r26

    {
        // Range: 0x8004E424 -> 0x8004EAA4
        {
            // Range: 0x8004E424 -> 0x8004E438
            // Local variables
            bool AnimLoadSuccessful; // r1+0x848
        }
    }
    {
        // Range: 0x8004EBA8 -> 0x8004F03C
        // Local variables
        int k; // r27

        {
            // Range: 0x8004EBA8 -> 0x8004F03C
            // Local variables
            int effectsCount; // r28

            {
                // Range: 0x8004EBA8 -> 0x8004EBA8
                // Local variables
                unsigned int subStateID; // r26
            }
            {
                // Range: 0x8004EBA8 -> 0x8004EBA8
                // Local variables
                unsigned int userFlags; // r0
                enum exAnimStateFlags flags; // r0
            }
            {
                // Range: 0x8004EBA8 -> 0x8004EBA8
                // Local variables
                unsigned int vfxIdx; // r6

                {
                    // Range: 0x8004EBA8 -> 0x8004EBA8
                    // Local variables
                    class xAnimVFX_Effect * effect; // r7
                }
            }
            {
                // Range: 0x8004EBA8 -> 0x8004EBD0
                // Local variables
                int j; // r29

                {
                    // Range: 0x8004EBA8 -> 0x8004EBD0
                    // Local variables
                    class AnimSoundEntry entry; // r1+0x34
                    class xAnimSoundEffect * effect; // r5
                    class zSoundAssetMultiple * sasset; // r30
                }
            }
            {
                // Range: 0x8004EBD0 -> 0x8004EBD0
                // Local variables
                unsigned int pp; // r0
            }
            {
                // Range: 0x8004EBD0 -> 0x8004EFF0
                // Local variables
                unsigned int pp; // r4
            }
        }
    }
    {
        // Range: 0x8004F074 -> 0x8004F100
        // Local variables
        int k; // r0

        {
            // Range: 0x8004F074 -> 0x8004F100
            // Local variables
            class xAnimFile * foundFile; // r7
        }
    }

    // References
    // -> class zGlobals globals;
    // -> struct {} __vt__19zSoundAssetMultiple;
    // -> static class xMemWatermark memWatermark;
    // -> unsigned int gxAnimUseGrowAlloc;
}
// signature: AnimationSetUnload(unsigned long long, void *)
// Range: 0x8004F180 -> 0x8004F264
void AnimationSetUnload(unsigned long long assetID /* r30:r29 */) {
    // Local variables
    class AnimationSet * animationSet; // r31
    enum eAnimSetType animSetType; // r31
}
