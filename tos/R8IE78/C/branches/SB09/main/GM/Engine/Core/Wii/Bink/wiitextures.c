/*
    Compile unit: C:\branches\SB09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\GM\Engine\Core\Wii\Bink\wiitextures.c
*/
static class _GXColorS10 reg0color; // size: 0x8, address: 0x8067F510
static class _GXColor color0; // size: 0x4, address: 0x8067F518
static class _GXColor color1; // size: 0x4, address: 0x8067F51C
static class _GXColor color2; // size: 0x4, address: 0x8067F520
static float indMtx[2][3]; // size: 0x18, address: 0x8067F528
static float id_texmtx[2][4]; // size: 0x20, address: 0x8067F540
static float yswiz_texmtx[2][4]; // size: 0x20, address: 0x8072E180
static float crcbswiz_texmtx[2][4]; // size: 0x20, address: 0x8072E1A0
struct {} __vt__Q25World21xOGAnimationSetEntity; // size: 0x58, address: 0x806B4310
struct {} __vt__10xSubtitles; // size: 0x58, address: 0x806B4368
struct {} __vt__11xScreenFade; // size: 0x58, address: 0x806B43C0
struct {} __vt__9zSaveLoad; // size: 0x58, address: 0x806B4418
struct {} __vt__Q24Util23BlockAllocatorArray<Pv>; // size: 0xC, address: 0x806B4470
struct {} __vt__14xGameInterface; // size: 0x3C, address: 0x806B447C
struct {} __vt__6xTimer; // size: 0x58, address: 0x806B44B8
struct {} __vt__18xFunctionGenerator; // size: 0x58, address: 0x806B4510
struct {} __vt__Q27xRumble16sphericalEmitter; // size: 0x6C, address: 0x806B4568
struct {} __vt__Q27xRumble10boxEmitter; // size: 0x68, address: 0x806B45D8
struct {} __vt__Q27xRumble6effect; // size: 0x68, address: 0x806B4640
struct {} __vt__Q27xRumble11emitterBase; // size: 0x68, address: 0x806B46A8
struct {} __vt__8xCounter; // size: 0x58, address: 0x806B4710
struct {} __vt__10xMovePoint; // size: 0x58, address: 0x806B4768
struct {} __vt__9xLightEnt; // size: 0x58, address: 0x806B47C0
struct {} __vt__18xLightEffectStrobe; // size: 0x64, address: 0x806B4818
struct {} __vt__19xLightEffectFlicker; // size: 0x64, address: 0x806B487C
struct {} __vt__16xLightEffectBase; // size: 0x64, address: 0x806B48E0
struct {} __vt__4xBSP; // size: 0x88, address: 0x806B4948
static struct {} __vt__Q219@unnamed@WAD00_cpp@12xAnimSFXPair; // size: 0xC, address: 0x806B49D0
static struct {} __vt__Q219@unnamed@WAD00_cpp@12xAnimVFXPair; // size: 0xC, address: 0x806B49DC
static struct {} __vt__Q219@unnamed@WAD00_cpp@9xAnimPair; // size: 0xC, address: 0x806B49E8
struct {} __vt__14xCamTransition; // size: 0x58, address: 0x806B49F8
struct {} __vt__9xCamBlend; // size: 0x50, address: 0x806B4A50
struct {} __vt__12xCamTimeBias; // size: 0x24, address: 0x806B4AA0
struct {} __vt__4xCam; // size: 0x50, address: 0x806B4AC8
struct {} __vt__6xGroup; // size: 0x58, address: 0x806B4B18
struct {} __vt__4zEnt; // size: 0x88, address: 0x806B4B70
struct {} __vt__4xEnt; // size: 0x88, address: 0x806B4BF8
struct {} __vt__17xEffectAttachIntf; // size: 0x6C, address: 0x806B4C80
struct {} __vt__20EntCollisionListener; // size: 0x44, address: 0x806B4CEC
struct {} __vt__Q219xHavokPhysicsObject30PhysicsJointRelativeTransforms; // size: 0x14, address: 0x806B4D30
struct {} __vt__19hkpCdPointCollector; // size: 0x14, address: 0x806B4D44
struct {} __vt__12hkBaseObject; // size: 0xC, address: 0x806B4D58
struct {} __vt__Q25World13xOGStubEntity; // size: 0x20, address: 0x806B4D68
struct {} __vt__Q25World15xOGModelUpdater; // size: 0xC, address: 0x806B4D88
struct {} __vt__Q28Graphics12Renderable3D; // size: 0x14, address: 0x806B4D94
struct {} __vt__Q28Graphics8Geometry; // size: 0x18, address: 0x806B4DA8
struct {} __vt__5xBase; // size: 0x24, address: 0x806B4DC0
struct {} __vt__Q25World6Entity; // size: 0x20, address: 0x806B4DE8
struct {} __vt__Q28Graphics14LightPointSpot; // size: 0x14, address: 0x806B4E08
struct {} __vt__Q28Graphics4Node; // size: 0x14, address: 0x806B4E1C
// Range: 0x80050430 -> 0x80050474
void Free_Bink_textures(class BINKTEXTURESET * set_textures /* r31 */) {
}
// signature: swizz_div(unsigned int)
// Range: 0x80050480 -> 0x800504AC
static unsigned int swizz_div() {
    // Local variables
    unsigned int offwidth; // r3
}
// Range: 0x800504B0 -> 0x80050660
static unsigned int make_swizzler(void * data /* r28 */, class _GXTexObj * obj /* r29 */, unsigned int * out_swidth /* r26 */, unsigned int * out_sheight /* r25 */, unsigned int sourcewidth /* r24 */) {
    // Local variables
    unsigned int offwidth; // r0
    unsigned char buffer[2048]; // r1+0x8
}
// Range: 0x80050660 -> 0x800509A4
int Create_Bink_textures(class BINKTEXTURESET * set_textures /* r21 */) {
    // Local variables
    int i; // r25
    unsigned int cRoffset; // r0
    unsigned int cBoffset; // r24
    unsigned int Aoffset; // r0
    unsigned int framesize; // r23
    unsigned int swizzlesize; // r3
    unsigned int YApitch; // r22
    unsigned int cRcBpitch; // r0
    unsigned char * data; // r0
}
// Range: 0x800509B0 -> 0x800513C8
void Draw_Bink_textures(class BINKTEXTURESET * set_textures /* r27 */, unsigned int width /* r28 */, unsigned int height /* r29 */, float x_offset /* f28 */, float y_offset /* f29 */, float x_scale /* f30 */, float y_scale /* f31 */) {
    // Local variables
    int doalpha; // r0
    unsigned char alv; // r30

    {
        // Range: 0x800510A0 -> 0x80051214
        // Local variables
        float crcbswizzletexV; // f0
        float crcbswizzletexU; // f2
        float yaSwizzletexV; // f4
        float yaswizzletexU; // f6
    }
    {
        // Range: 0x80051224 -> 0x80051318
        // Local variables
        short y2; // r8
        short x2; // r9
        short y1; // r8
        short x1; // r7
    }

    // References
    // -> static float id_texmtx[2][4];
    // -> static float crcbswiz_texmtx[2][4];
    // -> static float yswiz_texmtx[2][4];
    // -> static float indMtx[2][3];
    // -> static class _GXColor color2;
    // -> static class _GXColor color1;
    // -> static class _GXColor color0;
    // -> static class _GXColorS10 reg0color;
}
// Range: 0x800513D0 -> 0x800513E8
void Sync_Bink_textures() {
}
// Range: 0x800513F0 -> 0x8005145C
void Wait_for_Bink_textures() {
    // Local variables
    int next; // r4

    {
        // Range: 0x8005142C -> 0x80051440
        // Local variables
        unsigned short v; // r0
    }
}
