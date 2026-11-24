/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xFX.cpp
*/
float EnvMapShininess; // size: 0x4, address: 0x806F2A40
float BumpMapBumpiness; // size: 0x4, address: 0x806F2A44
class tier_queue_allocator joint_alloc; // size: 0x1C, address: 0x807555C0
class activity_data * activities[32]; // size: 0x80, address: 0x807555E0
int activities_used; // size: 0x4, address: 0x80755660
bool need_sort; // size: 0x1, address: 0x80755664
static class curve_node default_curve[2]; // size: 0x18, address: 0x806F2A48
// Range: 0x8003F450 -> 0x8003F4C8
void xFXUpdate(float dt /* f31 */) {
    // References
    // -> class activity_data * activities[32];
    // -> int activities_used;
}
// signature: xFXRibbon::create(int)
// Range: 0x8003F4D0 -> 0x8003F500
void xFXRibbon::create() {
}
// Range: 0x8003F500 -> 0x8003F628
void xFXRibbon::clear() {
    // References
    // -> bool need_sort;
    // -> class activity_data * activities[32];
    // -> int activities_used;
}
// signature: xFXRibbon::load_default_config(xFXRibbon::config_type &)
// Range: 0x8003F630 -> 0x8003F694
void xFXRibbon::load_default_config() {
    // References
    // -> static class curve_node default_curve[2];
}
// Range: 0x8003F6A0 -> 0x8003F740
void xFXRibbon::set_config(class xFXRibbon * this /* r30 */, class config_type * cfg /* r31 */) {
    // Local variables
    class Goodie * goodie; // r0

    // References
    // -> bool need_sort;
}
// Range: 0x8003F740 -> 0x8003FD34
void xFXRibbon::insert(class xFXRibbon * this /* r21 */, class xVec3 * loc /* r22 */, class xVec3 * norm /* r23 */, float scale /* f30 */, float alpha /* f31 */, int flags /* r24 */) {
    // References
    // -> static class xMemWatermark memWatermark;
    // -> bool need_sort;
    // -> class activity_data * activities[32];
    // -> int activities_used;
}
// Range: 0x8003FD40 -> 0x80040334
void xFXRibbon::insert(class xFXRibbon * this /* r23 */, class xVec3 * loc /* r24 */, float orient /* f29 */, float scale /* f30 */, float alpha /* f31 */, int flags /* r25 */) {
    // References
    // -> static class xMemWatermark memWatermark;
    // -> bool need_sort;
    // -> class activity_data * activities[32];
    // -> int activities_used;
}
// signature: xFXRibbon::update(float)
// Range: 0x80040340 -> 0x80040730
void xFXRibbon::update(class xFXRibbon * this /* r30 */) {
    // References
    // -> bool need_sort;
    // -> class activity_data * activities[32];
    // -> int activities_used;
}
// Range: 0x80040730 -> 0x8004085C
void xFXRibbon::render(class xFXRibbon * this /* r30 */) {
    {
        // Range: 0x80040764 -> 0x8004083C
        // Local variables
        int it; // r6

        {
            // Range: 0x80040764 -> 0x8004083C
            // Local variables
            int next_it; // r31
            int subsize; // r5

            {
                // Range: 0x80040770 -> 0x800407F4
                // Local variables
                int break_it; // r10
            }
        }
    }
}
// Range: 0x80040860 -> 0x80040B50
void xFXRibbon::get_normal(class xVec3 * norm /* r29 */, class xVec3 * dir /* r30 */, float orient /* f28 */) {
    // Local variables
    float a; // f0
    float b; // f0
    float ax; // f0
    float ay; // f0
    float az; // f0
}
// signature: xFXRibbon::refresh_joint(xFXRibbon::joint_data &, const tier_queue<xFXRibbon::joint_data>::iterator &)
// Range: 0x80040B50 -> 0x80040E40
void xFXRibbon::refresh_joint(class xFXRibbon * this /* r29 */, class joint_data * joint /* r30 */) {
    {
        // Range: 0x80040BA4 -> 0x80040E04
        // Local variables
        float mag2; // f28
        class xVec3 offset; // r1+0x6C

        {
            // Range: 0x80040D78 -> 0x80040E04
            // Local variables
            class xVec3 dir; // r1+0x60
        }
    }
}
// signature: xFXRibbon::eval_joint(const xFXRibbon::joint_data &, xColor_tag &, float &)
// Range: 0x80040E40 -> 0x8004109C
void xFXRibbon::eval_joint() {
    // Local variables
    float frac; // f1
    class curve_node * curve; // r10
    class curve_node * node0; // r11
    class curve_node * node1; // r12
    float ifrac; // f30
    float subfrac; // f2
    unsigned char r; // r4
    unsigned char g; // r0
    unsigned char b; // r3
    float alpha; // f0
}
// Range: 0x800410A0 -> 0x80042D14
void xFXRibbon::render_strip(class xFXRibbon * this /* r1+0x20 */, class iterator * first /* r1+0x24 */, unsigned long size /* r1+0x28 */) {
    // Local variables
    int newSize; // r1+0xE8
    class ImmediateContext immCtxt; // r1+0x80
    int i; // r1+0xE4
    int controlIndex; // r1+0xE0
    float * cx; // r24
    float * cy; // r23
    float * cz; // r22
    float * nx; // r21
    float * ny; // r20
    float * nz; // r19
    float * offset1; // r18
    float * offset2; // r17
    class xColor_tag * color; // r16
    float * * t; // r1+0xDC
    float t1; // f22
    float t2; // f16
    float t3; // f17
    float ulookup[2]; // r1+0x40

    {
        // Range: 0x800413B4 -> 0x800413E4
        // Local variables
        int j; // r15

        {
            // Range: 0x800413B4 -> 0x800413E4
            // Local variables
            float floatj; // f2
        }
    }
    {
        // Range: 0x8004143C -> 0x8004210C
        // Local variables
        class iterator last; // r1+0x48
        class iterator it; // r1+0x50

        {
            // Range: 0x8004148C -> 0x8004210C
            // Local variables
            float width; // r1+0x30
            class xColor_tag newColor; // r1+0x34

            {
                // Range: 0x8004148C -> 0x8004148C
                // Local variables
                int thirdLastControlIndex; // r6
                int secondLastControlIndex; // r5
                int lastControlIndex; // r4

                {
                    // Range: 0x8004148C -> 0x8004148C
                    // Local variables
                    int j; // r30

                    {
                        // Range: 0x8004148C -> 0x8004148C
                        // Local variables
                        unsigned int newAlpha; // r0
                        float lerpAlpha; // f0
                        int adjustedIndex; // r1+0xD8
                        float off2Lerp; // f14
                        float off1Lerp; // f15
                        float nzLerp; // f16
                        float nyLerp; // f17
                        float nxLerp; // f18
                        float ctz; // f19
                        float cty; // f20
                        float ctx; // f21
                        float fourth; // f6
                        float third; // f5
                        float second; // f9
                        float first; // f3
                    }
                }
            }
            {
                // Range: 0x8004148C -> 0x8004210C
                // Local variables
                int thirdLastControlIndex; // r6
                int secondLastControlIndex; // r5
                int lastControlIndex; // r4

                {
                    // Range: 0x8004148C -> 0x800420E0
                    // Local variables
                    int j; // r15

                    {
                        // Range: 0x8004148C -> 0x800420E0
                        // Local variables
                        unsigned int newAlpha; // r0
                        float lerpAlpha; // f0
                        float off2Lerp; // f14
                        float off1Lerp; // f21
                        float nzLerp; // f20
                        float nyLerp; // f19
                        float nxLerp; // f18
                        float ctz; // f17
                        float cty; // f16
                        float ctx; // f15
                        float fourth; // f6
                        float third; // f5
                        float second; // f9
                        float first; // f3
                    }
                }
            }
        }
    }
    {
        // Range: 0x80042170 -> 0x8004227C
        // Local variables
        int back; // r6

        {
            // Range: 0x8004217C -> 0x800421B4
            // Local variables
            int i; // r0

            {
                // Range: 0x8004217C -> 0x800421B4
                // Local variables
                float u; // f2
            }
        }
    }
    {
        // Range: 0x80042280 -> 0x80042494
        // Local variables
        float u; // f4
        float du; // f2

        {
            // Range: 0x800422A4 -> 0x800422B0
            // Local variables
            int i; // r3
        }
    }
    {
        // Range: 0x80042498 -> 0x800425A4
        // Local variables
        int back; // r6

        {
            // Range: 0x800424A4 -> 0x800424DC
            // Local variables
            int i; // r0

            {
                // Range: 0x800424A4 -> 0x800424DC
                // Local variables
                float u; // f2
            }
        }
    }
    {
        // Range: 0x800425A8 -> 0x800427C0
        // Local variables
        float u; // f4
        float du; // f2

        {
            // Range: 0x800425CC -> 0x800425D8
            // Local variables
            int i; // r3
        }
    }
    {
        // Range: 0x800427C0 -> 0x800427C4
        // Local variables
        int i; // r15
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x80042D20 -> 0x80043A0C
void xFXRibbon::scene_enter() {
    // Local variables
    class activity_data * * act; // r20
    class activity_data * * end_act; // r22

    // References
    // -> int activities_used;
    // -> class activity_data * activities[32];
    // -> static class xMemWatermark memWatermark;
    // -> class tier_queue_allocator joint_alloc;
}
