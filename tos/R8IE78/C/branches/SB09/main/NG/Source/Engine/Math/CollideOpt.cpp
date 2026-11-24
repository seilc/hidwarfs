/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WADSpeed.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Math\CollideOpt.cpp
*/
struct {} __vt__Q28Graphics17ProjectShadowView; // size: 0x20, address: 0x806D1D40
struct {} __vt__Q28Graphics18ProjectShadowSpace; // size: 0x18, address: 0x806D1D60
struct {} __vt__Q28Graphics18MaterialDepotSpace; // size: 0x18, address: 0x806D1D78
// signature: Math::SphereEdgeTest(float, const Math::Vector &, const Math::Vector &)
// Range: 0x80219080 -> 0x802191BC
bool Math::SphereEdgeTest() {
    // Local variables
    class Vector diff; // r1+0x8
    float ddDot; // f0
    float dpDot; // f0
    float ppDot; // f0
    float discrim; // f6
    float invDdDot; // f4
    float ta; // f1
    float tb; // f3
}
// signature: Math::TriSphereOverlap(const Math::Vector4 &, const Math::Vector &, const Math::Vector &, const Math::Vector &)
// Range: 0x802191C0 -> 0x802196BC
bool Math::TriSphereOverlap() {
    // Local variables
    class Vector pointA; // r1+0x98
    class Vector pointB; // r1+0x88
    class Vector pointC; // r1+0x78
    float sphRadSqr; // f31
    float normDotPoint; // f0
    float normDotNorm; // f0
    class Vector edge0; // r1+0x68
    class Vector edge1; // r1+0x58
    class Vector edge2; // r1+0x48
    class Vector norm; // r1+0x38

    {
        // Range: 0x80219444 -> 0x80219638
        // Local variables
        float udenom; // f0
        float unum; // f8
        float tdenom; // f0
        float tnum; // f7
        float sdenom; // f0
        float snum; // f9

        {
            // Range: 0x80219478 -> 0x80219638
            // Local variables
            float vb; // f0
            float va; // f0
            float vc; // f0
            class Vector cxa; // r1+0x8
            class Vector bxc; // r1+0x18
            class Vector axb; // r1+0x28
        }
    }
}
// signature: Math::TriBoxOverlap(const Math::Vector &, const Math::Vector &, const Math::Vector &, const Math::Vector &, const Math::Vector &)
// Range: 0x802196C0 -> 0x8021A0A4
bool Math::TriBoxOverlap() {
    // Local variables
    class Vector v0; // r1+0x148
    class Vector v1; // r1+0x138
    class Vector v2; // r1+0x128
    class Vector e0; // r1+0x118
    class Vector e1; // r1+0x108
    class Vector e2; // r1+0xF8
    class Vector eabs; // r1+0xE8
    class Vector normal; // r1+0xD8
    float d; // f8
    float p0; // f2
    float p1; // f4
    float p2; // f12
    float rad; // f0
    float tmpmin; // f0
    float tmpmax; // f0
    float vtmp0; // f1
    float vtmp1; // f5
    float vtmp2; // f8
}
// signature: Math::TriLineOverlap(float &, const Math::Vector &, const Math::Vector &, const Math::Vector &, const Math::Vector &, const Math::Vector &, float)
// Range: 0x8021A0B0 -> 0x8021A318
bool Math::TriLineOverlap() {
    // Local variables
    float e0x; // f7
    float e0y; // f8
    float e0z; // f9
    float e1x; // f10
    float e1y; // f11
    float e1z; // f12
    float nx; // f23
    float ny; // f22
    float nz; // f21
    float dx; // f13
    float dy; // f31
    float dz; // f30
    float nDotV; // f21
    float nDotD; // f22
    float lerp; // f29
    float uu; // f1
    float uv; // f28
    float vv; // f27
    float wu; // f4
    float wv; // f3
    float denom; // f8
    float s; // f5
    float t; // f0
}
