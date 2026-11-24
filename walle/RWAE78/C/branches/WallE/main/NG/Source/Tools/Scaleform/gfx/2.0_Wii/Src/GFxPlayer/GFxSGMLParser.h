/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxStyledText.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Source file: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxSGMLParser.h
*/
// Range: 0x80579970 -> 0x80579DA8
unsigned long GFxSGMLCharIter<wchar_t>::DecodeEscapedChar(class GFxSGMLCharIter * this /* r31 */) {
    {
        // Range: 0x80579B0C -> 0x80579D88
        // Local variables
        unsigned long code; // r3

        {
            // Range: 0x80579B68 -> 0x80579C30
            // Local variables
            wchar_t c; // r0
        }
    }

    // References
    // -> class __locale _current_locale;
}
// Range: 0x80579F80 -> 0x8057A3C8
unsigned long GFxSGMLCharIter<char>::DecodeEscapedChar(class GFxSGMLCharIter * this /* r31 */) {
    {
        // Range: 0x8057A11C -> 0x8057A3A8
        // Local variables
        unsigned long code; // r3

        {
            // Range: 0x8057A17C -> 0x8057A254
            // Local variables
            char c; // r6
        }
    }

    // References
    // -> class __locale _current_locale;
}
// signature: GFxSGMLCharIter<wchar_t>::StrCompare(const wchar_t *, const char *, unsigned long)
// Range: 0x80579870 -> 0x80579968
int GFxSGMLCharIter<wchar_t>::StrCompare() {
    {
        // Range: 0x80579878 -> 0x80579948
        // Local variables
        char * s; // r10
        long slen; // r31
        int l; // r0
        int f; // r0
    }

    // References
    // -> class __locale _current_locale;
}
// signature: GFxSGMLCharIter<char>::StrCompare(const char *, const char *, unsigned long)
// Range: 0x80579E80 -> 0x80579F80
int GFxSGMLCharIter<char>::StrCompare() {
    {
        // Range: 0x80579E88 -> 0x80579F60
        // Local variables
        char * s; // r10
        long slen; // r31
        int l; // r0
        int f; // r0
    }

    // References
    // -> class __locale _current_locale;
}
// signature: GFxSGMLCharIter<wchar_t>::StrCompare(const wchar_t *, unsigned long, const wchar_t *, unsigned long)
// Range: 0x805797B0 -> 0x80579868
int GFxSGMLCharIter<wchar_t>::StrCompare() {
    {
        // Range: 0x805797B0 -> 0x80579860
        // Local variables
        long dlen; // r11
        long slen; // r10
        int l; // r0
        int f; // r0
    }

    // References
    // -> class __locale _current_locale;
}
// signature: GFxSGMLCharIter<char>::StrCompare(const char *, unsigned long, const char *, unsigned long)
// Range: 0x80579DB0 -> 0x80579E78
int GFxSGMLCharIter<char>::StrCompare() {
    {
        // Range: 0x80579DB0 -> 0x80579E70
        // Local variables
        long dlen; // r12
        long slen; // r11
        int l; // r0
        int f; // r0
    }

    // References
    // -> class __locale _current_locale;
}
// Range: 0x8057D5A0 -> 0x8057D62C
void GFxSGMLParser<char>::AppendToBuf(class GFxSGMLParser * this /* r29 */, char * pstr /* r30 */, unsigned long sz /* r31 */) {
}
// Range: 0x8057E2B0 -> 0x8057E344
void GFxSGMLParser<wchar_t>::AppendToBuf(class GFxSGMLParser * this /* r29 */, wchar_t * pstr /* r30 */, unsigned long sz /* r31 */) {
}
// Range: 0x8057D510 -> 0x8057D59C
void GFxSGMLParser<char>::AppendCharToBuf(class GFxSGMLParser * this /* r30 */, unsigned long uniChar /* r31 */) {
}
// Range: 0x8057E230 -> 0x8057E2AC
void GFxSGMLParser<wchar_t>::AppendCharToBuf(class GFxSGMLParser * this /* r30 */, unsigned long uniChar /* r31 */) {
}
// Range: 0x8057B0C0 -> 0x8057B5C0
int GFxSGMLParser<char>::GetNext(class GFxSGMLParser * this /* r31 */) {
    // Local variables
    enum GFxSGMLParserState newState; // r29
}
// Range: 0x8057C290 -> 0x8057C790
int GFxSGMLParser<wchar_t>::GetNext(class GFxSGMLParser * this /* r31 */) {
    // Local variables
    enum GFxSGMLParserState newState; // r29
}
// Range: 0x8057AF70 -> 0x8057B0B8
bool GFxSGMLParser<char>::GetNextAttribute(class GFxSGMLParser * this /* r29 */, char * * ppattrName /* r30 */, unsigned long * pattrNameSz /* r31 */) {
    // Local variables
    bool rv; // r27
}
// Range: 0x8057C140 -> 0x8057C288
bool GFxSGMLParser<wchar_t>::GetNextAttribute(class GFxSGMLParser * this /* r29 */, wchar_t * * ppattrName /* r30 */, unsigned long * pattrNameSz /* r31 */) {
    // Local variables
    bool rv; // r27
}
// Range: 0x8057AC60 -> 0x8057AF64
bool GFxSGMLParser<char>::GetNextAttributeValue(class GFxSGMLParser * this /* r25 */, char * * ppattrValue /* r26 */, unsigned long * pattrValueSz /* r27 */) {
    // Local variables
    bool rv; // r29

    {
        // Range: 0x8057AC74 -> 0x8057AF30
        {
            // Range: 0x8057AC94 -> 0x8057AF24
            // Local variables
            bool isInBuf; // r28
        }
    }
}
// Range: 0x8057BE20 -> 0x8057C140
bool GFxSGMLParser<wchar_t>::GetNextAttributeValue(class GFxSGMLParser * this /* r25 */, wchar_t * * ppattrValue /* r26 */, unsigned long * pattrValueSz /* r27 */) {
    // Local variables
    bool rv; // r29

    {
        // Range: 0x8057BE34 -> 0x8057C10C
        {
            // Range: 0x8057BE54 -> 0x8057C100
            // Local variables
            bool isInBuf; // r28
        }
    }
}
// Range: 0x8057D630 -> 0x8057D8D8
void GFxSGMLParser<char>::ParseName(class GFxSGMLParser * this /* r26 */, char * * ppname /* r27 */, unsigned long * plen /* r28 */) {
    // Local variables
    bool isInBuf; // r29

    // References
    // -> class __locale _current_locale;
}
// Range: 0x8057E350 -> 0x8057E614
void GFxSGMLParser<wchar_t>::ParseName(class GFxSGMLParser * this /* r26 */, wchar_t * * ppname /* r27 */, unsigned long * plen /* r28 */) {
    // Local variables
    bool isInBuf; // r29

    // References
    // -> class __locale _current_locale;
}
// signature: GFxSGMLParser<char>::ParseStartElement(const char **, unsigned long *)
// Range: 0x8057AB70 -> 0x8057AC5C
bool GFxSGMLParser<char>::ParseStartElement(class GFxSGMLParser * this /* r30 */) {
    // Local variables
    bool rv; // r31
}
// signature: GFxSGMLParser<wchar_t>::ParseStartElement(const wchar_t **, unsigned long *)
// Range: 0x8057BD30 -> 0x8057BE1C
bool GFxSGMLParser<wchar_t>::ParseStartElement(class GFxSGMLParser * this /* r30 */) {
    // Local variables
    bool rv; // r31
}
// signature: GFxSGMLParser<char>::ParseEndElement(const char **, unsigned long *)
// Range: 0x8057AAA0 -> 0x8057AB6C
bool GFxSGMLParser<char>::ParseEndElement(class GFxSGMLParser * this /* r30 */) {
    // Local variables
    bool rv; // r31
}
// signature: GFxSGMLParser<wchar_t>::ParseEndElement(const wchar_t **, unsigned long *)
// Range: 0x8057BC60 -> 0x8057BD2C
bool GFxSGMLParser<wchar_t>::ParseEndElement(class GFxSGMLParser * this /* r30 */) {
    // Local variables
    bool rv; // r31
}
// Range: 0x8057A790 -> 0x8057AA94
bool GFxSGMLParser<char>::ParseContent(class GFxSGMLParser * this /* r26 */, char * * ppContent /* r27 */, unsigned long * pcontentSize /* r28 */) {
    {
        // Range: 0x8057A7A4 -> 0x8057AA68
        // Local variables
        bool isInBuf; // r29
    }

    // References
    // -> class __locale _current_locale;
}
// Range: 0x8057B940 -> 0x8057BC5C
bool GFxSGMLParser<wchar_t>::ParseContent(class GFxSGMLParser * this /* r26 */, wchar_t * * ppContent /* r27 */, unsigned long * pcontentSize /* r28 */) {
    {
        // Range: 0x8057B954 -> 0x8057BC30
        // Local variables
        bool isInBuf; // r29
    }

    // References
    // -> class __locale _current_locale;
}
// Range: 0x8057C920 -> 0x8057CA4C
void GFxSGMLParser<wchar_t>::SkipName(class GFxSGMLParser * this /* r31 */) {
    // References
    // -> class __locale _current_locale;
}
// Range: 0x8057E100 -> 0x8057E22C
void GFxSGMLParser<char>::SkipName(class GFxSGMLParser * this /* r31 */) {
    // References
    // -> class __locale _current_locale;
}
// Range: 0x8057CA50 -> 0x8057CB5C
void GFxSGMLParser<wchar_t>::SkipSpaces(class GFxSGMLParser * this /* r31 */) {
    // References
    // -> class __locale _current_locale;
}
// Range: 0x8057DFF0 -> 0x8057E0FC
void GFxSGMLParser<char>::SkipSpaces(class GFxSGMLParser * this /* r31 */) {
    // References
    // -> class __locale _current_locale;
}
// Range: 0x8057D8E0 -> 0x8057DE84
void GFxSGMLParser<char>::SkipAttribute(class GFxSGMLParser * this /* r31 */) {
    // References
    // -> class __locale _current_locale;
}
// Range: 0x8057E620 -> 0x8057EBC4
void GFxSGMLParser<wchar_t>::SkipAttribute(class GFxSGMLParser * this /* r31 */) {
    // References
    // -> class __locale _current_locale;
}
// Range: 0x8057CB60 -> 0x8057CCB4
void GFxSGMLParser<wchar_t>::SkipComment(class GFxSGMLParser * this /* r31 */) {
    // Local variables
    int state; // r30
}
// Range: 0x8057DE90 -> 0x8057DFE4
void GFxSGMLParser<char>::SkipComment(class GFxSGMLParser * this /* r31 */) {
    // Local variables
    int state; // r30
}
// signature: GFxSGMLParser<char>::ParseInt(int *, const char *, unsigned long)
// Range: 0x8057A6B0 -> 0x8057A784
bool GFxSGMLParser<char>::ParseInt() {
    // Local variables
    int v; // r9
    int sign; // r10
    char * p; // r4

    {
        // Range: 0x8057A714 -> 0x8057A764
        // Local variables
        unsigned long i; // r0
    }

    // References
    // -> class __locale _current_locale;
}
// signature: GFxSGMLParser<wchar_t>::ParseInt(int *, const wchar_t *, unsigned long)
// Range: 0x8057B870 -> 0x8057B940
bool GFxSGMLParser<wchar_t>::ParseInt() {
    // Local variables
    int v; // r8
    int sign; // r9
    wchar_t * p; // r4

    {
        // Range: 0x8057B8D4 -> 0x8057B920
        // Local variables
        unsigned long i; // r0
    }

    // References
    // -> class __locale _current_locale;
}
// signature: GFxSGMLParser<char>::ParseHexInt(unsigned long *, const char *, unsigned long)
// Range: 0x8057A5B0 -> 0x8057A6A4
bool GFxSGMLParser<char>::ParseHexInt() {
    // Local variables
    unsigned long v; // r9
    char * p; // r4

    {
        // Range: 0x8057A5E4 -> 0x8057A690
        // Local variables
        unsigned long i; // r0

        {
            // Range: 0x8057A5E4 -> 0x8057A690
            // Local variables
            char c; // r6
        }
    }

    // References
    // -> class __locale _current_locale;
}
// signature: GFxSGMLParser<wchar_t>::ParseHexInt(unsigned long *, const wchar_t *, unsigned long)
// Range: 0x8057B790 -> 0x8057B870
bool GFxSGMLParser<wchar_t>::ParseHexInt() {
    // Local variables
    unsigned long v; // r8
    wchar_t * p; // r4

    {
        // Range: 0x8057B7C4 -> 0x8057B85C
        // Local variables
        unsigned long i; // r0

        {
            // Range: 0x8057B7C4 -> 0x8057B85C
            // Local variables
            wchar_t c; // r0
        }
    }

    // References
    // -> class __locale _current_locale;
}
// signature: GFxSGMLParser<char>::ParseFloat(float *, const char *, unsigned long)
// Range: 0x8057A3D0 -> 0x8057A5A4
bool GFxSGMLParser<char>::ParseFloat() {
    // Local variables
    double v; // f3
    double sign; // f4
    char * p; // r4
    char * pend; // r10

    {
        // Range: 0x8057A4C8 -> 0x8057A58C
        // Local variables
        double frac; // f5
    }

    // References
    // -> class __locale _current_locale;
}
// signature: GFxSGMLParser<wchar_t>::ParseFloat(float *, const wchar_t *, unsigned long)
// Range: 0x8057B5C0 -> 0x8057B788
bool GFxSGMLParser<wchar_t>::ParseFloat() {
    // Local variables
    double v; // f3
    double sign; // f4
    wchar_t * p; // r4
    wchar_t * pend; // r9

    {
        // Range: 0x8057B6B0 -> 0x8057B770
        // Local variables
        double frac; // f5
    }

    // References
    // -> class __locale _current_locale;
}
