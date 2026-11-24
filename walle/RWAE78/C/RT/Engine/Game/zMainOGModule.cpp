/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zMainOGModule.cpp
*/
static class zMainOGModule mainOGMod; // size: 0x9C, address: 0x8076E3D0
static class ModuleRegistrator mainOGModreg; // size: 0x8, address: 0x8076E470
class Module * engineOGModule; // size: 0x4, address: 0x806FB4DC
float MonitorAspectRatio; // size: 0x4, address: 0x806FB4E0
class SceneData TheScene; // size: 0x10AC, address: 0x8076E484
class MaterialDepotSpace TheCameraSpace; // size: 0x20, address: 0x8076F540
class ScreenRenderTarget TheScreenTarget; // size: 0x214, address: 0x8076F56C
class ScreenView MainScreenView; // size: 0x28, address: 0x8076F790
class DirtyDiscCallBack gDirtyDiscCallBack; // size: 0x4, address: 0x8076F7B8
class ProjectShadowView TheProjectShadowView; // size: 0x20F94, address: 0x8076F7C8
class Bucket * TheProjectShadowBucketList; // size: 0x4, address: 0x8079075C
static class RelativePriority priority[1]; // size: 0xC, address: 0x806FB4E4
// Range: 0x801556E0 -> 0x801556E4
void EngineOG::DirtyDiscCallBack::DirtyDisc() {
}
// signature: EngineOG::zMainOGModule::GetPriority(int &) const
// Range: 0x800EA700 -> 0x800EA740
class RelativePriority * EngineOG::zMainOGModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[1];
    // -> class Module * cinematicModule;
}
// signature: EngineOG::zMainOGModule::Startup(int)
// Range: 0x800EA740 -> 0x800EA8C4
void EngineOG::zMainOGModule::Startup() {
    // References
    // -> class ProjectShadowView TheProjectShadowView;
    // -> class Bucket * TheProjectShadowBucketList;
    // -> class ScreenView MainScreenView;
    // -> class ScreenRenderTarget TheScreenTarget;
    // -> class MaterialDepotSpace TheCameraSpace;
    // -> class Scene * primaryScene;
    // -> class SceneData TheScene;
    // -> class DirtyDiscCallBack gDirtyDiscCallBack;
}
// signature: EngineOG::zMainOGModule::Shutdown(int)
// Range: 0x800EA8E0 -> 0x800EA940
void EngineOG::zMainOGModule::Shutdown() {
    // References
    // -> class SceneData TheScene;
    // -> class MaterialDepotSpace TheCameraSpace;
    // -> class ProjectShadowView TheProjectShadowView;
}
// signature: EngineOG::zMainOGModule::Update(int)
// Range: 0x800EA940 -> 0x800EA944
void EngineOG::zMainOGModule::Update() {
}
// Range: 0x800EA950 -> 0x800EAB84
void EngineOG::zMainOGModule::UpdateGameApp(class zMainOGModule * this /* r31 */) {
    {
        // Range: 0x800EA9A8 -> 0x800EA9D8
        // Local variables
        bool isReady; // r0
    }
    {
        // Range: 0x800EA9D8 -> 0x800EAA00
        // Local variables
        bool gameIsInit; // r0
    }
    {
        // Range: 0x800EAA88 -> 0x800EAAB4
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
}
// signature: EngineOG::zMainOGModule::RenderStartup(int)
// Range: 0x800EAB90 -> 0x800EAC44
void EngineOG::zMainOGModule::RenderStartup() {
    {
        // Range: 0x800EABB0 -> 0x800EAC2C
        // Local variables
        int windowHeight; // r0
        int windowWidth; // r30
    }

    // References
    // -> class ScreenRenderTarget TheScreenTarget;
    // -> float MonitorAspectRatio;
}
// signature: EngineOG::zMainOGModule::RenderShutdown(int)
// Range: 0x800EAC50 -> 0x800EAC5C
void EngineOG::zMainOGModule::RenderShutdown() {
    // References
    // -> class ScreenRenderTarget TheScreenTarget;
}
// signature: EngineOG::zMainOGModule::FirstUpdate(int)
// Range: 0x800EAC60 -> 0x800EAD70
void EngineOG::zMainOGModule::FirstUpdate() {
    // References
    // -> class ProjectShadowView TheProjectShadowView;
    // -> class ScreenView MainScreenView;
    // -> class MaterialDepotSpace TheCameraSpace;
    // -> class SceneData TheScene;
}
// Range: 0x800EAD70 -> 0x800EAD7C
class View * Graphics::HackGetScreenView() {
    // References
    // -> class ScreenView MainScreenView;
}
// Range: 0x800EAD80 -> 0x800EAD8C
float Graphics::HackGetMonitorAspectRatio() {
    // References
    // -> float MonitorAspectRatio;
}
