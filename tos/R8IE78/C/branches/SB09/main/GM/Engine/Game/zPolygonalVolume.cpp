/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPolygonalVolume.cpp
*/
// Range: 0x80123780 -> 0x80123810
void zPolygonalVolume::Init(class zPolygonalVolume * this /* r30 */, class zPolygonalVolumeAsset * asset /* r31 */) {
}
// Range: 0x80123810 -> 0x8012382C
void zPolygonalVolume::Setup() {
}
// Range: 0x80123830 -> 0x801238D0
void zPolygonalVolume::DebugReset(class zPolygonalVolume * this /* r31 */) {
}
// Range: 0x801238D0 -> 0x80123A14
void zPolygonalVolume::Reset() {
    {
        // Range: 0x801238D4 -> 0x801239CC
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x801239CC -> 0x801239FC
        // Local variables
        int ii; // r6
    }
}
// signature: zPolygonalVolume::IsPointInVolume(const xVec3 *)
// Range: 0x80123A20 -> 0x80123B3C
bool zPolygonalVolume::IsPointInVolume() {
    // Local variables
    bool inside; // r9
    int i; // r10
    int j; // r0

    {
        // Range: 0x80123A8C -> 0x80123AD0
        // Local variables
        float m; // f2
    }
    {
        // Range: 0x80123ADC -> 0x80123B34
        // Local variables
        float m; // f2
    }
}
// Range: 0x80123B40 -> 0x80123DD0
bool zPolygonalVolume::RayHitsVolume(class zPolygonalVolume * this /* r26 */, class xVec3 & start /* r27 */, class xVec3 & end /* r28 */, bool & end_inside /* r29 */) {
    // Local variables
    float maxY; // f31
    int i; // r29
    int j; // r3

    {
        // Range: 0x80123BFC -> 0x80123C74
        // Local variables
        class xVec3 pr; // r1+0x44
    }
    {
        // Range: 0x80123C74 -> 0x80123D0C
        // Local variables
        class xVec3 top; // r1+0x2C
        class xVec3 pr; // r1+0x38
    }
    {
        // Range: 0x80123D0C -> 0x80123DAC
        // Local variables
        class xVec3 pr; // r1+0x8
        class xVec3 n; // r1+0x14
        class xVec3 edge; // r1+0x20
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zPolygonalVolume::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80123DD0 -> 0x80123E10
void zPolygonalVolume::HandleEvent() {
}
// Range: 0x80123E10 -> 0x80123EA0
class Entity * Sext::zPolygonalVolumeAsset::Create(class EntityHandleBase * handle /* r29 */, class zPolygonalVolumeAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__16zPolygonalVolume;
}
// signature: LineSegmentIntersectsPlane(const xVec3 &, const xVec3 &, const xVec3 &, const xVec3 &, xVec3 &)
// Range: 0x80123EA0 -> 0x80123F8C
bool LineSegmentIntersectsPlane(class xVec3 & p0 /* r28 */, class xVec3 & p1 /* r29 */, class xVec3 & n /* r30 */, class xVec3 & pr /* r31 */) {
    // Local variables
    class xVec3 v0p0; // r1+0x14
    class xVec3 p1p0; // r1+0x8
    float denom; // f0
    float nom; // f0
    float r; // f1
}
