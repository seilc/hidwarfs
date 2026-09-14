/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Game\zLightWeight.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x800BAFE4 -> 0x800BB2A0
*/
int systemCount; // size: 0x4, address: 0x803C2038
class zLightweightSystemBase * system[10]; // size: 0x28, address: 0x803C203C
// total size: 0x1
class zLightweightManager {
    // Static members
    static class zLightweightSystemBase * system[10]; // size: 0x28
    static int systemCount; // size: 0x4
};
// Range: 0x800BAFE4 -> 0x800BAFF0
void zLightweightManager::Setup() {
    // References
    // -> int systemCount;
}

// Range: 0x800BAFF0 -> 0x800BB04C
void zLightweightManager::Exit() {
    // Local variables
    int i; // r29

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
// Range: 0x800BB04C -> 0x800BB0A8
void zLightweightManager::Reset() {
    // Local variables
    int i; // r29

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x800BB0A8 -> 0x800BB114
void zLightweightManager::Update(float dt /* f31 */) {
    // Local variables
    int i; // r29

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x800BB114 -> 0x800BB170
void zLightweightManager::Render() {
    // Local variables
    int i; // r29

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x800BB170 -> 0x800BB1CC
void zLightweightManager::PostRender2d() {
    // Local variables
    int i; // r29

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x800BB1CC -> 0x800BB228
void zLightweightManager::PostRender3d() {
    // Local variables
    int i; // r29

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x800BB228 -> 0x800BB284
void zLightweightManager::SceneSetup() {
    // Local variables
    int i; // r29

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x800BB284 -> 0x800BB2A0
void zLightweightManager::RegisterLightweight(class zLightweightSystemBase * newSystem /* r0 */) {
    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}


