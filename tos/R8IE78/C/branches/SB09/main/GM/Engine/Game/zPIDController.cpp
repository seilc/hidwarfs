/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zPIDController.cpp
*/
// signature: zPIDController::Reset(float, float, float)
// Range: 0x80104EF0 -> 0x80104F54
void zPIDController::Reset(class zPIDController * this /* r31 */) {
}
// signature: zPIDController::SetEstimatedDestSpeed(float)
// Range: 0x80104F60 -> 0x80104F68
void zPIDController::SetEstimatedDestSpeed() {
}
// signature: zPIDController::Update(float &, float, float, float)
// Range: 0x80104F70 -> 0x80105090
void zPIDController::Update() {
    // Local variables
    float curError; // f5

    {
        // Range: 0x80104F78 -> 0x80104FF8
        // Local variables
        float totalTime; // f6
        float errorIntegral; // f4

        {
            // Range: 0x80104FA4 -> 0x80104FC8
            // Local variables
            unsigned int i; // r0
        }
    }
    {
        // Range: 0x80104FF8 -> 0x80105044
        // Local variables
        float errorDerivative; // f1
        float lastError; // f1
    }
}
// signature: zPIDController3::Reset(float, float, float)
// Range: 0x80105090 -> 0x801050F8
void zPIDController3::Reset(class zPIDController3 * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zPIDController3::Update(xVec3 &, const xVec3 *, const xVec3 *, float)
// Range: 0x80105100 -> 0x801052C8
void zPIDController3::Update(class zPIDController3 * this /* r31 */, class xVec3 & outputVelocity /* r26 */, float dt /* f30 */) {
    // Local variables
    class xVec3 curError; // r1+0x20

    {
        // Range: 0x80105150 -> 0x801051E8
        // Local variables
        float totalTime; // f31
        class xVec3 errorIntegral; // r1+0x14

        {
            // Range: 0x80105178 -> 0x801051B4
            // Local variables
            unsigned int i; // r27
        }
    }
    {
        // Range: 0x801051E8 -> 0x80105254
        // Local variables
        class xVec3 errorDerivative; // r1+0x8
    }
}
