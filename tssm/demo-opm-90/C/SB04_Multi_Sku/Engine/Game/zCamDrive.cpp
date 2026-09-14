/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCamDrive.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00395290 -> 0x00395B38
*/
// Range: 0x395290 -> 0x395B38
// this: r16
void zCamDrive::update(float dt /* r22 */) {
    /* anonymous block */ {
        // Range: 0x395290 -> 0x395B38
        class xVec3 dPos; // r29+0x218
        class xVec3 target_velocity; // r29+0x208
        signed int x; // r2
        float input_vel_x; // r21
        float offsetX; // r29+0x22C
        class xVec3 new_target_position; // r29+0x1F8
        class xMat4x3 dest; // r29+0x50
        class xVec3 old_position; // r29+0x1E8
        class xQuat old_orientation; // r29+0x40
        class xVec3 camera_to_player; // r29+0x1D8
        class xQuat rotation; // r29+0x30
        class xVec3 up; // r29+0x1C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCamDrive.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00395B40 -> 0x00395E5C
*/
// Range: 0x395B40 -> 0x395E5C
// this: r16
void zCamDrive::collide(float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x395B40 -> 0x395E5C
        class xQuat old_orient; // r29+0x140
        class xMat4x3 dest; // r29+0x100
        class xSweptSphere sws; // r29+0x30
        float target_distance; // r29+0x1EC
        class xVec3 start; // r29+0x1E0
        class xVec3 end; // r29+0x1D0
        class xVec3 camera_to_player; // r29+0x1C0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCamDrive.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00395E60 -> 0x003963F4
*/
// Range: 0x395E60 -> 0x3963F4
// this: r16
void zCamDrive::apply_standard_input(float dt /* r21 */) {
    /* anonymous block */ {
        // Range: 0x395E60 -> 0x3963F4
        signed int x; // r2
        signed int y; // r2
        float input_vel_x; // r20
        float input_vel_y; // r29+0x14C
        class xQuat rotation; // r29+0x90
        class xVec3 up; // r29+0x138
        class xVec3 camera_position; // r29+0x128
        class xVec3 camera_to_player; // r29+0x118
        class xMat3x3 dest; // r29+0x60
        class xQuat target_orientation; // r29+0x50
        class xQuat old_orientation; // r29+0x40
        float old_orientation_v; // r20
        class xQuat new_orientation; // r29+0x30
        float target_responsiveness; // r29+0x148
        float blend; // r21
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCamDrive.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396400 -> 0x00396408
*/
// Range: 0x396400 -> 0x396408
// this: r2
void zCamDrive::set_frame(class xEntFrame * frame /* r2 */) {
    /* anonymous block */ {
        // Range: 0x396400 -> 0x396408
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCamDrive.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396410 -> 0x00396820
*/
// Range: 0x396410 -> 0x396820
// this: r16
void zCamDrive::start() {
    /* anonymous block */ {
        // Range: 0x396410 -> 0x396820
        class xVec3 camera_position; // r29+0x170
        class xVec3 camera_to_player; // r29+0x160
        class xMat3x3 dest; // r29+0x20
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Game\zCamDrive.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00396820 -> 0x00396968
*/
// Range: 0x396820 -> 0x396968
// this: r16
void zCamDrive::create() {
    /* anonymous block */ {
        // Range: 0x396820 -> 0x396968
    }
}


