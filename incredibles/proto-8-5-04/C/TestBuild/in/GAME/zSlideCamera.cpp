/*
    Compile unit: C:\TestBuild\in\GAME\zSlideCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char SLIDE_CAM; // size: 0x1, address: 0x0
// total size: 0x24
struct /* @anon0 */ {} zSlideCam::__vtable; // size: 0x24, address: 0x6010A0
// total size: 0x10
class /* @class */ {
    // Members
public:
    union { // inferred
        class xQuat quat; // offset 0x0, size 0x10
        class xCamOrientEuler euler; // offset 0x0, size 0xC
    };
};
// total size: 0x110
class zSlideCam : public xCam {
    // Members
public:
    class xMat4x3 * target; // offset 0xD0, size 0x4
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        float spring_len; // offset 0x0, size 0x4
        float spring_const; // offset 0x4, size 0x4
        float damp_const; // offset 0x8, size 0x4
        float vertical_offset; // offset 0xC, size 0x4
    } cfg; // offset 0xD4, size 0x10
    class xVec3 curr_tgt_pos; // offset 0xE4, size 0xC
    class xVec3 prev_tgt_pos; // offset 0xF0, size 0xC
    class xVec3 cam_pos; // offset 0xFC, size 0xC
};
// total size: 0x30
class xMat3x3 {
    // Members
public:
    class xVec3 right; // offset 0x0, size 0xC
    signed int flags; // offset 0xC, size 0x4
    class xVec3 up; // offset 0x10, size 0xC
    unsigned int pad1; // offset 0x1C, size 0x4
    class xVec3 at; // offset 0x20, size 0xC
    unsigned int pad2; // offset 0x2C, size 0x4
};
// total size: 0x54
class xCamConfigFollow {
    // Members
public:
    class zone_data zone_rest; // offset 0x0, size 0x18
    class zone_data zone_above; // offset 0x18, size 0x18
    class zone_data zone_below; // offset 0x30, size 0x18
    float speed_zone_offset; // offset 0x48, size 0x4
    float speed_zone_face; // offset 0x4C, size 0x4
    float speed_move_orbit; // offset 0x50, size 0x4
};
// total size: 0x40
class xMat4x3 : public xMat3x3 {
    // Members
public:
    class xVec3 pos; // offset 0x30, size 0xC
    unsigned int pad3; // offset 0x3C, size 0x4
};
// total size: 0x10
class /* @class */ {
    // Members
public:
    float spring_len; // offset 0x0, size 0x4
    float spring_const; // offset 0x4, size 0x4
    float damp_const; // offset 0x8, size 0x4
    float vertical_offset; // offset 0xC, size 0x4
};
// total size: 0xC
class xVec3 {
    // Members
public:
    union { // inferred
        class RwV3d m_RwV3d; // offset 0x0, size 0xC
        struct { // inferred
            float x; // offset 0x0, size 0x4
            float y; // offset 0x4, size 0x4
            float z; // offset 0x8, size 0x4
        };
        float a[3]; // offset 0x0, size 0xC
    };
};
// total size: 0x18
class zone_data {
    // Members
public:
    class xVec3 offset; // offset 0x0, size 0xC
    class xVec3 face; // offset 0xC, size 0xC
};
enum xCamCoordType {
    XCAM_COORD_INVALID = -1,
    XCAM_COORD_CART = 0,
    XCAM_COORD_CYLINDER = 1,
    XCAM_COORD_SPHERE = 2,
    XCAM_COORD_MAX = 3,
};
// total size: 0x8
class xVec2 {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
};
// total size: 0x18
class xCamCoordCylinder {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    float height; // offset 0x10, size 0x4
    float theta; // offset 0x14, size 0x4
};
// total size: 0x120
class xCamGroup {
    // Members
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    class xVec3 vel; // offset 0x40, size 0xC
    float fov; // offset 0x4C, size 0x4
    float fov_default; // offset 0x50, size 0x4
    signed int flags; // offset 0x54, size 0x4
    class xCam * primary; // offset 0x58, size 0x4
    class analog_data analog; // offset 0x5C, size 0x18
    class xCam * owned[32]; // offset 0x74, size 0x80
    signed int size; // offset 0xF4, size 0x4
    signed int primary_index; // offset 0xF8, size 0x4
    signed int child_flags; // offset 0xFC, size 0x4
    signed int child_flags_mask; // offset 0x100, size 0x4
    class xCamBlend * blend_cam[4]; // offset 0x104, size 0x10
};
// total size: 0x20
class xCamCoordSphere {
    // Members
public:
    class xVec3 origin; // offset 0x0, size 0xC
    float dist; // offset 0xC, size 0x4
    class xQuat dir; // offset 0x10, size 0x10
};
// total size: 0xE0
class xCamBlend : public xCam {
    // Members
public:
    class xCam * src; // offset 0xD0, size 0x4
    class xCam * dst; // offset 0xD4, size 0x4
    float time; // offset 0xD8, size 0x4
};
// total size: 0xD0
class xCam {
    // Members
public:
    class xMat4x3 mat; // offset 0x0, size 0x40
    float fov; // offset 0x40, size 0x4
    signed int flags; // offset 0x44, size 0x4
    unsigned int owner; // offset 0x48, size 0x4
    class xCamGroup * group; // offset 0x4C, size 0x4
    class analog_data analog; // offset 0x50, size 0x18
    float motion_factor; // offset 0x68, size 0x4
    enum xCamCoordType coord_type; // offset 0x6C, size 0x4
    enum xCamOrientType orient_type; // offset 0x70, size 0x4
    // total size: 0x20
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class xVec3 cart; // offset 0x0, size 0xC
            class xCamCoordCylinder cylinder; // offset 0x0, size 0x18
            class xCamCoordSphere sphere; // offset 0x0, size 0x20
        };
    } coord; // offset 0x80, size 0x20
    // total size: 0x10
    class /* @class */ {
        // Members
    public:
        union { // inferred
            class xQuat quat; // offset 0x0, size 0x10
            class xCamOrientEuler euler; // offset 0x0, size 0xC
        };
    } orient; // offset 0xA0, size 0x10
    class xCamConfigCommon cfg_common; // offset 0xB0, size 0x8
    signed int group_index; // offset 0xBC, size 0x4
    signed int group_flags; // offset 0xC0, size 0x4
    class xCamBlend * blender; // offset 0xC4, size 0x4
};
// total size: 0xC
class RwV3d {
    // Members
public:
    float x; // offset 0x0, size 0x4
    float y; // offset 0x4, size 0x4
    float z; // offset 0x8, size 0x4
};
// total size: 0x18
class analog_data {
    // Members
public:
    class xVec2 offset; // offset 0x0, size 0x8
    class xVec2 dir; // offset 0x8, size 0x8
    float mag; // offset 0x10, size 0x4
    float ang; // offset 0x14, size 0x4
};
// total size: 0x10
class xQuat {
    // Members
public:
    class xVec3 v; // offset 0x0, size 0xC
    float s; // offset 0xC, size 0x4
};
enum xCamOrientType {
    XCAM_ORIENT_INVALID = -1,
    XCAM_ORIENT_QUAT = 0,
    XCAM_ORIENT_EULER = 1,
    XCAM_ORIENT_MAX = 2,
};
// total size: 0x24
struct /* @anon0 */ {};
// total size: 0xC
class xCamOrientEuler {
    // Members
public:
    float yaw; // offset 0x0, size 0x4
    float pitch; // offset 0x4, size 0x4
    float roll; // offset 0x8, size 0x4
};
// total size: 0x20
class /* @class */ {
    // Members
public:
    union { // inferred
        class xVec3 cart; // offset 0x0, size 0xC
        class xCamCoordCylinder cylinder; // offset 0x0, size 0x18
        class xCamCoordSphere sphere; // offset 0x0, size 0x20
    };
};
// total size: 0x8
class xCamConfigCommon {
    // Members
public:
    unsigned char priority; // offset 0x0, size 0x1
    unsigned char pad1; // offset 0x1, size 0x1
    unsigned char pad2; // offset 0x2, size 0x1
    unsigned char pad3; // offset 0x3, size 0x1
    float blend_time; // offset 0x4, size 0x4
};

