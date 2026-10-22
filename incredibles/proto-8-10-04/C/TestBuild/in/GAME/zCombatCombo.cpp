/*
    Compile unit: C:\TestBuild\in\GAME\zCombatCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
static unsigned char use_bullet_time_camera; // size: 0x1, address: 0x0
static float bullet_timer_through; // size: 0x4, address: 0x0
float zCOMBAT_COMBO_THRESHOLD; // size: 0x4, address: 0x611090
signed int zCOMBAT_COMBO_BULLETTIME_THRESHOLD; // size: 0x4, address: 0x0
class zCombatCombo zccombo; // size: 0x218, address: 0x691490
// total size: 0x10
class zQuat {
    // Members
public:
    float w; // offset 0x0, size 0x4
    float x; // offset 0x4, size 0x4
    float y; // offset 0x8, size 0x4
    float z; // offset 0xC, size 0x4
};
enum en_HIT_TYPE {
    z_HIT_LIGHT = 0,
    z_HIT_HEAVY = 1,
};
// total size: 0x218
class zCombatCombo : public zQueue {
    // Members
public:
    float combo_time; // offset 0x208, size 0x4
    float elapsed; // offset 0x20C, size 0x4
    float timer; // offset 0x210, size 0x4
    unsigned char enabled; // offset 0x214, size 0x1
};
// total size: 0x208
class zQueue {
    // Members
public:
    signed int first; // offset 0x0, size 0x4
    signed int size; // offset 0x4, size 0x4
    class zHitStruct data[64]; // offset 0x8, size 0x200
};
// total size: 0x8
class zHitStruct {
    // Members
public:
    signed int type; // offset 0x0, size 0x4
    float elapsed; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zCombatCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320360 -> 0x003203DC
*/
// Range: 0x320360 -> 0x3203DC
// this: r2
void zCombatCombo::add(enum en_HIT_TYPE type /* r2 */) {
    /* anonymous block */ {
        // Range: 0x320360 -> 0x3203DC
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCombatCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003203E0 -> 0x00320500
*/
// Range: 0x3203E0 -> 0x320500
// this: r2
void zCombatCombo::update(float dt /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3203E0 -> 0x320500
        signed int i; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCombatCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320500 -> 0x00320520
*/
// Range: 0x320500 -> 0x320520
// this: r2
void zCombatCombo::init() {
    /* anonymous block */ {
        // Range: 0x320500 -> 0x320520
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCombatCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320520 -> 0x00320528
*/
// Range: 0x320520 -> 0x320528
// this: r2
unsigned char zCombatCombo::getEnabled() {
    /* anonymous block */ {
        // Range: 0x320520 -> 0x320528
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zCombatCombo.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00320530 -> 0x00320538
*/
// Range: 0x320530 -> 0x320538
// this: r2
void zCombatCombo::setEnabled(unsigned char value /* r2 */) {
    /* anonymous block */ {
        // Range: 0x320530 -> 0x320538
    }
}


