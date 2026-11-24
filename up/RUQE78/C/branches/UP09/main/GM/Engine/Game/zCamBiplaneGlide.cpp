/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamBiplaneGlide.cpp
*/
static float FS_SPECIAL_MOVE_CAM_FRAMES; // size: 0x4, address: 0x8077D7B0
// Range: 0x800A98B0 -> 0x800A9990
void zCamBiplaneGlide::create(class zCamBiplaneGlide * this /* r29 */) {
    // Local variables
    class xEnvAsset * envAsset; // r0
}
// Range: 0x800A9990 -> 0x800A99D8
void zCamBiplaneGlide::start(class zCamBiplaneGlide * this /* r31 */) {
}
// Range: 0x800A99E0 -> 0x800A9A40
void zCamBiplaneGlide::stop(class zCamBiplaneGlide * this /* r31 */) {
}
// Range: 0x800A9A40 -> 0x800ABFCC
void zCamBiplaneGlide::UpdateFlightTransfrom(class zCamBiplaneGlide * this /* r30 */, float dt /* f28 */) {
    // Local variables
    class xVec3 gravity; // r1+0x224
    class xVec3 bank; // r1+0x218
    class xMat3x3 flightMat; // r1+0x290
    class xMat3x3 flightCamMat; // r1+0x260
    float maxRollRatio; // f31
    float maxPitchRatio; // f30
    class hkpWorldCinfo info; // r1+0x2C0
    class hkVector4 & minBound; // r0
    class hkVector4 & maxBound; // r0
    class xVec3 min; // r1+0x20C
    class xVec3 max; // r1+0x200
    class xVec3 center; // r1+0x1F4
    float r; // f0
    class xVec3 fromCenter; // r1+0x1E8
    class xVec3 vel; // r1+0x18C
    class xVec3 velSum; // r1+0x180
    class xVec3 aimCenter; // r1+0x174

    {
        // Range: 0x800A9C88 -> 0x800A9DE8
        // Local variables
        class xQuat goalQuat; // r1+0x1D8
        class xMat3x3 goalMat; // r1+0x230
        float s; // f0
    }
    {
        // Range: 0x800A9DE8 -> 0x800ABA9C
        // Local variables
        class xQuat rollQuat; // r1+0x198
        class xQuat pitchQuat; // r1+0x1A8
        class xQuat yawQuat; // r1+0x1B8
        float bankYawAngle; // f0
        float stallHeight; // f0
        float rollAngle; // f0
        float pitchAngle; // f0
        float yawAngle; // f29
        float bankYaw; // f2
        float absTheta; // f1
        float theta; // f29

        {
            // Range: 0x800A9E20 -> 0x800A9ED4
            // Local variables
            float delta; // f2
            float t; // f4
            float s; // f0
        }
        {
            // Range: 0x800A9F70 -> 0x800AB9E4
            // Local variables
            float maxYawVel; // f4

            {
                // Range: 0x800AA100 -> 0x800AA300
                // Local variables
                class xVec2 curXZUp; // r1+0xB8
            }
            {
                // Range: 0x800AA310 -> 0x800AA4D0
                // Local variables
                class xVec2 xzAt; // r1+0xB0
            }
            {
                // Range: 0x800AA4D0 -> 0x800AA64C
                // Local variables
                class xVec2 xzAt; // r1+0xA8
            }
            {
                // Range: 0x800AA64C -> 0x800AA76C
                // Local variables
                class xVec2 curXZPos; // r1+0x98
                class xVec2 curGoalAim; // r1+0xA0
            }
            {
                // Range: 0x800AA7AC -> 0x800AA7CC
                // Local variables
                int i; // r6
            }
            {
                // Range: 0x800AA850 -> 0x800AA9CC
                // Local variables
                float cosRadRoll; // f0
                float cosRadPitch; // f0
                float radRoll; // f26
                float radPitch; // f1
            }
            {
                // Range: 0x800AAB1C -> 0x800AAC58
                // Local variables
                class xVec2 horGoalCamPos; // r1+0x88
                class xVec2 horCurCamPos; // r1+0x90
            }
            {
                // Range: 0x800AAC60 -> 0x800AB010
                // Local variables
                float atDotProd; // f0
                float rightDotProd; // f0
                class xVec2 goalXZ; // r1+0x78
                class xVec2 rightXZ; // r1+0x80
                class xVec3 toTarget; // r1+0x1C8
            }
            {
                // Range: 0x800AB010 -> 0x800AB3A0
                {
                    // Range: 0x800AB01C -> 0x800AB11C
                    // Local variables
                    float pitchShift; // f2
                }
                {
                    // Range: 0x800AB120 -> 0x800AB350
                    // Local variables
                    float yawShift; // f4
                    class xVec2 xzAtVec; // r1+0x68
                    class xVec2 xzCollisionNormal; // r1+0x70
                }
            }
            {
                // Range: 0x800AB3E8 -> 0x800AB610
                // Local variables
                float maxPitchVel; // f30
            }
            {
                // Range: 0x800AB610 -> 0x800AB9E4
                // Local variables
                float oldYawPos; // f0
                float maxRatio; // f0
                float speedRatio; // f0
                float rollRatio; // f7
                float pitchRatio; // f6
                float yawRatio; // f5
                float tempSpeed; // r1+0x10
                float tempRoll; // r1+0x14
                float tempPitch; // r1+0x18
                float tempYawPos; // r1+0x1C
            }
        }
    }
    {
        // Range: 0x800ABC50 -> 0x800ABD48
        // Local variables
        float a; // f1
        float r; // f1
        float startSpeed; // f0
        float g; // f0
    }

    // References
    // -> class xVec3 m_UnitAxisY;
}
// signature: zCamBiplaneGlide::UpdatePlayerMat(float)
// Range: 0x800AC0F0 -> 0x800AC2B8
void zCamBiplaneGlide::UpdatePlayerMat(class zCamBiplaneGlide * this /* r31 */) {
    // Local variables
    class xQuat currentQuat; // r1+0x20
    float bounceRoll; // f0
    class xVec3 hOffset; // r1+0x14
    class xVec3 vOffset; // r1+0x8
}
// Range: 0x800AC2C0 -> 0x800ACB70
void zCamBiplaneGlide::UpdateCamTransform(class zCamBiplaneGlide * this /* r31 */, float dt /* f30 */) {
    // Local variables
    float baseFOV; // f1

    {
        // Range: 0x800AC380 -> 0x800AC5F4
        // Local variables
        class xMat3x3 playerDirection; // r1+0x90
        float currentDist; // f31
        float moveRatio; // f31
    }
    {
        // Range: 0x800AC5F4 -> 0x800AC7E8
        // Local variables
        class xVec3 finalOffset; // r1+0x14
        class xMat4x3 camMat; // r1+0x50

        {
            // Range: 0x800AC690 -> 0x800AC6D8
            // Local variables
            float factor; // f1
        }
        {
            // Range: 0x800AC6DC -> 0x800AC728
            // Local variables
            float factor; // f1
        }
    }
    {
        // Range: 0x800AC848 -> 0x800AC910
        // Local variables
        class xVec3 reverseOffset; // r1+0x8
        class xMat3x3 reverseMat; // r1+0x20
    }
    {
        // Range: 0x800AC994 -> 0x800ACA04
        // Local variables
        float factor; // f0
    }
    {
        // Range: 0x800ACA08 -> 0x800ACA50
        // Local variables
        float factor; // f3
    }

    // References
    // -> class xMat4x3 g_I3;
    // -> static float FS_SPECIAL_MOVE_CAM_FRAMES;
}
// signature: zCamBiplaneGlide::update(xScene &, float)
// Range: 0x800ACB70 -> 0x800ACC68
void zCamBiplaneGlide::update(class zCamBiplaneGlide * this /* r31 */) {
}
// Range: 0x800ACC70 -> 0x800ACD00
void zCamBiplaneGlide::reset() {
}
// Range: 0x800ACD00 -> 0x800AD000
void zCamBiplaneGlide::SetStartingTransform(class zCamBiplaneGlide * this /* r30 */, class xMat4x3 * mat /* r31 */) {
    // Local variables
    class xVec3 offset; // r1+0x8
}
// signature: zCamBiplaneGlide::GetPlayerMatrix(xMat4x3 *)
// Range: 0x800AD000 -> 0x800AD084
void zCamBiplaneGlide::GetPlayerMatrix() {
}
// signature: zCamBiplaneGlide::StoppingRange(float, float)
// Range: 0x800AD090 -> 0x800AD0C0
bool zCamBiplaneGlide::StoppingRange() {
}
// Range: 0x800AD0C0 -> 0x800AD60C
void zCamBiplaneGlide::CalculateGoalCamOrient(class zCamBiplaneGlide * this /* r31 */) {
    // Local variables
    class xVec3 goalCamPos; // r1+0x24
    class xMat3x3 goalCamMat; // r1+0x60
    class xVec2 horGoalCamPos; // r1+0x10
    class xVec2 horCurCamPos; // r1+0x8

    {
        // Range: 0x800AD1C4 -> 0x800AD234
        // Local variables
        class xMat3x3 currentCamMat; // r1+0x30
    }
    {
        // Range: 0x800AD234 -> 0x800AD27C
        // Local variables
        class xVec3 yAxis; // r1+0x18
    }
}
// Range: 0x800AD610 -> 0x800AD760
float zCamBiplaneGlide::GetPlayerYaw() {
    // Local variables
    class xVec2 horPlayerAt; // r1+0x8
    float playerTheta; // f1
}
// signature: zCamBiplaneGlide::GetYawDir(xVec3, xVec2)
// Range: 0x800AD760 -> 0x800AD7E4
float zCamBiplaneGlide::GetYawDir() {
    // Local variables
    class xVec2 xzRight; // r1+0x8
    float dotProd; // f0
}
// signature: zCamBiplaneGlide::GetYawDirAt(xVec3, xVec2)
// Range: 0x800AD7F0 -> 0x800AD834
float zCamBiplaneGlide::GetYawDirAt() {
    // Local variables
    float rotDir; // f0
}
// signature: zCamBiplaneGlide::GetMotionConstants(float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
// Range: 0x800AD840 -> 0x800AD8E4
void zCamBiplaneGlide::GetMotionConstants(float & rollMax /* r6 */, float & startSpeed /* r5 */, float & brakeSpeed /* r4 */) {
}
// Range: 0x800AD8F0 -> 0x800AD8FC
float zCamBiplaneGlide::GetMaxPitch() {
}
// Range: 0x800AD900 -> 0x800AD90C
float zCamBiplaneGlide::GetMaxRoll() {
}
// Range: 0x800AD910 -> 0x800AD964
void zCamBiplaneCrash::create(class zCamBiplaneCrash * this /* r31 */) {
}
// Range: 0x800AD980 -> 0x800AD984
void zCamBiplaneCrash::stop() {
}
// signature: zCamBiplaneCrash::update(xScene &, float)
// Range: 0x800AD990 -> 0x800ADAD4
void zCamBiplaneCrash::update(class zCamBiplaneCrash * this /* r31 */) {
    // Local variables
    class xVec3 toTarget; // r1+0x18
    class xMat3x3 mat; // r1+0x28
    class xQuat goal; // r1+0x8

    // References
    // -> class xVec3 m_UnitAxisY;
}
// Range: 0x800ADAE0 -> 0x800ADAE4
void zCamBiplaneCrash::reset() {
}
