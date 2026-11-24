/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xAnimEffects.cpp
*/
static class zQueue vfxPool; // size: 0x1008, address: 0x80805E30
static class zQueue sfxPool; // size: 0x1208, address: 0x80806E38
// Range: 0x8001DAF0 -> 0x8001DB0C
static void @unnamed@WAD00_cpp@::xAnimVFXPair::Init() {
}
// Range: 0x80098B80 -> 0x80098BA0
static void @unnamed@WAD00_cpp@::xAnimSFXPair::Init() {
}
// signature: @unnamed@WAD00_cpp@::EffectSingleRun_SFX(xAnimSoundEffect &, @unnamed@WAD00_cpp@::xAnimSFXPair &, const FMOD_VECTOR &, const unsigned int)
// Range: 0x8001D220 -> 0x8001D32C
static void @unnamed@WAD00_cpp@::EffectSingleRun_SFX(class xAnimSoundEffect & animSoundEffect /* r31 */, class xAnimSFXPair & animSFXPair /* r28 */, class FMOD_VECTOR & pos /* r29 */) {
    {
        // Range: 0x8001D254 -> 0x8001D30C
        // Local variables
        class zSoundAsset * pSoundAsset; // r0

        {
            // Range: 0x8001D264 -> 0x8001D30C
            // Local variables
            class zSoundModule * sMod; // r0
        }
    }
}
// Range: 0x8001D330 -> 0x8001D3EC
void InitAnimFXInstances() {
    // References
    // -> static class zQueue sfxPool;
    // -> static class zQueue vfxPool;
}
// signature: DeInitAnimFXInstances(bool)
// Range: 0x8001D3F0 -> 0x8001D568
void DeInitAnimFXInstances() {
    {
        // Range: 0x8001D408 -> 0x8001D478
        // Local variables
        int i; // r25

        {
            // Range: 0x8001D408 -> 0x8001D478
            {
                // Range: 0x8001D410 -> 0x8001D464
                // Local variables
                int idx; // r27
            }
        }
    }
    {
        // Range: 0x8001D488 -> 0x8001D520
        // Local variables
        int i; // r31

        {
            // Range: 0x8001D488 -> 0x8001D520
            {
                // Range: 0x8001D490 -> 0x8001D508
                // Local variables
                int j; // r24

                {
                    // Range: 0x8001D490 -> 0x8001D508
                    // Local variables
                    class zSoundAsset * pSoundAsset; // r3
                }
            }
        }
    }

    // References
    // -> static class zQueue sfxPool;
    // -> static class zQueue vfxPool;
}
// Range: 0x8001D580 -> 0x8001DAE8
void EffectSingleRun(class xAnimSingle * single /* r23 */) {
    // Local variables
    class xEffectAttachIntf * intf; // r28
    unsigned int numVfx; // r27
    class xAnimSoundEffect * pAnimSoundEffect; // r24
    class xAnimSFXPair * pAnimSFXPair; // r25
    int count; // r26

    {
        // Range: 0x8001D5D0 -> 0x8001D8B4
        // Local variables
        class xAnimVFXPair * pVFX; // r26
        class SurfaceGamePlay * surface; // r0

        {
            // Range: 0x8001D720 -> 0x8001D744
            // Local variables
            unsigned int idx; // r24
        }
        {
            // Range: 0x8001D750 -> 0x8001D8A4
            // Local variables
            unsigned int idx; // r25

            {
                // Range: 0x8001D750 -> 0x8001D8A4
                // Local variables
                class xAnimVFX_Effect * vfx; // r24
            }
        }
    }
    {
        // Range: 0x8001D9E0 -> 0x8001D9E4
        // Local variables
        class xEffectAttachIntf * intf; // r3
    }

    // References
    // -> bool gSoundReadyToExit;
    // -> static class zQueue sfxPool;
    // -> class zGlobals globals;
    // -> static class zQueue vfxPool;
}
// signature: xAnimSoundEffect::Stop(xEffectAttachIntf *, xAnimState *)
// Range: 0x8001DB10 -> 0x8001DC44
void xAnimSoundEffect::Stop(class xAnimSoundEffect * this /* r31 */) {
    // Local variables
    class xAnimSFXPair * pPair; // r0

    {
        // Range: 0x8001DBAC -> 0x8001DC08
        // Local variables
        unsigned int iPair; // r26

        {
            // Range: 0x8001DBAC -> 0x8001DC08
            // Local variables
            class zSoundAsset * pSoundAsset; // r25
        }
    }

    // References
    // -> static class zQueue sfxPool;
}
// Range: 0x8001DC50 -> 0x8001DD08
void AnimSFXInstances_Update() {
    // Local variables
    int count; // r28

    {
        // Range: 0x8001DC68 -> 0x8001DCE8
        // Local variables
        int i; // r27

        {
            // Range: 0x8001DC68 -> 0x8001DCE8
            {
                // Range: 0x8001DCB8 -> 0x8001DCD8
                // Local variables
                int j; // r26

                {
                    // Range: 0x8001DCB8 -> 0x8001DCD8
                    // Local variables
                    class zSoundAsset * pSoundAsset; // r3
                }
            }
        }
    }

    // References
    // -> static class zQueue sfxPool;
}
// Range: 0x8001DD10 -> 0x8001E22C
void EffectSingleStop(class xAnimSingle * single /* r29 */) {
    // Local variables
    class xEffectAttachIntf * intf; // r30
    class xAnimSoundEffect * pAnimSoundEffect; // r23

    // References
    // -> static class zQueue sfxPool;
    // -> class zGlobals globals;
    // -> static class zQueue vfxPool;
}
// Range: 0x8001E230 -> 0x8001E4C4
void xAnimVFX_RemovePairs(class xEffectAttachIntf * intf /* r27 */) {
    {
        // Range: 0x8001E244 -> 0x8001E4A0
        // Local variables
        int i; // r28

        {
            // Range: 0x8001E244 -> 0x8001E4A0
            {
                // Range: 0x8001E244 -> 0x8001E4A0
                // Local variables
                class xAnimVFXPair p; // r1+0x28

                {
                    // Range: 0x8001E258 -> 0x8001E488
                    // Local variables
                    int idx; // r24
                }
            }
        }
    }

    // References
    // -> static struct {} __vt__Q219@unnamed@WAD00_cpp@12xAnimVFXPair;
    // -> static class zQueue vfxPool;
}
// Range: 0x8001E4D0 -> 0x8001E7C4
void xAnimSFX_RemovePairs(class xEffectAttachIntf * intf /* r27 */) {
    {
        // Range: 0x8001E4E4 -> 0x8001E7A0
        // Local variables
        int i; // r28

        {
            // Range: 0x8001E4E4 -> 0x8001E7A0
            {
                // Range: 0x8001E4E4 -> 0x8001E7A0
                // Local variables
                class xAnimSFXPair p; // r1+0x2C

                {
                    // Range: 0x8001E4F8 -> 0x8001E78C
                    // Local variables
                    int j; // r23

                    {
                        // Range: 0x8001E4F8 -> 0x8001E78C
                        // Local variables
                        class zSoundAsset * pSoundAsset; // r22
                    }
                }
            }
        }
    }

    // References
    // -> static struct {} __vt__Q219@unnamed@WAD00_cpp@12xAnimSFXPair;
    // -> static class zQueue sfxPool;
}
