/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\SceneGraph.cpp
*/
static class ModuleRegistrator sceneGraphModReg; // size: 0x8, address: 0x8084B560
class Module * sceneGraphModule; // size: 0x4, address: 0x807C0980
static class PoolArray tailDetachNodes; // size: 0xC, address: 0x8084B568
static class PoolArray tempNodes; // size: 0xC, address: 0x8084B574
static class PoolArray scenesUpdate; // size: 0xC, address: 0x8084B580
static class PoolArray scenesRender; // size: 0xC, address: 0x8084B58C
class SceneGraphModule scene; // size: 0x98, address: 0x8084B598
static class RelativePriority priority[2]; // size: 0x18, address: 0x807C0988
bool renderGameComponents; // size: 0x1, address: 0x807C09C4
bool renderScaleformComponents; // size: 0x1, address: 0x807C09C5
bool perfGlobalsEnableScaleformComponents; // size: 0x1, address: 0x807C09C6
// signature: Graphics::SceneGraphModule::GetPriority(int &) const
// Range: 0x80317BA0 -> 0x80317BE4
class RelativePriority * Graphics::SceneGraphModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * displayModule;
}
// signature: Graphics::SceneGraphModule::Startup(int)
// Range: 0x80317BE4 -> 0x80317CA8
void Graphics::SceneGraphModule::Startup() {
    // References
    // -> static class PoolArray scenesRender;
    // -> static class PoolArray scenesUpdate;
    // -> static class PoolArray tailDetachNodes;
    // -> static class PoolArray tempNodes;
}
// signature: Graphics::SceneGraphModule::Shutdown(int)
// Range: 0x8031948C -> 0x803195A0
void Graphics::SceneGraphModule::Shutdown() {
    // References
    // -> static class PoolArray tempNodes;
    // -> static class PoolArray tailDetachNodes;
    // -> static class PoolArray scenesUpdate;
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::SceneGraphModule::StepBegin(int)
// Range: 0x803195A0 -> 0x80319610
void Graphics::SceneGraphModule::StepBegin() {
    {
        // Range: 0x803195B4 -> 0x803195B4
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraphModule::Update(int)
// Range: 0x80319610 -> 0x80319680
void Graphics::SceneGraphModule::Update() {
    {
        // Range: 0x80319624 -> 0x80319624
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraphModule::StepEnd(int)
// Range: 0x80319680 -> 0x803196F0
void Graphics::SceneGraphModule::StepEnd() {
    {
        // Range: 0x80319694 -> 0x80319694
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraphModule::RenderStartup(int)
// Range: 0x803196F0 -> 0x803199D4
void Graphics::SceneGraphModule::RenderStartup() {
    // References
    // -> class MaterialDepot * g_instance;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
}
// signature: Graphics::SceneGraphModule::RenderShutdown(int)
// Range: 0x803199D4 -> 0x80319F70
void Graphics::SceneGraphModule::RenderShutdown() {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> class MaterialDepot * g_instance;
}
// signature: Graphics::SceneGraphModule::RenderFrameBegin(int)
// Range: 0x80319F70 -> 0x80319FE0
void Graphics::SceneGraphModule::RenderFrameBegin() {
    {
        // Range: 0x80319F84 -> 0x80319F84
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::SceneGraphModule::RenderFrameEnd(int)
// Range: 0x80319FE0 -> 0x8031A0F4
void Graphics::SceneGraphModule::RenderFrameEnd() {
    {
        // Range: 0x80319FF8 -> 0x8031A000
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x8031A028 -> 0x8031A080
        // Local variables
        int end; // r25
        int i; // r26
    }
    {
        // Range: 0x8031A094 -> 0x8031A0CC
        // Local variables
        int end; // r26
        int i; // r25
    }

    // References
    // -> static class PoolArray tailDetachNodes;
    // -> static class PoolArray tempNodes;
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::SceneGraph::ToggleRendering(bool)
// Range: 0x8031A0F4 -> 0x8031A100
void Graphics::SceneGraph::ToggleRendering() {
    // References
    // -> bool renderGameComponents;
}
// signature: Graphics::SceneGraph::ToggleScaleformRendering(bool)
// Range: 0x8031A100 -> 0x8031A10C
void Graphics::SceneGraph::ToggleScaleformRendering() {
    // References
    // -> bool renderScaleformComponents;
}
// Range: 0x8031A10C -> 0x8031B240
void Graphics::SceneGraph::RenderFrame() {
    // Local variables
    int viewBatchSize; // r15
    int dynamicSize; // r16
    class StackPoolArray viewBatchList; // r1+0x24
    class StackPoolArray dynamicList; // r1+0x18
    int spaceToAllocate; // r16
    unsigned char * threadMarker; // r0
    class RenderEntry * renderEntryPool; // r0
    class PoolArray renderEntries; // r1+0xC
    class View * lastView; // r14
    class RenderTarget * lastTarget; // r1+0x34
    bool profileShaderStarted; // r23

    {
        // Range: 0x8031A14C -> 0x8031A190
        // Local variables
        int i; // r19

        {
            // Range: 0x8031A14C -> 0x8031A190
            // Local variables
            int viewBatchSizeTemp; // r1+0x8
        }
    }
    {
        // Range: 0x8031A2A4 -> 0x8031A2A4
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x8031A324 -> 0x8031A388
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x8031A39C -> 0x8031A3EC
        // Local variables
        int i; // r17
    }
    {
        // Range: 0x8031A424 -> 0x8031B0D8
        // Local variables
        int viewBatchIndex; // r1+0x30

        {
            // Range: 0x8031A424 -> 0x8031B0D8
            // Local variables
            bool waitingForMovieRender; // r15
            class Viewport * viewport; // r22

            {
                // Range: 0x8031A42C -> 0x8031AEE4
                // Local variables
                class Shader * curShader; // r18
                int entryIndex; // r19
                int runStart; // r20
                unsigned char curShaderHandle; // r21
                unsigned int lastRenderRefKey; // r15

                {
                    // Range: 0x8031A42C -> 0x8031AA14
                    // Local variables
                    unsigned int testRenderRefKey; // r16
                    class RenderEntry & entry; // r17

                    {
                        // Range: 0x8031A628 -> 0x8031AA00
                        // Local variables
                        class Renderable * * rend; // r15

                        {
                            // Range: 0x8031A630 -> 0x8031A630
                            // Local variables
                            int idx; // r7
                            int run; // r6
                        }
                    }
                }
                {
                    // Range: 0x8031AAE8 -> 0x8031AEE4
                    // Local variables
                    class Renderable * * rend; // r15

                    {
                        // Range: 0x8031AAF4 -> 0x8031AAF4
                        // Local variables
                        int idx; // r5
                        int run; // r4
                    }
                }
            }
            {
                // Range: 0x8031AEE4 -> 0x8031AF94
                // Local variables
                class MovieData * movieData; // r16
            }
        }
    }
    {
        // Range: 0x8031B0F4 -> 0x8031B0F4
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x8031B144 -> 0x8031B198
        // Local variables
        int i; // r17
    }

    // References
    // -> class Module * scaleformModule;
    // -> bool perfGlobalsEnableScaleformComponents;
    // -> bool renderScaleformComponents;
    // -> class ProjectShadowView * g_current;
    // -> bool renderGameComponents;
    // -> class BuildBuffer g_renderBuildBuffer;
    // -> static class ThreadLocalStorage threadLocal;
    // -> class LightKitManager * g_instance;
    // -> static class PoolArray scenesRender;
    // -> class MaterialDepot * g_instance;
}
// signature: Graphics::SceneGraph::AttachTemporaryNode(Graphics::Node *, void (*)(Graphics::Node *))
// Range: 0x8031B240 -> 0x8031B26C
void Graphics::SceneGraph::AttachTemporaryNode() {
    // References
    // -> static class PoolArray tempNodes;
}
// signature: Graphics::SceneGraph::TailDetachNode(Graphics::Node *)
// Range: 0x8031B26C -> 0x8031B294
void Graphics::SceneGraph::TailDetachNode() {
    // References
    // -> static class PoolArray tailDetachNodes;
}
// signature: Graphics::SceneGraph::AddUpdateScene(Graphics::Scene *)
// Range: 0x8031B294 -> 0x8031B2BC
void Graphics::SceneGraph::AddUpdateScene() {
    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraph::AddRenderScene(Graphics::Scene *)
// Range: 0x8031B2BC -> 0x8031B2E4
void Graphics::SceneGraph::AddRenderScene() {
    // References
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::SceneGraph::RemoveRenderScene(Graphics::Scene *)
// Range: 0x8031B2E4 -> 0x8031B360
void Graphics::SceneGraph::RemoveRenderScene() {
    // References
    // -> static class PoolArray scenesRender;
}
