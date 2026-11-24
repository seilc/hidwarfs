/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zLocatorEntity.cpp
*/
static class zQueue locatorsQueue; // size: 0x1008, address: 0x80734C40
// Range: 0x800D19C0 -> 0x800D1A1C
void zLocators_Init() {
    // Local variables
    int count; // r30

    {
        // Range: 0x800D19D8 -> 0x800D1A08
        // Local variables
        int i; // r29

        {
            // Range: 0x800D19D8 -> 0x800D1A08
            // Local variables
            class zLocator * locator; // r1+0x8
        }
    }

    // References
    // -> static class zQueue locatorsQueue;
}
// Range: 0x800D1A70 -> 0x800D1ADC
void zLocators_Update(float dt /* f31 */) {
    // Local variables
    int count; // r30

    {
        // Range: 0x800D1A90 -> 0x800D1AC4
        // Local variables
        int i; // r29

        {
            // Range: 0x800D1A90 -> 0x800D1AC4
            // Local variables
            class zLocator * locator; // r1+0x8
        }
    }

    // References
    // -> static class zQueue locatorsQueue;
}
// Range: 0x800D1AE0 -> 0x800D1B54
void zLocators_SetupClipVFX(unsigned long long clipID /* r27:r26 */, void * entity /* r28 */) {
    // Local variables
    int count; // r30

    {
        // Range: 0x800D1B04 -> 0x800D1B40
        // Local variables
        int i; // r29

        {
            // Range: 0x800D1B04 -> 0x800D1B40
            // Local variables
            class zLocator * locator; // r1+0x8
        }
    }

    // References
    // -> static class zQueue locatorsQueue;
}
// signature: zLocator::zLocator(World::EntityHandleBase *, void *)
// Range: 0x800D1B60 -> 0x800D1D70
void * zLocator::zLocator(class zLocator * this /* r31 */, void * theasset /* r28 */) {
    // Local variables
    char * c; // reg65535

    {
        // Range: 0x800D1C78 -> 0x800D1CB0
        // Local variables
        int i; // r28
    }

    // References
    // -> static class zQueue locatorsQueue;
    // -> struct {} __vt__8zLocator;
}
// Range: 0x800D1D70 -> 0x800D1DD0
class Entity * Sext::Locator::Create(class EntityHandleBase * handle /* r30 */, class Locator * asset /* r31 */) {
}
// Range: 0x800D1DD0 -> 0x800D1DF0
void zLocator::Init() {
}
// Range: 0x800D1DF0 -> 0x800D1EC0
void zLocator::GetBoneMat(class zLocator * this /* r28 */, class ModelInstanceArticle * modelArt /* r31 */, unsigned long index /* r29 */) {
    // Local variables
    class xMat4x3 root_mat; // r1+0x38

    {
        // Range: 0x800D1E4C -> 0x800D1EAC
        // Local variables
        class Matrix43 m; // r1+0x8
    }
}
// signature: zLocator::Update(float)
// Range: 0x800D1EC0 -> 0x800D2F1C
void zLocator::Update(class zLocator * this /* r15 */) {
    // Local variables
    class xMat4x3 matAsset; // r1+0x120
    class Quaternion rotVec; // r1+0x70
    class Vector scaleVec; // r1+0x60
    class Vector transVec; // r1+0x50

    {
        // Range: 0x800D2038 -> 0x800D2E44
        // Local variables
        class Matrix43 transform; // r1+0xF0
    }

    // References
    // -> class Vector4 vec4Zero;
    // -> float g_wiiQuatPermuteLookup[8];
    // -> class xMat4x3 g_I3;
}
// signature: zLocator::SetupVFX(unsigned long long, void *)
// Range: 0x800D2F20 -> 0x800D3058
void zLocator::SetupVFX(class zLocator * this /* r31 */, void * entity /* r30 */) {
    // Local variables
    int locatorNameLen; // r30
    char buf[256]; // r1+0x8
}
// Range: 0x800D3060 -> 0x800D31B8
void zLocator::StartVFX(class zLocator * this /* r31 */) {
    // References
    // -> class xMat4x3 g_I3;
}
// Range: 0x800D31C0 -> 0x800D3208
void zLocator::StopVFX(class zLocator * this /* r31 */) {
}
