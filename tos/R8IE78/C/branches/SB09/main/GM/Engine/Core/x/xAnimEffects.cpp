/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xAnimEffects.cpp
*/
static class zQueue vfxPool; // size: 0x1208, address: 0x8071CA18
static class zQueue sfxPool; // size: 0x2408, address: 0x8071DC20
// signature: @unnamed@WAD00_cpp@::xAnimVFXPair::operator=(const @unnamed@WAD00_cpp@::xAnimVFXPair &)
// Range: 0x80014510 -> 0x8001454C
static class xAnimVFXPair & @unnamed@WAD00_cpp@::xAnimVFXPair::operator=() {
}
// Range: 0x80014120 -> 0x80014158
static void @unnamed@WAD00_cpp@::xAnimVFXPair::Init() {
    {
        // Range: 0x80014128 -> 0x80014154
        // Local variables
        unsigned int i; // r8
    }
}
// Range: 0x80014160 -> 0x800141D4
static class xAnimPair * @unnamed@WAD00_cpp@::FindPair<@unnamed@WAD00_cpp@::xAnimSFXPair, 256>(class xEffectAttachIntf * owner /* r28 */, class xAnimState * state /* r29 */, class zQueue * pool /* r30 */) {
    {
        // Range: 0x8001417C -> 0x800141BC
        // Local variables
        int i; // r31

        {
            // Range: 0x8001417C -> 0x800141BC
            // Local variables
            class xAnimPair * pair; // r0
        }
    }
}
// Range: 0x800141E0 -> 0x80014254
static class xAnimPair * @unnamed@WAD00_cpp@::FindPair<@unnamed@WAD00_cpp@::xAnimVFXPair, 128>(class xEffectAttachIntf * owner /* r28 */, class xAnimState * state /* r29 */, class zQueue * pool /* r30 */) {
    {
        // Range: 0x800141FC -> 0x8001423C
        // Local variables
        int i; // r31

        {
            // Range: 0x800141FC -> 0x8001423C
            // Local variables
            class xAnimPair * pair; // r0
        }
    }
}
// Range: 0x80013970 -> 0x80013A2C
void InitAnimFXInstances() {
    // References
    // -> static class zQueue sfxPool;
    // -> static class zQueue vfxPool;
}
// signature: DeInitAnimFXInstances(bool)
// Range: 0x80013A30 -> 0x80013B4C
void DeInitAnimFXInstances() {
    {
        // Range: 0x80013A48 -> 0x80013AAC
        // Local variables
        int i; // r25

        {
            // Range: 0x80013A48 -> 0x80013AAC
            // Local variables
            class xAnimVFXPair * pair; // r0

            {
                // Range: 0x80013A50 -> 0x80013AAC
                // Local variables
                int idx; // r24
            }
        }
    }
    {
        // Range: 0x80013AAC -> 0x80013B14
        // Local variables
        int i; // r24

        {
            // Range: 0x80013AAC -> 0x80013B14
            // Local variables
            class xAnimSFXPair * pair; // r0

            {
                // Range: 0x80013AB4 -> 0x80013B14
                // Local variables
                int j; // r25

                {
                    // Range: 0x80013AB4 -> 0x80013B14
                    // Local variables
                    class zSoundAssetMultiple * pSoundAsset; // r3
                }
            }
        }
    }

    // References
    // -> static class zQueue sfxPool;
    // -> static class zQueue vfxPool;
}
// signature: xAnimVFX_Effect::GetSpawn(Sext::SurfaceGamePlay *)
// Range: 0x80013BD0 -> 0x80013C5C
class zFXSpawn * xAnimVFX_Effect::GetSpawn() {
    // Local variables
    class uid spawnID; // r1+0x8

    {
        // Range: 0x80013BD8 -> 0x80013C40
        // Local variables
        unsigned int numSurfaceIdx; // r0

