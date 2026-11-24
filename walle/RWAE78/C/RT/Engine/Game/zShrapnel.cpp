/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zShrapnel.cpp
*/
class _OGShrapnelAssetDefSchema _OGShrapnelAssetDefschema; // size: 0x18, address: 0x8079BE70
class SchemaRegistrator _OGShrapnelAssetDefschemaReg; // size: 0x8, address: 0x8079BE88
static int sNumActiveFrags; // size: 0x4, address: 0x8079BE90
static class zFrag sFragPool[256]; // size: 0x16800, address: 0x8079BEA0
static class zFrag * sFirstFreeFrag; // size: 0x4, address: 0x807B26A0
static class zFrag * sFirstActiveFrag; // size: 0x4, address: 0x807B26A4
static unsigned int s_fragPhysicsSoundCounter; // size: 0x4, address: 0x807B26A8
static float cFragThrottleCeiling; // size: 0x4, address: 0x806D0F90
static int cFragThrottleThreshold; // size: 0x4, address: 0x807B26AC
// Range: 0x801BBE80 -> 0x801BBE90
void World::_OGShrapnelAssetDefEntity::Deactivate() {
}
// Range: 0x801BBE90 -> 0x801BBEE0
void World::_OGShrapnelAssetDefEntity::Destroy(class _OGShrapnelAssetDefEntity * this /* r31 */) {
}
// signature: World::_OGShrapnelAssetDefSchema::Fix(World::Asset *, long, int)
// Range: 0x801BBF40 -> 0x801BBF48
void World::_OGShrapnelAssetDefSchema::Fix() {
}
// signature: World::_OGShrapnelAssetDefSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801BBF50 -> 0x801BBF9C
class EntityStub * World::_OGShrapnelAssetDefSchema::CreateStub(class _OGShrapnelAssetDefSchema * this /* r31 */) {
}
// signature: World::_OGShrapnelAssetDefSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801BBFA0 -> 0x801BBFB8
void World::_OGShrapnelAssetDefSchema::DestroyStub() {
}
// signature: World::_OGShrapnelAssetDefSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801BBFC0 -> 0x801BC024
class Entity * World::_OGShrapnelAssetDefSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World25_OGShrapnelAssetDefEntity;
}
// signature: zFrag_Alloc(bool)
// Range: 0x801BC070 -> 0x801BC1E0
class zFrag * zFrag_Alloc() {
    // References
    // -> static class zFrag * sFirstActiveFrag;
    // -> static class zFrag * sFirstFreeFrag;
    // -> static int cFragThrottleThreshold;
    // -> static float cFragThrottleCeiling;
    // -> static int sNumActiveFrags;
}
// Range: 0x801BC1E0 -> 0x801BC360
void zFrag_Free(class zFrag * frag /* r31 */) {
    // References
    // -> static class zFrag * sFirstFreeFrag;
    // -> static int sNumActiveFrags;
    // -> static class zFrag * sFirstActiveFrag;
    // -> bool gSysForceExit;
    // -> static unsigned int s_fragPhysicsSoundCounter;
}
// Range: 0x801BC380 -> 0x801BC384
void zShrapnel_GameInit() {
}
// Range: 0x801BC390 -> 0x801BC3D4
void zShrapnel_Reset() {
    // Local variables
    class zFrag * curr; // r3
    class zFrag * next; // r31

    // References
    // -> static class zFrag * sFirstActiveFrag;
}
// signature: zShrapnel_DefaultInit(zFXScriptSpawnPt *, Sext::ShrapnelAssetDef *, xModelInstance *, World::ModelInstanceAsset *)
// Range: 0x801BC3E0 -> 0x801BC574
void zShrapnel_DefaultInit(class zFXScriptSpawnPt * owner /* r24 */, class ShrapnelAssetDef * shrap /* r25 */, class xModelInstance * parent /* r26 */) {
    // Local variables
    class zFrag * frag; // r28
    int i; // r27

    {
        // Range: 0x801BC3FC -> 0x801BC540
        // Local variables
        class zFragAsset * fasset; // r29

        {
            // Range: 0x801BC3FC -> 0x801BC540
            // Local variables
            class zFXScriptSpawnPt * sPt; // r21
            class zFXScriptSpawnPt * spawnPt; // r0
        }
    }

    // References
    // -> static class IDBasePair * scobj_idbps;
    // -> static int scobj_size;
}
// Range: 0x801BC580 -> 0x801BCB68
void zFragLoc_InitMat(class zFragBoneRandomized * loc /* r28 */, class xMat4x3 * mat /* r29 */, class xModelInstance * parent /* r30 */) {
    // Local variables
    class xVec3 offset; // r1+0x8
    int index; // r24

    {
        // Range: 0x801BC5E8 -> 0x801BC960
        // Local variables
        class xMat4x3 normalizedMat; // r1+0x18
    }

    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
    // -> class xVec3 m_UnitAxisX;
}
// Range: 0x801BCF30 -> 0x801BDE48
void zFrag_ProjectileSetupPath(class zFrag * frag /* r30 */, class Projectile * passet /* r31 */) {
    // Local variables
    class zFragProjectile * proj; // r0
    class xVec3 baseVel; // r1+0xC8
    float angVel; // f31
    class xVec3 angVelAxis; // r1+0x9C
    float vel2; // f0
    class xQuat quat; // r1+0x60
    class hkpRigidBody * * rigidBody; // r0

    {
        // Range: 0x801BCF70 -> 0x801BCFE8
        // Local variables
        class xVec3 * driverPos; // r0
    }
    {
        // Range: 0x801BD000 -> 0x801BD058
        // Local variables
        class xVec3 rotVals; // r1+0xD4
        class xMat3x3 rotMat; // r1+0xE0
    }
    {
        // Range: 0x801BD0EC -> 0x801BD28C
        // Local variables
        class xVec3 randVel; // r1+0xA8
        class zFragBone randLoc; // r1+0xB8
    }
    {
        // Range: 0x801BD3A0 -> 0x801BD4D4
        // Local variables
        class xVec3 back; // r1+0x90
        float len2; // f0
    }
    {
        // Range: 0x801BD4E8 -> 0x801BD6BC
        // Local variables
        class xVec3 randAxis; // r1+0x70
        class zFragBone randLoc; // r1+0x80
    }

    // References
    // -> float hkUFloat8_intToReal[256];
}
// signature: zFrag_DefaultInit(zFrag *, Sext::ShrapnelAssetDef::zFragAsset *, unsigned long long)
// Range: 0x801BCB70 -> 0x801BCF18
bool zFrag_DefaultInit(class zFrag * frag /* r30 */, class zFragAsset * fasset /* r31 */) {
    // Local variables
    class Projectile * passet; // r0
    class UIDModelReference * MIAsset; // r0
    class hkpShape * pNewShape; // r27
    class hkpShape * scaled_shape; // r26
    class hkpPropertyValue val; // r1+0x28
    class ModelPrototypeEntity * proto; // r0
    float boundRadius; // f2

    {
        // Range: 0x801BCDD4 -> 0x801BCE30
        // Local variables
        class CollisionMeshBlobEntity * collMesh; // r0

        {
            // Range: 0x801BCDEC -> 0x801BCE30
            // Local variables
            class dxTriMeshData * triMeshData; // r0
        }
    }

    // References
    // -> static unsigned int s_fragPhysicsSoundCounter;
}
// signature: zFragUpdate(zFrag *, float)
// Range: 0x801BDE50 -> 0x801BE014
void zFragUpdate(class zFrag * frag /* r30 */) {
    // Local variables
    class zFragProjectile * proj; // r0
    class hkTransform xform; // r1+0x10
}
