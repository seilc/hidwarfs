/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zLensFlare.cpp
*/
class _OGLensFlareSchema _OGLensFlareschema; // size: 0x18, address: 0x8076E358
class SchemaRegistrator _OGLensFlareschemaReg; // size: 0x8, address: 0x8076E370
class _OGLensFlareSpawnPtSchema _OGLensFlareSpawnPtschema; // size: 0x18, address: 0x8076E378
class SchemaRegistrator _OGLensFlareSpawnPtschemaReg; // size: 0x8, address: 0x8076E390
unsigned int numLensFlareRayCasts; // size: 0x4, address: 0x8076E398
float scaling; // size: 0x4, address: 0x806FB4B0
float scalingSqrt; // size: 0x4, address: 0x806FB4B4
float squarePixelLimit; // size: 0x4, address: 0x806FB4B8
float pixelArea; // size: 0x4, address: 0x8076E39C
float unscaledPixelArea; // size: 0x4, address: 0x8076E3A0
static int typeIndex; // size: 0x4, address: 0x8076E3A4
static int lastIdx; // size: 0x4, address: 0x8076E3AC
// Range: 0x800E7930 -> 0x800E7940
void World::_OGLensFlareEntity::Deactivate() {
}
// Range: 0x800E7940 -> 0x800E7990
void World::_OGLensFlareEntity::Destroy(class _OGLensFlareEntity * this /* r31 */) {
}
// signature: World::_OGLensFlareSchema::Fix(World::Asset *, long, int)
// Range: 0x800E79F0 -> 0x800E79F8
void World::_OGLensFlareSchema::Fix() {
}
// signature: World::_OGLensFlareSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E7A00 -> 0x800E7A4C
class EntityStub * World::_OGLensFlareSchema::CreateStub(class _OGLensFlareSchema * this /* r31 */) {
}
// signature: World::_OGLensFlareSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800E7A50 -> 0x800E7A68
void World::_OGLensFlareSchema::DestroyStub() {
}
// signature: World::_OGLensFlareSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E7A70 -> 0x800E7AD4
class Entity * World::_OGLensFlareSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World18_OGLensFlareEntity;
}
// Range: 0x800E7B20 -> 0x800E7B30
void World::_OGLensFlareSpawnPtEntity::Deactivate() {
}
// Range: 0x800E7B30 -> 0x800E7B80
void World::_OGLensFlareSpawnPtEntity::Destroy(class _OGLensFlareSpawnPtEntity * this /* r31 */) {
}
// signature: World::_OGLensFlareSpawnPtSchema::Fix(World::Asset *, long, int)
// Range: 0x800E7BE0 -> 0x800E7BE8
void World::_OGLensFlareSpawnPtSchema::Fix() {
}
// signature: World::_OGLensFlareSpawnPtSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E7BF0 -> 0x800E7C3C
class EntityStub * World::_OGLensFlareSpawnPtSchema::CreateStub(class _OGLensFlareSpawnPtSchema * this /* r31 */) {
}
// signature: World::_OGLensFlareSpawnPtSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800E7C40 -> 0x800E7C58
void World::_OGLensFlareSpawnPtSchema::DestroyStub() {
}
// signature: World::_OGLensFlareSpawnPtSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800E7C60 -> 0x800E7CC4
class Entity * World::_OGLensFlareSpawnPtSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World25_OGLensFlareSpawnPtEntity;
}
// signature: zLensFlare::Init(void *, void *)
// Range: 0x800E7D10 -> 0x800E7D28
void zLensFlare::Init() {
    // References
    // -> struct {} __vt__10zLensFlare;
}
// Range: 0x800E7D30 -> 0x800E7EDC
void zLensFlare::Init(class zLensFlare * this /* r26 */, class LensFlare * asset /* r27 */) {
    // Local variables
    class zModuleGradientCurve * gradMod; // r29

    {
        // Range: 0x800E7DB0 -> 0x800E7EAC
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x800E7DB0 -> 0x800E7EAC
            // Local variables
            class Goodie * goodie; // r0
        }
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlist;
}
// signature: zLensFlare::DrawLensFlare(int, const xVec2 &, float)
// Range: 0x800E7EE0 -> 0x800E7EE4
void zLensFlare::DrawLensFlare() {
    {
        // Range: 0x800E7EE0 -> 0x800E7EE0
        // Local variables
        int i; // r0

        {
            // Range: 0x800E7EE0 -> 0x800E7EE0
            // Local variables
            class Renderable3D * rend; // r0
            float size; // f0
            float rot; // f0
            unsigned int color; // r0
            float length; // f0
            float radius; // f0
            bool quarterTexture; // r0
            class sSpot * spot; // r0

            {
                // Range: 0x800E7EE0 -> 0x800E7EE0
                // Local variables
                float heightOff; // f0
                float widthOff; // f0

                {
                    // Range: 0x800E7EE0 -> 0x800E7EE0
                    // Local variables
                    int j; // r0
                }
            }
        }
    }
}
// signature: zLensFlare::GetPixelArea(int, const xVec2 &)
// Range: 0x800E8070 -> 0x800E8074
void zLensFlare::GetPixelArea() {
}
// signature: zLensFlareSpawnPt::Init(void *, void *)
// Range: 0x800E8080 -> 0x800E8098
void zLensFlareSpawnPt::Init() {
    // References
    // -> struct {} __vt__17zLensFlareSpawnPt;
}
// Range: 0x800E80A0 -> 0x800E83D8
void zLensFlareSpawnPt::Init(class zLensFlareSpawnPt * this /* r30 */, class LensFlareSpawnPt * asset /* r31 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x18
    float deltaAng; // f30
    float ang; // f31
    class zModuleGradientCurve * gradMod; // r3

    {
        // Range: 0x800E816C -> 0x800E81D0
        // Local variables
        int i; // r27

        {
            // Range: 0x800E816C -> 0x800E81D0
            // Local variables
            class xVec3 pos; // r1+0xC
        }
    }
    {
        // Range: 0x800E821C -> 0x800E8224
        // Local variables
        int i; // r27

        {
            // Range: 0x800E8224 -> 0x800E8224
            // Local variables
            int v; // r5
        }
    }

    // References
    // -> static class st_XORDEREDARRAY g_modlist;
}
// signature: zLensFlareSpawnPt::UpdateAll(float)
// Range: 0x800E83E0 -> 0x800E8634
void zLensFlareSpawnPt::UpdateAll() {
    // Local variables
    class zScene * scene; // r6
    int spawnPtCount; // r4
    class zLensFlareSpawnPt * start; // r28
    class zLensFlareSpawnPt * startIt; // r27
    class zLensFlareSpawnPt * it; // r26
    class zLensFlareSpawnPt * end; // r25
    float targetScaling; // f0
    bool doRayTest; // r24

    {
        // Range: 0x800E8490 -> 0x800E8500
        // Local variables
        int i; // r24
    }

    // References
    // -> float scalingSqrt;
    // -> float scaling;
    // -> float squarePixelLimit;
    // -> float unscaledPixelArea;
    // -> float pixelArea;
    // -> static int lastIdx;
    // -> unsigned int numLensFlareRayCasts;
    // -> class zGlobals globals;
    // -> static int typeIndex;
}
// Range: 0x800E8640 -> 0x800E8AEC
bool zLensFlareSpawnPt::ComputeLensFlare(class zLensFlareSpawnPt * this /* r20 */, int viewportIdx /* r21 */, bool doRayTests /* r22 */) {
    // Local variables
    float alphaMod; // f31
    class zCam * cam; // r0
    class xVec3 * camPos; // r0
    class xVec3 dir; // r1+0x80
    class xVec3 * camDir; // r0
    float dot; // f0
    float pointAlpha; // f30

    {
        // Range: 0x800E8748 -> 0x800E8824
        // Local variables
        float t; // f0
        float distToCenter; // f0
    }
    {
        // Range: 0x800E8830 -> 0x800E8A3C
        // Local variables
        int p; // r23

        {
            // Range: 0x800E8830 -> 0x800E8A3C
            // Local variables
            class xVec2 screenPos; // r1+0x18
            class xVec3 lightPos; // r1+0x74
        }
    }
    {
        // Range: 0x800E8A50 -> 0x800E8A9C
        // Local variables
        class xVec3 lightPos; // r1+0x68
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> unsigned int numLensFlareRayCasts;
}
