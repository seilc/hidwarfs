/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zFXSpawn.cpp
*/
class SystemInstance * sParticleSystems; // size: 0x4, address: 0x80734634
class SystemInstance * sObjectSystems; // size: 0x4, address: 0x80734638
class xLightData * * sDynamicLights; // size: 0x4, address: 0x8073463C
class zDecal * * sDecals; // size: 0x4, address: 0x80734640
class SystemInstance * sRibbonSystems; // size: 0x4, address: 0x80734644
class SystemInstance * sShrapnelSystems; // size: 0x4, address: 0x80734648
class xOGModel * * sModels; // size: 0x4, address: 0x8073464C
class FXScreenWarp * sScreenWarps; // size: 0x4, address: 0x80734650
class NumberPool sNumPoolParticles; // size: 0x14, address: 0x80734654
class NumberPool sNumPoolObjects; // size: 0x14, address: 0x80734668
class NumberPool sNumPoolLights; // size: 0x14, address: 0x8073467C
class NumberPool sNumPoolDecals; // size: 0x14, address: 0x80734690
class NumberPool sNumPoolRibbons; // size: 0x14, address: 0x807346A4
class NumberPool sNumPoolShrapnel; // size: 0x14, address: 0x807346B8
class NumberPool sNumPoolModels; // size: 0x14, address: 0x807346CC
class NumberPool sNumPoolScreenWarps; // size: 0x14, address: 0x807346E0
// signature: FX::Local::FXSpawnEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800B5240 -> 0x800B5250
void FX::Local::FXSpawnEventWrapper(class xBase * from /* r0 */) {
}
// signature: FX::Local::AllocMem<FXScreenWarp>(FXScreenWarp *&, unsigned int)
// Range: 0x800B5340 -> 0x800B53AC
void FX::Local::AllocMem<FXScreenWarp>(class FXScreenWarp * & ioMemPtr /* r31 */) {
}
// signature: FX::Local::AllocMem<World::xOGModel *>(World::xOGModel **&, unsigned int)
// Range: 0x800B53B0 -> 0x800B541C
void FX::Local::AllocMem<World::xOGModel *>(class xOGModel * * & ioMemPtr /* r31 */) {
}
// signature: FX::Local::AllocMem<FX::Shrapnel::SystemInstance>(FX::Shrapnel::SystemInstance *&, unsigned int)
// Range: 0x800B5420 -> 0x800B548C
void FX::Local::AllocMem<FX::Shrapnel::SystemInstance>(class SystemInstance * & ioMemPtr /* r31 */) {
}
// signature: FX::Local::AllocMem<FX::Ribbon::SystemInstance>(FX::Ribbon::SystemInstance *&, unsigned int)
// Range: 0x800B5490 -> 0x800B54FC
void FX::Local::AllocMem<FX::Ribbon::SystemInstance>(class SystemInstance * & ioMemPtr /* r31 */) {
}
// signature: FX::Local::AllocMem<FX::Objects::SystemInstance>(FX::Objects::SystemInstance *&, unsigned int)
// Range: 0x800B5500 -> 0x800B556C
void FX::Local::AllocMem<FX::Objects::SystemInstance>(class SystemInstance * & ioMemPtr /* r31 */) {
}
// signature: FX::Local::AllocMem<FX::Particles::SystemInstance>(FX::Particles::SystemInstance *&, unsigned int)
// Range: 0x800B5570 -> 0x800B55DC
void FX::Local::AllocMem<FX::Particles::SystemInstance>(class SystemInstance * & ioMemPtr /* r31 */) {
}
// Range: 0x800B5250 -> 0x800B533C
void FX::zFXSpawnWithSoundAssetMultiple::SceneInit() {
    // References
    // -> class NumberPool sNumPoolScreenWarps;
    // -> class FXScreenWarp * sScreenWarps;
    // -> class NumberPool sNumPoolModels;
    // -> class xOGModel * * sModels;
    // -> class NumberPool sNumPoolShrapnel;
    // -> class SystemInstance * sShrapnelSystems;
    // -> class NumberPool sNumPoolRibbons;
    // -> class SystemInstance * sRibbonSystems;
    // -> class NumberPool sNumPoolDecals;
    // -> class zDecal * * sDecals;
    // -> class NumberPool sNumPoolLights;
    // -> class xLightData * * sDynamicLights;
    // -> class NumberPool sNumPoolObjects;
    // -> class SystemInstance * sObjectSystems;
    // -> class NumberPool sNumPoolParticles;
    // -> class SystemInstance * sParticleSystems;
}
// Range: 0x800B55E0 -> 0x800B5698
void FX::zFXSpawnWithSoundAssetMultiple::SceneExit() {
    {
        // Range: 0x800B55E8 -> 0x800B55E8
        // Local variables
        class _FXSpawnCleanupCB _tempCB; // r1+0xC
    }
    {
        // Range: 0x800B5610 -> 0x800B5610
        // Local variables
        class _FXSpawnCleanupCB _tempCB; // r1+0x8
    }

    // References
    // -> class NumberPool sNumPoolScreenWarps;
    // -> class FXScreenWarp * sScreenWarps;
    // -> class NumberPool sNumPoolModels;
    // -> class xOGModel * * sModels;
    // -> class NumberPool sNumPoolShrapnel;
    // -> class SystemInstance * sShrapnelSystems;
    // -> class NumberPool sNumPoolRibbons;
    // -> class SystemInstance * sRibbonSystems;
    // -> class NumberPool sNumPoolDecals;
    // -> class zDecal * * sDecals;
    // -> class NumberPool sNumPoolLights;
    // -> class xLightData * * sDynamicLights;
    // -> class NumberPool sNumPoolObjects;
    // -> class SystemInstance * sObjectSystems;
    // -> class NumberPool sNumPoolParticles;
    // -> class SystemInstance * sParticleSystems;
    // -> class zGlobals globals;
}
// signature: FX::zFXSpawn::zFXSpawn(World::EntityHandleBase *)
// Range: 0x800B56F0 -> 0x800B5778
void * FX::zFXSpawn::zFXSpawn(class zFXSpawn * this /* r31 */) {
    // References
    // -> struct {} __vt__Q22FX8zFXSpawn;
}
// signature: FX::zFXSpawn::Construct(Sext::FXSpawn *)
// Range: 0x800B5780 -> 0x800B57E0
void FX::zFXSpawn::Construct(class zFXSpawn * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x800B57E0 -> 0x800B5858
void FX::zFXSpawn::ConstructPooled(class zFXSpawn * this /* r30 */) {
    // References
    // -> class FXScreenWarp * sScreenWarps;
    // -> class xOGModel * * sModels;
    // -> class SystemInstance * sShrapnelSystems;
    // -> class SystemInstance * sRibbonSystems;
    // -> class zDecal * * sDecals;
    // -> class xLightData * * sDynamicLights;
    // -> class SystemInstance * sObjectSystems;
    // -> class SystemInstance * sParticleSystems;
}
// Range: 0x800B5860 -> 0x800B5944
void FX::zFXSpawn::AllocateFXMem(class zFXSpawn * this /* r26 */, unsigned int inSize /* r27 */) {
}
// Range: 0x800B5950 -> 0x800B5A08
void FX::zFXSpawn::FreeFXMem(class zFXSpawn * this /* r29 */) {
}
// Range: 0x800B5A40 -> 0x800B5EBC
void FX::zFXSpawn::Init(class zFXSpawn * this /* r21 */, class zFXSpawn * inFxSpawnToCopy /* r22 */, class xEffectAttachIntf * inDriver /* r23 */, class xOGModelRef * inModel /* r24 */, int inAttachBone /* r25 */, class xVec3 * inDriverPos /* r26 */, class xVec3 * inDriverDPos /* r30 */, class xVec3 * inPos /* r27 */, class xMat3x3 * inRot /* r28 */, bool inAutoRelease /* r29 */) {
    {
        // Range: 0x800B5CDC -> 0x800B5E18
        // Local variables
        unsigned int idx; // r30
    }

    // References
    // -> class NumberPool sNumPoolScreenWarps;
    // -> class NumberPool sNumPoolModels;
    // -> class NumberPool sNumPoolShrapnel;
    // -> class NumberPool sNumPoolRibbons;
    // -> class NumberPool sNumPoolDecals;
    // -> class NumberPool sNumPoolLights;
    // -> class NumberPool sNumPoolObjects;
    // -> class NumberPool sNumPoolParticles;
    // -> struct {} __ptmf_null;
}
// Range: 0x800B5F80 -> 0x800B6008
void FX::zFXSpawn::SetForcedAgeRate(class zFXSpawn * this /* r28 */, float inAgeRate /* f31 */) {
    {
        // Range: 0x800B5F9C -> 0x800B5FF0
        // Local variables
        unsigned int idx; // r29
    }
}
// signature: FX::zFXSpawn::SetMat(const xMat4x3 &)
// Range: 0x800B6010 -> 0x800B6078
void FX::zFXSpawn::SetMat(class zFXSpawn * this /* r30 */) {
    {
        // Range: 0x800B6030 -> 0x800B6064
        // Local variables
        unsigned int idx; // r31
    }
}
// Range: 0x800B6080 -> 0x800B63C0
void FX::zFXSpawn::Parse(class zFXSpawn * this /* r15 */) {
    // Local variables
    int numPS; // r24
    int numOS; // r23
    int numDL; // r22
    int numDC; // r21
    int numRS; // r20
    int numSS; // r19
    int numModels; // r18
    int numSW; // r17

    {
        // Range: 0x800B60AC -> 0x800B62E0
        // Local variables
        unsigned int idx; // r16

        {
            // Range: 0x800B60AC -> 0x800B62E0
            // Local variables
            class EntityHandleBase * entHandle; // r0
            void * voidAsset; // r0
            class ScriptResource & res; // r0
        }
    }
    {
        // Range: 0x800B6340 -> 0x800B6394
        // Local variables
        unsigned int idx; // r5
    }
}
// Range: 0x800B63C0 -> 0x800B64C4
void FX::zFXSpawn::ResetMat(class zFXSpawn * this /* r31 */) {
    // References
    // -> struct {} __ptmf_null;
}
// Range: 0x800B64D0 -> 0x800B6540
void FX::zFXSpawn::UpdateLocalDPos(class zFXSpawn * this /* r31 */) {
    {
        // Range: 0x800B64E4 -> 0x800B652C
        // Local variables
        class xMat4x3 result; // r1+0x18
    }

    // References
    // -> class xMat4x3 g_I3;
}
// signature: FX::zFXSpawn::TransformSetup(xBaseTransform *)
// Range: 0x800B6540 -> 0x800B6588
void FX::zFXSpawn::TransformSetup() {
}
// Range: 0x800B6590 -> 0x800B6CC0
void FX::zFXSpawn::SetupLocal(class zFXSpawn * this /* r27 */) {
    {
        // Range: 0x800B65C8 -> 0x800B66D4
        // Local variables
        class xBase * base; // r0
    }
    {
        // Range: 0x800B68D0 -> 0x800B6C60
        // Local variables
        unsigned int idx; // r28

        {
            // Range: 0x800B68D0 -> 0x800B6C60
            // Local variables
            int typeIdx; // r22

            {
                // Range: 0x800B68D0 -> 0x800B68D0
                // Local variables
                class zFXParticleSystem * system; // r4
                class SystemInstance * spawnPt; // r22
            }
            {
                // Range: 0x800B68D0 -> 0x800B68D0
                // Local variables
                class zFXObjectSystem * system; // r4
                class SystemInstance * spawnPt; // r22
            }
            {
                // Range: 0x800B68E8 -> 0x800B68E8
                // Local variables
                class zRibbon * ribbon; // r4
                class SystemInstance * spawnPt; // r22
            }
            {
                // Range: 0x800B68E8 -> 0x800B68E8
                // Local variables
                class SystemInstance * spawnPt; // r22
            }
            {
                // Range: 0x800B68E8 -> 0x800B6B6C
                // Local variables
                void * voidAsset; // r0
            }
        }
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> struct {} __ptmf_null;
}
// signature: FX::zFXSpawn::SetVolumeScale(const xVec3 &)
// Range: 0x800B6CC0 -> 0x800B6CC8
void FX::zFXSpawn::SetVolumeScale() {
}
// Range: 0x800B6CD0 -> 0x800B6EBC
void FX::zFXSpawn::MatrixUpdate(class zFXSpawn * this /* r29 */, class xMat4x3 * outMat /* r30 */, class xMat4x3 & inMatTrans /* r31 */, bool inWorldOrient /* r28 */) {
    {
        // Range: 0x800B6D38 -> 0x800B6E04
        // Local variables
        class xVec3 rotatedBasePos; // r1+0x38
        class xMat4x3 bone; // r1+0x48
    }
    {
        // Range: 0x800B6E0C -> 0x800B6E64
        // Local variables
        class xVec3 rotatedBasePos; // r1+0x2C
    }

    // References
    // -> struct {} __ptmf_null;
    // -> class xMat4x3 g_I3;
}
// signature: FX::zFXSpawn::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800B6EC0 -> 0x800B7084
void FX::zFXSpawn::HandleEvent(class zFXSpawn * this /* r31 */, class EventAny * params /* r30 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x800B7090 -> 0x800B7108
void FX::zFXSpawn::Run(class zFXSpawn * this /* r31 */) {
}
// Range: 0x800B7110 -> 0x800B722C
void FX::zFXSpawn::Preload(class zFXSpawn * this /* r27 */, float inSeconds /* f29 */) {
    {
        // Range: 0x800B713C -> 0x800B71FC
        // Local variables
        float t; // f30

        {
            // Range: 0x800B713C -> 0x800B71FC
            // Local variables
            unsigned int idx; // r28

            {
                // Range: 0x800B713C -> 0x800B71FC
                // Local variables
                int typeIdx; // r3
            }
        }
    }
}
// Range: 0x800B7230 -> 0x800B7374
void FX::zFXSpawn::SetVisible(class zFXSpawn * this /* r29 */, bool inActuallyVisible /* r30 */) {
    {
        // Range: 0x800B725C -> 0x800B735C
        // Local variables
        unsigned int idx; // r31

        {
            // Range: 0x800B725C -> 0x800B735C
            // Local variables
            int typeIdx; // r4
        }
    }
}
// Range: 0x800B7380 -> 0x800B745C
void FX::zFXSpawn::SetBSPVisible(class zFXSpawn * this /* r28 */, bool inBSPVisible /* r29 */) {
    {
        // Range: 0x800B73B4 -> 0x800B73FC
        // Local variables
        unsigned int idx; // r30
    }
    {
        // Range: 0x800B7404 -> 0x800B7430
        // Local variables
        unsigned int idx; // r30
    }
}
// signature: FX::zFXSpawn::SetPaused(bool)
// Range: 0x800B7460 -> 0x800B74B0
void FX::zFXSpawn::SetPaused() {
}
// Range: 0x800B74B0 -> 0x800B74B8
void FX::zFXSpawn::Kill() {
}
// Range: 0x800B74C0 -> 0x800B7528
void FX::zFXSpawn::ReleasePtrs(class zFXSpawn * this /* r30 */) {
}
// Range: 0x800B7530 -> 0x800B7558
void FX::zFXSpawn::Reset() {
}
// Range: 0x800B7560 -> 0x800B7670
void FX::zFXSpawn::StopAllFX(class zFXSpawn * this /* r31 */, bool inImmediate /* r25 */) {
    {
        // Range: 0x800B7584 -> 0x800B7638
        // Local variables
        unsigned int idx; // r26
    }
}
// Range: 0x800B7670 -> 0x800B7718
void FX::zFXSpawn::ResetStoppedFX(class zFXSpawn * this /* r26 */) {
    {
        // Range: 0x800B7680 -> 0x800B7704
        // Local variables
        unsigned int idx; // r27
    }
}
// Range: 0x800B7720 -> 0x800B78B8
void FX::zFXSpawn::StopFX(class zFXSpawn * this /* r29 */, unsigned int inEventIdx /* r30 */, bool inImmediate /* r27 */) {
    // Local variables
    int typeIdx; // r28

    {
        // Range: 0x800B7814 -> 0x800B783C
        // Local variables
        class xLightData * lObj; // r3
    }
}
// Range: 0x800B78C0 -> 0x800B7994
void FX::zFXSpawnWithSoundAssetMultiple::ClearOnSceneExit(class zFXSpawnWithSoundAssetMultiple * this /* r29 */) {
    {
        // Range: 0x800B78F0 -> 0x800B7944
        // Local variables
        unsigned int i; // r30
    }
}
// Range: 0x800B79A0 -> 0x800B7C1C
void FX::zFXSpawn::Cleanup(class zFXSpawn * this /* r28 */) {
    {
        // Range: 0x800B79CC -> 0x800B7ABC
        // Local variables
        unsigned int idx; // r30

        {
            // Range: 0x800B79CC -> 0x800B7ABC
            // Local variables
            class ScriptResource & res; // r29
            unsigned int typeIdx; // r0

            {
                // Range: 0x800B79D4 -> 0x800B79D4
                // Local variables
                class SystemInstance * spawnPt; // r23
            }
        }
    }
    {
        // Range: 0x800B7ACC -> 0x800B7BF8
        // Local variables
        unsigned int idx; // r23
    }

    // References
    // -> class NumberPool sNumPoolScreenWarps;
    // -> class NumberPool sNumPoolModels;
    // -> class NumberPool sNumPoolShrapnel;
    // -> class NumberPool sNumPoolRibbons;
    // -> class NumberPool sNumPoolDecals;
    // -> class NumberPool sNumPoolLights;
    // -> class NumberPool sNumPoolObjects;
    // -> class NumberPool sNumPoolParticles;
}
// Range: 0x800B7C20 -> 0x800B81B0
void FX::zFXSpawn::Update(class zFXSpawn * this /* r29 */, float dt /* f27 */) {
    // Local variables
    bool doStop; // r6
    unsigned int stopped; // r7

    {
        // Range: 0x800B7D08 -> 0x800B7F8C
        // Local variables
        unsigned int idx; // r30
    }
    {
        // Range: 0x800B7FB0 -> 0x800B7FDC
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x800B80B4 -> 0x800B8170
        // Local variables
        float remaining; // f27
        bool needsReset; // r0
    }
}
// Range: 0x800B81E0 -> 0x800B8578
void FX::zFXSpawn::UpdateAttachedFX(class zFXSpawn * this /* r26 */, unsigned int inEventIdx /* r27 */, bool inForceUpdate /* r28 */, bool doEmit /* r29 */) {
    // Local variables
    class ScriptResource & res; // r0

    {
        // Range: 0x800B8204 -> 0x800B8564
        // Local variables
        int spawnIdx; // r27
        bool worldOrient; // r6
        class xMat4x3 matTrans; // r1+0xF8

        {
            // Range: 0x800B836C -> 0x800B83B0
            // Local variables
            class SystemInstance & spawnPt; // r27
        }
        {
            // Range: 0x800B83B0 -> 0x800B83F4
            // Local variables
            class SystemInstance & spawnPt; // r27
        }
        {
            // Range: 0x800B83F4 -> 0x800B8474
            // Local variables
            class xLightData * lObj; // r27

            {
                // Range: 0x800B8400 -> 0x800B8470
                // Local variables
                class xVec3 pos; // r1+0x2C
                class xMat4x3 transform; // r1+0xB8
            }
        }
        {
            // Range: 0x800B8474 -> 0x800B84AC
            // Local variables
            class xMat4x3 emitLoc; // r1+0x78
        }
        {
            // Range: 0x800B84AC -> 0x800B84E8
            // Local variables
            class SystemInstance & spawnPt; // r26
        }
        {
            // Range: 0x800B853C -> 0x800B8564
            // Local variables
            class xMat4x3 emitLoc; // r1+0x38
        }
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> struct {} __ptmf_null;
}
// signature: FX::zFXSpawn::CheckStartSound(unsigned int)
// Range: 0x800B8580 -> 0x800B85EC
void FX::zFXSpawn::CheckStartSound() {
}
// Range: 0x800B85F0 -> 0x800B89B4
void FX::zFXSpawn::StartFX(class zFXSpawn * this /* r26 */, unsigned int inEventIdx /* r27 */) {
    // Local variables
    class ScriptResource & res; // r30
    class FMOD_VECTOR * spawnPos; // r29
    class xVec3 tmpPos; // r1+0x2C
    int spawnIdx; // r28

    {
        // Range: 0x800B8770 -> 0x800B8814
        // Local variables
        class xLightData * lObj; // r25
        void * voidAsset; // r0
        class xVec3 lightPos; // r1+0x20
    }

    // References
    // -> struct {} __ptmf_null;
}
// signature: FX::zFXSpawn::IsFinished(unsigned int) const
// Range: 0x800B89C0 -> 0x800B8A98
bool FX::zFXSpawn::IsFinished() const {
    // Local variables
    unsigned int typeIdx; // r4
}
// Range: 0x800B8AA0 -> 0x800B8B00
bool FX::zFXSpawn::IsFinished(class zFXSpawn * this /* r30 */) const {
    {
        // Range: 0x800B8AB4 -> 0x800B8AE8
        // Local variables
        unsigned int idx; // r31
    }
}
// signature: FX::zFXSpawnWithSoundAssetMultiple::zFXSpawnWithSoundAssetMultiple(World::EntityHandleBase *)
// Range: 0x800B8B00 -> 0x800B8B3C
void * FX::zFXSpawnWithSoundAssetMultiple::zFXSpawnWithSoundAssetMultiple(class zFXSpawnWithSoundAssetMultiple * this /* r31 */) {
    // References
    // -> struct {} __vt__Q22FX30zFXSpawnWithSoundAssetMultiple;
}
// Range: 0x800B8B40 -> 0x800B8BA4
void FX::zFXSpawnWithSoundAssetMultiple::Setup(class zFXSpawnWithSoundAssetMultiple * this /* r31 */) {
}
// Range: 0x800B8BB0 -> 0x800B8D34
void FX::zFXSpawnWithSoundAssetMultiple::AllocSoundAssetMultiple(class zFXSpawnWithSoundAssetMultiple * this /* r30 */) {
    {
        // Range: 0x800B8BC8 -> 0x800B8CE8
        // Local variables
        unsigned int j; // r0

        {
            // Range: 0x800B8C3C -> 0x800B8CE8
            // Local variables
            unsigned int i; // r31
        }
    }
    {
        // Range: 0x800B8CF4 -> 0x800B8D20
        // Local variables
        unsigned int i; // r7
    }

    // References
    // -> struct {} __vt__19zSoundAssetMultiple;
}
// signature: FX::zFXSpawnWithSoundAssetMultiple::Construct(Sext::FXSpawn *)
// Range: 0x800B8D40 -> 0x800B8DC8
void FX::zFXSpawnWithSoundAssetMultiple::Construct(class zFXSpawnWithSoundAssetMultiple * this /* r29 */) {
    {
        // Range: 0x800B8D60 -> 0x800B8DAC
        // Local variables
        unsigned int i; // r30
    }
}
// signature: FX::zFXSpawnObject::zFXSpawnObject(World::EntityHandleBase *, Sext::FXSpawn *)
// Range: 0x800B8DD0 -> 0x800B8E68
void * FX::zFXSpawnObject::zFXSpawnObject(class zFXSpawnObject * this /* r30 */, class FXSpawn * inAsset /* r31 */) {
    // References
    // -> struct {} __vt__Q22FX14zFXSpawnObject;
}
// signature: FX::zFXInstance::zFXInstance(World::EntityHandleBase *, Sext::FXInstance *)
// Range: 0x800B8EC0 -> 0x800B8F94
void * FX::zFXInstance::zFXInstance(class zFXInstance * this /* r29 */, class FXInstance * inAsset /* r30 */) {
    // Local variables
    class FXSpawn * spawnAsset; // r0

    // References
    // -> struct {} __vt__Q22FX11zFXInstance;
}
// Range: 0x800B8FA0 -> 0x800B9000
class Entity * Sext::FXSpawn::Create(class EntityHandleBase * handle /* r30 */, class FXSpawn * inAsset /* r31 */) {
}
// Range: 0x800B9000 -> 0x800B9060
class Entity * Sext::FXInstance::Create(class EntityHandleBase * handle /* r30 */, class FXInstance * inAsset /* r31 */) {
}
