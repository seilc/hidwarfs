/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCompSound.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C365C -> 0x801C3804
*/
// total size: 0x1
class zCompParameters {};
enum iSndGroupHandle {
};
// total size: 0xC
struct RwV3d {
    // Members
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
struct xVec3 {
    // Static members
    static struct xVec3 m_NegDoubleVec; // size: 0xC
    static struct xVec3 m_DoubleVec; // size: 0xC
    static struct xVec3 m_NegHalfVec; // size: 0xC
    static struct xVec3 m_HalfVec; // size: 0xC
    static struct xVec3 m_UnitAxisZ; // size: 0xC
    static struct xVec3 m_UnitAxisY; // size: 0xC
    static struct xVec3 m_UnitAxisX; // size: 0xC
    static struct xVec3 m_NegOnes; // size: 0xC
    static struct xVec3 m_Ones; // size: 0xC
    static struct xVec3 m_Null; // size: 0xC

    // Members
    union { // inferred
        struct RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x1C
class zCompSoundParams : public zCompParameters {
    // Members
public:
    enum iSndGroupHandle loopingSoundGroup; // offset 0x0, size 0x4
    enum iSndGroupHandle oneShotSoundGroup; // offset 0x4, size 0x4
    float oneShotMinTime; // offset 0x8, size 0x4
    float oneShotMaxTime; // offset 0xC, size 0x4
    const struct xVec3 * loopingSoundPosition; // offset 0x10, size 0x4
    const struct xVec3 * oneShotSoundPosition; // offset 0x14, size 0x4
    void * __vptr$; // offset 0x18, size 0x4
};
static class zCompSoundParams gDefaultSoundParams; // size: 0x1C, address: 0x803C3CD0
// total size: 0x30
struct {} zCompSound::__vtable; // size: 0x30, address: 0x803C0570
// total size: 0x8
class zICompSound : public zIComponent {};
enum xSndHandle {
};
// total size: 0x14
class zCompSound : public zICompSound {
    // Functions
    zCompSound();

    void Attached();

    void Detached();

    void PreUpdate();

    // Members
    const class zCompSoundParams * parameters; // offset 0x8, size 0x4
    enum iSndGroupHandle loopingSoundGroupPlaying; // offset 0xC, size 0x4
    enum xSndHandle loopingSoundPlaying; // offset 0x10, size 0x4
};
// Range: 0x801C365C -> 0x801C3694
// this: r31
zCompSound::zCompSound() {
    // References
    // -> struct [anonymous] zCompSound::__vtable;
}

// Range: 0x801C36CC -> 0x801C36F0
// this: r0
void zCompSound::Attached() {
    // References
    // -> static class zCompSoundParams gDefaultSoundParams;
}

// Range: 0x801C36F0 -> 0x801C36F4
void zCompSound::AllAttached() {}

// Range: 0x801C36F4 -> 0x801C3740
// this: r31
void zCompSound::Detached() {}

// Range: 0x801C3740 -> 0x801C3804
// this: r30
void zCompSound::PreUpdate() {}

// total size: 0x30
struct {} zICompSound::__vtable; // size: 0x30, address: 0x803C05A0
// total size: 0x0
class zNPCBase {};
enum eCompType {
    eCompType_Unknown = -1,
    eCompType_Logic_Alarmer = 0,
    eCompType_Logic_Thief = 1,
    eCompType_Logic_SwarmMember = 2,
    eCompType_Logic_Waiter = 3,
    eCompType_Logic_StirringPlayer = 4,
    eCompType_Logic_StirringRemy = 5,
    eCompType_Logic_LeftArm = 6,
    eCompType_Logic_RightArm = 7,
    eCompType_Logic_PourNSwirl = 8,
    eCompType_Logic_SpringBoard = 9,
    eCompType_Logic_ContextSensitive = 10,
    eCompType_Logic_AnimViewer = 11,
    eCompType_Logic_SwarmBug = 12,
    eCompType_Logic_SwarmOwl = 13,
    eCompType_Logic_Simpleton = 14,
    eCompType_Logic_InstaKill = 15,
    eCompType_NPCEntity_Default = 16,
    eCompType_Steering_Basic = 17,
    eCompType_Steering_Flocking = 18,
    eCompType_Steering_FlockingBrain = 19,
    eCompType_Steering_Generic = 20,
    eCompType_Perception = 21,
    eCompType_Sound_Basic = 22,
    eCompType_Combat_Default = 23,
    eCompCount = 24,
};
enum eCompInterfaceType {
    eCompInterfaceType_Unknown = -1,
    eCompInterfaceType_First = 0,
    eCompInterfaceType_Logic = 0,
    eCompInterfaceType_NPCEntity = 1,
    eCompInterfaceType_Steering = 2,
    eCompInterfaceType_Perception = 3,
    eCompInterfaceType_Sound = 4,
    eCompInterfaceType_Combat = 5,
    eCompInterfaceTypeCount = 6,
};
// total size: 0x0
struct xScene {};
// total size: 0x0
struct xBase {};
// total size: 0x8
class zIComponent {
    // Members
public:
    class zNPCBase * owner; // offset 0x0, size 0x4
    void * __vptr$; // offset 0x4, size 0x4
};
// total size: 0xC
struct {} zCompSoundParams::__vtable; // size: 0xC, address: 0x803C05D0

