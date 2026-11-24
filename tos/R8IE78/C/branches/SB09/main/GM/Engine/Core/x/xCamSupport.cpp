/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xCamSupport.cpp
*/
class path_node prev_path[33]; // size: 0x18C, address: 0x8072E1C0
class config cfg; // size: 0x18, address: 0x80720030
class xVec3 tim_vect; // size: 0xC, address: 0x80720048
float tim_BleedOut; // size: 0x4, address: 0x80720054
// signature: @unnamed@WAD00_cpp@::arc_sphere_to_plane(const xMat4x3 &, float, float, const xVec3 &, float)
// Range: 0x80020740 -> 0x80020844
static float @unnamed@WAD00_cpp@::arc_sphere_to_plane(class xMat4x3 & circle_mat /* r31 */, float Rc /* f30 */, float Rs /* f29 */) {
    // Local variables
    class xVec3 N; // r1+0x14
    class xVec3 point_on_plane; // r1+0x8
    float D; // f3
    float D_Rc; // f31
    float Nx2_Ny2; // f30
    float det; // f29
    float cost; // f1
    float t; // f0
}
// signature: xCamSupportLOSBar::reset(const xVec3 &, const xVec3 &)
// Range: 0x800209A0 -> 0x800209F0
void xCamSupportLOSBar::reset(class xCamSupportLOSBar * this /* r30 */, class xVec3 & stern_loc /* r31 */) {
    // References
    // -> class config cfg;
}
// Range: 0x800209F0 -> 0x80020A7C
void xCamSupportLOSBar::begin_update(class xCamSupportLOSBar * this /* r30 */, class xVec3 & origin /* r31 */) {
    // Local variables
    float dy; // f1

    // References
    // -> class config cfg;
}
// Range: 0x80020A80 -> 0x80020B14
void xCamSupportLOSBar::precollide() {
    // Local variables
    float dx; // f5
    float dz; // f4
    float xzdist2; // f31
    float dylower; // f2
    float dyupper; // f30
    float rlower; // f0
    float rupper; // f0
    float ylower; // f0
    float yupper; // f0
    float ycenter; // f0

    // References
    // -> class config cfg;
}
// Range: 0x80020B20 -> 0x800213AC
bool xCamSupportLOSBar::collide_pivot(class xCamSupportLOSBar * this /* r31 */) {
    // Local variables
    class xCapsule to_cap; // r1+0x140
    float to_t; // f31
    float to_dist; // f0
    class xVec3 to_tohit; // r1+0xE0
    class xVec3 to_impact; // r1+0xD4
    class xCapsule from_cap; // r1+0x108
    float from_t; // f0
    float from_dist; // f0
    class xVec3 from_tohit; // r1+0xBC
    class xVec3 cap_offset; // r1+0xB0
    class xVec3 impact; // r1+0xA4
    class xVec3 N; // r1+0x98
    float D; // f30
    float min_from_t; // f0

    {
        // Range: 0x80020BBC -> 0x80020E80
        // Local variables
        class xCapsule new_cap; // r1+0x124
        float new_rail_yoffset; // f3

        {
            // Range: 0x80020C8C -> 0x80020E80
            // Local variables
            float newy; // f1
            float xzdist; // f0
            float dz; // f3
            float dx; // f1
            float newpitch; // f0
            float oldpitch; // f0
            float vrot; // f29
            float Rc; // f1
            float bar_mag; // f0
            class xMat4x3 vcircle_mat; // r1+0x1D0
            float D; // f30
            class xVec3 N; // r1+0xC8
        }
    }
    {
        // Range: 0x80020F08 -> 0x80020F7C
        // Local variables
        int tries; // r30
        float end_s; // f30
        float start_s; // r31

        {
            // Range: 0x80020F18 -> 0x80020F74
            // Local variables
            class xCapsule cap; // r1+0xEC
            float s; // f31
        }
    }
    {
        // Range: 0x80021050 -> 0x8002118C
        // Local variables
        class xMat3x3 rot_mat; // r1+0x160
        float max_rot; // f4
        class xMat4x3 circle_mat; // r1+0x190
        float Rc; // f29
        class xVec3 uCP; // r1+0x74
        class xVec3 CP; // r1+0x80
        class xVec3 P; // r1+0x8C
        class xVec3 & C; // r0
    }
    {
        // Range: 0x80021190 -> 0x8002136C
        // Local variables
        float det; // f29
        class xVec3 PV; // r1+0x38
        float R2; // f29
        float R; // f0
        class xVec3 rot_axis; // r1+0x44
        class xVec3 BP; // r1+0x50
        class xVec3 AP; // r1+0x5C
        class xVec3 & B; // r29
        class xVec3 & A; // r0
        class xVec3 & P; // r0
        class xVec3 depen; // r1+0x68
        float depen_mul; // f1

        {
            // Range: 0x80021290 -> 0x8002136C
            // Local variables
            float offset_mag; // f0
            class xVec3 BV; // r1+0x20
            class xVec3 V; // r1+0x2C
        }
    }

    // References
    // -> class config cfg;
}
