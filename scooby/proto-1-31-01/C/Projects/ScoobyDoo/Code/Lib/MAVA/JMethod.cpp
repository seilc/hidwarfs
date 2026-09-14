/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JMethod.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
class JExecutableDescriptor gExecutableDescriptor; // size: 0x38, address: 0x44FEC0
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
// total size: 0x4
class /* @class */ {
    // Members
public:
    unsigned int word1; // offset 0x0, size 0x4
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

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JMethod.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A4E30 -> 0x003A4FA4
*/
// Range: 0x3A4E30 -> 0x3A4FA4
signed int JExecutableClassGetParentDataWords(class JExecutableClass * inst /* r18 */) {
    /* anonymous block */ {
        // Range: 0x3A4E30 -> 0x3A4FA4
        class JExecutableClass * file; // r16
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JMethod.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A4FB0 -> 0x003A50C0
*/
// Range: 0x3A4FB0 -> 0x3A50C0
signed int JExecutableClassGetDataWords(class JExecutableClass * inst /* r17 */) {
    /* anonymous block */ {
        // Range: 0x3A4FB0 -> 0x3A50C0
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JMethod.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A50C0 -> 0x003A5258
*/
// Range: 0x3A50C0 -> 0x3A5258
class JExecutableMethod * JExecutableClassResolveMethodByStringIndex(class JExecutableClass * inst /* r2 */, unsigned int nameIndex /* r2 */, unsigned int descrIndex /* r2 */) {
    /* anonymous block */ {
        // Range: 0x3A50C0 -> 0x3A5258
        signed int i; // r7
        class JExecutableMethod * executableMethods; // r3
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Lib\MAVA\JMethod.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x003A5260 -> 0x003A5544
*/
// Range: 0x3A5260 -> 0x3A5544
class JExecutableMethod * JExecutableClassResolveMethod(class JExecutableClass * inst /* r18 */, char * name /* r20 */, char * descr /* r19 */) {
    /* anonymous block */ {
        // Range: 0x3A5260 -> 0x3A5544
        signed int i; // r17
        class JExecutableMethod * executableMethods; // r16
    }
}


