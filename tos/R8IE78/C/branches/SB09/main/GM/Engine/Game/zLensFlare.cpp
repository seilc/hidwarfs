/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zLensFlare.cpp
*/
unsigned int numLensFlareRayCasts; // size: 0x4, address: 0x80734C30
float scaling; // size: 0x4, address: 0x806BD83C
float scalingSqrt; // size: 0x4, address: 0x806BD840
float squarePixelLimit; // size: 0x4, address: 0x806BD844
float pixelArea; // size: 0x4, address: 0x80734C34
float unscaledPixelArea; // size: 0x4, address: 0x80734C38
int lastIdx; // size: 0x4, address: 0x80753E30
// signature: LensFlare::Local::LensFlareEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800D0B40 -> 0x800D0B74
void LensFlare::Local::LensFlareEventWrapper() {
}
// Range: 0x800D0C30 -> 0x800D0CAC
class Entity * Sext::LensFlareSpawnPt::Create(class EntityHandleBase * handle /* r29 */, class LensFlareSpawnPt * asset /* r30 */) {
    // References
    // -> struct {} __vt__17zLensFlareSpawnPt;
}
// Range: 0x800D0CB0 -> 0x800D0F1C
void zLensFlareSpawnPt::Init(class zLensFlareSpawnPt * this /* r29 */, class LensFlareSpawnPt * asset /* r30 */) {
    // Local variables
    class xMat3x3 mat; // r1+0x18
    float deltaAng; // f31
    float ang; // f30

    {
        // Range: 0x800D0D2C -> 0x800D0DBC
        // Local variables
        unsigned int i; // r31

        {
            // Range: 0x800D0D2C -> 0x800D0DBC
            // Local variables
            class EntityHandleBase * goodie; // r0
        }
    }
    {
        // Range: 0x800D0E28 -> 0x800D0E94
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x800D0E28 -> 0x800D0E94
            // Local variables
            class xVec3 pos; // r1+0x8
        }
    }
    {
        // Range: 0x800D0E94 -> 0x800D0EE4
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x800D0E9C -> 0x800D0EE4
            // Local variables
            int v; // r4
        }
    }
}
// Range: 0x800D11B0 -> 0x800D1218
void * zLensFlareSpawnPt_Gather_CB::~zLensFlareSpawnPt_Gather_CB(class zLensFlareSpawnPt_Gather_CB * this /* r29 */) {
}
// Range: 0x800D0F20 -> 0x800D11A8
void zLensFlareSpawnPt::UpdateAll(float dt /* f29 */) {
    // Local variables
    class zScene & scene; // r26
    class zLensFlareSpawnPt_Gather_CB flares; // r1+0x8
    class zLensFlareSpawnPt * * end; // r25
    class zLensFlareSpawnPt * * startIt; // r29
    class zLensFlareSpawnPt * * it; // r26
    float targetScaling; // f0
    bool doRayTest; // r24

    {
        // Range: 0x800D1004 -> 0x800D10A0
        // Local variables
        int i; // r27
    }

    // References
    // -> float scalingSqrt;
    // -> float scaling;
    // -> float squarePixelLimit;
    // -> float unscaledPixelArea;
    // -> float pixelArea;
    // -> int lastIdx;
    // -> unsigned int numLensFlareRayCasts;
    // -> class zGlobals globals;
}
// signature: zLensFlareSpawnPt::Update(float, bool)
// Range: 0x800D1220 -> 0x800D1298
void zLensFlareSpawnPt::Update(class zLensFlareSpawnPt * this /* r29 */, bool doRayTests /* r30 */) {
    {
        // Range: 0x800D123C -> 0x800D1280
        // Local variables
        int i; // r31
    }
}
// Range: 0x800D12A0 -> 0x800D173C
bool zLensFlareSpawnPt::ComputeLensFlare(class zLensFlareSpawnPt * this /* r15 */, int viewportIdx /* r16 */, bool doRayTests /* r17 */) {
    // Local variables
    float alphaMod; // f30
    class zCam & cam; // r0
    class xVec3 dir; // r1+0x64
    float dot; // f0
    float pointAlpha; // f29

    {
        // Range: 0x800D135C -> 0x800D13E8
        // Local variables
        float t; // f0
        float distToCenter; // f0
    }
    {
        // Range: 0x800D13FC -> 0x800D16AC
        // Local variables
        unsigned int p; // r18

        {
            // Range: 0x800D13FC -> 0x800D16AC
            // Local variables
            float iw; // r1+0x14
            class xVec2 screenPos; // r1+0x18
            class xVec3 lightPos; // r1+0x58
        }
    }
    {
        // Range: 0x800D16AC -> 0x800D1704
        // Local variables
        float iw; // r1+0x10
        class xVec3 lightPos; // r1+0x4C
    }

    // References
    // -> class hkMonitorStream * hkMonitorStream__m_instance;
    // -> unsigned int numLensFlareRayCasts;
    // -> struct {} __vt__21hkpAllRayHitCollector;
}