/*
    Compile unit: C:\TestBuild\in\GAME\zSlideCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A1C20 -> 0x002A20A4
*/
// Range: 0x2A1C20 -> 0x2A20A4
// this: r18
void zSlideCam::update(float dt /* r24 */) {
    /* anonymous block */ {
        // Range: 0x2A1C20 -> 0x2A20A4
        class xVec3 y_axis; // r29+0x130
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zSlideCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A20B0 -> 0x002A2134
*/
// Range: 0x2A20B0 -> 0x2A2134
// this: r2
void zSlideCam::setPrevTgtPos(class xVec3 & pos /* r2 */, class xVec3 & up /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A20B0 -> 0x2A2134
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zSlideCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A2140 -> 0x002A21C4
*/
// Range: 0x2A2140 -> 0x2A21C4
// this: r2
void zSlideCam::setCurrTgtPos(class xVec3 & pos /* r2 */, class xVec3 & up /* r2 */) {
    /* anonymous block */ {
        // Range: 0x2A2140 -> 0x2A21C4
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zSlideCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A21D0 -> 0x002A2224
*/
// Range: 0x2A21D0 -> 0x2A2224
// this: r16
void zSlideCam::start() {
    /* anonymous block */ {
        // Range: 0x2A21D0 -> 0x2A2224
    }
}


/*
    Compile unit: C:\TestBuild\in\GAME\zSlideCamera.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x002A2230 -> 0x002A2290
*/
// Range: 0x2A2230 -> 0x2A2290
// this: r16
void zSlideCam::create() {
    /* anonymous block */ {
        // Range: 0x2A2230 -> 0x2A2290
    }
}


