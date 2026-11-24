/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xSplineAsset.cpp
*/
class _OGCurveSchema _OGCurveschema; // size: 0x18, address: 0x8075FB40
class SchemaRegistrator _OGCurveschemaReg; // size: 0x8, address: 0x8075FB58
static class Vector4 BezierBasisRow0; // size: 0x10, address: 0x8075FB60
static class Vector4 BezierBasisRow1; // size: 0x10, address: 0x8075FB70
static class Vector4 BezierBasisRow2; // size: 0x10, address: 0x8075FB80
static class Vector4 BezierBasisRow3; // size: 0x10, address: 0x8075FB90
static int total_it; // size: 0x4, address: 0x8075FBA0
// Range: 0x8005FC50 -> 0x8005FC60
void World::_OGCurveEntity::Deactivate() {
}
// Range: 0x8005FC60 -> 0x8005FCB0
void World::_OGCurveEntity::Destroy(class _OGCurveEntity * this /* r31 */) {
}
// signature: World::_OGCurveSchema::Fix(World::Asset *, long, int)
// Range: 0x8005FD10 -> 0x8005FD18
void World::_OGCurveSchema::Fix() {
}
// signature: World::_OGCurveSchema::CreateStub(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8005FD20 -> 0x8005FD6C
class EntityStub * World::_OGCurveSchema::CreateStub(class _OGCurveSchema * this /* r31 */) {
}
// signature: World::_OGCurveSchema::DestroyStub(World::EntityHandleBase *, World::EntityStub *)
// Range: 0x8005FD70 -> 0x8005FD88
void World::_OGCurveSchema::DestroyStub() {
}
// signature: World::_OGCurveSchema::ActivateEntity(World::EntityHandleBase *, const World::Asset *, unsigned long long, int)
// Range: 0x8005FD90 -> 0x8005FDF4
class Entity * World::_OGCurveSchema::ActivateEntity(class EntityHandleBase * handle /* r31 */) {
    // References
    // -> struct {} __vt__Q25World14_OGCurveEntity;
}
// signature: xNurbs::approximate_length(int) const
// Range: 0x8005FE40 -> 0x80060028
float xNurbs::approximate_length(class xNurbs * this /* r30 */) const {
    // Local variables
    float division_size; // f29
    float length; // f28
    class xVec3 last_point; // r1+0x20

    {
        // Range: 0x8005FEE8 -> 0x8005FF9C
        // Local variables
        float t; // f27

        {
            // Range: 0x8005FEE8 -> 0x8005FF9C
            // Local variables
            class xVec3 point; // r1+0x14
        }
    }
}
// signature: xNurbs::find_span(float) const
// Range: 0x80060030 -> 0x800600D0
int xNurbs::find_span() const {
    // Local variables
    int low; // r6
    int high; // r7
    int mid; // r3
}
// signature: xNurbs::find_basis_functions(float, int, float *) const
// Range: 0x800600D0 -> 0x80060394
void xNurbs::find_basis_functions() const {
    // Local variables
    float left[5]; // r1+0x1C
    float right[5]; // r1+0x8

    {
        // Range: 0x80060104 -> 0x8006036C
        // Local variables
        int j; // r26

        {
            // Range: 0x80060104 -> 0x8006036C
            // Local variables
            float saved; // f11

            {
                // Range: 0x80060128 -> 0x80060128
                // Local variables
                int r; // r25

                {
                    // Range: 0x80060128 -> 0x80060128
                    // Local variables
                    float temp; // f6
                }
            }
        }
    }
}
// signature: xNurbs::find_derivative_basis_functions(float, int, int, float (*)[5]) const
// Range: 0x800603A0 -> 0x800608C4
void xNurbs::find_derivative_basis_functions() const {
    // Local variables
    float ndu[5][5]; // r1+0x58
    float left[5]; // r1+0x1C
    float right[5]; // r1+0x8
    int j; // r19
    float a[2][5]; // r1+0x30
    int r; // r19

    {
        // Range: 0x800603D4 -> 0x80060568
        // Local variables
        float saved; // f5

        {
            // Range: 0x8006042C -> 0x8006044C
            // Local variables
            int r; // r20

            {
                // Range: 0x8006042C -> 0x8006044C
                // Local variables
                float temp; // f2
            }
        }
    }
    {
        // Range: 0x800605AC -> 0x80060820
        // Local variables
        int s2; // r17
        int s1; // r18

        {
            // Range: 0x800605C0 -> 0x80060808
            // Local variables
            int k; // r16

            {
                // Range: 0x800605C0 -> 0x80060808
                // Local variables
                int temp; // r0
                int j2; // r7
                int j1; // r0
                int pk; // r15
                int rk; // r8
                float d; // f5

                {
                    // Range: 0x800606F4 -> 0x800607C8
                    // Local variables
                    int j; // r0
                }
            }
        }
    }
    {
        // Range: 0x80060838 -> 0x8006089C
        // Local variables
        int k; // r9

        {
            // Range: 0x80060838 -> 0x8006086C
            // Local variables
            int j; // r10
        }
    }
}
// Range: 0x800608D0 -> 0x800608E4
float xNurbs::start() const {
}
// Range: 0x800608F0 -> 0x80060908
float xNurbs::end() const {
}
// Range: 0x80060910 -> 0x80060B70
void xNurbs::evaluate(class xNurbs * this /* r30 */, float u /* f31 */, class xVec3 * point /* r31 */) const {
    // Local variables
    float curStart; // f0
    float curEnd; // f3

    {
        // Range: 0x80060A04 -> 0x80060AA0
        // Local variables
        class Vector4 U; // r1+0x8
    }
    {
        // Range: 0x80060AA0 -> 0x80060B4C
        // Local variables
        float N[5]; // r1+0x18
        int span; // r29

        {
            // Range: 0x80060ADC -> 0x80060B18
            // Local variables
            int i; // r4
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: xNurbs::evaluate(float, int) const
// Range: 0x80060B70 -> 0x80060BC0
class xVec3 xNurbs::evaluate() const {
    // Local variables
    class xVec3 point; // r1+0x8
}
// Range: 0x80060BC0 -> 0x80060E04
void xNurbs::evaluate(class xNurbs * this /* r30 */, float u /* f31 */, int d /* r28 */, class xVec3 * point /* r31 */) const {
    {
        // Range: 0x80060D24 -> 0x80060DDC
        // Local variables
        float ders[5][5]; // r1+0x8
        int span; // r29

        {
            // Range: 0x80060D78 -> 0x80060DA8
            // Local variables
            int j; // r5
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x80060E10 -> 0x800615C4
class xVec3 xNurbs::project_point(class xNurbs * this /* r27 */, class xVec3 * point /* r28 */, float * u /* r29 */, float * distance /* r30 */, float guess /* f19 */, float lowerU /* f21 */, float upperU /* f20 */) const {
    // Local variables
    float length2; // f25
    class xVec3 curve_point; // r1+0x68
    float lower; // f24
    float upper; // f23
    float minLength2; // f22
    float minU; // f21
    class xVec3 minPoint; // r1+0x50

    {
        // Range: 0x80060EA4 -> 0x80060F98
        // Local variables
        float interval_distance; // f26

        {
            // Range: 0x80060F0C -> 0x80060F74
            // Local variables
            float u; // f27

            {
                // Range: 0x80060F0C -> 0x80060F74
                // Local variables
                float test_length2; // f0
                class xVec3 test_point; // r1+0x5C
            }
        }
    }
    {
        // Range: 0x8006107C -> 0x800614B8
        // Local variables
        int depth; // r25

        {
            // Range: 0x8006107C -> 0x800614B8
            // Local variables
            float denom; // f5
            float last_guess; // f20
            class xVec3 curve_2nd_derivative; // r1+0x2C
            class xVec3 curve_tangent; // r1+0x38
            class xVec3 point_to_curve; // r1+0x44
        }
    }
}
// Range: 0x800615D0 -> 0x800615E4
void * xNurbs::xNurbs() {
}
// signature: xNurbs::Create(Sext::Curve *)
// Range: 0x800615F0 -> 0x80061890
void xNurbs::Create() {
    {
        // Range: 0x80061634 -> 0x80061878
        // Local variables
        class Vector4 pz; // r1+0x8
        class Vector4 py; // r1+0x18
        class Vector4 px; // r1+0x28
    }

    // References
    // -> static class Vector4 BezierBasisRow3;
    // -> static class Vector4 BezierBasisRow2;
    // -> static class Vector4 BezierBasisRow1;
    // -> static class Vector4 BezierBasisRow0;
}
// signature: xNurbs::getBoundBox(xBox &) const
// Range: 0x80061890 -> 0x80061990
void xNurbs::getBoundBox() const {
    {
        // Range: 0x80061894 -> 0x80061970
        // Local variables
        int i; // r7
    }
}
// signature: xNurbs::DrawCrossSection(int, float) const
// Range: 0x80061990 -> 0x80061994
void xNurbs::DrawCrossSection() const {
}
// signature: xNurbs::advance_u(float, float, bool, float &, float, float) const
// Range: 0x800619A0 -> 0x80061BEC
bool xNurbs::advance_u(float start_u /* f28 */, float distance /* f29 */, bool forward /* r29 */, float * new_u /* r30 */) const {
    // Local variables
    float spline_start; // f31
    float spline_end; // f30
    class xVec3 velocity_vec; // r1+0x8
    float vel_mag; // f0
}
