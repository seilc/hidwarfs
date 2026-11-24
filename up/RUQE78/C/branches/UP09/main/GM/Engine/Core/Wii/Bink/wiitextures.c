/*
    Compile unit: C:\branches\UP09\main\GM\Engine\WAD\WAD00.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\GM\Engine\Core\Wii\Bink\wiitextures.c
*/
static class _GXColorS10 reg0color; // size: 0x8, address: 0x80775640
static class _GXColor color0; // size: 0x4, address: 0x80775648
static class _GXColor color1; // size: 0x4, address: 0x8077564C
static class _GXColor color2; // size: 0x4, address: 0x80775650
static float indMtx[2][3]; // size: 0x18, address: 0x80775658
static float id_texmtx[2][4]; // size: 0x20, address: 0x80775680
static float yswiz_texmtx[2][4]; // size: 0x20, address: 0x808181A0
static float crcbswiz_texmtx[2][4]; // size: 0x20, address: 0x808181C0
struct {} __vt__Q25World21xOGAnimationSetEntity; // size: 0x58, address: 0x807A24D0
struct {} __vt__10xSubtitles; // size: 0x58, address: 0x807A2528
struct {} __vt__11xScreenFade; // size: 0x58, address: 0x807A2580
struct {} __vt__9zSaveLoad; // size: 0x58, address: 0x807A25D8
struct {} __vt__Q27xRumble16sphericalEmitter; // size: 0x64, address: 0x807A2630
struct {} __vt__Q27xRumble10boxEmitter; // size: 0x60, address: 0x807A2698
struct {} __vt__Q27xRumble6effect; // size: 0x60, address: 0x807A26F8
struct {} __vt__Q24Util23BlockAllocatorArray<Pv>; // size: 0xC, address: 0x807A2758
struct {} __vt__14xGameInterface; // size: 0x38, address: 0x807A2768
struct {} __vt__6xTimer; // size: 0x58, address: 0x807A27A0
struct {} __vt__18xFunctionGenerator; // size: 0x58, address: 0x807A27F8
struct {} __vt__10xMovePoint; // size: 0x58, address: 0x807A2850
struct {} __vt__8xCounter; // size: 0x58, address: 0x807A28A8
struct {} __vt__9xLightEnt; // size: 0x58, address: 0x807A2900
struct {} __vt__18xLightEffectStrobe; // size: 0x64, address: 0x807A2958
struct {} __vt__19xLightEffectFlicker; // size: 0x64, address: 0x807A29BC
struct {} __vt__4xBSP; // size: 0x8C, address: 0x807A2A20
static struct {} __vt__Q219@unnamed@WAD00_cpp@12xAnimSFXPair; // size: 0xC, address: 0x807A2AAC
static struct {} __vt__Q219@unnamed@WAD00_cpp@12xAnimVFXPair; // size: 0xC, address: 0x807A2AB8
struct {} __vt__14xCamTransition; // size: 0x58, address: 0x807A2AC8
struct {} __vt__9xCamBlend; // size: 0x50, address: 0x807A2B20
struct {} __vt__12xCamTimeBias; // size: 0x24, address: 0x807A2B70
struct {} __vt__4xCam; // size: 0x50, address: 0x807A2B98
struct {} __vt__6xGroup; // size: 0x58, address: 0x807A2BE8
struct {} __vt__4xEnt; // size: 0x8C, address: 0x807A2C40
struct {} __vt__17xEffectAttachIntf; // size: 0x6C, address: 0x807A2CCC
struct {} __vt__20EntCollisionListener; // size: 0x40, address: 0x807A2D38
struct {} __vt__Q219xHavokPhysicsObject30PhysicsJointRelativeTransforms; // size: 0x14, address: 0x807A2D78
struct {} __vt__12hkBaseObject; // size: 0xC, address: 0x807A2D8C
struct {} __vt__Q25World13xOGStubEntity; // size: 0x20, address: 0x807A2D98
struct {} __vt__Q25World15xOGModelUpdater; // size: 0xC, address: 0x807A2DB8
struct {} __vt__Q28Graphics12Renderable3D; // size: 0x14, address: 0x807A2DC4
struct {} __vt__5xBase; // size: 0x24, address: 0x807A2DD8
struct {} __vt__Q28Graphics14LightPointSpot; // size: 0x14, address: 0x807A2DFC
// signature: fill_offset_buffer(unsigned char *, unsigned int, unsigned int)
// Range: 0x800978F0 -> 0x80097974
static void fill_offset_buffer() {
    // Local variables
    unsigned int finalwidth; // r9
    int srcx; // r10
    int srcy; // r11
    int x; // r12
    int y; // r31
}
// signature: swizzle_offsets(unsigned char *, const unsigned char *, unsigned int, unsigned int, unsigned int)
// Range: 0x80097980 -> 0x80097A38
static void swizzle_offsets() {
    // Local variables
    unsigned int tilex; // r0
    unsigned int tiley; // r31
    unsigned int pitch; // r30
    unsigned int tilesw; // r29
    unsigned int tilesh; // r28
    unsigned int swizzoffset; // r27

    {
        // Range: 0x8009799C -> 0x80097A20
        {
            // Range: 0x8009799C -> 0x800979E4
            // Local variables
            unsigned int * src; // r0
            unsigned int * dest; // r0
        }
    }
}
// signature: make_swizzler(void *, _GXTexObj *, unsigned int *, unsigned int *, unsigned int)
// Range: 0x80097A40 -> 0x80097B4C
static unsigned int make_swizzler(void * data /* r28 */, class _GXTexObj * obj /* r29 */) {
    // Local variables
    unsigned char buffer[2048]; // r1+0x8
}
// signature: calc_layout(BINKFRAMEBUFFERS *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *, unsigned int *)
// Range: 0x80097B50 -> 0x80097C7C
static void calc_layout() {
    // Local variables
    unsigned int yaheight; // r26
}
// Range: 0x80097C80 -> 0x80097F7C
int Create_Bink_textures(class BINKTEXTURESET * set_textures /* r26 */) {
    // Local variables
    int i; // r27
    unsigned int cRoffset; // r1+0x20
    unsigned int cBoffset; // r1+0x1C
    unsigned int Aoffset; // r1+0x18
    unsigned int framesize; // r1+0x14
    unsigned int swizzlesize; // r1+0x10
    unsigned int YApitch; // r1+0xC
    unsigned int cRcBpitch; // r1+0x8
    unsigned char * data; // r0
}
// Range: 0x80097F80 -> 0x8009896C
void Draw_Bink_textures(class BINKTEXTURESET * set_textures /* r26 */, unsigned int width /* r27 */, unsigned int height /* r28 */, float x_offset /* f28 */, float y_offset /* f29 */, float x_scale /* f30 */, float y_scale /* f31 */) {
    // Local variables
    int doalpha; // r0
    unsigned char alv; // r29

    {
        // Range: 0x80098658 -> 0x800987C4
        // Local variables
        float crcbswizzletexV; // f0
        float crcbswizzletexU; // f2
        float yaSwizzletexV; // f4
        float yaswizzletexU; // f6
    }
    {
        // Range: 0x800987D4 -> 0x800988C4
        // Local variables
        short y2; // r5
        short x2; // r0
        short y1; // r7
        short x1; // r6
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
