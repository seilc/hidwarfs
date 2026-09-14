/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zLightWeight.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8017EE18 -> 0x8017F168
*/
int systemCount; // size: 0x4, address: 0x80D6A588
class zLightweightSystemBase * system[10]; // size: 0x28, address: 0x80CF51C0
// total size: 0x1
class zLightweightManager {
    // Static members
    static class zLightweightSystemBase * system[10]; // size: 0x28
    static int systemCount; // size: 0x4
};
// Range: 0x8017EE18 -> 0x8017EE24
void zLightweightManager::Setup() {
    // References
    // -> int systemCount;
}

// Range: 0x8017EE24 -> 0x8017EE84
void zLightweightManager::Exit() {
    // Local variables
    int i; // r31

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// total size: 0x4
class zLightweightSystemBase {
    // Members
public:
    void * __vptr$; // offset 0x0, size 0x4
};
// Range: 0x8017EE84 -> 0x8017EEE4
void zLightweightManager::Reset() {
    // Local variables
    int i; // r31

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x8017EEE4 -> 0x8017EF4C
void zLightweightManager::Update(float dt /* r1+0x8 */) {
    // Local variables
    int i; // r31

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x8017EF4C -> 0x8017EFAC
void zLightweightManager::Render() {
    // Local variables
    int i; // r31

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x8017EFAC -> 0x8017F00C
void zLightweightManager::PostRender2d() {
    // Local variables
    int i; // r31

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x8017F00C -> 0x8017F06C
void zLightweightManager::PostRender3d() {
    // Local variables
    int i; // r31

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x8017F06C -> 0x8017F0CC
void zLightweightManager::SceneSetup() {
    // Local variables
    int i; // r31

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80D62FD0
// Range: 0x8017F0CC -> 0x8017F168
void zLightweightManager::RegisterLightweight(class zLightweightSystemBase * newSystem /* r1+0x8 */) {
    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
    // -> static char __FUNCTION__[20];
}


