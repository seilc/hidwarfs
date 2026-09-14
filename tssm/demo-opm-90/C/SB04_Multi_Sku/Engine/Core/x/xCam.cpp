/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00435BA0 -> 0x00435BC0
*/
// Range: 0x435BA0 -> 0x435BC0
// this: r2
class xCam * xCamBlend::get_next() {
    /* anonymous block */ {
        // Range: 0x435BA0 -> 0x435BC0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00435BC0 -> 0x00436C14
*/
// Range: 0x435BC0 -> 0x436C14
// this: r16
void xCamBlend::update(class xScene & scene /* r17 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x435BC0 -> 0x436C14
        float t; // r1
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00436C20 -> 0x00436CC4
*/
// Range: 0x436C20 -> 0x436CC4
// this: r16
void xCamBlend::stop() {
    /* anonymous block */ {
        // Range: 0x436C20 -> 0x436CC4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00436CD0 -> 0x00436F00
*/
// Range: 0x436CD0 -> 0x436F00
// this: r16
void xCamBlend::start() {
    /* anonymous block */ {
        // Range: 0x436CD0 -> 0x436F00
        enum xCamOrientType orient_table[2][2]; // @ 0x0062C850
        enum xCamCoordType coord_table[3][3]; // @ 0x0062C820
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00436F00 -> 0x00436F08
*/
// Range: 0x436F00 -> 0x436F08
void destroy() {
    /* anonymous block */ {
        // Range: 0x436F00 -> 0x436F08
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00436F10 -> 0x00436F3C
*/
// Range: 0x436F10 -> 0x436F3C
// this: r2
void xCamBlend::create() {
    /* anonymous block */ {
        // Range: 0x436F10 -> 0x436F3C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00436F40 -> 0x00437C60
*/
// Range: 0x436F40 -> 0x437C60
void create_frustum_planes(class xVec4 * frust_planes /* r2 */, class xMat4x3 & ltm /* r2 */, class xVec2 & view_offset /* r2 */, class xVec2 & view_window /* r2 */, float near_plane /* r29+0x370 */, float far_plane /* r29+0x370 */) {
    /* anonymous block */ {
        // Range: 0x436F40 -> 0x437C60
        class plane_type * planes; // r2
        class xVec3 temp; // r29+0x360
        class xVec3 cop; // r29+0x350
        float scale; // r29+0x370
        class xVec3 corners[8]; // r29+0xD0
        signed int i; // r22
        class xVec3 * target; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00437C60 -> 0x00437CD4
*/
// Range: 0x437C60 -> 0x437CD4
// this: r2
void xCamScreen::set_fov(float fov /* r29+0x30 */) {
    /* anonymous block */ {
        // Range: 0x437C60 -> 0x437CD4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00437CE0 -> 0x00437D6C
*/
// Range: 0x437CE0 -> 0x437D6C
// this: r2
void xCamScreen::set_world_matrix(class xMat4x3 & mat /* r17 */) {
    /* anonymous block */ {
        // Range: 0x437CE0 -> 0x437D6C
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00437D70 -> 0x00437DA0
*/
// Range: 0x437D70 -> 0x437DA0
// this: r2
void xCamScreen::end_render() {
    /* anonymous block */ {
        // Range: 0x437D70 -> 0x437DA0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00437DA0 -> 0x00437FB4
*/
// Range: 0x437DA0 -> 0x437FB4
// this: r17
void xCamScreen::begin_render(unsigned char clear /* r2 */) {
    /* anonymous block */ {
        // Range: 0x437DA0 -> 0x437FB4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00437FC0 -> 0x00438178
*/
// Range: 0x437FC0 -> 0x438178
// this: r2
void xCamScreen::prepare_render() {
    /* anonymous block */ {
        // Range: 0x437FC0 -> 0x438178
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438180 -> 0x004381BC
*/
// Range: 0x438180 -> 0x4381BC
// this: r2
void xCamScreen::set_scene(class xScene & scene /* r2 */) {
    /* anonymous block */ {
        // Range: 0x438180 -> 0x4381BC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004381C0 -> 0x004381C8
*/
// Range: 0x4381C0 -> 0x4381C8
// this: r2
void xCamScreen::destroy() {
    /* anonymous block */ {
        // Range: 0x4381C0 -> 0x4381C8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004381D0 -> 0x00438204
*/
// Range: 0x4381D0 -> 0x438204
// this: r16
void xCamScreen::create(signed int w /* r2 */, signed int h /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4381D0 -> 0x438204
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438210 -> 0x004383DC
*/
// Range: 0x438210 -> 0x4383DC
// this: r17
void xCamGroup::set_primary(signed int index /* r16 */) {
    /* anonymous block */ {
        // Range: 0x438210 -> 0x4383DC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004383E0 -> 0x004385A4
*/
// Range: 0x4383E0 -> 0x4385A4
// this: r2
signed int xCamGroup::get_blend(signed int to_index /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4383E0 -> 0x4385A4
        class xCam * to; // r2
        class xCamBlend * parent; // r5
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004385B0 -> 0x00438644
*/
// Range: 0x4385B0 -> 0x438644
// this: r2
signed int xCamGroup::get_next() {
    /* anonymous block */ {
        // Range: 0x4385B0 -> 0x438644
        signed int next; // r2
        signed int min_priority; // r8
        signed int i; // r7
        signed int priority; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438650 -> 0x004386FC
*/
// Range: 0x438650 -> 0x4386FC
// this: r2
void xCamGroup::remove(class xCam & cam /* r2 */, unsigned char force_cut /* r2 */) {
    /* anonymous block */ {
        // Range: 0x438650 -> 0x4386FC
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438700 -> 0x004387A4
*/
// Range: 0x438700 -> 0x4387A4
// this: r2
void xCamGroup::add(class xCam & cam /* r2 */, unsigned char force_cut /* r2 */) {
    /* anonymous block */ {
        // Range: 0x438700 -> 0x4387A4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004387B0 -> 0x00438BB4
*/
// Range: 0x4387B0 -> 0x438BB4
// this: r18
void xCamGroup::update(class xScene & scene /* r16 */, float dt /* r20 */) {
    /* anonymous block */ {
        // Range: 0x4387B0 -> 0x438BB4
        class xVec3 prev_pos; // r29+0x90
        signed int next_index; // r2
        class xCam * next; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438BC0 -> 0x00438C18
*/
// Range: 0x438BC0 -> 0x438C18
// this: r16
void xCamGroup::priority_force_cut() {
    /* anonymous block */ {
        // Range: 0x438BC0 -> 0x438C18
        signed int next_index; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438C20 -> 0x00438CD0
*/
// Range: 0x438C20 -> 0x438CD0
// this: r17
void xCamGroup::reset() {
    /* anonymous block */ {
        // Range: 0x438C20 -> 0x438CD0
        class xCam * * it; // r16
        class xCam * * end; // r2
        class xCam & c; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438CD0 -> 0x00438D24
*/
// Range: 0x438CD0 -> 0x438D24
// this: r2
void xCamGroup::destroy() {
    /* anonymous block */ {
        // Range: 0x438CD0 -> 0x438D24
        class xCamBlend * * it; // r17
        class xCamBlend * * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438D30 -> 0x00438DE0
*/
// Range: 0x438D30 -> 0x438DE0
// this: r2
void xCamGroup::create() {
    /* anonymous block */ {
        // Range: 0x438D30 -> 0x438DE0
        class xCamBlend * * it; // r18
        class xCamBlend * * end; // r2
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438DE0 -> 0x00438DF0
*/
// Range: 0x438DE0 -> 0x438DF0
// this: r2
unsigned char xCam::active() {
    /* anonymous block */ {
        // Range: 0x438DE0 -> 0x438DF0
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438DF0 -> 0x00438E08
*/
// Range: 0x438DF0 -> 0x438E08
// this: r2
void xCam::create() {
    /* anonymous block */ {
        // Range: 0x438DF0 -> 0x438E08
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438E10 -> 0x00438FA8
*/
// Range: 0x438E10 -> 0x438FA8
// this: r16
void xCam::refresh_mat() {
    /* anonymous block */ {
        // Range: 0x438E10 -> 0x438FA8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438FB0 -> 0x00438FB8
*/
// Range: 0x438FB0 -> 0x438FB8
void scene_exit() {
    /* anonymous block */ {
        // Range: 0x438FB0 -> 0x438FB8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438FC0 -> 0x00438FC8
*/
// Range: 0x438FC0 -> 0x438FC8
void scene_enter() {
    /* anonymous block */ {
        // Range: 0x438FC0 -> 0x438FC8
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438FD0 -> 0x00438FE4
*/
// Range: 0x438FD0 -> 0x438FE4
// this: r2
void xCam::stop() {
    /* anonymous block */ {
        // Range: 0x438FD0 -> 0x438FE4
    }
}


/*
    Compile unit: C:\SB04_Multi_Sku\Engine\Core\x\xCam.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00438FF0 -> 0x00439000
*/
// Range: 0x438FF0 -> 0x439000
// this: r2
void xCam::start() {
    /* anonymous block */ {
        // Range: 0x438FF0 -> 0x439000
    }
}


