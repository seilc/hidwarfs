/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
*/
char buffer[16]; // size: 0x10, address: 0x0
char buffer[16]; // size: 0x10, address: 0x0
float scale; // size: 0x4, address: 0x0
// total size: 0x14
struct /* @anon2 */ {} CUniqueAmountGreaterThanX::__vtable; // size: 0x14, address: 0x60A2B0
// total size: 0x14
struct /* @anon4 */ {} BasicInform::__vtable; // size: 0x14, address: 0x0
unsigned int gActiveHeap; // size: 0x4, address: 0x611E6C
// total size: 0x14
struct /* @anon1 */ {} CHappensXTimesWithinY::__vtable; // size: 0x14, address: 0x60A2D0
// total size: 0x14
struct /* @anon6 */ {} CXNumUniqueWithinY::__vtable; // size: 0x14, address: 0x60A2F0
// total size: 0x14
struct /* @anon5 */ {} CUniqueAmountLessThanX::__vtable; // size: 0x14, address: 0x60A310
// total size: 0x14
struct /* @anon0 */ {} CTrueForYLong::__vtable; // size: 0x14, address: 0x60A330
// total size: 0x14
struct /* @anon3 */ {} CActiveEvent::__vtable; // size: 0x14, address: 0x60A350
// total size: 0x8
class testerPlayer {
    // Members
public:
    signed int firstParam; // offset 0x0, size 0x4
    float secondParam; // offset 0x4, size 0x4
};
// total size: 0xC
class CTrueForYLong : public BasicInform {
    // Members
public:
    float m_fTruthStartTime; // offset 0x4, size 0x4
    void * m_Uniqueness; // offset 0x8, size 0x4
};
// total size: 0xC
class CUniqueAmountGreaterThanX : public BasicInform {
    // Members
public:
    float m_fDuration; // offset 0x4, size 0x4
    signed int m_nUniqueAmount; // offset 0x8, size 0x4
};
// total size: 0x30
class CHappensXTimesWithinY : public BasicInform {
    // Members
public:
    float m_fHappenTimeCountdown[10]; // offset 0x4, size 0x28
    signed int m_nHappenedCount; // offset 0x2C, size 0x4
};
// total size: 0x58
class CXNumUniqueWithinY : public BasicInform {
    // Members
public:
    void * m_Uniqueness[10]; // offset 0x4, size 0x28
    float m_fHitTimeCountdown[10]; // offset 0x2C, size 0x28
    signed int m_nUniqueCount; // offset 0x54, size 0x4
};
// total size: 0x4
class BasicInform {};
// total size: 0x14
struct /* @anon0 */ {};
// total size: 0xC
class CUniqueAmountLessThanX : public BasicInform {
    // Members
public:
    float m_fDuration; // offset 0x4, size 0x4
    signed int m_nUniqueAmount; // offset 0x8, size 0x4
};
// total size: 0x14
struct /* @anon1 */ {};
// total size: 0x44
class xOneLiner {
    // Members
public:
    unsigned int m_soundGroupNameHash; // offset 0x0, size 0x4
    float m_fSoundStartDelay; // offset 0x4, size 0x4
    float m_fTimeSpan; // offset 0x8, size 0x4
    float m_fTimeLastPlayed; // offset 0xC, size 0x4
    unsigned int m_uNumPlays; // offset 0x10, size 0x4
    float m_fDelayBetweenPlays; // offset 0x14, size 0x4
    float m_fProbability; // offset 0x18, size 0x4
    float m_fDefaultDuration; // offset 0x1C, size 0x4
    float m_fLastDuration; // offset 0x20, size 0x4
    unsigned int m_uMaxPlays; // offset 0x24, size 0x4
    enum iSndGroupHandle m_soundGroupHandle; // offset 0x28, size 0x4
    class xOneLinerManager * m_pOLManager; // offset 0x2C, size 0x4
    signed short m_eventType; // offset 0x30, size 0x2
    signed short m_bPlaysInMusicChannel; // offset 0x32, size 0x2
    class BasicInform * m_pData; // offset 0x34, size 0x4
    enum ePlayerType m_playerType; // offset 0x38, size 0x4
    class testerPlayer m_testerData; // offset 0x3C, size 0x8
};
// total size: 0x14
struct /* @anon2 */ {};
enum iSndGroupHandle {
};
// total size: 0x14
struct /* @anon3 */ {};
// total size: 0x14
struct /* @anon4 */ {};
// total size: 0x24
class xOneLinerManager {
    // Members
public:
    class xOneLiner * m_aOneLinerPlayers; // offset 0x0, size 0x4
    signed int m_iNextSound; // offset 0x4, size 0x4
    enum iSndGroupHandle m_currentSoundID; // offset 0x8, size 0x4
    float m_pauseBetweenSounds; // offset 0xC, size 0x4
    float m_lastUpdateTime; // offset 0x10, size 0x4
    float m_lastPlayedTime; // offset 0x14, size 0x4
    float m_queuedSoundTimer; // offset 0x18, size 0x4
    unsigned short m_NumEventTypes; // offset 0x1C, size 0x2
    unsigned short m_NumOLPlayers; // offset 0x1E, size 0x2
    unsigned short m_nextSoundPriority; // offset 0x20, size 0x2
    unsigned short m_priorityFilter; // offset 0x22, size 0x2
};
// total size: 0x8
class CActiveEvent : public BasicInform {
    // Members
public:
    float m_fDuration; // offset 0x4, size 0x4
};
// total size: 0x14
struct /* @anon5 */ {};
enum ePlayerType {
    eALWAYS = 0,
    eCOUNTER = 1,
    eCHECKER = 2,
    eTESTER = 3,
    ePLAYER_TYPE_SIZE = 4,
};
// total size: 0x14
struct /* @anon6 */ {};

