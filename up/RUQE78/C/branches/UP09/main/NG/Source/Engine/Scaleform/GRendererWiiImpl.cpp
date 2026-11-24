/*
    Compile unit: C:\branches\UP09\main\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\UP09\main\NG\Source\Engine\Scaleform\GRendererWiiImpl.cpp
*/
class BlendModeDesc blendModes[16]; // size: 0x100, address: 0x807C1400
bool init; // size: 0x1, address: 0x8084DED0
unsigned int count; // size: 0x4, address: 0x8084DED4
unsigned long waiton; // size: 0x4, address: 0x8084DED8
unsigned long lastv; // size: 0x4, address: 0x8084DEDC
unsigned long lastw; // size: 0x4, address: 0x8084DEE0
class OSThreadQueue waitq; // size: 0x8, address: 0x8084DEE8
// Range: 0x8036FB44 -> 0x8036FFD0
void * GRenderSyncWii_DrawSync::~GRenderSyncWii_DrawSync(class GRenderSyncWii_DrawSync * this /* r30 */) {
    // References
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> int havokAllocs[2][5];
    // -> int gInHavokDeinit;
    // -> unsigned int count;
}
// signature: GRenderSyncWii_DrawDone::WaitFence(unsigned long)
// Range: 0x8036FB38 -> 0x8036FB3C
void GRenderSyncWii_DrawDone::WaitFence() {
}
// Range: 0x8036F784 -> 0x8036FB38
void * GRendererWiiImpl::~GRendererWiiImpl(class GRendererWiiImpl * this /* r29 */) {
    // References
    // -> struct {} __vt__16GRendererWiiImpl;
}
// Range: 0x8036F504 -> 0x8036F784
void GRendererWiiImpl::ReleaseResources(class GRendererWiiImpl * this /* r30 */) {
}
// signature: GRendererWiiImpl::GFxFillStyle::Apply(GRendererWiiImpl *, const GMatrix2D &) const
// Range: 0x8036B518 -> 0x8036D0DC
void GRendererWiiImpl::GFxFillStyle::Apply(class GFxFillStyle * this /* r28 */, class GRendererWiiImpl * pRenderer /* r29 */) const {
    {
        // Range: 0x8036B624 -> 0x8036D0C4
        // Local variables
        unsigned long nTexGen; // r30
        unsigned long nTevStage; // r31
    }
}
// signature: GRendererWiiImpl::GFxFillStyle::SetBitmapText(GTexture *, const GRenderer::Cxform &)
// Range: 0x8036B464 -> 0x8036B518
void GRendererWiiImpl::GFxFillStyle::SetBitmapText(class GFxFillStyle * this /* r30 */, class Cxform & colorTransform /* r31 */) {
}
// Range: 0x8036F460 -> 0x8036F504
class GTextureWii * GRendererWiiImpl::CreateTexture(class GRendererWiiImpl * this /* r31 */) {
    // References
    // -> struct {} __vt__15GTextureWiiImpl;
    // -> struct {} __vt__8GTexture;
}
// Range: 0x8036EEF4 -> 0x8036F460
class GRenderSyncWii * GRendererWiiImpl::CreateRenderSync_DrawSync() const {
    // References
    // -> unsigned int count;
    // -> class OSThreadQueue waitq;
    // -> unsigned long lastw;
    // -> bool init;
    // -> struct {} __vt__23GRenderSyncWii_DrawSync;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> bool IsHeapInitialized;
}
// Range: 0x8036E8F8 -> 0x8036EEF4
class GRenderSyncWii * GRendererWiiImpl::CreateRenderSync_DrawDone() const {
    // References
    // -> struct {} __vt__23GRenderSyncWii_DrawDone;
    // -> class MEMiHeapHead * physicalMEM2Handle;
    // -> class MEMiHeapHead * physicalMEM1Handle;
    // -> static class MallocDebugWrapper globalMallocAllocatorMain;
    // -> static class PoolManager globalHeapBlockAllocatorMain;
    // -> bool IsHeapInitialized;
}
// signature: GRendererWiiImpl::GetRenderCaps(GRenderer::RenderCaps *)
// Range: 0x8036E8A4 -> 0x8036E8F8
bool GRendererWiiImpl::GetRenderCaps() {
}
// Range: 0x8036E01C -> 0x8036E8A4
void GRendererWiiImpl::BeginDisplay(class GRendererWiiImpl * this /* r27 */, class GColor & backgroundColor /* r28 */, class GViewport & viewport /* r29 */, float x0 /* f28 */, float x1 /* f31 */, float y0 /* f29 */, float y1 /* f30 */) {
    // Local variables
    float dx; // f31
    float dy; // f30
    float clipX0; // f0
    float clipX1; // f0
    float clipY0; // f0
    float clipY1; // f0
    float idm[3][4]; // r1+0x28

    {
        // Range: 0x8036E2A4 -> 0x8036E328
        // Local variables
        float nFar; // f6
        float nNear; // f5
        float oProjection[4][4]; // r1+0x58
    }
    {
        // Range: 0x8036E6A8 -> 0x8036E714
        // Local variables
        int i; // r23
    }

    // References
    // -> class BlendModeDesc blendModes[16];
}
// Range: 0x8036DFAC -> 0x8036E01C
void GRendererWiiImpl::EndDisplay() {
}
// signature: GRendererWiiImpl::SetMatrix(const GMatrix2D &)
// Range: 0x8036DF78 -> 0x8036DFAC
void GRendererWiiImpl::SetMatrix() {
}
// signature: GRendererWiiImpl::SetUserMatrix(const GMatrix2D &)
// Range: 0x8036DF44 -> 0x8036DF78
void GRendererWiiImpl::SetUserMatrix() {
}
// signature: GRendererWiiImpl::SetCxform(const GRenderer::Cxform &)
// Range: 0x8036DF00 -> 0x8036DF44
void GRendererWiiImpl::SetCxform() {
}
// Range: 0x8036DCE8 -> 0x8036DF00
void GRendererWiiImpl::PushBlendMode(class GRendererWiiImpl * this /* r30 */, enum BlendType mode /* r31 */) {
    // References
    // -> class BlendModeDesc blendModes[16];
}
// Range: 0x8036DAB4 -> 0x8036DCE8
void GRendererWiiImpl::PopBlendMode(class GRendererWiiImpl * this /* r30 */) {
    {
        // Range: 0x8036DAD4 -> 0x8036DCCC
        // Local variables
        enum BlendType newBlendMode; // r31

        {
            // Range: 0x8036DADC -> 0x8036DB0C
            // Local variables
            int i; // r5
        }
    }

    // References
    // -> class BlendModeDesc blendModes[16];
}
// Range: 0x8036D0DC -> 0x8036D1C8
void GRendererWiiImpl::ApplyMatrix(class GRendererWiiImpl * this /* r30 */, class GMatrix2D & matIn /* r31 */) {
    // Local variables
    float modelViewMatrix[3][4]; // r1+0x20
    class GMatrix2D m; // r1+0x8
}
// Range: 0x8036DAA4 -> 0x8036DAB4
void GRendererWiiImpl::FillStyleDisable() {
}
// Range: 0x8036DA94 -> 0x8036DAA4
void GRendererWiiImpl::LineStyleDisable() {
}
// signature: GRendererWiiImpl::FillStyleColor(GColor)
// Range: 0x8036DA44 -> 0x8036DA94
void GRendererWiiImpl::FillStyleColor(class GRendererWiiImpl * this /* r31 */) {
}
// signature: GRendererWiiImpl::LineStyleColor(GColor)
// Range: 0x8036D9F4 -> 0x8036DA44
void GRendererWiiImpl::LineStyleColor(class GRendererWiiImpl * this /* r31 */) {
}
// signature: GRendererWiiImpl::FillStyleBitmap(const GRenderer::FillTexture *)
// Range: 0x8036D928 -> 0x8036D9F4
void GRendererWiiImpl::FillStyleBitmap() {
}
// signature: GRendererWiiImpl::FillStyleGouraud(GRenderer::GouraudFillType, const GRenderer::FillTexture *, const GRenderer::FillTexture *, const GRenderer::FillTexture *)
// Range: 0x8036D778 -> 0x8036D928
void GRendererWiiImpl::FillStyleGouraud() {
}
// signature: GRendererWiiImpl::SetVertexData(const void *, int, GRenderer::VertexFormat, GRenderer::CacheProvider *)
// Range: 0x8036D76C -> 0x8036D778
void GRendererWiiImpl::SetVertexData() {
}
// signature: GRendererWiiImpl::SetIndexData(const void *, int, GRenderer::IndexFormat, GRenderer::CacheProvider *)
// Range: 0x8036D760 -> 0x8036D76C
void GRendererWiiImpl::SetIndexData() {
}
// signature: GRendererWiiImpl::ReleaseCachedData(GRenderer::CachedData *, GRenderer::CachedDataType)
// Range: 0x8036D75C -> 0x8036D760
void GRendererWiiImpl::ReleaseCachedData() {
}
// signature: GRendererWiiImpl::DrawIndexedTriList(int, int, int, int, int)
// Range: 0x8036D2F0 -> 0x8036D74C
void GRendererWiiImpl::DrawIndexedTriList(class GRendererWiiImpl * this /* r28 */, int baseVertexIndex /* r27 */, int numVertices /* r26 */, int startIndex /* r23 */, int triangleCount /* r29 */) {
    // Local variables
    unsigned short vertexStride; // r24
    enum _GXVtxFmt vf; // r25
    short * pVerts16; // r31
    unsigned short * pindices16; // r30

    {
        // Range: 0x8036D438 -> 0x8036D45C
        // Local variables
        unsigned short i; // r24

        {
            // Range: 0x8036D438 -> 0x8036D45C
            // Local variables
            unsigned short index; // r0
        }
    }
    {
        // Range: 0x8036D4A4 -> 0x8036D514
        // Local variables
        unsigned short i; // r23

        {
            // Range: 0x8036D4A4 -> 0x8036D514
            // Local variables
            class GColor c; // r1+0x14
            unsigned short index; // r0
        }
    }
    {
        // Range: 0x8036D574 -> 0x8036D5E4
        // Local variables
        unsigned short i; // r23

        {
            // Range: 0x8036D574 -> 0x8036D5E4
            // Local variables
            class GColor c1; // r1+0x10
            unsigned short index; // r0
        }
    }
    {
        // Range: 0x8036D638 -> 0x8036D6F4
        // Local variables
        unsigned short i; // r23

        {
            // Range: 0x8036D638 -> 0x8036D6F4
            // Local variables
            class GColor c1; // r1+0x8
            class GColor c; // r1+0xC
            unsigned short index; // r0
        }
    }
}
// Range: 0x8036D200 -> 0x8036D2F0
void GRendererWiiImpl::DrawLineStrip(class GRendererWiiImpl * this /* r31 */, int baseVertexIndex /* r28 */, int lineCount /* r27 */) {
    // Local variables
    short * pVerts16; // r29

    {
        // Range: 0x8036D28C -> 0x8036D28C
        // Local variables
        unsigned short nIdx; // r28
    }
}
// signature: GRendererWiiImpl::DrawBitmaps(GRenderer::BitmapDesc *, int, int, int, const GTexture *, const GMatrix2D &, GRenderer::CacheProvider *)
// Range: 0x8036B13C -> 0x8036B464
void GRendererWiiImpl::DrawBitmaps(class GRendererWiiImpl * this /* r25 */, class BitmapDesc * pbitmapList /* r26 */, int listSize /* r11 */, int startIndex /* r27 */, int count /* r28 */, class GTexture * pti /* r29 */, class GMatrix2D & m /* r22 */) {
    // Local variables
    class GTextureWiiImpl * ptex; // r0

    {
        // Range: 0x8036B268 -> 0x8036B3DC
        // Local variables
        int ibitmap; // r31

        {
            // Range: 0x8036B268 -> 0x8036B3DC
            // Local variables
            class BitmapDesc & bd; // r30
        }
    }
}
// Range: 0x8036AF4C -> 0x8036B128
void GRendererWiiImpl::BeginSubmitMask(class GRendererWiiImpl * this /* r30 */, enum SubmitMaskMode maskMode /* r31 */) {
}
// Range: 0x8036AE44 -> 0x8036AF4C
void GRendererWiiImpl::EndSubmitMask(class GRendererWiiImpl * this /* r31 */) {
    // References
    // -> class BlendModeDesc blendModes[16];
}
// Range: 0x8036ADDC -> 0x8036AE44
void GRendererWiiImpl::DisableMask(class GRendererWiiImpl * this /* r31 */) {
}
// signature: GRendererWiiImpl::GetRenderStats(GRenderer::Stats *, bool)
// Range: 0x8036AD74 -> 0x8036ADDC
void GRendererWiiImpl::GetRenderStats(class GRendererWiiImpl * this /* r30 */, bool resetStats /* r31 */) {
}
// signature: GRendererWiiImpl::SetDependentVideoMode(_GXRenderModeObj *, GRenderSyncWii *, int, int)
// Range: 0x8036AD5C -> 0x8036AD74
bool GRendererWiiImpl::SetDependentVideoMode() {
}
// Range: 0x8036AD34 -> 0x8036AD5C
bool GRendererWiiImpl::ResetVideoMode() {
}
// Range: 0x8036AD24 -> 0x8036AD34
enum DisplayStatus GRendererWiiImpl::CheckDisplayStatus() const {
}
// Range: 0x8036AD00 -> 0x8036AD20
void GRendererWiiImpl::BeginFrame() {
}
// Range: 0x8036AC2C -> 0x8036ACFC
void GRendererWiiImpl::EndFrame(class GRendererWiiImpl * this /* r29 */) {
}
// Range: 0x8036A950 -> 0x8036AC2C
bool GRendererWiiImpl::AddEventHandler(class GRendererWiiImpl * this /* r29 */, class EventHandler * phandler /* r30 */) {
}
// signature: GRendererWiiImpl::RemoveEventHandler(GRenderer::EventHandler *)
// Range: 0x8036A948 -> 0x8036A950
void GRendererWiiImpl::RemoveEventHandler() {
}
// Range: 0x8034A6CC -> 0x8034A864
void * GTextureWiiImpl::~GTextureWiiImpl(class GTextureWiiImpl * this /* r30 */) {
    // References
    // -> struct {} __vt__16GTextureImplNode;
    // -> struct {} __vt__15GTextureWiiImpl;
}
// Range: 0x8034A868 -> 0x8034A87C
bool GTextureWiiImpl::IsDataValid() const {
}
// Range: 0x8034A87C -> 0x8034AA34
bool GTextureWiiImpl::InitTextureFromTexObj(class GTextureWiiImpl * this /* r30 */, class _GXTexObj * pTex /* r26 */, int width /* r27 */, int height /* r29 */, bool isalpha /* r28 */, class _GXTexObj * pAlphaTex /* r31 */) {
}
// signature: LoadTextureTile(unsigned char *, const unsigned char *, unsigned int, unsigned int, int, int)
// Range: 0x8034AA34 -> 0x8034AC7C
static unsigned char * LoadTextureTile() {
    {
        // Range: 0x8034AA44 -> 0x8034AAF0
        // Local variables
        int j; // r30

        {
            // Range: 0x8034AA50 -> 0x8034AAF0
            // Local variables
            int i; // r29

            {
                // Range: 0x8034AA64 -> 0x8034AA94
                // Local variables
                int jt; // r28

                {
                    // Range: 0x8034AA78 -> 0x8034AA94
                    // Local variables
                    int it; // r27
                }
            }
        }
    }
    {
        // Range: 0x8034AB14 -> 0x8034ABAC
        // Local variables
        int j; // r27

        {
            // Range: 0x8034AB18 -> 0x8034ABAC
            // Local variables
            int i; // r28

            {
                // Range: 0x8034AB18 -> 0x8034AB74
                // Local variables
                int jt; // r29

                {
                    // Range: 0x8034AB18 -> 0x8034AB74
                    // Local variables
                    int it; // r26
                }
            }
        }
    }
    {
        // Range: 0x8034ABD0 -> 0x8034AC58
        // Local variables
        int j; // r12

        {
            // Range: 0x8034ABDC -> 0x8034AC58
            // Local variables
            int i; // r26

            {
                // Range: 0x8034ABF4 -> 0x8034AC18
                // Local variables
                int jt; // r27

                {
                    // Range: 0x8034AC08 -> 0x8034AC18
                    // Local variables
                    int it; // r28
                }
            }
        }
    }
}
// signature: LoadTextureDxt(unsigned char *, const unsigned char *, unsigned int, unsigned int)
// Range: 0x8034AC7C -> 0x8034AE28
static unsigned char * LoadTextureDxt() {
    // Local variables
    unsigned int sw; // r30
    unsigned int sh; // r29

    {
        // Range: 0x8034AC8C -> 0x8034AE00
        // Local variables
        int j; // r28

        {
            // Range: 0x8034AC9C -> 0x8034AE00
            // Local variables
            int i; // r27

            {
                // Range: 0x8034ACA8 -> 0x8034ADC8
                // Local variables
                int jt; // r26

                {
                    // Range: 0x8034ACC0 -> 0x8034ADC8
                    // Local variables
                    int it; // r25

                    {
                        // Range: 0x8034ACC0 -> 0x8034ADC8
                        // Local variables
                        unsigned int dst; // r0
                        unsigned int src; // r9

                        {
                            // Range: 0x8034ACE0 -> 0x8034AD40
                            // Local variables
                            int c; // r24

                            {
                                // Range: 0x8034ACE0 -> 0x8034AD40
                                // Local variables
                                int v; // r23
                            }
                        }
                    }
                }
            }
        }
    }
}
// Range: 0x8034AE28 -> 0x8034C928
bool GTextureWiiImpl::InitTexture(class GTextureWiiImpl * this /* r23 */, class GImageBase * pim /* r24 */, int targetWidth /* r17 */, int targetHeight /* r16 */) {
    // Local variables
    unsigned int bytesPerPixel; // r31
    unsigned int destBpp; // r15
    enum _GXTexFmt texfmt; // r30
    unsigned int w; // r29
    unsigned int h; // r28
    unsigned long tsize; // r27
    unsigned int wtmp; // r3
    unsigned int htmp; // r4
    unsigned int levels; // r26
    unsigned char * pdest; // r3

    {
        // Range: 0x8034B124 -> 0x8034BC60
        // Local variables
        unsigned int mipH; // r18
        unsigned int mipW; // r16

        {
            // Range: 0x8034B264 -> 0x8034BC4C
            // Local variables
            int i; // r17
        }
    }
    {
        // Range: 0x8034BC64 -> 0x8034C6A0
        // Local variables
        unsigned int mipH; // r16
        unsigned int mipW; // r15

        {
            // Range: 0x8034BCB4 -> 0x8034C694
            // Local variables
            int i; // r25
        }
    }
    {
        // Range: 0x8034C6A0 -> 0x8034C734
        // Local variables
        unsigned int level; // r15

        {
            // Range: 0x8034C6A8 -> 0x8034C71C
            // Local variables
            unsigned char * pdata; // r4
            unsigned int mipPitch; // r1+0x10
            unsigned int mipH; // r1+0x14
            unsigned int mipW; // r1+0x18
        }
    }
}
// Range: 0x8034C92C -> 0x8034CD34
bool GTextureWiiImpl::InitTexture(class GTextureWiiImpl * this /* r24 */, int w /* r25 */, int h /* r26 */, enum ImageFormat format /* r27 */, int mipmaps /* r28 */, int targetWidth /* r23 */, int targetHeight /* r29 */) {
    // Local variables
    unsigned int destBpp; // r31
    enum _GXTexFmt texfmt; // r30
    unsigned long tsize; // r29
    unsigned int wtmp; // r4
    unsigned int htmp; // r5

    {
        // Range: 0x8034CA80 -> 0x8034CB04
        // Local variables
        int i; // r0
    }
}
// Range: 0x8034CD34 -> 0x8034D248
void GTextureWiiImpl::Update(class GTextureWiiImpl * this /* r27 */, int level /* r24 */, int n /* r28 */, class UpdateRect * rects /* r29 */, class GImageBase * pim /* r30 */) {
    // Local variables
    unsigned int bpp; // r31
    unsigned char * plevel; // r3
    int w; // r5
    int h; // r6
    int tw; // r0
    int th; // r4

    {
        // Range: 0x8034CDF4 -> 0x8034CE44
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x8034CE64 -> 0x8034CF34
        // Local variables
        int i; // r0

        {
            // Range: 0x8034CE64 -> 0x8034CEE0
            // Local variables
            int j; // r5

            {
                // Range: 0x8034CE6C -> 0x8034CEE0
                // Local variables
                int k; // r6

                {
                    // Range: 0x8034CE6C -> 0x8034CEE0
                    // Local variables
                    int ofs; // r10
                    int y; // r24
                    int x; // r24
                }
            }
        }
    }
    {
        // Range: 0x8034CF58 -> 0x8034D028
        // Local variables
        int i; // r0

        {
            // Range: 0x8034CF58 -> 0x8034CFE0
            // Local variables
            int j; // r5

            {
                // Range: 0x8034CF60 -> 0x8034CFE0
                // Local variables
                int k; // r6

                {
                    // Range: 0x8034CF60 -> 0x8034CFE0
                    // Local variables
                    int ofs; // r12
                    int y; // r28
                    int x; // r25
                }
            }
        }
    }
    {
        // Range: 0x8034D040 -> 0x8034D0E0
        // Local variables
        int i; // r0

        {
            // Range: 0x8034D040 -> 0x8034D080
            // Local variables
            int j; // r5

            {
                // Range: 0x8034D048 -> 0x8034D080
                // Local variables
                int k; // r6

                {
                    // Range: 0x8034D048 -> 0x8034D080
                    // Local variables
                    int y; // r11
                    int x; // r24
                }
            }
        }
    }
    {
        // Range: 0x8034D0F8 -> 0x8034D194
        // Local variables
        int i; // r0

        {
            // Range: 0x8034D0F8 -> 0x8034D150
            // Local variables
            int j; // r5

            {
                // Range: 0x8034D100 -> 0x8034D150
                // Local variables
                int k; // r6

                {
                    // Range: 0x8034D100 -> 0x8034D150
                    // Local variables
                    int y; // r25
                    int x; // r24
                }
            }
        }
    }
}
// Range: 0x8034D24C -> 0x8034D274
void GRenderSyncWii_DrawSync::BeginFrame() {
    // References
    // -> unsigned long lastw;
}
// signature: GRenderSyncWii_DrawSync::DrawSyncHandler(unsigned short)
// Range: 0x8034D274 -> 0x8034D2D4
void GRenderSyncWii_DrawSync::DrawSyncHandler() {
    // References
    // -> class OSThreadQueue waitq;
    // -> unsigned long waiton;
    // -> unsigned long lastw;
    // -> unsigned long lastv;
}
// Range: 0x8034D2D4 -> 0x8034D314
unsigned long GRenderSyncWii_DrawSync::SetFence(class GRenderSyncWii_DrawSync * this /* r31 */) {
}
// Range: 0x8034D314 -> 0x8034D3CC
void GRenderSyncWii_DrawSync::WaitFence(unsigned long f /* r27 */) {
    {
        // Range: 0x8034D334 -> 0x8034D394
        // Local variables
        bool v; // r28
    }

    // References
    // -> class OSThreadQueue waitq;
    // -> unsigned long waiton;
    // -> unsigned long lastv;
    // -> unsigned long lastw;
}
// Range: 0x8034D3CC -> 0x8034D560
class GRendererWii * GRendererWii::CreateRenderer() {
    // References
    // -> struct {} __vt__16GRendererWiiImpl;
}
