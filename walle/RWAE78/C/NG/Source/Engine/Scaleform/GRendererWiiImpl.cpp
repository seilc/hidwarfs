/*
    Compile unit: C:\NG\Source\Engine\WAD\WAD02.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\NG\Source\Engine\Scaleform\GRendererWiiImpl.cpp
*/
class BlendModeDesc blendModes[16]; // size: 0x100, address: 0x8070B388
// Range: 0x802C39C8 -> 0x802C3C00
void * GRendererWiiImpl::~GRendererWiiImpl(class GRendererWiiImpl * this /* r30 */) {
    // References
    // -> struct {} __vt__16GRendererWiiImpl;
}
// Range: 0x802BEFB0 -> 0x802C0698
void GRendererWiiImpl::GFxFillStyle::Apply(class GFxFillStyle * this /* r26 */, class GRendererWiiImpl * pRenderer /* r27 */, class GMatrix2D * TransformMatrix /* r28 */) const {
    {
        // Range: 0x802BF0C0 -> 0x802C0680
        // Local variables
        unsigned long nTexMap; // r29
        unsigned long nTexGen; // r30
        unsigned long nTevStage; // r31

        {
            // Range: 0x802C0440 -> 0x802C05D4
            // Local variables
            class _GXColor constAlphaColor; // r1+0x48

            {
                // Range: 0x802C044C -> 0x802C04F4
                // Local variables
                class GMatrix2D mat; // r1+0x120
                float TexMatrix[2][4]; // r1+0x138
            }
        }
    }
}
// signature: GRendererWiiImpl::GFxFillStyle::SetBitmapText(GTexture *, const GRenderer::Cxform &)
// Range: 0x802BEEC0 -> 0x802BEFA8
void GRendererWiiImpl::GFxFillStyle::SetBitmapText(class GFxFillStyle * this /* r30 */, class Cxform * colorTransform /* r31 */) {
}
// Range: 0x802C38FC -> 0x802C39C8
class GTextureWii * GRendererWiiImpl::CreateTexture(class GRendererWiiImpl * this /* r30 */) {
    // References
    // -> struct {} __vt__15GTextureWiiImpl;
    // -> struct {} __vt__8GTexture;
}
// signature: GRendererWiiImpl::GetRenderCaps(GRenderer::RenderCaps *)
// Range: 0x802C38BC -> 0x802C38FC
bool GRendererWiiImpl::GetRenderCaps() {
}
// Range: 0x802C2F24 -> 0x802C38BC
void GRendererWiiImpl::BeginDisplay(class GRendererWiiImpl * this /* r25 */, class GColor * backgroundColor /* r26 */, class GViewport * viewport /* r27 */, float x0 /* f28 */, float x1 /* f31 */, float y0 /* f29 */, float y1 /* f30 */) {
    // Local variables
    float dx; // f31
    float dy; // f30
    float clipX0; // f0
    float clipX1; // f0
    float clipY0; // f0
    float clipY1; // f0
    float idm[3][4]; // r1+0x30
    class _GXColor WHITE; // r1+0x28

    {
        // Range: 0x802C321C -> 0x802C3310
        // Local variables
        float nFar; // f6
        float nNear; // f5
        float oProjection[4][4]; // r1+0x60
    }
    {
        // Range: 0x802C36C0 -> 0x802C372C
        // Local variables
        int i; // r23
    }

    // References
    // -> class BlendModeDesc blendModes[16];
}
// Range: 0x802C2EB4 -> 0x802C2F24
void GRendererWiiImpl::EndDisplay() {
}
// signature: GRendererWiiImpl::SetMatrix(const GMatrix2D &)
// Range: 0x802C2E80 -> 0x802C2EB4
void GRendererWiiImpl::SetMatrix() {
}
// signature: GRendererWiiImpl::SetUserMatrix(const GMatrix2D &)
// Range: 0x802C2E4C -> 0x802C2E80
void GRendererWiiImpl::SetUserMatrix() {
}
// signature: GRendererWiiImpl::SetCxform(const GRenderer::Cxform &)
// Range: 0x802C2E08 -> 0x802C2E4C
void GRendererWiiImpl::SetCxform() {
}
// Range: 0x802C2BE8 -> 0x802C2E08
void GRendererWiiImpl::PushBlendMode(class GRendererWiiImpl * this /* r30 */, enum BlendType mode /* r31 */) {
    // References
    // -> class BlendModeDesc blendModes[16];
}
// Range: 0x802C29AC -> 0x802C2BE8
void GRendererWiiImpl::PopBlendMode(class GRendererWiiImpl * this /* r30 */) {
    {
        // Range: 0x802C29CC -> 0x802C2BCC
        // Local variables
        enum BlendType newBlendMode; // r31

        {
            // Range: 0x802C29D4 -> 0x802C2A04
            // Local variables
            int i; // r5
        }
    }

    // References
    // -> class BlendModeDesc blendModes[16];
}
// Range: 0x802C076C -> 0x802C0828
void GRendererWiiImpl::ApplyMatrix(class GRendererWiiImpl * this /* r30 */, class GMatrix2D * matIn /* r31 */) {
    // Local variables
    float modelViewMatrix[3][4]; // r1+0x20
    class GMatrix2D m; // r1+0x8
}
// Range: 0x802C0698 -> 0x802C076C
void GRendererWiiImpl::ApplyMatrix(class GRendererWiiImpl * this /* r30 */, class GMatrix2D * matIn /* r31 */, float z /* f31 */) {
    // Local variables
    float modelViewMatrix[3][4]; // r1+0x20
    class GMatrix2D m; // r1+0x8
}
// Range: 0x802C299C -> 0x802C29AC
void GRendererWiiImpl::FillStyleDisable() {
}
// Range: 0x802C298C -> 0x802C299C
void GRendererWiiImpl::LineStyleDisable() {
}
// signature: GRendererWiiImpl::FillStyleColor(GColor)
// Range: 0x802C293C -> 0x802C298C
void GRendererWiiImpl::FillStyleColor(class GRendererWiiImpl * this /* r31 */) {
}
// signature: GRendererWiiImpl::LineStyleColor(GColor)
// Range: 0x802C28EC -> 0x802C293C
void GRendererWiiImpl::LineStyleColor(class GRendererWiiImpl * this /* r31 */) {
}
// signature: GRendererWiiImpl::FillStyleBitmap(const GRenderer::FillTexture *)
// Range: 0x802C27EC -> 0x802C28EC
void GRendererWiiImpl::FillStyleBitmap() {
}
// signature: GRendererWiiImpl::FillStyleGouraud(GRenderer::GouraudFillType, const GRenderer::FillTexture *, const GRenderer::FillTexture *, const GRenderer::FillTexture *)
// Range: 0x802C25D4 -> 0x802C27EC
void GRendererWiiImpl::FillStyleGouraud() {
}
// signature: GRendererWiiImpl::SetVertexData(const void *, int, GRenderer::VertexFormat, GRenderer::CacheProvider *)
// Range: 0x802C25C8 -> 0x802C25D4
void GRendererWiiImpl::SetVertexData() {
}
// signature: GRendererWiiImpl::SetIndexData(const void *, int, GRenderer::IndexFormat, GRenderer::CacheProvider *)
// Range: 0x802C25BC -> 0x802C25C8
void GRendererWiiImpl::SetIndexData() {
}
// signature: GRendererWiiImpl::ReleaseCachedData(GRenderer::CachedData *, GRenderer::CachedDataType)
// Range: 0x802C25B8 -> 0x802C25BC
void GRendererWiiImpl::ReleaseCachedData() {
}
// signature: GRendererWiiImpl::DrawIndexedTriList(int, int, int, int, int)
// Range: 0x802C21CC -> 0x802C25A8
void GRendererWiiImpl::DrawIndexedTriList(class GRendererWiiImpl * this /* r25 */, int baseVertexIndex /* r24 */, int numVertices /* r26 */, int startIndex /* r23 */, int triangleCount /* r27 */) {
    // Local variables
    unsigned short vertexStride; // r31
    enum _GXVtxFmt vf; // r30
    short * pVerts16; // r29
    unsigned short * pindices16; // r28

    {
        // Range: 0x802C2360 -> 0x802C2384
        // Local variables
        unsigned short i; // r24

        {
            // Range: 0x802C2360 -> 0x802C2384
            // Local variables
            unsigned short index; // r0
        }
    }
    {
        // Range: 0x802C23CC -> 0x802C243C
        // Local variables
        unsigned short i; // r23

        {
            // Range: 0x802C23CC -> 0x802C243C
            // Local variables
            class GColor c; // r1+0x10
            unsigned short index; // r0
        }
    }
    {
        // Range: 0x802C2490 -> 0x802C254C
        // Local variables
        unsigned short i; // r23

        {
            // Range: 0x802C2490 -> 0x802C254C
            // Local variables
            class GColor c1; // r1+0x8
            class GColor c; // r1+0xC
            unsigned short index; // r0
        }
    }
}
// Range: 0x802C0880 -> 0x802C21CC
void GRendererWiiImpl::DrawLineStrip(class GRendererWiiImpl * this /* r26 */, int baseVertexIndex /* r27 */, int lineCount /* r28 */) {
    // Local variables
    short * pVerts16; // r29

    {
        // Range: 0x802C202C -> 0x802C202C
        // Local variables
        unsigned short nIdx; // r3
    }
}
// signature: GRendererWiiImpl::DrawBitmaps(GRenderer::BitmapDesc *, int, int, int, const GTexture *, const GMatrix2D &, GRenderer::CacheProvider *)
// Range: 0x802BEB78 -> 0x802BEEBC
void GRendererWiiImpl::DrawBitmaps(class GRendererWiiImpl * this /* r26 */, class BitmapDesc * pbitmapList /* r27 */, int listSize /* r11 */, int startIndex /* r28 */, int count /* r29 */, class GTexture * pti /* r24 */, class GMatrix2D * m /* r23 */) {
    {
        // Range: 0x802BECEC -> 0x802BEE60
        // Local variables
        int ibitmap; // r31

        {
            // Range: 0x802BECEC -> 0x802BEE60
            // Local variables
            class BitmapDesc * bd; // r30
        }
    }
}
// Range: 0x802BE98C -> 0x802BEB74
void GRendererWiiImpl::BeginSubmitMask(class GRendererWiiImpl * this /* r30 */, enum SubmitMaskMode maskMode /* r31 */) {
}
// Range: 0x802BE834 -> 0x802BE98C
void GRendererWiiImpl::EndSubmitMask(class GRendererWiiImpl * this /* r31 */) {
    // References
    // -> class BlendModeDesc blendModes[16];
}
// Range: 0x802BE7CC -> 0x802BE834
void GRendererWiiImpl::DisableMask(class GRendererWiiImpl * this /* r31 */) {
}
// signature: GRendererWiiImpl::GetRenderStats(GRenderer::Stats *, bool)
// Range: 0x802BE768 -> 0x802BE7CC
void GRendererWiiImpl::GetRenderStats(class GRendererWiiImpl * this /* r30 */, bool resetStats /* r31 */) {
}
// signature: GRendererWiiImpl::SetDependentVideoMode(_GXRenderModeObj *, int, int)
// Range: 0x802BE6B0 -> 0x802BE768
bool GRendererWiiImpl::SetDependentVideoMode(class GRendererWiiImpl * this /* r31 */) {
    // Local variables
    unsigned int tsize; // r0
}
// Range: 0x802BE650 -> 0x802BE6B0
bool GRendererWiiImpl::ResetVideoMode(class GRendererWiiImpl * this /* r30 */) {
}
// Range: 0x802BE640 -> 0x802BE650
enum DisplayStatus GRendererWiiImpl::CheckDisplayStatus() const {
}
// Range: 0x802AA95C -> 0x802AAAD8
void * GTextureWiiImpl::~GTextureWiiImpl(class GTextureWiiImpl * this /* r30 */) {
    // References
    // -> struct {} __vt__16GTextureImplNode;
    // -> struct {} __vt__15GTextureWiiImpl;
}
// Range: 0x802AAAD8 -> 0x802AAAE0
class GRenderer * GTextureWiiImpl::GetRenderer() const {
}
// Range: 0x802AAAE0 -> 0x802AAAF4
bool GTextureWiiImpl::IsDataValid() const {
}
// Range: 0x802AAAF4 -> 0x802AACA8
bool GTextureWiiImpl::InitTexture(class GTextureWiiImpl * this /* r30 */, class _GXTexObj * pTex /* r26 */, int width /* r27 */, int height /* r29 */, bool isalpha /* r28 */, class _GXTexObj * pAlphaTex /* r31 */) {
}
// signature: LoadTextureTile(unsigned char *, const unsigned char *, unsigned int, unsigned int, int, int)
// Range: 0x802AACA8 -> 0x802AAEF0
static unsigned char * LoadTextureTile() {
    {
        // Range: 0x802AACB8 -> 0x802AAD64
        // Local variables
        int j; // r30

        {
            // Range: 0x802AACC4 -> 0x802AAD64
            // Local variables
            int i; // r29

            {
                // Range: 0x802AACD8 -> 0x802AAD08
                // Local variables
                int jt; // r28

                {
                    // Range: 0x802AACEC -> 0x802AAD08
                    // Local variables
                    int it; // r27
                }
            }
        }
    }
    {
        // Range: 0x802AAD88 -> 0x802AAE20
        // Local variables
        int j; // r27

        {
            // Range: 0x802AAD8C -> 0x802AAE20
            // Local variables
            int i; // r28

            {
                // Range: 0x802AAD8C -> 0x802AADE8
                // Local variables
                int jt; // r29

                {
                    // Range: 0x802AAD8C -> 0x802AADE8
                    // Local variables
                    int it; // r26
                }
            }
        }
    }
    {
        // Range: 0x802AAE44 -> 0x802AAECC
        // Local variables
        int j; // r12

        {
            // Range: 0x802AAE50 -> 0x802AAECC
            // Local variables
            int i; // r26

            {
                // Range: 0x802AAE68 -> 0x802AAE8C
                // Local variables
                int jt; // r27

                {
                    // Range: 0x802AAE7C -> 0x802AAE8C
                    // Local variables
                    int it; // r28
                }
            }
        }
    }
}
// signature: LoadTextureDxt(unsigned char *, const unsigned char *, unsigned int, unsigned int)
// Range: 0x802AAEF0 -> 0x802AB09C
static unsigned char * LoadTextureDxt() {
    // Local variables
    unsigned int sw; // r30
    unsigned int sh; // r29

    {
        // Range: 0x802AAF00 -> 0x802AB074
        // Local variables
        int j; // r28

        {
            // Range: 0x802AAF10 -> 0x802AB074
            // Local variables
            int i; // r27

            {
                // Range: 0x802AAF1C -> 0x802AB03C
                // Local variables
                int jt; // r26

                {
                    // Range: 0x802AAF34 -> 0x802AB03C
                    // Local variables
                    int it; // r25

                    {
                        // Range: 0x802AAF34 -> 0x802AB03C
                        // Local variables
                        unsigned int dst; // r0
                        unsigned int src; // r9

                        {
                            // Range: 0x802AAF54 -> 0x802AAFB4
                            // Local variables
                            int c; // r24

                            {
                                // Range: 0x802AAF54 -> 0x802AAFB4
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
// Range: 0x802AB09C -> 0x802ACB98
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
        // Range: 0x802AB394 -> 0x802ABED0
        // Local variables
        unsigned int mipH; // r18
        unsigned int mipW; // r16

        {
            // Range: 0x802AB4D4 -> 0x802ABEBC
            // Local variables
            int i; // r17
        }
    }
    {
        // Range: 0x802ABED4 -> 0x802AC910
        // Local variables
        unsigned int mipH; // r16
        unsigned int mipW; // r15

        {
            // Range: 0x802ABF24 -> 0x802AC904
            // Local variables
            int i; // r25
        }
    }
    {
        // Range: 0x802AC910 -> 0x802AC9A4
        // Local variables
        unsigned int level; // r15

        {
            // Range: 0x802AC918 -> 0x802AC98C
            // Local variables
            unsigned char * pdata; // r4
            unsigned int mipPitch; // r1+0x10
            unsigned int mipH; // r1+0x14
            unsigned int mipW; // r1+0x18
        }
    }
}
// signature: GTextureWiiImpl::InitTextureFromFile(const char *, int, int)
// Range: 0x802ACB98 -> 0x802ACBA0
bool GTextureWiiImpl::InitTextureFromFile() {
}
// Range: 0x802ACBA0 -> 0x802ACF9C
bool GTextureWiiImpl::InitTexture(class GTextureWiiImpl * this /* r24 */, int w /* r25 */, int h /* r26 */, enum ImageFormat format /* r27 */, int mipmaps /* r28 */, int targetWidth /* r23 */, int targetHeight /* r29 */) {
    // Local variables
    unsigned int destBpp; // r31
    enum _GXTexFmt texfmt; // r30
    unsigned long tsize; // r29
    unsigned int wtmp; // r4
    unsigned int htmp; // r5

    {
        // Range: 0x802ACCF0 -> 0x802ACD74
        // Local variables
        int i; // r0
    }
}
// Range: 0x802ACF9C -> 0x802AD484
void GTextureWiiImpl::Update(class GTextureWiiImpl * this /* r27 */, int level /* r24 */, int n /* r28 */, class UpdateRect * rects /* r29 */, class GImageBase * pim /* r30 */) {
    // Local variables
    unsigned int bpp; // r31
    unsigned char * plevel; // r3
    int w; // r5
    int h; // r6
    int tw; // r0
    int th; // r4

    {
        // Range: 0x802AD030 -> 0x802AD080
        // Local variables
        int i; // r0
    }
    {
        // Range: 0x802AD0A0 -> 0x802AD170
        // Local variables
        int i; // r0

        {
            // Range: 0x802AD0A0 -> 0x802AD11C
            // Local variables
            int j; // r5

            {
                // Range: 0x802AD0A8 -> 0x802AD11C
                // Local variables
                int k; // r6

                {
                    // Range: 0x802AD0A8 -> 0x802AD11C
                    // Local variables
                    int ofs; // r10
                    int y; // r24
                    int x; // r24
                }
            }
        }
    }
    {
        // Range: 0x802AD194 -> 0x802AD264
        // Local variables
        int i; // r0

        {
            // Range: 0x802AD194 -> 0x802AD21C
            // Local variables
            int j; // r5

            {
                // Range: 0x802AD19C -> 0x802AD21C
                // Local variables
                int k; // r6

                {
                    // Range: 0x802AD19C -> 0x802AD21C
                    // Local variables
                    int ofs; // r12
                    int y; // r28
                    int x; // r25
                }
            }
        }
    }
    {
        // Range: 0x802AD27C -> 0x802AD31C
        // Local variables
        int i; // r0

        {
            // Range: 0x802AD27C -> 0x802AD2BC
            // Local variables
            int j; // r5

            {
                // Range: 0x802AD284 -> 0x802AD2BC
                // Local variables
                int k; // r6

                {
                    // Range: 0x802AD284 -> 0x802AD2BC
                    // Local variables
                    int y; // r11
                    int x; // r24
                }
            }
        }
    }
    {
        // Range: 0x802AD334 -> 0x802AD3D0
        // Local variables
        int i; // r0

        {
            // Range: 0x802AD334 -> 0x802AD38C
            // Local variables
            int j; // r5

            {
                // Range: 0x802AD33C -> 0x802AD38C
                // Local variables
                int k; // r6

                {
                    // Range: 0x802AD33C -> 0x802AD38C
                    // Local variables
                    int y; // r25
                    int x; // r24
                }
            }
        }
    }
}
