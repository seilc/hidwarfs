/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxString.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805525D0 -> 0x80554508
*/
class DataDesc NullData; // size: 0x10, address: 0x8073C728
// Range: 0x805525D0 -> 0x805525F4
void * GFxString::GFxString() {
    // References
    // -> class DataDesc NullData;
}
// Range: 0x80552600 -> 0x805526C4
void * GFxString::GFxString(class GFxString * this /* r29 */, char * data /* r30 */) {
    // Local variables
    unsigned long size; // r31
    unsigned long new_size; // r0

    // References
    // -> class DataDesc NullData;
}
// Range: 0x805526D0 -> 0x80552790
void * GFxString::GFxString(class GFxString * this /* r29 */, char * _data /* r30 */, unsigned long buflen /* r31 */) {
    // Local variables
    unsigned long size; // reg65535
    unsigned long new_size; // r0

    // References
    // -> class DataDesc NullData;
}
// Range: 0x80552790 -> 0x805527F8
unsigned long GFxString::GetLength(class GFxString * this /* r31 */) const {
    // Local variables
    unsigned long length; // r3
}
// signature: GFxString::GetCharAt(unsigned long) const
// Range: 0x80552800 -> 0x80552854
unsigned long GFxString::GetCharAt() const {
    // Local variables
    long i; // r31
    char * buf; // r1+0x8
    unsigned long c; // r0
}
// Range: 0x80552860 -> 0x805529A0
void GFxString::Resize(class GFxString * this /* r31 */, unsigned long newSize /* r28 */) {
    // Local variables
    bool flag; // r29

    {
        // Range: 0x805528D8 -> 0x80552918
        // Local variables
        unsigned long newBuffSize; // r0
    }
    {
        // Range: 0x80552918 -> 0x80552980
        // Local variables
        class DataDesc * pNewNode; // r0
        unsigned long newBuffSize; // r0
    }
}
// signature: GFxString::AppendChar(unsigned long)
// Range: 0x805529A0 -> 0x80552B08
void GFxString::AppendChar(class GFxString * this /* r30 */) {
    // Local variables
    char buff[8]; // r1+0x10
    unsigned long index; // reg65535
    unsigned long index_now; // r0
    unsigned long curr_size; // r0
    long encodeSize; // r1+0x8
    unsigned long num_bytes_added; // r31
    unsigned long new_size; // r29

    {
        // Range: 0x80552A54 -> 0x80552AF0
        // Local variables
        class DataDesc * pNewNode; // r0
        unsigned long new_size_rounded; // r0
    }
}
// Range: 0x80552B10 -> 0x80552C40
void GFxString::AppendString(class GFxString * this /* r31 */, wchar_t * pstr /* r26 */, long len /* r27 */) {
    // Local variables
    long srcSize; // r0
    unsigned long origSize; // r29
    unsigned long size; // r28

    {
        // Range: 0x80552BB0 -> 0x80552C28
        // Local variables
        class DataDesc * pNewNode; // r0
        unsigned long new_size_rounded; // r0
    }
}
// Range: 0x80552C40 -> 0x80552D98
void GFxString::AppendString(class GFxString * this /* r30 */, char * putf8str /* r26 */, long utf8StrSz /* r31 */) {
    // Local variables
    unsigned long origSize; // r27
    unsigned long size; // r29

    {
        // Range: 0x80552CFC -> 0x80552D80
        // Local variables
        class DataDesc * pNewNode; // r0
        unsigned long new_size_rounded; // r0
    }
}
// Range: 0x80552DA0 -> 0x80552E14
class DataDesc * GFxString::AllocNewNode(unsigned long newSizeRounded /* r28 */, int refCount /* r29 */, unsigned long newSize /* r30 */, bool flag /* r31 */) {
    // Local variables
    class DataDesc * pNewData; // r3
}
// Range: 0x80552E20 -> 0x80552F40
void GFxString::operator=(class GFxString * this /* r27 */, char * str /* r28 */) {
    // Local variables
    unsigned long size; // r29

    {
        // Range: 0x80552EBC -> 0x80552F28
        // Local variables
        class DataDesc * pNewNode; // r0
        unsigned long new_size; // r0
    }
}
// Range: 0x80552F40 -> 0x80553048
void GFxString::operator=(class GFxString * this /* r27 */, wchar_t * wstr /* r28 */) {
    // Local variables
    unsigned long size; // r0

    {
        // Range: 0x80552FD4 -> 0x80553030
        // Local variables
        class DataDesc * pNewNode; // r0
        unsigned long new_size; // r0
    }
}
// Range: 0x80553050 -> 0x805530CC
void GFxString::operator=(class GFxString * this /* r30 */, class GFxString & src /* r31 */) {
}
// Range: 0x805530D0 -> 0x80553278
void GFxString::operator+=(class GFxString * this /* r28 */, class GFxString & src /* r29 */) {
    // Local variables
    unsigned long srcSize; // r31
    unsigned long origSize; // r30
    unsigned long size; // r26
    bool flag; // r25

    {
        // Range: 0x805531BC -> 0x80553260
        // Local variables
        class DataDesc * pNewNode; // r0
        unsigned long new_size_rounded; // r0
    }
}
// Range: 0x80553280 -> 0x805533D0
void GFxString::operator+=(class GFxString * this /* r29 */, char * str /* r30 */) {
    // Local variables
    unsigned long srcSize; // r31
    unsigned long origSize; // r26
    unsigned long size; // r25

    {
        // Range: 0x80553330 -> 0x805533B8
        // Local variables
        class DataDesc * pNewNode; // r0
        unsigned long new_size_rounded; // r0
    }
}
// Range: 0x805533D0 -> 0x80553540
void GFxString::operator+=(class GFxString * this /* r30 */, char str /* r1+0x8 */) {
    // Local variables
    unsigned long srcSize; // r0
    unsigned long origSize; // r31
    unsigned long size; // r27
    bool flag; // r26

    {
        // Range: 0x80553494 -> 0x80553528
        // Local variables
        class DataDesc * pNewNode; // r0
        unsigned long new_size_rounded; // r0
    }
}
// signature: GFxString::operator+(const char *) const
// Range: 0x80553540 -> 0x80553578
class GFxString GFxString::operator+() const {
}
// signature: GFxString::operator+(const GFxString &) const
// Range: 0x80553580 -> 0x805535A8
class GFxString GFxString::operator+() const {
}
// Range: 0x805535B0 -> 0x805536C0
void GFxString::Remove(class GFxString * this /* r29 */, unsigned long posAt /* r30 */, long len /* r31 */) {
    // Local variables
    bool flag; // r28

    {
        // Range: 0x80553600 -> 0x805536A8
        // Local variables
        class DataDesc * pNewNode; // r0
        unsigned long bufSize; // r26
        unsigned long size; // r0
    }

    // References
    // -> class DataDesc NullData;
}
// Range: 0x805536C0 -> 0x80553850
void GFxString::InternalRemove(class GFxString * this /* r29 */, unsigned long posAt /* r30 */, long len /* r31 */) {
    // Local variables
    unsigned long length; // r0
    long bytePos; // r0
    long bytePosNext; // r0
    long charSize; // r30

    // References
    // -> class DataDesc NullData;
}
// Range: 0x80553850 -> 0x80553AD8
class GFxString GFxString::Substring(class GFxString * this /* r27 */, unsigned long start /* r29 */, unsigned long end /* r28 */) {
    // Local variables
    unsigned long len; // r0
    long bytePosStart; // r0
    long bytePosEnd; // r0

