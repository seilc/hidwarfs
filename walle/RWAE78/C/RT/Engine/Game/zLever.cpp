/*
    Compile unit: C:\RT\Engine\WAD\WAD04.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zLever.cpp
*/
class _OGLeverSchema _OGLeverschema; // size: 0x18, address: 0x807FDB70
class SchemaRegistrator _OGLeverschemaReg; // size: 0x8, address: 0x807FDB88
// Range: 0x802279D0 -> 0x802279E0
void World::_OGLeverEntity::Deactivate() {
}
// Range: 0x802279E0 -> 0x80227A30
void World::_OGLeverEntity::Destroy(class _OGLeverEntity * this /* r31 */) {
}
// signature: World::_OGLeverSchema::Fix(World::Asset *, long, int)
// Range: 0x80227A90 -> 0x80227A98
void World::_OGLeverSchema::Fix() {
}
// signature: World::_OGLeverSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80227AA0 -> 0x80227AEC
class EntityStub * World::_OGLeverSchema::CreateStub(class _OGLeverSchema * this /* r31 */) {
}
// signature: World::_OGLeverSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x80227AF0 -> 0x80227B08
void World::_OGLeverSchema::DestroyStub() {
}
// signature: World::_OGLeverSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x80227B10 -> 0x80227B74
class Entity * World::_OGLeverSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World14_OGLeverEntity;
}
// signature: LeverEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x80227BC0 -> 0x80227BDC
static void LeverEventWrapper(class xBase * from /* r0 */) {
}
// Range: 0x80227BE0 -> 0x80227C30
void zLever::Init(class zLever * this /* r30 */, class zLeverAsset * inAsset /* r31 */) {
}
// Range: 0x80227C30 -> 0x802285E4
void zLever::Setup(class zLever * this /* r28 */) {
    // Local variables
    class Matrix43 barMat; // r1+0xF0
    class Vector axis; // r1+0xE0
    class Vector pivot; // r1+0xD0

    // References
    // -> class Vector4 vec4Zero;
    // -> class Scene * primaryScene;
    // -> struct {} __vt__23zLeverCollisionListener;
    // -> float hkUFloat8_intToReal[256];
    // -> class CHavokShapeBuilder * s_instance;
}
// signature: zLever::HandleEvent(xBase *, unsigned int, Sext::EventAny *)
// Range: 0x802285F0 -> 0x80228618
void zLever::HandleEvent() {
}
// signature: zLever_Init(void *, void *)
// Range: 0x80228620 -> 0x80228644
void zLever_Init() {
    // References
    // -> struct {} __vt__6zLever;
}
// signature: zLever::Update(float)
// Range: 0x80228650 -> 0x80228654
void zLever::Update() {
}
// Range: 0x80228660 -> 0x802286D4
void zLever::SceneExit(class zLever * this /* r31 */) {
}
// Range: 0x802286E0 -> 0x8022875C
void zLever_SceneExit() {
    // Local variables
    int tidx; // r0
    class zLever * current; // r31
    class zLever * last; // r30

    // References
    // -> class zGlobals globals;
}
// Range: 0x80228760 -> 0x80228AE0
void zLeverCollisionListener::contactProcessCallback(class hkpContactProcessEvent * event /* r31 */) {
    // Local variables
    class hkpPhantom * pPhantomTestA; // reg65535
    class hkpPhantom * pPhantomTestB; // r0
    class hkpPhantom * pPhantom; // r4
    class hkpRigidBody * pBody; // r5
    class hkpProcessCollisionData * pCollisionData; // r10

    {
        // Range: 0x80228790 -> 0x802287D8
        // Local variables
        class hkpPhantom * testPhantom; // r0

        {
            // Range: 0x802287C0 -> 0x802287D8
            // Local variables
            class xBase * baseB; // r0
        }
    }
    {
        // Range: 0x8022888C -> 0x80228AAC
        // Local variables
        class zLever * lever; // r4
        class zPlayer * player; // r7
        class xBase * pBaseBody; // r6
        class xBase * pBasePlayer; // r4

        {
            // Range: 0x802288EC -> 0x802288F4
            // Local variables
            int i; // r11

            {
                // Range: 0x802288EC -> 0x802288F4
                // Local variables
                float velocityOffNormal; // f0
                class hkVector4 offNormalVelocityVector; // r1+0x20
                class hkVector4 worldRelativeVelocity; // r1+0x30
                class hkVector4 velPointOnB; // r1+0x40
                class hkVector4 velPointOnA; // r1+0x50
                class hkVector4 normal; // r1+0x60
                class hkVector4 * start; // r0
                class hkContactPoint * contactPoint; // r17
            }
        }
    }
}
// signature: zLeverCollisionListener::contactPointAddedCallback(hkpContactPointAddedEvent &)
// Range: 0x80228AE0 -> 0x80228B34
void zLeverCollisionListener::contactPointAddedCallback() {
}
// signature: zLeverCollisionListener::contactPointConfirmedCallback(hkpContactPointConfirmedEvent &)
// Range: 0x80228B40 -> 0x80228B80
void zLeverCollisionListener::contactPointConfirmedCallback() {
}
// signature: zLeverCollisionListener::contactPointRemovedCallback(hkpContactPointRemovedEvent &)
// Range: 0x80228B80 -> 0x80228B84
void zLeverCollisionListener::contactPointRemovedCallback() {
}
