/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\x\xFFX.cpp
*/
static unsigned int psize; // size: 0x4, address: 0x807200C8
static class xFFX * pool; // size: 0x4, address: 0x807200CC
static class xFFX * alist; // size: 0x4, address: 0x807200D0
static unsigned int shake_psize; // size: 0x4, address: 0x807200D4
static class xFFXShakeState * shake_pool; // size: 0x4, address: 0x807200D8
static class xFFXShakeState * shake_alist; // size: 0x4, address: 0x807200DC
// signature: xFFXPoolInit(unsigned int)
// Range: 0x8002F7E0 -> 0x8002F890
void xFFXPoolInit() {
    {
        // Range: 0x8002F82C -> 0x8002F868
        // Local variables
        unsigned int i; // r6
    }

    // References
    // -> static class xFFX * alist;
    // -> static class xFFX * pool;
    // -> static unsigned int psize;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8002F890 -> 0x8002F8B4
class xFFX * xFFXAlloc() {
    // References
    // -> static class xFFX * alist;
}
// signature: xFFXAddEffect(xEnt *, xFFX *)
// Range: 0x8002F8C0 -> 0x8002F8F0
short xFFXAddEffect(class xEnt * ent /* r6 */) {
}
// signature: xFFXRemoveEffectByFData(xEnt *, void *)
// Range: 0x8002F8F0 -> 0x8002F94C
unsigned int xFFXRemoveEffectByFData() {
    // Local variables
    class xFFX * * ffxh; // r7

    {
        // Range: 0x8002F8F8 -> 0x8002F934
        // Local variables
        class xFFX * next; // r6
    }

    // References
    // -> static class xFFX * alist;
}
// Range: 0x8002F950 -> 0x8002F9C8
static void xFFXApplyOne(class xFFX * ffx /* r29 */, class xEnt * ent /* r30 */, class xScene * sc /* r31 */, float dt /* f31 */) {
}
// signature: xFFXShakeUpdateEnt(xEnt *, xScene *, float, void *)
// Range: 0x8002F9D0 -> 0x8002FAD8
void xFFXShakeUpdateEnt(class xEnt * ent /* r30 */, void * fdata /* r31 */) {
    // Local variables
    class xFFXShakeState * ss; // reg65535
    float tnext; // f30
    class xVec3 dpos; // r1+0x8
    float mag; // f31

    // References
    // -> static class xFFXShakeState * shake_alist;
}
// signature: xFFXShakePoolInit(unsigned int)
// Range: 0x8002FAE0 -> 0x8002FB90
void xFFXShakePoolInit() {
    {
        // Range: 0x8002FB2C -> 0x8002FB68
        // Local variables
        unsigned int i; // r6
    }

    // References
    // -> static class xFFXShakeState * shake_alist;
    // -> static class xFFXShakeState * shake_pool;
    // -> static unsigned int shake_psize;
    // -> static class xMemWatermark memWatermark;
}
// Range: 0x8002FB90 -> 0x8002FBB4
class xFFXShakeState * xFFXShakeAlloc() {
    // References
    // -> static class xFFXShakeState * shake_alist;
}
// signature: xFFXShakeFree(xFFXShakeState *)
// Range: 0x8002FBC0 -> 0x8002FBD4
void xFFXShakeFree() {
    // References
    // -> static class xFFXShakeState * shake_alist;
}
