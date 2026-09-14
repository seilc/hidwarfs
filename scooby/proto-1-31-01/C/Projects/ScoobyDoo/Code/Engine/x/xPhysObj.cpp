/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPhysObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x88
class tagxPhysicsObject {
    // Members
public:
    class Vector3D m_ang; // offset 0x0, size 0xC
    class Vector3D m_angVel; // offset 0xC, size 0xC
    class Vector3D m_pos; // offset 0x18, size 0xC
    class Vector3D m_vel; // offset 0x24, size 0xC
    class Vector3D m_acc; // offset 0x30, size 0xC
    class Vector3D m_vel_inst; // offset 0x3C, size 0xC
    class Vector3D m_scale; // offset 0x48, size 0xC
    class Vector3D m_motion; // offset 0x54, size 0xC
    float m_cbradius; // offset 0x60, size 0x4
    unsigned char m_flag; // offset 0x64, size 0x1
    unsigned char m_hitResult; // offset 0x65, size 0x1
    unsigned short m_shadow_radius; // offset 0x66, size 0x2
    unsigned char m_type; // offset 0x68, size 0x1
    unsigned char m_hitFlags; // offset 0x69, size 0x1
    unsigned short m_hitTriggerNoWalkID; // offset 0x6A, size 0x2
    class Vector3D m_hitVector; // offset 0x6C, size 0xC
    unsigned char m_hitActorType; // offset 0x78, size 0x1
    unsigned char m_hitTriggerWalkID; // offset 0x79, size 0x1
    unsigned char m_hitActorID; // offset 0x7A, size 0x1
    unsigned char m_hitObjectID; // offset 0x7B, size 0x1
    float m_floorHeight; // offset 0x7C, size 0x4
    unsigned int m_floorIdx; // offset 0x80, size 0x4
    unsigned int m_floorMask; // offset 0x84, size 0x4
};
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPhysObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003404E0 -> 0x0034053C
*/
// Range: 0x3404E0 -> 0x34053C
void xPhysicsObjectSetOrientation(class tagxPhysicsObject * p /* r2 */, float rx /* r29 */, float ry /* r29 */, float rz /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3404E0 -> 0x34053C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPhysObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340540 -> 0x003405C0
*/
// Range: 0x340540 -> 0x3405C0
void xPhysicsObjectTranslatePosition(class tagxPhysicsObject * p /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    /* anonymous block */ {
        // Range: 0x340540 -> 0x3405C0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPhysObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003405C0 -> 0x0034061C
*/
// Range: 0x3405C0 -> 0x34061C
void xPhysicsObjectSetPosition(class tagxPhysicsObject * p /* r2 */, float x /* r29 */, float y /* r29 */, float z /* r29 */) {
    /* anonymous block */ {
        // Range: 0x3405C0 -> 0x34061C
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPhysObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340620 -> 0x00340660
*/
// Range: 0x340620 -> 0x340660
void xPhysicsObjectInitialize(class tagxPhysicsObject * p /* r2 */) {
    /* anonymous block */ {
        // Range: 0x340620 -> 0x340660
    }
}