        {
            // Range: 0x80013BFC -> 0x80013C40
            // Local variables
            unsigned int idx; // r0
        }
    }
}
// Range: 0x80013C60 -> 0x80014120
void EffectSingleRun(class xAnimSingle * single /* r26 */) {
    // Local variables
    class xEffectAttachIntf * intf; // r30
    unsigned int numVfx; // r31
    class xAnimSoundEffect * pAnimSoundEffect; // r27
    class xAnimSFXPair * pAnimSFXPair; // r28
    int count; // r29

    {
        // Range: 0x80013CB0 -> 0x80013F24
        // Local variables
        class xAnimVFXPair * pVFX; // r28
        class SurfaceGamePlay * surface; // r29

        {
            // Range: 0x80013CE8 -> 0x80013D98
            {
                // Range: 0x80013D6C -> 0x80013D98
                // Local variables
                unsigned int idx; // r4
            }
        }
        {
            // Range: 0x80013DA8 -> 0x80013DE8
            // Local variables
            unsigned int idx; // r20

            {
                // Range: 0x80013DA8 -> 0x80013DE8
                // Local variables
                class zFXSpawn * & sPt; // r0
            }
        }
        {
            // Range: 0x80013DE8 -> 0x80013F20
            // Local variables
            unsigned int idx; // r27

            {
                // Range: 0x80013DE8 -> 0x80013F20
                // Local variables
                bool autoRelease; // r19
                class zFXSpawn * spawnAsset; // r18
                class zFXSpawn * & sPt; // r0
                class xAnimVFX_Effect * vfx; // r19
            }
        }
    }
    {
        // Range: 0x80013F64 -> 0x80014018
        {
            // Range: 0x80013FDC -> 0x80014018
            // Local variables
            int i; // r7
        }
    }

    // References
    // -> static class zQueue sfxPool;
    // -> class zGlobals globals;
    // -> static class zQueue vfxPool;
}
// Range: 0x80014260 -> 0x80014374
void xAnimVFX_Effect::Stop(class xEffectAttachIntf * intf /* r22 */, class xAnimState * state /* r23 */) {
    // Local variables
    class xAnimVFXPair * pair; // r0
    int count; // r25

    {
        // Range: 0x800142A4 -> 0x800142F0
        // Local variables
        int idx; // r24

        {
            // Range: 0x800142A4 -> 0x800142F0
            // Local variables
            class xAnimVFX_Effect * vfx; // r0
        }
    }

    // References
    // -> static struct {} __vt__Q219@unnamed@WAD00_cpp@12xAnimVFXPair;
    // -> static class zQueue vfxPool;
}
// signature: xAnimSoundEffect::Stop(xEffectAttachIntf *, xAnimState *)
// Range: 0x80014580 -> 0x8001462C
void xAnimSoundEffect::Stop(class xAnimSoundEffect * this /* r26 */, class xEffectAttachIntf * intf /* r27 */) {
    // Local variables
    class xAnimSFXPair * pPair; // r0

    {
        // Range: 0x800145BC -> 0x80014608
        // Local variables
        unsigned int iPair; // r28

        {
            // Range: 0x800145BC -> 0x80014608
            // Local variables
            class zSoundAssetMultiple * pSoundAsset; // r3
        }
    }

    // References
    // -> static class zQueue sfxPool;
}
// Range: 0x80014630 -> 0x80014744
void EffectSingleStop(class xAnimSingle * single /* r29 */) {
    // Local variables
    class xEffectAttachIntf * intf; // r27
    class xAnimVFX_Effect * vfx; // r0
    class xAnimSoundEffect * pAnimSoundEffect; // r28

    // References
    // -> static struct {} __vt__Q219@unnamed@WAD00_cpp@12xAnimSFXPair;
    // -> static class zQueue sfxPool;
    // -> class zGlobals globals;
}
// Range: 0x80014930 -> 0x800149E0
void xAnimVFX_RemovePairs(class xEffectAttachIntf * intf /* r22 */) {
    {
        // Range: 0x80014940 -> 0x800149CC
        // Local variables
        int i; // r24

        {
            // Range: 0x80014940 -> 0x800149CC
            // Local variables
            class xAnimPair * pair; // r0

            {
                // Range: 0x80014944 -> 0x800149CC
                // Local variables
                class xAnimVFXPair p; // r1+0x8

                {
                    // Range: 0x8001495C -> 0x800149B8
                    // Local variables
                    int idx; // r23
                }
            }
        }
    }

    // References
    // -> static struct {} __vt__Q219@unnamed@WAD00_cpp@12xAnimVFXPair;
    // -> static class zQueue vfxPool;
}
// Range: 0x800149E0 -> 0x80014AA8
void xAnimSFX_RemovePairs(class xEffectAttachIntf * intf /* r24 */) {
    {
        // Range: 0x800149F0 -> 0x80014A94
        // Local variables
        int i; // r26

        {
            // Range: 0x800149F0 -> 0x80014A94
            // Local variables
            class xAnimPair * pair; // r0

            {
                // Range: 0x800149F4 -> 0x80014A94
                // Local variables
                class xAnimSFXPair p; // r1+0x8

                {
                    // Range: 0x800149FC -> 0x80014A80
                    // Local variables
                    int j; // r25

                    {
                        // Range: 0x800149FC -> 0x80014A80
                        // Local variables
                        class zSoundAssetMultiple * pSoundAsset; // r3
                    }
                }
            }
        }
    }

    // References
    // -> static struct {} __vt__Q219@unnamed@WAD00_cpp@12xAnimSFXPair;
    // -> static class zQueue sfxPool;
}
