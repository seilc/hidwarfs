/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Graphics\Scene.cpp
*/
static class SceneModule mod; // size: 0x98, address: 0x80777580
static class ModuleRegistrator sceneModReg; // size: 0x8, address: 0x80777618
class Module * sceneModule; // size: 0x4, address: 0x806CD2D8
class RelativePriority priority[2]; // size: 0x18, address: 0x806CD2E0
unsigned int WORK_AREA_SIZE; // size: 0x4, address: 0x806931A0
// signature: @unnamed@WAD01_cpp@::InsertUnique<Graphics::LightPointSpot>(Util::PoolArray<Graphics::LightPointSpot *> &, Graphics::LightPointSpot *)
// Range: 0x801CF970 -> 0x801CF990
static void @unnamed@WAD01_cpp@::InsertUnique<Graphics::LightPointSpot>() {
}
// signature: @unnamed@WAD01_cpp@::EraseUnique<Graphics::LightPointSpot>(Util::PoolArray<Graphics::LightPointSpot *> &, Graphics::LightPointSpot *)
// Range: 0x801CF9C0 -> 0x801CFA2C
static void @unnamed@WAD01_cpp@::EraseUnique<Graphics::LightPointSpot>() {
    // Local variables
    int index; // r8
    int size; // r0
    int tail; // r0
}
// Range: 0x801CEC00 -> 0x801CEC44
static void * @unnamed@WAD01_cpp@::SceneModule::SceneModule(class SceneModule * this /* r31 */) {
    // References
    // -> static struct {} __vt__Q219@unnamed@WAD01_cpp@11SceneModule;
}
// signature: @unnamed@WAD01_cpp@::SceneModule::GetPriority(int &) const
// Range: 0x801CEC50 -> 0x801CEC94
static class RelativePriority * @unnamed@WAD01_cpp@::SceneModule::GetPriority() const {
    // References
    // -> class RelativePriority priority[2];
    // -> class Module * sceneGraphModule;
}
// signature: Graphics::Scene::GetCreateSize(int, int, int, int)
// Range: 0x801CECA0 -> 0x801CECC0
int Graphics::Scene::GetCreateSize() {
}
// signature: Graphics::Scene::Create(void *, int, int, int, int, int)
// Range: 0x801CECC0 -> 0x801CEF08
void Graphics::Scene::Create(class Scene * this /* r31 */, int maxViews /* r25 */, int maxRend3D /* r26 */, int maxRendUI /* r27 */, int maxLights /* r28 */) {
    // Local variables
    class StackAllocator allocator; // r1+0x8

    {
        // Range: 0x801CEE8C -> 0x801CEEBC
        // Local variables
        unsigned long i; // r29
    }
    {
        // Range: 0x801CEEBC -> 0x801CEEE8
        // Local variables
        unsigned long i; // r28
    }

    // References
    // -> class LightKitManager * g_instance;
    // -> class Texture * g_defaultTex;
}
// Range: 0x801CEF30 -> 0x801CEF84
void Graphics::Scene::Destroy(class Scene * this /* r28 */) {
    {
        // Range: 0x801CEF44 -> 0x801CEF70
        // Local variables
        unsigned long i; // r29
    }

    // References
    // -> class LightKitManager * g_instance;
}
// Range: 0x801CEF90 -> 0x801CEFF0
void Graphics::Scene::AttachAll(class Scene * this /* r31 */) {
}
// Range: 0x801CEFF0 -> 0x801CEFF4
void Graphics::Scene::RenderAttach() {
}
// Range: 0x801CF000 -> 0x801CF004
void Graphics::Scene::RenderDetach() {
}
// Range: 0x801CF010 -> 0x801CF060
void Graphics::Scene::StepBegin() {
}
// Range: 0x801CF060 -> 0x801CF0B0
void Graphics::Scene::Update() {
}
// Range: 0x801CF0B0 -> 0x801CF100
void Graphics::Scene::StepEnd() {
}
// Range: 0x801CF100 -> 0x801CF150
void Graphics::Scene::RenderFrameBegin() {
}
// Range: 0x801CF150 -> 0x801CF1A0
void Graphics::Scene::RenderFrame() {
}
// Range: 0x801CF1A0 -> 0x801CF1F0
void Graphics::Scene::RenderFrameEnd() {
}
// Range: 0x801CF1F0 -> 0x801CF300
void Graphics::Scene::GetMaxBatchSize(class Scene * this /* r29 */, int & viewBatchSize /* r30 */) {
    {
        // Range: 0x801CF20C -> 0x801CF2EC
        // Local variables
        int i; // r31

        {
            // Range: 0x801CF20C -> 0x801CF2EC
            // Local variables
            class View * view; // r3
        }
    }

    // References
    // -> int gperf_shadows;
}
// Range: 0x801CF300 -> 0x801CF668
void Graphics::Scene::GetBatches(class Scene * this /* r15 */, class PoolArray & viewBatchList /* r16 */, class PoolArray & renderEntries /* r17 */, class PoolArray & dynamicList /* r18 */) {
    // Local variables
    class StackPoolArray sortedViewArray; // r1+0x14
    int viewportCount; // r14
    int lastCategoryViewports[3]; // r1+0x8

    {
        // Range: 0x801CF358 -> 0x801CF3B8
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x801CF3E0 -> 0x801CF4AC
        // Local variables
        int i; // r19

        {
            // Range: 0x801CF3E0 -> 0x801CF4AC
            // Local variables
            class View * view; // r3
        }
    }
    {
        // Range: 0x801CF4AC -> 0x801CF648
        // Local variables
        int i; // r19

        {
            // Range: 0x801CF4AC -> 0x801CF648
            // Local variables
            class View * view; // r3

            {
                // Range: 0x801CF4AC -> 0x801CF648
                {
                    // Range: 0x801CF4AC -> 0x801CF648
                    {
                        // Range: 0x801CF4AC -> 0x801CF648
                        {
                            // Range: 0x801CF4AC -> 0x801CF648
                            // Local variables
                            int addedEntries; // r22
                            bool needFlagClear; // r0
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
// Range: 0x801CF700 -> 0x801CF720
void Graphics::Scene::AddView() {
}
// Range: 0x801CF720 -> 0x801CF840
void Graphics::Scene::AddRenderable(class Scene * this /* r30 */, class Renderable * renderable /* r31 */) {
    // Local variables
    bool isDynamic; // r29

    {
        // Range: 0x801CF79C -> 0x801CF828
        // Local variables
        class Renderable3D * rend3d; // r0

        {
            // Range: 0x801CF7A8 -> 0x801CF814
            // Local variables
            int foundIndex; // r5

            {
                // Range: 0x801CF7B4 -> 0x801CF800
                // Local variables
                unsigned short lightMask; // r0

                {
                    // Range: 0x801CF7D4 -> 0x801CF800
                    // Local variables
                    int i; // r6
                }
            }
        }
    }
}
// Range: 0x801CF840 -> 0x801CF934
void Graphics::Scene::RemoveRenderable(class Scene * this /* r30 */, class Renderable * renderable /* r31 */) {
    {
        // Range: 0x801CF86C -> 0x801CF920
        // Local variables
        class LightKitData * kit; // r4
        class Renderable3D * rend3d; // r0
    }
}
// signature: Graphics::Scene::AddLightPointSpot(Graphics::LightPointSpot *)
// Range: 0x801CF940 -> 0x801CF968
void Graphics::Scene::AddLightPointSpot() {
}
// signature: Graphics::Scene::RemoveLightPointSpot(Graphics::LightPointSpot *)
// Range: 0x801CF990 -> 0x801CF9BC
void Graphics::Scene::RemoveLightPointSpot() {
}
// Range: 0x801CFA30 -> 0x801CFAA8
void Graphics::Scene::ApplyLightKitScene(class Scene * this /* r27 */, class LightKitSceneEntity * lks /* r28 */) {
    {
        // Range: 0x801CFA48 -> 0x801CFA94
        // Local variables
        int i; // r29
    }
}
// Range: 0x801CFAB0 -> 0x801CFB10
void Graphics::Scene::UnapplyLightKitScene(class Scene * this /* r29 */) {
    {
        // Range: 0x801CFAD4 -> 0x801CFAFC
        // Local variables
        int i; // r30
    }
}
// signature: Graphics::Scene::SetRenderSceneCollider(Graphics::RenderSceneCollider *)
// Range: 0x801CFB10 -> 0x801CFB18
void Graphics::Scene::SetRenderSceneCollider() {
}
// Range: 0x801CFB20 -> 0x801CFBF0
void Graphics::Scene::UpdateDynamicBounds(class Scene * this /* r24 */) {
    {
        // Range: 0x801CFB4C -> 0x801CFBC8
        // Local variables
        int rl; // r28

        {
            // Range: 0x801CFB4C -> 0x801CFBC8
            // Local variables
            int insize; // r26
            class RenderableSceneRef * in; // r27

            {
                // Range: 0x801CFB58 -> 0x801CFBC8
                // Local variables
                int i; // r25

                {
                    // Range: 0x801CFB58 -> 0x801CFBC8
                    // Local variables
                    class RenderableSceneRef & cur; // r4

                    {
                        // Range: 0x801CFB6C -> 0x801CFBC8
                        // Local variables
                        class Renderable3D * rend3D; // r5
                    }
                }
            }
        }
    }
}
// Range: 0x801CFBF0 -> 0x801CFC84
void Graphics::Scene::UpdateRendLists() {
}
// Range: 0x801CFC90 -> 0x801CFD58
void Graphics::Scene::UpdateLightArrays() {
    {
        // Range: 0x801CFC90 -> 0x801CFD54
        // Local variables
        int end; // r0
        int i; // r0
    }
}
// Range: 0x801CFD60 -> 0x801CFD84
void Graphics::RenderableSceneRef::UpdateTechnique() {
}
// signature: Graphics::RenderableSceneRef::UpdateAll(unsigned short, const Graphics::Space::RenderAttrib &, float)
// Range: 0x801CFD90 -> 0x801CFF94
void Graphics::RenderableSceneRef::UpdateAll(class RenderableSceneRef * this /* r30 */, float colorMulW /* f31 */) {
    {
        // Range: 0x801CFDE8 -> 0x801CFED4
        // Local variables
        class Renderable3D * rend3D; // r0
    }
}
// Range: 0x801CFFA0 -> 0x801D0040
void Graphics::RenderableHolder::Init(class RenderableHolder * this /* r28 */, class RenderableSceneRef * buffer /* r29 */, int max3D /* r30 */, int maxOtherUI /* r31 */) {
}
// signature: Graphics::RenderableHolder::Insert(Graphics::Renderable *, bool)
// Range: 0x801D0040 -> 0x801D01D8
void Graphics::RenderableHolder::Insert(class Renderable * rend /* r30 */) {
    // Local variables
    class QuadArray * which; // r31
}
// signature: Graphics::RenderableHolder::Remove(Graphics::Renderable *, bool)
// Range: 0x801D01E0 -> 0x801D032C
void Graphics::RenderableHolder::Remove(class Renderable * rend /* r29 */) {
    // Local variables
    class RenderableSceneRef * cur; // r31
    class RenderableSceneRef * tail; // r4
    class QuadArray * which; // r30

    {
        // Range: 0x801D0244 -> 0x801D0278
        // Local variables
        class RenderableSceneRef * firstRegular; // r28
    }
    {
        // Range: 0x801D0298 -> 0x801D02E0
        // Local variables
        class RenderableSceneRef * lastDyn; // r28
    }
}
