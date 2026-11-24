/*
    Compile unit: C:\RT\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\RT\Engine\Core\x\xFFX.cpp
*/
static unsigned int psize; // size: 0x4, address: 0x80755578
static class xFFX * pool; // size: 0x4, address: 0x8075557C
static class xFFX * alist; // size: 0x4, address: 0x80755580
static unsigned int shake_psize; // size: 0x4, address: 0x80755584
static class xFFXShakeState * shake_pool; // size: 0x4, address: 0x80755588
static class xFFXShakeState * shake_alist; // size: 0x4, address: 0x8075558C
static unsigned int rot_match_psize; // size: 0x4, address: 0x80755590
static class xFFXRotMatchState * rot_match_pool; // size: 0x4, address: 0x80755594
static class xFFXRotMatchState * rot_match_alist; // size: 0x4, address: 0x80755598
// signature: xFFXPoolInit(unsigned int)
// Range: 0x8003E3A0 -> 0x8003E5DC
void xFFXPoolInit() {
    {
        // Range: 0x8003E56C -> 0x8003E588
        // Local variables
        unsigned int i; // r6
    }

    // References
    // -> static class xFFX * alist;
    // -> static class xFFX * pool;
    // -> static class xMemWatermark memWatermark;
    // -> static unsigned int psize;
}
// Range: 0x8003E5E0 -> 0x8003E604
class xFFX * xFFXAlloc() {
    // References
    // -> static class xFFX * alist;
}
// signature: xFFXAddEffect(xEnt *, xFFX *)
// Range: 0x8003E610 -> 0x8003E640
short xFFXAddEffect(class xEnt * ent /* r6 */) {
}
// Range: 0x8003E640 -> 0x8003E750
static void xFFXApplyOne(class xFFX * ffx /* r26 */, class xEnt * ent /* r27 */, class xScene * sc /* r28 */, float dt /* f31 */) {
}
// signature: xFFXShakeUpdateEnt(xEnt *, xScene *, float, void *)
// Range: 0x8003E750 -> 0x8003E8D0
void xFFXShakeUpdateEnt(class xEnt * ent /* r30 */, void * fdata /* r31 */) {
    // Local variables
    class xFFXShakeState * ss; // r0
    float tnext; // f31
    class xVec3 dpos; // r1+0x8
    float mag; // f5

    // References
    // -> static class xFFXShakeState * shake_alist;
    // -> static class xFFX * alist;
}
// signature: xFFXShakePoolInit(unsigned int)
// Range: 0x8003E8D0 -> 0x8003EB0C
void xFFXShakePoolInit() {
    {
        // Range: 0x8003EA9C -> 0x8003EAB8
        // Local variables
        unsigned int i; // r6
    }

    // References
    // -> static class xFFXShakeState * shake_alist;
    // -> static class xFFXShakeState * shake_pool;
    // -> static class xMemWatermark memWatermark;
    // -> static unsigned int shake_psize;
}
// Range: 0x8003EB10 -> 0x8003EB34
class xFFXShakeState * xFFXShakeAlloc() {
    // References
    // -> static class xFFXShakeState * shake_alist;
}
// signature: xFFXShakeFree(xFFXShakeState *)
// Range: 0x8003EB40 -> 0x8003EB54
void xFFXShakeFree() {
    // References
    // -> static class xFFXShakeState * shake_alist;
}
// signature: xFFXRotMatchPoolInit(unsigned int)
// Range: 0x8003EB60 -> 0x8003ED9C
void xFFXRotMatchPoolInit() {
    {
        // Range: 0x8003ED2C -> 0x8003ED48
        // Local variables
        unsigned int i; // r6
    }

    // References
    // -> static class xFFXRotMatchState * rot_match_alist;
    // -> static class xFFXRotMatchState * rot_match_pool;
    // -> static class xMemWatermark memWatermark;
    // -> static unsigned int rot_match_psize;
}
