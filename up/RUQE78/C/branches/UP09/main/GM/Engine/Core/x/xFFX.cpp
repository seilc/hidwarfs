/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\x\xFFX.cpp
*/
static unsigned int psize; // size: 0x4, address: 0x808083A0
static class xFFX * pool; // size: 0x4, address: 0x808083A4
static class xFFX * alist; // size: 0x4, address: 0x808083A8
static unsigned int shake_psize; // size: 0x4, address: 0x808083AC
static class xFFXShakeState * shake_pool; // size: 0x4, address: 0x808083B0
static class xFFXShakeState * shake_alist; // size: 0x4, address: 0x808083B4
// signature: xFFXPoolInit(unsigned int)
// Range: 0x8005AE90 -> 0x8005B0CC
void xFFXPoolInit() {
    {
        // Range: 0x8005B05C -> 0x8005B078
        // Local variables
        unsigned int i; // r6
    }

    // References
    // -> static class xFFX * alist;
    // -> static class xFFX * pool;
    // -> static class xMemWatermark memWatermark;
    // -> static unsigned int psize;
}
// Range: 0x8005B0D0 -> 0x8005B0F4
class xFFX * xFFXAlloc() {
    // References
    // -> static class xFFX * alist;
}
// signature: xFFXAddEffect(xEnt *, xFFX *)
// Range: 0x8005B100 -> 0x8005B130
short xFFXAddEffect(class xEnt * ent /* r6 */) {
}
// Range: 0x8005B130 -> 0x8005B240
static void xFFXApplyOne(class xFFX * ffx /* r26 */, class xEnt * ent /* r27 */, class xScene * sc /* r28 */, float dt /* f31 */) {
}
// signature: xFFXShakeUpdateEnt(xEnt *, xScene *, float, void *)
// Range: 0x8005B240 -> 0x8005B3C0
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
// Range: 0x8005B3C0 -> 0x8005B5FC
void xFFXShakePoolInit() {
    {
        // Range: 0x8005B58C -> 0x8005B5A8
        // Local variables
        unsigned int i; // r6
    }

    // References
    // -> static class xFFXShakeState * shake_alist;
    // -> static class xFFXShakeState * shake_pool;
    // -> static class xMemWatermark memWatermark;
    // -> static unsigned int shake_psize;
}
// Range: 0x8005B600 -> 0x8005B624
class xFFXShakeState * xFFXShakeAlloc() {
    // References
    // -> static class xFFXShakeState * shake_alist;
}
// signature: xFFXShakeFree(xFFXShakeState *)
// Range: 0x8005B630 -> 0x8005B644
void xFFXShakeFree() {
    // References
    // -> static class xFFXShakeState * shake_alist;
}
