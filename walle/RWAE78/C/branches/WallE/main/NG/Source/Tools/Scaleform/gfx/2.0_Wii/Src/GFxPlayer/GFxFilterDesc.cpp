/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxFilterDesc.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x804B4E90 -> 0x804B5864
*/
// total size: 0xC
class GFxFilterDesc {
    // Members
    unsigned char Flags; // offset 0x0, size 0x1
    unsigned char BlurX; // offset 0x1, size 0x1
    unsigned char BlurY; // offset 0x2, size 0x1
    unsigned char Strength; // offset 0x3, size 0x1
    short Angle; // offset 0x4, size 0x2
    short Distance; // offset 0x6, size 0x2
    class GColor Color; // offset 0x8, size 0x4
};
enum FilterType {
    Filter_DropShadow = 0,
    Filter_Blur = 1,
    Filter_Glow = 2,
    Filter_Bevel = 3,
    Filter_GradientGlow = 4,
    Filter_Convolution = 5,
    Filter_AdjustColor = 6,
    Filter_GradientBevel = 7,
};
// Range: 0x804B4E90 -> 0x804B5864
unsigned int GFx_LoadFilters(class GFxStream * pin /* r30 */, class GFxFilterDesc * filters /* r31 */) {
    // Local variables
    unsigned char filterCount; // r16
    class GFxFilterDesc filterDesc; // r1+0x8
    unsigned int numFilters; // r15

    {
        // Range: 0x804B4F24 -> 0x804B5814
        // Local variables
        unsigned int numBytes; // r17
        enum FilterType filter; // r0

        {
            // Range: 0x804B4F2C -> 0x804B4F2C
            // Local variables
            unsigned int cols; // r0
        }
    }
}
