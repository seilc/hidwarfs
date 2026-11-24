/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamMarker.cpp
*/
class _OGCameraSchema _OGCameraschema; // size: 0x18, address: 0x8076BDC8
class SchemaRegistrator _OGCameraschemaReg; // size: 0x8, address: 0x8076BDE0
class _OGcamera_param_assetSchema _OGcamera_param_assetschema; // size: 0x18, address: 0x8076BDE8
class SchemaRegistrator _OGcamera_param_assetschemaReg; // size: 0x8, address: 0x8076BE00
bool activated; // size: 0x1, address: 0x8076BE08
class zCamWidget * widget_cam; // size: 0x4, address: 0x8076BE0C
static class xCamAsset static_cam_asset; // size: 0x70, address: 0x8076BE10
// Range: 0x800A2BF0 -> 0x800A2C00
void World::_OGCameraEntity::Deactivate() {
}
// Range: 0x800A2C00 -> 0x800A2C50
void World::_OGCameraEntity::Destroy(class _OGCameraEntity * this /* r31 */) {
}
// signature: World::_OGCameraSchema::Fix(World::Asset *, long, int)
// Range: 0x800A2CB0 -> 0x800A2CB8
void World::_OGCameraSchema::Fix() {
}
// signature: World::_OGCameraSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800A2CC0 -> 0x800A2D0C
class EntityStub * World::_OGCameraSchema::CreateStub(class _OGCameraSchema * this /* r31 */) {
}
// signature: World::_OGCameraSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800A2D10 -> 0x800A2D28
void World::_OGCameraSchema::DestroyStub() {
}
// signature: World::_OGCameraSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800A2D30 -> 0x800A2D94
class Entity * World::_OGCameraSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World15_OGCameraEntity;
}
// Range: 0x800A2DE0 -> 0x800A2DF0
void World::_OGcamera_param_assetEntity::Deactivate() {
}
// Range: 0x800A2DF0 -> 0x800A2E40
void World::_OGcamera_param_assetEntity::Destroy(class _OGcamera_param_assetEntity * this /* r31 */) {
}
// signature: World::_OGcamera_param_assetSchema::Fix(World::Asset *, long, int)
// Range: 0x800A2EA0 -> 0x800A2EA8
void World::_OGcamera_param_assetSchema::Fix() {
}
// signature: World::_OGcamera_param_assetSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800A2EB0 -> 0x800A2EFC
class EntityStub * World::_OGcamera_param_assetSchema::CreateStub(class _OGcamera_param_assetSchema * this /* r31 */) {
}
// signature: World::_OGcamera_param_assetSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800A2F00 -> 0x800A2F18
void World::_OGcamera_param_assetSchema::DestroyStub() {
}
// signature: World::_OGcamera_param_assetSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800A2F20 -> 0x800A2F88
class Entity * World::_OGcamera_param_assetSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World27_OGcamera_param_assetEntity;
}
// Range: 0x800A3040 -> 0x800A3098
void zCamMarkerNS::zCamWidget::create(class zCamWidget * this /* r31 */) {
}
// Range: 0x800CBF00 -> 0x800CC138
void zCamMarkerNS::zCamWidget::start(class zCamWidget * this /* r31 */) {
    // References
    // -> bool activated;
}
// Range: 0x800CBE30 -> 0x800CBEFC
void zCamMarkerNS::zCamWidget::stop(class zCamWidget * this /* r31 */) {
    // References
    // -> bool activated;
}
// signature: zCamMarkerNS::zCamWidget::update(xScene &, float)
// Range: 0x800CBB50 -> 0x800CBE30
void zCamMarkerNS::zCamWidget::update(class zCamWidget * this /* r30 */) {
    // Local variables
    float t; // f2
    float s; // f0
    float qs; // f1
}
// Range: 0x800A2FD0 -> 0x800A3038
void zCamMarkerSceneEnter() {
    // References
    // -> bool activated;
    // -> class zCamWidget * widget_cam;
    // -> struct {} __vt__Q212zCamMarkerNS10zCamWidget;
}
// Range: 0x800A30A0 -> 0x800A30FC
void zCamMarkerReset() {
    // References
    // -> class zCamWidget * widget_cam;
    // -> bool activated;
}
// signature: zCamMarkerSave(zCamMarker *, xSerial *)
// Range: 0x800A3100 -> 0x800A3104
void zCamMarkerSave() {
}
// signature: zCamMarkerLoad(zCamMarker *, xSerial *)
// Range: 0x800A3110 -> 0x800A3114
void zCamMarkerLoad() {
}
// signature: zStaticCameraAsset_Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x800A3120 -> 0x800A3168
void zStaticCameraAsset_Init(class xBase * data /* r30 */, class xDynAsset * asset /* r31 */) {
}
// signature: zStaticCameraAsset_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800A3170 -> 0x800A3558
void zStaticCameraAsset_EventCB(class EventAny * genericParams /* r29 */) {
    // Local variables
    class zStaticCameraAsset * asset; // r27

    {
        // Range: 0x800A31B8 -> 0x800A3500
        // Local variables
        class xEnt * toParamWidgetPtr; // r28
        class EventActionEnt * params; // r0
    }

    // References
    // -> class zCamWidget * widget_cam;
    // -> bool activated;
    // -> static class xCamAsset static_cam_asset;
}
