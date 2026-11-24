/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Entities\CurveEntity.cpp
*/
// Range: 0x802D8680 -> 0x802D86E4
void World::CurveEntity::Deactivate(class CurveEntity * this /* r31 */) {
}
// signature: World::CurveEntity::GetOBB(Math::Vector3 &, Math::Vector3 &) const
// Range: 0x802D86E8 -> 0x802D8720
void World::CurveEntity::GetOBB() const {
}
// signature: World::CurveEntity::QuadraticMinimzation(float, float, float, const Math::Vector3, const int, World::CurveEntity::QuadMinCache *) const
// Range: 0x802D8720 -> 0x802D8AC4
float World::CurveEntity::QuadraticMinimzation(class CurveEntity * this /* r27 */, float s2 /* f26 */, class Vector3 & target /* r28 */, int itrs /* r29 */, class QuadMinCache * cache /* r30 */) const {
    // Local variables
    float minS; // r31

    {
        // Range: 0x802D87E8 -> 0x802D8A3C
        // Local variables
        int i; // r31

        {
            // Range: 0x802D87E8 -> 0x802D8A3C
            // Local variables
            float y12; // f4
            float y31; // f1
            float y23; // f5
            float s12; // f9
            float s31; // f8
            float s23; // f7
        }
    }
}
// Range: 0x802D9858 -> 0x802D9978
float World::CurveEntity::NewtonMethod(class CurveEntity * this /* r28 */, float t /* f27 */, class Vector3 & p /* r29 */, int itrs /* r30 */) const {
    // Local variables
    float old_t; // f28
    float new_t; // r31

    {
        // Range: 0x802D9860 -> 0x802D990C
        // Local variables
        int i; // r31

        {
            // Range: 0x802D9860 -> 0x802D990C
            // Local variables
            float off; // f0
        }
    }
}
// signature: World::CurveEntity::ProjectPoint(const Math::Vector3 &, float *, float *, float, float, float) const
// Range: 0x802D9978 -> 0x802D9F2C
class Vector3 World::CurveEntity::ProjectPoint(class Vector3 * bestPoint /* r27 */, class CurveEntity * this /* r28 */, class Vector3 & point /* r29 */, float * u /* r30 */, float * distance /* r31 */, float guess /* f23 */) const {
    // Local variables
    float lower; // f31
    float upper; // f30
    float prevGuess; // f29
    float bestGuess; // f28
    float nextGuess; // f27
    float prevDist; // f0
    float bestDist; // f26
    float nextDist; // f0
    class Vector3 prevPoint; // r1+0xB0
    class Vector3 nextPoint; // r1+0xA4
    class QuadMinCache cache[4]; // r1+0xC0
    float firstGuess; // f0

    {
        // Range: 0x802D9A48 -> 0x802D9B48
        // Local variables
        float lastDist; // f0
        float lastGuess; // f25

        {
            // Range: 0x802D9A6C -> 0x802D9B44
            // Local variables
            float u; // f24

            {
                // Range: 0x802D9A6C -> 0x802D9B44
                // Local variables
                float testDist; // f0
                class Vector3 testPoint; // r1+0x98
            }
        }
    }
}
// Range: 0x802D9F2C -> 0x802DA230
bool World::CurveEntity::AdvanceU(class CurveEntity * this /* r29 */, float start_u /* f26 */, float distance /* f27 */, bool forward /* r30 */, float & new_u /* r31 */, float lowerLimit /* f28 */, float upperLimit /* f29 */) const {
    // Local variables
    float spline_start; // f31
    float spline_end; // f30
    class Vector3 velocity_vec; // r1+0x8
    float vel_mag; // f0

    // References
    // -> class Vector3 vec3Zero;
}
// Range: 0x802DA230 -> 0x802DA304
class Entity * Sext::Curve::Create(class EntityHandleBase * handle /* r29 */, class Curve * asset /* r30 */) {
    // Local variables
    void * mem; // r31

    // References
    // -> struct {} __vt__Q25World11CurveEntity;
}
