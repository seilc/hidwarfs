/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zUIImage.cpp
*/
// Range: 0x80182060 -> 0x801820EC
void zUIImage::SetTexture(class zUIImage * this /* r29 */, class EntityHandle * textureHandle /* r30 */) {
    // Local variables
    class ImmediateGeometryEntity * immediateGeometry; // r0
}
// Range: 0x801820F0 -> 0x80182128
void zUIImage::DoInit(class zUIImage * this /* r31 */) {
}
// Range: 0x80182130 -> 0x801821D0
void zUIImage::LoadingScreenSetup(class zUIImage * this /* r30 */) {
    {
        // Range: 0x80182168 -> 0x801821AC
        // Local variables
        class ImmediateGeometryEntity * immediateGeometry; // r0
        class ImmediatePrototypeEntity * immediatePrototype; // r0
        class EntityHandle * immediatePrototypeHandle; // r0
    }
}
// Range: 0x801821D0 -> 0x80182214
void zUIImage::DoExit(class zUIImage * this /* r31 */) {
}
// Range: 0x80182220 -> 0x80182274
void zUIImage::DoReset(class zUIImage * this /* r31 */) {
}
// Range: 0x80182280 -> 0x801822BC
void zUIImage::DoResetMotion(class zUIImage * this /* r31 */) {
}
// signature: zUIImage::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x801822C0 -> 0x801823D8
void zUIImage::DoHandleEvent(class zUIImage * this /* r28 */, class EventAny * genericParams /* r29 */) {
    {
        // Range: 0x8018230C -> 0x80182350
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x80182350 -> 0x8018238C
        // Local variables
        class xBase * toParamWidgetPtr; // r4
        class EventActionPlayMovie * params; // r0
    }
    {
        // Range: 0x8018239C -> 0x801823C0
        // Local variables
        class EventActionAttachUIImage * paramst; // r0
    }
}
// signature: zUIImage::AttachTo3D(World::xOGEntity *, unsigned int, xVec3 *)
// Range: 0x801823E0 -> 0x80182414
void zUIImage::AttachTo3D() {
}
// Range: 0x80182420 -> 0x801826E8
void zUIImage::PlayMovie(class zUIImage * this /* r26 */, class xBase * movieWidget /* r30 */) {
    // Local variables
    class BINK * bink; // r1+0x18
    float scaleFactor; // f31
    float halfScreenWidth; // f30
    float halfScreenHeight; // f1
    float logicalLeft; // f4
    float logicalRight; // f5
    float logicalTop; // f6
    float logicalBottom; // f2
    int left; // r8
    int right; // r9
    int top; // r10
    int bottom; // r11
    class iRect sourceRect; // r1+0x30
    class iRect destinationRect; // r1+0x20
    char fullFileName[256]; // r1+0x40
    char * movieName; // r0

    // References
    // -> enum _tagGameVidMode gVidMode;
}
// signature: AdjustCorner(Sext::UIVertex &, float, float, const xColor &)
// Range: 0x801826F0 -> 0x80182BFC
void AdjustCorner() {
}
// Range: 0x80182C00 -> 0x80182C84
void zUIImage::DoUpdate(class zUIImage * this /* r31 */, float dt /* f31 */) {
}
// Range: 0x80182C90 -> 0x80182F94
void zUIImage::DoRender(class zUIImage * this /* r29 */) const {
    // Local variables
    class EntityHandle * immediatePrototype; // r26

    {
        // Range: 0x80182CB4 -> 0x80182F74
        // Local variables
        class Referrer referrer; // r1+0x10

        {
            // Range: 0x80182CDC -> 0x80182F74
            // Local variables
            class Renderable3D * renderable; // r26
            class ImmediateRenderUIImage image; // r1+0x18
            class UICorners corners; // r1+0x48
            class Matrix43 uiTransform; // r1+0x78
        }
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80182FA0 -> 0x80182FDC
void zUIImage::DoInitMotion(class zUIImage * this /* r31 */) {
}
// Range: 0x80182FE0 -> 0x80183038
void zUIImage::DoApplyMotionFrame(class zUIImage * this /* r30 */, class zUIMotionFrame * frame /* r31 */) {
}
// Range: 0x80183040 -> 0x80183044
void zUIImage::Visible() {
}
// Range: 0x80183050 -> 0x80183054
void zUIImage::Invisible() {
}
// Range: 0x80183060 -> 0x8018317C
void zUIImage::MakeBrightRenderMode(class zUIImage * this /* r31 */) {
    // Local variables
    class StateDelta * blendFactor; // r6

    {
        // Range: 0x801830B4 -> 0x801830E4
        // Local variables
        int i; // r0
    }

    // References
    // -> struct {} __vt__Q28Graphics10RenderMode;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x80183180 -> 0x801831FC
class Entity * Sext::UI_Image::Create(class EntityHandleBase * handle /* r29 */, class UI_Image * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zUIImage;
}
// Range: 0x80183200 -> 0x80183338
void zUIImage::DoUpdateFrom3D(class zUIImage * this /* r30 */) {
    {
        // Range: 0x80183224 -> 0x80183318
        // Local variables
        float iw; // r1+0x8
        class xVec2 screenPoint; // r1+0x10
        class xMat4x3 realWorldMat; // r1+0x18

        {
            // Range: 0x80183260 -> 0x801832DC
            // Local variables
            float viewportY; // f31
            float viewportX; // f1
        }
    }
}
