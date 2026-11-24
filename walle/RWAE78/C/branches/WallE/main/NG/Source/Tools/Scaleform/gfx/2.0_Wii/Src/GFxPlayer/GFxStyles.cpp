/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxStyles.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8057EBD0 -> 0x80582368
*/
// total size: 0x4
class GFxGradientImageResourceCreator : public DataInterface {};
// total size: 0x4
class GFxGradientImageResourceKey : public KeyInterface {};
// total size: 0x14
class GFocalRadialGradient {
    // Members
    float Radius; // offset 0x0, size 0x4
    float FocusX; // offset 0x4, size 0x4
    float FocusY; // offset 0x8, size 0x4
    float Radius2; // offset 0xC, size 0x4
    float Multiplier; // offset 0x10, size 0x4
};
// total size: 0x400
class GFxGradientRamp {
    // Members
    class GColor Ramp[256]; // offset 0x0, size 0x400
};
static class GFxGradientImageResourceCreator inst; // size: 0x4, address: 0x808DEC54
static class GFxGradientImageResourceKey inst; // size: 0x4, address: 0x808DEC5C
static unsigned int GFxGradientData_RadialGradientSizeTable[18]; // size: 0x48, address: 0x806E8EA8
struct {} __vt__31GFxGradientImageResourceCreator; // size: 0x18, address: 0x8073D620
struct {} __vt__27GFxGradientImageResourceKey; // size: 0x24, address: 0x8073D638
struct {} __vt__12GFxLineStyle; // size: 0x10, address: 0x8073D660
struct {} __vt__12GFxFillStyle; // size: 0x10, address: 0x8073D670
struct {} __vt__16GFxBaseFillStyle; // size: 0x10, address: 0x8073D680
struct {} __vt__15GFxGradientData; // size: 0xC, address: 0x8073D690
struct {} __vt__32GRefCountBase<15GFxGradientData>; // size: 0xC, address: 0x8073D69C
// Range: 0x8057EBD0 -> 0x8057EC68
void GFxGradientRecord::Read(class GFxGradientRecord * this /* r28 */, class GFxLoadProcess * p /* r29 */, enum GFxTagType tagType /* r30 */) {
}
// Range: 0x8057EC70 -> 0x8057ED04
void * GFxGradientData::GFxGradientData(class GFxGradientData * this /* r28 */, enum GFxFillType type /* r29 */, unsigned short recordCount /* r30 */, bool linearRgb /* r31 */) {
    // References
    // -> struct {} __vt__15GFxGradientData;
}
// Range: 0x8057ED70 -> 0x8057EDF4
void * GFxGradientData::~GFxGradientData(class GFxGradientData * this /* r30 */) {
    // References
    // -> struct {} __vt__15GFxGradientData;
}
// Range: 0x8057EE00 -> 0x8057EFE8
bool GFxGradientData::SetRecordCount(class GFxGradientData * this /* r29 */, unsigned short count /* r30 */) {
    // Local variables
    class GFxGradientRecord * pnewRecords; // r31

    {
        // Range: 0x8057EE5C -> 0x8057EFC0
        // Local variables
        unsigned int copyCount; // r5

        {
            // Range: 0x8057EE7C -> 0x8057EE80
            // Local variables
            unsigned int i; // r6
        }
    }
}
// Range: 0x8057EFF0 -> 0x8057F294
class GFxImageResource * GFxGradientData::CreateImageResource(class GFxGradientData * this /* r26 */, class GFxResourceWeakLib * plib /* r31 */, class GFxGradientParams * pparams /* r29 */, class GFxImageCreator * pimageCreator /* r27 */, class GFxRenderConfig * prconfig /* r28 */) {
    // Local variables
    class GFxResourceKey gradientKey; // r1+0x10
    class GFxImageResource * pres; // r30
    class BindHandle bh; // r1+0x8

