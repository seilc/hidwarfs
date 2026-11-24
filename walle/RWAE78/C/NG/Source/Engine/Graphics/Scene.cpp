/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Graphics\Scene.cpp
*/
static class SceneModule mod; // size: 0x98, address: 0x80801328
static class ModuleRegistrator sceneModReg; // size: 0x8, address: 0x808013C0
class Module * sceneModule; // size: 0x4, address: 0x807096C4
static class RelativePriority priority[2]; // size: 0x18, address: 0x807096C8
// signature: @unnamed@WAD01_cpp@::SceneModule::GetPriority(int &) const
// Range: 0x80265D08 -> 0x80265D4C
static class RelativePriority * @unnamed@WAD01_cpp@::SceneModule::GetPriority() const {
    // References
    // -> static class RelativePriority priority[2];
    // -> class Module * sceneGraphModule;
}
// signature: @unnamed@WAD01_cpp@::SceneModule::Startup(int)
// Range: 0x80265D4C -> 0x80265D50
static void @unnamed@WAD01_cpp@::SceneModule::Startup() {
}
// signature: @unnamed@WAD01_cpp@::SceneModule::Shutdown(int)
// Range: 0x80265D50 -> 0x80265D54
static void @unnamed@WAD01_cpp@::SceneModule::Shutdown() {
}
// signature: Graphics::Scene::GetCreateSize(int, int, int)
// Range: 0x80265D54 -> 0x80265D70
int Graphics::Scene::GetCreateSize() {
}
// signature: Graphics::Scene::Create(void *, int, int, int, int)
// Range: 0x80265D70 -> 0x8026612C
void Graphics::Scene::Create(class Scene * this /* r27 */) {
    // Local variables
    class StackAllocator allocator; // r1+0x8

    {
        // Range: 0x80265E58 -> 0x80265E58
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x80265E58 -> 0x80266030
        // Local variables
        unsigned long i; // r28
    }
    {
        // Range: 0x8026604C -> 0x802660F8
        // Local variables
        unsigned long i; // r25
    }

    // References
    // -> class LightKitManager * g_instance;
}
// Range: 0x8026612C -> 0x80266188
void Graphics::Scene::Destroy() {
    {
        // Range: 0x8026613C -> 0x8026615C
        // Local variables
        unsigned long i; // r29
    }

    // References
    // -> class LightKitManager * g_instance;
}
// Range: 0x80266188 -> 0x80266208
void Graphics::Scene::AttachAll(class Scene * this /* r31 */) {
}
// Range: 0x80266208 -> 0x8026620C
void Graphics::Scene::RenderAttach() {
}
// Range: 0x8026620C -> 0x80266210
void Graphics::Scene::RenderDetach() {
}
// Range: 0x80266210 -> 0x80266268
void Graphics::Scene::StepBegin() {
}
// Range: 0x80266268 -> 0x802662C0
void Graphics::Scene::Update() {
}
// Range: 0x802662C0 -> 0x80266318
void Graphics::Scene::StepEnd() {
}
// Range: 0x80266318 -> 0x80266370
void Graphics::Scene::RenderFrameBegin() {
}
// Range: 0x80266370 -> 0x802663C8
void Graphics::Scene::RenderFrameEnd() {
}
// Range: 0x802663C8 -> 0x80266504
void Graphics::Scene::GetMaxBatchSize(class Scene * this /* r28 */, int * viewBatchSize /* r29 */) {
    {
        // Range: 0x802663E4 -> 0x802664E0
        // Local variables
        int i; // r30

        {
            // Range: 0x802663E4 -> 0x802664E0
            // Local variables
            class View * view; // r5
        }
    }

    // References
    // -> int gperf_shadows;
}
// Range: 0x80266504 -> 0x802667B8
void Graphics::Scene::GetBatches(class Scene * this /* r28 */, class PoolArray * viewBatchList /* r29 */, class PoolArray * renderEntries /* r30 */, class PoolArray * dynamicList /* r31 */) {
    // Local variables
    class StackPoolArray sortedViewArray; // r1+0x8

    {
        // Range: 0x80266564 -> 0x8026658C
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x802665D0 -> 0x802665D8
        // Local variables
        int i; // r15

        {
            // Range: 0x802665D0 -> 0x802665D8
            // Local variables
            class View * view; // r5

            {
                // Range: 0x802665D8 -> 0x802665D8
                {
                    // Range: 0x802665D8 -> 0x802665D8
                    {
                        // Range: 0x802665D8 -> 0x802665D8
                        {
                            // Range: 0x802665D8 -> 0x802665D8
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
// Range: 0x802667B8 -> 0x802667D8
void Graphics::Scene::AddView() {
}
// Range: 0x802667D8 -> 0x80266AD8
void Graphics::Scene::AddRenderable(class Scene * this /* r29 */, class Renderable * renderable /* r30 */) {
    // Local variables
    bool isDynamic; // r0

    {
        // Range: 0x802669E8 -> 0x80266ABC
        // Local variables
        class Renderable3D * rend3d; // r0

        {
            // Range: 0x802669FC -> 0x80266AA8
            // Local variables
            int foundIndex; // r5

            {
                // Range: 0x80266A08 -> 0x80266A80
                // Local variables
                unsigned short lightMask; // r0

                {
                    // Range: 0x80266A24 -> 0x80266A80
                    // Local variables
                    int i; // r0
                }
            }
        }
    }
}
// signature: Graphics::Scene::RemoveRenderable(Graphics::Renderable *)
// Range: 0x80266AE0 -> 0x80266CD8
void Graphics::Scene::RemoveRenderable() {
    // Local variables
    class RenderableSceneRef * cur; // r6
    bool isDynamic; // r0

    {
        // Range: 0x80266C18 -> 0x80266CD4
        // Local variables
        class LightKitData * kit; // r5
        class Renderable3D * rend3d; // r0
    }
}
// signature: Graphics::Scene::AddLightPointSpot(Graphics::LightPointSpot *)
// Range: 0x80266CD8 -> 0x80266CFC
void Graphics::Scene::AddLightPointSpot() {
}
// signature: Graphics::Scene::RemoveLightPointSpot(Graphics::LightPointSpot *)
// Range: 0x80266CFC -> 0x80266D70
void Graphics::Scene::RemoveLightPointSpot() {
}
// signature: Graphics::Scene::ApplyLightKitScene(const World::LightKitSceneEntity *)
// Range: 0x80266D70 -> 0x80266F20
void Graphics::Scene::ApplyLightKitScene() {
    {
        // Range: 0x80266D98 -> 0x80266EE8
        // Local variables
        int i; // r28
    }
}
// Range: 0x80266F20 -> 0x802670C4
void Graphics::Scene::UnapplyLightKitScene(class Scene * this /* r28 */) {
    {
        // Range: 0x80266F58 -> 0x80267090
        // Local variables
        int i; // r29
    }
}
// Range: 0x802670C4 -> 0x8026718C
void Graphics::Scene::UpdateDynamicBounds(class Scene * this /* r28 */) {
    {
        // Range: 0x802670EC -> 0x8026714C
        // Local variables
        int i; // r29

        {
            // Range: 0x802670EC -> 0x8026714C
            {
                // Range: 0x80267108 -> 0x8026714C
                // Local variables
                class Renderable3D * rend3D; // r8
            }
        }
    }
}
// Range: 0x8026718C -> 0x80267250
void Graphics::Scene::UpdateLightArrays() {
    {
        // Range: 0x8026718C -> 0x8026724C
        // Local variables
        int end; // r0
        int i; // r0
    }
}
// signature: Graphics::RenderableSceneRef::UpdateAll(unsigned short, const Graphics::Space::RenderAttrib &, float)
// Range: 0x80267250 -> 0x80267540
void Graphics::RenderableSceneRef::UpdateAll(class RenderableSceneRef * this /* r29 */, float colorMulW /* f31 */) {
    {
        // Range: 0x802672C4 -> 0x8026741C
        // Local variables
        class Renderable3D * rend3D; // r0
    }
}
