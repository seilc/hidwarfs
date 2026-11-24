/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zLedge.cpp
*/
// signature: zLedge::FindClosestPoint(const xVec3 &, xVec3 &, bool)
// Range: 0x8018E3F0 -> 0x8018E8E8
float zLedge::FindClosestPoint(class zLedge * this /* r30 */, class xVec3 & point /* r31 */) {
    // Local variables
    float u; // r1+0xC
    class xVec3 offset; // r1+0x88
    class xVec3 transform_pos; // r1+0x7C

    {
        // Range: 0x8018E578 -> 0x8018E734
        // Local variables
        class xVec3 toPos; // r1+0x70
    }
    {
        // Range: 0x8018E734 -> 0x8018E778
        // Local variables
        float dist; // r1+0x8
    }
}
// signature: zLedge::GetDirectionAtU(float, xVec3 &, xVec3 &)
// Range: 0x8018E8F0 -> 0x8018EC80
void zLedge::GetDirectionAtU(class zLedge * this /* r30 */, class xVec3 & dir /* r29 */, class xVec3 & groundDir /* r31 */) {
    // References
    // -> class xVec3 m_UnitAxisZ;
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x8018EC80 -> 0x8018ED54
class Entity * Sext::Ledge::Create(class EntityHandleBase * handle /* r29 */, class Ledge * asset /* r30 */) {
    // References
    // -> struct {} __vt__6zLedge;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zLedgeEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8018ED60 -> 0x8018EE04
static void zLedgeEventWrapper(class xBase * to /* r29 */) {
}
// Range: 0x8018EE10 -> 0x8018EE58
void zLedge::Init(class zLedge * this /* r30 */, class Ledge * asset /* r31 */) {
}
// Range: 0x8018EE60 -> 0x8018F22C
void zLedge::Setup(class zLedge * this /* r31 */) {
    {
        // Range: 0x8018EE78 -> 0x8018EFB8
        // Local variables
        class xVec3 p2; // r1+0x44
    }
    {
        // Range: 0x8018EFB8 -> 0x8018F10C
        // Local variables
        class EntityHandleBase * handle; // r0

        {
            // Range: 0x8018EFD8 -> 0x8018F10C
            // Local variables
            class xVec3 p2; // r1+0x38
        }
    }
    {
        // Range: 0x8018F118 -> 0x8018F180
        // Local variables
        class xBase * drivingObject; // r0
    }

    // References
    // -> unsigned int g_rttidParentTable[246];
}
// Range: 0x8018F240 -> 0x8018F2F8
void zLedge::GetCenter(class xVec3 * center /* r31 */) {
}
