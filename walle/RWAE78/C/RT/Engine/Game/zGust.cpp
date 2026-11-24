/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zGust.cpp
*/
class _OGGustSchema _OGGustschema; // size: 0x18, address: 0x8076E0D8
class SchemaRegistrator _OGGustschemaReg; // size: 0x8, address: 0x8076E0F0
static int sGustTypeIndex; // size: 0x4, address: 0x806FB350
// Range: 0x800DE9C0 -> 0x800DE9D0
void World::_OGGustEntity::Deactivate() {
}
// Range: 0x800DE9D0 -> 0x800DEA20
void World::_OGGustEntity::Destroy(class _OGGustEntity * this /* r31 */) {
}
// signature: World::_OGGustSchema::Fix(World::Asset *, long, int)
// Range: 0x800DEA80 -> 0x800DEA88
void World::_OGGustSchema::Fix() {
}
// signature: World::_OGGustSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800DEA90 -> 0x800DEADC
class EntityStub * World::_OGGustSchema::CreateStub(class _OGGustSchema * this /* r31 */) {
}
// signature: World::_OGGustSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800DEAE0 -> 0x800DEAF8
void World::_OGGustSchema::DestroyStub() {
}
// signature: World::_OGGustSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800DEB00 -> 0x800DEB64
class Entity * World::_OGGustSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World13_OGGustEntity;
}
// signature: @unnamed@WAD02_cpp@::GustEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800DEBB0 -> 0x800DEBCC
static void @unnamed@WAD02_cpp@::GustEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800DEBD0 -> 0x800DEC20
void zGust::Init(class zGust * this /* r30 */, class zGustAsset * asset /* r31 */) {
}
// Range: 0x800DEC20 -> 0x800DED94
void zGust::Setup(class zGust * this /* r31 */) {
    {
        // Range: 0x800DED10 -> 0x800DED3C
        // Local variables
        unsigned int i; // r28
    }
}
// Range: 0x800DEDA0 -> 0x800DEEA4
void zGust::Reset(class zGust * this /* r31 */) {
}
// signature: zGust::Update(float)
// Range: 0x800DEEB0 -> 0x800DF4DC
void zGust::Update(class zGust * this /* r31 */) {
    {
        // Range: 0x800DEEFC -> 0x800DF4B4
        {
            // Range: 0x800DF2C0 -> 0x800DF4B4
            {
                // Range: 0x800DF2E8 -> 0x800DF474
                // Local variables
                class xVec3 randPos; // r1+0x8
            }
        }
    }

    // References
    // -> static class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
}
// Range: 0x800DF4E0 -> 0x800DF4E4
void zGust::Render() {
}
// Range: 0x800DF4F0 -> 0x800DF54C
void zGust::SceneExit(class zGust * this /* r31 */) {
}
// signature: zGust::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800DF550 -> 0x800DF5D0
void zGust::HandleEvent() {
}
// Range: 0x800DF5D0 -> 0x800DFBEC
void zGust::ConfigureVoxels(class zGust * this /* r15 */) {
    // Local variables
    class zPolygonalVolume * volume; // r25
    class xVec3 lower; // r1+0x20
    class xVec3 upper; // r1+0x14
    float dx; // f22
    float dy; // f21
    float dz; // f20
    float minX; // f0
    float minY; // f0
    float minZ; // f0
    float maxDimension; // f0
    float normalizedDX; // f19
    float normalizedDY; // f18
    float normalizedDZ; // f17
    float dimensionOfCubicVoxel; // f0
    bool breakflag; // r24
    class xVec3 center; // r1+0x8

    {
        // Range: 0x800DF7D0 -> 0x800DFB50
        // Local variables
        int i; // r23

        {
            // Range: 0x800DF7D0 -> 0x800DFB50
            // Local variables
            int numZVoxels; // r19
            int numYVoxels; // r20
            int numXVoxels; // r21
            unsigned int count; // r22

            {
                // Range: 0x800DF7D4 -> 0x800DF9FC
                // Local variables
                int j; // r18

                {
                    // Range: 0x800DF7D4 -> 0x800DF9F0
                    // Local variables
                    int k; // r17

                    {
                        // Range: 0x800DF7D4 -> 0x800DF9E4
                        // Local variables
                        int l; // r16
                    }
                }
            }
            {
                // Range: 0x800DFA30 -> 0x800DFB40
                // Local variables
                int j; // r26

                {
                    // Range: 0x800DFA30 -> 0x800DFB34
                    // Local variables
                    int k; // r27

                    {
                        // Range: 0x800DFA30 -> 0x800DFB28
                        // Local variables
                        int l; // r28
                    }
                }
            }
        }
    }
}
// signature: zGustInit(void *, void *)
// Range: 0x800DFBF0 -> 0x800DFC14
void zGustInit() {
    // References
    // -> struct {} __vt__5zGust;
}
// Range: 0x800DFC20 -> 0x800DFCC8
void zGustUpdate(float dt /* f31 */) {
    // Local variables
    class zGust * current; // r31
    class zGust * last; // r30

    // References
    // -> class zGlobals globals;
    // -> static int sGustTypeIndex;
}
// Range: 0x800DFCD0 -> 0x800DFE14
void zGustAccumulate(class xEnt * ent /* r28 */, class xVec3 * vec /* r29 */, float dt /* f31 */) {
    // Local variables
    class zGust * current; // r31
    class zGust * last; // r30

    {
        // Range: 0x800DFD44 -> 0x800DFDE0
        // Local variables
        class xVec3 gustVec; // r1+0x14
    }

    // References
    // -> static int sGustTypeIndex;
    // -> class zGlobals globals;
}
// Range: 0x800DFE20 -> 0x800DFE9C
void zGustSceneExit() {
    // Local variables
    int tidx; // r0
    class zGust * current; // r31
    class zGust * last; // r30

    // References
    // -> class zGlobals globals;
}
