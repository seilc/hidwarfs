/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zUIImage.cpp
*/
class _OGUI_ImageSchema _OGUI_Imageschema; // size: 0x18, address: 0x807E4BD8
class SchemaRegistrator _OGUI_ImageschemaReg; // size: 0x8, address: 0x807E4BF0
// Range: 0x801CCD40 -> 0x801CCD50
void World::_OGUI_ImageEntity::Deactivate() {
}
// Range: 0x801CCD50 -> 0x801CCDA0
void World::_OGUI_ImageEntity::Destroy(class _OGUI_ImageEntity * this /* r31 */) {
}
// signature: World::_OGUI_ImageSchema::Fix(World::Asset *, long, int)
// Range: 0x801CCE00 -> 0x801CCE08
void World::_OGUI_ImageSchema::Fix() {
}
// signature: World::_OGUI_ImageSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801CCE10 -> 0x801CCE5C
class EntityStub * World::_OGUI_ImageSchema::CreateStub(class _OGUI_ImageSchema * this /* r31 */) {
}
// signature: World::_OGUI_ImageSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x801CCE60 -> 0x801CCE78
void World::_OGUI_ImageSchema::DestroyStub() {
}
// signature: World::_OGUI_ImageSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x801CCE80 -> 0x801CCEE8
class Entity * World::_OGUI_ImageSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World17_OGUI_ImageEntity;
}
// Range: 0x801CCF30 -> 0x801CD068
void zUIImage::DoInit(class zUIImage * this /* r31 */) {
    // Local variables
    class ScadMgr * scadMgr; // r0

    {
        // Range: 0x801CCFF0 -> 0x801CD040
        // Local variables
        class ImmediateGeometryEntity * immediateGeometry; // r0
        class ImmediatePrototypeEntity * immediatePrototype; // r0
        class EntityHandle * immediatePrototypeHandle; // r0
    }
}
// Range: 0x801CD070 -> 0x801CD084
void zUIImage::DoExit() {
}
// Range: 0x801CD090 -> 0x801CD108
void zUIImage::DoReset(class zUIImage * this /* r31 */) {
}
// Range: 0x801CD110 -> 0x801CD14C
void zUIImage::DoResetMotion(class zUIImage * this /* r31 */) {
}
// signature: zUIImage::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801CD150 -> 0x801CD324
void zUIImage::DoHandleEvent(class zUIImage * this /* r31 */, class EventAny * genericParams /* r24 */) {
    {
        // Range: 0x801CD184 -> 0x801CD2D4
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x801CD2D4 -> 0x801CD30C
        // Local variables
        class xBase * toParamWidgetPtr; // r5
        class EventActionPlayMovie * params; // r0
    }
}
// Range: 0x801CD330 -> 0x801CD5F4
void zUIImage::PlayMovie(class zUIImage * this /* r26 */, class xBase * movieWidget /* r31 */) {
    // Local variables
    class BINK * bink; // r1+0x8
    float scaleFactor; // f31
    float halfScreenWidth; // f30
    float halfScreenHeight; // f2
    float logicalLeft; // f1
    float logicalRight; // f4
    float logicalTop; // f5
    float logicalBottom; // f6
    int left; // r3
    int right; // r4
    int top; // r5
    int bottom; // r6
    class iRect sourceRect; // r1+0x20
    class iRect destinationRect; // r1+0x10
    char fullFileName[256]; // r1+0x30
    char * movieName; // r0

    // References
    // -> enum _tagGameVidMode gVidMode;
}
// signature: AdjustCorner(Sext::UIVertex &, float, float, const xColor_tag &)
// Range: 0x801CD600 -> 0x801CDB0C
void AdjustCorner() {
}
// signature: zUIImage::DoUpdate(float)
// Range: 0x801CDB10 -> 0x801CDB7C
void zUIImage::DoUpdate(class zUIImage * this /* r31 */) {
}
// Range: 0x801CDB80 -> 0x801CDD70
void zUIImage::DoRender(class zUIImage * this /* r31 */) const {
    // Local variables
    class EntityHandle * immediatePrototype; // r30

    {
        // Range: 0x801CDB9C -> 0x801CDD58
        // Local variables
        class Referrer referrer; // r1+0x8

        {
            // Range: 0x801CDBDC -> 0x801CDD58
            // Local variables
            class Renderable3D * renderable; // r30
            class ImmediateRenderUIImage image; // r1+0xC
            class UICorners corners; // r1+0x30
            class Matrix43 transform; // r1+0x60
        }
    }
}
// Range: 0x801CEAA0 -> 0x801CEB64
void zUIImage::DoInitMotion() {
}
// Range: 0x801CEB70 -> 0x801CEC5C
void zUIImage::DoApplyMotionFrame(class zUIImage * this /* r30 */, class zUIMotionFrame * frame /* r31 */) {
}
// Range: 0x801CEC60 -> 0x801CEC88
void zUIImage::Visible() {
    // References
    // -> bool uiAnyActive;
}
// Range: 0x801CEC90 -> 0x801CECB0
void zUIImage::Invisible() {
}
// Range: 0x801CECB0 -> 0x801CECB8
bool zUIImage::Blends() const {
}
// Range: 0x801CECC0 -> 0x801CEE54
void zUIImage::MakeBrightRenderMode(class zUIImage * this /* r28 */) {
    // Local variables
    class StateDelta * blendFactor; // r6

    {
        // Range: 0x801CED48 -> 0x801CED74
        // Local variables
        int i; // r4
    }

    // References
    // -> struct {} __vt__Q28Graphics10RenderMode;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// signature: zUIImage_Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x801CEE60 -> 0x801CEEF4
void zUIImage_Init(class xBase * data /* r30 */, class xDynAsset * asset /* r31 */) {
    // References
    // -> struct {} __vt__8zUIImage;
}
// Range: 0x801CEF00 -> 0x801CEF94
void zUIImage_Init(class zUIImage * image /* r30 */, class UI_Image * asset /* r31 */) {
    // References
    // -> struct {} __vt__8zUIImage;
}
