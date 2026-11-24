/*
    Compile unit: C:\branches\WallE\main\NG\Source\Tools\Scaleform\gfx\2.0_Wii\Src\GFxPlayer\GFxASString.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x8048D7F0 -> 0x8048F8F0
*/
// total size: 0x8
class table {
    // Members
    unsigned long EntryCount; // offset 0x0, size 0x4
    unsigned long SizeMask; // offset 0x4, size 0x4
};
// total size: 0x8
class ghashset_entry {
    // Members
    long Next_in_chain; // offset 0x0, size 0x4
    class GASStringNode * value; // offset 0x4, size 0x4
};
// signature: GASString::HashFunction(const char *, unsigned long)
// Range: 0x8048D7F0 -> 0x8048D818
unsigned long GASString::HashFunction() {
}
// Range: 0x8048D820 -> 0x8048D890
unsigned int GASString::GetLength(class GASString * this /* r30 */) const {
    // Local variables
    unsigned int length; // r3
}
// signature: GASString::GetCharAt(unsigned int) const
// Range: 0x8048D890 -> 0x8048D900
unsigned long GASString::GetCharAt() const {
    // Local variables
    int i; // r31
    char * buf; // r1+0x8
    unsigned long c; // r0
}
// signature: GASString::AppendChar(unsigned long)
// Range: 0x8048D900 -> 0x8048D974
class GASString GASString::AppendChar(class GASString * this /* r31 */) {
    // Local variables
    char buff[8]; // r1+0x10
    long index; // r1+0x8
}
// Range: 0x8048D980 -> 0x8048DA44
class GASString GASString::Substring(class GASString * this /* r26 */, int start /* r27 */, int end /* r28 */) const {
    // Local variables
    int index; // r31
    char * p; // r1+0x8
    char * start_pointer; // r30
    char * end_pointer; // r29

    {
        // Range: 0x8048D9D0 -> 0x8048DA08
        // Local variables
        unsigned long c; // r0
    }
}
// Range: 0x8048DA50 -> 0x8048DB0C
class GASString GASString::ToUpper(class GASString * this /* r31 */) const {
    // Local variables
    class GFxString str; // r1+0xC
}
// Range: 0x8048DB10 -> 0x8048DB88
class GASString GASString::ToLower(class GASString * this /* r31 */) const {
}
// Range: 0x8048DB90 -> 0x8048DC0C
void GASString::operator=(class GASString * this /* r30 */, char * pstr /* r31 */) {
}
// signature: GASString::operator+(const GASString &) const
// Range: 0x8048DC10 -> 0x8048DC68
class GASString GASString::operator+() const {
}
// Range: 0x8048DC70 -> 0x8048DD38
void GASStringNode::ResolveLowercase_Impl(class GASStringNode * this /* r31 */) {
    // Local variables
    class GFxString str; // r1+0xC
    class GASStringNode * pnode; // r0
}
// Range: 0x8048DD40 -> 0x8048E244
void GASStringNode::ReleaseNode(class GASStringNode * this /* r26 */) {
}
// Range: 0x8048E380 -> 0x8048E438
void * GASStringManager::GASStringManager(class GASStringManager * this /* r30 */) {
}
// Range: 0x8048EAC0 -> 0x8048ED24
void * GASStringManager::~GASStringManager(class GASStringManager * this /* r30 */) {
    // Local variables
    class GFxString leakReport; // r1+0x8
    unsigned int ileaks; // r28

    {
        // Range: 0x8048EAF4 -> 0x8048EB8C
        // Local variables
        class StringNodePage * ppage; // r27

        {
            // Range: 0x8048EAF8 -> 0x8048EB74
            // Local variables
            unsigned int i; // r26
        }
    }
    {
        // Range: 0x8048EB9C -> 0x8048EBB0
        // Local variables
        void * pmem; // r0
    }
}
// Range: 0x8048ED30 -> 0x8048EDCC
void GASStringManager::SetLeakReportLog(class GASStringManager * this /* r29 */, class GFxLog * plog /* r30 */, char * pfilename /* r31 */) {
}
// Range: 0x8048EDD0 -> 0x8048EFA4
void GASStringManager::AllocateStringNodes(class GASStringManager * this /* r31 */) {
    // Local variables
    class StringNodePage * ppage; // r3

    {
        // Range: 0x8048EE08 -> 0x8048EF8C
        // Local variables
        unsigned int i; // r12

        {
            // Range: 0x8048EE08 -> 0x8048EF8C
            // Local variables
            class GASStringNode * pnode; // r30
        }
    }
}
// Range: 0x8048EFB0 -> 0x8048F06C
void GASStringManager::AllocateTextBuffers(class GASStringManager * this /* r31 */) {
    // Local variables
    void * pp; // r0
    class TextPage * ppage; // r9

    {
        // Range: 0x8048EFF0 -> 0x8048F058
        // Local variables
        unsigned int i; // r0

        {
            // Range: 0x8048EFF0 -> 0x8048F058
            // Local variables
            class Entry * pe; // r10
        }
    }
}
// signature: GASStringManager::FreeTextBuffer(char *, unsigned long)
// Range: 0x8048F070 -> 0x8048F094
void GASStringManager::FreeTextBuffer() {
    {
        // Range: 0x8048F070 -> 0x8048F088
        // Local variables
        class Entry * pentry; // r0
    }
}
// Range: 0x8048F0A0 -> 0x8048F29C
class GASStringNode * GASStringManager::CreateConstStringNode(class GASStringManager * this /* r24 */, char * pstr /* r25 */, unsigned long length /* r26 */, unsigned long stringFlags /* r27 */) {
    // Local variables
    class GASStringNode * pnode; // r1+0xC
}
// Range: 0x8048F2A0 -> 0x8048F53C
class GASStringNode * GASStringManager::CreateStringNode(class GASStringManager * this /* r25 */, char * pstr /* r26 */, unsigned long length /* r27 */) {
    // Local variables
    class GASStringNode * pnode; // r1+0xC
}
// Range: 0x8048F540 -> 0x8048F59C
class GASStringNode * GASStringManager::CreateStringNode(class GASStringManager * this /* r30 */, char * pstr /* r31 */) {
}
// Range: 0x8048F5A0 -> 0x8048F634
class GASStringNode * GASStringManager::CreateStringNode(class GASStringManager * this /* r30 */, wchar_t * pwstr /* r31 */) {
    // Local variables
    class GFxString strBuff; // r1+0x8
}
// Range: 0x8048F640 -> 0x8048F8F0
class GASStringNode * GASStringManager::CreateStringNode(class GASStringManager * this /* r25 */, char * pstr1 /* r31 */, unsigned long l1 /* r30 */, char * pstr2 /* r29 */, unsigned long l2 /* r28 */) {
    // Local variables
    class GASStringNode * pnode; // r1+0xC
    unsigned long length; // r26
}
