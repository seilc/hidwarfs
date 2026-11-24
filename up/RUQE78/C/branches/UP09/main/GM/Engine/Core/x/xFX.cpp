/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xFX.cpp
*/
class tier_queue_allocator joint_alloc; // size: 0x1C, address: 0x808083B8
class activity_data * activities[32]; // size: 0x80, address: 0x808083D8
int activities_used; // size: 0x4, address: 0x80808458
bool need_sort; // size: 0x1, address: 0x8080845C
static class curve_node default_curve[2]; // size: 0x18, address: 0x807A1FC8
// Range: 0x8005BBA0 -> 0x8005BC20
void xFXUpdate(float dt /* f31 */) {
    // References
    // -> class activity_data * activities[32];
    // -> int activities_used;
}
// signature: xFXRibbon::create(int)
// Range: 0x8005BC20 -> 0x8005BC50
void xFXRibbon::create() {
}
// Range: 0x8005BC50 -> 0x8005BD78
void xFXRibbon::clear() {
    // References
    // -> bool need_sort;
    // -> class activity_data * activities[32];
    // -> int activities_used;
}
// signature: xFXRibbon::load_default_config(xFXRibbon::config_type &)
// Range: 0x8005BD80 -> 0x8005BDE8
void xFXRibbon::load_default_config() {
    // References
    // -> static class curve_node default_curve[2];
}
// Range: 0x8005BDF0 -> 0x8005BE88
void xFXRibbon::set_config(class xFXRibbon * this /* r30 */, class config_type * cfg /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0

    // References
    // -> bool need_sort;
}
// signature: xFXRibbon::insert(const xVec3 &, const xVec3 &, int)
// Range: 0x8005BE90 -> 0x8005C468
void xFXRibbon::insert(class xFXRibbon * this /* r23 */, class xVec3 & loc /* r24 */, class xVec3 & norm /* r25 */) {
    // References
    // -> static class xMemWatermark memWatermark;
    // -> bool need_sort;
    // -> class activity_data * activities[32];
    // -> int activities_used;
    // -> unsigned int updateFrameNumber;
}
// signature: xFXRibbon::insert(const xVec3 &, int)
// Range: 0x8005C470 -> 0x8005CA24
void xFXRibbon::insert(class xFXRibbon * this /* r24 */, class xVec3 & loc /* r25 */) {
    // References
    // -> static class xMemWatermark memWatermark;
    // -> bool need_sort;
    // -> class activity_data * activities[32];
    // -> int activities_used;
    // -> unsigned int updateFrameNumber;
}
// Range: 0x8005CA30 -> 0x8005CA48
void xFXRibbon::StartFade() {
}
// Range: 0x8005CA50 -> 0x8005CB24
void xFXRibbon::Reset() {
}
// Range: 0x8005CB30 -> 0x8005D080
void xFXRibbon::update(class xFXRibbon * this /* r30 */, float dt /* f31 */) {
    // References
    // -> bool need_sort;
    // -> class activity_data * activities[32];
    // -> int activities_used;
}
// Range: 0x8005D080 -> 0x8005D124
void xFXRibbon::render(class xFXRibbon * this /* r31 */) {
    {
        // Range: 0x8005D0BC -> 0x8005D108
        // Local variables
        int it; // r5
    }
}
// Range: 0x8005D130 -> 0x8005D3E8
void xFXRibbon::get_normal(class xVec3 & norm /* r29 */, class xVec3 & dir /* r30 */, float orient /* f30 */) {
    // Local variables
    float a; // f0
    float b; // f0
    float ax; // f0
    float ay; // f0
    float az; // f0
}
// signature: xFXRibbon::refresh_joint(xFXRibbon::joint_data &, const tier_queue<xFXRibbon::joint_data>::iterator &)
// Range: 0x8005D3F0 -> 0x8005D664
void xFXRibbon::refresh_joint() {
    {
        // Range: 0x8005D414 -> 0x8005D650
        // Local variables
        float mag2; // f4
        class xVec3 offset; // r1+0x6C

        {
            // Range: 0x8005D5D0 -> 0x8005D650
            // Local variables
            class xVec3 dir; // r1+0x60
        }
    }
}
// signature: xFXRibbon::eval_joint(const xFXRibbon::joint_data &, xColor &, float &)
// Range: 0x8005D670 -> 0x8005D8BC
void xFXRibbon::eval_joint() {
    // Local variables
    float frac; // f1
    class curve_node * curve; // r10
    class curve_node & node0; // r12
    class curve_node & node1; // r31
    float ifrac; // f13
    float subfrac; // f2
    unsigned char r; // r7
    unsigned char g; // r0
    unsigned char b; // r4
    float alpha; // f0
}
// Range: 0x8005D8C0 -> 0x8005F758
void xFXRibbon::render_strip(class xFXRibbon * this /* r1+0x20 */, class iterator & first /* r1+0x24 */, unsigned long size /* r1+0x28 */) {
    // Local variables
    int newSize; // r1+0x114
    class ImmediateContext immCtxt; // r1+0x88
    int i; // r1+0x110
    int controlIndex; // r1+0x10C
    float * cx; // r24
    float * cy; // r23
    float * cz; // r22
    float * nx; // r21
    float * ny; // r20
    float * nz; // r19
    float * offset1; // r18
    float * offset2; // r17
    class xColor * color; // r16
    float * * t; // r1+0x108
    float t1; // f22
    float t2; // f16
    float t3; // f17
    float ulookup[2]; // r1+0x48

    {
        // Range: 0x8005DCB8 -> 0x8005DCE8
        // Local variables
        int j; // r15

        {
            // Range: 0x8005DCB8 -> 0x8005DCE8
            // Local variables
            float floatj; // f2
        }
    }
    {
        // Range: 0x8005DD40 -> 0x8005EA00
        // Local variables
        class iterator last; // r1+0x50
        class iterator it; // r1+0x58

        {
            // Range: 0x8005DD98 -> 0x8005EA00
            // Local variables
            float width; // r1+0x34
            class xColor newColor; // r1+0x38

            {
                // Range: 0x8005DD98 -> 0x8005DD98
                // Local variables
                int thirdLastControlIndex; // r6
                int secondLastControlIndex; // r5
                int lastControlIndex; // r4

                {
                    // Range: 0x8005DD98 -> 0x8005DD98
                    // Local variables
                    int j; // r30

                    {
                        // Range: 0x8005DD98 -> 0x8005DD98
                        // Local variables
                        unsigned int newAlpha; // r0
                        float lerpAlpha; // f0
                        int adjustedIndex; // r31
                        class xColor colorLerp; // r1+0x30
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
                // Range: 0x8005DD98 -> 0x8005EA00
                // Local variables
                int thirdLastControlIndex; // r6
                int secondLastControlIndex; // r5
                int lastControlIndex; // r4

                {
                    // Range: 0x8005DD98 -> 0x8005E9D4
                    // Local variables
                    int j; // r15

                    {
                        // Range: 0x8005DD98 -> 0x8005E9D4
                        // Local variables
                        unsigned int newAlpha; // r0
                        float lerpAlpha; // f0
                        class xColor colorLerp; // r1+0x2C
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
        // Range: 0x8005EA64 -> 0x8005EB6C
        // Local variables
        int back; // r6

        {
            // Range: 0x8005EA70 -> 0x8005EAAC
            // Local variables
            int i; // r0

            {
                // Range: 0x8005EA70 -> 0x8005EAAC
                // Local variables
                float u; // f2
            }
        }
    }
    {
        // Range: 0x8005EB70 -> 0x8005ED84
        // Local variables
        float u; // f4
        float du; // f2

        {
            // Range: 0x8005EB94 -> 0x8005EBA0
            // Local variables
            int i; // r3
        }
    }
    {
        // Range: 0x8005ED88 -> 0x8005EE90
        // Local variables
        int back; // r6

        {
            // Range: 0x8005ED94 -> 0x8005EDD0
            // Local variables
            int i; // r0

            {
                // Range: 0x8005ED94 -> 0x8005EDD0
                // Local variables
                float u; // f2
            }
        }
    }
    {
        // Range: 0x8005EE94 -> 0x8005F0AC
        // Local variables
        float u; // f4
        float du; // f2

        {
            // Range: 0x8005EEB8 -> 0x8005EEC4
            // Local variables
            int i; // r3
        }
    }
    {
        // Range: 0x8005F0AC -> 0x8005F0B0
        // Local variables
        int i; // r15
    }
    {
        // Range: 0x8005F120 -> 0x8005F2A8
        // Local variables
        unsigned int numVerts; // r6
        float addV; // f1
        float addU; // f0

        {
            // Range: 0x8005F130 -> 0x8005F17C
            // Local variables
            unsigned int idx; // r7
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x8005F760 -> 0x8006044C
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
