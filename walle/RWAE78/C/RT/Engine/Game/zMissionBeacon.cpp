/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zMissionBeacon.cpp
*/
unsigned int MissionBeacon_MODEL_INSTANCE_OFFSET; // size: 0x4, address: 0x806CDD2C
static class xOGSchema _MissionBeaconSchema; // size: 0x18, address: 0x80791290
static class SchemaRegistrator _MissionBeaconSchemaReg; // size: 0x8, address: 0x807912A8
// signature: zMissionBeacon_Init(void *, void *)
// Range: 0x800EED80 -> 0x800EEDA4
void zMissionBeacon_Init() {
    // References
    // -> struct {} __vt__14zMissionBeacon;
}
// signature: MissionBeaconEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800EEDB0 -> 0x800EEDCC
static void MissionBeaconEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800EEDD0 -> 0x800EEE20
void zMissionBeacon::Init(class zMissionBeacon * this /* r30 */, class zMissionBeaconAsset * inAsset /* r31 */) {
}
// Range: 0x800EEE20 -> 0x800EEE94
void zMissionBeacon::Setup(class zMissionBeacon * this /* r31 */) {
}
// Range: 0x800EEEA0 -> 0x800EEED8
void zMissionBeacon::Reset(class zMissionBeacon * this /* r31 */) {
}
// signature: zMissionBeacon::Update(float)
// Range: 0x800EEEE0 -> 0x800EF168
void zMissionBeacon::Update(class zMissionBeacon * this /* r29 */) {
    {
        // Range: 0x800EEF08 -> 0x800EF148
        {
            // Range: 0x800EEF4C -> 0x800EF058
            // Local variables
            class xVec3 loc; // r1+0x30

            {
                // Range: 0x800EEF5C -> 0x800EEFB0
                // Local variables
                class xVec3 rotVec; // r1+0x3C
                float angle; // f4
            }
            {
                // Range: 0x800EEFD8 -> 0x800EF058
                // Local variables
                class EventActionTeleportPlayer params; // r1+0x8
            }
        }
    }

    // References
    // -> class xGlobals * xglobals;
}
// Range: 0x800EF170 -> 0x800EF280
void zMissionBeacon::Render(class zMissionBeacon * this /* r30 */) {
}
// Range: 0x800EF280 -> 0x800EF300
void zMissionBeacon::SceneExit() {
    // Local variables
    int tidx; // r0
    class zMissionBeacon * current; // r31
    class zMissionBeacon * last; // r30

    // References
    // -> class zGlobals globals;
}
// signature: zMissionBeacon::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800EF300 -> 0x800EF32C
void zMissionBeacon::HandleEvent() {
}
// signature: _HideMissionBeacon(xBase *, zScene *, void *)
// Range: 0x800EF330 -> 0x800EF348
static class xBase * _HideMissionBeacon() {
    // Local variables
    class zMissionBeacon * mb; // r0
}
// signature: _ShowMissionBeacon(xBase *, zScene *, void *)
// Range: 0x800EF350 -> 0x800EF368
static class xBase * _ShowMissionBeacon() {
    // Local variables
    class zMissionBeacon * mb; // r0
}
// Range: 0x800EF370 -> 0x800EF384
void zMissionBeacon::HideAll() {
}
// Range: 0x800EF390 -> 0x800EF3A4
void zMissionBeacon::ShowAll() {
}
