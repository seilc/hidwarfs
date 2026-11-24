/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zCamFirstPerson.cpp
*/
static float ANGLE_STEP_RETURN; // size: 0x4, address: 0x807A3380
static float maxXAngle; // size: 0x4, address: 0x807A3384
static float maxYAngle; // size: 0x4, address: 0x807A3388
static float ACCELERATION; // size: 0x4, address: 0x807A338C
static float AMPLITUDE; // size: 0x4, address: 0x807A3390
static float ZOOM_MOVEMENT_THRESHOLD; // size: 0x4, address: 0x8081C1E0
// Range: 0x801116E0 -> 0x80111814
void zCamFirstPerson::create(class zCamFirstPerson * this /* r31 */) {
    // References
    // -> static float maxXAngle;
    // -> static float maxYAngle;
}
// Range: 0x80111820 -> 0x80111868
void zCamFirstPerson::start(class zCamFirstPerson * this /* r31 */) {
}
// Range: 0x80111870 -> 0x801118AC
void zCamFirstPerson::stop(class zCamFirstPerson * this /* r31 */) {
}
// signature: zCamFirstPerson::update(xScene &, float)
// Range: 0x801118B0 -> 0x80111C60
void zCamFirstPerson::update(class zCamFirstPerson * this /* r30 */, float dt /* f30 */) {
    // Local variables
    float c; // f0
    float offsetMultiplier; // f0
    float extraYOffset; // f1
    class xMat4x3 tmpMat; // r1+0x28
    class xVec3 atVec; // r1+0x18
    float y; // f29

    {
        // Range: 0x80111B70 -> 0x80111B9C
        // Local variables
        float dAngle; // f1
    }

    // References
    // -> static float ANGLE_STEP_RETURN;
    // -> static float AMPLITUDE;
    // -> static float ACCELERATION;
    // -> static float ZOOM_MOVEMENT_THRESHOLD;
}
// Range: 0x80111C60 -> 0x80111ED8
void zCamFirstPerson::UpdateFOV(class zCamFirstPerson * this /* r31 */) {
    // Local variables
    float dt; // f0

    // References
    // -> float dt;
}
