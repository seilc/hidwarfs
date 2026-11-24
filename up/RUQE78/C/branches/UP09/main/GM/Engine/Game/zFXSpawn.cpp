/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zFXSpawn.cpp
*/
class SystemInstance * sParticleSystems; // size: 0x4, address: 0x8081E4B4
class SystemInstance * sObjectSystems; // size: 0x4, address: 0x8081E4B8
class xLightData * * sDynamicLights; // size: 0x4, address: 0x8081E4BC
class zDecal * * sDecals; // size: 0x4, address: 0x8081E4C0
class SystemInstance * sRibbonSystems; // size: 0x4, address: 0x8081E4C4
class SystemInstance * sShrapnelSystems; // size: 0x4, address: 0x8081E4C8
class xOGModel * * sModels; // size: 0x4, address: 0x8081E4CC
class NumberPool sNumPoolParticles; // size: 0x14, address: 0x8081E4D0
class NumberPool sNumPoolObjects; // size: 0x14, address: 0x8081E4E4
class NumberPool sNumPoolLights; // size: 0x14, address: 0x8081E4F8
class NumberPool sNumPoolDecals; // size: 0x14, address: 0x8081E50C
class NumberPool sNumPoolRibbons; // size: 0x14, address: 0x8081E520
class NumberPool sNumPoolShrapnel; // size: 0x14, address: 0x8081E534
class NumberPool sNumPoolModels; // size: 0x14, address: 0x8081E548
// signature: FX::Local::FXSpawnEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80163830 -> 0x80163840
void FX::Local::FXSpawnEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x80163840 -> 0x80163AD8
void FX::zFXSpawn::SceneInit() {
    // References
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
// Range: 0x80163AE0 -> 0x80163C0C
void FX::zFXSpawn::SceneExit() {
    // References
    // -> class xOGModel * * sModels;
    // -> class SystemInstance * sShrapnelSystems;
    // -> class SystemInstance * sRibbonSystems;
    // -> class zDecal * * sDecals;
    // -> class xLightData * * sDynamicLights;
    // -> class SystemInstance * sObjectSystems;
    // -> class SystemInstance * sParticleSystems;
    // -> class NumberPool sNumPoolModels;
    // -> class NumberPool sNumPoolShrapnel;
    // -> class NumberPool sNumPoolRibbons;
    // -> class NumberPool sNumPoolDecals;
    // -> class NumberPool sNumPoolLights;
    // -> class NumberPool sNumPoolObjects;
    // -> class NumberPool sNumPoolParticles;
    // -> class zGlobals globals;
}
// signature: FX::zFXSpawn::zFXSpawn(World::EntityHandleBase *, Sext::FXSpawn *)
// Range: 0x80163C20 -> 0x80163E30
void * FX::zFXSpawn::zFXSpawn(class zFXSpawn * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__Q22FX8zFXSpawn;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80163E30 -> 0x80164418
void FX::zFXSpawn::Init(class zFXSpawn * this /* r27 */, class zFXSpawn * inFxSpawnToCopy /* r28 */, class xEffectAttachIntf * inDriver /* r26 */, class xOGModel * inModel /* r25 */, int inAttachBone /* r24 */, class xVec3 * inDriverPos /* r23 */, class xVec3 * inDriverDPos /* r22 */, class xVec3 * inPos /* r29 */, class xMat3x3 * inRot /* r30 */, bool inAutoRelease /* r21 */) {
    {
        // Range: 0x80163F14 -> 0x80164278
        // Local variables
        unsigned int idx; // r12
    }

    // References
    // -> class NumberPool sNumPoolModels;
    // -> class NumberPool sNumPoolShrapnel;
    // -> class NumberPool sNumPoolRibbons;
    // -> class NumberPool sNumPoolDecals;
    // -> class NumberPool sNumPoolLights;
    // -> class NumberPool sNumPoolObjects;
    // -> class NumberPool sNumPoolParticles;
}
// signature: FX::zFXSpawn::SetForcedAgeRate(float)
// Range: 0x80164420 -> 0x80164490
void FX::zFXSpawn::SetForcedAgeRate() {
    {
        // Range: 0x80164420 -> 0x8016447C
        // Local variables
        unsigned int idx; // r10
    }

    // References
    // -> class generator_data * sInstanceDataPool;
}
// Range: 0x80164490 -> 0x8016494C
void FX::zFXSpawn::Parse(class zFXSpawn * this /* r15 */) {
    // Local variables
    int numPS; // r24
    int numOS; // r23
    int numDL; // r22
    int numDC; // r21
    int numRS; // r20
    int numSS; // r19
    int numModels; // r18

    {
        // Range: 0x801644BC -> 0x801646DC
        // Local variables
        unsigned int idx; // r17

        {
            // Range: 0x801644BC -> 0x801646DC
            // Local variables
            class EntityHandleBase * entHandle; // r0
            class ScriptResource & res; // r16
        }
    }
    {
        // Range: 0x801648C8 -> 0x80164910
        // Local variables
        unsigned int idx; // r5
    }
}
// Range: 0x80164960 -> 0x80164A30
void FX::zFXSpawn::Setup(class zFXSpawn * this /* r31 */) {
}
// Range: 0x80164A30 -> 0x80165688
void FX::zFXSpawn::SetupLocal(class zFXSpawn * this /* r31 */) {
    {
        // Range: 0x80164A78 -> 0x80164AD0
        // Local variables
        class xBase * base; // r0
    }
    {
        // Range: 0x80164B4C -> 0x801655F0
        // Local variables
        unsigned int idx; // r17

        {
            // Range: 0x80164B4C -> 0x801655F0
            // Local variables
            int typeIdx; // r16
            class ScriptResource & res; // r6

            {
                // Range: 0x80164B4C -> 0x80164B4C
                // Local variables
                class zFXParticleSystem * system; // r0
                class SystemInstance * spawnPt; // r16
            }
            {
                // Range: 0x80164B4C -> 0x80164B60
                // Local variables
                class zFXObjectSystem * system; // r21
                class SystemInstance * spawnPt; // r16
            }
            {
                // Range: 0x80164B60 -> 0x80164B60
                // Local variables
                class zDecal * spawnPt; // r0
            }
            {
                // Range: 0x80164B60 -> 0x80164B60
                // Local variables
                class zRibbon * ribbon; // r0
                class SystemInstance * spawnPt; // r15
            }
            {
                // Range: 0x80164B60 -> 0x80164B60
                // Local variables
                class SystemInstance * spawnPt; // r16
            }
            {
                // Range: 0x80164B60 -> 0x801655F0
                // Local variables
                class UIDModelReference * uidref; // r15
            }
        }
    }

    // References
    // -> class SystemInstance * * sInstances;
    // -> class generator_data * sInstanceDataPool;
    // -> class generator_data * sInstanceDataPool;
    // -> class SystemInstance * * sInstances;
    // -> class WiiFastHeap wiiFastHeap;
    // -> unsigned long long simpleShadowID;
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> class xMat4x3 g_I3;
    // -> class NumberPool sNumberPool;
    // -> class xOGModelUpdater g_modelUpdateDefault;
    // -> class NumberPool sNumberPool;
}
// Range: 0x801656B0 -> 0x80165924
void FX::zFXSpawn::MatrixUpdate(class zFXSpawn * this /* r28 */, class xMat4x3 * outMat /* r29 */, class xMat4x3 & inMatTrans /* r30 */, bool inWorldOrient /* r31 */) {
    {
        // Range: 0x80165770 -> 0x801657A4
        // Local variables
        class xMat4x3 bone; // r1+0x8
    }

    // References
    // -> class xMat4x3 g_I3;
}
// signature: FX::zFXSpawn::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80165930 -> 0x80165C50
void FX::zFXSpawn::HandleEvent(class zFXSpawn * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x80165C50 -> 0x80165F38
void FX::zFXSpawn::SetVisible(class zFXSpawn * this /* r17 */, bool inActuallyVisible /* r18 */) {
    {
        // Range: 0x80165C8C -> 0x80165F00
        // Local variables
        unsigned int idx; // r19

        {
            // Range: 0x80165C8C -> 0x80165F00
            // Local variables
            int typeIdx; // r4
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class generator_data * sInstanceDataPool;
}
// signature: FX::zFXSpawn::SetBSPVisible(bool)
// Range: 0x80165F40 -> 0x80165F88
void FX::zFXSpawn::SetBSPVisible() {
}
// signature: FX::zFXSpawn::SetPaused(bool)
// Range: 0x80165F90 -> 0x80165FE0
void FX::zFXSpawn::SetPaused() {
}
// Range: 0x80165FE0 -> 0x80165FE8
void FX::zFXSpawn::Stop() {
}
// Range: 0x80165FF0 -> 0x80166314
void FX::zFXSpawn::DebugReset(class zFXSpawn * this /* r27 */) {
    // References
    // -> class zQueue sObjPool;
}
// Range: 0x80166320 -> 0x80166420
void FX::zFXSpawn::StopAllFX(class zFXSpawn * this /* r31 */, bool inImmediate /* r25 */) {
    {
        // Range: 0x80166344 -> 0x801663D8
        // Local variables
        unsigned int idx; // r26
    }
}
// Range: 0x80166420 -> 0x801666F4
void FX::zFXSpawn::StopFX(class zFXSpawn * this /* r25 */, unsigned int inEventIdx /* r26 */, bool inImmediate /* r23 */) {
    // Local variables
    int typeIdx; // r27

    {
        // Range: 0x80166590 -> 0x801665B8
        // Local variables
        class xLightData * lObj; // r3
    }

    // References
    // -> class Scene * primaryScene;
    // -> class generator_data * sInstanceDataPool;
}
// Range: 0x80166700 -> 0x801667B4
void FX::zFXSpawn::ClearOnSceneExit(class zFXSpawn * this /* r29 */) {
    {
        // Range: 0x80166724 -> 0x80166750
        // Local variables
        unsigned int idx; // r30

        {
            // Range: 0x80166724 -> 0x80166750
            // Local variables
            class ScriptResource & res; // r3
        }
    }
}
// Range: 0x801667C0 -> 0x80166DC0
void FX::zFXSpawn::Cleanup(class zFXSpawn * this /* r31 */) {
    {
        // Range: 0x801667EC -> 0x801669DC
        // Local variables
        unsigned int idx; // r20

        {
            // Range: 0x801667EC -> 0x801669DC
            // Local variables
            unsigned int typeIdx; // r0

            {
                // Range: 0x801667EC -> 0x801667F0
                // Local variables
                class SystemInstance * spawnPt; // r3
            }
            {
                // Range: 0x801667F0 -> 0x80166990
                // Local variables
                class SystemInstance * spawnPt; // r6
            }
        }
    }
    {
        // Range: 0x801669FC -> 0x80166D8C
        // Local variables
        unsigned int idx; // r11
    }

    // References
    // -> class NumberPool sNumPoolModels;
    // -> class NumberPool sNumPoolShrapnel;
    // -> class NumberPool sNumPoolRibbons;
    // -> class NumberPool sNumPoolDecals;
    // -> class NumberPool sNumPoolLights;
    // -> class NumberPool sNumPoolObjects;
    // -> class NumberPool sNumPoolParticles;
    // -> class SystemInstance * * sInstances;
    // -> class SystemInstance * * sInstances;
    // -> class NumberPool sNumberPool;
    // -> class NumberPool sNumberPool;
}
// Range: 0x80166DC0 -> 0x80167498
void FX::zFXSpawn::Update(class zFXSpawn * this /* r27 */, float dt /* f27 */) {
    // Local variables
    unsigned int stopped; // r6
    bool doStop; // r7

    {
        // Range: 0x80166F98 -> 0x80167218
        // Local variables
        unsigned int idx; // r28
    }
    {
        // Range: 0x80167258 -> 0x80167278
        // Local variables
        unsigned int idx; // r0
    }
    {
        // Range: 0x80167328 -> 0x80167458
        // Local variables
        float remaining; // f27
        bool needsReset; // r0
    }

    // References
    // -> class xMat4x3 g_I3;
}
// signature: FX::zFXSpawn::UpdateAttachedFX(unsigned int, bool)
// Range: 0x801674E0 -> 0x80167830
void FX::zFXSpawn::UpdateAttachedFX(class zFXSpawn * this /* r29 */, unsigned int inEventIdx /* r21 */) {
    {
        // Range: 0x801674F8 -> 0x8016781C
        // Local variables
        int spawnIdx; // r21
        bool worldOrient; // r31
        class xMat4x3 matTrans; // r1+0x98

        {
            // Range: 0x801675D0 -> 0x80167628
            // Local variables
            class SystemInstance & spawnPt; // r21
        }
        {
            // Range: 0x80167628 -> 0x80167680
            // Local variables
            class SystemInstance & spawnPt; // r21
        }
        {
            // Range: 0x80167680 -> 0x8016774C
            // Local variables
            class xLightData * lObj; // r30

            {
                // Range: 0x8016768C -> 0x80167748
                // Local variables
                class xVec3 pos; // r1+0x8
                class xMat4x3 transform; // r1+0x58
            }
        }
        {
            // Range: 0x8016774C -> 0x80167778
            // Local variables
            class xMat4x3 emitLoc; // r1+0x18
        }
        {
            // Range: 0x80167778 -> 0x801677BC
            // Local variables
            class SystemInstance & spawnPt; // r21
        }
    }

    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x80167830 -> 0x80167C08
void FX::zFXSpawn::StartFX(class zFXSpawn * this /* r27 */, unsigned int inEventIdx /* r28 */) {
    // Local variables
    class ScriptResource & res; // r26
    class zSoundAsset & soundAsset; // r29
    class FMOD_VECTOR * spawnPos; // r30
    class xVec3 tmpPos; // r1+0x14
    int spawnIdx; // r25

    {
        // Range: 0x8016785C -> 0x8016788C
        // Local variables
        class zSoundModule * sMod; // r0
    }
    {
        // Range: 0x80167A54 -> 0x80167B18
        // Local variables
        class xLightData * lObj; // r25
        class xVec3 lightPos; // r1+0x8
    }

    // References
    // -> class Scene * primaryScene;
    // -> class generator_data * sInstanceDataPool;
}
// signature: FX::zFXSpawn::IsFinished(unsigned int) const
// Range: 0x80167C10 -> 0x80167CEC
bool FX::zFXSpawn::IsFinished() const {
    // Local variables
    unsigned int typeIdx; // r5
}
// Range: 0x80167CF0 -> 0x80167D58
class Entity * Sext::FXSpawn::Create(class EntityHandleBase * handle /* r30 */, class FXSpawn * inAsset /* r31 */) {
}
