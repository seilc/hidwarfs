/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zNPCHelper.cpp
*/
// signature: zNPCHelper::GetTanTheta2(const xVec3 *, const xVec3 *, const xVec3 *)
// Range: 0x801DA6D0 -> 0x801DA7C8
float zNPCHelper::GetTanTheta2() {
    // Local variables
    class xVec3 diffVector; // r1+0x14
    class xVec3 diffLocal; // r1+0x8
    float oneOverZ; // f2

    {
        // Range: 0x801DA6D4 -> 0x801DA780
        // Local variables
        float tanTheta2; // f1
        float tanThetaYZ; // f0
        float tanThetaXZ; // f1
    }
    {
        // Range: 0x801DA780 -> 0x801DA7C0
        // Local variables
        float tanTheta2; // f1
        float tanThetaYZ; // f0
        float tanThetaXZ; // f1
    }
}
// signature: zNPCHelper::GetTanThetaXZ(const xVec3 *, const xVec3 *, const xVec3 *)
// Range: 0x801DA7D0 -> 0x801DA8E0
float zNPCHelper::GetTanThetaXZ() {
    // Local variables
    class xVec3 diffVector; // r1+0x14
    class xVec3 diffLocal; // r1+0x8
    float oneOverZ; // f2

    {
        // Range: 0x801DA7D4 -> 0x801DA88C
        // Local variables
        float tanThetaXZ; // f1
    }
    {
        // Range: 0x801DA88C -> 0x801DA8D8
        // Local variables
        float tanThetaXZ; // f1
    }
}
// signature: zNPCHelper::FindCircleAvoidDirFromDir(const xVec3 *, float, const xVec3 *, float, const xVec3 *, xVec3 &)
// Range: 0x801DA8E0 -> 0x801DAB74
bool zNPCHelper::FindCircleAvoidDirFromDir(class xVec3 * destDir /* r30 */, class xVec3 & oDir /* r31 */) {
    // Local variables
    class xVec3 frustumRNormal; // r1+0x2C
    class xVec3 frustumLNormal; // r1+0x20
    class xVec3 frustumDir; // r1+0x14
    class xVec3 frustumDirRight; // r1+0x8
    float isOnRight; // f0

    // References
    // -> class xVec3 m_UnitAxisX;
}
// signature: zNPCHelper::FindCircleAvoidFrustum(const xVec3 *, float, const xVec3 *, float, xVec3 &, xVec3 &)
// Range: 0x801DAB80 -> 0x801DAE50
void zNPCHelper::FindCircleAvoidFrustum() {
    // Local variables
    float extCircleR; // f0
    class xVec3 toCircle; // r1+0x2C
    float toCircleDist; // f0
    class xVec3 localRNormal; // r1+0x20
    class xVec3 localLNormal; // r1+0x14
    class xVec3 dir; // r1+0x8

    {
        // Range: 0x801DACAC -> 0x801DAD3C
        // Local variables
        float contactDistance; // f0
        float toSqrt; // f6
    }
    {
        // Range: 0x801DAD3C -> 0x801DADC8
        // Local variables
        float contactDistance; // f0
        float toSqrt; // f6
    }

    // References
    // -> class xVec3 m_UnitAxisX;
    // -> class xVec3 m_NegUnitAxisX;
}
