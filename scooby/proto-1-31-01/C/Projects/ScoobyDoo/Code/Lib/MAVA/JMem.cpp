/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JMem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
unsigned char MemoryPoolDataPool[37888]; // size: 0x9400, address: 0xB071F0
unsigned int MemoryPoolAllocated; // size: 0x4, address: 0x4A4FC8
unsigned char MemoryPoolLevelPool[2560]; // size: 0xA00, address: 0xB105F0
unsigned int MemoryPoolLevelAllocated; // size: 0x4, address: 0x4A4FCC
class JExecutableDescriptor gExecutableDescriptor; // size: 0x38, address: 0x44FEC0
signed int jumpBuffer[11]; // size: 0x2C, address: 0xB06DD0
signed int jumpBuffer[11]; // size: 0x2C, address: 0xB06DD0
// total size: 0x4
class /* @class */ {
    // Members
public:
    unsigned int word1; // offset 0x0, size 0x4
};
// total size: 0x38
class JExecutableDescriptor {
    // Members
public:
    unsigned int fieldPoolUsed; // offset 0x0, size 0x4
    unsigned int methodPoolUsed; // offset 0x4, size 0x4
    unsigned int classCount; // offset 0x8, size 0x4
    unsigned int codePoolUsed; // offset 0xC, size 0x4
    unsigned int stringPoolUsed; // offset 0x10, size 0x4
    unsigned int constantValuePoolUsed; // offset 0x14, size 0x4
    unsigned int constantMapPoolUsed; // offset 0x18, size 0x4
    class JExecutableField * fieldPool; // offset 0x1C, size 0x4
    class JExecutableMethod * methodPool; // offset 0x20, size 0x4
    class JExecutableClass * classList; // offset 0x24, size 0x4
    unsigned char * codePoolU8; // offset 0x28, size 0x4
    unsigned char * stringPool; // offset 0x2C, size 0x4
    unsigned int * constantValuePool; // offset 0x30, size 0x4
    signed short * constantMapPool; // offset 0x34, size 0x4
};
// total size: 0x18
class JExecutableMethod {
    // Members
public:
    unsigned short methodNameIndex; // offset 0x0, size 0x2
    unsigned short descriptorIndex; // offset 0x2, size 0x2
    unsigned short accessFlags; // offset 0x4, size 0x2
    signed char parameterWordCount; // offset 0x6, size 0x1
    signed char isExternal; // offset 0x7, size 0x1
    unsigned short specialFunctionFlags; // offset 0x8, size 0x2
    signed short executableClassIndex; // offset 0xA, size 0x2
    signed short externalRecordIndex; // offset 0xC, size 0x2
    unsigned short maxStack; // offset 0xE, size 0x2
    unsigned short maxLocals; // offset 0x10, size 0x2
    unsigned short codeLength; // offset 0x12, size 0x2
    signed int codeIndexInPool; // offset 0x14, size 0x4
};
// total size: 0x14
class JExecutableClass {
    // Members
public:
    signed short classNameIndex; // offset 0x0, size 0x2
    signed short constantIndex; // offset 0x2, size 0x2
    signed short resolvedParentDataWords; // offset 0x4, size 0x2
    signed short resolvedDataWords; // offset 0x6, size 0x2
    signed short executableMethodIndexInPool; // offset 0x8, size 0x2
    signed short executableFieldIndexInPool; // offset 0xA, size 0x2
    unsigned short executableMethodsCount; // offset 0xC, size 0x2
    unsigned short executableFieldsCount; // offset 0xE, size 0x2
    signed short superClassIndex; // offset 0x10, size 0x2
    unsigned char myIndex; // offset 0x12, size 0x1
    unsigned char amInitialized; // offset 0x13, size 0x1
};
// total size: 0x8
class JExecutableField {
    // Members
public:
    // total size: 0x4
    class /* @class */ {
        // Members
    public:
        unsigned int word1; // offset 0x0, size 0x4
    } value; // offset 0x0, size 0x4
    signed short resolvedOffset; // offset 0x4, size 0x2
    unsigned short resolvedWords; // offset 0x6, size 0x2
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JMem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A4C20 -> 0x003A4D20
*/
// Range: 0x3A4C20 -> 0x3A4D20
void * MemoryPoolLevelAllocate(signed int unitCount /* r17 */, signed int unitSize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A4C20 -> 0x3A4D20
        void * retVal; // r2
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JMem.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A4D20 -> 0x003A4E24
*/
// Range: 0x3A4D20 -> 0x3A4E24
void * MemoryPoolAllocate(signed int unitCount /* r17 */, signed int unitSize /* r16 */) {
    /* anonymous block */ {
        // Range: 0x3A4D20 -> 0x3A4E24
        void * retVal; // r2
    }
}


