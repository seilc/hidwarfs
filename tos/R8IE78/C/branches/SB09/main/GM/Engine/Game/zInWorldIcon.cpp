/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zInWorldIcon.cpp
*/
// Range: 0x800CDC70 -> 0x800CDC90
void zInWorldIcon::Reset() {
}
// signature: zInWorldIcon::SetState(zInWorldIcon::eFadeState)
// Range: 0x800CDC90 -> 0x800CDCCC
void zInWorldIcon::SetState() {
}
// signature: zInWorldIcon::InsideRadii(float)
// Range: 0x800CDCD0 -> 0x800CDCF8
bool zInWorldIcon::InsideRadii() {
}
// Range: 0x800CDD00 -> 0x800CE034
void zInWorldIcon::UpdateAndRender(class zInWorldIcon * this /* r31 */, float dt /* f30 */) {
    // Local variables
    float closestDist2; // f31

    {
        // Range: 0x800CDD3C -> 0x800CDDA8
        // Local variables
        int i; // r28

        {
            // Range: 0x800CDD3C -> 0x800CDDA8
            // Local variables
            float dist2; // f1
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800CE040 -> 0x800CE344
void zInWorldIcon::RenderIconInWorld(class zInWorldIcon * this /* r28 */) {
    // Local variables
    class xVec3 topLeft; // r1+0x40
    class xVec3 topRight; // r1+0x34
    class xVec3 bottomLeft; // r1+0x28
    class xVec3 bottomRight; // r1+0x1C
    class xMat4x3 cameraMatrix; // r1+0x78
    float curScale; // f31
    unsigned int alphaValue; // r28

    {
        // Range: 0x800CE0B8 -> 0x800CE120
        // Local variables
        class xVec3 lookAt; // r1+0x10
    }
    {
        // Range: 0x800CE1E8 -> 0x800CE324
        // Local variables
        class Renderable3D * rend; // r28
        class ImmediateContext immCtxt; // r1+0x4C
    }

    // References
    // -> class Scene * primaryScene;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800CE3E0 -> 0x800CE428
void zInWorldIconWidget::Init(class zInWorldIconWidget * this /* r30 */, class zInWorldIconWidgetAsset * inAsset /* r31 */) {
}
// signature: zInWorldIconWidget::GetTargetPosition(xBase *)
// Range: 0x800CE430 -> 0x800CE4E0
void zInWorldIconWidget::GetTargetPosition(class zInWorldIconWidget * this /* r31 */) {
}
// Range: 0x800CE4E0 -> 0x800CE5E0
void zInWorldIconWidget::Setup(class zInWorldIconWidget * this /* r30 */) {
    // Local variables
    class EntityHandleBase * modelgoodie; // r0
}
// Range: 0x800CE5E0 -> 0x800CE660
void zInWorldIconWidget::Reset(class zInWorldIconWidget * this /* r30 */) {
}
// Range: 0x800CE660 -> 0x800CE6B8
void zInWorldIconWidget::DebugReset(class zInWorldIconWidget * this /* r29 */) {
}
// signature: zInWorldIconWidget::SetState(zInWorldIconWidget::eFadeState)
// Range: 0x800CE6C0 -> 0x800CE6FC
void zInWorldIconWidget::SetState() {
}
// Range: 0x800CE700 -> 0x800CE7EC
bool zInWorldIconWidget::InsideRadii(class zInWorldIconWidget * this /* r31 */, float playerDist2 /* f30 */, float cameraDist2 /* f31 */) {
    // Local variables
    class xVec3 actualPos; // r1+0x2C
    class xVec3 sbPos; // r1+0x20
}
// Range: 0x800CE7F0 -> 0x800CEBF4
void zInWorldIconWidget::UpdateAndRender(class zInWorldIconWidget * this /* r31 */, float dt /* f30 */) {
    // Local variables
    float playerDist2; // f31
    class xVec3 iconPos; // r1+0x2C
    float cameraDist2; // f2

    {
        // Range: 0x800CE83C -> 0x800CE8A4
        // Local variables
        int i; // r28

        {
            // Range: 0x800CE83C -> 0x800CE8A4
            // Local variables
            float dist2; // f1
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800CEC00 -> 0x800CF180
void zInWorldIconWidget::RenderIconInWorld(class zInWorldIconWidget * this /* r30 */) {
    // Local variables
    class xVec3 topLeft; // r1+0x7C
    class xVec3 topRight; // r1+0x70
    class xVec3 bottomLeft; // r1+0x64
    class xVec3 bottomRight; // r1+0x58
    class xMat4x3 cameraMatrix; // r1+0x188
    float curScale; // f31
    class xVec3 actualPos; // r1+0x40
    unsigned int alphaValue; // r27

    {
        // Range: 0x800CEC78 -> 0x800CECE0
        // Local variables
        class xVec3 lookAt; // r1+0x4C
    }
    {
        // Range: 0x800CED18 -> 0x800CED84
        // Local variables
        float shakingY; // f1
    }
    {
        // Range: 0x800CEE2C -> 0x800CF160
        // Local variables
        class Vector4 boundSphere; // r1+0x30
        class BroadBound bbound; // r1+0x88
        class Renderable3D * rend; // r27
        class ImmediateContext immCtxt; // r1+0x158

        {
            // Range: 0x800CEE84 -> 0x800CEED8
            // Local variables
            class ImmediateContext tmpTxt; // r1+0x12C
        }
        {
            // Range: 0x800CEEDC -> 0x800CEF34
            // Local variables
            class ImmediateContext tmpTxt; // r1+0x100
        }
        {
            // Range: 0x800CEF34 -> 0x800CEF70
            // Local variables
            class ImmediateContext tmpTxt; // r1+0xD4
        }
        {
            // Range: 0x800CEF70 -> 0x800CEFB4
            // Local variables
            class ImmediateContext tmpTxt; // r1+0xA8
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> class zGlobals globals;
    // -> class xVec3 m_UnitAxisY;
}
// signature: zInWorldIconWidget::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800CF1F0 -> 0x800CF26C
void zInWorldIconWidget::HandleEvent() {
}
// Range: 0x800CF270 -> 0x800CF2EC
class Entity * Sext::zInWorldIconWidgetAsset::Create(class EntityHandleBase * handle /* r29 */, class zInWorldIconWidgetAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__18zInWorldIconWidget;
}
