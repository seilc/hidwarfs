/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zNPCSquad.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80266610 -> 0x8026670C
*/
// total size: 0x10
struct {} zNPCSquad::__vtable; // size: 0x10, address: 0x80D656D8
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
// Range: 0x80266610 -> 0x80266624
// this: r3
zNPCSquad::zNPCSquad() {
    // References
    // -> struct [anonymous] zNPCSquad::__vtable;
}

// Range: 0x80266624 -> 0x80266674
// this: r31
zNPCSquad::~zNPCSquad() {
    // References
    // -> struct [anonymous] zNPCSquad::__vtable;
}

// total size: 0x10
struct {} zNPCSquadMeleeAttack::__vtable; // size: 0x10, address: 0x80D656C8
// total size: 0x48
class zNPCSquadMeleeAttack : private zNPCSquad {
    // Functions
    zNPCSquadMeleeAttack();

    ~zNPCSquadMeleeAttack();
};
// Range: 0x80266674 -> 0x802666AC
// this: r31
zNPCSquadMeleeAttack::zNPCSquadMeleeAttack() {
    // References
    // -> struct [anonymous] zNPCSquadMeleeAttack::__vtable;
}

// Range: 0x802666AC -> 0x80266708
// this: r31
zNPCSquadMeleeAttack::~zNPCSquadMeleeAttack() {
    // References
    // -> struct [anonymous] zNPCSquadMeleeAttack::__vtable;
}

// Range: 0x80266708 -> 0x8026670C
void zNPCSquadMeleeAttack::Update() {}


