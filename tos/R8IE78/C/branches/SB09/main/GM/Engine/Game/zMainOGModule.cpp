/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zMainOGModule.cpp
*/
static class zMainOGModule mainOGMod; // size: 0x9C, address: 0x80735C48
static class ModuleRegistrator mainOGModreg; // size: 0x8, address: 0x80735CE8
class Module * engineOGModule; // size: 0x4, address: 0x806BD858
float MonitorAspectRatio; // size: 0x4, address: 0x806BD85C
class SceneData TheScene; // size: 0x10D4, address: 0x80735CFC
class MaterialDepotSpace TheCameraSpace; // size: 0x20, address: 0x80736DE0
class ScreenRenderTargetWii TheScreenTarget; // size: 0x2DC, address: 0x80736E0C
class ScreenView MainScreenView; // size: 0x28, address: 0x807370F8
class RenderSceneCollider TheRenderSceneCollider; // size: 0x2C, address: 0x8073712C
class ProjectFXLight TheProjectFXLight; // size: 0x1B4FC, address: 0x80737164
class ProjectShadowView * TheProjectShadowView; // size: 0x4, address: 0x80752660
class Bucket * TheProjectShadowBucketList; // size: 0x4, address: 0x80752664
class RelativePriority priority[3]; // size: 0x24, address: 0x806BD860
// Range: 0x800D3210 -> 0x800D3260
void * EngineOG::zMainOGModule::zMainOGModule(class zMainOGModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28EngineOG13zMainOGModule;
}
// signature: EngineOG::zMainOGModule::GetPriority(int &) const
// Range: 0x800D3260 -> 0x800D32B8
class RelativePriority * EngineOG::zMainOGModule::GetPriority() const {
    // References
    // -> class Module * allocModule;
    // -> class Module * cinematicModule;
    // -> class RelativePriority priority[3];
    // -> class Module * trcModule;
}
// signature: EngineOG::zMainOGModule::Startup(int)
// Range: 0x800D32C0 -> 0x800D34D4
void EngineOG::zMainOGModule::Startup() {
    // References
    // -> class RenderSceneCollider TheRenderSceneCollider;
    // -> class ProjectShadowView * TheProjectShadowView;
    // -> class Bucket * TheProjectShadowBucketList;
    // -> class ProjectFXLight TheProjectFXLight;
    // -> class ScreenView MainScreenView;
    // -> class ScreenRenderTargetWii TheScreenTarget;
    // -> class MaterialDepotSpace TheCameraSpace;
    // -> class Scene * primaryScene;
    // -> class SceneData TheScene;
}
// signature: EngineOG::zMainOGModule::Shutdown(int)
// Range: 0x800D34E0 -> 0x800D3544
void EngineOG::zMainOGModule::Shutdown() {
    // References
    // -> class SceneData TheScene;
    // -> class MaterialDepotSpace TheCameraSpace;
    // -> class ProjectShadowView * TheProjectShadowView;
}
// signature: EngineOG::zMainOGModule::Update(int)
// Range: 0x800D3550 -> 0x800D3554
void EngineOG::zMainOGModule::Update() {
}
// signature: EngineOG::zMainOGModule::StepEnd(int)
// Range: 0x800D3560 -> 0x800D35A0
void EngineOG::zMainOGModule::StepEnd() {
    // References
    // -> class xOGModelUpdater * g_npcEntityModelUpdaterPtr;
    // -> class xOGModelUpdater g_modelUpdateDefault;
}
// Range: 0x800D35A0 -> 0x800D3728
void EngineOG::zMainOGModule::UpdateGameApp(class zMainOGModule * this /* r30 */) {
    {
        // Range: 0x800D35D8 -> 0x800D3614
        // Local variables
        bool isReady; // r0
    }
    {
        // Range: 0x800D3614 -> 0x800D3648
        // Local variables
        bool gameIsInit; // r0
    }
    {
        // Range: 0x800D3648 -> 0x800D3674
        // Local variables
        bool sceneIsInit; // r0
    }
    {
        // Range: 0x800D3690 -> 0x800D36BC
        // Local variables
        enum UnloadSceneEnum state; // r0
    }

    // References
    // -> bool enableDTRMovies;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
// signature: EngineOG::zMainOGModule::RenderStartup(int)
// Range: 0x800D3730 -> 0x800D37E4
void EngineOG::zMainOGModule::RenderStartup() {
    {
        // Range: 0x800D3750 -> 0x800D37CC
        // Local variables
        int windowHeight; // r0
        int windowWidth; // r30
    }

    // References
    // -> class ScreenRenderTargetWii TheScreenTarget;
    // -> float MonitorAspectRatio;
}
// signature: EngineOG::zMainOGModule::RenderShutdown(int)
// Range: 0x800D37F0 -> 0x800D37FC
void EngineOG::zMainOGModule::RenderShutdown() {
    // References
    // -> class ScreenRenderTargetWii TheScreenTarget;
}
// signature: EngineOG::zMainOGModule::FirstUpdate(int)
// Range: 0x800D3800 -> 0x800D3874
void EngineOG::zMainOGModule::FirstUpdate() {
    // References
    // -> class ProjectShadowView * TheProjectShadowView;
    // -> class ScreenView MainScreenView;
    // -> class MaterialDepotSpace TheCameraSpace;
    // -> class SceneData TheScene;
    // -> class RenderSceneCollider TheRenderSceneCollider;
}
// Range: 0x800D38D0 -> 0x800D38DC
class View * Graphics::HackGetScreenView() {
    // References
    // -> class ScreenView MainScreenView;
}
// Range: 0x800D38E0 -> 0x800D38EC
float Graphics::HackGetMonitorAspectRatio() {
    // References
    // -> float MonitorAspectRatio;
}
