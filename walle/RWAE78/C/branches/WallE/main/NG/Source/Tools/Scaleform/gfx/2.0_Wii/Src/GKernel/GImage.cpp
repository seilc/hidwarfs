/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GKernel\GImage.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805CE9F0 -> 0x805D0FFC
*/
// total size: 0x40C
class GImageColorMap {
    // Members
    unsigned int StartIndex; // offset 0x0, size 0x4
    unsigned int NumEntries; // offset 0x4, size 0x4
    bool HasAlpha; // offset 0x8, size 0x1
    class Entry Entries[256]; // offset 0xC, size 0x400
};
// total size: 0x4
class Entry {
    // Members
    unsigned long R : 8; // offset 0x0, size 0x4, bit offset 0
    unsigned long G : 8; // offset 0x0, size 0x4, bit offset 8
    unsigned long B : 8; // offset 0x0, size 0x4, bit offset 16
    unsigned long A : 8; // offset 0x0, size 0x4, bit offset 24
};
// total size: 0x18
class GImage_DDSFormatDescr {
    // Members
    unsigned long RGBBitCount; // offset 0x0, size 0x4
    unsigned long RBitMask; // offset 0x4, size 0x4
    unsigned long GBitMask; // offset 0x8, size 0x4
    unsigned long BBitMask; // offset 0xC, size 0x4
    unsigned long ABitMask; // offset 0x10, size 0x4
    bool HasAlpha; // offset 0x14, size 0x1
};
struct {} __vt__6GImage; // size: 0xC, address: 0x8073FA68
// signature: GImageBase::SetPixelRGBA(int, int, unsigned long)
// Range: 0x805CE9F0 -> 0x805CEAA4
void GImageBase::SetPixelRGBA() {
}
// signature: GImageBase::GetMipMapLevelData(unsigned int, unsigned int *, unsigned int *, unsigned int *)
// Range: 0x805CEAB0 -> 0x805CECA4
unsigned char * GImageBase::GetMipMapLevelData() {
    // Local variables
    unsigned long w; // r8
    unsigned long h; // r12
    unsigned char * plevelData; // r0

    {
        // Range: 0x805CEB10 -> 0x805CEB10
        // Local variables
        unsigned int i; // r0
    }
}
// Range: 0x805CED60 -> 0x805CEF94
void * GImage::GImage(class GImage * this /* r28 */, enum ImageFormat format /* r29 */, unsigned long width /* r30 */, unsigned long height /* r31 */) {
    // References
    // -> struct {} __vt__6GImage;
}
// Range: 0x805CEFA0 -> 0x805CF038
void * GImage::~GImage(class GImage * this /* r30 */) {
    // References
    // -> struct {} __vt__6GImage;
}
// Range: 0x805CF040 -> 0x805CF2E8
class GImage * GImage::CreateImage(enum ImageFormat format /* r28 */, unsigned long width /* r29 */, unsigned long height /* r30 */) {
    // References
    // -> struct {} __vt__6GImage;
}
// signature: ConvertScanline(const unsigned char *, unsigned int, GImageBase::ImageFormat, unsigned int, unsigned char *, unsigned int, GImageBase::ImageFormat, unsigned int, void *)
// Range: 0x805CF2F0 -> 0x805CF578
static bool ConvertScanline(void * pextraInfo /* r11 */) {
    // Local variables
    unsigned int srcDelta; // r0
    unsigned int dstDelta; // r4

    {
        // Range: 0x805CF318 -> 0x805CF32C
        // Local variables
        unsigned int j; // r9
        unsigned int i; // r8
    }
    {
        // Range: 0x805CF364 -> 0x805CF37C
        // Local variables
        unsigned int j; // r31
        unsigned int i; // r12
    }
    {
        // Range: 0x805CF3BC -> 0x805CF4C4
        // Local variables
        class GImageColorMap * pcolorMap; // r0

        {
            // Range: 0x805CF3CC -> 0x805CF428
            // Local variables
            unsigned int j; // r30
            unsigned int i; // r31

            {
                // Range: 0x805CF3CC -> 0x805CF428
                // Local variables
                class Entry & cmEntry; // r0
            }
        }
        {
            // Range: 0x805CF454 -> 0x805CF4A4
            // Local variables
            unsigned int j; // r31
            unsigned int i; // r30

            {
                // Range: 0x805CF454 -> 0x805CF4A4
                // Local variables
                class Entry & cmEntry; // r0
            }
        }
    }
    {
        // Range: 0x805CF4D4 -> 0x805CF4EC
        // Local variables
        unsigned int j; // r11
        unsigned int i; // r9
    }
    {
        // Range: 0x805CF51C -> 0x805CF538
        // Local variables
        unsigned int j; // r12
        unsigned int i; // r11
    }
}
// Range: 0x805CF580 -> 0x805CFFA8
class GImage * GImage::ReadTga(class GFile * pin /* r30 */, enum ImageFormat destFormat /* r31 */) {
    // Local variables
    class GImageColorMap colorMap; // r1+0x4028
    unsigned int cmEntrySize; // r23
    enum ImageFormat format; // r21
    int srcScanLineSize; // r20
    int dstScanLineSize; // r19
    unsigned char destBitsPerPixel; // r18