    {
        // Range: 0x8057F02C -> 0x8057F1F0
        {
            // Range: 0x8057F054 -> 0x8057F1B8
            // Local variables
            class GFxImageCreateInfo icreateInfo; // r1+0x18
        }
    }

    // References
    // -> struct {} __vt__16GFxImageResource;
}
// signature: GFxGradientImageResourceKey::AddRef(void *)
// Range: 0x80582050 -> 0x80582064
void GFxGradientImageResourceKey::AddRef() {
}
// signature: GFxGradientImageResourceKey::Release(void *)
// Range: 0x80582070 -> 0x80582088
void GFxGradientImageResourceKey::Release() {
}
// signature: GFxGradientImageResourceKey::GetKeyType(void *) const
// Range: 0x80582090 -> 0x80582098
enum KeyType GFxGradientImageResourceKey::GetKeyType() const {
}
// signature: GFxGradientImageResourceKey::GetHashCode(void *) const
// Range: 0x805820A0 -> 0x80582218
unsigned long GFxGradientImageResourceKey::GetHashCode() const {
}
// signature: GFxGradientImageResourceKey::KeyEquals(void *, const GFxResourceKey &)
// Range: 0x80582220 -> 0x805822E8
bool GFxGradientImageResourceKey::KeyEquals() {
}
// signature: GFxGradientImageResourceCreator::CreateResource(void *, GFxResourceBindData *, GFxLoadStates *) const
// Range: 0x805822F0 -> 0x80582368
bool GFxGradientImageResourceCreator::CreateResource(class GFxResourceBindData * pbindData /* r30 */, class GFxLoadStates * pls /* r8 */) const {
}
// Range: 0x8057F2E0 -> 0x8057F364
class GFxResourceData GFxGradientData::CreateGradientResourceData(class GFxGradientData * this /* r31 */) {
    // References
    // -> static class GFxGradientImageResourceCreator inst;
    // -> struct {} __vt__31GFxGradientImageResourceCreator;
}
// Range: 0x8057F3B0 -> 0x8057F434
class GFxResourceKey GFxGradientData::CreateGradientKey(class GFxGradientData * this /* r31 */) {
    // References
    // -> static class GFxGradientImageResourceKey inst;
    // -> struct {} __vt__27GFxGradientImageResourceKey;
}
// Range: 0x8057F440 -> 0x8057F4FC
void GFocalRadialGradient::updateValues() {
    // Local variables
    float fx2; // f4
    float fy2; // f5
    float d; // f1
}
// Range: 0x8057F500 -> 0x8057FCC0
void GFxGradientRamp::Init(class GFxGradientRamp * this /* r15 */, class GFxGradientRecord * colorStops /* r14 */, unsigned int numColors /* r1+0x8 */, float gamma /* f28 */) {
    // Local variables
    unsigned int i; // r5

    {
        // Range: 0x8057F550 -> 0x8057F594
        // Local variables
        class GFxGradientRecord fakeColor; // r1+0x38
    }
    {
        // Range: 0x8057F594 -> 0x8057FBDC
        // Local variables
        unsigned int end; // r18
        unsigned int start; // r19
        float gammaInv; // f29
        unsigned short gammaDir[256]; // r1+0x40

        {
            // Range: 0x8057F7C4 -> 0x8057FB5C
            // Local variables
            unsigned int dx; // r16
            unsigned int x0; // r17
        }
    }
}
// signature: GFxGradientData::ComputeRadialGradientImageSize(GFxGradientParams *) const
// Range: 0x8057FCC0 -> 0x8057FF58
unsigned int GFxGradientData::ComputeRadialGradientImageSize(class GFxGradientData * this /* r27 */) const {
    // Local variables
    unsigned int radialGradientImageSize; // r5

    {
        // Range: 0x8057FD38 -> 0x8057FF14
        // Local variables
        unsigned int idx; // r3
        float maxSlope; // f31
        unsigned int i; // r29

        {
            // Range: 0x8057FD44 -> 0x8057FE64
            // Local variables
            float dx; // f27
            class GFxGradientRecord & g2; // r26
            class GFxGradientRecord & g1; // r28
            float slope; // f0
        }
        {
            // Range: 0x8057FE98 -> 0x8057FEC8
            // Local variables
            float r; // f0
        }
    }

    // References
    // -> static unsigned int GFxGradientData_RadialGradientSizeTable[18];
}
// Range: 0x8057FF60 -> 0x80580520
class GImage * GFxGradientData::CreateGradientImage(class GFxGradientData * this /* r28 */, class GFxGradientParams * pparams /* r26 */) const {
    // Local variables
    class GImage * pim; // r30
    unsigned int i; // r26
    unsigned int j; // r26
    unsigned int size; // r27
    int ratio; // r3
    float center; // f28
    float radius; // f29
    class GColor sample; // r1+0x18
    float x; // f1
    float y; // f2
    unsigned int imgSize; // r31
    class GFxGradientRamp ramp; // r1+0x30

