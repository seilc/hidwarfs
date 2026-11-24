/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPolygonalVolume.cpp
*/
class _OGPolygonalVolumeSchema _OGPolygonalVolumeschema; // size: 0x18, address: 0x80798F10
class SchemaRegistrator _OGPolygonalVolumeschemaReg; // size: 0x8, address: 0x80798F28
// Range: 0x8017C5E0 -> 0x8017C5F0
void World::_OGPolygonalVolumeEntity::Deactivate() {
}
// Range: 0x8017C5F0 -> 0x8017C640
void World::_OGPolygonalVolumeEntity::Destroy(class _OGPolygonalVolumeEntity * this /* r31 */) {
}
// signature: World::_OGPolygonalVolumeSchema::Fix(World::Asset *, long, int)
// Range: 0x8017C6A0 -> 0x8017C6A8
void World::_OGPolygonalVolumeSchema::Fix() {
}
// signature: World::_OGPolygonalVolumeSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8017C6B0 -> 0x8017C6FC
class EntityStub * World::_OGPolygonalVolumeSchema::CreateStub(class _OGPolygonalVolumeSchema * this /* r31 */) {
}
// signature: World::_OGPolygonalVolumeSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8017C700 -> 0x8017C718
void World::_OGPolygonalVolumeSchema::DestroyStub() {
}
// signature: World::_OGPolygonalVolumeSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8017C720 -> 0x8017C784
class Entity * World::_OGPolygonalVolumeSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World24_OGPolygonalVolumeEntity;
}
// signature: zPolygonalVolumeEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017C7D0 -> 0x8017C7EC
static void zPolygonalVolumeEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x8017C7F0 -> 0x8017C87C
void zPolygonalVolume::Init(class zPolygonalVolume * this /* r30 */, class zPolygonalVolumeAsset * asset /* r31 */) {
}
// Range: 0x8017C880 -> 0x8017C89C
void zPolygonalVolume::Setup() {
}
// Range: 0x8017C8A0 -> 0x8017C9EC
void zPolygonalVolume::Reset() {
    {
        // Range: 0x8017C8A4 -> 0x8017C990
        // Local variables
        int i; // r8
    }
    {
        // Range: 0x8017C9A4 -> 0x8017C9B4
        // Local variables
        int ii; // r6
    }
}
// signature: zPolygonalVolume::IsPointInVolume(const xVec3 *)
// Range: 0x8017C9F0 -> 0x8017CB0C
bool zPolygonalVolume::IsPointInVolume() {
    // Local variables
    bool inside; // r9
    int i; // r10
    int j; // r0

    {
        // Range: 0x8017CA5C -> 0x8017CAA0
        // Local variables
        float m; // f2
    }
    {
        // Range: 0x8017CAAC -> 0x8017CAF4
        // Local variables
        float m; // f2
    }
}
// Range: 0x8017CB10 -> 0x8017D16C
bool zPolygonalVolume::RayHitsVolume(class zPolygonalVolume * this /* r29 */, class xVec3 * start /* r30 */, class xVec3 * end /* r31 */, bool * end_inside /* r27 */) {
    // Local variables
    float maxY; // f24
    int i; // r27
    int j; // r8

    {
        // Range: 0x8017CC14 -> 0x8017CD60
        // Local variables
        class xVec3 pr; // r1+0x8C
    }
    {
        // Range: 0x8017CD60 -> 0x8017CEB8
        // Local variables
        class xVec3 top; // r1+0x74
        class xVec3 pr; // r1+0x80
    }
    {
        // Range: 0x8017CEB8 -> 0x8017D0E8
        // Local variables
        class xVec3 pr; // r1+0x50
        class xVec3 n; // r1+0x5C
        class xVec3 edge; // r1+0x68
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zPolygonalVolume::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x8017D170 -> 0x8017D19C
void zPolygonalVolume::HandleEvent() {
}
// signature: zPolygonalVolumeInit(void *, void *)
// Range: 0x8017D1A0 -> 0x8017D1CC
void zPolygonalVolumeInit() {
    // References
    // -> struct {} __vt__16zPolygonalVolume;
}
