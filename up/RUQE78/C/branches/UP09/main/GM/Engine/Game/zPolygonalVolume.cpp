/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPolygonalVolume.cpp
*/
// Range: 0x802140C0 -> 0x80214158
void zPolygonalVolume::Init(class zPolygonalVolume * this /* r30 */, class zPolygonalVolumeAsset * asset /* r31 */) {
}
// Range: 0x80214160 -> 0x8021417C
void zPolygonalVolume::Setup() {
}
// Range: 0x80214180 -> 0x80214220
void zPolygonalVolume::DebugReset(class zPolygonalVolume * this /* r31 */) {
}
// Range: 0x80214220 -> 0x8021436C
void zPolygonalVolume::Reset() {
    {
        // Range: 0x80214224 -> 0x80214310
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x80214324 -> 0x80214334
        // Local variables
        int ii; // r6
    }
}
// signature: zPolygonalVolume::IsPointInVolume(const xVec3 *)
// Range: 0x80214370 -> 0x8021448C
bool zPolygonalVolume::IsPointInVolume() {
    // Local variables
    bool inside; // r9
    int i; // r10
    int j; // r0

    {
        // Range: 0x802143DC -> 0x80214420
        // Local variables
        float m; // f2
    }
    {
        // Range: 0x8021442C -> 0x80214474
        // Local variables
        float m; // f2
    }
}
// Range: 0x80214490 -> 0x80214AD4
bool zPolygonalVolume::RayHitsVolume(class zPolygonalVolume * this /* r29 */, class xVec3 & start /* r30 */, class xVec3 & end /* r31 */, bool & end_inside /* r27 */) {
    // Local variables
    float maxY; // f24
    int i; // r27
    int j; // r8

    {
        // Range: 0x8021458C -> 0x802146D8
        // Local variables
        class xVec3 pr; // r1+0x8C
    }
    {
        // Range: 0x802146D8 -> 0x80214830
        // Local variables
        class xVec3 top; // r1+0x74
        class xVec3 pr; // r1+0x80
    }
    {
        // Range: 0x80214830 -> 0x80214A58
        // Local variables
        class xVec3 pr; // r1+0x50
        class xVec3 n; // r1+0x5C
        class xVec3 edge; // r1+0x68
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zPolygonalVolume::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80214AE0 -> 0x80214B20
void zPolygonalVolume::HandleEvent() {
}
// Range: 0x80214B20 -> 0x80214BFC
class Entity * Sext::zPolygonalVolumeAsset::Create(class EntityHandleBase * handle /* r29 */, class zPolygonalVolumeAsset * asset /* r30 */) {
    // References
    // -> struct {} __vt__16zPolygonalVolume;
    // -> struct {} __vt__Q25World9xOGEntity;
}
