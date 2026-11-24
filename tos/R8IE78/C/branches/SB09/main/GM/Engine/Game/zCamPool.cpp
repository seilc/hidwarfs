/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD01.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Game\zCamPool.cpp
*/
class zCamPoolBase * gCamPools[8]; // size: 0x20, address: 0x80732A28
// Range: 0x800966D0 -> 0x8009670C
void * zCamPoolBase::zCamPoolBase() {
    // Local variables
    int i; // r0

    // References
    // -> class zCamPoolBase * gCamPools[8];
}
// Range: 0x80096710 -> 0x80096784
void * zCamPoolBase::~zCamPoolBase(class zCamPoolBase * this /* r31 */) {
    // Local variables
    int i; // r7

    // References
    // -> class zCamPoolBase * gCamPools[8];
}
// Range: 0x80096790 -> 0x800967E4
void zCamPoolBase::StopAllPools() {
    // Local variables
    int i; // r29

    // References
    // -> class zCamPoolBase * gCamPools[8];
}
// Range: 0x800967F0 -> 0x80096854
void zCamPoolBase::SceneExit(class zCamPoolBase * this /* r29 */) {
    {
        // Range: 0x80096804 -> 0x80096838
        // Local variables
        int i; // r30
    }
}
// signature: zCamPoolBase::AddCamera(xCam *, const char *)
// Range: 0x80096860 -> 0x800968C8
void zCamPoolBase::AddCamera(class zCamPoolBase * this /* r30 */, class xCam * newCam /* r31 */) {
}
// signature: zCamPoolBase::GetCamera(unsigned long long)
// Range: 0x800968D0 -> 0x80096924
class xCam * zCamPoolBase::GetCamera() {
    {
        // Range: 0x800968D4 -> 0x8009691C
        // Local variables
        int i; // r0
    }
}
// Range: 0x80096930 -> 0x800969D8
class xCam * zCamPoolBase::GetNextCamera(class zCamPoolBase * this /* r30 */) {
    // Local variables
    class xCam * cam; // r31

    {
        // Range: 0x80096938 -> 0x80096998
        // Local variables
        int i; // r7

        {
            // Range: 0x80096938 -> 0x80096998
            // Local variables
            class xCam * cam; // r5
        }
    }
}
// Range: 0x800969E0 -> 0x80096A48
void zCamPoolBase::StopAll(class zCamPoolBase * this /* r29 */) {
    {
        // Range: 0x800969F4 -> 0x80096A34
        // Local variables
        int i; // r30
    }
}
