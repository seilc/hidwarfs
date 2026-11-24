/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zUIBox.cpp
*/
// signature: zUIBox::DoUpdate(float)
// Range: 0x8019E7C0 -> 0x8019E84C
void zUIBox::DoUpdate(class zUIBox * this /* r28 */) {
    {
        // Range: 0x8019E7D8 -> 0x8019E838
        // Local variables
        int i; // r29
    }
}
// signature: zUIBox::MakeBrightRenderMode(int)
// Range: 0x8019E850 -> 0x8019E978
void zUIBox::MakeBrightRenderMode(class zUIBox * this /* r29 */) {
    // Local variables
    class StateDelta * blendFactor; // r6

    {
        // Range: 0x8019E8AC -> 0x8019E8DC
        // Local variables
        int i; // r0
    }

    // References
    // -> struct {} __vt__Q28Graphics10RenderMode;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x8019E980 -> 0x8019EBD0
void zUIBox::DoInit(class zUIBox * this /* r29 */) {
    {
        // Range: 0x8019E998 -> 0x8019E9C8
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x8019EA7C -> 0x8019EBB0
        // Local variables
        int i; // r31

        {
            // Range: 0x8019EA84 -> 0x8019EA88
            // Local variables
            class ImmediateGeometryEntity * immediateGeometry; // r0
            class ImmediatePrototypeEntity * immediatePrototype; // r0
            class ImmediateInstanceAsset immediateData; // r1+0x8
            class EntityHandle * immediatePrototypeHandle; // r30
        }
    }
}
// Range: 0x8019EC00 -> 0x8019EC5C
void zUIBox::DoExit(class zUIBox * this /* r29 */) {
    {
        // Range: 0x8019EC14 -> 0x8019EC40
        // Local variables
        int i; // r30
    }
}
// signature: zUIBox::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8019EC60 -> 0x8019ECF0
void zUIBox::DoHandleEvent(class zUIBox * this /* r28 */, class EventAny * genericParams /* r29 */) {
    {
        // Range: 0x8019EC88 -> 0x8019ECD4
        // Local variables
        class EventActionLegacy * params; // r0
    }
}
// signature: zUIBox::SetTexture(int, unsigned long long)
// Range: 0x8019ECF0 -> 0x8019EDAC
void zUIBox::SetTexture(class zUIBox * this /* r27 */, int p /* r28 */) {
    // Local variables
    class EntityHandle * textureHandle; // r0
    class ImmediateGeometryEntity * immediateGeometry; // r0
}
// Range: 0x8019EDB0 -> 0x8019F18C
void zUIBox::DoRender(class zUIBox * this /* r30 */) const {
    // Local variables
    class Matrix43 transform; // r1+0x68
    float x1; // r31
    float y1; // f31
    float x2; // f30
    float y2; // f29
    float curBorderWidth; // f25
    float curBorderHeight; // f0
    float x1i; // f28
    float y1i; // f27
    float x2i; // f26
    float y2i; // f25
    float xCenter; // f0
    float yCenter; // f0
    float yScale; // f24
    float xScale; // f24
}
// Range: 0x8019F190 -> 0x8019F54C
void zUIBox::RenderPart(class zUIBox * this /* r28 */, int p /* r29 */, float x1 /* f26 */, float y1 /* f29 */, float x2 /* f27 */, float y2 /* f28 */, float uScale /* f30 */, float vScale /* f31 */) const {
    // Local variables
    class BoxPart * partPtr; // r31
    class EntityHandle * immediatePrototype; // r30

    {
        // Range: 0x8019F294 -> 0x8019F504
        // Local variables
        class Referrer referrer; // r1+0x8

        {
            // Range: 0x8019F2BC -> 0x8019F504
            // Local variables
            class Renderable3D * renderable; // r30
            class ImmediateRenderUIImage image; // r1+0x70
            class UICorners corners; // r1+0xA0
            float height; // f28
            float width; // f27
            class Matrix43 transform; // r1+0xD0
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class Vector4 vec4Zero;
}
// Range: 0x8019F560 -> 0x8019F5D4
class Entity * Sext::UI_Box::Create(class EntityHandleBase * handle /* r29 */, class UI_Box * asset /* r30 */) {
}
