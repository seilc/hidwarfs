/*
    Compile unit: C:\TestBuild\in\Core\x\xFunctionGenerator.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
void FunctionGeneratorEventWrapper(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // size: 0x0, address: 0x4839C0
// total size: 0x34
class xFunctionGeneratorAsset : public xDynAsset {
    // Members
public:
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
    // Members
public:
    class xFunctionGeneratorAsset * asset; // offset 0x10, size 0x4
    unsigned char started; // offset 0x14, size 0x1
    unsigned char currentState; // offset 0x15, size 0x1
    unsigned char override; // offset 0x16, size 0x1
    float currentCycleWidth; // offset 0x18, size 0x4
    float currentPulseWidth; // offset 0x1C, size 0x4
    float currentTime; // offset 0x20, size 0x4
    float lastUpTime; // offset 0x24, size 0x4
    float lastDownTime; // offset 0x28, size 0x4
};
// total size: 0x10
class xBase {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
    class xLinkAsset * link; // offset 0x8, size 0x4
    void (* eventFunc)(class xBase *, class xBase *, unsigned int, float *, class xBase *, unsigned int); // offset 0xC, size 0x4
};
// total size: 0x10
class xDynAsset : public xBaseAsset {
    // Members
public:
    unsigned int type; // offset 0x8, size 0x4
    unsigned short version; // offset 0xC, size 0x2
    unsigned short handle; // offset 0xE, size 0x2
};
// total size: 0x20
class xLinkAsset {
    // Members
public:
    unsigned short srcEvent; // offset 0x0, size 0x2
    unsigned short dstEvent; // offset 0x2, size 0x2
    unsigned int dstAssetID; // offset 0x4, size 0x4
    float param[4]; // offset 0x8, size 0x10
    unsigned int paramWidgetAssetID; // offset 0x18, size 0x4
    unsigned int chkAssetID; // offset 0x1C, size 0x4
};
// total size: 0x8
class xBaseAsset {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned char baseType; // offset 0x4, size 0x1
    unsigned char linkCount; // offset 0x5, size 0x1
    unsigned short baseFlags; // offset 0x6, size 0x2
};

/*
    Compile unit: C:\TestBuild\in\Core\x\xFunctionGenerator.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00483530 -> 0x00483584
*/
// Range: 0x483530 -> 0x483584
void xFunctionGenerator_Init(class xBase & data /* r17 */, class xDynAsset & asset /* r16 */) {
    /* anonymous block */ {
        // Range: 0x483530 -> 0x483584
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFunctionGenerator.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00483590 -> 0x00483670
*/
// Range: 0x483590 -> 0x483670
// this: r2
void xFunctionGenerator::HandleEvent(unsigned int toEvent /* r2 */, float * toParam /* r2 */) {
    /* anonymous block */ {
        // Range: 0x483590 -> 0x483670
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFunctionGenerator.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00483670 -> 0x004839B4
*/
// Range: 0x483670 -> 0x4839B4
// this: r17
void xFunctionGenerator::Update(float dt /* r29+0x40 */) {
    /* anonymous block */ {
        // Range: 0x483670 -> 0x4839B4
        float t; // r29+0x40
        float t; // r29+0x40
        float t; // r29+0x40
        unsigned char firedAny; // r16
        float currentOffWidth; // r20
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xFunctionGenerator.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x004839C0 -> 0x004839D0
*/
// Range: 0x4839C0 -> 0x4839D0
static void FunctionGeneratorEventWrapper(class xBase * from /* r2 */, class xBase * to /* r2 */, unsigned int toEvent /* r2 */, float * toParam /* r2 */, class xBase * toParamWidget /* r2 */, unsigned int toParamWidgetID /* r2 */) {
    /* anonymous block */ {
        // Range: 0x4839C0 -> 0x4839D0
    }
}


