/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUIBox.cpp
*/
// signature: zUIBox::DoUpdate(float)
// Range: 0x802B0680 -> 0x802B0720
void zUIBox::DoUpdate(class zUIBox * this /* r28 */) {
    {
        // Range: 0x802B06A8 -> 0x802B06F0
        // Local variables
        int i; // r29
    }
}
// signature: zUIBox::MakeBrightRenderMode(int)
// Range: 0x802B0720 -> 0x802B08A8
void zUIBox::MakeBrightRenderMode(class zUIBox * this /* r27 */) {
    // Local variables
    class StateDelta * blendFactor; // r6

    {
        // Range: 0x802B07A4 -> 0x802B07D4
        // Local variables
        int i; // r4
    }

    // References
    // -> struct {} __vt__Q28Graphics10RenderMode;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x802B08B0 -> 0x802B0C28
void zUIBox::DoInit(class zUIBox * this /* r27 */) {
    {
        // Range: 0x802B08C8 -> 0x802B0914
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x802B09C8 -> 0x802B0BF8
        // Local variables
        int i; // r29

        {
            // Range: 0x802B09D0 -> 0x802B0BEC
            // Local variables
            class ImmediateGeometryEntity * immediateGeometry; // r0
            class ImmediatePrototypeEntity * immediatePrototype; // r0
            class ImmediateInstanceAsset immediateData; // r1+0x8
            class EntityHandle * immediatePrototypeHandle; // r28
        }
    }
}
// Range: 0x802B0C30 -> 0x802B0C98
void zUIBox::DoExit(class zUIBox * this /* r29 */) {
    {
        // Range: 0x802B0C44 -> 0x802B0C64
        // Local variables
        int i; // r30
    }
}
// signature: zUIBox::DoHandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802B0CA0 -> 0x802B0E60
void zUIBox::DoHandleEvent(class zUIBox * this /* r29 */, class EventAny * genericParams /* r25 */) {
    {
        // Range: 0x802B0CC8 -> 0x802B0E44
        // Local variables
        class EventActionLegacy * params; // r0
    }
}
// Range: 0x802B0E60 -> 0x802B1298
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
// Range: 0x802B12A0 -> 0x802B1688
void zUIBox::RenderPart(class zUIBox * this /* r30 */, int p /* r31 */, float x1 /* f25 */, float y1 /* f26 */, float x2 /* f28 */, float y2 /* f27 */, float uScale /* f30 */, float vScale /* f31 */) const {
    // Local variables
    class BoxPart * partPtr; // r28
    class EntityHandle * immediatePrototype; // r27

    {
        // Range: 0x802B13B0 -> 0x802B1638
        // Local variables
        class Referrer referrer; // r1+0x8

        {
            // Range: 0x802B13F0 -> 0x802B1638
            // Local variables
            class Renderable3D * renderable; // r27
            class ImmediateRenderUIImage image; // r1+0x40
            class UICorners corners; // r1+0x68
            float height; // f27
            float width; // f29
            class Matrix43 transform; // r1+0x98
        }
    }
}
// Range: 0x802B1750 -> 0x802B1818
class Entity * Sext::UI_Box::Create(class EntityHandleBase * handle /* r29 */, class UI_Box * asset /* r30 */) {
    // References
    // -> struct {} __vt__6zUIBox;
    // -> struct {} __vt__Q25World9xOGEntity;
}
