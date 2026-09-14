/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCSquad.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013D6C0 -> 0x8013D7A8
*/
// total size: 0x10
struct {} zNPCSquad::__vtable; // size: 0x10, address: 0x803BD5F0
// total size: 0x0
class zNPCCommon {};
// total size: 0x48
class zNPCSquad {
    // Functions
    zNPCSquad();

    ~zNPCSquad();

    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
protected:
    int totalMembers; // offset 0x4, size 0x4
    class zNPCCommon * member[16]; // offset 0x8, size 0x40
};
// Range: 0x8013D6C0 -> 0x8013D6D4
// this: r0
zNPCSquad::zNPCSquad() {
    // References
    // -> struct [anonymous] zNPCSquad::__vtable;
}

// Range: 0x8013D6D4 -> 0x8013D718
// this: r31
zNPCSquad::~zNPCSquad() {
    // References
    // -> struct [anonymous] zNPCSquad::__vtable;
}

// total size: 0x10
struct {} zNPCSquadMeleeAttack::__vtable; // size: 0x10, address: 0x803BD5E0
// total size: 0x48
class zNPCSquadMeleeAttack : private zNPCSquad {
    // Functions
    zNPCSquadMeleeAttack();

    ~zNPCSquadMeleeAttack();
};
// Range: 0x8013D718 -> 0x8013D750
// this: r31
zNPCSquadMeleeAttack::zNPCSquadMeleeAttack() {
    // References
    // -> struct [anonymous] zNPCSquadMeleeAttack::__vtable;
}

// Range: 0x8013D750 -> 0x8013D7A4
// this: r30
zNPCSquadMeleeAttack::~zNPCSquadMeleeAttack() {
    // References
    // -> struct [anonymous] zNPCSquadMeleeAttack::__vtable;
}

// Range: 0x8013D7A4 -> 0x8013D7A8
void zNPCSquadMeleeAttack::Update() {}


