/*
    Compile unit: C:\RatsAutobuild\rt\Engine\Core\x\xJaw.cpp
    Producer: MW EABI PPC C-Compiler
    Language: C++
    Code range: 0x80089A28 -> 0x80089C9C
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
// Range: 0x80089A28 -> 0x80089AF8
class xJawData * xJawData::Find(unsigned int soundID /* r26 */) {
    // Local variables
    int i; // r29
    int numJawTables; // r25
    unsigned int j; // r31
    void * data; // r28
    unsigned int jawcount; // r27
    struct xJawDataTable * tbl; // r30
    void * rawdata; // r24
}

enum xJawSpeaker {
    exJawSpeaker_Remy = 0,
    exJawSpeaker_Count = 1,
};
// Range: 0x80089AF8 -> 0x80089B44
// this: r3
enum xJawSpeaker xJawData::GetIndex(int index /* r4 */, float & value /* r5 */) {}

static char __FUNCTION__[5]; // size: 0x5, address: 0x80D5FC28
// Range: 0x80089B44 -> 0x80089C9C
// this: r30
enum xJawSpeaker xJawData::Eval(float time /* f31 */, float & jawValue /* r31 */) {
    // Local variables
    float lerp; // f30
    unsigned int idx; // r29
    float thisFrameValue; // r1+0xC
    float nextFrameValue; // r1+0x8
    enum xJawSpeaker thisFrameSpeaker; // r28

    // References
    // -> static char __FUNCTION__[5];
}


