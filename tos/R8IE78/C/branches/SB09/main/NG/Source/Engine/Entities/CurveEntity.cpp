/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Entities\CurveEntity.cpp
*/
// signature: World::CurveEntity::CurveEntity(World::EntityHandleBase *)
// Range: 0x801B54C0 -> 0x801B5504
void * World::CurveEntity::CurveEntity(class CurveEntity * this /* r31 */) {
    // References
    // -> struct {} __vt__Q25World11CurveEntity;
}
// Range: 0x801B5510 -> 0x801B5574
void World::CurveEntity::Deactivate(class CurveEntity * this /* r31 */) {
}
// signature: World::CurveEntity::GetOBB(Math::Vector3 &, Math::Vector3 &) const
// Range: 0x801B5580 -> 0x801B55E4
void World::CurveEntity::GetOBB(class CurveEntity * this /* r30 */, class Vector3 & upper /* r31 */) const {
}
// signature: World::CurveEntity::QuadraticMinimzation(float, float, float, const Math::Vector3, const int, World::CurveEntity::QuadMinCache *) const
// Range: 0x801B55F0 -> 0x801B5BB0
float World::CurveEntity::QuadraticMinimzation(class CurveEntity * this /* r20 */, float s2 /* f26 */, class Vector3 & target /* r21 */, int itrs /* r22 */, class QuadMinCache * cache /* r23 */) const {
    // Local variables
    float minS; // r31

    {
        // Range: 0x801B571C -> 0x801B5B34
        // Local variables
        int i; // r24

        {
            // Range: 0x801B571C -> 0x801B5B34
            // Local variables
            float y12; // f4
            float y31; // f1
            float y23; // f5
            float s12; // f9
            float s31; // f8
            float s23; // f7
        }
    }

    // References
    // -> int shuffle;
}
// Range: 0x801B60E0 -> 0x801B61F0
float World::CurveEntity::NewtonMethod(class CurveEntity * this /* r28 */, float t /* f27 */, class Vector3 & p /* r29 */, int itrs /* r30 */) const {
    // Local variables
    float old_t; // f28
    float new_t; // r31

    {
        // Range: 0x801B6120 -> 0x801B6198
        // Local variables
        int i; // r31

        {
            // Range: 0x801B6120 -> 0x801B6198
            // Local variables
            float off; // f0
        }
    }
}
// signature: World::CurveEntity::ProjectPoint(const Math::Vector3 &, float *, float *, float, float, float) const
// Range: 0x801B61F0 -> 0x801B671C
class Vector3 World::CurveEntity::ProjectPoint(class Vector3 * bestPoint /* r27 */, class CurveEntity * this /* r28 */, class Vector3 & point /* r29 */, float * u /* r30 */, float * distance /* r31 */, float guess /* f21 */) const {
    // Local variables
    float lower; // f26
    float upper; // f25
    float prevGuess; // f31
    float bestGuess; // f30
    float nextGuess; // f29
    float prevDist; // f0
    float bestDist; // f24
    float nextDist; // f0
    class Vector3 prevPoint; // r1+0xBC
    class Vector3 nextPoint; // r1+0xB0
    class QuadMinCache cache[4]; // r1+0xC8
    float firstGuess; // f0

    {
        // Range: 0x801B62C0 -> 0x801B63FC
        // Local variables
        class Vector3 lastPoint; // r1+0xA4
        float lastDist; // f0
        float lastGuess; // f23

        {
            // Range: 0x801B62E4 -> 0x801B63FC
            // Local variables
            float u; // f22

            {
                // Range: 0x801B62E4 -> 0x801B63FC
                // Local variables
                float testDist; // f1
                class Vector3 testPoint; // r1+0x98
            }
        }
    }
}
// Range: 0x801B6720 -> 0x801B69D8
bool World::CurveEntity::AdvanceU(class CurveEntity * this /* r29 */, float start_u /* f27 */, float distance /* f25 */, bool forward /* r30 */, float & new_u /* r31 */, float lowerLimit /* f28 */, float upperLimit /* f29 */) const {
    // Local variables
    float spline_start; // f31
    float spline_end; // f30
    class Vector3 velocity_vec; // r1+0x8
    float vel_mag; // f0

    // References
    // -> class Vector3 vec3Zero;
}
// Range: 0x801B69E0 -> 0x801B6AA0
class Entity * Sext::Curve::Create(class EntityHandleBase * handle /* r29 */, class Curve * asset /* r30 */) {
    // Local variables
    void * mem; // r0
}
