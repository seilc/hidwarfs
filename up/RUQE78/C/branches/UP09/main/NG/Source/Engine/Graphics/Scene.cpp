/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Graphics\Scene.cpp
*/
static class SceneModule mod; // size: 0x98, address: 0x80848D28
static class ModuleRegistrator sceneModReg; // size: 0x8, address: 0x80848DC0
class Module * sceneModule; // size: 0x4, address: 0x807BF2CC
static class RelativePriority priority[2]; // size: 0x18, address: 0x807BF2D0
// signature: @unnamed@WAD01_cpp@::SceneModule::GetPriority(int &) const
// Range: 0x802FD3A4 -> 0x802FD3E8
static class RelativePriority * @unnamed@WAD01_cpp@::SceneModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * sceneGraphModule;
}
// signature: @unnamed@WAD01_cpp@::SceneModule::Startup(int)
// Range: 0x802FD3E8 -> 0x802FD3EC
static void @unnamed@WAD01_cpp@::SceneModule::Startup() {
}
// signature: @unnamed@WAD01_cpp@::SceneModule::Shutdown(int)
// Range: 0x802FD3EC -> 0x802FD3F0
static void @unnamed@WAD01_cpp@::SceneModule::Shutdown() {
}
// signature: Graphics::Scene::GetCreateSize(int, int, int)
// Range: 0x802FD3F0 -> 0x802FD40C
int Graphics::Scene::GetCreateSize() {
}
// signature: Graphics::Scene::Create(void *, int, int, int, int)
// Range: 0x802FD40C -> 0x802FD6EC
void Graphics::Scene::Create(class Scene * this /* r31 */) {
    // Local variables
    class StackAllocator allocator; // r1+0x8

    {
        // Range: 0x802FD580 -> 0x802FD688
        // Local variables
        unsigned long i; // r0
    }
    {
        // Range: 0x802FD688 -> 0x802FD6C8
        // Local variables
        unsigned long i; // r0
    }

    // References
    // -> class LightKitManager * g_instance;
    // -> class Texture * g_defaultTex;
}
// Range: 0x802FD6EC -> 0x802FD75C
void Graphics::Scene::Destroy() {
    {
        // Range: 0x802FD6F0 -> 0x802FD758
        // Local variables
        unsigned long i; // r0
    }

    // References
    // -> class LightKitManager * g_instance;
}
// Range: 0x802FD75C -> 0x802FD7DC
void Graphics::Scene::AttachAll(class Scene * this /* r31 */) {
}
// Range: 0x802FD7DC -> 0x802FD7E0
void Graphics::Scene::RenderAttach() {
}
// Range: 0x802FD7E0 -> 0x802FD7E4
void Graphics::Scene::RenderDetach() {
}
// Range: 0x802FD7E4 -> 0x802FD83C
void Graphics::Scene::StepBegin() {
}
// Range: 0x802FD83C -> 0x802FD894
void Graphics::Scene::Update() {
}
// Range: 0x802FD894 -> 0x802FD8EC
void Graphics::Scene::StepEnd() {
}
// Range: 0x802FD8EC -> 0x802FD944
void Graphics::Scene::RenderFrameBegin() {
}
// Range: 0x802FD944 -> 0x802FD99C
void Graphics::Scene::RenderFrame() {
}
// Range: 0x802FD99C -> 0x802FD9F4
void Graphics::Scene::RenderFrameEnd() {
}
// Range: 0x802FD9F4 -> 0x802FDB04
void Graphics::Scene::GetMaxBatchSize(class Scene * this /* r29 */, int & viewBatchSize /* r30 */) {
    {
        // Range: 0x802FDA10 -> 0x802FDAE0
        // Local variables
        int i; // r31

        {
            // Range: 0x802FDA10 -> 0x802FDAE0
            // Local variables
            class View * view; // r3
        }
    }

    // References
    // -> int gperf_shadows;
}
// Range: 0x802FDB04 -> 0x802FDD84
void Graphics::Scene::GetBatches(class Scene * this /* r28 */, class PoolArray & viewBatchList /* r29 */, class PoolArray & renderEntries /* r30 */, class PoolArray & dynamicList /* r31 */) {
    // Local variables
    class StackPoolArray sortedViewArray; // r1+0x8

    {
        // Range: 0x802FDB5C -> 0x802FDB84
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x802FDBC8 -> 0x802FDBD0
        // Local variables
        int i; // r15

        {
            // Range: 0x802FDBC8 -> 0x802FDBD0
            // Local variables
            class View * view; // r3

            {
                // Range: 0x802FDBD0 -> 0x802FDBD0
                {
                    // Range: 0x802FDBD0 -> 0x802FDBD0
                    {
                        // Range: 0x802FDBD0 -> 0x802FDBD0
                        {
                            // Range: 0x802FDBD0 -> 0x802FDBD0
                            // Local variables
                            int addedEntries; // r20
                        }
                    }
                }
            }
        }
    }

    // References
    // -> int gperf_shadows;
}
// signature: Graphics::Scene::AddView(Graphics::View *)
// Range: 0x802FDD84 -> 0x802FDDA4
void Graphics::Scene::AddView() {
}
// Range: 0x802FDDA4 -> 0x802FE088
void Graphics::Scene::AddRenderable(class Scene * this /* r29 */, class Renderable * renderable /* r30 */) {
    // Local variables
    bool isDynamic; // r0

    {
        // Range: 0x802FDFB4 -> 0x802FE06C
        // Local variables
        class Renderable3D * rend3d; // r0

        {
            // Range: 0x802FDFC0 -> 0x802FE058
            // Local variables
            int foundIndex; // r5

            {
                // Range: 0x802FDFCC -> 0x802FE044
                // Local variables
                unsigned short lightMask; // r0

                {
                    // Range: 0x802FDFE8 -> 0x802FE044
                    // Local variables
                    int i; // r0
                }
            }
        }
    }
}
// signature: Graphics::Scene::RemoveRenderable(Graphics::Renderable *)
// Range: 0x802FE090 -> 0x802FE280
void Graphics::Scene::RemoveRenderable() {
    // Local variables
    class RenderableSceneRef * cur; // r6
    bool isDynamic; // r0

    {
        // Range: 0x802FE1C8 -> 0x802FE27C
        // Local variables
        class LightKitData * kit; // r6
        class Renderable3D * rend3d; // r0
    }
}
// signature: Graphics::Scene::AddLightPointSpot(Graphics::LightPointSpot *)
// Range: 0x802FE280 -> 0x802FE2A4
void Graphics::Scene::AddLightPointSpot() {
}
// signature: Graphics::Scene::RemoveLightPointSpot(Graphics::LightPointSpot *)
// Range: 0x802FE2A4 -> 0x802FE318
void Graphics::Scene::RemoveLightPointSpot() {
}
// signature: Graphics::Scene::ApplyLightKitScene(const World::LightKitSceneEntity *)
// Range: 0x802FE318 -> 0x802FE430
void Graphics::Scene::ApplyLightKitScene() {
    {
        // Range: 0x802FE330 -> 0x802FE42C
        // Local variables
        int i; // r0
    }
}
// Range: 0x802FE430 -> 0x802FE540
void Graphics::Scene::UnapplyLightKitScene() {
    {
        // Range: 0x802FE44C -> 0x802FE53C
        // Local variables
        int i; // r0
    }
}
// Range: 0x802FE540 -> 0x802FE600
void Graphics::Scene::UpdateDynamicBounds(class Scene * this /* r28 */) {
    {
        // Range: 0x802FE568 -> 0x802FE5C0
        // Local variables
        int i; // r29

        {
            // Range: 0x802FE568 -> 0x802FE5C0
            {
                // Range: 0x802FE584 -> 0x802FE5C0
                // Local variables
                class Renderable3D * rend3D; // r5
            }
        }
    }
}
// Range: 0x802FE600 -> 0x802FE6C4
void Graphics::Scene::UpdateLightArrays() {
    {
        // Range: 0x802FE600 -> 0x802FE6C0
        // Local variables
        int end; // r0
        int i; // r0
    }
}
// signature: Graphics::RenderableSceneRef::UpdateAll(unsigned short, const Graphics::Space::RenderAttrib &, float)
// Range: 0x802FE6C4 -> 0x802FE99C
void Graphics::RenderableSceneRef::UpdateAll(class RenderableSceneRef * this /* r29 */, float colorMulW /* f31 */) {
    {
        // Range: 0x802FE73C -> 0x802FE878
        // Local variables
        class Renderable3D * rend3D; // r0
    }
}
