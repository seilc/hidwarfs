/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zMainOGModule.cpp
*/
static class zMainOGModule mainOGMod; // size: 0x9C, address: 0x80820B80
static class ModuleRegistrator mainOGModreg; // size: 0x8, address: 0x80820C20
class Module * engineOGModule; // size: 0x4, address: 0x807AF4B8
float MonitorAspectRatio; // size: 0x4, address: 0x807AF4BC
class SceneData TheScene; // size: 0xFEC, address: 0x80820C34
class MaterialDepotSpace TheCameraSpace; // size: 0x20, address: 0x80821C30
class ScreenRenderTargetWii TheScreenTarget; // size: 0x290, address: 0x80821C60
class ScreenView MainScreenView; // size: 0x28, address: 0x80821F00
class ProjectShadowView * TheProjectShadowView; // size: 0x4, address: 0x80821F28
class Bucket * TheProjectShadowBucketList; // size: 0x4, address: 0x80821F2C
static class RelativePriority priority[2]; // size: 0x18, address: 0x807AF4C0
// signature: EngineOG::zMainOGModule::GetPriority(int &) const
// Range: 0x80193490 -> 0x801934DC
class RelativePriority * EngineOG::zMainOGModule::GetPriority() const {
    // References
    // -> class Module * cinematicModule;
    // -> static class RelativePriority priority[2];
    // -> class Module * trcModule;
}
// signature: EngineOG::zMainOGModule::Startup(int)
// Range: 0x801934E0 -> 0x80193690
void EngineOG::zMainOGModule::Startup() {
    // References
    // -> class ProjectShadowView * TheProjectShadowView;
    // -> class Bucket * TheProjectShadowBucketList;
    // -> class ScreenView MainScreenView;
    // -> class ScreenRenderTargetWii TheScreenTarget;
    // -> class MaterialDepotSpace TheCameraSpace;
    // -> class Scene * primaryScene;
    // -> class SceneData TheScene;
}
// signature: EngineOG::zMainOGModule::Shutdown(int)
// Range: 0x80193690 -> 0x801936F0
void EngineOG::zMainOGModule::Shutdown() {
    // References
    // -> class SceneData TheScene;
    // -> class MaterialDepotSpace TheCameraSpace;
    // -> class ProjectShadowView * TheProjectShadowView;
}
// signature: EngineOG::zMainOGModule::Update(int)
// Range: 0x801936F0 -> 0x801936F4
void EngineOG::zMainOGModule::Update() {
}
// signature: EngineOG::zMainOGModule::StepEnd(int)
// Range: 0x80193700 -> 0x80193740
void EngineOG::zMainOGModule::StepEnd() {
    // References
    // -> class xOGModelUpdater * g_npcEntityModelUpdaterPtr;
    // -> class xOGModelUpdater g_modelUpdateDefault;
}
// Range: 0x80193740 -> 0x80193994
void EngineOG::zMainOGModule::UpdateGameApp(class zMainOGModule * this /* r31 */) {
    {
        // Range: 0x8019377C -> 0x801937B8
        // Local variables
        bool isReady; // r0
    }
    {
        // Range: 0x801937B8 -> 0x801937EC
        // Local variables
        bool gameIsInit; // r0
    }
    {
        // Range: 0x8019389C -> 0x801938C8
        // Local variables
        enum UnloadSceneEnum state; // r0
    }

    // References
    // -> bool enableDTRMovies;
    // -> static class st_XORDEREDARRAY g_modlist;
    // -> static class st_XORDEREDARRAY g_modlistUpdateSort;
    // -> static class st_XORDEREDARRAY g_modlistRenderSort;
    // -> static char gameScene[128];
    // -> static unsigned int gameSceneID;
    // -> static bool gameInitDone;
    // -> unsigned int FB_YRES;
    // -> unsigned int FB_XRES;
    // -> class zNGLoadingScreen gNGLoadingScreen;
}
// signature: EngineOG::zMainOGModule::RenderStartup(int)
// Range: 0x801939A0 -> 0x80193A54
void EngineOG::zMainOGModule::RenderStartup() {
    {
        // Range: 0x801939C0 -> 0x80193A3C
        // Local variables
        int windowHeight; // r0
        int windowWidth; // r30
    }

    // References
    // -> class ScreenRenderTargetWii TheScreenTarget;
    // -> float MonitorAspectRatio;
}
// signature: EngineOG::zMainOGModule::RenderShutdown(int)
// Range: 0x80193A60 -> 0x80193A6C
void EngineOG::zMainOGModule::RenderShutdown() {
    // References
    // -> class ScreenRenderTargetWii TheScreenTarget;
}
// signature: EngineOG::zMainOGModule::FirstUpdate(int)
// Range: 0x80193A70 -> 0x80193B74
void EngineOG::zMainOGModule::FirstUpdate() {
    // References
    // -> class ProjectShadowView * TheProjectShadowView;
    // -> class ScreenView MainScreenView;
    // -> class MaterialDepotSpace TheCameraSpace;
    // -> class SceneData TheScene;
}
// Range: 0x80193B80 -> 0x80193B8C
class View * Graphics::HackGetScreenView() {
    // References
    // -> class ScreenView MainScreenView;
}
// Range: 0x80193B90 -> 0x80193B9C
float Graphics::HackGetMonitorAspectRatio() {
    // References
    // -> float MonitorAspectRatio;
}
