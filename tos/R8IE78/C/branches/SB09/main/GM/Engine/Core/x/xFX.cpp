/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xFX.cpp
*/
class tier_queue_allocator joint_alloc; // size: 0x1C, address: 0x807200E0
class activity_data * activities[32]; // size: 0x80, address: 0x80720100
int activities_used; // size: 0x4, address: 0x80720180
class curve_node default_curve[2]; // size: 0x18, address: 0x806B3EE8
// Range: 0x80030180 -> 0x800301BC
void xFXUpdate(float dt /* f31 */) {
}
// signature: FX::Ribbon::Local::lerp(xColor &, float, xColor, xColor)
// Range: 0x800311E0 -> 0x80031304
void FX::Ribbon::Local::lerp() {
    // Local variables
    float r; // f9
    float g; // f3
    float b; // f6
    float a; // f1
}
// Range: 0x800301C0 -> 0x800301D0
void FX::Ribbon::xFXRibbon::create() {
}
// Range: 0x800301D0 -> 0x80030220
void FX::Ribbon::xFXRibbon::clear(class xFXRibbon * this /* r31 */) {
}
// signature: FX::Ribbon::xFXRibbon::load_default_config(FX::Ribbon::xFXRibbon::config_type &)
// Range: 0x80030300 -> 0x8003035C
void FX::Ribbon::xFXRibbon::load_default_config() {
    // References
    // -> class curve_node default_curve[2];
}
// signature: FX::Ribbon::xFXRibbon::set_config(const FX::Ribbon::xFXRibbon::config_type *)
// Range: 0x80030380 -> 0x80030414
void FX::Ribbon::xFXRibbon::set_config(class xFXRibbon * this /* r31 */) {
    // Local variables
    class EntityHandleBase * goodie; // r0
}
// Range: 0x80030420 -> 0x80030584
bool FX::Ribbon::xFXRibbon::add_joint(class xFXRibbon * this /* r30 */, class xVec3 & loc /* r31 */) {
    {
        // Range: 0x8003045C -> 0x800304F8
        // Local variables
        float d2second; // f0
        class iterator second; // r1+0x10
        class iterator first; // r1+0x18
        float minDist2; // f31
    }
}
// signature: FX::Ribbon::xFXRibbon::insert(const xVec3 &, const xVec3 &, int)
// Range: 0x80030800 -> 0x80030880
void FX::Ribbon::xFXRibbon::insert(class xFXRibbon * this /* r28 */, class xVec3 & loc /* r29 */, class xVec3 & norm /* r30 */) {
}
// signature: FX::Ribbon::xFXRibbon::insert(const xVec3 &, int)
// Range: 0x80030880 -> 0x800308EC
void FX::Ribbon::xFXRibbon::insert(class xFXRibbon * this /* r31 */, class xVec3 & loc /* r30 */) {
}
// Range: 0x800308F0 -> 0x80030988
void FX::Ribbon::xFXRibbon::activate() {
    // References
    // -> class activity_data * activities[32];
    // -> int activities_used;
}
// Range: 0x80030990 -> 0x800309F0
void FX::Ribbon::xFXRibbon::deactivate() {
    // Local variables
    class activity_data * * move_act_position; // r6
    class activity_data * move_act; // r5
    class activity_data * * tail_act_position; // r7

    // References
    // -> class activity_data * activities[32];
    // -> int activities_used;
}
// Range: 0x800309F0 -> 0x80030A08
void FX::Ribbon::xFXRibbon::StartFade() {
}
// Range: 0x80030A10 -> 0x80030A3C
void FX::Ribbon::xFXRibbon::Reset() {
}
// Range: 0x80030A40 -> 0x80030CF4
void FX::Ribbon::xFXRibbon::update(class xFXRibbon * this /* r30 */, float dt /* f31 */) {
    {
        // Range: 0x80030AE8 -> 0x80030CCC
        // Local variables
        class joint_data & joint2; // r0
        unsigned int age1; // r29

        {
            // Range: 0x80030BE8 -> 0x80030CCC
            // Local variables
            float ratio; // f31
            float diffm; // f0
            float diff1; // f2
        }
    }
}
// Range: 0x80030D30 -> 0x80030DC8
void FX::Ribbon::xFXRibbon::render(class xFXRibbon * this /* r30 */) {
    // Local variables
    int size; // r31
}
// Range: 0x80030DD0 -> 0x8003102C
void FX::Ribbon::xFXRibbon::refresh_joint(class xFXRibbon * this /* r28 */, class joint_data & joint /* r30 */, class iterator & it /* r31 */) {
    {
        // Range: 0x80030E04 -> 0x8003100C
        // Local variables
        float mag2; // f31
        class xVec3 offset; // r1+0x54

        {
            // Range: 0x80030F60 -> 0x8003100C
            // Local variables
            float az; // f0
            float ay; // f0
            float ax; // f0
            class xVec3 dir; // r1+0x48
        }
    }
}
// signature: FX::Ribbon::xFXRibbon::eval_joint(const FX::Ribbon::xFXRibbon::joint_data &, xColor &, float &)
// Range: 0x80031030 -> 0x800311D4
void FX::Ribbon::xFXRibbon::eval_joint(float & ioWidth /* r31 */) {
    // Local variables
    float frac; // f1
    class curve_node * curve; // r7
    class curve_node & node0; // r29
    class curve_node & node1; // r28
    float ifrac; // f2
    float subfrac; // f31
    float scale; // f1
}
// Range: 0x80031340 -> 0x80032420
void FX::Ribbon::xFXRibbon::render(class xFXRibbon * this /* r15 */, class iterator & first /* r16 */, unsigned long size /* r17 */) {
    // Local variables
    int newSize; // r21
    class ImmediateContext immCtxt; // r1+0x108
    int i; // r20
    int controlIndex; // r19
    float cx[4]; // r1+0xF8
    float cy[4]; // r1+0xE8
    float cz[4]; // r1+0xD8
    float nx[4]; // r1+0xC8
    float ny[4]; // r1+0xB8
    float nz[4]; // r1+0xA8
    float offset[4]; // r1+0x98
    class xColor color[4]; // r1+0x88
    float controlVals[5][4]; // r1+0x138
    float t1; // f30
    float ulookup[2]; // r1+0x60
    class Renderable3D * rend; // r0

    {
        // Range: 0x8003146C -> 0x80031530
        // Local variables
        int j; // r8

        {
            // Range: 0x8003146C -> 0x80031530
            // Local variables
            float j3; // f13
            float j2; // f12
            float j1; // f0
            float jratio; // f11
        }
    }
    {
        // Range: 0x80031530 -> 0x80031F24
        // Local variables
        class iterator last; // r1+0x68
        class iterator it; // r1+0x70

        {
            // Range: 0x80031580 -> 0x80031F24
            // Local variables
            float width; // r1+0x48
            class xColor newColor; // r1+0x4C
            class joint_data & joint; // r14

            {
                // Range: 0x80031580 -> 0x80031580
                // Local variables
                int thirdLastControlIndex; // r5
                int secondLastControlIndex; // r4
                int lastControlIndex; // r3

                {
                    // Range: 0x80031580 -> 0x80031580
                    // Local variables
                    int j; // r18

                    {
                        // Range: 0x80031580 -> 0x80031580
                        // Local variables
                        unsigned int newAlpha; // r0
                        float lerpAlpha; // f0
                        int adjustedIndex; // r23
                        class xColor colorLerp; // r1+0x34
                        float offLerp; // r1+0x38
                        float nzLerp; // r1+0x3C
                        float nyLerp; // r1+0x40
                        float nxLerp; // r1+0x44
                        float ctz; // f14
                        float cty; // f15
                        float ctx; // f16
                        float fourth; // f6
                        float third; // f5
                        float second; // f1
                        float first; // f4
                    }
                }
            }
            {
                // Range: 0x80031580 -> 0x80031F24
                // Local variables
                int thirdLastControlIndex; // r5
                int secondLastControlIndex; // r4
                int lastControlIndex; // r3

                {
                    // Range: 0x80031580 -> 0x80031F24
                    // Local variables
                    int j; // r26

                    {
                        // Range: 0x80031580 -> 0x80031F24
                        // Local variables
                        unsigned int newAlpha; // r0
                        float lerpAlpha; // f0
                        class xColor colorLerp; // r1+0x20
                        float offLerp; // r1+0x24
                        float nzLerp; // r1+0x28
                        float nyLerp; // r1+0x2C
                        float nxLerp; // r1+0x30
                        float ctz; // f16
                        float cty; // f15
                        float ctx; // f14
                        float fourth; // f6
                        float third; // f5
                        float second; // f1
                        float first; // f4
                    }
                }
            }
        }
    }
    {
        // Range: 0x80031F60 -> 0x80031FD4
        // Local variables
        int back; // r7

        {
            // Range: 0x80031F64 -> 0x80031FD4
            // Local variables
            int i; // r0

            {
                // Range: 0x80031F64 -> 0x80031FD4
                // Local variables
                float u; // f2
            }
        }
    }
    {
        // Range: 0x80031FDC -> 0x80032068
        // Local variables
        float u; // f5
        float du; // f1

        {
            // Range: 0x80031FF4 -> 0x80032068
            // Local variables
            int i; // r0
        }
    }
    {
        // Range: 0x8003206C -> 0x800320E0
        // Local variables
        int back; // r7

        {
            // Range: 0x80032070 -> 0x800320E0
            // Local variables
            int i; // r0

            {
                // Range: 0x80032070 -> 0x800320E0
                // Local variables
                float u; // f2
            }
        }
    }
    {
        // Range: 0x800320E8 -> 0x80032178
        // Local variables
        float u; // f5
        float du; // f1

        {
            // Range: 0x80032100 -> 0x80032178
            // Local variables
            int i; // r0
        }
    }
    {
        // Range: 0x80032178 -> 0x80032210
        // Local variables
        unsigned int numVerts; // r0
        float addV; // f2
        float addU; // f1

        {
            // Range: 0x80032198 -> 0x80032210
            // Local variables
            unsigned int idx; // r0
        }
    }
    {
        // Range: 0x80032210 -> 0x8003235C
        // Local variables
        unsigned int numVerts; // r0
        class xVec2 width; // r1+0x58
        class xVec4 uvs; // r1+0x78
        unsigned int col; // r4
        unsigned int row; // r5
        unsigned int frameInt; // r6
        float frame; // f0
        float numFrames; // f5

        {
            // Range: 0x80032254 -> 0x8003235C
            // Local variables
            unsigned int idx; // r0
        }
    }

    // References
    // -> class Scene * primaryScene;
}
// Range: 0x80032420 -> 0x800325F8
void FX::Ribbon::xFXRibbon::scene_enter() {
    // Local variables
    class activity_data * * act; // r27
    class activity_data * * end_act; // r26

    // References
    // -> int activities_used;
    // -> class activity_data * activities[32];
    // -> static class xMemWatermark memWatermark;
    // -> class tier_queue_allocator joint_alloc;
}
// Range: 0x80032620 -> 0x80032688
void FX::Ribbon::xFXRibbon::update_all(float dt /* f31 */) {
    // Local variables
    class activity_data * * act; // r31
    class activity_data * * end_act; // r30

    // References
    // -> class activity_data * activities[32];
    // -> int activities_used;
}
// Range: 0x80032690 -> 0x80032730
float FX::Ribbon::xFXRibbon::time_remaining(class xFXRibbon * this /* r31 */) {
}
// Range: 0x80032730 -> 0x8003274C
unsigned long FX::Ribbon::xFXRibbon::size() const {
}
// Range: 0x80032750 -> 0x80032774
bool FX::Ribbon::xFXRibbon::empty() const {
}
