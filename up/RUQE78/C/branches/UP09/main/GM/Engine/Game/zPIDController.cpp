/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zPIDController.cpp
*/
// signature: zPIDController::Reset(float, float, float)
// Range: 0x801F54F0 -> 0x801F5554
void zPIDController::Reset(class zPIDController * this /* r31 */) {
}
// signature: zPIDController::SetEstimatedDestSpeed(float)
// Range: 0x801F5560 -> 0x801F5568
void zPIDController::SetEstimatedDestSpeed() {
}
// signature: zPIDController::Update(float &, float, float, float)
// Range: 0x801F5570 -> 0x801F5760
void zPIDController::Update() {
    // Local variables
    float curError; // f0

    {
        // Range: 0x801F5578 -> 0x801F56C8
        // Local variables
        float totalTime; // f13
        float errorIntegral; // f12

        {
            // Range: 0x801F5598 -> 0x801F55A4
            // Local variables
            unsigned int i; // r0
        }
    }
    {
        // Range: 0x801F56C8 -> 0x801F5714
        // Local variables
        float errorDerivative; // f2
        float lastError; // f2
    }
}
// signature: zPIDController3::Reset(float, float, float)
// Range: 0x801F5760 -> 0x801F57D8
void zPIDController3::Reset(class zPIDController3 * this /* r31 */) {
    // References
    // -> class xVec3 m_Null;
}
// signature: zPIDController3::Update(xVec3 &, const xVec3 *, const xVec3 *, float)
// Range: 0x801F57E0 -> 0x801F5B20
void zPIDController3::Update() {
    // Local variables
    class xVec3 curError; // r1+0x20

    {
        // Range: 0x801F57E4 -> 0x801F59F0
        // Local variables
        float totalTime; // f2
        class xVec3 errorIntegral; // r1+0x14

        {
            // Range: 0x801F5874 -> 0x801F5998
            // Local variables
            unsigned int i; // r0
        }
    }
    {
        // Range: 0x801F59F0 -> 0x801F5A98
        // Local variables
        class xVec3 errorDerivative; // r1+0x8
        class xVec3 & lastError; // r5
    }
}
