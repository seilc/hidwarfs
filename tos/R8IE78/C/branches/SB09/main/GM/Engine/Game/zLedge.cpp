/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zLedge.cpp
*/
// signature: zLedge::FindClosestPoint(const xVec3 &, xVec3 &, bool)
// Range: 0x800CFE20 -> 0x800D0034
float zLedge::FindClosestPoint(class zLedge * this /* r30 */, class xVec3 & point /* r31 */, bool clamp /* r29 */) {
    // Local variables
    float u; // r1+0xC
    class xVec3 offset; // r1+0x64
    class xVec3 transform_pos; // r1+0x58

    {
        // Range: 0x800CFEA8 -> 0x800CFF88
        // Local variables
        class xVec3 toPos; // r1+0x4C
    }
    {
        // Range: 0x800CFF88 -> 0x800CFFC0
        // Local variables
        float dist; // r1+0x8
    }
}
// signature: zLedge::GetDirectionAtU(float, xVec3 &, xVec3 &)
// Range: 0x800D0040 -> 0x800D0130
void zLedge::GetDirectionAtU(class zLedge * this /* r29 */, class xVec3 & dir /* r30 */, class xVec3 & groundDir /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800D0130 -> 0x800D01B8
class Entity * Sext::Ledge::Create(class EntityHandleBase * handle /* r29 */, class Ledge * asset /* r30 */) {
    // References
    // -> struct {} __vt__6zLedge;
}
// signature: zLedgeEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800D01C0 -> 0x800D01F0
static void zLedgeEventWrapper() {
}
// Range: 0x800D01F0 -> 0x800D0230
void zLedge::Init(class zLedge * this /* r30 */, class Ledge * asset /* r31 */) {
}
// Range: 0x800D0230 -> 0x800D0410
void zLedge::Setup(class zLedge * this /* r31 */) {
    {
        // Range: 0x800D024C -> 0x800D02C0
        // Local variables
        class xVec3 p2; // r1+0x2C
    }
    {
        // Range: 0x800D02C0 -> 0x800D0364
        // Local variables
        class EntityHandleBase * handle; // r0

        {
            // Range: 0x800D02E0 -> 0x800D0364
            // Local variables
            class xVec3 p2; // r1+0x20
        }
    }
    {
        // Range: 0x800D0370 -> 0x800D03B8
        // Local variables
        class xBase * drivingObject; // r0
    }
}
// Range: 0x800D0440 -> 0x800D04A8
void zLedge::DebugReset(class zLedge * this /* r29 */) {
}
