/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zInWorldIcon.cpp
*/
// signature: zInWorldIcon::Setup(unsigned int, xVec3 *, float, float, float)
// Range: 0x80185370 -> 0x80185450
void zInWorldIcon::Setup(class zInWorldIcon * this /* r30 */, class xVec3 * useThisPos /* r31 */, float useThisScale /* f29 */, float useThisOuterRadius /* f30 */, float useThisInnerRadius /* f31 */) {
    // Local variables
    class EntityHandleBase * modelgoodie; // r0
}
// signature: zInWorldIcon::SwapIcon(unsigned int)
// Range: 0x80185450 -> 0x801854B0
void zInWorldIcon::SwapIcon(class zInWorldIcon * this /* r31 */) {
    // Local variables
    class EntityHandleBase * modelgoodie; // r0
}
// Range: 0x801854B0 -> 0x801854D0
void zInWorldIcon::Reset() {
}
// signature: zInWorldIcon::UpdateAndRender(float)
// Range: 0x801854D0 -> 0x801858D8
void zInWorldIcon::UpdateAndRender() {
    // Local variables
    float closestDist2; // f6

    {
        // Range: 0x801854F8 -> 0x801854F8
        // Local variables
        int i; // r0

        {
            // Range: 0x801854F8 -> 0x801854F8
            // Local variables
            float dist2; // f0
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x801858E0 -> 0x8018592C
void zInWorldIcon::Kill() {
}
// Range: 0x80185930 -> 0x801864A0
void zInWorldIcon::RenderIconInWorld(class zInWorldIcon * this /* r23 */) {
    // Local variables
    class xVec3 topLeft; // r1+0x74
    class xVec3 topRight; // r1+0x68
    class xVec3 bottomLeft; // r1+0x5C
    class xVec3 bottomRight; // r1+0x50
    class xMat4x3 cameraMatrix; // r1+0xC8
    float curScale; // f10

    {
        // Range: 0x80185980 -> 0x80185C88
        // Local variables
        class xVec3 lookAt; // r1+0x44
    }
    {
        // Range: 0x80185CAC -> 0x80186488
        // Local variables
        class ImmediateContext immCtxt; // r1+0x80
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
    // -> class xVec3 m_UnitAxisY;
}