    {
        // Range: 0x805CF908 -> 0x805CFA50
        {
            // Range: 0x805CF958 -> 0x805CFA40
            // Local variables
            unsigned int i; // r24
        }
    }
    {
        // Range: 0x805CFA60 -> 0x805CFF58
        // Local variables
        unsigned int y; // r15
        int ysl; // r16
        unsigned char scanlineBuf[16384]; // r1+0x28
        unsigned char * pscanline; // r17

        {
            // Range: 0x805CFAA4 -> 0x805CFEFC
            // Local variables
            unsigned char * pcurScanline; // r22

            {
                // Range: 0x805CFAAC -> 0x805CFAAC
                // Local variables
                unsigned int wx; // r0
                unsigned int x; // r4

                {
                    // Range: 0x805CFAAC -> 0x805CFAAC
                    // Local variables
                    unsigned char b; // r5
                }
            }
            {
                // Range: 0x805CFAAC -> 0x805CFAAC
                // Local variables
                unsigned int wx; // r0
                unsigned int x; // r4

                {
                    // Range: 0x805CFAAC -> 0x805CFAAC
                    // Local variables
                    unsigned char b; // r5
                }
            }
            {
                // Range: 0x805CFE70 -> 0x805CFE7C
                // Local variables
                unsigned int i; // r8
            }
        }
    }
}
// signature: GImage::ReadJpeg(GFile *)
// Range: 0x805CFFB0 -> 0x805D00EC
class GImage * GImage::ReadJpeg() {
    // Local variables
    class GJPEGInput * pjin; // r30
    class GImage * pimage; // r31

    {
        // Range: 0x805D0040 -> 0x805D0094
        // Local variables
        unsigned int y; // r29
    }
}
// signature: GImage::ReadSwfJpeg2(GFile *)
// Range: 0x805D00F0 -> 0x805D0184
class GImage * GImage::ReadSwfJpeg2() {
    // Local variables
    class GJPEGInput * pjin; // r31
    class GImage * pimage; // r30
}
// Range: 0x805D0190 -> 0x805D02D8
class GImage * GImage::ReadSwfJpeg2WithTables(class GJPEGInput * pjin /* r29 */) {
    // Local variables
    class GImage * pimage; // r31

    {
        // Range: 0x805D0230 -> 0x805D0284
        // Local variables
        unsigned int y; // r30
    }
}
// signature: GImage::ReadSwfJpeg3(GFile *)
// Range: 0x805D02E0 -> 0x805D062C
class GImage * GImage::ReadSwfJpeg3() {
    // Local variables
    class GJPEGInput * pjin; // r30
    class GImage * pimage; // r29

    {
        // Range: 0x805D0380 -> 0x805D05DC
        // Local variables
        unsigned char * line; // r27
        unsigned int width; // r28

        {
            // Range: 0x805D03A0 -> 0x805D05B4
            // Local variables
            unsigned int y; // r26

            {
                // Range: 0x805D03A0 -> 0x805D05B4
                {
                    // Range: 0x805D03A4 -> 0x805D03F0
                    // Local variables
                    unsigned int x; // r12
                }
            }
        }
    }
}
// signature: GImage_ParseDDSHeader(GImageBase *, const unsigned char *, const unsigned char **, GImage_DDSFormatDescr *)
// Range: 0x805D0630 -> 0x805D0908
static bool GImage_ParseDDSHeader(unsigned char * buf /* r7 */) {
}
// signature: GFx_CalcShiftByMask(unsigned long)
// Range: 0x805D0910 -> 0x805D0978
static unsigned char GFx_CalcShiftByMask() {
    // Local variables
    unsigned int shifts; // r4
}
// Range: 0x805D0980 -> 0x805D0C4C
static void PostProcessUDDSData(class GImage * pimage /* r25 */, class GImage_DDSFormatDescr & ddsFmt /* r26 */) {
    {
        // Range: 0x805D0994 -> 0x805D0C34
        // Local variables
        unsigned char shiftA; // r28
        unsigned char shiftB; // r29
        unsigned char shiftG; // r30
        unsigned char shiftR; // r31

        {
            // Range: 0x805D09FC -> 0x805D0C24
            // Local variables
            unsigned int curlevel; // r27

            {
                // Range: 0x805D09FC -> 0x805D0C24
                // Local variables
                unsigned char * pimgData; // r0
                unsigned int pitch; // r1+0x8
                unsigned int h; // r1+0xC
                unsigned int w; // r1+0x10

                {
                    // Range: 0x805D0A00 -> 0x805D0C14
                    // Local variables
                    unsigned int y; // r4

                    {
                        // Range: 0x805D0A00 -> 0x805D0C14
                        // Local variables
                        unsigned char * p; // r0

                        {
                            // Range: 0x805D0A00 -> 0x805D0A00
                            // Local variables
                            unsigned int wx; // r5
                            unsigned int x; // r9

                            {
                                // Range: 0x805D0A00 -> 0x805D0A00
                                // Local variables
                                unsigned long val; // r10
                            }
                        }
                        {
                            // Range: 0x805D0A00 -> 0x805D0C0C
                            // Local variables
                            unsigned int wx; // r6
                            unsigned int x; // r9

                            {
                                // Range: 0x805D0A00 -> 0x805D0C0C
                                // Local variables
                                unsigned long val; // r10
                            }
                        }
                    }
                }
            }
        }
    }
}
// Range: 0x805D0C50 -> 0x805D0FFC
class GImage * GImage::ReadDDS(class GFile * pin /* r30 */) {
    // Local variables
    class GImageBase imageBase; // r1+0x28
    int fileSize; // r0
    unsigned char buf[256]; // r1+0x50
    class GImage_DDSFormatDescr ddsFmt; // r1+0x10
    int dataSize; // r31
    unsigned char * pdata; // r28

    // References
    // -> struct {} __vt__6GImage;
}
