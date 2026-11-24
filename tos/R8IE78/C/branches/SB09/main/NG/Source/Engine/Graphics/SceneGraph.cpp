/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\SceneGraph.cpp
*/
static class ModuleRegistrator sceneGraphModReg; // size: 0x8, address: 0x8077A000
class Module * sceneGraphModule; // size: 0x4, address: 0x806CE7F0
static class PoolArray tailDetachNodes; // size: 0xC, address: 0x8077A008
static class PoolArray tempNodes; // size: 0xC, address: 0x8077A014
static class PoolArray scenesUpdate; // size: 0xC, address: 0x8077A020
static class PoolArray scenesRender; // size: 0xC, address: 0x8077A02C
class SceneGraphModule scene; // size: 0x98, address: 0x8077A038
class RelativePriority priority[2]; // size: 0x18, address: 0x806CE7F8
bool renderGameComponents; // size: 0x1, address: 0x806CE834
bool renderScaleformComponents; // size: 0x1, address: 0x806CE835
bool perfGlobalsEnableScaleformComponents; // size: 0x1, address: 0x806CE836
// Range: 0x801E44C0 -> 0x801E4504
void * Graphics::SceneGraphModule::SceneGraphModule(class SceneGraphModule * this /* r31 */) {
    // References
    // -> struct {} __vt__Q28Graphics16SceneGraphModule;
}
// signature: Graphics::SceneGraphModule::GetPriority(int &) const
// Range: 0x801E4510 -> 0x801E4554
class RelativePriority * Graphics::SceneGraphModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[2];
    // -> class Module * displayModule;
}
// signature: Graphics::SceneGraphModule::Startup(int)
// Range: 0x801E4560 -> 0x801E4670
void Graphics::SceneGraphModule::Startup() {
    // References
    // -> class LightKitManager * g_instance;
    // -> static class PoolArray scenesRender;
    // -> static class PoolArray scenesUpdate;
    // -> static class PoolArray tailDetachNodes;
    // -> static class PoolArray tempNodes;
}
// signature: Graphics::SceneGraphModule::Shutdown(int)
// Range: 0x801E4690 -> 0x801E4760
void Graphics::SceneGraphModule::Shutdown() {
    // References
    // -> static class PoolArray tempNodes;
    // -> static class PoolArray tailDetachNodes;
    // -> static class PoolArray scenesUpdate;
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::SceneGraphModule::StepBegin(int)
// Range: 0x801E4760 -> 0x801E47B8
void Graphics::SceneGraphModule::StepBegin() {
    {
        // Range: 0x801E4770 -> 0x801E47A4
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraphModule::Update(int)
// Range: 0x801E47C0 -> 0x801E4818
void Graphics::SceneGraphModule::Update() {
    {
        // Range: 0x801E47D0 -> 0x801E4804
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraphModule::StepEnd(int)
// Range: 0x801E4820 -> 0x801E4878
void Graphics::SceneGraphModule::StepEnd() {
    {
        // Range: 0x801E4830 -> 0x801E4864
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraphModule::RenderStartup(int)
// Range: 0x801E4880 -> 0x801E48D0
void Graphics::SceneGraphModule::RenderStartup() {
    // References
    // -> class MaterialDepot * g_instance;
}
// signature: Graphics::SceneGraphModule::RenderShutdown(int)
// Range: 0x801E48D0 -> 0x801E4918
void Graphics::SceneGraphModule::RenderShutdown() {
    // References
    // -> class MaterialDepot * g_instance;
}
// signature: Graphics::SceneGraphModule::RenderFrameBegin(int)
// Range: 0x801E4920 -> 0x801E4978
void Graphics::SceneGraphModule::RenderFrameBegin() {
    {
        // Range: 0x801E4930 -> 0x801E4964
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::SceneGraphModule::RenderFrameEnd(int)
// Range: 0x801E4980 -> 0x801E4A68
void Graphics::SceneGraphModule::RenderFrameEnd() {
    {
        // Range: 0x801E4998 -> 0x801E49C8
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x801E49C8 -> 0x801E4A14
        // Local variables
        int end; // r26
        int i; // r27
    }
    {
        // Range: 0x801E4A1C -> 0x801E4A4C
        // Local variables
        int end; // r27
        int i; // r26
    }

    // References
    // -> static class PoolArray tailDetachNodes;
    // -> static class PoolArray tempNodes;
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::Effect::ShaderRef::ApplySpecialRef(Graphics::Viewport *, Graphics::RenderTarget *, unsigned int)
// Range: 0x801E52D0 -> 0x801E53A8
void Graphics::Effect::ShaderRef::ApplySpecialRef(class Viewport * viewp /* r31 */) {
    // References
    // -> class ProjectShadowView * g_current;
    // -> class ProjectFXLight * g_current;
}
// signature: Graphics::SceneGraph::ToggleRendering(bool)
// Range: 0x801E4A70 -> 0x801E4A7C
void Graphics::SceneGraph::ToggleRendering() {
    // References
    // -> bool renderGameComponents;
}
// signature: Graphics::SceneGraph::ToggleScaleformRendering(bool)
// Range: 0x801E4A80 -> 0x801E4A8C
void Graphics::SceneGraph::ToggleScaleformRendering() {
    // References
    // -> bool renderScaleformComponents;
}
// Range: 0x801E4A90 -> 0x801E52CC
void Graphics::SceneGraph::RenderFrame() {
    // Local variables
    int viewBatchSize; // r14
    int dynamicSize; // r15
    class StackPoolArray viewBatchList; // r1+0x24
    class StackPoolArray dynamicList; // r1+0x18
    int spaceToAllocate; // r15
    unsigned char * threadMarker; // r25
    class RenderEntry * renderEntryPool; // r14
    class PoolArray renderEntries; // r1+0xC
    class View * lastView; // r24
    class RenderTarget * lastTarget; // r1+0x30
    bool profileShaderStarted; // r23

    {
        // Range: 0x801E4AA8 -> 0x801E4AE0
        // Local variables
        int i; // r17
    }
    {
        // Range: 0x801E4AFC -> 0x801E4B84
        // Local variables
        int i; // r16

        {
            // Range: 0x801E4AFC -> 0x801E4B84
            // Local variables
            int viewBatchSizeTemp; // r1+0x8

            {
                // Range: 0x801E4B48 -> 0x801E4B84
                // Local variables
                int rl; // r0
            }
        }
    }
    {
        // Range: 0x801E4BEC -> 0x801E4C38
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x801E4C38 -> 0x801E4C78
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x801E4C94 -> 0x801E4CD4
        // Local variables
        int i; // r15
    }
    {
        // Range: 0x801E4CF8 -> 0x801E5244
        // Local variables
        int viewBatchIndex; // r22

        {
            // Range: 0x801E4CF8 -> 0x801E5244
            // Local variables
            bool waitingForMovieRender; // r14
            class Viewport * viewport; // r21

            {
                // Range: 0x801E4E04 -> 0x801E5120
                // Local variables
                class Shader * curShader; // r17
                int entryIndex; // r18
                int runStart; // r19
                unsigned char curShaderHandle; // r20
                unsigned int lastRenderRefKey; // r15

                {
                    // Range: 0x801E4E24 -> 0x801E4FC0
                    // Local variables
                    unsigned int testRenderRefKey; // r16
                    class RenderEntry & entry; // r14

                    {
                        // Range: 0x801E4EA0 -> 0x801E4F9C
                        // Local variables
                        class Renderable * * rend; // r15

                        {
                            // Range: 0x801E4EAC -> 0x801E4F0C
                            // Local variables
                            int idx; // r0
                            int run; // r4
                        }
                    }
                }
                {
                    // Range: 0x801E5008 -> 0x801E5120
                    // Local variables
                    class Renderable * * rend; // r14

                    {
                        // Range: 0x801E5018 -> 0x801E5078
                        // Local variables
                        int idx; // r0
                        int run; // r3
                    }
                }
            }
            {
                // Range: 0x801E5120 -> 0x801E51D0
                // Local variables
                class MovieData * movieData; // r15
            }
        }
    }
    {
        // Range: 0x801E5244 -> 0x801E5278
        // Local variables
        int i; // r17
    }

    // References
    // -> class Module * scaleformModule;
    // -> bool perfGlobalsEnableScaleformComponents;
    // -> bool renderScaleformComponents;
    // -> bool renderGameComponents;
    // -> class ProjectFXLight * g_current;
    // -> class ProjectShadowView * g_current;
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> class LightKitManager * g_instance;
    // -> class MaterialDepot * g_instance;
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::SceneGraph::AttachTemporaryNode(Graphics::Node *, void (*)(Graphics::Node *))
// Range: 0x801E5520 -> 0x801E5570
void Graphics::SceneGraph::AttachTemporaryNode() {
    // References
    // -> static class PoolArray tempNodes;
}
// signature: Graphics::SceneGraph::AddUpdateScene(Graphics::Scene *)
// Range: 0x801E5570 -> 0x801E5580
void Graphics::SceneGraph::AddUpdateScene() {
    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraph::AddRenderScene(Graphics::Scene *)
// Range: 0x801E5580 -> 0x801E5590
void Graphics::SceneGraph::AddRenderScene() {
    // References
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::SceneGraph::RemoveRenderScene(Graphics::Scene *)
// Range: 0x801E5590 -> 0x801E55A0
void Graphics::SceneGraph::RemoveRenderScene() {
    // References
    // -> static class PoolArray scenesRender;
}
