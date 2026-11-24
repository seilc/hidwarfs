/*
    Compile unit: C:\RT\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zMission.cpp
*/
class _OGMissionOGSchema _OGMissionOGschema; // size: 0x18, address: 0x80791240
class SchemaRegistrator _OGMissionOGschemaReg; // size: 0x8, address: 0x80791258
class _OGTaskOGSchema _OGTaskOGschema; // size: 0x18, address: 0x80791260
class SchemaRegistrator _OGTaskOGschemaReg; // size: 0x8, address: 0x80791278
static bool sConditionMadeChange; // size: 0x1, address: 0x80791280
class zMission * lastCompletedMission; // size: 0x4, address: 0x80791284
class zMission * currentlyRunningMission; // size: 0x4, address: 0x80791288
// Range: 0x800ED7D0 -> 0x800ED7E0
void World::_OGMissionOGEntity::Deactivate() {
}
// Range: 0x800ED7E0 -> 0x800ED830
void World::_OGMissionOGEntity::Destroy(class _OGMissionOGEntity * this /* r31 */) {
}
// signature: World::_OGMissionOGSchema::Fix(World::Asset *, long, int)
// Range: 0x800ED890 -> 0x800ED898
void World::_OGMissionOGSchema::Fix() {
}
// signature: World::_OGMissionOGSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800ED8A0 -> 0x800ED8EC
class EntityStub * World::_OGMissionOGSchema::CreateStub(class _OGMissionOGSchema * this /* r31 */) {
}
// signature: World::_OGMissionOGSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800ED8F0 -> 0x800ED908
void World::_OGMissionOGSchema::DestroyStub() {
}
// signature: World::_OGMissionOGSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800ED910 -> 0x800ED978
class Entity * World::_OGMissionOGSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World18_OGMissionOGEntity;
}
// Range: 0x800ED9C0 -> 0x800ED9D0
void World::_OGTaskOGEntity::Deactivate() {
}
// Range: 0x800ED9D0 -> 0x800EDA20
void World::_OGTaskOGEntity::Destroy(class _OGTaskOGEntity * this /* r31 */) {
}
// signature: World::_OGTaskOGSchema::Fix(World::Asset *, long, int)
// Range: 0x800EDA80 -> 0x800EDA88
void World::_OGTaskOGSchema::Fix() {
}
// signature: World::_OGTaskOGSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800EDA90 -> 0x800EDADC
class EntityStub * World::_OGTaskOGSchema::CreateStub(class _OGTaskOGSchema * this /* r31 */) {
}
// signature: World::_OGTaskOGSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x800EDAE0 -> 0x800EDAF8
void World::_OGTaskOGSchema::DestroyStub() {
}
// signature: World::_OGTaskOGSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x800EDB00 -> 0x800EDB68
class Entity * World::_OGTaskOGSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World15_OGTaskOGEntity;
}
// signature: TaskEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800EDBB0 -> 0x800EDD60
static void TaskEventWrapper(class xBase * to /* r28 */) {
    // References
    // -> class zMission * currentlyRunningMission;
    // -> static bool sConditionMadeChange;
}
// signature: zTask::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x800EDD60 -> 0x800EDDBC
void zTask::Init(class xBase * data /* r30 */, class xDynAsset * dynasset /* r31 */) {
    // Local variables
    class zTask * newTask; // r0
}
// Range: 0x800EDDC0 -> 0x800EDEB8
void zTask::Setup(class zTask * this /* r31 */) {
    {
        // Range: 0x800EDE1C -> 0x800EDE50
        // Local variables
        unsigned int i; // r28

        {
            // Range: 0x800EDE1C -> 0x800EDE50
            // Local variables
            class uid taskUID; // r1+0x8
        }
    }
}
// Range: 0x800EDEC0 -> 0x800EDED4
int zTask::IsAvailable() {
}
// Range: 0x800EDEE0 -> 0x800EDEF4
int zTask::IsCompleted() {
}
// Range: 0x800EDF00 -> 0x800EDFFC
void zTask::TestForAvailability(class zTask * this /* r31 */) {
    {
        // Range: 0x800EDF14 -> 0x800EDFA0
        // Local variables
        bool allRequiredTasksComplete; // r6

        {
            // Range: 0x800EDF48 -> 0x800EDF68
            // Local variables
            unsigned int i; // r0
        }
    }

    // References
    // -> static bool sConditionMadeChange;
}
// Range: 0x800EE000 -> 0x800EE084
void zTask::Save(class zTask * this /* r30 */, class xSerial * s /* r31 */) {
}
// signature: zTask::Load(xSerial *, bool)
// Range: 0x800EE090 -> 0x800EE150
void zTask::Load(class zTask * this /* r29 */, class xSerial * s /* r30 */) {
    // Local variables
    unsigned int input; // r1+0x8
}
// signature: MissionEventWrapper(xBase *, xBase *, unsigned int, Sext::EventAny *)
// Range: 0x800EE150 -> 0x800EE39C
static void MissionEventWrapper(class xBase * to /* r26 */) {
    // References
    // -> static bool sConditionMadeChange;
}
// signature: zMission::Init(xBase &, xDynAsset &, unsigned long)
// Range: 0x800EE3A0 -> 0x800EE3FC
void zMission::Init(class xBase * data /* r30 */, class xDynAsset * dynasset /* r31 */) {
    // Local variables
    class zMission * newMission; // r0
}
// Range: 0x800EE400 -> 0x800EE55C
void zMission::Setup(class zMission * this /* r31 */) {
    {
        // Range: 0x800EE448 -> 0x800EE474
        // Local variables
        unsigned int i; // r28
    }
    {
        // Range: 0x800EE4C4 -> 0x800EE4F0
        // Local variables
        unsigned int i; // r28
    }
}
// Range: 0x800EE560 -> 0x800EE5F0
void zMission::TestForUnlocking() {
    {
        // Range: 0x800EE598 -> 0x800EE5BC
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x800EE598 -> 0x800EE5BC
            // Local variables
            class zMission * rq; // r4
        }
    }

    // References
    // -> static bool sConditionMadeChange;
}
// Range: 0x800EE5F0 -> 0x800EE710
void zMission::TestForCompletion() {
    // Local variables
    class EventActionPlayMovie params; // r1+0x8

    {
        // Range: 0x800EE60C -> 0x800EE60C
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x800EE60C -> 0x800EE60C
            // Local variables
            class zTask * task; // r6
        }
    }

    // References
    // -> class zGlobals globals;
    // -> static bool sConditionMadeChange;
    // -> class zMission * lastCompletedMission;
}
// Range: 0x800EE710 -> 0x800EE7F8
void zMission::UnlockForColonyCollection(class zMission * this /* r31 */) {
    // Local variables
    unsigned int missionSceneID; // r4

    // References
    // -> class xGlobals * xglobals;
}
// signature: _MissionIterator(xBase *, zScene *, void *)
// Range: 0x800EE800 -> 0x800EE838
static class xBase * _MissionIterator() {
    // Local variables
    class zMission * mission; // r31
}
// signature: _ColonyCollectionMissionIterator(xBase *, zScene *, void *)
// Range: 0x800EE840 -> 0x800EE88C
static class xBase * _ColonyCollectionMissionIterator() {
    // Local variables
    class zMission * mission; // r31
}
// signature: _TaskIterator(xBase *, zScene *, void *)
// Range: 0x800EE890 -> 0x800EE8C0
static class xBase * _TaskIterator() {
    // Local variables
    class zTask * task; // r31
}
// Range: 0x800EE8C0 -> 0x800EE95C
void zMission::OnChangeInMissionConditions() {
    // References
    // -> static bool sConditionMadeChange;
}
// Range: 0x800EE960 -> 0x800EEA04
void zMission::SetupAll() {
    // References
    // -> static bool sConditionMadeChange;
    // -> class zMission * currentlyRunningMission;
}
// Range: 0x800EEA10 -> 0x800EEA8C
void zMission::SceneExit() {
    // References
    // -> class zMission * currentlyRunningMission;
}
// Range: 0x800EEA90 -> 0x800EEAA8
void zMission::UnlockColonyCollection() {
}
// signature: _MissionSave(xBase *, zScene *, void *)
// Range: 0x800EEAB0 -> 0x800EEB18
static class xBase * _MissionSave() {
    // Local variables
    class zMission * mission; // r31
}
// signature: _MissionLoad(xBase *, zScene *, void *)
// Range: 0x800EEB20 -> 0x800EEBB0
static class xBase * _MissionLoad() {
    // Local variables
    class zMission * mission; // r30
}
// signature: _TaskSave(xBase *, zScene *, void *)
// Range: 0x800EEBB0 -> 0x800EEC38
static class xBase * _TaskSave(void * userdata /* r30 */) {
    // Local variables
    class zTask * task; // r31
}
// signature: _TaskLoad(xBase *, zScene *, void *)
// Range: 0x800EEC40 -> 0x800EEC78
static class xBase * _TaskLoad() {
    // Local variables
    class zTask * task; // r31
}
// Range: 0x800EEC80 -> 0x800EECDC
void zMission::SaveAll(class xSerial * s /* r30 */) {
}
// Range: 0x800EECE0 -> 0x800EED3C
void zMission::LoadAll(class xSerial * s /* r30 */) {
}
