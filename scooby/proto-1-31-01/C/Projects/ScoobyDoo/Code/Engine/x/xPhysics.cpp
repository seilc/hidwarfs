/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPhysics.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
signed int gDebugDrawDebugInfo; // size: 0x4, address: 0x4A4E1C
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
// total size: 0x40
class tagMATRIX {
    // Members
public:
    float _11; // offset 0x0, size 0x4
    float _12; // offset 0x4, size 0x4
    float _13; // offset 0x8, size 0x4
    float _14; // offset 0xC, size 0x4
    float _21; // offset 0x10, size 0x4
    float _22; // offset 0x14, size 0x4
    float _23; // offset 0x18, size 0x4
    float _24; // offset 0x1C, size 0x4
    float _31; // offset 0x20, size 0x4
    float _32; // offset 0x24, size 0x4
    float _33; // offset 0x28, size 0x4
    float _34; // offset 0x2C, size 0x4
    float _41; // offset 0x30, size 0x4
    float _42; // offset 0x34, size 0x4
    float _43; // offset 0x38, size 0x4
    float _44; // offset 0x3C, size 0x4
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
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPhysics.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340660 -> 0x003407D0
*/
// Range: 0x340660 -> 0x3407D0
void xPhysicsClipVelocity(class Vector3D * in /* r17 */, class Vector3D * normal /* r18 */, class Vector3D * out /* r16 */, float overbounce /* r20 */) {
    /* anonymous block */ {
        // Range: 0x340660 -> 0x3407D0
        float backoff; // r1
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPhysics.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003407D0 -> 0x00340960
*/
// Range: 0x3407D0 -> 0x340960
void xPhysicsMovePhysicsObject(class tagxPhysicsObject * o /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3407D0 -> 0x340960
        class Vector3D c; // r29+0x30
        float ct; // r29+0x3C
        class Vector3D dst; // r29+0x20
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xPhysics.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00340960 -> 0x00340BD4
*/
// Range: 0x340960 -> 0x340BD4
void xPhysicsCalcMotionVector(class tagxPhysicsObject * o /* r16 */) {
    /* anonymous block */ {
        // Range: 0x340960 -> 0x340BD4
        signed int collision; // r2
        class tagMATRIX m2; // @ 0x004B5B30
        class Vector3D vd; // @ 0x004B5B70
        class tagMATRIX m1; // @ 0x004B5AF0
        class tagMATRIX mz; // @ 0x004B5AB0
        class tagMATRIX mx; // @ 0x004B5A30
        class tagMATRIX my; // @ 0x004B5A70
    }
}


