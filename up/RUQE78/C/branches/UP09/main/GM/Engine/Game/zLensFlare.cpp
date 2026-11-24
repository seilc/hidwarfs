/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zLensFlare.cpp
*/
unsigned int numLensFlareRayCasts; // size: 0x4, address: 0x8081FB64
float scaling; // size: 0x4, address: 0x807AF490
float scalingSqrt; // size: 0x4, address: 0x807AF494
float squarePixelLimit; // size: 0x4, address: 0x807AF498
float pixelArea; // size: 0x4, address: 0x8081FB68
float unscaledPixelArea; // size: 0x4, address: 0x8081FB6C
static int lastIdx; // size: 0x4, address: 0x8081FB70
// signature: LensFlare::Local::LensFlareEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80190AF0 -> 0x80190B24
void LensFlare::Local::LensFlareEventWrapper() {
}
// Range: 0x80190B70 -> 0x80190C38
class Entity * Sext::LensFlareSpawnPt::Create(class EntityHandleBase * handle /* r29 */, class LensFlareSpawnPt * asset /* r30 */) {
    // References
    // -> struct {} __vt__17zLensFlareSpawnPt;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// Range: 0x80190C40 -> 0x80191018
void zLensFlareSpawnPt::Init(class zLensFlareSpawnPt * this /* r27 */, class LensFlareSpawnPt * asset /* r28 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x18
    float deltaAng; // f30
    float ang; // f31

    {
        // Range: 0x80190CBC -> 0x80190D78
        // Local variables
        unsigned int i; // r29

        {
            // Range: 0x80190CBC -> 0x80190D78
            // Local variables
            class EntityHandleBase * goodie; // r0
        }
    }
    {
        // Range: 0x80190E08 -> 0x80190E68
        // Local variables
        unsigned int i; // r30

        {
            // Range: 0x80190E08 -> 0x80190E68
            // Local variables
            class xVec3 pos; // r1+0x8
        }
    }
    {
        // Range: 0x80190EB4 -> 0x80190EBC
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x80190EBC -> 0x80190EBC
            // Local variables
            int v; // r5
        }
    }
}
// signature: zLensFlareSpawnPt::UpdateAll(float)
// Range: 0x80191020 -> 0x801912D4
void zLensFlareSpawnPt::UpdateAll() {
    // Local variables
    class zScene & scene; // r26
    class zLensFlareSpawnPt_Gather_CB flares; // r1+0x8
    class zLensFlareSpawnPt * * end; // r25
    class zLensFlareSpawnPt * * startIt; // r29
    class zLensFlareSpawnPt * * it; // r26
    float targetScaling; // f0
    bool doRayTest; // r24

    {
        // Range: 0x801910FC -> 0x80191180
        // Local variables
        int i; // r27
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
}
// Range: 0x801912E0 -> 0x80191E90
bool zLensFlareSpawnPt::ComputeLensFlare(class zLensFlareSpawnPt * this /* r28 */, int viewportIdx /* r29 */, bool doRayTests /* r14 */) {
    // Local variables
    float alphaMod; // f31
    class zCam & cam; // r0
    class xVec3 & camPos; // r0
    class xVec3 dir; // r1+0x70
    class xVec3 & camDir; // r0
    float dot; // f0
    float pointAlpha; // f30

    {
        // Range: 0x801913E8 -> 0x801914D4
        // Local variables
        float t; // f0
        float distToCenter; // f0
    }
    {
        // Range: 0x801914F0 -> 0x80191DEC
        // Local variables
        unsigned int p; // r30

        {
            // Range: 0x801914F0 -> 0x80191DEC
            // Local variables
            class xVec2 screenPos; // r1+0x10
            class xVec3 lightPos; // r1+0x64
        }
    }
    {
        // Range: 0x80191E00 -> 0x80191E50
        // Local variables
        class xVec3 lightPos; // r1+0x58
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> unsigned int numLensFlareRayCasts;
    // -> class hkThreadMemory * hkThreadMemory__s_threadMemoryInstance;
    // -> struct {} __vt__21hkpAllRayHitCollector;
}
