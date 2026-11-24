/*
    Compile unit: C:\RT\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Game\zPIDController.cpp
*/
// signature: zPIDController::Reset(float, float, float)
// Range: 0x80166AC0 -> 0x80166B24
void zPIDController::Reset(class zPIDController * this /* r31 */) {
}
// signature: zPIDController::SetEstimatedDestSpeed(float)
// Range: 0x80166B30 -> 0x80166B38
void zPIDController::SetEstimatedDestSpeed() {
}
// signature: zPIDController::Update(float &, float, float, float)
// Range: 0x80166B40 -> 0x80166D30
void zPIDController::Update() {
    // Local variables
    float curError; // f0

    {
        // Range: 0x80166B48 -> 0x80166C98
        // Local variables
        float totalTime; // f13
        float errorIntegral; // f12

        {
            // Range: 0x80166B68 -> 0x80166B74
            // Local variables
            unsigned int i; // r0
        }
    }
    {
        // Range: 0x80166C98 -> 0x80166CE4
        // Local variables
        float errorDerivative; // f2
        float lastError; // f2
    }
}
// signature: zPIDController3::Reset(float, float, float)
// Range: 0x80166D30 -> 0x80166DA8
void zPIDController3::Reset(class zPIDController3 * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zPIDController3::Update(xVec3 &, const xVec3 *, const xVec3 *, float)
// Range: 0x80166DB0 -> 0x80167148
void zPIDController3::Update() {
    // Local variables
    class xVec3 curError; // r1+0x20

    {
        // Range: 0x80166DC8 -> 0x80167008
        // Local variables
        float totalTime; // f0
        class xVec3 errorIntegral; // r1+0x14

        {
            // Range: 0x80166E54 -> 0x80166FB0
            // Local variables
            unsigned int i; // r0
        }
    }
    {
        // Range: 0x80167008 -> 0x801670B0
        // Local variables
        class xVec3 errorDerivative; // r1+0x8
        class xVec3 * lastError; // r5
    }
}
