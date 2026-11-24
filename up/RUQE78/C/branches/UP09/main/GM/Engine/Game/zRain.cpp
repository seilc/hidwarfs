/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zRain.cpp
*/
float sCurrentAmount; // size: 0x4, address: 0x8081E9C8
float sTransitionAmount; // size: 0x4, address: 0x8081E9CC
bool sEnabled; // size: 0x1, address: 0x8081E9D0
unsigned int sNumScreenLines[4]; // size: 0x10, address: 0x8081E9D8
class xVec4 sScreenLines[256]; // size: 0x1000, address: 0x8081E9E8
class xVec2 sScreenDirection[4]; // size: 0x20, address: 0x8081F9E8
float sFadeInRate; // size: 0x4, address: 0x8081FA08
float sFadeOutRate; // size: 0x4, address: 0x8081FA0C
float sIntensity; // size: 0x4, address: 0x8081FA10
class Info sInfo; // size: 0x20, address: 0x8081FA18
class Info sTargetInfo; // size: 0x20, address: 0x8081FA38
class Texture * sRainTexture; // size: 0x4, address: 0x8081FA58
class zFXSpawn * sSpawnResource; // size: 0x4, address: 0x8081FA5C
class zFXSpawn * sSpawnPt[4]; // size: 0x10, address: 0x8081FA60
class ImmediatePrototypeEntity * sScreenImmProto; // size: 0x4, address: 0x8081FA70
// signature: Rain::Local::EventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80175810 -> 0x80175820
void Rain::Local::EventWrapper() {
}
// Range: 0x80175820 -> 0x801758A4
void Rain::OnSceneEnter() {
    // References
    // -> class ImmediatePrototypeEntity * sScreenImmProto;
    // -> class Texture * sRainTexture;
    // -> class zFXSpawn * sSpawnResource;
    // -> class zFXSpawn * sSpawnPt[4];
    // -> float sCurrentAmount;
    // -> unsigned int sNumScreenLines[4];
    // -> bool sEnabled;
}
// Range: 0x801758B0 -> 0x80175958
void Rain::OnSceneExit() {
    {
        // Range: 0x801758C8 -> 0x801758CC
        // Local variables
        unsigned int idx; // r26
    }

    // References
    // -> class ImmediatePrototypeEntity * sScreenImmProto;
    // -> class zFXSpawn * sSpawnResource;
    // -> class zFXSpawn * sSpawnPt[4];
    // -> bool sInvalidSceneState;
}
// Range: 0x80175960 -> 0x80177084
void Rain::OnSceneUpdate(float inElapsedTime /* f29 */) {
    // Local variables
    unsigned int numViews; // r0
    unsigned int maxPerView; // r1+0x178
    class xColor vtxcolor; // r1+0x24

    {
        // Range: 0x80175A3C -> 0x80175AC0
        // Local variables
        unsigned int viewIdx; // r18
    }
    {
        // Range: 0x80175B0C -> 0x80175D08
        // Local variables
        float newAmount; // f0
        float oldLeft; // f2

        {
            // Range: 0x80175B84 -> 0x80175D08
            // Local variables
            float ratio; // f1
            float diff; // f1
        }
    }
    {
        // Range: 0x80175D38 -> 0x80175FDC
        // Local variables
        unsigned int viewIdx; // r18

        {
            // Range: 0x80175D38 -> 0x80175FDC
            {
                // Range: 0x80175D38 -> 0x80175D58
                // Local variables
                class xVec3 camSpaceForward; // r1+0xA0
                class xVec3 forward; // r1+0xAC
                class xMat4x3 camMat; // r1+0x100
            }
        }
    }
    {
        // Range: 0x80175FEC -> 0x8017630C
        // Local variables
        class Vector infoDir; // r1+0x90
        unsigned int numPerView; // r0
        unsigned int maxPerView; // r19

        {
            // Range: 0x80176044 -> 0x801762F8
            // Local variables
            unsigned int viewIdx; // r20

            {
                // Range: 0x80176044 -> 0x801762F8
                // Local variables
                unsigned int idx; // r26
                unsigned int end; // r21
                unsigned int oldLines; // r0
                float speed; // f30
                float aspectMult; // f31
                float invAspect; // f1
                class Viewport * viewport; // r0
            }
        }
    }
    {
        // Range: 0x8017632C -> 0x80176FBC
        // Local variables
        unsigned int viewIdx; // r15

        {
            // Range: 0x8017632C -> 0x80176FBC
            // Local variables
            unsigned int numLines; // r21

            {
                // Range: 0x8017632C -> 0x80176FBC
                // Local variables
                class ImmediateContext immContext; // r1+0xB8
                class Renderable3DTransform * xform; // r1+0x20
                float aspectMult; // f18
                float invAspect; // f5
                float normalY; // f0
                float normalX; // f17
                float dY; // f16
                float dX; // f15
                float lengthRatio; // f14
                float screenH; // f4
                float screenW; // f3
                class Viewport * viewport; // r0

                {
                    // Range: 0x8017632C -> 0x80176350
                    // Local variables
                    unsigned int idx; // r10

                    {
                        // Range: 0x8017632C -> 0x80176350
                        // Local variables
                        float normalYamt; // f8
                        float normalXamt; // f7
                        float widthMul; // f1
                        float len; // f5
                        float posy; // f6
                        float posx; // f4
                        class xVec4 & drop; // r8
                    }
                }
                {
                    // Range: 0x801763A0 -> 0x801763A0
                    // Local variables
                    class Sampler samplerData; // r1+0x84
                }
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class Texture * sRainTexture;
    // -> class ImmediatePrototypeEntity * sScreenImmProto;
    // -> static class Matrix43 _matIdentity;
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> class Renderable3DTransform g_identity;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class xVec4 sScreenLines[256];
    // -> unsigned int sNumScreenLines[4];
    // -> class xVec2 sScreenDirection[4];
    // -> class Info sInfo;
    // -> class Info sTargetInfo;
    // -> float sTransitionAmount;
    // -> float sFadeOutRate;
    // -> float sFadeInRate;
    // -> float sIntensity;
    // -> float sCurrentAmount;
    // -> class zFXScriptSpawnPtMgr * fxScriptSpawnPtMgr;
    // -> bool sInvalidSceneState;
    // -> class zFXSpawn * sSpawnPt[4];
    // -> class zFXSpawn * sSpawnResource;
    // -> bool sEnabled;
}
// Range: 0x80177090 -> 0x8017745C
void Rain::zRainControl::Setup(class zRainControl * this /* r29 */) {
    // Local variables
    bool usedTexture; // r30

    {
        // Range: 0x801770B8 -> 0x801770BC
        // Local variables
        unsigned int idx; // r24
    }
    {
        // Range: 0x80177358 -> 0x8017737C
        // Local variables
        class EntityHandleBase * handle; // r0
    }

    // References
    // -> float sTransitionAmount;
    // -> class Info sInfo;
    // -> float sCurrentAmount;
    // -> float sIntensity;
    // -> float sFadeOutRate;
    // -> float sFadeInRate;
    // -> class Info sTargetInfo;
    // -> class zFXSpawn * sSpawnResource;
    // -> class Texture * sRainTexture;
    // -> bool sInvalidSceneState;
    // -> class zFXSpawn * sSpawnPt[4];
}
// signature: Rain::zRainControl::HandleEvent(unsigned int, Sext::EventAny *)
// Range: 0x80177460 -> 0x8017754C
void Rain::zRainControl::HandleEvent(class zRainControl * this /* r30 */) {
    // References
    // -> float sCurrentAmount;
    // -> unsigned int sNumScreenLines[4];
    // -> bool sEnabled;
}
// Range: 0x80177550 -> 0x80177624
class Entity * Sext::RainControl::Create(class EntityHandleBase * handle /* r29 */, class RainControl * inAsset /* r30 */) {
    // References
    // -> struct {} __vt__Q24Rain12zRainControl;
    // -> struct {} __vt__Q25World9xOGEntity;
}
