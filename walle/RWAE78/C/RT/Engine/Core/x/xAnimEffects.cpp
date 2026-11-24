/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xAnimEffects.cpp
*/
static class zQueue vfxPool; // size: 0x1008, address: 0x80750AC8
static class zQueue sfxPool; // size: 0x1008, address: 0x80751AD0
static char * WALLE_WALK_RUN_VFX_LEFT_SPAWNPT_NAMES[18]; // size: 0x48, address: 0x806F0DE8
static char * WALLE_WALK_RUN_VFX_RIGHT_SPAWNPT_NAMES[18]; // size: 0x48, address: 0x806F0E30
static char * WALLE_LAND_VFX_SPAWNPT_NAMES[18]; // size: 0x48, address: 0x806F0E78
static char * WALLE_LANDBOX_VFX_SPAWNPT_NAMES[18]; // size: 0x48, address: 0x806F0EC0
static char * WALLE_DEATH_VFX_SPAWNPT_NAMES[18]; // size: 0x48, address: 0x806F0F08
// Range: 0x80015500 -> 0x80015504
static void @unnamed@WAD00_cpp@::xAnimPair::Init() {
}
// Range: 0x80082B00 -> 0x80082B1C
static void @unnamed@WAD00_cpp@::xAnimVFXPair::Init() {
}
// Range: 0x80082AE0 -> 0x80082AFC
static void @unnamed@WAD00_cpp@::xAnimSFXPair::Init() {
}
// Range: 0x80015290 -> 0x80015440
char * FindSpawnPtName(char * Name /* r26 */, int surfaceVFXType /* r27 */, int idx /* r28 */) {
    // References
    // -> static char * WALLE_DEATH_VFX_SPAWNPT_NAMES[18];
    // -> static char * WALLE_LANDBOX_VFX_SPAWNPT_NAMES[18];
    // -> static char * WALLE_LAND_VFX_SPAWNPT_NAMES[18];
    // -> static char * WALLE_WALK_RUN_VFX_RIGHT_SPAWNPT_NAMES[18];
    // -> static char * WALLE_WALK_RUN_VFX_LEFT_SPAWNPT_NAMES[18];
}
// Range: 0x80015440 -> 0x800154FC
void InitAnimFXInstances() {
    // References
    // -> static class zQueue sfxPool;
    // -> static class zQueue vfxPool;
}
// Range: 0x80015510 -> 0x80015538
void DeInitAnimFXInstances() {
    // References
    // -> static class zQueue sfxPool;
    // -> static class zQueue vfxPool;
}
// Range: 0x80015540 -> 0x80015D28
void EffectSingleRun(class xAnimSingle * single /* r31 */) {
    // Local variables
    class xEnt * ent; // r25
    class xAnimVFXPair * pVFX; // r24
    class SurfaceGamePlay * surface; // r23
    int count; // r22
    bool autoRelease; // r21
    class xAnimVFX_Effect * vfx; // r20
    class xAnimSoundEffect * pAnimSoundEffect; // r19
    class xAnimSFXPair * pAnimSFXPair; // r20

    {
        // Range: 0x80015798 -> 0x80015A84
        // Local variables
        class zFXScriptSpawnPt * * sPt; // r0
        class zFXScriptSpawnPt * spawnPt; // r19
    }
    {
        // Range: 0x80015BC0 -> 0x80015CF8
        // Local variables
        class xEnt * pEnt; // r17
    }

    // References
    // -> static class zQueue sfxPool;
    // -> static class zQueue vfxPool;
    // -> class zGlobals globals;
}
// signature: AnimationVFXChange(void *, xEnt *, xAnimState *)
// Range: 0x80015D50 -> 0x8001662C
void AnimationVFXChange(class xEnt * owner /* r26 */, class xAnimState * state /* r27 */) {
    // Local variables
    class xAnimVFX_Effect * vfx; // r30
    class SurfaceGamePlay * surface; // r29
    bool autoRelease; // r28
    class xAnimVFXPair * pVFX; // r0

    {
        // Range: 0x80015E28 -> 0x80016614
        // Local variables
        class zFXScriptSpawnPt * * sPt3; // r0
        class zFXScriptSpawnPt * * sPt2; // r0
        class zFXScriptSpawnPt * * sPt1; // r0
        class zFXScriptSpawnPt * * sPt; // r0

        {
            // Range: 0x80015E48 -> 0x8001603C
            // Local variables
            class zFXScriptSpawnPt * spawnPt; // r23
        }
        {
            // Range: 0x8001603C -> 0x80016230
            // Local variables
            class zFXScriptSpawnPt * spawnPt; // r23
        }
        {
            // Range: 0x80016230 -> 0x80016424
            // Local variables
            class zFXScriptSpawnPt * spawnPt; // r23
        }
        {
            // Range: 0x80016424 -> 0x80016614
            // Local variables
            class zFXScriptSpawnPt * spawnPt; // r23
        }
    }

    // References
    // -> static class zQueue vfxPool;
}
// Range: 0x80016630 -> 0x80016948
void xAnimVFX_Effect::Stop(class xEnt * ent /* r30 */, class xAnimState * state /* r31 */) {
    // Local variables
    class xAnimVFXPair * p; // r27
    bool autoRelease; // r26
    int count; // r25
    class xAnimVFX_Effect * vfx; // r24

    // References
    // -> static class zQueue vfxPool;
}
// signature: xAnimVFX_Effect::Stop(xEnt *)
// Range: 0x80016950 -> 0x80016B18
void xAnimVFX_Effect::Stop() {
    // References
    // -> static class zQueue vfxPool;
}
// signature: xAnimSoundEffect::Stop(xEnt *, xAnimState *)
// Range: 0x80016B20 -> 0x80016C60
void xAnimSoundEffect::Stop(class xAnimSoundEffect * this /* r31 */) {
    // Local variables
    class xAnimSFXPair * pPair; // r29

    {
        // Range: 0x80016BE8 -> 0x80016C1C
        // Local variables
        unsigned int iPair; // r28

        {
            // Range: 0x80016BE8 -> 0x80016C1C
            // Local variables
            class zSoundAsset * pSoundAsset; // r3
        }
    }

    // References
    // -> static class zQueue sfxPool;
}
// Range: 0x80016C60 -> 0x80016D24
void AnimSFXInstances_Update() {
    // Local variables
    int count; // r28

    {
        // Range: 0x80016C78 -> 0x80016D04
        // Local variables
        int i; // r27

        {
            // Range: 0x80016C78 -> 0x80016D04
            {
                // Range: 0x80016CC8 -> 0x80016CF4
                // Local variables
                int j; // r26

                {
                    // Range: 0x80016CC8 -> 0x80016CF4
                    // Local variables
                    class zSoundAsset * pSoundAsset; // r4
                }
            }
        }
    }

    // References
    // -> static class zQueue sfxPool;
}
// Range: 0x80016D30 -> 0x80016E3C
void AnimationSoundSurfaceChange(void * data /* r28 */, class xEnt * owner /* r29 */, class xAnimState * state /* r30 */) {
    // Local variables
    class zSoundModule * sMod; // r31
    class xAnimSoundEffect * sfx; // r0

    {
        // Range: 0x80016DD0 -> 0x80016E18
        // Local variables
        int i; // r29

        {
            // Range: 0x80016DD0 -> 0x80016E18
            // Local variables
            class zSoundAsset * pSoundAsset; // r30
        }
    }

    // References
    // -> static class zQueue sfxPool;
}
// Range: 0x80016E40 -> 0x800170C4
void EffectSingleStop(class xAnimSingle * single /* r29 */) {
    // Local variables
    class xEnt * ent; // r31
    class xAnimVFX_Effect * vfx; // r0
    class xAnimSoundEffect * pAnimSoundEffect; // r30

    // References
    // -> static class zQueue sfxPool;
    // -> class zGlobals globals;
}
// signature: xAnimVFX_RemovePairs(xEnt *)
// Range: 0x800170D0 -> 0x80017298
void xAnimVFX_RemovePairs() {
    // References
    // -> static class zQueue vfxPool;
}
// signature: xAnimSFX_RemovePairs(xEnt *)
// Range: 0x800172A0 -> 0x80017454
void xAnimSFX_RemovePairs() {
    // References
    // -> static class zQueue sfxPool;
}
