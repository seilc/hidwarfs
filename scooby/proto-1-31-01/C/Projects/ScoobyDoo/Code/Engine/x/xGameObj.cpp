/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGameObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
static unsigned int sGameUniqueID; // size: 0x4, address: 0x4A5064
// total size: 0x20
struct /* @anon0 */ {} xGameObj::__vtable; // size: 0x20, address: 0x4A2870
// total size: 0xB0
class _RwFrame {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwMatrix modelling; // offset 0x10, size 0x40
    class _RwMatrix ltm; // offset 0x50, size 0x40
    class _RwLLLink inDirtyListLink; // offset 0x90, size 0x8
    class _RwLinkList objectList; // offset 0x98, size 0x8
    class _RwFrame * child; // offset 0xA0, size 0x4
    class _RwFrame * next; // offset 0xA4, size 0x4
    class _RwFrame * root; // offset 0xA8, size 0x4
};
// total size: 0xC
class _RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xCC
class xGameObj {
    // Members
public:
    unsigned int m_objFlags; // offset 0x0, size 0x4
    unsigned int m_objID; // offset 0x4, size 0x4
    unsigned int m_objType; // offset 0x8, size 0x4
    class xFSMData m_fsmData; // offset 0xC, size 0xC
    class _p2Geom m_geom; // offset 0x18, size 0x20
    class xGameObj * m_next; // offset 0x38, size 0x4
    class xGameObj * m_prev; // offset 0x3C, size 0x4
    class tagxPhysicsObject m_phys; // offset 0x40, size 0x88
};
// total size: 0x40
class _RwMatrix {
    // Members
public:
    class _RwV3d right; // offset 0x0, size 0xC
    unsigned int flags; // offset 0xC, size 0x4
    class _RwV3d up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class _RwV3d at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
    class _RwV3d pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x6
class _FCinfo {
    // Members
public:
    unsigned short nidx[3]; // offset 0x0, size 0x6
};
// total size: 0x20
class _p2Geom {
    // Members
public:
    unsigned int m_meshCount; // offset 0x0, size 0x4
    class tagP2Mesh * m_mesh; // offset 0x4, size 0x4
    class _iRenderEffects effects; // offset 0x8, size 0x14
    class _RpClump * m_clump; // offset 0x1C, size 0x4
};
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
// total size: 0x38
class tagP2Mesh {
    // Members
public:
    signed int m_vertexCount; // offset 0x0, size 0x4
    class tagP2VERTEX * m_vertex; // offset 0x4, size 0x4
    class tagP2VERTEX * m_neutralPose0; // offset 0x8, size 0x4
    class tagP2MeshVertex * m_neutralPose1; // offset 0xC, size 0x4
    class tagP2Weight * m_joints; // offset 0x10, size 0x4
    signed int m_indexCount; // offset 0x14, size 0x4
    unsigned short * m_index; // offset 0x18, size 0x4
    signed int m_visible; // offset 0x1C, size 0x4
    class _FCinfo * fc; // offset 0x20, size 0x4
    class Vector3D * fnorm; // offset 0x24, size 0x4
    class Vector3D * m_vnorm; // offset 0x28, size 0x4
    class Vector4D * m_vtnorm; // offset 0x2C, size 0x4
    class tagiMesh * m_next; // offset 0x30, size 0x4
    signed int m_normalsBuilt; // offset 0x34, size 0x4
};
// total size: 0x20
class _RpClump {
    // Members
public:
    class _RwObject object; // offset 0x0, size 0x8
    class _RwLinkList atomicList; // offset 0x8, size 0x8
    class _RwLLLink inWorldLink; // offset 0x10, size 0x8
    class _RpClump * (* callback)(class _RpClump *, void *); // offset 0x18, size 0x4
    unsigned short renderFrame; // offset 0x1C, size 0x2
};
// total size: 0x14
class tagP2VERTEX {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float tu; // offset 0xC, size 0x4
    float tv; // offset 0x10, size 0x4
};
// total size: 0xC
class tagP2MeshVertex {
    // Members
public:
    float m_x; // offset 0x0, size 0x4
    float m_y; // offset 0x4, size 0x4
    float m_z; // offset 0x8, size 0x4
};
// total size: 0xC
class Vector3D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0xC
class tagP2Weight {
    // Members
public:
    unsigned short m_joint0; // offset 0x0, size 0x2
    unsigned short m_joint1; // offset 0x2, size 0x2
    float m_weight0; // offset 0x4, size 0x4
    float m_weight1; // offset 0x8, size 0x4
};
// total size: 0x8
class _RwObject {
    // Members
public:
    unsigned char type; // offset 0x0, size 0x1
    unsigned char subType; // offset 0x1, size 0x1
    unsigned char flags; // offset 0x2, size 0x1
    unsigned char privateFlags; // offset 0x3, size 0x1
    void * parent; // offset 0x4, size 0x4
};
// total size: 0x10
class Vector4D {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
    float t; // offset 0xC, size 0x4
};
// total size: 0x8
class _RwLLLink {
    // Members
public:
    class _RwLLLink * next; // offset 0x0, size 0x4
    class _RwLLLink * prev; // offset 0x4, size 0x4
};
// total size: 0x0
class tagiMesh {};
// total size: 0x20
struct /* @anon0 */ {};
// total size: 0xC
class xFSMData {
    // Members
public:
    unsigned short m_fsmType; // offset 0x0, size 0x2
    unsigned short m_fsmState; // offset 0x2, size 0x2
    unsigned short m_fsmNextState; // offset 0x4, size 0x2
    signed int m_fsmForceChange; // offset 0x8, size 0x4
};
// total size: 0x8
class _RwLinkList {
    // Members
public:
    class _RwLLLink link; // offset 0x0, size 0x8
};
// total size: 0x14
class _iRenderEffects {
    // Members
public:
    unsigned int flags; // offset 0x0, size 0x4
    unsigned char colorA[4]; // offset 0x4, size 0x4
    unsigned char colorB[4]; // offset 0x8, size 0x4
    unsigned char litcolor[4]; // offset 0xC, size 0x4
    signed char abr; // offset 0x10, size 0x1
    signed char abrB; // offset 0x11, size 0x1
    unsigned char fadetime; // offset 0x12, size 0x1
    unsigned char fadectr; // offset 0x13, size 0x1
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGameObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00400330 -> 0x00400394
*/
// Range: 0x400330 -> 0x400394
// this: r2
class _RwV3d * xGameObj::GetLocalZ() {
    /* anonymous block */ {
        // Range: 0x400330 -> 0x400394
        class _RwMatrix * m; // r2
        class _RwFrame * f; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGameObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004003A0 -> 0x00400404
*/
// Range: 0x4003A0 -> 0x400404
// this: r2
class _RwV3d * xGameObj::GetPos() {
    /* anonymous block */ {
        // Range: 0x4003A0 -> 0x400404
        class _RwMatrix * m; // r2
        class _RwFrame * f; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGameObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00400410 -> 0x004004B8
*/
// Range: 0x400410 -> 0x4004B8
// this: r2
void xGameObj::SetPos(float x /* r22 */, float y /* r21 */, float z /* r20 */) {
    /* anonymous block */ {
        // Range: 0x400410 -> 0x4004B8
        class _RwFrame * f; // r17
        class _RwMatrix * m; // r16
        class _RwV3d * new_pos; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGameObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004004C0 -> 0x00400568
*/
// Range: 0x4004C0 -> 0x400568
// this: r2
void xGameObj::SetPos(class Vector3D * v /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4004C0 -> 0x400568
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xGameObj.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00400570 -> 0x004005A4
*/
// Range: 0x400570 -> 0x4005A4
// this: r2
xGameObj::xGameObj() {
    /* anonymous block */ {
        // Range: 0x400570 -> 0x4005A4
    }
}


