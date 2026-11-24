/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUpSpring.cpp
*/
static int segments; // size: 0x4, address: 0x807A3254
// signature: zUpSpring::Setup(const float, const unsigned char, const xVec3 &, const unsigned int)
// Range: 0x800DEF20 -> 0x800DEF84
void zUpSpring::Setup() {
}
// signature: zUpSpring::Align(const xVec3 &, unsigned int)
// Range: 0x800DEF90 -> 0x800DF27C
void zUpSpring::Align() {
    // Local variables
    class xVec3 r2e; // r1+0x8
    float distance; // f4

    {
        // Range: 0x800DF160 -> 0x800DF258
        // Local variables
        unsigned int i; // r0
    }
}
// signature: zUpSpring::Update(float)
// Range: 0x800DF280 -> 0x800DF644
void zUpSpring::Update(class zUpSpring * this /* r31 */) {
    // Local variables
    class xVec3 forceFrame; // r1+0x38

    {
        // Range: 0x800DF2AC -> 0x800DF2F8
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x800DF36C -> 0x800DF600
        // Local variables
        unsigned int refinement; // r3

        {
            // Range: 0x800DF36C -> 0x800DF420
            // Local variables
            int i; // r7

            {
                // Range: 0x800DF36C -> 0x800DF420
                // Local variables
                class xVec3 midPoint; // r1+0x14
                float halflen; // f12
                float len; // f0
                class xVec3 safetyVector; // r1+0x20
                class xVec3 a2b; // r1+0x2C
            }
        }
    }

    // References
    // -> static int segments;
}
// Range: 0x800DF650 -> 0x800DFBF0
void zUpSpring::HandleAttachedObject(class zUpSpring * this /* r31 */, float dt /* f31 */) {
    // Local variables
    class xVec3 objPos; // r1+0x110
    class xVec3 objVel; // r1+0x104
    class xVec3 estObjPos; // r1+0xF8
    class xVec3 rootToObjUnit; // r1+0xEC
    class xVec3 estRootToObjUnit; // r1+0xE0
    float restDistance; // f0
    float maxDispl; // f0
    class xVec3 target; // r1+0xD4
    class xVec3 vDispl; // r1+0xC8
    float sDispl; // f0

    {
        // Range: 0x800DFB1C -> 0x800DFBD4
        // Local variables
        class xVec3 dbVel; // r1+0xB0
        class xVec3 outwardVel; // r1+0xBC
        float outwardVelAmt; // f0
    }
}
// Range: 0x800DFC60 -> 0x800E09E8
void zUpSpring::DrawFromControlPoints(class xVec3 * ropeControls /* r25 */, int ropeControlsTotal /* r26 */, int numberOfSegments /* r15 */) {
    // Local variables
    float segmentRatio; // f31

    {
        // Range: 0x800DFD20 -> 0x800E0940
        // Local variables
        class xVec3 end; // r1+0x44
        float thickZ; // f15
        float thickY; // f16
        float thickX; // f17
        class xMat4x3 cameraMatrix; // r1+0x98
        class ImmediateContext immCtxt; // r1+0x50
        int totSeg; // r27
        int curSeg; // r28

        {
            // Range: 0x800DFFC8 -> 0x800DFFCC
            // Local variables
            int i; // r3
        }
        {
            // Range: 0x800E00A4 -> 0x800E044C
            // Local variables
            int controlIdx; // r26

            {
                // Range: 0x800E00A4 -> 0x800E044C
                // Local variables
                class xVec3 & p4; // r6
                class xVec3 & p3; // r5
                class xVec3 & p1; // r4

                {
                    // Range: 0x800E00A4 -> 0x800E00A4
                    // Local variables
                    int segment; // r12

                    {
                        // Range: 0x800E00A4 -> 0x800E00A4
                        // Local variables
                        float vz; // f0
                        float vy; // f0
                        float vx; // f0
                        float t; // f28
                    }
                }
            }
        }
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
// Range: 0x800E09F0 -> 0x800E0A80
void zUpSpring::FindMaterials(class zUpSpring * this /* r31 */) {
    // Local variables
    class EntityHandleBase * hosegoodie; // r0
    class EntityHandleBase * ropegoodie; // r0
}
