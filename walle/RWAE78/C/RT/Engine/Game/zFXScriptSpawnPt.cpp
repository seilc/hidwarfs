/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zFXScriptSpawnPt.cpp
*/
class _OGFXScriptSpawnPtAssetSchema _OGFXScriptSpawnPtAssetschema; // size: 0x18, address: 0x8076E000
class SchemaRegistrator _OGFXScriptSpawnPtAssetschemaReg; // size: 0x8, address: 0x8076E018
// Range: 0x800D7F70 -> 0x800D7F80
void World::_OGFXScriptSpawnPtAssetEntity::Deactivate() {
}
// Range: 0x800D7F80 -> 0x800D7FD0
void World::_OGFXScriptSpawnPtAssetEntity::Destroy(class _OGFXScriptSpawnPtAssetEntity * this /* r31 */) {
}
// signature: World::_OGFXScriptSpawnPtAssetSchema::Fix(World::Asset *, long, int)
// Range: 0x800D8030 -> 0x800D8038
void World::_OGFXScriptSpawnPtAssetSchema::Fix() {
}
// signature: World::_OGFXScriptSpawnPtAssetSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800D8040 -> 0x800D808C
class EntityStub * World::_OGFXScriptSpawnPtAssetSchema::CreateStub(class _OGFXScriptSpawnPtAssetSchema * this /* r31 */) {
}
// signature: World::_OGFXScriptSpawnPtAssetSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800D8090 -> 0x800D80A8
void World::_OGFXScriptSpawnPtAssetSchema::DestroyStub() {
}
// signature: World::_OGFXScriptSpawnPtAssetSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800D80B0 -> 0x800D8114
class Entity * World::_OGFXScriptSpawnPtAssetSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World29_OGFXScriptSpawnPtAssetEntity;
}
// signature: FXScriptSpawnPtEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800D8160 -> 0x800D8170
static void FXScriptSpawnPtEventWrapper(class xBase * from /* r0 */) {
}
// signature: zFXScriptSpawnPt::zFXScriptSpawnPt(Sext::FXScriptSpawnPtAsset *)
// Range: 0x800D8170 -> 0x800D8418
void * zFXScriptSpawnPt::zFXScriptSpawnPt(class zFXScriptSpawnPt * this /* r30 */) {
    {
        // Range: 0x800D8220 -> 0x800D8260
        // Local variables
        class zFXScript * tempFxScript; // r0
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> struct {} __vt__16zFXScriptSpawnPt;
}
// signature: zFXScriptSpawnPt::PoolInit(zFXScript *, bool)
// Range: 0x800D8420 -> 0x800D8538
void zFXScriptSpawnPt::PoolInit(class zFXScriptSpawnPt * this /* r30 */, class zFXScript * inFxScript /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x800D8540 -> 0x800D85B0
void zFXScriptSpawnPt::SetupAll() {
    // Local variables
    int i; // r30
    int cnt; // r0
    unsigned int size; // r1+0x8
    unsigned long long wuid; // r1+0x10

    {
        // Range: 0x800D8560 -> 0x800D858C
        // Local variables
        class zFXScriptSpawnPt * sspt; // r0
    }
}
// Range: 0x800D85B0 -> 0x800D85C0
void zFXScriptSpawnPt::InitDriverMat() {
}
// signature: zFXScriptSpawnPt::ScaleParticlesEmitRate(float)
// Range: 0x800D85C0 -> 0x800D86D8
void zFXScriptSpawnPt::ScaleParticlesEmitRate() {
    {
        // Range: 0x800D85C4 -> 0x800D85CC
        // Local variables
        int i; // r6
    }
}
// signature: zFXScriptSpawnPt::ScaleParticlesLifeTime(float)
// Range: 0x800D86E0 -> 0x800D87F8
void zFXScriptSpawnPt::ScaleParticlesLifeTime() {
    {
        // Range: 0x800D86E4 -> 0x800D86EC
        // Local variables
        int i; // r6
    }
}
// Range: 0x800D8800 -> 0x800D8908
void zFXScriptSpawnPt::RemoveObjects() {
    {
        // Range: 0x800D8810 -> 0x800D8818
        // Local variables
        int i; // r4
    }
}
// signature: zFXScriptSpawnPt::RemoveParticles(float)
// Range: 0x800D8910 -> 0x800D8964
void zFXScriptSpawnPt::RemoveParticles() {
    // Local variables
    int count; // r4

    {
        // Range: 0x800D8924 -> 0x800D8960
        // Local variables
        int i; // r0
    }
}
// Range: 0x800D8970 -> 0x800D96CC
void zFXScriptSpawnPt::Setup(class zFXScriptSpawnPt * this /* r21 */) {
    // Local variables
    int i; // r22

    {
        // Range: 0x800D8E9C -> 0x800D9600
        // Local variables
        class xMat4x3 matTrans; // r1+0x8

        {
            // Range: 0x800D8E9C -> 0x800D8E9C
            // Local variables
            class xEnt * ent; // r0
        }
        {
            // Range: 0x800D8E9C -> 0x800D8EA4
            // Local variables
            class zParticleGeneratorSpawnPt * spawnPt; // r31
        }
        {
            // Range: 0x800D8EA4 -> 0x800D92F4
            // Local variables
            class zObjectGeneratorSpawnPt * spawnPt; // r31
        }
        {
            // Range: 0x800D93BC -> 0x800D9478
            // Local variables
            class zDecalEmitter * spawnPt; // r15
        }
        {
            // Range: 0x800D9478 -> 0x800D9534
            // Local variables
            class zRibbonEmitter * spawnPt; // r15
        }
    }

    // References
    // -> struct {} __vt__23zObjectGeneratorSpawnPt;
    // -> struct {} __vt__25zParticleGeneratorSpawnPt;
}
// Range: 0x800D96D0 -> 0x800D9878
void zFXScriptSpawnPt::Cleanup(class zFXScriptSpawnPt * this /* r28 */) {
    {
        // Range: 0x800D9704 -> 0x800D970C
        // Local variables
        int i; // r29
    }
    {
        // Range: 0x800D97A8 -> 0x800D97A8
        // Local variables
        int i; // r29
    }
}
// signature: zFXScriptSpawnPt::Init(void *, void *)
// Range: 0x800D9880 -> 0x800D9890
void zFXScriptSpawnPt::Init() {
}
// signature: zFXScriptSpawnPt::UpdateProxy(xBase *, xScene *, float)
// Range: 0x800D9890 -> 0x800D9894
void zFXScriptSpawnPt::UpdateProxy() {
}
// signature: zFXScriptSpawnPt::Update(float)
// Range: 0x800D98A0 -> 0x800DA18C
void zFXScriptSpawnPt::Update(class zFXScriptSpawnPt * this /* r31 */) {
    // Local variables
    int i; // r0
    int stopped; // r9
}
// Range: 0x800DA190 -> 0x800DA234
void zFXScriptSpawnPt::Run(class zFXScriptSpawnPt * this /* r31 */) {
}
// Range: 0x800DA240 -> 0x800DA42C
void zFXScriptSpawnPt::Stop(class zFXScriptSpawnPt * this /* r28 */) {
}
// Range: 0x800DA430 -> 0x800DA694
void zFXScriptSpawnPt::AdjustMat(class zFXScriptSpawnPt * this /* r30 */, class xVec3 * offset /* r31 */) {
    // Local variables
    class xMat4x3 final; // r1+0x8
}
// Range: 0x800DA6A0 -> 0x800DA9CC
void zFXScriptSpawnPt::ResetMat(class zFXScriptSpawnPt * this /* r30 */) {
    {
        // Range: 0x800DA6FC -> 0x800DA73C
        // Local variables
        class xEnt * ent; // r0
    }
    {
        // Range: 0x800DA900 -> 0x800DA940
        // Local variables
        class xMat4x3 temp; // r1+0x48
    }
}
// Range: 0x800DA9D0 -> 0x800DAC94
void zFXScriptSpawnPt::StartFX(class zFXScriptSpawnPt * this /* r29 */, int fxIdx /* r27 */) {
    // Local variables
    class zSoundAsset * sasset; // r31
    class FMOD_VECTOR * spawnPos; // r30

    {
        // Range: 0x800DAA00 -> 0x800DAA30
        // Local variables
        class zSoundModule * sMod; // r0
    }
}
// signature: zFXScriptSpawnPt::StopFX(int)
// Range: 0x800DACA0 -> 0x800DADD4
void zFXScriptSpawnPt::StopFX(class zFXScriptSpawnPt * this /* r30 */) {
}
// Range: 0x800DADE0 -> 0x800DB014
void zFXScriptSpawnPt::MatrixUpdate(class zFXScriptSpawnPt * this /* r29 */, class xMat4x3 * matTrans /* r30 */, class xBaseTransform * spawnPt /* r31 */) {
    {
        // Range: 0x800DAE6C -> 0x800DAF24
        // Local variables
        class xMat4x3 empty; // r1+0x48
    }
    {
        // Range: 0x800DAF2C -> 0x800DAF68
        // Local variables
        class xMat4x3 bone; // r1+0x8
    }

    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x800DB020 -> 0x800DB940
void zFXScriptSpawnPt::UpdateAttachedFX(class zFXScriptSpawnPt * this /* r29 */, int fxIdx /* r30 */) {
    {
        // Range: 0x800DB07C -> 0x800DB2A4
        // Local variables
        class xEnt * ent; // r0
    }
    {
        // Range: 0x800DB2A4 -> 0x800DB8E0
        // Local variables
        class xMat4x3 matTrans; // r1+0x150

        {
            // Range: 0x800DB360 -> 0x800DB3AC
            // Local variables
            class zParticleGeneratorSpawnPt * spawnPt; // r27
        }
        {
            // Range: 0x800DB3AC -> 0x800DB3F8
            // Local variables
            class zObjectGeneratorSpawnPt * spawnPt; // r27
        }
        {
            // Range: 0x800DB3F8 -> 0x800DB420
            // Local variables
            class zShrapnelSpawnPt * spawnPt; // r27
        }
        {
            // Range: 0x800DB420 -> 0x800DB454
            // Local variables
            class zRibbonEmitter * spawnPt; // r27
        }
        {
            // Range: 0x800DB454 -> 0x800DB8B0
            // Local variables
            class zDecalEmitter * spawnPt; // r30

            {
                // Range: 0x800DB4DC -> 0x800DB7EC
                // Local variables
                class xMat4x3 bone; // r1+0x110

                {
                    // Range: 0x800DB568 -> 0x800DB7DC
                    // Local variables
                    class xVec3 toe; // r1+0x8
                    class xVec3 ankle; // r1+0x14
                    class xVec3 * plane; // r0
                    class xMat3x3 proj; // r1+0xA0
                    class xMat4x3 aux; // r1+0xD0
                }
            }
            {
                // Range: 0x800DB7EC -> 0x800DB8A0
                // Local variables
                class xMat4x3 driverMat; // r1+0x60
            }
        }
        {
            // Range: 0x800DB8B0 -> 0x800DB8E0
            // Local variables
            class zDynaLightSpawnPt * spawnPt; // r27
        }
    }

    // References
    // -> class xMat4x3 g_I3;
}
// signature: zFXScriptSpawnPt::UpdateFX(int)
// Range: 0x800DB940 -> 0x800DBECC
void zFXScriptSpawnPt::UpdateFX(class zFXScriptSpawnPt * this /* r30 */) {
    // Local variables
    class xMat4x3 matTrans; // r1+0x8
}
// signature: zFXScriptSpawnPt::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800DBED0 -> 0x800DC44C
void zFXScriptSpawnPt::HandleEvent(class zFXScriptSpawnPt * this /* r28 */) {
}
