/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxTagLoaders.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80582370 -> 0x80586A20
*/
// total size: 0x38
class z_stream_s {
    // Members
    unsigned char * next_in; // offset 0x0, size 0x4
    unsigned int avail_in; // offset 0x4, size 0x4
    unsigned long total_in; // offset 0x8, size 0x4
    unsigned char * next_out; // offset 0xC, size 0x4
    unsigned int avail_out; // offset 0x10, size 0x4
    unsigned long total_out; // offset 0x14, size 0x4
    char * msg; // offset 0x18, size 0x4
    class internal_state * state; // offset 0x1C, size 0x4
    void * (* zalloc)(void * opaque, unsigned int items, unsigned int size); // offset 0x20, size 0x4
    void (* zfree)(void * opaque, void * address); // offset 0x24, size 0x4
    void * opaque; // offset 0x28, size 0x4
    int data_type; // offset 0x2C, size 0x4
    unsigned long adler; // offset 0x30, size 0x4
    unsigned long reserved; // offset 0x34, size 0x4
};
// total size: 0x0
class internal_state {};
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    class GPtr * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
void (* GFx_SWF_TagLoaderTable[85])(class GFxLoadProcess *, class GFxTagInfo &); // size: 0x154, address: 0x8073D710
void (* GFx_GFX_TagLoaderTable[5])(class GFxLoadProcess *, class GFxTagInfo &); // size: 0x14, address: 0x8073D864
static unsigned short GFx_UndoPremultiplyTable[256]; // size: 0x200, address: 0x8073D950
// signature: GFx_NullLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x80582370 -> 0x80582374
void GFx_NullLoader() {
}
// signature: GFx_FrameLabelLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x80582380 -> 0x805823E4
void GFx_FrameLabelLoader(class GFxLoadProcess * p /* r30 */) {
    // Local variables
    char * ps; // r31
}
// signature: GFx_SetBackgroundColorLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x805823F0 -> 0x805825BC
void GFx_SetBackgroundColorLoader(class GFxLoadProcess * p /* r28 */) {
    // References
    // -> struct {} __vt__21GFxSetBackgroundColor;
}
// signature: GFx_JpegTablesLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x805825C0 -> 0x80582614
void GFx_JpegTablesLoader(class GFxLoadProcess * p /* r30 */) {
    {
        // Range: 0x805825CC -> 0x805825FC
        // Local variables
        class GJPEGInput * pjin; // r0
    }
}
// signature: GFx_DefineBitsJpegLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x80582620 -> 0x8058277C
void GFx_DefineBitsJpegLoader(class GFxLoadProcess * p /* r31 */) {
}
// signature: GFx_DefineBitsJpeg2Loader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x80582780 -> 0x805828A4
void GFx_DefineBitsJpeg2Loader(class GFxLoadProcess * p /* r31 */) {
}
// signature: GFx_InflateWrapper(GFxStream *, void *, int)
// Range: 0x805828B0 -> 0x805829D4
void GFx_InflateWrapper(class GFxStream * pinStream /* r27 */) {
    // Local variables
    int err; // r5
    class z_stream_s D_stream; // r1+0x10
    unsigned char buf[1]; // r1+0x8
}
// Range: 0x805829E0 -> 0x80582EF4
void UndoAndFilterPremultiplied(class GImage * pimage /* r31 */) {
    // Local variables
    unsigned int x; // r30
    unsigned int y; // r20
    unsigned int pitch; // r29
    class garray buf; // r1+0x8

    {
        // Range: 0x80582BA4 -> 0x80582BEC
        // Local variables
        unsigned char * sl; // r0
    }
    {
        // Range: 0x80582C18 -> 0x80582E6C
        {
            // Range: 0x80582C18 -> 0x80582E58
            // Local variables
            unsigned char * pi; // r27
            unsigned char * p5; // r28

            {
                // Range: 0x80582C18 -> 0x80582C18
                // Local variables
                unsigned int den; // r26
                unsigned char * p9; // r0
                unsigned char * p7; // r0
                unsigned char * p6; // r0
                unsigned char * p4; // r0
                unsigned char * p3; // r0
                unsigned char * p1; // r0

                {
                    // Range: 0x80582C18 -> 0x80582C18
                    // Local variables
                    unsigned int b; // r5
                    unsigned int g; // r4
                    unsigned int r; // r25
                }
            }
        }
    }

    // References
    // -> static unsigned short GFx_UndoPremultiplyTable[256];
}
// signature: GFx_DefineBitsJpeg3Loader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x80582F00 -> 0x80583218
void GFx_DefineBitsJpeg3Loader(class GFxLoadProcess * p /* r27 */) {
    // Local variables
    unsigned long alphaPosition; // r28

    {
        // Range: 0x80582FC0 -> 0x805831C8
        // Local variables
        unsigned char * buffer; // r28
        int bufferBytes; // r29

        {
            // Range: 0x80583068 -> 0x80583068
            // Local variables
            int i; // r5
        }
    }
}
// Range: 0x80583220 -> 0x80584058
void GFx_DefineBitsLossless2Loader(class GFxLoadProcess * p /* r26 */, class GFxTagInfo & tagInfo /* r16 */) {
    {
        // Range: 0x805833B0 -> 0x80583680
        // Local variables
        unsigned char * buffer; // r17
        int BufferBytes; // r19
        int pitch; // r16

        {
            // Range: 0x80583444 -> 0x80583444
            // Local variables
            int j; // r11

            {
                // Range: 0x80583444 -> 0x80583444
                // Local variables
                unsigned char * ImageInRow; // r12

                {
                    // Range: 0x80583444 -> 0x80583444
                    // Local variables
                    int i; // r18

                    {
                        // Range: 0x80583444 -> 0x80583444
                        // Local variables
                        unsigned char pixel; // r21
                    }
                }
            }
        }
    }
    {
        // Range: 0x80583684 -> 0x8058393C
        // Local variables
        unsigned char * buffer; // r27
        int BufferBytes; // r16
        int pitch; // r28

        {
            // Range: 0x805836C0 -> 0x805836C0
            // Local variables
            int j; // r7

            {
                // Range: 0x805836C0 -> 0x805836C0
                // Local variables
                unsigned char * ImageInRow; // r0

                {
                    // Range: 0x805836C0 -> 0x805836C0
                    // Local variables
                    int i; // r8

                    {
                        // Range: 0x805836C0 -> 0x805836C0
                        // Local variables
                        unsigned short pixel; // r0
                    }
                }
            }
        }
    }
    {
        // Range: 0x80583940 -> 0x80583AAC
        // Local variables
        unsigned char * buffer; // r17
        int BufferBytes; // r18
        int pitch; // r16

        {
            // Range: 0x80583970 -> 0x80583974
            // Local variables
            int j; // r11

            {
                // Range: 0x80583970 -> 0x80583974
                // Local variables
                unsigned char * ImageInRow; // r12

                {
                    // Range: 0x80583970 -> 0x80583970
                    // Local variables
                    int i; // r0

                    {
                        // Range: 0x80583970 -> 0x80583970
                        // Local variables
                        unsigned char b; // r19
                        unsigned char g; // r18
                    }
                }
            }
        }
    }
    {
        // Range: 0x80583AE4 -> 0x80583CE8
        // Local variables
        unsigned char * buffer; // r17
        int BufferBytes; // r19
        int pitch; // r16

        {
            // Range: 0x80583B6C -> 0x80583B70
            // Local variables
            int j; // r12

            {
                // Range: 0x80583B6C -> 0x80583B70
                // Local variables
                unsigned char * ImageInRow; // r0

                {
                    // Range: 0x80583B6C -> 0x80583B6C
                    // Local variables
                    int i; // r0
                }
            }
        }
    }
    {
        // Range: 0x80583CEC -> 0x80583EB4
        // Local variables
        unsigned char * buffer; // r17
        int BufferBytes; // r18
        int pitch; // r16

        {
            // Range: 0x80583D24 -> 0x80583D28
            // Local variables
            int j; // r19

            {
                // Range: 0x80583D24 -> 0x80583D28
                // Local variables
                unsigned char * ImageInRow; // r20

                {
                    // Range: 0x80583D24 -> 0x80583D24
                    // Local variables
                    int i; // r0

                    {
                        // Range: 0x80583D24 -> 0x80583D24
                        // Local variables
                        unsigned short pixel; // r0
                    }
                }
            }
        }
    }
    {
        // Range: 0x80583EDC -> 0x80583EE0
        // Local variables
        int j; // r8

        {
            // Range: 0x80583EDC -> 0x80583EE0
            {
                // Range: 0x80583EDC -> 0x80583EDC
                // Local variables
                int i; // r0

                {
                    // Range: 0x80583EDC -> 0x80583EDC
                    // Local variables
                    unsigned char b; // r11
                    unsigned char g; // r10
                    unsigned char a; // r9
                }
            }
        }
    }
}
// Range: 0x80584060 -> 0x8058418C
void GFx_DefineShapeLoader(class GFxLoadProcess * p /* r28 */, class GFxTagInfo & tagInfo /* r29 */) {
}
// Range: 0x80584190 -> 0x80584298
void GFx_DefineShapeMorphLoader(class GFxLoadProcess * p /* r28 */, class GFxTagInfo & tagInfo /* r29 */) {
}
// Range: 0x805842A0 -> 0x805843E8
void GFx_DefineFontLoader(class GFxLoadProcess * p /* r31 */, class GFxTagInfo & tagInfo /* r28 */) {
}
// Range: 0x80584420 -> 0x805844EC
void GFx_DefineFontInfoLoader(class GFxLoadProcess * p /* r28 */, class GFxTagInfo & tagInfo /* r29 */) {
    // Local variables
    class GFxFontData * pfd; // r0
}
// Range: 0x805844F0 -> 0x8058471C
void GFx_PlaceObject2Loader(class GFxLoadProcess * p /* r29 */, class GFxTagInfo & tagInfo /* r28 */) {
}
// signature: GFx_SpriteLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x80584720 -> 0x80584814
void GFx_SpriteLoader(class GFxLoadProcess * p /* r29 */) {
}
// signature: GFx_EndLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x80584820 -> 0x80584824
void GFx_EndLoader() {
}
// Range: 0x80584830 -> 0x80584A2C
void GFx_RemoveObject2Loader(class GFxLoadProcess * p /* r29 */, class GFxTagInfo & tagInfo /* r28 */) {
    // References
    // -> struct {} __vt__16GFxRemoveObject2;
}
// Range: 0x80584A30 -> 0x80584B30
void GFx_ButtonCharacterLoader(class GFxLoadProcess * p /* r28 */, class GFxTagInfo & tagInfo /* r29 */) {
    // Local variables
    int characterId; // r0
}
// signature: GFx_ExportLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x80584B30 -> 0x80584D38
void GFx_ExportLoader(class GFxLoadProcess * p /* r26 */) {
    // Local variables
    unsigned int count; // r0

    {
        // Range: 0x80584BAC -> 0x80584CF8
        // Local variables
        unsigned int i; // r27

        {
            // Range: 0x80584BAC -> 0x80584CF8
            // Local variables
            class GFxResourceHandle hres; // r1+0x20
            char * psymbolName; // r24
            unsigned short id; // r0
        }
    }
}
// Range: 0x80584D40 -> 0x80585110
void GFx_ImportLoader(class GFxLoadProcess * p /* r23 */, class GFxTagInfo & tagInfo /* r21 */) {
    // Local variables
    char * psourceUrl; // r26
    int count; // r25

    {
        // Range: 0x80584E74 -> 0x80584F58
        // Local variables
        int i; // r24

        {
            // Range: 0x80584E74 -> 0x80584F58
            // Local variables
            char * psymbolName; // r21
        }
    }

    // References
    // -> struct {} __vt__20GFxInitImportActions;
}
// signature: GFx_FileAttributesLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x805853D0 -> 0x805854C8
void GFx_FileAttributesLoader(class GFxLoadProcess * p /* r28 */) {
    {
        // Range: 0x80585448 -> 0x805854A8
        // Local variables
        char separator; // r5
    }
}
// signature: GFx_MetadataLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x805854D0 -> 0x805855E4
void GFx_MetadataLoader(class GFxLoadProcess * p /* r31 */) {
    // Local variables
    int size; // r27
    unsigned char * pbuff; // r26

    {
        // Range: 0x80585520 -> 0x80585520
        // Local variables
        int i; // r25
    }
}
// signature: GFx_ExporterInfoLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x805855F0 -> 0x805855F4
void GFx_ExporterInfoLoader() {
}
// signature: GFx_CreateImageFileResourceHandle(GFxLoadProcess *, GFxResourceId, const char *, const char *, unsigned short, unsigned short, unsigned short)
// Range: 0x80585600 -> 0x80585808
static class GFxResourceHandle GFx_CreateImageFileResourceHandle(class GFxResourceHandle * rh /* r25 */, class GFxLoadProcess * p /* r26 */, class GFxResourceId & rid /* r27 */, char * pimageFileName /* r21 */, char * pimageExportName /* r22 */, unsigned short bitmapFormat /* r28 */, unsigned short targetWidth /* r29 */, unsigned short targetHeight /* r30 */) {
    // References
    // -> struct {} __vt__16GFxImageFileInfo;
    // -> struct {} __vt__19GFxResourceFileInfo;
}
// Range: 0x80585810 -> 0x80585A08
void GFx_DefineExternalImageLoader(class GFxLoadProcess * p /* r25 */, class GFxTagInfo & tagInfo /* r26 */) {
    // Local variables
    unsigned int bitmapResourceId; // r27
    char * pimageExportName; // r30
    char * pimageFileName; // r23
}
// Range: 0x80585A10 -> 0x805867BC
void GFx_FontTextureInfoLoader(class GFxLoadProcess * p /* r1+0x8 */, class GFxTagInfo & tagInfo /* r15 */) {
    // Local variables
    unsigned int textureId; // r16
    char * pimageFileName; // r1+0x5C
    class GFxResourceHandle rh; // r1+0x38
    class garray texGlyphsInTexture; // r1+0x50
    unsigned int numTexGlyphs; // r0
    unsigned int i; // r30
    unsigned int numFonts; // r0

    {
        // Range: 0x80585CC0 -> 0x80586198
        // Local variables
        float uvOriginY; // f26
        float uvOriginX; // f27
        float uvBoundsBottom; // f28
        float uvBoundsRight; // f29
        float uvBoundsTop; // f30
        float uvBoundsLeft; // f31
    }
    {
        // Range: 0x80586220 -> 0x8058665C
        // Local variables
        unsigned int numGlyphsInFont; // r0
        class GFxFontData * pfd; // r15

        {
            // Range: 0x8058622C -> 0x80586650
            // Local variables
            unsigned int i; // r17

            {
                // Range: 0x8058622C -> 0x80586650
                // Local variables
                unsigned int indexInTexture; // r0
                unsigned int indexInFont; // r20
            }
        }
    }

    // References
    // -> struct {} __vt__19GFxTextureGlyphData;
    // -> struct {} __vt__15GFxTextureGlyph;
}
// Range: 0x805867C0 -> 0x80586948
void GFx_DefineExternalGradientImageLoader(class GFxLoadProcess * p /* r28 */, class GFxTagInfo & tagInfo /* r29 */) {
    // Local variables
    unsigned int bitmapResourceId; // r30
    char * pimageFileName; // r25
}
// signature: GFx_DefineGradientMapLoader(GFxLoadProcess *, const GFxTagInfo &)
// Range: 0x80586950 -> 0x80586964
void GFx_DefineGradientMapLoader() {
}
