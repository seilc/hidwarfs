/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamMarker.cpp
*/
bool activated; // size: 0x1, address: 0x8081C210
class zCamWidget * widget_cam; // size: 0x4, address: 0x8081C214
static class xCamAsset static_cam_asset; // size: 0x70, address: 0x8081C218
// Range: 0x801138E0 -> 0x80113938
void zCamMarkerNS::zCamWidget::create(class zCamWidget * this /* r31 */) {
}
// Range: 0x80154B10 -> 0x80154D48
void zCamMarkerNS::zCamWidget::start(class zCamWidget * this /* r31 */) {
    // References
    // -> bool activated;
}
// Range: 0x80154A40 -> 0x80154B0C
void zCamMarkerNS::zCamWidget::stop(class zCamWidget * this /* r31 */) {
    // References
    // -> bool activated;
}
// signature: zCamMarkerNS::zCamWidget::update(xScene &, float)
// Range: 0x80154740 -> 0x80154A34
void zCamMarkerNS::zCamWidget::update(class zCamWidget * this /* r31 */) {
    // Local variables
    float t; // f2
    float s; // f0
    float qs; // f1
}
// Range: 0x80113870 -> 0x801138D8
void zCamMarkerSceneEnter() {
    // References
    // -> bool activated;
    // -> class zCamWidget * widget_cam;
    // -> struct {} __vt__Q212zCamMarkerNS10zCamWidget;
}
// Range: 0x80113940 -> 0x8011399C
void zCamMarkerReset() {
    // References
    // -> class zCamWidget * widget_cam;
    // -> bool activated;
}
// Range: 0x801139A0 -> 0x80113A78
class Entity * Sext::camera_param_asset::Create(class EntityHandleBase * handle /* r29 */, class camera_param_asset * asset /* r30 */) {
    // References
    // -> struct {} __vt__19zStaticCameraObject;
    // -> struct {} __vt__Q25World9xOGEntity;
}
// signature: zStaticCameraAsset_EventCB(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80113A80 -> 0x80113E1C
void zStaticCameraAsset_EventCB(class EventAny * genericParams /* r27 */) {
    // Local variables
    class zStaticCameraAsset & asset; // r28

    {
        // Range: 0x80113AC0 -> 0x80113DC4
        // Local variables
        class xEnt * toParamWidgetPtr; // r29
        class EventActionEnt * params; // r0
    }

    // References
    // -> class zCamWidget * widget_cam;
    // -> bool activated;
    // -> static class xCamAsset static_cam_asset;
}
