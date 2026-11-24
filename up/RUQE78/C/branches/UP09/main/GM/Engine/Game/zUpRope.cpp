/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zUpRope.cpp
*/
// Range: 0x800E0A80 -> 0x800E0BC8
void * zUpRope::zUpRope(class zUpRope * this /* r28 */) {
    // References
    // -> class xVec3 m_Null;
    // -> class xVec3 m_UnitAxisZ;
    // -> struct {} __vt__7zUpRope;
}
// Range: 0x800E0BD0 -> 0x800E0BEC
float zUpRope::GetInitialLength() {
}
// signature: zUpRope::ResetValuesFromAsset(Sext::UpSpringAsset *)
// Range: 0x800E0BF0 -> 0x800E0FC4
void zUpRope::ResetValuesFromAsset() {
    // Local variables
    class xVec3 deltaPos; // r1+0x50
    class xVec3 p; // r1+0x44

    {
        // Range: 0x800E0CDC -> 0x800E0D0C
        // Local variables
        int i; // r7
    }
    {
        // Range: 0x800E0F5C -> 0x800E0F88
        // Local variables
        int j; // r6
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800E0FD0 -> 0x800E1624
void zUpRope::Setup(class zUpRope * this /* r26 */, class xVec3 & p1 /* r27 */, class xVec3 & p2 /* r28 */, int segments /* r22 */, bool isVine /* r29 */, int anchor1 /* r30 */, int anchor2 /* r31 */) {
    // Local variables
    class xVec3 deltaPos; // r1+0x50
    class xVec3 p; // r1+0x44
    class EntityHandleBase * goodie; // r0

    {
        // Range: 0x800E11C8 -> 0x800E1208
        // Local variables
        int i; // r6
    }

    // References
    // -> class xVec3 m_Null;
}
// signature: zUpRope::GetPositionOnRope(float, xVec3 &)
// Range: 0x800E1630 -> 0x800E174C
void zUpRope::GetPositionOnRope() {
    // Local variables
    float posOnSegment; // f3
}
// signature: zUpRope::GetClosestNode(const xVec3)
// Range: 0x800E1750 -> 0x800E180C
int zUpRope::GetClosestNode() {
}
// Range: 0x800E1810 -> 0x800E1D58
void zUpRope::Update(class zUpRope * this /* r31 */, float _dTime /* f30 */) {
    // Local variables
    float coeftime; // f0

    {
        // Range: 0x800E1858 -> 0x800E18F8
        // Local variables
        class xVec3 downVec; // r1+0x68

        {
            // Range: 0x800E1888 -> 0x800E18BC
            // Local variables
            unsigned int x; // r3
        }
    }
    {
        // Range: 0x800E1960 -> 0x800E1AB0
        // Local variables
        class xVec3 maxdepl; // r1+0x5C
    }
    {
        // Range: 0x800E1AE0 -> 0x800E1BB4
        // Local variables
        float maxforce; // f0

        {
            // Range: 0x800E1AE4 -> 0x800E1BA4
            // Local variables
            float newmaxforce; // f1
            float maxdepl; // f1
        }
    }

    // References
    // -> class xVec3 m_NegUnitAxisY;
}
// signature: zUpRope::UpdateForces(bool)
// Range: 0x800E1D60 -> 0x800E233C
void zUpRope::UpdateForces() {
    // Local variables
    int i; // r9
    int nbmasses; // r4

    {
        // Range: 0x800E2074 -> 0x800E2310
        // Local variables
        class xVec3 airFriction; // r1+0x68
        class RopeVertex * physVertex; // r5

        {
            // Range: 0x800E2078 -> 0x800E2310
            // Local variables
            float pen; // f0

            {
                // Range: 0x800E2078 -> 0x800E20A8
                // Local variables
                class xVec3 enfoncement; // r1+0x38
                class xVec3 scaledNorm; // r1+0x44
                float speedside; // f0
                class xVec3 speed; // r1+0x5C

                {
                    // Range: 0x800E2078 -> 0x800E2084
                    // Local variables
                    class xVec3 rebond; // r1+0x50
                }
            }
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800E2340 -> 0x800E29B0
void zUpRope::UpdatePhysic(class zUpRope * this /* r31 */, float _dtime /* f31 */) {
    // Local variables
    int i; // r0
    int nbmasses; // r30

    {
        // Range: 0x800E24F0 -> 0x800E2578
        // Local variables
        class xVec3 newpos; // r1+0x50
    }
    {
        // Range: 0x800E2578 -> 0x800E25FC
        // Local variables
        class xVec3 newpos; // r1+0x44
    }
    {
        // Range: 0x800E25FC -> 0x800E27F4
        // Local variables
        class xVec3 delta; // r1+0x38
        float totaldist; // f0
        float curdist; // f0

        {
            // Range: 0x800E26CC -> 0x800E27A0
            // Local variables
            int i; // r6

            {
                // Range: 0x800E26CC -> 0x800E27A0
                // Local variables
                class xVec3 newpos; // r1+0x20
                class xVec3 deltasegment; // r1+0x2C
            }
        }
    }

    // References
    // -> class xVec3 m_Null;
}
// Range: 0x800E29B0 -> 0x800E3378
void zUpRope::DrawBetweenPoints(class zUpRope * this /* r24 */, class xVec3 & start /* r22 */, class xVec3 & end /* r23 */) {
    // Local variables
    class xVec3 leftStart; // r1+0x74
    class xVec3 rightStart; // r1+0x68
    class xVec3 leftEnd; // r1+0x5C
    class xVec3 rightEnd; // r1+0x50
    class xMat4x3 cameraMatrix; // r1+0xC8
    float thick; // f29

    {
        // Range: 0x800E2A94 -> 0x800E3348
        // Local variables
        class xVec3 dirVec; // r1+0x44
        class ImmediateContext immCtxt; // r1+0x80
    }

    // References
    // -> class Scene * primaryScene;
    // -> struct {} __vt__Q25World17ImmediateGeometry;
    // -> struct {} __vt__Q28Graphics12Renderable3D;
    // -> class SingleBufferAllocator updateFrameAllocator;
}
