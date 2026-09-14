/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCSquad.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8013DA44 -> 0x8013DB2C
*/
// total size: 0x10
struct {} zNPCSquad::__vtable; // size: 0x10, address: 0x803BEB10
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
// Range: 0x8013DA44 -> 0x8013DA58
// this: r0
zNPCSquad::zNPCSquad() {
    // References
    // -> struct [anonymous] zNPCSquad::__vtable;
}

// Range: 0x8013DA58 -> 0x8013DA9C
// this: r31
zNPCSquad::~zNPCSquad() {
    // References
    // -> struct [anonymous] zNPCSquad::__vtable;
}

// total size: 0x10
struct {} zNPCSquadMeleeAttack::__vtable; // size: 0x10, address: 0x803BEB00
// total size: 0x48
class zNPCSquadMeleeAttack : private zNPCSquad {
    // Functions
    zNPCSquadMeleeAttack();

    ~zNPCSquadMeleeAttack();
};
// Range: 0x8013DA9C -> 0x8013DAD4
// this: r31
zNPCSquadMeleeAttack::zNPCSquadMeleeAttack() {
    // References
    // -> struct [anonymous] zNPCSquadMeleeAttack::__vtable;
}

// Range: 0x8013DAD4 -> 0x8013DB28
// this: r30
zNPCSquadMeleeAttack::~zNPCSquadMeleeAttack() {
    // References
    // -> struct [anonymous] zNPCSquadMeleeAttack::__vtable;
}

// Range: 0x8013DB28 -> 0x8013DB2C
void zNPCSquadMeleeAttack::Update() {}


