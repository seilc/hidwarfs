/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zNPCSquad.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801FF7F0 -> 0x801FF8E0
*/
// total size: 0x10
struct {} zNPCSquad::__vtable; // size: 0x10, address: 0x80C03C10
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
// Range: 0x801FF7F0 -> 0x801FF804
// this: r0
zNPCSquad::zNPCSquad() {
    // References
    // -> struct [anonymous] zNPCSquad::__vtable;
}

// Range: 0x801FF804 -> 0x801FF848
// this: r31
zNPCSquad::~zNPCSquad() {
    // References
    // -> struct [anonymous] zNPCSquad::__vtable;
}

// total size: 0x10
struct {} zNPCSquadMeleeAttack::__vtable; // size: 0x10, address: 0x80C03C00
// total size: 0x48
class zNPCSquadMeleeAttack : private zNPCSquad {
    // Functions
    zNPCSquadMeleeAttack();

    ~zNPCSquadMeleeAttack();
};
// Range: 0x801FF848 -> 0x801FF880
// this: r31
zNPCSquadMeleeAttack::zNPCSquadMeleeAttack() {
    // References
    // -> struct [anonymous] zNPCSquadMeleeAttack::__vtable;
}

// Range: 0x801FF880 -> 0x801FF8DC
// this: r30
zNPCSquadMeleeAttack::~zNPCSquadMeleeAttack() {
    // References
    // -> struct [anonymous] zNPCSquadMeleeAttack::__vtable;
}

// Range: 0x801FF8DC -> 0x801FF8E0
void zNPCSquadMeleeAttack::Update() {}