    // References
    // -> class DataDesc NullData;
}
// Range: 0x80553AE0 -> 0x80553B54
void GFxString::Clear(class GFxString * this /* r31 */) {
    // References
    // -> class DataDesc NullData;
}
// Range: 0x80553B60 -> 0x80553C64
class GFxString GFxString::ToUpper() const {
    // Local variables
    char * buf; // r1+0xC
    class GFxString str; // r1+0x8

    {
        // Range: 0x80553BA8 -> 0x80553C44
        // Local variables
        unsigned long c; // r0
    }

    // References
    // -> class __locale _current_locale;
    // -> class DataDesc NullData;
}
// Range: 0x80553C70 -> 0x80553D74
class GFxString GFxString::ToLower() const {
    // Local variables
    char * buf; // r1+0xC
    class GFxString str; // r1+0x8

    {
        // Range: 0x80553CB8 -> 0x80553D54
        // Local variables
        unsigned long c; // r0
    }

    // References
    // -> class __locale _current_locale;
    // -> class DataDesc NullData;
}
// signature: GFxString::Insert(const char *, unsigned long, long)
// Range: 0x80553D80 -> 0x80553F24
class GFxString & GFxString::Insert(class GFxString * this /* r27 */, char * substr /* r28 */, unsigned long posAt /* r29 */) {
    // Local variables
    unsigned long subLen; // r30
    unsigned long curr_size; // r0
    unsigned long new_size; // r24
    unsigned long byteIndex; // reg65535