    {
        // Range: 0x80580284 -> 0x805804CC
        // Local variables
        class GFocalRadialGradient gr; // r1+0x1C
    }
}
// Range: 0x80580520 -> 0x80580584
void * GFxFillStyle::GFxFillStyle(class GFxFillStyle * this /* r30 */) {
    // References
    // -> struct {} __vt__12GFxFillStyle;
}
// Range: 0x805805D0 -> 0x80580680
void * GFxFillStyle::~GFxFillStyle(class GFxFillStyle * this /* r30 */) {
    // References
    // -> struct {} __vt__12GFxFillStyle;
}
// Range: 0x80580680 -> 0x80580C40
void GFxFillStyle::Read(class GFxFillStyle * this /* r24 */, class GFxLoadProcess * p /* r25 */, enum GFxTagType tagType /* r26 */) {
    {
        // Range: 0x80580700 -> 0x80580760
        // Local variables
        class GColor color; // r1+0x18
    }
    {
        // Range: 0x80580768 -> 0x80580B8C
        // Local variables
        unsigned short numGradients; // r28

        {
            // Range: 0x8058089C -> 0x8058089C
            // Local variables
            int i; // r27
        }
        {
            // Range: 0x80580A08 -> 0x80580A9C
            // Local variables
            class GFxResourceHandle rh; // r1+0x30
        }
        {
            // Range: 0x80580A9C -> 0x80580B50
            // Local variables
            class GFxResourceHandle rh; // r1+0x20
            class GFxResourceData resData; // r1+0x28
        }
    }

    // References
    // -> struct {} __vt__15GFxGradientData;
}
// Range: 0x80580C40 -> 0x80580D08
void GFxFillStyle::Apply(class GFxFillStyle * this /* r29 */, class GFxDisplayContext & dc /* r30 */, float scaleMultiplier /* f31 */) const {
    {
        // Range: 0x80580C9C -> 0x80580CE8
        // Local variables
        class FillTexture ft; // r1+0xC
    }
}
// Range: 0x80580D10 -> 0x8058122C
bool GFxFillStyle::GetFillTexture(class GFxFillStyle * this /* r28 */, class FillTexture * pftexture /* r29 */, class GFxDisplayContext & dc /* r30 */, float scaleMultiplier /* f31 */) const {
    {
        // Range: 0x80580D44 -> 0x80581074
        // Local variables
        class GFxImageResource * pimageRes; // r27

        {
            // Range: 0x80580E40 -> 0x80580E84
            // Local variables
            class GFxFillStyle * thisNonConst; // r0
        }
        {
            // Range: 0x80580E84 -> 0x80581074
            {
                // Range: 0x80580F30 -> 0x80581024
                // Local variables
                float halfSize; // f0
                unsigned int radialGradientImageSize; // r0
            }
        }
    }
    {
        // Range: 0x80581074 -> 0x80581200
        {
            // Range: 0x80581138 -> 0x80581200
            // Local variables
            class GTexture * ptexture; // r0

            {
                // Range: 0x80581154 -> 0x80581200
                // Local variables
                enum BitmapSampleMode sm; // r30
                enum BitmapWrapMode wm; // r27
            }
        }
    }
}
// Range: 0x80581230 -> 0x80581514
void GFxFillStyle::SetLerp(class GFxFillStyle * this /* r23 */, class GFxFillStyle & a /* r24 */, class GFxFillStyle & b /* r25 */, float t /* f29 */) {
    {
        // Range: 0x805812A8 -> 0x8058147C
        // Local variables
        class GFxGradientData & bgd; // r27
        class GFxGradientData & agd; // r28

        {
            // Range: 0x80581370 -> 0x80581414
            // Local variables
            unsigned int j; // r26
        }
    }

    // References
    // -> struct {} __vt__15GFxGradientData;
}
// Range: 0x80581520 -> 0x8058163C
class GFxFillStyle & GFxFillStyle::operator=(class GFxFillStyle * this /* r30 */, class GFxFillStyle & src /* r31 */) {
}
// Range: 0x80581640 -> 0x805816A4
void GFxFillStyle::SetFillType(class GFxFillStyle * this /* r30 */, enum GFxFillType type /* r31 */) {
}
// Range: 0x805816B0 -> 0x805817B8
void GFxFillStyle::SetImageFill(class GFxFillStyle * this /* r28 */, enum GFxFillType fillType /* r29 */, class GFxImageResource * pimage /* r30 */, class GMatrix2D & mtx /* r31 */) {
}
// Range: 0x805817C0 -> 0x805818B4
void GFxFillStyle::SetGradientFill(class GFxFillStyle * this /* r28 */, enum GFxFillType fillType /* r29 */, class GFxGradientData * pgradientData /* r30 */, class GMatrix2D & mtx /* r31 */) {
}
// Range: 0x805818C0 -> 0x805818E8
void * GFxLineStyle::GFxLineStyle() {
    // References
    // -> struct {} __vt__12GFxLineStyle;
}
// Range: 0x805818F0 -> 0x80581974
void * GFxLineStyle::~GFxLineStyle(class GFxLineStyle * this /* r30 */) {
    // References
    // -> struct {} __vt__12GFxLineStyle;
}
// Range: 0x80581980 -> 0x80581B48
class GFxLineStyle & GFxLineStyle::operator=(class GFxLineStyle * this /* r31 */, class GFxLineStyle & src /* r28 */) {
    // References
    // -> struct {} __vt__12GFxFillStyle;
}
// Range: 0x80581B50 -> 0x80581CDC
void GFxLineStyle::SetComplexFill(class GFxLineStyle * this /* r29 */, class GFxFillStyle & f /* r30 */) {
    // References
    // -> struct {} __vt__12GFxFillStyle;
}
// Range: 0x80581CE0 -> 0x80581D70
class GFxFillStyle * GFxLineStyle::CreateComplexFill(class GFxLineStyle * this /* r29 */) {
    // References
    // -> struct {} __vt__12GFxFillStyle;
}
// Range: 0x80581D70 -> 0x80582008
void GFxLineStyle::Read(class GFxLineStyle * this /* r28 */, class GFxLoadProcess * p /* r29 */, enum GFxTagType tagType /* r30 */) {
    // Local variables
    unsigned short styleFlags; // r31

    {
        // Range: 0x80581EA8 -> 0x80581F7C
        // Local variables
        class GFxFillStyle * pfill; // r25
        class GFxFillStyle fs; // r1+0x8
    }

    // References
    // -> struct {} __vt__12GFxFillStyle;
}
// signature: GFxLineStyle::Apply(GRenderer *) const
// Range: 0x80582010 -> 0x80582050
void GFxLineStyle::Apply(class GFxLineStyle * this /* r5 */) const {
}
