/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Game\zLightWeight.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80139184 -> 0x801394EC
*/
int systemCount; // size: 0x4, address: 0x80C081F0
class zLightweightSystemBase * system[10]; // size: 0x28, address: 0x80B93A10
// total size: 0x1
class zLightweightManager {
    // Static members
    static class zLightweightSystemBase * system[10]; // size: 0x28
    static int systemCount; // size: 0x4
};
// Range: 0x80139184 -> 0x80139190
void zLightweightManager::Setup() {
    // References
    // -> int systemCount;
}

// Range: 0x80139190 -> 0x801391F4
void zLightweightManager::Exit() {
    // Local variables
    int i; // r30

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
// Range: 0x801391F4 -> 0x80139258
void zLightweightManager::Reset() {
    // Local variables
    int i; // r30

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x80139258 -> 0x801392CC
void zLightweightManager::Update(float dt /* f31 */) {
    // Local variables
    int i; // r30

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x801392CC -> 0x80139330
void zLightweightManager::Render() {
    // Local variables
    int i; // r30

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x80139330 -> 0x80139394
void zLightweightManager::PostRender2d() {
    // Local variables
    int i; // r30

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x80139394 -> 0x801393F8
void zLightweightManager::PostRender3d() {
    // Local variables
    int i; // r30

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

// Range: 0x801393F8 -> 0x8013945C
void zLightweightManager::SceneSetup() {
    // Local variables
    int i; // r30

    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
}

static char __FUNCTION__[20]; // size: 0x14, address: 0x80C00B90
// Range: 0x8013945C -> 0x801394EC
void zLightweightManager::RegisterLightweight(class zLightweightSystemBase * newSystem /* r31 */) {
    // References
    // -> int systemCount;
    // -> class zLightweightSystemBase * system[10];
    // -> static char __FUNCTION__[20];
}


