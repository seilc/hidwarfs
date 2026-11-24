/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zContextObjectBeam.cpp
*/
static class xOGSchema BeamSchema; // size: 0x18, address: 0x8076D090
static class SchemaRegistrator BeamSchemaReg; // size: 0x8, address: 0x8076D0A8
// signature: World::BeamEntity::RegisterContext(World::xOGEntityContext *)
// Range: 0x800CB050 -> 0x800CB05C
void World::BeamEntity::RegisterContext() {
}
// Range: 0x800CB040 -> 0x800CB04C
void World::BeamEntity::UnregisterContext() {
}
// Range: 0x800CAFB0 -> 0x800CB040
void World::BeamEntity::UpdateRender() {
}
// signature: BeamEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C52A0 -> 0x800C52BC
static void BeamEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x800C52C0 -> 0x800C53E4
void * zContextObjectBeam::zContextObjectBeam(class zContextObjectBeam * this /* r30 */, class zContextObjectBeamAsset * theAsset /* r31 */) {
    // Local variables
    class Curve * pCurve; // r0
    class BeamContext context; // r1+0x8

    // References
    // -> struct {} __vt__18zContextObjectBeam;
}
// signature: zContextObjectBeam::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x800C5430 -> 0x800C5440
void zContextObjectBeam::Init() {
}
// Range: 0x800C5440 -> 0x800C54B8
void zContextObjectBeam::SceneExit() {
    // Local variables
    int tidx; // r0
    class zContextObjectBeam * current; // r31
    class zContextObjectBeam * last; // r30

    // References
    // -> class zGlobals globals;
}
// Range: 0x800C54C0 -> 0x800C5514
void zContextObjectBeam::Setup(class zContextObjectBeam * this /* r31 */) {
}
// Range: 0x800C5520 -> 0x800C5AD4
bool zContextObjectBeam::CanMount(class zContextObjectBeam * this /* r21 */, class zCommonPlayer * player /* r22 */, class MountData * mountData /* r23 */, class zContextObjectPriority * priority /* r24 */) const {
    // Local variables
    class xVec3 * dpos; // r0
    class xVec3 * pos; // r27
    class xIsect intersectData; // r1+0xE4
    float dposLength2; // f0
    float curvePosU; // r1+0x8
    class xVec3 curvePos; // r1+0x60
    float currDistance2; // f0
    class zContextObjectPriority thisPriority; // r1+0xD0
    float xzVel; // f0
    bool validEstimate; // r26
    float timeAbove; // f31
    float timeBelow; // f30
    float checkTime; // f29

    {
        // Range: 0x800C5828 -> 0x800C5A5C
        // Local variables
        unsigned int i; // r25

        {
            // Range: 0x800C5828 -> 0x800C5A5C
            // Local variables
            class zContextObjectPriority thisPriority; // r1+0xBC
            float currDistance2; // f0
            class xVec3 predictPos; // r1+0x54
        }
    }
}
// signature: zContextObjectBeam::Mount(zCommonPlayer *, zContextObject::MountData &, float)
// Range: 0x800C5AF0 -> 0x800C5B3C
bool zContextObjectBeam::Mount(class zCommonPlayer * player /* r31 */) {
    // Local variables
    class xVec3 pos; // r1+0x8
}
// signature: zContextObjectBeam::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800C5B40 -> 0x800C5C2C
void zContextObjectBeam::HandleEvent() {
}
