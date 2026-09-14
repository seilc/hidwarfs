/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xRule.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char vAssertBuf2[128]; // size: 0x80, address: 0xAFF460
class XStreamHeader currentHeader; // size: 0x4698, address: 0x4AD860
// total size: 0x8
class xRule {
    // Members
public:
    class iRuleResource * m_resource; // offset 0x0, size 0x4
    void * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x8
class iConditionRuntime {
    // Members
public:
    class xCondition * m_operand; // offset 0x0, size 0x4
    unsigned short m_match; // offset 0x4, size 0x2
    unsigned short m_trigger; // offset 0x6, size 0x2
};
// total size: 0x8
class xCondition {
    // Members
public:
    class iConditionResource * m_resource; // offset 0x0, size 0x4
    class iConditionRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x4698
class XStreamHeader {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int versionID; // offset 0x4, size 0x4
    unsigned char month; // offset 0x8, size 0x1
    unsigned char day; // offset 0x9, size 0x1
    unsigned char hour; // offset 0xA, size 0x1
    unsigned char minute; // offset 0xB, size 0x1
    unsigned int mdsOffset; // offset 0xC, size 0x4
    unsigned int mdsLength; // offset 0x10, size 0x4
    class tagXStreamMDSDirectory directory; // offset 0x14, size 0x3E84
    char safety[2048]; // offset 0x3E98, size 0x800
};
// total size: 0x4
class iActionRuntime {
    // Members
public:
    class xAction * m_and; // offset 0x0, size 0x4
};
// total size: 0x8
class xAction {
    // Members
public:
    class iActionResource * m_resource; // offset 0x0, size 0x4
    class iActionRuntime * m_runtime; // offset 0x4, size 0x4
};
// total size: 0x8
class iActionResource {
    // Members
public:
    unsigned char m_cmdType; // offset 0x0, size 0x1
    unsigned char m_cmd; // offset 0x1, size 0x1
    unsigned short pad; // offset 0x2, size 0x2
    unsigned int m_cmdParameter; // offset 0x4, size 0x4
};
// total size: 0x10
class tagXStreamDirectoryEntry {
    // Members
public:
    unsigned int id; // offset 0x0, size 0x4
    unsigned int type; // offset 0x4, size 0x4
    unsigned int offset; // offset 0x8, size 0x4
    unsigned int length; // offset 0xC, size 0x4
};
// total size: 0xC
class iConditionResource {
    // Members
public:
    unsigned char m_osFlags; // offset 0x0, size 0x1
    unsigned char m_onFlags; // offset 0x1, size 0x1
    unsigned char m_whoFlags; // offset 0x2, size 0x1
    unsigned char m_operator; // offset 0x3, size 0x1
    unsigned char m_cmdType; // offset 0x4, size 0x1
    unsigned char m_cmd; // offset 0x5, size 0x1
    unsigned short pad; // offset 0x6, size 0x2
    unsigned int m_cmdParameter; // offset 0x8, size 0x4
};
// total size: 0x10
class iRuleResource {
    // Members
public:
    unsigned int m_actionCount; // offset 0x0, size 0x4
    class xAction * m_action; // offset 0x4, size 0x4
    unsigned int m_conditionCount; // offset 0x8, size 0x4
    class xCondition * m_condition; // offset 0xC, size 0x4
};
// total size: 0x3E84
class tagXStreamMDSDirectory {
    // Members
public:
    unsigned int count; // offset 0x0, size 0x4
    class tagXStreamDirectoryEntry directory[1000]; // offset 0x4, size 0x3E80
};

/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xRule.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00339CA0 -> 0x00339FA4
*/
// Range: 0x339CA0 -> 0x339FA4
void xRuleExecute(class xRule * rule /* r16 */) {
    /* anonymous block */ {
        // Range: 0x339CA0 -> 0x339FA4
        unsigned int i; // r17
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xRule.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x00339FB0 -> 0x0033A2A4
*/
// Range: 0x339FB0 -> 0x33A2A4
void xRuleEvaluate(class xRule * rule /* r16 */) {
    /* anonymous block */ {
        // Range: 0x339FB0 -> 0x33A2A4
    }
}


/*
    Compile unit: C:\Projects\ScoobyDoo\Code\Engine\x\xRule.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0033A2B0 -> 0x0033A5CC
*/
// Range: 0x33A2B0 -> 0x33A5CC
void xRuleGameEvent(class xRule * rule /* r20 */, unsigned int eventWho /* r19 */, unsigned int eventType /* r18 */, unsigned int eventCmd /* r17 */, unsigned int eventData /* r16 */) {
    /* anonymous block */ {
        // Range: 0x33A2B0 -> 0x33A5CC
    }
}


