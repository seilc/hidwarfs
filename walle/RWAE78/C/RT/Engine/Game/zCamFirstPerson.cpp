/*
    Compile unit: C:\RT\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zCamFirstPerson.cpp
*/
static float ANGLE_STEP_RETURN; // size: 0x4, address: 0x806F4128
static float maxXAngle; // size: 0x4, address: 0x806F412C
static float maxYAngle; // size: 0x4, address: 0x806F4130
static float ACCELERATION; // size: 0x4, address: 0x806F4134
static float AMPLITUDE; // size: 0x4, address: 0x806F4138
static float ZOOM_MOVEMENT_THRESHOLD; // size: 0x4, address: 0x8076BD98
// Range: 0x800A0B90 -> 0x800A0CA0
void zCamFirstPerson::create(class zCamFirstPerson * this /* r30 */) {
    // References
    // -> static float maxXAngle;
    // -> static float maxYAngle;
}
// Range: 0x800A0CA0 -> 0x800A0CE8
void zCamFirstPerson::start(class zCamFirstPerson * this /* r31 */) {
}
// Range: 0x800A0CF0 -> 0x800A0D2C
void zCamFirstPerson::stop(class zCamFirstPerson * this /* r31 */) {
}
// signature: zCamFirstPerson::update(xScene &, float)
// Range: 0x800A0D30 -> 0x800A116C
void zCamFirstPerson::update(class zCamFirstPerson * this /* r29 */, float dt /* f30 */) {
    // Local variables
    float c; // f0
    float offsetMultiplier; // f0
    float extraYOffset; // f1
    class xMat4x3 tmpMat; // r1+0x30
    class xVec3 atVec; // r1+0x18

    {
        // Range: 0x800A0EA8 -> 0x800A0EF0
        // Local variables
        class xVec3 upVec; // r1+0x24
    }
    {
        // Range: 0x800A0F74 -> 0x800A10B8
        // Local variables
        float y; // f29

        {
            // Range: 0x800A1080 -> 0x800A10A8
            // Local variables
            float dAngle; // f1
        }
    }

    // References
    // -> static float ANGLE_STEP_RETURN;
    // -> static float AMPLITUDE;
    // -> static float ACCELERATION;
    // -> static float ZOOM_MOVEMENT_THRESHOLD;
}
// Range: 0x800A1170 -> 0x800A13C4
void zCamFirstPerson::UpdateFOV(class zCamFirstPerson * this /* r30 */) {
    // Local variables
    float dt; // f0

    // References
    // -> float dt;
}
