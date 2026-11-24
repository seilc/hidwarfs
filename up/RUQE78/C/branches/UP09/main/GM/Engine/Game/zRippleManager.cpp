/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD03.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Game\zRippleManager.cpp
*/
static class zRippleManager Instance; // size: 0xC88, address: 0x80825678
// Range: 0x802276A0 -> 0x80227850
class zRippleManager & zRippleManager::GetInstance() {
    // References
    // -> static class zRippleManager Instance;
}
// Range: 0x80227850 -> 0x802278D0
void * zRippleManager::~zRippleManager(class zRippleManager * this /* r27 */) {
}
// signature: zRippleManager::CreateRipple(xVec3, xBase *)
// Range: 0x802278D0 -> 0x80227A4C
void zRippleManager::CreateRipple() {
    // Local variables
    bool foundEmpty; // r9
    bool foundSame; // r10
    float longestTime; // f5
    int slotOldest; // r11
    int slotFound; // r12

    {
        // Range: 0x802278D4 -> 0x802279C0
        // Local variables
        int i; // r6

        {
            // Range: 0x802278D4 -> 0x802279A8
            // Local variables
            class xVec3 dis; // r1+0x14
        }
    }
}
// Range: 0x80227A50 -> 0x80227BA0
void zRippleManager::Update(class zRippleManager * this /* r25 */, float dt /* f30 */) {
    {
        // Range: 0x80227A74 -> 0x80227B64
        // Local variables
        int i; // r26
    }

    // References
    // -> class xMat4x3 g_I3;
}
// signature: zRippleManager::GetNearestEntRipple(const xVec3 &)
// Range: 0x80227BA0 -> 0x80227DB4
class RippleTableElement * zRippleManager::GetNearestEntRipple() {
    // Local variables
    float closest; // f4
    int idxFound; // r7

    {
        // Range: 0x80227BB8 -> 0x80227C58
        // Local variables
        int i; // r8

        {
            // Range: 0x80227BC0 -> 0x80227C58
            // Local variables
            float dist2; // f0
            class xVec3 disV; // r1+0x14
        }
    }
}
// Range: 0x80227DC0 -> 0x8022803C
class RippleTableElement * zRippleManager::GetHighestPriorityPlayerRipple(class zRippleManager * this /* r31 */, class xVec3 & myPos /* r26 */) {
    // Local variables
    float closest; // f31
    int idxFound; // r29
    bool humanPlayerFound; // r28

    {
        // Range: 0x80227DF8 -> 0x80227EC0
        // Local variables
        int i; // r27

        {
            // Range: 0x80227DFC -> 0x80227EC0
            // Local variables
            float dist2; // f0
            class xVec3 disV; // r1+0x14
            bool human; // r0
        }
    }
}
