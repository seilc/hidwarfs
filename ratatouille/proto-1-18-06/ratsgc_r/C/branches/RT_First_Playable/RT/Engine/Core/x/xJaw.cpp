/*
    Compile unit: C:\branches\RT_First_Playable\RT\Engine\Core\x\xJaw.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80074808 -> 0x80074A78
*/
enum xJawFlags {
    exJawFlags_None = 0,
    exJawFlags_Remy = 1,
};
// total size: 0x8
struct xJawHeader {
    // Members
    unsigned int numSamples; // offset 0x0, size 0x4
    enum xJawFlags flags; // offset 0x4, size 0x4
};
// total size: 0xC
class xJawData {
    // Functions
    enum xJawSpeaker GetIndex(int index, float & value);

    enum xJawSpeaker Eval(float time, float & jawValue);

    // Members
    struct xJawHeader header; // offset 0x0, size 0x8
    unsigned char samples[1]; // offset 0x8, size 0x1
};
// total size: 0xC
struct xJawDataTable {
    // Members
    unsigned int soundHashID; // offset 0x0, size 0x4
    unsigned int dataStart; // offset 0x4, size 0x4
    unsigned int dataLength; // offset 0x8, size 0x4
};
// Range: 0x80074808 -> 0x800748F4
class xJawData * xJawData::Find(unsigned int soundID /* r28 */) {
    // Local variables
    int i; // r29
    int numJawTables; // r0
    unsigned int j; // r4
    void * data; // r0
    unsigned int jawcount; // r5
    struct xJawDataTable * tbl; // r6
    void * rawdata; // r7
}

enum xJawSpeaker {
    exJawSpeaker_Remy = 0,
    exJawSpeaker_Count = 1,
};
// Range: 0x800748F4 -> 0x8007493C
// this: r0
enum xJawSpeaker xJawData::GetIndex(int index /* r0 */, float & value /* r0 */) {}

static char __FUNCTION__[5]; // size: 0x5, address: 0x80BFD0C8
// Range: 0x8007493C -> 0x80074A78
// this: r30
enum xJawSpeaker xJawData::Eval(float time /* f31 */, float & jawValue /* r29 */) {
    // Local variables
    float lerp; // f31
    unsigned int idx; // r31
    float thisFrameValue; // r1+0xC
    float nextFrameValue; // r1+0x8
    enum xJawSpeaker thisFrameSpeaker; // r30

    // References
    // -> static char __FUNCTION__[5];
}


