/*
    Compile unit: C:\TestBuild\in\Core\x\xCurveAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
// total size: 0x14
class xCurveAsset {
    // Members
public:
    enum xCurveType type; // offset 0x0, size 0x4
    enum xCurveClamp clamp; // offset 0x4, size 0x4
    float delta; // offset 0x8, size 0x4
    signed int numPoints; // offset 0xC, size 0x4
    float * points; // offset 0x10, size 0x4
};
enum xCurveType {
    xCVT_BAKED = 0,
};
enum xCurveClamp {
    xCC_CONSTANT = 0,
    xCC_CYCLE = 1,
    xCC_OSCILLATE = 2,
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xCurveAsset.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x001FB130 -> 0x001FB2DC
*/
// Range: 0x1FB130 -> 0x1FB2DC
float xCurveAssetEvaluate(class xCurveAsset * curve_asset /* r2 */, float t /* r29 */) {
    /* anonymous block */ {
        // Range: 0x1FB130 -> 0x1FB2DC
        float max_t; // r29
        float curve_length; // r2
        signed int curve_shift; // r6
        unsigned int last_point; // r2
        float u; // r29
    }
}


