/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zShrapnel.cpp
*/
bool shrapnelHackQuickFade; // size: 0x1, address: 0x80828939
float shrapnelHackQuickFadeTime; // size: 0x4, address: 0x8082893C
bool shrapnelHackNoCollide; // size: 0x1, address: 0x80828940
int sNumActiveFrags; // size: 0x4, address: 0x80828944
class zFrag * sFragPool; // size: 0x4, address: 0x80828948
class zFrag * sFirstFreeFrag; // size: 0x4, address: 0x8082894C
class zFrag * sFirstActiveFrag; // size: 0x4, address: 0x80828950
unsigned int s_fragPhysicsSoundCounter; // size: 0x4, address: 0x80828954
static float cFragThrottleCeiling; // size: 0x4, address: 0x80783020
static int cFragThrottleThreshold; // size: 0x4, address: 0x80828958
class hkpEntity * entityBatch[64]; // size: 0x100, address: 0x80828960
int entityTotal; // size: 0x4, address: 0x80828A60
// signature: FX::Shrapnel::zShrapnel_SceneInit(zScene *)
// Range: 0x8024D120 -> 0x8024D590
void FX::Shrapnel::zShrapnel_SceneInit() {
    // Local variables
    int i; // r9

    // References
    // -> bool shrapnelHackNoCollide;
    // -> bool shrapnelHackQuickFade;
    // -> int sNumActiveFrags;
    // -> class zFrag * sFirstFreeFrag;
    // -> class zFrag * sFragPool;
    // -> class zFrag * sFirstActiveFrag;
}
// signature: FX::Shrapnel::zFrag_Alloc(bool)
// Range: 0x8024D590 -> 0x8024D6F8
class zFrag * FX::Shrapnel::zFrag_Alloc() {
    // References
    // -> class zFrag * sFirstActiveFrag;
    // -> class zFrag * sFirstFreeFrag;
    // -> static int cFragThrottleThreshold;
    // -> int sNumActiveFrags;
    // -> static float cFragThrottleCeiling;
}
// Range: 0x8024D700 -> 0x8024D8A8
void FX::Shrapnel::zFrag_Free(class zFrag * frag /* r30 */) {
    // References
    // -> class zFrag * sFirstFreeFrag;
    // -> int sNumActiveFrags;
    // -> class zFrag * sFirstActiveFrag;
    // -> bool gSysForceExit;
    // -> unsigned int s_fragPhysicsSoundCounter;
    // -> bool gSoundReadyToExit;
}
// Range: 0x8024D8B0 -> 0x8024D96C
void FX::Shrapnel::AddFragToWorld(class zFrag * frag /* r29 */) {
    // References
    // -> class hkpEntity * entityBatch[64];
    // -> int entityTotal;
    // -> class Scene * primaryScene;
}
// Range: 0x8024D970 -> 0x8024DB44
void FX::Shrapnel::zShrapnel_Update(float dt /* f30 */) {
    // Local variables
    class zFrag * curr; // r26
    class zFrag * next; // r25

    {
        // Range: 0x8024D998 -> 0x8024DADC
        // Local variables
        enum E_HAVOK_COLLIDE_FILTER_LAYER collisLayer; // r24
    }

    // References
    // -> bool shrapnelHackNoCollide;
    // -> class Scene * primaryScene;
    // -> class hkpEntity * entityBatch[64];
    // -> class zFrag * sFirstActiveFrag;
    // -> int entityTotal;
}
// Range: 0x8024DB50 -> 0x8024DB94
void FX::Shrapnel::zShrapnel_Reset() {
    // Local variables
    class zFrag * curr; // r3
    class zFrag * next; // r31

    // References
    // -> class zFrag * sFirstActiveFrag;
}
// signature: FX::Shrapnel::zShrapnel_DefaultInit(FX::zFXSpawn *, Sext::ShrapnelAssetDef *, const xMat4x3 &, World::ModelInstanceAsset *)
// Range: 0x8024DBA0 -> 0x8024DCD4
void FX::Shrapnel::zShrapnel_DefaultInit(class zFXSpawn * owner /* r26 */, class ShrapnelAssetDef * shrap /* r27 */, class xMat4x3 & inStartLoc /* r28 */) {
    // Local variables
    class zFrag * frag; // r0
    int i; // r30

    {
        // Range: 0x8024DBCC -> 0x8024DC60
        // Local variables
        class zFragAsset * fasset; // r29
    }

    // References
    // -> class hkpEntity * entityBatch[64];
    // -> int entityTotal;
}
// signature: FX::Shrapnel::zFragLoc_InitMat(Sext::ShrapnelAssetDef::zFragBoneRandomized *, xMat4x3 *, const xMat4x3 &)
// Range: 0x8024DCE0 -> 0x8024E268
void FX::Shrapnel::zFragLoc_InitMat(class xMat4x3 * mat /* r31 */) {
    // Local variables
    class xMat4x3 normalizedMat; // r1+0x18
    class xVec3 offset; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// signature: FX::Shrapnel::zFragLoc_InitDir(Sext::ShrapnelAssetDef::zFragBone *, xVec3 *, const xMat4x3 &)
// Range: 0x8024E270 -> 0x8024E2D4
void FX::Shrapnel::zFragLoc_InitDir() {
}
// Range: 0x8024E670 -> 0x8024EC94
void FX::Shrapnel::zFrag_ProjectileSetupPath(class zFrag * frag /* r29 */, class Projectile * passet /* r30 */, class xMat4x3 & inStartLoc /* r31 */) {
    // Local variables
    class zFragProjectile * proj; // r0
    class xVec3 baseVel; // r1+0xB8
    float angVel; // f0
    class xVec3 angVelAxis; // r1+0x8C
    float vel2; // f0
    class xQuat quat; // r1+0x50
    class hkpRigidBody * & rigidBody; // r0

    {
        // Range: 0x8024E6B0 -> 0x8024E728
        // Local variables
        class xVec3 rotVals; // r1+0xC4
        class xMat3x3 rotMat; // r1+0xD0
    }
    {
        // Range: 0x8024E74C -> 0x8024E810
        // Local variables
        class xVec3 randVel; // r1+0x98
        class zFragBone randLoc; // r1+0xA8
    }
    {
        // Range: 0x8024E8CC -> 0x8024E964
        // Local variables
        class xVec3 back; // r1+0x80
        float len2; // f0
    }
    {
        // Range: 0x8024E98C -> 0x8024EA50
        // Local variables
        class xVec3 randAxis; // r1+0x60
        class zFragBone randLoc; // r1+0x70
    }
}
// signature: FX::Shrapnel::zFrag_DefaultInit(FX::Shrapnel::zFrag *, Sext::ShrapnelAssetDef::zFragAsset *, unsigned long long, const xMat4x3 &)
// Range: 0x8024E2E0 -> 0x8024E658
bool FX::Shrapnel::zFrag_DefaultInit(class zFrag * frag /* r28 */, class zFragAsset * fasset /* r29 */, class xMat4x3 & inStartLoc /* r30 */) {
    // Local variables
    class Projectile * passet; // r0
    class UIDModelReference * MIAsset; // r0
    class Model & model; // r25
    class hkpShape * pNewShape; // r25
    class hkpShape * scaled_shape; // r24
    class hkpPropertyValue val; // r1+0x28

    {
        // Range: 0x8024E3E0 -> 0x8024E400
        // Local variables
        int i; // r26

        {
            // Range: 0x8024E3E0 -> 0x8024E400
            // Local variables
            class Renderable3D * rend3D; // r0
            class Renderable * renderable; // r0
        }
    }
    {
        // Range: 0x8024E598 -> 0x8024E618
        // Local variables
        class zFXSpawn * spawnPt; // r25
        class zFXSpawn * script; // r24
    }

    // References
    // -> unsigned int s_fragPhysicsSoundCounter;
    // -> class xOGModelUpdater g_modelUpdateNone;
    // -> float shrapnelHackQuickFadeTime;
    // -> bool shrapnelHackQuickFade;
}
// signature: FX::Shrapnel::zFragUpdate(FX::Shrapnel::zFrag *, float)
// Range: 0x8024F9C0 -> 0x802508E0
void FX::Shrapnel::zFragUpdate(class zFrag * frag /* r27 */) {
    // Local variables
    class zFragProjectile * proj; // r0
    class hkTransform xform; // r1+0x90

    // References
    // -> class Renderable3DTransform g_identity;
}
// Range: 0x802508E0 -> 0x8025098C
float FX::Shrapnel::zShrapnel_GetLifetime(unsigned long long inAssetID /* r27:r28 */) {
    // Local variables
    class ShrapnelAssetDef * asset; // r0
    unsigned int longest; // r29
    unsigned int numFrags; // r28

    {
        // Range: 0x80250918 -> 0x8025094C
        // Local variables
        unsigned int idx; // r27

        {
            // Range: 0x80250918 -> 0x8025094C
            // Local variables
            unsigned int endTime; // r3
        }
    }
}
// Range: 0x80250990 -> 0x80250A88
void * FX::Shrapnel::SystemInstance::SystemInstance(class SystemInstance * this /* r29 */, unsigned long long inAssetID /* r31:r30 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// signature: FX::Shrapnel::SystemInstance::Launch(FX::zFXSpawn *)
// Range: 0x80250A90 -> 0x80250AA8
void FX::Shrapnel::SystemInstance::Launch(class SystemInstance * this /* r5 */) {
}