/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029AC40 -> 0x0029AD70
*/
// Range: 0x29AC40 -> 0x29AD70
// this: r17
unsigned char xOneLiner::UpdatePlaySound(float currentTime /* r29+0x40 */, float fRollsPerSecond /* r20 */) {
    /* anonymous block */ {
        // Range: 0x29AC40 -> 0x29AD70
        unsigned char play; // r16
        unsigned char roll; // r2
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029AD70 -> 0x0029AEE4
*/
// Range: 0x29AD70 -> 0x29AEE4
// this: r16
unsigned char xOneLiner::Init() {
    /* anonymous block */ {
        // Range: 0x29AD70 -> 0x29AEE4
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029AEF0 -> 0x0029AEFC
*/
// Range: 0x29AEF0 -> 0x29AEFC
// this: r2
void CUniqueAmountGreaterThanX::Inform(float fDuration /* r29 */, void * uniqueness /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29AEF0 -> 0x29AEFC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029AF00 -> 0x0029AF48
*/
// Range: 0x29AF00 -> 0x29AF48
// this: r2
unsigned char CUniqueAmountGreaterThanX::Age(float fHowLong /* r29 */) {
    /* anonymous block */ {
        // Range: 0x29AF00 -> 0x29AF48
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029AF50 -> 0x0029AF60
*/
// Range: 0x29AF50 -> 0x29AF60
// this: r2
unsigned char CUniqueAmountGreaterThanX::Test(class testerPlayer & data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29AF50 -> 0x29AF60
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029AF60 -> 0x0029AFE4
*/
// Range: 0x29AF60 -> 0x29AFE4
// this: r2
void CHappensXTimesWithinY::Inform(class testerPlayer & data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29AF60 -> 0x29AFE4
        signed int replaceIndex; // r8
        float leastTimeLeft; // r1
        signed int i; // r7
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029AFF0 -> 0x0029B058
*/
// Range: 0x29AFF0 -> 0x29B058
// this: r2
unsigned char CHappensXTimesWithinY::Age(float fHowLong /* r29 */) {
    /* anonymous block */ {
        // Range: 0x29AFF0 -> 0x29B058
        signed int i; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B060 -> 0x0029B074
*/
// Range: 0x29B060 -> 0x29B074
// this: r2
unsigned char CHappensXTimesWithinY::Test(class testerPlayer & data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29B060 -> 0x29B074
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B080 -> 0x0029B148
*/
// Range: 0x29B080 -> 0x29B148
// this: r2
void CXNumUniqueWithinY::Inform(class testerPlayer & data /* r2 */, void * uniqueness /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29B080 -> 0x29B148
        signed int replaceIndex; // r10
        float leastTimeLeft; // r2
        signed int i; // r9
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B150 -> 0x0029B1C0
*/
// Range: 0x29B150 -> 0x29B1C0
// this: r2
unsigned char CXNumUniqueWithinY::Age(float fHowLong /* r29 */) {
    /* anonymous block */ {
        // Range: 0x29B150 -> 0x29B1C0
        signed int i; // r5
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B1C0 -> 0x0029B1D0
*/
// Range: 0x29B1C0 -> 0x29B1D0
// this: r2
unsigned char CXNumUniqueWithinY::Test(class testerPlayer & data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29B1C0 -> 0x29B1D0
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B1D0 -> 0x0029B1DC
*/
// Range: 0x29B1D0 -> 0x29B1DC
// this: r2
void CUniqueAmountLessThanX::Inform(float fDuration /* r29 */, void * uniqueness /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29B1D0 -> 0x29B1DC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B1E0 -> 0x0029B228
*/
// Range: 0x29B1E0 -> 0x29B228
// this: r2
unsigned char CUniqueAmountLessThanX::Age(float fHowLong /* r29 */) {
    /* anonymous block */ {
        // Range: 0x29B1E0 -> 0x29B228
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B230 -> 0x0029B240
*/
// Range: 0x29B230 -> 0x29B240
// this: r2
unsigned char CUniqueAmountLessThanX::Test(class testerPlayer & data /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29B230 -> 0x29B240
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B240 -> 0x0029B29C
*/
// Range: 0x29B240 -> 0x29B29C
// this: r16
void CTrueForYLong::Inform(void * uniqueness /* r2 */) {
    /* anonymous block */ {
        // Range: 0x29B240 -> 0x29B29C
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B2A0 -> 0x0029B2AC
*/
// Range: 0x29B2A0 -> 0x29B2AC
// this: r2
unsigned char CTrueForYLong::Age() {
    /* anonymous block */ {
        // Range: 0x29B2A0 -> 0x29B2AC
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B2B0 -> 0x0029B31C
*/
// Range: 0x29B2B0 -> 0x29B31C
// this: r17
unsigned char CTrueForYLong::Test(class testerPlayer & data /* r16 */) {
    /* anonymous block */ {
        // Range: 0x29B2B0 -> 0x29B31C
        float fTrueForSeconds; // r1
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B320 -> 0x0029B328
*/
// Range: 0x29B320 -> 0x29B328
// this: r2
void CActiveEvent::Inform(float fDuration /* r29 */) {
    /* anonymous block */ {
        // Range: 0x29B320 -> 0x29B328
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B330 -> 0x0029B378
*/
// Range: 0x29B330 -> 0x29B378
// this: r2
unsigned char CActiveEvent::Age(float fHowLong /* r29 */) {
    /* anonymous block */ {
        // Range: 0x29B330 -> 0x29B378
    }
}


/*
    Compile unit: C:\TestBuild\in\Core\x\xOneLinerPlayer.cpp
    Producer: MW MIPS C Compiler
    Language: C++
    Code range: 0x0029B380 -> 0x0029B388
*/
// Range: 0x29B380 -> 0x29B388
unsigned char Test() {
    /* anonymous block */ {
        // Range: 0x29B380 -> 0x29B388
    }
}


