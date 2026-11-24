/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxStream.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x805505C0 -> 0x805525C8
*/
// total size: 0xC
class garray : public garray_base {};
// total size: 0xC
class garray_base {
    // Members
    char * Buffer; // offset 0x0, size 0x4
    unsigned long Size; // offset 0x4, size 0x4
    unsigned long BufferSize; // offset 0x8, size 0x4
};
struct {} __vt__9GFxStream; // size: 0x10, address: 0x8073C718
// Range: 0x805505C0 -> 0x805506C4
void * GFxStream::GFxStream(class GFxStream * this /* r28 */, class GFile * pinput /* r29 */, class GFxLog * plog /* r30 */, class GFxParseControl * pparseControl /* r31 */) {
    // References
    // -> struct {} __vt__9GFxStream;
}
// Range: 0x805506D0 -> 0x80550748
void * GFxStream::~GFxStream(class GFxStream * this /* r30 */) {
}
// Range: 0x80550750 -> 0x8055083C
void GFxStream::Initialize(class GFxStream * this /* r28 */, class GFile * pinput /* r29 */, class GFxLog * plog /* r30 */, class GFxParseControl * pparseControl /* r31 */) {
}
// signature: GFxStream::ReadUInt(unsigned int)
// Range: 0x80550840 -> 0x8055092C
unsigned int GFxStream::ReadUInt(class GFxStream * this /* r30 */) {
    // Local variables
    unsigned long value; // r31
    int bitsNeeded; // r26

    {
        // Range: 0x80550860 -> 0x80550860
        // Local variables
        int ubits; // r5
    }
}
// Range: 0x80550930 -> 0x805509DC
unsigned int GFxStream::ReadUInt1(class GFxStream * this /* r31 */) {
    // Local variables
    unsigned long value; // r4
}
// Range: 0x805509E0 -> 0x80550A2C
int GFxStream::ReadSInt(unsigned int bitcount /* r31 */) {
    // Local variables
    long value; // r3
}
// signature: GFxStream::PopulateBuffer(int)
// Range: 0x80550A30 -> 0x80550B58
void GFxStream::PopulateBuffer(class GFxStream * this /* r31 */) {
    // Local variables
    int readSize; // r30
    int bytes; // r0
}
// Range: 0x80550B60 -> 0x80550B68
void GFxStream::PopulateBuffer1() {
}
// Range: 0x80550B70 -> 0x80550BDC
void GFxStream::SyncFileStream(class GFxStream * this /* r31 */) {
    // Local variables
    int pos; // r0
}
// Range: 0x80550BE0 -> 0x80550F74
char * GFxStream::ReadString(class GFxStream * this /* r29 */) {
    // Local variables
    class garray buffer; // r1+0x8
    char c; // r30
    char * retval; // r27
}
// Range: 0x80550F80 -> 0x8055106C
char * GFxStream::ReadStringWithLength(class GFxStream * this /* r31 */) {
    // Local variables
    int len; // r0

    {
        // Range: 0x80550FE0 -> 0x80551054
        // Local variables
        int i; // r26
        char * buffer; // r27
    }
}
// Range: 0x80551070 -> 0x8055112C
void GFxStream::SetPosition(class GFxStream * this /* r30 */, int pos /* r31 */) {
}
// Range: 0x80551130 -> 0x80551298
enum GFxTagType GFxStream::OpenTag(class GFxStream * this /* r28 */, class GFxTagInfo * pTagInfo /* r29 */) {
    // Local variables
    int tagHeader; // r0
    int tagType; // r31
    int tagLength; // r30
}
// Range: 0x805512A0 -> 0x805513DC
enum GFxTagType GFxStream::OpenTag(class GFxStream * this /* r31 */) {
    // Local variables
    int tagHeader; // r0
    int tagType; // r30
    int tagLength; // r29
}
// Range: 0x805513E0 -> 0x805514B8
void GFxStream::CloseTag(class GFxStream * this /* r31 */) {
}
// Range: 0x805514C0 -> 0x805514E8
int GFxStream::GetTagEndPosition() {
}
// Range: 0x805514F0 -> 0x80551838
void GFxStream::ReadMatrix(class GFxStream * this /* r30 */, class GMatrix2D * pm /* r31 */) {
    // Local variables
    int translateNbits; // r28

    {
        // Range: 0x805515B4 -> 0x80551658
        // Local variables
        unsigned int ScaleNbits; // r28
    }
    {
        // Range: 0x805516E0 -> 0x80551784
        // Local variables
        unsigned int rotateNbits; // r28
    }
}
// Range: 0x80551840 -> 0x80551B40
void GFxStream::ReadCxformRgb(class GFxStream * this /* r28 */, class Cxform * pcxform /* r29 */) {
    // Local variables
    unsigned int nbits; // r30
}
// Range: 0x80551B40 -> 0x80551EA8
void GFxStream::ReadCxformRgba(class GFxStream * this /* r28 */, class Cxform * pcxform /* r29 */) {
    // Local variables
    unsigned int nbits; // r30
}
// Range: 0x80551EB0 -> 0x80552000
void GFxStream::ReadRect(class GFxStream * this /* r29 */, class GRect * pr /* r30 */) {
    // Local variables
    int nbits; // r31
}
// Range: 0x80552000 -> 0x805520F8
void GFxStream::ReadRgb(class GFxStream * this /* r30 */, class GColor * pc /* r31 */) {
}
// Range: 0x80552100 -> 0x80552238
void GFxStream::ReadRgba(class GFxStream * this /* r30 */, class GColor * pc /* r31 */) {
}
// Range: 0x80552240 -> 0x80552248
class GFxLog * GFxStream::GetLog() const {
}
// Range: 0x80552250 -> 0x8055225C
bool GFxStream::IsVerboseParse() const {
}
// Range: 0x80552260 -> 0x8055226C
bool GFxStream::IsVerboseParseShape() const {
}
// Range: 0x80552270 -> 0x8055227C
bool GFxStream::IsVerboseParseAction() const {
}
// signature: GFxStream::LogParseClass(GColor)
// Range: 0x80552280 -> 0x805522C4
void GFxStream::LogParseClass(class GFxStream * this /* r31 */) {
    // Local variables
    char buff[512]; // r1+0x8
}
// Range: 0x805522D0 -> 0x80552394
void GFxStream::LogParseClass(class GFxStream * this /* r30 */, class GRect & rc /* r31 */) {
    // Local variables
    char buff[512]; // r1+0x8
}
// signature: GFxStream::LogParseClass(const GRenderer::Cxform &)
// Range: 0x805523A0 -> 0x805523E4
void GFxStream::LogParseClass(class GFxStream * this /* r31 */) {
    // Local variables
    char buff[512]; // r1+0x8
}
// signature: GFxStream::LogParseClass(const GMatrix2D &)
// Range: 0x805523F0 -> 0x80552434
void GFxStream::LogParseClass(class GFxStream * this /* r31 */) {
    // Local variables
    char buff[512]; // r1+0x8
}
// Range: 0x80552440 -> 0x805525B4
void GFxStream::LogTagBytes(class GFxStream * this /* r29 */) {
    // Local variables
    char rowBuf[16]; // r1+0x8
    int rowCount; // r30

    {
        // Range: 0x80552458 -> 0x80552548
        // Local variables
        unsigned int c; // r27

        {
            // Range: 0x805524F0 -> 0x8055250C
            // Local variables
            int i; // r27
        }
    }
}