    {
        // Range: 0x80553DF4 -> 0x80553E64
        // Local variables
        char * pbuf; // r24
    }
    {
        // Range: 0x80553E64 -> 0x80553F08
        // Local variables
        char * pbuf; // r24
        class DataDesc * pNewNode; // r0
        unsigned long new_size_rounded; // r0
    }
}
// signature: GFxString::CompareNoCase(const char *, const char *)
// Range: 0x80553F30 -> 0x80553F34
int GFxString::CompareNoCase() {
}
// signature: GFxString::CompareNoCase(const char *, const char *, long)
// Range: 0x80553F40 -> 0x80554048
int GFxString::CompareNoCase() {
    {
        // Range: 0x80553F48 -> 0x80554028
        // Local variables
        char * s; // r10
        long slen; // r31
        long l; // r9
        long f; // r8
    }

    // References
    // -> class __locale _current_locale;
}
// signature: GFxString::BernsteinHashFunction(const void *, unsigned long, unsigned long)
// Range: 0x80554050 -> 0x80554114
unsigned long GFxString::BernsteinHashFunction() {
    // Local variables
    unsigned char * pdata; // r0
    unsigned long h; // r5
}
// signature: GFxString::BernsteinHashFunctionCIS(const void *, unsigned long, unsigned long)
// Range: 0x80554120 -> 0x80554180
unsigned long GFxString::BernsteinHashFunctionCIS() {
    // Local variables
    unsigned char * data; // r0
    unsigned long h; // r5

    // References
    // -> class __locale _current_locale;
}
// signature: GFxString::EscapeSpecialHTML(const char *, unsigned long, GFxString *)
// Range: 0x80554180 -> 0x80554258
void GFxString::EscapeSpecialHTML(char * psrc /* r1+0x8 */, class GFxString * pescapedStr /* r31 */) {
    // Local variables
    unsigned long ch; // r4
}
// signature: GFxString::UnescapeSpecialHTML(const char *, unsigned long, GFxString *)
// Range: 0x80554260 -> 0x805543A4
void GFxString::UnescapeSpecialHTML(char * psrc /* r1+0x8 */, class GFxString * punescapedStr /* r29 */) {
    // Local variables
    unsigned long ch; // r30
}
// Range: 0x805543B0 -> 0x80554420
void * GFxWStringBuffer::~GFxWStringBuffer(class GFxWStringBuffer * this /* r30 */) {
}
// Range: 0x80554420 -> 0x80554508
bool GFxWStringBuffer::Resize(class GFxWStringBuffer * this /* r29 */, unsigned long size /* r30 */) {
    {
        // Range: 0x80554440 -> 0x805544D0
        // Local variables
        wchar_t * palloc; // r31
    }
}
