/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\SceneGraph.cpp
*/
static class ModuleRegistrator sceneGraphModReg; // size: 0x8, address: 0x80803F10
class Module * sceneGraphModule; // size: 0x4, address: 0x8070A9D8
static class PoolArray tailDetachNodes; // size: 0xC, address: 0x80803F18
static class PoolArray tempNodes; // size: 0xC, address: 0x80803F24
static class PoolArray scenesUpdate; // size: 0xC, address: 0x80803F30
static class PoolArray scenesRender; // size: 0xC, address: 0x80803F3C
class SceneGraphModule scene; // size: 0x98, address: 0x80803F48
static class RelativePriority priority[2]; // size: 0x18, address: 0x8070A9E0
bool renderGameComponents; // size: 0x1, address: 0x8070AA1C
bool renderScaleformComponents; // size: 0x1, address: 0x8070AA1D
bool perfGlobalsEnableScaleformComponents; // size: 0x1, address: 0x8070AA1E
// signature: Graphics::SceneGraphModule::GetPriority(int &) const
// Range: 0x80283748 -> 0x8028378C
class RelativePriority * Graphics::SceneGraphModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * displayModule;
}
// signature: Graphics::SceneGraphModule::Startup(int)
// Range: 0x8028378C -> 0x802838C0
void Graphics::SceneGraphModule::Startup() {
    // References
    // -> class LightKitManager * g_instance;
    // -> static class PoolArray scenesRender;
    // -> static class PoolArray scenesUpdate;
    // -> static class PoolArray tailDetachNodes;
    // -> static class PoolArray tempNodes;
}
// signature: Graphics::SceneGraphModule::Shutdown(int)
// Range: 0x802838C0 -> 0x80284800
void Graphics::SceneGraphModule::Shutdown() {
    // References
    // -> static class PoolArray tempNodes;
    // -> static class PoolArray tailDetachNodes;
    // -> static class PoolArray scenesUpdate;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::SceneGraphModule::StepBegin(int)
// Range: 0x80284800 -> 0x80284870
void Graphics::SceneGraphModule::StepBegin() {
    {
        // Range: 0x80284814 -> 0x80284814
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraphModule::Update(int)
// Range: 0x80284870 -> 0x802848E0
void Graphics::SceneGraphModule::Update() {
    {
        // Range: 0x80284884 -> 0x80284884
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraphModule::StepEnd(int)
// Range: 0x802848E0 -> 0x80284950
void Graphics::SceneGraphModule::StepEnd() {
    {
        // Range: 0x802848F4 -> 0x802848F4
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraphModule::RenderStartup(int)
// Range: 0x80284950 -> 0x8028499C
void Graphics::SceneGraphModule::RenderStartup() {
    // References
    // -> class MaterialDepot * g_instance;
}
// signature: Graphics::SceneGraphModule::RenderShutdown(int)
// Range: 0x8028499C -> 0x80284D84
void Graphics::SceneGraphModule::RenderShutdown() {
    // References
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int wiiMem2OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> int wiiMem1OverflowUsed;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorSecondary;
    // -> class MaterialDepot * g_instance;
}
// signature: Graphics::SceneGraphModule::RenderFrameBegin(int)
// Range: 0x80284D84 -> 0x80284DF4
void Graphics::SceneGraphModule::RenderFrameBegin() {
    {
        // Range: 0x80284D98 -> 0x80284D98
        // Local variables
        int i; // r28
    }

    // References
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::SceneGraphModule::RenderFrameEnd(int)
// Range: 0x80284DF4 -> 0x80284F08
void Graphics::SceneGraphModule::RenderFrameEnd() {
    {
        // Range: 0x80284E0C -> 0x80284E14
        // Local variables
        int i; // r28
    }
    {
        // Range: 0x80284E3C -> 0x80284E94
        // Local variables
        int end; // r25
        int i; // r26
    }
    {
        // Range: 0x80284EA8 -> 0x80284EE0
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
// Range: 0x80284F08 -> 0x80284F14
void Graphics::SceneGraph::ToggleRendering() {
    // References
    // -> bool renderGameComponents;
}
// signature: Graphics::SceneGraph::ToggleScaleformRendering(bool)
// Range: 0x80284F14 -> 0x80284F20
void Graphics::SceneGraph::ToggleScaleformRendering() {
    // References
    // -> bool renderScaleformComponents;
}
// Range: 0x80284F20 -> 0x80285F1C
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
    class RenderTarget * lastTarget; // r1+0x38
    bool profileShaderStarted; // r23
    bool fmvClear; // r1+0x34

    {
        // Range: 0x80284F68 -> 0x80284FAC
        // Local variables
        int i; // r19

        {
            // Range: 0x80284F68 -> 0x80284FAC
            // Local variables
            int viewBatchSizeTemp; // r1+0x8
        }
    }
    {
        // Range: 0x802850C0 -> 0x802850C0
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x80285140 -> 0x802851A0
        // Local variables
        int i; // r18
    }
    {
        // Range: 0x802851B4 -> 0x80285204
        // Local variables
        int i; // r17
    }
    {
        // Range: 0x80285240 -> 0x80285DE8
        // Local variables
        int viewBatchIndex; // r1+0x30

        {
            // Range: 0x80285240 -> 0x80285DE8
            // Local variables
            class Viewport * viewport; // r22

            {
                // Range: 0x80285240 -> 0x80285D04
                // Local variables
                class Shader * curShader; // r18
                int entryIndex; // r19
                int runStart; // r20
                unsigned char curShaderHandle; // r21
                unsigned int lastRenderRefKey; // r15

                {
                    // Range: 0x80285240 -> 0x80285834
                    // Local variables
                    unsigned int testRenderRefKey; // r16
                    class RenderEntry * entry; // r17

                    {
                        // Range: 0x80285448 -> 0x80285820
                        // Local variables
                        class Renderable * * rend; // r15

                        {
                            // Range: 0x80285450 -> 0x80285450
                            // Local variables
                            int idx; // r7
                            int run; // r6
                        }
                    }
                }
                {
                    // Range: 0x80285908 -> 0x80285D04
                    // Local variables
                    class Renderable * * rend; // r15

                    {
                        // Range: 0x80285914 -> 0x80285914
                        // Local variables
                        int idx; // r5
                        int run; // r4
                    }
                }
            }
            {
                // Range: 0x80285D04 -> 0x80285D90
                // Local variables
                class MovieData * movieData; // r15
            }
        }
    }
    {
        // Range: 0x80285E20 -> 0x80285E74
        // Local variables
        int i; // r17
    }

    // References
    // -> class Module * sfRenderModule;
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
// Range: 0x80285F1C -> 0x80285F48
void Graphics::SceneGraph::AttachTemporaryNode() {
    // References
    // -> static class PoolArray tempNodes;
}
// signature: Graphics::SceneGraph::TailDetachNode(Graphics::Node *)
// Range: 0x80285F48 -> 0x80285F70
void Graphics::SceneGraph::TailDetachNode() {
    // References
    // -> static class PoolArray tailDetachNodes;
}
// signature: Graphics::SceneGraph::AddUpdateScene(Graphics::Scene *)
// Range: 0x80285F70 -> 0x80285F98
void Graphics::SceneGraph::AddUpdateScene() {
    // References
    // -> static class PoolArray scenesUpdate;
}
// signature: Graphics::SceneGraph::AddRenderScene(Graphics::Scene *)
// Range: 0x80285F98 -> 0x80285FC0
void Graphics::SceneGraph::AddRenderScene() {
    // References
    // -> static class PoolArray scenesRender;
}
// signature: Graphics::SceneGraph::RemoveRenderScene(Graphics::Scene *)
// Range: 0x80285FC0 -> 0x8028603C
void Graphics::SceneGraph::RemoveRenderScene() {
    // References
    // -> static class PoolArray scenesRender;
}
