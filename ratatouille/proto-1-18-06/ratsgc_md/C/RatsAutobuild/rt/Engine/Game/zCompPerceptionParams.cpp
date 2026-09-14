/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zCompPerceptionParams.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x801C9110 -> 0x801C9204
*/
// total size: 0x8
struct xBaseAsset {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};
// total size: 0x10
struct xDynAsset : public xBaseAsset {
    // Members
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x1
class zCompParameters {};
// total size: 0x78
class zCompPerceptionParams : public xDynAsset, public zCompParameters {
    // Functions
    zCompPerceptionParams();

    // Static members
    static class zCompPerceptionParams sNPCInstaKillDefault; // size: 0x78
    static class zCompPerceptionParams sNPCGenericDefault; // size: 0x78
    static const class zCompPerceptionParams * spNPCInstaKillDefault; // size: 0x4
    static const class zCompPerceptionParams * spNPCGenericDefault; // size: 0x4

    // Members
public:
    unsigned int perceivedEntity; // offset 0x10, size 0x4
    unsigned int setToTemplate; // offset 0x14, size 0x4
    float detectedUpdateFrequency; // offset 0x18, size 0x4
    float lostUpdateFrequency; // offset 0x1C, size 0x4
    float perceptionMemoryTime; // offset 0x20, size 0x4
    unsigned int flags; // offset 0x24, size 0x4
    float sphereR; // offset 0x28, size 0x4
    float sphereRatio; // offset 0x2C, size 0x4
    float soundSphereR; // offset 0x30, size 0x4
    float soundSphereRatio; // offset 0x34, size 0x4
    float soundSphereMinNoise; // offset 0x38, size 0x4
    float cylinderR; // offset 0x3C, size 0x4
    float cylinderHUp; // offset 0x40, size 0x4
    float cylinderHDown; // offset 0x44, size 0x4
    float cylinderRatio; // offset 0x48, size 0x4
    float coneTheta; // offset 0x4C, size 0x4
    float coneD; // offset 0x50, size 0x4
    float coneRatio; // offset 0x54, size 0x4
    float triTheta; // offset 0x58, size 0x4
    float triD; // offset 0x5C, size 0x4
    float triHUp; // offset 0x60, size 0x4
    float triHDown; // offset 0x64, size 0x4
    float triRatio; // offset 0x68, size 0x4
    float losConeTheta; // offset 0x6C, size 0x4
    unsigned int detectionAction; // offset 0x70, size 0x4
    unsigned int lostAction; // offset 0x74, size 0x4
};
class zCompPerceptionParams sNPCGenericDefault; // size: 0x78, address: 0x80397A68
class zCompPerceptionParams sNPCInstaKillDefault; // size: 0x78, address: 0x80397AE0
const class zCompPerceptionParams * spNPCGenericDefault; // size: 0x4, address: 0x803C0890
// Range: 0x801C9110 -> 0x801C9128
void zCompPerceptionParams::InitializeDefaults() {
    // References
    // -> class zCompPerceptionParams sNPCInstaKillDefault;
}

// Range: 0x801C9128 -> 0x801C91AC
// this: r0
zCompPerceptionParams::zCompPerceptionParams() {}

// Range: 0x801C91AC -> 0x801C91D0
class zCompPerceptionParams * zCompPerceptionParams::GetParamsFromAsset(unsigned int aid /* r0 */) {
    // Local variables
    unsigned int assetSize; // r1+0x8
    class zCompPerceptionParams * params; // r0
}

