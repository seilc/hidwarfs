/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xFunctionGenerator.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8012AD78 -> 0x8012B1F0
*/
// total size: 0x20
struct xLinkAsset {
    // Members
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x10
struct xBase {
    // Members
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    const struct xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(struct xBase *, struct xBase *, unsigned int, float *, struct xBase *, unsigned int); // offset 0xC, size 0x4
};
// Range: 0x8012AD78 -> 0x8012ADA4
static void FunctionGeneratorEventWrapper(struct xBase * from /* r0 */, struct xBase * to /* r4 */, unsigned int toEvent /* r0 */, const float * toParam /* r0 */, struct xBase * toParamWidget /* r0 */, unsigned int toParamWidgetID /* r0 */) {}

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
// total size: 0x34
struct xFunctionGeneratorAsset : public xDynAsset {
    // Members
    float startCycleWidth; // offset 0x10, size 0x4
    float middleCycleWidth; // offset 0x14, size 0x4
    float endCycleWidth; // offset 0x18, size 0x4
    float startPulseWidth; // offset 0x1C, size 0x4
    float middlePulseWidth; // offset 0x20, size 0x4
    float endPulseWidth; // offset 0x24, size 0x4
    float middleTime; // offset 0x28, size 0x4
    float endTime; // offset 0x2C, size 0x4
    unsigned char middleEnabled; // offset 0x30, size 0x1
    unsigned char endEnabled; // offset 0x31, size 0x1
};
// total size: 0x2C
class xFunctionGenerator : public xBase {
    // Functions
    xFunctionGenerator(const struct xFunctionGeneratorAsset * asset);

    void Update(float dt);

    void HandleEvent(unsigned int toEvent, const float * toParam);

    void Start();

    void Stop();

    void Reset();

    // Members
    const struct xFunctionGeneratorAsset * asset; // offset 0x10, size 0x4
    unsigned char started; // offset 0x14, size 0x1
    unsigned char currentState; // offset 0x15, size 0x1
    unsigned char override; // offset 0x16, size 0x1
    float currentCycleWidth; // offset 0x18, size 0x4
    float currentPulseWidth; // offset 0x1C, size 0x4
    float currentTime; // offset 0x20, size 0x4
    float lastUpTime; // offset 0x24, size 0x4
    float lastDownTime; // offset 0x28, size 0x4
};
// Range: 0x8012ADA4 -> 0x8012ADFC
// this: r30
xFunctionGenerator::xFunctionGenerator(const struct xFunctionGeneratorAsset * asset /* r31 */) {}

// Range: 0x8012ADFC -> 0x8012B08C
// this: r31
void xFunctionGenerator::Update(float dt /* f31 */) {
    // Local variables
    float t; // f2
    float t; // f2
    float t; // f2
    unsigned char firedAny; // r30
    float currentOffWidth; // f31
}

// Range: 0x8012B08C -> 0x8012B154
// this: r3
void xFunctionGenerator::HandleEvent(unsigned int toEvent /* r0 */, const float * toParam /* r0 */) {}

// Range: 0x8012B154 -> 0x8012B194
// this: r0
void xFunctionGenerator::Start() {}

// Range: 0x8012B194 -> 0x8012B1A0
// this: r0
void xFunctionGenerator::Stop() {}

// Range: 0x8012B1A0 -> 0x8012B1AC
// this: r0
void xFunctionGenerator::Reset() {}

// Range: 0x8012B1AC -> 0x8012B1F0
void xFunctionGenerator_Init(struct xBase & data /* r3 */, struct xDynAsset & asset /* r31 */) {}


