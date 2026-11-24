/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xScreenWarp.cpp
*/
static float uvmap_uoffset; // size: 0x4, address: 0x8075DF5C
static float uvmap_voffset; // size: 0x4, address: 0x8075DF60
static float uvmap_uscale; // size: 0x4, address: 0x8075DF64
static float uvmap_vscale; // size: 0x4, address: 0x8075DF68
static float uvmap_udelta; // size: 0x4, address: 0x8075DF6C
static float uvmap_vdelta; // size: 0x4, address: 0x8075DF70
static float uvmap_xscale; // size: 0x4, address: 0x8075DF74
static float uvmap_yscale; // size: 0x4, address: 0x8075DF78
static float uvmap_xdelta; // size: 0x4, address: 0x8075DF7C
static float uvmap_ydelta; // size: 0x4, address: 0x8075DF80
static unsigned int common_warp_ids[6]; // size: 0x18, address: 0x8075DF88
static class warper warp_buffer[128]; // size: 0x1800, address: 0x8075DFA0
static class warper warp_lists[6]; // size: 0x120, address: 0x8075F7A0
static class warper * warp_stack; // size: 0x4, address: 0x8075F8C0
char * common_warp_names[7]; // size: 0x1C, address: 0x806F2F40
void (* common_warp_animate[6])(class xVec2 * uvmap, class warper * warp, class xVec2 * loc, float radius, float intensity, float iz, float s); // size: 0x18, address: 0x806F2F60
// signature: @unnamed@WAD00_cpp@::warp_animate_warble(xVec2 *, xScreenWarp::warper &, const xVec2 &, float, float, float, float)
// Range: 0x8005AFC0 -> 0x8005B464
static void @unnamed@WAD00_cpp@::warp_animate_warble(float s /* f2 */) {
    // Local variables
    float random_u; // f0
    float random_v; // f2
    float r2; // f3
    float ir2; // f4
    int istart; // reg65535
    int iend; // r30
    int jstart; // r29
    int jend; // r28
    float dx; // f11
    float dy; // f12
    float x; // f13

    {
        // Range: 0x8005B114 -> 0x8005B428
        // Local variables
        int i; // r27

        {
            // Range: 0x8005B114 -> 0x8005B428
            // Local variables
            float y; // f31

            {
                // Range: 0x8005B114 -> 0x8005B418
                // Local variables
                int j; // r26

                {
                    // Range: 0x8005B114 -> 0x8005B418
                    // Local variables
                    float intensity; // f30
                    float dist2; // f1
                    float yoff; // f1
                    float xoff; // f5
                }
            }
        }
    }

    // References
    // -> static unsigned int * next;
    // -> static unsigned int state[624];
    // -> static int left;
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_vscale;
    // -> static float uvmap_uscale;
}
// signature: @unnamed@WAD00_cpp@::warp_animate_lens(xVec2 *, xScreenWarp::warper &, const xVec2 &, float, float, float, float)
// Range: 0x8005B470 -> 0x8005B6C8
static void @unnamed@WAD00_cpp@::warp_animate_lens(class xVec2 * uvmap /* r30 */, class xVec2 * loc /* r31 */, float radius /* f30 */, float base_intensity /* f31 */, float s /* f29 */) {
    // Local variables
    float mag; // f3
    float r2; // f0
    float ir2; // f1
    float umag; // f2
    float vmag; // f3
    int istart; // reg65535
    int iend; // r8
    int jstart; // r9
    int jend; // r10
    float dx; // f9
    float dy; // f10
    float x; // f11

    {
        // Range: 0x8005B5D4 -> 0x8005B67C
        // Local variables
        int i; // r11

        {
            // Range: 0x8005B5D4 -> 0x8005B67C
            // Local variables
            float y; // f12

            {
                // Range: 0x8005B5EC -> 0x8005B66C
                // Local variables
                int j; // r12

                {
                    // Range: 0x8005B5EC -> 0x8005B66C
                    // Local variables
                    float scale; // f30
                    float dist2; // f4
                    float yoff; // f13
                    float xoff; // f5
                }
            }
        }
    }

    // References
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_vscale;
    // -> static float uvmap_uscale;
}
// signature: @unnamed@WAD00_cpp@::warp_animate_ripple(xVec2 *, xScreenWarp::warper &, const xVec2 &, float, float, float, float)
// Range: 0x8005B6D0 -> 0x8005BA00
static void @unnamed@WAD00_cpp@::warp_animate_ripple(class xVec2 * uvmap /* r29 */, class xVec2 * loc /* r30 */, float s /* f17 */) {
    // Local variables
    float mag; // f9
    float umag; // f29
    float vmag; // f28
    float freq; // f27
    float r2; // f26
    float ir2; // f25
    int istart; // reg65535
    int iend; // r23
    int jstart; // r22
    int jend; // r21
    float dx; // f24
    float dy; // f23
    float x; // f22

    {
        // Range: 0x8005B790 -> 0x8005B7B8
        // Local variables
        float m; // f3
    }
    {
        // Range: 0x8005B89C -> 0x8005B95C
        // Local variables
        int i; // r31

        {
            // Range: 0x8005B89C -> 0x8005B95C
            // Local variables
            float y; // f21

            {
                // Range: 0x8005B8B8 -> 0x8005B948
                // Local variables
                int j; // r20

                {
                    // Range: 0x8005B8B8 -> 0x8005B948
                    // Local variables
                    float scale; // f1
                    float t; // f18
                    float dist2; // f0
                    float yoff; // f19
                    float xoff; // f20
                }
            }
        }
    }

    // References
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_vscale;
    // -> static float uvmap_uscale;
}
// signature: @unnamed@WAD00_cpp@::warp_animate_shockwave(xVec2 *, xScreenWarp::warper &, const xVec2 &, float, float, float, float)
// Range: 0x8005BA00 -> 0x8005BE08
static void @unnamed@WAD00_cpp@::warp_animate_shockwave(class xVec2 * uvmap /* r29 */, class xVec2 * loc /* r30 */, float s /* f14 */) {
    // Local variables
    float mag; // f2
    float umag; // f24
    float vmag; // f23
    float r2; // f22
    float ir; // f21
    int istart; // reg65535
    int iend; // r22
    int jstart; // r21
    int jend; // r20
    float dx; // r1+0x30
    float dy; // f20
    float x; // f19

    {
        // Range: 0x8005BBA0 -> 0x8005BD48
        // Local variables
        int i; // r31

        {
            // Range: 0x8005BBA0 -> 0x8005BD48
            // Local variables
            float y; // f18

            {
                // Range: 0x8005BBA0 -> 0x8005BD34
                // Local variables
                int j; // r19

                {
                    // Range: 0x8005BBA0 -> 0x8005BD34
                    // Local variables
                    float scale; // f1
                    float stheta; // f5
                    float theta; // f4
                    float t; // f2
                    float dist; // f0
                    float dist2; // f15
                    float yoff; // f16
                    float xoff; // f17
                }
            }
        }
    }

    // References
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_vscale;
    // -> static float uvmap_uscale;
}
// signature: @unnamed@WAD00_cpp@::warp_animate_heat_shimmer(xVec2 *, xScreenWarp::warper &, const xVec2 &, float, float, float, float)
// Range: 0x8005BE10 -> 0x8005C14C
static void @unnamed@WAD00_cpp@::warp_animate_heat_shimmer(class xVec2 * uvmap /* r28 */, class xVec2 * loc /* r29 */, float radius /* f29 */) {
    // Local variables
    float mag; // f31
    float start_theta; // f7
    int istart; // r27
    int iend; // r26
    int jstart; // r30
    int jend; // r25
    float phase; // f30
    float startcos0; // f30
    float startsin0; // f4
    float ir; // f9
    float dx; // f6
    float dy; // f5
    float xstart; // r31
    float ystart; // f8
    int ysize; // r7
    class xVec2 * uv; // r5
    class xVec2 * uv_xend; // r6
    float x; // f10

    {
        // Range: 0x8005C080 -> 0x8005C104
        // Local variables
        class xVec2 * uv_yend; // r7
        float x2; // f13
        float y; // f12
        float sin0; // f11
        float cos0; // f9
        float tempcos; // r31

        {
            // Range: 0x8005C080 -> 0x8005C0E8
            // Local variables
            float dist2; // f0
        }
    }

    // References
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_uscale;
}
// signature: @unnamed@WAD00_cpp@::warp_animate_static_lens(xVec2 *, xScreenWarp::warper &, const xVec2 &, float, float, float, float)
// Range: 0x8005C150 -> 0x8005C334
static void @unnamed@WAD00_cpp@::warp_animate_static_lens() {
    // Local variables
    float mag; // f10
    float r2; // f0
    float ir2; // f3
    float umag; // f2
    float vmag; // f4
    int istart; // reg65535
    int iend; // r11
    int jstart; // r12
    int jend; // r31
    float dx; // f9
    float dy; // f10
    float x; // f11

    {
        // Range: 0x8005C260 -> 0x8005C308
        // Local variables
        int i; // r30

        {
            // Range: 0x8005C260 -> 0x8005C308
            // Local variables
            float y; // f12

            {
                // Range: 0x8005C278 -> 0x8005C2F8
                // Local variables
                int j; // r10

                {
                    // Range: 0x8005C278 -> 0x8005C2F8
                    // Local variables
                    float scale; // f31
                    float dist2; // f1
                    float yoff; // f13
                    float xoff; // f5
                }
            }
        }
    }

    // References
    // -> static float uvmap_ydelta;
    // -> static float uvmap_xdelta;
    // -> static float uvmap_vscale;
    // -> static float uvmap_uscale;
}
