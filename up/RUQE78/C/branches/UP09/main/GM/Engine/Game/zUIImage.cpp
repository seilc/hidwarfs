/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUIImage.cpp
*/
// Range: 0x8026D6B0 -> 0x8026D7EC
void zUIImage::SetTexture(class zUIImage * this /* r30 */, class EntityHandle * textureHandle /* r31 */) {
    // Local variables
    class ImmediatePrototypeEntity * immediatePrototype; // r3
}
// Range: 0x8026D7F0 -> 0x8026D8B8
void zUIImage::DoInit(class zUIImage * this /* r29 */) {
}
// Range: 0x8026D8C0 -> 0x8026D97C
void zUIImage::DoSetup(class zUIImage * this /* r30 */) {
    {
        // Range: 0x8026D8FC -> 0x8026D954
        // Local variables
        class ImmediateGeometryEntity * immediateGeometry; // r0
        class ImmediatePrototypeEntity * immediatePrototype; // r0
        class EntityHandle * immediatePrototypeHandle; // r0
    }
}
// Range: 0x8026D980 -> 0x8026D9C4
void zUIImage::DoExit(class zUIImage * this /* r31 */) {
}
// Range: 0x8026D9D0 -> 0x8026DA64
void zUIImage::DoReset(class zUIImage * this /* r31 */) {
}
// Range: 0x8026DA70 -> 0x8026DAAC
void zUIImage::DoResetMotion(class zUIImage * this /* r31 */) {
}
// signature: zUIImage::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8026DAB0 -> 0x8026DCF8
void zUIImage::DoHandleEvent(class zUIImage * this /* r31 */, class EventAny * genericParams /* r26 */) {
    {
        // Range: 0x8026DB00 -> 0x8026DC4C
        // Local variables
        class EventActionLegacy * params; // r0
    }
    {
        // Range: 0x8026DC4C -> 0x8026DC88
        // Local variables
        class xBase * toParamWidgetPtr; // r4
        class EventActionPlayMovie * params; // r0
    }
    {
        // Range: 0x8026DC98 -> 0x8026DCDC
        // Local variables
        class EventActionAttachUIImage * paramst; // r0
    }
}
// signature: zUIImage::AttachTo3D(World::xOGEntity *, unsigned int, xVec3 *)
// Range: 0x8026DD00 -> 0x8026DD44
void zUIImage::AttachTo3D() {
}
// Range: 0x8026DD50 -> 0x8026E020
void zUIImage::PlayMovie(class zUIImage * this /* r26 */, class xBase * movieWidget /* r31 */) {
    // Local variables
    class BINK * bink; // r1+0x10
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
    class iRect sourceRect; // r1+0x28
    class iRect destinationRect; // r1+0x18
    char fullFileName[256]; // r1+0x38
    char * movieName; // r0

    // References
    // -> enum _tagGameVidMode gVidMode;
}
// signature: AdjustCorner(Sext::UIVertex &, float, float, const xColor &)
// Range: 0x8026E020 -> 0x8026E52C
void AdjustCorner() {
}
// Range: 0x8026E530 -> 0x8026E75C
void zUIImage::DoUpdate(class zUIImage * this /* r31 */, float dt /* f30 */) {
}
// Range: 0x8026E760 -> 0x8026E954
void zUIImage::DoRender(class zUIImage * this /* r31 */) const {
    // Local variables
    class EntityHandle * immediatePrototype; // r30

    {
        // Range: 0x8026E77C -> 0x8026E93C
        // Local variables
        class Referrer referrer; // r1+0x8

        {
            // Range: 0x8026E7BC -> 0x8026E93C
            // Local variables
            class Renderable3D * renderable; // r30
            class ImmediateRenderUIImage image; // r1+0xC
            class UICorners corners; // r1+0x30
            class Matrix43 uiTransform; // r1+0x60
        }
    }
}
// Range: 0x8026F5D0 -> 0x8026F68C
void zUIImage::DoInitMotion() {
}
// Range: 0x8026F690 -> 0x8026F77C
void zUIImage::DoApplyMotionFrame(class zUIImage * this /* r30 */, class zUIMotionFrame * frame /* r31 */) {
}
// Range: 0x8026F7B0 -> 0x8026F940
void zUIImage::MakeBrightRenderMode(class zUIImage * this /* r28 */) {
    // Local variables
    class StateDelta * blendFactor; // r6

    {
        // Range: 0x8026F838 -> 0x8026F864
        // Local variables
        int i; // r4
    }

    // References
    // -> struct {} __vt__Q28Graphics10RenderMode;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x8026F940 -> 0x8026FA40
class Entity * Sext::UI_Image::Create(class EntityHandleBase * handle /* r29 */, class UI_Image * asset /* r30 */) {
    // References
    // -> struct {} __vt__8zUIImage;
    // -> struct {} __vt__Q25World9xOGEntity;
}
