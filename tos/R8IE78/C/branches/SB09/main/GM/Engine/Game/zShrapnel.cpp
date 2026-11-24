/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zShrapnel.cpp
*/
int sNumActiveFrags; // size: 0x4, address: 0x80757254
class zFrag * sFragPool; // size: 0x4, address: 0x80757258
class zFrag * sFirstFreeFrag; // size: 0x4, address: 0x8075725C
class zFrag * sFirstActiveFrag; // size: 0x4, address: 0x80757260
static float cFragThrottleCeiling; // size: 0x4, address: 0x8068E4FC
static int cFragThrottleThreshold; // size: 0x4, address: 0x80757264
class hkpEntity * entityBatch[64]; // size: 0x100, address: 0x80757268
int entityTotal; // size: 0x4, address: 0x80757368
// signature: FX::Shrapnel::Local::GetCollisionLayer(FX::Shrapnel::zFrag *)
// Range: 0x80168670 -> 0x801686AC
enum E_HAVOK_COLLIDE_FILTER_LAYER FX::Shrapnel::Local::GetCollisionLayer() {
}
// Range: 0x801686B0 -> 0x8016876C
bool FX::Shrapnel::zFrag_Throttler_Permission() {
    // Local variables
    float range; // f1
    float t; // f0
    float probability; // f31

    // References
    // -> static float cFragThrottleCeiling;
    // -> static int cFragThrottleThreshold;
    // -> int sNumActiveFrags;
}
// signature: FX::Shrapnel::zShrapnel_SceneInit(zScene *)
// Range: 0x80168770 -> 0x80168840
void FX::Shrapnel::zShrapnel_SceneInit() {
    // Local variables
    int i; // r7

    // References
    // -> int sNumActiveFrags;
    // -> class zFrag * sFirstFreeFrag;
    // -> class zFrag * sFragPool;
    // -> class zFrag * sFirstActiveFrag;
}
// signature: FX::Shrapnel::zFrag_Alloc(bool)
// Range: 0x80168840 -> 0x8016892C
class zFrag * FX::Shrapnel::zFrag_Alloc() {
    // References
    // -> class zFrag * sFirstActiveFrag;
    // -> class zFrag * sFirstFreeFrag;
    // -> int sNumActiveFrags;
    // -> static float cFragThrottleCeiling;
}
// Range: 0x80168930 -> 0x80168A1C
void FX::Shrapnel::zFrag_Free(class zFrag * frag /* r30 */) {
    // References
    // -> class zFrag * sFirstFreeFrag;
    // -> int sNumActiveFrags;
    // -> class zFrag * sFirstActiveFrag;
}
// Range: 0x80168A20 -> 0x80168A84
void FX::Shrapnel::Batch_Go() {
    // References
    // -> class hkpEntity * entityBatch[64];
    // -> int entityTotal;
}
// signature: FX::Shrapnel::Batch_AddToSimWorld(hkpRigidBody *)
// Range: 0x80168A90 -> 0x80168AC0
void FX::Shrapnel::Batch_AddToSimWorld() {
    // References
    // -> class hkpEntity * entityBatch[64];
    // -> int entityTotal;
}
// Range: 0x80168AC0 -> 0x80168B0C
void FX::Shrapnel::AddFragToWorld(class zFrag * frag /* r31 */) {
}
// Range: 0x80168B10 -> 0x80168C40
void FX::Shrapnel::zShrapnel_Update(float dt /* f30 */) {
    // Local variables
    class zFrag * curr; // r31
    class zFrag * next; // r30

    {
        // Range: 0x80168B18 -> 0x80168C14
        // Local variables
        bool intraFragCollisionEnable; // r0
    }

    // References
    // -> int entityTotal;
    // -> class zFrag * sFirstActiveFrag;
}
// Range: 0x80168C40 -> 0x80168C84
void FX::Shrapnel::zShrapnel_Reset() {
    // Local variables
    class zFrag * curr; // r3
    class zFrag * next; // r31

    // References
    // -> class zFrag * sFirstActiveFrag;
}
// signature: FX::Shrapnel::zShrapnel_DefaultInit(FX::zFXSpawn *, Sext::ShrapnelAssetDef *, const xMat4x3 &, World::ModelInstanceAsset *)
// Range: 0x80168C90 -> 0x80168D3C
void FX::Shrapnel::zShrapnel_DefaultInit(class zFXSpawn * owner /* r26 */, class ShrapnelAssetDef * shrap /* r27 */, class xMat4x3 & inStartLoc /* r28 */) {
    // Local variables
    class zFrag * frag; // r0
    int i; // r30

    {
        // Range: 0x80168CBC -> 0x80168D20
        // Local variables
        class zFragAsset * fasset; // r29
    }

    // References
    // -> int entityTotal;
}
// signature: FX::Shrapnel::zFragLoc_InitMat(Sext::ShrapnelAssetDef::zFragBoneRandomized *, xMat4x3 *, const xMat4x3 &)
// Range: 0x80168D40 -> 0x80168F40
void FX::Shrapnel::zFragLoc_InitMat(class zFragBoneRandomized * loc /* r28 */, class xMat4x3 * mat /* r27 */) {
    // Local variables
    class xMat4x3 normalizedMat; // r1+0x18
    class xVec3 offset; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// signature: FX::Shrapnel::zFrag_DefaultInit(FX::Shrapnel::zFrag *, Sext::ShrapnelAssetDef::zFragAsset *, unsigned long long, const xMat4x3 &)
// Range: 0x80168F40 -> 0x80169960
bool FX::Shrapnel::zFrag_DefaultInit(class zFrag * frag /* r28 */, class zFragAsset * fasset /* r29 */, class xMat4x3 & inStartLoc /* r30 */) {
    // Local variables
    class Projectile * passet; // r0
    class UIDModelReference * MIAsset; // r5
    class hkpShape * pNewShape; // r25
    class hkpShape * scaled_shape; // r25
    class hkpPropertyValue val; // r1+0x30

    {
        // Range: 0x801698A8 -> 0x80169918
        // Local variables
        class zFXSpawn * spawnPt; // r25
        class zFXSpawn * script; // r24
    }

    // References
    // -> class CHavokShapeBuilder * s_instance;
    // -> class xOGModelUpdater g_modelUpdateNone;
}
// Range: 0x801699C0 -> 0x80169A0C
void FX::Shrapnel::zFrag_DeleteProjectile(class zFrag * frag /* r31 */) {
}
// signature: FX::Shrapnel::zFragUpdate(FX::Shrapnel::zFrag *, float)
// Range: 0x80169A10 -> 0x80169B1C
void FX::Shrapnel::zFragUpdate(class zFrag * frag /* r31 */) {
    // Local variables
    class zFragProjectile * proj; // r0
    class hkTransform xform; // r1+0x10
}
// Range: 0x80169B20 -> 0x80169BCC
float FX::Shrapnel::zShrapnel_GetLifetime(unsigned long long inAssetID /* r27:r28 */) {
    // Local variables
    class ShrapnelAssetDef * asset; // r0
    unsigned int longest; // r29
    unsigned int numFrags; // r28

    {
        // Range: 0x80169B58 -> 0x80169B98
        // Local variables
        unsigned int idx; // r27

        {
            // Range: 0x80169B58 -> 0x80169B98
            // Local variables
            unsigned int endTime; // r3
        }
    }
}
// Range: 0x80169BD0 -> 0x80169C38
void * FX::Shrapnel::SystemInstance::SystemInstance(class SystemInstance * this /* r29 */, unsigned long long inAssetID /* r31:r30 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// signature: FX::Shrapnel::SystemInstance::Launch(FX::zFXSpawn *)
// Range: 0x80169C40 -> 0x80169C58
void FX::Shrapnel::SystemInstance::Launch(class SystemInstance * this /* r5 */) {
}
