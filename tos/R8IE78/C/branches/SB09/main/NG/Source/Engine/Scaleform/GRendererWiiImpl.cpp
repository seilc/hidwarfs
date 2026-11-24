/*
    Compile unit: C:\branches\SB09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\SB09\main\NG\Source\Engine\Scaleform\GRendererWiiImpl.cpp
*/
class BlendModeDesc blendModes[16]; // size: 0x100, address: 0x806CF0A0
bool init; // size: 0x1, address: 0x8077CFF8
unsigned int count; // size: 0x4, address: 0x8077CFFC
unsigned long waiton; // size: 0x4, address: 0x8077D000
unsigned long lastv; // size: 0x4, address: 0x8077D004
unsigned long lastw; // size: 0x4, address: 0x8077D008
class OSThreadQueue waitq; // size: 0x8, address: 0x8077D010
// Range: 0x8020A0F0 -> 0x8020A140
void * GRenderSyncWii_DrawSync::~GRenderSyncWii_DrawSync(class GRenderSyncWii_DrawSync * this /* r31 */) {
    // References
    // -> unsigned int count;
}
// signature: GRenderSyncWii_DrawDone::WaitFence(unsigned long)
// Range: 0x8020A0E0 -> 0x8020A0E4
void GRenderSyncWii_DrawDone::WaitFence() {
}
// Range: 0x8020A060 -> 0x8020A0E0
void * GRendererWiiImpl::~GRendererWiiImpl(class GRendererWiiImpl * this /* r30 */) {
    // References
    // -> struct {} __vt__16GRendererWiiImpl;
}
// Range: 0x80209FE0 -> 0x8020A05C
void GRendererWiiImpl::Clear(class GRendererWiiImpl * this /* r30 */) {
}
// Range: 0x80209FD0 -> 0x80209FD4
void GRendererWiiImpl::ReleaseResources() {
}
// signature: GRendererWiiImpl::MakeNextMiplevel(unsigned int *, unsigned int *, unsigned char *, int)
// Range: 0x801F9530 -> 0x801F98E8
void GRendererWiiImpl::MakeNextMiplevel() {
    // Local variables
    unsigned int newW; // r7
    unsigned int newH; // r8

    {
        // Range: 0x801F9578 -> 0x801F95B4
        // Local variables
        unsigned char * in; // r9
        unsigned char * out; // r5

        {
            // Range: 0x801F9594 -> 0x801F95B4
            // Local variables
            unsigned int i; // r0
        }
    }
    {
        // Range: 0x801F95B8 -> 0x801F961C
        // Local variables
        unsigned char * in; // r24
        unsigned char * out; // r5

        {
            // Range: 0x801F95D4 -> 0x801F961C
            // Local variables
            unsigned int i; // r0

            {
                // Range: 0x801F95D4 -> 0x801F961C
                // Local variables
                int b; // r0
                int g; // r6
            }
        }
    }
    {
        // Range: 0x801F961C -> 0x801F9690
        // Local variables
        unsigned char * in; // r24
        unsigned char * out; // r5

        {
            // Range: 0x801F9634 -> 0x801F9690
            // Local variables
            unsigned int i; // r0

            {
                // Range: 0x801F9634 -> 0x801F9690
                // Local variables
                int a; // r0
                int b; // r6
                int g; // r9
            }
        }
    }
    {
        // Range: 0x801F969C -> 0x801F9710
        // Local variables
        unsigned int j; // r24

        {
            // Range: 0x801F969C -> 0x801F9710
            // Local variables
            unsigned char * in; // r26
            unsigned char * out; // r25

            {
                // Range: 0x801F96CC -> 0x801F9710
                // Local variables
                unsigned int i; // r0
            }
        }
    }
    {
        // Range: 0x801F9720 -> 0x801F97E4
        // Local variables
        unsigned int j; // r6

        {
            // Range: 0x801F9720 -> 0x801F97E4
            // Local variables
            unsigned char * in; // r10
            unsigned char * out; // r9

            {
                // Range: 0x801F9754 -> 0x801F97E4
                // Local variables
                unsigned int i; // r0

                {
                    // Range: 0x801F9754 -> 0x801F97E4
                    // Local variables
                    int b; // r24
                    int g; // r28
                }
            }
        }
    }
    {
        // Range: 0x801F97EC -> 0x801F98D4
        // Local variables
        unsigned int j; // r9

        {
            // Range: 0x801F97EC -> 0x801F98D4
            // Local variables
            unsigned char * in; // r11
            unsigned char * out; // r10

            {
                // Range: 0x801F9820 -> 0x801F98D4
                // Local variables
                unsigned int i; // r0

                {
                    // Range: 0x801F9820 -> 0x801F98D4
                    // Local variables
                    int a; // r6
                    int b; // r24
                    int g; // r24
                }
            }
        }
    }
}
// signature: GRendererWiiImpl::SetTexgenState(GTexture *, const GMatrix2D &, unsigned int, unsigned int)
// Range: 0x802088E0 -> 0x802089E8
void GRendererWiiImpl::SetTexgenState(unsigned int tc /* r30 */) {
    // Local variables
    float InvWidth; // f9
    float InvHeight; // f7
    float TexMatrix[2][4]; // r1+0x8
}
// Range: 0x80208750 -> 0x802088D8
void GRendererWiiImpl::GFxFillStyle::ApplyCxform(unsigned long nTevStage /* r29 */, enum _GXTevColorArg color /* r30 */, enum _GXTevAlphaArg alpha /* r31 */) const {
    // Local variables
    class _GXColor colorm; // r1+0xC
    class _GXColorS10 colora; // r1+0x18
}
// Range: 0x80208AA0 -> 0x80208B78
unsigned long GRendererWiiImpl::GFxFillStyle::ApplyCxform_xPREV(class GFxFillStyle * this /* r30 */, unsigned long nTevStage /* r31 */) const {
}
// signature: GRendererWiiImpl::GFxFillStyle::SetTevStage_FactorA(unsigned long, GRendererWiiImpl *) const
// Range: 0x802089F0 -> 0x80208A98
unsigned long GRendererWiiImpl::GFxFillStyle::SetTevStage_FactorA(unsigned long nTevStage /* r31 */) const {
}
// signature: GRendererWiiImpl::GFxFillStyle::Apply(GRendererWiiImpl *, const GMatrix2D &) const
// Range: 0x80207990 -> 0x802086DC
void GRendererWiiImpl::GFxFillStyle::Apply(class GFxFillStyle * this /* r28 */, class GRendererWiiImpl * pRenderer /* r29 */) const {
    {
        // Range: 0x80207A90 -> 0x802086C4
        // Local variables
        unsigned long nTexGen; // r30
        unsigned long nTevStage; // r0
    }
}
// signature: GRendererWiiImpl::GFxFillStyle::SetColor(GColor)
// Range: 0x802093A0 -> 0x802093B4
void GRendererWiiImpl::GFxFillStyle::SetColor() {
}
// signature: GRendererWiiImpl::GFxFillStyle::SetCxform(const GRenderer::Cxform &)
// Range: 0x80207950 -> 0x80207990
void GRendererWiiImpl::GFxFillStyle::SetCxform() {
}
// signature: GRendererWiiImpl::GFxFillStyle::SetBitmap(const GRenderer::FillTexture *, const GRenderer::Cxform &)
// Range: 0x80209290 -> 0x802092E0
void GRendererWiiImpl::GFxFillStyle::SetBitmap(class GFxFillStyle * this /* r30 */, class Cxform & colorTransform /* r31 */) {
}
// Range: 0x80209F80 -> 0x80209FCC
class GTextureWii * GRendererWiiImpl::CreateTexture(class GRendererWiiImpl * this /* r31 */) {
    // References
    // -> class GMemoryHeap * pGlobalHeap;
}
// Range: 0x80209F50 -> 0x80209F80
class GRenderSyncWii * GRendererWiiImpl::CreateRenderSync_DrawSync() const {
}
// Range: 0x80209F10 -> 0x80209F48
class GRenderSyncWii * GRendererWiiImpl::CreateRenderSync_DrawDone() const {
    // References
    // -> struct {} __vt__23GRenderSyncWii_DrawDone;
}
// signature: GRendererWiiImpl::GetRenderCaps(GRenderer::RenderCaps *)
// Range: 0x80209EB0 -> 0x80209F04
bool GRendererWiiImpl::GetRenderCaps() {
}
// Range: 0x80209770 -> 0x80209EA8
void GRendererWiiImpl::BeginDisplay(class GRendererWiiImpl * this /* r27 */, class GColor & backgroundColor /* r28 */, class GViewport & viewport /* r29 */, float x0 /* f28 */, float x1 /* f31 */, float y0 /* f29 */, float y1 /* f30 */) {
    // Local variables
    float dx; // f31
    float dy; // f30
    float clipX0; // f0
    float clipX1; // f0
    float clipY0; // f0
    float clipY1; // f0
    float idm[3][4]; // r1+0x20

    {
        // Range: 0x802099F8 -> 0x80209A7C
        // Local variables
        float nFar; // f6
        float nNear; // f5
        float oProjection[4][4]; // r1+0x50
    }
    {
        // Range: 0x80209CF4 -> 0x80209D6C
        // Local variables
        int i; // r23
    }
}
// Range: 0x80209700 -> 0x80209770
void GRendererWiiImpl::EndDisplay() {
}
// signature: GRendererWiiImpl::SetMatrix(const GMatrix2D &)
// Range: 0x802096F0 -> 0x802096F8
void GRendererWiiImpl::SetMatrix() {
}
// signature: GRendererWiiImpl::SetUserMatrix(const GMatrix2D &)
// Range: 0x802096E0 -> 0x802096E8
void GRendererWiiImpl::SetUserMatrix() {
}
// signature: GRendererWiiImpl::SetCxform(const GRenderer::Cxform &)
// Range: 0x802096B0 -> 0x802096D8
void GRendererWiiImpl::SetCxform() {
}
// signature: GRendererWiiImpl::ApplyBlendMode(GRenderer::BlendType)
// Range: 0x80207380 -> 0x80207440
void GRendererWiiImpl::ApplyBlendMode(class GRendererWiiImpl * this /* r31 */) {
    // Local variables
    class BlendModeDesc * m; // r6

    // References
    // -> class BlendModeDesc blendModes[16];
}
// Range: 0x80209620 -> 0x802096A4
void GRendererWiiImpl::PushBlendMode(class GRendererWiiImpl * this /* r30 */, enum BlendType mode /* r31 */) {
}
// Range: 0x80209430 -> 0x802094C8
void GRendererWiiImpl::PopBlendMode(class GRendererWiiImpl * this /* r30 */) {
    {
        // Range: 0x80209448 -> 0x802094B4
        // Local variables
        enum BlendType newBlendMode; // r31

        {
            // Range: 0x80209450 -> 0x80209488
            // Local variables
            int i; // r5
        }
    }
}
// Range: 0x80208B80 -> 0x80208C48
void GRendererWiiImpl::ApplyMatrix(class GRendererWiiImpl * this /* r30 */, class GMatrix2D & matIn /* r31 */) {
    // Local variables
    float modelViewMatrix[3][4]; // r1+0x20
    class GMatrix2D m; // r1+0x8
}
// signature: GRendererWiiImpl::ApplyColor(GColor)
// Range: 0x802086E0 -> 0x80208750
void GRendererWiiImpl::ApplyColor() {
    // Local variables
    class _GXColor gc; // r1+0xC
}
// Range: 0x80209420 -> 0x80209430
void GRendererWiiImpl::FillStyleDisable() {
}
// Range: 0x80209410 -> 0x80209420
void GRendererWiiImpl::LineStyleDisable() {
}
// signature: GRendererWiiImpl::FillStyleColor(GColor)
// Range: 0x802093C0 -> 0x8020940C
void GRendererWiiImpl::FillStyleColor(class GRendererWiiImpl * this /* r31 */) {
}
// signature: GRendererWiiImpl::LineStyleColor(GColor)
// Range: 0x80209350 -> 0x8020939C
void GRendererWiiImpl::LineStyleColor(class GRendererWiiImpl * this /* r31 */) {
}
// signature: GRendererWiiImpl::FillStyleBitmap(const GRenderer::FillTexture *)
// Range: 0x80209340 -> 0x80209350
void GRendererWiiImpl::FillStyleBitmap(class GRendererWiiImpl * this /* r5 */) {
}
// signature: GRendererWiiImpl::FillStyleGouraud(GRenderer::GouraudFillType, const GRenderer::FillTexture *, const GRenderer::FillTexture *, const GRenderer::FillTexture *)
// Range: 0x802091F0 -> 0x8020928C
void GRendererWiiImpl::FillStyleGouraud(class GRendererWiiImpl * this /* r29 */, enum GouraudFillType gfill /* r30 */, class FillTexture * ptexture1 /* r31 */) {
}
// signature: GRendererWiiImpl::SetVertexData(const void *, int, GRenderer::VertexFormat, GRenderer::CacheProvider *)
// Range: 0x802091E0 -> 0x802091EC
void GRendererWiiImpl::SetVertexData() {
}
// signature: GRendererWiiImpl::SetIndexData(const void *, int, GRenderer::IndexFormat, GRenderer::CacheProvider *)
// Range: 0x802091D0 -> 0x802091DC
void GRendererWiiImpl::SetIndexData() {
}
// Range: 0x80208DC0 -> 0x802091C4
void GRendererWiiImpl::DrawIndexedTriList(class GRendererWiiImpl * this /* r28 */, int baseVertexIndex /* r30 */, int minVertexIndex /* r25 */, int numVertices /* r24 */, int startIndex /* r27 */, int triangleCount /* r29 */) {
    // Local variables
    unsigned short vertexStride; // r26
    enum _GXVtxFmt vf; // r25
    short * pVerts16; // r31
    unsigned short * pindices16; // r30

    {
        // Range: 0x80208F54 -> 0x80208F90
        // Local variables
        unsigned short i; // r6
    }
    {
        // Range: 0x80208FC0 -> 0x80209018
        // Local variables
        unsigned short i; // r25

        {
            // Range: 0x80208FC0 -> 0x80209018
            // Local variables
            class GColor c; // r1+0x14
        }
    }
    {
        // Range: 0x80209060 -> 0x802090B8
        // Local variables
        unsigned short i; // r25

        {
            // Range: 0x80209060 -> 0x802090B8
            // Local variables
            class GColor c1; // r1+0x10
        }
    }
    {
        // Range: 0x802090F4 -> 0x80209168
        // Local variables
        unsigned short i; // r25

        {
            // Range: 0x802090F4 -> 0x80209168
            // Local variables
            class GColor c1; // r1+0x8
            class GColor c; // r1+0xC
        }
    }
}
// Range: 0x80208CB0 -> 0x80208DC0
void GRendererWiiImpl::DrawLineStrip(class GRendererWiiImpl * this /* r30 */, int baseVertexIndex /* r29 */, int lineCount /* r31 */) {
    // Local variables
    short * pVerts16; // r29

    {
        // Range: 0x80208D3C -> 0x80208D7C
        // Local variables
        unsigned short nIdx; // r7
    }
}
// signature: GRendererWiiImpl::DrawBitmaps(GRenderer::BitmapDesc *, int, int, int, const GTexture *, const GMatrix2D &, GRenderer::CacheProvider *)
// Range: 0x80207630 -> 0x80207944
void GRendererWiiImpl::DrawBitmaps(class GRendererWiiImpl * this /* r27 */, class BitmapDesc * pbitmapList /* r28 */, int startIndex /* r29 */, int count /* r30 */, class GTexture * pti /* r31 */, class GMatrix2D & m /* r25 */) {
    // Local variables
    class GTextureWiiImpl * ptex; // r0

    {
        // Range: 0x80207738 -> 0x80207808
        // Local variables
        int ibitmap; // r26

        {
            // Range: 0x80207738 -> 0x80207808
            // Local variables
            class BitmapDesc & bd; // r25
        }
    }
    {
        // Range: 0x80207834 -> 0x802078B4
        // Local variables
        int ibitmap; // r25

        {
            // Range: 0x80207834 -> 0x802078B4
            // Local variables
            class BitmapDesc & bd; // r26
        }
    }
}
// Range: 0x80207440 -> 0x8020762C
void GRendererWiiImpl::BeginSubmitMask(class GRendererWiiImpl * this /* r30 */, enum SubmitMaskMode maskMode /* r31 */) {
}
// Range: 0x80207300 -> 0x80207374
void GRendererWiiImpl::EndSubmitMask(class GRendererWiiImpl * this /* r31 */) {
}
// Range: 0x80207290 -> 0x802072F8
void GRendererWiiImpl::DisableMask(class GRendererWiiImpl * this /* r31 */) {
}
// signature: GRendererWiiImpl::GetRenderStats(GRenderer::Stats *, bool)
// Range: 0x80207230 -> 0x80207284
void GRendererWiiImpl::GetRenderStats(class GRendererWiiImpl * this /* r30 */, bool resetStats /* r31 */) {
}
// Range: 0x80207140 -> 0x80207230
void GRendererWiiImpl::GetStats(class GRendererWiiImpl * this /* r29 */, class GStatBag * pbag /* r30 */, bool reset /* r31 */) {
}
// signature: GRendererWiiImpl::SetDependentVideoMode(_GXRenderModeObj *, GRenderSyncWii *, int, int)
// Range: 0x80207120 -> 0x80207138
bool GRendererWiiImpl::SetDependentVideoMode() {
}
// Range: 0x802070F0 -> 0x80207118
bool GRendererWiiImpl::ResetVideoMode() {
}
// Range: 0x802070E0 -> 0x802070F0
enum DisplayStatus GRendererWiiImpl::CheckDisplayStatus() const {
}
// Range: 0x802070C0 -> 0x802070E0
void GRendererWiiImpl::BeginFrame() {
}
// Range: 0x80207060 -> 0x802070B8
void GRendererWiiImpl::EndFrame(class GRendererWiiImpl * this /* r31 */) {
}
// signature: GRendererWiiImpl::AddEventHandler(GRenderer::EventHandler *)
// Range: 0x80207050 -> 0x80207058
bool GRendererWiiImpl::AddEventHandler() {
}
// signature: GRendererWiiImpl::RemoveEventHandler(GRenderer::EventHandler *)
// Range: 0x80207040 -> 0x80207048
void GRendererWiiImpl::RemoveEventHandler() {
}
// Range: 0x801F8830 -> 0x801F8894
void * GTextureWiiImpl::GTextureWiiImpl(class GTextureWiiImpl * this /* r30 */, class GRendererWiiImpl * prenderer /* r31 */) {
    // References
    // -> struct {} __vt__15GTextureWiiImpl;
}
// Range: 0x801F88F0 -> 0x801F897C
void * GTextureWiiImpl::~GTextureWiiImpl(class GTextureWiiImpl * this /* r30 */) {
    // References
    // -> struct {} __vt__15GTextureWiiImpl;
}
// Range: 0x801F8980 -> 0x801F8988
class GRenderer * GTextureWiiImpl::GetRenderer() const {
}
// Range: 0x801F8990 -> 0x801F89A0
bool GTextureWiiImpl::IsDataValid() const {
}
// Range: 0x801F89A0 -> 0x801F8A90
void GTextureWiiImpl::RemoveFromRenderer(class GTextureWiiImpl * this /* r31 */) {
}
// Range: 0x801F8A90 -> 0x801F8AF4
void GTextureWiiImpl::ReleaseTexture(class GTextureWiiImpl * this /* r31 */) {
}
// Range: 0x801F8B00 -> 0x801F8BC8
bool GTextureWiiImpl::InitTextureFromTexObj(class GTextureWiiImpl * this /* r31 */, class _GXTexObj * pTex /* r26 */, int width /* r27 */, int height /* r28 */, bool isalpha /* r29 */, class _GXTexObj * pAlphaTex /* r30 */) {
}
// signature: LoadTextureTile(unsigned char *, const unsigned char *, unsigned int, unsigned int, int, int)
// Range: 0x801F8BD0 -> 0x801F8E14
static unsigned char * LoadTextureTile() {
    {
        // Range: 0x801F8BE0 -> 0x801F8CA0
        // Local variables
        int j; // r30

        {
            // Range: 0x801F8BEC -> 0x801F8CA0
            // Local variables
            int i; // r29

            {
                // Range: 0x801F8C00 -> 0x801F8CA0
                // Local variables
                int jt; // r28

                {
                    // Range: 0x801F8C14 -> 0x801F8CA0
                    // Local variables
                    int it; // r27
                }
            }
        }
    }
    {
        // Range: 0x801F8CAC -> 0x801F8D5C
        // Local variables
        int j; // r27

        {
            // Range: 0x801F8CB0 -> 0x801F8D5C
            // Local variables
            int i; // r28

            {
                // Range: 0x801F8CB0 -> 0x801F8D5C
                // Local variables
                int jt; // r29

                {
                    // Range: 0x801F8CB0 -> 0x801F8D5C
                    // Local variables
                    int it; // r26
                }
            }
        }
    }
    {
        // Range: 0x801F8D68 -> 0x801F8E08
        // Local variables
        int j; // r12

        {
            // Range: 0x801F8D74 -> 0x801F8E08
            // Local variables
            int i; // r26

            {
                // Range: 0x801F8D8C -> 0x801F8E08
                // Local variables
                int jt; // r27

                {
                    // Range: 0x801F8DA0 -> 0x801F8E08
                    // Local variables
                    int it; // r28
                }
            }
        }
    }
}
// signature: GetTextureSize(int, int, int)
// Range: 0x801F94D0 -> 0x801F9530
static unsigned int GetTextureSize() {
}
// Range: 0x801F8E20 -> 0x801F94D0
bool GTextureWiiImpl::InitTexture(class GTextureWiiImpl * this /* r23 */, class GImageBase * pim /* r24 */, int targetWidth /* r16 */, int targetHeight /* r15 */) {
    // Local variables
    unsigned int bytesPerPixel; // r30
    unsigned int destBpp; // r21
    enum _GXTexFmt texfmt; // r29
    unsigned int w; // r28
    unsigned int h; // r27
    unsigned long tsize; // r26
    unsigned int wtmp; // r15
    unsigned int htmp; // r16
    unsigned int levels; // r22
    unsigned char * pdest; // r15

    {
        // Range: 0x801F8F74 -> 0x801F8FA4
        // Local variables
        unsigned long msize; // r0
    }
    {
        // Range: 0x801F8FDC -> 0x801F90B4
        // Local variables
        unsigned int mipH; // r1+0x1C
        unsigned int mipW; // r1+0x20
        unsigned char * psrc; // r16

        {
            // Range: 0x801F9060 -> 0x801F90AC
            // Local variables
            int i; // r17
        }
    }
    {
        // Range: 0x801F90B8 -> 0x801F9150
        // Local variables
        unsigned int mipH; // r1+0x14
        unsigned int mipW; // r1+0x18

        {
            // Range: 0x801F9104 -> 0x801F9150
            // Local variables
            int i; // r16
        }
    }
    {
        // Range: 0x801F9150 -> 0x801F9314
        // Local variables
        unsigned int level; // r25

        {
            // Range: 0x801F9158 -> 0x801F9300
            // Local variables
            unsigned char * pdata; // r4
            unsigned int mipPitch; // r1+0x8
            unsigned int mipH; // r1+0xC
            unsigned int mipW; // r1+0x10
        }
    }

    // References
    // -> class GMemoryHeap * pGlobalHeap;
}
// Range: 0x801F98F0 -> 0x801F9944
void GTextureWiiImpl::SetWrapMode(class GTextureWiiImpl * this /* r30 */, enum _GXTexWrapMode m /* r31 */) {
}
// Range: 0x801F9950 -> 0x801F9C20
bool GTextureWiiImpl::InitTexture(class GTextureWiiImpl * this /* r28 */, int w /* r29 */, int h /* r30 */, enum ImageFormat format /* r21 */, int mipmaps /* r31 */, int targetWidth /* r23 */, int targetHeight /* r22 */) {
    // Local variables
    unsigned int destBpp; // r24
    enum _GXTexFmt texfmt; // r25
    unsigned long tsize; // r26
    unsigned int wtmp; // r27
    unsigned int htmp; // r23

    {
        // Range: 0x801F9A24 -> 0x801F9A6C
        // Local variables
        int i; // r22

        {
            // Range: 0x801F9A24 -> 0x801F9A6C
            // Local variables
            unsigned long msize; // r0
        }
    }

    // References
    // -> class GMemoryHeap * pGlobalHeap;
}
// Range: 0x801F9C20 -> 0x801FA14C
void GTextureWiiImpl::Update(class GTextureWiiImpl * this /* r24 */, int level /* r20 */, int n /* r25 */, class UpdateRect * rects /* r26 */, class GImageBase * pim /* r27 */) {
    // Local variables
    unsigned int bpp; // r31
    unsigned char * plevel; // r30
    int w; // r3
    int h; // r4
    int tw; // r29
    int th; // r28

    {
        // Range: 0x801F9CE0 -> 0x801F9D30
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x801F9D44 -> 0x801F9E78
        // Local variables
        int i; // r22

        {
            // Range: 0x801F9D54 -> 0x801F9E78
            // Local variables
            int j; // r21

            {
                // Range: 0x801F9D5C -> 0x801F9E78
                // Local variables
                int k; // r5

                {
                    // Range: 0x801F9D5C -> 0x801F9E78
                    // Local variables
                    int y; // r8
                    int x; // r10
                }
            }
        }
    }
    {
        // Range: 0x801F9E90 -> 0x801F9F9C
        // Local variables
        int i; // r21

        {
            // Range: 0x801F9EA0 -> 0x801F9F9C
            // Local variables
            int j; // r22

            {
                // Range: 0x801F9EA8 -> 0x801F9F9C
                // Local variables
                int k; // r5

                {
                    // Range: 0x801F9EA8 -> 0x801F9F9C
                    // Local variables
                    int y; // r10
                    int x; // r9
                }
            }
        }
    }
    {
        // Range: 0x801F9FA8 -> 0x801FA05C
        // Local variables
        int i; // r21

        {
            // Range: 0x801F9FB8 -> 0x801FA05C
            // Local variables
            int j; // r22

            {
                // Range: 0x801F9FC0 -> 0x801FA05C
                // Local variables
                int k; // r3

                {
                    // Range: 0x801F9FC0 -> 0x801FA05C
                    // Local variables
                    int y; // r7
                    int x; // r10
                }
            }
        }
    }
    {
        // Range: 0x801FA068 -> 0x801FA118
        // Local variables
        int i; // r21

        {
            // Range: 0x801FA078 -> 0x801FA118
            // Local variables
            int j; // r22

            {
                // Range: 0x801FA080 -> 0x801FA118
                // Local variables
                int k; // r3

                {
                    // Range: 0x801FA080 -> 0x801FA118
                    // Local variables
                    int y; // r11
                    int x; // r10
                }
            }
        }
    }
}
// signature: GTextureWiiImpl::InitMappableTexture(int, int, GImageBase::ImageFormat, int, int, int)
// Range: 0x801FA160 -> 0x801FA170
bool GTextureWiiImpl::InitMappableTexture() {
}
// signature: GTextureWiiImpl::Map(int, int, GTexture::MapRect *, int)
// Range: 0x801FA170 -> 0x801FA288
int GTextureWiiImpl::Map(class GTextureWiiImpl * this /* r29 */, int level /* r30 */, class MapRect * maps /* r31 */) {
    // Local variables
    unsigned char * plevel; // r4
    int bpp; // r0
    int w; // r5
    int h; // r6
    int tw; // r7
    int th; // r0

    {
        // Range: 0x801FA20C -> 0x801FA25C
        // Local variables
        int i; // r0
    }
}
// signature: GTextureWiiImpl::Unmap(int, int, GTexture::MapRect *, int)
// Range: 0x801FA290 -> 0x801FA2C8
bool GTextureWiiImpl::Unmap() {
}
// signature: SoftwareResample(int, int, int, int, unsigned char *, int, int)
// Range: 0x801FA2D0 -> 0x801FA3FC
unsigned char * SoftwareResample(int srcWidth /* r25 */, int srcHeight /* r26 */, int srcPitch /* r27 */, unsigned char * psrcData /* r28 */, int dstWidth /* r29 */, int dstHeight /* r30 */) {
    // Local variables
    unsigned char * rescaled; // r31

    // References
    // -> class GMemoryHeap * pGlobalHeap;
}
// Range: 0x801FA400 -> 0x801FA480
void * GRenderSyncWii_DrawSync::GRenderSyncWii_DrawSync(class GRenderSyncWii_DrawSync * this /* r30 */) {
    // References
    // -> unsigned int count;
    // -> class OSThreadQueue waitq;
    // -> unsigned long lastw;
    // -> bool init;
    // -> struct {} __vt__23GRenderSyncWii_DrawSync;
}
// Range: 0x801FA480 -> 0x801FA4A8
void GRenderSyncWii_DrawSync::BeginFrame() {
    // References
    // -> unsigned long lastw;
}
// signature: GRenderSyncWii_DrawSync::DrawSyncHandler(unsigned short)
// Range: 0x801FA4B0 -> 0x801FA510
void GRenderSyncWii_DrawSync::DrawSyncHandler() {
    // References
    // -> class OSThreadQueue waitq;
    // -> unsigned long waiton;
    // -> unsigned long lastw;
    // -> unsigned long lastv;
}
// Range: 0x801FA510 -> 0x801FA550
unsigned long GRenderSyncWii_DrawSync::SetFence(class GRenderSyncWii_DrawSync * this /* r31 */) {
}
// Range: 0x801FA550 -> 0x801FA604
void GRenderSyncWii_DrawSync::WaitFence(unsigned long f /* r27 */) {
    {
        // Range: 0x801FA570 -> 0x801FA5F0
        // Local variables
        bool v; // r28
    }

    // References
    // -> class OSThreadQueue waitq;
    // -> unsigned long waiton;
    // -> unsigned long lastv;
    // -> unsigned long lastw;
}
// Range: 0x801FA610 -> 0x801FA750
class GRendererWii * GRendererWii::CreateRenderer() {
    // References
    // -> struct {} __vt__16GRendererWiiImpl;
    // -> class GMemoryHeap * pGlobalHeap;
}
